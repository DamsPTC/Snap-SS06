/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f5874c; end: 100f587c3;  */

/* WARNING: Possible PIC construction at 0x000100f587a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f587ac) */

void FUN_100f5874c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f587c4; end: 100f587df; -[_TtC31SCCountdownsNetworkServicesImpl30CountdownsNetworkRequesterImpl getCountdownsWithUserId:completion:] */

void FUN_100f587c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11036d768;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  func_0x000107c613fc(&UNK_11036d768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_100f585b4(param_3,param_2,FUN_100f589e0,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f587e0; end: 100f5888f;  */

void FUN_100f587e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_2,param_6,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 100f58890; end: 100f588e7;  */

void FUN_100f58890(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100f588e8; end: 100f58943; -[_TtC31SCCountdownsNetworkServicesImpl30CountdownsNetworkRequesterImpl init] */

void FUN_100f588e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCountdownsNetworkServicesImpl.CountdownsNetworkRequesterImpl",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f58914);
  (*pcVar1)();
}



/* Entry: 100f58944; end: 100f5898b; -[_TtC31SCCountdownsNetworkServicesImpl30CountdownsNetworkRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58944(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4e278));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4e280));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4e288));
  return;
}



/* Entry: 100f5898c; end: 100f589c3;  */

void FUN_100f5898c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4ce0);
  return;
}



/* Entry: 100f589c4; end: 100f589df;  */

void FUN_100f589c4(long param_1,long param_2)

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



/* Entry: 100f589e0; end: 100f589f7;  */

void FUN_100f589e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100f58890(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f589f8; end: 100f58beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f589f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d4e278) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4e280) = param_2;
  func_0x000107c615f0();
  func_0x000107c615f0(param_2);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1c390);
  func_0x000107c4e60c(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
  puVar3 = puVar2;
  func_0x000107c545b8(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c57f3c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar1 = 0x776f64746e756f43;
  func_0x000107c5fadc(0x776f64746e756f43,0xea0000000000736e);
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126a60b0;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c615e8(param_2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + _DAT_112d4e288) = puVar3;
  FUN_100f5898c();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f58bec; end: 100f58c17;  */

void FUN_100f58bec(long param_1,long param_2)

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



/* Entry: 100f58c18; end: 100f58cc3;  */

void FUN_100f58c18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100f58cc4; end: 100f58ccb;  */

void FUN_100f58cc4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100f58ccc();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100f58ccc; end: 100f58d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f58ccc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c44580();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      FUN_100f5898c(0);
      func_0x000107c610f8();
      lVar3 = lVar2;
      FUN_100f589f8(lVar2,lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar1);
      return lVar3;
    }
    func_0x000107c615e8(lVar2);
  }
  return 0;
}



/* Entry: 100f58d88; end: 100f58da3;  */

/* WARNING: Possible PIC construction at 0x000100f58d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f58d98) */

void FUN_100f58d88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f58da4; end: 100f58def;  */

void FUN_100f58da4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f58df0; end: 100f58e6b;  */

void FUN_100f58df0(undefined8 param_1)

{
  if (lRam0000000112d4e2e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61b2f8);
  return;
}



/* Entry: 100f58e6c; end: 100f58f1f;  */

