/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00096fec; end: 0009702f;  */

void FUN_00096fec(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00097030; end: 00097033;  */

void FUN_00097030(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00097034; end: 000970bf;  */

void FUN_00097034(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_38 = puStack_40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 000970c0; end: 0009710b;  */

undefined8 FUN_000970c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_0009710c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 0009710c; end: 0009719f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009710c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648a0);
  *(undefined8 *)(unaff_x20 + _DAT_00aeb198) = 0;
  lVar1 = _DAT_00aeb1a8;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb1b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb1a0) = param_2;
  return;
}



/* Entry: 000971a0; end: 0009721b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000971a0(undefined8 param_1)

{
  char cStack_31;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&cStack_31,FUN_00097360);
  if (cStack_31 == '\x01') {
    FUN_000a08b0(param_1);
  }
  return;
}



/* Entry: 0009721c; end: 000972a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009721c(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 000972a4; end: 000972c7;  */

void FUN_000972a4(void)

{
  func_0x00097244();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000972c8; end: 000972d3;  */

void FUN_000972c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841f38);
  return;
}



/* Entry: 000972d4; end: 0009731f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000972d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648a0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009731c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00097320; end: 0009735f;  */

void FUN_00097320(void)

{
  FUN_000971a0();
  return;
}



/* Entry: 00097360; end: 00097397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097360(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_00aeb198) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_00aeb198),1)) {
    *(long *)(unaff_x20 + _DAT_00aeb198) = lVar1;
    *(bool *)param_1 = *(long *)(unaff_x20 + _DAT_00aeb1a0) < lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x97398);
  (*pcVar2)();
}



/* Entry: 00097398; end: 000973cf;  */

void FUN_00097398(undefined8 param_1)

{
  _swift_allocObject();
  FUN_00092368(param_1);
  return;
}



/* Entry: 000973d0; end: 00097493;  */

undefined1  [16] FUN_000973d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *unaff_x20;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_000976d8(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  uVar2 = param_2;
  FUN_00097840();
  _swift_release(param_2);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar3 = &DAT_007d50c0;
  uStack_48 = uVar2;
  _swift_getWitnessTable(&DAT_007d50c0,uVar1);
  puVar4 = &uStack_48;
  (*pcVar5)(puVar4,uVar1,puVar3);
  _swift_release(uVar2);
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 00097494; end: 000974af;  */

void FUN_00097494(undefined8 param_1)

{
  FUN_00092370();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}



/* Entry: 000974b0; end: 000974bf;  */

void FUN_000974b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841f88);
  return;
}



/* Entry: 000974c0; end: 000974f3;  */

void FUN_000974c0(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 000974f4; end: 000974f7;  */

void FUN_000974f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000974f8; end: 0009756f;  */

void FUN_000974f8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_0099ae88 + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 00097570; end: 0009763b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097570(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(puVar3,param_1,lVar2);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,lVar2);
  FUN_000a08b0(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 0009763c; end: 000976b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009763c(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 000976b4; end: 000976d7;  */

void FUN_000976b4(void)

{
  func_0x00097664();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000976d8; end: 000976e3;  */

void FUN_000976d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841fe4);
  return;
}



/* Entry: 000976e4; end: 0009772f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000976e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648a8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00097730; end: 0009776f;  */

void FUN_00097730(void)

{
  FUN_00097570();
  return;
}



/* Entry: 00097770; end: 0009783f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097770(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b648a8);
  *(undefined8 *)((long)unaff_x20 + _DAT_00aeb2e0) = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,1,1,lVar2);
  _swift_retain(param_1);
  FUN_000a08b0(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 00097840; end: 00097877;  */

void FUN_00097840(undefined8 param_1)

{
  _swift_allocObject();
  FUN_00097770(param_1);
  return;
}



/* Entry: 00097878; end: 000978d7;  */

void FUN_00097878(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0xa8) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0),param_2);
  FUN_00092368(param_1);
  return;
}



/* Entry: 000978d8; end: 000979ab;  */

undefined1  [16] FUN_000978d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_00097bdc(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  uVar2 = param_2;
  func_0x00097cd4();
  _swift_release(param_2);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar3 = &DAT_007d5160;
  uStack_48 = uVar2;
  _swift_getWitnessTable(&DAT_007d5160,uVar1);
  puVar4 = &uStack_48;
  (*pcVar5)(puVar4,uVar1,puVar3);
  _swift_release(uVar2);
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 000979ac; end: 000979c3;  */

void FUN_000979ac(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000979c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0xa8) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0));
  return;
}



/* Entry: 000979c4; end: 00097a1b;  */

void FUN_000979c4(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_00092370();
  (**(code **)(*(long *)(*(long *)(lVar1 + 0xa8) + -8) + 8))
            ((long)param_1 + *(long *)(*param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 00097a1c; end: 00097a2b;  */

void FUN_00097a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842034);
  return;
}



/* Entry: 00097a2c; end: 00097a9b;  */

void FUN_00097a2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0xa8);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0xb0);
  }
  return;
}



/* Entry: 00097a9c; end: 00097a9f;  */

void FUN_00097a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00097aa0; end: 00097bb7;  */

void FUN_00097aa0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_0099ae88 + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 00097bb8; end: 00097bdb;  */

void FUN_00097bb8(void)

{
  func_0x00097b68();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00097bdc; end: 00097be7;  */

void FUN_00097bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008420a0);
  return;
}



/* Entry: 00097be8; end: 00097c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097be8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648b0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00097c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00097c34; end: 00097c73;  */

void FUN_00097c34(void)

{
  func_0x00097b18();
  return;
}



/* Entry: 00097c74; end: 00097d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097c74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648b0);
  *(undefined8 *)(unaff_x20 + _DAT_00aeb410) = param_1;
  _swift_retain(param_1);
  FUN_000a08b0(param_2);
  return;
}



/* Entry: 00097d68; end: 00097e43;  */

