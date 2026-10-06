/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bd4204; end: 102bd428f;  */

void FUN_102bd4204(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102bd45ac,0);
  return;
}



/* Entry: 102bd4290; end: 102bd429b;  */

void FUN_102bd4290(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102bd42f4,param_1);
  return;
}



/* Entry: 102bd429c; end: 102bd42f3;  */

void FUN_102bd429c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102bd42f4; end: 102bd4327;  */

void FUN_102bd42f4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102bd4328; end: 102bd432f;  */

undefined8 FUN_102bd4328(void)

{
  return 0x1b;
}



/* Entry: 102bd4330; end: 102bd44a7;  */

void FUN_102bd4330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105ad9f0;
  func_0x000107c613fc(&UNK_1105ad9f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102bd44a8,puVar1);
  return;
}



/* Entry: 102bd44a8; end: 102bd44af;  */

void FUN_102bd44a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112efd7b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efd7b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105adb08;
  func_0x000107c613fc(&UNK_1105adb08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102bd459c;
  func_0x00010058fa64(0x102bd459c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bd44b0; end: 102bd450b;  */

void FUN_102bd44b0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efd7b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efd7b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102bd450c; end: 102bd45af;  */

undefined ** FUN_102bd450c(void)

{
  return &PTR_DAT_113066a18;
}



/* Entry: 102bd45b0; end: 102bd45f7; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd45b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd830;
  func_0x000107c61428(param_1 + _DAT_112efd830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bd45f8; end: 102bd464f; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd45f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd830;
  func_0x000107c61428(param_1 + _DAT_112efd830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bd4650; end: 102bd4697; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint sCContextOperaEmbeddedComponentScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd838;
  func_0x000107c61428(param_1 + _DAT_112efd838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bd4698; end: 102bd46a3; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint setSCContextOperaEmbeddedComponentScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd838;
  func_0x000107c61428(param_1 + _DAT_112efd838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bd46a4; end: 102bd46eb; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint sCGroupAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd46a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd840;
  func_0x000107c61428(param_1 + _DAT_112efd840,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bd46ec; end: 102bd46f7; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint setSCGroupAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd46ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd840;
  func_0x000107c61428(param_1 + _DAT_112efd840,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bd46f8; end: 102bd473f; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint contextSpotlightScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd46f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd848;
  func_0x000107c61428(param_1 + _DAT_112efd848,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bd4740; end: 102bd474b; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint setContextSpotlightScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd848;
  func_0x000107c61428(param_1 + _DAT_112efd848,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bd474c; end: 102bd47ab;  */

void FUN_102bd474c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102bd47ac; end: 102bd49e3;  */

/* WARNING: Possible PIC construction at 0x000102bd4918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd4928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd4944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd4954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd4970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd49b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd4958) */
/* WARNING: Removing unreachable block (ram,0x000102bd4948) */
/* WARNING: Removing unreachable block (ram,0x000102bd492c) */
/* WARNING: Removing unreachable block (ram,0x000102bd491c) */
/* WARNING: Removing unreachable block (ram,0x000102bd49bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd47ac(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50c74();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50de8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c405f8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102bd3a34();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102bd3e64();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd49e4);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112efd710) = lVar5;
        *(long *)(lVar4 + _DAT_112efd718) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102bd49e4; end: 102bd4a0b; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102bd49e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bd47ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bd4a0c; end: 102bd4a4f; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint end] */

void FUN_102bd4a0c(undefined8 param_1)

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



/* Entry: 102bd4a50; end: 102bd4cbf;  */

void FUN_102bd4a50(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0f89da0)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f076260,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5821c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef1006130)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010eff9ed0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000002f;
          if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f03020)) &&
             (func_0x000107c605b8(0xd00000000000002f,0x800000010f0fcfe0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ContextSpotlightScopeGraphBridge/SCContextSpotlightScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x58,2,0x3a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd4cc0);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53920();
          goto LAB_102bd4adc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58390();
    }
  }
LAB_102bd4adc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bd4cc0; end: 102bd4d6b; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102bd4cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bd4a50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bd4d6c; end: 102bd4def; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4d6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efd830,0);
  *(undefined8 *)(param_1 + _DAT_112efd838) = 0;
  *(undefined8 *)(param_1 + _DAT_112efd840) = 0;
  *(undefined8 *)(param_1 + _DAT_112efd848) = 0;
  *(undefined8 *)(param_1 + _DAT_112efd850) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bd4df0; end: 102bd4e23;  */

void FUN_102bd4df0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bd4e24; end: 102bd4e8b; -[SCContextSpotlightScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bd4e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd4e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd4e54) */
/* WARNING: Removing unreachable block (ram,0x000102bd4e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4e24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efd830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd838));
  return;
}



/* Entry: 102bd4e8c; end: 102bd4eab;  */

void FUN_102bd4e8c(void)

{
  func_0x000107c61168(&PTR_PTR_112895178);
  return;
}



/* Entry: 102bd4eac; end: 102bd4eb7; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4eac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd880;
  func_0x000107c61428(param_1 + _DAT_112efd880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bd4eb8; end: 102bd4ec3; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd880;
  func_0x000107c61428(param_1 + _DAT_112efd880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bd4ec4; end: 102bd4ecf; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint contextSpotlightScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4ec4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd888;
  func_0x000107c61428(param_1 + _DAT_112efd888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bd4ed0; end: 102bd4f13;  */

void FUN_102bd4ed0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102bd4f14; end: 102bd4f1f; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint setContextSpotlightScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd888;
  func_0x000107c61428(param_1 + _DAT_112efd888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bd4f20; end: 102bd4f73;  */

void FUN_102bd4f20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bd4f74; end: 102bd4fbb; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint sCContextHeroContextCardDataServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4f74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd890;
  func_0x000107c61428(param_1 + _DAT_112efd890,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bd4fbc; end: 102bd501f; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint setSCContextHeroContextCardDataServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd890;
  func_0x000107c61428(param_1 + _DAT_112efd890,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bd5020; end: 102bd51a3;  */

/* WARNING: Possible PIC construction at 0x000102bd5120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd5130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd514c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd5124) */
/* WARNING: Removing unreachable block (ram,0x000102bd5134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd5020(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c405f4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50c60();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102bd3bec();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112efd7c8);
        *(undefined8 *)(lVar2 + _DAT_112efd748) = uVar6;
        *(long *)(lVar2 + _DAT_112efd750) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112efd750);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102bd51a4; end: 102bd51cb; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint begin] */

void FUN_102bd51a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bd5020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bd51cc; end: 102bd520f; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint end] */

void FUN_102bd51cc(undefined8 param_1)

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



/* Entry: 102bd5210; end: 102bd5413;  */

void FUN_102bd5210(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0f02f90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f0fd070,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f02f60)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f0fd0a0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ContextSpotlightScopeGraphBridge/SCSCContextHeroContextCardDataServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd5414);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58208();
        goto LAB_102bd529c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5391c();
  }
