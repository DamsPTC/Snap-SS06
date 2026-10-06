/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e006d4; end: 103e006e3; -[SCAdOperationEvent mediaLoadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e006d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113011068);
}



/* Entry: 103e006e4; end: 103e006f3; -[SCAdOperationEvent mediaWaitTimeInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e006e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011070);
}



/* Entry: 103e006f4; end: 103e00703; -[SCAdOperationEvent mediaTotalStallCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e006f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011078);
}



/* Entry: 103e00704; end: 103e00713; -[SCAdOperationEvent mediaStallOnStartDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e00704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011080);
}



/* Entry: 103e00714; end: 103e00723; -[SCAdOperationEvent mediaFirstStallMediaTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e00714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011088);
}



/* Entry: 103e00724; end: 103e00733; -[SCAdOperationEvent mediaTotalStallDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e00724(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011090);
}



/* Entry: 103e00734; end: 103e00743; -[SCAdOperationEvent mediaFirstStallDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e00734(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011098);
}



/* Entry: 103e00744; end: 103e00753; -[SCAdOperationEvent adResponseStartDeserializeTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e00744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110a0);
}



/* Entry: 103e00754; end: 103e0075f; -[SCAdOperationEvent requestURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e00754(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130110a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130110a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e00760; end: 103e007b7;  */

void FUN_103e00760(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e007b8; end: 103e007c7; -[SCAdOperationEvent requestType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e007b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110b0);
}



/* Entry: 103e007c8; end: 103e007d7; -[SCAdOperationEvent requestSubmittedTimeStampInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e007c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110b8);
}



/* Entry: 103e007d8; end: 103e007e7; -[SCAdOperationEvent requestResolvedTimeStampInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e007d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110c0);
}



/* Entry: 103e007e8; end: 103e007f7; -[SCAdOperationEvent requestLatencyInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e007e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110c8);
}



/* Entry: 103e007f8; end: 103e00807; -[SCAdOperationEvent requestStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e007f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130110d0);
}



/* Entry: 103e00808; end: 103e00817; -[SCAdOperationEvent requestTargetingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e00808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130110d8));
  return;
}



/* Entry: 103e00818; end: 103e00ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e00818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011050);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113011058) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113011060) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113011068) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113011070) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011078) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113011080) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113011088) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113011090) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113011098) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_1130110a0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130110a8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_1130110b0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_1130110b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130110c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130110c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130110d0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_1130110d8) = param_20;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e00ba4; end: 103e00cbf; -[SCAdOperationEvent initWithAdIdentifier:eventType:mediaLoadedOnEntry:mediaLoadedOnExit:mediaWaitTimeInSec:mediaTotalStallCount:mediaStallOnStartDurationMillis:mediaFirstStallMediaTimeMillis:mediaTotalStallDurationMillis:mediaFirstStallDurationMillis:adResponseStartDeserializeTimestamp:requestURL:requestType:requestSubmittedTimeStampInSec:requestResolvedTimeStampInSec:requestLatencyInSec:requestStatusCode:requestTargetingParams:] */

void FUN_103e00ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 uVar1;
  
  if (param_8 == 0) {
    param_8 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
    uVar1 = param_7;
  }
  if (param_17 == 0) {
    param_7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_20);
  func_0x000103e009e4(param_1,param_2,param_3,param_4,param_5,param_8,uVar1,param_9,param_10,
                      param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_7,
                      param_18,param_19,param_20);
  return;
}



/* Entry: 103e00cc0; end: 103e00f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e00cc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_4a0 [352];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [352];
  undefined1 auStack_1b0 [352];
  
  _swift_getObjectType();
  uStack_318 = param_1[1];
  uStack_320 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011050);
  puVar1[1] = uStack_318;
  *puVar1 = uStack_320;
  *(undefined8 *)(unaff_x20 + _DAT_113011058) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_113011060) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(unaff_x20 + _DAT_113011068) = *(undefined1 *)((long)param_1 + 0x19);
  *(undefined8 *)(unaff_x20 + _DAT_113011070) = param_1[4];
  uVar4 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113011078) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113011080) = uVar4;
  uVar4 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113011088) = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113011090) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113011098) = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_1130110a0) = param_1[10];
  uVar4 = param_1[0xb];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130110a8);
  puVar1[1] = param_1[0xc];
  *puVar1 = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_1130110b0) = param_1[0xd];
  uVar4 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_1130110b8) = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_1130110c0) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_1130110c8) = param_1[0x10];
  uStack_328 = param_1[0xc];
  uStack_330 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_1130110d0) = param_1[0x11];
  _memcpy(auStack_1b0,param_1 + 0x12,0x160);
  iVar2 = (int)auStack_1b0;
  func_0x000101542f6c();
  if (iVar2 == 1) {
    FUN_103e01284(&uStack_320,auStack_310,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e01284(&uStack_330,auStack_310,0x112d35ff8,&UNK_10d900cd0);
    func_0x000102d33518(param_1);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_310,auStack_1b0,0x160);
    func_0x000104821150(0);
    _objc_allocWithZone();
    FUN_103e01284(&uStack_320,auStack_4a0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e01284(&uStack_330,auStack_4a0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e01284(auStack_1b0,auStack_4a0,0x112db3a28,&UNK_10d95ddb0);
    puVar3 = auStack_310;
    func_0x00010481e13c();
    func_0x000102d33518(param_1);
  }
  *(undefined1 **)(unaff_x20 + _DAT_1130110d8) = puVar3;
  _objc_msgSendSuper2(&stack0xfffffffffffffcc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e00f2c; end: 103e00f2f; -[SCAdOperationEvent copyWithZone:] */

void FUN_103e00f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e00f30; end: 103e00f6f; -[SCAdOperationEvent description] */

void FUN_103e00f30(void)

