/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbdfc54; end: 10bbdfc8b; -[SCAInAppWarningDialogDismiss addToProtoDictionary] */

void FUN_10bbdfc54(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdfc8c; end: 10bbdfce3; -[SCAInAppWarningDialogDismiss toProtoWithAllowedFields:] */

void FUN_10bbdfc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbdfce4; end: 10bbdfceb; -[SCAInAppWarningDialogDismiss getPayloadIdentifier] */

undefined8 FUN_10bbdfce4(void)

{
  return 0x1352;
}



/* Entry: 10bbdfcec; end: 10bbdfd1f; -[SCAInAppWarningDialogView fromDictionary:] */

void FUN_10bbdfcec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d590;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbdfd20; end: 10bbdfd2b; -[SCAInAppWarningDialogView getEventName] */

undefined ** FUN_10bbdfd20(void)

{
  return &PTR____CFConstantStringClassReference_110fc6e58;
}



/* Entry: 10bbdfd2c; end: 10bbdfd33; -[SCAInAppWarningDialogView getEventQoS] */

undefined8 FUN_10bbdfd2c(void)

{
  return 2;
}



/* Entry: 10bbdfd34; end: 10bbdfd57; -[SCAInAppWarningDialogView getFieldNumberToFieldDict] */

void FUN_10bbdfd34(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdfd58; end: 10bbdfd8f; -[SCAInAppWarningDialogView addToProtoDictionary] */

void FUN_10bbdfd58(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdfd90; end: 10bbdfde7; -[SCAInAppWarningDialogView toProtoWithAllowedFields:] */

void FUN_10bbdfd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbdfde8; end: 10bbdfdef; -[SCAInAppWarningDialogView getPayloadIdentifier] */

undefined8 FUN_10bbdfde8(void)

{
  return 0x1353;
}



/* Entry: 10bbdfdf0; end: 10bbdff3f; -[SCAInAppWarningLinkClicked fromDictionary:] */

void FUN_10bbdfdf0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c21d420(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c21d440(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdff40; end: 10bbdff4b; -[SCAInAppWarningLinkClicked getEventName] */

undefined ** FUN_10bbdff40(void)

{
  return &PTR____CFConstantStringClassReference_110fc6e78;
}



/* Entry: 10bbdff4c; end: 10bbdff53; -[SCAInAppWarningLinkClicked getEventQoS] */

undefined8 FUN_10bbdff4c(void)

{
  return 2;
}



/* Entry: 10bbdff54; end: 10bbdff6b; -[SCAInAppWarningLinkClicked setUrlLink:] */

void FUN_10bbdff54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_1110173d8,2,param_3,0);
  return;
}



/* Entry: 10bbdff6c; end: 10bbdff83; -[SCAInAppWarningLinkClicked setUrlLinkText:] */

void FUN_10bbdff6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d398,3,param_3,0);
  return;
}



/* Entry: 10bbdff84; end: 10bbdffa7; -[SCAInAppWarningLinkClicked getFieldNumberToFieldDict] */

void FUN_10bbdff84(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdffa8; end: 10bbdffdf; -[SCAInAppWarningLinkClicked addToProtoDictionary] */

void FUN_10bbdffa8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdffe0; end: 10bbe0037; -[SCAInAppWarningLinkClicked toProtoWithAllowedFields:] */

void FUN_10bbdffe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe0038; end: 10bbe003f; -[SCAInAppWarningLinkClicked getPayloadIdentifier] */

undefined8 FUN_10bbe0038(void)

{
  return 0x1354;
}



/* Entry: 10bbe0040; end: 10bbe0117; -[SCAInAppWarningSynced fromDictionary:] */

void FUN_10bbe0040(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1c6e00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe0118; end: 10bbe0123; -[SCAInAppWarningSynced getEventName] */

undefined ** FUN_10bbe0118(void)

{
  return &PTR____CFConstantStringClassReference_110fc6e98;
}



/* Entry: 10bbe0124; end: 10bbe012b; -[SCAInAppWarningSynced getEventQoS] */

undefined8 FUN_10bbe0124(void)

{
  return 2;
}



/* Entry: 10bbe012c; end: 10bbe0143; -[SCAInAppWarningSynced setMessage:] */

void FUN_10bbe012c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd9438,2,param_3,0);
  return;
}



/* Entry: 10bbe0144; end: 10bbe0167; -[SCAInAppWarningSynced getFieldNumberToFieldDict] */

void FUN_10bbe0144(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe0168; end: 10bbe019f; -[SCAInAppWarningSynced addToProtoDictionary] */

void FUN_10bbe0168(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbe01a0; end: 10bbe01f7; -[SCAInAppWarningSynced toProtoWithAllowedFields:] */

void FUN_10bbe01a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe01f8; end: 10bbe01ff; -[SCAInAppWarningSynced getPayloadIdentifier] */

undefined8 FUN_10bbe01f8(void)

{
  return 0x17ab;
}



/* Entry: 10bbe0200; end: 10bbe02cb; -[SCAInSettingSupportItemClick fromDictionary:] */

void FUN_10bbe0200(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb165c4();
    func_0x00010c20fec0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe02cc; end: 10bbe02d7; -[SCAInSettingSupportItemClick getEventName] */

undefined ** FUN_10bbe02cc(void)

{
  return &PTR____CFConstantStringClassReference_110fc6eb8;
}



/* Entry: 10bbe02d8; end: 10bbe02df; -[SCAInSettingSupportItemClick getEventQoS] */

undefined8 FUN_10bbe02d8(void)

{
  return 1;
}



/* Entry: 10bbe02e0; end: 10bbe035f; -[SCAInSettingSupportItemClick setSupportSettingItem:] */

void FUN_10bbe02e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb165a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101d3b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe0360; end: 10bbe0363; -[SCAInSettingSupportItemClick getFieldNumberToFieldDict] */

void FUN_10bbe0360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe0364; end: 10bbe036f; -[SCAInSettingSupportItemClick toProtoWithAllowedFields:] */

void FUN_10bbe0364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbe0370; end: 10bbe0377; -[SCAInSettingSupportItemClick getPayloadIdentifier] */

undefined8 FUN_10bbe0370(void)

{
  return 0x49f;
}



/* Entry: 10bbe0378; end: 10bbe04af; -[SCAInclusionPanelEvent fromDictionary:] */

void FUN_10bbe0378(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafef90();
    func_0x00010c161620(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc92e28();
    func_0x00010c206c40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe04b0; end: 10bbe04bb; -[SCAInclusionPanelEvent getEventName] */

undefined ** FUN_10bbe04b0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6ed8;
}



/* Entry: 10bbe04bc; end: 10bbe04c3; -[SCAInclusionPanelEvent getEventQoS] */

undefined8 FUN_10bbe04bc(void)

{
  return 1;
}



/* Entry: 10bbe04c4; end: 10bbe04cf; -[SCAInclusionPanelEvent getPerUserSamplingRateV2] */

undefined8 FUN_10bbe04c4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe04d0; end: 10bbe054f; -[SCAInclusionPanelEvent setAction:] */

void FUN_10bbe04d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafef70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe0550; end: 10bbe05cf; -[SCAInclusionPanelEvent setSource:] */

void FUN_10bbe0550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe05d0; end: 10bbe05d3; -[SCAInclusionPanelEvent getFieldNumberToFieldDict] */

void FUN_10bbe05d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe05d4; end: 10bbe05df; -[SCAInclusionPanelEvent toProtoWithAllowedFields:] */

void FUN_10bbe05d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbe05e0; end: 10bbe05e7; -[SCAInclusionPanelEvent getPayloadIdentifier] */

undefined8 FUN_10bbe05e0(void)

{
  return 0xd6d;
}



/* Entry: 10bbe05e8; end: 10bbe07a3; -[SCAItemActionBase fromDictionary:] */

void FUN_10bbe05e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bae695c();
    func_0x00010c1618e0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafcb38();
    func_0x00010c161fe0(param_1);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126c8408;
  _objc_alloc(PTR_PTR_1126c8408);
  func_0x00010c00c560();
  func_0x00010c1d8300(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d66c8;
  _objc_alloc(PTR_PTR_1126d66c8);
  func_0x00010c00c560();
  func_0x00010c1d8360(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d66d0;
  _objc_alloc(PTR_PTR_1126d66d0);
  func_0x00010c00c560();
  func_0x00010c1d85e0(param_1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe07a4; end: 10bbe081f; -[SCAItemActionBase setActionContext:] */

void FUN_10bbe07a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae693c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9d58,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe0820; end: 10bbe089b; -[SCAItemActionBase setActionType:] */

void FUN_10bbe0820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafcb18(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe089c; end: 10bbe08df; -[SCAItemActionBase setPageInstanceInfo:] */

void FUN_10bbe089c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9d78,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe08e0; end: 10bbe0923; -[SCAItemActionBase setPageItemInfo:] */

void FUN_10bbe08e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9d98,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe0924; end: 10bbe0967; -[SCAItemActionBase setPageSectionInfo:] */

void FUN_10bbe0924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9db8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe0968; end: 10bbe0ae7; -[SCAItemActionBase prepareDictionary:] */

void FUN_10bbe0968(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270d5b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe0ae8; end: 10bbe0c9f; -[SCAItemImpressionBase fromDictionary:] */

void FUN_10bbe0ae8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1ab480(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafeb8c();
    func_0x00010c1ab4e0(param_1);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126c8408;
  _objc_alloc(PTR_PTR_1126c8408);
  func_0x00010c00c560();
  func_0x00010c1d8300(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d66c8;
  _objc_alloc(PTR_PTR_1126d66c8);
  func_0x00010c00c560();
  func_0x00010c1d8360(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d66d0;
  _objc_alloc(PTR_PTR_1126d66d0);
  func_0x00010c00c560();
  func_0x00010c1d85e0(param_1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe0ca0; end: 10bbe0cef; -[SCAItemImpressionBase setImpressionTimeSecs:] */

void FUN_10bbe0ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5fd8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe0cf0; end: 10bbe0d6b; -[SCAItemImpressionBase setImpressionType:] */

void FUN_10bbe0cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafeb6c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5ff8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe0d6c; end: 10bbe0daf; -[SCAItemImpressionBase setPageInstanceInfo:] */

void FUN_10bbe0d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9d78,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe0db0; end: 10bbe0df3; -[SCAItemImpressionBase setPageItemInfo:] */

void FUN_10bbe0db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9d98,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe0df4; end: 10bbe0e37; -[SCAItemImpressionBase setPageSectionInfo:] */

void FUN_10bbe0df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9db8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbe0e38; end: 10bbe0fb7; -[SCAItemImpressionBase prepareDictionary:] */

void FUN_10bbe0e38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270d5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe0fb8; end: 10bbe108f; -[SCALensActivityCenterEventBase fromDictionary:] */

void FUN_10bbe0fb8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1d8620(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe1090; end: 10bbe10a3; -[SCALensActivityCenterEventBase setPageSessionId:] */

void FUN_10bbe1090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110e5f1f8,param_3,0);
  return;
}



/* Entry: 10bbe10a4; end: 10bbe10d7; -[SCALensActivityCenterNotificationDisplayed fromDictionary:] */

void FUN_10bbe10a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d5d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbe10d8; end: 10bbe10e3; -[SCALensActivityCenterNotificationDisplayed getEventName] */

undefined ** FUN_10bbe10d8(void)

{
  return &PTR____CFConstantStringClassReference_110fc6ef8;
}



/* Entry: 10bbe10e4; end: 10bbe10eb; -[SCALensActivityCenterNotificationDisplayed getEventQoS] */

undefined8 FUN_10bbe10e4(void)

{
  return 1;
}



/* Entry: 10bbe10ec; end: 10bbe10f7; -[SCALensActivityCenterNotificationDisplayed getPerUserSamplingRateV2] */

undefined8 FUN_10bbe10ec(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe10f8; end: 10bbe111b; -[SCALensActivityCenterNotificationDisplayed getFieldNumberToFieldDict] */

void FUN_10bbe10f8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe111c; end: 10bbe1153; -[SCALensActivityCenterNotificationDisplayed addToProtoDictionary] */

void FUN_10bbe111c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbe1154; end: 10bbe11ab; -[SCALensActivityCenterNotificationDisplayed toProtoWithAllowedFields:] */

void FUN_10bbe1154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe11ac; end: 10bbe11b3; -[SCALensActivityCenterNotificationDisplayed getPayloadIdentifier] */

undefined8 FUN_10bbe11ac(void)

{
  return 0x1173;
}



/* Entry: 10bbe11b4; end: 10bbe136f; -[SCALensActivityCenterNotificationEventBase fromDictionary:] */

void FUN_10bbe11b4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d5d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1bbd60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1ce180(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baff254();
    func_0x00010c1ce740(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbe1370; end: 10bbe1383; -[SCALensActivityCenterNotificationEventBase setLensId:] */

void FUN_10bbe1370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110db19f8,param_3,0);
  return;
}



/* Entry: 10bbe1384; end: 10bbe1397; -[SCALensActivityCenterNotificationEventBase setNotificationId:] */

void FUN_10bbe1384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110f42398,param_3,0);
  return;
}



/* Entry: 10bbe1398; end: 10bbe1413; -[SCALensActivityCenterNotificationEventBase setNotificationType:] */

void FUN_10bbe1398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff234(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110de6ad8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbe1414; end: 10bbe1447; -[SCALensActivityCenterNotificationHidden fromDictionary:] */

void FUN_10bbe1414(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d5e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbe1448; end: 10bbe1453; -[SCALensActivityCenterNotificationHidden getEventName] */

undefined ** FUN_10bbe1448(void)

{
  return &PTR____CFConstantStringClassReference_110fc6f18;
}



/* Entry: 10bbe1454; end: 10bbe145b; -[SCALensActivityCenterNotificationHidden getEventQoS] */

undefined8 FUN_10bbe1454(void)

{
  return 1;
}



/* Entry: 10bbe145c; end: 10bbe1467; -[SCALensActivityCenterNotificationHidden getPerUserSamplingRateV2] */

undefined8 FUN_10bbe145c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe1468; end: 10bbe148b; -[SCALensActivityCenterNotificationHidden getFieldNumberToFieldDict] */

void FUN_10bbe1468(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe148c; end: 10bbe14c3; -[SCALensActivityCenterNotificationHidden addToProtoDictionary] */

void FUN_10bbe148c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbe14c4; end: 10bbe151b; -[SCALensActivityCenterNotificationHidden toProtoWithAllowedFields:] */

void FUN_10bbe14c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe151c; end: 10bbe1523; -[SCALensActivityCenterNotificationHidden getPayloadIdentifier] */

undefined8 FUN_10bbe151c(void)

{
  return 0x1174;
}



/* Entry: 10bbe1524; end: 10bbe1557; -[SCALensActivityCenterNotificationLongPressed fromDictionary:] */

void FUN_10bbe1524(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d5e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbe1558; end: 10bbe1563; -[SCALensActivityCenterNotificationLongPressed getEventName] */

undefined ** FUN_10bbe1558(void)

{
  return &PTR____CFConstantStringClassReference_110fc6f38;
}



/* Entry: 10bbe1564; end: 10bbe156b; -[SCALensActivityCenterNotificationLongPressed getEventQoS] */

undefined8 FUN_10bbe1564(void)

{
  return 1;
}



/* Entry: 10bbe156c; end: 10bbe1577; -[SCALensActivityCenterNotificationLongPressed getPerUserSamplingRateV2] */

undefined8 FUN_10bbe156c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe1578; end: 10bbe159b; -[SCALensActivityCenterNotificationLongPressed getFieldNumberToFieldDict] */

void FUN_10bbe1578(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe159c; end: 10bbe15d3; -[SCALensActivityCenterNotificationLongPressed addToProtoDictionary] */

void FUN_10bbe159c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbe15d4; end: 10bbe162b; -[SCALensActivityCenterNotificationLongPressed toProtoWithAllowedFields:] */

void FUN_10bbe15d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe162c; end: 10bbe1633; -[SCALensActivityCenterNotificationLongPressed getPayloadIdentifier] */

undefined8 FUN_10bbe162c(void)

{
  return 0x1175;
}



/* Entry: 10bbe1634; end: 10bbe1667; -[SCALensActivityCenterNotificationOpened fromDictionary:] */

void FUN_10bbe1634(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d5f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbe1668; end: 10bbe1673; -[SCALensActivityCenterNotificationOpened getEventName] */

undefined ** FUN_10bbe1668(void)

{
  return &PTR____CFConstantStringClassReference_110fc6f58;
}



/* Entry: 10bbe1674; end: 10bbe167b; -[SCALensActivityCenterNotificationOpened getEventQoS] */

undefined8 FUN_10bbe1674(void)

{
  return 1;
}



/* Entry: 10bbe167c; end: 10bbe1687; -[SCALensActivityCenterNotificationOpened getPerUserSamplingRateV2] */

undefined8 FUN_10bbe167c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe1688; end: 10bbe16ab; -[SCALensActivityCenterNotificationOpened getFieldNumberToFieldDict] */

void FUN_10bbe1688(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbe16ac; end: 10bbe16e3; -[SCALensActivityCenterNotificationOpened addToProtoDictionary] */

void FUN_10bbe16ac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbe16e4; end: 10bbe173b; -[SCALensActivityCenterNotificationOpened toProtoWithAllowedFields:] */

void FUN_10bbe16e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bbe173c; end: 10bbe1743; -[SCALensActivityCenterNotificationOpened getPayloadIdentifier] */

undefined8 FUN_10bbe173c(void)

{
  return 0x1176;
}



/* Entry: 10bbe1744; end: 10bbe1777; -[SCALensActivityCenterNotificationSubscribed fromDictionary:] */

void FUN_10bbe1744(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d5f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbe1778; end: 10bbe1783; -[SCALensActivityCenterNotificationSubscribed getEventName] */

undefined ** FUN_10bbe1778(void)

{
  return &PTR____CFConstantStringClassReference_110fc6f78;
}



/* Entry: 10bbe1784; end: 10bbe178b; -[SCALensActivityCenterNotificationSubscribed getEventQoS] */

undefined8 FUN_10bbe1784(void)

{
  return 1;
}



/* Entry: 10bbe178c; end: 10bbe1797; -[SCALensActivityCenterNotificationSubscribed getPerUserSamplingRateV2] */

undefined8 FUN_10bbe178c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbe1798; end: 10bbe17bb; -[SCALensActivityCenterNotificationSubscribed getFieldNumberToFieldDict] */

void FUN_10bbe1798(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


