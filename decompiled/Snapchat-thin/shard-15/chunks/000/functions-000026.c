/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b781084; end: 10b78110f;  */

void FUN_10b781084(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b781110; end: 10b781137; -[SOJUGeoGeoLocation initWithTimestamp:lat:lon:altitude:horizontalAccuracy:speed:] */

void FUN_10b781110(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781138; end: 10b7811df; +[SOJUGeoGeoLocation registerMessageFields:] */

void FUN_10b781138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7811f8();
  func_0x00010b7811e0();
  func_0x00010b7811f8();
  func_0x00010b7811e0();
  func_0x00010b7811f8();
  func_0x00010b7811e0();
  func_0x00010b7811f8();
  func_0x00010b7811e0();
  func_0x00010b7811f8();
  func_0x00010bf06b60();
  func_0x00010b7811f8();
  func_0x00010b7811e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7811e0; end: 10b781203;  */

void FUN_10b7811e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,4,0,0);
  return;
}



/* Entry: 10b781204; end: 10b78120f; +[SOJUGeoGeoLocationBuilder messageClass] */

void FUN_10b781204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ec0);
  return;
}



/* Entry: 10b781210; end: 10b781213; +[SOJUGeoGeoLocationBuilder withJUGeoGeoLocation:] */

void FUN_10b781210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b781214; end: 10b781233; -[SOJUGeofence initWithIdValue:coordinates:] */

void FUN_10b781214(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781234; end: 10b7812cf; +[SOJUGeofence registerMessageFields:] */

void FUN_10b781234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,0,
                      0,0,0);
  puVar1 = PTR_s_coordinates_1125b2118;
  puVar2 = PTR_PTR_1126d8400;
  _objc_opt_class(PTR_PTR_1126d8400);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7812d0; end: 10b781317; -[SOJUGeofilterDisplayParameters initWithSize:color:font:staticText:align:textAlpha:textShadow:autoResizeEnabled:fallbackText:maxFontSize:dynamicText:targetDatetime:targetDatetimeDirection:capitalization:calculatedDynamicText:fallbackMethod:] */

void FUN_10b7812d0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781318; end: 10b7814bb; +[SOJUGeofilterDisplayParameters registerMessageFields:] */

void FUN_10b781318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b781534();
  func_0x00010b781518();
  func_0x00010b781524();
  func_0x00010b7814f4();
  func_0x00010b781524();
  func_0x00010b7814f4();
  func_0x00010b7814bc();
  func_0x00010b781524();
  func_0x00010b7814f4();
  func_0x00010b781504();
  func_0x00010b781518();
  _objc_opt_class(PTR_PTR_1126d9118);
  func_0x00010b781534();
  func_0x00010bf06b60();
  func_0x00010b781504();
  func_0x00010b781518();
  func_0x00010b7814bc();
  func_0x00010b781504();
  func_0x00010b781518();
  func_0x00010b7814bc();
  func_0x00010b7814bc();
  func_0x00010b7814dc();
  func_0x00010bf06b60();
  func_0x00010bf06b60(param_3,param_2,PTR_s_capitalization_1125a9840,0,0,6,0,FUN_10b781548,
                      FUN_10b7815c8,0);
  func_0x00010b7814bc();
  func_0x00010b7814dc();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7814bc; end: 10b781547;  */

