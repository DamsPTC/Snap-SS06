/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10131b6f0; end: 10131b843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10131b6f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10131b840);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d725e8);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d725f0);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d725f8);
    FUN_10131a988(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar6);
    func_0x000107c615f0(uVar5);
    func_0x000107c615f0(uVar7);
    FUN_10131aa20(lVar3,param_2,uVar6,uVar5,uVar7);
    func_0x000107c615e8(uVar6);
    func_0x000107c615e8(uVar5);
    func_0x000107c615e8(uVar7);
    puVar4 = PTR_PTR_1126b1108;
    func_0x000107c610f8(PTR_PTR_1126b1108);
    func_0x000107c48b78();
    func_0x000107c58d74();
    func_0x000107c52168(puVar4);
    func_0x000107c44fdc(param_1);
    func_0x000107c61180();
    func_0x000107c41cc0(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131b844);
  (*pcVar1)();
}



/* Entry: 10131b844; end: 10131b8a3; -[_TtC20SendToFanPassSection31SendToFanPassSectionCreatorImpl sectionForDescriptor:] */

void FUN_10131b844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10131b6f0(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10131b8a4; end: 10131b8ff; -[_TtC20SendToFanPassSection31SendToFanPassSectionCreatorImpl init] */

void FUN_10131b8a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToFanPassSection.SendToFanPassSectionCreatorImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131b8d0);
  (*pcVar1)();
}



/* Entry: 10131b900; end: 10131b957; -[_TtC20SendToFanPassSection31SendToFanPassSectionCreatorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010131b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131b93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131b920) */
/* WARNING: Removing unreachable block (ram,0x00010131b940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131b900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d725e0));
  return;
}



/* Entry: 10131b958; end: 10131b977;  */

void FUN_10131b958(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7be0);
  return;
}



/* Entry: 10131b978; end: 10131baff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10131b978(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b55e0;
  func_0x000107c610f8();
  uVar7 = 0xe000000000000000;
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c46c24();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b16f8;
  func_0x000107c610f8();
  func_0x000107c47628();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d72628);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d72628))[1];
  func_0x000107c5fadc(uVar3,uVar4);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c4f78c();
    func_0x000107c61180();
    lVar6 = param_1;
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar7 = uVar4;
    }
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  if (puVar2 != (undefined *)0x0) {
    if (puVar5 != (undefined *)0x0) {
      uVar4 = uVar3;
      func_0x000106c9c554(0,0,0,0,uVar3,lVar6,puVar2,puVar5,1,0);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar6);
      return uVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10131bb00);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131bafc);
  (*pcVar1)();
}



/* Entry: 10131bb00; end: 10131bb5f; -[_TtC20SendToFanPassSection30SendToFanPassSectionDescriptor sectionDescriptorForQuery:] */

void FUN_10131bb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10131b978(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10131bb60; end: 10131bbbb; -[_TtC20SendToFanPassSection30SendToFanPassSectionDescriptor init] */

void FUN_10131bb60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToFanPassSection.SendToFanPassSectionDescriptor",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131bb8c);
  (*pcVar1)();
}



/* Entry: 10131bbbc; end: 10131bbcf; -[_TtC20SendToFanPassSection30SendToFanPassSectionDescriptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d72628 + 8))
  ;
  return;
}



/* Entry: 10131bbd0; end: 10131bbef;  */

void FUN_10131bbd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7cc0);
  return;
}



/* Entry: 10131bbf0; end: 10131bd8b;  */

undefined1  [16] FUN_10131bbf0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef36780);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef36760);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131bcbc);
  (*pcVar1)();
}



/* Entry: 10131bd8c; end: 10131bd97; -[SCSendToFanPassSectionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bd8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72658;
  func_0x000107c61428(param_1 + _DAT_112d72658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131bd98; end: 10131bda3; -[SCSendToFanPassSectionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bd98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72658;
  func_0x000107c61428(param_1 + _DAT_112d72658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131bda4; end: 10131bdaf; -[SCSendToFanPassSectionEntryPoint sendToScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bda4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72660;
  func_0x000107c61428(param_1 + _DAT_112d72660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131bdb0; end: 10131bdbb; -[SCSendToFanPassSectionEntryPoint setSendToScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72660;
  func_0x000107c61428(param_1 + _DAT_112d72660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131bdbc; end: 10131bdc7; -[SCSendToFanPassSectionEntryPoint creatorSubscriptionsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131bdbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72668;
  func_0x000107c61428(param_1 + _DAT_112d72668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131bdc8; end: 10131be0b;  */

