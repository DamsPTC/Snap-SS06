/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10372e284; end: 10372e2d7;  */

void FUN_10372e284(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372e2d8; end: 10372e2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372e2d8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f8e468) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372e2e4; end: 10372e337;  */

void FUN_10372e2e4(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372e338; end: 10372e343; -[UserTrackedDeclaredAgeLogger initWithUserTrackedLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372e338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f8e468) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10372e344; end: 10372e3a3;  */

void FUN_10372e344(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + *param_4) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10372e3a4; end: 10372e41f; -[UserTrackedDeclaredAgeLogger logDeclaredAgeEvent:] */

/* WARNING: Possible PIC construction at 0x00010372e408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010372e40c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372e3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f8e468);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10372e420; end: 10372e44b; -[UserTrackedDeclaredAgeLogger init] */

void FUN_10372e420(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeAPI.UserTrackedDeclaredAgeLogger",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10372e44c);
  (*pcVar1)();
}



/* Entry: 10372e44c; end: 10372e44f;  */

void FUN_10372e44c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10372e450; end: 10372e483;  */

void FUN_10372e450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10372e484; end: 10372e493; -[UserTrackedDeclaredAgeLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372e484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8e468));
  return;
}



/* Entry: 10372e494; end: 10372e4d3;  */

void FUN_10372e494(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7580);
  return;
}



/* Entry: 10372e4d4; end: 10372e4d7;  */

void FUN_10372e4d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10372e4d8; end: 10372e6ff;  */

undefined1  [16] FUN_10372e4d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar1 = 0x656c626967696c65;
  switch(param_1) {
  case 1:
    auVar4._8_8_ = 0xea0000000000656c;
    auVar4._0_8_ = 0x626967696c656e69;
    return auVar4;
  case 2:
    auVar9._8_8_ = 0xef676e6972616853;
    auVar9._0_8_ = 0x64656e696c636564;
    return auVar9;
  case 3:
    pcVar3 = "unsupportedOSVersion";
    break;
  case 4:
    auVar6._8_8_ = 0xec000000656c6261;
    auVar6._0_8_ = 0x6c69617641746f6e;
    return auVar6;
  case 5:
    auVar11._8_8_ = 0xee00747365757165;
    auVar11._0_8_ = 0x5264696c61766e69;
    return auVar11;
  case 6:
    auVar13._8_8_ = 0x800000010f161e10;
    auVar13._0_8_ = 0xd000000000000010;
    return auVar13;
  case 7:
    pcVar3 = "unrecognizedResponse";
    break;
  case 8:
    auVar15._8_8_ = 0x800000010f161dd0;
    auVar15._0_8_ = 0xd000000000000011;
    return auVar15;
  case 9:
    auVar8._8_8_ = 0xea0000000000726f;
    auVar8._0_8_ = 0x727245726568746f;
    return auVar8;
  case 10:
    auVar14._8_8_ = 0x800000010f161db0;
    auVar14._0_8_ = 0xd000000000000012;
    return auVar14;
  case 0xb:
    auVar5._8_8_ = 0xee00746e756f6363;
    auVar5._0_8_ = 0x4164696c61766e69;
    return auVar5;
  case 0xc:
    auVar7._8_8_ = 0xec000000726f7272;
    auVar7._0_8_ = 0x456b726f7774656e;
    return auVar7;
  default:
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    uVar1 = 0x286e776f6e6b6e75;
  case 0:
    auVar12._8_8_ = 0xe800000000000000;
    auVar12._0_8_ = uVar1;
    return auVar12;
  }
  auVar10._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  auVar10._0_8_ = 0xd000000000000014;
  return auVar10;
}



/* Entry: 10372e700; end: 10372e713;  */

bool FUN_10372e700(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10372e714; end: 10372e7eb;  */

void FUN_10372e714(void)

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



/* Entry: 10372e7ec; end: 10372e9b7;  */

void FUN_10372e7ec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10372e9b8; end: 10372e9c7; -[DeclaredAgeOutcome result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10372e9b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f8e4c0);
}