LAB_102bd529c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bd5414; end: 102bd54bf; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bd5414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bd5210(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bd54c0; end: 102bd553f; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd54c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efd880,0);
  func_0x000107c61614(param_1 + _DAT_112efd888,0);
  *(undefined8 *)(param_1 + _DAT_112efd890) = 0;
  *(undefined8 *)(param_1 + _DAT_112efd898) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bd5540; end: 102bd5573;  */

void FUN_102bd5540(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bd5574; end: 102bd55cb; -[SCSCContextHeroContextCardDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bd55b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd55b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd5574(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efd880);
  func_0x000107c61610(param_1 + _DAT_112efd888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd890));
  return;
}



/* Entry: 102bd55cc; end: 102bd55eb;  */

void FUN_102bd55cc(void)

{
  func_0x000107c61168(&PTR_PTR_112895250);
  return;
}



/* Entry: 102bd55ec; end: 102bd5633; -[SCSCContextSpotlightScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd55ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd8c8;
  func_0x000107c61428(param_1 + _DAT_112efd8c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bd5634; end: 102bd568b; -[SCSCContextSpotlightScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd5634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd8c8;
  func_0x000107c61428(param_1 + _DAT_112efd8c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bd568c; end: 102bd5763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd568c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102bd3e44();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efd780) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd5764);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efd788);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efd8d0);
    *(long **)(unaff_x20 + _DAT_112efd8d0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102bd5764; end: 102bd578b; -[SCSCContextSpotlightScopedServicesSaberEntryPoint begin] */

void FUN_102bd5764(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bd568c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bd578c; end: 102bd5903;  */

/* WARNING: Possible PIC construction at 0x000102bd57f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bd588c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd57f8) */
/* WARNING: Removing unreachable block (ram,0x000102bd5890) */
/* WARNING: Removing unreachable block (ram,0x000102bd58a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd578c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efd8d0);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102bd5904; end: 102bd590b;  */

void FUN_102bd5904(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bd590c; end: 102bd593f; -[SCSCContextSpotlightScopedServicesSaberEntryPoint end] */

void FUN_102bd590c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102bd578c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102bd5940; end: 102bd5a5f;  */

void FUN_102bd5940(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ContextSpotlightScopeGraphBridge/SCSCContextSpotlightScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd5a60);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bd5a60; end: 102bd5b0b; -[SCSCContextSpotlightScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bd5a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bd5940(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bd5b0c; end: 102bd5b6b; -[SCSCContextSpotlightScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd5b0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efd8c8,0);
  *(undefined8 *)(param_1 + _DAT_112efd8d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bd5b6c; end: 102bd5b9f;  */

void FUN_102bd5b6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bd5ba0; end: 102bd5bd7; -[SCSCContextSpotlightScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd5ba0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efd8c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd8d0));
  return;
}



/* Entry: 102bd5bd8; end: 102bd5bf7;  */

void FUN_102bd5bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112895320);
  return;
}



/* Entry: 102bd5bf8; end: 102bd630b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102bd5bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x10,0);
  func_0x000107c61614(unaff_x20 + 0x18,0);
  func_0x000107c61614(unaff_x20 + 0x20,0);
  func_0x000107c61604(unaff_x20 + 0x10,param_2);
  func_0x000107c61604(unaff_x20 + 0x18,param_3);
  func_0x000107c61604(unaff_x20 + 0x20,param_4);
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  uVar5 = *(undefined8 *)(param_1 + _DAT_113078060);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1105adc10;
  func_0x000107c613fc(&UNK_1105adc10,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_1105adc38;
  func_0x000107c613fc(&UNK_1105adc38,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  pcStack_70 = FUN_102bd630c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102bd6314;
  puStack_78 = &UNK_1105adc50;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar5);
  FUN_102bdff20(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar2 = puVar1;
  func_0x000102bdfe0c();
  func_0x000107c42c20(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return unaff_x20;
}



/* Entry: 102bd630c; end: 102bd6313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd630c(void)

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
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long unaff_x20;
  long lVar14;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar4 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      func_0x000107c61574(lVar3);
    }
    else {
      lVar5 = lVar3 + 0x20;
      func_0x000107c61618();
      if (lVar5 == 0) {
        func_0x000107c61574(lVar3);
      }
      else {
        lVar6 = lVar3 + 0x18;
        func_0x000107c61618();
        if (lVar6 == 0) {
          func_0x000107c61574(lVar3);
          func_0x000107c61170(lVar4);
          lVar4 = lVar5;
        }
        else {
          lVar7 = *(long *)(lVar3 + 0x28);
          func_0x000107c43340();
          func_0x000107c61180();
          lVar8 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar8 != 0) {
            lStack_80 = lVar8;
            (**(code **)(lVar14 + 0x68))
                      (lVar13,*(undefined4 *)
                               PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
                       lVar2);
            puVar9 = PTR_PTR_1126ae790;
            func_0x000107c610f8();
            uVar10 = 0xd00000000000001e;
            func_0x000107c5fadc(0xd00000000000001e,0x800000010f0fd190);
            func_0x000107c5f800();
            func_0x000107c470d0();
            puStack_90 = puVar9;
            func_0x000107c61170(uVar10);
            (**(code **)(lVar14 + 8))(lVar13,lVar2);
            lVar2 = lVar4;
            func_0x000107c4ac30();
            func_0x000107c61180();
            uVar10 = *(undefined8 *)(lVar5 + _DAT_11302e640);
            lStack_88 = lVar2;
            func_0x000107c61174(uVar10);
            lVar2 = lVar6;
            func_0x000107c3fa04();
            func_0x000107c61180();
            if (lVar2 != 0) {
              puVar9 = PTR_PTR_1126c9510;
              func_0x000107c610f8();
              puVar11 = puStack_90;
              func_0x000107c61174(puStack_90);
              func_0x000107c61174(uVar12);
              lVar14 = lStack_80;
              lVar13 = lStack_88;
              func_0x000107c48948();
              puStack_90 = puVar9;
              func_0x000107c61574(lVar3);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(uVar12);
              func_0x000107c615e8(lVar14);
              func_0x000107c61170(lVar13);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(uVar10);
              func_0x000107c615e8(lVar2);
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd630c);
            (*pcVar1)();
          }
          func_0x000107c61574(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          lVar4 = lVar6;
        }
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102bd6314; end: 102bd634b;  */

void FUN_102bd6314(long param_1)

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



/* Entry: 102bd634c; end: 102bd6367;  */

void FUN_102bd634c(long param_1,long param_2)

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



/* Entry: 102bd6368; end: 102bd63cf;  */

void FUN_102bd6368(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bd63d0; end: 102bd63db;  */

void FUN_102bd63d0(void)

{
  return;
}



/* Entry: 102bd63dc; end: 102bd63fb;  */

void FUN_102bd63dc(void)

{
  func_0x000107c61168(&PTR_PTR_112efd940);
  return;
}



/* Entry: 102bd63fc; end: 102bd6407;  */

void FUN_102bd63fc(long param_1,long param_2)

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



/* Entry: 102bd6408; end: 102bd6517;  */

void FUN_102bd6408(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_102bd71ec();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_102bd75cc(0,0x112efd9b8,&PTR_PTR_1126c9508);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_102bd6518(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_102bd69b4(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102bd6518; end: 102bd69b3;  */

void FUN_102bd6518(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar3 = lVar11 + 1;
      if (lVar3 < lVar18) {
        lVar3 = *(long *)(*param_3 + lVar3 * 8);
        plVar16 = (long *)(*param_3 + lVar11 * 8);
        plVar21 = plVar16 + 2;
        lVar20 = *plVar16;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar14 = lVar3;
        func_0x000107c4f248();
        lVar10 = lVar20;
        func_0x000107c4f248();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar20);
        lVar20 = lVar11 + 2;
        do {
          lVar6 = lVar20;
          lVar3 = lVar18;
          if (lVar18 == lVar6) break;
          lVar3 = plVar21[-1];
          lVar20 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar4 = lVar20;
          func_0x000107c4f248();
          lVar5 = lVar3;
          func_0x000107c4f248();
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar3);
          plVar21 = plVar21 + 1;
          lVar20 = lVar6 + 1;
          lVar3 = lVar6;
        } while (lVar14 < lVar10 != lVar5 <= lVar4);
        if (lVar14 < lVar10) {
          if (lVar3 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6988);
            (*pcVar1)();
          }
          if (lVar11 < lVar3) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar3 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar14 = lVar3;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar14 = lVar14 + -1;
              if (lVar18 != lVar14) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd69a8);
                  (*pcVar1)();
                }
                uVar15 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar15;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar14);
          }
        }
      }
      lVar18 = param_3[1];
      lVar14 = lVar3;
      if (lVar3 < lVar18) {
        if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6984);
          (*pcVar1)();
        }
        if (lVar3 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd698c);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar18 <= lVar11 + param_4) {
            lVar10 = lVar18;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6990);
            (*pcVar1)();
          }
          if (lVar3 != lVar10) {
            lVar20 = *param_3;
            plVar21 = (long *)(lVar20 + lVar3 * 8 + -8);
            lVar18 = lVar11 - lVar3;
            do {
              lVar6 = *(long *)(lVar20 + lVar3 * 8);
              plVar16 = plVar21;
              lVar14 = lVar18;
              do {
                lVar19 = *plVar16;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar4 = lVar6;
                func_0x000107c4f248();
                lVar5 = lVar19;
                func_0x000107c4f248();
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar19);
                if (lVar5 <= lVar4) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6994);
                  (*pcVar1)();
                }
                lVar4 = *plVar16;
                lVar6 = plVar16[1];
                *plVar16 = lVar6;
                plVar16[1] = lVar4;
                bVar2 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar3 = lVar3 + 1;
              plVar21 = plVar21 + 1;
              lVar18 = lVar18 + -1;
              lVar14 = lVar10;
            } while (lVar3 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6978);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar17 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar17 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar17 + 1;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x28) = lVar14;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd69ac);
        (*pcVar1)();
      }
      FUN_102bd6aa8(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102bd6948;
      lVar18 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar18);
  }
  puVar9 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd69b4);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd69b0);
      (*pcVar1)();
    }
    lVar10 = uVar17 - 1;
    lVar14 = *(long *)(puVar9 + uVar17 * 0x10);
    lVar3 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_102bd6d10(lVar11 + lVar14 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar3 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar3 < lVar14) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd697c);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6980);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar17 * 0x10) = lVar14;
    *(long *)((long)(puVar9 + uVar17 * 0x10) + 8) = lVar3;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102bd6948:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102bd69b4; end: 102bd6aa7;  */