void FUN_10131bdc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10131be0c; end: 10131be17; -[SCSendToFanPassSectionEntryPoint setCreatorSubscriptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131be0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72668;
  func_0x000107c61428(param_1 + _DAT_112d72668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131be18; end: 10131be6b;  */

void FUN_10131be18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131be6c; end: 10131bf8f;  */

/* WARNING: Possible PIC construction at 0x00010131bf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131bf2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131bf20) */
/* WARNING: Removing unreachable block (ram,0x00010131bf30) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10131be6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c51ea8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c40d08();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_10131b21c();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        *(long *)(lVar3 + 0x20) = unaff_x20;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        func_0x00010131b0f0();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10131bf90; end: 10131bfb7; -[SCSendToFanPassSectionEntryPoint begin] */

void FUN_10131bf90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10131be6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10131bfb8; end: 10131bffb; -[SCSendToFanPassSectionEntryPoint end] */

void FUN_10131bfb8(undefined8 param_1)

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



/* Entry: 10131bffc; end: 10131c207;  */

void FUN_10131bffc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x63536f54646e6573;
    if (((param_2 == 0x63536f54646e6573) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536f54646e6573,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58f08();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10cd870)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010ef32790,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SendToFanPassSection/SCSendToFanPassSectionEntryPoint.swift",0x3b,2,
                              0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10131c208);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53b10();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10131c208; end: 10131c2b3; -[SCSendToFanPassSectionEntryPoint setValue:forIvarName:] */

void FUN_10131c208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10131bffc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10131c2b4; end: 10131c33b; -[SCSendToFanPassSectionEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131c2b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d72658,0);
  func_0x000107c61614(param_1 + _DAT_112d72660,0);
  func_0x000107c61614(param_1 + _DAT_112d72668,0);
  *(undefined8 *)(param_1 + _DAT_112d72670) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10131c33c; end: 10131c36f;  */

void FUN_10131c33c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10131c370; end: 10131c3c7; -[SCSendToFanPassSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131c370(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72658);
  func_0x000107c61610(param_1 + _DAT_112d72660);
  func_0x000107c61610(param_1 + _DAT_112d72668);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72670));
  return;
}



/* Entry: 10131c3c8; end: 10131c3e7;  */

void FUN_10131c3c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7d88);
  return;
}



/* Entry: 10131c3e8; end: 10131c59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10131c3e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d726a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4a9fc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_10131c498;
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x00010131d730(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c4a8a4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
LAB_10131c498:
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d726a0);
  func_0x000107c4fa74(uVar3);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
  puVar1 = puVar2;
  func_0x0001000b637c(puVar2);
  puVar4 = puVar1;
  func_0x0001006c733c();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  uVar5 = 0;
  func_0x00010131d730(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar6 = FUN_10131d0c4;
  func_0x0001000bfde0(FUN_10131d0c4,0,uVar5);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar6);
  puVar1 = puVar4;
  func_0x000107c5cb24(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 10131c5a0; end: 10131ca23;  */

undefined * FUN_10131c5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puStack_a8 = (undefined *)0x0;
  uVar6 = 0;
  func_0x00010131d730(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc50(param_1,&puStack_a8,uVar6);
  puVar16 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar16;
  }
  puVar18 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff8);
  if ((ulong)puStack_a8 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar18 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = puStack_a8;
    if (-1 < (long)puStack_a8) {
      puVar19 = puVar18;
    }
    func_0x000107c60480();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
  if (puVar19 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar16 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10131c974);
            (*pcVar5)();
          }
          puVar7 = *(undefined **)(puVar16 + (long)puVar14 * 8 + 0x20);
          func_0x000107c61174(puVar7);
        }
        else {
          puVar7 = puVar14;
          FUN_10131d508(puVar14,puVar16,&PTR_PTR_1126b5438,0x112d726d8);
        }
        puVar1 = puVar14 + 1;
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10131c970);
          (*pcVar5)();
        }
        lStack_78 = 0;
        puVar8 = &UNK_1103a2748;
        func_0x000107c613fc(&UNK_1103a2748,0x20,7);
        *(long **)(puVar8 + 0x10) = &lStack_78;
        *(undefined8 *)(puVar8 + 0x18) = param_2;
        puVar9 = &UNK_1103a2770;
        func_0x000107c613fc(&UNK_1103a2770,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_10131d6c4;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = FUN_10131d6cc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_10131cd50;
        puStack_90 = &UNK_1103a2788;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar11 = puStack_80;
        func_0x000107c61174(param_2);
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar11);
        puVar11 = &UNK_1103a27c0;
        func_0x000107c613fc(&UNK_1103a27c0,0x18,7);
        *(long **)(puVar11 + 0x10) = &lStack_78;
        puVar12 = &UNK_1103a27e8;
        func_0x000107c613fc(&UNK_1103a27e8,0x20,7);
        *(undefined8 *)(puVar12 + 0x10) = 0x10131d708;
        *(undefined **)(puVar12 + 0x18) = puVar11;
        pcStack_88 = (code *)0x10131d710;
        puStack_a8 = puVar3;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)0x10131ce88;
        puStack_90 = &UNK_1103a2800;
        ppuVar13 = &puStack_a8;
        puStack_80 = puVar12;
        func_0x000107c60bc4(ppuVar13);
        puVar3 = puStack_80;
        func_0x000107c6157c(puVar12);
        func_0x000107c61574(puVar3);
        func_0x000107c4c72c(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61574(puVar8);
        puVar7 = puVar9;
        func_0x000107c61544(puVar9,"",0x6c,0x22,0x30,1);
        func_0x000107c61574(puVar11);
        func_0x000107c61574(puVar9);
        if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10131c978);
          (*pcVar5)();
        }
        puVar7 = puVar12;
        func_0x000107c61544(puVar12,"",0x6c,0x28,0x27,1);
        func_0x000107c61574(puVar12);
        lVar4 = lStack_78;
        if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10131c97c);
          (*pcVar5)();
        }
        if (lStack_78 != 0) break;
        puVar14 = puVar14 + 1;
        if (puVar1 == puVar19) goto LAB_10131c998;
      }
      puVar14 = puVar15;
      func_0x000107c61550();
      if ((((int)puVar14 == 0) || ((long)puVar15 < 0)) ||
         (puVar14 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar15 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar15) {
            puVar7 = puVar15;
          }
          func_0x000107c60480(puVar7);
        }
        puVar14 = (undefined *)0x0;
        FUN_10131d2c8(0,puVar7 + 1,1,puVar15);
      }
      uVar17 = (ulong)puVar14 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar17 + 0x10);
      puVar15 = puVar14;
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar2) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
        FUN_10131d2c8(puVar15,uVar2 + 1,1,puVar14);
        uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar17 + 0x10) = uVar2 + 1;
      *(long *)(uVar17 + uVar2 * 8 + 0x20) = lVar4;
      puVar14 = puVar1;
    } while (puVar1 != puVar19);
  }