undefined1  [16] FUN_00097d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_00094f40(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00094b78(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4c08;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4c08,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00097e44; end: 00097e4b;  */

void FUN_00097e44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00097e4c; end: 00097e7f;  */

void FUN_00097e4c(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00097e80; end: 00097e8f;  */

void FUN_00097e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008420f0);
  return;
}



/* Entry: 00097e90; end: 00097ed3;  */

void FUN_00097e90(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00097ed4; end: 00097f33;  */

long * __s17SwiftSCObservable10ObservableC4takeyACyxGSiF(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_00097f34(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  FUN_00092368(lVar1);
  _swift_retain();
  return unaff_x20;
}



/* Entry: 00097f34; end: 00097f3f;  */

void FUN_00097f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084215c);
  return;
}



/* Entry: 00097f40; end: 00097f87;  */

void FUN_00097f40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00097f88; end: 00097f8b;  */

void FUN_00097f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00097f8c; end: 00097fcf;  */

void FUN_00097f8c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00097fd0; end: 0009808f;  */

undefined1  [16] FUN_00097fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  
  plVar5 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_0009835c(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  FUN_0009813c();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_007d5258;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d5258,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 00098090; end: 000980ab;  */

void FUN_00098090(undefined8 param_1)

{
  FUN_00092370();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x20,7);
  return;
}



/* Entry: 000980ac; end: 000980af;  */

void FUN_000980ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000980b0; end: 0009813b;  */

void FUN_000980b0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_38 = puStack_40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 0009813c; end: 00098187;  */

undefined8 FUN_0009813c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00098188(param_1,param_2);
  return unaff_x20;
}



/* Entry: 00098188; end: 0009821b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098188(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648b8);
  *(undefined8 *)(unaff_x20 + _DAT_00aeb5c0) = 0;
  lVar1 = _DAT_00aeb5d0;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb5d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aeb5c8) = param_2;
  return;
}



/* Entry: 0009821c; end: 000982af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009821c(undefined8 param_1)

{
  byte bStack_31;
  
  func_0x000115a8(0xaeb688,&UNK_007da0b0);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&bStack_31,FUN_000983f4);
  if ((bStack_31 != 2) && (FUN_000a08b0(param_1), (bStack_31 & 1) != 0)) {
    FUN_000a08f8();
  }
  return;
}



/* Entry: 000982b0; end: 00098337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000982b0(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 00098338; end: 0009835b;  */

void FUN_00098338(void)

{
  func_0x000982d8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009835c; end: 00098367;  */

void FUN_0009835c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008421c8);
  return;
}



/* Entry: 00098368; end: 000983b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098368(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648b8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000983b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000983b4; end: 000983f3;  */

void FUN_000983b4(void)

{
  FUN_0009821c();
  return;
}



/* Entry: 000983f4; end: 00098437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000983f4(undefined1 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_00aeb5c0) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_00aeb5c0),1)) {
    *(long *)(unaff_x20 + _DAT_00aeb5c0) = lVar1;
    uVar2 = 2;
    if (lVar1 <= *(long *)(unaff_x20 + _DAT_00aeb5c8)) {
      uVar2 = lVar1 == *(long *)(unaff_x20 + _DAT_00aeb5c8);
    }
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x98438);
  (*pcVar3)();
}



/* Entry: 00098438; end: 0009848f;  */

void FUN_00098438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  FUN_00092368(param_2);
  return;
}



/* Entry: 00098490; end: 00098597;  */

undefined1  [16] FUN_00098490(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar7 = *(long **)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_00098dac(0);
  (**(code **)(lVar8 + 0x10))(puVar2,param_1,param_2);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_unknownObjectRetain(uVar5);
  FUN_000986fc(uVar9,puVar2,uVar5);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_007d5360;
  puStack_68 = puVar2;
  _swift_getWitnessTable(&DAT_007d5360,uVar1);
  ppuVar4 = &puStack_68;
  (*pcVar6)(ppuVar4,uVar1,puVar3);
  _swift_release(puVar2);
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = ppuVar4;
  return auVar10;
}



/* Entry: 00098598; end: 0009859f;  */

void FUN_00098598(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 000985a0; end: 000985d3;  */

void FUN_000985a0(long param_1)

{
  FUN_00092370();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 000985d4; end: 000985e3;  */

void FUN_000985d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842218);
  return;
}



/* Entry: 000985e4; end: 0009862f;  */

void FUN_000985e4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_20 = &UNK_007d52a8;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00098630; end: 00098633;  */

void FUN_00098630(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00098634; end: 000986fb;  */

void FUN_00098634(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x50);
    uVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      lStack_40 = *(long *)(uVar2 - 8) + 0x40;
      puStack_38 = &UNK_007d5308;
      puStack_30 = PTR___sBi64_WV_0099ae80 + 0x40;
      lVar1 = 0x13f;
      func_0x00098db8(0x13f,uVar2,*(undefined8 *)(param_1 + 0x58));
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x60);
      }
    }
  }
  return;
}



/* Entry: 000986fc; end: 00098757;  */

undefined8 FUN_000986fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00098758(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 00098758; end: 00098833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b648c0);
  lVar4 = *(long *)(*unaff_x20 + 0x80);
  lVar1 = *(long *)(lVar3 + 0x50);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar3 + 0x58),lVar1,&UNK_00842b70,&UNK_00842b78);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)unaff_x20 + lVar4,1,2,lVar3);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_2,lVar1);
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = param_1;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)) = param_3;
  return;
}



/* Entry: 00098834; end: 00098a0f;  */