/* Entry: 10372e9c8; end: 10372ea73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372e9c8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8e4c0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8e4c8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8e4d0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f8e4d8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372ea74; end: 10372eae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372ea74(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f8e4c0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8e4c8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8e4d0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f8e4d8) = param_6;
  FUN_10372eb50();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372eae4; end: 10372eb3f; -[DeclaredAgeOutcome init] */

void FUN_10372eae4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeAPI.DeclaredAgeOutcome",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10372eb10);
  (*pcVar1)();
}



/* Entry: 10372eb40; end: 10372eb4f;  */

undefined1  [16] FUN_10372eb40(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xd) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xc < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10372eb50; end: 10372eb6f;  */

void FUN_10372eb50(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7700);
  return;
}



/* Entry: 10372eb70; end: 10372eb73;  */

void FUN_10372eb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8e4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc05bcc;
  func_0x000107c61520(&UNK_10dc05bcc,&UNK_11068a300);
  puRam0000000112f8e4e0 = puVar1;
  return;
}



/* Entry: 10372eb74; end: 10372ebb3;  */

void FUN_10372eb74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8e4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc05bcc;
  func_0x000107c61520(&UNK_10dc05bcc,&UNK_11068a300);
  puRam0000000112f8e4e0 = puVar1;
  return;
}



/* Entry: 10372ebb4; end: 10372ebd7;  */

undefined1  [16] FUN_10372ebb4(void)

{
  return ZEXT816(0x11068a300);
}



/* Entry: 10372ebd8; end: 10372ec83;  */

void FUN_10372ebd8(void)

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



/* Entry: 10372ec84; end: 10372ecab;  */

void FUN_10372ec84(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10372ecac; end: 10372eccb; -[DeclaredAgeVerificationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372ecac(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f8e510));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10372eccc; end: 10372ed13; -[DeclaredAgeVerificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372eccc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8e518;
  func_0x000107c61428(param_1 + _DAT_112f8e518,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10372ed14; end: 10372ed6b; -[DeclaredAgeVerificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372ed14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8e518;
  func_0x000107c61428(param_1 + _DAT_112f8e518,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10372ed6c; end: 10372ed7b; -[DeclaredAgeVerificationScope ageVerificationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10372ed6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f8e520);
}



/* Entry: 10372ed7c; end: 10372ef13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10372ed7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f8e518;
  func_0x000107c61614(unaff_x20 + _DAT_112f8e518,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8e510) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f8e520) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 10372ef14; end: 10372efc7; -[DeclaredAgeVerificationScope initWithUiContainer:delegate:ageVerificationContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372ef14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f8e518;
  func_0x000107c61614(param_1 + _DAT_112f8e518,0);
  *(undefined8 *)(param_1 + _DAT_112f8e510) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112f8e520) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10372efc8; end: 10372effb;  */

void FUN_10372efc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10372effc; end: 10372f057; -[DeclaredAgeVerificationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10372effc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8e510));
  param_1 = param_1 + _DAT_112f8e518;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10372f058; end: 10372f05b;  */

void FUN_10372f058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8e528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc05ce0;
  func_0x000107c61520(&UNK_10dc05ce0,&UNK_11068a408);
  puRam0000000112f8e528 = puVar1;
  return;
}



/* Entry: 10372f05c; end: 10372f09b;  */

void FUN_10372f05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8e528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc05ce0;
  func_0x000107c61520(&UNK_10dc05ce0,&UNK_11068a408);
  puRam0000000112f8e528 = puVar1;
  return;
}



/* Entry: 10372f09c; end: 10372f0ab;  */

undefined1  [16] FUN_10372f09c(void)

{
  return ZEXT816(0x11068a408);
}



/* Entry: 10372f0ac; end: 10372f107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372f0ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8e558) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e560) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372f108; end: 10372f153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372f108(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f8e558) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e560) = param_1;
  func_0x000100262bac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372f154; end: 10372f1af; -[ServerDrivenTOSCOFConfigProvider init] */

void FUN_10372f154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ServerDrivenTOSConfigProvider.ServerDrivenTOSCOFConfigProvider",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10372f180);
  (*pcVar1)();
}



