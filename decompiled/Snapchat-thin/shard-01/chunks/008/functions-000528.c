/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014def14; end: 1014def43;  */

void FUN_1014def14(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014def44; end: 1014def67;  */

void FUN_1014def44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014def68; end: 1014def7b;  */

void FUN_1014def68(void)

{
  return;
}



/* Entry: 1014def7c; end: 1014defbb;  */

void FUN_1014def7c(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3dec8(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1014defbc; end: 1014defd3;  */

void FUN_1014defbc(void)

{
  return;
}



/* Entry: 1014defd4; end: 1014deff3;  */

void FUN_1014defd4(void)

{
  func_0x000107c61168(&PTR_PTR_112daa1d8);
  return;
}



/* Entry: 1014deff4; end: 1014df023;  */

undefined1  [16] FUN_1014deff4(void)

{
  return ZEXT816(0x1103d00c8);
}



/* Entry: 1014df024; end: 1014df093;  */

void FUN_1014df024(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7520;
  func_0x000107c610f8();
  func_0x000107c45f9c();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1014df094; end: 1014df0cb;  */

void FUN_1014df094(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a7520;
  func_0x000107c610f8();
  func_0x000107c45f9c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1014df0cc; end: 1014df12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df0cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daa260) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112daa268) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014df130; end: 1014df18f; -[SCConfigUtilServices init] */

void FUN_1014df130(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConfigUtilServices.SCConfigUtilServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014df15c);
  (*pcVar1)();
}



/* Entry: 1014df190; end: 1014df1cf;  */

void FUN_1014df190(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x0001000b421c(param_1,param_2);
  return;
}



/* Entry: 1014df1d0; end: 1014df1f7; -[CircumstanceGrapheneContextManagerImpl initWithUserDefaultsKey:] */

void FUN_1014df1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x0001000b421c();
  return;
}



/* Entry: 1014df1f8; end: 1014df20b;  */

void FUN_1014df1f8(void)

{
  FUN_1014df61c();
  return;
}



/* Entry: 1014df20c; end: 1014df2bb; -[CircumstanceGrapheneContextManagerImpl getContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df20c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uStack_50 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  func_0x000100087bd4(&uStack_40,0x1014df66c,auStack_60,uVar1);
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (uStack_38 >> 0x3c < 0xf) {
    uVar1 = uStack_40;
    func_0x000107c5ee20(uStack_40,uStack_38);
    func_0x0001000b44c0(uStack_40,uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014df2bc; end: 1014df40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df2bc(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c5ba34(puVar2);
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112daa2a8);
    func_0x000107c5fadc(uVar4,((undefined8 *)(param_3 + _DAT_112daa2a8))[1]);
    func_0x000107c56bcc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x0001000b44c0(param_1,param_2);
  }
  else {
    func_0x000107c5ba34();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_3 + _DAT_112daa2a8);
    func_0x000107c5fadc(uVar4,((undefined8 *)(param_3 + _DAT_112daa2a8))[1]);
    func_0x000107c4ff88(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar4);
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_112daa2a0);
  uVar4 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100de78a0(param_1,param_2);
  func_0x0001000b44c0(uVar4,uVar3);
  return;
}



/* Entry: 1014df40c; end: 1014df427;  */

void FUN_1014df40c(void)

{
  long unaff_x20;
  
  FUN_1014df2bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014df428; end: 1014df4eb; -[CircumstanceGrapheneContextManagerImpl setContextWithData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df428(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_3 == 0) {
    func_0x000107c61174(param_1);
    param_3 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_1);
    lVar1 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
  }
  lStack_60 = param_3;
  uStack_58 = param_2;
  uStack_50 = param_1;
  func_0x000100087bd4(FUN_1014df658,auStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x0001000b44c0(param_3,param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1014df4ec; end: 1014df54b; -[CircumstanceGrapheneContextManagerImpl init] */

void FUN_1014df4ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConfigManagerSwift.CircumstanceGrapheneContextManagerImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014df518);
  (*pcVar1)();
}



/* Entry: 1014df54c; end: 1014df59b; -[CircumstanceGrapheneContextManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014df568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014df56c) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daa298));
  return;
}



/* Entry: 1014df59c; end: 1014df5eb;  */

void FUN_1014df59c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112daa2d8 != 0) {
    return;
  }
  puVar1 = &UNK_1103d04d0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112daa2d8 = param_1;
  return;
}



/* Entry: 1014df5ec; end: 1014df61b;  */

bool FUN_1014df5ec(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1014df61c; end: 1014df657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014df61c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112daa2a0);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  FUN_100de78a0();
  return;
}



/* Entry: 1014df658; end: 1014df67f;  */

void FUN_1014df658(void)

{
  FUN_1014df40c();
  return;
}



/* Entry: 1014df680; end: 1014df7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1014df680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112daa2e0;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2f0) = param_1;
  *(undefined8 *)(unaff_x20 + lVar1) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2f8) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_2);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef87090);
  uVar3 = param_4;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  *(char *)(unaff_x20 + _DAT_112daa300) = (char)uVar3;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 1014df7b0; end: 1014dfa2b; -[SCCofSyncEventLoggerImpl initWithAuthentication:initTimestamp:spectrum:appStartExperimentReader:] */