void FUN_100f58e6c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11036d7e0;
  func_0x000107c613fc(&UNK_11036d7e0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d4e2b8,&UNK_10d914730);
  func_0x000107c613fc();
  pcVar2 = FUN_100f58f20;
  func_0x0001000bdd8c(FUN_100f58f20,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar2);
  puVar1 = PTR_PTR_1126a60b8;
  func_0x000107c610f8();
  func_0x000107c46208();
  func_0x000107c61170(pcVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100f58f20; end: 100f58f23;  */

void FUN_100f58f20(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100f58ccc();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100f58f24; end: 100f58f2f; -[SCCountdownsNetworkServiceProvider unifiedGRPCService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58f24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e3a0;
  func_0x000107c61428(param_1 + _DAT_112d4e3a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f58f30; end: 100f58f3b; -[SCCountdownsNetworkServiceProvider setUnifiedGRPCService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e3a0;
  func_0x000107c61428(param_1 + _DAT_112d4e3a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f58f3c; end: 100f58f47; -[SCCountdownsNetworkServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58f3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e3a8;
  func_0x000107c61428(param_1 + _DAT_112d4e3a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f58f48; end: 100f58f8b;  */

void FUN_100f58f48(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f58f8c; end: 100f58f97; -[SCCountdownsNetworkServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e3a8;
  func_0x000107c61428(param_1 + _DAT_112d4e3a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f58f98; end: 100f58feb;  */

void FUN_100f58f98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f58fec; end: 100f59153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f58fec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c5d224();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c78c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100f58df0();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x10) = lVar1;
      *(long *)(lVar3 + 0x18) = lVar2;
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4e3b0);
      *(long *)(unaff_x20 + _DAT_112d4e3b0) = lVar3;
      func_0x000107c61174(lVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar7);
      puVar4 = &UNK_11036d820;
      func_0x000107c613fc(&UNK_11036d820,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar3);
      uVar7 = 0x112d4e2b8;
      func_0x0001000285a8(0x112d4e2b8,&UNK_10d914730);
      func_0x000107c613fc();
      pcVar5 = FUN_100f59154;
      func_0x0001000bdd8c(FUN_100f59154,puVar4,uVar7);
      pcVar6 = pcVar5;
      func_0x0001000bf56c();
      func_0x000107c61574(pcVar5);
      func_0x000107c610f8(PTR_PTR_1126a60b8);
      func_0x000107c46208();
      func_0x000107c61170(pcVar6);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 100f59154; end: 100f5915b;  */

void FUN_100f59154(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_100f58ccc();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100f5915c; end: 100f591e7; -[SCCountdownsNetworkServiceProvider provide] */

void FUN_100f5915c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100f58fec();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCCountdownsNetworkServicesImpl/SCCountdownsNetworkServiceProvider.swift",
                      0x48,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f591e8);
  (*pcVar1)();
}



/* Entry: 100f591e8; end: 100f5921b; -[SCCountdownsNetworkServiceProvider __safeProvide] */

void FUN_100f591e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f58fec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f5921c; end: 100f5925f; -[SCCountdownsNetworkServiceProvider end] */

void FUN_100f5921c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f59260; end: 100f593f7;  */

void FUN_100f59260(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10e3bb0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef1c450,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10edd20)) &&
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
         (uVar2 & 1) == 0)) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCCountdownsNetworkServicesImpl/SCCountdownsNetworkServiceProvider.swift"
                            ,0x48,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f593f8);
        (*pcVar1)();
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59c2c();
      goto LAB_100f59360;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a174();
LAB_100f59360:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f593f8; end: 100f594a3; -[SCCountdownsNetworkServiceProvider setValue:forIvarName:] */

void FUN_100f593f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f59260(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f594a4; end: 100f59517; -[SCCountdownsNetworkServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f594a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4e3a0,0);
  func_0x000107c61614(param_1 + _DAT_112d4e3a8,0);
  *(undefined8 *)(param_1 + _DAT_112d4e3b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f59518; end: 100f5954b;  */

void FUN_100f59518(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5954c; end: 100f59593; -[SCCountdownsNetworkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5954c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4e3a0);
  func_0x000107c61610(param_1 + _DAT_112d4e3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e3b0));
  return;
}



/* Entry: 100f59594; end: 100f595b3;  */

void FUN_100f59594(void)

{
  func_0x000107c61168(&PTR_PTR_112d4e3f8);
  return;
}



/* Entry: 100f595b4; end: 100f59617; -[_TtC33AutoCaptionsHelperServiceProvider19AudioAssetExtractor init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f595b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4e460);
  *puVar1 = 0xd000000000000020;
  puVar1[1] = 0x800000010ef1c4e0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f59618; end: 100f5964b;  */

void FUN_100f59618(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5964c; end: 100f5965f; -[_TtC33AutoCaptionsHelperServiceProvider19AudioAssetExtractor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5964c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4e460 + 8))
  ;
  return;
}



/* Entry: 100f59660; end: 100f596af;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f59660(long param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  long *unaff_x20;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined *puVar20;
  ulong unaff_x29;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong auStack_160 [3];
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_78;
  ulong uStack_30;
  code *pcStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lVar17 = *unaff_x20;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f596b0;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3[0x13] = param_1;
  plVar3[0x14] = lVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar4 = FUN_100f59760;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_100f59760;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar3[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  lVar15 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lStack_90 = lVar15;
  puStack_88 = param_2;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar17 + _DAT_112d4e460),
                      ((undefined8 *)(lVar17 + _DAT_112d4e460))[1]);
  puVar16 = puStack_88;
  lVar15 = lStack_90;
  lVar17 = 0;
  func_0x000107c5ede0();
  plVar3[0x15] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  plVar3[0x16] = lVar17;
  pcVar4 = (code *)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar3[0x17] = (long)pcVar4;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar4,lVar15,puVar16);
  }
  else {
    lVar5 = 0;
    func_0x000107c5ed68();
    lVar5 = *(long *)(lVar5 + -8);
    uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar6);
    (**(code **)(lVar5 + 0x68))();
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar7);
    (**(code **)(lVar17 + 0x38))();
    func_0x000107c61434(puVar16);
    func_0x000107c5edd4(pcVar4,lVar15,puVar16,uVar6,uVar7);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
  }
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar20 = puVar8;
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar17 = lVar15;
  func_0x000107c5fadc(lVar15,puVar16);
  puVar9 = puVar20;
  func_0x000107c43418();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puVar20);
  if ((int)puVar9 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar16);
    puVar16 = (undefined *)plVar3[0x13];
    lVar15 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar9 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    plVar3[0x18] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar10 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar10 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c57120(puVar9);
      plVar3[2] = (long)plVar3;
      plVar3[3] = 0x100f59f64;
      pcVar4 = (code *)(plVar3 + 2);
      func_0x000107c61448(pcVar4,0);
      lVar17 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      plVar3[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      plVar3[0x11] = lVar17;
      plVar3[0xb] = 0x42000000;
      plVar3[0xc] = (long)FUN_100f5a198;
      plVar3[0xd] = (long)&UNK_11036d918;
      plVar3[0xe] = (long)pcVar4;
      func_0x000107c42bf0(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        pcVar4 = (code *)(plVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar4);
        return pcVar4;
      }
    }
    else {
      lVar15 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar8 = &UNK_10d914838;
        plVar11 = (long *)0xa0;
        puVar20 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        plVar3[0x1a] = (long)plVar11;
        *plVar11 = (long)plVar3;
        plVar11[1] = (long)FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
          plVar11[0xb] = 0;
          plVar11[0xc] = (long)puVar9;
          plVar11[9] = lVar15;
          plVar11[10] = 0;
          plVar11[5] = (long)pcVar4;
          plVar11[0xd] = 0;
          plVar11[0xe] = 0;
          pcVar4 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        plVar11 = (long *)(ulong)*(uint *)(
                                          PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                          + 4);
        func_0x000107c615b8();
        plVar3[0x19] = (long)plVar11;
        *plVar11 = (long)plVar3;
        plVar11[1] = (long)FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar4,lVar15,0,0);
          return pcVar4;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar15,puVar16);
    plVar3[0x12] = 0;
    puVar20 = puVar8;
    func_0x000107c4ff4c();
    func_0x000107c61170(lVar15);
    func_0x000107c61170(puVar8);
    lVar15 = plVar3[0x12];
    if ((int)puVar20 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar17 = lVar15;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar17);
    func_0x000107c61654();
    func_0x000107c6142c(puVar16);
    func_0x000107c614ac(lVar15);
LAB_100f59ac0:
    puVar9 = puVar16;
    pcVar4 = (code *)plVar3[0x17];
    (**(code **)(plVar3[0x16] + 8))(pcVar4,plVar3[0x15]);
    func_0x000107c615c0(pcVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar4 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])(0,0xf000000000000000);
      return pcVar4;
    }
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_98 = FUN_100f59c78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *plVar3;
  plVar3 = (long *)*plVar3;
  puStack_b0 = puVar9;
  lStack_a8 = lVar17;
  func_0x000107c615c0(*(undefined8 *)(lVar17 + 200));
  if (pcVar4 == (code *)0x0) {
    *(undefined8 *)(lVar17 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar4 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar17 + 0xe0) = pcVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar4 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_c8 = FUN_100f59d24;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *plVar3;
  plVar3 = (long *)*plVar3;
  lStack_e0 = lVar17;
  lStack_d8 = lVar5;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xd0));
  if (pcVar4 == (code *)0x0) {
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar4 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar5 + 0xe0) = pcVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar4 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_f8 = FUN_100f59dd0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar3[0x1b];
  pcVar4 = (code *)plVar3[0x17];
  lVar17 = plVar3[0x18];
  uVar6 = 0;
  puStack_120 = puVar8;
  lStack_118 = lVar15;
  lStack_110 = lVar5;
  plStack_108 = plVar3;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar17);
  if (lVar19 == 0) {
    uVar1 = (uint)(uVar6 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar15 = *(long *)(pcVar4 + 0x10);
        lVar17 = *(long *)(pcVar4 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar4,uVar6);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar6 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar15 = (long)(int)pcVar4;
      lVar17 = (long)pcVar4 >> 0x20;
LAB_100f59e60:
      if (lVar15 == lVar17) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar19);
LAB_100f59e74:
    pcVar4 = (code *)0x0;
    uVar6 = 0xf000000000000000;
  }
  lVar15 = plVar3[0x17];
  (**(code **)(plVar3[0x16] + 8))(lVar15,plVar3[0x15]);
  func_0x000107c615c0(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar3[1])(pcVar4,uVar6);
    return pcVar4;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_138 = FUN_100f59ed8;
  auStack_160[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = plVar3[0x1c];
  plStack_148 = plVar3;
  func_0x000107c61170(plVar3[0x18]);
  func_0x000107c614ac(lVar15);
  lVar15 = plVar3[0x17];
  (**(code **)(plVar3[0x16] + 8))(lVar15,plVar3[0x15]);
  func_0x000107c615c0(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_160[2]) {
    pcVar4 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar3[1])(0,0xf000000000000000);
    return pcVar4;
  }
  func_0x000107c60e78();
  auStack_160[0] = (ulong)&uStack_140 | 0x1000000000000000;
  auStack_160[1] = 0x100f59f64;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar3;
  lVar15 = *plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    pcVar4 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
    return pcVar4;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)auStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_100f59fd0;
  puVar22 = &uStack_180;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = *(code **)(lVar15 + 0xb8);
  uVar10 = *(undefined8 *)(lVar15 + 0xc0);
  uVar6 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar10);
  uVar1 = (uint)(uVar6 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar6 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar5 = (long)(int)pcVar4;
      lVar19 = (long)pcVar4 >> 0x20;
LAB_100f5a060:
      if (lVar5 != lVar19) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar5 = *(long *)(pcVar4 + 0x10);
    lVar19 = *(long *)(pcVar4 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar4,uVar6);
  pcVar4 = (code *)0x0;
  uVar6 = 0xf000000000000000;
LAB_100f5a07c:
  uVar21 = *(undefined8 *)(lVar15 + 0xb8);
  (**(code **)(*(long *)(lVar15 + 0xb0) + 8))(uVar21,*(undefined8 *)(lVar15 + 0xa8));
  uVar12 = uVar21;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(pcVar4,uVar6);
    return pcVar4;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar18 = *(undefined8 *)pcVar4;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar16 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar18;
  *(undefined8 *)(puVar16 + 0x18) = uVar12;
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar12);
  pcVar13 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar16,
                      puVar20,uVar10,lVar15,uVar21,pcVar4,uVar6,puVar22,pcVar23);
  func_0x000107c61574(puVar16);
  return pcVar13;
}



/* Entry: 100f596b0; end: 100f596fb;  */

void FUN_100f596b0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f596f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 100f596fc; end: 100f5975f;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f596fc(long param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  uint uVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long *unaff_x22;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  ulong unaff_x29;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong auStack_160 [3];
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_78;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x13] = param_1;
  unaff_x22[0x14] = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    pcVar3 = FUN_100f59760;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_100f59760;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lStack_90 = lVar9;
  puStack_88 = param_2;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar19 + _DAT_112d4e460),
                      ((undefined8 *)(lVar19 + _DAT_112d4e460))[1]);
  puVar15 = puStack_88;
  lVar9 = lStack_90;
  lVar19 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x15] = lVar19;
  lVar19 = *(long *)(lVar19 + -8);
  unaff_x22[0x16] = lVar19;
  pcVar3 = (code *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  unaff_x22[0x17] = (long)pcVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar3,lVar9,puVar15);
  }
  else {
    lVar4 = 0;
    func_0x000107c5ed68();
    lVar4 = *(long *)(lVar4 + -8);
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar4 + 0x68))();
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar6);
    (**(code **)(lVar19 + 0x38))();
    func_0x000107c61434(puVar15);
    func_0x000107c5edd4(pcVar3,lVar9,puVar15,uVar5,uVar6);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
  }
  puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar20 = puVar7;
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar19 = lVar9;
  func_0x000107c5fadc(lVar9,puVar15);
  puVar8 = puVar20;
  func_0x000107c43418();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(puVar20);
  if ((int)puVar8 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar15);
    puVar15 = (undefined *)unaff_x22[0x13];
    lVar9 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar8 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    unaff_x22[0x18] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar10 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar10 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c57120(puVar8);
      unaff_x22[2] = (long)unaff_x22;
      unaff_x22[3] = 0x100f59f64;
      pcVar3 = (code *)(unaff_x22 + 2);
      func_0x000107c61448(pcVar3,0);
      lVar19 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      unaff_x22[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      unaff_x22[0x11] = lVar19;
      unaff_x22[0xb] = 0x42000000;
      unaff_x22[0xc] = (long)FUN_100f5a198;
      unaff_x22[0xd] = (long)&UNK_11036d918;
      unaff_x22[0xe] = (long)pcVar3;
      func_0x000107c42bf0(puVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        pcVar3 = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar3);
        return pcVar3;
      }
    }
    else {
      lVar9 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar7 = &UNK_10d914838;
        puVar11 = (undefined8 *)0xa0;
        puVar20 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        unaff_x22[0x1a] = (long)puVar11;
        *puVar11 = unaff_x22;
        puVar11[1] = FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
          puVar11[0xb] = 0;
          puVar11[0xc] = puVar8;
          puVar11[9] = lVar9;
          puVar11[10] = 0;
          puVar11[5] = pcVar3;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          pcVar3 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        puVar11 = (undefined8 *)
                  (ulong)*(uint *)(
                                  PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                  + 4);
        func_0x000107c615b8();
        unaff_x22[0x19] = (long)puVar11;
        *puVar11 = unaff_x22;
        puVar11[1] = FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar3,lVar9,0,0);
          return pcVar3;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar9,puVar15);
    unaff_x22[0x12] = 0;
    puVar20 = puVar7;
    func_0x000107c4ff4c();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar7);
    lVar9 = unaff_x22[0x12];
    if ((int)puVar20 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar19 = lVar9;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar19);
    func_0x000107c61654();
    func_0x000107c6142c(puVar15);
    func_0x000107c614ac(lVar9);
