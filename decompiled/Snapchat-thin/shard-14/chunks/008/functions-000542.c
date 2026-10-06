/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b66203c; end: 10b662073; -[SCCFacetaggingSettingFaceTaggingViewContext initWithNavigator:] */

void FUN_10b66203c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f60;
  uStack_20 = param_1;
  func_0x00010b6620e8();
  func_0x00010b6620c8(&uStack_20);
  return;
}



/* Entry: 10b662074; end: 10b662087; +[SCCFacetaggingSettingFaceTaggingViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b662074(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d353a8;
  param_1[1] = &PTR_s_SCValdiINavigator_110d35408;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662088; end: 10b6620b7;  */

void FUN_10b662088(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b6620b8; end: 10b6620f3;  */

void FUN_10b6620b8(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6620f4; end: 10b6620fb; -[SCCFaceTaggingMediaSource__Enum init] */

void FUN_10b6620f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6620fc; end: 10b662103; -[SCCFaceTaggingProcessErrorCode__Enum init] */

void FUN_10b6620fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,10);
  return;
}



/* Entry: 10b662104; end: 10b66213f; -[SCCDetectedFace initWithX:y:width:height:] */

void FUN_10b662104(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6622e4(PTR_PTR_112707f68);
  func_0x00010b6622cc(auStack_20);
  return;
}



/* Entry: 10b662140; end: 10b66214f; +[SCCDetectedFace valdiMarshallableObjectDescriptor] */