undefined8
FUN_1014df7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar2 = param_4;
  func_0x0001000f9c1c(param_1,param_4,param_5,param_6);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_6);
  return uVar2;
}



/* Entry: 1014dfa2c; end: 1014dfa7b; -[SCCofSyncEventLoggerImpl logSyncEvent:] */

/* WARNING: Possible PIC construction at 0x0001014dfa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014dfa68) */

void FUN_1014dfa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001014df848(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1014dfa7c; end: 1014dfedf;  */

/* WARNING: Possible PIC construction at 0x0001014dfafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014dfc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014dfc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014dfca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014dfcf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014dfcac) */
/* WARNING: Removing unreachable block (ram,0x0001014dfeac) */
/* WARNING: Removing unreachable block (ram,0x0001014dfcb8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfeb0) */
/* WARNING: Removing unreachable block (ram,0x0001014dfcc4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd34) */
/* WARNING: Removing unreachable block (ram,0x0001014dfce4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfc6c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfedc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfc98) */
/* WARNING: Removing unreachable block (ram,0x0001014dfc20) */
/* WARNING: Removing unreachable block (ram,0x0001014dfc2c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfc34) */
/* WARNING: Removing unreachable block (ram,0x0001014dfb00) */
/* WARNING: Removing unreachable block (ram,0x0001014dfcfc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd44) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd4c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfed8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd58) */
/* WARNING: Removing unreachable block (ram,0x0001014dfeb4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd68) */
/* WARNING: Removing unreachable block (ram,0x0001014dfeb8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd78) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd0c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd10) */
/* WARNING: Removing unreachable block (ram,0x0001014dfed4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd1c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfd94) */
/* WARNING: Removing unreachable block (ram,0x0001014dfda8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe1c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfec0) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe40) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe4c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe50) */
/* WARNING: Removing unreachable block (ram,0x0001014dfec8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe54) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe5c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe60) */
/* WARNING: Removing unreachable block (ram,0x0001014dfed0) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe64) */
/* WARNING: Removing unreachable block (ram,0x0001014dfdbc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfdc4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfebc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfde8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfdf4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfdf8) */
/* WARNING: Removing unreachable block (ram,0x0001014dfec4) */
/* WARNING: Removing unreachable block (ram,0x0001014dfdfc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe04) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe08) */
/* WARNING: Removing unreachable block (ram,0x0001014dfecc) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe0c) */
/* WARNING: Removing unreachable block (ram,0x0001014dfe70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dfa7c(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long in_x3;
  long in_x4;
  undefined8 in_x5;
  long unaff_x20;
  double dVar3;
  
  if (*(char *)(unaff_x20 + _DAT_112daa300) != '\x01') {
    return;
  }
  func_0x000107c400e0();
  func_0x000107c61180();
  if (in_x3 == 0) {
    puVar2 = PTR_PTR_1126b86e0;
    func_0x000107c610f8(PTR_PTR_1126b86e0);
    func_0x000107c453e4();
    func_0x000107c546dc();
    func_0x000107c49a6c(*(undefined8 *)(unaff_x20 + _DAT_112daa2e8));
    func_0x000107c557b0(puVar2);
    func_0x000107c55658(puVar2);
    func_0x000107c555bc(puVar2);
    func_0x000107c6071c();
    dVar3 = (param_1 - *(double *)(unaff_x20 + _DAT_112daa2f0)) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dfea4);
      (*pcVar1)();
    }
    if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dfea8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014dfeac);
      (*pcVar1)();
    }
    func_0x000107c52798(puVar2);
    func_0x000107c61434(in_x5);
    func_0x000107c5fadc(in_x4,in_x5);
    func_0x000107c6142c(in_x5);
    func_0x000107c5781c(puVar2);
  }
  else {
    func_0x000107c5faec();
    in_x4 = in_x3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1014dfee0; end: 1014dff9b; -[SCCofSyncEventLoggerImpl logPostResponseSyncEventWithTriggerEventType:isColdStart:eventStatus:configTargetingResponse:previousEtag:callSite:operationLatencySeconds:] */

void FUN_1014dfee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c5faec(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  FUN_1014dfa7c(param_1,param_4,param_5,param_6,param_7,param_8,param_3,param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1014dff9c; end: 1014dffa7;  */

bool FUN_1014dff9c(int param_1)

{
  return param_1 == 1;
}



/* Entry: 1014dffa8; end: 1014dffb3; -[SCCofSyncEventLoggerImpl isAppStateForeground:] */

bool FUN_1014dffa8(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 1014dffb4; end: 1014e0093;  */

/* WARNING: Possible PIC construction at 0x0001014e0050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e0054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014dffb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112daa300) == '\x01') {
    puVar1 = PTR_PTR_1126b86e0;
    func_0x000107c610f8(PTR_PTR_1126b86e0);
    func_0x000107c453e4();
    func_0x000107c546dc();
    func_0x000107c49a6c(*(undefined8 *)(unaff_x20 + _DAT_112daa2e8));
    func_0x000107c557b0(puVar1);
    func_0x000107c55658(puVar1);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5781c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1014e0094; end: 1014e00f3; -[SCCofSyncEventLoggerImpl logSyncEventClientErrorWithAppState:previousEtag:] */

void FUN_1014e0094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1014dffb4(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014e00f4; end: 1014e02af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1014e00f4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  
  puVar3 = PTR_PTR_1126b86e0;
  func_0x000107c610f8(PTR_PTR_1126b86e0);
  func_0x000107c453e4();
  func_0x000107c546dc();
  func_0x000107c49a6c(*(undefined8 *)(unaff_x20 + _DAT_112daa2e8));
  func_0x000107c557b0(puVar3);
  func_0x000107c55658(puVar3);
  func_0x000107c555bc(puVar3);
  func_0x000107c6071c();
  dVar5 = (param_1 - *(double *)(unaff_x20 + _DAT_112daa2f0)) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014e02a8);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar5) {
    if (dVar5 < 9.223372036854776e+18) {
      func_0x000107c52798(puVar3);
      uVar4 = 0x656e6f6e;
      if (param_5 != 0) {
        uVar4 = param_4;
      }
      lVar1 = -0x1c00000000000000;
      if (param_5 != 0) {
        lVar1 = param_5;
      }
      func_0x000107c61434(param_5);
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c5781c(puVar3);
      func_0x000107c61170(uVar4);
      uVar4 = 0x656e6f6e;
      if (param_7 != 0) {
        uVar4 = param_6;
      }
      lVar1 = -0x1c00000000000000;
      if (param_7 != 0) {
        lVar1 = param_7;
      }
      func_0x000107c61434(param_7);
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c56a88(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c55618(puVar3);
      return puVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014e02b0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014e02ac);
  (*pcVar2)();
}



/* Entry: 1014e02b0; end: 1014e037f; -[SCCofSyncEventLoggerImpl createBaseSyncEventWithEventStatus:isColdStart:previousEtag:newEtag:cofTriggerEventType:] */

void FUN_1014e02b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_1);
  FUN_1014e00f4(param_3,param_4,param_5,uVar1,param_6,param_2,param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1014e0380; end: 1014e03db; -[SCCofSyncEventLoggerImpl init] */

void FUN_1014e0380(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConfigManagerSwift.CofSyncEventLoggerImpl",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e03ac);
  (*pcVar1)();
}



/* Entry: 1014e03dc; end: 1014e0423; -[SCCofSyncEventLoggerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014e03f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e03fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e03dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112daa2e8));
  return;
}



/* Entry: 1014e0424; end: 1014e052b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1014e0424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar2 = _DAT_112daa330;
  func_0x000107c61614(unaff_x20 + _DAT_112daa330,0);
  *(undefined8 *)(unaff_x20 + _DAT_112daa338) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa340);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa348);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa350);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112daa358) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112daa360) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112daa368) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 1014e052c; end: 1014e05cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e052c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  
  puVar1 = *(undefined8 **)(unaff_x20 + _DAT_112daa338);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar2 = puVar1;
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar2;
    puStack_60 = puVar1;
    func_0x000107c61174(uVar3);
    func_0x0001000b0da8(0xd00000000000001e,0x800000010ef870e0,FUN_1014e1498,auStack_70);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1014e05cc; end: 1014e07d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e05cc(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar1 = 0;
  func_0x000107c5f7f0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12;
  func_0x000107c6071c();
  dVar10 = param_1;
  func_0x000107c5f830(lVar7);
  if (lRam0000000112daa398 != -1) {
    func_0x000107c61568(0x112daa398,FUN_1014e1374);
  }
  lVar3 = lVar1;
  func_0x000100028790(lVar1,0x112daa3a0);
  (**(code **)(lVar8 + 0x10))(puVar4,lVar3,lVar1);
  func_0x000107c5f858(lVar6,lVar7,puVar4);
  (**(code **)(lVar8 + 8))(puVar4,lVar1);
  pcVar5 = *(code **)(lVar9 + 8);
  (*pcVar5)(lVar7,lVar2);
  lVar1 = lVar6;
  func_0x000107c60058(lVar6);
  (*pcVar5)(lVar6,lVar2);
  func_0x000107c60060();
  func_0x000107c5f7f4(lVar1,1);
  if (*(char *)(param_3 + _DAT_112daa348 + 8) != '\x01') {
    lVar2 = *(long *)(param_3 + _DAT_112daa360);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5f7f4(lVar1,1);
      func_0x000107c6071c();
      func_0x000107c4be18((dVar10 - param_1) * 1000.0,lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1014e07d4; end: 1014e084b;  */

void FUN_1014e07d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000b0da8(0xd000000000000020,0x800000010ef87100,&UNK_1000faae4,auStack_50);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1014e084c; end: 1014e08e3;  */

void FUN_1014e084c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_1014e14a0();
    if ((ulong)puVar2 >> 0x3c < 0xf) {
      FUN_1014e08e4();
      func_0x000107c61170(param_2);
      func_0x0001000b44c0(lVar1,puVar2);
    }
    else {
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1014e08e4; end: 1014e0cc7;  */

/* WARNING: Removing unreachable block (ram,0x0001014e0a00) */
/* WARNING: Removing unreachable block (ram,0x0001014e0a0c) */
/* WARNING: Removing unreachable block (ram,0x0001014e0a50) */
/* WARNING: Removing unreachable block (ram,0x0001014e0a5c) */
/* WARNING: Removing unreachable block (ram,0x0001014e0a7c) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c04) */
/* WARNING: Removing unreachable block (ram,0x0001014e0aa0) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c08) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c34) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c4c) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c68) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c44) */
/* WARNING: Removing unreachable block (ram,0x0001014e0c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1014e08e4(undefined8 *param_1,undefined8 param_2,char param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_a8 [56];
  
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112daa348);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  uVar7 = 0xd00000000000001b;
  pcVar2 = "ConfigRecovery:PushRecoveryAsync";
  if ((param_5 & 1) == 0) {
    uVar7 = 0xd000000000000020;
    pcVar2 = "ConfigRecovery:HeuristicRecovery";
  }
  func_0x000107c61174(uVar4);
  func_0x000100029b28(uVar7,(ulong)(pcVar2 + 0x10) | 0x8000000000000000);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c((ulong)(pcVar2 + 0x10) | 0x8000000000000000);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa350);
  *puVar1 = uVar7;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c610f8(PTR_PTR_1126e1968);
  func_0x00010006c00c(param_1,param_2);
  puVar5 = param_1;
  FUN_1014e176c(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  puVar6 = puVar5;
  func_0x000107c447bc();
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = puVar5;
    func_0x000107c400ec();
    func_0x000107c61180();
    if (puVar6 != (undefined8 *)0x0) {
      if ((param_5 & 1) != 0) {
        uVar7 = 0;
        func_0x000107c60f6c();
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daa338);
        *(undefined8 *)(unaff_x20 + _DAT_112daa338) = uVar7;
        func_0x000107c61170(uVar4);
      }
      lVar8 = unaff_x20 + _DAT_112daa330;
      func_0x000107c61618();
      if (lVar8 != 0) {
        func_0x000107c4f520(puVar5);
        func_0x000107c3e038(lVar8);
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      return 1;
    }
  }
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar4 = *puVar1;
    func_0x000107c61428(puVar3,auStack_a8,0,0);
    uVar7 = *puVar3;
    func_0x000107c61174(uVar7);
    func_0x000100069b5c(uVar4);
    func_0x000107c61170(uVar7);
  }
  if (param_3 == '\x01') {
    FUN_1014e1590();
  }
  else {
    puVar3 = (undefined8 *)PTR_PTR_1126b7870;
    func_0x000107c61168();
    func_0x000107c43fd4();
    func_0x000107c61180();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c4ff88();
      func_0x000107c4ff88(puVar3);
      func_0x000107c61170(puVar5);
      puVar5 = puVar3;
    }
  }
  func_0x000107c61170(puVar5);
  return 0;
}



/* Entry: 1014e0cc8; end: 1014e0e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e0cc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000020;
  func_0x000100029b28(0xd000000000000020,0x800000010ef87170);
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa350);
  *puVar1 = uVar3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa348);
  *puVar1 = 1;
  *(undefined1 *)(puVar1 + 1) = 0;
  uVar2 = 0;
  func_0x000107c60f6c();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112daa338);
  *(undefined8 *)(unaff_x20 + _DAT_112daa338) = uVar2;
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112daa358);
  puVar4 = &UNK_1103d0520;
  func_0x000107c613fc(&UNK_1103d0520,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_58 = FUN_1014e1748;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x1014e0ff4;
  puStack_60 = &UNK_1103d0538;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c44244(uVar2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1014e0e1c; end: 1014e1193;  */

/* WARNING: Removing unreachable block (ram,0x0001014e0f70) */
/* WARNING: Removing unreachable block (ram,0x0001014e0f80) */
/* WARNING: Removing unreachable block (ram,0x0001014e0f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e0e1c(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_3 == 0) {
      if (param_2 >> 0x3c < 0xf) {
        func_0x000107c610f8(PTR_PTR_1126b7848);
        FUN_100de78a0(param_1,param_2);
        lVar3 = param_1;
        FUN_1014e176c(param_1,param_2);
        func_0x0001000b44c0(param_1,param_2);
        lVar2 = param_4 + _DAT_112daa330;
        func_0x000107c61618();
        if (lVar2 != 0) {
          func_0x000107c3e038();
          func_0x000107c615e8(lVar2);
        }
        func_0x000107c61170(param_4);
        param_4 = lVar3;
      }
      else {
        lVar2 = *(long *)(param_4 + _DAT_112daa338);
        if (lVar2 != 0) {
          func_0x000107c61174();
          func_0x000107c60060();
          func_0x000107c61170(lVar2);
        }
      }
    }
    else {
      func_0x000107c614b0(param_3);
      lVar2 = param_3;
      func_0x000107c5ed2c();
      lVar3 = lVar2;
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar2);
      uVar1 = 2;
      if (lVar3 != -0x3f6) {
        uVar1 = 3;
      }
      if (lVar3 == -1000) {
        uVar1 = 1;
      }
      lVar2 = *(long *)(param_4 + _DAT_112daa338);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000107c60060();
        func_0x000107c61170(lVar2);
      }
      FUN_1014e1214(uVar1);
      func_0x000107c614ac(param_3);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1014e1194; end: 1014e11d7; -[SCConfigManagerRecoveryHandler recoveryApplyingCompleteWithApplyingSuccessful:performCleanup:] */

void FUN_1014e1194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x0001014e1098(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014e11d8; end: 1014e11df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e11d8(double param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112daa338);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c60060();
    func_0x000107c61170(lVar1);
  }
  if (((char)((long *)(unaff_x20 + _DAT_112daa348))[1] == '\x01') ||
     (*(long *)(unaff_x20 + _DAT_112daa348) != 1)) {
    if ((param_2 & 1) != 0) {
      FUN_1014e1590();
      puVar2 = PTR_PTR_1126b7870;
      func_0x000107c61168();
      func_0x000107c43fd4();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c4ff88();
        func_0x000107c4ff88(puVar2);
        func_0x000107c61170(puVar2);
      }
    }
  }
  else {
    func_0x000107c4c4e4(*(undefined8 *)(unaff_x20 + _DAT_112daa358));
  }
  puVar3 = (undefined8 *)0x0;
  if ((param_2 & 1) == 0) {
    puVar3 = (undefined8 *)0x5;
  }
  if ((char)((long *)(unaff_x20 + _DAT_112daa348))[1] != '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112daa348) == 1) {
      puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112daa358);
      func_0x000107c50560();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112daa350) + 1) != '\x01') {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112daa350);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      func_0x000100069b5c(uVar5);
      func_0x000107c61170(uVar4);
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112daa360);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c6071c();
      if (*(char *)((double *)(unaff_x20 + _DAT_112daa340) + 1) == '\x01') {
        dVar6 = param_1;
        func_0x000107c6071c();
      }
      else {
        dVar6 = *(double *)(unaff_x20 + _DAT_112daa340);
      }
      func_0x000107c4be14((param_1 - dVar6) * 1000.0,lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1014e11e0; end: 1014e1213; -[SCConfigManagerRecoveryHandler recoveryApplyingCompleteWithApplyingSuccessful:] */

void FUN_1014e11e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001014e1098(param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014e1214; end: 1014e1373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1214(double param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  
  if ((char)((long *)(unaff_x20 + _DAT_112daa348))[1] != '\x01') {
    puVar1 = param_2;
    if (*(long *)(unaff_x20 + _DAT_112daa348) == 1) {
      puVar1 = *(undefined8 **)(unaff_x20 + _DAT_112daa358);
      if (param_2 < (undefined8 *)0x6) {
        uVar3 = *(undefined8 *)(&UNK_10d951b50 + (long)param_2 * 8);
      }
      else {
        uVar3 = 8;
      }
      func_0x000107c50560(puVar1,param_3,uVar3);
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112daa350) + 1) != '\x01') {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daa350);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar1;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar4);
      func_0x000107c61170(uVar3);
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112daa360);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c6071c();
      if (*(char *)((double *)(unaff_x20 + _DAT_112daa340) + 1) == '\x01') {
        dVar5 = param_1;
        func_0x000107c6071c();
      }
      else {
        dVar5 = *(double *)(unaff_x20 + _DAT_112daa340);
      }
      func_0x000107c4be14((param_1 - dVar5) * 1000.0,lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1014e1374; end: 1014e13d3;  */

void FUN_1014e1374(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5f7f0();
  func_0x000100028750();
  puVar2 = puVar1;
  func_0x000100028790(puVar1,0x112daa3a0);
  *puVar2 = 3;
                    /* WARNING: Could not recover jumptable at 0x0001014e13d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1[-1] + 0x68))();
  return;
}



/* Entry: 1014e13d4; end: 1014e142f; -[SCConfigManagerRecoveryHandler init] */

void FUN_1014e13d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConfigManagerSwift.ConfigManagerRecoveryHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e1400);
  (*pcVar1)();
}



