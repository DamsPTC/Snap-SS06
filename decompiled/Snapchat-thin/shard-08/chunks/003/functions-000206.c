/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f9d328; end: 105f9d373; -[SCCArrivalNotificationUpsellTray setViewModel:] */

void FUN_105f9d328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105f9d428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9d374; end: 105f9d3b3; -[SCCArrivalNotificationUpsellTray viewModel] */

void FUN_105f9d374(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9d428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f9d3b4; end: 105f9d417;  */

void FUN_105f9d3b4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f9d418; end: 105f9d457;  */

void FUN_105f9d418(long param_1)

{
  undefined8 in_x9;
  
  *(undefined8 *)(param_1 + 0x10) = in_x9;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105f9d458; end: 105f9d557; -[SCCArrivalNotificationStatusMessageContext initWithCreateEmbeddedMapViewFactory:presentDirectionsMenu:startShareLocationFlow:requestAlwaysLocationPermissions:] */

undefined8 *
FUN_105f9d458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126ee838;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000105f9d878();
  return puVar4;
}



/* Entry: 105f9d558; end: 105f9d58f; +[SCCArrivalNotificationStatusMessageContext valdiMarshallableObjectDescriptor] */

void FUN_105f9d558(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionSheetPresenter_110901370;
  param_1[1] = &PTR_s_SCComposerFoundationActionSheetP_1109014a8;
  param_1[2] = &PTR_DAT_1109012f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d590; end: 105f9d5df;  */

void FUN_105f9d590(void)

{
  func_0x000105f9d894();
  func_0x000105f9d868();
  func_0x000105f9d840(FUN_105f9d7b4);
  func_0x000105f9d89c();
  func_0x000105f9d850();
  func_0x000105f9d878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d5e0; end: 105f9d603;  */

undefined8 FUN_105f9d5e0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],*param_2);
  return 0;
}



/* Entry: 105f9d604; end: 105f9d653;  */

void FUN_105f9d604(void)