LAB_100f59ac0:
    puVar8 = puVar15;
    pcVar3 = (code *)unaff_x22[0x17];
    (**(code **)(unaff_x22[0x16] + 8))(pcVar3,unaff_x22[0x15]);
    func_0x000107c615c0(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(0,0xf000000000000000);
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_98 = FUN_100f59c78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *unaff_x22;
  plVar18 = (long *)*unaff_x22;
  puStack_b0 = puVar8;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 200));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar19 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_c8 = FUN_100f59d24;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *plVar18;
  plVar18 = (long *)*plVar18;
  lStack_e0 = lVar19;
  lStack_d8 = lVar4;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar4 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_f8 = FUN_100f59dd0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar18[0x1b];
  pcVar3 = (code *)plVar18[0x17];
  lVar19 = plVar18[0x18];
  uVar5 = 0;
  puStack_120 = puVar7;
  lStack_118 = lVar9;
  lStack_110 = lVar4;
  plStack_108 = plVar18;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar19);
  if (lVar17 == 0) {
    uVar1 = (uint)(uVar5 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar9 = *(long *)(pcVar3 + 0x10);
        lVar19 = *(long *)(pcVar3 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar3,uVar5);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar9 = (long)(int)pcVar3;
      lVar19 = (long)pcVar3 >> 0x20;
LAB_100f59e60:
      if (lVar9 == lVar19) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar17);
LAB_100f59e74:
    pcVar3 = (code *)0x0;
    uVar5 = 0xf000000000000000;
  }
  lVar9 = plVar18[0x17];
  (**(code **)(plVar18[0x16] + 8))(lVar9,plVar18[0x15]);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar18[1])(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_138 = FUN_100f59ed8;
  auStack_160[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = plVar18[0x1c];
  plStack_148 = plVar18;
  func_0x000107c61170(plVar18[0x18]);
  func_0x000107c614ac(lVar9);
  lVar9 = plVar18[0x17];
  (**(code **)(plVar18[0x16] + 8))(lVar9,plVar18[0x15]);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_160[2]) {
    pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar18[1])(0,0xf000000000000000);
    return pcVar3;
  }
  func_0x000107c60e78();
  auStack_160[0] = (ulong)&uStack_140 | 0x1000000000000000;
  auStack_160[1] = 0x100f59f64;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar18;
  lVar9 = *plVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    pcVar3 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)auStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_100f59fd0;
  puVar22 = &uStack_180;
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = *(code **)(lVar9 + 0xb8);
  uVar10 = *(undefined8 *)(lVar9 + 0xc0);
  uVar5 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar10);
  uVar1 = (uint)(uVar5 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar4 = (long)(int)pcVar3;
      lVar17 = (long)pcVar3 >> 0x20;
LAB_100f5a060:
      if (lVar4 != lVar17) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar4 = *(long *)(pcVar3 + 0x10);
    lVar17 = *(long *)(pcVar3 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar3,uVar5);
  pcVar3 = (code *)0x0;
  uVar5 = 0xf000000000000000;
LAB_100f5a07c:
  uVar21 = *(undefined8 *)(lVar9 + 0xb8);
  (**(code **)(*(long *)(lVar9 + 0xb0) + 8))(uVar21,*(undefined8 *)(lVar9 + 0xa8));
  uVar12 = uVar21;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 8))(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar16 = *(undefined8 *)pcVar3;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar15 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar16;
  *(undefined8 *)(puVar15 + 0x18) = uVar12;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar12);
  pcVar13 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar15,
                      puVar20,uVar10,lVar9,uVar21,pcVar3,uVar5,puVar22,pcVar23);
  func_0x000107c61574(puVar15);
  return pcVar13;
}



/* Entry: 100f59760; end: 100f59c77;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f59760(undefined8 param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *unaff_x22;
  long *plVar19;
  long lVar20;
  undefined *puVar21;
  ulong unaff_x29;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  ulong auStack_140 [3];
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_58;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = unaff_x22[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uStack_70 = uVar10;
  puStack_68 = param_2;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar20 + _DAT_112d4e460),
                      ((undefined8 *)(lVar20 + _DAT_112d4e460))[1]);
  puVar15 = puStack_68;
  uVar10 = uStack_70;
  lVar20 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x15] = lVar20;
  lVar20 = *(long *)(lVar20 + -8);
  unaff_x22[0x16] = lVar20;
  pcVar3 = (code *)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  unaff_x22[0x17] = (long)pcVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar3,uVar10,puVar15);
  }
  else {
    lVar4 = 0;
    func_0x000107c5ed68();
    lVar4 = *(long *)(lVar4 + -8);
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar4 + 0x68))();
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar6);
    (**(code **)(lVar20 + 0x38))();
    func_0x000107c61434(puVar15);
    func_0x000107c5edd4(pcVar3,uVar10,puVar15,uVar5,uVar6);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
  }
  puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar21 = puVar7;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar8 = uVar10;
  func_0x000107c5fadc(uVar10,puVar15);
  puVar9 = puVar21;
  func_0x000107c43418();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar21);
  if ((int)puVar9 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar15);
    puVar15 = (undefined *)unaff_x22[0x13];
    lVar20 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar9 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    unaff_x22[0x18] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar10 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar10 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c57120(puVar9);
      unaff_x22[2] = (long)unaff_x22;
      unaff_x22[3] = 0x100f59f64;
      pcVar3 = (code *)(unaff_x22 + 2);
      func_0x000107c61448(pcVar3,0);
      lVar4 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      unaff_x22[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      unaff_x22[0x11] = lVar4;
      unaff_x22[0xb] = 0x42000000;
      unaff_x22[0xc] = (long)FUN_100f5a198;
      unaff_x22[0xd] = (long)&UNK_11036d918;
      unaff_x22[0xe] = (long)pcVar3;
      func_0x000107c42bf0(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        pcVar3 = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar3);
        return pcVar3;
      }
    }
    else {
      lVar20 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar7 = &UNK_10d914838;
        puVar11 = (undefined8 *)0xa0;
        puVar21 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        unaff_x22[0x1a] = (long)puVar11;
        *puVar11 = unaff_x22;
        puVar11[1] = FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
          puVar11[0xb] = 0;
          puVar11[0xc] = puVar9;
          puVar11[9] = lVar20;
          puVar11[10] = 0;
          puVar11[5] = pcVar3;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          pcVar3 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        puVar11 = (undefined8 *)
                  (ulong)*(uint *)(
                                  PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                  + 4);
        func_0x000107c615b8();
        unaff_x22[0x19] = (long)puVar11;
        *puVar11 = unaff_x22;
        puVar11[1] = FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar3,lVar20,0,0);
          return pcVar3;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(uVar10,puVar15);
    unaff_x22[0x12] = 0;
    puVar21 = puVar7;
    func_0x000107c4ff4c();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar7);
    lVar20 = unaff_x22[0x12];
    if ((int)puVar21 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar4 = lVar20;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar4);
    func_0x000107c61654();
    func_0x000107c6142c(puVar15);
    func_0x000107c614ac(lVar20);
LAB_100f59ac0:
    puVar9 = puVar15;
    pcVar3 = (code *)unaff_x22[0x17];
    (**(code **)(unaff_x22[0x16] + 8))(pcVar3,unaff_x22[0x15]);
    func_0x000107c615c0(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(0,0xf000000000000000);
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_78 = FUN_100f59c78;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *unaff_x22;
  plVar19 = (long *)*unaff_x22;
  puStack_90 = puVar9;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 200));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar4 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
  pcStack_a8 = FUN_100f59d24;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *plVar19;
  plVar19 = (long *)*plVar19;
  lStack_c0 = lVar4;
  lStack_b8 = lVar16;
  func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xd0));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar16 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar16 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_e0 = (ulong)&uStack_b0 | 0x1000000000000000;
  pcStack_d8 = FUN_100f59dd0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar19[0x1b];
  pcVar3 = (code *)plVar19[0x17];
  lVar4 = plVar19[0x18];
  uVar5 = 0;
  puStack_100 = puVar7;
  lStack_f8 = lVar20;
  lStack_f0 = lVar16;
  plStack_e8 = plVar19;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar4);
  if (lVar18 == 0) {
    uVar1 = (uint)(uVar5 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar20 = *(long *)(pcVar3 + 0x10);
        lVar4 = *(long *)(pcVar3 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar3,uVar5);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar20 = (long)(int)pcVar3;
      lVar4 = (long)pcVar3 >> 0x20;
LAB_100f59e60:
      if (lVar20 == lVar4) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar18);
LAB_100f59e74:
    pcVar3 = (code *)0x0;
    uVar5 = 0xf000000000000000;
  }
  lVar20 = plVar19[0x17];
  (**(code **)(plVar19[0x16] + 8))(lVar20,plVar19[0x15]);
  func_0x000107c615c0(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar19[1])(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_120 = (ulong)&uStack_e0 | 0x1000000000000000;
  pcStack_118 = FUN_100f59ed8;
  auStack_140[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar19[0x1c];
  plStack_128 = plVar19;
  func_0x000107c61170(plVar19[0x18]);
  func_0x000107c614ac(lVar20);
  lVar20 = plVar19[0x17];
  (**(code **)(plVar19[0x16] + 8))(lVar20,plVar19[0x15]);
  func_0x000107c615c0(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_140[2]) {
    pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar19[1])(0,0xf000000000000000);
    return pcVar3;
  }
  func_0x000107c60e78();
  auStack_140[0] = (ulong)&uStack_120 | 0x1000000000000000;
  auStack_140[1] = 0x100f59f64;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = *plVar19;
  lVar20 = *plVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    pcVar3 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_160 = (ulong)auStack_140 | 0x1000000000000000;
  pcStack_158 = FUN_100f59fd0;
  puVar22 = &uStack_160;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = *(code **)(lVar20 + 0xb8);
  uVar10 = *(undefined8 *)(lVar20 + 0xc0);
  uVar5 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar10);
  uVar1 = (uint)(uVar5 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar16 = (long)(int)pcVar3;
      lVar18 = (long)pcVar3 >> 0x20;
LAB_100f5a060:
      if (lVar16 != lVar18) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar16 = *(long *)(pcVar3 + 0x10);
    lVar18 = *(long *)(pcVar3 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar3,uVar5);
  pcVar3 = (code *)0x0;
  uVar5 = 0xf000000000000000;
LAB_100f5a07c:
  uVar8 = *(undefined8 *)(lVar20 + 0xb8);
  (**(code **)(*(long *)(lVar20 + 0xb0) + 8))(uVar8,*(undefined8 *)(lVar20 + 0xa8));
  uVar12 = uVar8;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar20 + 8))(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar17 = *(undefined8 *)pcVar3;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar15 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar17;
  *(undefined8 *)(puVar15 + 0x18) = uVar12;
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar12);
  pcVar13 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar15,
                      puVar21,uVar10,lVar20,uVar8,pcVar3,uVar5,puVar22,pcVar23);
  func_0x000107c61574(puVar15);
  return pcVar13;
}



/* Entry: 100f59c78; end: 100f59d23;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */

