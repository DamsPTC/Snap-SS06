/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b940f8; end: 103b94107; -[SCContextActionBarButtonAppearance shape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b940f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2060);
}



/* Entry: 103b94108; end: 103b94117; -[SCContextActionBarButtonAppearance foregroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2068));
  return;
}



/* Entry: 103b94118; end: 103b94127; -[SCContextActionBarButtonAppearance backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2070));
  return;
}



/* Entry: 103b94128; end: 103b94137; -[SCContextActionBarButtonAppearance shadowStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b94128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2078);
}



/* Entry: 103b94138; end: 103b94147; -[SCContextActionBarButtonAppearance shadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2080));
  return;
}



/* Entry: 103b94148; end: 103b94157; -[SCContextActionBarButtonAppearance borderStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b94148(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2088);
}



/* Entry: 103b94158; end: 103b9420b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2060) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2068) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2070) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2078) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2080) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2088) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9420c; end: 103b942db; -[SCContextActionBarButtonAppearance initWithShape:foregroundColor:backgroundColor:shadowStyle:shadowColor:borderStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9420c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2060) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff2068) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff2070) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff2078) = param_6;
  *(undefined8 *)(param_1 + _DAT_112ff2080) = param_7;
  *(undefined8 *)(param_1 + _DAT_112ff2088) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 103b942dc; end: 103b9436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b942dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112ff2060) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2068) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112ff2070) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112ff2078) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112ff2080) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff2088) = uVar1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b94370; end: 103b94373; -[SCContextActionBarButtonAppearance copyWithZone:] */

void FUN_103b94370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b94374; end: 103b9438f; -[SCContextActionBarButtonAppearance description] */

void FUN_103b94374(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b94390; end: 103b9440b; -[SCContextActionBarButtonAppearance init] */

void FUN_103b94390(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCContextOperaKeys/SCContextActionBarButtonAppearanceWrapper.swift",0x42,2,
                      0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b943d8);
  (*pcVar1)();
}



/* Entry: 103b9440c; end: 103b94453; -[SCContextActionBarButtonAppearance .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b94428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9442c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9440c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2068));
  return;
}



/* Entry: 103b94454; end: 103b94473;  */

void FUN_103b94454(void)

{
  func_0x000107c61168(&PTR_PTR_112939868);
  return;
}



/* Entry: 103b94474; end: 103b944f7; -[QRCodePageActionModel openPageToProfileCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b94474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff20b8;
  func_0x000107c61428(param_1 + _DAT_112ff20b8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b944f8; end: 103b94593; -[QRCodePageActionModel setOpenPageToProfileCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b944f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff20b8;
  func_0x000107c61428(param_1 + _DAT_112ff20b8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b94594; end: 103b945d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b94594(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff20b8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff20b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b945d4;
  return auVar2;
}



/* Entry: 103b945d4; end: 103b945d7;  */

void FUN_103b945d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b945d8; end: 103b94603;  */

void FUN_103b945d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  FUN_103b94604();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b94604; end: 103b94623;  */

void FUN_103b94604(void)

{
  func_0x000107c61168(&PTR_PTR_112939958);
  return;
}



/* Entry: 103b94624; end: 103b94627; -[QRCodePageActionModel copyWithZone:] */