{
  undefined1 auStack_210 [496];
  
  _objc_retain();
  FUN_103e0103c(auStack_210);
  func_0x000102d33518(auStack_210);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e00f70; end: 103e00feb; -[SCAdOperationEvent init] */

void FUN_103e00f70(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdOperationEventWrapper.swift",0x3a,2,0x6a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e00fb8);
  (*pcVar1)();
}



/* Entry: 103e00fec; end: 103e0103b; -[SCAdOperationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e00fec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011050 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130110a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130110d8));
  return;
}



/* Entry: 103e0103c; end: 103e01283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0103c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_ac0 [496];
  undefined1 auStack_8d0 [496];
  undefined1 auStack_6e0 [496];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined1 uStack_4d7;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [352];
  undefined1 auStack_300 [352];
  undefined1 auStack_1a0 [352];
  
  func_0x000102d123c4(auStack_1a0);
  _memcpy(auStack_460,auStack_1a0,0x160);
  puVar1 = (undefined8 *)(param_2 + _DAT_113011050);
  uVar3 = puVar1[1];
  uStack_4e8 = puVar1[1];
  uStack_4f0 = *puVar1;
  uStack_4e0 = *(undefined8 *)(param_2 + _DAT_113011058);
  uStack_4d8 = *(undefined1 *)(param_2 + _DAT_113011060);
  uStack_4d7 = *(undefined1 *)(param_2 + _DAT_113011068);
  uStack_4d0 = *(undefined8 *)(param_2 + _DAT_113011070);
  uStack_4c8 = *(undefined8 *)(param_2 + _DAT_113011078);
  uStack_4c0 = *(undefined8 *)(param_2 + _DAT_113011080);
  uStack_4b8 = *(undefined8 *)(param_2 + _DAT_113011088);
  uStack_4b0 = *(undefined8 *)(param_2 + _DAT_113011090);
  uStack_4a8 = *(undefined8 *)(param_2 + _DAT_113011098);
  uStack_4a0 = *(undefined8 *)(param_2 + _DAT_1130110a0);
  puVar1 = (undefined8 *)(param_2 + _DAT_1130110a8);
  uStack_490 = puVar1[1];
  uStack_498 = *puVar1;
  uStack_488 = *(undefined8 *)(param_2 + _DAT_1130110b0);
  uStack_480 = *(undefined8 *)(param_2 + _DAT_1130110b8);
  uStack_478 = *(undefined8 *)(param_2 + _DAT_1130110c0);
  uStack_470 = *(undefined8 *)(param_2 + _DAT_1130110c8);
  uStack_468 = *(undefined8 *)(param_2 + _DAT_1130110d0);
  lVar4 = *(long *)(param_2 + _DAT_1130110d8);
  if (lVar4 == 0) {
    _swift_bridgeObjectRetain(puVar1[1]);
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(param_2);
    puVar2 = auStack_1a0;
  }
  else {
    _swift_bridgeObjectRetain(puVar1[1]);
    _objc_retain(lVar4);
    _swift_bridgeObjectRetain(uVar3);
    func_0x00010481c368(auStack_6e0,lVar4);
    _objc_release(param_2);
    func_0x000102d123f8(auStack_6e0);
    puVar2 = auStack_6e0;
  }
  _memcpy(auStack_300,puVar2,0x160);
  FUN_103e012ec(auStack_460);
  _memcpy(auStack_460,auStack_300,0x160);
  _memcpy(auStack_8d0,&uStack_4f0,0x1f0);
  _memcpy(auStack_6e0,&uStack_4f0,0x1f0);
  func_0x000102d334dc(auStack_8d0,auStack_ac0);
  func_0x000102d33518(auStack_6e0);
  _memcpy(param_1,auStack_8d0,0x1f0);
  return;
}



/* Entry: 103e01284; end: 103e012cb;  */

undefined8 FUN_103e01284(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103e012cc; end: 103e012eb;  */

void FUN_103e012cc(void)

{
  _objc_opt_self(&PTR_PTR_11294e0a8);
  return;
}



/* Entry: 103e012ec; end: 103e01407;  */

undefined8 FUN_103e012ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db3a28;
  func_0x0001000285a8(0x112db3a28,&UNK_10d95ddb0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103e01408; end: 103e01427;  */

void FUN_103e01408(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103e01428; end: 103e01c2f;  */

/* WARNING: Removing unreachable block (ram,0x000103e16218) */
/* WARNING: Removing unreachable block (ram,0x000103e1621c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_103e01428(ulong ****param_1,ulong ****param_2,char *param_3,ulong *****param_4,code *param_5,
             ulong *****param_6,undefined8 param_7,char *param_8,undefined8 param_9,
             ulong ****param_10)

{
  char *pcVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  uint uVar10;
  bool in_ZR;
  ulong ***pppuVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  undefined *puVar17;
  ulong *****pppppuVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong *****pppppuVar22;
  long lVar23;
  ulong *****pppppuVar24;
  ulong ***pppuVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  ulong ****ppppuVar29;
  ulong ***in_x12;
  ulong *****unaff_x20;
  ulong *****unaff_x22;
  ulong *****pppppuVar30;
  ulong *****unaff_x23;
  undefined8 uVar31;
  undefined **unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  ulong ****unaff_x28;
  undefined8 unaff_x30;
  undefined1 in_register_00005028;
  ulong ****ppppuVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ulong ****ppppuStack_e0;
  ulong ****in_stack_ffffffffffffff28;
  ulong ****ppppuStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong ****in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong ****ppppuStack_70;
  ulong ***apppuStack_60 [2];
  ulong ***apppuStack_50 [2];
  ulong ****appppuStack_40 [2];
  
  uVar7 = uStack_8f;
  uVar6 = uStack_90;
  uVar5 = uStack_bf;
  uVar4 = uStack_c0;
  ppuVar28 = (undefined **)((ulong)param_5 & 0xff);
  pppppuVar16 = &ppppuStack_e0;
  pppppuVar13 = &ppppuStack_e0;
  pppppuVar14 = &ppppuStack_e0;
  pppppuVar15 = &ppppuStack_e0;
  uVar10 = 0;
  pppppuVar18 = &ppppuStack_e0;
  pppppuVar22 = &ppppuStack_e0;
  pppppuVar24 = &ppppuStack_e0;
  uVar2 = *(ushort *)(&UNK_10dc98600 + (long)ppuVar28 * 2);
  uStack_c0 = SUB81(param_4,0);
  uStack_bf = (undefined7)((ulong)param_4 >> 8);
  uStack_90 = SUB81(&stack0xfffffffffffffff0,0);
  uStack_8f = (undefined7)((ulong)&stack0xfffffffffffffff0 >> 8);
  uStack_88 = (undefined1)unaff_x30;
  uStack_87 = (undefined7)((ulong)unaff_x30 >> 8);
  pppppuVar12 = (ulong *****)param_3;
  pppppuVar30 = param_4;
  uVar8 = in_register_00005028;
  switch(ppuVar28) {
  default:
    pppppuVar12 = unaff_x20;
  case (undefined **)0x38:
  case (undefined **)0x3f:
  case (undefined **)0x5b:
  case (undefined **)0x7b:
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    ppuVar28 = (undefined **)&DAT_113011000;
    uVar4 = uStack_c0;
    uVar5 = uStack_bf;
    uVar6 = uStack_90;
    uVar7 = uStack_8f;
    goto code_r0x000103e0146c;
  case (undefined **)0x1:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\x01';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pppppuVar16 = &ppppuStack_d0;
    break;
  case (undefined **)0x2:
    pppppuVar12 = unaff_x20;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar12 + (long)_DAT_113011108) = '\x02';
    pcVar1 = (char *)((long)pppppuVar12 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011120);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    uVar6 = uStack_90;
    uVar7 = uStack_8f;
  case (undefined **)0x33:
  case (undefined **)0x47:
  case (undefined **)0x63:
    uStack_8f = uVar7;
    uStack_90 = uVar6;
    uStack_c0 = SUB81(pppppuVar12,0);
    uStack_bf = (undefined7)((ulong)pppppuVar12 >> 8);
    pppppuVar16 = (ulong *****)&uStack_c0;
    break;
  case (undefined **)0x3:
    pppppuVar12 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    ppuVar28 = (undefined **)_DAT_113011108;
    uVar4 = uStack_c0;
    uVar5 = uStack_bf;
    uVar6 = uStack_90;
    uVar7 = uStack_8f;
  case (undefined **)0x51:
    uStack_8f = uVar7;
    uStack_90 = uVar6;
    uStack_bf = uVar5;
    uStack_c0 = uVar4;
    *(char *)((long)pppppuVar12 + (long)ppuVar28) = '\x03';
    ppuVar28 = (undefined **)_DAT_113011110;
    uVar4 = uStack_c0;
    uVar5 = uStack_bf;
    uVar6 = uStack_90;
    uVar7 = uStack_8f;
    goto code_r0x000103e01754;
  case (undefined **)0x4:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\x04';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pppppuVar16 = (ulong *****)&stack0xffffffffffffff60;
    break;
  case (undefined **)0x5:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\x05';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    uStack_90 = SUB81(pppppuVar16,0);
    uStack_8f = (undefined7)((ulong)pppppuVar16 >> 8);
    pppppuVar16 = (ulong *****)&uStack_90;
    break;
  case (undefined **)0x6:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\x06';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pppppuVar16 = (ulong *****)&stack0xffffffffffffff80;
    break;
  case (undefined **)0x7:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\a';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pppppuVar16 = &ppppuStack_70;
    break;
  case (undefined **)0x8:
    pppppuVar16 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    *(char *)((long)pppppuVar16 + (long)_DAT_113011108) = '\t';
    pcVar1 = (char *)((long)pppppuVar16 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar16 + _DAT_113011150);
    *(char **)pcVar1 = param_3;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pppppuVar16 = (ulong *****)apppuStack_50;
    break;
  case (undefined **)0x9:
    pppppuVar12 = unaff_x20;
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    uStack_90 = uVar6;
    uStack_8f = uVar7;
    _objc_allocWithZone();
    if (param_4 == (ulong *****)0x0 && (ulong *****)param_3 == (ulong *****)0x0) {
      *(char *)((long)pppppuVar12 + (long)_DAT_113011108) = '\b';
      pcVar1 = (char *)((long)pppppuVar12 + (long)_DAT_113011110);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011118);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011120);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011128);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011130);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011138);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011140);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011148);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011150);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pppppuVar16 = (ulong *****)apppuStack_60;
      break;
    }
    *(char *)((long)pppppuVar12 + (long)_DAT_113011108) = '\n';
    ppuVar28 = (undefined **)_DAT_113011110;
    uVar4 = uStack_c0;
    uVar5 = uStack_bf;
    uVar6 = uStack_90;
    uVar7 = uStack_8f;
  case (undefined **)0x1d:
  case (undefined **)0xa6:
  case (undefined **)0xd5:
  case (undefined **)0xe6:
    uStack_8f = uVar7;
    uStack_90 = uVar6;
    uStack_bf = uVar5;
    uStack_c0 = uVar4;
    pcVar1 = (char *)((long)pppppuVar12 + (long)ppuVar28);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011148);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pppppuVar16 = appppuStack_40;
    appppuStack_40[0] = (ulong ****)pppppuVar12;
    break;
  case (undefined **)0x10:
  case (undefined **)0x20:
  case (undefined **)0x80:
  case (undefined **)0x98:
  case (undefined **)0xb8:
  case (undefined **)0xd8:
  case (undefined **)0xe8:
    _objc_release();
    uVar26 = 0x112d387f8;
    FUN_103e1aa58(&ppppuStack_e0,0x112d387f8,&UNK_10d902650);
    auVar52._4_4_ = 0;
    auVar52._0_4_ = (uint)param_4 & 1;
    auVar52._8_8_ = uVar26;
    return auVar52;
  case (undefined **)0x11:
  case (undefined **)0x21:
    auVar59._8_8_ = param_4;
    auVar59._0_8_ = param_3;
    return auVar59;
  case (undefined **)0x12:
  case (undefined **)0x22:
    goto code_r0x000103e199f4;
  case (undefined **)0x13:
  case (undefined **)0x23:
  case (undefined **)0xbe:
    __swift_stdlib_reportUnimplementedInitializer
              ("SCSponsoredLensStudyConfigurationAPI.SponsoredLensStudyConfigurationServices",0x4c,
               "init()",6,0);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103e1ba54);
    (*pcVar9)();
  case (undefined **)0x14:
  case (undefined **)0x24:
  case (undefined **)0xbf:
  case (undefined **)0xc4:
    goto code_r0x000103e1ce1c;
  case (undefined **)0x15:
  case (undefined **)0x25:
    goto code_r0x000103e1b990;
  case (undefined **)0x16:
  case (undefined **)0x26:
    goto code_r0x000103e1a9f8;
  case (undefined **)0x17:
  case (undefined **)0x27:
    _objc_release(param_4);
    ppppuStack_e0 = (ulong ****)0x2b;
    param_3 = "Fatal error";
    param_8 = 
    "BmUserSessionScopeGraphBridge/SCSCBitmojiAvatarBuilderServicesSaberServiceProvider.swift";
    param_7 = 0x800000010ef118a0;
    param_4 = (ulong *****)0xb;
    param_5 = (code *)0x2;
    param_6 = (ulong *****)0xd000000000000021;
  case (undefined **)0x2d:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              (param_3,param_4,param_5,param_6,param_7,param_8,0x58,2);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103e1fa40);
    (*pcVar9)();
  case (undefined **)0x18:
  case (undefined **)0x28:
    goto code_r0x000103e1aa10;
  case (undefined **)0x19:
  case (undefined **)0x29:
    ppppuStack_d0 = (ulong ****)&stack0xfffffffffffffff0;
    uStack_c8 = uStack_88;
    uStack_c7 = uStack_87;
    _objc_retain();
    pppppuVar30 = (ulong *****)param_3;
    FUN_103e1eb5c();
    _objc_release(param_3);
    goto _objc_autoreleaseReturnValue;
  case (undefined **)0x1a:
  case (undefined **)0x2a:
    _swift_allocObject();
    pppppuVar12 = *(ulong ******)((long)param_4 + _DAT_113013c48);
    _swift_retain(pppppuVar12);
    _objc_release(param_4);
    unaff_x20 = (ulong *****)param_3;
    goto code_r0x000103e1ce1c;
  case (undefined **)0x1b:
    goto code_r0x000103e15230;
  case (undefined **)0x1c:
  case (undefined **)0xa5:
  case (undefined **)0xd4:
  case (undefined **)0xe5:
    goto code_r0x00010bdbf3e4;
  case (undefined **)0x2b:
    if (!in_ZR) {
      __ss11_StringGutsV4growyySiF(0x17);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(param_3,param_4);
      auVar3._8_8_ = 0x800000010f1bd190;
      auVar3._0_8_ = 0xd000000000000015;
      return auVar3;
    }
    auVar45._8_8_ = 0x800000010f1bd170;
    auVar45._0_8_ = 0xd00000000000001b;
    return auVar45;
  case (undefined **)0x2c:
    *(undefined ***)param_3 = ppuVar28;
    if (0x7ffffffe < (uint)param_5) {
      *(char *)((long)param_3 + 0x29) = '\x01';
    }
    auVar50._8_8_ = param_4;
    auVar50._0_8_ = param_3;
    return auVar50;
  case (undefined **)0x2e:
  case (undefined **)0xbc:
    goto code_r0x000103e1aa20;
  case (undefined **)0x30:
    puVar21 = &DAT_10e7c9158;
    _swift_getSingletonMetadata(ppuVar28,&DAT_10e7c9158);
    auVar70._8_8_ = puVar21;
    auVar70._0_8_ = ppuVar28;
    return auVar70;
  case (undefined **)0x31:
  case (undefined **)0x3b:
  case (undefined **)0x45:
  case (undefined **)0x4f:
  case (undefined **)0x53:
  case (undefined **)0x57:
  case (undefined **)0x61:
  case (undefined **)0x6b:
  case (undefined **)0x6f:
  case (undefined **)0x73:
  case (undefined **)0x77:
    pppuVar11 = (ulong ***)*ppuVar28;
    pppuVar25 = (ulong ***)ppuVar28[1];
    (*param_5)(pppuVar11,pppuVar25);
    auVar34._8_8_ = pppuVar25;
    auVar34._0_8_ = pppuVar11;
    return auVar34;
  case (undefined **)0x32:
    auVar73._8_8_ = param_4;
    auVar73._0_8_ = param_3;
    return auVar73;
  case (undefined **)0x37:
  case (undefined **)0x4b:
  case (undefined **)0x4c:
  case (undefined **)0x67:
    goto code_r0x000103e0146c;
  case (undefined **)0x3a:
    uVar26 = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_3,0x18,7);
    auVar79._8_8_ = uVar26;
    auVar79._0_8_ = param_3;
    return auVar79;
  case (undefined **)0x3c:
    ppppuVar29 = *param_6;
    _swift_beginAccess((char *)((long)param_3 + (long)ppppuVar29),&stack0xffffffffffffff28,1,0);
    param_3 = (char *)((long)param_3 + (long)ppppuVar29);
    _swift_unknownObjectWeakAssign(param_3,param_5);
    auVar63._8_8_ = param_5;
    auVar63._0_8_ = param_3;
    return auVar63;
  case (undefined **)0x3d:
  case (undefined **)0x55:
  case (undefined **)0x59:
  case (undefined **)0x71:
  case (undefined **)0x75:
  case (undefined **)0x79:
    lVar23 = 0;
    func_0x000103e3b734();
    uVar26 = 0x18;
    _swift_allocObject();
    *(undefined8 *)(lVar23 + 0x10) = *(undefined8 *)((long)param_3 + _DAT_113019fc8);
    uVar31 = *(undefined8 *)((long)unaff_x20 + _DAT_11301a650);
    *(long *)((long)unaff_x20 + _DAT_11301a650) = lVar23;
    _swift_retain();
    _swift_retain(lVar23);
    _swift_release(uVar31);
    func_0x000100083b20(&uStack_c8);
    _swift_release(lVar23);
    _objc_release(param_4);
    _objc_release(param_3);
    auVar74._1_7_ = uStack_c7;
    auVar74[0] = uStack_c8;
    auVar74._8_8_ = uVar26;
    return auVar74;
  case (undefined **)0x42:
    pppppuVar16 = param_4;
    _objc_release(param_3);
    _objc_release();
    auVar64._8_8_ = pppppuVar16;
    auVar64._0_8_ = param_4;
    return auVar64;
  case (undefined **)0x43:
  case (undefined **)0x5f:
  case (undefined **)0x7f:
    FUN_103e02d6c();
    _objc_allocWithZone();
    *(char *)((long)param_3 + (long)_DAT_113011108) = '\a';
    pcVar1 = (char *)((long)param_3 + (long)_DAT_113011110);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011118);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011120);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011128);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011130);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011138);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011140);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1 = (char *)((long)param_3 + _DAT_113011148);
    *(ulong ******)pcVar1 = unaff_x20;
    *(ulong ******)(pcVar1 + 8) = param_4;
    pcVar1 = (char *)((long)param_3 + _DAT_113011150);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\0';
    puVar21 = PTR_s_init_1125d9248;
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    ppppuStack_e0 = (ulong ****)param_3;
    _swift_bridgeObjectRetain(param_4);
    _objc_msgSendSuper2(&ppppuStack_e0,puVar21);
    auVar35._8_8_ = puVar21;
    auVar35._0_8_ = pppppuVar13;
    return auVar35;
  case (undefined **)0x44:
    goto code_r0x000103e30784;
  case (undefined **)0x46:
    goto code_r0x00010bdbf3e4;
  case (undefined **)0x4e:
  case (undefined **)0x52:
  case (undefined **)0x56:
    _swift_allocObject(param_3,param_4,7);
    ppppuVar29 = *(ulong *****)((long)param_4 + _DAT_1130174c8);
    _swift_retain(ppppuVar29);
    _objc_release(param_4);
    *(ulong *****)((long)param_3 + 0x10) = ppppuVar29;
    unaff_x20 = (ulong *****)param_3;
    goto code_r0x000103e30784;
  case (undefined **)0x50:
    FUN_103e06904();
    pppppuVar12 = (ulong *****)0x0;
    func_0x000103e05718();
    pppppuVar16 = (ulong *****)((long)param_3 + 0x28);
    do {
      ppppuVar32 = pppppuVar16[-1];
      ppppuVar29 = *pppppuVar16;
      pppppuVar13 = pppppuVar12;
      _objc_allocWithZone();
      *(ulong *****)((long)pppppuVar13 + _DAT_113011340) = ppppuVar32;
      *(ulong *****)((long)pppppuVar13 + _DAT_113011348) = ppppuVar29;
      uStack_c8 = SUB81(pppppuVar12,0);
      uStack_c7 = (undefined7)((ulong)pppppuVar12 >> 8);
      pppppuVar30 = &ppppuStack_d0;
      ppppuStack_d0 = (ulong ****)pppppuVar13;
      _objc_msgSendSuper2(pppppuVar30,PTR_s_init_1125d9248);
      pppuVar11 = in_stack_ffffffffffffff50[2];
      if ((ulong ***)((ulong)in_stack_ffffffffffffff50[3] >> 1) <= pppuVar11) {
        ppppuStack_e0 = (ulong ****)pppppuVar30;
        FUN_103e06904((ulong ***)0x1 < in_stack_ffffffffffffff50[3],
                      (ulong ***)((long)pppuVar11 + 1U),1);
        pppppuVar30 = (ulong *****)ppppuStack_e0;
      }
      pppppuVar16 = pppppuVar16 + 2;
      in_stack_ffffffffffffff50[2] = (ulong ***)((long)pppuVar11 + 1U);
      in_stack_ffffffffffffff50[(long)pppuVar11 + 4] = (ulong ***)pppppuVar30;
      unaff_x23 = (ulong *****)((long)unaff_x23 + -1);
    } while (unaff_x23 != (ulong *****)0x0);
    *(ulong *****)((long)param_4 + _DAT_113011308) = in_stack_ffffffffffffff50;
    *(char *)((long)param_4 + _DAT_113011310) = *(char *)(unaff_x22 + 0xe);
    uStack_b8 = SUB81(in_stack_ffffffffffffff28,0);
    uStack_b7 = (undefined7)((ulong)in_stack_ffffffffffffff28 >> 8);
    puVar19 = &uStack_c0;
    puVar21 = PTR_s_init_1125d9248;
    _objc_msgSendSuper2(puVar19,PTR_s_init_1125d9248);
    auVar36._8_8_ = puVar21;
    auVar36._0_8_ = puVar19;
    return auVar36;
  case (undefined **)0x54:
    goto code_r0x00010bdbf3e4;
  case (undefined **)0x58:
    puVar21 = PTR_s_dealloc_112525b20;
    _objc_msgSendSuper2(&ppppuStack_e0,PTR_s_dealloc_112525b20);
    auVar62._8_8_ = puVar21;
    auVar62._0_8_ = pppppuVar22;
    return auVar62;
  case (undefined **)0x5e:
    auVar65._8_8_ = param_4;
    auVar65._0_8_ = param_3;
    return auVar65;
  case (undefined **)0x60:
    func_0x000100083b20();
    auVar68._8_8_ = param_4;
    auVar68._0_8_ = param_3;
    return auVar68;
  case (undefined **)0x62:
    auVar72._8_8_ = param_4;
    auVar72._0_8_ = param_3;
    return auVar72;
  case (undefined **)0x68:
    goto code_r0x000103e01470;
  case (undefined **)0x6a:
  case (undefined **)0x6e:
  case (undefined **)0x72:
  case (undefined **)0x76:
    uVar26 = 0x100;
    _swift_initClassMetadata2(param_3,0x100,1);
    if ((ulong *****)param_3 == (ulong *****)0x0) {
      uVar26 = 0;
    }
    auVar67._8_8_ = uVar26;
    auVar67._0_8_ = param_3;
    return auVar67;
  case (undefined **)0x6c:
    pppppuVar16 = param_4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = SUB81(unaff_x23,0);
    uStack_b7 = (undefined7)((ulong)unaff_x23 >> 8);
    pppppuVar12 = pppppuVar16;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c0 = SUB81(unaff_x20,0);
    uStack_bf = (undefined7)((ulong)unaff_x20 >> 8);
    puVar21 = &UNK_110715f08;
    _swift_allocObject(&UNK_110715f08,0x18,7);
    *(undefined **)(puVar21 + 0x10) = unaff_x25;
    if (unaff_x28 == (ulong ****)0x0) {
      pppppuVar30 = (ulong *****)0x0;
      pppppuVar13 = (ulong *****)0x0;
    }
    else {
      pppppuVar30 = (ulong *****)&UNK_110715f30;
      _swift_allocObject(&UNK_110715f30,0x18,7);
      pppppuVar30[2] = unaff_x28;
      pppppuVar13 = (ulong *****)0x103e23188;
    }
    _objc_retain(param_4);
    _objc_retain(in_stack_ffffffffffffff50);
    uStack_c8 = SUB81(pppppuVar30,0);
    uStack_c7 = (undefined7)((ulong)pppppuVar30 >> 8);
    ppppuStack_e0 = (ulong ****)FUN_103e23148;
    puVar17 = (undefined *)0x0;
    ppppuStack_d0 = (ulong ****)pppppuVar13;
    func_0x000103e22818();
    func_0x00010058d43c(pppppuVar13,pppppuVar30);
    _objc_release(param_4);
    _objc_release(in_stack_ffffffffffffff50);
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(pppppuVar16);
    _swift_bridgeObjectRelease(pppppuVar12);
    _swift_release(puVar21);
    goto code_r0x00010bdc0014;
  case (undefined **)0x6d:
  case (undefined **)0xf5:
  case (undefined **)0xfd:
    goto code_r0x000103e017ac;
  case (undefined **)0x70:
    *(undefined8 *)((long)param_3 + _DAT_113015360) = unaff_x27;
    *(long *)((long)param_3 + _DAT_113015368) = unaff_x26;
    *(undefined **)((long)param_3 + _DAT_113015370) = unaff_x25;
    *(undefined ***)((long)param_3 + _DAT_113015378) = unaff_x24;
    *(ulong ******)((long)param_3 + _DAT_113015380) = unaff_x23;
    *(ulong ******)((long)param_3 + _DAT_113015388) = unaff_x22;
    *(char **)((long)param_3 + _DAT_113015390) = param_3;
    *(ulong *****)((long)param_3 + _DAT_113015398) = ppppuStack_d0;
    *(ulong *****)((long)param_3 + _DAT_1130153a0) = unaff_x28;
    *(ulong ******)((long)param_3 + _DAT_1130153a8) = param_4;
    *(ulong *****)((long)param_3 + _DAT_1130153b0) = in_stack_ffffffffffffff28;
    *(ulong *)((long)param_3 + _DAT_1130153b8) = CONCAT71(uStack_c7,uStack_c8);
    *(ulong *)((long)param_3 + _DAT_1130153c0) = CONCAT71(uVar5,uVar4);
    *(ulong *)((long)param_3 + _DAT_1130153c8) = CONCAT71(uStack_b7,uStack_b8);
    puVar19 = &stack0xffffffffffffff50;
    puVar21 = PTR_s_init_1125d9248;
    _objc_msgSendSuper2(puVar19,PTR_s_init_1125d9248);
    auVar61._8_8_ = puVar21;
    auVar61._0_8_ = puVar19;
    return auVar61;
  case (undefined **)0x74:
    __swift_stdlib_reportUnimplementedInitializer
              ("CameoUserSessionScopeGraphBridge.CameoUserSessionScopeGraphBridgeServices",0x49,
               "init()",6,0);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103e246c4);
    (*pcVar9)();
  case (undefined **)0x78:
    _swift_release(*(undefined8 *)((long)param_4 + (long)ppuVar28));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015368));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015370));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015378));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015380));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015390));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_113015398));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_1130153a0));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_1130153a8));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_1130153b0));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_1130153b8));
    _swift_release(*(undefined8 *)((long)param_4 + _DAT_1130153c0));
    ppppuVar29 = *(ulong *****)((long)param_4 + _DAT_1130153c8);
    goto code_r0x00010bdc0410;
  case (undefined **)0x7e:
    if (in_ZR) {
      param_4 = (ulong *****)0x0;
    }
    auVar66._8_8_ = param_4;
    auVar66._0_8_ = param_3;
    return auVar66;
  case (undefined **)0x81:
  case (undefined **)0x99:
    *(undefined ***)((long)param_3 + 8) = ppuVar28;
    auVar55._8_8_ = param_4;
    auVar55._0_8_ = param_3;
    return auVar55;
  case (undefined **)0x82:
  case (undefined **)0x9a:
    _swift_retain(ppuVar28);
    _objc_msgSendSuper2(&ppppuStack_e0,param_4);
    _objc_release(param_3);
    _objc_release();
    auVar56._8_8_ = param_4;
    auVar56._0_8_ = pppppuVar18;
    return auVar56;
  case (undefined **)0x83:
  case (undefined **)0x9b:
    func_0x00010207ff90();
    auVar37._8_8_ = param_4;
    auVar37._0_8_ = unaff_x20;
    return auVar37;
  case (undefined **)0x84:
  case (undefined **)0x9c:
    goto code_r0x000103e1a9a8;
  case (undefined **)0x85:
  case (undefined **)0x9d:
  case (undefined **)0xda:
  case (undefined **)0xea:
    goto code_r0x000103e1d220;
  case (undefined **)0x86:
  case (undefined **)0x9e:
  case (undefined **)0xdb:
  case (undefined **)0xeb:
    goto code_r0x000103e1e628;
  case (undefined **)0x87:
  case (undefined **)0xc0:
    unaff_x23 = *(ulong ******)(unaff_x26 + 0x570);
    _objc_allocWithZone();
    unaff_x24 = &PTR_DAT_113012000;
    goto code_r0x000103e1a9a8;
  case (undefined **)0x88:
  case (undefined **)0x8a:
    goto code_r0x000103e19a30;
  case (undefined **)0x89:
    goto code_r0x000103e199f4;
  case (undefined **)0x8b:
  case (undefined **)0xc7:
  case (undefined **)0xf1:
    if (((uint)ppuVar28 <= (uint)param_4) && (*(char *)((long)param_3 + 0x29) != '\0')) {
      auVar48._4_4_ = 0;
      auVar48._0_4_ = *(int *)param_3 + 0x7fffffff;
      auVar48._8_8_ = param_4;
      return auVar48;
    }
    ppppuVar29 = *(ulong *****)param_3;
    if ((ulong ****)0xfffffffe < ppppuVar29) {
      ppppuVar29 = (ulong ****)0xffffffff;
    }
    uVar10 = (int)ppppuVar29 - 1;
    if (0x7fffffff < uVar10) {
      uVar10 = 0xffffffff;
    }
    auVar49._4_4_ = 0;
    auVar49._0_4_ = uVar10 + 1;
    auVar49._8_8_ = param_4;
    return auVar49;
  case (undefined **)0x8c:
  case (undefined **)0xc8:
  case (undefined **)0xf2:
    goto code_r0x000103e1a208;
  case (undefined **)0x94:
    uVar26 = 0x18;
    pppppuVar16 = (ulong *****)param_3;
    _swift_allocObject(param_3,0x18,7);
    pppppuVar16[2] = *(ulong *****)((long)param_3 + _DAT_1130174c0);
    uVar31 = *(undefined8 *)((long)unaff_x20 + _DAT_1130176b0);
    *(ulong ******)((long)unaff_x20 + _DAT_1130176b0) = pppppuVar16;
    _swift_retain();
    _swift_retain(pppppuVar16);
    _swift_release(uVar31);
    func_0x000100083b20(&uStack_c8);
    _swift_release(pppppuVar16);
    _objc_release(param_4);
    _objc_release(param_3);
    auVar71._1_7_ = uStack_c7;
    auVar71[0] = uStack_c8;
    auVar71._8_8_ = uVar26;
    return auVar71;
  case (undefined **)0x95:
    goto code_r0x000103e01754;
  case (undefined **)0x96:
  case (undefined **)0xb0:
    goto code_r0x000103e0147c;
  case (undefined **)0x9f:
    goto code_r0x000103e1a9bc;
  case (undefined **)0xa0:
    auVar42._8_8_ = param_4;
    auVar42._0_8_ = param_3;
    return auVar42;
  case (undefined **)0xa1:
    goto code_r0x000103e1e5f4;
  case (undefined **)0xa2:
    func_0x000107c42744();
    _objc_release();
    uVar26 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1bd5b0);
    func_0x000107c42744(param_4);
    _objc_release(uVar26);
    uVar26 = 0xd000000000000016;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1bd5d0);
    func_0x000107c42744(param_4);
    _objc_release(uVar26);
    param_3 = (char *)0xd000000000000019;
    pppppuVar16 = (ulong *****)0x800000010f1bd5f0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1bd5f0);
    func_0x000107c42744(param_4);
    param_4 = pppppuVar16;
    goto code_r0x00010bdbf3e4;
  case (undefined **)0xa3:
    _objc_retainAutoreleasedReturnValue();
    pppppuVar12 = (ulong *****)param_3;
    if ((ulong *****)param_3 == (ulong *****)0x0) {
      _objc_release(param_4);
      in_stack_ffffffffffffff28 = (ulong ****)0x0;
      goto LAB_103e1e67c;
    }
    goto code_r0x000103e1e5f4;
  case (undefined **)0xa4:
    goto LAB_103e151f8;
  case (undefined **)0xa8:
  case (undefined **)0xac:
    goto code_r0x000103e01480;
  case (undefined **)0xb1:
    goto code_r0x000103e014e4;
  case (undefined **)0xb2:
    _objc_msgSendSuper2(&ppppuStack_e0);
    auVar75._8_8_ = param_4;
    auVar75._0_8_ = pppppuVar24;
    return auVar75;
  case (undefined **)0xb3:
    _objc_release();
    goto _objc_autoreleaseReturnValue;
  case (undefined **)0xb9:
    goto code_r0x000103e1a9ac;
  case (undefined **)0xba:
    uVar20 = 0;
    if ((param_4 == (ulong *****)0x6e496e69676562 && param_5 == (code *)0xe700000000000000) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6e496e69676562,0xe700000000000000,param_4,param_5,0), (uVar20 & 1) != 0)) {
      ppppuVar29 = *(ulong *****)((long)param_3 + 0x18);
      func_0x0001006732c8(param_3,ppppuVar29);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      func_0x000107c52c38();
    }
    else {
      if ((param_4 != (ulong *****)0xd000000000000025) || (param_5 != (code *)0x800000010f1bdea0)) {
        uVar20 = 0xd000000000000025;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000025,0x800000010f1bdea0,param_4,param_5,0);
        if ((uVar20 & 1) == 0) {
          ppppuStack_d0 = (ulong ****)0x0;
          uStack_c8 = 0;
          uStack_c7 = 0xe0000000000000;
          __ss11_StringGutsV4growyySiF(0x15);
          _swift_bridgeObjectRelease(CONCAT71(uStack_c7,uStack_c8));
          ppppuStack_d0 = (ulong ****)0xd000000000000013;
          uStack_c8 = 0x20;
          uStack_c7 = 0x800000010ef0fc;
          __sSS6appendyySSF(param_4,param_5);
          ppppuStack_e0 = (ulong ****)0x40;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,ppppuStack_d0,CONCAT71(uStack_c7,uStack_c8),
                     "BmUserSessionScopeGraphBridge/SCSCBitmoji3DStickerServicesSaberServiceProvider.swift"
                     ,0x54,2);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x103e1efb4);
          (*pcVar9)();
        }
      }
      ppppuVar29 = *(ulong *****)((long)param_3 + 0x18);
      func_0x0001006732c8(param_3,ppppuVar29);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      func_0x000107c52dc4();
    }
    goto _swift_unknownObjectRelease;
  case (undefined **)0xbb:
    in_stack_ffffffffffffff28 = (ulong ****)0x0;
LAB_103e151f8:
    auVar43._8_8_ = param_4;
    auVar43._0_8_ = in_stack_ffffffffffffff28;
    return auVar43;
  case (undefined **)0xbd:
    param_1 = *(ulong *****)param_3;
    param_2 = *(ulong *****)((long)param_3 + 0x10);
    uVar8 = (char)*(ulong *****)((long)param_3 + 0x18);
    goto code_r0x000103e19a30;
  case (undefined **)0xc1:
    uVar20 = 0;
    if ((param_4 == (ulong *****)0x6e496e69676562 && param_5 == (code *)0xe700000000000000) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6e496e69676562,0xe700000000000000,param_4,param_5,0), (uVar20 & 1) != 0)) {
      ppppuVar29 = *(ulong *****)((long)param_3 + 0x18);
      func_0x0001006732c8(param_3,ppppuVar29);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      func_0x000107c52c38();
    }
    else {
      if ((param_4 != (ulong *****)0xd000000000000025) || (param_5 != (code *)0x800000010f1bdea0)) {
        uVar20 = 0xd000000000000025;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000025,0x800000010f1bdea0,param_4,param_5,0);
        if ((uVar20 & 1) == 0) {
          ppppuStack_d0 = (ulong ****)0x0;
          uStack_c8 = 0;
          uStack_c7 = 0xe0000000000000;
          __ss11_StringGutsV4growyySiF(0x15);
          _swift_bridgeObjectRelease(CONCAT71(uStack_c7,uStack_c8));
          ppppuStack_d0 = (ulong ****)0xd000000000000013;
          uStack_c8 = 0x20;
          uStack_c7 = 0x800000010ef0fc;
          __sSS6appendyySSF(param_4,param_5);
          ppppuStack_e0 = (ulong ****)0x40;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,ppppuStack_d0,CONCAT71(uStack_c7,uStack_c8),
                     "BmUserSessionScopeGraphBridge/SCBitmojiFashionTrayPresentingServicesSaberServiceProvider.swift"
                     ,0x5e,2);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x103e1dfbc);
          (*pcVar9)();
        }
      }
      ppppuVar29 = *(ulong *****)((long)param_3 + 0x18);
      func_0x0001006732c8(param_3,ppppuVar29);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      func_0x000107c52dc4();
    }
_swift_unknownObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    auVar81._8_8_ = ppppuVar29;
    auVar81._0_8_ = param_3;
    return auVar81;
  case (undefined **)0xc2:
    if (param_4 == (ulong *****)0x0) {
      pppppuVar16 = (ulong *****)0x0;
      __ss6HasherV8_combineyys5UInt8VF(0);
      goto LAB_103e1a240;
    }
    goto code_r0x000103e1a208;
  case (undefined **)0xc3:
    _objc_release();
    uVar26 = 0x18;
    _swift_allocObject();
    ppppuVar29 = *(ulong *****)((long)param_4 + _DAT_1130121d0);
    _swift_retain(ppppuVar29);
    _objc_release(param_4);
    unaff_x20[2] = ppppuVar29;
    auVar39._8_8_ = uVar26;
    auVar39._0_8_ = unaff_x20;
    return auVar39;
  case (undefined **)0xc5:
    goto code_r0x000103e1aa30;
  case (undefined **)0xc6:
    goto code_r0x000103e1e640;
  case (undefined **)0xce:
    _objc_msgSendSuper2(&ppppuStack_e0);
    auVar38._8_8_ = param_4;
    auVar38._0_8_ = pppppuVar14;
    return auVar38;
  case (undefined **)0xcf:
    *ppuVar28 = (undefined *)in_x12;
    ppuVar28[1] = (undefined *)((ulong)uVar2 * 4 + 0x103e01460);
    auVar44._8_8_ = param_4;
    auVar44._0_8_ = param_3;
    return auVar44;
  case (undefined **)0xd0:
    *(ulong ******)((long)param_3 + (long)ppuVar28[0x183]) = unaff_x23;
    ppuVar28 = (undefined **)_DAT_113013c20;
    goto code_r0x000103e1d220;
  case (undefined **)0xd1:
    auVar41._8_8_ = param_4;
    auVar41._0_8_ = param_3;
    return auVar41;
  case (undefined **)0xd2:
    auVar54._8_8_ = param_4;
    auVar54._0_8_ = param_3;
    return auVar54;
  case (undefined **)0xd3:
    _objc_retain();
    pppppuVar30 = (ulong *****)param_3;
    func_0x000103e14ffc();
    goto code_r0x000103e15230;
  case (undefined **)0xd9:
  case (undefined **)0xe9:
    pppppuVar16 = param_4;
    _swift_unknownObjectWeakDestroy((char *)((long)param_3 + (long)ppuVar28));
    _objc_release(*(undefined8 *)((long)param_4 + _DAT_113013cd8));
    param_3 = *(char **)((long)param_4 + _DAT_113013ce0);
    param_4 = pppppuVar16;
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    auVar77._8_8_ = param_4;
    auVar77._0_8_ = param_3;
    return auVar77;
  case (undefined **)0xdc:
  case (undefined **)0xec:
    ppppuVar29 = unaff_x20[2];
code_r0x00010bdc0410:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(ppppuVar29);
    auVar80._8_8_ = pppppuVar30;
    auVar80._0_8_ = ppppuVar29;
    return auVar80;
  case (undefined **)0xdd:
  case (undefined **)0xed:
    goto code_r0x000103e1e604;
  case (undefined **)0xde:
  case (undefined **)0xee:
    *(ulong ******)((long)param_3 + (long)ppuVar28) = param_4;
    *(ulong *****)((long)param_3 + _DAT_113012208) = unaff_x28;
    puVar21 = PTR_s_init_1125d9248;
    ppppuStack_e0 = (ulong ****)param_3;
    _objc_msgSendSuper2(&ppppuStack_e0,PTR_s_init_1125d9248);
    auVar40._8_8_ = puVar21;
    auVar40._0_8_ = pppppuVar15;
    return auVar40;
  case (undefined **)0xdf:
  case (undefined **)0xef:
    goto code_r0x000103e1aa38;
  case (undefined **)0xe0:
  case (undefined **)0xf0:
    goto code_r0x000103e1e618;
  case (undefined **)0xe1:
    uStack_c0 = uVar4;
    uStack_bf = uVar5;
    _swift_bridgeObjectRelease(*(undefined8 *)((char *)((long)param_3 + (long)ppuVar28) + 8));
    ppuVar28 = (undefined **)&DAT_113013000;
    uVar4 = uStack_c0;
    uVar5 = uStack_bf;
    goto code_r0x000103e1b990;
  case (undefined **)0xe2:
    goto code_r0x000103e1e62c;
  case (undefined **)0xe3:
    pppppuVar30 = (ulong *****)param_3;
    goto _objc_autoreleaseReturnValue;
  case (undefined **)0xe4:
    _objc_retain();
    pppppuVar30 = (ulong *****)param_3;
    func_0x000103e15128();
    _objc_release(param_3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar30);
    auVar76._8_8_ = param_4;
    auVar76._0_8_ = pppppuVar30;
    return auVar76;
  case (undefined **)0xf4:
    goto code_r0x000103e226d8;
  case (undefined **)0xf6:
  case (undefined **)0xfe:
    goto code_r0x000103e01490;
  case (undefined **)0xfc:
    ppppuStack_70 = (ulong ****)&stack0xfffffffffffffff0;
    goto code_r0x000103e226d8;
  }
code_r0x000103e01c0c:
  pppppuVar16[1] = (ulong ****)unaff_x20;
  puVar21 = PTR_s_init_1125d9248;
  _objc_msgSendSuper2(pppppuVar16,PTR_s_init_1125d9248);
  auVar33._8_8_ = puVar21;
  auVar33._0_8_ = pppppuVar16;
  return auVar33;
code_r0x000103e226d8:
  uStack_c8 = SUB81(param_3,0);
  uStack_c7 = (undefined7)((ulong)param_3 >> 8);
  uStack_c0 = uVar4;
  uStack_bf = uVar5;
  __Block_copy();
  puVar21 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_5,PTR___sSSN_11034da80);
  if (param_6 == (ulong *****)0x0) {
    ppppuStack_d0 = (ulong ****)0x0;
    puVar17 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar17 = puVar21;
    ppppuStack_d0 = (ulong ****)param_6;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  puVar27 = puVar21;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  if (param_10 == (ulong ****)0x0) {
    pppppuVar30 = (ulong *****)0x0;
    pppppuVar16 = (ulong *****)0x0;
  }
  else {
    pppppuVar30 = (ulong *****)&UNK_110715f58;
    _swift_allocObject(&UNK_110715f58,0x18,7);
    pppppuVar30[2] = param_10;
    pppppuVar16 = (ulong *****)0x103e2318c;
  }
  uVar31 = param_9;
  _objc_retain(param_9);
  uVar26 = CONCAT71(uStack_c7,uStack_c8);
  _objc_retain(uVar26);
  ppppuStack_e0 = (ulong ****)pppppuVar16;
  FUN_103e2253c(param_5,ppppuStack_d0,puVar17,param_7,puVar21,param_8,puVar27,param_9);
  func_0x00010058d43c(pppppuVar16,pppppuVar30);
  _objc_release(uVar31);
  _objc_release(uVar26);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(puVar21);
  _swift_bridgeObjectRelease(puVar27);
  goto code_r0x00010bdc0014;
code_r0x000103e1e5f4:
  param_3 = (char *)0x0;
  func_0x000103e1c724();
  pppppuVar30 = (ulong *****)0x18;
code_r0x000103e1e604:
  _swift_allocObject();
  ppuVar28 = (undefined **)_DAT_113013c08;
  unaff_x22 = (ulong *****)param_3;
code_r0x000103e1e618:
  unaff_x22[2] = *(ulong *****)((long)pppppuVar12 + (long)ppuVar28);
  ppuVar28 = (undefined **)_DAT_113014008;
code_r0x000103e1e628:
  unaff_x23 = *(ulong ******)((long)unaff_x20 + (long)ppuVar28);
code_r0x000103e1e62c:
  param_3 = (char *)unaff_x23;
  *(ulong ******)((long)unaff_x20 + (long)ppuVar28) = unaff_x22;
  _swift_retain();
  _swift_retain(unaff_x22);
  goto code_r0x000103e1e640;
code_r0x000103e1a9a8:
  unaff_x24 = unaff_x24 + 0x1f1;
code_r0x000103e1a9ac:
  unaff_x25 = &UNK_10dc99ff0;
  pppppuVar12 = (ulong *****)&uStack_b8;
  pppppuVar30 = (ulong *****)&uStack_c8;
code_r0x000103e1a9bc:
  FUN_103e1af00(pppppuVar12,pppppuVar30,unaff_x24,unaff_x25);
  FUN_103e1af00(&uStack_c0,&uStack_c8,unaff_x24,unaff_x25);
  func_0x000107c47580();
  *(ulong ******)((long)unaff_x20 + _DAT_113012f78) = unaff_x23;
  ppuVar28 = (undefined **)(ulong)*(byte *)((long)param_3 + 0x28);
code_r0x000103e1a9f8:
  if ((int)ppuVar28 == 1) {
    param_3 = (char *)0x0;
  }
  else {
    param_3 = *(char **)(unaff_x26 + 0x570);
code_r0x000103e1aa10:
    _objc_allocWithZone();
    func_0x000107c47580();
  }
  ppuVar28 = &PTR_DAT_113012000;
code_r0x000103e1aa20:
  *(char **)((long)unaff_x20 + (long)ppuVar28[0x1f0]) = param_3;
  ppuVar28 = &PTR_s_info_1125d9000;
  ppppuStack_d0 = (ulong ****)param_4;
  goto code_r0x000103e1aa30;
code_r0x000103e15230:
  _objc_release(param_3);
  goto _objc_autoreleaseReturnValue;
code_r0x000103e1aa30:
  param_4 = (ulong *****)ppuVar28[0x49];
  param_3 = &stack0xffffffffffffff28;
  goto code_r0x000103e1aa38;
code_r0x000103e01754:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  pcVar1 = (char *)((long)pppppuVar12 + (long)ppuVar28);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011118);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011120);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011128);
  *(char **)pcVar1 = param_3;
  *(ulong ******)(pcVar1 + 8) = param_4;
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011130);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011138);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e017ac:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011140);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011148);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011150);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pppppuVar16 = (ulong *****)&stack0xffffffffffffff50;
  goto code_r0x000103e01c0c;
code_r0x000103e0146c:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  ppuVar28 = (undefined **)ppuVar28[0x21];
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e01470:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  *(char *)((long)pppppuVar12 + (long)ppuVar28) = '\0';
  ppuVar28 = (undefined **)_DAT_113011110;
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e0147c:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  ppuVar28 = (undefined **)((long)pppppuVar12 + (long)ppuVar28);
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e01480:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  *ppuVar28 = param_3;
  ppuVar28[1] = (undefined *)param_4;
  ppuVar28 = (undefined **)((long)pppppuVar12 + _DAT_113011118);
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e01490:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  *ppuVar28 = (undefined *)0x0;
  ppuVar28[1] = (undefined *)0x0;
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011120);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011128);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011130);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011138);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011140);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  uVar4 = uStack_c0;
  uVar5 = uStack_bf;
  uVar6 = uStack_90;
  uVar7 = uStack_8f;
code_r0x000103e014e4:
  uStack_8f = uVar7;
  uStack_90 = uVar6;
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011148);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1 = (char *)((long)pppppuVar12 + _DAT_113011150);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  ppppuStack_e0 = (ulong ****)pppppuVar12;
  goto code_r0x000103e01c0c;
code_r0x000103e19a30:
  uStack_c8 = uVar8;
  uStack_bf = (undefined7)*(undefined8 *)((long)param_3 + 0x21);
  uStack_b8 = (undefined1)((ulong)*(undefined8 *)((long)param_3 + 0x21) >> 0x38);
  uStack_c7 = (undefined7)*(undefined8 *)((long)param_3 + 0x19);
  uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_3 + 0x19) >> 0x38);
  uStack_8f = (undefined7)*(undefined8 *)((long)param_4 + 0x21);
  uStack_88 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0x21) >> 0x38);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0x19) >> 0x38);
  puVar19 = &stack0xffffffffffffff50;
  ppppuStack_e0 = param_1;
  ppppuStack_d0 = param_2;
  FUN_103e19a68(&ppppuStack_e0,puVar19);
  auVar47._4_4_ = 0;
  auVar47._0_4_ = uVar10 & 1;
  auVar47._8_8_ = puVar19;
  return auVar47;
code_r0x000103e1e640:
  _swift_release(param_3);
  func_0x000100083b20(&stack0xffffffffffffff28);
  _swift_release(unaff_x22);
  _objc_release(param_4);
  _objc_release(pppppuVar12);
LAB_103e1e67c:
  auVar60._8_8_ = pppppuVar30;
  auVar60._0_8_ = in_stack_ffffffffffffff28;
  return auVar60;
code_r0x000103e1a208:
  pppppuVar12 = param_4;
  __ss6HasherV8_combineyys5UInt8VF(1);
  _objc_retain(param_4);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(&stack0xffffffffffffff28);
  _objc_release(param_4);
  pppppuVar16 = param_4;
  param_4 = pppppuVar12;
LAB_103e1a240:
  __ss6HasherV8finalizeSiyF();
  auVar51._8_8_ = param_4;
  auVar51._0_8_ = pppppuVar16;
  return auVar51;
code_r0x000103e199f4:
  __ss6HasherV5_seedABSi_tcfC(&stack0xffffffffffffff28);
  puVar19 = &stack0xffffffffffffff28;
  FUN_103e19894(puVar19);
  __ss6HasherV9_finalizeSiyF();
  auVar46._8_8_ = param_4;
  auVar46._0_8_ = puVar19;
  return auVar46;
code_r0x000103e1ce1c:
  unaff_x20[2] = (ulong ****)pppppuVar12;
  auVar57._8_8_ = pppppuVar30;
  auVar57._0_8_ = unaff_x20;
  return auVar57;
code_r0x000103e1b990:
  uStack_bf = uVar5;
  uStack_c0 = uVar4;
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_4 + (long)((long)ppuVar28[8] + 8)));
  puVar17 = *(undefined **)((long)param_4 + _DAT_113013048 + 8);
code_r0x00010bdc0014:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar17);
  auVar78._8_8_ = pppppuVar30;
  auVar78._0_8_ = puVar17;
  return auVar78;
code_r0x000103e1aa38:
  _objc_msgSendSuper2(param_3,param_4);
  auVar53._8_8_ = param_4;
  auVar53._0_8_ = param_3;
  return auVar53;
code_r0x000103e30784:
  auVar69._8_8_ = pppppuVar30;
  auVar69._0_8_ = unaff_x20;
  return auVar69;
code_r0x000103e1d220:
  *(ulong ******)((long)param_3 + (long)ppuVar28) = unaff_x22;
  *(char **)((long)param_3 + _DAT_113013c28) = param_3;
  *(ulong *****)((long)param_3 + _DAT_113013c30) = in_stack_ffffffffffffff28;
  *(ulong ******)((long)param_3 + _DAT_113013c38) = unaff_x20;
  *(ulong *****)((long)param_3 + _DAT_113013c40) = unaff_x28;
  *(ulong ******)((long)param_3 + _DAT_113013c48) = param_4;
  *(ulong *****)((long)param_3 + _DAT_113013c50) = ppppuStack_e0;
  *(ulong *****)((long)param_3 + _DAT_113013c58) = ppppuStack_d0;
  *(ulong *)((long)param_3 + _DAT_113013c60) = CONCAT71(uStack_c7,uStack_c8);
  *(ulong *)((long)param_3 + _DAT_113013c68) = CONCAT71(uStack_b7,uStack_b8);
  *(ulong *****)((long)param_3 + _DAT_113013c70) = in_stack_ffffffffffffff50;
  *(undefined8 *)((long)param_3 + _DAT_113013c78) = in_stack_ffffffffffffff58;
  puVar19 = &stack0xffffffffffffff60;
  puVar21 = PTR_s_init_1125d9248;
  _objc_msgSendSuper2(puVar19,PTR_s_init_1125d9248);
  auVar58._8_8_ = puVar21;
  auVar58._0_8_ = puVar19;
  return auVar58;
}



/* Entry: 103e01c30; end: 103e01c57; -[SCAdCreationLifecyleEvent description] */

void FUN_103e01c30(void)

{
  _objc_retain();
  FUN_103e021f4();
  func_0x000102d07954();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e01c58; end: 103e01c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e01c58(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_113011108)) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011110);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011110))[1]);
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011118);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011118))[1]);
    break;
  case 2:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011120);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011120))[1]);
    break;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011128);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011128))[1]);
    break;
  case 4:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011130))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023ac);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011130);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 5:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011138))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023b0);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011138);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 6:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011140))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023a8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011140);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 7:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011148))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023b4);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011148);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 9:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011150);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011150))[1]);
    break;
  case 10:
    uVar3 = 1;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 103e01c5c; end: 103e01ca3; -[SCAdCreationLifecyleEvent init] */