void FUN_102bd69b4(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar8 + param_3 * 8);
      lVar6 = param_1;
      plVar10 = plVar9;
      do {
        lVar7 = *plVar10;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c4f248();
        lVar5 = lVar7;
        func_0x000107c4f248();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar7);
        if (lVar5 <= lVar4) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd6aa8);
          (*pcVar1)();
        }
        lVar4 = *plVar10;
        lVar3 = plVar10[1];
        *plVar10 = lVar3;
        plVar10[1] = lVar4;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102bd6aa8; end: 102bd6d0f;  */

undefined8 FUN_102bd6aa8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102bd6b7c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cf8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102bd6be0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6ce8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cf0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cd0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cd4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cdc);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6ce4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102bd6b7c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cd8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6ce0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cec);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cf4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102bd6be0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cfc);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cc4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6d10);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102bd6d10(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6cc8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bd6ccc);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 102bd6d10; end: 102bd7047;  */

undefined8 FUN_102bd6d10(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar3 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar3 = lVar8;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar9 = param_4 + lVar3;
    plVar2 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar6;
        func_0x000107c4f248();
        lVar8 = lVar11;
        func_0x000107c4f248();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        if (lVar3 < lVar8) {
          plVar7 = param_2 + 1;
          plVar4 = param_4;
          plVar10 = param_2;
        }
        else {
          plVar4 = param_4 + 1;
          plVar10 = param_4;
          plVar7 = param_2;
        }
        param_4 = plVar4;
        if (plVar2 != plVar10) {
          *plVar2 = *plVar10;
        }
        plVar2 = plVar2 + 1;
        param_2 = plVar7;
      } while (param_4 < plVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar7 = param_4 + lVar6;
    plVar2 = param_2;
    plVar9 = plVar7;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar4 = param_2 + -1;
        plVar10 = param_3;
        while( true ) {
          param_3 = plVar10 + -1;
          plVar9 = plVar7 + -1;
          lVar6 = *plVar9;
          lVar11 = *plVar4;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar3 = lVar6;
          func_0x000107c4f248();
          lVar8 = lVar11;
          func_0x000107c4f248();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          if (lVar3 < lVar8) break;
          if (plVar10 != plVar7) {
            *param_3 = *plVar9;
          }
          plVar2 = param_2;
          plVar7 = plVar9;
          plVar10 = param_3;
          if (plVar9 <= param_4) goto LAB_102bd6fdc;
        }
        if (plVar10 != param_2) {
          *param_3 = *plVar4;
        }
        plVar2 = plVar4;
        plVar9 = plVar7;
      } while ((param_1 < plVar4) && (param_2 = plVar4, param_4 < plVar7));
    }
  }
