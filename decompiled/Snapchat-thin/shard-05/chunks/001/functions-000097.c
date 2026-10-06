/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b37b30; end: 103b37b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed290);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fed298) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b37b34; end: 103b37b43; -[SCMapViewportWeather weatherConditions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b37b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed2c8);
}



/* Entry: 103b37b44; end: 103b37b57; -[SCMapViewportWeather fahrenheitTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103b37b44(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112fed2d0);
}



/* Entry: 103b37b58; end: 103b37c1f; -[SCMapViewportWeather initWithWeatherConditions:fahrenheitTemperature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37b58(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112fed2c8) = param_4;
  *(undefined4 *)(param_2 + _DAT_112fed2d0) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b37c20; end: 103b37c23; -[SCMapViewportWeather copyWithZone:] */

void FUN_103b37c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b37c24; end: 103b37c3f; -[SCMapViewportWeather description] */

void FUN_103b37c24(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b37c40; end: 103b37cdb; -[SCMapViewportWeather init] */

void FUN_103b37c40(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapViewportWeatherWrapper.swift",0x33,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b37c88);
  (*pcVar1)();
}



/* Entry: 103b37cdc; end: 103b37cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37cdc(undefined4 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed2c8) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_112fed2d0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b37ce0; end: 103b37cef; -[SCMapViewportMetadata locality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed300));
  return;
}



/* Entry: 103b37cf0; end: 103b37cff; -[SCMapViewportMetadata timeZone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed308));
  return;
}



/* Entry: 103b37d00; end: 103b37d0f; -[SCMapViewportMetadata weather] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed310));
  return;
}



/* Entry: 103b37d10; end: 103b37d1f; -[SCMapViewportMetadata worldEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed318));
  return;
}



/* Entry: 103b37d20; end: 103b37d2f; -[SCMapViewportMetadata footstepsActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed320));
  return;
}



/* Entry: 103b37d30; end: 103b37dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed300) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fed308) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed310) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fed318) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fed320) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b37dcc; end: 103b37e93; -[SCMapViewportMetadata initWithLocality:timeZone:weather:worldEffect:footstepsActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37dcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fed300) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fed308) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fed310) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fed318) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fed320) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103b37e94; end: 103b37f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37e94(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112fed300) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fed308) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112fed310) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fed318) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112fed320) = param_1[4];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b37f1c; end: 103b37f1f; -[SCMapViewportMetadata copyWithZone:] */

void FUN_103b37f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b37f20; end: 103b37f3b; -[SCMapViewportMetadata description] */

void FUN_103b37f20(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b37f3c; end: 103b37fb7; -[SCMapViewportMetadata init] */

void FUN_103b37f3c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapViewportMetadataWrapper.swift",0x34,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b37f84);
  (*pcVar1)();
}



/* Entry: 103b37fb8; end: 103b3801f; -[SCMapViewportMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b37fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b37ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b37fd8) */
/* WARNING: Removing unreachable block (ram,0x000103b37ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b37fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fed300));
  return;
}



/* Entry: 103b38020; end: 103b3803f;  */

void FUN_103b38020(void)

{
  func_0x000107c61168(&PTR_PTR_11292bbd0);
  return;
}



/* Entry: 103b38040; end: 103b3808b; -[SCMapViewportFootstepsActivity localizedFootstepsMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38040(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed350);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed350))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3808c; end: 103b3809f; -[SCMapViewportFootstepsActivity showLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b3808c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fed358);
}



/* Entry: 103b380a0; end: 103b3817f; -[SCMapViewportFootstepsActivity initWithLocalizedFootstepsMessage:showLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b380a0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed350);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112fed358) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b38180; end: 103b38183; -[SCMapViewportFootstepsActivity copyWithZone:] */

void FUN_103b38180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b38184; end: 103b3819f; -[SCMapViewportFootstepsActivity description] */

void FUN_103b38184(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b381a0; end: 103b3821b; -[SCMapViewportFootstepsActivity init] */

void FUN_103b381a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapViewportFootstepsActivityWrapper.swift",0x3d,2,0x28,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b381e8);
  (*pcVar1)();
}



/* Entry: 103b3821c; end: 103b3822f; -[SCMapViewportFootstepsActivity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3821c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed350 + 8))
  ;
  return;
}



/* Entry: 103b38230; end: 103b3824f;  */

void FUN_103b38230(void)

{
  func_0x000107c61168(&PTR_PTR_11292bcb8);
  return;
}



/* Entry: 103b38250; end: 103b38253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38250(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed350);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fed358) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b38254; end: 103b3825f; -[SCMapStyleInfo styleName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38254(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed388);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed388))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b38260; end: 103b3826b; -[SCMapStyleInfo shortCommitHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed390);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed390))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3826c; end: 103b382b3;  */

void FUN_103b3826c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b382b4; end: 103b382b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b382b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed388);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed390);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b382b8; end: 103b383c3; -[SCMapStyleInfo initWithStyleName:shortCommitHash:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b382b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed388);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed390);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b383c4; end: 103b383c7; -[SCMapStyleInfo copyWithZone:] */