void FUN_103e01c5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdCreationLifecyleEventWrapper.swift",0x41,2,0x68,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e01ca4);
  (*pcVar1)();
}



/* Entry: 103e01ca4; end: 103e01ca7; -[SCAdCreationLifecyleEvent copyWithZone:] */

void FUN_103e01ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e01ca8; end: 103e01cb3; +[SCAdCreationLifecyleEvent startAdRequestWithAdPodId:] */

void FUN_103e01ca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x103e023b4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01cb4; end: 103e01cbf; +[SCAdCreationLifecyleEvent finishAdRequestWithAdPodId:] */

void FUN_103e01cb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x103e024ac)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01cc0; end: 103e01ccb; +[SCAdCreationLifecyleEvent startParseWithAdPodId:] */

void FUN_103e01cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x103e025a8)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01ccc; end: 103e01cd7; +[SCAdCreationLifecyleEvent finishParseWithAdPodId:] */

void FUN_103e01ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x103e026a4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01cd8; end: 103e01ce3; +[SCAdCreationLifecyleEvent startMediaDownloadWithAdPodId:] */

void FUN_103e01cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x103e027a0)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01ce4; end: 103e01cef; +[SCAdCreationLifecyleEvent finishMediaDownloadWithAdPodId:] */

void FUN_103e01ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x103e0289c)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01cf0; end: 103e01cfb; +[SCAdCreationLifecyleEvent createPendingAdpodWithAdPodId:] */