LAB_10131c998:
  func_0x000107c6142c(puVar16);
  puVar16 = puVar15;
  FUN_10131cec8(puVar15);
  func_0x000107c6142c(puVar15);
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar19 = puVar16;
  func_0x000107c5fc48(puVar16,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar16);
  func_0x000107c45788(puVar18);
  func_0x000107c61170(puVar19);
  return puVar18;
}



/* Entry: 10131ca24; end: 10131cc03;  */

/* WARNING: Possible PIC construction at 0x00010131ca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131caa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131cbb8) */
/* WARNING: Removing unreachable block (ram,0x00010131caac) */
/* WARNING: Removing unreachable block (ram,0x00010131cb20) */
/* WARNING: Removing unreachable block (ram,0x00010131cab4) */
/* WARNING: Removing unreachable block (ram,0x00010131cb44) */
/* WARNING: Removing unreachable block (ram,0x00010131cb00) */
/* WARNING: Removing unreachable block (ram,0x00010131cb54) */
/* WARNING: Removing unreachable block (ram,0x00010131cbbc) */
/* WARNING: Removing unreachable block (ram,0x00010131cb64) */
/* WARNING: Removing unreachable block (ram,0x00010131cbc4) */
/* WARNING: Removing unreachable block (ram,0x00010131cbc8) */
/* WARNING: Removing unreachable block (ram,0x00010131cba0) */
/* WARNING: Removing unreachable block (ram,0x00010131ca88) */
/* WARNING: Removing unreachable block (ram,0x00010131cbdc) */

void FUN_10131ca24(long param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5faec();
    func_0x000107c610f8(PTR_PTR_1126c52b8);
    func_0x000107c46d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10131cc04; end: 10131cd4f;  */

undefined * FUN_10131cc04(double param_1)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4aa6c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5ee94(puVar4);
    func_0x000107c61170(unaff_x20);
    (**(code **)(lVar5 + 0x20))((long)puVar4 - extraout_x12,puVar4,lVar1);
    func_0x000107c4aad4();
    puVar3 = PTR_PTR_1126a6a70;
    func_0x000107c610f8(PTR_PTR_1126a6a70);
    func_0x000107c470d8();
    func_0x000107c5ee8c();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1 * 1000.0);
    func_0x000107c55a8c(puVar3);
    func_0x000107c61170(puVar2);
    (**(code **)(lVar5 + 8))((long)puVar4 - extraout_x12,lVar1);
  }
  return puVar3;
}



/* Entry: 10131cd50; end: 10131cdeb;  */

/* WARNING: Possible PIC construction at 0x00010131cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131cdc4) */

void FUN_10131cd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10131cdec; end: 10131cec7;  */

/* WARNING: Possible PIC construction at 0x00010131ce4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131ce50) */
/* WARNING: Removing unreachable block (ram,0x00010131ce70) */

void FUN_10131cdec(long param_1,undefined8 param_2)

{
  func_0x000107c444fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c610f8(PTR_PTR_1126c52b8);
  func_0x000107c46d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10131cec8; end: 10131d0c3;  */

undefined * FUN_10131cec8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10131d0c4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x00010131d730(0,0x112d726e0,&PTR_PTR_1126a6a68);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_10131d508(uVar7,param_1,&PTR_PTR_1126a6a68,0x112d726e0);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x00010131d730(0,0x112d726e0,&PTR_PTR_1126a6a68);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10131d0c4; end: 10131d0ef;  */

void FUN_10131d0c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10131c5a0(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10131d0f0; end: 10131d123; -[_TtC43ComposerSendToReplyDataStoreServiceProvider28ComposerSendToReplyDataStore fetchReplyRecipients] */

void FUN_10131d0f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10131c3e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10131d124; end: 10131d183; -[_TtC43ComposerSendToReplyDataStoreServiceProvider28ComposerSendToReplyDataStore init] */

void FUN_10131d124(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSendToReplyDataStoreServiceProvider.ComposerSendToReplyDataStore",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131d150);
  (*pcVar1)();
}



/* Entry: 10131d184; end: 10131d1bb; -[_TtC43ComposerSendToReplyDataStoreServiceProvider28ComposerSendToReplyDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131d184(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d726a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d726a8));
  return;
}



/* Entry: 10131d1bc; end: 10131d247;  */

void FUN_10131d1bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7e58);
  return;
}



/* Entry: 10131d248; end: 10131d2c7;  */

undefined * FUN_10131d248(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010131d1dc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10131d2c8; end: 10131d507;  */

ulong FUN_10131d2c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10131d3f0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10131d248(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10131d3ec);
      (*pcVar1)();
    }
    func_0x00010131d3f0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10131d508; end: 10131d6c3;  */