void FUN_10b662140(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35428;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662150; end: 10b662183; -[SCCFaceDetectionResult initWithFaces:] */

void FUN_10b662150(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6622e4(PTR_PTR_112707f70);
  func_0x00010b6622cc(auStack_20);
  return;
}



/* Entry: 10b662184; end: 10b662197; +[SCCFaceDetectionResult valdiMarshallableObjectDescriptor] */

void FUN_10b662184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d354e8;
  param_1[1] = &PTR_DAT_110d35548;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662198; end: 10b6621cf; -[SCCFaceTaggingProcessError initWithCode:message:] */

void FUN_10b662198(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f78;
  uStack_20 = param_1;
  func_0x00010b6622cc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b6621d0; end: 10b6621e3; +[SCCFaceTaggingProcessError valdiMarshallableObjectDescriptor] */

void FUN_10b6621d0(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110d35560;
  param_1[1] = &PTR_DAT_110d355a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6621e4; end: 10b662217; -[SCCFaceTaggingRegion init] */

void FUN_10b6621e4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b662218; end: 10b662227; +[SCCFaceTaggingRegion valdiMarshallableObjectDescriptor] */

void FUN_10b662218(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_countryCode_110d355b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662228; end: 10b662263; -[SCCMemDataId initWithUuid:creationTimeMs:] */

void FUN_10b662228(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f88;
  uStack_20 = param_1;
  func_0x00010b6622cc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b662264; end: 10b662273; +[SCCMemDataId valdiMarshallableObjectDescriptor] */

void FUN_10b662264(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_uuid_110d35600;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662274; end: 10b6622af; -[SCCServerDetectedFace initWithDetectedFaceId:faceClusterId:xQuantized:yQuantized:widthQuantized:heightQuantized:] */

void FUN_10b662274(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6622e4(PTR_PTR_112707f90);
  func_0x00010b6622cc(auStack_20);
  return;
}



/* Entry: 10b6622b0; end: 10b6622f3; +[SCCServerDetectedFace valdiMarshallableObjectDescriptor] */

void FUN_10b6622b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35648;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6622f4; end: 10b662337; -[SCPostArchiveTabConfig initWithNetworkingClient:storyServiceBaseUrl:storyServiceToken:businessProfileId:pageSize:] */

void FUN_10b6622f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f98;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b662338; end: 10b662357; +[SCPostArchiveTabConfig valdiMarshallableObjectDescriptor] */

void FUN_10b662338(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_110d35708;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110d35798;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662358; end: 10b662403; -[SCCItemSource__Enum init] */

undefined * FUN_10b662358(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_1133ba5d0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e5dff8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e49e18;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b6624c4(PTR_PTR_112707fa0);
  return puVar1;
}



/* Entry: 10b662404; end: 10b662423; -[SCCameraRollPermissionBannerContext init] */

void FUN_10b662404(void)

{
  func_0x00010b6624c4(PTR_PTR_112707fa0);
  return;
}



/* Entry: 10b662424; end: 10b662433; +[SCCameraRollPermissionBannerContext valdiMarshallableObjectDescriptor] */

void FUN_10b662424(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d357a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662434; end: 10b662453; -[SCCameraRollPermissionBannerViewModel init] */

void FUN_10b662434(void)

{
  func_0x00010b6624c4(PTR_PTR_112707fa8);
  return;
}



/* Entry: 10b662454; end: 10b662463; +[SCCameraRollPermissionBannerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b662454(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3ad8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662464; end: 10b662483; -[SCGooglePhotoPickerTabViewContext init] */

void FUN_10b662464(void)

{
  func_0x00010b6624c4(PTR_PTR_112707fb0);
  return;
}



/* Entry: 10b662484; end: 10b662493; +[SCGooglePhotoPickerTabViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b662484(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d357d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662494; end: 10b6624b3; -[SCGooglePhotoPickerTabViewViewModel init] */

void FUN_10b662494(void)

{
  func_0x00010b6624c4(PTR_PTR_112707fb8);
  return;
}



/* Entry: 10b6624b4; end: 10b6624eb; +[SCGooglePhotoPickerTabViewViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6624b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3af0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6624ec; end: 10b6624f3; -[SCCMemTwoDataEntityStatus__Enum init] */

void FUN_10b6624ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6624f4; end: 10b6624fb; -[SCCMemTwoMediaContentState__Enum init] */

void FUN_10b6624f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6624fc; end: 10b66250b; -[SCMemoriesTwoCameraRollAuthorizationStatus__Enum init] */

void FUN_10b6624fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133ba5d8,6);
  return;
}



/* Entry: 10b66250c; end: 10b6625ab; -[SCCMemTwoDaoType__Enum init] */

void FUN_10b66250c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010b662f48();
  puStack_60 = PTR_PTR_1133ba608;
  puStack_58 = PTR_PTR_1133ba610;
  puStack_50 = PTR_PTR_1133ba618;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f6b8d8;
  puStack_40 = PTR_PTR_1133ba620;
  puStack_38 = PTR_PTR_1133ba628;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f6b918;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_00);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f48();
      func_0x00010b662fc4();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(extraout_x8_02);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b662f48();
      func_0x00010b662fc4();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(extraout_x8_03);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b662f48();
        func_0x00010b662fc4();
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b662f14();
        func_0x00010b662f5c();
        func_0x00010b662f34(extraout_x8_04);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b662f48();
        ppuStack_250 = &PTR____CFConstantStringClassReference_110e6aa18;
        ppuStack_248 = &PTR____CFConstantStringClassReference_110f6ba18;
        puStack_240 = PTR_PTR_1133ba638;
        uStack_238 = extraout_x8_05;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_250,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b662f14();
        func_0x00010b662f5c();
        func_0x00010b662f34(uStack_238);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b662f88(PTR_PTR_112707fc0);
        return;
      }
    }
  }
  return;
}



/* Entry: 10b6625ac; end: 10b66260f; -[SCCMemTwoDataEntitySubtype__Enum init] */

void FUN_10b6625ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_01);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_02);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f48();
      func_0x00010b662fc4();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(extraout_x8_03);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b662f48();
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e6aa18;
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f6ba18;
      puStack_1e0 = PTR_PTR_1133ba638;
      uStack_1d8 = extraout_x8_04;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1f0,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(uStack_1d8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b662f88(PTR_PTR_112707fc0);
      return;
    }
  }
  return;
}



/* Entry: 10b662610; end: 10b66269b; -[SCCMemTwoDataEntityType__Enum init] */

void FUN_10b662610(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_00);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f48();
      func_0x00010b662fc4();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(extraout_x8_02);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b662f48();
        ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e6aa18;
        ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f6ba18;
        puStack_1a0 = PTR_PTR_1133ba638;
        uStack_198 = extraout_x8_03;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1b0,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b662f14();
        func_0x00010b662f5c();
        func_0x00010b662f34(uStack_198);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b662f88(PTR_PTR_112707fc0);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10b66269c; end: 10b662743; -[SCCMemTwoMutationActionType__Enum init] */

