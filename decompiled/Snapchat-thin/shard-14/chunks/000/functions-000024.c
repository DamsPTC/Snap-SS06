/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af2de24; end: 10af2de2b; -[SCTimestampMetadata month] */

undefined8 FUN_10af2de24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af2de2c; end: 10af2de33; -[SCTimestampMetadata year] */

undefined8 FUN_10af2de2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af2de34; end: 10af2de3b; -[SCTimestampMetadata date] */

undefined8 FUN_10af2de34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af2de3c; end: 10af2de43; -[SCTimestampMetadata locale] */

undefined8 FUN_10af2de3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af2de44; end: 10af2de4b; -[SCTimestampMetadata timeZone] */

undefined8 FUN_10af2de44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af2de4c; end: 10af2de53; -[SCTimestampMetadata type] */

undefined8 FUN_10af2de4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10af2de54; end: 10af2de5b; -[SCTimestampMetadata setType:] */

void FUN_10af2de54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10af2de5c; end: 10af2de97; -[SCTimestampMetadata .cxx_destruct] */

void FUN_10af2de5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 10af2de98; end: 10af2df0b; -[SCVenueInfoSticker initWithSupportsReporting:] */

undefined1 * FUN_10af2de98(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af2df0c; end: 10af2df1b; -[SCVenueInfoSticker setToBroadLocation] */

void FUN_10af2df0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateState_venues_error__112595c18,1,0,0);
  return;
}



/* Entry: 10af2df1c; end: 10af2df2b; -[SCVenueInfoSticker beginLoading] */

void FUN_10af2df1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateState_venues_error__112595c18,2,0,0);
  return;
}



/* Entry: 10af2df2c; end: 10af2df3b; -[SCVenueInfoSticker finishLoadingWithVenues:] */

void FUN_10af2df2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateState_venues_error__112595c18,3,param_3,0);
  return;
}



/* Entry: 10af2df3c; end: 10af2df4b; -[SCVenueInfoSticker finishLoadingWithError:] */

void FUN_10af2df3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateState_venues_error__112595c18,3,0,param_3);
  return;
}



/* Entry: 10af2df4c; end: 10af2df5b; -[SCVenueInfoSticker beginLoadingInferredVenue] */

void FUN_10af2df4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateInferredState_inferredVen_112594030,1,0,0);
  return;
}



/* Entry: 10af2df5c; end: 10af2df6b; -[SCVenueInfoSticker finishLoadingWithInferredVenueName:venueId:] */

void FUN_10af2df5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateInferredState_inferredVen_112594030,2,param_3,param_4);
  return;
}



/* Entry: 10af2df6c; end: 10af2df7b; -[SCVenueInfoSticker finishLoadingInferredVenueWithError:] */

void FUN_10af2df6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateInferredState_inferredVen_112594030,0,0,0);
  return;
}



/* Entry: 10af2df7c; end: 10af2e00b; -[SCVenueInfoSticker _updateState:venues:error:] */

void FUN_10af2df7c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_release(uVar1);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((param_3 == 3) && (param_4 != (undefined *)0x0)) {
    puVar2 = param_4;
    func_0x00010bf51e00();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af2e00c; end: 10af2e0a7; -[SCVenueInfoSticker _updateInferredState:inferredVenueName:venueId:] */

void FUN_10af2e00c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 == 2) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_5;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af2e0a8; end: 10af2e0af; -[SCVenueInfoSticker inferredVenueName] */

undefined8 FUN_10af2e0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2e0b0; end: 10af2e0df; -[SCVenueInfoSticker setInferredVenueName:] */

void FUN_10af2e0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2e0e0; end: 10af2e0e7; -[SCVenueInfoSticker venueId] */

undefined8 FUN_10af2e0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2e0e8; end: 10af2e117; -[SCVenueInfoSticker setVenueId:] */

void FUN_10af2e0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2e118; end: 10af2e11f; -[SCVenueInfoSticker error] */

undefined8 FUN_10af2e118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2e120; end: 10af2e127; -[SCVenueInfoSticker venues] */

undefined8 FUN_10af2e120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af2e128; end: 10af2e12f; -[SCVenueInfoSticker state] */

undefined8 FUN_10af2e128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af2e130; end: 10af2e137; -[SCVenueInfoSticker inferredVenueState] */

undefined8 FUN_10af2e130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af2e138; end: 10af2e13f; -[SCVenueInfoSticker supportsReporting] */