ulong FUN_10131d508(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10131d5ec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10131d5f0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010131d730(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10131d6c4);
  (*pcVar2)();
}



/* Entry: 10131d6c4; end: 10131d6cb;  */

/* WARNING: Possible PIC construction at 0x00010131ca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131caa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131cbe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131cbb8) */
/* WARNING: Removing unreachable block (ram,0x00010131caac) */
/* WARNING: Removing unreachable block (ram,0x00010131cb20) */
/* WARNING: Removing unreachable block (ram,0x00010131cab4) */
/* WARNING: Removing unreachable block (ram,0x00010131cb44) */
/* WARNING: Removing unreachable block (ram,0x00010131cb00) */
/* WARNING: Removing unreachable block (ram,0x00010131cb54) */
/* WARNING: Removing unreachable block (ram,0x00010131cbbc) */
/* WARNING: Removing unreachable block (ram,0x00010131cb64) */
/* WARNING: Removing unreachable block (ram,0x00010131cbc4) */
/* WARNING: Removing unreachable block (ram,0x00010131cbc8) */
/* WARNING: Removing unreachable block (ram,0x00010131cba0) */
/* WARNING: Removing unreachable block (ram,0x00010131ca88) */
/* WARNING: Removing unreachable block (ram,0x00010131cbdc) */

void FUN_10131d6c4(long param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5faec();
    func_0x000107c610f8(PTR_PTR_1126c52b8);
    func_0x000107c46d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10131d6cc; end: 10131d6eb;  */

void FUN_10131d6cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10131d6ec; end: 10131d70f;  */

void FUN_10131d6ec(long param_1,long param_2)

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



/* Entry: 10131d710; end: 10131d76f;  */

void FUN_10131d710(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10131d770; end: 10131d7bf;  */

void FUN_10131d770(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d726f8 != 0) {
    return;
  }
  puVar1 = &UNK_1103a2838;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d726f8 = param_1;
  return;
}



/* Entry: 10131d7c0; end: 10131d7c7;  */

void FUN_10131d7c0(long param_1,long param_2)

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



/* Entry: 10131d7c8; end: 10131dc0f;  */

long FUN_10131d7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar3 = 0;
  lStack_68 = param_5;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c613fc();
  (**(code **)(lVar6 + 0x68))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010ef367f0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  lVar1 = lStack_68;
  (**(code **)(lVar6 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + 0x38) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar3 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar1);
    *(long *)(unaff_x20 + 0x30) = lVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10131d97c);
  (*pcVar2)();
}



/* Entry: 10131dc10; end: 10131dc4b;  */

/* WARNING: Possible PIC construction at 0x00010131dc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131dc2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131dc20) */
/* WARNING: Removing unreachable block (ram,0x00010131dc30) */

void FUN_10131dc10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10131dc4c; end: 10131dcb7;  */

void FUN_10131dc4c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10131dcb8; end: 10131dd43;  */

void FUN_10131dcb8(undefined8 param_1)

{
  if (lRam0000000112d72728 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62e028);
  return;
}



/* Entry: 10131dd44; end: 10131dd67;  */

void FUN_10131dd44(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010131d97c();
  *param_1 = param_2;
  return;
}



/* Entry: 10131dd68; end: 10131dd73; -[SCComposerSendToReplyDataStoreServiceProvider activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dd68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72800;
  func_0x000107c61428(param_1 + _DAT_112d72800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131dd74; end: 10131dd7f; -[SCComposerSendToReplyDataStoreServiceProvider setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dd74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72800;
  func_0x000107c61428(param_1 + _DAT_112d72800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131dd80; end: 10131dd8b; -[SCComposerSendToReplyDataStoreServiceProvider snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dd80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72808;
  func_0x000107c61428(param_1 + _DAT_112d72808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131dd8c; end: 10131dd97; -[SCComposerSendToReplyDataStoreServiceProvider setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72808;
  func_0x000107c61428(param_1 + _DAT_112d72808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131dd98; end: 10131dda3; -[SCComposerSendToReplyDataStoreServiceProvider selectionGroupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dd98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72810;
  func_0x000107c61428(param_1 + _DAT_112d72810,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131dda4; end: 10131ddaf; -[SCComposerSendToReplyDataStoreServiceProvider setSelectionGroupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131dda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72810;
  func_0x000107c61428(param_1 + _DAT_112d72810,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131ddb0; end: 10131ddbb; -[SCComposerSendToReplyDataStoreServiceProvider lastInteractionDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131ddb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72818;
  func_0x000107c61428(param_1 + _DAT_112d72818,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131ddbc; end: 10131ddc7; -[SCComposerSendToReplyDataStoreServiceProvider setLastInteractionDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131ddbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72818;
  func_0x000107c61428(param_1 + _DAT_112d72818,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131ddc8; end: 10131ddd3; -[SCComposerSendToReplyDataStoreServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131ddc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72820;
  func_0x000107c61428(param_1 + _DAT_112d72820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131ddd4; end: 10131de17;  */

