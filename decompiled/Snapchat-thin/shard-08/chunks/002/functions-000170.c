/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105effd3c; end: 105effd77; -[SCCMapAnnotation coordinate] */

void FUN_105effd3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c08aca0();
  uVar1 = param_1;
  func_0x00010c09abe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)(param_1,uVar1);
  return;
}



/* Entry: 105effd78; end: 105effd7b; -[SCCMapAnnotation clusterIdentifier] */

void FUN_105effd78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 105effd7c; end: 105effdb7; -[SCCMapAnnotation clusterVisibilityPriority] */

undefined8 FUN_105effd7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3e760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067fc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105effdb8; end: 105effe77; -[SCCMapAnnotation isEqual:] */

ulong FUN_105effdb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        func_0x00010bfe5ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c0720c0(param_1);
        _objc_release(uVar1);
        _objc_release(param_1);
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105effe78; end: 105effe87; +[SCMapTrayConfiguration layerTrayConfiguration] */

void FUN_105effe78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1f08,PTR_s_layerTrayConfigurationWithGrippe_112600b18,1);
  return;
}



/* Entry: 105effe88; end: 105effe97; +[SCMapTrayConfiguration layerGripperlessTrayConfiguration] */

void FUN_105effe88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1f08,PTR_s_layerTrayConfigurationWithGrippe_112600b18,0);
  return;
}



/* Entry: 105effe98; end: 105efff83; +[SCMapTrayConfiguration layerTrayConfigurationWithGripper:] */