code * FUN_100f59c78(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x22;
  long *plVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *unaff_x22;
  plVar12 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 200));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(long *)(lVar8 + 0xe0) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *plVar12;
  plVar12 = (long *)*plVar12;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(long *)(lVar8 + 0xe0) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar12[0x1b];
  pcVar9 = (code *)plVar12[0x17];
  lVar6 = plVar12[0x18];
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar6);
  if (lVar11 == 0) {
    uVar1 = (uint)(uVar4 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar5 == 2) {
        lVar6 = *(long *)(pcVar9 + 0x10);
        lVar11 = *(long *)(pcVar9 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar9,uVar4);
      goto LAB_100f59e74;
    }
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar6 = (long)(int)pcVar9;
      lVar11 = (long)pcVar9 >> 0x20;
LAB_100f59e60:
      if (lVar6 == lVar11) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar11);
LAB_100f59e74:
    pcVar9 = (code *)0x0;
    uVar4 = 0xf000000000000000;
  }
  lVar6 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar6,plVar12[0x15]);
  func_0x000107c615c0(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(pcVar9,uVar4);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = plVar12[0x1c];
  func_0x000107c61170(plVar12[0x18]);
  func_0x000107c614ac(lVar6);
  lVar6 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar6,plVar12[0x15]);
  func_0x000107c615c0(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    pcVar9 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(0,0xf000000000000000);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar6 = *plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar9 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar9,0,0);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = *(code **)(lVar6 + 0xb8);
  uVar2 = *(undefined8 *)(lVar6 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar2);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar11 = (long)(int)pcVar9;
      lVar7 = (long)pcVar9 >> 0x20;
LAB_100f5a060:
      if (lVar11 != lVar7) goto LAB_100f5a07c;
    }
  }
  else if (uVar5 == 2) {
    lVar11 = *(long *)(pcVar9 + 0x10);
    lVar7 = *(long *)(pcVar9 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar9,uVar4);
  pcVar9 = (code *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar2 = *(undefined8 *)(lVar6 + 0xb8);
  (**(code **)(*(long *)(lVar6 + 0xb0) + 8))(uVar2,*(undefined8 *)(lVar6 + 0xa8));
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))(pcVar9,uVar4);
    return pcVar9;
  }
  func_0x000107c60e78();
  uVar10 = *(undefined8 *)pcVar9;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar3 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar2);
  pcVar9 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar3);
  func_0x000107c61574(puVar3);
  return pcVar9;
}



/* Entry: 100f59d24; end: 100f59dcf;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */

code * FUN_100f59d24(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x22;
  long *plVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *unaff_x22;
  plVar12 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(long *)(lVar8 + 0xe0) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      pcVar9 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar12[0x1b];
  pcVar9 = (code *)plVar12[0x17];
  lVar6 = plVar12[0x18];
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar6);
  if (lVar11 == 0) {
    uVar1 = (uint)(uVar4 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar5 == 2) {
        lVar6 = *(long *)(pcVar9 + 0x10);
        lVar11 = *(long *)(pcVar9 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar9,uVar4);
      goto LAB_100f59e74;
    }
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar6 = (long)(int)pcVar9;
      lVar11 = (long)pcVar9 >> 0x20;
LAB_100f59e60:
      if (lVar6 == lVar11) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar11);
LAB_100f59e74:
    pcVar9 = (code *)0x0;
    uVar4 = 0xf000000000000000;
  }
  lVar6 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar6,plVar12[0x15]);
  func_0x000107c615c0(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(pcVar9,uVar4);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = plVar12[0x1c];
  func_0x000107c61170(plVar12[0x18]);
  func_0x000107c614ac(lVar6);
  lVar6 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar6,plVar12[0x15]);
  func_0x000107c615c0(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    pcVar9 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(0,0xf000000000000000);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar6 = *plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar9 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar9,0,0);
    return pcVar9;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = *(code **)(lVar6 + 0xb8);
  uVar2 = *(undefined8 *)(lVar6 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar2);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar11 = (long)(int)pcVar9;
      lVar7 = (long)pcVar9 >> 0x20;
LAB_100f5a060:
      if (lVar11 != lVar7) goto LAB_100f5a07c;
    }
  }
  else if (uVar5 == 2) {
    lVar11 = *(long *)(pcVar9 + 0x10);
    lVar7 = *(long *)(pcVar9 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar9,uVar4);
  pcVar9 = (code *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar2 = *(undefined8 *)(lVar6 + 0xb8);
  (**(code **)(*(long *)(lVar6 + 0xb0) + 8))(uVar2,*(undefined8 *)(lVar6 + 0xa8));
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))(pcVar9,uVar4);
    return pcVar9;
  }
  func_0x000107c60e78();
  uVar10 = *(undefined8 *)pcVar9;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar3 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar2);
  pcVar9 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar3);
  func_0x000107c61574(puVar3);
  return pcVar9;
}



/* Entry: 100f59dd0; end: 100f59ed7;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */

code * FUN_100f59dd0(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = unaff_x22[0x1b];
  pcVar8 = (code *)unaff_x22[0x17];
  lVar9 = unaff_x22[0x18];
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar9);
  if (lVar11 == 0) {
    uVar1 = (uint)(uVar4 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar5 == 2) {
        lVar9 = *(long *)(pcVar8 + 0x10);
        lVar11 = *(long *)(pcVar8 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar8,uVar4);
      goto LAB_100f59e74;
    }
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar9 = (long)(int)pcVar8;
      lVar11 = (long)pcVar8 >> 0x20;
LAB_100f59e60:
      if (lVar9 == lVar11) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar11);
LAB_100f59e74:
    pcVar8 = (code *)0x0;
    uVar4 = 0xf000000000000000;
  }
  lVar9 = unaff_x22[0x17];
  (**(code **)(unaff_x22[0x16] + 8))(lVar9,unaff_x22[0x15]);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(pcVar8,uVar4);
    return pcVar8;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = unaff_x22[0x1c];
  func_0x000107c61170(unaff_x22[0x18]);
  func_0x000107c614ac(lVar9);
  lVar9 = unaff_x22[0x17];
  (**(code **)(unaff_x22[0x16] + 8))(lVar9,unaff_x22[0x15]);
  func_0x000107c615c0(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    pcVar8 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(0,0xf000000000000000);
    return pcVar8;
  }
  func_0x000107c60e78();
  lVar9 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar8 = FUN_100f59fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f59fd0,0,0);
    return pcVar8;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *(code **)(lVar9 + 0xb8);
  uVar2 = *(undefined8 *)(lVar9 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar2);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar11 = (long)(int)pcVar8;
      lVar7 = (long)pcVar8 >> 0x20;
LAB_100f5a060:
      if (lVar11 != lVar7) goto LAB_100f5a07c;
    }
  }
  else if (uVar5 == 2) {
    lVar11 = *(long *)(pcVar8 + 0x10);
    lVar7 = *(long *)(pcVar8 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar8,uVar4);
  pcVar8 = (code *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar2 = *(undefined8 *)(lVar9 + 0xb8);
  (**(code **)(*(long *)(lVar9 + 0xb0) + 8))(uVar2,*(undefined8 *)(lVar9 + 0xa8));
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 8))(pcVar8,uVar4);
    return pcVar8;
  }
  func_0x000107c60e78();
  uVar10 = *(undefined8 *)pcVar8;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar3 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar2);
  pcVar8 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar3);
  func_0x000107c61574(puVar3);
  return pcVar8;
}



/* Entry: 100f59ed8; end: 100f59fcf;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */

code * FUN_100f59ed8(void)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x22;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = unaff_x22[0x1c];
  func_0x000107c61170(unaff_x22[0x18]);
  func_0x000107c614ac(lVar10);
  lVar10 = unaff_x22[0x17];
  (**(code **)(unaff_x22[0x16] + 8))(lVar10,unaff_x22[0x15]);
  func_0x000107c615c0(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    pcVar2 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(0,0xf000000000000000);
    return pcVar2;
  }
  func_0x000107c60e78();
  lVar10 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar2 = FUN_100f59fd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f59fd0,0,0);
    return pcVar2;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = *(code **)(lVar10 + 0xb8);
  uVar3 = *(undefined8 *)(lVar10 + 0xc0);
  uVar5 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar3);
  uVar1 = (uint)(uVar5 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((uVar5 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar8 = (long)(int)pcVar2;
      lVar9 = (long)pcVar2 >> 0x20;
LAB_100f5a060:
      if (lVar8 != lVar9) goto LAB_100f5a07c;
    }
  }
  else if (uVar6 == 2) {
    lVar8 = *(long *)(pcVar2 + 0x10);
    lVar9 = *(long *)(pcVar2 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar2,uVar5);
  pcVar2 = (code *)0x0;
  uVar5 = 0xf000000000000000;
LAB_100f5a07c:
  uVar3 = *(undefined8 *)(lVar10 + 0xb8);
  (**(code **)(*(long *)(lVar10 + 0xb0) + 8))(uVar3,*(undefined8 *)(lVar10 + 0xa8));
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar10 + 8))(pcVar2,uVar5);
    return pcVar2;
  }
  func_0x000107c60e78();
  uVar11 = *(undefined8 *)pcVar2;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar4 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar3);
  pcVar2 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar4);
  func_0x000107c61574(puVar4);
  return pcVar2;
}



