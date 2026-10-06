/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b81518; end: 106b81527; -[SCCCosCOSOTPActionType__Enum init] */

void FUN_106b81518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x113175758,6);
  return;
}



/* Entry: 106b81528; end: 106b8152f; -[SCCCosCOSOTPIntentType__Enum init] */

void FUN_106b81528(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 106b81530; end: 106b81537; -[SCCOSNetworkContext__Enum init] */

void FUN_106b81530(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 106b81538; end: 106b81557; -[SCCCosCOSContext init] */

void FUN_106b81538(void)

{
  func_0x000106b81a34(PTR_PTR_1126f53c8);
  return;
}



/* Entry: 106b81558; end: 106b8156b; +[SCCCosCOSContext valdiMarshallableObjectDescriptor] */

void FUN_106b81558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109638c0;
  param_1[1] = &PTR_DAT_110963c08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b8156c; end: 106b815db; -[SCCCosCOSRegistrationPhoneInputContext initWithOnDismissButtonTapped:deckContainerFactory:phoneFormatter:] */

void FUN_106b8156c(void)

{
  undefined8 unaff_x21;
  
  func_0x000106b81a60();
  _objc_retain();
  _objc_retainBlock();
  func_0x000106b81a58(&stack0xffffffffffffffc0,PTR_s_initWithFieldValues__1125e24b8);
  func_0x000106b81aa0();
  _objc_release();
  _objc_release(unaff_x21);
  return;
}



/* Entry: 106b815dc; end: 106b815ef; +[SCCCosCOSRegistrationPhoneInputContext valdiMarshallableObjectDescriptor] */

void FUN_106b815dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_110963c60;
  param_1[1] = &PTR_DAT_110963cc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b815f0; end: 106b8160f; -[SCCCosCOSRegistrationPhoneInputViewModel init] */

void FUN_106b815f0(void)

{
  func_0x000106b81a34(PTR_PTR_1126f53d8);
  return;
}



/* Entry: 106b81610; end: 106b8161f; +[SCCCosCOSRegistrationPhoneInputViewModel valdiMarshallableObjectDescriptor] */

void FUN_106b81610(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dde77c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81620; end: 106b8163f; -[SCCCosICOSCommunicationInputIntent initWithType:value:] */

void FUN_106b81620(void)

{
  func_0x000106b81a0c(PTR_PTR_1126f53e0);
  return;
}



/* Entry: 106b81640; end: 106b81653; +[SCCCosICOSCommunicationInputIntent valdiMarshallableObjectDescriptor] */

void FUN_106b81640(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963cd8;
  param_1[1] = &PTR_DAT_110963d20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81654; end: 106b81683; -[SCCCosICOSCommunicationInputParams initWithViewState:stateReducer:] */

void FUN_106b81654(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f53e8);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b81684; end: 106b81697; +[SCCCosICOSCommunicationInputParams valdiMarshallableObjectDescriptor] */

void FUN_106b81684(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963d30;
  param_1[1] = &PTR_DAT_110963d90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81698; end: 106b816b7; -[SCCCosICOSCommunicationInputReduceRequest initWithState:intent:] */

void FUN_106b81698(void)

{
  func_0x000106b81a0c(PTR_PTR_1126f53f0);
  return;
}



/* Entry: 106b816b8; end: 106b816cb; +[SCCCosICOSCommunicationInputReduceRequest valdiMarshallableObjectDescriptor] */

void FUN_106b816b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110963db0;
  param_1[1] = &PTR_DAT_110963df8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b816cc; end: 106b8170b; -[SCCCosICOSCommunicationInputResult initWithAction:] */

void FUN_106b816cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f53f8);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b8170c; end: 106b8171f; +[SCCCosICOSCommunicationInputResult valdiMarshallableObjectDescriptor] */

void FUN_106b8170c(undefined8 *param_1)

{
  *param_1 = &PTR_s_action_110963e10;
  param_1[1] = &PTR_DAT_110963eb8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81720; end: 106b8176b; -[SCCCosICOSCommunicationInputViewState initWithRenderEmail:switchable:primaryButtonTitle:countryCode:phoneNumber:email:] */

void FUN_106b81720(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f5400);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b8176c; end: 106b8177b; +[SCCCosICOSCommunicationInputViewState valdiMarshallableObjectDescriptor] */

void FUN_106b8176c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110963ec8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b8177c; end: 106b8179b; -[SCCCosICOSOTPIntent initWithType:value:] */

void FUN_106b8177c(void)

{
  func_0x000106b81a0c(PTR_PTR_1126f5408);
  return;
}



/* Entry: 106b8179c; end: 106b817af; +[SCCCosICOSOTPIntent valdiMarshallableObjectDescriptor] */

void FUN_106b8179c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110964048;
  param_1[1] = &PTR_DAT_110964090;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b817b0; end: 106b817df; -[SCCCosICOSOTPParams initWithViewState:stateReducer:] */

void FUN_106b817b0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f5410);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b817e0; end: 106b817f3; +[SCCCosICOSOTPParams valdiMarshallableObjectDescriptor] */

void FUN_106b817e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109640a0;
  param_1[1] = &PTR_DAT_110964100;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b817f4; end: 106b81813; -[SCCCosICOSOTPReduceRequest initWithState:intent:] */

void FUN_106b817f4(void)

{
  func_0x000106b81a0c(PTR_PTR_1126f5418);
  return;
}



/* Entry: 106b81814; end: 106b81827; +[SCCCosICOSOTPReduceRequest valdiMarshallableObjectDescriptor] */

void FUN_106b81814(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110964120;
  param_1[1] = &PTR_DAT_110964168;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81828; end: 106b81857; -[SCCCosICOSOTPResult initWithAction:] */

void FUN_106b81828(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f5420);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b81858; end: 106b8186b; +[SCCCosICOSOTPResult valdiMarshallableObjectDescriptor] */

void FUN_106b81858(undefined8 *param_1)

{
  *param_1 = &PTR_s_action_110964180;
  param_1[1] = &PTR_DAT_1109641f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b8186c; end: 106b818c7; -[SCCCosICOSOTPViewState initWithNumDigits:title:subtitle:code:primaryButtonTitle:primaryButtonEnabled:resendButtonTitle:switchable:] */

void FUN_106b8186c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5428;
  uStack_20 = param_1;
  func_0x000106b81a58(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106b818c8; end: 106b818d7; +[SCCCosICOSOTPViewState valdiMarshallableObjectDescriptor] */

void FUN_106b818c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110964208;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b818d8; end: 106b818f7; -[SCCCosICOSPasskeyCreationResult initWithAttestationObject:clientDataJson:] */

void FUN_106b818d8(void)

{
  func_0x000106b81a0c(PTR_PTR_1126f5430);
  return;
}



/* Entry: 106b818f8; end: 106b81907; +[SCCCosICOSPasskeyCreationResult valdiMarshallableObjectDescriptor] */

void FUN_106b818f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110964358;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81908; end: 106b81937; -[SCCCosICountryCode initWithCountryFullName:countryNameAbbreviation:countryCodeNumber:] */

void FUN_106b81908(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000106b81a48(PTR_PTR_1126f5438);
  func_0x000106b81a58(auStack_20);
  return;
}



/* Entry: 106b81938; end: 106b81947; +[SCCCosICountryCode valdiMarshallableObjectDescriptor] */

void FUN_106b81938(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109643a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81948; end: 106b819b7; -[SCCCosRegistrationEmailContext initWithOnDismiss:deckContainerFactory:phoneFormatter:] */

void FUN_106b81948(void)

{
  undefined8 unaff_x21;
  
  func_0x000106b81a60();
  _objc_retain();
  _objc_retainBlock();
  func_0x000106b81a58(&stack0xffffffffffffffc0,PTR_s_initWithFieldValues__1125e24b8);
  func_0x000106b81aa0();
  _objc_release();
  _objc_release(unaff_x21);
  return;
}



/* Entry: 106b819b8; end: 106b819cb; +[SCCCosRegistrationEmailContext valdiMarshallableObjectDescriptor] */

void FUN_106b819b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_110964418;
  param_1[1] = &PTR_DAT_110964478;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b819cc; end: 106b819eb; -[SCCCosRegistrationEmailViewModel init] */

void FUN_106b819cc(void)

{
  func_0x000106b81a34(PTR_PTR_1126f5448);
  return;
}



/* Entry: 106b819ec; end: 106b81aab; +[SCCCosRegistrationEmailViewModel valdiMarshallableObjectDescriptor] */

void FUN_106b819ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dde77e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b81aac; end: 106b81f9f; -[SC1TLCheckbox initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106b81aac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f5450;
  puVar1 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar12 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7ca8;
    _objc_opt_new();
    lVar18 = (long)_DAT_112759288;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c198860(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar14);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar17 = (long)_DAT_11275928c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    FUN_106b820cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar16);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar12 = *(long *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar16;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar8);
    _objc_release(puVar15);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(puVar10);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(puVar4);
    _objc_release(lVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf258a0();
  func_0x00010c1749e0(lVar12);
  puVar1 = (undefined8 *)(lVar12 + _DAT_112759290);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf258a0(lVar12);
  func_0x00010bf7d960(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 106b81fa0; end: 106b81ff7; -[SC1TLCheckbox _checkboxTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b81fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf258a0();
  func_0x00010c1749e0(param_1,param_2,(uint)lVar1 ^ 1);
  lVar1 = param_1 + _DAT_112759290;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf258a0(param_1);
  func_0x00010bf7d960(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b81ff8; end: 106b82007; -[SC1TLCheckbox setButtonSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b81ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759288),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 106b82008; end: 106b82017; -[SC1TLCheckbox buttonSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759288),PTR_s_isSelected_1125fcfa8);
  return;
}



/* Entry: 106b82018; end: 106b8204b; -[SC1TLCheckbox intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b82018(long param_1)

{
  func_0x00010c0699c0(*(undefined8 *)(param_1 + _DAT_11275928c));
  return *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
}



/* Entry: 106b8204c; end: 106b8206b; -[SC1TLCheckbox delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8204c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8206c; end: 106b8207f; -[SC1TLCheckbox setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8206c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759290,param_3);
  return;
}



/* Entry: 106b82080; end: 106b820cb; -[SC1TLCheckbox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82080(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759290);
  _objc_storeStrong(param_1 + _DAT_11275928c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759288,0);
  return;
}



/* Entry: 106b820cc; end: 106b820e3;  */

void FUN_106b820cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e766f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e766f8,
                      &PTR____CFConstantStringClassReference_110e76718,0);
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



/* Entry: 106b820e4; end: 106b82133; -[SCRoundedCornerCheckbox initWithFrame:] */

undefined1 * FUN_106b820e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b82134; end: 106b823a3; -[SCRoundedCornerCheckbox _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82134(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar10 = (long)_DAT_112759294;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_90 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_a0 = uVar9;
  uStack_88 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_a8 = uVar3;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  _objc_release(uStack_90);
  uVar8 = 0;
  lVar2 = param_1;
  func_0x00010c1fadc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106b823a4;
  lVar5 = lVar2;
  uStack_e0 = uVar7;
  lStack_d8 = lVar10;
  uStack_d0 = uVar6;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((uVar8 & 1) == 0) {
    func_0x000106b825b8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106b8253c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(lVar2 + _DAT_112759294));
  _objc_release(lVar5);
  puStack_e8 = PTR_PTR_1126f5458;
  lStack_f0 = lVar2;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_setSelected__11265c598,uVar8);
  return;
}



/* Entry: 106b823a4; end: 106b82433; -[SCRoundedCornerCheckbox setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b823a4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  if ((param_3 & 1) == 0) {
    func_0x000106b825b8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106b8253c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112759294));
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f5458;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598,param_3);
  return;
}



/* Entry: 106b82434; end: 106b82507; -[SCRoundedCornerCheckbox pointInside:withEvent:] */

undefined1 *
FUN_106b82434(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf9c0e0();
  if (((puVar1 == (undefined1 *)0x0) || (puVar1 = param_3, func_0x00010c071800(), (int)puVar1 == 0))
     || (puVar1 = param_3, func_0x00010c074c20(), (int)puVar1 != 0)) {
    puStack_48 = PTR_PTR_1126f5458;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_pointInside_withEvent__11261e4e8,param_5);
    param_3 = (undefined1 *)ppuVar2;
  }
  else {
    func_0x00010bf9c0e0(param_3);
    func_0x00010bf20c00(param_3);
    _CGRectInset();
    _CGRectContainsPoint();
  }
  _objc_release(param_5);
  return param_3;
}



/* Entry: 106b82508; end: 106b82517; -[SCRoundedCornerCheckbox expandedTouchAreaMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b82508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759298);
}



/* Entry: 106b82518; end: 106b82527; -[SCRoundedCornerCheckbox setExpandedTouchAreaMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82518(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759298) = param_3;
  return;
}



/* Entry: 106b82528; end: 106b8253b; -[SCRoundedCornerCheckbox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759294,0);
  return;
}



/* Entry: 106b8253c; end: 106b82633;  */

void FUN_106b8253c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126d0ce0;
  _objc_opt_class(PTR_PTR_1126d0ce0);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e76738,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b82634; end: 106b82797; -[SCPhoneCodeBusinessLogic initWithPhoneReceivingCode:initialCodeDeliveryMechanism:phoneCodeVerifier:resendableCode:delegate:shouldShowSwitchToVoiceOption:allowSwitchMinimumFailureCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b82634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f5460;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275929c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127592a0) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127592a4) = 0;
    lVar3 = (long)_DAT_1127592a8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127592ac;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127592b0),param_7);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127592b4) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127592b8) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127592bc) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127592c0) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b82798; end: 106b8286f; -[SCPhoneCodeBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82798(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = PTR_PTR_1126d0ce8;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11275929c);
  lVar5 = param_1;
  func_0x00010bdca4c0(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127592b4);
  lVar6 = *(long *)(param_1 + _DAT_1127592b8);
  uVar2 = *(undefined1 *)(param_1 + _DAT_1127592c4);
  uVar3 = *(undefined1 *)(param_1 + _DAT_1127592c8);
  func_0x00010bebb5a0();
  func_0x00010c035920(puVar4,param_2,uVar7,lVar5,uVar1,lVar6 == 1,uVar2,uVar3,lVar6 == 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b82870; end: 106b82887; -[SCPhoneCodeBusinessLogic _alternateDeliveryMechanism] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b82870(long param_1)

{
  return *(long *)(param_1 + _DAT_1127592a0) == 0;
}



/* Entry: 106b82888; end: 106b82943; -[SCPhoneCodeBusinessLogic handleAction:] */

void FUN_106b82888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b82944;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b8294c;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b82954;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106b8298c;
  puStack_98 = &UNK_110842e18;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106b829dc;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf9e0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 106b82944; end: 106b82953;  */

void FUN_106b82944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__promptToSendCodeWithAlternateDe_11257e668);
  return;
}



/* Entry: 106b82954; end: 106b82a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82954(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127592b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0faae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b82a14; end: 106b82b97; -[SCPhoneCodeBusinessLogic resendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_1127592c8) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_1127592d4) == '\x01') {
    func_0x00010bdca4c0(param_1);
  }
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592a8);
  _objc_retain();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c136200(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106b82b98; end: 106b82c4f;  */

void FUN_106b82b98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b82c50;
  puStack_50 = &UNK_110848558;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106b82c50; end: 106b82c87;  */

void FUN_106b82c50(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b82c88; end: 106b82ce3; -[SCPhoneCodeBusinessLogic codeUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82c88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127592cc);
  *(undefined8 *)(param_1 + _DAT_1127592cc) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_1127592b8) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b82ce4; end: 106b82e53; -[SCPhoneCodeBusinessLogic submitCode:wasAutofilled:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b82ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_1127592c4) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592a8);
  _objc_retain();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010c298a00(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b82e54; end: 106b83053;  */

void FUN_106b82e54(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_2 - 1U < 2) {
    lVar3 = *(long *)(param_1 + 0x20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106b83088;
    puStack_98 = &UNK_1108484f8;
    puVar1 = auStack_80;
    _objc_copyWeak(puVar1,param_1 + 0x30);
    lStack_78 = param_2;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = param_3;
    _objc_retain(uVar2);
    uStack_88 = uVar2;
    (**(code **)(lVar3 + 0x10))(lVar3,&puStack_b0);
    _objc_release(uStack_88);
    uVar2 = uStack_90;
  }
  else if (param_2 == 3) {
    lVar3 = *(long *)(param_1 + 0x20);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x106b830c0;
    puStack_d8 = &UNK_1108484f8;
    puVar1 = auStack_c0;
    _objc_copyWeak(puVar1,param_1 + 0x30);
    uStack_b8 = 3;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_d0 = param_3;
    _objc_retain(uVar2);
    uStack_c8 = uVar2;
    (**(code **)(lVar3 + 0x10))(lVar3,&puStack_f0);
    _objc_release(uStack_c8);
    uVar2 = uStack_d0;
  }
  else {
    if (param_2 != 0) goto LAB_106b83018;
    lVar3 = *(long *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106b83054;
    puStack_58 = &UNK_110848708;
    puVar1 = auStack_48;
    _objc_copyWeak(puVar1,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    (**(code **)(lVar3 + 0x10))(lVar3,&puStack_70);
    uVar2 = uStack_50;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar1);
LAB_106b83018:
  _objc_release(param_3);
  return;
}



/* Entry: 106b83054; end: 106b830f7;  */

void FUN_106b83054(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b830f8; end: 106b831f3; -[SCPhoneCodeBusinessLogic _promptToSendCodeWithAlternateDeliveryMechanism] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b830f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + _DAT_1127592a4) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_1127592ac);
    uStack_48 = 0;
    func_0x00010bf2ccc0(uVar1,param_2,&uStack_48);
    uVar5 = uStack_48;
    _objc_retain(uStack_48);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar5;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127592d0);
      *(undefined8 *)(param_1 + _DAT_1127592d0) = uVar4;
      _objc_release(uVar3);
      uVar4 = 2;
      goto LAB_106b8318c;
    }
  }
  else {
    uVar5 = 0;
  }
  uVar4 = 1;