void FUN_103e01cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x103e02998)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01cfc; end: 103e01d07; +[SCAdCreationLifecyleEvent insertAdpodWithAdPodId:] */

void FUN_103e01cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x103e02a94)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01d08; end: 103e01d43;  */

void FUN_103e01d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01d44; end: 103e01d5b; +[SCAdCreationLifecyleEvent enterSurface] */

void FUN_103e01d44(void)

{
  FUN_103e02c8c(8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e01d5c; end: 103e01d67; +[SCAdCreationLifecyleEvent submitAdRequestWithAdPodId:] */

void FUN_103e01d5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x103e02b90)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01d68; end: 103e01db7;  */

void FUN_103e01d68(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e01db8; end: 103e01dcf; +[SCAdCreationLifecyleEvent tileTap] */

void FUN_103e01db8(void)

{
  FUN_103e02c8c(10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e01dd0; end: 103e01f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e01dd0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined8 *param_25,
                  code *param_26)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_113011108)) {
  case 0:
    param_25 = (undefined8 *)&DAT_113011000;
  case 0xb:
    (*param_1)(*(undefined8 *)(unaff_x20 + param_25[0x22]),
               ((undefined8 *)(unaff_x20 + param_25[0x22]))[1]);
  case 0xe:
    break;
  case 1:
    param_25 = _DAT_113011118;
  case 0xf:
    (*param_3)(*(undefined8 *)(unaff_x20 + (long)param_25),
               ((undefined8 *)(unaff_x20 + (long)param_25))[1]);
    break;
  case 2:
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113011120),
               ((undefined8 *)(unaff_x20 + _DAT_113011120))[1]);
    break;
  default:
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_113011128),
               ((undefined8 *)(unaff_x20 + _DAT_113011128))[1]);
    break;
  case 4:
    if (((undefined8 *)(unaff_x20 + _DAT_113011130))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e01f88);
      (*pcVar1)();
    }
    param_1 = *(code **)(unaff_x20 + _DAT_113011130);
  case 0x14:
    (*param_9)(param_1);
    break;
  case 5:
    param_25 = (undefined8 *)(unaff_x20 + _DAT_113011138);
    if (param_25[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e01f90);
      (*pcVar1)();
    }
  case 0x10:
    (*param_12)(*param_25);
    break;
  case 6:
    if (((undefined8 *)(unaff_x20 + _DAT_113011140))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e01f94);
      (*pcVar1)();
    }
    param_1 = *(code **)(unaff_x20 + _DAT_113011140);
  case 0x15:
    (*param_15)(param_1);
    break;
  case 7:
    param_25 = (undefined8 *)&DAT_113011000;
  case 0x11:
    if (((undefined8 *)(unaff_x20 + param_25[0x29]))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e01f8c);
      (*pcVar1)();
    }
    (*param_18)(*(undefined8 *)(unaff_x20 + param_25[0x29]));
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    (*param_24)(*(undefined8 *)(unaff_x20 + _DAT_113011150),
                ((undefined8 *)(unaff_x20 + _DAT_113011150))[1]);
  case 0xc:
    break;
  case 10:
  case 0x12:
    (*param_26)();
    break;
  case 0x13:
    break;
  }
  return;
}