/* Entry: 100f59fd0; end: 100f5a0d7;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */

undefined8 * FUN_100f59fd0(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(undefined8 **)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar2);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar7 = (long)(int)puVar9;
      lVar8 = (long)puVar9 >> 0x20;
LAB_100f5a060:
      if (lVar7 != lVar8) goto LAB_100f5a07c;
    }
  }
  else if (uVar5 == 2) {
    lVar7 = puVar9[2];
    lVar8 = puVar9[3];
    goto LAB_100f5a060;
  }
  func_0x00010006c090(puVar9,uVar4);
  puVar9 = (undefined8 *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar9,uVar4);
    return puVar9;
  }
  func_0x000107c60e78();
  uVar10 = *puVar9;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar3 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar2);
  puVar9 = (undefined8 *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar3);
  func_0x000107c61574(puVar3);
  return puVar9;
}



/* Entry: 100f5a0d8; end: 100f5a197;  */

undefined8 FUN_100f5a0d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar1 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_1);
  uVar2 = 1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar1);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 100f5a198; end: 100f5a1b7;  */

void FUN_100f5a198(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  func_0x0001006732c8(puVar1,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(*puVar1);
  return;
}



/* Entry: 100f5a1b8; end: 100f5a20f;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f5a1b8(undefined8 param_1,undefined *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  undefined *puVar20;
  ulong unaff_x29;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong auStack_160 [3];
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_78;
  ulong uStack_30;
  code *pcStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar13 = (long *)0xf0;
  puVar16 = param_2;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100f5a210;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13[0x13] = param_3;
  plVar13[0x14] = (long)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar3 = FUN_100f59760;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_100f59760;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar13[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  lVar15 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  lStack_90 = lVar15;
  puStack_88 = puVar16;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar19 + _DAT_112d4e460),
                      ((undefined8 *)(lVar19 + _DAT_112d4e460))[1]);
  puVar16 = puStack_88;
  lVar15 = lStack_90;
  lVar19 = 0;
  func_0x000107c5ede0();
  plVar13[0x15] = lVar19;
  lVar19 = *(long *)(lVar19 + -8);
  plVar13[0x16] = lVar19;
  pcVar3 = (code *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar13[0x17] = (long)pcVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar3,lVar15,puVar16);
  }
  else {
    lVar4 = 0;
    func_0x000107c5ed68();
    lVar4 = *(long *)(lVar4 + -8);
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar4 + 0x68))();
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar6);
    (**(code **)(lVar19 + 0x38))();
    func_0x000107c61434(puVar16);
    func_0x000107c5edd4(pcVar3,lVar15,puVar16,uVar5,uVar6);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
  }
  puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar20 = puVar7;
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar19 = lVar15;
  func_0x000107c5fadc(lVar15,puVar16);
  puVar8 = puVar20;
  func_0x000107c43418();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(puVar20);
  if ((int)puVar8 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar16);
    puVar16 = (undefined *)plVar13[0x13];
    lVar15 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar8 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    plVar13[0x18] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar9 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar9 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c57120(puVar8);
      plVar13[2] = (long)plVar13;
      plVar13[3] = 0x100f59f64;
      pcVar3 = (code *)(plVar13 + 2);
      func_0x000107c61448(pcVar3,0);
      lVar19 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      plVar13[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      plVar13[0x11] = lVar19;
      plVar13[0xb] = 0x42000000;
      plVar13[0xc] = (long)FUN_100f5a198;
      plVar13[0xd] = (long)&UNK_11036d918;
      plVar13[0xe] = (long)pcVar3;
      func_0x000107c42bf0(puVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        pcVar3 = (code *)(plVar13 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar3);
        return pcVar3;
      }
    }
    else {
      lVar15 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar7 = &UNK_10d914838;
        plVar10 = (long *)0xa0;
        puVar20 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        plVar13[0x1a] = (long)plVar10;
        *plVar10 = (long)plVar13;
        plVar10[1] = (long)FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
          plVar10[0xb] = 0;
          plVar10[0xc] = (long)puVar8;
          plVar10[9] = lVar15;
          plVar10[10] = 0;
          plVar10[5] = (long)pcVar3;
          plVar10[0xd] = 0;
          plVar10[0xe] = 0;
          pcVar3 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        plVar10 = (long *)(ulong)*(uint *)(
                                          PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                          + 4);
        func_0x000107c615b8();
        plVar13[0x19] = (long)plVar10;
        *plVar10 = (long)plVar13;
        plVar10[1] = (long)FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar3,lVar15,0,0);
          return pcVar3;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar15,puVar16);
    plVar13[0x12] = 0;
    puVar20 = puVar7;
    func_0x000107c4ff4c();
    func_0x000107c61170(lVar15);
    func_0x000107c61170(puVar7);
    lVar15 = plVar13[0x12];
    if ((int)puVar20 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar19 = lVar15;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar19);
    func_0x000107c61654();
    func_0x000107c6142c(puVar16);
    func_0x000107c614ac(lVar15);
LAB_100f59ac0:
    puVar8 = puVar16;
    pcVar3 = (code *)plVar13[0x17];
    (**(code **)(plVar13[0x16] + 8))(pcVar3,plVar13[0x15]);
    func_0x000107c615c0(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar13[1])(0,0xf000000000000000);
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_98 = FUN_100f59c78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *plVar13;
  plVar13 = (long *)*plVar13;
  puStack_b0 = puVar8;
  lStack_a8 = lVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 200));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar19 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_c8 = FUN_100f59d24;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *plVar13;
  plVar13 = (long *)*plVar13;
  lStack_e0 = lVar19;
  lStack_d8 = lVar4;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar4 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_f8 = FUN_100f59dd0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar13[0x1b];
  pcVar3 = (code *)plVar13[0x17];
  lVar19 = plVar13[0x18];
  uVar5 = 0;
  puStack_120 = puVar7;
  lStack_118 = lVar15;
  lStack_110 = lVar4;
  plStack_108 = plVar13;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar19);
  if (lVar18 == 0) {
    uVar1 = (uint)(uVar5 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar15 = *(long *)(pcVar3 + 0x10);
        lVar19 = *(long *)(pcVar3 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar3,uVar5);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar15 = (long)(int)pcVar3;
      lVar19 = (long)pcVar3 >> 0x20;
LAB_100f59e60:
      if (lVar15 == lVar19) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar18);
LAB_100f59e74:
    pcVar3 = (code *)0x0;
    uVar5 = 0xf000000000000000;
  }
  lVar15 = plVar13[0x17];
  (**(code **)(plVar13[0x16] + 8))(lVar15,plVar13[0x15]);
  func_0x000107c615c0(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar13[1])(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_138 = FUN_100f59ed8;
  auStack_160[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = plVar13[0x1c];
  plStack_148 = plVar13;
  func_0x000107c61170(plVar13[0x18]);
  func_0x000107c614ac(lVar15);
  lVar15 = plVar13[0x17];
  (**(code **)(plVar13[0x16] + 8))(lVar15,plVar13[0x15]);
  func_0x000107c615c0(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_160[2]) {
    pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar13[1])(0,0xf000000000000000);
    return pcVar3;
  }
  func_0x000107c60e78();
  auStack_160[0] = (ulong)&uStack_140 | 0x1000000000000000;
  auStack_160[1] = 0x100f59f64;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar13;
  lVar15 = *plVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    pcVar3 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)auStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_100f59fd0;
  puVar22 = &uStack_180;
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = *(code **)(lVar15 + 0xb8);
  uVar9 = *(undefined8 *)(lVar15 + 0xc0);
  uVar5 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar9);
  uVar1 = (uint)(uVar5 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar5 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar4 = (long)(int)pcVar3;
      lVar18 = (long)pcVar3 >> 0x20;
LAB_100f5a060:
      if (lVar4 != lVar18) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar4 = *(long *)(pcVar3 + 0x10);
    lVar18 = *(long *)(pcVar3 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar3,uVar5);
  pcVar3 = (code *)0x0;
  uVar5 = 0xf000000000000000;
LAB_100f5a07c:
  uVar21 = *(undefined8 *)(lVar15 + 0xb8);
  (**(code **)(*(long *)(lVar15 + 0xb0) + 8))(uVar21,*(undefined8 *)(lVar15 + 0xa8));
  uVar11 = uVar21;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(pcVar3,uVar5);
    return pcVar3;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar17 = *(undefined8 *)pcVar3;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar16 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar17;
  *(undefined8 *)(puVar16 + 0x18) = uVar11;
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar11);
  pcVar12 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar16,
                      puVar20,uVar9,lVar15,uVar21,pcVar3,uVar5,puVar22,pcVar23);
  func_0x000107c61574(puVar16);
  return pcVar12;
}



/* Entry: 100f5a210; end: 100f5a25f;  */

void FUN_100f5a210(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5a260,0,0);
  return;
}



/* Entry: 100f5a260; end: 100f5a277;  */

void FUN_100f5a260(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x28);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100f5a274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f5a278; end: 100f5a3a7;  */

undefined8 FUN_100f5a278(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar1 = &UNK_11036d978;
  func_0x000107c613fc(&UNK_11036d978,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914858,puVar1);
  func_0x000107c61574(puVar1);
  uVar3 = 0;
  func_0x000100759f5c(0,1,FUN_100f5a3a8,0,PTR___s10Foundation4DataVN_110350ae0);
  uVar4 = 0;
  func_0x000100f5aca0(0);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_100f5a3d8,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x00010488b12c();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  return uVar3;
}



/* Entry: 100f5a3a8; end: 100f5a3d7;  */

void FUN_100f5a3a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_100de78a0(uVar1);
  return;
}



/* Entry: 100f5a3d8; end: 100f5a44b;  */