void FUN_10131ddd4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10131de18; end: 10131de23; -[SCComposerSendToReplyDataStoreServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131de18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72820;
  func_0x000107c61428(param_1 + _DAT_112d72820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131de24; end: 10131de77;  */

void FUN_10131de24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131de78; end: 10131e18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131de78(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined1 auStack_80 [8];
  char *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = unaff_x20;
  func_0x000107c3d1c4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5b490();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c51cd4();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c4a9f4();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          lVar3 = lVar5;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c3fa0c();
          func_0x000107c61180();
          if (lVar7 != 0) {
            lVar8 = 0;
            FUN_10131dcb8();
            func_0x000107c613fc();
            pcStack_78 = "PassSectionEntryPoint.swift";
            lStack_70 = lVar8;
            (**(code **)(lVar11 + 0x68))
                      (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                       *(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
            puVar9 = PTR_PTR_1126ae790;
            func_0x000107c610f8();
            func_0x000107c61174();
            lStack_68 = lVar7;
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            uVar10 = 0xd00000000000003c;
            func_0x000107c5fadc(0xd00000000000003c,(ulong)pcStack_78 | 0x8000000000000000);
            func_0x000107c5f800();
            func_0x000107c470d0();
            func_0x000107c61170(uVar10);
            lVar7 = lStack_70;
            (**(code **)(lVar11 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2)
            ;
            *(undefined **)(lVar7 + 0x38) = puVar9;
            *(long *)(lVar7 + 0x10) = lVar3;
            *(long *)(lVar7 + 0x18) = lVar4;
            *(long *)(lVar7 + 0x20) = lVar5;
            *(long *)(lVar7 + 0x28) = lVar6;
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar3);
            lVar2 = lStack_68;
            func_0x000107c3fa04();
            func_0x000107c61180();
            if (lVar2 != 0) {
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lStack_68);
              *(long *)(lVar7 + 0x30) = lVar2;
              uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d72828);
              *(long *)(unaff_x20 + _DAT_112d72828) = lVar7;
              func_0x000107c6157c(lVar7);
              func_0x000107c61574(uVar10);
              func_0x00010131d97c();
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lStack_68);
              func_0x000107c61574(lVar7);
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10131e18c);
            (*pcVar1)();
          }
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          lVar3 = lVar6;
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10131e18c; end: 10131e217; -[SCComposerSendToReplyDataStoreServiceProvider provide] */

void FUN_10131e18c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10131de78();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ComposerSendToReplyDataStoreServiceProvider/SCComposerSendToReplyDataStoreServiceProvider.swift"
                      ,0x5f,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131e218);
  (*pcVar1)();
}



/* Entry: 10131e218; end: 10131e24b; -[SCComposerSendToReplyDataStoreServiceProvider __safeProvide] */

void FUN_10131e218(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10131de78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10131e24c; end: 10131e28f; -[SCComposerSendToReplyDataStoreServiceProvider end] */

void FUN_10131e24c(undefined8 param_1)

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



/* Entry: 10131e290; end: 10131e55f;  */

void FUN_10131e290(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffea && param_3 == -0x7ffffffef10ef1d0) ||
     (func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52228();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10c9690)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000016,0x800000010ef36970,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10c9670)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef36990,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55a40();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
                 (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ComposerSendToReplyDataStoreServiceProvider/SCComposerSendToReplyDataStoreServiceProvider.swift"
                                    ,0x5f,2,0x44,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10131e560);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53414();
            }
            goto LAB_10131e320;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58e34();
        goto LAB_10131e320;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c594bc();
  }
LAB_10131e320:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10131e560; end: 10131e60b; -[SCComposerSendToReplyDataStoreServiceProvider setValue:forIvarName:] */

void FUN_10131e560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10131e290(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10131e60c; end: 10131e6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131e60c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d72800,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72808,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72810,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72818,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72820,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72828) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10131e6bc; end: 10131e6db; -[SCComposerSendToReplyDataStoreServiceProvider init] */

void FUN_10131e6bc(void)

{
  FUN_10131e60c();
  return;
}



/* Entry: 10131e6dc; end: 10131e70f;  */

void FUN_10131e6dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10131e710; end: 10131e787; -[SCComposerSendToReplyDataStoreServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131e710(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72800);
  func_0x000107c61610(param_1 + _DAT_112d72808);
  func_0x000107c61610(param_1 + _DAT_112d72810);
  func_0x000107c61610(param_1 + _DAT_112d72818);
  func_0x000107c61610(param_1 + _DAT_112d72820);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72828));
  return;
}



/* Entry: 10131e788; end: 10131e7a7;  */

void FUN_10131e788(void)

{
  func_0x000107c61168(&PTR_PTR_112d72870);
  return;
}



/* Entry: 10131e7a8; end: 10131e7c7; -[ComposerSendToReplyDataStoreService replyDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131e7a8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d728f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131e7c8; end: 10131e85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131e7c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d728f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10131e860; end: 10131e893;  */

void FUN_10131e860(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10131e894; end: 10131e8a3; -[ComposerSendToReplyDataStoreService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131e894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d728f0));
  return;
}



/* Entry: 10131e8a4; end: 10131e8c3;  */

void FUN_10131e8a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7f68);
  return;
}