/* Entry: 10372f1b0; end: 10372f1e7; -[ServerDrivenTOSCOFConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372f1b0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8e560));
  if (*(long *)(param_1 + _DAT_112f8e558) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10372f1e8; end: 10372f243;  */

void FUN_10372f1e8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100266934();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f8e598;
  plVar5 = (long *)&UNK_10dc05e28;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10372f244; end: 10372f30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10372f244(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  uVar1 = *(undefined8 *)(param_3 + _DAT_11307e6a8);
  func_0x000107c61174();
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  return unaff_x20;
}



/* Entry: 10372f310; end: 10372f44f;  */

/* WARNING: Possible PIC construction at 0x00010372f3e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010372f3e8) */

void FUN_10372f310(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efb5bf0);
    uVar4 = 0x3336353232383836;
    uVar6 = 0xef37323138333836;
    func_0x000107c5fadc(0x3336353232383836,0xef37323138333836);
    lVar5 = lVar2;
    func_0x000107c5c1dc(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    FUN_10372f450(lVar2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10372f450);
  (*pcVar1)();
}



/* Entry: 10372f450; end: 10372f71f;  */

void FUN_10372f450(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5fb10();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b7238;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126b7248;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c57d34();
    puStack_80 = puVar5;
    puStack_78 = puVar4;
    func_0x000107c57c1c(puVar4);
    puVar4 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10372f720);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126b7230;
    func_0x000107c610f8(PTR_PTR_1126b7230);
    func_0x000107c453e4();
    func_0x000107c56358();
    func_0x000107c57ed0(puVar5);
    func_0x000107c57ecc(puVar5);
    puVar6 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    uVar7 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f161fc0);
    func_0x000107c5597c(puVar6);
    func_0x000107c61170(uVar7);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5596c(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c55958(puVar6);
    func_0x000107c57ec0(puVar6);
    func_0x000107c55968(puVar6);
    func_0x000107c54734(puVar6);
    puVar8 = puVar6;
    func_0x000107c55960(puVar6);
    uStack_70 = param_1;
    uStack_68 = param_2;
    func_0x000107c5fb04(lVar12);
    func_0x000100e8b654();
    uVar10 = 0;
    lVar9 = lVar12;
    func_0x000107c60214(lVar12,0,PTR___sSSN_11034da80,puVar8);
    (**(code **)(lVar11 + 8))(lVar12,lVar2);
    if (uVar10 >> 0x3c < 0xf) {
      func_0x00010006c00c(lVar9,uVar10);
      lVar2 = lVar9;
      func_0x000107c5ee20(lVar9,uVar10);
      func_0x0001000b44c0(lVar9,uVar10);
    }
    else {
      lVar2 = 0;
    }
    func_0x000107c5c2c0(lVar3);
    func_0x000107c61170(lVar2);
    func_0x0001000b44c0(lVar9,uVar10);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puStack_78);
    func_0x000107c61170(puStack_80);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 10372f720; end: 10372f753;  */

void FUN_10372f720(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10372f754; end: 10372f773;  */

void FUN_10372f754(void)

{
  FUN_10372f310();
  return;
}



/* Entry: 10372f774; end: 10372f77b;  */

undefined8 FUN_10372f774(void)

{
  return 0;
}



/* Entry: 10372f77c; end: 10372f79b;  */

void FUN_10372f77c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8e728);
  return;
}



/* Entry: 10372f79c; end: 10372f81b;  */

void FUN_10372f79c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068a5a0;
  func_0x000107c613fc(&UNK_11068a5a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10372f93c,puVar1);
  return;
}



/* Entry: 10372f81c; end: 10372f93b;  */

void FUN_10372f81c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068a5e8;
  func_0x000107c613fc(&UNK_11068a5e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_10372fa40;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068a600;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000019,0x800000010f161fc0);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10372f93c; end: 10372f953;  */