void FUN_00098834(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  lVar2 = *(long *)(lVar7 + 0x58);
  lVar3 = 0;
  func_0x00098db8(0,uVar1,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x68),param_1,uVar1,lVar2);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_00842b70,&UNK_00842b78);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar9,1,1,lVar7);
  lVar4 = 0;
  __sSqMa(0,lVar7);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,0,2,lVar4);
  lVar7 = *(long *)(*unaff_x20 + 0x80);
  _swift_beginAccess((long)unaff_x20 + lVar7,auStack_78,0x21,0);
  (**(code **)(lVar10 + 0x28))((long)unaff_x20 + lVar7,puVar9,lVar3);
  _swift_endAccess(auStack_78);
  lVar3 = *unaff_x20;
  uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x70));
  _swift_getObjectType(uVar8);
  uVar11 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x78));
  puVar5 = &UNK_009a73f0;
  _swift_allocObject(&UNK_009a73f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar6 = &UNK_009a7468;
  _swift_allocObject(&UNK_009a7468,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(long *)(puVar6 + 0x18) = lVar2;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  _swift_retain(puVar5);
  FUN_000a4e0c(uVar11,FUN_0009b3a0,puVar6,uVar8);
  _swift_release(puVar5);
  _swift_release(puVar6);
  return;
}



/* Entry: 00098a10; end: 00098cdf;  */

void FUN_00098a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,&UNK_00842b70,&UNK_00842b78);
  lStack_b0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_b8 = (long)&lStack_c0 - extraout_x8;
  __sSqMa(0,lVar1);
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = ((long)&lStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar9 - extraout_x12;
  lVar3 = 0;
  func_0x00098db8(0,param_2,param_3);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar10 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 != (long *)0x0) {
    lVar11 = *(long *)(*plVar4 + 0x80);
    lStack_c0 = lVar10;
    _swift_beginAccess((long)plVar4 + lVar11,auStack_90,0,0);
    (**(code **)(lVar7 + 0x10))(lVar12,(long)plVar4 + lVar11,lVar3);
    lVar10 = lVar12;
    (**(code **)(lVar13 + 0x30))(lVar12,2,lVar2);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar13 + 0x20))(lVar8,lVar12,lVar2);
      (**(code **)(lVar13 + 0x10))(lVar9,lVar8,lVar2);
      lVar12 = lStack_b0;
      lVar5 = lVar9;
      (**(code **)(lStack_b0 + 0x30))(lVar9,1,lVar1);
      lVar10 = lStack_b8;
      if ((int)lVar5 != 1) {
        (**(code **)(lVar12 + 0x20))(lStack_b8,lVar9,lVar1);
        FUN_00098834(lVar10);
        _swift_release(plVar4);
        (**(code **)(lVar12 + 8))(lVar10,lVar1);
        (**(code **)(lVar13 + 8))(lVar8,lVar2);
        return;
      }
      pcVar6 = *(code **)(lVar13 + 8);
      (*pcVar6)(lVar8,lVar2);
      (*pcVar6)(lVar9,lVar2);
      lVar1 = lStack_c0;
      (**(code **)(lVar13 + 0x38))(lStack_c0,1,2,lVar2);
      _swift_beginAccess((long)plVar4 + lVar11,auStack_a8,0x21,0);
      (**(code **)(lVar7 + 0x28))((long)plVar4 + lVar11,lVar1,lVar3);
      _swift_endAccess(auStack_a8);
    }
    _swift_release(plVar4);
  }
  return;
}



/* Entry: 00098ce0; end: 00098d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098ce0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar2 = _DAT_00b648c0;
  lVar3 = *unaff_x20;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  lVar1 = *(long *)(lVar3 + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),lVar1);
  _swift_unknownObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  lVar4 = *(long *)(*unaff_x20 + 0x80);
  lVar2 = 0;
  func_0x00098db8(0,lVar1,*(undefined8 *)(lVar3 + 0x58));
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar4,lVar2);
  return;
}



/* Entry: 00098d88; end: 00098dab;  */

void FUN_00098d88(void)

{
  FUN_00098ce0();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00098dac; end: 00098dcb;  */

void FUN_00098dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842284);
  return;
}



/* Entry: 00098dcc; end: 00098e3f;  */

void FUN_00098dcc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar2 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 00098e40; end: 00099173;  */

long * FUN_00098e40(long *param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar11 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar11 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar6 = *(ulong *)(lVar11 + 0x40);
  if (uVar2 == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar10 = (uint)uVar6;
  uVar7 = uVar6;
  if (uVar3 < 2) {
    if (uVar10 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar8) {
        uVar7 = 4;
      }
      if (uVar8 < 0xff) {
        uVar7 = (ulong)(uVar8 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    uVar7 = uVar7 + uVar6;
  }
  uVar9 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  if ((7 < (uint)uVar9 || 0x18 < uVar7) || (*(uint *)(lVar11 + 0x50) & 0x100000) != 0) {
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  if (uVar3 < 2) {
    if (uVar10 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_00098fac;
        goto LAB_00098f68;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + uVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + uVar6);
      }
    }
    else {
LAB_00098f68:
      uVar8 = (uint)*(byte *)((long)param_2 + uVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar10 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar10 & 3) << 3);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar10 < 4) {
          uVar8 = uVar10;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_00098fd0;
      goto LAB_000990a4;
    }
  }
LAB_00098fac:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_00098fd0:
      if (uVar3 < 2) {
        if (uVar10 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        uVar6 = uVar7 + uVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,uVar6);
      return param_1;
    }
  }
LAB_000990a4:
  puVar5 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,uVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar10 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)((long)param_1 + uVar6) = 0;
        return param_1;
      }
      *(undefined2 *)((long)param_1 + uVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)((long)param_1 + uVar6) = 0;
  return param_1;
}