/* Entry: 1014e1430; end: 1014e1497; -[SCConfigManagerRecoveryHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014e146c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e1470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1430(long param_1)

{
  FUN_1014e1724(param_1 + _DAT_112daa330);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daa358));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa360));
  return;
}



/* Entry: 1014e1498; end: 1014e149f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1498(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5f7f0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c6071c();
  dVar11 = param_1;
  func_0x000107c5f830(lVar8);
  if (lRam0000000112daa398 != -1) {
    func_0x000107c61568(0x112daa398,FUN_1014e1374);
  }
  lVar3 = lVar1;
  func_0x000100028790(lVar1,0x112daa3a0);
  (**(code **)(lVar9 + 0x10))(puVar5,lVar3,lVar1);
  func_0x000107c5f858(lVar7,lVar8,puVar5);
  (**(code **)(lVar9 + 8))(puVar5,lVar1);
  pcVar6 = *(code **)(lVar10 + 8);
  (*pcVar6)(lVar8,lVar2);
  lVar1 = lVar7;
  func_0x000107c60058(lVar7);
  (*pcVar6)(lVar7,lVar2);
  func_0x000107c60060();
  func_0x000107c5f7f4(lVar1,1);
  if (*(char *)(lVar4 + _DAT_112daa348 + 8) != '\x01') {
    lVar4 = *(long *)(lVar4 + _DAT_112daa360);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5f7f4(lVar1,1);
      func_0x000107c6071c();
      func_0x000107c4be18((dVar11 - param_1) * 1000.0,lVar4);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1014e14a0; end: 1014e158f;  */