{
  func_0x000105f9d894();
  func_0x000105f9d868();
  func_0x000105f9d840(0x105f9d7d0);
  func_0x000105f9d89c();
  func_0x000105f9d850();
  func_0x000105f9d878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d654; end: 105f9d677;  */

undefined8 FUN_105f9d654(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 105f9d678; end: 105f9d6c7;  */

void FUN_105f9d678(void)

{
  func_0x000105f9d894();
  func_0x000105f9d868();
  func_0x000105f9d840(0x105f9d7e8);
  func_0x000105f9d89c();
  func_0x000105f9d850();
  func_0x000105f9d878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d6c8; end: 105f9d6f3;  */

undefined8 FUN_105f9d6c8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105f9d6f4; end: 105f9d743;  */

void FUN_105f9d6f4(void)

{
  func_0x000105f9d894();
  func_0x000105f9d868();
  func_0x000105f9d840(0x105f9d814);
  func_0x000105f9d89c();
  func_0x000105f9d850();
  func_0x000105f9d878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d744; end: 105f9d793; -[SCCArrivalNotificationStatusMessageViewModel initWithSenderId:receiverId:isSender:displayNameOrUsername:alertType:alertStatus:] */

void FUN_105f9d744(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee840;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f9d794; end: 105f9d7b3; +[SCCArrivalNotificationStatusMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9d794(undefined8 *param_1)

{
  *param_1 = &PTR_s_senderId_1109014f0;
  param_1[1] = &PTR_DAT_1109015f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d7b4; end: 105f9d83f;  */

void FUN_105f9d7b4(void)

{
  func_0x000105f9d880();
  return;
}



/* Entry: 105f9d840; end: 105f9d8ab;  */

void FUN_105f9d840(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105f9d8ac; end: 105f9d94b; -[SCCArrivalNotificationUpsellViewModel initWithUserId:displayName:onTap:] */

undefined8 *
FUN_105f9d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ee848;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105f9d94c; end: 105f9d963; +[SCCArrivalNotificationUpsellViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9d94c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110901670;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d964; end: 105f9d96f; +[SCCLiveLocationGroupShareView componentPath] */

undefined ** FUN_105f9d964(void)

{
  return &PTR____CFConstantStringClassReference_110e34878;
}



/* Entry: 105f9d970; end: 105f9d98f; -[SCCLiveLocationGroupShareView initWithViewModel:componentContext:runtime:] */

void FUN_105f9d970(void)

{
  FUN_105f9dbc4(PTR_PTR_1126ee850);
  return;
}



/* Entry: 105f9d990; end: 105f9d9c3; -[SCCLiveLocationGroupShareView setViewModel:] */

void FUN_105f9d990(void)

{
  func_0x000105f9dbd8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbe8();
  func_0x000105f9dc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f9d9c4; end: 105f9d9fb; -[SCCLiveLocationGroupShareView viewModel] */

void FUN_105f9d9c4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d9fc; end: 105f9da07; +[SCCLiveLocationShareView componentPath] */

undefined ** FUN_105f9d9fc(void)

{
  return &PTR____CFConstantStringClassReference_110e34898;
}



/* Entry: 105f9da08; end: 105f9da27; -[SCCLiveLocationShareView initWithViewModel:componentContext:runtime:] */

void FUN_105f9da08(void)

{
  FUN_105f9dbc4(PTR_PTR_1126ee858);
  return;
}



/* Entry: 105f9da28; end: 105f9da5b; -[SCCLiveLocationShareView setViewModel:] */

void FUN_105f9da28(void)

{
  func_0x000105f9dbd8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbe8();
  func_0x000105f9dc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f9da5c; end: 105f9da93; -[SCCLiveLocationShareView viewModel] */

void FUN_105f9da5c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9da94; end: 105f9da9f; +[SCCLocationCardView componentPath] */

undefined ** FUN_105f9da94(void)

{
  return &PTR____CFConstantStringClassReference_110e348b8;
}



/* Entry: 105f9daa0; end: 105f9dabf; -[SCCLocationCardView initWithViewModel:componentContext:runtime:] */

void FUN_105f9daa0(void)

{
  FUN_105f9dbc4(PTR_PTR_1126ee860);
  return;
}



/* Entry: 105f9dac0; end: 105f9daf3; -[SCCLocationCardView setViewModel:] */

void FUN_105f9dac0(void)

{
  func_0x000105f9dbd8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbe8();
  func_0x000105f9dc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f9daf4; end: 105f9db2b; -[SCCLocationCardView viewModel] */

void FUN_105f9daf4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9db2c; end: 105f9db37; +[SCCLocationShareView componentPath] */

undefined ** FUN_105f9db2c(void)

{
  return &PTR____CFConstantStringClassReference_110e348d8;
}



/* Entry: 105f9db38; end: 105f9db57; -[SCCLocationShareView initWithViewModel:componentContext:runtime:] */

void FUN_105f9db38(void)

{
  FUN_105f9dbc4(PTR_PTR_1126ee868);
  return;
}



/* Entry: 105f9db58; end: 105f9db8b; -[SCCLocationShareView setViewModel:] */

void FUN_105f9db58(void)

{
  func_0x000105f9dbd8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbe8();
  func_0x000105f9dc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f9db8c; end: 105f9dbc3; -[SCCLocationShareView viewModel] */

void FUN_105f9db8c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f9dbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9dbc4; end: 105f9dc1f;  */

void FUN_105f9dbc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105f9dc20; end: 105f9dc27; -[SCCLocationCardButtonType__Enum init] */

void FUN_105f9dc20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105f9dc28; end: 105f9dc2f; -[SCCLocationCardType__Enum init] */

void FUN_105f9dc28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105f9dc30; end: 105f9dc37; -[SCCLocationShareButtonType__Enum init] */

void FUN_105f9dc30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105f9dc38; end: 105f9dca7; -[SCCLiveLocationShareContext initWithShowShareButtonObservable:onTap:] */

undefined8
FUN_105f9dc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retainBlock();
  func_0x000105f9e0e4();
  func_0x000105f9e0a8();
  _objc_release(param_3);
  func_0x000105f9e120();
  return param_4;
}



/* Entry: 105f9dca8; end: 105f9dcbb; +[SCCLiveLocationShareContext valdiMarshallableObjectDescriptor] */

void FUN_105f9dca8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901700;
  param_1[1] = &PTR_s_SCBridgeObservable_110901748;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9dcbc; end: 105f9dd67; -[SCCLiveLocationShareLiveLocationShareDisplayInfo initWithButtonText:onButtonTap:onMapTap:] */

undefined8 *
FUN_105f9dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x000105f9e120();
  puStack_48 = PTR_PTR_1126ee878;
  uStack_50 = param_1;
  func_0x000105f9e0e4();
  puVar1 = &uStack_50;
  func_0x000105f9e0dc(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f9dd68; end: 105f9dd77; +[SCCLiveLocationShareLiveLocationShareDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105f9dd68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_buttonText_110901758;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9dd78; end: 105f9ddaf; -[SCCLiveLocationShareLocationShareDisplayInfo initWithIsSelf:displayName:] */

void FUN_105f9dd78(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee880;
  uStack_20 = param_1;
  func_0x000105f9e0e4();
  func_0x000105f9e0dc(&uStack_20);
  return;
}



/* Entry: 105f9ddb0; end: 105f9ddc3; +[SCCLiveLocationShareLocationShareDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105f9ddb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109017b8;
  param_1[1] = &PTR_DAT_110901860;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9ddc4; end: 105f9ddef; -[SCCLiveLocationShareMessageContext initWithMapView:displayInfoObservable:] */

void FUN_105f9ddc4(void)

{
  func_0x000105f9e0e4();
  func_0x000105f9e0a8();
  return;
}



/* Entry: 105f9ddf0; end: 105f9de03; +[SCCLiveLocationShareMessageContext valdiMarshallableObjectDescriptor] */

void FUN_105f9ddf0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901870;
  param_1[1] = &PTR_s_SCValdiViewFactory_1109018b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9de04; end: 105f9de27; -[SCCLiveLocationShareMessageModel init] */

void FUN_105f9de04(void)

{
  func_0x000105f9e0f0(PTR_PTR_1126ee890);
  return;
}



/* Entry: 105f9de28; end: 105f9de37; +[SCCLiveLocationShareMessageModel valdiMarshallableObjectDescriptor] */

void FUN_105f9de28(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9de38; end: 105f9de63; -[SCCLiveLocationShareViewModel initWithSharingUserDisplayName:fromSelf:] */

void FUN_105f9de38(void)

{
  func_0x000105f9e0e4();
  func_0x000105f9e0a8();
  return;
}



/* Entry: 105f9de64; end: 105f9de73; +[SCCLiveLocationShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9de64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109018d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9de74; end: 105f9de93; -[SCCLocationCardContext initWithMapView:] */

void FUN_105f9de74(void)

{
  func_0x000105f9e0b4(PTR_PTR_1126ee8a0);
  return;
}



/* Entry: 105f9de94; end: 105f9deb3; +[SCCLocationCardContext valdiMarshallableObjectDescriptor] */

void FUN_105f9de94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901950;
  param_1[1] = &PTR_s_SCValdiViewFactory_1109019e0;
  param_1[2] = &PTR_s_oi_v_110901920;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9deb4; end: 105f9ded7;  */

undefined8 FUN_105f9deb4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 105f9ded8; end: 105f9df53;  */

void FUN_105f9ded8(undefined8 param_1)

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
  pcStack_38 = FUN_105f9e05c;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000105f9e120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105f9df54; end: 105f9df93; -[SCCLocationCardDisplayInfo initWithIsSelf:friendDisplayName:showPlaceholder:buttonType:userId:] */

void FUN_105f9df54(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee8a8;
  uStack_20 = param_1;
  func_0x000105f9e0e4();
  func_0x000105f9e0dc(&uStack_20);
  return;
}



/* Entry: 105f9df94; end: 105f9dfa7; +[SCCLocationCardDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105f9df94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901a08;
  param_1[1] = &PTR_DAT_110901ae0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9dfa8; end: 105f9dfd3; -[SCCLocationCardViewModel initWithType:] */

void FUN_105f9dfa8(void)

{
  func_0x000105f9e0e4();
  func_0x000105f9e0a8();
  return;
}



/* Entry: 105f9dfd4; end: 105f9dfe7; +[SCCLocationCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9dfd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901af0;
  param_1[1] = &PTR_DAT_110901b20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9dfe8; end: 105f9e007; -[SCCLocationShareContext initWithMapView:] */

void FUN_105f9dfe8(void)

{
  func_0x000105f9e0b4(PTR_PTR_1126ee8b8);
  return;
}



/* Entry: 105f9e008; end: 105f9e027; +[SCCLocationShareContext valdiMarshallableObjectDescriptor] */

void FUN_105f9e008(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901b60;
  param_1[1] = &PTR_s_SCValdiViewFactory_110901bf0;
  param_1[2] = &PTR_s_oi_v_110901b30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9e028; end: 105f9e04b; -[SCCLocationShareViewModel init] */

void FUN_105f9e028(void)

{
  func_0x000105f9e0f0(PTR_PTR_1126ee8c0);
  return;
}



/* Entry: 105f9e04c; end: 105f9e05b; +[SCCLocationShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9e04c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9e05c; end: 105f9e08b;  */

void FUN_105f9e05c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f9e08c; end: 105f9e127;  */

void FUN_105f9e08c(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9e128; end: 105f9e37f; -[SCMapDropsMessagePlugin initWithGRPCServiceFactory:performerProvider:pageLauncher:persistenceProvider:userInfoServices:circumstanceEngine:composerStaticMapURLGenerator:chatLogger:notificationPool:messagingMessageProvider:] */

undefined8 *
FUN_105f9e128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126ee8c8;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x10) = 0;
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



/* Entry: 105f9e380; end: 105f9e5a3; -[SCMapDropsMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f9e380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  if (uVar2 == 0x1e) {
    uVar2 = uVar1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar4 != 0) {
      uVar2 = uVar1;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b8f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar5 = param_1;
      func_0x00010be06980(param_1,param_2,uVar1,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bfda340();
      if (((int)uVar2 != 0) && (uVar2 = uVar4, func_0x00010bf873c0(), (uVar2 & 1) == 0)) {
        uVar6 = param_3;
        func_0x00010c0cc0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5e120(param_1,param_2,lVar5,uVar6);
        _objc_release(uVar6);
      }
      lVar7 = param_1;
      func_0x00010bee9880(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde8340(param_1,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c67d8;
      _objc_alloc(PTR_PTR_1126c67d8);
      puVar8 = PTR_PTR_1126c69e0;
      func_0x00010bf44480(PTR_PTR_1126c69e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000660(puVar9,param_2,puVar8,lVar7,param_1);
      _objc_release(puVar8);
      _objc_release(param_1);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(uVar4);
      goto LAB_105f9e56c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105f9e56c:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f9e5a4; end: 105f9e5d3; -[SCMapDropsMessagePlugin identifier] */

void FUN_105f9e5a4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e34938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e34938);
  return;
}



/* Entry: 105f9e5d4; end: 105f9e5db; -[SCMapDropsMessagePlugin pluginType] */

undefined8 FUN_105f9e5d4(void)

{
  return 0;
}



/* Entry: 105f9e5dc; end: 105f9e6d3; -[SCMapDropsMessagePlugin _viewModelForDropContent:] */

void FUN_105f9e5dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c69e8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c08b3c0(param_4);
  uVar3 = param_1;
  func_0x00010c0b55a0(param_4);
  func_0x00010c021a60(param_1,uVar3,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b3c0(param_4);
  uVar4 = param_1;
  func_0x00010c0b55a0(param_4);
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bfc0660(param_1,uVar4,0x4024000000000000,0x4059000000000000,0x4059000000000000,uVar2,
                      param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e19c0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f9e6d4; end: 105f9e8db; -[SCMapDropsMessagePlugin _contextForDrop:] */

void FUN_105f9e6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be73e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c69f0;
  _objc_alloc(PTR_PTR_1126c69f0);
  uVar3 = uVar1;
  func_0x00010c272120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  uVar4 = param_1;
  func_0x00010be71140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035fe0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f9e8dc;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_3;
  func_0x00010c1d3960(puVar2);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_3);
  func_0x00010c1d32c0(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f9e8dc; end: 105f9e943;  */

void FUN_105f9e8dc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9e944; end: 105f9eaf7; -[SCMapDropsMessagePlugin _launchMapScopeWithDrop:] */

void FUN_105f9e944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bdf6de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5c58;
    func_0x00010bf8aac0(PTR_PTR_1126b5c58,param_2,lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x98;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar5,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126c69f8;
    _objc_alloc(PTR_PTR_1126c69f8);
    func_0x00010c00bb00();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf8aa20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae9a0(uVar7,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar7);
    func_0x00010be89500(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9eaf8; end: 105f9ec07; -[SCMapDropsMessagePlugin _saveDropToMap:] */

void FUN_105f9eaf8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf6de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d080();
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c14a400(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f9ec08; end: 105f9ec43;  */

void FUN_105f9ec08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7cde0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9ec44; end: 105f9edf3; -[SCMapDropsMessagePlugin _presentNotificationWithResultType:] */

void FUN_105f9ec44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126afde0;
  uVar1 = param_1;
  if (param_3 == 2) {
    func_0x000105fa02f0();
    _objc_retainAutoreleasedReturnValue();
LAB_105f9ecd0:
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 1) {
      func_0x000105fa02d8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f9ecd0;
    }
    if (param_3 != 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_105f9ed00;
    }
    FUN_105fa02c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_105f9ed00:
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105f9ed98;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 105f9edf4; end: 105f9eeab; -[SCMapDropsMessagePlugin _currentOrInitialDrop:] */

void FUN_105f9edf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x80);
  lVar3 = *(long *)(param_1 + 0x78);
  lVar2 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f9eeac; end: 105f9eee3; -[SCMapDropsMessagePlugin _maybePersistDrop:metaData:] */

void FUN_105f9eeac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c06f8e0();
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be895f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerForPersistedDropsUpdate_11257ff18);
  return;
}



/* Entry: 105f9eee4; end: 105f9efeb; -[SCMapDropsMessagePlugin _registerForDeletedDropUpdates] */

void FUN_105f9eee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x68) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6cea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105f9efec; end: 105f9f033;  */

void FUN_105f9efec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9f034; end: 105f9f147; -[SCMapDropsMessagePlugin _updateDisplayInfoForDeletedDrop:] */

void FUN_105f9f034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be06a20(param_1,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,lVar2,param_3);
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_1;
      func_0x00010be046e0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(lVar3,param_2,lVar4);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9f148; end: 105f9f273; -[SCMapDropsMessagePlugin _registerForPersistedDropsUpdates] */

void FUN_105f9f148(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x60) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0fa340();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa92c0();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105f9f274; end: 105f9f2bb;  */

void FUN_105f9f274(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6fe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9f2bc; end: 105f9f4b7; -[SCMapDropsMessagePlugin _updateDisplayInfoForPersistedDrops:] */

void FUN_105f9f2bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x80);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010bf8aa20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(param_1 + 0x70);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010c07d080(uVar7);
          lVar4 = param_1;
          func_0x00010be06a20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78));
          lVar5 = param_1;
          func_0x00010be046e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(lVar3);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x80);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x80);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c2b9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_withState_isSaved__11268c218,2);
  return;
}



/* Entry: 105f9f4b8; end: 105f9f4c3; -[SCMapDropsMessagePlugin _dropWithUpdatedDrop:isSaved:] */

void FUN_105f9f4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2b9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_withState_isSaved__11268c218,2);
  return;
}



/* Entry: 105f9f4c4; end: 105f9fa8b; -[SCMapDropsMessagePlugin _dropFromMessage:conversationParticipants:] */

void FUN_105f9f4c4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_210;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uVar10 = 0x3032000000;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105f9fa8c;
  uStack_88 = 0x105f9fa9c;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105f9fa8c;
  uStack_b8 = 0x105f9fa9c;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105f9fa8c;
  uStack_e8 = 0x105f9fa9c;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105f9fa8c;
  uStack_118 = 0x105f9fa9c;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_105f9fa8c;
  uStack_148 = 0x105f9fa9c;
  uStack_140 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bf240(param_4);
  puVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c0b8f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bfda340();
  if ((int)puVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar2;
    func_0x00010c0fc080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  puVar9 = puVar2;
  func_0x00010bfda320();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)puStack_a0[5];
    _objc_retain(puVar9);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0fbfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010c0fc0c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010c0fc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 != (undefined *)0x0) {
      puStack_210 = puVar2;
      func_0x00010c0fc0c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f9f7dc;
    }
  }
  lVar7 = puStack_d0[5];
  func_0x00010c08fa60();
  puStack_210 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar7 == 0) {
    func_0x0001068750ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001068750ac();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_d0[5];
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(lVar7);
LAB_105f9f7dc:
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _os_unfair_lock_lock(param_1 + 0x80);
  lVar7 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d080();
    _objc_release(uVar6);
  }
  _objc_release(lVar7);
  _os_unfair_lock_unlock(param_1 + 0x80);
  puVar3 = PTR_PTR_1126bf000;
  _objc_alloc(PTR_PTR_1126bf000);
  func_0x00010c08b3c0(puVar2);
  uVar6 = uVar10;
  func_0x00010c0b55a0(puVar2);
  _CLLocationCoordinate2DMake(uVar10,uVar6);
  puVar4 = puVar2;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar2;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c00e760(uVar10,uVar6,puVar3);
  if (puVar5 != (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar4);
  _objc_release(puStack_210);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f9fa8c; end: 105f9faa3;  */

void FUN_105f9fa8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f9faa4; end: 105f9fd4b;  */

void FUN_105f9faa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0cb8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar2);
  uVar5 = uVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar2);
  uVar5 = uVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar2);
  uVar5 = uVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f9fd4c; end: 105f9fed3; -[SCMapDropsMessagePlugin _displayInfoFromDrop:] */

void FUN_105f9fd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c6a00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1b9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d540(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15adc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5b460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0fc060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194460(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c06f8e0(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4340(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c07d080(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4140(puVar1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f9fed4; end: 105fa0033; -[SCMapDropsMessagePlugin _pinDisplayInfoObservableForDrop:] */

void FUN_105f9fed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x80);
  puVar4 = *(undefined **)(param_1 + 0x70);
  uVar1 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc(PTR_PTR_1126ae820);
    lVar2 = param_1;
    func_0x00010be046e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = param_3;
    func_0x00010bf8aa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar4,uVar1);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    uVar1 = param_3;
    func_0x00010bf8aa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,param_3,uVar1);
    _objc_release(uVar1);
  }
  puVar3 = puVar4;
  func_0x00010bf870a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _os_unfair_lock_unlock(param_1 + 0x80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fa0034; end: 105fa013f; -[SCMapDropsMessagePlugin _peliasGrpcService] */

void FUN_105fa0034(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0b7020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar6 = *(long *)(param_1 + 0x58);
    _objc_retain(lVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105fa0140; end: 105fa0147; -[SCMapDropsMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fa0140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105fa0148; end: 105fa0177; -[SCMapDropsMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fa0148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa0178; end: 105fa017f; -[SCMapDropsMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fa0178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105fa0180; end: 105fa01af; -[SCMapDropsMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fa0180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa01b0; end: 105fa01c7; -[SCMapDropsMessagePlugin presentingViewController] */

void FUN_105fa01b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa01c8; end: 105fa01d3; -[SCMapDropsMessagePlugin setPresentingViewController:] */

void FUN_105fa01c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 105fa01d4; end: 105fa02bf; -[SCMapDropsMessagePlugin .cxx_destruct] */

void FUN_105fa01d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105fa02c0; end: 105fa0307;  */

void FUN_105fa02c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34918;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34918,
                      &PTR____CFConstantStringClassReference_110e34938,0);
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



/* Entry: 105fa0308; end: 105fa0313; +[SCCMapDropShareView componentPath] */

undefined ** FUN_105fa0308(void)

{
  return &PTR____CFConstantStringClassReference_110e34958;
}