void FUN_10372f93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068a5e8;
  func_0x000107c613fc(&UNK_11068a5e8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_10372fa40;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068a600;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd000000000000019,0x800000010f161fc0);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10372f954; end: 10372fa13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372f954(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4b028();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar3 = 0;
  FUN_10372fafc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8e798) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112f8e7a0) = uVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372fa14; end: 10372fa3f;  */

void FUN_10372fa14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10372fa40; end: 10372fa63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372fa40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4b028();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar3 = 0;
  FUN_10372fafc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8e798) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112f8e7a0) = uVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10372fa64; end: 10372fac3; -[_TtC32BitmojiLensPrefetchingEntryPoint34BitmojiLensPrefetchingJobProcessor init] */

void FUN_10372fa64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiLensPrefetchingEntryPoint.BitmojiLensPrefetchingJobProcessor",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10372fa90);
  (*pcVar1)();
}



/* Entry: 10372fac4; end: 10372fafb; -[_TtC32BitmojiLensPrefetchingEntryPoint34BitmojiLensPrefetchingJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010372fae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010372fae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10372fac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8e798));
  return;
}



/* Entry: 10372fafc; end: 10372fb1b;  */

void FUN_10372fafc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7990);
  return;
}



/* Entry: 10372fb1c; end: 10372fd53;  */