void FUN_10b66269c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    func_0x00010b662fc4();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f48();
      ppuStack_150 = &PTR____CFConstantStringClassReference_110e6aa18;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110f6ba18;
      puStack_140 = PTR_PTR_1133ba638;
      uStack_138 = extraout_x8_02;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_150,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b662f14();
      func_0x00010b662f5c();
      func_0x00010b662f34(uStack_138);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b662f88(PTR_PTR_112707fc0);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b662744; end: 10b6627cf; -[SCCMemTwoSnapDocActionType__Enum init] */

void FUN_10b662744(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110e6aa18;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f6ba18;
    puStack_d0 = PTR_PTR_1133ba638;
    uStack_c8 = extraout_x8_01;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_e0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(uStack_c8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f88(PTR_PTR_112707fc0);
      return;
    }
  }
  return;
}



/* Entry: 10b6627d0; end: 10b662833; -[SCCMemoriesV2GalleryDataApiLockSnapSource__Enum init] */

void FUN_10b6627d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010b662f48();
  func_0x00010b662fc4();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b662f48();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e6aa18;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f6ba18;
    puStack_70 = PTR_PTR_1133ba638;
    uStack_68 = extraout_x8_00;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b662f14();
    func_0x00010b662f5c();
    func_0x00010b662f34(uStack_68);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b662f88(PTR_PTR_112707fc0);
      return;
    }
  }
  return;
}



/* Entry: 10b662834; end: 10b6628ab; -[SCMemoriesOperaFeatureType__Enum init] */

void FUN_10b662834(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b662f48();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e6aa18;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f6ba18;
  puStack_30 = PTR_PTR_1133ba638;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b662f14();
  func_0x00010b662f5c();
  func_0x00010b662f34(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b662f88(PTR_PTR_112707fc0);
  return;
}



/* Entry: 10b6628ac; end: 10b6628cb; -[SCCMemTwoAISnapGenerationRequest initWithLensId:generationId:] */

void FUN_10b6628ac(void)

{
  func_0x00010b662f88(PTR_PTR_112707fc0);
  return;
}



/* Entry: 10b6628cc; end: 10b6628db; +[SCCMemTwoAISnapGenerationRequest valdiMarshallableObjectDescriptor] */

void FUN_10b6628cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110d35808;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6628dc; end: 10b662917; -[SCCMemTwoAISnapLoadingItem initWithGenerationId:thumbnailUrl:createTimeMs:lensId:] */

void FUN_10b6628dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707fc8;
  uStack_20 = param_1;
  func_0x00010b662fd4();
  func_0x00010b662fbc(&uStack_20);
  return;
}



/* Entry: 10b662918; end: 10b662927; +[SCCMemTwoAISnapLoadingItem valdiMarshallableObjectDescriptor] */