LAB_106b8318c:
  lVar6 = (long)_DAT_1127592b8;
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  *(undefined8 *)(param_1 + lVar6) = 0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127592d0);
  *(undefined8 *)(param_1 + _DAT_1127592d0) = 0;
  _objc_release(uVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 106b831f4; end: 106b83223; -[SCPhoneCodeBusinessLogic _sendCodeWithAlternateDeliveryMechanism] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b831f4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127592d4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c064cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127592ac),PTR_s_initiateCodeResendForced__1125f6d40,
             (*(byte *)(param_1 + _DAT_1127592a4) ^ 0xff) & 1);
  return;
}



/* Entry: 106b83224; end: 106b8338b; -[SCPhoneCodeBusinessLogic _codeResentWithResult:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83224(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_4;
  _objc_retain();
  if (param_3 == 2) {
    func_0x000106b857fc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + _DAT_1127592d0);
    *(long *)(param_1 + _DAT_1127592d0) = lVar1;
LAB_106b83310:
    uVar3 = 2;
  }
  else {
    if (param_3 == 1) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127592d0);
      *(undefined8 *)(param_1 + _DAT_1127592d0) = 0;
      _objc_release(uVar3);
      lVar2 = param_1 + _DAT_1127592b0;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0fab20();
      goto LAB_106b83310;
    }
    if (param_3 != 0) goto LAB_106b8332c;
    func_0x00010c2845e0(*(undefined8 *)(param_1 + _DAT_1127592ac));
    if (*(char *)(param_1 + _DAT_1127592d4) == '\x01') {
      lVar1 = param_1;
      func_0x00010bdca4c0();
      *(long *)(param_1 + _DAT_1127592a0) = lVar1;
      *(undefined1 *)(param_1 + _DAT_1127592a4) = 1;
    }
    lVar2 = *(long *)(param_1 + _DAT_1127592d0);
    *(undefined8 *)(param_1 + _DAT_1127592d0) = 0;
    uVar3 = 1;
  }
  _objc_release(lVar2);
  (**(code **)(param_4 + 0x10))(param_4,uVar3);
LAB_106b8332c:
  *(undefined1 *)(param_1 + _DAT_1127592c8) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127592cc);
  *(undefined8 *)(param_1 + _DAT_1127592cc) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_1127592d4) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b8338c; end: 106b8339b; -[SCPhoneCodeBusinessLogic _phoneVerificationSucceeded:] */