void FUN_10b7814bc(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b781548; end: 10b7815c7;  */

undefined8 FUN_10b781548(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f23138;
  func_0x00010b78161c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4d36082;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f23158;
    func_0x00010b78161c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x45432e1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb52b8;
      func_0x00010b78161c();
      uVar2 = 0x45f93db;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7815c8; end: 10b781623;  */

undefined ** FUN_10b7815c8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x45432e1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f23158;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb52b8;
  if (param_1 != 0x45f93db) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f23138;
  if (param_1 != 0x4d36082) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b781624; end: 10b7816a3;  */

undefined8 FUN_10b781624(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ed78;
  func_0x00010b7816f8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffdd115c6a;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ed98;
    func_0x00010b7816f8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffb7fe94c9;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7edb8;
      func_0x00010b7816f8();
      uVar2 = 0x760a3bed;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7816a4; end: 10b7816ff;  */

undefined ** FUN_10b7816a4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x48016b37) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7ed98;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ed78;
  if (param_1 != -0x22eea396) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7edb8;
  if (param_1 != 0x760a3bed) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b781700; end: 10b78176b;  */

undefined8 FUN_10b781700(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f230f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f230f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7c4881c3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f23118;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f23118,param_2,param_1);
    uVar2 = 0x255c12;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78176c; end: 10b7817a3;  */

undefined ** FUN_10b78176c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f23118;
  if (param_1 != 0x255c12) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f230f8;
  if (param_1 != 0x7c4881c3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7817a4; end: 10b7817c3; -[SOJUGeofilterImageMetadata initWithImageSizePx:croppedImageSizePx:croppedImageOffset:] */

void FUN_10b7817a4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7817c4; end: 10b781843; +[SOJUGeofilterImageMetadata registerMessageFields:] */

void FUN_10b7817c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd798;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b781844();
  _objc_opt_class(PTR_PTR_1126dd798);
  FUN_10b781844();
  _objc_opt_class(PTR_PTR_1126d9120);
  FUN_10b781844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b781844; end: 10b781867;  */

void FUN_10b781844(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b781868; end: 10b78188f; -[SOJUGeofilterLayoutParameters initWithXOffset:yOffset:xSize:ySize:rotation:zIndex:] */

void FUN_10b781868(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781890; end: 10b78193b; +[SOJUGeofilterLayoutParameters registerMessageFields:] */

void FUN_10b781890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b781960();
  func_0x00010b78193c();
  func_0x00010b781960();
  func_0x00010b78193c();
  func_0x00010b781960();
  func_0x00010b78193c();
  func_0x00010b781960();
  func_0x00010b78193c();
  func_0x00010b781960();
  func_0x00010b781954();
  func_0x00010b781960();
  func_0x00010b781954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78193c; end: 10b78196b;  */

void FUN_10b78193c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,3,0,0);
  return;
}



/* Entry: 10b78196c; end: 10b781997; -[SOJUGeofilterMarkup initWithRefreshRate:type:source:layoutParameters:displayParameters:displayScheduleDeprecated:companionCreativeProperties:] */

void FUN_10b78196c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781998; end: 10b781aa7; +[SOJUGeofilterMarkup registerMessageFields:] */

void FUN_10b781998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_refreshRate_112626f68;
  _objc_retain(param_3);
  func_0x00010b781acc(param_3,param_2,puVar1,0,1,2,0);
  func_0x00010b781ad4();
  func_0x00010bf06b60();
  func_0x00010b781ad4();
  func_0x00010b781acc();
  _objc_opt_class(PTR_PTR_1126d9128);
  func_0x00010b781aa8();
  _objc_opt_class(PTR_PTR_1126d9138);
  func_0x00010b781aa8();
  puVar1 = PTR_s_displayScheduleDeprecated_112546530;
  puVar2 = PTR_PTR_1126e0ec8;
  _objc_opt_class(PTR_PTR_1126e0ec8);
  func_0x00010b781acc(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7edd8,2,7,
                      puVar2);
  _objc_opt_class(PTR_PTR_1126e0ed0);
  func_0x00010b781aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b781aa8; end: 10b781aeb;  */

void FUN_10b781aa8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b781aec; end: 10b781b87;  */

undefined8 FUN_10b781aec(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbf1d8;
  func_0x00010b781bf0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x36452d;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
    func_0x00010b781bf0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x5faa95b;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7edf8;
      func_0x00010b781bf0();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffd7fbceae;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7ee18;
        func_0x00010b781bf0();
        uVar2 = 0xffffffff8afd6b82;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b781b88; end: 10b781bf7;  */

undefined ** FUN_10b781b88(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x5faa95b) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbf1d8;
  if (param_1 != 0x36452d) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7edf8;
  if (param_1 != -0x28043152) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ee18;
  if (param_1 != -0x7502947e) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b781bf8; end: 10b781c17; -[SOJUGeofilterMusicTrackMetadata initWithTrackId:contentRestrictions:] */

void FUN_10b781bf8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781c18; end: 10b781cab; +[SOJUGeofilterMusicTrackMetadata registerMessageFields:] */

void FUN_10b781c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_trackId_11267b9c8;
  _objc_retain(param_3);
  FUN_10b781cac(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b781cac(param_3,param_2,PTR_s_contentRestrictions_1125b0e80,0,1,7,in_x6,in_x7,0,0);
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0xfd8b5d7ea418a7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b781cac; end: 10b781cb7;  */

void FUN_10b781cac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b781cb8; end: 10b781cc3; +[SOJUGeofilterMusicTrackMetadataBuilder messageClass] */

void FUN_10b781cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ed8);
  return;
}



/* Entry: 10b781cc4; end: 10b781cc7; +[SOJUGeofilterMusicTrackMetadataBuilder withJUGeofilterMusicTrackMetadata:] */

void FUN_10b781cc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b781cc8; end: 10b781ceb; -[SOJUGeofilterPrompt initWithText:position:fadeInTimeMs:onScreenTimeMs:fadeOutTimeMs:] */

void FUN_10b781cc8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b781cec; end: 10b781d87; +[SOJUGeofilterPrompt registerMessageFields:] */

void FUN_10b781cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_text_1126787e8;
  _objc_retain(param_3);
  func_0x00010b781da8(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  func_0x00010b781da8(param_3,param_2,PTR_s_position_11261eab8);
  func_0x00010bf06b60();
  func_0x00010b781d88();
  func_0x00010b781d88();
  func_0x00010b781d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b781d88; end: 10b781dbb;  */

void FUN_10b781d88(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b781dbc; end: 10b781e3b;  */

undefined8 FUN_10b781dbc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef2778;
  func_0x00010b781e8c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x14535;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ee38;
    func_0x00010b781e8c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff8789cd95;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ef2798;
      func_0x00010b781e8c();
      uVar2 = 0x75208e2b;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b781e3c; end: 10b781e93;  */

undefined ** FUN_10b781e3c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x7876326b) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7ee38;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef2778;
  if (param_1 != 0x14535) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef2798;
  if (param_1 != 0x75208e2b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b781e94; end: 10b781e9b; +[SOJUGeofilterResponse canInitFromProto] */

undefined8 FUN_10b781e94(void)

{
  return 0;
}



/* Entry: 10b781e9c; end: 10b782023; -[SOJUGeofilterResponse initWithFilterId:expiresCountdown:image:urlParams:imageCroppedToVisible:extraImageMetadata:geofence:unlockableContentType:unlockableContentId:priority:position:dynamicContent:isDynamicGeofilter:clientCacheExpirationDateTimeDeprecated:clientCacheTtlMinutes:isSponsored:sponsoredSlug:sponsoredSlugPosition:sponsoredSlugImgLink:dynamicContentSetting:isLens:lensData:lensCategories:section:isFeatured:appstoreIapId:gplayIapId:targetingType:belowDrawingLayer:encGeoData:geofilterPrompt:schedule:unlockDurationMessage:filterScore:shouldSubsampleImage:lensCategoriesData:serverTimestamp:guaranteeDelivery:exclusionTags:excludedByTags:lensCarouselIndex:lensPlacementInfo:isFrameFilter:unlockableTrackInfo:unlockableCategory:unlockableContext:unlockableAttributes:eligibleForNotification:dynamicContextProperties:stickerPackData:autoStacking:isAnimated:syncSensitivity:populatedUnlockableContextTypes:sponsoredSlugStyle:isMenuFilter:metaTags:hasContextCard:carouselGroup:arSegmentation:attachment:debugInfo:scannableData:tooltip:contextHint:audio:postCaptureLensDataDeprecated:captionStyle:filterIdLong:checksum:eligibleForLensExplorer:snapInfo:additionalCaptionStyles:musicTrackMetadata:adPlacements:sponsoredType:] */

void FUN_10b781e9c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b782024; end: 10b7827e3; +[SOJUGeofilterResponse registerMessageFields:] */

void FUN_10b782024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_filterId_1125c9150;
  _objc_retain(param_3);
  func_0x00010b7828c4(param_3,param_2,puVar1,0,1);
  func_0x00010b7828e4(param_3,param_2,PTR_s_expiresCountdown_112546550,0,1,2);
  func_0x00010b7828fc();
  func_0x00010b7828c4();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b782844();
  _objc_opt_class(PTR_PTR_1126dd7a0);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126e0ee0);
  func_0x00010b782864();
  func_0x00010b7828f0();
  func_0x00010b782898();
  func_0x00010bf06b60();
  func_0x00010b782844();
  func_0x00010b7828fc();
  func_0x00010b7828e4();
  func_0x00010b7828d4(param_3,param_2,PTR_s_position_11261eab8,0,0);
  func_0x00010b78290c();
  _objc_opt_class(PTR_PTR_1126d9140);
  func_0x00010b782808();
  func_0x00010b782824();
  func_0x00010b7828e4(param_3,param_2,PTR_s_clientCacheExpirationDateTimeDep_112546578,
                      &PTR____CFConstantStringClassReference_110f23cf8,2,2);
  func_0x00010c18ec00(param_3);
  func_0x00010b7828b0();
  func_0x00010b7828e4();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126e0b08);
  func_0x00010b7827e4();
  func_0x00010b782898();
  func_0x00010bf06b60();
  func_0x00010b782844();
  _objc_opt_class(PTR_PTR_1126d8c08);
  func_0x00010b7827e4();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126e0ee8);
  func_0x00010b7827e4();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_section_112632f58,0,0,6,0,FUN_10b782924,FUN_10b782990,0)
  ;
  func_0x00010b782824();
  func_0x00010b782844();
  func_0x00010b782844();
  func_0x00010b782898();
  func_0x00010bf06b60();
  func_0x00010b782824();
  func_0x00010b782844();
  _objc_opt_class(PTR_PTR_1126e0ef0);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126dd7a8);
  func_0x00010b782864();
  func_0x00010b7828f0();
  func_0x00010b782844();
  func_0x00010b7828b0();
  func_0x00010b7828e4();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126e0ef8);
  func_0x00010b782808();
  func_0x00010b7828b0();
  func_0x00010b7828e4();
  func_0x00010b782824();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b7828b0();
  func_0x00010b7828e4();
  _objc_opt_class(PTR_PTR_1126e0f00);
  func_0x00010b7827e4();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126c4d70);
  func_0x00010b7827e4();
  func_0x00010b782898();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0f08);
  func_0x00010b7827e4();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126e0f10);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126e0f18);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126d8be0);
  func_0x00010b7827e4();
  func_0x00010b782824();
  func_0x00010b782898();
  func_0x00010bf06b60();
  func_0x00010b78287c();
  func_0x00010b78290c();
  _objc_opt_class(PTR_PTR_1126e0f20);
  func_0x00010b7827e4();
  func_0x00010b782824();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b782824();
  _objc_opt_class(PTR_PTR_1126b3890);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126d8c00);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126dd790);
  func_0x00010b782864();
  func_0x00010b7828f0();
  _objc_opt_class(PTR_PTR_1126e0f28);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126e0f30);
  func_0x00010b7827e4();
  _objc_opt_class(PTR_PTR_1126dd768);
  func_0x00010b782864();
  func_0x00010b7828f0();
  func_0x00010b782844();
  _objc_opt_class(PTR_PTR_1126d8be8);
  func_0x00010b782864();
  func_0x00010b7828f0();
  puVar1 = PTR_s_postCaptureLensDataDeprecated_112545bf0;
  _objc_opt_class();
  func_0x00010b7828f0(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7e558,2);
  _objc_opt_class(PTR_PTR_1126e0c68);
  func_0x00010b7827e4();
  func_0x00010b7828b0();
  func_0x00010b7828e4();
  func_0x00010b7828fc();
  func_0x00010b7828d4();
  func_0x00010c18ec00(param_3);
  func_0x00010b78290c();
  func_0x00010b782824();
  func_0x00010b782844();
  _objc_opt_class(PTR_PTR_1126e0c68);
  func_0x00010b782808();
  _objc_opt_class();
  func_0x00010b782808();
  func_0x00010b78287c();
  func_0x00010b78290c();
  func_0x00010b782898();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7827e4; end: 10b782913;  */