void FUN_10b662918(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35850;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662928; end: 10b66295f; -[SCCMemTwoAISnapsLens initWithLensId:name:thumbnailUrl:] */

void FUN_10b662928(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707fd0;
  uStack_20 = param_1;
  func_0x00010b662fd4();
  func_0x00010b662fbc(&uStack_20);
  return;
}



/* Entry: 10b662960; end: 10b66296f; +[SCCMemTwoAISnapsLens valdiMarshallableObjectDescriptor] */

void FUN_10b662960(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110d358c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662970; end: 10b662a77; -[SCCMemTwoAiSnapsTabContext initWithAiLensesObservable:onAiSnapLensTap:genAIIdentityOnboardStateObservable:onGenAISelfieTap:loadingSnapsObservable:onTouchStartOnCreateAiSnapSection:] */

undefined8 *
FUN_10b662970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar2 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_58 = PTR_PTR_112707fd8;
  uStack_60 = param_1;
  func_0x00010b662fd4();
  puVar3 = &uStack_60;
  func_0x00010b662fbc(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  func_0x00010b66300c();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10b662a78; end: 10b662a8b; +[SCCMemTwoAiSnapsTabContext valdiMarshallableObjectDescriptor] */

void FUN_10b662a78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35928;
  param_1[1] = &PTR_s_SCBridgeObservable_110d359d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662a8c; end: 10b662b43; -[SCCMemTwoOperaAnalytics initWithOnOperaExit:onBrowseViewLatency:onOperaError:] */

undefined8
FUN_10b662a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  func_0x00010b66300c();
  puStack_48 = PTR_PTR_112707fe0;
  uStack_50 = param_1;
  func_0x00010b662fd4();
  func_0x00010b662fbc(&uStack_50);
  func_0x00010b662f5c();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_5;
}



/* Entry: 10b662b44; end: 10b662b57; +[SCCMemTwoOperaAnalytics valdiMarshallableObjectDescriptor] */

void FUN_10b662b44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d359f8;
  param_1[1] = &PTR_DAT_110d35a58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662b58; end: 10b662b77; -[SCCMemTwoOperaGalleryBrowseViewLatencyMetricsPayload init] */

void FUN_10b662b58(void)

{
  func_0x00010b662f68(PTR_PTR_112707fe8);
  return;
}



/* Entry: 10b662b78; end: 10b662b87; +[SCCMemTwoOperaGalleryBrowseViewLatencyMetricsPayload valdiMarshallableObjectDescriptor] */

void FUN_10b662b78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35a70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662b88; end: 10b662ba7; -[SCCMemTwoOperaGalleryExitMetricsPayload init] */

void FUN_10b662b88(void)

{
  func_0x00010b662f68(PTR_PTR_112707ff0);
  return;
}



/* Entry: 10b662ba8; end: 10b662bb7; +[SCCMemTwoOperaGalleryExitMetricsPayload valdiMarshallableObjectDescriptor] */

void FUN_10b662ba8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35b30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662bb8; end: 10b662bf3; -[SCCMemoriesOperaLaunchParameters initWithPlaylistGroupList:firstPlaylistGroupId:analytics:] */

void FUN_10b662bb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707ff8;
  uStack_20 = param_1;
  func_0x00010b662fd4();
  func_0x00010b662fbc(&uStack_20);
  return;
}



/* Entry: 10b662bf4; end: 10b662c07; +[SCCMemoriesOperaLaunchParameters valdiMarshallableObjectDescriptor] */

void FUN_10b662bf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35c08;
  param_1[1] = &PTR_DAT_110d35c98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662c08; end: 10b662c43; -[SCCMemoriesOperaPlaybackOptions initWithShouldShowProgress:shouldAutoAdvance:supportsHighlighting:] */

void FUN_10b662c08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708000;
  uStack_20 = param_1;
  func_0x00010b662fd4();
  func_0x00010b662fbc(&uStack_20);
  return;
}



/* Entry: 10b662c44; end: 10b662c53; +[SCCMemoriesOperaPlaybackOptions valdiMarshallableObjectDescriptor] */

