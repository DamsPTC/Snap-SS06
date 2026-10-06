/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b79c800; end: 10b79c81f; -[SOJUUnlockablesPostCaptureLensData initWithResourceUrl:resourceSignature:] */

void FUN_10b79c800(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79c820; end: 10b79c87b; +[SOJUUnlockablesPostCaptureLensData registerMessageFields:] */

void FUN_10b79c820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_resourceUrl_11253fb08;
  _objc_retain(param_3);
  FUN_10b79c87c(param_3,param_2,puVar1);
  FUN_10b79c87c(param_3,param_2,PTR_s_resourceSignature_112547990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79c87c; end: 10b79c893;  */

void FUN_10b79c87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b79c894; end: 10b79c897; -[SOJUUnlockablesPrecacheInfoForLocData initWithPrecacheEnabled:] */

void FUN_10b79c894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79c898; end: 10b79c8d7; +[SOJUUnlockablesPrecacheInfoForLocData registerMessageFields:] */

void FUN_10b79c898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_precacheEnabled_1125479a0,0,1,0,0,0,0,0);
  return;
}



/* Entry: 10b79c8d8; end: 10b79c8fb; -[SOJUUnlockablesRatingStickerProperties initWithUnselectedStateAsset:selectedStateAsset:sojuInitialRating:maxRating:] */

void FUN_10b79c8d8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79c8fc; end: 10b79c99b; +[SOJUUnlockablesRatingStickerProperties registerMessageFields:] */

void FUN_10b79c8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_unselectedStateAsset_1125479b0;
  _objc_retain(param_3);
  FUN_10b79c99c(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b79c9a8();
  FUN_10b79c99c();
  FUN_10b79c99c(param_3,param_2,PTR_s_sojuInitialRating_1125479c0,
                &PTR____CFConstantStringClassReference_110f81078,2,1,in_x6,in_x7,0,0);
  func_0x00010b79c9a8();
  FUN_10b79c99c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79c99c; end: 10b79c9bb;  */

void FUN_10b79c99c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79c9bc; end: 10b79c9bf; -[SOJUUnlockablesScannableData initWithData:] */

void FUN_10b79c9bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79c9c0; end: 10b79c9ff; +[SOJUUnlockablesScannableData registerMessageFields:] */

void FUN_10b79c9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_data_1125b6738,0,0,6,0,0,0,0);
  return;
}



/* Entry: 10b79ca00; end: 10b79ca37; -[SOJUUnlockablesSchedule initWithSchedulingType:startDateTime:endDateTime:timezone:useLocalTimezone:repetitionFrequency:repetitionEndDateTime:weeklyFrequency:repeatIntervals:] */