void FUN_100f5a3d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c610f8();
  func_0x000107c5ee20(uVar3,uVar1);
  func_0x000107c4635c();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 100f5a44c; end: 100f5a4a7; -[_TtC33AutoCaptionsHelperServiceProvider19AudioAssetExtractor extractAudioDataFrom:] */

void FUN_100f5a44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100f5a278(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f5a4a8; end: 100f5a4c7;  */

void FUN_100f5a4a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4e10);
  return;
}



/* Entry: 100f5a4c8; end: 100f5a52b;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f5a4c8(long param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  long unaff_x22;
  long lVar19;
  undefined *puVar20;
  ulong unaff_x29;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong auStack_160 [3];
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_78;
  ulong uStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  puVar16 = *(undefined **)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  plVar13 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = 0x100f5acf0;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar13[2] = param_1;
  plVar12 = (long *)0xf0;
  puVar6 = puVar16;
  func_0x000107c615b8();
  plVar13[3] = (long)plVar12;
  *plVar12 = (long)plVar13;
  plVar12[1] = (long)FUN_100f5a210;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0x13] = lVar8;
  plVar12[0x14] = (long)puVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar3 = FUN_100f59760;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar12[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  lVar15 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  lStack_90 = lVar15;
  puStack_88 = puVar6;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar19 + _DAT_112d4e460),
                      ((undefined8 *)(lVar19 + _DAT_112d4e460))[1]);
  puVar16 = puStack_88;
  lVar8 = lStack_90;
  lVar15 = 0;
  func_0x000107c5ede0();
  plVar12[0x15] = lVar15;
  lVar15 = *(long *)(lVar15 + -8);
  plVar12[0x16] = lVar15;
  pcVar3 = (code *)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar12[0x17] = (long)pcVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar3,lVar8,puVar16);
  }
  else {
    lVar19 = 0;
    func_0x000107c5ed68();
    lVar19 = *(long *)(lVar19 + -8);
    uVar4 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar4);
    (**(code **)(lVar19 + 0x68))();
    lVar19 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar15 + 0x38))();
    func_0x000107c61434(puVar16);
    func_0x000107c5edd4(pcVar3,lVar8,puVar16,uVar4,uVar5);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar20 = puVar6;
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar15 = lVar8;
  func_0x000107c5fadc(lVar8,puVar16);
  puVar7 = puVar20;
  func_0x000107c43418();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar20);
  if ((int)puVar7 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar16);
    puVar16 = (undefined *)plVar12[0x13];
    lVar8 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    plVar12[0x18] = (long)puVar7;
    if (puVar7 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar9 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar9 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c57120(puVar7);
      plVar12[2] = (long)plVar12;
      plVar12[3] = 0x100f59f64;
      pcVar3 = (code *)(plVar12 + 2);
      func_0x000107c61448(pcVar3,0);
      lVar15 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      plVar12[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      plVar12[0x11] = lVar15;
      plVar12[0xb] = 0x42000000;
      plVar12[0xc] = (long)FUN_100f5a198;
      plVar12[0xd] = (long)&UNK_11036d918;
      plVar12[0xe] = (long)pcVar3;
      func_0x000107c42bf0(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        pcVar3 = (code *)(plVar12 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar3);
        return pcVar3;
      }
    }
    else {
      lVar8 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar6 = &UNK_10d914838;
        plVar13 = (long *)0xa0;
        puVar20 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        plVar12[0x1a] = (long)plVar13;
        *plVar13 = (long)plVar12;
        plVar13[1] = (long)FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
          plVar13[0xb] = 0;
          plVar13[0xc] = (long)puVar7;
          plVar13[9] = lVar8;
          plVar13[10] = 0;
          plVar13[5] = (long)pcVar3;
          plVar13[0xd] = 0;
          plVar13[0xe] = 0;
          pcVar3 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        plVar13 = (long *)(ulong)*(uint *)(
                                          PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                          + 4);
        func_0x000107c615b8();
        plVar12[0x19] = (long)plVar13;
        *plVar13 = (long)plVar12;
        plVar13[1] = (long)FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar3,lVar8,0,0);
          return pcVar3;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar8,puVar16);
    plVar12[0x12] = 0;
    puVar20 = puVar6;
    func_0x000107c4ff4c();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar6);
    lVar8 = plVar12[0x12];
    if ((int)puVar20 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar15 = lVar8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar15);
    func_0x000107c61654();
    func_0x000107c6142c(puVar16);
    func_0x000107c614ac(lVar8);
LAB_100f59ac0:
    puVar7 = puVar16;
    pcVar3 = (code *)plVar12[0x17];
    (**(code **)(plVar12[0x16] + 8))(pcVar3,plVar12[0x15]);
    func_0x000107c615c0(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar12[1])(0,0xf000000000000000);
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_98 = FUN_100f59c78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *plVar12;
  plVar12 = (long *)*plVar12;
  puStack_b0 = puVar7;
  lStack_a8 = lVar15;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 200));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar15 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar15 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_c8 = FUN_100f59d24;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *plVar12;
  plVar12 = (long *)*plVar12;
  lStack_e0 = lVar15;
  lStack_d8 = lVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xd0));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar19 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_f8 = FUN_100f59dd0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar12[0x1b];
  pcVar3 = (code *)plVar12[0x17];
  lVar15 = plVar12[0x18];
  uVar4 = 0;
  puStack_120 = puVar6;
  lStack_118 = lVar8;
  lStack_110 = lVar19;
  plStack_108 = plVar12;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar15);
  if (lVar18 == 0) {
    uVar1 = (uint)(uVar4 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar8 = *(long *)(pcVar3 + 0x10);
        lVar15 = *(long *)(pcVar3 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar3,uVar4);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar8 = (long)(int)pcVar3;
      lVar15 = (long)pcVar3 >> 0x20;
LAB_100f59e60:
      if (lVar8 == lVar15) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar18);
LAB_100f59e74:
    pcVar3 = (code *)0x0;
    uVar4 = 0xf000000000000000;
  }
  lVar8 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar8,plVar12[0x15]);
  func_0x000107c615c0(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(pcVar3,uVar4);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_138 = FUN_100f59ed8;
  auStack_160[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = plVar12[0x1c];
  plStack_148 = plVar12;
  func_0x000107c61170(plVar12[0x18]);
  func_0x000107c614ac(lVar8);
  lVar8 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar8,plVar12[0x15]);
  func_0x000107c615c0(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_160[2]) {
    pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(0,0xf000000000000000);
    return pcVar3;
  }
  func_0x000107c60e78();
  auStack_160[0] = (ulong)&uStack_140 | 0x1000000000000000;
  auStack_160[1] = 0x100f59f64;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar12;
  lVar8 = *plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    pcVar3 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)auStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_100f59fd0;
  puVar22 = &uStack_180;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = *(code **)(lVar8 + 0xb8);
  uVar9 = *(undefined8 *)(lVar8 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar9);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar19 = (long)(int)pcVar3;
      lVar18 = (long)pcVar3 >> 0x20;
LAB_100f5a060:
      if (lVar19 != lVar18) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar19 = *(long *)(pcVar3 + 0x10);
    lVar18 = *(long *)(pcVar3 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar3,uVar4);
  pcVar3 = (code *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar21 = *(undefined8 *)(lVar8 + 0xb8);
  (**(code **)(*(long *)(lVar8 + 0xb0) + 8))(uVar21,*(undefined8 *)(lVar8 + 0xa8));
  uVar10 = uVar21;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(pcVar3,uVar4);
    return pcVar3;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar17 = *(undefined8 *)pcVar3;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar16 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar17;
  *(undefined8 *)(puVar16 + 0x18) = uVar10;
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar10);
  pcVar11 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar16,
                      puVar20,uVar9,lVar8,uVar21,pcVar3,uVar4,puVar22,pcVar23);
  func_0x000107c61574(puVar16);
  return pcVar11;
}



/* Entry: 100f5a52c; end: 100f5a543;  */

long FUN_100f5a52c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 100f5a544; end: 100f5a5af;  */

void FUN_100f5a544(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(long *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  if (param_3 == 0) {
    param_3 = 0;
    param_4 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5a5b0,param_3);
  return;
}



/* Entry: 100f5a5b0; end: 100f5a6db;  */

void FUN_100f5a5b0(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5ed90();
  func_0x000107c57128(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c57120(uVar4);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100f5a7ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )();
    return;
  }
  pcVar3 = FUN_100f5ab64;
  func_0x000107c615b4(FUN_100f5ab64,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0x78) = pcVar3;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f5a6dc;
                    /* WARNING: Could not recover jumptable at 0x000100f5a6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x100f5a820)(0x100f5a820,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 100f5a6dc; end: 100f5a733;  */

void FUN_100f5a6dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x100f5a774;
  }
  else {
    pcVar1 = FUN_100f5a734;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
  return;
}



/* Entry: 100f5a734; end: 100f5a7ab;  */

void FUN_100f5a734(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x78));
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100f5a808,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 100f5a7ac; end: 100f5a807;  */