/* Entry: 00099174; end: 000992fb;  */

void FUN_00099174(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar10 = *(long *)(lVar5 + -8);
  uVar3 = *(uint *)(lVar10 + 0x54);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar3 - 1;
  }
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar1 < 2) {
    uVar7 = (uint)uVar8;
    uVar4 = uVar7 << 3;
    if (uVar7 < 4) {
      uVar9 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar4 & 0x1f);
      if (uVar9 < 0xff) {
        if (uVar9 == 0) goto LAB_00099240;
        goto LAB_00099200;
      }
      if (uVar9 < 0xffff) {
        uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
      }
      else {
        uVar9 = *(uint *)((long)param_1 + uVar8);
      }
    }
    else {
LAB_00099200:
      uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
    }
    if (uVar9 != 0) {
      uVar3 = 0;
      if (uVar7 < 4) {
        uVar3 = uVar9 - 1 << (ulong)(uVar4 & 0x1f);
      }
      if (uVar7 != 0) {
        uVar4 = 4;
        if (uVar7 < 4) {
          uVar4 = uVar7;
        }
        if ((int)uVar4 < 3) {
          if (uVar4 == 1) {
            uVar8 = (ulong)(byte)*param_1;
          }
          else {
            uVar8 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar4 == 3) {
          uVar8 = (ulong)(uint3)*param_1;
        }
        else {
          uVar8 = (ulong)*param_1;
        }
      }
      if (uVar1 + ((uint)uVar8 | uVar3) != -1) {
        return;
      }
      goto LAB_000992b8;
    }
  }
LAB_00099240:
  if (1 < uVar3) {
    puVar6 = param_1;
    (**(code **)(lVar10 + 0x30))(param_1,uVar3,lVar5);
    iVar2 = 0;
    if ((int)puVar6 != 0) {
      iVar2 = (int)puVar6 + -1;
    }
    if (iVar2 != 0) {
      return;
    }
  }
LAB_000992b8:
  puVar6 = param_1;
  (**(code **)(lVar10 + 0x30))(param_1,1,lVar5);
  if ((int)puVar6 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000992f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))(param_1,lVar5);
  return;
}



/* Entry: 000992fc; end: 00099597;  */

long FUN_000992fc(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar10 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  lVar6 = *(long *)(lVar10 + 0x40);
  if (uVar2 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar9 = (uint)lVar6;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_000993d0;
        goto LAB_0009938c;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + lVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + lVar6);
      }
    }
    else {
LAB_0009938c:
      uVar8 = (uint)*(byte *)((long)param_2 + lVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_000993f4;
      goto LAB_000994c8;
    }
  }
LAB_000993d0:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_000993f4:
      if (uVar3 < 2) {
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        lVar6 = uVar7 + lVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar6);
      return param_1;
    }
  }
LAB_000994c8:
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,lVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar9 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)(param_1 + lVar6) = 0;
        return param_1;
      }
      *(undefined2 *)(param_1 + lVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 0;
  return param_1;
}



/* Entry: 00099598; end: 00099b07;  */

uint * FUN_00099598(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar13 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
  }
  lVar9 = *(long *)(lVar13 + 0x40);
  if (uVar4 == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar12 = (uint)lVar9;
  if (uVar5 < 2) {
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (uVar11 < 0xff) {
        if (uVar11 == 0) goto LAB_00099670;
        goto LAB_0009962c;
      }
      if (uVar11 < 0xffff) {
        uVar11 = (uint)*(ushort *)((long)param_1 + lVar9);
      }
      else {
        uVar11 = *(uint *)((long)param_1 + lVar9);
      }
    }
    else {
LAB_0009962c:
      uVar11 = (uint)*(byte *)((long)param_1 + lVar9);
    }
    if (uVar11 == 0) goto LAB_00099670;
    uVar2 = 0;
    if (uVar12 < 4) {
      uVar2 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_1;
        }
        else {
          uVar11 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_1;
      }
      else {
        uVar11 = *param_1;
      }
    }
    if ((uVar11 | uVar2) + uVar5 == -1) goto LAB_00099778;
LAB_00099704:
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (0xfe < uVar11) {
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
        goto LAB_00099738;
      }
      if (uVar11 != 0) goto LAB_00099734;
LAB_00099854:
      if (uVar4 < 2) goto LAB_0009987c;
      pcVar14 = *(code **)(lVar13 + 0x30);
      goto LAB_00099860;
    }
LAB_00099734:
    uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
LAB_00099738:
    if (uVar11 == 0) goto LAB_00099854;
    uVar4 = 0;
    if (uVar12 < 4) {
      uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_2;
        }
        else {
          uVar11 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_2;
      }
      else {
        uVar11 = *param_2;
      }
    }
    if (uVar5 + (uVar11 | uVar4) == -1) goto LAB_0009987c;
LAB_00099a74:
    if (1 < uVar5) goto LAB_00099ac8;
    if (3 < uVar12) goto LAB_0009984c;
LAB_00099a84:
    uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
    uVar10 = 2;
    if (0xfffe < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0xff) {
      uVar10 = (ulong)(uVar5 != 0);
    }