LAB_102bd6fdc:
  uVar5 = (long)plVar9 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102bd7048; end: 102bd70af;  */

void FUN_102bd7048(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102bd70b0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102bd70b0; end: 102bd71eb;  */

undefined *
FUN_102bd70b0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd71ec);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102bd75cc(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102bd71ec; end: 102bd7227;  */

void FUN_102bd71ec(long param_1)

{
  FUN_102bd70b0(0,*(undefined8 *)(param_1 + 0x10),0,param_1,FUN_102bdd864,0x112efd9b8,
                &PTR_PTR_1126c9508);
  return;
}



/* Entry: 102bd7228; end: 102bd7243;  */

ulong FUN_102bd7228(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73ac);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102bd75cc(0,0x112efd9c0,&PTR_PTR_1126ac0b8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          (*(code *)0x102bdd444)(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102bd7244; end: 102bd73b7;  */

ulong FUN_102bd7244(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,code *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73ac);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102bd75cc(0,param_4,param_5);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd73b4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          (*param_6)(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102bd73b8; end: 102bd75cb;  */

/* WARNING: Removing unreachable block (ram,0x000102bd75c0) */

undefined * FUN_102bd73b8(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_68;
  
  uVar11 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar10 = uVar11;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd74e0);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar9;
          FUN_102bdd430(uVar9,param_1);
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd74dc);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c3f64c();
        if (uVar4 != 0xffffffffffffffff) break;
        func_0x000107c61170(uVar3);
        uVar9 = uVar9 + 1;
        if (uVar1 == uVar10) goto LAB_102bd74fc;
      }
      puVar5 = puVar8;
      func_0x000107c61558();
      puStack_68 = puVar8;
      if (((ulong)puVar5 & 1) == 0) {
        FUN_102bd7048(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar9) {
        FUN_102bd7048(1 < *(ulong *)(puStack_68 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar9 + 1;
      *(ulong *)(puStack_68 + uVar9 * 8 + 0x20) = uVar3;
      puVar8 = puStack_68;
      uVar9 = uVar1;
    } while (uVar1 != uVar10);
  }
LAB_102bd74fc:
  if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
    puVar5 = puVar8;
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c6157c(puVar8);
      puVar6 = puVar5;
      FUN_102bdd7b0(puVar5,0);
      puVar7 = puVar8;
      FUN_102bd7244(puVar6 + 0x20,puVar5,puVar8,0x112efd9b8,&PTR_PTR_1126c9508,FUN_102bdd430);
      func_0x000107c6142c();
      if (puVar7 != puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd75b4);
        (*pcVar2)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar8);
    puVar6 = puVar8;
  }
  puStack_68 = puVar6;
  FUN_102bd6408(&puStack_68);
  func_0x000107c61574(puVar8);
  return puStack_68;
}



/* Entry: 102bd75cc; end: 102bd760b;  */

void FUN_102bd75cc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102bd760c; end: 102bd765b;  */

void FUN_102bd760c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112efd9c8 != 0) {
    return;
  }
  puVar1 = &UNK_1105adda0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112efd9c8 = param_1;
  return;
}



/* Entry: 102bd765c; end: 102bd802f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102bd765c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  lVar6 = *(long *)(param_1 + _DAT_1130776b8);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c4dee8();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    lVar5 = *(long *)(lVar6 + _DAT_11307abc8);
    func_0x000107c61434(lVar5);
    func_0x000107c61170(lVar6);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_102bd77f8:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar5);
    }
    else {
      func_0x000107c61434(lVar5);
      uVar4 = 0;
      lVar6 = -0x2fffffffffffffed;
      func_0x000100029284(0xd000000000000013);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(lVar5);
        goto LAB_102bd77f8;
      }
      func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar6 * 0x20,&uStack_80);
      func_0x000107c61170(param_1);
      func_0x000107c61430(lVar5,2);
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    if (lStack_68 != 0) {
      uVar2 = 0;
      func_0x0001013c5ec8(0);
      puVar3 = &uStack_88;
      func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if ((int)puVar3 == 0) {
        uStack_88 = 0;
      }
      goto LAB_102bd7884;
    }
  }
  func_0x00010006e7f4(&uStack_80);
  uStack_88 = 0;
LAB_102bd7884:
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_88;
  return unaff_x20;
}



/* Entry: 102bd8030; end: 102bd80af;  */

undefined8 FUN_102bd8030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c432bc(param_1,param_2,param_2);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4f63c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102bd80b0; end: 102bd8153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102bd80b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130776b0),param_2,0);
  return 0;
}



/* Entry: 102bd8154; end: 102bd8173;  */

void FUN_102bd8154(void)

{
  func_0x000102bd7ae8();
  return;
}



/* Entry: 102bd8174; end: 102bd81a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102bd8174(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_1130776b0),param_2,0);
  return 0;
}



/* Entry: 102bd81a8; end: 102bd81c3; -[_TtC41ContextHeroContextMenuScopeImplementation37ContextHeroContextMenuScopeEntryPoint dismissHeroContextMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd81a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x10) + _DAT_1130776b0),PTR_s_detachUI__1125b96b8,0
            );
  return;
}



/* Entry: 102bd81c4; end: 102bd8223; -[_TtC41ContextHeroContextMenuScopeImplementation37ContextHeroContextMenuScopeEntryPoint performContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd81c4(long param_1)

{
  long lVar1;
  undefined *puStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + _DAT_1130776c8);
  if (lVar1 != 0) {
    puStack_28 = PTR_DAT_1126a1e78;
    func_0x000107c61494(lVar1,1,&puStack_28);
    if (lVar1 != 0) {
      func_0x000107c4e570();
    }
  }
  return;
}



/* Entry: 102bd8224; end: 102bd8247;  */