void FUN_103b383c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b383c8; end: 103b383e3; -[SCMapStyleInfo description] */

void FUN_103b383c8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b383e4; end: 103b3845f; -[SCMapStyleInfo init] */

void FUN_103b383e4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapStyleInfoWrapper.swift",0x2d,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3842c);
  (*pcVar1)();
}



/* Entry: 103b38460; end: 103b3849f; -[SCMapStyleInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b38480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b38484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed388 + 8))
  ;
  return;
}



/* Entry: 103b384a0; end: 103b384bf;  */

void FUN_103b384a0(void)

{
  func_0x000107c61168(&PTR_PTR_11292bd88);
  return;
}



/* Entry: 103b384c0; end: 103b384c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b384c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed388);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed390);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b384c4; end: 103b384cf; -[SCMapAppTriggerPlace placeID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b384c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed3c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed3c0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b384d0; end: 103b38517; -[SCMapAppTriggerPlace groups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b384d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed3c8);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b38518; end: 103b38523; -[SCMapAppTriggerPlace layerID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed3d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed3d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b38524; end: 103b3856b;  */

void FUN_103b38524(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3856c; end: 103b3857f; -[SCMapAppTriggerPlace placeLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3856c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed3d8);
}



/* Entry: 103b38580; end: 103b38593; -[SCMapAppTriggerPlace touchWorldLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b38580(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed3e0);
}



/* Entry: 103b38594; end: 103b385a7; -[SCMapAppTriggerPlace screenPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b38594(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed3e8);
}



/* Entry: 103b385a8; end: 103b385b7; -[SCMapAppTriggerPlace originalProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b385a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fed3f0));
  return;
}



/* Entry: 103b385b8; end: 103b387bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b385b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_90 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3c0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fed3c8) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3d0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3e8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fed3f0) = param_12;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b387c0; end: 103b388f7; -[SCMapAppTriggerPlace initWithPlaceID:groups:layerID:placeLocation:touchWorldLocation:screenPoint:originalProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b387c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_90;
  long lStack_88;
  
  lVar2 = param_7;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fc54();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_7 + _DAT_112fed3c0);
  *puVar1 = param_9;
  puVar1[1] = param_8;
  *(undefined8 *)(param_7 + _DAT_112fed3c8) = param_10;
  puVar1 = (undefined8 *)(param_7 + _DAT_112fed3d0);
  *puVar1 = param_11;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_7 + _DAT_112fed3d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_7 + _DAT_112fed3e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_7 + _DAT_112fed3e8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(param_7 + _DAT_112fed3f0) = param_12;
  puVar3 = PTR_s_init_1125d9248;
  lStack_90 = param_7;
  lStack_88 = lVar2;
  func_0x000107c61174(param_12);
  func_0x000107c61154(&lStack_90,puVar3);
  return;
}



/* Entry: 103b388f8; end: 103b38a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b388f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = auStack_80;
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3c0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fed3c8) = uStack_48;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3d0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar4 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3d8);
  puVar1[1] = param_1[6];
  *puVar1 = uVar4;
  uVar4 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3e0);
  puVar1[1] = param_1[8];
  *puVar1 = uVar4;
  uVar4 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed3e8);
  puVar1[1] = param_1[10];
  *puVar1 = uVar4;
  uVar4 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_112fed3f0) = uVar4;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000103b38fe8(&uStack_48,auStack_70,0x112d38270,&UNK_10d905a20);
  func_0x000100402194(&uStack_60,auStack_70);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar4);
  func_0x000107c61154(auStack_80,puVar2);
  func_0x000103b38fb4(param_1);
  return puVar3;
}



/* Entry: 103b38a10; end: 103b38a43; -[SCMapAppTriggerPlace hash] */