undefined1 FUN_10af2e138(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2e140; end: 10af2e187; -[SCVenueInfoSticker .cxx_destruct] */

void FUN_10af2e140(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2e188; end: 10af2e1e3; -[SCAltitudeInfo initWithAltitudeInMeters:unit:viewType:] */

void FUN_10af2e188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112702440;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10af2e1e4; end: 10af2e283; -[SCAltitudeInfo initWithCoder:] */

undefined1 * FUN_10af2e1e4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112702440;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 8) = (double)param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2e284; end: 10af2e2a7; -[SCAltitudeInfo copyWithZone:] */

undefined8 FUN_10af2e284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2e2a8; end: 10af2e31f; -[SCAltitudeInfo encodeWithCoder:] */

void FUN_10af2e2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92ee0((float)dVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110f38858)
  ;
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f38878);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f38898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af2e320; end: 10af2e39f; -[SCAltitudeInfo hash] */

ulong * FUN_10af2e320(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 8) - *(double *)(param_3 + 8)) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10af2e3a0; end: 10af2e46b; -[SCAltitudeInfo isEqual:] */

bool FUN_10af2e3a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10af2e46c; end: 10af2e473; -[SCAltitudeInfo altitudeInMeters] */

undefined8 FUN_10af2e46c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2e474; end: 10af2e47b; -[SCAltitudeInfo unit] */

undefined8 FUN_10af2e474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2e47c; end: 10af2e483; -[SCAltitudeInfo viewType] */

undefined8 FUN_10af2e47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2e484; end: 10af2e587; -[SCWeather initWithCelsius:fahrenheit:uvIndex:locationName:hourlyForecasts:dailyForecasts:weatherFilterViewType:] */

