/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fb8b60; end: 105fb8d6f; -[SCSnapchatterMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105fb8b60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  
  lVar1 = param_1;
  func_0x00010bebd720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6ba0;
  _objc_alloc(PTR_PTR_1126c6ba0);
  func_0x00010c05ac00();
  func_0x00010c1a8020();
  puVar3 = PTR_PTR_1126c6ba8;
  _objc_alloc(PTR_PTR_1126c6ba8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c244580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef7380();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031780(puVar3,param_2,0,0,uVar6,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar10 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar11 = PTR_PTR_1126c6bb0;
  func_0x00010bf44480(PTR_PTR_1126c6bb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar10,param_2,puVar11,puVar2,puVar3);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c6898;
  func_0x00010bf44ea0(PTR_PTR_1126c6898,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c68a0;
  func_0x00010bfbb820(PTR_PTR_1126c68a0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105fb8d70; end: 105fb8fb7; -[SCSnapchatterMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105fb8d70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(in_x4);
  lVar1 = param_1;
  func_0x00010bebd720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b0820(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = in_x4;
  func_0x00010bf026a0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = in_x4;
  func_0x00010bf50b20(in_x4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x6);
  func_0x00010c15cae0(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(in_x6);
  _objc_release(in_x6);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105fb8fb8; end: 105fb8fcb;  */

void FUN_105fb8fb8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105fb8fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105fb8fcc; end: 105fb9013; -[SCSnapchatterMessageRenderingPlugin dismissPresentedView] */

void FUN_105fb8fcc(long param_1)

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



/* Entry: 105fb9014; end: 105fb901b; -[SCSnapchatterMessageRenderingPlugin activeConversationIdObservable] */

undefined8 FUN_105fb9014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105fb901c; end: 105fb9023; -[SCSnapchatterMessageRenderingPlugin activeConversationInformationObservable] */

undefined8 FUN_105fb901c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105fb9024; end: 105fb9053; -[SCSnapchatterMessageRenderingPlugin setActiveConversationInformationObservable:] */

void FUN_105fb9024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb9054; end: 105fb906b; -[SCSnapchatterMessageRenderingPlugin uiContainer] */

void FUN_105fb9054(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb906c; end: 105fb9077; -[SCSnapchatterMessageRenderingPlugin setUiContainer:] */

void FUN_105fb906c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105fb9078; end: 105fb90eb; -[SCSnapchatterMessageRenderingPlugin .cxx_destruct] */

void FUN_105fb9078(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105fb90ec; end: 105fb90f7; +[SCCSnapchatterShareView componentPath] */

undefined ** FUN_105fb90ec(void)

{
  return &PTR____CFConstantStringClassReference_110e34eb8;
}



/* Entry: 105fb90f8; end: 105fb912b; -[SCCSnapchatterShareView initWithViewModel:componentContext:runtime:] */

void FUN_105fb90f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeae8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fb912c; end: 105fb917b; -[SCCSnapchatterShareView setViewModel:] */

void FUN_105fb912c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb917c; end: 105fb91bf; -[SCCSnapchatterShareView viewModel] */

void FUN_105fb917c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb91c0; end: 105fb91c7; -[SCCAddButtonType__Enum init] */

void FUN_105fb91c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105fb91c8; end: 105fb9207; -[SCCSnapchatterShareDisplayInfo initWithUserName:bitmojiInfo:showAddButton:isAddButtonChecked:] */

void FUN_105fb91c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeaf0;
  uStack_20 = param_1;
  func_0x000105fb9358(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fb9208; end: 105fb921b; +[SCCSnapchatterShareDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105fb9208(undefined8 *param_1)

{
  *param_1 = &PTR_s_displayName_110903ae8;
  param_1[1] = &PTR_s_SCCBitmojiInfo_110903b90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb921c; end: 105fb92e3; -[SCCSnapchatterShareViewContext initWithOnTap:onAddButtonClicked:snapchatterObservable:addButtonStatusObservable:] */

undefined8 *
FUN_105fb921c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_48 = PTR_PTR_1126eeaf8;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  func_0x000105fb9358(puVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105fb92e4; end: 105fb92f7; +[SCCSnapchatterShareViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fb92e4(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110903ba0;
  param_1[1] = &PTR_s_SCBridgeObservable_110903c18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb92f8; end: 105fb932f; -[SCCSnapchatterShareViewModel initWithUserId:] */

void FUN_105fb92f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeb00;
  uStack_20 = param_1;
  func_0x000105fb9358(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fb9330; end: 105fb935f; +[SCCSnapchatterShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb9330(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110903c38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb9360; end: 105fb94bf; -[SCStoryReplyQuotedMessagePlugin initWithCurrentUserId:playerProvider:chatMessageDisplayStateLogger:valdiRuntimeProvider:messagingMessageProvider:] */

undefined1 *
FUN_105fb9360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eeb08;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb94c0; end: 105fb9c5b; -[SCStoryReplyQuotedMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fb94c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar1;
  func_0x00010c07fd80();
  if ((int)uVar15 != 0) {
    uVar15 = uVar1;
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar15 != 0) {
      uVar15 = uVar1;
      func_0x00010c131d80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar15;
      func_0x00010c0c6c20();
      _objc_release(uVar15);
      puVar3 = PTR_PTR_1126c6bb8;
      _objc_opt_new();
      func_0x00010c2256c0();
      puVar4 = PTR_PTR_1126c6bc0;
      _objc_opt_new();
      uVar15 = uVar1;
      func_0x00010c131d80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar15);
      puVar17 = PTR_PTR_1126c6bc8;
      _objc_alloc(PTR_PTR_1126c6bc8);
      uVar15 = uVar1;
      func_0x00010bf50280(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf490e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010bf026e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005180(puVar17);
      func_0x00010c1c48a0(puVar3);
      _objc_release(puVar17);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar15);
      uVar15 = uVar1;
      func_0x00010bf490e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010be21140(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      func_0x00010c0d9840(lVar7);
      uVar15 = param_4;
      func_0x0001070b1c70();
      if ((uVar15 & 1) == 0) {
        uVar15 = param_4;
        func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar15 = 0;
      }
      puVar8 = PTR_PTR_1126c6bd0;
      _objc_opt_new(PTR_PTR_1126c6bd0);
      _objc_initWeak(auStack_80,param_1);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105fb9c5c;
      puStack_a0 = &UNK_110903700;
      _objc_retain(uVar1);
      uStack_98 = uVar1;
      _objc_retain(uVar15);
      uStack_90 = uVar15;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c1d3960(puVar8);
      uVar18 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar18);
      if (((uint)(uVar2 < 0x16) & 0x363f36U >> (ulong)((uint)uVar2 & 0x1f)) == 0) {
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_105fb9e64;
        puStack_f0 = &UNK_110903cb0;
        _objc_retain(uVar18);
        lVar9 = lVar7;
        uStack_e8 = uVar18;
        func_0x00010c0b8600(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf870a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c272120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20df80(puVar8);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        uVar13 = uStack_e8;
      }
      else {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_105fb9e18;
        puStack_c8 = &UNK_110903c80;
        _objc_retain(uVar18);
        lVar9 = lVar7;
        uStack_c0 = uVar18;
        func_0x00010c0b8600(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf870a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c272120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c221420(puVar8);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        uVar13 = uStack_c0;
      }
      _objc_release(uVar13);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar13;
      FUN_1065c2f88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205000(puVar8);
      _objc_release(uVar16);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_initWeak(auStack_110,param_1);
      _objc_copyWeak(auStack_118,auStack_110);
      lVar9 = lVar7;
      func_0x00010c0b8600(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d4a0(puVar8);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(uVar1);
      func_0x00010bfad7a0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar16;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      uVar16 = uVar13;
      func_0x00010bf870a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar16;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7240(puVar8);
      _objc_release(uVar12);
      _objc_release(uVar16);
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18ff00(puVar8);
      _objc_release(uVar16);
      _objc_retain(uVar18);
      lVar9 = lVar7;
      func_0x00010c0b8600(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c70a0(puVar8);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      puVar17 = PTR_PTR_1126c67d8;
      _objc_alloc(PTR_PTR_1126c67d8);
      puVar14 = PTR_PTR_1126c6bd8;
      func_0x00010bf44480(PTR_PTR_1126c6bd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000660(puVar17);
      _objc_release(puVar14);
      _objc_release(uVar18);
      _objc_release(uVar13);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_118);
      _objc_destroyWeak(auStack_110);
      _objc_release(uVar18);
      _objc_destroyWeak(auStack_88);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar8);
      _objc_release(uVar15);
      _objc_release(lVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_105fb9bd8;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_105fb9bd8:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105fb9c5c; end: 105fb9db7;  */

void FUN_105fb9c5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126c6a60;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c131da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105fb9db8;
  puStack_60 = &UNK_110848218;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_retain(puVar4);
  puStack_50 = puVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(puStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 105fb9db8; end: 105fb9e17;  */

void FUN_105fb9db8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7d600(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fb9e18; end: 105fb9e63;  */

void FUN_105fb9e18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fb9e64; end: 105fb9fa3;  */

void FUN_105fb9e64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0cbe00(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x00010bf50280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf490e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c131d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x000108543a00(lVar4,lVar5,lVar7,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010beec820(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105fb9fa4; end: 105fba087;  */

void FUN_105fb9fa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be444a0();
  _objc_release(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fba088; end: 105fba143;  */

void FUN_105fba088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fba144; end: 105fba14b; -[SCStoryReplyQuotedMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

undefined8 FUN_105fba144(void)

{
  return 0;
}



/* Entry: 105fba14c; end: 105fba1d3; -[SCStoryReplyQuotedMessagePlugin quotedRenderingStyleForMessage:] */

uint FUN_105fba14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0cbe00(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  func_0x00010be444a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return (uint)(lVar1 != 0) & ((uint)param_1 ^ 0xffffffff);
}



/* Entry: 105fba1d4; end: 105fba203; -[SCStoryReplyQuotedMessagePlugin identifier] */

void FUN_105fba1d4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e34ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e34ef8);
  return;
}



/* Entry: 105fba204; end: 105fba31f; -[SCStoryReplyQuotedMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fba204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fba320; end: 105fba34b;  */

void FUN_105fba320(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fba34c; end: 105fba38b; -[SCStoryReplyQuotedMessagePlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_105fba34c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07fd80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105fba38c; end: 105fba5af; -[SCStoryReplyQuotedMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105fba38c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c071ae0();
  _objc_release(puVar5);
  _objc_release(puVar1);
  if ((int)puVar4 == 0) {
    func_0x000105fba900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
    goto LAB_105fba534;
  }
  puVar1 = param_4;
  func_0x0001070b1c70();
  if (((ulong)puVar1 & 1) == 0) {
    puVar4 = param_4;
    func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = puVar4;
  func_0x00010901d778();
  puVar2 = PTR_PTR_1126b2c18;
  puVar5 = puVar4;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    if (puVar5 == (undefined *)0x0) goto LAB_105fba504;
LAB_105fba490:
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000105fba930();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bcbeb70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf85d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) goto LAB_105fba490;
LAB_105fba504:
    func_0x000105fba918();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
  }
  func_0x000105fba918();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_105fba534:
  puVar4 = PTR_PTR_1126c68c0;
  _objc_alloc(PTR_PTR_1126c68c0);
  puVar2 = PTR_PTR_1126c68c8;
  func_0x00010c131980(PTR_PTR_1126c68c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051540(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fba5b0; end: 105fba64b; -[SCStoryReplyQuotedMessagePlugin _getOrCreateMessageSubjectForMessageId:] */

void FUN_105fba5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  puVar1 = *(undefined **)(param_1 + 0x30);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fba64c; end: 105fba68f; -[SCStoryReplyQuotedMessagePlugin _handleConversationChange] */

void FUN_105fba64c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x40);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x40);
  return;
}



/* Entry: 105fba690; end: 105fba763; -[SCStoryReplyQuotedMessagePlugin _isStoryReplyMediaDeletedForMessage:] */

bool FUN_105fba690(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cbe00(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07fd80();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c242c80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c25a420();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    bVar1 = lVar7 == 2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105fba764; end: 105fba7cb; -[SCStoryReplyQuotedMessagePlugin _presentPlaybackWithBaseView:configuration:] */

void FUN_105fba764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d960();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fba7cc; end: 105fba7d3; -[SCStoryReplyQuotedMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fba7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105fba7d4; end: 105fba7db; -[SCStoryReplyQuotedMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fba7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105fba7dc; end: 105fba80b; -[SCStoryReplyQuotedMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fba7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fba80c; end: 105fba823; -[SCStoryReplyQuotedMessagePlugin playbackPresenter] */

void FUN_105fba80c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fba824; end: 105fba82f; -[SCStoryReplyQuotedMessagePlugin setPlaybackPresenter:] */

void FUN_105fba824(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105fba830; end: 105fba837; -[SCStoryReplyQuotedMessagePlugin messageViewEvents] */

undefined8 FUN_105fba830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105fba838; end: 105fba867; -[SCStoryReplyQuotedMessagePlugin setMessageViewEvents:] */

void FUN_105fba838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fba868; end: 105fba8ff; -[SCStoryReplyQuotedMessagePlugin .cxx_destruct] */

void FUN_105fba868(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105fba900; end: 105fba947;  */

void FUN_105fba900(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34ed8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34ed8,
                      &PTR____CFConstantStringClassReference_110e34ef8,0);
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



/* Entry: 105fba948; end: 105fba953; +[SCCChatStoryReplyThumbnailView componentPath] */

undefined ** FUN_105fba948(void)

{
  return &PTR____CFConstantStringClassReference_110e34f58;
}



/* Entry: 105fba954; end: 105fba987; -[SCCChatStoryReplyThumbnailView initWithViewModel:componentContext:runtime:] */

void FUN_105fba954(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeb10;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fba988; end: 105fba9d7; -[SCCChatStoryReplyThumbnailView setViewModel:] */

void FUN_105fba988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fba9d8; end: 105fbaa1b; -[SCCChatStoryReplyThumbnailView viewModel] */

void FUN_105fba9d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fbaa1c; end: 105fbaa3f; -[SCCChatStoryReplyThumbnailContext init] */

void FUN_105fbaa1c(void)

{
  func_0x000105fbaa8c(PTR_PTR_1126eeb18);
  return;
}



/* Entry: 105fbaa40; end: 105fbaa53; +[SCCChatStoryReplyThumbnailContext valdiMarshallableObjectDescriptor] */

void FUN_105fbaa40(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110903d00;
  param_1[1] = &PTR_DAT_110903dd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fbaa54; end: 105fbaa77; -[SCCChatStoryReplyThumbnailViewModel init] */

void FUN_105fbaa54(void)

{
  func_0x000105fbaa8c(PTR_PTR_1126eeb20);
  return;
}



/* Entry: 105fbaa78; end: 105fbaaaf; +[SCCChatStoryReplyThumbnailViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fbaa78(undefined8 *param_1)

{
  *param_1 = &PTR_s_width_110903e08;
  param_1[1] = &PTR_DAT_110903e50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fbaab0; end: 105fbacc3; -[SCVoiceNoteMessageComposerPlugin initWithChatNoteAnimationThumbnailFetcher:chatMediaFetcher:audioNotePlayer:composerBlizzardLogger:userTrackedLogger:messagingExperimentService:currentUserId:conversationUpdatesPublisher:notificationPool:drawerMediaSender:conversationActionHandler:voiceNoteTranscriptionService:chatMessageDisplayStateLogger:grpcServiceFactory:messagingMessageProvider:] */

undefined8
FUN_105fbaab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
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
  _objc_opt_new();
  func_0x00010bffdca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,puVar1,param_11,param_12,param_13,param_14,param_15,param_16,param_17
                     );
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
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105fbacc4; end: 105fbb0cb; -[SCVoiceNoteMessageComposerPlugin initWithChatNoteAnimationThumbnailFetcher:chatMediaFetcher:audioNotePlayer:composerBlizzardLogger:userTrackedLogger:messagingExperimentService:currentUserId:conversationUpdatesPublisher:autoPlayPublisher:notificationPool:drawerMediaSender:conversationActionHandler:voiceNoteTranscriptionService:chatMessageDisplayStateLogger:grpcServiceFactory:messagingMessageProvider:] */

undefined8 *
FUN_105fbacc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

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
  puStack_70 = PTR_PTR_1126eeb28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x17) = 0;
  }
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



/* Entry: 105fbb0cc; end: 105fbb4ef; -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fbb0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be446e0();
  if ((int)lVar3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c0cb8c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x0001070b244c(param_4,uVar4,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c6be0;
    _objc_alloc(PTR_PTR_1126c6be0);
    uVar4 = uVar5;
    func_0x00010bf09c20(uVar5);
    func_0x00010c044640((double)(int)uVar4,puVar6);
    uVar4 = uVar2;
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c292cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar4);
    func_0x00010be44ca0();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b51e0(puVar6);
    _objc_release(puVar12);
    lVar3 = param_1;
    func_0x00010beea3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192e60(puVar6);
    _objc_release(lVar3);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a4a0();
    func_0x00010c0df7c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1854e0(puVar6);
    _objc_release(puVar12);
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c087f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126c6bc0;
    _objc_opt_new(PTR_PTR_1126c6bc0);
    uVar4 = uVar1;
    func_0x00010c0c3fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar12 = PTR_PTR_1126c6bc8;
    _objc_alloc(PTR_PTR_1126c6bc8);
    uVar4 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bf490e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010bf026e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005180(puVar12);
    func_0x00010c1c48a0(puVar6);
    _objc_release(puVar12);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar4);
    func_0x0001070b1c70(param_4);
    uVar4 = uVar1;
    func_0x00010c0cb8c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar4);
    func_0x00010be21060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar11 = PTR_PTR_1126c6be8;
    func_0x00010bf44480(PTR_PTR_1126c6be8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar12);
    _objc_release(puVar11);
    _objc_release(param_1);
    _objc_release(puVar9);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105fbb4f0; end: 105fbb56f; -[SCVoiceNoteMessageComposerPlugin _isTranscribableWithLocale:participants:] */

undefined8 FUN_105fbb4f0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0001070b2f3c(param_4,*(undefined8 *)(param_1 + 0x60));
  if ((param_4 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0817a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fbb570; end: 105fbb68b; -[SCVoiceNoteMessageComposerPlugin setActiveConversationIdObservable:] */

void FUN_105fbb570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fbb68c; end: 105fbb6d3;  */

void FUN_105fbb68c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbb6d4; end: 105fbb80f; -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fbb6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010c11ebc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf4bc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7620(param_1,param_2,uVar1,uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fbb810; end: 105fbb8cf; -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105fbb810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_4);
  func_0x00010c0cbe00(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0cb8c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7620(param_1,param_2,uVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fbb8d0; end: 105fbb8d7; -[SCVoiceNoteMessageComposerPlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105fbb8d0(void)

{
  return 0;
}



/* Entry: 105fbb8d8; end: 105fbb907; -[SCVoiceNoteMessageComposerPlugin identifier] */

void FUN_105fbb8d8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb938);
  return;
}



/* Entry: 105fbb908; end: 105fbb90f; -[SCVoiceNoteMessageComposerPlugin pluginType] */

undefined8 FUN_105fbb908(void)

{
  return 0;
}



/* Entry: 105fbb910; end: 105fbb913; -[SCVoiceNoteMessageComposerPlugin dismissPresentedView] */

void FUN_105fbb910(void)

{
  return;
}



/* Entry: 105fbb914; end: 105fbb97b; -[SCVoiceNoteMessageComposerPlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

undefined8 FUN_105fbb914(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105fbb97c; end: 105fbb983; -[SCVoiceNoteMessageComposerPlugin canForwardMessageFromCTA:] */

undefined8 FUN_105fbb97c(void)

{
  return 0;
}



/* Entry: 105fbb984; end: 105fbbe03; -[SCVoiceNoteMessageComposerPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105fbb984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  _objc_retain(param_5);
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_3);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar14;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = uVar14;
    func_0x00010c0cb8c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x0001070b244c(param_5,uVar2,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126c6be0;
  _objc_alloc(PTR_PTR_1126c6be0);
  puVar5 = puVar3;
  func_0x00010bf09c20(puVar3);
  func_0x00010c044640((double)(int)puVar5,puVar4);
  uVar2 = uVar1;
  func_0x00010c0dba60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c292cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar2);
  func_0x00010be44ca0(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b51e0(puVar4);
  _objc_release(puVar5);
  lVar7 = param_1;
  func_0x00010beea3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192e60(puVar4);
  _objc_release(lVar7);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf5a4a0(uVar2);
  func_0x00010c0df7c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1854e0(puVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c6bc0;
  _objc_opt_new(PTR_PTR_1126c6bc0);
  uVar2 = uVar14;
  func_0x00010c0c3fe0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126c6bc8;
  _objc_alloc(PTR_PTR_1126c6bc8);
  uVar2 = uVar14;
  func_0x00010bf50280(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf490e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar14;
  func_0x00010bf026e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005180(puVar8);
  func_0x00010c1c48a0(puVar4);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010c087f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar10);
  puVar8 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar11 = PTR_PTR_1126c6be8;
  func_0x00010bf44480(PTR_PTR_1126c6be8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = uVar14;
  func_0x00010bf490e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c6898;
  func_0x00010bf44ea0(PTR_PTR_1126c6898);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c68a0;
  func_0x00010bfbb820(PTR_PTR_1126c68a0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar14);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105fbbe04; end: 105fbbfff; -[SCVoiceNoteMessageComposerPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105fbbe04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2b0820(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar6 = param_5;
    func_0x00010bf026a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee5600(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fbc000; end: 105fbc20f; -[SCVoiceNoteMessageComposerPlugin _uploadAndSendMediaFromMessage:conversations:platformAnalytics:completion:] */

void FUN_105fbc000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(uVar2);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf24a00(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fbc210; end: 105fbc287;  */

void FUN_105fbc210(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee55e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fbc288; end: 105fbc5a3; -[SCVoiceNoteMessageComposerPlugin _uploadAndSendAudioNote:message:conversations:platformAnalytics:completion:] */

void FUN_105fbc288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(ulong *)(param_1 + 0xb0);
  func_0x00010c0cbe00(uVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010bf4df40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c6bf0;
  uVar5 = uVar8;
  func_0x00010c0c4bc0(uVar8);
  func_0x00010bf8b4e0(puVar2,param_2,uVar5 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6bf8;
  _objc_alloc(PTR_PTR_1126c6bf8);
  puVar9 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029720(puVar3,param_2,puVar9,0xffffffffffffffff,0,0,puVar1,puVar2);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126c6c00;
  _objc_alloc(PTR_PTR_1126c6c00);
  uVar5 = uVar8;
  func_0x00010c0c4bc0(uVar8);
  func_0x00010c008300((double)(uVar5 & 0xffffffff),puVar9,param_2,param_3);
  _objc_release(param_3);
  puVar10 = PTR_PTR_1126c6c08;
  _objc_alloc(PTR_PTR_1126c6c08);
  func_0x00010c028f40();
  uVar11 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105fbc5a4;
  puStack_70 = &UNK_110852668;
  uStack_68 = param_7;
  _objc_retain(param_7);
  func_0x00010c15b640(uVar11,param_2,puVar10,0,uVar12,param_6,&puStack_88);
  _objc_release(param_6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(puVar1);
  return;
}



/* Entry: 105fbc5a4; end: 105fbc5b7;  */

void FUN_105fbc5a4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105fbc5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105fbc5b8; end: 105fbc7f7; -[SCVoiceNoteMessageComposerPlugin _valdiContextParamsForQuotedMessageContents:messageSenderUserId:conversationParticipants:] */

void FUN_105fbc5b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = param_3;
  func_0x00010bf4ce20();
  if ((int)lVar7 == 6) {
    lVar7 = param_3;
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
joined_r0x000105fbc7a8:
    if ((lVar7 != 0) && (lVar6 = lVar7, func_0x00010c0dbae0(), (int)lVar6 == 1)) {
      uVar1 = param_5;
      func_0x0001070b244c(param_5,param_4,*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c6c10;
      _objc_alloc(PTR_PTR_1126c6c10);
      uVar3 = uVar1;
      func_0x00010bf09c20(uVar1);
      func_0x00010c044640((double)(int)uVar3,puVar2);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar6 = lVar7;
      func_0x00010bf0ed00(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c0dba60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c4bc0();
      func_0x00010c0df820(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192e60(puVar2);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(lVar6);
      puVar8 = PTR_PTR_1126c67d8;
      _objc_alloc(PTR_PTR_1126c67d8);
      puVar5 = PTR_PTR_1126c6c18;
      func_0x00010bf44480(PTR_PTR_1126c6c18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000660(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(uVar1);
      goto LAB_105fbc7b8;
    }
  }
  else {
    lVar7 = param_3;
    func_0x00010bf4ce20();
    if ((int)lVar7 == 7) {
      lVar7 = param_3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c131be0();
      _objc_release(lVar7);
      if ((int)lVar6 == 0xf) {
        lVar6 = param_3;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        goto joined_r0x000105fbc7a8;
      }
    }
    lVar7 = 0;
  }
  puVar8 = (undefined *)0x0;
LAB_105fbc7b8:
  _objc_release(lVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105fbc7f8; end: 105fbc8e7; -[SCVoiceNoteMessageComposerPlugin _isSupportedMessageContents:] */

bool FUN_105fbc7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4ce20();
  uVar4 = param_3;
  if ((int)uVar2 == 6) {
    func_0x00010c0dba60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0dbae0();
    iVar5 = (int)uVar2;
LAB_105fbc840:
    bVar1 = iVar5 == 1;
    _objc_release(uVar4);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0xf) {
        func_0x00010c242c40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dbae0();
        iVar5 = (int)uVar3;
        _objc_release(uVar2);
        goto LAB_105fbc840;
      }
    }
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105fbc8e8; end: 105fbca8b; -[SCVoiceNoteMessageComposerPlugin _voiceNoteDurationMSForContents:] */

void FUN_105fbc8e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4ce20();
  lVar5 = param_3;
  if ((int)lVar1 == 6) {
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
LAB_105fbc93c:
    _objc_release(lVar5);
    if (lVar1 != 0) {
      lVar5 = lVar1;
      func_0x00010c0dba60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar2 = lVar5;
        func_0x00010c0c4bc0(lVar5);
        func_0x00010c0df820(puVar6,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
LAB_105fbca64:
      _objc_release(lVar1);
      goto LAB_105fbca6c;
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf4ce20();
    if ((int)lVar1 == 7) {
      lVar1 = param_3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c131be0();
      if ((int)lVar2 != 0xf) {
        puVar6 = (undefined *)0x0;
        goto LAB_105fbca64;
      }
      lVar2 = param_3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c131e00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dbae0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar4 == 1) {
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010bf0ed00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        goto LAB_105fbc93c;
      }
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105fbca6c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fbca8c; end: 105fbd4ef; -[SCVoiceNoteMessageComposerPlugin _getOrCreateContextForMessage:isCurrentUserSender:isGroupConversation:isTranscribable:] */

void FUN_105fbca8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = *(undefined **)(param_1 + 0x88);
  uVar2 = uVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be21220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07d080(uVar1);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar3);
  _objc_release(puVar4);
  uVar2 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be21140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c0d9840(lVar5);
  if (puVar15 == (undefined *)0x0) {
    uVar14 = *(undefined8 *)(param_1 + 0xd8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105fbd4f0;
    puStack_88 = &UNK_1108fe608;
    _objc_retain(uVar1);
    uStack_80 = uVar1;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    puVar4 = PTR_PTR_1126c6c20;
    _objc_alloc();
    uVar14 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b300();
    _objc_release(uVar14);
    puVar15 = PTR_PTR_1126c6c28;
    _objc_opt_new();
    lVar6 = lVar3;
    func_0x00010bf870a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdd80(puVar15);
    _objc_release(lVar7);
    _objc_release(lVar6);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105fbd5b4;
    puStack_b0 = &UNK_1108450c8;
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    func_0x00010c1d2e20(puVar15);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_105fbd5c0;
    puStack_d8 = &UNK_110903eb0;
    _objc_retain(puVar4);
    puStack_d0 = puVar4;
    func_0x00010c1a37c0(puVar15);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x105fbd6a4;
    puStack_100 = &UNK_110846710;
    _objc_retain(puVar4);
    puStack_f8 = puVar4;
    func_0x00010c1d2e80(puVar15);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x105fbd6ac;
    puStack_128 = &UNK_110841f20;
    _objc_retain(puVar4);
    puStack_120 = puVar4;
    func_0x00010c1d44a0(puVar15);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x105fbd6b8;
    puStack_150 = &UNK_110846710;
    _objc_retain(puVar4);
    puStack_148 = puVar4;
    func_0x00010c1f9a60(puVar15);
    puVar8 = puVar4;
    func_0x00010c1003a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd900(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar4;
    func_0x00010c0ff3c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd5c0(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    lVar6 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c17bd60(puVar15);
    _objc_release(lVar6);
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ff00(puVar15);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4d00(puVar15);
    _objc_release(uVar14);
    uVar14 = uVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    uVar14 = uVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar14;
    func_0x00010c0c6c20();
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar14);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_105fbd6c0;
    puStack_188 = &UNK_110903ee0;
    _objc_retain(uVar14);
    uStack_180 = uVar14;
    _objc_retain(uVar10);
    uStack_178 = uVar10;
    uStack_170 = uVar13;
    func_0x00010c1a37a0(puVar15);
    puVar9 = PTR_PTR_1126b1588;
    _objc_opt_new();
    puVar8 = puVar15;
    func_0x00010c1c3e20();
    func_0x00010043f068();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(puVar9);
    _objc_release(puVar8);
    _objc_initWeak(auStack_1a8,param_1);
    if (param_6 != 0) {
      puVar8 = PTR_PTR_1126c6c30;
      _objc_alloc();
      lVar6 = param_1 + 200;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c062680();
      _objc_release(lVar6);
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_105fbd848;
      puStack_1c0 = &UNK_110841f80;
      _objc_retain(puVar8);
      puStack_1b8 = puVar8;
      _objc_retain(param_3);
      uStack_1b0 = param_3;
      func_0x00010c1d4140(puVar15);
      puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_105fbd854;
      puStack_1f0 = &UNK_110841fb0;
      _objc_copyWeak(auStack_1e0,auStack_1a8);
      _objc_retain(uVar1);
      uStack_1e8 = uVar1;
      func_0x00010c1d4120(puVar15);
      _objc_release(uStack_1e8);
      _objc_destroyWeak(auStack_1e0);
      _objc_release(uStack_1b0);
      _objc_release(puStack_1b8);
      _objc_release(puVar8);
    }
    puVar8 = puVar4;
    func_0x00010c0ff3a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_105fbd8d0;
    puStack_218 = &UNK_110903f10;
    _objc_copyWeak(auStack_210,auStack_1a8);
    puVar11 = puVar8;
    func_0x00010c25ff60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar8 = puVar4;
    func_0x00010c1003a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_238,auStack_1a8);
    _objc_retain(uVar1);
    puVar11 = puVar8;
    func_0x00010c25ff60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar11);
    _objc_release(puVar8);
    uVar17 = *(undefined8 *)(param_1 + 0xb0);
    _objc_retain(uVar17);
    _objc_retain(uVar17);
    lVar6 = lVar5;
    func_0x00010bf870c0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar17);
    lVar7 = lVar6;
    func_0x00010c0b8600(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar7;
    func_0x00010bf870a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4c20(puVar15);
    _objc_release(lVar12);
    _objc_release(lVar6);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171b20(puVar15);
    _objc_release(uVar13);
    uVar16 = *(undefined8 *)(param_1 + 0x88);
    uVar13 = uVar1;
    func_0x00010bf490e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar16);
    _objc_release(uVar13);
    _objc_retain(puVar15);
    _objc_release(lVar7);
    _objc_release(uVar17);
    _objc_release(uVar17);
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_238);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_1a8);
    _objc_release(puVar9);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(puStack_148);
    _objc_release(puStack_120);
    _objc_release(puStack_f8);
    _objc_release(puStack_d0);
    _objc_release(puStack_a8);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uStack_80);
  }
  else {
    _objc_retain(puVar15);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar15);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xb8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105fbd4f0; end: 105fbd557;  */

undefined8 FUN_105fbd4f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070b30c4(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105fbd558; end: 105fbd5b3;  */

void FUN_105fbd558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fbd5b4; end: 105fbd5bf;  */

void FUN_105fbd5b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handlePlayButtonTap__1125d2150,param_2);
  return;
}



/* Entry: 105fbd5c0; end: 105fbd68f;  */

void FUN_105fbd5c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105fbd690;
  puStack_60 = &UNK_11085b7b0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  uStack_50 = param_3;
  uStack_48 = param_1;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105fbd690; end: 105fbd6bf;  */

void FUN_105fbd690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_getSamplesForSampleCount_callbac_1125d00b0,
             (long)*(double *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105fbd6c0; end: 105fbd77f;  */

void FUN_105fbd6c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf4c540(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105fbd780; end: 105fbd847;  */

void FUN_105fbd780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105fbd81c;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 105fbd848; end: 105fbd853;  */

void FUN_105fbd848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleTranscriptionMoreButtonTap_1125d2580,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105fbd854; end: 105fbd8cf;  */

void FUN_105fbd854(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5da20(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fbd8d0; end: 105fbd917;  */

void FUN_105fbd8d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbd918; end: 105fbd9ab;  */

void FUN_105fbd918(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != PTR_PTR_1133566c0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5da20(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fbd9ac; end: 105fbdaef;  */

long FUN_105fbd9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_retain(lVar5);
  if (lVar2 == lVar5) {
    lVar7 = 1;
  }
  else if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x00010c071ae0(lVar2);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  return lVar7;
}



/* Entry: 105fbdaf0; end: 105fbdd5b;  */

void FUN_105fbdaf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6c38;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  uVar4 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar6);
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar14 = uVar1;
  func_0x00010bf4df40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c0dba60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar13);
  func_0x00010c003900();
  _objc_release(puVar13);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fbdd5c; end: 105fbde17; -[SCVoiceNoteMessageComposerPlugin _getOrCreateSavedSubjectForMessage:] */

void FUN_105fbdd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = *(undefined **)(param_1 + 0x90);
  func_0x00010c0e00e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90),param_2,puVar3,uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fbde18; end: 105fbdfc7; -[SCVoiceNoteMessageComposerPlugin _handlePlaybackFinishedEvent:] */

void FUN_105fbde18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c6c40;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c0cb780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c0df7c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0cb900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b800();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105fbdfc8;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_88);
    _objc_release(puStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fbdfc8; end: 105fbe003;  */

void FUN_105fbdfc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x80),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fbe004; end: 105fbe00b; -[SCVoiceNoteMessageComposerPlugin _markVoiceNoteAsConsumed:messageId:] */

void FUN_105fbe004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_didShowCompleteDisplayForConvers_1125bc7a8);
  return;
}



/* Entry: 105fbe00c; end: 105fbe1ab; -[SCVoiceNoteMessageComposerPlugin _removeCachedContextForMessages:] */

void FUN_105fbe00c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xb8);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c0cbe00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010bf490e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        lVar3 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x88));
        }
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0xb8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0xb8);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _os_unfair_lock_lock(param_3 + 0xb8);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x68);
  *(undefined1 **)(param_3 + 0x68) = puVar4;
  _objc_release(uVar7);
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x98));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x88));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x90));
  func_0x00010bf86d80(*(undefined8 *)(param_3 + 0x78));
  if (*(long *)(param_3 + 0x68) != 0) {
    _objc_initWeak(auStack_178,param_3);
    uVar8 = *(undefined8 *)(param_3 + 0xb0);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c285a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_copyWeak(auStack_180,auStack_178);
    uVar2 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_180);
    _objc_release(uVar8);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_178);
  }
  _os_unfair_lock_unlock(param_3 + 0xb8);
  _objc_release(puVar6);
  return;
}



/* Entry: 105fbe1ac; end: 105fbe367; -[SCVoiceNoteMessageComposerPlugin _handleConversationChange:] */

void FUN_105fbe1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xb8);
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x78));
  if (*(long *)(param_1 + 0x68) != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c285a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  _os_unfair_lock_unlock(param_1 + 0xb8);
  _objc_release(param_3);
  return;
}