undefined8 FUN_102bd8224(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c432bc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f63c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102bd8248; end: 102bd8267;  */

void FUN_102bd8248(void)

{
  func_0x000107c61168(&PTR_PTR_112efda10);
  return;
}



/* Entry: 102bd8268; end: 102bd8563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102bd8268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lVar4;
  
  func_0x000107c610f8();
  lVar3 = _DAT_112efdaa8;
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  lVar3 = _DAT_112efdab0;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  lVar3 = _DAT_112efdab8;
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  lVar3 = _DAT_112efdac0;
  func_0x000107c61614(unaff_x20 + _DAT_112efdac0,0);
  lVar4 = _DAT_112efdac8;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  lVar4 = _DAT_112efdad0;
  func_0x000107c61614(unaff_x20 + _DAT_112efdad0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112efdad8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112efdae0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efdae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efdaf0) = 0;
  func_0x000107c61604(unaff_x20 + lVar3,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112efdaf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112efdb18) = param_6;
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(long *)(unaff_x20 + _DAT_112efdb20) = param_8;
  if (param_8 == 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_6);
  }
  else {
    func_0x000107c615f0(param_6);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    lVar3 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      if (lRam0000000112efdb30 != -1) {
        func_0x000107c61568(0x112efdb30,FUN_102bd8564);
      }
      lVar4 = lVar3;
      func_0x000107c3ebc0();
      uVar1 = (undefined1)lVar4;
      func_0x000107c615e8(lVar3);
      goto LAB_102bd84b8;
    }
  }
  uVar1 = 0;
LAB_102bd84b8:
  *(undefined1 *)(unaff_x20 + _DAT_112efdb28) = uVar1;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar5;
}



/* Entry: 102bd8564; end: 102bd85b3;  */

void FUN_102bd8564(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002d;
  func_0x000100442ccc(0xd00000000000002d,0x800000010ef21820,0);
  uRam0000000112efdb38 = uVar1;
  return;
}



/* Entry: 102bd85b4; end: 102bd86db; -[SCContextHeroContextMenuViewController initWithDelegate:composerServices:contextSessionParams:snapchatterServices:spotlightResponseObservable:heroContextCardDataProvider:scope:storiesConfigProvider:] */

undefined8
FUN_102bd85b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  uVar2 = param_7;
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  uVar3 = param_9;
  func_0x000107c61174(param_9);
  uVar4 = param_10;
  func_0x000107c61174(param_10);
  uVar5 = param_3;
  FUN_102bddf60(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return uVar5;
}



/* Entry: 102bd86dc; end: 102bd8703; -[SCContextHeroContextMenuViewController initWithCoder:] */

void FUN_102bd86dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102bde260();
  return;
}



/* Entry: 102bd8704; end: 102bd89eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd8704(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  char *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar7 = &puStack_80;
  FUN_102bde1f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd89ec);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c53fcc(*(undefined8 *)(unaff_x20 + _DAT_112efdaa8));
  lVar9 = *(long *)(unaff_x20 + _DAT_112efdb18);
  if (lVar9 == 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112efdb10);
    if (lVar9 == 0) {
      return;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 == 0) {
      return;
    }
    pcVar5 = "viewDidLoad()";
    func_0x0001000c10c0("viewDidLoad()");
    func_0x000107c61180();
    lVar6 = lVar9;
    func_0x000107c4da88(lVar9);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar5);
    puVar2 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_60 = FUN_102bde210;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x102bdfda4;
    puStack_68 = &UNK_1105ade48;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar8 = lVar6;
    func_0x000107c5c320(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar9);
  }
  else {
    lVar6 = lVar9;
    func_0x000107c615f0(lVar9);
    func_0x000107c44dbc();
    func_0x000107c61180();
    pcVar5 = "viewDidLoad()";
    func_0x0001000c10c0("viewDidLoad()");
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c4da88(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c615e8(pcVar5);
    puVar2 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_60 = (code *)0x102bde234;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101218f4c;
    puStack_68 = &UNK_1105ade70;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar8 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar8);
    func_0x000107c615e8(lVar9);
  }
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 102bd89ec; end: 102bd8b03;  */