void FUN_106b8338c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106b83398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,1);
  return;
}



/* Entry: 106b8339c; end: 106b834bf; -[SCPhoneCodeBusinessLogic _phoneVerificationFailed:errorMessage:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8339c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_1127592c4) = 0;
  *(long *)(param_1 + _DAT_1127592c0) = *(long *)(param_1 + _DAT_1127592c0) + 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127592cc);
  *(undefined8 *)(param_1 + _DAT_1127592cc) = param_4;
  _objc_release(uVar1);
  if (param_3 == 3) {
    lVar3 = (long)_DAT_1127592b8;
    *(undefined8 *)(param_1 + lVar3) = 3;
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    *(undefined8 *)(param_1 + lVar3) = 0;
    uVar1 = 3;
  }
  else if (param_3 == 1) {
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
    uVar1 = 2;
  }
  else {
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
    uVar1 = 3;
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b834c0; end: 106b834ef; -[SCPhoneCodeBusinessLogic _showSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b834c0(long param_1)

{
  if (-1 < *(long *)(param_1 + _DAT_1127592bc)) {
    return *(long *)(param_1 + _DAT_1127592bc) <= *(long *)(param_1 + _DAT_1127592c0);
  }
  return false;
}



/* Entry: 106b834f0; end: 106b8356b; -[SCPhoneCodeBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b834f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127592d0,0);
  _objc_storeStrong(param_1 + _DAT_1127592cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127592b0);
  _objc_storeStrong(param_1 + _DAT_1127592a8,0);
  _objc_storeStrong(param_1 + _DAT_11275929c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127592ac,0);
  return;
}



/* Entry: 106b8356c; end: 106b8387b; -[SCPhoneCodeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8356c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126af450;
  _objc_alloc();
  func_0x00010c01de60(0x3ff0000000000000);
  puVar2 = PTR_PTR_1126af458;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106b857e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c1c0(puVar2,param_2,6,1,0,0x3c,puVar3,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d0cf0;
  _objc_alloc();
  lVar19 = (long)_DAT_1127592d8;
  lVar18 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar5 = lVar18;
  func_0x00010c0fb180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c063c80();
  lVar8 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf3ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c234560();
  lVar14 = param_1;
  func_0x00010bdca320();
  func_0x00010c035be0(puVar3,param_2,lVar5,lVar7,lVar9,puVar2,lVar11,lVar13,lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar18);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  lVar18 = (long)_DAT_1127592dc;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar4;
  _objc_release(uVar17);
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bef76a0(uVar15,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d0cf8;
  _objc_alloc(PTR_PTR_1126d0cf8);
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c150e00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010c150e00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_1127592e0;
  _objc_loadWeakRetained(lVar18);
  lVar6 = lVar18;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0358a0(puVar4,param_2,uVar16,uVar17,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar18 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b8387c; end: 106b83973; -[SCPhoneCodeEntryPoint _allowSwitchMinimumFailureCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b8387c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_1127592e4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lRam00000001136c6c60;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b839fc;
  puStack_40 = &UNK_110842e18;
  lStack_38 = lVar2;
  _objc_retain();
  lVar3 = lVar2;
  if (lVar4 != -1) {
    func_0x00010002a2fc(0x1136c6c60,&puStack_58);
    lVar3 = lStack_38;
  }
  lVar4 = (long)iRam00000001136c6c58;
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_1127592d8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c234540();
  _objc_release(param_1);
  if ((int)lVar1 == 0) {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 106b83974; end: 106b83993; -[SCPhoneCodeEntryPoint attributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83974(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127592e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b83994; end: 106b839a7; -[SCPhoneCodeEntryPoint setAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127592e0,param_3);
  return;
}



/* Entry: 106b839a8; end: 106b839fb; -[SCPhoneCodeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b839a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127592e0);
  _objc_destroyWeak(param_1 + _DAT_1127592e4);
  _objc_destroyWeak(param_1 + _DAT_1127592d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127592dc,0);
  return;
}



/* Entry: 106b839fc; end: 106b83a2b;  */