void FUN_10372fb1c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  if ((param_1 == 0) || (param_2 != 0)) {
    (*param_5)(1,0);
  }
  else {
    puVar2 = &UNK_11068a6b0;
    func_0x000107c613fc(&UNK_11068a6b0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_7;
    *(code **)(puVar2 + 0x18) = param_5;
    *(undefined8 *)(puVar2 + 0x20) = param_6;
    puVar3 = &UNK_11068a6d8;
    func_0x000107c613fc(&UNK_11068a6d8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1037302b0;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1037302bc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100fe2610;
    puStack_88 = &UNK_11068a6f0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_7);
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar3);
    pcStack_80 = FUN_10372febc;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_11068a718;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    puVar3 = &UNK_11068a750;
    func_0x000107c613fc(&UNK_11068a750,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(code **)(puVar3 + 0x20) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = param_6;
    puVar6 = &UNK_11068a778;
    func_0x000107c613fc(&UNK_11068a778,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1037302dc;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcStack_80 = (code *)0x103730304;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100fe2654;
    puStack_88 = &UNK_11068a790;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000107c6157c(param_6);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar6);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10372fd54; end: 10372febb;  */

void FUN_10372fd54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = param_1;
  func_0x000100fe4188();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(long *)(lVar1 + 0x20) = param_1;
  uVar2 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c61174();
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c43160(param_3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_11068a7c8;
  func_0x000107c613fc(&UNK_11068a7c8,0x28,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  uStack_50 = 0x103730324;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101286f34;
  puStack_58 = &UNK_11068a7e0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar4);
  func_0x000107c5dc68(param_3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10372febc; end: 10372febf;  */

void FUN_10372febc(void)

{
  return;
}



/* Entry: 10372fec0; end: 10372ffbf; -[_TtC32BitmojiLensPrefetchingEntryPoint34BitmojiLensPrefetchingJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10372fec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  lVar1 = param_4;
  FUN_10372ffc0(param_4,param_2,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10372ffc0; end: 10373027b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10372ffc0(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long extraout_x8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_11068a638;
  func_0x000107c613fc(&UNK_11068a638,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  func_0x000107c60bc4(param_4);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000100de78a0(param_1,param_2);
    func_0x000107c5fb04(lVar1);
    uVar3 = param_1;
    uVar10 = param_2;
    func_0x000107c5faf0(param_1,param_2,lVar1);
    if (uVar10 != 0) {
      lVar1 = *(long *)(param_3 + _DAT_112f8e798);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 == 0) {
LAB_103730228:
        func_0x000107c6142c(uVar10);
        (**(code **)(param_4 + 0x10))(param_4,2,0);
      }
      else {
        lVar5 = lVar1;
        func_0x000107c41574();
        func_0x000107c61180();
        lVar4 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar4 == 0) {
LAB_103730220:
          func_0x000107c615e8(lVar1);
          goto LAB_103730228;
        }
        lVar5 = *(long *)(param_3 + _DAT_112f8e7a0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar1);
          lVar1 = lVar4;
          goto LAB_103730220;
        }
        uVar6 = uVar3;
        func_0x000107c5fadc(uVar3,uVar10);
        lVar7 = lVar4;
        func_0x000107c4b288(lVar4);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        puVar8 = &UNK_11068a660;
        func_0x000107c613fc(&UNK_11068a660,0x38,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar3;
        *(ulong *)(puVar8 + 0x18) = uVar10;
        *(code **)(puVar8 + 0x20) = FUN_10373027c;
        *(undefined **)(puVar8 + 0x28) = puVar2;
        *(long *)(puVar8 + 0x30) = lVar5;
        uStack_70 = 0x103730284;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1016c1d3c;
        puStack_78 = &UNK_11068a678;
        ppuVar9 = &puStack_90;
        puStack_68 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar8 = puStack_68;
        func_0x000107c6157c(puVar2);
        func_0x000107c615f0(lVar5);
        func_0x000107c61574(puVar8);
        func_0x000107c5dc68(lVar7);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lVar7);
      }
      func_0x0001000b44c0(param_1,param_2);
      goto LAB_103730250;
    }
    func_0x0001000b44c0(param_1,param_2);
  }
  (**(code **)(param_4 + 0x10))(param_4,2,0);
LAB_103730250:
  func_0x000107c61574(puVar2);
  return 0;
}



/* Entry: 10373027c; end: 1037302bb;  */

void FUN_10373027c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1037302bc; end: 10373035b;  */

void FUN_1037302bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10373035c; end: 10373037b;  */

void FUN_10373035c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10373037c; end: 1037305ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10373037c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  uVar2 = *(undefined8 *)(param_3 + _DAT_11307e6a8);
  func_0x000107c61174();
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 103730600; end: 103730843;  */

void FUN_103730600(undefined4 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b7238;
    func_0x000107c610f8(PTR_PTR_1126b7238);
    func_0x000107c453e4();
    func_0x000107c57f50();
    puVar4 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) goto LAB_103730840;
    func_0x000107c3d93c();
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126b7230;
    func_0x000107c610f8(PTR_PTR_1126b7230);
    func_0x000107c453e4();
    func_0x000107c56358();
    func_0x000107c57ed0(puVar5);
    func_0x000107c57ecc(puVar5);
    puVar6 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    uVar7 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f162030);
    func_0x000107c5597c(puVar6);
    func_0x000107c61170(uVar7);
    puVar8 = PTR___ss5Int32VN_11034ee20;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    uStack_6c = param_1;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar10);
    func_0x000107c5596c(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c55958(puVar6);
    func_0x000107c57ec0(puVar6);
    func_0x000107c55968(puVar6);
    func_0x000107c54734(puVar6);
    func_0x000107c55960(puVar6);
    puVar9 = &uStack_6c;
    uStack_6c = param_1;
    func_0x000100e36f4c(puVar9,&lStack_68);
    func_0x000107c5ee20();
    func_0x000107c5c2c0(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_103730840:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103730844);
  (*pcVar1)();
}



/* Entry: 103730844; end: 10373089b;  */

void FUN_103730844(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103730600(0x12);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10373089c; end: 1037308bf;  */

void FUN_10373089c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103730600(0x12);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1037308c0; end: 1037308f3;  */

void FUN_1037308c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037308f4; end: 103730913;  */

void FUN_1037308f4(void)

{
  func_0x000103730488();
  return;
}



/* Entry: 103730914; end: 10373091b;  */

undefined8 FUN_103730914(void)

{
  return 0;
}



/* Entry: 10373091c; end: 10373093b;  */

void FUN_10373091c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8e810);
  return;
}



/* Entry: 10373093c; end: 1037309bb;  */

void FUN_10373093c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068a908;
  func_0x000107c613fc(&UNK_11068a908,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103730b40,puVar1);
  return;
}