LAB_00099ac4:
    lVar9 = uVar10 + lVar9;
  }
  else {
LAB_00099670:
    if (1 < uVar4) {
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar7 = param_1;
      (*pcVar14)(param_1,uVar4,lVar6);
      if (1 < (uint)puVar7) {
        if (uVar5 < 2) goto LAB_00099704;
LAB_00099860:
        puVar7 = param_2;
        (*pcVar14)(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 == 0) {
LAB_0009987c:
          puVar7 = param_2;
          (**(code **)(lVar13 + 0x30))(param_2,1,lVar6);
          if ((int)puVar7 == 0) {
            (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar6);
            (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
          }
          else {
            _memcpy(param_1,param_2,lVar9);
          }
          if (1 < uVar5) {
            return param_1;
          }
          if (uVar12 < 4) {
            uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >>
                    (ulong)(uVar12 << 3 & 0x1f);
            if (0xfe < uVar5) {
              if (0xfffe < uVar5) {
                pbVar1 = (byte *)((long)param_1 + lVar9);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                return param_1;
              }
              ((byte *)((long)param_1 + lVar9))[0] = 0;
              ((byte *)((long)param_1 + lVar9))[1] = 0;
              return param_1;
            }
            if (uVar5 == 0) {
              return param_1;
            }
          }
          *(byte *)((long)param_1 + lVar9) = 0;
          return param_1;
        }
        goto LAB_00099a74;
      }
    }
    if (uVar5 < 2) {
LAB_00099778:
      if (uVar12 < 4) {
        uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
        if (uVar11 < 0xff) {
          if (uVar11 == 0) goto LAB_000997ec;
          goto LAB_000997a8;
        }
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
      }
      else {
LAB_000997a8:
        uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
      }
      if (uVar11 == 0) goto LAB_000997ec;
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 4;
        if (uVar12 < 4) {
          uVar11 = uVar12;
        }
        if ((int)uVar11 < 3) {
          if (uVar11 == 1) {
            uVar11 = (uint)(byte)*param_2;
          }
          else {
            uVar11 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*param_2;
        }
        else {
          uVar11 = *param_2;
        }
      }
      if (uVar5 + (uVar11 | uVar4) != -1) {
LAB_00099814:
        puVar7 = param_1;
        (**(code **)(lVar13 + 0x30))(param_1,1,lVar6);
        if ((int)puVar7 == 0) {
          (**(code **)(lVar13 + 8))(param_1,lVar6);
        }
        if (1 < uVar5) goto LAB_00099ac8;
        if (uVar12 < 4) goto LAB_00099a84;
LAB_0009984c:
        uVar10 = 1;
        goto LAB_00099ac4;
      }
    }
    else {
LAB_000997ec:
      if (1 < uVar4) {
        puVar7 = param_2;
        (**(code **)(lVar13 + 0x30))(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 != 0) goto LAB_00099814;
      }
    }
    pcVar14 = *(code **)(lVar13 + 0x30);
    puVar7 = param_1;
    (*pcVar14)(param_1,1,lVar6);
    puVar8 = param_2;
    (*pcVar14)(param_2,1,lVar6);
    if ((int)puVar7 == 0) {
      if ((int)puVar8 == 0) {
        (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar6);
        return param_1;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar6);
    }
    else if ((int)puVar8 == 0) {
      (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
      return param_1;
    }
  }
LAB_00099ac8:
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar9);
  return param_1;
}



/* Entry: 00099b08; end: 00099da3;  */

long FUN_00099b08(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar10 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  lVar6 = *(long *)(lVar10 + 0x40);
  if (uVar2 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar9 = (uint)lVar6;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_00099bdc;
        goto LAB_00099b98;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + lVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + lVar6);
      }
    }
    else {
LAB_00099b98:
      uVar8 = (uint)*(byte *)((long)param_2 + lVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_00099c00;
      goto LAB_00099cd4;
    }
  }
LAB_00099bdc:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_00099c00:
      if (uVar3 < 2) {
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        lVar6 = uVar7 + lVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar6);
      return param_1;
    }
  }
LAB_00099cd4:
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,lVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar9 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)(param_1 + lVar6) = 0;
        return param_1;
      }
      *(undefined2 *)(param_1 + lVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 0;
  return param_1;
}



/* Entry: 00099da4; end: 0009a313;  */

uint * FUN_00099da4(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar13 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
  }
  lVar9 = *(long *)(lVar13 + 0x40);
  if (uVar4 == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar12 = (uint)lVar9;
  if (uVar5 < 2) {
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (uVar11 < 0xff) {
        if (uVar11 == 0) goto LAB_00099e7c;
        goto LAB_00099e38;
      }
      if (uVar11 < 0xffff) {
        uVar11 = (uint)*(ushort *)((long)param_1 + lVar9);
      }
      else {
        uVar11 = *(uint *)((long)param_1 + lVar9);
      }
    }
    else {
LAB_00099e38:
      uVar11 = (uint)*(byte *)((long)param_1 + lVar9);
    }
    if (uVar11 == 0) goto LAB_00099e7c;
    uVar2 = 0;
    if (uVar12 < 4) {
      uVar2 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_1;
        }
        else {
          uVar11 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_1;
      }
      else {
        uVar11 = *param_1;
      }
    }
    if ((uVar11 | uVar2) + uVar5 == -1) goto LAB_00099f84;
LAB_00099f10:
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (0xfe < uVar11) {
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
        goto LAB_00099f44;
      }
      if (uVar11 != 0) goto LAB_00099f40;
LAB_0009a060:
      if (uVar4 < 2) goto LAB_0009a088;
      pcVar14 = *(code **)(lVar13 + 0x30);
      goto LAB_0009a06c;
    }
LAB_00099f40:
    uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
LAB_00099f44:
    if (uVar11 == 0) goto LAB_0009a060;
    uVar4 = 0;
    if (uVar12 < 4) {
      uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_2;
        }
        else {
          uVar11 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_2;
      }
      else {
        uVar11 = *param_2;
      }
    }
    if (uVar5 + (uVar11 | uVar4) == -1) goto LAB_0009a088;
LAB_0009a280:
    if (1 < uVar5) goto LAB_0009a2d4;
    if (3 < uVar12) goto LAB_0009a058;
