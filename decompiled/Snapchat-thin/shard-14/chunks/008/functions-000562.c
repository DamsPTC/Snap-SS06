/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b678c2c; end: 10b678cdb; -[SCCPreviewToolbarPreviewToolbarViewModel initWithItems:onItemTap:onItemLongPress:] */

undefined8 *
FUN_10b678c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010b6793a8();
  puStack_48 = PTR_PTR_112709870;
  uStack_50 = param_1;
  func_0x00010b6793d8();
  puVar1 = &uStack_50;
  func_0x00010b6793a0(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b678cdc; end: 10b678cff; +[SCCPreviewToolbarPreviewToolbarViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b678cdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53038;
  param_1[1] = &PTR_DAT_110d530e0;
  param_1[2] = &PTR_s_oi_v_110d53008;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678d00; end: 10b678d1f;  */

undefined8 FUN_10b678d00(void)

{
  code *extraout_x8;
  
  func_0x00010b6793ec();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b678d20; end: 10b678d6f;  */

void FUN_10b678d20(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(FUN_10b679270);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b678d70; end: 10b678dbb; -[SCCPreviewToolbarSoundToolContext initWithOnTap:] */

void FUN_10b678d70(void)

{
  func_0x00010b6793f8();
  func_0x00010b6793d8();
  func_0x00010b6793a0(&stack0xffffffffffffffd0);
  func_0x00010b679404();
  return;
}



/* Entry: 10b678dbc; end: 10b678dcf; +[SCCPreviewToolbarSoundToolContext valdiMarshallableObjectDescriptor] */

void FUN_10b678dbc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_110d530f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678dd0; end: 10b678e03; -[SCCPreviewToolbarSoundToolViewModel initWithIsEnabled:isMuted:] */

void FUN_10b678dd0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709880;
  uStack_20 = param_1;
  func_0x00010b6793d8();
  func_0x00010b6793a0(&uStack_20);
  return;
}



/* Entry: 10b678e04; end: 10b678e17; +[SCCPreviewToolbarSoundToolViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b678e04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_isEnabled_110d53128;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678e18; end: 10b678e4b; -[SCCPreviewToolbarVerticalToolbarConfiguration initWithFixedItems:itemOrder:] */

void FUN_10b678e18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709888;
  uStack_20 = param_1;
  func_0x00010b6793d8();
  func_0x00010b6793a0(&uStack_20);
  return;
}



/* Entry: 10b678e4c; end: 10b678e5f; +[SCCPreviewToolbarVerticalToolbarConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b678e4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53170;
  param_1[1] = &PTR_DAT_110d531b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678e60; end: 10b678ebf; -[SCCPreviewToolbarVerticalToolbarContext initWithOnTap:] */

void FUN_10b678e60(void)

{
  func_0x00010b6793f8();
  func_0x00010b6793d8();
  func_0x00010b6793a0(&stack0xffffffffffffffd0);
  func_0x00010b679404();
  return;
}



/* Entry: 10b678ec0; end: 10b678ee3; +[SCCPreviewToolbarVerticalToolbarContext valdiMarshallableObjectDescriptor] */

void FUN_10b678ec0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53270;
  param_1[1] = &PTR_DAT_110d53390;
  param_1[2] = &PTR_DAT_110d531c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b678ee4; end: 10b678f0b;  */

undefined8 FUN_10b678ee4(void)

{
  code *extraout_x8;
  
  func_0x00010b6793ec();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b678f0c; end: 10b678f5b;  */

void FUN_10b678f0c(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(0x10b679288);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b678f5c; end: 10b678f7f;  */

undefined8 FUN_10b678f5c(void)

{
  code *extraout_x8;
  
  func_0x00010b6793ec();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b678f80; end: 10b678fcf;  */

void FUN_10b678f80(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(0x10b6792b4);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b678fd0; end: 10b678ff7;  */

undefined8 FUN_10b678fd0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10b678ff8; end: 10b679047;  */

void FUN_10b678ff8(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(0x10b6792cc);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b679048; end: 10b67906b;  */

undefined8 FUN_10b679048(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b6793ec();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 10b67906c; end: 10b6790bb;  */

void FUN_10b67906c(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(0x10b6792f8);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6790bc; end: 10b6790db;  */

undefined8 FUN_10b6790bc(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010b6793ec();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 10b6790dc; end: 10b67912b;  */

void FUN_10b6790dc(void)

{
  func_0x00010b6793d0();
  func_0x00010b679388();
  func_0x00010b679350(0x10b679328);
  func_0x00010b6793c8();
  func_0x00010b67937c();
  func_0x00010b6793a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67912c; end: 10b67915f; -[SCCPreviewToolbarVerticalToolbarExtraPayload init] */

void FUN_10b67912c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709898;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b679160; end: 10b679173; +[SCCPreviewToolbarVerticalToolbarExtraPayload valdiMarshallableObjectDescriptor] */

void FUN_10b679160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d533c0;
  param_1[1] = &PTR_DAT_110d534c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679174; end: 10b6791b3; -[SCCPreviewToolbarVerticalToolbarItem initWithType:isEnabled:isHighlighted:showLabel:isLoading:] */

void FUN_10b679174(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098a0;
  uStack_20 = param_1;
  func_0x00010b6793d8();
  func_0x00010b6793a0(&uStack_20);
  return;
}



/* Entry: 10b6791b4; end: 10b6791c7; +[SCCPreviewToolbarVerticalToolbarItem valdiMarshallableObjectDescriptor] */

void FUN_10b6791b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53508;
  param_1[1] = &PTR_DAT_110d535e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6791c8; end: 10b67920f; -[SCCPreviewToolbarVerticalToolbarViewModel initWithItems:] */

void FUN_10b6791c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098a8;
  uStack_20 = param_1;
  func_0x00010b6793d8();
  func_0x00010b6793a0(&uStack_20);
  return;
}



/* Entry: 10b679210; end: 10b679223; +[SCCPreviewToolbarVerticalToolbarViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b679210(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53600;
  param_1[1] = &PTR_DAT_110d536f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679224; end: 10b67925b; -[SCCToolbarItem initWithType:] */

void FUN_10b679224(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098b0;
  uStack_20 = param_1;
  func_0x00010b6793d8();
  func_0x00010b6793a0(&uStack_20);
  return;
}



/* Entry: 10b67925c; end: 10b67926f; +[SCCToolbarItem valdiMarshallableObjectDescriptor] */

void FUN_10b67925c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53708;
  param_1[1] = &PTR_DAT_110d53780;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679270; end: 10b67934f;  */

void FUN_10b679270(void)

{
  func_0x00010b6793b0();
  return;
}



/* Entry: 10b679350; end: 10b679417;  */

void FUN_10b679350(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b679418; end: 10b67941f; -[SCCPlusCommonCustomNotificationSoundType__Enum init] */

void FUN_10b679418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b679420; end: 10b679427; -[SCCPlusCommonSnapMode__Enum init] */

void FUN_10b679420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b679428; end: 10b67942f; -[SCCPlusCommonSystemSubscriptionManagementType__Enum init] */

void FUN_10b679428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b679430; end: 10b67945b; -[SCCPlusCommonCustomChatColor initWithDefaultColor:] */

void FUN_10b679430(void)

{
  func_0x00010b6796d4(PTR_PTR_1127098b8);
  func_0x00010b6796c0();
  return;
}



/* Entry: 10b67945c; end: 10b67946f; +[SCCPlusCommonCustomChatColor valdiMarshallableObjectDescriptor] */

void FUN_10b67945c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d53790;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679470; end: 10b679497; -[SCCPlusCommonCustomNotificationSoundMetadata initWithId2:localizedName:] */

void FUN_10b679470(void)

{
  func_0x00010b6796d4(PTR_PTR_1127098c0);
  func_0x00010b6796c0();
  return;
}



/* Entry: 10b679498; end: 10b6794ab; +[SCCPlusCommonCustomNotificationSoundMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b679498(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d537d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6794ac; end: 10b6794eb; -[SCCPlusCommonOpenSystemSubscriptionManagementContext initWithType:subscriptionStore:inAppBrowserPresenter:alertPresenter:] */

void FUN_10b6794ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6794ec; end: 10b679507; +[SCCPlusCommonOpenSystemSubscriptionManagementContext valdiMarshallableObjectDescriptor] */

void FUN_10b6794ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53820;
  param_1[1] = &PTR_DAT_110d53898;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679508; end: 10b67952f; -[SCCPlusCommonSnapModesInfo initWithMode:] */

void FUN_10b679508(void)

{
  func_0x00010b6796d4(PTR_PTR_1127098d0);
  func_0x00010b6796c0();
  return;
}



/* Entry: 10b679530; end: 10b67954b; +[SCCPlusCommonSnapModesInfo valdiMarshallableObjectDescriptor] */

void FUN_10b679530(undefined8 *param_1)

{
  *param_1 = &PTR_s_mode_110d538c0;
  param_1[1] = &PTR_DAT_110d53908;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67954c; end: 10b6795d3; -[SCCPlusCommonStoryExpirationPickerViewModel initWithLabels:onChange:] */

undefined8 *
FUN_10b67954c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1127098d8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b6795d4; end: 10b6795ef; +[SCCPlusCommonStoryExpirationPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6795d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53948;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110d53918;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6795f0; end: 10b679613;  */

undefined8 FUN_10b6795f0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b679614; end: 10b679693;  */

void FUN_10b679614(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b679694;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b679694; end: 10b6796bf;  */

void FUN_10b679694(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b6796c0; end: 10b6796eb;  */

void FUN_10b6796c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(&stack0x00000010,param_2,0);
  return;
}



/* Entry: 10b6796ec; end: 10b679727; -[SCVComplianceFlag initWithEnabled:remediable:] */

void FUN_10b6796ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b679728; end: 10b67973f; +[SCVComplianceFlag valdiMarshallableObjectDescriptor] */

void FUN_10b679728(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_enabled_110d539a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679740; end: 10b679747; -[SCCPlusApiFamilyPlanRole__Enum init] */

void FUN_10b679740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b679748; end: 10b67974b; -[SCCPlusApiPresentationType__Enum init] */

void FUN_10b679748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b67974c; end: 10b679753; -[SCCPlusApiPurchaseResult__Enum init] */

void FUN_10b67974c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,10);
  return;
}



/* Entry: 10b679754; end: 10b679757; -[SCCPlusApiRestoreResult__Enum init] */

void FUN_10b679754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b679758; end: 10b67975b; -[SCCPlusApiSubscriptionPeriodUnit__Enum init] */

void FUN_10b679758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b67975c; end: 10b679763; -[SCCPlusApiSubscriptionTier__Enum init] */

void FUN_10b67975c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b679764; end: 10b6797cf; -[SCCPlusApiBadgedFeature initWithState:clear:] */

undefined8
FUN_10b679764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_4;
  func_0x00010b679aa4();
  func_0x00010b679a7c();
  _objc_release(param_3);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10b6797d0; end: 10b6797e3; +[SCCPlusApiBadgedFeature valdiMarshallableObjectDescriptor] */

void FUN_10b6797d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d539f0;
  param_1[1] = &PTR_s_SCBridgeObservable_110d53a38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6797e4; end: 10b67981b; -[SCCPlusApiBadgedFeatureState initWithShowBadge:] */

void FUN_10b6797e4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127098f0;
  uStack_20 = param_1;
  func_0x00010b679aa4();
  func_0x00010b679a88(&uStack_20);
  return;
}



/* Entry: 10b67981c; end: 10b67982b; +[SCCPlusApiBadgedFeatureState valdiMarshallableObjectDescriptor] */

void FUN_10b67981c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d53a50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67982c; end: 10b6798ab; -[SCCPlusApiFeatureSetting initWithGetValue:setValue:] */

undefined8
FUN_10b67982c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  func_0x00010b679aa4();
  func_0x00010b679a7c();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 10b6798ac; end: 10b6798bb; +[SCCPlusApiFeatureSetting valdiMarshallableObjectDescriptor] */

void FUN_10b6798ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d53ab0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6798bc; end: 10b6798ff; -[SCCPlusApiLoggingContext initWithSourcePageType:] */

void FUN_10b6798bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709900;
  uStack_20 = param_1;
  func_0x00010b679aa4();
  func_0x00010b679a88(&uStack_20);
  return;
}



/* Entry: 10b679900; end: 10b679913; +[SCCPlusApiLoggingContext valdiMarshallableObjectDescriptor] */

void FUN_10b679900(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53af8;
  param_1[1] = &PTR_DAT_110d53bb8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679914; end: 10b679937; -[SCCPlusApiLoggingLensContext init] */

void FUN_10b679914(void)

{
  func_0x00010b679a90(PTR_PTR_112709908);
  return;
}



/* Entry: 10b679938; end: 10b679947; +[SCCPlusApiLoggingLensContext valdiMarshallableObjectDescriptor] */

void FUN_10b679938(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_categoryId_110d53bc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679948; end: 10b67997b; -[SCCPlusApiSubscriptionPeriod initWithNumberOfUnits:unit:] */

void FUN_10b679948(void)

{
  func_0x00010b679aa4();
  func_0x00010b679a7c();
  return;
}



/* Entry: 10b67997c; end: 10b67998f; +[SCCPlusApiSubscriptionPeriod valdiMarshallableObjectDescriptor] */

void FUN_10b67997c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53c88;
  param_1[1] = &PTR_DAT_110d53cd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679990; end: 10b6799bf; -[SCCPlusPurchaseOutcome initWithResult:] */

void FUN_10b679990(void)

{
  func_0x00010b679aa4();
  func_0x00010b679a7c();
  return;
}



/* Entry: 10b6799c0; end: 10b6799d3; +[SCCPlusPurchaseOutcome valdiMarshallableObjectDescriptor] */

void FUN_10b6799c0(undefined8 *param_1)

{
  *param_1 = &PTR_s_result_110d53ce0;
  param_1[1] = &PTR_DAT_110d53d28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6799d4; end: 10b679a17; -[SCCPlusSubscriptionInfo initWithIsSubscribed:startTimeMs:expireTimeMs:status:provider:isSubscribedAdFree:familyPlanRole:isSubscribedLensPass:isSubscribedStorage:] */

void FUN_10b6799d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709920;
  uStack_20 = param_1;
  func_0x00010b679aa4();
  func_0x00010b679a88(&uStack_20);
  return;
}



/* Entry: 10b679a18; end: 10b679a2b; +[SCCPlusSubscriptionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b679a18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d53d38;
  param_1[1] = &PTR_DAT_110d53e28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679a2c; end: 10b679a4f; -[SCMapPet init] */

void FUN_10b679a2c(void)

{
  func_0x00010b679a90(PTR_PTR_112709928);
  return;
}



/* Entry: 10b679a50; end: 10b679ac7; +[SCMapPet valdiMarshallableObjectDescriptor] */

void FUN_10b679a50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_110d53e38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679ac8; end: 10b679acf; -[SCCPlusIapConsumableProductPurchaseResult__Enum init] */

void FUN_10b679ac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 10b679ad0; end: 10b679ad7; -[SCCPlusIapProductQueueState__Enum init] */

void FUN_10b679ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b679ad8; end: 10b679adf; -[SCCPlusIapProductType__Enum init] */

void FUN_10b679ad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b679ae0; end: 10b679b23; -[SCCPlusIapProductPrice initWithMillis:currencyCode:currencySymbol:localeIdentifier:] */

void FUN_10b679ae0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709930;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b679b24; end: 10b679b3b; +[SCCPlusIapProductPrice valdiMarshallableObjectDescriptor] */

void FUN_10b679b24(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d53e80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679b3c; end: 10b679b77; -[SCCPlusIapPurchaseResponse initWithResult:] */

void FUN_10b679b3c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709938;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b679b78; end: 10b679b97; +[SCCPlusIapPurchaseResponse valdiMarshallableObjectDescriptor] */

void FUN_10b679b78(undefined8 *param_1)

{
  *param_1 = &PTR_s_result_110d53ef8;
  param_1[1] = &PTR_DAT_110d53f40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679b98; end: 10b679b9f; -[SCCSelectionRecipientSectionType__Enum init] */

void FUN_10b679b98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b679ba0; end: 10b679ba7; -[SCCSelectionRecipientType__Enum init] */

void FUN_10b679ba0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b679ba8; end: 10b679be7; -[SCCSelectionRecipientIdentifier initWithIdentifier:recipientType:] */

void FUN_10b679ba8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709940;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b679be8; end: 10b679c07; +[SCCSelectionRecipientIdentifier valdiMarshallableObjectDescriptor] */

void FUN_10b679be8(undefined8 *param_1)

{
  *param_1 = &PTR_s_identifier_110d53f50;
  param_1[1] = &PTR_DAT_110d53fc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679c08; end: 10b679e67; -[SCCSnapEditorPluginType__Enum init] */

undefined * FUN_10b679c08(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a8 = PTR_PTR_1133bb4f0;
  puStack_1a0 = PTR_PTR_1133bb4f8;
  puStack_198 = PTR_PTR_1133bb500;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e47d78;
  puStack_188 = PTR_PTR_1133bb508;
  puStack_180 = PTR_PTR_1133bb510;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f6cc98;
  puStack_170 = PTR_PTR_1133bb518;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f6ccb8;
  puStack_160 = PTR_PTR_1133bb520;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f6ccd8;
  puStack_150 = PTR_PTR_1133bb528;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e27f18;
  puStack_140 = PTR_PTR_1133bb530;
  puStack_138 = PTR_PTR_1133bb538;
  puStack_130 = PTR_PTR_1133bb540;
  puStack_128 = PTR_PTR_1133bb548;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f6cd38;
  puStack_118 = PTR_PTR_1133bb550;
  puStack_110 = PTR_PTR_1133bb558;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f6cd78;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f6cd98;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f6cdb8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e65718;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f6cdd8;
  puStack_e0 = PTR_PTR_1133bb560;
  puStack_d8 = PTR_PTR_1133bb568;
  puStack_d0 = PTR_PTR_1133bb570;
  puStack_c8 = PTR_PTR_1133bb578;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f6ce38;
  puStack_b8 = PTR_PTR_1133bb580;
  puStack_b0 = PTR_PTR_1133bb588;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f6ce78;
  puStack_a0 = PTR_PTR_1133bb590;
  puStack_98 = PTR_PTR_1133bb598;
  puStack_90 = PTR_PTR_1133bb5a0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dea8b8;
  puStack_80 = PTR_PTR_1133bb5a8;
  puStack_78 = PTR_PTR_1133bb5b0;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f6ced8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f6cef8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f6cf18;
  puStack_58 = PTR_PTR_1133bb5b8;
  puStack_50 = PTR_PTR_1133bb5c0;
  puStack_48 = PTR_PTR_1133bb5c8;
  puStack_40 = PTR_PTR_1133bb5d0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,0x2e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b679ef8(PTR_PTR_112709948);
  return puVar1;
}



/* Entry: 10b679e68; end: 10b679e87; -[SCComposerSUPBoolean init] */

void FUN_10b679e68(void)

{
  func_0x00010b679ef8(PTR_PTR_112709948);
  return;
}



/* Entry: 10b679e88; end: 10b679e97; +[SCComposerSUPBoolean valdiMarshallableObjectDescriptor] */

void FUN_10b679e88(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d53fe0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679e98; end: 10b679eb7; -[SCComposerSUPLong init] */

void FUN_10b679e98(void)

{
  func_0x00010b679ef8(PTR_PTR_112709950);
  return;
}



/* Entry: 10b679eb8; end: 10b679ec7; +[SCComposerSUPLong valdiMarshallableObjectDescriptor] */

void FUN_10b679eb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d54010;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679ec8; end: 10b679ee7; -[SCComposerSUPString init] */

void FUN_10b679ec8(void)

{
  func_0x00010b679ef8(PTR_PTR_112709958);
  return;
}



/* Entry: 10b679ee8; end: 10b679f1f; +[SCComposerSUPString valdiMarshallableObjectDescriptor] */

void FUN_10b679ee8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d54040;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679f20; end: 10b679f27; -[SCCSnapPlaybackApiPlayControl__Enum init] */

void FUN_10b679f20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b679f28; end: 10b679f2f; -[SCCSnapPlaybackApiRenderMode__Enum init] */

void FUN_10b679f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b679f30; end: 10b679f6f; -[SCCSnapPlaybackApiNativeMedia initWithMediaReference:mediaMetadata:] */

void FUN_10b679f30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709960;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b679f70; end: 10b679f87; +[SCCSnapPlaybackApiNativeMedia valdiMarshallableObjectDescriptor] */

void FUN_10b679f70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d54070;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b679f88; end: 10b679f8f; -[SCCSnapEditorMetricsMetricsEventType__Enum init] */

void FUN_10b679f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b679f90; end: 10b679fbf; -[SCCSnapEditorMetricsEditContentDivergenceDetectors initWithStickers:] */

void FUN_10b679f90(void)

{
  func_0x00010b67a29c();
  func_0x00010b67a290();
  return;
}



/* Entry: 10b679fc0; end: 10b679fd3; +[SCCSnapEditorMetricsEditContentDivergenceDetectors valdiMarshallableObjectDescriptor] */

void FUN_10b679fc0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d540d0;
  param_1[1] = &PTR_DAT_110d54100;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


