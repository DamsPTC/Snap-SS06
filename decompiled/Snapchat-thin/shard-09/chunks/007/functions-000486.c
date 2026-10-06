/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10707efa0; end: 10707f013; -[SCChatAttachmentLogger initWithUserTrackedLogger:] */

undefined1 * FUN_10707efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8818;
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



/* Entry: 10707f014; end: 10707f0d7; -[SCChatAttachmentLogger logSCAChatMediaCardActionWithMediaType:correspondentId:mediaActionType:actionResponse:] */

void FUN_10707f014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d44c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1c5440();
  func_0x00010c1c4080(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c161cc0(puVar1,param_2,param_6);
  func_0x00010c184460(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10707f0d8; end: 10707f0e3; -[SCChatAttachmentLogger .cxx_destruct] */

void FUN_10707f0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707f0e4; end: 10707f187; -[SCPhoneNumberAttachmentHandler initWithUiContainer:logger:] */

undefined1 *
FUN_10707f0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8820;
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



/* Entry: 10707f188; end: 10707f203; -[SCPhoneNumberAttachmentHandler openPhoneNumber:otherParticipantId:uiContainer:] */

void FUN_10707f188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0e94e0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10707f204; end: 10707f80b; -[SCPhoneNumberAttachmentHandler openPhoneNumber:otherParticipantId:] */

void FUN_10707f204(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined **unaff_x27;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126aed98;
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_a8,param_1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e99c38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e99c38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b10a0;
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10707f80c;
  puStack_d0 = &UNK_1108d2968;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_3);
  lStack_c8 = param_3;
  _objc_retain(puVar3);
  puStack_c0 = puVar3;
  _objc_retain(param_4);
  puVar2 = puVar1;
  uStack_b8 = param_4;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b10a0;
  ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
  puVar11 = (undefined1 *)0x0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(ppuVar5);
  puVar7 = PTR_PTR_1126d44d0;
  func_0x00010bf2c600();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar7 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fd00(param_1);
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110de80b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de80b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e99c58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e99c58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar7 = PTR_PTR_1126b10a0;
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10707f854;
    puStack_108 = &UNK_110917678;
    _objc_retain(param_3);
    lStack_100 = param_3;
    _objc_copyWeak(auStack_f0,auStack_a8);
    _objc_retain(param_4);
    puVar9 = puVar7;
    uStack_f8 = param_4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b10a0;
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x10707f8ac;
    puStack_140 = &UNK_110917678;
    _objc_retain(param_3);
    unaff_x27 = &puStack_158;
    puVar11 = auStack_a8;
    lStack_138 = param_3;
    _objc_copyWeak(auStack_128,puVar11);
    _objc_retain(param_4);
    puVar10 = puVar7;
    uStack_130 = param_4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar9;
    puStack_90 = puVar10;
    puStack_88 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fd00(param_1);
    func_0x00010be4fd00(param_1);
    func_0x00010be4fd00(param_1);
    _objc_release(puVar10);
    _objc_release(uStack_130);
    _objc_destroyWeak(auStack_128);
    _objc_release(lStack_138);
    _objc_release(puVar9);
    _objc_release(uStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(lStack_100);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c10c360();
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(lStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  func_0x00010bf82fe0(puVar11);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdc8ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10707f80c; end: 10707f84b;  */

void FUN_10707f80c(long param_1,undefined8 param_2)

{
  func_0x00010bf82fe0(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10707f84c; end: 10707f853;  */

void FUN_10707f84c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 10707f854; end: 10707f903;  */

void FUN_10707f854(long param_1,undefined8 param_2)

{
  func_0x00010bf82fe0(param_2);
  func_0x00010bf28260(PTR_PTR_1126d44d0);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4fd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10707f904; end: 10707f90f; -[SCPhoneNumberAttachmentHandler dismissIfNecessary] */

void FUN_10707f904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10707f910; end: 10707f98b; -[SCPhoneNumberAttachmentHandler _logActionWithMediaActionType:otherParticipantId:actionResponse:] */

void FUN_10707f910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae9c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10707f98c; end: 10707fbaf; -[SCPhoneNumberAttachmentHandler _addToContacts:formattedPhoneNumber:otherParticipantId:] */

void FUN_10707f98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c04e8c0();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___CNLabeledValue_1126d44d8;
  func_0x00010c087900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CNMutableContact_1126d44e0;
  _objc_alloc_init(PTR__OBJC_CLASS___CNMutableContact_1126d44e0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db220(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___CNContactViewController_1126d44e8;
  func_0x00010c29c240(PTR__OBJC_CLASS___CNContactViewController_1126d44e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  func_0x00010c1815a0(puVar4);
  func_0x00010c18b5e0(puVar4);
  puVar6 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  _objc_alloc(PTR__OBJC_CLASS___UIBarButtonItem_1126b0670);
  func_0x00010bff6a60();
  puVar7 = puVar4;
  func_0x00010c0d68c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee0a0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  func_0x00010be4fd00(param_1);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10707fbb0; end: 10707fbbb; -[SCPhoneNumberAttachmentHandler contactViewController:didCompleteWithContact:] */

void FUN_10707fbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10707fbbc; end: 10707fbeb; -[SCPhoneNumberAttachmentHandler .cxx_destruct] */

void FUN_10707fbbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10707fbec; end: 10707fe5b; -[SCURLAttachmentHandler initWithWebBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:deepLinkHandler:webBrowserDeepLinkHandler:logger:uiContainer:circumstanceEngine:modularSpotlightLauncher:blizzardLogger:newScbInChatEnabled:] */

undefined8 *
FUN_10707fbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126f8828;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x000108f4a7bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_13;
  }
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



/* Entry: 10707fe5c; end: 10707ff47; -[SCURLAttachmentHandler openURL:senderUserId:otherParticipantId:] */

void FUN_10707fe5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c082da0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    func_0x00010be6cf40(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x38));
  }
  else {
    func_0x00010be6d080(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae9c0();
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10707ff48; end: 10707ff4b; -[SCURLAttachmentHandler dismissIfNecessary] */

void FUN_10707ff48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWebBrowser_11255e878);
  return;
}



/* Entry: 10707ff4c; end: 10707ff4f; -[SCURLAttachmentHandler webBrowserDidDismiss:] */

void FUN_10707ff4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWebBrowser_11255e878);
  return;
}



/* Entry: 10707ff50; end: 107080047; -[SCURLAttachmentHandler launchModularSpotlightWithPresentViewController:pageSessionId:] */

void FUN_10707ff50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3530;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c68b8;
  func_0x00010c0d0ac0(PTR_PTR_1126c68b8,param_2,0,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bae0();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107080048; end: 10708004b; -[SCURLAttachmentHandler didPresentWithSpotlightCTA:pageSessionId:] */

void FUN_107080048(void)

{
  return;
}



/* Entry: 10708004c; end: 107080093; -[SCURLAttachmentHandler webBrowserScopeDidComplete] */

void FUN_10708004c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107080094; end: 1070800df; -[SCURLAttachmentHandler enableSpotlightCta] */

long FUN_107080094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfe4420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb3860(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1070800e0; end: 1070800e3; -[SCURLAttachmentHandler presentModularSpotlightWithPresentingViewController:pageSessionId:] */

void FUN_1070800e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_launchModularSpotlightWithPresen_1126008c0);
  return;
}



/* Entry: 1070800e4; end: 107080117; -[SCURLAttachmentHandler removeSpotlightScope:] */

void FUN_1070800e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107080118; end: 10708015f; -[SCURLAttachmentHandler _dismissWebBrowser] */

void FUN_107080118(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107080160; end: 10708046b; -[SCURLAttachmentHandler _openBrowserForUrl:uiContainer:] */

void FUN_107080160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10708046c;
    puStack_88 = &UNK_110848218;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar1 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb3860(param_1);
    puVar4 = puVar3;
    func_0x00010c2ad0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar2 = puVar1;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_3);
    func_0x00010c297260(puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf22ba0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10708046c; end: 10708052b;  */

void FUN_10708046c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10708052c;
    puStack_40 = &UNK_11098a250;
    lStack_38 = lVar1;
    func_0x00010bf24620(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),4,lVar1,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10708052c; end: 107080537;  */

void FUN_10708052c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c208670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSpotlightDelegate__11265fbc0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107080538; end: 107080577;  */

void FUN_107080538(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107080578; end: 1070806a7; -[SCURLAttachmentHandler _openDeepLinkWithUrl:senderUserId:] */

void FUN_107080578(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110f83d78);
  func_0x00010c1d0640(puVar2,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e99c98);
  uVar4 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e12b38);
  _objc_release(param_4);
  lVar3 = param_3;
  if ((int)uVar4 != 0) {
    lVar3 = param_1;
    func_0x00010bdc8960(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1070806a8; end: 1070806df;  */

void FUN_1070806a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0be290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchHandled_askedToDeferUntilUs_11260d2b8,
             &PTR___NSConcreteGlobalBlock_11098a2a0,&PTR___NSConcreteGlobalBlock_11098a2c0,
             &PTR___NSConcreteGlobalBlock_11098a2e0,&PTR___NSConcreteGlobalBlock_11098a300);
  return;
}



/* Entry: 1070806e0; end: 1070806e7; -[SCURLAttachmentHandler _shouldEnableSpotlightCtaForHost:] */

void FUN_1070806e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 1070806e8; end: 1070807fb; -[SCURLAttachmentHandler _addTeamSnapchatQueryParamToURL:] */

void FUN_1070806e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c25d700(PTR____kCFBooleanTrue_11034ab68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d4c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f83ad8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010c1e6460(puVar1,param_2,puVar3);
  puVar2 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070807fc; end: 1070808a3; -[SCURLAttachmentHandler .cxx_destruct] */

void FUN_1070807fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1070808a4; end: 107080947; +[SCPhoneNumberHelpers _formatPhoneNumberForCalling:] */

void FUN_1070808a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110e99cb8,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110dc0578,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107080948; end: 10708098b; +[SCPhoneNumberHelpers canCallPhone] */

undefined * FUN_107080948(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10708098c; end: 107080a4b; +[SCPhoneNumberHelpers callPhone:] */

void FUN_10708098c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010be18aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e99cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107080a4c; end: 107080b0b; +[SCPhoneNumberHelpers smsPhone:] */

void FUN_107080a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010be18aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e99cf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107080b0c; end: 107080b7f; -[SCSpamServices initWithURLSpamProvider:] */

undefined1 * FUN_107080b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8830;
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



/* Entry: 107080b80; end: 107080b87; -[SCSpamServices urlSpamProvider] */

undefined8 FUN_107080b80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107080b88; end: 107080fcb; -[SCSpamServices .cxx_destruct] */

void FUN_107080b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107080fcc; end: 10708101f;  */

undefined8 FUN_107080fcc(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010bfb8b20(), 9 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(&UNK_10de1e970 + uVar1 * 8);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107081020; end: 107081073;  */

void FUN_107081020(long param_1)

{
  if (param_1 - 1U < 2) {
    func_0x000107081d1c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 - 3U < 2) {
    func_0x000107081d34();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107081d4c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107081074; end: 10708107b; +[SCGroupChatAddButtonView pillHeight] */

undefined8 FUN_107081074(void)

{
  return 0x4038000000000000;
}



/* Entry: 10708107c; end: 10708117f; +[SCGroupChatAddButtonView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10708107c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126cc8b8;
  _objc_opt_class(PTR_PTR_1126cc8b8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == 0) || (uVar3 = param_5, FUN_107080fcc(), uVar3 == 0)) {
    lVar5 = *(long *)PTR__CGSizeZero_110347620;
    lVar6 = *(long *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    FUN_107081020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c23ba40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar4);
    lVar5 = (long)((double)(long)param_1 + 12.0 + 24.0);
    lVar6 = (long)param_2;
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 107081180; end: 1070811ff; -[SCGroupChatAddButtonView init] */

undefined1 * FUN_107081180(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8838;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3a5a0(puVar1);
    func_0x00010bdee920(puVar1);
    func_0x00010bdf4a20(puVar1);
    func_0x00010be3cf60(puVar1);
    func_0x00010be3cfa0(puVar1);
    func_0x00010bea9040(puVar1);
    func_0x00010bea9820(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107081200; end: 1070812bb; -[SCGroupChatAddButtonView _initStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081200(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar3 = (long)_DAT_112763ad8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c207380(0x4010000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1b9b80(0x4018000000000000,0,0x4018000000000000,0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1b9ba0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 1070812bc; end: 10708133b; -[SCGroupChatAddButtonView _createIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070812bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar3 = (long)_DAT_112763adc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c066590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763ad8),
             PTR_s_insertArrangedSubview_atIndex__1125f7370,*(undefined8 *)(param_1 + lVar3),0);
  return;
}



/* Entry: 10708133c; end: 107081407; -[SCGroupChatAddButtonView _createTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10708133c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar3 = (long)_DAT_112763ae0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763ad8),PTR_s_addArrangedSubview__11259b500,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107081408; end: 107081417; -[SCGroupChatAddButtonView _installStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + _DAT_112763ad8));
  return;
}



/* Entry: 107081418; end: 10708142b; -[SCGroupChatAddButtonView _installTapGesture] */

void FUN_107081418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addTarget_action_forControlEvent_11259c900,param_1,
             PTR_s__onTapAddButton_1125373e8,0x40);
  return;
}



/* Entry: 10708142c; end: 107081463; -[SCGroupChatAddButtonView pointInside:withEvent:] */

void FUN_10708142c(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 107081464; end: 10708165f; -[SCGroupChatAddButtonView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081464(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc8b8;
  _objc_opt_class(PTR_PTR_1126cc8b8);
  puVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
LAB_107081574:
    func_0x00010bde10c0(param_1);
  }
  else {
    lVar6 = (long)_DAT_112763ae4;
    puVar5 = *(undefined **)(param_1 + lVar6);
    _objc_retain(param_3);
    _objc_retain(puVar5);
    if (param_3 == puVar5) {
      _objc_release(puVar5);
      puVar5 = param_3;
    }
    else {
      if (puVar5 == (undefined *)0x0) {
        _objc_release();
      }
      else {
        puVar2 = param_3;
        func_0x00010c071ae0();
        _objc_release(puVar5);
        _objc_release(param_3);
        if (((ulong)puVar2 & 1) != 0) goto LAB_10708163c;
      }
      puVar2 = param_3;
      FUN_107080fcc();
      if (puVar2 == (undefined *)0x0) goto LAB_107081574;
      _objc_retain(param_3);
      puVar3 = *(undefined **)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = param_3;
      _objc_release(puVar3);
      if (puVar2 < (undefined *)0x5) {
        puVar5 = PTR_PTR_1126b0c40;
        func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_107081d64();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfe9720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      FUN_107081020(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112763ad8));
      func_0x00010bea9b20(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar5);
  }
LAB_10708163c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107081660; end: 107081723; -[SCGroupChatAddButtonView _onTapAddButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081660(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126cc8b8;
  uVar4 = *(ulong *)(param_1 + _DAT_112763ae4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if ((uVar1 != 0) && (uVar3 = uVar4, FUN_107080fcc(), (uVar3 & 0xfffffffffffffffd) == 1)) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112763ae8);
    func_0x00010c23cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107081724; end: 1070817db; -[SCGroupChatAddButtonView _setUpPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112763ad8;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4018000000000000,0x4020000000000000,0x4018000000000000,0x4020000000000000,
             *(undefined8 *)(param_1 + lVar3),PTR_s_setLayoutMargins__11264c108);
  return;
}



/* Entry: 1070817dc; end: 10708189f; -[SCGroupChatAddButtonView _setUpSubviewsWithImage:text:tintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070817dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    func_0x00010bde10c0(param_1);
  }
  else {
    lVar2 = (long)_DAT_112763ae0;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,param_5);
    lVar1 = (long)_DAT_112763adc;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar1),param_2,param_5);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070818a0; end: 10708190f; -[SCGroupChatAddButtonView _clearSubViewsAndViewModel] */

/* WARNING: Possible PIC construction at 0x0001070818f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001070818f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070818a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763ae4);
  *(undefined8 *)(param_1 + _DAT_112763ae4) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763ae0;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112763adc));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107081910; end: 107081c3b; -[SCGroupChatAddButtonView _setUpConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107081910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112763aec;
  puVar1 = *(undefined **)(param_1 + lVar22);
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    lVar21 = (long)_DAT_112763ad8;
    uVar2 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar21);
    uStack_a8 = uVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar21);
    uStack_a0 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493c0(0xc018000000000000,uVar8,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar21);
    uStack_98 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493c0(0x4018000000000000,uVar11,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar21);
    uStack_90 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + _DAT_112763adc);
    uStack_88 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf49420(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1;
    uStack_80 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2a5060(uVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar18;
    func_0x00010bf493a0(lVar18,param_2,uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,7);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar22);
    *(undefined **)(param_1 + lVar22) = puVar1;
    _objc_release(uVar20);
    _objc_release(lVar21);
    _objc_release(uVar19);
    _objc_release(lVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar22));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_112763ae8);
}



/* Entry: 107081c3c; end: 107081c4b; -[SCGroupChatAddButtonView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107081c3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ae8);
}



/* Entry: 107081c4c; end: 107081c8b; -[SCGroupChatAddButtonView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763ae8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107081c8c; end: 107081c9b; -[SCGroupChatAddButtonView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107081c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ae4);
}



/* Entry: 107081c9c; end: 107081d1b; -[SCGroupChatAddButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107081c9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763ae4,0);
  _objc_storeStrong(param_1 + _DAT_112763ae8,0);
  _objc_storeStrong(param_1 + _DAT_112763aec,0);
  _objc_storeStrong(param_1 + _DAT_112763ae0,0);
  _objc_storeStrong(param_1 + _DAT_112763adc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763ad8,0);
  return;
}



/* Entry: 107081d1c; end: 107081d63;  */

void FUN_107081d1c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0f2f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e0f2f8,
                      &PTR____CFConstantStringClassReference_110e9a158,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107081d64; end: 107081ddf;  */

void FUN_107081d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126d44f0;
  _objc_opt_class(PTR_PTR_1126d44f0);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e9a198,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107081de0; end: 107081e53; -[SCGroupChatAddButtonServices initWithGroupChatAddButtonViewModelProvider:] */

undefined1 * FUN_107081de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8840;
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



/* Entry: 107081e54; end: 107081e5b; -[SCGroupChatAddButtonServices groupChatAddButtonViewModelProvider] */

undefined8 FUN_107081e54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107081e5c; end: 107081e67; -[SCGroupChatAddButtonServices .cxx_destruct] */

void FUN_107081e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107081e68; end: 107081edb; -[SCGroupChatAddButtonViewModel initWithCoder:] */

undefined1 * FUN_107081e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107081edc; end: 107081f63; -[SCGroupChatAddButtonViewModel initWithFriendStatus:singleTapActionModel:] */

undefined1 *
FUN_107081edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8848;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107081f64; end: 107081f87; -[SCGroupChatAddButtonViewModel copyWithZone:] */

undefined8 FUN_107081f64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107081f88; end: 107081f9f; -[SCGroupChatAddButtonViewModel encodeWithCoder:] */

void FUN_107081f88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInteger_forKey__1125c2598,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e9a1b8);
  return;
}



/* Entry: 107081fa0; end: 107082007; -[SCGroupChatAddButtonViewModel hash] */

long * FUN_107081fa0(long param_1,undefined8 param_2,long *param_3)

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
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10708208c;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10708208c;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10708208c;
    }
  }
  plVar5 = (long *)0x1;
LAB_10708208c:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 107082008; end: 1070820a7; -[SCGroupChatAddButtonViewModel isEqual:] */

long FUN_107082008(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708208c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10708208c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10708208c;
    }
  }
  lVar3 = 1;
LAB_10708208c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070820a8; end: 1070820af; -[SCGroupChatAddButtonViewModel friendStatus] */

undefined8 FUN_1070820a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070820b0; end: 1070820b7; -[SCGroupChatAddButtonViewModel singleTapActionModel] */

undefined8 FUN_1070820b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070820b8; end: 1070820c3; -[SCGroupChatAddButtonViewModel .cxx_destruct] */

void FUN_1070820b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070820c4; end: 10708221f; +[SCMapLocationContextHelpers timeStringFromTimezoneOffsetInSeconds:] */

void FUN_1070820c4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c155300(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (2.0 <= ABS((param_1 - (double)(long)puVar3) / 3600.0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe4740();
    if (puVar5 + -0x16 < (undefined *)0xfffffffffffffff2) {
      puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d4c0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107082220; end: 107082293; -[SCMessageAccessoryServices initWithMessageAccessoryPluginManager:] */

undefined1 * FUN_107082220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8850;
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



/* Entry: 107082294; end: 10708229b; -[SCMessageAccessoryServices messageAccessoryPluginManager] */

undefined8 FUN_107082294(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708229c; end: 1070822a7; -[SCMessageAccessoryServices .cxx_destruct] */

void FUN_10708229c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070822a8; end: 10708235b; -[SCMessageAccessoryContentParams initWithPluginIdentifier:valdiContextParams:rendersOverMessage:] */

undefined1 *
FUN_1070822a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f8858;
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



/* Entry: 10708235c; end: 10708237f; -[SCMessageAccessoryContentParams copyWithZone:] */

undefined8 FUN_10708235c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107082380; end: 1070823f7; -[SCMessageAccessoryContentParams hash] */

undefined8 * FUN_107082380(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107082488:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107082494;
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
          goto LAB_107082494;
        }
        goto LAB_107082488;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107082494:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1070823f8; end: 1070824af; -[SCMessageAccessoryContentParams isEqual:] */

long FUN_1070823f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107082488:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107082494;
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
          goto LAB_107082494;
        }
        goto LAB_107082488;
      }
    }
    lVar3 = 0;
  }
LAB_107082494:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070824b0; end: 1070824b7; -[SCMessageAccessoryContentParams pluginIdentifier] */

undefined8 FUN_1070824b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070824b8; end: 1070824bf; -[SCMessageAccessoryContentParams valdiContextParams] */

undefined8 FUN_1070824b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070824c0; end: 1070824c7; -[SCMessageAccessoryContentParams rendersOverMessage] */

undefined1 FUN_1070824c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070824c8; end: 1070824f7; -[SCMessageAccessoryContentParams .cxx_destruct] */

void FUN_1070824c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070824f8; end: 1070825c3; -[SCMessagePluginConversationDisplayMetadata initWithConversationId:lastMessageId:renderAsBubble:conversationSubtype:isCampaignConversation:] */

undefined1 *
FUN_1070824f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f8860;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070825c4; end: 1070825e7; -[SCMessagePluginConversationDisplayMetadata copyWithZone:] */

undefined8 FUN_1070825c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070825e8; end: 10708266b; -[SCMessagePluginConversationDisplayMetadata hash] */

undefined8 * FUN_1070825e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10708271c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107082728;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107082728;
        }
        goto LAB_10708271c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107082728:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708266c; end: 107082743; -[SCMessagePluginConversationDisplayMetadata isEqual:] */

long FUN_10708266c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708271c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107082728;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107082728;
        }
        goto LAB_10708271c;
      }
    }
    lVar3 = 0;
  }
LAB_107082728:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107082744; end: 10708274b; -[SCMessagePluginConversationDisplayMetadata conversationId] */

undefined8 FUN_107082744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708274c; end: 107082753; -[SCMessagePluginConversationDisplayMetadata lastMessageId] */

undefined8 FUN_10708274c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107082754; end: 10708275b; -[SCMessagePluginConversationDisplayMetadata renderAsBubble] */

undefined1 FUN_107082754(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708275c; end: 107082763; -[SCMessagePluginConversationDisplayMetadata conversationSubtype] */

undefined8 FUN_10708275c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107082764; end: 10708276b; -[SCMessagePluginConversationDisplayMetadata isCampaignConversation] */

undefined1 FUN_107082764(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10708276c; end: 10708279b; -[SCMessagePluginConversationDisplayMetadata .cxx_destruct] */

void FUN_10708276c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708279c; end: 10708280f; -[SCMessageRenderingPluginServices initWithMessageRenderingPluginManager:] */

undefined1 * FUN_10708279c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8868;
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



/* Entry: 107082810; end: 107082817; -[SCMessageRenderingPluginServices messageRenderingPluginManager] */

undefined8 FUN_107082810(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