/* Entry: 1037309bc; end: 103730b3f;  */

void FUN_1037309bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar4 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c615e8();
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar4 = &UNK_11068a950;
    func_0x000107c613fc(&UNK_11068a950,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    pcStack_60 = FUN_103730bf8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101443eec;
    puStack_68 = &UNK_11068a968;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(puVar1);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x0001000a0a8c(0);
    puVar4 = puVar2;
    func_0x000100a0dc54(puVar2,0xd00000000000001e,0x800000010f162030);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 103730b40; end: 103730b57;  */

void FUN_103730b40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_80;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10));
  puVar2 = puStack_80;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar5 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c615e8();
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar5 = &UNK_11068a950;
    func_0x000107c613fc(&UNK_11068a950,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    pcStack_60 = FUN_103730bf8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101443eec;
    puStack_68 = &UNK_11068a968;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c61174(puVar2);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x0001000a0a8c(0);
    puVar5 = puVar3;
    func_0x000100a0dc54(puVar3,0xd00000000000001e,0x800000010f162030);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 103730b58; end: 103730bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103730b58(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c3e9cc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar3 = 0;
  FUN_103730cb4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8e880) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f8e888) = uVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_48,puVar1);
  return;
}



/* Entry: 103730bf8; end: 103730c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103730bf8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar3 = uStack_38;
  func_0x000107c3e9cc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar4 = 0;
  FUN_103730cb4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f8e880) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f8e888) = uVar3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_48,puVar2);
  return;
}



/* Entry: 103730c1c; end: 103730c7b; -[_TtC39SCBitmojiAvatarGLBPrefetchingEntryPoint39BitmojiAvatarGLBPrefetchingJobProcessor init] */

void FUN_103730c1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAvatarGLBPrefetchingEntryPoint.BitmojiAvatarGLBPrefetchingJobProcessor"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103730c48);
  (*pcVar1)();
}



/* Entry: 103730c7c; end: 103730cb3; -[_TtC39SCBitmojiAvatarGLBPrefetchingEntryPoint39BitmojiAvatarGLBPrefetchingJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103730c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103730c9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103730c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8e880));
  return;
}



/* Entry: 103730cb4; end: 103730cd3;  */

void FUN_103730cb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7a58);
  return;
}



/* Entry: 103730cd4; end: 103730efb;  */

void FUN_103730cd4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_11068aa68;
  func_0x000107c613fc(&UNK_11068aa68,0x28,7);
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  puVar4 = &UNK_11068aa90;
  func_0x000107c613fc(&UNK_11068aa90,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103731504;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10373152c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_11068aaa8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11068aae0;
  func_0x000107c613fc(&UNK_11068aae0,0x28,7);
  *(undefined4 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  puVar7 = &UNK_11068ab08;
  func_0x000107c613fc(&UNK_11068ab08,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10373154c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10373158c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11068ab20;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x7a,0x53,0x24,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103730ef8);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x7a,0x5a,0x18,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103730efc);
  (*pcVar2)();
}



/* Entry: 103730efc; end: 103730ffb; -[_TtC39SCBitmojiAvatarGLBPrefetchingEntryPoint39BitmojiAvatarGLBPrefetchingJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103730efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  lVar1 = param_4;
  FUN_103731184(param_4,param_2,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103730ffc; end: 103731183;  */

ulong FUN_103730ffc(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  
  if (0xe < param_2 >> 0x3c) {
    return 0x100000000;
  }
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  iVar3 = (int)param_1;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 != 0) {
      iVar5 = (int)(param_1 >> 0x20);
      if (SBORROW4(iVar5,iVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103731160);
        (*pcVar2)();
      }
      uVar8 = (ulong)(iVar5 - iVar3);
      goto LAB_103731088;
    }
    uVar8 = param_2 >> 0x30 & 0xff;
  }
  else {
    if (uVar6 != 2) goto LAB_103731068;
    uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103731068);
      (*pcVar2)();
    }