/* Entry: 103e01f94; end: 103e020e3; -[SCAdCreationLifecyleEvent matchStartAdRequest:finishAdRequest:startParse:finishParse:startMediaDownload:finishMediaDownload:createPendingAdpod:insertAdpod:enterSurface:submitAdRequest:tileTap:] */

void FUN_103e01f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103e01dd0(FUN_103e02f34,auStack_40,0x103e02f84,auStack_60,0x103e02f88,auStack_80,0x103e02f8c,
                auStack_a0,0x103e02f3c,auStack_c0,0x103e02f98,auStack_e0,0x103e02f9c,auStack_100,
                0x103e02fa0,auStack_120,FUN_103e02f78,auStack_140,0x103e02f90,auStack_160,
                0x103e02f94,auStack_180);
  _objc_release(param_1);
  return;
}



/* Entry: 103e020e4; end: 103e02117;  */

void FUN_103e020e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e02118; end: 103e021e3; -[SCAdCreationLifecyleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02118(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011110 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011118 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011120 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011128 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011130 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011138 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011140 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011148 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011150 + 8))
  ;
  return;
}



/* Entry: 103e021e4; end: 103e021f3;  */

ulong FUN_103e021e4(ulong param_1)

{
  if (10 < param_1) {
    param_1 = 0xb;
  }
  return param_1;
}