/* Entry: 10131e8c4; end: 10131ea8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10131e8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c5050;
  func_0x000107c610f8(PTR_PTR_1126c5050);
  func_0x000107c453e4();
  func_0x000107c556b4();
  func_0x000107c529fc(puVar1);
  func_0x000107c529f4(puVar1);
  func_0x000107c55744(puVar1);
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126c5058;
    func_0x000107c610f8(PTR_PTR_1126c5058);
    func_0x000107c61174();
    func_0x000107c453e4(puVar2);
    lVar3 = param_1;
    func_0x000107c5ce2c();
    func_0x000107c61180();
    uVar5 = param_2;
    if (lVar3 == 0) {
      func_0x000107c5faec();
      uVar5 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c59ffc(puVar2);
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c3e1a4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c52900(puVar2);
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c5ce30(param_1);
    func_0x000107c5a000((double)(int)lVar3,puVar2);
    func_0x000107c5ce30(param_1);
    func_0x000107c55774(puVar2);
    func_0x000107c4a624(param_1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55898(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c56840(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  return puVar1;
}



/* Entry: 10131ea90; end: 10131efb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10131ea90(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(param_1 + _DAT_113034cf8);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) {
    return 0;
  }
  uVar5 = *(ulong *)(lVar4 + 0x20);
  uVar7 = *(ulong *)(lVar4 + 0x28);
  uVar2 = uVar5 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar2 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61434(uVar7);
  uVar3 = 0x800000010ef36a00;
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b);
  uVar2 = uVar6;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
LAB_10131eb98:
    uVar8 = 0;
    uVar3 = 0xe000000000000000;
  }
  else {
    uVar8 = uVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar2 = uVar8;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (uVar2 == 0) goto LAB_10131eb98;
    uVar8 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  uVar2 = uVar8 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar3);
LAB_10131ebf4:
    uVar1 = 0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010ef36a20);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)uVar6 != 0) {
      func_0x00010131ec84(uVar5,uVar7);
      goto LAB_10131ec60;
    }
  }
  else {
    if (uVar5 == uVar8 && uVar7 == uVar3) {
      func_0x000107c6142c(uVar7);
      uVar5 = 0;
      uVar7 = uVar3;
      goto LAB_10131ec60;
    }
    uVar2 = uVar5;
    func_0x000107c605b8(uVar5,uVar7,uVar8,uVar3,0);
    func_0x000107c6142c(uVar3);
    if ((uVar2 & 1) == 0) goto LAB_10131ebf4;
  }
  uVar5 = 0;
LAB_10131ec60:
  func_0x000107c6142c(uVar7);
  return uVar5;
}



/* Entry: 10131efb4; end: 10131f197;  */