LAB_103731088:
    func_0x00010006c00c(param_1,param_2);
  }
  if (uVar8 != 4) {
LAB_103731068:
    func_0x0001000b44c0(param_1,param_2);
    return 0x100000000;
  }
  if (uVar6 == 2) {
    lVar9 = *(long *)(param_1 + 0x10);
    uVar8 = param_1;
    func_0x000107c5ec30();
    if (uVar8 == 0) {
      func_0x000107c5ec38();
LAB_103731174:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103731178);
      (*pcVar2)();
    }
    uVar4 = uVar8;
    func_0x000107c5ec3c();
    if (SBORROW8(lVar9,uVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103731168);
      (*pcVar2)();
    }
    puVar7 = (uint *)((lVar9 - uVar4) + uVar8);
    func_0x000107c5ec38();
    if (puVar7 == (uint *)0x0) goto LAB_103731174;
  }
  else {
    uVar8 = param_1;
    if (uVar6 != 1) goto LAB_10373113c;
    lVar9 = (long)iVar3;
    if ((long)param_1 >> 0x20 < lVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103731164);
      (*pcVar2)();
    }
    func_0x000107c5ec30();
    if (uVar8 == 0) {
      func_0x000107c5ec38();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103731184);
      (*pcVar2)();
    }
    uVar4 = uVar8;
    func_0x000107c5ec3c();
    if (SBORROW8(lVar9,uVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10373116c);
      (*pcVar2)();
    }
    puVar7 = (uint *)((lVar9 - uVar4) + uVar8);
    func_0x000107c5ec38();
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037310f4);
      (*pcVar2)();
    }
  }
  uVar8 = (ulong)*puVar7;
LAB_10373113c:
  func_0x0001000b44c0(param_1,param_2);
  return uVar8 & 0xffffffff;
}



/* Entry: 103731184; end: 1037314cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103731184(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  ppuVar12 = &puStack_90;
  puVar2 = &UNK_11068a9a0;
  uVar13 = 0x18;
  func_0x000107c613fc(&UNK_11068a9a0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  uVar15 = *(ulong *)(param_3 + _DAT_112f8e880);
  func_0x000107c60bc4(param_4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar15 != 0) {
    lVar3 = *(long *)(param_3 + _DAT_112f8e888);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = uVar15;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5faec();
        uVar5 = uVar5 & 0xffffffffffff;
        if ((uVar13 & 0x2000000000000000) != 0) {
          uVar5 = uVar13 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          FUN_103730ffc(param_1,param_2);
          func_0x000107c6142c(uVar13);
          uVar14 = 3;
          if ((param_1 & 0xff00000000) != 0x100000000) {
            uVar14 = (undefined4)param_1;
          }
          lVar6 = lVar3;
          func_0x000107c430c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
          func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
          func_0x000107c4c188();
          func_0x000107c61180();
          lVar8 = lVar6;
          func_0x000107c4da80();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          puVar7 = &UNK_11068a9c8;
          func_0x000107c613fc(&UNK_11068a9c8,0x28,7);
          *(undefined4 *)(puVar7 + 0x10) = uVar14;
          *(code **)(puVar7 + 0x18) = FUN_1037314cc;
          *(undefined **)(puVar7 + 0x20) = puVar2;
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0x1037314d4;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100f152a0;
          puStack_78 = &UNK_11068a9e0;
          puStack_68 = puVar7;
          func_0x000107c60bc4(&puStack_90);
          puVar7 = puStack_68;
          func_0x000107c6157c(puVar2);
          func_0x000107c61574(puVar7);
          lVar10 = lVar8;
          func_0x000107c5c320();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(lVar8);
          puVar7 = &UNK_11068aa18;
          func_0x000107c613fc(&UNK_11068aa18,0x18,7);
          *(long *)(puVar7 + 0x10) = lVar10;
          puVar11 = PTR_PTR_1126afd78;
          func_0x000107c610f8(PTR_PTR_1126afd78);
          uStack_70 = 0x1037314fc;
          puStack_90 = puVar1;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1000f6b44;
          puStack_78 = &UNK_11068aa30;
          puStack_68 = puVar7;
          func_0x000107c60bc4(&puStack_90);
          puVar7 = puStack_68;
          func_0x000107c61174(lVar10);
          func_0x000107c61574(puVar7);
          func_0x000107c45b74(puVar11);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c615e8(uVar15);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar10);
          func_0x000107c61574(puVar2);
          return puVar11;
        }
        func_0x000107c6142c(uVar13);
        func_0x000107c61170(uVar4);
      }
      (**(code **)(param_4 + 0x10))(param_4,0,0);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(uVar15);
      func_0x000107c615e8(lVar3);
      return (undefined *)0x0;
    }
    func_0x000107c615e8(uVar15);
  }
  (**(code **)(param_4 + 0x10))(param_4,2,0);
  func_0x000107c61574(puVar2);
  return (undefined *)0x0;
}



/* Entry: 1037314cc; end: 103731503;  */