void FUN_102bd89ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_50 = 0;
    uVar2 = 0;
    FUN_102bdfc8c(0,0x112efd9b8,&PTR_PTR_1126c9508);
    func_0x000107c5fc50(param_1,&uStack_50,uVar2);
    uVar1 = uStack_50;
    if (uStack_50 != 0) {
      if (uStack_50 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uStack_50 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uStack_50;
        if (-1 < (long)uStack_50) {
          uVar3 = uStack_50 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if (uVar3 != 0) {
        puVar4 = &UNK_1105ade30;
        func_0x000107c613fc(&UNK_1105ade30,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_2);
        func_0x000107c61434(uVar1);
        FUN_102bde554();
        func_0x000107c61170(param_2);
        func_0x000107c61574(puVar4);
        func_0x000107c61430(uVar1,2);
        return;
      }
      func_0x000107c6142c(uVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102bd8b04; end: 102bd8c1f;  */

void FUN_102bd8b04(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1105ae3f8;
    func_0x000107c613fc(&UNK_1105ae3f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    puVar2 = &UNK_1105ae420;
    func_0x000107c613fc(&UNK_1105ae420,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x102bdfcd8;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_68 = FUN_102bdfce0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x102bd8ca8;
    puStack_70 = &UNK_1105ae438;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102bd8c20; end: 102bd8d33;  */

void FUN_102bd8c20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    FUN_102bd8f3c();
    puVar2 = &UNK_1105ade30;
    func_0x000107c613fc(&UNK_1105ade30,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    FUN_102bde554(lVar1,param_2,puVar2,lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102bd8d34; end: 102bd8d5b; -[SCContextHeroContextMenuViewController viewDidLoad] */

void FUN_102bd8d34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bd8704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bd8d5c; end: 102bd8e9f;  */

void FUN_102bd8d5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = "processHeroContextCards(_:)";
  func_0x0001000c10c0("processHeroContextCards(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105ade30;
  func_0x000107c613fc(&UNK_1105ade30,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1105ae3a8;
  func_0x000107c613fc(&UNK_1105ae3a8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  pcStack_68 = FUN_102bdfccc;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1105ae3c0;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102bd8ea0; end: 102bd8f3b;  */

void FUN_102bd8ea0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_4 >> 0x3e == 0) {
      uVar1 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar1 = param_4;
      }
      func_0x000107c60480(uVar1);
    }
    FUN_102bdc874(param_2,param_3,uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102bd8f3c; end: 102bd9e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bd8f3c(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long extraout_x8;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long unaff_x20;
  long lVar20;
  undefined1 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong auStack_150 [2];
  undefined1 auStack_140 [8];
  ulong uStack_138;
  undefined1 auStack_130 [8];
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  long alStack_88 [3];
  long lStack_70;
  
  lVar6 = 0;
  func_0x000107c5ed50();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112efdb00);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 == 0) goto LAB_102bd9770;
  func_0x000107c61174();
  uVar19 = uVar7;
  func_0x0001084372fc();
  func_0x000107c61180();
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 != 0) {
    uVar22 = *(ulong *)(uVar19 + _DAT_113080220);
    uVar27 = *(ulong *)(uVar19 + _DAT_113080230);
    lVar24 = *(long *)(uVar19 + _DAT_113080228);
    lStack_128 = param_1;
    uStack_120 = uVar22;
    uStack_118 = uVar27;
    uStack_110 = uVar19;
    uStack_108 = uVar7;
    lStack_f8 = lVar6;
    if (uVar22 == 0) {
      func_0x000107c61174(lVar24);
      func_0x000107c61174(uVar27);
      uVar7 = uVar27;
    }
    else {
      lVar20 = *(long *)(uVar22 + _DAT_11307fed0);
      uVar19 = uVar22;
      func_0x000107c61174();
      func_0x000107c61174(uVar27);
      func_0x000107c61174(lVar24);
      func_0x000107c61174();
      if ((int)lVar20 == 0) {
        func_0x000107c61170(uVar19);
        uVar7 = uVar27;
      }
      else {
        if (5 < lVar20 - 1U) {
          alStack_88[0] = lVar20;
          func_0x000107c60614(&UNK_11077b540,alStack_88,&UNK_11077b540,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e7c);
          (*pcVar5)();
        }
        puVar8 = PTR_PTR_1126ac0e0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar9 = PTR_PTR_1126b5b00;
        func_0x000107c610f8(PTR_PTR_1126b5b00);
        func_0x000107c453e4();
        func_0x000107c53838();
        FUN_102bd9e7c();
        lVar6 = *(long *)(uVar19 + _DAT_11307fed8);
        if (lVar6 == 0) {
          func_0x000107c61174();
          func_0x000107c61174(puVar9);
          lVar6 = 0;
        }
        else {
          func_0x000107c61174();
          func_0x000107c61174(puVar9);
          func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
        }
        puVar14 = PTR_PTR_1126c9508;
        func_0x000107c610f8();
        uVar10 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        *(undefined8 *)((long)auStack_150 + lVar1) = 0;
        *(undefined8 *)((long)auStack_150 + lVar1 + 8) = 0;
        *(ulong *)((long)&uStack_138 + lVar1) = uVar27;
        auStack_140[lVar1] = 0;
        func_0x000107c45d28();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar27);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar10);
        func_0x000107c61174();
        if ((ulong)puVar15 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar15) {
            puVar11 = puVar15;
          }
          func_0x000107c60480(puVar11);
        }
        lVar6 = lStack_f8;
        puVar12 = (undefined *)0x0;
        FUN_102bdd9b4(0,puVar11 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar7 = uStack_118;
        uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar22 = *(ulong *)(uVar17 + 0x10);
        puVar15 = puVar12;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          FUN_102bdd9b4(puVar15,uVar22 + 1,1,puVar12);
          uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
        *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar14;
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar27);
        func_0x000107c61170(uVar19);
        uVar22 = uStack_120;
        param_1 = lStack_128;
      }
    }
    if (uVar7 != 0) {
      uVar19 = ((ulong *)(uVar7 + _DAT_113080070))[1];
      if (uVar19 != 0) {
        uVar17 = *(ulong *)(uVar7 + _DAT_113080070);
        uVar27 = uVar7;
        func_0x000107c61174();
        func_0x000107c61434(uVar19);
        iVar18 = 1;
        func_0x000108f4b468();
        if (iVar18 == 0) {
          func_0x000107c61170(uVar27);
          func_0x000107c6142c(uVar19);
        }
        else {
          puVar8 = PTR_PTR_1126b5b00;
          func_0x000107c61168(PTR_PTR_1126b5b00);
          uVar7 = uVar19;
          func_0x000107c5fadc(uVar17,uVar19);
          func_0x000107c6142c(uVar19);
          func_0x000107c4e8b4(puVar8);
          func_0x000107c61180();
          func_0x000107c61170();
          uVar19 = ((ulong *)(uVar27 + _DAT_113080078))[1];
          if (uVar19 == 0) {
LAB_102bd93f0:
            func_0x000108f5986c();
            func_0x000107c61180();
            if (uVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e54);
              (*pcVar5)();
            }
            uVar22 = uVar17;
            func_0x000107c5faec();
            func_0x000107c61170(uVar17);
          }
          else {
            uVar26 = *(ulong *)(uVar27 + _DAT_113080078);
            uVar22 = uVar26 & 0xffffffffffff;
            if ((uVar19 & 0x2000000000000000) != 0) {
              uVar22 = uVar19 >> 0x38 & 0xf;
            }
            if (uVar22 == 0) goto LAB_102bd93f0;
            uVar17 = uVar19;
            func_0x000107c61434();
            func_0x000108f59854();
            func_0x000107c61180();
            if (uVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e58);
              (*pcVar5)();
            }
            uVar22 = uVar17;
            func_0x000107c5faec();
            func_0x000107c61170(uVar17);
            lVar20 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar20 + 0x18) = 2;
            *(undefined8 *)(lVar20 + 0x10) = 1;
            *(undefined **)(lVar20 + 0x38) = PTR___sSSN_11034da80;
            lVar23 = lVar20;
            func_0x00010075bbf0();
            *(long *)(lVar20 + 0x40) = lVar23;
            *(ulong *)(lVar20 + 0x20) = uVar26;
            *(ulong *)(lVar20 + 0x28) = uVar19;
            uVar19 = uVar7;
            func_0x000107c5fae0(uVar22,uVar7,lVar20);
            func_0x000107c6142c(uVar7);
            func_0x000107c61574(lVar20);
            uVar7 = uVar19;
          }
          uVar19 = uVar27;
          func_0x000102bd9f20();
          puVar9 = PTR_PTR_1126c9508;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174(puVar8);
          func_0x000107c5fadc(uVar22,uVar7);
          func_0x000107c6142c(uVar7);
          *(undefined8 *)((long)auStack_150 + lVar1) = 0;
          *(undefined8 *)((long)auStack_150 + lVar1 + 8) = 0;
          *(ulong *)((long)&uStack_138 + lVar1) = uVar19;
          auStack_140[lVar1] = 0;
          func_0x000107c45d28();
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar22);
          func_0x000107c61174();
          puVar14 = puVar15;
          func_0x000107c61550();
          param_1 = lStack_128;
          if ((((int)puVar14 == 0) || ((long)puVar15 < 0)) ||
             (puVar14 = puVar15, uVar7 = uStack_118, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar15 >> 0x3e == 0) {
              puVar11 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar11 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar15) {
                puVar11 = puVar15;
              }
              func_0x000107c60480(puVar11);
            }
            uVar7 = uStack_118;
            puVar14 = (undefined *)0x0;
            FUN_102bdd9b4(0,puVar11 + 1,1,puVar15);
          }
          uVar17 = (ulong)puVar14 & 0xffffffffffffff8;
          uVar22 = *(ulong *)(uVar17 + 0x10);
          puVar15 = puVar14;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            FUN_102bdd9b4(puVar15,uVar22 + 1,1,puVar14);
            uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
          *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar9;
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar27);
          uVar22 = uStack_120;
        }
      }
    }
    if (lVar24 == 0) {
      func_0x000107c61170(uStack_110);
      func_0x000107c61170(uStack_108);
      uVar19 = uVar22;
    }
    else {
      uVar19 = *(ulong *)(lVar24 + _DAT_11307ffa0);
      puStack_100 = puVar15;
      if (uVar19 >> 0x3e == 0) {
        uVar27 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar27 = uVar19 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar19) {
          uVar27 = uVar19;
        }
        func_0x000107c60480();
      }
      if (uVar27 == 0) {
        func_0x000107c61170(uStack_108);
        func_0x000107c61170(uStack_110);
        func_0x000107c61170(lVar24);
        uVar19 = uVar7;
        puVar15 = puStack_100;
        uVar7 = uVar22;
        lVar6 = lStack_f8;
      }
      else {
        func_0x000107c61434(uVar19);
        lVar6 = 4;
        do {
          uVar7 = lVar6 - 4;
          if ((uVar19 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9720);
              (*pcVar5)();
            }
            uVar22 = *(ulong *)(uVar19 + lVar6 * 8);
            func_0x000107c61174();
          }
          else {
            uVar22 = uVar7;
            FUN_102bdd614(uVar7,uVar19);
          }
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd971c);
            (*pcVar5)();
          }
          uVar7 = lVar6 - 3;
          if (*(int *)(uVar22 + _DAT_11307ff88) == 1) {
            lVar23 = *(long *)(uVar22 + _DAT_11307ff90);
            lVar20 = lVar23;
            func_0x000107c61174();
            func_0x000107c61170(uVar22);
            if (lVar23 != 0) {
              func_0x000107c61170(lVar24);
              func_0x000107c61170(uStack_110);
              func_0x000107c61170(uStack_108);
              func_0x000107c6142c(uVar19);
              func_0x000107c61170(uStack_120);
              func_0x000107c61170(uStack_118);
              uStack_d8 = *(ulong *)(lVar20 + _DAT_11307ff78);
              func_0x000107c61170(lVar20);
              if ((long)uStack_d8 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e00);
                (*pcVar5)();
              }
              bVar3 = false;
              param_1 = lStack_128;
              puVar15 = puStack_100;
              lVar6 = lStack_f8;
              goto LAB_102bd9778;
            }
          }
          else {
            func_0x000107c61170();
          }
          lVar6 = lVar6 + 1;
        } while (uVar7 != uVar27);
        func_0x000107c61170(uStack_108);
        func_0x000107c61170(uStack_110);
        func_0x000107c61170(lVar24);
        func_0x000107c6142c(uVar19);
        uVar19 = uStack_118;
        param_1 = lStack_128;
        puVar15 = puStack_100;
        uVar7 = uStack_120;
        lVar6 = lStack_f8;
      }
    }
    func_0x000107c61170(uVar19);
  }
  func_0x000107c61170(uVar7);