undefined8 FUN_103b38a10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b38a44();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b38a44; end: 103b38bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38a44(void)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [72];
  
  func_0x000107c606ac(auStack_88);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fed3c0);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112fed3c0))[1]);
  uVar3 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fed3c8);
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  uVar2 = uVar3;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar3);
  func_0x000107c60690(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fed3d0);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112fed3d0))[1]);
  uVar3 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_112fed3d8);
  dVar4 = *pdVar1;
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  dVar4 = pdVar1[1];
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  pdVar1 = (double *)(unaff_x20 + _DAT_112fed3e0);
  dVar4 = *pdVar1;
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  dVar4 = pdVar1[1];
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  pdVar1 = (double *)(unaff_x20 + _DAT_112fed3e8);
  dVar4 = *pdVar1;
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  dVar4 = pdVar1[1];
  dVar5 = 0.0;
  if (dVar4 != 0.0) {
    dVar5 = dVar4;
  }
  func_0x000107c606a0(dVar5);
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_112fed3f0));
  func_0x000107c60690();
  func_0x000107c606a4();
  return;
}



/* Entry: 103b38bf8; end: 103b38e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b38bf8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000103b38fe8(param_1,auStack_90,0x112d387f8,&UNK_10d902650);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar3 = &lStack_98;
    func_0x000107c6147c(plVar3,auStack_90,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112fed3c0);
      if (lVar2 == *(long *)(lStack_98 + _DAT_112fed3c0) &&
          ((long *)(unaff_x20 + _DAT_112fed3c0))[1] == ((long *)(lStack_98 + _DAT_112fed3c0))[1]) {
        uVar6 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar6 = (uint)lVar2 ^ 1;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fed3c8);
      func_0x00010142cfc4(uVar4,*(undefined8 *)(lStack_98 + _DAT_112fed3c8));
      lVar2 = *(long *)(unaff_x20 + _DAT_112fed3d0);
      if (lVar2 == *(long *)(lStack_98 + _DAT_112fed3d0) &&
          ((long *)(unaff_x20 + _DAT_112fed3d0))[1] == ((long *)(lStack_98 + _DAT_112fed3d0))[1]) {
        uVar8 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar8 = (uint)lVar2 ^ 1;
      }
      if (*(double *)(unaff_x20 + _DAT_112fed3d8) == *(double *)(lStack_98 + _DAT_112fed3d8)) {
        uVar9 = (uint)(((double *)(unaff_x20 + _DAT_112fed3d8))[1] !=
                      ((double *)(lStack_98 + _DAT_112fed3d8))[1]);
      }
      else {
        uVar9 = 1;
      }
      if (*(double *)(unaff_x20 + _DAT_112fed3e0) == *(double *)(lStack_98 + _DAT_112fed3e0)) {
        bVar1 = ((double *)(unaff_x20 + _DAT_112fed3e0))[1] !=
                ((double *)(lStack_98 + _DAT_112fed3e0))[1];
      }
      else {
        bVar1 = true;
      }
      dVar11 = *(double *)(unaff_x20 + _DAT_112fed3e8);
      dVar10 = ((double *)(unaff_x20 + _DAT_112fed3e8))[1];
      dVar13 = *(double *)(lStack_98 + _DAT_112fed3e8);
      dVar12 = ((double *)(lStack_98 + _DAT_112fed3e8))[1];
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fed3f0);
      uVar5 = *(undefined8 *)(lStack_98 + _DAT_112fed3f0);
      func_0x000107c61174(uVar5);
      func_0x000107c49cec(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lStack_98);
      if (((uVar6 | (uint)uVar4 ^ 0xffffffff | uVar8 | uVar9) & 1) != 0) {
        return 0;
      }
      if (bVar1) {
        return 0;
      }
      uVar6 = 0;
      if (dVar10 == dVar12) {
        uVar6 = (uint)(dVar11 == dVar13);
      }
      return uVar6 & (uint)uVar7;
    }
  }
  return 0;
}



/* Entry: 103b38e20; end: 103b38e9f; -[SCMapAppTriggerPlace isEqual:] */