void FUN_1037314cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103731504; end: 103731573;  */

void FUN_103731504(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))(0,0);
  return;
}



/* Entry: 103731574; end: 10373158f;  */

void FUN_103731574(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103731590; end: 1037315df;  */

void FUN_103731590(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002d;
  func_0x000100bd65fc(0xd00000000000002d,0x800000010f1620d0,0xe10);
  uRam000000011380bb10 = uVar1;
  return;
}



/* Entry: 1037315e0; end: 1037315fb; +[SCContentSyncCacheJobConfigKeys backgroundRepeatIntervalSec] */

void FUN_1037315e0(void)

{
  if (lRam0000000112f8e8e8 != -1) {
    func_0x000107c61568(0x112f8e8e8,FUN_103731590);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb10);
  return;
}



/* Entry: 1037315fc; end: 10373164b;  */

void FUN_1037315fc(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002d;
  func_0x000100bd65fc(0xd00000000000002d,0x800000010f1620a0,600);
  uRam000000011380bb08 = uVar1;
  return;
}



/* Entry: 10373164c; end: 103731667; +[SCContentSyncCacheJobConfigKeys foregroundRepeatIntervalSec] */

void FUN_10373164c(void)

{
  if (lRam0000000112f8e8e0 != -1) {
    func_0x000107c61568(0x112f8e8e0,FUN_1037315fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb08);
  return;
}



/* Entry: 103731668; end: 1037316ab;  */

void FUN_103731668(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 1037316ac; end: 1037316e7; -[SCContentSyncCacheJobConfigKeys init] */

void FUN_1037316ac(undefined8 param_1)

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



/* Entry: 1037316e8; end: 10373171b;  */

void FUN_1037316e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10373171c; end: 10373171f; -[SCContentSyncCacheJobConfigKeys .cxx_destruct] */

void FUN_10373171c(void)

{
  return;
}



/* Entry: 103731720; end: 10373173f;  */

void FUN_103731720(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7b20);
  return;
}



/* Entry: 103731740; end: 1037319c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103731740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [16];
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112f8e8f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e8f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e900) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e908) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f8e910) = param_4;
  uVar4 = 0;
  FUN_1037332bc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_a8 = uVar4;
  func_0x000107c61174();
  uStack_98 = param_1;
  func_0x000107c61174();
  uStack_a0 = param_2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar5 = param_4;
  func_0x000107c5f81c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = uVar4;
  func_0x00010002964c();
  func_0x000107c60264(lVar9,&puStack_68,uVar4,uVar6,lVar2,uVar5);
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5ffec(0xd00000000000001c,0x800000010dc06000,lVar3,lVar9,puVar7,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8e918) = uVar4;
  puVar7 = auStack_78;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar7;
}