void FUN_106b839fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e76778,0xffffffff,0);
  uRam00000001136c6c58 = (int)uVar1;
  return;
}



/* Entry: 106b83a2c; end: 106b83b13; -[SCNGOPhoneCodeViewController initWithPhoneCodeScreen:resendableCodeScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b83a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5468;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127592e8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127592ec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127592f0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b83b14; end: 106b83b1b; -[SCNGOPhoneCodeViewController pageViewName] */

undefined8 FUN_106b83b14(void)

{
  return 0xc3;
}



/* Entry: 106b83b1c; end: 106b83b8f; -[SCNGOPhoneCodeViewController viewDidLoad] */

void FUN_106b83b1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c10f380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 106b83b90; end: 106b83bff; -[SCNGOPhoneCodeViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83b90(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5468;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_1127592f4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127592f0);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 106b83c00; end: 106b83c7f; -[SCNGOPhoneCodeViewController pinCodeInputFieldTextDidChange:wasAutofilled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83c00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af440;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592e8);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bde0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b83c80; end: 106b83ccb; -[SCNGOPhoneCodeViewController presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83c80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592ec);
  puVar1 = PTR_PTR_1126d0d00;
  func_0x00010bf9b9c0(PTR_PTR_1126d0d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b83ccc; end: 106b83cdb; -[SCNGOPhoneCodeViewController presentationControllerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127592f4),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 106b83cdc; end: 106b83df7; -[SCNGOPhoneCodeViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83cdc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127592e8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b83df8;
  puStack_58 = &UNK_110849350;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c250380(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127592ec);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b83df8; end: 106b83e87;  */

void FUN_106b83df8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b83e88; end: 106b8406b; -[SCNGOPhoneCodeViewController _setPhoneCodeViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b83e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106b8579c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127592f8),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf3ee60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar1 = param_3;
    func_0x00010bf3ed80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
    lVar1 = lVar5;
  }
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
  if ((int)puVar2 == 0) {
    lVar5 = param_3;
    func_0x00010c27fa40();
    if ((int)lVar5 != 0) {
      func_0x00010bebba80(param_1,param_2,lVar1);
      goto LAB_106b83ff8;
    }
    func_0x00010c173280(*(undefined8 *)(param_1 + _DAT_1127592f4),param_2,0xc2);
    lVar5 = (long)_DAT_1127592fc;
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    uVar4 = 4;
  }
  else {
    func_0x00010c1382e0(*(undefined8 *)(param_1 + _DAT_1127592f4));
    lVar5 = (long)_DAT_1127592fc;
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,0);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    uVar4 = 1;
  }
  func_0x00010c209fc0(uVar3,param_2,uVar4);
LAB_106b83ff8:
  lVar5 = param_3;
  func_0x00010c23a5e0();
  if ((int)lVar5 == 0) {
    func_0x00010c161160(*(undefined8 *)(param_1 + _DAT_1127592fc),param_2,0);
  }
  else {
    func_0x000106b85814();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161160(*(undefined8 *)(param_1 + _DAT_1127592fc),param_2,lVar5);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8406c; end: 106b841b7; -[SCNGOPhoneCodeViewController _setResendableCodeViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8406c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c137e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112759300;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf96d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127592f4),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf926c0(param_3);
  lVar3 = (long)_DAT_112759304;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  lVar1 = param_3;
  func_0x00010bfeb7c0(param_3);
  func_0x00010c1beb60(uVar4,param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c137d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = (long)_DAT_112759308;
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c137d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar4,param_2,lVar2,0);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
  }
  func_0x00010c1a7f60(uVar4,param_2,lVar1 == 0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b841b8; end: 106b8533b; -[SCNGOPhoneCodeViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b841b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long lVar58;
  long lVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  long lVar65;
  long lVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  double in_d3;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c1677c0(0x3fb999999999999a);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4004000000000000);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar3,param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126af078;
  _objc_opt_new();
  lVar90 = (long)_DAT_11275930c;
  uVar88 = *(undefined8 *)(param_1 + lVar90);
  *(undefined **)(param_1 + lVar90) = puVar1;
  _objc_release(uVar88);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar90),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar94 = (long)_DAT_112759310;
  uVar88 = *(undefined8 *)(param_1 + lVar94);
  *(undefined **)(param_1 + lVar94) = puVar1;
  _objc_release(uVar88);
  uVar88 = *(undefined8 *)(param_1 + lVar94);
  func_0x00010c21ad00(uVar88,param_2,3);
  FUN_106b85784();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar94),param_2,uVar88);
  _objc_release(uVar88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar94),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar94),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar96 = (long)_DAT_1127592f8;
  uVar88 = *(undefined8 *)(param_1 + lVar96);
  *(undefined **)(param_1 + lVar96) = puVar1;
  _objc_release(uVar88);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar96),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar96),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar96),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126af298;
  _objc_alloc();
  func_0x00010c00c740();
  lVar91 = (long)_DAT_1127592f4;
  uVar88 = *(undefined8 *)(param_1 + lVar91);
  *(undefined **)(param_1 + lVar91) = puVar1;
  _objc_release(uVar88);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar91),param_2,
                      &PTR____CFConstantStringClassReference_110dae718);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar91),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126d0d08;
  _objc_opt_new();
  lVar95 = (long)_DAT_1127592fc;
  uVar88 = *(undefined8 *)(param_1 + lVar95);
  *(undefined **)(param_1 + lVar95) = puVar1;
  _objc_release(uVar88);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar95),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar95),param_2,param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar93 = (long)_DAT_112759300;
  uVar88 = *(undefined8 *)(param_1 + lVar93);
  *(undefined **)(param_1 + lVar93) = puVar1;
  _objc_release(uVar88);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar93),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar93),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar93),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar97 = (long)_DAT_112759308;
  uVar88 = *(undefined8 *)(param_1 + lVar97);
  *(undefined **)(param_1 + lVar97) = puVar1;
  _objc_release(uVar88);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar97),param_2,6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar97),param_2,0);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar97),param_2,0xc1,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar97),param_2,param_1,
                      PTR_s__resendButtonTapped_112528f90,0x40);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar92 = (long)_DAT_112759304;
  uVar88 = *(undefined8 *)(param_1 + lVar92);
  *(undefined **)(param_1 + lVar92) = puVar1;
  _objc_release(uVar88);
  uVar88 = *(undefined8 *)(param_1 + lVar92);
  func_0x00010c20eaa0(uVar88,param_2,0);
  uVar89 = *(undefined8 *)(param_1 + lVar92);
  func_0x000106b857b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar89,param_2,uVar88,0);
  _objc_release(uVar88);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar92),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar92),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_158 = puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493c0(0x4020000000000000,puVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_150 = puVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  puStack_148 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf49420(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar90);
  puStack_140 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar90);
  uStack_138 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar90);
  uStack_130 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar94);
  uStack_128 = uVar28;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,lVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar94);
  uStack_120 = uVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar33;
  func_0x00010bf493c0(in_d3 / 6.0,uVar33,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar96);
  uStack_118 = uVar36;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar37;
  func_0x00010bf493a0(uVar37,param_2,lVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar96);
  uStack_110 = uVar40;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar94);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493c0(0x4020000000000000,uVar41,param_2,uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar91);
  uStack_108 = uVar43;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar44;
  func_0x00010bf493a0(uVar44,param_2,lVar46);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar91);
  uStack_100 = uVar47;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar96);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar48;
  func_0x00010bf493c0(0x4040000000000000,uVar48,param_2,uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar91);
  uStack_f8 = uVar50;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar51;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + lVar91);
  uStack_f0 = uVar52;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar53;
  func_0x00010bf493c0(0x403e000000000000,uVar53,param_2,lVar55);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar91);
  uStack_e8 = uVar56;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar57;
  func_0x00010bf493c0(0xc03e000000000000,uVar57,param_2,lVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_1 + lVar95);
  uStack_e0 = uVar60;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = *(undefined8 *)(param_1 + lVar91);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = uVar61;
  func_0x00010bf493c0(0x4030000000000000,uVar61,param_2,uVar62);
  _objc_retainAutoreleasedReturnValue();
  uVar64 = *(undefined8 *)(param_1 + lVar95);
  uStack_d8 = uVar63;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar64;
  func_0x00010bf493a0(uVar64,param_2,lVar66);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = *(undefined8 *)(param_1 + lVar95);
  uStack_d0 = uVar67;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar69 = *(undefined8 *)(param_1 + lVar91);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = uVar68;
  func_0x00010bf49500(uVar68,param_2,uVar69);
  _objc_retainAutoreleasedReturnValue();
  uVar71 = *(undefined8 *)(param_1 + lVar93);
  uStack_c8 = uVar70;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar96 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar94 = lVar96;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = uVar71;
  func_0x00010bf493a0(uVar71,param_2,lVar94);
  _objc_retainAutoreleasedReturnValue();
  uVar73 = *(undefined8 *)(param_1 + lVar93);
  uStack_c0 = uVar72;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar74 = *(undefined8 *)(param_1 + lVar95);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar75 = uVar73;
  func_0x00010bf493a0(uVar73,param_2,uVar74);
  _objc_retainAutoreleasedReturnValue();
  uVar76 = *(undefined8 *)(param_1 + lVar97);
  uStack_b8 = uVar75;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar77 = *(undefined8 *)(param_1 + lVar93);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar78 = uVar76;
  func_0x00010bf493a0(uVar76,param_2,uVar77);
  _objc_retainAutoreleasedReturnValue();
  uVar79 = *(undefined8 *)(param_1 + lVar97);
  uStack_b0 = uVar78;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar80 = *(undefined8 *)(param_1 + lVar93);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar81 = uVar79;
  func_0x00010bf493a0(uVar79,param_2,uVar80);
  _objc_retainAutoreleasedReturnValue();
  uVar82 = *(undefined8 *)(param_1 + lVar92);
  uStack_a8 = uVar81;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = lVar97;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar83 = uVar82;
  func_0x00010bf493a0(uVar82,param_2,lVar95);
  _objc_retainAutoreleasedReturnValue();
  uVar84 = *(undefined8 *)(param_1 + lVar92);
  uStack_a0 = uVar83;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = lVar93;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar89 = uVar84;
  func_0x00010bf493c0(0xc030000000000000,uVar84,param_2,lVar91);
  _objc_retainAutoreleasedReturnValue();
  uVar85 = *(undefined8 *)(param_1 + lVar92);
  uStack_98 = uVar89;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar90;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar88 = uVar85;
  func_0x00010bf493c0(0x4038000000000000,uVar85,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar86 = *(undefined8 *)(param_1 + lVar92);
  uStack_90 = uVar88;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar87 = uVar86;
  func_0x00010bf493c0(0xc038000000000000,uVar86,param_2,lVar92);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar87;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_158,0x1b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar87);
  _objc_release(lVar92);
  _objc_release(param_1);
  _objc_release(uVar86);
  _objc_release(uVar88);
  _objc_release(lVar2);
  _objc_release(lVar90);
  _objc_release(uVar85);
  _objc_release(uVar89);
  _objc_release(lVar91);
  _objc_release(lVar93);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(lVar95);
  _objc_release(lVar97);
  _objc_release(uVar82);
  _objc_release(uVar81);
  _objc_release(uVar80);
  _objc_release(uVar79);
  _objc_release(uVar78);
  _objc_release(uVar77);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(lVar94);
  _objc_release(lVar96);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
  _objc_release(uVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar88 = *(undefined8 *)(puVar3 + _DAT_1127592e8);
  puVar1 = PTR_PTR_1126af440;
  func_0x00010c25f020(PTR_PTR_1126af440);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar88,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b8533c; end: 106b85387; -[SCNGOPhoneCodeViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8533c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592e8);
  puVar1 = PTR_PTR_1126af440;
  func_0x00010c25f020(PTR_PTR_1126af440);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b85388; end: 106b853d3; -[SCNGOPhoneCodeViewController _resendButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b85388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592e8);
  puVar1 = PTR_PTR_1126af440;
  func_0x00010c137da0(PTR_PTR_1126af440);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b853d4; end: 106b8541f; -[SCNGOPhoneCodeViewController accessoryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b853d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127592ec);
  puVar1 = PTR_PTR_1126d0d00;
  func_0x00010c2657c0(PTR_PTR_1126d0d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b85420; end: 106b855e3; -[SCNGOPhoneCodeViewController _showUnretryableAlertWithMessage:] */

void FUN_106b85420(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000106b8582c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bde61e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b855e4; end: 106b8560f;  */

void FUN_106b855e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde61e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b85610; end: 106b85663; -[SCNGOPhoneCodeViewController _confirmUnretryableError] */

void FUN_106b85610(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b85664;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf84b00(param_1,param_2,1,&puStack_38);
  return;
}



/* Entry: 106b85664; end: 106b856b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b85664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127592ec);
  puVar1 = PTR_PTR_1126d0d00;
  func_0x00010bf9b9c0(PTR_PTR_1126d0d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b856b4; end: 106b85783; -[SCNGOPhoneCodeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b856b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127592f0,0);
  _objc_storeStrong(param_1 + _DAT_11275930c,0);
  _objc_storeStrong(param_1 + _DAT_1127592fc,0);
  _objc_storeStrong(param_1 + _DAT_112759304,0);
  _objc_storeStrong(param_1 + _DAT_112759308,0);
  _objc_storeStrong(param_1 + _DAT_112759300,0);
  _objc_storeStrong(param_1 + _DAT_1127592f4,0);
  _objc_storeStrong(param_1 + _DAT_1127592f8,0);
  _objc_storeStrong(param_1 + _DAT_112759310,0);
  _objc_storeStrong(param_1 + _DAT_1127592ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127592e8,0);
  return;
}