void FUN_10131efb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar8 = *param_1;
  cVar1 = (char)param_1[1];
  if (cVar1 != '\x01' && lVar8 != 0) {
    puVar3 = &UNK_1103a29c8;
    func_0x000107c613fc(&UNK_1103a29c8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    puVar4 = &UNK_1103a29f0;
    func_0x000107c613fc(&UNK_1103a29f0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x10131f7d0;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10131f7d8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100fe2610;
    puStack_88 = &UNK_1103a2a08;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000100fe3210(lVar8,cVar1);
    func_0x000100fe3210(lVar8,cVar1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1103a2a40;
    func_0x000107c613fc(&UNK_1103a2a40,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    puVar6 = &UNK_1103a2a68;
    func_0x000107c613fc(&UNK_1103a2a68,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x10131f814;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_80 = FUN_10131f818;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100fe2654;
    puStack_88 = &UNK_1103a2a80;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar6);
    func_0x000107c4c744(lVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000100fe3224(lVar8,cVar1);
    func_0x000100fe3224(lVar8,cVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10131f198; end: 10131f267;  */

/* WARNING: Possible PIC construction at 0x00010131f1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131f218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010131f230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131f21c) */
/* WARNING: Removing unreachable block (ram,0x00010131f1d4) */
/* WARNING: Removing unreachable block (ram,0x00010131f234) */
/* WARNING: Removing unreachable block (ram,0x00010131f1f4) */

void FUN_10131f198(long param_1)

{
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
    return;
  }
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10131f268; end: 10131f527;  */

void FUN_10131f268(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10131f340);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10131f528(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10131f308);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010131f3b8();
    lVar6 = *unaff_x20;
    goto joined_r0x00010131f354;
  }
  lVar6 = *unaff_x20;
joined_r0x00010131f354:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10131f3b8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10131f528; end: 10131f7c3;  */

void FUN_10131f528(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d72920;
  func_0x0001000285a8(0x112d72920,&UNK_10daa3030);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10131f790:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10131f7c0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10131f790;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10131f7c4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10131f7c4; end: 10131f7d7;  */

void FUN_10131f7c4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar11 = *param_1;
  cVar3 = (char)param_1[1];
  if (cVar3 != '\x01' && lVar11 != 0) {
    puVar5 = &UNK_1103a29c8;
    func_0x000107c613fc(&UNK_1103a29c8,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    puVar6 = &UNK_1103a29f0;
    func_0x000107c613fc(&UNK_1103a29f0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x10131f7d0;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10131f7d8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100fe2610;
    puStack_88 = &UNK_1103a2a08;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000100fe3210(lVar11,cVar3);
    func_0x000100fe3210(lVar11,cVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_1103a2a40;
    func_0x000107c613fc(&UNK_1103a2a40,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar10;
    puVar8 = &UNK_1103a2a68;
    func_0x000107c613fc(&UNK_1103a2a68,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10131f814;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcStack_80 = FUN_10131f818;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100fe2654;
    puStack_88 = &UNK_1103a2a80;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    puVar8 = puStack_78;
    func_0x000107c61434(uVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c4c744(lVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000100fe3224(lVar11,cVar3);
    func_0x000100fe3224(lVar11,cVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 10131f7d8; end: 10131f7f7;  */

void FUN_10131f7d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10131f7f8; end: 10131f817;  */

void FUN_10131f7f8(long param_1,long param_2)

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



/* Entry: 10131f818; end: 10131f837;  */

void FUN_10131f818(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10131f838; end: 10131f83f;  */

void FUN_10131f838(long param_1,long param_2)

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



/* Entry: 10131f840; end: 10131fbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131f840(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  
  if ((*(byte *)(param_1 + _DAT_113034aa0) & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + _DAT_113034d08);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + _DAT_113034a48) == '\x01') {
      uVar3 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000108f4870c();
LAB_10131f900:
      if ((*(byte *)(param_1 + _DAT_113034a40) & 1) != 0) {
LAB_10131f914:
        if (*(char *)(param_1 + _DAT_113034a78) == '\x01') goto LAB_10131fa50;
        goto LAB_10131f9dc;
      }
      if (((((*(byte *)(param_1 + _DAT_113034a68) & 1) != 0) ||
           ((*(byte *)(param_1 + _DAT_113034a60) & 1) != 0)) ||
          ((*(byte *)(param_1 + _DAT_113034a70) & 1) != 0)) ||
         ((*(byte *)(param_1 + _DAT_113034a88) & 1) != 0)) goto LAB_10131f9dc;
      if ((uVar3 & 1) == 0) {
LAB_10131fbd0:
        if ((*(byte *)(param_1 + _DAT_113034a78) & 1) == 0) {
          return;
        }
        goto LAB_10131fbac;
      }
LAB_10131fa90:
      if (*(char *)(param_1 + _DAT_113034a78) != '\x01') {
        return;
      }
      goto LAB_10131fbac;
    }
LAB_10131f938:
    if ((*(byte *)(param_1 + _DAT_113034a40) & 1) != 0) goto LAB_10131fa34;
    if ((*(byte *)(param_1 + _DAT_113034a68) & 1) == 0) {
      if ((*(byte *)(param_1 + _DAT_113034a60) & 1) == 0) {
        if ((*(byte *)(param_1 + _DAT_113034a70) & 1) != 0) goto LAB_10131fb60;
        if ((*(byte *)(param_1 + _DAT_113034a88) & 1) != 0) {
          return;
        }
        goto LAB_10131fbd0;
      }
    }
    else if (*(byte *)(param_1 + _DAT_113034a60) == 0) {
      if ((*(byte *)(param_1 + _DAT_113034a70) & 1) == 0) {
        return;
      }
LAB_10131fb60:
      uVar7 = 0;
      goto LAB_10131fb6c;
    }
LAB_10131faf4:
    uVar7 = 0;
LAB_10131fafc:
    uVar4 = 0;
    if ((*(byte *)(param_1 + _DAT_113034a78) & 1) == 0) {
      return;
    }
LAB_10131fb14:
    uVar8 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    func_0x000108f485dc();
    if ((*(byte *)(param_1 + _DAT_113034a70) & 1) != 0) {
LAB_10131fb84:
      uVar3 = *(ulong *)(unaff_x20 + 0x10);
      uVar5 = uVar3;
      func_0x000108f48564();
      if (((uVar5 & 1) != 0) || (func_0x000108f485dc(), ((uVar7 | uVar8) & 1) != 0))
      goto LAB_10131fbac;
      goto joined_r0x00010131fb40;
    }
    if (((uVar7 | uVar8) & 1) != 0) goto LAB_10131fbac;
  }
  else {
    func_0x000107c4fde4();
    if ((*(byte *)(param_1 + _DAT_113034a48) & 1) != 0) {
      uVar3 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000108f4870c();
      if (lVar2 == 2) goto LAB_10131f900;
      if (*(char *)(param_1 + _DAT_113034a40) == '\x01') goto LAB_10131f914;
LAB_10131f9dc:
      uVar7 = (uint)uVar3;
      if (*(char *)(param_1 + _DAT_113034a60) == '\x01') goto LAB_10131fafc;
      if ((*(byte *)(param_1 + _DAT_113034a70) & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          return;
        }
        goto LAB_10131fa90;
      }
LAB_10131fb6c:
      uVar8 = 0;
      uVar4 = 0;
      if ((*(byte *)(param_1 + _DAT_113034a78) & 1) == 0) {
        return;
      }
      goto LAB_10131fb84;
    }
    if (lVar2 == 2) goto LAB_10131f938;
    if (*(char *)(param_1 + _DAT_113034a40) != '\x01') {
      if (*(char *)(param_1 + _DAT_113034a60) != '\x01') {
        if (*(char *)(param_1 + _DAT_113034a70) != '\x01') {
          return;
        }
        goto LAB_10131fb60;
      }
      goto LAB_10131faf4;
    }
LAB_10131fa34:
    uVar3 = 0;
    if ((*(byte *)(param_1 + _DAT_113034a78) & 1) == 0) {
      return;
    }
LAB_10131fa50:
    uVar7 = (uint)uVar3;
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    func_0x000108f48578();
    if ((*(byte *)(param_1 + _DAT_113034a60) & 1) != 0) goto LAB_10131fb14;
    if ((*(byte *)(param_1 + _DAT_113034a70) & 1) != 0) {
      uVar8 = 0;
      goto LAB_10131fb84;
    }
joined_r0x00010131fb40:
    if ((uVar3 & 1) != 0) goto LAB_10131fbac;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
LAB_10131fbac:
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = uVar1;
  func_0x0001009703d0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if ((int)uVar6 != 0) {
    func_0x000108f49884(uVar1);
  }
  return;
}



/* Entry: 10131fbe8; end: 10131fc5b; -[_TtC26SendToSpotlightEligibility37SendToSpotlightEligibilityServiceImpl shouldShowSpotlightSectionWithStoryConfiguration:attribution:] */

uint FUN_10131fbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10131f840(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10131fc5c; end: 10131fe93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10131fc5c(undefined8 param_1,long param_2,undefined8 param_3,byte param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  FUN_1013223fc();
  if (param_5 != 0) {
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c5953c(uVar1);
  }
  lVar2 = *(long *)(param_2 + _DAT_113034aa8);
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(param_5);
  }
  else {
    func_0x000107c4e838();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
    lVar3 = lVar2;
    func_0x0001000b637c(lVar2);
    puVar6 = &UNK_1103a2ab8;
    func_0x000107c613fc(&UNK_1103a2ab8,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_1103a2c20;
    func_0x000107c613fc(&UNK_1103a2c20,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    *(long *)(puVar7 + 0x20) = param_2;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    puVar7[0x30] = param_4 & 1;
    *(long *)(puVar7 + 0x38) = param_5;
    uVar4 = 0;
    FUN_101322e84(0,0x112d72a48,&PTR_PTR_1126a6a78);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    puVar6 = (undefined *)0x101322e70;
    func_0x0001000d5158(0x101322e70,puVar7,uVar4);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar7);
    puVar5 = &uStack_68;
    uStack_68 = uVar1;
    func_0x0001006c71a4(puVar5);
    func_0x000107c61574(puVar6);
    func_0x0001004575f0();
    func_0x000107c61574(puVar5);
    puVar7 = puVar6;
    func_0x000107c5cb24(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
  }
  return puVar7;
}



/* Entry: 10131fe94; end: 10131ff3f;  */

void FUN_10131fe94(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1013223fc(param_4,param_5,param_6);
    func_0x000107c61574(param_3);
    if ((param_8 != 0) && (param_4 != 0)) {
      func_0x000107c5953c(param_4);
    }
  }
  *param_1 = param_4;
  return;
}



/* Entry: 10131ff40; end: 101320007; -[_TtC26SendToSpotlightEligibility37SendToSpotlightEligibilityServiceImpl generateSpotlightConfigObservableWithContentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:soundConfigObservable:] */

void FUN_10131ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  FUN_10131fc5c(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101320008; end: 1013201e3;  */

undefined * FUN_101320008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar4 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010d932fe0);
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef36a90);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c43b70(puVar1);
    func_0x000107c61170(puVar7);
  }
  else {
    pcVar2 = 
    "spotlightSectionConfiguration(contentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:)"
    ;
    func_0x0001000c10c0(
                       "spotlightSectionConfiguration(contentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:)"
                       );
    func_0x000107c61180();
    puVar6 = &UNK_1103a2ba8;
    func_0x000107c613fc(&UNK_1103a2ba8,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(undefined **)(puVar6 + 0x20) = puVar1;
    pcStack_68 = FUN_101322e38;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1103a2bc0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar6;
    func_0x000107c60bc4(ppuVar3);
    puVar6 = puStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar2);
    func_0x000107c61574(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar2);
  }
  return puVar1;
}



/* Entry: 1013201e4; end: 1013204ff;  */

/* WARNING: Possible PIC construction at 0x00010132025c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013204bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013203e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013203ec) */
/* WARNING: Removing unreachable block (ram,0x0001013204c0) */
/* WARNING: Removing unreachable block (ram,0x000101320328) */
/* WARNING: Removing unreachable block (ram,0x000101320358) */
/* WARNING: Removing unreachable block (ram,0x00010132033c) */
/* WARNING: Removing unreachable block (ram,0x000101320354) */
/* WARNING: Removing unreachable block (ram,0x00010132043c) */
/* WARNING: Removing unreachable block (ram,0x000101320260) */
/* WARNING: Removing unreachable block (ram,0x000101320268) */
/* WARNING: Removing unreachable block (ram,0x0001013204e8) */
/* WARNING: Removing unreachable block (ram,0x0001013204ec) */
/* WARNING: Removing unreachable block (ram,0x000101320288) */
/* WARNING: Removing unreachable block (ram,0x00010132028c) */
/* WARNING: Removing unreachable block (ram,0x000101320440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101320298) */
/* WARNING: Removing unreachable block (ram,0x0001013204fc) */
/* WARNING: Removing unreachable block (ram,0x0001013202b8) */
/* WARNING: Removing unreachable block (ram,0x0001013202dc) */
/* WARNING: Removing unreachable block (ram,0x0001013202f0) */
/* WARNING: Removing unreachable block (ram,0x0001013202e0) */
/* WARNING: Removing unreachable block (ram,0x0001013202fc) */
/* WARNING: Removing unreachable block (ram,0x000101320408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013201e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  
  func_0x000107c6071c();
  lVar1 = *(long *)(param_1 + _DAT_113034b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = -0x2fffffffffffffdb;
    func_0x000107c5fadc(0xd000000000000025,0x800000010d932fe0);
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef36b20);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
  else {
    uStack_78 = 0;
    uVar2 = 0;
    func_0x000103f5fab8(0);
    func_0x000107c5fc50(lVar1,&uStack_78,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