void FUN_10b79ca00(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79ca38; end: 10b79cb6f; +[SOJUUnlockablesSchedule registerMessageFields:] */

void FUN_10b79ca38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_schedulingType_1125479d8;
  _objc_retain(param_3);
  func_0x00010b79cb90(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  func_0x00010b79cb70();
  func_0x00010b79cb70();
  func_0x00010b79cba4(param_3,param_2,PTR_s_timezone_112679d78,0,0,6);
  func_0x00010b79cba4(param_3,param_2,PTR_s_useLocalTimezone_112681b18,0,1,0);
  func_0x00010b79cb90(param_3,param_2,PTR_s_repetitionFrequency_1125479e0);
  func_0x00010bf06b60();
  func_0x00010b79cb70();
  func_0x00010b79cb70();
  puVar1 = PTR_s_repeatIntervals_112629d10;
  puVar2 = PTR_PTR_1126e1320;
  _objc_opt_class(PTR_PTR_1126e1320);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79cb70; end: 10b79cbaf;  */

void FUN_10b79cb70(void)

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



/* Entry: 10b79cbb0; end: 10b79cbd3; -[SOJUUnlockablesScheduleInterval initWithStartDateTime:endDateTime:startMillisSinceEpoch:endMillisSinceEpoch:] */

void FUN_10b79cbb0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79cbd4; end: 10b79cc63; +[SOJUUnlockablesScheduleInterval registerMessageFields:] */

void FUN_10b79cbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_startDateTime_112671440;
  _objc_retain(param_3);
  FUN_10b79cc64(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b79cc70();
  FUN_10b79cc64();
  func_0x00010b79cc70();
  FUN_10b79cc64();
  func_0x00010b79cc70();
  FUN_10b79cc64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79cc64; end: 10b79cc83;  */

void FUN_10b79cc64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79cc84; end: 10b79cca3; -[SOJUUnlockablesScheduleLensesCache initWithResponses:lastModifiedTime:] */

void FUN_10b79cc84(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79cca4; end: 10b79cd43; +[SOJUUnlockablesScheduleLensesCache registerMessageFields:] */

void FUN_10b79cca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e12e0;
  puVar1 = PTR_s_responses_11262c998;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_lastModifiedTime_1125fffb8,0,1,2,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79cd44; end: 10b79cddf;  */

undefined8 FUN_10b79cd44(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79db8;
  func_0x00010b79ce4c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3dce5f9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e79d78;
    func_0x00010b79ce4c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff98627481;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e79dd8;
      func_0x00010b79ce4c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x74811bed;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f81098;
        func_0x00010b79ce4c();
        uVar2 = 0xffffffff9bca6e8a;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79cde0; end: 10b79ce53;  */

undefined ** FUN_10b79cde0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x679d8b7f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e79d78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e79db8;
  if (param_1 != 0x3dce5f9) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81098;
  if (param_1 != -0x64359176) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e79dd8;
  if (param_1 != 0x74811bed) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79ce54; end: 10b79ceef;  */

undefined8 FUN_10b79ce54(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f810b8;
  func_0x00010b79cf58();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7342860f;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f810d8;
    func_0x00010b79cf58();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x251681;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80cd8;
      func_0x00010b79cf58();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff8fdf219b;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f810f8;
        func_0x00010b79cf58();
        uVar2 = 0x5e1651e3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79cef0; end: 10b79cf5f;  */

undefined ** FUN_10b79cef0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x251681) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f810d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f810f8;
  if (param_1 != 0x5e1651e3) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f810b8;
  if (param_1 != 0x7342860f) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80cd8;
  if (param_1 != -0x7020de65) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79cf60; end: 10b79cf63; -[SOJUUnlockablesScheduledLensesDebugInfo initWithIsRanked:] */

void FUN_10b79cf60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79cf64; end: 10b79cfa3; +[SOJUUnlockablesScheduledLensesDebugInfo registerMessageFields:] */

void FUN_10b79cf64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_isRanked_1125fc8d0,0,1,0,0,0,0,0);
  return;
}



/* Entry: 10b79cfa4; end: 10b79cfc3; -[SOJUUnlockablesSocialUnlockResponse initWithStatus:message:unlockable:] */

void FUN_10b79cfa4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79cfc4; end: 10b79d073; +[SOJUUnlockablesSocialUnlockResponse registerMessageFields:] */

void FUN_10b79cfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b79d074();
  func_0x00010bf06b60();
  func_0x00010bf06b60(param_3,param_2,PTR_s_message_112610668,0,0,6,0,0,0,0);
  _objc_opt_class(PTR_PTR_1126bc140);
  FUN_10b79d074();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d074; end: 10b79d087;  */

void FUN_10b79d074(void)

{
  return;
}



/* Entry: 10b79d088; end: 10b79d0f3;  */

undefined8 FUN_10b79d088(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffbb80cbe3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db78b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78b8,param_2,param_1);
    uVar2 = 0x20cf1e;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79d0f4; end: 10b79d12b;  */

undefined ** FUN_10b79d0f4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78b8;
  if (param_1 != 0x20cf1e) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db78d8;
  if (param_1 != -0x447f341d) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79d12c; end: 10b79d28b;  */

undefined8 FUN_10b79d12c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81118;
  func_0x00010b79d3cc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x627b7940;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f81138;
    func_0x00010b79d3cc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xfffffffff8d06ca0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f81158;
      func_0x00010b79d3cc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff926d22b2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f81178;
        func_0x00010b79d3cc();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffe07ff0c7;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f81198;
          func_0x00010b79d3cc();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x330f5559;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f811b8;
            func_0x00010b79d3cc();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xa28831b;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f811d8;
              func_0x00010b79d3cc();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x55520945;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f811f8;
                func_0x00010b79d3cc();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffffc0d6ab83;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f81218;
                  func_0x00010b79d3cc();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x4403430c;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f81238;
                    func_0x00010b79d3cc();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xffffffffbe9206e8;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f81258;
                      func_0x00010b79d3cc();
                      uVar2 = 0x1e747abb;
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
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79d28c; end: 10b79d3d3;  */

undefined ** FUN_10b79d28c(long param_1)

{
  if (param_1 == -0x6d92dd4e) {
    return &PTR____CFConstantStringClassReference_110f81158;
  }
  if (param_1 == -0x416df918) {
    return &PTR____CFConstantStringClassReference_110f81238;
  }
  if (param_1 == -0x3f29547d) {
    return &PTR____CFConstantStringClassReference_110f811f8;
  }
  if (param_1 == -0x1f800f39) {
    return &PTR____CFConstantStringClassReference_110f81178;
  }
  if (param_1 == 0x627b7940) {
    return &PTR____CFConstantStringClassReference_110f81118;
  }
  if (param_1 == 0xa28831b) {
    return &PTR____CFConstantStringClassReference_110f811b8;
  }
  if (param_1 == 0x1e747abb) {
    return &PTR____CFConstantStringClassReference_110f81258;
  }
  if (param_1 != 0x330f5559) {
    if (param_1 == 0x4403430c) {
      return &PTR____CFConstantStringClassReference_110f81218;
    }
    if (param_1 != 0x55520945) {
      if (param_1 == -0x72f9360) {
        return &PTR____CFConstantStringClassReference_110f81138;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f811d8;
  }
  return &PTR____CFConstantStringClassReference_110f81198;
}



/* Entry: 10b79d3d4; end: 10b79d3f7; -[SOJUUnlockablesTextColor initWithColor:colorStop:colorTransform:colorGradientAngleDegree:colorTransformParams:] */

void FUN_10b79d3d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79d3f8; end: 10b79d507; +[SOJUUnlockablesTextColor registerMessageFields:] */

void FUN_10b79d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_color_1125adcb8;
  _objc_retain(param_3);
  FUN_10b79d508(param_3,param_2,puVar1,0,0,7);
  func_0x00010b79d524();
  func_0x00010b79d514();
  FUN_10b79d508();
  func_0x00010b79d524();
  func_0x00010b79d514();
  func_0x00010bf06b60();
  func_0x00010b79d514();
  FUN_10b79d508();
  func_0x00010b79d514();
  FUN_10b79d508();
  func_0x00010b79d524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d508; end: 10b79d52b;  */

void FUN_10b79d508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79d52c; end: 10b79d537; +[SOJUUnlockablesTextColorBuilder messageClass] */

void FUN_10b79d52c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e12a0);
  return;
}



/* Entry: 10b79d538; end: 10b79d53b; +[SOJUUnlockablesTextColorBuilder withJUUnlockablesTextColor:] */

void FUN_10b79d538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79d53c; end: 10b79d5d7;  */

undefined8 FUN_10b79d53c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81278;
  func_0x00010b79d644();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffb54ecf33;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80618;
    func_0x00010b79d644();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3f26f14;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f81298;
      func_0x00010b79d644();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff89879c63;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f0b8b8;
        func_0x00010b79d644();
        uVar2 = 0x7bf02fb1;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79d5d8; end: 10b79d64b;  */

undefined ** FUN_10b79d5d8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3f26f14) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80618;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0b8b8;
  if (param_1 != 0x7bf02fb1) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81278;
  if (param_1 != -0x4ab130cd) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f81298;
  if (param_1 != -0x7678639d) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79d64c; end: 10b79d66f; -[SOJUUnlockablesTextPadding initWithTop:left:right:bottom:] */

void FUN_10b79d64c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79d670; end: 10b79d6e3; +[SOJUUnlockablesTextPadding registerMessageFields:] */

void FUN_10b79d670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b79d6fc();
  func_0x00010b79d6e4();
  func_0x00010b79d6fc();
  func_0x00010b79d6e4();
  func_0x00010b79d6fc();
  func_0x00010b79d6e4();
  func_0x00010b79d6fc();
  func_0x00010b79d6e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d6e4; end: 10b79d707;  */

void FUN_10b79d6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,4,0,0);
  return;
}