undefined1 *
FUN_10af2e484(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112702448;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2e588; end: 10af2e5ab; -[SCWeather copyWithZone:] */

undefined8 FUN_10af2e588(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2e5ac; end: 10af2e693; -[SCWeather hash] */

long * FUN_10af2e5ac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar8 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_60 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  uVar6 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_58 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  uStack_38 = uVar3;
  func_0x000107c3191c(&lStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_10af2e7a8:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af2e7b4;
    puVar9 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)plVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)plVar4 + 0x30) == *(long *)(param_3 + 0x30))))) {
      fVar11 = ABS(*(float *)((long)plVar4 + 8) - *(float *)(param_3 + 8));
      fVar10 = ABS(*(float *)((long)plVar4 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
        bVar1 = fVar11 < fVar10;
      }
      if (bVar1) {
        fVar11 = ABS(*(float *)((long)plVar4 + 0xc) - *(float *)(param_3 + 0xc));
        fVar10 = ABS(*(float *)((long)plVar4 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if (((bVar1) &&
            ((lVar7 = *(long *)((long)plVar4 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)plVar4 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)plVar4 + 0x28);
          if (puVar9 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10af2e7b4;
          }
          goto LAB_10af2e7a8;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10af2e7b4:
  _objc_release(param_3);
  return (long *)puVar9;
}



/* Entry: 10af2e694; end: 10af2e7cf; -[SCWeather isEqual:] */

long FUN_10af2e694(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2e7a8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2e7b4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10af2e7b4;
          }
          goto LAB_10af2e7a8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10af2e7b4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af2e7d0; end: 10af2e7d7; -[SCWeather celsius] */

undefined4 FUN_10af2e7d0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af2e7d8; end: 10af2e7df; -[SCWeather fahrenheit] */

undefined4 FUN_10af2e7d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af2e7e0; end: 10af2e7e7; -[SCWeather uvIndex] */

undefined8 FUN_10af2e7e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2e7e8; end: 10af2e7ef; -[SCWeather locationName] */

undefined8 FUN_10af2e7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2e7f0; end: 10af2e7f7; -[SCWeather hourlyForecasts] */

undefined8 FUN_10af2e7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2e7f8; end: 10af2e7ff; -[SCWeather dailyForecasts] */

undefined8 FUN_10af2e7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af2e800; end: 10af2e807; -[SCWeather weatherFilterViewType] */

undefined8 FUN_10af2e800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af2e808; end: 10af2e843; -[SCWeather .cxx_destruct] */

void FUN_10af2e808(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af2e844; end: 10af2e84f; -[SCMusicLoggingServices .cxx_destruct] */

void FUN_10af2e844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2e850; end: 10af2e997; -[SCPercMLModelAPI baseModel] */

void FUN_10af2e850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_f8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2e9b0;
  puStack_60 = &UNK_1108a65e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10af2e9e8;
  puStack_88 = &UNK_110c930f0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10af2ea20;
  puStack_b0 = &UNK_110c93120;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10af2ea58;
  puStack_d8 = &UNK_110c93150;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x10af2ea90;
  puStack_100 = &UNK_1108a6618;
  puStack_d0 = puStack_f8;
  puStack_a8 = puStack_f8;
  puStack_80 = puStack_f8;
  puStack_58 = puStack_f8;
  puStack_48 = puStack_f8;
  func_0x00010c0be520(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2e998; end: 10af2e9af;  */

void FUN_10af2e998(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10af2e9b0; end: 10af2eac7;  */

void FUN_10af2e9b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2eac8; end: 10af2eb9b; -[SCPercMLModelAPI barcodeDetectionModel] */

void FUN_10af2eac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2eb9c;
  puStack_60 = &UNK_110c93120;
  puStack_48 = puStack_58;
  func_0x00010c0be520(param_1,param_2,0,0,&puStack_78,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2eb9c; end: 10af2ebd3;  */

void FUN_10af2eb9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2ebd4; end: 10af2eca7; -[SCPercMLModelAPI imageClassificationModel] */

void FUN_10af2ebd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2eca8;
  puStack_60 = &UNK_1108a65e8;
  puStack_48 = puStack_58;
  func_0x00010c0be520(param_1,param_2,&puStack_78,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2eca8; end: 10af2ecdf;  */

void FUN_10af2eca8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2ece0; end: 10af2edb3; -[SCPercMLModelAPI imageEmbeddingModel] */

void FUN_10af2ece0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2edb4;
  puStack_60 = &UNK_110c930f0;
  puStack_48 = puStack_58;
  func_0x00010c0be520(param_1,param_2,0,&puStack_78,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2edb4; end: 10af2edeb;  */

void FUN_10af2edb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2edec; end: 10af2eebf; -[SCPercMLModelAPI snapcodeDetectionModel] */

void FUN_10af2edec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2eec0;
  puStack_60 = &UNK_110c93150;
  puStack_48 = puStack_58;
  func_0x00010c0be520(param_1,param_2,0,0,0,&puStack_78,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2eec0; end: 10af2eef7;  */

void FUN_10af2eec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2eef8; end: 10af2efcb; -[SCPercMLModelAPI faceEmbeddingModel] */

void FUN_10af2eef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10af2e998;
  uStack_30 = 0x10af2e9a8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10af2efcc;
  puStack_60 = &UNK_1108a6618;
  puStack_48 = puStack_58;
  func_0x00010c0be520(param_1,param_2,0,0,0,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af2efcc; end: 10af2f003;  */

void FUN_10af2efcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af2f004; end: 10af2f05b; -[SCScanPixelBufferWrapper initWithPixelBuffer:] */

undefined1 * FUN_10af2f004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af2f05c; end: 10af2f0a3; -[SCScanPixelBufferWrapper dealloc] */

void FUN_10af2f05c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_112702458;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af2f0a4; end: 10af2f0ab; -[SCScanPixelBufferWrapper pixelBufferRef] */

undefined8 FUN_10af2f0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2f0ac; end: 10af2f0b7; -[SCPercMLModelServices .cxx_destruct] */

void FUN_10af2f0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2f0b8; end: 10af2f13f; -[SCPercMLBarcodeResult initWithSymbology:payload:] */

undefined1 *
FUN_10af2f0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702468;
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



/* Entry: 10af2f140; end: 10af2f163; -[SCPercMLBarcodeResult copyWithZone:] */

undefined8 FUN_10af2f140(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2f164; end: 10af2f1c3; -[SCPercMLBarcodeResult hash] */

undefined8 * FUN_10af2f164(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2f248;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10af2f248;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10af2f248;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10af2f248:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af2f1c4; end: 10af2f263; -[SCPercMLBarcodeResult isEqual:] */

long FUN_10af2f1c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2f248;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10af2f248;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af2f248;
    }
  }
  lVar3 = 1;
LAB_10af2f248:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2f264; end: 10af2f26b; -[SCPercMLBarcodeResult symbology] */

undefined8 FUN_10af2f264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2f26c; end: 10af2f273; -[SCPercMLBarcodeResult payload] */

undefined8 FUN_10af2f26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2f274; end: 10af2f27f; -[SCPercMLBarcodeResult .cxx_destruct] */

void FUN_10af2f274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2f280; end: 10af2f307; -[SCPercMLAnnotation initWithLabel:score:] */

undefined1 *
FUN_10af2f280(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702470;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2f308; end: 10af2f32b; -[SCPercMLAnnotation copyWithZone:] */

undefined8 FUN_10af2f308(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2f32c; end: 10af2f3bf; -[SCPercMLAnnotation hash] */

undefined8 * FUN_10af2f32c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_30 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af2f458:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2f464;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      fVar8 = ABS(*(float *)(puVar3 + 1) - *(float *)(param_3 + 1));
      fVar7 = ABS(*(float *)(puVar3 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar1 = fVar8 < fVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af2f464;
        }
        goto LAB_10af2f458;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af2f464:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af2f3c0; end: 10af2f47f; -[SCPercMLAnnotation isEqual:] */

long FUN_10af2f3c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2f458:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2f464;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af2f464;
        }
        goto LAB_10af2f458;
      }
    }
    lVar4 = 0;
  }
LAB_10af2f464:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af2f480; end: 10af2f487; -[SCPercMLAnnotation label] */

undefined8 FUN_10af2f480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2f488; end: 10af2f48f; -[SCPercMLAnnotation score] */

undefined4 FUN_10af2f488(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af2f490; end: 10af2f49b; -[SCPercMLAnnotation .cxx_destruct] */

void FUN_10af2f490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2f49c; end: 10af2f4f3; -[SCPercMLImageProcessingConfig initWithApplyClockwiseRotation:cameraFieldOfView:] */

void FUN_10af2f49c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112702478;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  return;
}



/* Entry: 10af2f4f4; end: 10af2f517; -[SCPercMLImageProcessingConfig copyWithZone:] */

undefined8 FUN_10af2f4f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2f518; end: 10af2f59b; -[SCPercMLImageProcessingConfig hash] */

ulong * FUN_10af2f518(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  float fVar5;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lStack_20 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar4 = (ulong *)0x0;
      }
      else {
        fVar5 = ABS(*(float *)((long)puVar1 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                1.1920929e-07;
        if (fVar5 <= 1.1754944e-38) {
          fVar5 = 1.1754944e-38;
        }
        puVar4 = (ulong *)(ulong)(ABS(*(float *)((long)puVar1 + 0xc) -
                                      *(float *)((long)param_3 + 0xc)) < fVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af2f59c; end: 10af2f653; -[SCPercMLImageProcessingConfig isEqual:] */

bool FUN_10af2f59c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        bVar3 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10af2f654; end: 10af2f65b; -[SCPercMLImageProcessingConfig applyClockwiseRotation] */

undefined1 FUN_10af2f654(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2f65c; end: 10af2f663; -[SCPercMLImageProcessingConfig cameraFieldOfView] */

undefined4 FUN_10af2f65c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af2f664; end: 10af2f70f; -[SCPercMLModel initWithApi:userData:] */

undefined1 *
FUN_10af2f664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2f710; end: 10af2f733; -[SCPercMLModel copyWithZone:] */

undefined8 FUN_10af2f710(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2f734; end: 10af2f7a7; -[SCPercMLModel hash] */

undefined8 * FUN_10af2f734(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af2f828:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2f834;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af2f834;
        }
        goto LAB_10af2f828;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af2f834:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af2f7a8; end: 10af2f84f; -[SCPercMLModel isEqual:] */

long FUN_10af2f7a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2f828:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2f834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af2f834;
        }
        goto LAB_10af2f828;
      }
    }
    lVar3 = 0;
  }
LAB_10af2f834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2f850; end: 10af2f857; -[SCPercMLModel api] */

undefined8 FUN_10af2f850(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2f858; end: 10af2f85f; -[SCPercMLModel userData] */

undefined8 FUN_10af2f858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2f860; end: 10af2f88f; -[SCPercMLModel .cxx_destruct] */

void FUN_10af2f860(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2f890; end: 10af2f8fb; +[SCPercMLModelAPI barcodeDetectionModelWithModel:] */

void FUN_10af2f890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bca58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2f8fc; end: 10af2f967; +[SCPercMLModelAPI faceEmbeddingModelWithModel:] */

void FUN_10af2f8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bca58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2f968; end: 10af2f9cb; +[SCPercMLModelAPI imageClassificationModelWithModel:] */

void FUN_10af2f968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bca58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2f9cc; end: 10af2fa37; +[SCPercMLModelAPI imageEmbeddingModelWithModel:] */

void FUN_10af2f9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bca58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2fa38; end: 10af2faa3; +[SCPercMLModelAPI snapcodeDetectionModelWithModel:] */

void FUN_10af2fa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bca58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2faa4; end: 10af2fac7; -[SCPercMLModelAPI copyWithZone:] */

undefined8 FUN_10af2faa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