void FUN_100f5a7ac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = (code *)0x100f5a814;
  }
  else {
    *(long *)(lVar4 + 0x98) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    pcVar1 = FUN_100f5a808;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f5a808; end: 100f5a837;  */

void FUN_100f5a808(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100f5a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f5a838; end: 100f5a93b;  */

void FUN_100f5a838(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c5bd00();
  if (lVar1 == 5) {
    uVar2 = 0;
    func_0x000107c5fcbc(0);
    uVar3 = uVar2;
    func_0x000100f5abbc();
    func_0x000107c613f8(uVar2,uVar3,0,0);
    func_0x000107c5f9d4(uVar3);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100f5a8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f5a93c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar3 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100f5a198;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11036d940;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c42bf0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f5a93c; end: 100f5a97b;  */

void FUN_100f5a93c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5a97c,0,0);
  return;
}



/* Entry: 100f5a97c; end: 100f5aaf7;  */

void FUN_100f5a97c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c5bd00();
  if (lVar1 == 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if (lVar1 == 4) {
      lVar1 = *(long *)(unaff_x22 + 0x98);
      func_0x000107c42a28();
      func_0x000107c61180();
      if (lVar1 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100f5aaf8);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    else {
      if (lVar1 != 5) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000107c602fc(0x1d);
        puVar4 = (undefined8 *)(unaff_x22 + 0x50);
        *puVar4 = 0;
        *(undefined8 *)(unaff_x22 + 0x58) = 0xe000000000000000;
        func_0x000107c5fb78(0xd00000000000001b,0x800000010ef1c4c0);
        func_0x000107c5bd00();
        *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
        uVar3 = 0;
        func_0x000100f5ab6c(0);
        func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x90),puVar4,uVar3,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c60450("Fatal error",0xb,2,*puVar4,*(undefined8 *)(unaff_x22 + 0x58),
                            "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x551,0);
        return;
      }
      uVar2 = 0;
      func_0x000107c5fcbc(0);
      uVar3 = uVar2;
      func_0x000100f5abbc();
      func_0x000107c613f8(uVar2,uVar3,0,0);
      func_0x000107c5f9d4(uVar3);
    }
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f5aa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100f5aaf8; end: 100f5ab63;  */

void FUN_100f5aaf8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100f5acec;
  plVar1[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f5a838,0,0);
  return;
}



/* Entry: 100f5ab64; end: 100f5ab6b;  */

void FUN_100f5ab64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancelExport_1125a9298);
  return;
}



/* Entry: 100f5ab6c; end: 100f5abff;  */

void FUN_100f5ab6c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d4e4b0 != 0) {
    return;
  }
  puVar1 = &UNK_11036d9a0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d4e4b0 = param_1;
  return;
}



/* Entry: 100f5ac00; end: 100f5ac63;  */

/* WARNING: Removing unreachable block (ram,0x000100f5a020) */
/* WARNING: Removing unreachable block (ram,0x000100f5a568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f5ac00(long param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  long unaff_x22;
  long lVar19;
  undefined *puVar20;
  ulong unaff_x29;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  ulong auStack_160 [3];
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_78;
  ulong uStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  puVar16 = *(undefined **)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  plVar13 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100f5ac64;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar13[2] = param_1;
  plVar12 = (long *)0xf0;
  puVar6 = puVar16;
  func_0x000107c615b8();
  plVar13[3] = (long)plVar12;
  *plVar12 = (long)plVar13;
  plVar12[1] = (long)FUN_100f5a210;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0x13] = lVar8;
  plVar12[0x14] = (long)puVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar3 = FUN_100f59760;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar12[0x14];
  func_0x0001005c6500();
  func_0x000107c61180();
  lVar15 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  lStack_90 = lVar15;
  puStack_88 = puVar6;
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(lVar19 + _DAT_112d4e460),
                      ((undefined8 *)(lVar19 + _DAT_112d4e460))[1]);
  puVar16 = puStack_88;
  lVar8 = lStack_90;
  lVar15 = 0;
  func_0x000107c5ede0();
  plVar12[0x15] = lVar15;
  lVar15 = *(long *)(lVar15 + -8);
  plVar12[0x16] = lVar15;
  pcVar3 = (code *)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar12[0x17] = (long)pcVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c5ed80(pcVar3,lVar8,puVar16);
  }
  else {
    lVar19 = 0;
    func_0x000107c5ed68();
    lVar19 = *(long *)(lVar19 + -8);
    uVar4 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar4);
    (**(code **)(lVar19 + 0x68))();
    lVar19 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    (**(code **)(lVar15 + 0x38))();
    func_0x000107c61434(puVar16);
    func_0x000107c5edd4(pcVar3,lVar8,puVar16,uVar4,uVar5);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar20 = puVar6;
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar15 = lVar8;
  func_0x000107c5fadc(lVar8,puVar16);
  puVar7 = puVar20;
  func_0x000107c43418();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar20);
  if ((int)puVar7 == 0) {
LAB_100f599a0:
    func_0x000107c6142c(puVar16);
    puVar16 = (undefined *)plVar12[0x13];
    lVar8 = *(long *)PTR__AVAssetExportPresetAppleM4A_110347ea8;
    puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x000107c610f8();
    func_0x000107c457ac();
    plVar12[0x18] = (long)puVar7;
    if (puVar7 == (undefined *)0x0) goto LAB_100f59ac0;
    uVar9 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar9 == 0) {
      func_0x000107c5ed90();
      func_0x000107c57128(puVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c57120(puVar7);
      plVar12[2] = (long)plVar12;
      plVar12[3] = 0x100f59f64;
      pcVar3 = (code *)(plVar12 + 2);
      func_0x000107c61448(pcVar3,0);
      lVar15 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      plVar12[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
      plVar12[0x11] = lVar15;
      plVar12[0xb] = 0x42000000;
      plVar12[0xc] = (long)FUN_100f5a198;
      plVar12[0xd] = (long)&UNK_11036d918;
      plVar12[0xe] = (long)pcVar3;
      func_0x000107c42bf0(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        pcVar3 = (code *)(plVar12 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(pcVar3);
        return pcVar3;
      }
    }
    else {
      lVar8 = *(long *)PTR__AVFileTypeAppleM4A_110347ff0;
      iVar2 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar2 == 0) {
        puVar6 = &UNK_10d914838;
        plVar13 = (long *)0xa0;
        puVar20 = (undefined *)0xfffffffff3645d0c;
        func_0x000107c615b8();
        plVar12[0x1a] = (long)plVar13;
        *plVar13 = (long)plVar12;
        plVar13[1] = (long)FUN_100f59d24;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
          plVar13[0xb] = 0;
          plVar13[0xc] = (long)puVar7;
          plVar13[9] = lVar8;
          plVar13[10] = 0;
          plVar13[5] = (long)pcVar3;
          plVar13[0xd] = 0;
          plVar13[0xe] = 0;
          pcVar3 = FUN_100f5a5b0;
          goto LAB_107c615e0;
        }
      }
      else {
        plVar13 = (long *)(ulong)*(uint *)(
                                          PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKFTu_11034d568
                                          + 4);
        func_0x000107c615b8();
        plVar12[0x19] = (long)plVar13;
        *plVar13 = (long)plVar12;
        plVar13[1] = (long)FUN_100f59c78;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___sSo20AVAssetExportSessionC12AVFoundationE6export2to2as9isolationy10Foundation3URLV_So10AVFileTypeaScA_pSgYitYaKF_11034d560
          )(pcVar3,lVar8,0,0);
          return pcVar3;
        }
      }
    }
  }
  else {
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar8,puVar16);
    plVar12[0x12] = 0;
    puVar20 = puVar6;
    func_0x000107c4ff4c();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar6);
    lVar8 = plVar12[0x12];
    if ((int)puVar20 != 0) {
      func_0x000107c61174();
      goto LAB_100f599a0;
    }
    lVar15 = lVar8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar15);
    func_0x000107c61654();
    func_0x000107c6142c(puVar16);
    func_0x000107c614ac(lVar8);
LAB_100f59ac0:
    puVar7 = puVar16;
    pcVar3 = (code *)plVar12[0x17];
    (**(code **)(plVar12[0x16] + 8))(pcVar3,plVar12[0x15]);
    func_0x000107c615c0(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar12[1])(0,0xf000000000000000);
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_98 = FUN_100f59c78;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *plVar12;
  plVar12 = (long *)*plVar12;
  puStack_b0 = puVar7;
  lStack_a8 = lVar15;
  func_0x000107c615c0(*(undefined8 *)(lVar15 + 200));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar15 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar15 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
  pcStack_c8 = FUN_100f59d24;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *plVar12;
  plVar12 = (long *)*plVar12;
  lStack_e0 = lVar15;
  lStack_d8 = lVar19;
  func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xd0));
  if (pcVar3 == (code *)0x0) {
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59dd0;
      goto LAB_107c615e0;
    }
  }
  else {
    *(code **)(lVar19 + 0xe0) = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar3 = FUN_100f59ed8;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
  pcStack_f8 = FUN_100f59dd0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar12[0x1b];
  pcVar3 = (code *)plVar12[0x17];
  lVar15 = plVar12[0x18];
  uVar4 = 0;
  puStack_120 = puVar6;
  lStack_118 = lVar8;
  lStack_110 = lVar19;
  plStack_108 = plVar12;
  func_0x000107c5ede8();
  func_0x000107c61170(lVar15);
  if (lVar18 == 0) {
    uVar1 = (uint)(uVar4 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 == 2) {
        lVar8 = *(long *)(pcVar3 + 0x10);
        lVar15 = *(long *)(pcVar3 + 0x18);
        goto LAB_100f59e60;
      }
LAB_100f59e68:
      func_0x00010006c090(pcVar3,uVar4);
      goto LAB_100f59e74;
    }
    if (uVar14 == 0) {
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_100f59e68;
    }
    else {
      lVar8 = (long)(int)pcVar3;
      lVar15 = (long)pcVar3 >> 0x20;
LAB_100f59e60:
      if (lVar8 == lVar15) goto LAB_100f59e68;
    }
  }
  else {
    func_0x000107c614ac(lVar18);
LAB_100f59e74:
    pcVar3 = (code *)0x0;
    uVar4 = 0xf000000000000000;
  }
  lVar8 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar8,plVar12[0x15]);
  func_0x000107c615c0(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000100f59ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(pcVar3,uVar4);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
  pcStack_138 = FUN_100f59ed8;
  auStack_160[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = plVar12[0x1c];
  plStack_148 = plVar12;
  func_0x000107c61170(plVar12[0x18]);
  func_0x000107c614ac(lVar8);
  lVar8 = plVar12[0x17];
  (**(code **)(plVar12[0x16] + 8))(lVar8,plVar12[0x15]);
  func_0x000107c615c0(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_160[2]) {
    pcVar3 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100f59f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])(0,0xf000000000000000);
    return pcVar3;
  }
  func_0x000107c60e78();
  auStack_160[0] = (ulong)&uStack_140 | 0x1000000000000000;
  auStack_160[1] = 0x100f59f64;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *plVar12;
  lVar8 = *plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    pcVar3 = FUN_100f59fd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return pcVar3;
  }
  func_0x000107c60e78();
  uStack_180 = (ulong)auStack_160 | 0x1000000000000000;
  pcStack_178 = FUN_100f59fd0;
  puVar22 = &uStack_180;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = *(code **)(lVar8 + 0xb8);
  uVar9 = *(undefined8 *)(lVar8 + 0xc0);
  uVar4 = 0;
  func_0x000107c5ede8();
  func_0x000107c61170(uVar9);
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      if ((uVar4 & 0xff000000000000) != 0) goto LAB_100f5a07c;
    }
    else {
      lVar19 = (long)(int)pcVar3;
      lVar18 = (long)pcVar3 >> 0x20;
LAB_100f5a060:
      if (lVar19 != lVar18) goto LAB_100f5a07c;
    }
  }
  else if (uVar14 == 2) {
    lVar19 = *(long *)(pcVar3 + 0x10);
    lVar18 = *(long *)(pcVar3 + 0x18);
    goto LAB_100f5a060;
  }
  func_0x00010006c090(pcVar3,uVar4);
  pcVar3 = (code *)0x0;
  uVar4 = 0xf000000000000000;
LAB_100f5a07c:
  uVar21 = *(undefined8 *)(lVar8 + 0xb8);
  (**(code **)(*(long *)(lVar8 + 0xb0) + 8))(uVar21,*(undefined8 *)(lVar8 + 0xa8));
  uVar10 = uVar21;
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100f5a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(pcVar3,uVar4);
    return pcVar3;
  }
  func_0x000107c60e78();
  pcVar23 = FUN_100f5a0d8;
  uVar17 = *(undefined8 *)pcVar3;
  func_0x0001000285a8(0x112d4e490,&UNK_10d914810);
  puVar16 = &UNK_11036d900;
  func_0x000107c613fc(&UNK_11036d900,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar17;
  *(undefined8 *)(puVar16 + 0x18) = uVar10;
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar10);
  pcVar11 = (code *)0x1;
  func_0x000104887c7c(1,2,0x2c,4,0xd000000000000017,0x800000010ef1c470,&UNK_10d914820,puVar16,
                      puVar20,uVar9,lVar8,uVar21,pcVar3,uVar4,puVar22,pcVar23);
  func_0x000107c61574(puVar16);
  return pcVar11;
}



/* Entry: 100f5ac64; end: 100f5ace3;  */