undefined1  [16] FUN_1014e14a0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar1 = (int)&uStack_60;
  puVar2 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c43fd4();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    uStack_38 = 0;
    uStack_40 = 0;
    lStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x000107c60234(&uStack_60,puVar3);
      func_0x000107c615e8(puVar3);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 != 0) {
      func_0x000107c6147c(&uStack_60,&uStack_40,PTR___sypN_11034f1a8 + 8,
                          PTR___s10Foundation4DataVN_110350ae0,6);
      if (iVar1 == 0) {
        uStack_60 = 0;
        uStack_58 = 0xf000000000000000;
      }
      goto LAB_1014e1580;
    }
  }
  func_0x00010006e7f4(&uStack_40);
  uStack_60 = 0;
  uStack_58 = 0xf000000000000000;
LAB_1014e1580:
  auVar4._8_8_ = uStack_58;
  auVar4._0_8_ = uStack_60;
  return auVar4;
}



/* Entry: 1014e1590; end: 1014e1723;  */

long FUN_1014e1590(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long alStack_80 [4];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  puVar2 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44228();
  func_0x000107c61180();
  lVar7 = 0;
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5edb4(puVar9);
    func_0x000107c61170(puVar2);
    (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar1);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5ed90();
    uStack_50 = 0;
    puVar4 = puVar2;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    uVar6 = uStack_50;
    if ((int)puVar4 == 0) {
      uVar5 = uStack_50;
      func_0x000107c61174(uStack_50);
      func_0x000107c5ed30(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c614ac(uVar6);
    }
    else {
      func_0x000107c61174(uStack_50);
    }
    lVar7 = lVar8;
    (**(code **)(lVar10 + 8))(lVar8,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar7;
  }
  func_0x000107c60e78();
  *(long *)(lVar8 + -0x20) = lVar8;
  *(long *)(lVar8 + -0x18) = lVar1;
  *(undefined1 **)(lVar8 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar8 + -8) = FUN_1014e1724;
  func_0x000107c61610();
  return lVar7;
}



/* Entry: 1014e1724; end: 1014e1747;  */

undefined8 FUN_1014e1724(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1014e1748; end: 1014e176b;  */

/* WARNING: Removing unreachable block (ram,0x0001014e0f70) */
/* WARNING: Removing unreachable block (ram,0x0001014e0f80) */
/* WARNING: Removing unreachable block (ram,0x0001014e0f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1748(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      if (param_2 >> 0x3c < 0xf) {
        func_0x000107c610f8(PTR_PTR_1126b7848);
        FUN_100de78a0(param_1,param_2);
        lVar4 = param_1;
        FUN_1014e176c(param_1,param_2);
        func_0x0001000b44c0(param_1,param_2);
        lVar3 = lVar2 + _DAT_112daa330;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c3e038();
          func_0x000107c615e8(lVar3);
        }
        func_0x000107c61170(lVar2);
        lVar2 = lVar4;
      }
      else {
        lVar3 = *(long *)(lVar2 + _DAT_112daa338);
        if (lVar3 != 0) {
          func_0x000107c61174();
          func_0x000107c60060();
          func_0x000107c61170(lVar3);
        }
      }
    }
    else {
      func_0x000107c614b0(param_3);
      lVar3 = param_3;
      func_0x000107c5ed2c();
      lVar4 = lVar3;
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar3);
      uVar1 = 2;
      if (lVar4 != -0x3f6) {
        uVar1 = 3;
      }
      if (lVar4 == -1000) {
        uVar1 = 1;
      }
      lVar3 = *(long *)(lVar2 + _DAT_112daa338);
      if (lVar3 != 0) {
        func_0x000107c61174();
        func_0x000107c60060();
        func_0x000107c61170(lVar3);
      }
      FUN_1014e1214(uVar1);
      func_0x000107c614ac(param_3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1014e176c; end: 1014e182b;  */

long FUN_1014e176c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uStack_40 = 0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uStack_68 = uStack_40;
  if (unaff_x20 == 0) {
    param_1 = uStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(param_1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    uStack_68 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  pcStack_48 = FUN_1014e182c;
  puVar2 = auStack_88;
  uStack_70 = param_1;
  uStack_58 = uStack_68;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  unaff_x20 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = unaff_x20;
  if (unaff_x20 != 0) {
    FUN_1014e14a0();
    if ((ulong)puVar2 >> 0x3c < 0xf) {
      FUN_1014e08e4();
      func_0x000107c61170(unaff_x20);
      func_0x0001000b44c0(lVar1,puVar2);
    }
    else {
      func_0x000107c61170(unaff_x20);
      lVar1 = unaff_x20;
    }
  }
  return lVar1;
}



/* Entry: 1014e182c; end: 1014e1837;  */

void FUN_1014e182c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar3,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1014e14a0();
    if ((ulong)puVar3 >> 0x3c < 0xf) {
      FUN_1014e08e4();
      func_0x000107c61170(lVar1);
      func_0x0001000b44c0(lVar2,puVar3);
    }
    else {
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1014e1838; end: 1014e183b; -[SCTweaksDataPersister persistTweaksWithTweaks:] */

void FUN_1014e1838(void)

{
  return;
}



/* Entry: 1014e183c; end: 1014e1897; -[SCTweaksDataPersister retrieveTweaks] */

void FUN_1014e183c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1013d0a60(0);
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014e1898; end: 1014e18a7;  */

undefined1  [16] FUN_1014e1898(void)

{
  return ZEXT816(0x1103d0618);
}



/* Entry: 1014e18a8; end: 1014e18cb;  */

void FUN_1014e18a8(void)

{
  func_0x000107c61168(PTR_PTR_1126b7870);
  func_0x000107c442ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e18cc; end: 1014e1903;  */

void FUN_1014e18cc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1014e1904; end: 1014e193b;  */

void FUN_1014e1904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014e193c; end: 1014e198b;  */

void FUN_1014e193c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112daa400 != 0) {
    return;
  }
  puVar1 = &UNK_1103d0898;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112daa400 = param_1;
  return;
}



/* Entry: 1014e198c; end: 1014e1bbb;  */

ulong FUN_1014e198c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  float *pfVar9;
  code *pcVar10;
  float fVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar2 = &UNK_1103d08b8;
  func_0x000107c613fc(&UNK_1103d08b8,0x14,7);
  pfVar9 = (float *)(puVar2 + 0x10);
  *pfVar9 = 0.0;
  puVar8 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar8;
  func_0x000107c6157c(puVar2);
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar8 = &UNK_1103d08e0;
    func_0x000107c613fc(&UNK_1103d08e0,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_1014e1c84;
    *(undefined **)(puVar8 + 0x18) = puVar2;
    puVar4 = &UNK_1103d0908;
    func_0x000107c613fc(&UNK_1103d0908,0x20,7);
    pcVar10 = FUN_1014e1c8c;
    *(code **)(puVar4 + 0x10) = FUN_1014e1c8c;
    *(undefined **)(puVar4 + 0x18) = puVar8;
    uStack_60 = 0x1014e1cac;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_1103d0920;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x00010006eaa4(uVar3,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    puVar6 = puVar4;
    func_0x000107c61544(puVar4,"",0x85,0x1a,0x29,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e1bbc);
      (*pcVar10)();
    }
  }
  else {
    FUN_1014e1bbc(puVar2);
    pcVar10 = (code *)0x0;
    puVar8 = (undefined *)0x0;
  }
  func_0x000107c61428(pfVar9,&puStack_80,0,0);
  fVar11 = *pfVar9 * 100.0;
  if (0x7f7fffff < (uint)ABS(fVar11)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e1bb0);
    (*pcVar10)();
  }
  if (fVar11 <= -2.147484e+09) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e1bb4);
    (*pcVar10)();
  }
  if (fVar11 < 2.1474836e+09) {
    uVar7 = (ulong)(uint)(int)fVar11;
    func_0x000106cb4bbc(uVar7);
    func_0x000107c61180();
    func_0x000107c61578(puVar2,2);
    func_0x00010058d43c(pcVar10,puVar8);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e1bb8);
  (*pcVar10)();
}