void FUN_105effe98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((param_3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037cc0(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,
                      0x4038000000000000,0x4038000000000000,puVar1,param_2,0x1e,0x10,2,0,puVar2,
                      puVar4,puVar3,0x100000001);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105efff84; end: 105efff8f; +[SCCLegalComplianceTakeoverView componentPath] */

undefined ** FUN_105efff84(void)

{
  return &PTR____CFConstantStringClassReference_110e30df8;
}



/* Entry: 105efff90; end: 105efffb3; -[SCCLegalComplianceTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_105efff90(void)

{
  FUN_105f000d4(PTR_PTR_1126ede90);
  return;
}



/* Entry: 105efffb4; end: 105efffeb; -[SCCLegalComplianceTakeoverView setViewModel:] */

void FUN_105efffb4(void)

{
  func_0x000105f000f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f00100();
  func_0x000105f000e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105efffec; end: 105f0002b; -[SCCLegalComplianceTakeoverView viewModel] */

void FUN_105efffec(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f000e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f0002c; end: 105f00037; +[SCCTakeoverView componentPath] */

undefined ** FUN_105f0002c(void)

{
  return &PTR____CFConstantStringClassReference_110e30e18;
}



/* Entry: 105f00038; end: 105f0005b; -[SCCTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_105f00038(void)

{
  FUN_105f000d4(PTR_PTR_1126ede98);
  return;
}



/* Entry: 105f0005c; end: 105f00093; -[SCCTakeoverView setViewModel:] */

void FUN_105f0005c(void)

{
  func_0x000105f000f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f00100();
  func_0x000105f000e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f00094; end: 105f000d3; -[SCCTakeoverView viewModel] */

void FUN_105f00094(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f000e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f000d4; end: 105f0010b;  */

void FUN_105f000d4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105f0010c; end: 105f00113; -[SCCTakeoverDismissType__Enum init] */

void FUN_105f0010c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105f00114; end: 105f0011b; -[SCCTakeoverTextTitleType__Enum init] */

void FUN_105f00114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105f0011c; end: 105f0013b; -[SCCLegalComplianceTakeoverContext init] */

void FUN_105f0011c(void)

{
  func_0x000105f00310(PTR_PTR_1126edea0);
  return;
}



/* Entry: 105f0013c; end: 105f0014b; +[SCCLegalComplianceTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_105f0013c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f61a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f0014c; end: 105f0016f; -[SCCLegalComplianceTakeoverViewModel initWithTitle:subTitle:] */

void FUN_105f0014c(void)

{
  func_0x000105f00334(PTR_PTR_1126edea8);
  return;
}



/* Entry: 105f00170; end: 105f0017f; +[SCCLegalComplianceTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f00170(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_1108f6218;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f00180; end: 105f0019f; -[SCCTakeoverContext init] */

void FUN_105f00180(void)

{
  func_0x000105f00310(PTR_PTR_1126edeb0);
  return;
}



/* Entry: 105f001a0; end: 105f001af; +[SCCTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_105f001a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onClick_1108f6260;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f001b0; end: 105f001eb; -[SCCTakeoverImageViewModel initWithImageUrl:height:width:] */

void FUN_105f001b0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f00358(PTR_PTR_1126edeb8);
  func_0x000105f00350(auStack_20);
  return;
}



/* Entry: 105f001ec; end: 105f001fb; +[SCCTakeoverImageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f001ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f62d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f001fc; end: 105f0021f; -[SCCTakeoverLinkViewModel initWithTag:link:] */

void FUN_105f001fc(void)

{
  func_0x000105f00334(PTR_PTR_1126edec0);
  return;
}



/* Entry: 105f00220; end: 105f0022f; +[SCCTakeoverLinkViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f00220(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_tag_1108f6380;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f00230; end: 105f0024f; -[SCCTakeoverSubComponentViewModel init] */

void FUN_105f00230(void)

{
  func_0x000105f00310(PTR_PTR_1126edec8);
  return;
}



/* Entry: 105f00250; end: 105f00263; +[SCCTakeoverSubComponentViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f00250(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_1108f63c8;
  param_1[1] = &PTR_DAT_1108f6410;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f00264; end: 105f00297; -[SCCTakeoverTextViewModel initWithText:] */

void FUN_105f00264(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f00358(PTR_PTR_1126eded0);
  func_0x000105f00350(auStack_20);
  return;
}



/* Entry: 105f00298; end: 105f002ab; +[SCCTakeoverTextViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f00298(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_1108f6428;
  param_1[1] = &PTR_DAT_1108f6488;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f002ac; end: 105f002ef; -[SCCTakeoverViewModel initWithClickButtonText:subComponents:] */

void FUN_105f002ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f00358(PTR_PTR_1126eded8);
  func_0x000105f00350(auStack_20);
  return;
}



/* Entry: 105f002f0; end: 105f0036f; +[SCCTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f002f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_1108f6498;
  param_1[1] = &PTR_DAT_1108f6588;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f00370; end: 105f0038b; +[SCMapLensMarkerProfileActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f00370(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f65b0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f0038c; end: 105f00397; +[SCMapLensMarkerProfileView componentPath] */

undefined ** FUN_105f0038c(void)

{
  return &PTR____CFConstantStringClassReference_110e30e38;
}



/* Entry: 105f00398; end: 105f003cb; -[SCMapLensMarkerProfileView initWithViewModel:componentContext:runtime:] */

void FUN_105f00398(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edee0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f003cc; end: 105f0041b; -[SCMapLensMarkerProfileView setViewModel:] */

void FUN_105f003cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f0041c; end: 105f0045f; -[SCMapLensMarkerProfileView viewModel] */

void FUN_105f0041c(undefined8 param_1)

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



/* Entry: 105f00460; end: 105f00467; -[SCMapLensMarkerDistanceState__Enum init] */

void FUN_105f00460(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105f00468; end: 105f0046f; -[SCMapLensMarkerServerEnv__Enum init] */

void FUN_105f00468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105f00470; end: 105f004bf; -[SCMapLensMarkerProfileContext initWithNetworkingClient:serverEnv:actionHandler:] */

void FUN_105f00470(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edee8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f004c0; end: 105f004d3; +[SCMapLensMarkerProfileContext valdiMarshallableObjectDescriptor] */

void FUN_105f004c0(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_1108f6658;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_1108f6730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f004d4; end: 105f00513; -[SCMapLensMarkerProfileViewModel initWithMarkerID:markerDistanceState:] */

void FUN_105f004d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edef0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f00514; end: 105f00537; +[SCMapLensMarkerProfileViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f00514(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f6768;
  param_1[1] = &PTR_DAT_1108f67e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f00538; end: 105f00667; +[SCMapStatusAdapters exploreItemFromSCMEExplorerStatus:mutedFriendsSet:] */

void FUN_105f00538(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
LAB_105f00630:
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfd74c0();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfd8de0();
      if ((int)lVar1 == 0) goto LAB_105f00630;
      lVar1 = param_3;
      func_0x00010c0b9e00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcc880(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (param_1 == 0) goto LAB_105f00638;
      puVar2 = PTR_PTR_1126c5d58;
      func_0x00010bf04740(PTR_PTR_1126c5d58,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010bfb8b20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec27e0(param_1,param_2,lVar1,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (param_1 == 0) {
LAB_105f00638:
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_1126c5d58;
        func_0x00010c253200(PTR_PTR_1126c5d58,param_2,param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f00668; end: 105f00797; +[SCMapStatusAdapters myStatusFromSCMEMyExplorerStatus:mutedFriendsSet:] */

void FUN_105f00668(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd74c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c252d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb8b20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec27e0(param_1,param_2,lVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126c5d60;
      if (param_1 == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c29ef60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c253600(puVar3,param_2,param_1,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
      _objc_release(param_1);
      goto LAB_105f00770;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_105f00770:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f00798; end: 105f00a2b; +[SCMapStatusAdapters thumbnailFromSCMTThumbnail:] */

void FUN_105f00798(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
LAB_105f009f4:
    puVar5 = (undefined *)0x0;
    goto LAB_105f009f8;
  }
  ppuVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126c5d68;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuVar1 = param_3;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = param_3;
    func_0x00010c11a2e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c11a2e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110e30e58;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e30e58,param_2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar5 = PTR_PTR_1126c5d68;
      goto LAB_105f00884;
    }
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c08fa60();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar3;
      func_0x00010c08fa60();
      if (ppuVar2 == (undefined **)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        ppuVar2 = param_3;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar2;
        func_0x00010c08fa60();
        _objc_release(ppuVar2);
        _objc_release(ppuVar3);
        _objc_release(ppuVar1);
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar4 == (undefined **)0x0) goto LAB_105f009f4;
        ppuVar3 = param_3;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e30e78);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        puVar5 = PTR_PTR_1126c5d68;
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_3;
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        func_0x00010c085300(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf93d00(puVar5,param_2,ppuVar3,ppuVar2,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar2);
      }
      goto LAB_105f008b0;
    }
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_105f00884:
    func_0x00010bdc3460(ppuVar3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db180(puVar5,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_105f008b0:
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar1);
LAB_105f009f8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f00a2c; end: 105f00bb7; +[SCMapStatusAdapters _statusGroupFromSCMEExplorerFriendStatus:mutedFriendsSet:] */

void FUN_105f00a2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c2530c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f00bb8;
    puStack_68 = &UNK_1108f67f0;
    _objc_retain(param_4);
    lVar2 = lVar1;
    uStack_60 = param_4;
    uStack_58 = param_1;
    func_0x000100504554(lVar1,&puStack_80);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c2530c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x0001006372a4();
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c253560();
    puVar4 = PTR_PTR_1126c5d70;
    _objc_alloc(PTR_PTR_1126c5d70);
    lVar1 = param_3;
    func_0x00010c27afe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf0c0(param_3);
    func_0x00010c04c540(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(uStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f00bb8; end: 105f00c47;  */

void FUN_105f00bb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bec27a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f00c48; end: 105f00c4f;  */

void FUN_105f00c48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hideInExplore_1125d61e8);
  return;
}



/* Entry: 105f00c50; end: 105f01147; +[SCMapStatusAdapters _statusFromSCMEExplorerFriendStatus_StatusData:] */

void FUN_105f00c50(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_4;
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_4 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar2 = param_4;
    func_0x00010c09fa00(param_4);
    func_0x00010bf0a0e0(puVar10,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar2 = param_4;
    func_0x00010c09f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_130;
      do {
        lVar17 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar15 = *(undefined8 *)(lStack_138 + lVar17 * 8);
          puVar14 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
          _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
          func_0x00010c08aca0(uVar15);
          uVar18 = uVar12;
          func_0x00010c09abe0(uVar15);
          func_0x00010c021a60(uVar12,uVar18,puVar14);
          func_0x00010befa120(puVar10,param_3,puVar14);
          _objc_release(puVar14);
          lVar17 = lVar17 + 1;
        } while (lVar3 != lVar17);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_3,&uStack_140,auStack_100,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puVar13 = PTR_PTR_1126bf300;
    _objc_alloc();
    lVar2 = param_4;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dab20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar11;
    func_0x00010bf3e840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf3e860();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c229ee0();
    lVar8 = param_4;
    func_0x00010c253880(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c077f80();
    func_0x00010c0605a0(0x3ff0000000000000,puVar13,param_3,lVar3,lVar17,lVar5,lVar7,0,lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar17);
    _objc_release(lVar11);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf865a0();
    uVar12 = 3;
    iVar1 = (int)lVar2;
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
        uVar12 = 0;
      }
    }
    else if (iVar1 == 1) {
      uVar12 = 2;
    }
    else {
      uVar12 = 3;
      if (iVar1 == 2) {
        uVar12 = 1;
      }
    }
    func_0x00010bf03f60();
    lVar2 = param_4;
    func_0x00010bfde940();
    puVar16 = PTR_PTR_1126bf318;
    if ((int)lVar2 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      lVar2 = param_4;
      func_0x00010c2bd580(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7680(puVar16,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    lVar2 = param_4;
    func_0x00010c253540();
    param_1 = (double)lVar2 / 1000.0;
    lVar2 = param_4;
    func_0x00010bfd8800();
    if ((int)lVar2 == 0) {
      param_2 = 0;
    }
    else {
      lVar2 = param_4;
      func_0x00010c09a820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec2740(param_1,param_2,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    puVar14 = PTR_PTR_1126c5d78;
    _objc_alloc(PTR_PTR_1126c5d78);
    lVar3 = param_4;
    func_0x00010c253260();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_4;
    func_0x00010c09e340(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076ae0();
    lVar2 = lVar3;
    func_0x00010c01bb20(param_1,puVar14,param_3,lVar3,lVar11,puVar10,puVar13,lVar17,uVar12);
    _objc_release(lVar4);
    _objc_release(lVar17);
    _objc_release(lVar11);
    _objc_release(lVar3);
    _objc_release(param_2);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar10);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    dVar19 = param_1;
    _objc_retain(lVar2);
    if (lVar2 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bfd52e0();
      if ((int)lVar3 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
        _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
        lVar3 = lVar2;
        func_0x00010bf34700(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08aca0();
        lVar11 = lVar2;
        dVar20 = dVar19;
        func_0x00010bf34700(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09abe0();
        func_0x00010c021a60(dVar19,dVar20,puVar10);
        _objc_release(lVar11);
        _objc_release(lVar3);
      }
      lVar3 = lVar2;
      func_0x00010c098f20();
      if (lVar3 < 1) {
        puVar13 = (undefined *)0x0;
      }
      else {
        lVar3 = lVar2;
        func_0x00010c098f20(lVar2);
        puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf655e0(param_1 + (double)lVar3 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar14 = PTR_PTR_1126c5d80;
      _objc_alloc(PTR_PTR_1126c5d80);
      func_0x00010c11ef80(lVar2);
      func_0x00010bffd480(puVar14,param_3,puVar10,puVar13);
      _objc_release(puVar13);
      _objc_release(puVar10);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105f01148; end: 105f0129b; +[SCMapStatusAdapters _statusConstraintFromLiveCancellationInfo:statusCreationTimestamp:] */

void FUN_105f01148(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bfd52e0();
    if ((int)lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      lVar1 = param_4;
      func_0x00010bf34700(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      lVar2 = param_4;
      dVar7 = dVar6;
      func_0x00010bf34700(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      func_0x00010c021a60(dVar6,dVar7,puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c098f20();
    if (lVar1 < 1) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar1 = param_4;
      func_0x00010c098f20(param_4);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(param_1 + (double)lVar1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126c5d80;
    _objc_alloc(PTR_PTR_1126c5d80);
    func_0x00010c11ef80(param_4);
    func_0x00010bffd480(puVar5,param_3,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f0129c; end: 105f01317; +[SCMapStatusAdapters _announcementFromSCMEExplorerMapStatus:] */

void FUN_105f0129c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c5d88;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c253260(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c01b440(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f01318; end: 105f01427; -[SCMapStatusRPCService initWithCurrentUserId:exploreRequestService:] */

undefined1 *
FUN_105f01318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126edef8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f01428; end: 105f0152b; -[SCMapStatusRPCService fetchExploreItemsWithCompletion:mutedFriendsSet:completionQueue:] */

void FUN_105f01428(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_3 != 0) {
    if (param_5 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_5 = puVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f0152c;
    puStack_68 = &UNK_1108465d0;
    lStack_60 = param_1;
    _objc_retain(param_5);
    puStack_58 = param_5;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_release(puStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f0152c; end: 105f01677;  */

void FUN_105f0152c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f01678;
  puStack_60 = &UNK_1108f6890;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  ppuVar1 = &puStack_78;
  uStack_50 = uVar2;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa69a0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f01678; end: 105f0185f;  */

void FUN_105f01678(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_2 == 0) {
      uVar3 = param_3;
      func_0x00010c253640();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105f01898;
      puStack_a8 = &UNK_1108f6860;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar4 = uVar3;
      uStack_a0 = uVar5;
      func_0x000100504554(uVar3,&puStack_c0);
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_105f018b0;
      puStack_e0 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uStack_d8 = uVar4;
      uStack_c8 = uVar3;
      _objc_retain(param_3);
      uStack_d0 = param_3;
      _objc_retain(uVar4);
      func_0x00010007380c(uVar5,&puStack_f8);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_c8);
      _objc_release(uVar4);
      uVar3 = uStack_a0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105f01860;
      puStack_80 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uStack_68 = uVar3;
      _objc_retain(param_2);
      lStack_78 = param_2;
      _objc_retain(param_3);
      uStack_70 = param_3;
      func_0x00010007380c(uVar4,&puStack_98);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      uVar3 = uStack_68;
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f01860; end: 105f01897;  */

void FUN_105f01860(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c103720(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000105f01894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105f01898; end: 105f018af;  */

void FUN_105f01898(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c5d90,PTR_s_exploreItemFromSCMEExplorerStatu_1125c4d00,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f018b0; end: 105f018e3;  */

void FUN_105f018b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c103720(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000105f018e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
  return;
}



/* Entry: 105f018e4; end: 105f019e7; -[SCMapStatusRPCService fetchMyStatusesWithCompletion:mutedFriendsSet:completionQueue:] */

void FUN_105f018e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_3 != 0) {
    if (param_5 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_5 = puVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f019e8;
    puStack_68 = &UNK_1108465d0;
    lStack_60 = param_1;
    _objc_retain(param_5);
    puStack_58 = param_5;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_release(puStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f019e8; end: 105f01b33;  */

void FUN_105f019e8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f01b34;
  puStack_60 = &UNK_1108f68f0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  ppuVar1 = &puStack_78;
  uStack_50 = uVar2;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8ce0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f01b34; end: 105f01d1b;  */

void FUN_105f01b34(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_2 == 0) {
      uVar3 = param_3;
      func_0x00010c253640();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105f01d54;
      puStack_a8 = &UNK_1108f68c0;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar4 = uVar3;
      uStack_a0 = uVar5;
      func_0x000100504554(uVar3,&puStack_c0);
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_105f01d6c;
      puStack_e0 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uStack_d8 = uVar4;
      uStack_c8 = uVar3;
      _objc_retain(param_3);
      uStack_d0 = param_3;
      _objc_retain(uVar4);
      func_0x00010007380c(uVar5,&puStack_f8);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_c8);
      _objc_release(uVar4);
      uVar3 = uStack_a0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105f01d1c;
      puStack_80 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uStack_68 = uVar3;
      _objc_retain(param_2);
      lStack_78 = param_2;
      _objc_retain(param_3);
      uStack_70 = param_3;
      func_0x00010007380c(uVar4,&puStack_98);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      uVar3 = uStack_68;
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f01d1c; end: 105f01d53;  */

void FUN_105f01d1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c103720(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000105f01d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105f01d54; end: 105f01d6b;  */

void FUN_105f01d54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c5d90,PTR_s_myStatusFromSCMEMyExplorerStatus_112612cc8,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f01d6c; end: 105f01d9f;  */

void FUN_105f01d6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c103720(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000105f01d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
  return;
}



/* Entry: 105f01da0; end: 105f01ecf; -[SCMapStatusRPCService deleteMyStatus:mutedFriendsSet:completion:completionQueue:] */

void FUN_105f01da0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if ((param_3 != 0) && (param_5 != 0)) {
    if (param_6 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_6 = puVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f01ed0;
    puStack_70 = &UNK_110852488;
    lStack_68 = param_1;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(param_5);
    lStack_48 = param_5;
    _objc_retain(param_6);
    puStack_50 = param_6;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(puStack_50);
    _objc_release(lStack_48);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f01ed0; end: 105f02133;  */

void FUN_105f01ed0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &puStack_110;
  _objc_initWeak(auStack_c8,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105f02134;
  puStack_f8 = &UNK_1108f6920;
  _objc_copyWeak(auStack_d0,auStack_c8);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_f0 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = uVar4;
  _objc_retain(uVar5);
  uStack_e0 = uVar5;
  _objc_retainBlock(&puStack_110);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105f02854;
  uStack_70 = 0x105f02864;
  uStack_68 = 0;
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105f0286c;
  puStack_a8 = &UNK_1108f69c0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar5);
  uStack_a0 = uVar5;
  puStack_98 = &uStack_90;
  func_0x00010c0c0420(uVar4);
  lVar6 = puStack_88[5];
  _objc_retain(lVar6);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar3 = lVar6;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bce0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar6);
  _objc_release(ppuVar2);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  return;
}



/* Entry: 105f02134; end: 105f02377;  */

void FUN_105f02134(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_2 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      uVar5 = param_3;
      func_0x00010c253640();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_105f023b8;
      puStack_b8 = &UNK_1108f68c0;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uVar6 = uVar5;
      uStack_b0 = uVar4;
      func_0x000100504554(uVar5,&puStack_d0);
      _objc_release(uVar5);
      puStack_100 = puVar1;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x105f023d0;
      puStack_e8 = &UNK_11084aaa8;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar4);
      uStack_e0 = uVar6;
      uStack_d8 = uVar4;
      _objc_retain(uVar6);
      func_0x00010007380c(uVar5,&puStack_100);
      _objc_release(uStack_e0);
      _objc_release(uStack_d8);
      _objc_release(uVar6);
      _objc_release(uStack_b0);
    }
    else {
      uVar3 = *(ulong *)(lVar2 + 0x20);
      *(ulong *)(lVar2 + 0x20) = uVar3 + 1;
      dVar8 = (double)uVar3;
      _exp2(dVar8);
      uVar9 = NEON_fminnm(dVar8,0x404e000000000000);
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105f02378;
      puStack_90 = &UNK_11084cbf0;
      _objc_copyWeak(auStack_68,param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uStack_88 = uVar5;
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uStack_80 = uVar6;
      _objc_retain(uVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uStack_70 = uVar7;
      _objc_retain(uVar5);
      uStack_78 = uVar5;
      func_0x00010c0f7fe0(uVar9,uVar4);
      _objc_release(uStack_78);
      _objc_release(uStack_70);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f02378; end: 105f023b7;  */

void FUN_105f02378(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf6c440(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f023b8; end: 105f023df;  */

void FUN_105f023b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c5d90,PTR_s_myStatusFromSCMEMyExplorerStatus_112612cc8,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f023e0; end: 105f0247f; -[SCMapStatusRPCService submitViewEvents:] */

void FUN_105f023e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f02480;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f02480; end: 105f025f7;  */

void FUN_105f02480(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f025f8;
  puStack_60 = &UNK_1108f6950;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  ppuVar1 = &puStack_78;
  uStack_58 = uVar4;
  _objc_retainBlock(ppuVar1);
  puVar2 = PTR_PTR_1126c5d98;
  _objc_alloc_init(PTR_PTR_1126c5d98);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108f69a0);
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c222fa0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ef40(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f025f8; end: 105f0273f;  */

void FUN_105f025f8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    else {
      uVar2 = *(ulong *)(lVar1 + 0x28);
      *(ulong *)(lVar1 + 0x28) = uVar2 + 1;
      dVar5 = (double)uVar2;
      _exp2(dVar5);
      uVar6 = NEON_fminnm(dVar5,0x404e000000000000);
      _objc_initWeak(auStack_58,lVar1);
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      _objc_copyWeak(auStack_60,auStack_58);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0f7fe0(uVar6,uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f02740; end: 105f0277b;  */

void FUN_105f02740(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c25f920(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f0277c; end: 105f02817;  */

void FUN_105f0277c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c5da0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  func_0x00010c253260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a400(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c21e620(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f02818; end: 105f02853; -[SCMapStatusRPCService .cxx_destruct] */

void FUN_105f02818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f02854; end: 105f0286b;  */

void FUN_105f02854(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f0286c; end: 105f029c3;  */

void FUN_105f0286c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar5 = uVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((int)uVar3 != 0) {
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        _objc_release(uVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010be5cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105f029c4; end: 105f02a03;  */

void FUN_105f029c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f02a04; end: 105f02dc3; -[SCMapStatusServiceProvider _mapStatusStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f02a04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + _DAT_11273a2b8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273a2bc;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c5db0;
  _objc_alloc();
  lVar5 = lVar2;
  func_0x00010c2923e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11273a2c0;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bf9cdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0076c0();
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_initWeak(auStack_70,param_1);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c5db8;
  _objc_alloc();
  lVar9 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11273a2c4;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf1aca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273a2c8;
  _objc_loadWeakRetained();
  lVar13 = lVar5;
  func_0x00010c0d4240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273a2cc;
  _objc_loadWeakRetained();
  lVar14 = lVar6;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11273a2d0;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11273a2d4;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a2d8;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0077a0();
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105f02dc4; end: 105f02e03;  */

void FUN_105f02dc4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be24da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f02e04; end: 105f02f1f; -[SCMapStatusServiceProvider _grpcStatusService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f02e04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + _DAT_11273a2dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  param_1 = param_1 + _DAT_11273a2e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b139c8(puVar5,&PTR____CFConstantStringClassReference_110e30e98,lVar4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126c5dc0;
  _objc_alloc(PTR_PTR_1126c5dc0);
  func_0x00010c058f80();
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f02f20; end: 105f02fc3; -[SCMapStatusServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f02f20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a2dc);
  _objc_destroyWeak(param_1 + _DAT_11273a2e0);
  _objc_destroyWeak(param_1 + _DAT_11273a2d4);
  _objc_destroyWeak(param_1 + _DAT_11273a2c0);
  _objc_destroyWeak(param_1 + _DAT_11273a2cc);
  _objc_destroyWeak(param_1 + _DAT_11273a2bc);
  _objc_destroyWeak(param_1 + _DAT_11273a2c4);
  _objc_destroyWeak(param_1 + _DAT_11273a2c8);
  _objc_destroyWeak(param_1 + _DAT_11273a2d0);
  _objc_destroyWeak(param_1 + _DAT_11273a2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a2b8);
  return;
}



/* Entry: 105f02fc4; end: 105f0370f; -[SCMapStatusStore initWithCurrentUserId:mapBitmojiAvatarGenerator:mapPeopleFriendsProvider:mapStatusRPCService:grpcStatusService:mutingService:mapUserPreferences:sharingPreferencesProvider:circumstanceEngine:applicationLifecycleEvents:] */

undefined8 *
FUN_105f02fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126edf00;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166dc0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166f20(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198e60(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198e40(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_12;
    func_0x00010bf75dc0(param_12);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105f03710;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010c2a6420(param_12);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105f03744;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf72840(param_12);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105f03778;
    puStack_f0 = &UNK_110846510;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = puVar1[4];
    func_0x00010bfba660();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar3;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105f037ac;
    puStack_118 = &UNK_1108b7300;
    _objc_copyWeak(auStack_110,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = puVar1[6];
    func_0x00010c1067e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar3;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_105f038a4;
    puStack_140 = &UNK_1108f3470;
    _objc_copyWeak(auStack_138,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0x72) = 0;
    func_0x00010bddd860(puVar1);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = 0;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0d41e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,auStack_90);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x11];
    puVar1[0x11] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
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



/* Entry: 105f03710; end: 105f037ab;  */

void FUN_105f03710(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be67c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f037ac; end: 105f0385f;  */

void FUN_105f037ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f03860; end: 105f0389b;  */

void FUN_105f03860(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed7b40(param_1);
    func_0x00010bedbf00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0389c; end: 105f038a3;  */

void FUN_105f0389c(void)

{
  return;
}



/* Entry: 105f038a4; end: 105f03943;  */

void FUN_105f038a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be69e80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f03944; end: 105f0399b; -[SCMapStatusStore _checkForInitialApplicationState] */

void FUN_105f03944(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f0399c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105f0399c; end: 105f039f3;  */

void FUN_105f0399c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setIsAppForegrounded__112586cb0,
             puVar2 == (undefined *)0x0);
  return;
}



/* Entry: 105f039f4; end: 105f03a4f; -[SCMapStatusStore _setIsAppForegrounded:] */

void FUN_105f039f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105f03a50;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_40);
  return;
}



/* Entry: 105f03a50; end: 105f03a7f;  */

void FUN_105f03a50(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x72) != *(char *)(param_1 + 0x28)) {
    *(char *)(*(long *)(param_1 + 0x20) + 0x72) = *(char *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be9b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleInitialPeriodicUpdate_1125845f8);
      return;
    }
  }
  return;
}



/* Entry: 105f03a80; end: 105f03b1b; -[SCMapStatusStore _scheduleInitialPeriodicUpdate] */

void FUN_105f03a80(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_2;
  func_0x00010c08a280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar1);
  dVar2 = 0.0;
  if (0.0 <= 30.0 - ABS(param_1)) {
    dVar2 = 30.0 - ABS(param_1);
  }
  func_0x00010be9b4e0(param_2);
  uVar1 = param_2;
  func_0x00010c08a2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar1);
  dVar3 = 0.0;
  if (0.0 <= 60.0 - ABS(dVar2)) {
    dVar3 = 60.0 - ABS(dVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,param_2,PTR_s__schedulePeriodicUpdateForMyStat_1125846e8);
  return;
}



/* Entry: 105f03b1c; end: 105f03b23; -[SCMapStatusStore _onApplicationDidBecomeActive] */

void FUN_105f03b1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsAppForegrounded__112586cb0,1);
  return;
}



/* Entry: 105f03b24; end: 105f03b2b; -[SCMapStatusStore _onApplicationDidEnterBackground] */

void FUN_105f03b24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsAppForegrounded__112586cb0,0);
  return;
}



/* Entry: 105f03b2c; end: 105f03b33; -[SCMapStatusStore _onApplicationWillEnterForeground] */

void FUN_105f03b2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsAppForegrounded__112586cb0,1);
  return;
}



/* Entry: 105f03b34; end: 105f03b57; -[SCMapStatusStore reload] */

void FUN_105f03b34(undefined8 param_1)

{
  func_0x00010c128c60();
                    /* WARNING: Could not recover jumptable at 0x00010c128e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadMyStatuses_112627db0);
  return;
}