void FUN_10b662c44(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110d35cb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662c54; end: 10b662c9b; -[SCCMemoriesPlaylistGroupCallback initWithGetPlaylistItemList:] */

undefined8 FUN_10b662c54(undefined8 param_1)

{
  _objc_retainBlock();
  func_0x00010b662fd4();
  func_0x00010b662fa4();
  func_0x00010b662f5c();
  return param_1;
}



/* Entry: 10b662c9c; end: 10b662caf; +[SCCMemoriesPlaylistGroupCallback valdiMarshallableObjectDescriptor] */

void FUN_10b662c9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35d48;
  param_1[1] = &PTR_DAT_110d35d78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662cb0; end: 10b662ccf; -[SCCMemoriesPlaylistItemCallback init] */

void FUN_10b662cb0(void)

{
  func_0x00010b662f68(PTR_PTR_112708010);
  return;
}



/* Entry: 10b662cd0; end: 10b662d0b; +[SCCMemoriesPlaylistItemCallback valdiMarshallableObjectDescriptor] */

void FUN_10b662cd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35dd0;
  param_1[1] = &PTR_s_SCBridgeObservable_110d35ed8;
  param_1[2] = &PTR_DAT_110d35d88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662d0c; end: 10b662d6b;  */

void FUN_10b662d0c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b662ffc(FUN_10b662ebc);
  _objc_retainBlock(&puStack_48);
  func_0x00010b663020();
  func_0x00010b66300c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b662d6c; end: 10b662d83;  */

void FUN_10b662d6c(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b662d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
  return;
}



/* Entry: 10b662d84; end: 10b662de3;  */

void FUN_10b662d84(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b662ffc(0x10b662ee8);
  _objc_retainBlock(&puStack_48);
  func_0x00010b663020();
  func_0x00010b66300c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b662de4; end: 10b662e03; -[SCCMemoriesSendToParams init] */

void FUN_10b662de4(void)

{
  func_0x00010b662f68(PTR_PTR_112708018);
  return;
}



/* Entry: 10b662e04; end: 10b662e17; +[SCCMemoriesSendToParams valdiMarshallableObjectDescriptor] */

void FUN_10b662e04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35ef8;
  param_1[1] = &PTR_DAT_110d35f40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662e18; end: 10b662e37; -[SCCMemoriesStoryItem initWithSnapDocList:storyTitle:] */

void FUN_10b662e18(void)

{
  func_0x00010b662f88(PTR_PTR_112708020);
  return;
}



/* Entry: 10b662e38; end: 10b662e47; +[SCCMemoriesStoryItem valdiMarshallableObjectDescriptor] */

void FUN_10b662e38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35f50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662e48; end: 10b662e77; -[SCCMemoriesV2GalleryDataApiSnapsInTimeRangeResult initWithSnaps:rawCount:] */

void FUN_10b662e48(void)

{
  func_0x00010b662fd4();
  func_0x00010b662fa4();
  return;
}



/* Entry: 10b662e78; end: 10b662e8b; +[SCCMemoriesV2GalleryDataApiSnapsInTimeRangeResult valdiMarshallableObjectDescriptor] */

void FUN_10b662e78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35f98;
  param_1[1] = &PTR_DAT_110d35fe0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662e8c; end: 10b662eab; -[SCCameraRollAlbumThumbnail initWithAlbumId:thumbnailUri:] */

void FUN_10b662e8c(void)

{
  func_0x00010b662f88(PTR_PTR_112708030);
  return;
}



/* Entry: 10b662eac; end: 10b662ebb; +[SCCameraRollAlbumThumbnail valdiMarshallableObjectDescriptor] */

void FUN_10b662eac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35ff0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b662ebc; end: 10b662f13;  */

void FUN_10b662ebc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b662f14; end: 10b66302b;  */

void FUN_10b662f14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0105f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b66302c; end: 10b66303b; -[SCCMemoriesMonetizationQuotaThumbnailRetentionConfig__Enum init] */

void FUN_10b66302c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133ba640,3);
  return;
}



/* Entry: 10b66303c; end: 10b663043; -[SCCMemoriesMonetizationQuotaThumbnailState__Enum init] */

void FUN_10b66303c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b663044; end: 10b66306b; -[SCCMemoriesMonetizationLockedSnapThumbnail initWithThumbnailUrl:] */

void FUN_10b663044(void)

{
  func_0x00010b6631fc(PTR_PTR_112708038);
  func_0x00010b6631f0();
  return;
}



/* Entry: 10b66306c; end: 10b66307b; +[SCCMemoriesMonetizationLockedSnapThumbnail valdiMarshallableObjectDescriptor] */

void FUN_10b66306c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66307c; end: 10b6630a7; -[SCCMemoriesMonetizationQuotaThumbnailDecision initWithState:daysLeft:] */

void FUN_10b66307c(void)

{
  func_0x00010b6631fc(PTR_PTR_112708040);
  func_0x00010b6631f0();
  return;
}



/* Entry: 10b6630a8; end: 10b6630bb; +[SCCMemoriesMonetizationQuotaThumbnailDecision valdiMarshallableObjectDescriptor] */

void FUN_10b6630a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36080;
  param_1[1] = &PTR_DAT_110d360c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6630bc; end: 10b6630e7; -[SCCMemoriesMonetizationStoragePayplan initWithStorageGB:priceLabel:] */

void FUN_10b6630bc(void)

{
  func_0x00010b6631fc(PTR_PTR_112708048);
  func_0x00010b6631f0();
  return;
}



/* Entry: 10b6630e8; end: 10b6630f7; +[SCCMemoriesMonetizationStoragePayplan valdiMarshallableObjectDescriptor] */

void FUN_10b6630e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d360d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6630f8; end: 10b663147; -[SCCMemoriesMonetizationStorageQuotaState initWithMaxAllowedBytes:usedBytes:isAvailable:] */