void FUN_100f5ac64(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f5ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f5ace4; end: 100f5ad13;  */

void FUN_100f5ace4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100f5ad14; end: 100f5ad7f;  */

void FUN_100f5ad14(undefined8 param_1)

{
  if (lRam0000000112d4e4e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61b3e0);
  return;
}



/* Entry: 100f5ad80; end: 100f5add7;  */

void FUN_100f5ad80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_100f5a4a8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_10123a270(0);
  func_0x000107c610f8();
  func_0x00010123a154(uVar1,&PTR_DAT_11036d8d8,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100f5add8; end: 100f5ae8f; -[SCAutoCaptionsHelperServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5add8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100f5ad14();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d4e580);
  *(undefined8 *)(param_1 + _DAT_112d4e580) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  uVar2 = 0;
  FUN_100f5a4a8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0;
  FUN_10123a270(0);
  func_0x000107c610f8();
  func_0x00010123a154(uVar2,&PTR_DAT_11036d8d8,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100f5ae90; end: 100f5af47; -[SCAutoCaptionsHelperServiceProvider __safeProvide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ae90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100f5ad14();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d4e580);
  *(undefined8 *)(param_1 + _DAT_112d4e580) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  uVar2 = 0;
  FUN_100f5a4a8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0;
  FUN_10123a270(0);
  func_0x000107c610f8();
  func_0x00010123a154(uVar2,&PTR_DAT_11036d8d8,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100f5af48; end: 100f5af8b; -[SCAutoCaptionsHelperServiceProvider end] */

void FUN_100f5af48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5af8c; end: 100f5b067; -[SCAutoCaptionsHelperServiceProvider setValue:forIvarName:] */

void FUN_100f5af8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar2 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar2,param_2);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                      "AutoCaptionsHelperServiceProvider/SCAutoCaptionsHelperServiceProvider.swift",
                      0x4b,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b068);
  (*pcVar1)();
}



/* Entry: 100f5b068; end: 100f5b0af; -[SCAutoCaptionsHelperServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5b068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d4e580) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5b0b0; end: 100f5b0e3;  */

void FUN_100f5b0b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5b0e4; end: 100f5b0f3; -[SCAutoCaptionsHelperServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5b0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e580));
  return;
}



/* Entry: 100f5b0f4; end: 100f5b113;  */

void FUN_100f5b0f4(void)

{
  func_0x000107c61168(&PTR_PTR_112d4e5c8);
  return;
}



/* Entry: 100f5b114; end: 100f5b16f; -[_TtC31CreativeToolItemReportingPlugin31CreativeToolItemReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_100f5b114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100f5b32c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f5b170; end: 100f5b187; -[_TtC31CreativeToolItemReportingPlugin31CreativeToolItemReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000100f5b184) */

void FUN_100f5b170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5b188; end: 100f5b1e3; -[_TtC31CreativeToolItemReportingPlugin31CreativeToolItemReportingPlugin isReportableForMessage:] */

uint FUN_100f5b188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100f5b630(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100f5b1e4; end: 100f5b21f; -[_TtC31CreativeToolItemReportingPlugin31CreativeToolItemReportingPlugin init] */

void FUN_100f5b1e4(undefined8 param_1)

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



/* Entry: 100f5b220; end: 100f5b253;  */

void FUN_100f5b220(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5b254; end: 100f5b25b;  */

undefined8 FUN_100f5b254(void)

{
  return 1;
}



/* Entry: 100f5b25c; end: 100f5b2fb;  */

void FUN_100f5b25c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f5b2fc; end: 100f5b30b;  */

void FUN_100f5b2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100f5b30c; end: 100f5b32b;  */

void FUN_100f5b30c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4f10);
  return;
}



/* Entry: 100f5b32c; end: 100f5b62f;  */

undefined * FUN_100f5b32c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c40c90();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b610);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4a764();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c42924();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b614);
        (*pcVar1)();
      }
      lVar4 = lVar2;
      func_0x000107c42930();
      func_0x000107c61170(lVar2);
      puVar6 = PTR_PTR_1126b2b98;
      func_0x000107c610f8(PTR_PTR_1126b2b98);
      func_0x000107c453e4();
      if ((int)lVar4 == 2) {
        lVar2 = lVar3;
        func_0x000107c42924();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b61c);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c3ea44();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b620);
          (*pcVar1)();
        }
        lVar2 = lVar4;
        func_0x000107c44814();
        func_0x000107c61170(lVar4);
        if ((int)lVar2 == 0) goto LAB_100f5b520;
        lVar2 = lVar3;
        func_0x000107c42924();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b624);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c3ea44();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b628);
          (*pcVar1)();
        }
        lVar2 = lVar4;
        func_0x000107c411b8();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b62c);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c5c82c();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b630);
          (*pcVar1)();
        }
        puVar7 = PTR_PTR_1126b2bd8;
        func_0x000107c610f8(PTR_PTR_1126b2bd8);
        func_0x000107c46078();
        func_0x000107c61170(lVar4);
        func_0x000107c59c6c(puVar6);
      }
      else {
LAB_100f5b520:
        lVar2 = lVar3;
        func_0x000107c44fd8();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b618);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar2);
        uVar8 = 0;
        lVar2 = lVar4;
        func_0x000107c5ee24(0,lVar4,param_2);
        func_0x00010006c090(lVar4,param_2);
        puVar7 = PTR_PTR_1126a60c0;
        func_0x000107c610f8(PTR_PTR_1126a60c0);
        func_0x000107c5fadc(uVar8,lVar2);
        func_0x000107c6142c(lVar2);
        func_0x000107c46d24(puVar7);
        func_0x000107c61170(uVar8);
        func_0x000107c53ad4(puVar6);
      }
      func_0x000107c61170(puVar7);
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c451b0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      goto LAB_100f5b5ec;
    }
  }
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar6 = puVar5;
  FUN_100f5b748();
  puVar7 = &UNK_11036dad8;
  func_0x000107c613f8(&UNK_11036dad8,puVar6,0,0);
  puVar6 = puVar7;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar7);
  func_0x000107c451ac(puVar5);
  func_0x000107c61180();
LAB_100f5b5ec:
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 100f5b630; end: 100f5b747;  */

void FUN_100f5b630(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c40c90();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b73c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4a764();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c42924();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b740);
        (*pcVar1)();
      }
      lVar4 = lVar2;
      func_0x000107c42930();
      func_0x000107c61170(lVar2);
      if ((int)lVar4 == 2) {
        lVar2 = lVar3;
        func_0x000107c42924();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b744);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c3ea44();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f5b748);
          (*pcVar1)();
        }
        func_0x000107c44814(lVar4);
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 100f5b748; end: 100f5b787;  */

void FUN_100f5b748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4e648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d914980;
  func_0x000107c61520(&UNK_10d914980,&UNK_11036dad8);
  puRam0000000112d4e648 = puVar1;
  return;
}



/* Entry: 100f5b788; end: 100f5b877;  */

uint FUN_100f5b788(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 100f5b878; end: 100f5b8b7;  */

void FUN_100f5b878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4e650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d914958;
  func_0x000107c61520(&UNK_10d914958,&UNK_11036dad8);
  puRam0000000112d4e650 = puVar1;
  return;
}



/* Entry: 100f5b8b8; end: 100f5b93f;  */

undefined8 FUN_100f5b8b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c4ea18(param_1);
  func_0x000107c61180();
  uVar2 = 0;
  FUN_100f5b30c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}