LAB_0009a290:
    uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
    uVar10 = 2;
    if (0xfffe < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0xff) {
      uVar10 = (ulong)(uVar5 != 0);
    }
LAB_0009a2d0:
    lVar9 = uVar10 + lVar9;
  }
  else {
LAB_00099e7c:
    if (1 < uVar4) {
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar7 = param_1;
      (*pcVar14)(param_1,uVar4,lVar6);
      if (1 < (uint)puVar7) {
        if (uVar5 < 2) goto LAB_00099f10;
LAB_0009a06c:
        puVar7 = param_2;
        (*pcVar14)(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 == 0) {
LAB_0009a088:
          puVar7 = param_2;
          (**(code **)(lVar13 + 0x30))(param_2,1,lVar6);
          if ((int)puVar7 == 0) {
            (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar6);
            (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
          }
          else {
            _memcpy(param_1,param_2,lVar9);
          }
          if (1 < uVar5) {
            return param_1;
          }
          if (uVar12 < 4) {
            uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >>
                    (ulong)(uVar12 << 3 & 0x1f);
            if (0xfe < uVar5) {
              if (0xfffe < uVar5) {
                pbVar1 = (byte *)((long)param_1 + lVar9);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                return param_1;
              }
              ((byte *)((long)param_1 + lVar9))[0] = 0;
              ((byte *)((long)param_1 + lVar9))[1] = 0;
              return param_1;
            }
            if (uVar5 == 0) {
              return param_1;
            }
          }
          *(byte *)((long)param_1 + lVar9) = 0;
          return param_1;
        }
        goto LAB_0009a280;
      }
    }
    if (uVar5 < 2) {
LAB_00099f84:
      if (uVar12 < 4) {
        uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
        if (uVar11 < 0xff) {
          if (uVar11 == 0) goto LAB_00099ff8;
          goto LAB_00099fb4;
        }
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
      }
      else {
LAB_00099fb4:
        uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
      }
      if (uVar11 == 0) goto LAB_00099ff8;
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 4;
        if (uVar12 < 4) {
          uVar11 = uVar12;
        }
        if ((int)uVar11 < 3) {
          if (uVar11 == 1) {
            uVar11 = (uint)(byte)*param_2;
          }
          else {
            uVar11 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*param_2;
        }
        else {
          uVar11 = *param_2;
        }
      }
      if (uVar5 + (uVar11 | uVar4) != -1) {
LAB_0009a020:
        puVar7 = param_1;
        (**(code **)(lVar13 + 0x30))(param_1,1,lVar6);
        if ((int)puVar7 == 0) {
          (**(code **)(lVar13 + 8))(param_1,lVar6);
        }
        if (1 < uVar5) goto LAB_0009a2d4;
        if (uVar12 < 4) goto LAB_0009a290;
LAB_0009a058:
        uVar10 = 1;
        goto LAB_0009a2d0;
      }
    }
    else {
LAB_00099ff8:
      if (1 < uVar4) {
        puVar7 = param_2;
        (**(code **)(lVar13 + 0x30))(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 != 0) goto LAB_0009a020;
      }
    }
    pcVar14 = *(code **)(lVar13 + 0x30);
    puVar7 = param_1;
    (*pcVar14)(param_1,1,lVar6);
    puVar8 = param_2;
    (*pcVar14)(param_2,1,lVar6);
    if ((int)puVar7 == 0) {
      if ((int)puVar8 == 0) {
        (**(code **)(lVar13 + 0x28))(param_1,param_2,lVar6);
        return param_1;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar6);
    }
    else if ((int)puVar8 == 0) {
      (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar6);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
      return param_1;
    }
  }
LAB_0009a2d4:
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar9);
  return param_1;
}



/* Entry: 0009a314; end: 0009a4c3;  */

int FUN_0009a314(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar1 = 0;
  if (2 < uVar2) {
    uVar1 = uVar2 - 3;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar3 < 2) {
    if ((uint)uVar7 < 4) {
      uVar6 = (uint)uVar7 << 3;
      uVar3 = (~(-1 << (ulong)(uVar6 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar6 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar3) {
        uVar8 = 4;
      }
      if (uVar3 < 0xff) {
        uVar8 = (ulong)(uVar3 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    uVar7 = uVar8 + uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_0009a448;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_0009a448;
      goto LAB_0009a3e0;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_0009a3e0:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_0009a448:
  if (uVar2 < 4) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if (2 < (uint)param_1) {
    return (uint)param_1 - 3;
  }
  return 0;
}



/* Entry: 0009a4c4; end: 0009a793;  */

void FUN_0009a4c4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar7 = *(long *)(lVar4 + -8);
  uVar8 = *(uint *)(lVar7 + 0x54);
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar8 - 1;
  }
  uVar5 = 0;
  if (2 < uVar8) {
    uVar5 = uVar8 - 3;
  }
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar11 = lVar6;
  if (uVar8 == 0) {
    lVar11 = lVar6 + 1;
  }
  if (uVar2 < 2) {
    if ((uint)lVar11 < 4) {
      uVar10 = (uint)lVar11 << 3;
      uVar10 = (~(-1 << (ulong)(uVar10 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar10 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar10) {
        uVar9 = 4;
      }
      if (uVar10 < 0xff) {
        uVar9 = (ulong)(uVar10 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar11 = uVar9 + lVar11;
  }
  uVar10 = (uint)lVar11;
  if (param_3 < uVar5 || param_3 - uVar5 == 0) {
    bVar13 = 0;
  }
  else if (uVar10 < 4) {
    uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar13 = 2;
    if (0xffff < uVar1) {
      bVar13 = 4;
    }
    if (uVar1 < 0x100) {
      bVar13 = 1 < uVar1;
    }
  }
  else {
    bVar13 = 1;
  }
  if (uVar5 < param_2) {
    param_2 = param_2 + ~uVar5;
    if (uVar10 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar11);
        uVar3 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar11);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(char *)((long)param_1 + lVar11) = (char)iVar12;
      }
    }
    else if (bVar13 == 2) {
      *(short *)((long)param_1 + lVar11) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + lVar11) = iVar12;
    }
  }
  else {
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(undefined1 *)((long)param_1 + lVar11) = 0;
      }
    }
    else if (bVar13 == 2) {
      *(undefined2 *)((long)param_1 + lVar11) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar11) = 0;
    }
    if ((param_2 != 0) && (3 < uVar8)) {
      if (param_2 + 2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0009a714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2 + 3,uVar8,lVar4);
        return;
      }
      uVar5 = (uint)lVar6;
      uVar8 = 0xffffffff;
      if (uVar5 < 4) {
        uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
      }
      if (uVar5 != 0) {
        uVar8 = uVar8 & (param_2 - uVar2) + 1;
        uVar2 = 4;
        if (uVar5 < 4) {
          uVar2 = uVar5;
        }
        _bzero(param_1);
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            *(char *)param_1 = (char)uVar8;
          }
          else {
            *(short *)param_1 = (short)uVar8;
          }
        }
        else if (uVar2 == 3) {
          *(short *)param_1 = (short)uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else {
          *param_1 = uVar8;
        }
      }
    }
  }
  return;
}