void FUN_10b7827e4(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b782914; end: 10b78291f; +[SOJUGeofilterResponseBuilder messageClass] */

void FUN_10b782914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126bc140);
  return;
}



/* Entry: 10b782920; end: 10b782923; +[SOJUGeofilterResponseBuilder withJUGeofilterResponse:] */

void FUN_10b782920(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b782924; end: 10b78298f;  */

undefined8 FUN_10b782924(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de54d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de54d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x400e609;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de54f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de54f8,param_2,param_1);
    uVar2 = 0x1efce7;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b782990; end: 10b7829c7;  */

undefined ** FUN_10b782990(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de54f8;
  if (param_1 != 0x1efce7) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de54d8;
  if (param_1 != 0x400e609) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7829c8; end: 10b782aef;  */

undefined8 FUN_10b7829c8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f24198;
  func_0x00010b782bf8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffc66824b1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ee58;
    func_0x00010b782bf8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffbd99ce7f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f241b8;
      func_0x00010b782bf8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x6f2d2b2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7ee78;
        func_0x00010b782bf8();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x19183471;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7ee98;
          func_0x00010b782bf8();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x2484ee3f;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7eeb8;
            func_0x00010b782bf8();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xa44baf2;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f241d8;
              func_0x00010b782bf8();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffdbb0619b;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7eed8;
                func_0x00010b782bf8();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffffa1c678e9;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f241f8;
                  func_0x00010b782bf8();
                  uVar2 = 0xffffffff9ab23308;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b782af0; end: 10b782bff;  */

undefined ** FUN_10b782af0(long param_1)

{
  if (param_1 == -0x654dccf8) {
    return &PTR____CFConstantStringClassReference_110f241f8;
  }
  if (param_1 == -0x5e398717) {
    return &PTR____CFConstantStringClassReference_110f7eed8;
  }
  if (param_1 == 0x2484ee3f) {
    return &PTR____CFConstantStringClassReference_110f7ee98;
  }
  if (param_1 == -0x3997db4f) {
    return &PTR____CFConstantStringClassReference_110f24198;
  }
  if (param_1 == -0x244f9e65) {
    return &PTR____CFConstantStringClassReference_110f241d8;
  }
  if (param_1 == 0x6f2d2b2) {
    return &PTR____CFConstantStringClassReference_110f241b8;
  }
  if (param_1 == 0xa44baf2) {
    return &PTR____CFConstantStringClassReference_110f7eeb8;
  }
  if (param_1 != 0x19183471) {
    if (param_1 == -0x42663181) {
      return &PTR____CFConstantStringClassReference_110f7ee58;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f7ee78;
}



/* Entry: 10b782c00; end: 10b782c6b;  */

undefined8 FUN_10b782c00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7eef8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7eef8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x21d5a2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ef18,param_2,param_1);
    uVar2 = 0x12734;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b782c6c; end: 10b782c9f;  */

undefined ** FUN_10b782c6c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef18;
  if (param_1 != 0x12734) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7eef8;
  if (param_1 != 0x21d5a2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b782ca0; end: 10b782cc3; -[SOJUGetSavedMessagesByTypesResponse initWithMessages:notModified:checksum:iterSequenceNumber:] */

void FUN_10b782ca0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b782cc4; end: 10b782db7; +[SOJUGetSavedMessagesByTypesResponse registerMessageFields:] */

void FUN_10b782cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a88;
  puVar1 = PTR_s_messages_1126108e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  FUN_10b782db8(param_3,param_2,PTR_s_notModified_112614860,0,1,0);
  FUN_10b782db8(param_3,param_2,PTR_s_checksum_1125abc48,0,0,6);
  FUN_10b782db8(param_3,param_2,PTR_s_iterSequenceNumber_112546618,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xa2d0897b28f06d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b782db8; end: 10b782dc3;  */

void FUN_10b782db8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b782dc4; end: 10b782e2f;  */

undefined8 FUN_10b782dc4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8538;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8538,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xac2a7ac;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ef38,param_2,param_1);
    uVar2 = 0xac5e77c;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b782e30; end: 10b782e6b;  */

undefined ** FUN_10b782e30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef38;
  if (param_1 != 0xac5e77c) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc8538;
  if (param_1 != 0xac2a7ac) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b782e6c; end: 10b782e93; -[SOJUHeader initWithFrom:to:convId:isv3:auth:connSeqNum:] */

void FUN_10b782e6c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b782e94; end: 10b782f83; +[SOJUHeader registerMessageFields:] */

void FUN_10b782e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b782fa0();
  func_0x00010b782f84();
  func_0x00010b782f84(param_3,param_2,PTR_s_to_11267a098,0,0,7);
  func_0x00010c19a460(param_3,param_2,0x3f8dc397f7bbc9);
  func_0x00010b782f90();
  func_0x00010b782f84();
  func_0x00010b782f90();
  func_0x00010b782f84();
  _objc_opt_class(PTR_PTR_1126e0a38);
  func_0x00010b782fa0();
  func_0x00010bf06b60();
  func_0x00010b782f90();
  func_0x00010b782f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b782f84; end: 10b782fb7;  */

void FUN_10b782f84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b782fb8; end: 10b782fc3; +[SOJUHeaderBuilder messageClass] */

void FUN_10b782fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a78);
  return;
}



/* Entry: 10b782fc4; end: 10b782fc7; +[SOJUHeaderBuilder withJUHeader:] */

void FUN_10b782fc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b782fc8; end: 10b782feb; -[SOJUHourlyForecast initWithFahrenheit:celsius:weatherCondition:displayTime:] */

void FUN_10b782fc8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b782fec; end: 10b7830b3; +[SOJUHourlyForecast registerMessageFields:] */

void FUN_10b782fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_fahrenheit_1125c5840;
  _objc_retain(param_3);
  FUN_10b7830b4(param_3,param_2,puVar1,0,0,3);
  FUN_10b7830b4(param_3,param_2,PTR_s_celsius_1125aaaf8,0,0,3);
  func_0x00010bf06b60(param_3,param_2,PTR_s_weatherCondition_112686538,0,1,6,0,FUN_10b79e7a0,
                      FUN_10b79e900,0);
  FUN_10b7830b4(param_3,param_2,PTR_s_displayTime_1125bf348,0,1,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7830b4; end: 10b7830bf;  */

void FUN_10b7830b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7830c0; end: 10b7830ef; -[SOJUIdentityContactItem initWithUsername:userId:displayName:displayUsername:lastUpdated:hasStarred:hasPhoto:hasSavedDate:] */

void FUN_10b7830c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7830f0; end: 10b7831ab; +[SOJUIdentityContactItem registerMessageFields:] */

void FUN_10b7830f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_username_112682b30;
  _objc_retain(param_3);
  func_0x00010b7831ec(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b7831ac();
  func_0x00010b7831ac();
  func_0x00010b7831ac();
  func_0x00010b7831ec(param_3,param_2,PTR_s_lastUpdated_1126003f0,0,0,2,in_x6,in_x7,0,0);
  func_0x00010b7831cc();
  func_0x00010b7831cc();
  func_0x00010b7831cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7831ac; end: 10b7831f7;  */

void FUN_10b7831ac(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7831f8; end: 10b7831fb; -[SOJUIdentityContactResponse initWithContacts:] */

void FUN_10b7831f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7831fc; end: 10b783273; +[SOJUIdentityContactResponse registerMessageFields:] */

void FUN_10b7831fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0f38;
  puVar1 = PTR_s_contacts_1125b03b8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b783274; end: 10b7832a3; -[SOJUIdentityContactWithData initWithNumber:displayName:lastUpdatedTimestamp:hasStarred:hasPhoto:hasSavedDate:emailAddress:hasSocialLink:] */

void FUN_10b783274(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7832a4; end: 10b7833ab; +[SOJUIdentityContactWithData registerMessageFields:] */

void FUN_10b7832a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_number_112615468;
  _objc_retain(param_3);
  func_0x00010b7833cc(param_3,param_2,puVar1,0,0,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0xbd0a8d87926e51);
  func_0x00010b7833d8();
  func_0x00010b7833cc();
  func_0x00010b7833d8();
  func_0x00010b7833cc();
  func_0x00010b7833ac();
  func_0x00010b7833ac();
  func_0x00010b7833ac();
  func_0x00010b7833d8();
  func_0x00010b7833cc();
  func_0x00010c19a460(param_3,param_2,0xce9a1c7d5ee9c5);
  func_0x00010b7833ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7833ac; end: 10b7833e7;  */

void FUN_10b7833ac(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7833e8; end: 10b78341f; -[SOJUIdentityCreateMischiefRequest initWithTimestamp:reqToken:username:snapchatUserId:uuid:name:participants:mischiefMobCreationRequest:mischiefCreationSource:minimumGroupSizeDisabled:] */

void FUN_10b7833e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b783420; end: 10b783583; +[SOJUIdentityCreateMischiefRequest registerMessageFields:] */

void FUN_10b783420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7835b0();
  func_0x00010b783584();
  func_0x00010b783584(param_3,param_2,PTR_s_reqToken_11262aba8,0,1);
  func_0x00010b7835a0();
  func_0x00010b783584();
  func_0x00010b7835a0();
  func_0x00010b783584();
  func_0x00010b7835a0();
  func_0x00010b783584();
  func_0x00010b7835a0();
  func_0x00010b783584();
  func_0x00010b783594(param_3,param_2,PTR_s_participants_11261acc8,0,0,7);
  func_0x00010c19a460(param_3,param_2,0x33707621328d24);
  _objc_opt_class(PTR_PTR_1126e0f40);
  func_0x00010b7835b0();
  func_0x00010bf06b60();
  func_0x00010bf06b60(param_3,param_2,PTR_s_mischiefCreationSource_112546668,0,1,6,0,FUN_10b7865fc,
                      FUN_10b7866b4,0);
  func_0x00010b7835a0();
  func_0x00010b783594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b783584; end: 10b7835c3;  */

void FUN_10b783584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7835c4; end: 10b7835cf; +[SOJUIdentityCreateMischiefRequestBuilder messageClass] */

void FUN_10b7835c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0f48);
  return;
}



/* Entry: 10b7835d0; end: 10b7835d3; +[SOJUIdentityCreateMischiefRequestBuilder withJUIdentityCreateMischiefRequest:] */

void FUN_10b7835d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7835d4; end: 10b7835f3; -[SOJUIdentityCreateMischiefResponse initWithRequestUuid:sojuNewMischief:errorType:] */

void FUN_10b7835d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7835f4; end: 10b7836a7; +[SOJUIdentityCreateMischiefResponse registerMessageFields:] */

void FUN_10b7835f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_requestUuid_112546688;
  _objc_retain(param_3);
  FUN_10b7836a8(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  puVar1 = PTR_s_sojuNewMischief_112546690;
  puVar2 = PTR_PTR_1126e0f50;
  _objc_opt_class(PTR_PTR_1126e0f50);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7ef58,2,7,
                      puVar2,0,0,0);
  FUN_10b7836a8(param_3,param_2,PTR_s_errorType_1125c3de0);
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7836a8; end: 10b7836bb;  */

void FUN_10b7836a8(void)

{
  return;
}



/* Entry: 10b7836bc; end: 10b783773;  */

undefined8 FUN_10b7836bc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  func_0x00010b7837f4();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x24a738;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef78;
    func_0x00010b7837f4();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x6938bbd2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef98;
      func_0x00010b7837f4();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffd595b78b;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7efb8;
        func_0x00010b7837f4();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x62fb085b;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7efd8;
          func_0x00010b7837f4();
          uVar2 = 0x478f2ce2;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b783774; end: 10b7837fb;  */

undefined ** FUN_10b783774(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x6938bbd2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7ef78;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7efb8;
  if (param_1 != 0x62fb085b) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7efd8;
  if (param_1 != 0x478f2ce2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  if (param_1 != 0x24a738) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ef98;
  if (param_1 != -0x2a6a4875) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7837fc; end: 10b78381f; -[SOJUIdentityCreateMischiefsRequest initWithTimestamp:reqToken:username:snapchatUserId:createMischiefRequests:] */

void FUN_10b7837fc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b783820; end: 10b783907; +[SOJUIdentityCreateMischiefsRequest registerMessageFields:] */

void FUN_10b783820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  FUN_10b783908(param_3,param_2,puVar1,0,0);
  FUN_10b783908(param_3,param_2,PTR_s_reqToken_11262aba8,0,1);
  FUN_10b783908(param_3,param_2,PTR_s_username_112682b30,0,0);
  FUN_10b783908(param_3,param_2,PTR_s_snapchatUserId_11266eab8,0,1);
  puVar1 = PTR_s_createMischiefRequests_1125466a0;
  puVar2 = PTR_PTR_1126e0f48;
  _objc_opt_class(PTR_PTR_1126e0f48);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b783908; end: 10b783917;  */

void FUN_10b783908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b783918; end: 10b783923; +[SOJUIdentityCreateMischiefsRequestBuilder messageClass] */

void FUN_10b783918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0f58);
  return;
}



/* Entry: 10b783924; end: 10b783927; +[SOJUIdentityCreateMischiefsRequestBuilder withJUIdentityCreateMischiefsRequest:] */

void FUN_10b783924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b783928; end: 10b78392b; -[SOJUIdentityCreateMischiefsResponse initWithCreateResults:] */

void FUN_10b783928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b78392c; end: 10b7839a3; +[SOJUIdentityCreateMischiefsResponse registerMessageFields:] */

void FUN_10b78392c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0f60;
  puVar1 = PTR_s_createResults_1125466b8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7839a4; end: 10b7839cf; -[SOJUIdentityDeepLinkRequest initWithTimestamp:reqToken:username:snapchatUserId:deepLinkAction:friendUsername:linkId:] */

void FUN_10b7839a4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7839d0; end: 10b783a9f; +[SOJUIdentityDeepLinkRequest registerMessageFields:] */

void FUN_10b7839d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  func_0x00010b783ac0(param_3,param_2,puVar1,0,0);
  func_0x00010b783aa0();
  func_0x00010b783ac0(param_3,param_2,PTR_s_username_112682b30,0,0);
  func_0x00010b783aa0();
  func_0x00010bf06b60(param_3,param_2,PTR_s_deepLinkAction_1125466c8,0,1,6,0,FUN_10b783ae0,
                      FUN_10b783b60,0);
  func_0x00010b783aa0();
  func_0x00010b783aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b783aa0; end: 10b783acf;  */

void FUN_10b783aa0(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b783ad0; end: 10b783adb; +[SOJUIdentityDeepLinkRequestBuilder messageClass] */

void FUN_10b783ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0f68);
  return;
}



/* Entry: 10b783adc; end: 10b783adf; +[SOJUIdentityDeepLinkRequestBuilder withJUIdentityDeepLinkRequest:] */

void FUN_10b783adc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b783ae0; end: 10b783b5f;  */

undefined8 FUN_10b783ae0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7eff8;
  func_0x00010b783bb0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7296357;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f018;
    func_0x00010b783bb0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffe9bdb29f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db5dd8;
      func_0x00010b783bb0();
      uVar2 = 0x373aa5;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b783b60; end: 10b783bb7;  */

undefined ** FUN_10b783b60(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x16424d61) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7f018;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110db5dd8;
  if (param_1 != 0x373aa5) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7eff8;
  if (param_1 != 0x7296357) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b783bb8; end: 10b783bdb; -[SOJUIdentityDeepLinkResponse initWithDeepLinkAction:friendExists:friendValue:snap:] */

void FUN_10b783bb8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b783bdc; end: 10b783cd3; +[SOJUIdentityDeepLinkResponse registerMessageFields:] */

void FUN_10b783bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_deepLinkAction_1125466c8;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,FUN_10b783cdc,FUN_10b783d5c,0);
  FUN_10b783cd4(param_3,param_2,PTR_s_friendExists_1125cb9c0,0,1,0,0);
  puVar1 = PTR_s_friendValue_1125cbe18;
  puVar2 = PTR_PTR_1126e0b48;
  _objc_opt_class(PTR_PTR_1126e0b48);
  FUN_10b783cd4(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e10178,2,7,puVar2);
  puVar1 = PTR_s_snap_11266d6b0;
  puVar2 = PTR_PTR_1126e0f70;
  _objc_opt_class(PTR_PTR_1126e0f70);
  FUN_10b783cd4(param_3,param_2,puVar1,0,0,7,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b783cd4; end: 10b783cdb;  */

void FUN_10b783cd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b783cdc; end: 10b783d5b;  */

undefined8 FUN_10b783cdc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7eff8;
  func_0x00010b783dac();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7296357;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f018;
    func_0x00010b783dac();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffe9bdb29f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbddd8;
      func_0x00010b783dac();
      uVar2 = 0x35efca;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b783d5c; end: 10b783db3;  */

undefined ** FUN_10b783d5c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x16424d61) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7f018;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbddd8;
  if (param_1 != 0x35efca) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7eff8;
  if (param_1 != 0x7296357) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}