/* Entry: 103e021f4; end: 103e02c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e021f4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_113011108)) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011110);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011110))[1]);
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011118);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011118))[1]);
    break;
  case 2:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011120);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011120))[1]);
    break;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011128);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011128))[1]);
    break;
  case 4:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011130))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023ac);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011130);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 5:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011138))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023b0);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011138);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 6:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011140))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023a8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011140);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 7:
    lVar2 = ((undefined8 *)(param_1 + _DAT_113011148))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e023b4);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011148);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 9:
    uVar3 = *(undefined8 *)(param_1 + _DAT_113011150);
    _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_113011150))[1]);
    break;
  case 10:
    uVar3 = 1;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 103e02c8c; end: 103e02d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02c8c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_103e02d6c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_113011108) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011110);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011118);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011120);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011128);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011130);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011138);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011140);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011148);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113011150);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e02d6c; end: 103e02d8b;  */

void FUN_103e02d6c(void)

{
  _objc_opt_self(&PTR_PTR_11294e1f8);
  return;
}



/* Entry: 103e02d8c; end: 103e02ef3;  */

int FUN_103e02d8c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e02e08;
        goto LAB_103e02dec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e02dec:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_103e02e08:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e02ef4; end: 103e02f33;  */

void FUN_103e02ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113011180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc98660;
  _swift_getWitnessTable(&UNK_10dc98660,&UNK_110714330);
  puRam0000000113011180 = puVar1;
  return;
}