void FUN_103b94624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b94628; end: 103b94673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94628(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff20b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b94674; end: 103b946bb; -[QRCodePageActionModel initWithOpenPageToProfileCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94674(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112ff20b8) = param_3;
  lVar1 = param_1;
  FUN_103b94604();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b946bc; end: 103b946c7;  */

void FUN_103b946bc(void)

{
  FUN_103b94604();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b946c8; end: 103b946e7; -[QRCodeCardScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b946c8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff20c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b946e8; end: 103b94773; -[QRCodeCardScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b946e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff20c8;
  func_0x000107c61428(param_1 + _DAT_112ff20c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b94774; end: 103b94917; -[QRCodeCardScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff20c8;
  func_0x000107c61428(param_1 + _DAT_112ff20c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b94918; end: 103b94923; -[QRCodeCardScope sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff20d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff20d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b94924; end: 103b9492f; -[QRCodeCardScope sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff20d8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff20d8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b94930; end: 103b94977;  */

void FUN_103b94930(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b94978; end: 103b949fb; -[QRCodeCardScope openPageToAvatarCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b94978(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff20e0;
  func_0x000107c61428(param_1 + _DAT_112ff20e0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b949fc; end: 103b94a97; -[QRCodeCardScope setOpenPageToAvatarCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b949fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff20e0;
  func_0x000107c61428(param_1 + _DAT_112ff20e0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b94a98; end: 103b94ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b94a98(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff20e0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff20e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b94e90;
  return auVar2;
}



/* Entry: 103b94ad8; end: 103b94be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b94ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ff20c8;
  func_0x000107c61614(unaff_x20 + _DAT_112ff20c8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff20e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff20c0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff20d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff20d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 103b94be4; end: 103b94cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b94be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112ff20c8;
  func_0x000107c61614(unaff_x20 + _DAT_112ff20c8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ff20e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff20c0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff20d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff20d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  FUN_103b94cdc();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 103b94cdc; end: 103b94cfb;  */

void FUN_103b94cdc(void)

{
  func_0x000107c61168(&PTR_PTR_112939a38);
  return;
}



/* Entry: 103b94cfc; end: 103b94df3; -[QRCodeCardScope initWithUiContainer:delegate:sourceType:sessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  lVar3 = _DAT_112ff20c8;
  func_0x000107c61614(param_1 + _DAT_112ff20c8,0);
  *(undefined1 *)(param_1 + _DAT_112ff20e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff20c0) = param_3;
  func_0x000107c61428(param_1 + lVar3,auStack_68,1,0);
  lVar3 = param_1 + lVar3;
  func_0x000107c61604(lVar3,param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff20d0);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff20d8);
  *puVar1 = param_6;
  puVar1[1] = uVar4;
  FUN_103b94cdc();
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 103b94df4; end: 103b94dff;  */

void FUN_103b94df4(void)

{
  FUN_103b94cdc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b94e00; end: 103b94e2f;  */

void FUN_103b94e00(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b94e30; end: 103b94e8f; -[QRCodeCardScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b94e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b94e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94e30(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff20c0));
  func_0x0001012939ec(param_1 + _DAT_112ff20c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff20d0 + 8))
  ;
  return;
}



/* Entry: 103b94e90; end: 103b94e93;  */

void FUN_103b94e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b94e94; end: 103b94f27; -[SCMapUnifiedActionMenuViewModel mapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94e94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2138;
  func_0x000107c61428(param_1 + _DAT_112ff2138,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b94f28; end: 103b94fdf; -[SCMapUnifiedActionMenuViewModel setMapView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b94f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2138;
  func_0x000107c61428(param_1 + _DAT_112ff2138,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b94fe0; end: 103b9501f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b94fe0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff2138;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2138,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b95708;
  return auVar2;
}



/* Entry: 103b95020; end: 103b950a3; -[SCMapUnifiedActionMenuViewModel shouldShowMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b95020(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2140;
  func_0x000107c61428(param_1 + _DAT_112ff2140,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b950a4; end: 103b9513f; -[SCMapUnifiedActionMenuViewModel setShouldShowMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b950a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2140;
  func_0x000107c61428(param_1 + _DAT_112ff2140,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b95140; end: 103b9517f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b95140(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff2140;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2140,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b95180;
  return auVar2;
}



/* Entry: 103b95180; end: 103b95183;  */

void FUN_103b95180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b95184; end: 103b9520b; -[SCMapUnifiedActionMenuViewModel mapSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b95184(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_112ff2148);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 103b9520c; end: 103b952b3; -[SCMapUnifiedActionMenuViewModel setMapSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9520c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112ff2148);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 103b952b4; end: 103b952f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b952b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff2148;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2148,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b9570c;
  return auVar2;
}



/* Entry: 103b952f4; end: 103b953af; -[SCMapUnifiedActionMenuViewModel locationSubheader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b952f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2150);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b953b0; end: 103b95473; -[SCMapUnifiedActionMenuViewModel setLocationSubheader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b953b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff2150);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b95474; end: 103b954b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b95474(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff2150;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2150,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b95710;
  return auVar2;
}



/* Entry: 103b954b4; end: 103b9557b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b954b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff2138;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2138) = 0;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2140) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2148);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2150);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9557c; end: 103b9559b;  */

void FUN_103b9557c(void)

{
  func_0x000107c61168(&PTR_PTR_112939b48);
  return;
}



/* Entry: 103b9559c; end: 103b9566b; -[SCMapUnifiedActionMenuViewModel initWithMapView:shouldShowMap:mapSize:locationSubheader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9559c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec();
  lVar3 = _DAT_112ff2138;
  *(undefined8 *)(param_3 + _DAT_112ff2138) = 0;
  lVar4 = param_3 + lVar3;
  func_0x000107c61428(lVar4,auStack_68,1,0);
  *(undefined8 *)(param_3 + lVar3) = param_5;
  *(undefined1 *)(param_3 + _DAT_112ff2140) = param_6;
  puVar1 = (undefined8 *)(param_3 + _DAT_112ff2148);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_3 + _DAT_112ff2150);
  *puVar1 = param_7;
  puVar1[1] = param_4;
  FUN_103b9557c();
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_3;
  lStack_70 = lVar4;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 103b9566c; end: 103b95697;  */

void FUN_103b9566c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  FUN_103b9557c();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b95698; end: 103b9569b; -[SCMapUnifiedActionMenuViewModel copyWithZone:] */

void FUN_103b95698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b9569c; end: 103b956cb;  */

void FUN_103b9569c(void)

{
  FUN_103b9557c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b956cc; end: 103b95707; -[SCMapUnifiedActionMenuViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b956cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff2150 + 8))
  ;
  return;
}



/* Entry: 103b95708; end: 103b9572b;  */

void FUN_103b95708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b9572c; end: 103b9576b;  */

void FUN_103b9572c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5d2d0;
  func_0x000107c61520(&UNK_10dc5d2d0,&UNK_1106dd658);
  puRam0000000112ff2180 = puVar1;
  return;
}



/* Entry: 103b9576c; end: 103b95817;  */

void FUN_103b9576c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b95818; end: 103b9584f;  */

void FUN_103b95818(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103b95850; end: 103b9585f;  */

undefined1  [16] FUN_103b95850(void)

{
  return ZEXT816(0x1106dd6d0);
}



/* Entry: 103b95860; end: 103b9586f; -[_TtC22PlusAIStickersServices22PlusAIStickersServices serviceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2188));
  return;
}



/* Entry: 103b95870; end: 103b958bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95870(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2188) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b958bc; end: 103b95913; -[_TtC22PlusAIStickersServices22PlusAIStickersServices initWithServiceFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b958bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2188) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b95914; end: 103b95973; -[_TtC22PlusAIStickersServices22PlusAIStickersServices init] */

void FUN_103b95914(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusAIStickersServices.PlusAIStickersServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b95940);
  (*pcVar1)();
}



/* Entry: 103b95974; end: 103b95983; -[_TtC22PlusAIStickersServices22PlusAIStickersServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2188));
  return;
}



/* Entry: 103b95984; end: 103b95997; -[SCPlusAIStickersDataSourceItem cellType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b95984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff21b8);
}



/* Entry: 103b95998; end: 103b95a2f; -[SCPlusAIStickersDataSourceItem initWithCellType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff21b8) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b95a30; end: 103b95a33; -[SCPlusAIStickersDataSourceItem copyWithZone:] */

void FUN_103b95a30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b95a34; end: 103b95a4f; -[SCPlusAIStickersDataSourceItem description] */

void FUN_103b95a34(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b95a50; end: 103b95aeb; -[SCPlusAIStickersDataSourceItem init] */

void FUN_103b95a50(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PlusAIStickersServices/PlusAIStickersDataSourceItemWrapper.swift",0x40,2,0x23
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b95a98);
  (*pcVar1)();
}



/* Entry: 103b95aec; end: 103b95aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95aec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff21b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b95af0; end: 103b95b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95af0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035bab0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff21f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b95b58; end: 103b95ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95b58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff21f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b95ba4; end: 103b95c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b95ba4(void)

{
  undefined *puVar1;
  undefined *apuStack_48 [2];
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126aa280;
  func_0x000107c610f8();
  func_0x000107c49010();
  apuStack_48[0] = puVar1;
  func_0x00010008a7c8(&uStack_38,apuStack_48);
  func_0x000100083b20(apuStack_48);
  func_0x000107c61574(uStack_38);
  func_0x000107c615e8(apuStack_48[0]);
  return puVar1;
}



/* Entry: 103b95c34; end: 103b95d23; -[_TtC28SCMemoriesPickerV2ScopeProxy31SCMemoriesPickerV2ScopeServices buildWithUiContainer:config:actionHandling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aa280;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c49010(puVar1,param_2,param_3,param_4,param_5);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b95d24; end: 103b95d57;  */

void FUN_103b95d24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b95d58; end: 103b95d87; -[_TtC28SCMemoriesPickerV2ScopeProxy31SCMemoriesPickerV2ScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b95d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff21f0));
  return;
}



/* Entry: 103b95d88; end: 103b95e37; +[SCModularStickerCutoutAvailability isSupportedOnCurrentDevice] */

bool FUN_103b95d88(void)

{
  undefined *puVar1;
  long alStack_38 [3];
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4df8c(alStack_38);
  func_0x000107c61170(puVar1);
  return 0x10 < alStack_38[0];
}



/* Entry: 103b95e38; end: 103b95e73; -[SCModularStickerCutoutAvailability init] */

void FUN_103b95e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b95e74; end: 103b95ec7;  */

void FUN_103b95e74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b95ec8; end: 103b95edb;  */

bool FUN_103b95ec8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b95edc; end: 103b95fb3;  */

void FUN_103b95edc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b95fb4; end: 103b95fd3;  */

void FUN_103b95fb4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b95fd4; end: 103b96013;  */

void FUN_103b95fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5d580;
  func_0x000107c61520(&UNK_10dc5d580,&UNK_1106dd908);
  puRam0000000112ff2260 = puVar1;
  return;
}



/* Entry: 103b96014; end: 103b96023;  */

undefined1  [16] FUN_103b96014(void)

{
  return ZEXT816(0x1106dd908);
}



/* Entry: 103b96024; end: 103b96033; -[ModularStickerCutoutScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2268));
  return;
}



/* Entry: 103b96034; end: 103b96043; -[ModularStickerCutoutScope presentingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b96034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2270);
}



/* Entry: 103b96044; end: 103b9608b; -[ModularStickerCutoutScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96044(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2280;
  func_0x000107c61428(param_1 + _DAT_112ff2280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9608c; end: 103b960e3; -[ModularStickerCutoutScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9608c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2280;
  func_0x000107c61428(param_1 + _DAT_112ff2280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b960e4; end: 103b960ef; -[ModularStickerCutoutScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b960e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2288))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2288);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b960f0; end: 103b960fb; -[ModularStickerCutoutScope messageSenderId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b960f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2290))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2290);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b960fc; end: 103b96153;  */

void FUN_103b960fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b96154; end: 103b96197; -[ModularStickerCutoutScope showAddCommentButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b96154(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2298;
  func_0x000107c61428(param_1 + _DAT_112ff2298,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b96198; end: 103b961e7; -[ModularStickerCutoutScope setShowAddCommentButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96198(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2298;
  func_0x000107c61428(param_1 + _DAT_112ff2298,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}