/* Entry: 10b79d708; end: 10b79d713; +[SOJUUnlockablesTextPaddingBuilder messageClass] */

void FUN_10b79d708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e12d0);
  return;
}



/* Entry: 10b79d714; end: 10b79d717; +[SOJUUnlockablesTextPaddingBuilder withJUUnlockablesTextPadding:] */

void FUN_10b79d714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79d718; end: 10b79d73b; -[SOJUUnlockablesTextShadow initWithColor:x:y:radius:] */

void FUN_10b79d718(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79d73c; end: 10b79d7d3; +[SOJUUnlockablesTextShadow registerMessageFields:] */

void FUN_10b79d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e12a0;
  puVar1 = PTR_s_color_1125adcb8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  FUN_10b79d7d4();
  FUN_10b79d7d4();
  FUN_10b79d7d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d7d4; end: 10b79d7f3;  */

void FUN_10b79d7d4(void)

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



/* Entry: 10b79d7f4; end: 10b79d7ff; +[SOJUUnlockablesTextShadowBuilder messageClass] */

void FUN_10b79d7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e12a8);
  return;
}



/* Entry: 10b79d800; end: 10b79d803; +[SOJUUnlockablesTextShadowBuilder withJUUnlockablesTextShadow:] */

void FUN_10b79d800(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79d804; end: 10b79d823; -[SOJUUnlockablesTimeComponent initWithTimeUnit:singularName:pluralName:] */

void FUN_10b79d804(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79d824; end: 10b79d893; +[SOJUUnlockablesTimeComponent registerMessageFields:] */

void FUN_10b79d824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timeUnit_1126798e0;
  _objc_retain(param_3);
  FUN_10b79d894(param_3,param_2,puVar1);
  FUN_10b79d894(param_3,param_2,PTR_s_singularName_11266ce28);
  FUN_10b79d894(param_3,param_2,PTR_s_pluralName_11261e1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d894; end: 10b79d8ab;  */

void FUN_10b79d894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b79d8ac; end: 10b79d8cb; -[SOJUUnlockablesTooltip initWithMessage:coolDownPeriodMinutes:] */

void FUN_10b79d8ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79d8cc; end: 10b79d93f; +[SOJUUnlockablesTooltip registerMessageFields:] */

void FUN_10b79d8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_message_112610668;
  _objc_retain(param_3);
  FUN_10b79d940(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  FUN_10b79d940(param_3,param_2,PTR_s_coolDownPeriodMinutes_1125b2038,0,1,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79d940; end: 10b79da3b;  */

void FUN_10b79d940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79da3c; end: 10b79daf3;  */

undefined8 FUN_10b79da3c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010b79db78();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x19d1382a;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f81378;
    func_0x00010b79db78();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffdd72b039;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7c878;
      func_0x00010b79db78();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff87cc6aaa;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f81398;
        func_0x00010b79db78();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffe665d8ae;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f813b8;
          func_0x00010b79db78();
          uVar2 = 0x4f4964dd;
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



/* Entry: 10b79daf4; end: 10b79db7f;  */

undefined ** FUN_10b79daf4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x228d4fc7) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f81378;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (param_1 != 0x19d1382a) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f81398;
  if (param_1 != -0x199a2752) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f813b8;
  if (param_1 != 0x4f4964dd) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c878;
  if (param_1 != -0x78339556) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79db80; end: 10b79db9f; -[SOJUUnlockablesUnlockableChecksumResponse initWithIdValue:checksum:clientCacheTtlMinutes:] */

void FUN_10b79db80(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79dba0; end: 10b79dc57; +[SOJUUnlockablesUnlockableChecksumResponse registerMessageFields:] */

void FUN_10b79dba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b79dc58(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,2,in_x6,
                in_x7,0,0);
  FUN_10b79dc58(param_3,param_2,PTR_s_checksum_1125abc48,0,0,7,in_x6,in_x7,0,0);
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0x46cd66638dc098);
  FUN_10b79dc58(param_3,param_2,PTR_s_clientCacheTtlMinutes_1125acc90,0,1,2,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79dc58; end: 10b79dc63;  */

void FUN_10b79dc58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79dc64; end: 10b79dc8f; -[SOJUUnlockablesUnlockableContext initWithTriggerContexts:friendContexts:cameraContexts:mediaTypeContexts:actionmojiContexts:visualContexts:lensApplicableContexts:] */

void FUN_10b79dc64(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79dc90; end: 10b79ddcb; +[SOJUUnlockablesUnlockableContext registerMessageFields:] */

void FUN_10b79dc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_triggerContexts_112547a68;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,1);
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
  func_0x00010b79ddcc();
  func_0x00010b79ddec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79ddcc; end: 10b79ddf3;  */

void FUN_10b79ddcc(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b79ddf4; end: 10b79ddff; +[SOJUUnlockablesUnlockableContextBuilder messageClass] */

void FUN_10b79ddf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0f08);
  return;
}



/* Entry: 10b79de00; end: 10b79de03; +[SOJUUnlockablesUnlockableContextBuilder withJUUnlockablesUnlockableContext:] */

void FUN_10b79de00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79de04; end: 10b79de0b; +[SOJUUnlockablesUnlockableNoFillAdResponse canInitFromProto] */

undefined8 FUN_10b79de04(void)

{
  return 0;
}



/* Entry: 10b79de0c; end: 10b79de2b; -[SOJUUnlockablesUnlockableNoFillAdResponse initWithCarouselIndexMap:serveItemId:encryptedAdData:] */

void FUN_10b79de0c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79de2c; end: 10b79deeb; +[SOJUUnlockablesUnlockableNoFillAdResponse registerMessageFields:] */

void FUN_10b79de2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_carouselIndexMap_112547a98;
  _objc_retain(param_3);
  FUN_10b79deec(param_3,param_2,puVar1);
  func_0x00010b79df04();
  FUN_10b79deec(param_3,param_2,PTR_s_serveItemId_112635568);
  func_0x00010c18ec00(param_3);
  func_0x00010b79df04();
  FUN_10b79deec(param_3,param_2,PTR_s_encryptedAdData_1125c2808);
  func_0x00010c18ec00(param_3);
  func_0x00010b79df04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79deec; end: 10b79df0b;  */

void FUN_10b79deec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,7,0,0);
  return;
}



/* Entry: 10b79df0c; end: 10b79df0f; -[SOJUUnlockablesUnlockablesDirectAuthInfo initWithEncryptedUnlockablesDirectPayload:] */

void FUN_10b79df0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79df10; end: 10b79df4f; +[SOJUUnlockablesUnlockablesDirectAuthInfo registerMessageFields:] */

void FUN_10b79df10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_encryptedUnlockablesDirectPayloa_112547aa8,0,1,6,0,0,0,0
                     );
  return;
}