LAB_102bd9770:
  uStack_d8 = 0;
  bVar3 = true;
LAB_102bd9778:
  lVar24 = _DAT_112efdaf0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efdaf0);
  *(undefined8 *)(unaff_x20 + _DAT_112efdaf0) = 0;
  func_0x000107c61170(uVar10);
  func_0x000107c5b8b4();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e2c);
    (*pcVar5)();
  }
  func_0x000107c600f4(auStack_130 + lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c5ed4c(alStack_88);
joined_r0x000102bd97c8:
  do {
    if (lStack_70 == 0) {
      (**(code **)(lVar16 + 8))(auStack_130 + lVar1,lVar6);
      puVar8 = puVar15;
      FUN_102bd73b8(puVar15);
      func_0x000107c6142c(puVar15);
      return puVar8;
    }
    func_0x000100102924(alStack_88,auStack_a8);
    func_0x0001000bb420(auStack_a8,auStack_c8);
    uVar10 = 0;
    FUN_102bdfc8c(0,0x112efdb78,&PTR_PTR_1126cab90);
    puVar13 = &uStack_d0;
    puVar25 = auStack_c8;
    func_0x000107c6147c(puVar13,puVar25,PTR___sypN_11034f1a8 + 8,uVar10,6);
    uVar7 = uStack_d0;
    if ((int)puVar13 == 0) {
      func_0x000100183ab8(auStack_a8);
    }
    else {
      uVar19 = uStack_d0;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e18);
        (*pcVar5)();
      }
      uVar22 = uVar19;
      func_0x000107c3cfdc();
      func_0x000107c61170(uVar19);
      if ((int)uVar22 == 0x1c) {
        uVar19 = uVar7;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e20);
          (*pcVar5)();
        }
        uVar22 = uVar19;
        func_0x000107c5b608();
        func_0x000107c61180();
        func_0x000107c61170(uVar19);
        uVar10 = *(undefined8 *)(unaff_x20 + lVar24);
        *(ulong *)(unaff_x20 + lVar24) = uVar22;
        func_0x000107c61170(uVar10);
      }
      uVar19 = uVar7;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (uVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e1c);
        (*pcVar5)();
      }
      uVar22 = uVar19;
      func_0x000107c3cfdc();
      func_0x000107c61170(uVar19);
      if ((int)uVar22 != 0x1c) goto LAB_102bd9a38;
      if (bVar3) {
LAB_102bd9a08:
        func_0x000100183ab8(auStack_a8);
      }
      else {
        uVar19 = uVar7;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e24);
          (*pcVar5)();
        }
        uVar22 = uVar19;
        func_0x000107c3cfdc();
        func_0x000107c61170(uVar19);
        if ((int)uVar22 != 0x1c) goto LAB_102bd9a08;
        uVar19 = uVar7;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e28);
          (*pcVar5)();
        }
        uVar22 = uVar19;
        func_0x000107c5b608();
        func_0x000107c61180();
        func_0x000107c61170(uVar19);
        if (uVar22 == 0) goto LAB_102bd9a08;
        uVar19 = uVar22;
        func_0x000107c5b5f4();
        if (uVar19 == uStack_d8) {
          func_0x000107c61170(uVar22);
LAB_102bd9a38:
          uVar19 = uVar7;
          func_0x000107c3cf80();
          func_0x000107c61180();
          if (uVar19 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e44);
            (*pcVar5)();
          }
          uVar22 = uVar19;
          func_0x000107c3cfdc();
          func_0x000107c61170(uVar19);
          iVar18 = (int)uVar22;
          if (iVar18 < 0x1c) {
            if (iVar18 < 0xe) {
              if (iVar18 == 2) {
                bVar2 = false;
                uVar19 = 0x10;
              }
              else {
                if (iVar18 != 0xc) goto LAB_102bd9b14;
                bVar2 = false;
                uVar19 = 0xe;
              }
            }
            else if (iVar18 == 0xe) {
LAB_102bd9ae4:
              bVar2 = true;
              uVar19 = 0xd;
            }
            else {
              if (iVar18 != 0x11) goto LAB_102bd9b14;
              bVar2 = false;
              uVar19 = 0xf;
            }
          }
          else if (iVar18 < 0x43) {
            if (iVar18 == 0x1c) {
              bVar2 = false;
              uVar19 = 10;
            }
            else {
              if (iVar18 == 0x21) goto LAB_102bd9ae4;
LAB_102bd9b14:
              bVar2 = false;
              uVar19 = 0xffffffffffffffff;
            }
          }
          else if (iVar18 == 0x43) {
            bVar2 = false;
            uVar19 = 0xc;
          }
          else {
            if (iVar18 != 0x55) goto LAB_102bd9b14;
            bVar2 = false;
            uVar19 = 6;
          }
          uVar22 = uVar7;
          lStack_f8 = lVar6;
          func_0x000107c3cf80();
          func_0x000107c61180();
          if (uVar22 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e40);
            (*pcVar5)();
          }
          uVar27 = uVar7;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (uVar27 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e3c);
            (*pcVar5)();
          }
          uStack_108 = uVar19;
          if (bVar2) {
            uVar19 = uVar27;
            func_0x000108f597dc();
            func_0x000107c61180();
            if (uVar19 != 0) goto LAB_102bd9b68;
LAB_102bd9b98:
            uStack_110 = 0;
            puVar25 = (undefined1 *)0x0;
          }
          else {
            uVar19 = uVar7;
            func_0x000107c5c38c();
            func_0x000107c61180();
            if (uVar19 == 0) goto LAB_102bd9b98;
LAB_102bd9b68:
            uVar17 = uVar19;
            func_0x000107c5faec();
            uStack_110 = uVar17;
            func_0x000107c61170(uVar19);
          }
          uVar19 = uVar7;
          puStack_100 = puVar15;
          func_0x000107c5c910();
          func_0x000107c61180();
          uVar17 = uVar7;
          func_0x000107c3cf80();
          func_0x000107c61180();
          if (uVar17 == 0) {
            func_0x000107c61170(uVar27);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e38);
            (*pcVar5)();
          }
          uVar26 = uVar17;
          func_0x000107c3cfdc();
          func_0x000107c61170(uVar17);
          if ((int)uVar26 == 0xe) {
            uVar17 = uVar7;
            func_0x000107c3cf80();
            func_0x000107c61180();
            if (uVar17 == 0) {
              func_0x000107c61170(uVar27);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102bd9e50);
              (*pcVar5)();
            }
            uVar26 = uVar17;
            func_0x000107c4adbc();
            func_0x000107c61180();
            func_0x000107c61170(uVar17);
            if (uVar26 == 0) goto LAB_102bd9c3c;
            uVar17 = uVar26;
            func_0x000107c4a3a4();
            uVar21 = (undefined1)uVar17;
            func_0x000107c61170(uVar26);
            uVar4 = uVar21;
            if (puVar25 != (undefined1 *)0x0) goto LAB_102bd9c44;