void FUN_10b6630f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708050;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b663148; end: 10b66315b; +[SCCMemoriesMonetizationStorageQuotaState valdiMarshallableObjectDescriptor] */

void FUN_10b663148(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36120;
  param_1[1] = &PTR_DAT_110d36210;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66315c; end: 10b66319b; -[SCCMemoriesMonetizationStorageQuotaUpsell initWithTotalSnapCount:inceptionYear:gracePeriodInMonths:] */

void FUN_10b66315c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708058;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66319c; end: 10b6631ab; +[SCCMemoriesMonetizationStorageQuotaUpsell valdiMarshallableObjectDescriptor] */

void FUN_10b66319c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36230;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6631ac; end: 10b6631d3; -[SCCMemoriesMonetizationStorageQuotaViolation initWithStorageWaterlineTimestampMs:] */

void FUN_10b6631ac(void)

{
  func_0x00010b6631fc(PTR_PTR_112708060);
  func_0x00010b6631f0();
  return;
}



/* Entry: 10b6631d4; end: 10b663223; +[SCCMemoriesMonetizationStorageQuotaViolation valdiMarshallableObjectDescriptor] */

void FUN_10b6631d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d36290;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663224; end: 10b66322b; -[SCCSnapDocRendererRenderPhase__Enum init] */

void FUN_10b663224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 10b66322c; end: 10b6633ab; -[SCCSnapDocRendererISnapDocRenderer initWithHasOverlayImage:hasBurnInEdits:render:renderWithProgress:frameKey:setSnapDoc:dispose:] */

undefined8 *
FUN_10b66322c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
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
  uVar4 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  uVar5 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar6 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_68 = PTR_PTR_112708068;
  puVar7 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010b6636a4();
  return puVar7;
}



/* Entry: 10b6633ac; end: 10b6633e7; +[SCCSnapDocRendererISnapDocRenderer valdiMarshallableObjectDescriptor] */

void FUN_10b6633ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36320;
  param_1[1] = &PTR_DAT_110d363e0;
  param_1[2] = &PTR_DAT_110d362c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6633e8; end: 10b663437;  */

void FUN_10b6633e8(void)

{
  func_0x00010b6636c4();
  func_0x00010b6636b4();
  func_0x00010b663668(FUN_10b6635e0);
  func_0x00010b6636dc();
  func_0x00010b663678();
  func_0x00010b6636a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b663438; end: 10b66344f;  */

void FUN_10b663438(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b66344c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3],param_2[4]);
  return;
}



/* Entry: 10b663450; end: 10b66349f;  */

void FUN_10b663450(void)

{
  func_0x00010b6636c4();
  func_0x00010b6636b4();
  func_0x00010b663668(0x10b663610);
  func_0x00010b6636dc();
  func_0x00010b663678();
  func_0x00010b6636a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6634a0; end: 10b6634b7;  */

void FUN_10b6634a0(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b6634b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,*(undefined4 *)(param_2 + 1),param_2[2]);
  return;
}



/* Entry: 10b6634b8; end: 10b663507;  */

void FUN_10b6634b8(void)

{
  func_0x00010b6636c4();
  func_0x00010b6636b4();
  func_0x00010b663668(0x10b663640);
  func_0x00010b6636dc();
  func_0x00010b663678();
  func_0x00010b6636a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b663508; end: 10b663527; -[SCCSnapDocRendererRenderResult init] */

void FUN_10b663508(void)

{
  func_0x00010b663690(PTR_PTR_112708070);
  return;
}



/* Entry: 10b663528; end: 10b663543; +[SCCSnapDocRendererRenderResult valdiMarshallableObjectDescriptor] */

void FUN_10b663528(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d36410;
  param_1[1] = &PTR_DAT_110d36440;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b663544; end: 10b66358f; -[SCCSnapDocRendererRenderStatus initWithPhase:] */

void FUN_10b663544(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708078;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b663590; end: 10b6635ab; +[SCCSnapDocRendererRenderStatus valdiMarshallableObjectDescriptor] */

void FUN_10b663590(undefined8 *param_1)

{
  *param_1 = &PTR_s_phase_110d36450;
  param_1[1] = &PTR_DAT_110d36510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