/* Entry: 1014e1bbc; end: 1014e1c83;  */

void FUN_1014e1bbc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c49a9c();
  func_0x000107c61170(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x000107c40efc(puVar1);
    func_0x000107c61180();
    func_0x000107c52c24();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c40efc(puVar1);
  func_0x000107c61180();
  func_0x000107c3e70c();
  func_0x000107c61170(puVar1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,1,0);
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1014e1c84; end: 1014e1c8b;  */

void FUN_1014e1c84(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c49a9c();
  func_0x000107c61170(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x000107c40efc(puVar1);
    func_0x000107c61180();
    func_0x000107c52c24();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c40efc(puVar1);
  func_0x000107c61180();
  func_0x000107c3e70c();
  func_0x000107c61170(puVar1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,1,0);
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014e1c8c; end: 1014e1ccb;  */

void FUN_1014e1c8c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014e1ccc; end: 1014e1ce7;  */

void FUN_1014e1ccc(long param_1,long param_2)

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



/* Entry: 1014e1ce8; end: 1014e1d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa408);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e1d44; end: 1014e1d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1d44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_112daa408))();
  return;
}



/* Entry: 1014e1d70; end: 1014e1e3f; -[_TtC43PropertyHandlerRegistrySaberServiceProvider20NoDepPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1d70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_1103d0958;
    func_0x000107c613fc(&UNK_1103d0958,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar4 = 0x1014e1f14;
  }
  pcVar1 = *(code **)(param_1 + _DAT_112daa408);
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3,uVar4,puVar3);
  func_0x0001014e1f04(uVar4,puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1014e1e40; end: 1014e1e93;  */

void FUN_1014e1e40(undefined8 *param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c60234(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1014e1e94; end: 1014e1eef; -[_TtC43PropertyHandlerRegistrySaberServiceProvider20NoDepPropertyHandler init] */

void FUN_1014e1e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PropertyHandlerRegistrySaberServiceProvider.NoDepPropertyHandler",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e1ec0);
  (*pcVar1)();
}



/* Entry: 1014e1ef0; end: 1014e1f1b; -[_TtC43PropertyHandlerRegistrySaberServiceProvider20NoDepPropertyHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e1ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daa408 + 8));
  return;
}



/* Entry: 1014e1f1c; end: 1014e1f43;  */

void FUN_1014e1f1c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4a2a4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e1f44; end: 1014e1f5f;  */

void FUN_1014e1f44(undefined1 *param_1)

{
  func_0x000106cb4b44(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e1f60; end: 1014e1faf;  */

void FUN_1014e1f60(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4a114();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e1fb0; end: 1014e1fcb;  */

void FUN_1014e1fb0(undefined4 *param_1)

{
  func_0x000106cb4bbc(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e1fcc; end: 1014e1ff3;  */

void FUN_1014e1fcc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c44920();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e1ff4; end: 1014e1fff;  */

void FUN_1014e1ff4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1014e2000; end: 1014e205f;  */

void FUN_1014e2000(int *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)*param_2;
  func_0x000107c3ebbc();
  if (-1 < iVar2) {
    *param_1 = iVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e2030);
  (*pcVar1)();
}



/* Entry: 1014e2060; end: 1014e20bf;  */

void FUN_1014e2060(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x000107c3fc64();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1014e20c0; end: 1014e2113;  */

undefined8 FUN_1014e20c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
    func_0x000107c5fadc(uVar1);
  }
  uVar2 = uVar1;
  func_0x000106cb4c2c(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1014e2114; end: 1014e2173;  */

void FUN_1014e2114(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x000107c43d20();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1014e2174; end: 1014e223b;  */

void FUN_1014e2174(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c5e430();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e223c; end: 1014e2253;  */

void FUN_1014e223c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (0x7ffffffe < uVar1) {
    uVar1 = 0x7fffffff;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e2254; end: 1014e2383;  */

void FUN_1014e2254(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)*param_2;
  func_0x000107c4ca5c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e2384; end: 1014e238f;  */

void FUN_1014e2384(undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_2,PTR_s_setBillboardSignals__112639a70,*param_1);
  return;
}



/* Entry: 1014e2390; end: 1014e260f;  */

void FUN_1014e2390(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4249c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e2610; end: 1014e2b2b;  */

/* WARNING: Possible PIC construction at 0x0001014e2688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e26e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e268c) */
/* WARNING: Removing unreachable block (ram,0x0001014e26e4) */
/* WARNING: Removing unreachable block (ram,0x0001014e26f8) */

void FUN_1014e2610(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  if (param_2 == (code *)0x0) {
    func_0x000106cb4b44(0);
  }
  else {
    func_0x000107c6157c(param_3);
    (*param_2)(auStack_50);
    if (lStack_38 == 0) {
      func_0x00010006e7f4(auStack_50);
    }
    else {
      uVar1 = 0;
      func_0x0001002ed07c(0);
      puVar2 = &uStack_58;
      func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)puVar2 & 1) != 0) {
        func_0x000107c3ebcc(uStack_58);
        func_0x000106cb4b44();
        goto code_r0x000107c61180;
      }
    }
    func_0x000106cb4b44(0);
  }
code_r0x000107c61180:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e2b2c; end: 1014e2c6b;  */

void FUN_1014e2b2c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ea34();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e2c6c; end: 1014e2ccb;  */

void FUN_1014e2c6c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x000107c4d990();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1014e2ccc; end: 1014e2dbb;  */

void FUN_1014e2ccc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4b95c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e2dbc; end: 1014e2dd7;  */

void FUN_1014e2dbc(undefined8 *param_1)

{
  func_0x000106cb4bf4(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e2dd8; end: 1014e311f;  */

void FUN_1014e2dd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c3f36c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e3120; end: 1014e31a3;  */

/* WARNING: Possible PIC construction at 0x0001014e3148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e316c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e314c) */
/* WARNING: Removing unreachable block (ram,0x0001014e3170) */
/* WARNING: Removing unreachable block (ram,0x0001014e3184) */
/* WARNING: Removing unreachable block (ram,0x0001014e3188) */

void FUN_1014e3120(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1014e31a4; end: 1014e321b;  */

void FUN_1014e31a4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c5d8b4();
  *param_1 = uVar1;
  return;
}