/* Entry: 0009a794; end: 0009a8db;  */

int FUN_0009a794(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  uVar8 = *(ulong *)(lVar6 + 0x40);
  if (uVar2 == 0) {
    uVar8 = uVar8 + 1;
  }
  if (1 < uVar1) goto LAB_0009a85c;
  uVar7 = (uint)uVar8;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar9 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar3 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_0009a85c;
      goto LAB_0009a81c;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_0009a81c:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar8 | uVar2) + 1;
  }
LAB_0009a85c:
  if (uVar2 < 2) {
    iVar4 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x30))(param_1,uVar2,lVar5);
    iVar4 = 0;
    if ((int)param_1 != 0) {
      iVar4 = (int)param_1 + -1;
    }
  }
  return iVar4;
}



/* Entry: 0009a8dc; end: 0009a8df;  */

void FUN_0009a8dc(void)

{
  return;
}



/* Entry: 0009a8e0; end: 0009aac3;  */

void FUN_0009a8e0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  bVar5 = 0;
  lVar7 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar7 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  if (uVar2 == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar9 = (uint)lVar8;
  if (uVar1 < 2) {
    if (uVar9 < 4) {
      uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      bVar5 = 2;
      if (0xfffe < uVar3) {
        bVar5 = 4;
      }
      if (uVar3 < 0xff) {
        bVar5 = uVar3 != 0;
      }
    }
    else {
      bVar5 = 1;
    }
  }
  if (uVar1 < param_2) {
    param_2 = param_2 + ~uVar1;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar8);
        uVar4 = (undefined2)uVar1;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar8);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar8) = (char)iVar10;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar8) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar8) = iVar10;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar8) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar8) = 0;
    }
    if ((param_2 != 0) && (1 < uVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0009aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))(param_1,param_2 + 1,uVar2,lVar6);
      return;
    }
  }
  return;
}



/* Entry: 0009aac4; end: 0009ae1f;  */

void FUN_0009aac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = *(undefined8 *)(lVar7 + 0x58);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_00842b70,&UNK_00842b78);
  lVar11 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)(lVar10 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar7 + 0x70));
  _swift_getObjectType();
  puVar4 = &UNK_009a73f0;
  uStack_68 = uVar8;
  _swift_allocObject(&UNK_009a73f0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar11 + 0x10))(auStack_70 + -extraout_x8,param_1,lVar3);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = &UNK_009a7440;
  _swift_allocObject(&UNK_009a7440,uVar9 + lVar10,uVar6 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar9,auStack_70 + -extraout_x8,lVar3);
  _swift_retain(puVar4);
  func_0x000a4d64(FUN_0009b318,puVar5,uStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}



/* Entry: 0009ae20; end: 0009aed7;  */

void FUN_0009ae20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x70));
  _swift_getObjectType(uVar3);
  puVar1 = &UNK_009a73f0;
  _swift_allocObject(&UNK_009a73f0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_009a7418;
  _swift_allocObject(&UNK_009a7418,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar4 + 0x58);
  *(undefined **)(puVar2 + 0x20) = puVar1;
  _swift_retain(puVar1);
  func_0x000a4d64(FUN_0009b28c,puVar2,uVar3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 0009aed8; end: 0009b1db;  */

void FUN_0009aed8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,&UNK_00842b70,&UNK_00842b78);
  lStack_c8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_c0 = (long)&lStack_d0 - extraout_x8;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = ((long)&lStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar8 - extraout_x12;
  lVar3 = 0;
  uStack_b0 = param_2;
  func_0x00098db8(0,param_2,param_3);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar6 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*plVar4 + 0x80);
  lStack_d0 = param_3;
  _swift_beginAccess((long)plVar4 + lVar7,auStack_90,0,0);
  (**(code **)(lVar11 + 0x10))(lVar6,(long)plVar4 + lVar7,lVar3);
  lVar5 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,2,lVar2);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))(lVar12,lVar6,lVar2);
    (**(code **)(lVar9 + 0x10))(lVar8,lVar12,lVar2);
    lVar6 = lStack_c8;
    lVar5 = lVar8;
    (**(code **)(lStack_c8 + 0x30))(lVar8,1,lVar1);
    if ((int)lVar5 == 1) {
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar12,lVar2);
      (*pcVar10)(lVar8,lVar2);
    }
    else {
      (**(code **)(lVar6 + 0x20))(lStack_c0,lVar8,lVar1);
      (**(code **)(lStack_d0 + 0x18))(*(undefined8 *)(*plVar4 + 0x68),lStack_c0,uStack_b0);
      (**(code **)(lVar6 + 8))(lStack_c0,lVar1);
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else if ((int)lVar5 != 1) goto LAB_0009b1b4;
  lVar1 = lStack_b8;
  (**(code **)(lVar9 + 0x38))(lStack_b8,2,2,lVar2);
  _swift_beginAccess((long)plVar4 + lVar7,auStack_a8,0x21,0);
  (**(code **)(lVar11 + 0x28))((long)plVar4 + lVar7,lVar1,lVar3);
  _swift_endAccess(auStack_a8);
  (**(code **)(lStack_d0 + 0x20))(*(undefined8 *)(*plVar4 + 0x68),uStack_b0);
LAB_0009b1b4:
  _swift_release(plVar4);
  return;
}