/* Entry: 103e02f34; end: 103e02f3f;  */

void FUN_103e02f34(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e02f40; end: 103e02f77;  */

void FUN_103e02f40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e02f78; end: 103e02fa3;  */

void FUN_103e02f78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103e02f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103e02fa4; end: 103e02faf; -[SCAdShake2ReportMetadata adRequestUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011188))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011188);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fb0; end: 103e02fbb; -[SCAdShake2ReportMetadata adRequestTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011190))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011190);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fbc; end: 103e02fc7; -[SCAdShake2ReportMetadata adRequestCompleteTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011198))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011198);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fc8; end: 103e02fd3; -[SCAdShake2ReportMetadata adRequestStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fd4; end: 103e02fdf; -[SCAdShake2ReportMetadata adMediaSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fe0; end: 103e02feb; -[SCAdShake2ReportMetadata adMediaCacheHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fe0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02fec; end: 103e02ff7; -[SCAdShake2ReportMetadata adInsertionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e02ff8; end: 103e03003; -[SCAdShake2ReportMetadata adFirstViewStartTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e02ff8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e03004; end: 103e0300f; -[SCAdShake2ReportMetadata adFirstViewEndTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e03004(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130111c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130111c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e03010; end: 103e03067;  */

void FUN_103e03010(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e03068; end: 103e03077; -[SCAdShake2ReportMetadata adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e03068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130111d0));
  return;
}



/* Entry: 103e03078; end: 103e03377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e03078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011188);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011190);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011198);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111a0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111a8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111b0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111b8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111c0);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111c8);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_1130111d0) = param_19;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e03378; end: 103e035a7; -[SCAdShake2ReportMetadata initWithAdRequestUrl:adRequestTimestamp:adRequestCompleteTimestamp:adRequestStatusCode:adMediaSize:adMediaCacheHit:adInsertionTimestamp:adFirstViewStartTimestamp:adFirstViewEndTimestamp:adResponse:] */

void FUN_103e03378(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_3 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_2;
    uStack_88 = param_3;
  }
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_4;
    uStack_a0 = param_2;
  }
  if (param_5 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = param_2;
    uStack_a8 = param_5;
  }
  lVar2 = param_6;
  _objc_retain();
  lVar3 = param_7;
  _objc_retain();
  lVar4 = param_8;
  _objc_retain();
  lVar5 = param_9;
  _objc_retain();
  lVar6 = param_10;
  _objc_retain();
  lVar7 = param_11;
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar10 = param_2;
    param_2 = uStack_c0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar10 = param_2;
    _objc_release(lVar2);
    uStack_b8 = param_6;
  }
  if (lVar3 == 0) {
    uStack_d0 = 0;
    uVar12 = 0;
    param_7 = uStack_d0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar10;
    _objc_release(lVar3);
    uVar12 = uVar10;
    uVar10 = uVar8;
  }
  if (lVar4 == 0) {
    param_8 = 0;
    uVar1 = 0;
    uVar8 = uVar10;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar10;
    _objc_release(lVar4);
    uVar1 = uVar10;
  }
  if (lVar5 == 0) {
    param_9 = 0;
    uVar10 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar9 = uVar8;
    _objc_release(lVar5);
    uVar10 = uVar8;
    uVar8 = uVar9;
  }
  if (lVar6 == 0) {
    param_10 = 0;
    uVar9 = 0;
    uVar11 = uVar8;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar11 = uVar8;
    _objc_release(lVar6);
    uVar9 = uVar8;
  }
  if (lVar7 == 0) {
    param_11 = 0;
    uVar11 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar7);
  }
  func_0x000103e031f8(uStack_88,uStack_90,uStack_98,uStack_a0,uStack_a8,uStack_b0,uStack_b8,param_2,
                      param_7,uVar12,param_8,uVar1,param_9,uVar10,param_10,uVar9,param_11,uVar11,
                      param_12);
  return;
}



/* Entry: 103e035a8; end: 103e03617;  */

undefined8 FUN_103e035a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103e037a8(param_1);
  FUN_103e03990(param_1);
  return uVar1;
}



/* Entry: 103e03618; end: 103e0361b; -[SCAdShake2ReportMetadata copyWithZone:] */

void FUN_103e03618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e0361c; end: 103e0364f; -[SCAdShake2ReportMetadata description] */

void FUN_103e0361c(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_103e039c4(auStack_a8);
  FUN_103e03990(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e03650; end: 103e036cb; -[SCAdShake2ReportMetadata init] */

void FUN_103e03650(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdShake2ReportMetadataWrapper.swift",0x40,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e03698);
  (*pcVar1)();
}



/* Entry: 103e036cc; end: 103e037a7; -[SCAdShake2ReportMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e036cc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011188 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011190 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011198 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111c0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130111c8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130111d0));
  return;
}



/* Entry: 103e037a8; end: 103e0398f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e037a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011188);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011190);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011198);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar2 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111a0);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111a8);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111b0);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  uVar2 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111b8);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar2;
  uVar2 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111c0);
  puVar1[1] = param_1[0xf];
  *puVar1 = uVar2;
  uVar2 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130111c8);
  puVar1[1] = param_1[0x11];
  *puVar1 = uVar2;
  uStack_c8 = param_1[0x12];
  *(undefined8 *)(unaff_x20 + _DAT_1130111d0) = uStack_c8;
  FUN_103e03b3c(&uStack_40,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_50,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_60,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_70,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_80,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_90,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_a0,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_b0,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_c0,auStack_d8,0x112d35ff8,&UNK_10d900cd0);
  FUN_103e03b3c(&uStack_c8,auStack_d8,0x113011200,&UNK_10dc98728);
  _objc_msgSendSuper2(&stack0xffffffffffffff18,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e03990; end: 103e039c3;  */

undefined8 FUN_103e03990(undefined8 param_1)

{
  (*(code *)(undefined *)0x103dece40)();
  return param_1;
}



/* Entry: 103e039c4; end: 103e03b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e039c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113011188);
  puVar2 = (undefined8 *)(param_2 + _DAT_113011190);
  puVar3 = (undefined8 *)(param_2 + _DAT_113011198);
  puVar4 = (undefined8 *)(param_2 + _DAT_1130111a0);
  puVar5 = (undefined8 *)(param_2 + _DAT_1130111a8);
  puVar6 = (undefined8 *)(param_2 + _DAT_1130111b0);
  puVar7 = (undefined8 *)(param_2 + _DAT_1130111b8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_1130111d0);
  puVar8 = (undefined8 *)(param_2 + _DAT_1130111c0);
  puVar9 = (undefined8 *)(param_2 + _DAT_1130111c8);
  uVar10 = puVar1[1];
  uVar13 = *puVar1;
  uVar12 = puVar2[1];
  uVar15 = puVar2[1];
  uVar14 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = puVar3[1];
  uVar15 = *puVar3;
  uVar14 = puVar4[1];
  uVar17 = puVar4[1];
  uVar16 = *puVar4;
  param_1[5] = puVar3[1];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = puVar5[1];
  uVar17 = *puVar5;
  uVar16 = puVar6[1];
  uVar19 = puVar6[1];
  uVar18 = *puVar6;
  param_1[9] = puVar5[1];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = puVar7[1];
  uVar19 = *puVar7;
  uVar18 = puVar8[1];
  uVar21 = puVar8[1];
  uVar20 = *puVar8;
  param_1[0xd] = puVar7[1];
  param_1[0xc] = uVar19;
  param_1[0xf] = uVar21;
  param_1[0xe] = uVar20;
  uVar19 = puVar9[1];
  uVar20 = *puVar9;
  param_1[0x11] = puVar9[1];
  param_1[0x10] = uVar20;
  param_1[0x12] = uVar11;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar11);
  return;
}



/* Entry: 103e03b1c; end: 103e03b3b;  */

void FUN_103e03b1c(void)

{
  _objc_opt_self(&PTR_PTR_11294e300);
  return;
}



/* Entry: 103e03b3c; end: 103e03b83;  */

undefined8 FUN_103e03b3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103e03b84; end: 103e03b93; -[SCAdShake2ReportWebMetadata config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e03b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011208));
  return;
}



/* Entry: 103e03b94; end: 103e03cfb; -[SCAdShake2ReportWebMetadata lastLoadedURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e03b94(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_103e04028(param_1 + _DAT_1138121e0,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e03cfc; end: 103e03e23; -[SCAdShake2ReportWebMetadata initWithConfig:lastLoadedURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103e03cfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_50 - extraout_x8;
  if (param_4 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_4);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_4 == 0,1);
  *(undefined8 *)(param_1 + _DAT_113011208) = param_3;
  FUN_103e04028(lVar3,param_1 + _DAT_1138121e0,0x112d36580,&UNK_10d9016d0);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  plVar5 = &lStack_50;
  _objc_msgSendSuper2(plVar5,puVar1);
  func_0x0001000293e4(lVar3);
  return plVar5;
}



/* Entry: 103e03e24; end: 103e03e53;  */

void FUN_103e03e24(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e03e54(param_1);
  return;
}



/* Entry: 103e03e54; end: 103e04027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e03e54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _swift_getObjectType();
  lVar1 = 0;
  func_0x0001046305a8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar3 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar3 - extraout_x12;
  lVar4 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  FUN_103e04028(param_1,lVar7,0x112d3ae80,&UNK_10d912fe0);
  lVar4 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)lVar4 != 1) {
    func_0x000103e04070(lVar7,lVar6);
    func_0x0001018cf8d4(lVar6,puVar3);
    uVar2 = 0;
    func_0x00010464ec90(0);
    _objc_allocWithZone();
    func_0x0001046487dc(puVar3,uVar2);
    func_0x000103e040b4(lVar6,&SUB_1046305a8);
    puVar5 = puVar3;
  }
  *(undefined1 **)(unaff_x20 + _DAT_113011208) = puVar5;
  lVar4 = 0;
  FUN_103ded290();
  FUN_103e04028(param_1 + *(int *)(lVar4 + 0x14),unaff_x20 + _DAT_1138121e0,0x112d36580,
                &UNK_10d9016d0);
  puVar5 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  func_0x000103e040b4(param_1,FUN_103ded290);
  return puVar5;
}



/* Entry: 103e04028; end: 103e040ef;  */

undefined8 FUN_103e04028(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103e040f0; end: 103e040f3; -[SCAdShake2ReportWebMetadata copyWithZone:] */

void FUN_103e040f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e040f4; end: 103e0421b; -[SCAdShake2ReportWebMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e040f4(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  FUN_103ded290();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + _DAT_113011208);
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar2,1,1,lVar3);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _objc_retain(lVar3);
    func_0x0001046465c0(puVar2);
    lVar3 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar2,0,1,lVar3);
  }
  FUN_103e04028(param_1 + _DAT_1138121e0,puVar2 + *(int *)(lVar1 + 0x14),0x112d36580,&UNK_10d9016d0)
  ;
  _objc_release(param_1);
  func_0x000103e040b4(puVar2,FUN_103ded290);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e0421c; end: 103e04297; -[SCAdShake2ReportWebMetadata init] */