/* Entry: 10b79df50; end: 10b79df6f; -[SOJUUnlockablesWebViewAttachment initWithWebViewUrl:shouldAutoFill:] */

void FUN_10b79df50(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79df70; end: 10b79dfe3; +[SOJUUnlockablesWebViewAttachment registerMessageFields:] */

void FUN_10b79df70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_webViewUrl_112686b48;
  _objc_retain(param_3);
  FUN_10b79dfe4(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b79dfe4(param_3,param_2,PTR_s_shouldAutoFill_112669218,0,1,0,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79dfe4; end: 10b79dfef;  */

void FUN_10b79dfe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79dff0; end: 10b79e00f; -[SOJUUnlockedStickerPackSnapcodeResponse initWithSnapcodeUuid:snapcodeVersion:] */

void FUN_10b79dff0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e010; end: 10b79e06b; +[SOJUUnlockedStickerPackSnapcodeResponse registerMessageFields:] */

void FUN_10b79e010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snapcodeUuid_112547ab8;
  _objc_retain(param_3);
  FUN_10b79e06c(param_3,param_2,puVar1);
  FUN_10b79e06c(param_3,param_2,PTR_s_snapcodeVersion_112547ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e06c; end: 10b79e083;  */

void FUN_10b79e06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b79e084; end: 10b79e0eb;  */

undefined8 FUN_10b79e084(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f813d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f813d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x112f7;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f813f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f813f8,param_2,param_1);
    uVar2 = 0xa40;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79e0ec; end: 10b79e11b;  */

undefined ** FUN_10b79e0ec(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f813f8;
  if (param_1 != 0xa40) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f813d8;
  if (param_1 != 0x112f7) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79e11c; end: 10b79e14b; -[SOJUUserOwnedUnlockablesResponse initWithUserOwnedUnlockables:personalFilters:userUnlockedFilters:lensListSignature:userUnlockedStickerPacks:userPinnedLenses:userUnlockedFiltersChecksums:userPinnedLensesChecksums:] */

void FUN_10b79e11c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e14c; end: 10b79e253; +[SOJUUserOwnedUnlockablesResponse registerMessageFields:] */

void FUN_10b79e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc140;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b79e254();
  func_0x00010b79e274();
  FUN_10b79e254();
  func_0x00010b79e274();
  FUN_10b79e254();
  func_0x00010bf06b60(param_3,param_2,PTR_s_lensListSignature_112546cc0,0,1,6,0,0,0,0);
  func_0x00010b79e274();
  FUN_10b79e254();
  func_0x00010b79e274();
  FUN_10b79e254();
  _objc_opt_class(PTR_PTR_1126e1090);
  FUN_10b79e254();
  _objc_opt_class(PTR_PTR_1126e1090);
  FUN_10b79e254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e254; end: 10b79e27b;  */

void FUN_10b79e254(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b79e27c; end: 10b79e287; +[SOJUUserOwnedUnlockablesResponseBuilder messageClass] */

void FUN_10b79e27c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1328);
  return;
}



/* Entry: 10b79e288; end: 10b79e28b; +[SOJUUserOwnedUnlockablesResponseBuilder withJUUserOwnedUnlockablesResponse:] */

void FUN_10b79e288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79e28c; end: 10b79e2c7; -[SOJUVenue initWithVenueId:name:locality:filterId:subtitle:splitByServer:matchingGeofilterId:isExtra:venueName:categories:iconUrl:superCategory:] */

void FUN_10b79e28c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e2c8; end: 10b79e3fb; +[SOJUVenue registerMessageFields:] */

void FUN_10b79e2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_venueId_1126839b0;
  _objc_retain(param_3);
  func_0x00010b79e41c(param_3,param_2,puVar1,0,1);
  func_0x00010b79e44c();
  func_0x00010b79e41c();
  func_0x00010b79e44c();
  func_0x00010b79e41c();
  func_0x00010b79e3fc();
  func_0x00010b79e44c();
  func_0x00010b79e41c();
  func_0x00010b79e438();
  func_0x00010b79e42c();
  func_0x00010b79e3fc();
  func_0x00010b79e438();
  func_0x00010b79e42c();
  func_0x00010b79e3fc();
  func_0x00010b79e42c(param_3,param_2,PTR_s_categories_1125aa5c0,0,0,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x9ce29e2946db66);
  func_0x00010b79e3fc();
  func_0x00010b79e3fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e3fc; end: 10b79e45b;  */

void FUN_10b79e3fc(void)

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



/* Entry: 10b79e45c; end: 10b79e487; -[SOJUVerifiedUsersVerifiedSharedPublication initWithUsername:userId:verifiedUserInfoId:displayName:bitmojiAvatarId:bitmojiSelfieId:bitmojiSnapcodeSelfieId:] */

void FUN_10b79e45c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e488; end: 10b79e52b; +[SOJUVerifiedUsersVerifiedSharedPublication registerMessageFields:] */

void FUN_10b79e488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_username_112682b30;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,0,0,0);
  FUN_10b79e52c();
  FUN_10b79e52c();
  FUN_10b79e52c();
  FUN_10b79e52c();
  FUN_10b79e52c();
  FUN_10b79e52c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e52c; end: 10b79e54b;  */

void FUN_10b79e52c(void)

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



/* Entry: 10b79e54c; end: 10b79e56b; -[SOJUVideoChatParams initWithMac:token:scopeId:] */

void FUN_10b79e54c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e56c; end: 10b79e5db; +[SOJUVideoChatParams registerMessageFields:] */

void FUN_10b79e56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mac_1125473e0;
  _objc_retain(param_3);
  FUN_10b79e5dc(param_3,param_2,puVar1);
  FUN_10b79e5dc(param_3,param_2,PTR_s_token_11267a5d8);
  FUN_10b79e5dc(param_3,param_2,PTR_s_scopeId_112547b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e5dc; end: 10b79e5f3;  */

void FUN_10b79e5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b79e5f4; end: 10b79e62f; -[SOJUVideoRecordingTranscodingConfig initWithRecordingBitrate1080p:recordingBitrate720p:recordingBitrate640p:recordingBitrate480p:recordingBitrate360p:transcodingOutputWidth:transcodingOutputBitrate1080p:transcodingOutputBitrate720p:transcodingOutputBitrate640p:transcodingOutputBitrate480p:transcodingOutputBitrate360p:] */

void FUN_10b79e5f4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79e630; end: 10b79e777; +[SOJUVideoRecordingTranscodingConfig registerMessageFields:] */

void FUN_10b79e630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_recordingBitrate1080p_112547b40;
  _objc_retain(param_3);
  func_0x00010b79e790(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f81418,2);
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e790(param_3,param_2,PTR_s_transcodingOutputWidth_112547b68,0,1);
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e778();
  func_0x00010b79e778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79e778; end: 10b79e79f;  */

void FUN_10b79e778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b79e7a0; end: 10b79e8ff;  */

undefined8 FUN_10b79e7a0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1538;
  func_0x00010b79ea40();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffcf0262aa;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df1558;
    func_0x00010b79ea40();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x1724b4fd;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df1578;
      func_0x00010b79ea40();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffb3c8e582;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110df1598;
        func_0x00010b79ea40();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x343d0afb;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110df15b8;
          func_0x00010b79ea40();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x6c8f7766;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110df15d8;
            func_0x00010b79ea40();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x76a8dce4;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110df15f8;
              func_0x00010b79ea40();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x4a22f45;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110df1618;
                func_0x00010b79ea40();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x21b7dc;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110df1638;
                  func_0x00010b79ea40();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x26e983;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110df1658;
                    func_0x00010b79ea40();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x4ec5951;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110df1678;
                      func_0x00010b79ea40();
                      uVar2 = 0x4b970f7;
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
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79e900; end: 10b79ea47;  */

undefined ** FUN_10b79e900(long param_1)

{
  if (param_1 == -0x4c371a7e) {
    return &PTR____CFConstantStringClassReference_110df1578;
  }
  if (param_1 == -0x30fd9d56) {
    return &PTR____CFConstantStringClassReference_110df1538;
  }
  if (param_1 == 0x21b7dc) {
    return &PTR____CFConstantStringClassReference_110df1618;
  }
  if (param_1 == 0x26e983) {
    return &PTR____CFConstantStringClassReference_110df1638;
  }
  if (param_1 == 0x4a22f45) {
    return &PTR____CFConstantStringClassReference_110df15f8;
  }
  if (param_1 == 0x4b970f7) {
    return &PTR____CFConstantStringClassReference_110df1678;
  }
  if (param_1 == 0x4ec5951) {
    return &PTR____CFConstantStringClassReference_110df1658;
  }
  if (param_1 != 0x76a8dce4) {
    if (param_1 == 0x343d0afb) {
      return &PTR____CFConstantStringClassReference_110df1598;
    }
    if (param_1 != 0x6c8f7766) {
      if (param_1 == 0x1724b4fd) {
        return &PTR____CFConstantStringClassReference_110df1558;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110df15b8;
  }
  return &PTR____CFConstantStringClassReference_110df15d8;
}



/* Entry: 10b79ea48; end: 10b79eac7;  */

undefined8 FUN_10b79ea48(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81558;
  func_0x00010b79eb1c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7fbe62ee;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f81578;
    func_0x00010b79eb1c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x10212c09;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f81598;
      func_0x00010b79eb1c();
      uVar2 = 0xfffffffff2af19a1;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79eac8; end: 10b79eb23;  */

undefined ** FUN_10b79eac8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x10212c09) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f81578;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f81558;
  if (param_1 != 0x7fbe62ee) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f81598;
  if (param_1 != -0xd50e65f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79eb24; end: 10b79eb5f; -[SOJUWeatherResponse initWithLatitude:longitude:timestamp:fahrenheit:celsius:severeCondition:locationName:hourlyForecasts:hourlyBoundary:dailyForecasts:dailyBoundary:] */

void FUN_10b79eb24(void)

{
  func_0x00010c012ba0();
  return;
}