/* Entry: 0009b1dc; end: 0009b227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009b1dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648c0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009b224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009b228; end: 0009b267;  */

void FUN_0009b228(void)

{
  FUN_0009aac4();
  return;
}



/* Entry: 0009b268; end: 0009b28b;  */

void FUN_0009b268(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009b28c; end: 0009b297;  */

void FUN_0009b28c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar6,uVar1,&UNK_00842b70,&UNK_00842b78);
  lStack_c8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_c0 = (long)&lStack_d0 - extraout_x8;
  __sSqMa(0,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = ((long)&lStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar9 - extraout_x12;
  lVar4 = 0;
  uStack_b0 = uVar1;
  func_0x00098db8(0,uVar1,lVar6);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar8 - extraout_x12_00;
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  plVar5 = (long *)(lVar7 + 0x10);
  _swift_weakLoadStrong();
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*plVar5 + 0x80);
  lStack_d0 = lVar6;
  _swift_beginAccess((long)plVar5 + lVar7,auStack_90,0,0);
  (**(code **)(lVar12 + 0x10))(lVar8,(long)plVar5 + lVar7,lVar4);
  lVar6 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,2,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))(lVar13,lVar8,lVar3);
    (**(code **)(lVar10 + 0x10))(lVar9,lVar13,lVar3);
    lVar6 = lStack_c8;
    lVar8 = lVar9;
    (**(code **)(lStack_c8 + 0x30))(lVar9,1,lVar2);
    if ((int)lVar8 == 1) {
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar13,lVar3);
      (*pcVar11)(lVar9,lVar3);
    }
    else {
      (**(code **)(lVar6 + 0x20))(lStack_c0,lVar9,lVar2);
      (**(code **)(lStack_d0 + 0x18))(*(undefined8 *)(*plVar5 + 0x68),lStack_c0,uStack_b0);
      (**(code **)(lVar6 + 8))(lStack_c0,lVar2);
      (**(code **)(lVar10 + 8))(lVar13,lVar3);
    }
  }
  else if ((int)lVar6 != 1) goto LAB_0009b1b4;
  lVar6 = lStack_b8;
  (**(code **)(lVar10 + 0x38))(lStack_b8,2,2,lVar3);
  _swift_beginAccess((long)plVar5 + lVar7,auStack_a8,0x21,0);
  (**(code **)(lVar12 + 0x28))((long)plVar5 + lVar7,lVar6,lVar4);
  _swift_endAccess(auStack_a8);
  (**(code **)(lStack_d0 + 0x20))(*(undefined8 *)(*plVar5 + 0x68),uStack_b0);
LAB_0009b1b4:
  _swift_release(plVar5);
  return;
}



/* Entry: 0009b298; end: 0009b317;  */

void FUN_0009b298(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),&UNK_00842b70,
             &UNK_00842b78);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0009b318; end: 0009b37b;  */

void FUN_0009b318(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_00842b70,&UNK_00842b78);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar7 = unaff_x20 + (uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff));
  lVar3 = 0;
  func_0x00098db8(0,uVar1,uVar2);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = (long)puVar11 - extraout_x12;
  _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(lVar8 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 != (long *)0x0) {
    lVar13 = *(long *)(*plVar4 + 0x80);
    _swift_beginAccess((long)plVar4 + lVar13,auStack_90,0,0);
    (**(code **)(lVar12 + 0x10))(lVar10,(long)plVar4 + lVar13,lVar3);
    lVar5 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,&UNK_00842b70,&UNK_00842b78);
    lVar6 = 0;
    __sSqMa(0,lVar5);
    lVar14 = *(long *)(lVar6 + -8);
    lVar8 = lVar10;
    (**(code **)(lVar14 + 0x30))(lVar10,2,lVar6);
    if ((int)lVar8 == 0) {
      lVar8 = *(long *)(lVar5 + -8);
      (**(code **)(lVar8 + 0x10))(puVar11,lVar7,lVar5);
      (**(code **)(lVar8 + 0x38))(puVar11,0,1,lVar5);
      (**(code **)(lVar14 + 0x38))(puVar11,0,2,lVar6);
      _swift_beginAccess((long)plVar4 + lVar13,auStack_a8,0x21,0);
      (**(code **)(lVar12 + 0x28))((long)plVar4 + lVar13,puVar11,lVar3);
      _swift_endAccess(auStack_a8);
      _swift_release(plVar4);
      (**(code **)(lVar14 + 8))(lVar10,lVar6);
    }
    else {
      if ((int)lVar8 == 1) {
        FUN_00098834(lVar7);
      }
      _swift_release(plVar4);
    }
  }
  return;
}



/* Entry: 0009b37c; end: 0009b39f;  */

void FUN_0009b37c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}