uint FUN_103b38e20(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b38bf8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b38ea0; end: 103b38ea3; -[SCMapAppTriggerPlace copyWithZone:] */

void FUN_103b38ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b38ea4; end: 103b38ed7; -[SCMapAppTriggerPlace description] */

void FUN_103b38ea4(void)

{
  undefined1 auStack_70 [96];
  
  FUN_103b39030(auStack_70);
  func_0x000103b38fb4(auStack_70);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b38ed8; end: 103b38f53; -[SCMapAppTriggerPlace init] */

void FUN_103b38ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapAppTriggerPlaceWrapper.swift",0x33,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b38f20);
  (*pcVar1)();
}



/* Entry: 103b38f54; end: 103b3902f; -[SCMapAppTriggerPlace .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b38f54(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fed3c0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fed3c8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fed3d0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fed3f0));
  return;
}



/* Entry: 103b39030; end: 103b390e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39030(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = _DAT_112fed3e8;
  lVar4 = _DAT_112fed3e0;
  lVar3 = _DAT_112fed3d8;
  uVar1 = ((undefined8 *)(param_2 + _DAT_112fed3c0))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_112fed3c8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112fed3d0);
  uVar2 = ((undefined8 *)(param_2 + _DAT_112fed3d0))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_112fed3f0);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112fed3c0);
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + lVar3);
  param_1[6] = ((undefined8 *)(param_2 + lVar3))[1];
  param_1[5] = uVar8;
  uVar9 = ((undefined8 *)(param_2 + lVar4))[1];
  uVar8 = *(undefined8 *)(param_2 + lVar4);
  param_1[4] = uVar2;
  param_1[8] = uVar9;
  param_1[7] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + lVar5);
  param_1[10] = ((undefined8 *)(param_2 + lVar5))[1];
  param_1[9] = uVar8;
  param_1[0xb] = uVar7;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 103b390e4; end: 103b39103;  */

void FUN_103b390e4(void)

{
  func_0x000107c61168(&PTR_PTR_11292be58);
  return;
}



/* Entry: 103b39104; end: 103b3911b; -[SCMapInstanceLayer layerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b39104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed420);
}



/* Entry: 103b3911c; end: 103b391ff; -[SCMapInstanceLayer initWithLayerId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3911c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fed420) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b39200; end: 103b39203; -[SCMapInstanceLayer copyWithZone:] */

void FUN_103b39200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b39204; end: 103b3921f; -[SCMapInstanceLayer description] */

void FUN_103b39204(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b39220; end: 103b392bb; -[SCMapInstanceLayer init] */

void FUN_103b39220(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapInstanceLayerWrapper.swift",0x31,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b39268);
  (*pcVar1)();
}



/* Entry: 103b392bc; end: 103b392bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b392bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed420) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b392c0; end: 103b392e7;  */

void FUN_103b392c0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_103b393b4();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b392e8; end: 103b39307;  */

void FUN_103b392e8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103b39308; end: 103b393b3;  */

void FUN_103b39308(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b393b4; end: 103b393c7;  */

ulong FUN_103b393b4(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 103b393c8; end: 103b39407;  */

void FUN_103b393c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fed450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc57578;
  func_0x000107c61520(&UNK_10dc57578,&UNK_1106d6590);
  puRam0000000112fed450 = puVar1;
  return;
}



/* Entry: 103b39408; end: 103b3956b;  */

int FUN_103b39408(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b39484;
        goto LAB_103b39468;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b39468:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_103b39484:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b3956c; end: 103b39593;  */

void FUN_103b3956c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_103b39660();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b39594; end: 103b395b3;  */

void FUN_103b39594(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103b395b4; end: 103b3965f;  */

void FUN_103b395b4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b39660; end: 103b39673;  */

ulong FUN_103b39660(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 103b39674; end: 103b396b3;  */

void FUN_103b39674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fed458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc57658;
  func_0x000107c61520(&UNK_10dc57658,&UNK_1106d6678);
  puRam0000000112fed458 = puVar1;
  return;
}



/* Entry: 103b396b4; end: 103b39817;  */

int FUN_103b396b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b39730;
        goto LAB_103b39714;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b39714:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_103b39730:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b39818; end: 103b39863; -[SCMapAppTriggerPlaceData layerID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39818(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed460);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed460))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b39864; end: 103b398ab; -[SCMapAppTriggerPlaceData groups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed468);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b398ac; end: 103b398bf; -[SCMapAppTriggerPlaceData touchWorldLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b398ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed470);
}



/* Entry: 103b398c0; end: 103b398d3; -[SCMapAppTriggerPlaceData screenPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b398c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed478);
}



/* Entry: 103b398d4; end: 103b3992f; -[SCMapAppTriggerPlaceData originalProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b398d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed480);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b39930; end: 103b39ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed460);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fed468) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed470);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed478);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fed480) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b39ab8; end: 103b39bcb; -[SCMapAppTriggerPlaceData initWithLayerID:groups:touchWorldLocation:screenPoint:originalProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_80;
  long lStack_78;
  
  lVar3 = param_5;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_8,PTR___sSSN_11034da80);
  func_0x000107c5f9e8(param_9,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  puVar1 = (undefined8 *)(param_5 + _DAT_112fed460);
  *puVar1 = param_7;
  puVar1[1] = param_6;
  *(undefined8 *)(param_5 + _DAT_112fed468) = param_8;
  puVar1 = (undefined8 *)(param_5 + _DAT_112fed470);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_5 + _DAT_112fed478);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_5 + _DAT_112fed480) = param_9;
  lStack_80 = param_5;
  lStack_78 = lVar3;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b39bcc; end: 103b39c2b; -[SCMapAppTriggerPlaceData init] */

void FUN_103b39bcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.MapAppTriggerPlaceData",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b39bf8);
  (*pcVar1)();
}



/* Entry: 103b39c2c; end: 103b39c77; -[SCMapAppTriggerPlaceData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b39c4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b39c50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed460 + 8))
  ;
  return;
}



/* Entry: 103b39c78; end: 103b39c97;  */

void FUN_103b39c78(void)

{
  func_0x000107c61168(&PTR_PTR_11292c018);
  return;
}



/* Entry: 103b39c98; end: 103b39cf3;  */

int FUN_103b39c98(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103b39cf4; end: 103b39eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed4b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed4b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed4c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fed4c8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112fed4d0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fed4d8) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b39eb4; end: 103b39f13; -[SCAdFeatureLoadedTrigger init] */

void FUN_103b39eb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AdFeatureLoadedTrigger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b39ee0);
  (*pcVar1)();
}



/* Entry: 103b39f14; end: 103b39f63; -[SCAdFeatureLoadedTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b39f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b39f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed4b0 + 8))
  ;
  return;
}



/* Entry: 103b39f64; end: 103b39f83;  */

void FUN_103b39f64(void)

{
  func_0x000107c61168(&PTR_PTR_11292c0f8);
  return;
}



/* Entry: 103b39f84; end: 103b3a0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b39f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed508);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed510) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fed518) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fed520) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fed528) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fed530) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a0fc; end: 103b3a15b; -[SCAdFeatureRenderStoppedTrigger init] */

void FUN_103b3a0fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AdFeatureRenderStoppedTrigger",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a128);
  (*pcVar1)();
}



/* Entry: 103b3a15c; end: 103b3a197; -[SCAdFeatureRenderStoppedTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3a17c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3a180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed508 + 8))
  ;
  return;
}



/* Entry: 103b3a198; end: 103b3a1b7;  */

void FUN_103b3a198(void)

{
  func_0x000107c61168(&PTR_PTR_11292c1e0);
  return;
}



/* Entry: 103b3a1b8; end: 103b3a2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed560);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed568) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fed570) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fed578) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}