LAB_102bd9c34:
            uVar17 = 0;
          }
          else {
LAB_102bd9c3c:
            uVar21 = 0;
            uVar4 = 0;
            if (puVar25 == (undefined1 *)0x0) goto LAB_102bd9c34;
LAB_102bd9c44:
            uVar21 = uVar4;
            uVar17 = uStack_110;
            func_0x000107c5fadc(uStack_110,puVar25);
            func_0x000107c6142c(puVar25);
          }
          puVar9 = PTR_PTR_1126c9508;
          func_0x000107c610f8();
          *(undefined8 *)((long)&uStack_138 + lVar1) = 0;
          auStack_140[lVar1] = uVar21;
          *(ulong *)((long)auStack_150 + lVar1) = uVar17;
          *(ulong *)((long)auStack_150 + lVar1 + 8) = uVar19;
          func_0x000107c45d28();
          func_0x000107c61170(uVar22);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar27);
          func_0x000107c61170(uVar17);
          func_0x000107c61174();
          puVar8 = puStack_100;
          puVar15 = puStack_100;
          func_0x000107c61550();
          lVar6 = lStack_f8;
          if ((((int)puVar15 == 0) || ((long)puVar8 < 0)) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar15 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar15 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar15 = puVar8;
              }
              func_0x000107c60480(puVar15);
            }
            puVar14 = (undefined *)0x0;
            FUN_102bdd9b4(0,puVar15 + 1,1,puVar8);
            puVar8 = puVar14;
          }
          uVar22 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar19 = *(ulong *)(uVar22 + 0x10);
          puVar15 = puVar8;
          if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar19) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
            FUN_102bdd9b4(puVar15,uVar19 + 1,1,puVar8);
            uVar22 = (ulong)puVar15 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar22 + 0x10) = uVar19 + 1;
          *(undefined **)(uVar22 + uVar19 * 8 + 0x20) = puVar9;
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar7);
          func_0x000100183ab8(auStack_a8);
          func_0x000107c5ed4c(alStack_88);
          goto joined_r0x000102bd97c8;
        }
        uVar19 = uVar22;
        func_0x000107c449ac();
        if ((uVar19 & 1) != 0) {
          uVar19 = uVar22;
          func_0x000107c4d2a4();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar27 = uVar19;
            func_0x000107c5cda4();
            func_0x000107c61170(uVar19);
            func_0x000107c61170(uVar22);
            if (uVar27 != uStack_d8) goto LAB_102bd9a08;
            goto LAB_102bd9a38;
          }
        }
        func_0x000100183ab8(auStack_a8);
        func_0x000107c61170(uVar22);
      }
      func_0x000107c61170(uVar7);
    }
    func_0x000107c5ed4c(alStack_88);
  } while( true );
}



/* Entry: 102bd9e7c; end: 102bda067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bd9e7c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    uVar3 = ((ulong *)(param_1 + _DAT_113080080))[1];
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + _DAT_113080080);
      uVar1 = uVar4 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puVar2 = PTR_PTR_1126c9518;
        func_0x000107c610f8(PTR_PTR_1126c9518);
        func_0x000107c5fadc(uVar4,uVar3);
        func_0x000107c48160(puVar2);
        func_0x000107c61170(uVar4);
        return puVar2;
      }
    }
  }
  return (undefined *)0x0;
}