void FUN_103e0421c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdShake2ReportWebMetadataWrapper.swift",0x43,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e04264);
  (*pcVar1)();
}



/* Entry: 103e04298; end: 103e042cf; -[SCAdShake2ReportWebMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e04298(long param_1)

{
  long lVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011208));
  param_1 = param_1 + _DAT_1138121e0;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103e042d0; end: 103e042d7;  */

void FUN_103e042d0(void)

{
  if (lRam0000000113011238 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7c5dcc);
  return;
}



/* Entry: 103e042d8; end: 103e0430f;  */

void FUN_103e042d8(undefined8 param_1)

{
  if (lRam0000000113011238 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c5dcc);
  return;
}



/* Entry: 103e04310; end: 103e04387;  */

void FUN_103e04310(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dc98750;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103e04388; end: 103e04393; -[SCAdServeOperationMetricsContext adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04388(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011248))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011248);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e04394; end: 103e0439f; -[SCAdServeOperationMetricsContext adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e04394(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011250);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e043a0; end: 103e043f7;  */

void FUN_103e043a0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e043f8; end: 103e04407; -[SCAdServeOperationMetricsContext adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e043f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011258);
}



/* Entry: 103e04408; end: 103e04417; -[SCAdServeOperationMetricsContext invalidateEmptyCollectionItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e04408(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113011260);
}


