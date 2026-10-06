/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029a9ac0; end: 1029a9acb;  */

void FUN_1029a9ac0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029a9acc; end: 1029a9b2b; -[_TtC25MyReportsScopeGraphBridge38MyReportsScopedServicesSaberEntryPoint init] */

void FUN_1029a9acc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsScopeGraphBridge.MyReportsScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a9af8);
  (*pcVar1)();
}



/* Entry: 1029a9b2c; end: 1029a9b63; -[_TtC25MyReportsScopeGraphBridge38MyReportsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9b2c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed30b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed30b0));
  return;
}



/* Entry: 1029a9b64; end: 1029a9b67;  */

void FUN_1029a9b64(void)

{
  return;
}



/* Entry: 1029a9b68; end: 1029a9b87;  */

void FUN_1029a9b68(void)

{
  FUN_1029a99d8();
  return;
}



/* Entry: 1029a9b88; end: 1029a9ba7;  */

void FUN_1029a9b88(void)

{
  func_0x000107c61168(&PTR_PTR_112877fc8);
  return;
}



/* Entry: 1029a9ba8; end: 1029a9c77;  */

undefined8 FUN_1029a9ba8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed30e8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1029a9c78();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029a9c78; end: 1029a9c97;  */

void FUN_1029a9c78(void)

{
  func_0x000107c61168(&PTR_PTR_112878090);
  return;
}



/* Entry: 1029a9c98; end: 1029a9cb3;  */

void FUN_1029a9c98(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed30f0,&UNK_10dafb298);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029a9d20,param_1);
  return;
}



/* Entry: 1029a9cb4; end: 1029a9d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9cb4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029a9c78();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed30f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029a9d20; end: 1029a9d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9d20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029a9c78();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed30f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029a9d28; end: 1029a9d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9d28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed30f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a9d74; end: 1029a9dd3; -[_TtC25MyReportsScopeGraphBridge33MyReportsScopeGraphBridgeServices init] */

void FUN_1029a9d74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsScopeGraphBridge.MyReportsScopeGraphBridgeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a9da0);
  (*pcVar1)();
}



/* Entry: 1029a9dd4; end: 1029a9de3; -[_TtC25MyReportsScopeGraphBridge33MyReportsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed30f8));
  return;
}



/* Entry: 1029a9de4; end: 1029a9e6f;  */

void FUN_1029a9de4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029a9e24,0);
  return;
}



/* Entry: 1029a9e70; end: 1029a9e8b;  */

void FUN_1029a9e70(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029a9edc,param_1);
  return;
}



/* Entry: 1029a9e8c; end: 1029a9edb;  */

void FUN_1029a9e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029a9edc; end: 1029a9f0f;  */

void FUN_1029a9edc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029a9f10; end: 1029a9f17;  */

undefined8 FUN_1029a9f10(void)

{
  return 0x1b;
}



/* Entry: 1029a9f18; end: 1029aa08f;  */

void FUN_1029a9f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057a110;
  func_0x000107c613fc(&UNK_11057a110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029aa090,puVar1);
  return;
}



/* Entry: 1029aa090; end: 1029aa097;  */

void FUN_1029aa090(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed30e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed30e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11057a1e8;
  func_0x000107c613fc(&UNK_11057a1e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029aa164;
  func_0x00010058fa64(0x1029aa164,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029aa098; end: 1029aa0f3;  */

void FUN_1029aa098(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed30e8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed30e8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029aa0f4; end: 1029aa16b;  */

undefined ** FUN_1029aa0f4(void)

{
  return &PTR_DAT_112ed3408;
}



/* Entry: 1029aa16c; end: 1029aa1b3; -[SCMyReportsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa16c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3150;
  func_0x000107c61428(param_1 + _DAT_112ed3150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029aa1b4; end: 1029aa20b; -[SCMyReportsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3150;
  func_0x000107c61428(param_1 + _DAT_112ed3150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029aa20c; end: 1029aa253; -[SCMyReportsScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa20c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3158;
  func_0x000107c61428(param_1 + _DAT_112ed3158,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029aa254; end: 1029aa25f; -[SCMyReportsScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3158;
  func_0x000107c61428(param_1 + _DAT_112ed3158,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029aa260; end: 1029aa2a7; -[SCMyReportsScopeGraphBridgeSaberEntryPoint myReportsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3160;
  func_0x000107c61428(param_1 + _DAT_112ed3160,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029aa2a8; end: 1029aa2b3; -[SCMyReportsScopeGraphBridgeSaberEntryPoint setMyReportsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3160;
  func_0x000107c61428(param_1 + _DAT_112ed3160,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029aa2b4; end: 1029aa313;  */

void FUN_1029aa2b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1029aa314; end: 1029aa4cf;  */

/* WARNING: Possible PIC construction at 0x0001029aa42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029aa450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029aa460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029aa4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029aa464) */
/* WARNING: Removing unreachable block (ram,0x0001029aa454) */
/* WARNING: Removing unreachable block (ram,0x0001029aa430) */
/* WARNING: Removing unreachable block (ram,0x0001029aa4a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa314(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d384();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029a9930();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029a9ba8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029aa4d0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed3078) = lVar5;
      *(long *)(lVar3 + _DAT_112ed3080) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1029aa4d0; end: 1029aa4f7; -[SCMyReportsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029aa4d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029aa314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029aa4f8; end: 1029aa53b; -[SCMyReportsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029aa4f8(undefined8 param_1)

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



/* Entry: 1029aa53c; end: 1029aa73f;  */

void FUN_1029aa53c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0f2c540)) &&
           (func_0x000107c605b8(0xd000000000000028,0x800000010f0d3ac0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MyReportsScopeGraphBridge/SCMyReportsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4a,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029aa740);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5690c();
        goto LAB_1029aa5c8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_1029aa5c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029aa740; end: 1029aa7eb; -[SCMyReportsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029aa740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029aa53c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029aa7ec; end: 1029aa863; -[SCMyReportsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa7ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed3150,0);
  *(undefined8 *)(param_1 + _DAT_112ed3158) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed3160) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed3168) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029aa864; end: 1029aa897;  */

void FUN_1029aa864(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029aa898; end: 1029aa8ef; -[SCMyReportsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029aa8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029aa8c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa898(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed3150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3158));
  return;
}



/* Entry: 1029aa8f0; end: 1029aa90f;  */

void FUN_1029aa8f0(void)

{
  func_0x000107c61168(&PTR_PTR_112878150);
  return;
}



/* Entry: 1029aa910; end: 1029aa957; -[SCMyReportsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3198;
  func_0x000107c61428(param_1 + _DAT_112ed3198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029aa958; end: 1029aa9af; -[SCMyReportsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3198;
  func_0x000107c61428(param_1 + _DAT_112ed3198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029aa9b0; end: 1029aaa87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aa9b0(undefined8 param_1,long param_2)

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
    FUN_1029a9b88();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed30b0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029aaa88);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed30b8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed31a0);
    *(long **)(unaff_x20 + _DAT_112ed31a0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029aaa88; end: 1029aaaaf; -[SCMyReportsScopedServicesSaberEntryPoint begin] */

void FUN_1029aaa88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029aa9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029aaab0; end: 1029aac27;  */

/* WARNING: Possible PIC construction at 0x0001029aab18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029aabb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029aab1c) */
/* WARNING: Removing unreachable block (ram,0x0001029aabb4) */
/* WARNING: Removing unreachable block (ram,0x0001029aabcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aaab0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed31a0);
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



/* Entry: 1029aac28; end: 1029aac2f;  */

void FUN_1029aac28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029aac30; end: 1029aac63; -[SCMyReportsScopedServicesSaberEntryPoint end] */

void FUN_1029aac30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029aaab0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029aac64; end: 1029aad83;  */

void FUN_1029aac64(long param_1,long param_2,long param_3)

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
                        "MyReportsScopeGraphBridge/SCMyReportsScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029aad84);
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



/* Entry: 1029aad84; end: 1029aae2f; -[SCMyReportsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029aad84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029aac64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029aae30; end: 1029aae8f; -[SCMyReportsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aae30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed3198,0);
  *(undefined8 *)(param_1 + _DAT_112ed31a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029aae90; end: 1029aaec3;  */

void FUN_1029aae90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029aaec4; end: 1029aaefb; -[SCMyReportsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aaec4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed3198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed31a0));
  return;
}



/* Entry: 1029aaefc; end: 1029aaf1b;  */

void FUN_1029aaefc(void)

{
  func_0x000107c61168(&PTR_PTR_112878220);
  return;
}



/* Entry: 1029aaf1c; end: 1029ab32b;  */

long FUN_1029aaf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  uVar1 = param_2;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return unaff_x20;
}



/* Entry: 1029ab32c; end: 1029ab3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ab32c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c4d37c(*(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_112ed33f0));
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    func_0x000107c61574(param_2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1029ab3a8; end: 1029ab3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ab3a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c4d37c(*(undefined8 *)(*(long *)(lVar1 + 0x10) + _DAT_112ed33f0));
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1029ab3cc; end: 1029ab497;  */

void FUN_1029ab3cc(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "dismissMyReports()";
  func_0x0001000c10c0("dismissMyReports()");
  func_0x000107c61180();
  puVar2 = &UNK_11057a2d0;
  func_0x000107c613fc(&UNK_11057a2d0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x1029ab5c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11057a310;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029ab498; end: 1029ab51f;  */

void FUN_1029ab498(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c420a4(*(long *)(param_1 + 0x48));
      func_0x000107c61180();
      func_0x000107c61170();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1029ab520; end: 1029ab593;  */

void FUN_1029ab520(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029ab594; end: 1029ab5b3;  */

void FUN_1029ab594(void)

{
  func_0x0001029ab0a4();
  return;
}



/* Entry: 1029ab5b4; end: 1029ab5c7;  */

undefined8 FUN_1029ab5b4(void)

{
  return 0;
}



/* Entry: 1029ab5c8; end: 1029ab5e7;  */

void FUN_1029ab5c8(void)

{
  func_0x000107c61168(&PTR_PTR_112ed3210);
  return;
}



/* Entry: 1029ab5e8; end: 1029ab5ef;  */

void FUN_1029ab5e8(long param_1,long param_2)

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



/* Entry: 1029ab5f0; end: 1029ab65f; -[_TtC16MyReportsFeature23MyReportsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ab5f0(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112ed32e8;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MyReportsFeature/MyReportsViewController.swift",0x2e,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ab660);
  (*pcVar1)();
}



/* Entry: 1029ab660; end: 1029ab78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ab660(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed32b0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed32b8);
  func_0x000107c40974(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      uVar5 = uVar2;
      FUN_1029ab790(uVar2);
      puVar6 = PTR_PTR_1126abc08;
      func_0x000107c610f8(PTR_PTR_1126abc08);
      func_0x000107c49520();
      func_0x000107c61170(uVar5);
      func_0x000107c5a568();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(uVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar6);
      return;
    }
  }
  func_0x000107c61170(lVar1);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1029ab790; end: 1029abbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029ab790(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_e0 [7];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12_00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed32c0);
  func_0x000107c3eb30();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ed32c8);
    func_0x000107c4d814();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      uStack_98 = param_1;
      func_0x000107c4c1dc(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = 0;
      func_0x000107c5ede0();
      pcVar11 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      (*pcVar11)(lVar14,1,1,lVar2);
      (*pcVar11)(lVar13,1,1,lVar2);
      lVar2 = 0;
      func_0x0001046305a8();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar9,1,1,lVar2);
      *(undefined1 *)(lVar8 + -8) = 0;
      *(undefined8 *)(lVar8 + -0x10) = 0;
      *(undefined8 *)(lVar8 + -0x18) = 0;
      *(undefined8 *)(lVar8 + -0x20) = 0;
      *(undefined8 *)(lVar8 + -0x28) = 0;
      *(undefined8 *)(lVar8 + -0x30) = 0;
      *(undefined8 *)(lVar8 + -0x38) = 0;
      *(undefined1 **)(lVar8 + -0x40) = puVar9;
      func_0x000104638e24(lVar8,0x10,lVar14,0,lVar13,0,0,0,0);
      func_0x000103bda44c(0);
      puVar10 = *(ulong **)(unaff_x20 + _DAT_112ed32d8);
      func_0x000100e39298(lVar8,lVar12);
      func_0x000104652fec(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000104651d90(lVar12);
      func_0x000103bda584(puVar10,0,lVar12);
      func_0x000107c3ff98(*(undefined8 *)(unaff_x20 + _DAT_112ed32d0));
      func_0x000107c61180();
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar10) + 0x98))();
      lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed32e0) + _DAT_113083898);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar4 = uStack_98;
        func_0x000107c41408(uStack_98);
        func_0x000107c61180();
        puVar5 = &UNK_11057a380;
        func_0x000107c613fc(&UNK_11057a380,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar6 = PTR_PTR_1126abc10;
        func_0x000107c610f8(PTR_PTR_1126abc10);
        pcStack_70 = FUN_1029abe2c;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_11057a398;
        ppuVar7 = &puStack_90;
        puStack_68 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c6157c(puVar5);
        func_0x000107c46410(puVar6);
        func_0x000107c615e8(uVar4);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar10);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(puStack_68);
        func_0x000100e392dc(lVar8);
        func_0x000107c61574(puVar5);
        return puVar6;
      }
      func_0x000100e392dc(lVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c615e8(lVar1);
  }
  return (undefined *)0x0;
}



/* Entry: 1029abbec; end: 1029abc13; -[_TtC16MyReportsFeature23MyReportsViewController loadView] */

void FUN_1029abbec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029ab660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029abc14; end: 1029abcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029abc14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112ed32e8;
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c61170(param_1);
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar2 + 8))();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1029abcb4; end: 1029abd13; -[_TtC16MyReportsFeature23MyReportsViewController initWithNibName:bundle:] */

void FUN_1029abcb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsFeature.MyReportsViewController",0x28,"init(nibName:bundle:)",0x15,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029abce0);
  (*pcVar1)();
}



/* Entry: 1029abd14; end: 1029abdbb; -[_TtC16MyReportsFeature23MyReportsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029abd14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed32b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32c8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed32d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed32e0));
  param_1 = param_1 + _DAT_112ed32e8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029abdbc; end: 1029abddb;  */

void FUN_1029abdbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128782e0);
  return;
}



/* Entry: 1029abddc; end: 1029abdff; -[_TtC16MyReportsFeature23MyReportsViewController defaultProjectNameV2] */

void FUN_1029abddc(void)

{
  func_0x000107c5fadc(0x797465666153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029abe00; end: 1029abe2b; -[_TtC16MyReportsFeature23MyReportsViewController defaultSubProjectName] */

void FUN_1029abe00(void)

{
  func_0x000107c5fadc(0x726f70655220794d,0xea00000000007374);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029abe2c; end: 1029abe4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029abe2c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_112ed32e8;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c61170(lVar1);
      func_0x000107c614f0(lVar2);
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1029abe50; end: 1029abe73;  */

undefined8 FUN_1029abe50(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029abe74; end: 1029abfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029abe74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_12;
  func_0x000107c610f8();
  lVar3 = lVar2 + _DAT_112ed32e8;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(lVar2 + _DAT_112ed32a8) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112ed32b0) = param_2;
  *(undefined8 *)(lVar2 + _DAT_112ed32b8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ed32c0) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112ed32c8) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112ed32d0) = param_6;
  *(undefined8 *)(lVar2 + _DAT_112ed32d8) = param_7;
  *(undefined8 *)(lVar2 + _DAT_112ed32e0) = param_8;
  *(undefined8 *)(lVar3 + 8) = param_11;
  func_0x000107c61604();
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_68 = param_12;
  lStack_70 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_70,puVar1,0,0);
  return;
}



/* Entry: 1029abfd8; end: 1029ac037; -[_TtC16MyReportsFeature26MyReportsPageLaunchHandler init] */

void FUN_1029abfd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsFeature.MyReportsPageLaunchHandler",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ac004);
  (*pcVar1)();
}



/* Entry: 1029ac038; end: 1029ac08f; -[_TtC16MyReportsFeature26MyReportsPageLaunchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ac064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ac068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ac038(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed3318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3320));
  return;
}



/* Entry: 1029ac090; end: 1029ac0af;  */

void FUN_1029ac090(void)

{
  func_0x000107c61168(&PTR_PTR_1128783e0);
  return;
}



/* Entry: 1029ac0b0; end: 1029ac0b7; -[_TtC16MyReportsFeature26MyReportsPageLaunchHandler screen] */

undefined8 FUN_1029ac0b0(void)

{
  return 0x2a;
}



/* Entry: 1029ac0b8; end: 1029ac13f; -[_TtC16MyReportsFeature26MyReportsPageLaunchHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x0001029ac120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ac124) */

void FUN_1029ac0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1029ac27c();
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029ac140; end: 1029ac1c3; -[_TtC16MyReportsFeature26MyReportsPageLaunchHandler myReportsDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001029ac17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ac198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ac180) */
/* WARNING: Removing unreachable block (ram,0x0001029ac19c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ac140(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029ac1c4; end: 1029ac1cb;  */

undefined8 FUN_1029ac1c4(void)

{
  return 1;
}



/* Entry: 1029ac1cc; end: 1029ac26b;  */

void FUN_1029ac1cc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1029ac26c; end: 1029ac27b;  */

void FUN_1029ac26c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1029ac27c; end: 1029ac45f;  */

/* WARNING: Possible PIC construction at 0x0001029ac2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ac3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ac458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ac42c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ac45c) */
/* WARNING: Removing unreachable block (ram,0x0001029ac3ac) */
/* WARNING: Removing unreachable block (ram,0x0001029ac2ec) */
/* WARNING: Removing unreachable block (ram,0x0001029ac2f0) */
/* WARNING: Removing unreachable block (ram,0x0001029ac3e0) */
/* WARNING: Removing unreachable block (ram,0x0001029ac30c) */
/* WARNING: Removing unreachable block (ram,0x0001029ac44c) */
/* WARNING: Removing unreachable block (ram,0x0001029ac340) */
/* WARNING: Removing unreachable block (ram,0x0001029ac430) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ac27c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ed3320);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = (undefined *)(param_1 + _DAT_112ed3318);
    func_0x000107c61618();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar1);
  }
  FUN_1029ac460();
  puVar2 = &UNK_11057a440;
  func_0x000107c613f8(&UNK_11057a440,lVar1,0,0);
  func_0x000107c5ed2c();
  (**(code **)(param_2 + 0x10))(param_2,puVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1029ac460; end: 1029ac49f;  */

void FUN_1029ac460(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb610;
  func_0x000107c61520(&UNK_10dafb610,&UNK_11057a440);
  puRam0000000112ed3360 = puVar1;
  return;
}



/* Entry: 1029ac4a0; end: 1029ac58f;  */

uint FUN_1029ac4a0(uint *param_1,int param_2)

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



/* Entry: 1029ac590; end: 1029ac5cf;  */

void FUN_1029ac590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb5e8;
  func_0x000107c61520(&UNK_10dafb5e8,&UNK_11057a440);
  puRam0000000112ed3368 = puVar1;
  return;
}



/* Entry: 1029ac5d0; end: 1029ac8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029ac5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_80 [8];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x00010451338c();
  uVar4 = param_1;
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  lVar6 = 0;
  FUN_1029ac090();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112ed3318;
  func_0x000107c61614(lVar7 + _DAT_112ed3318,0);
  func_0x000107c61604(lVar7 + lVar2,lVar3);
  *(undefined8 *)(lVar7 + _DAT_112ed3320) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112ed3328) = param_3;
  *(undefined8 *)(lVar7 + _DAT_112ed3330) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  plVar8 = &lStack_70;
  func_0x000107c61154(plVar8,puVar1);
  func_0x000107c61170(lVar3);
  *(long **)(unaff_x20 + _DAT_112ed3370) = plVar8;
  puVar9 = auStack_80;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar9;
}



/* Entry: 1029ac8b0; end: 1029ac90f; -[_TtC16MyReportsFeature27MyReportsPageLauncherPlugin init] */

void FUN_1029ac8b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsFeature.MyReportsPageLauncherPlugin",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ac8dc);
  (*pcVar1)();
}



/* Entry: 1029ac910; end: 1029ac91f; -[_TtC16MyReportsFeature27MyReportsPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ac910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3370));
  return;
}



/* Entry: 1029ac920; end: 1029ac9af; -[_TtC16MyReportsFeature27MyReportsPageLauncherPlugin handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ac920(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ed3370);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1029ac9b0; end: 1029ac9b3; -[_TtC16MyReportsFeature27MyReportsPageLauncherPlugin setHandlers:] */

void FUN_1029ac9b0(void)

{
  return;
}



/* Entry: 1029ac9b4; end: 1029ac9d3;  */

void FUN_1029ac9b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128784b8);
  return;
}



/* Entry: 1029ac9d4; end: 1029acaef;  */

void FUN_1029ac9d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_11057a4c0;
  func_0x000107c613fc(&UNK_11057a4c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029acaf0,puVar1);
  return;
}



/* Entry: 1029acaf0; end: 1029acaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029acaf0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1029ad1f0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ed33a0) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ed33a8) = 0;
  *(long *)(lVar5 + _DAT_112ed33b0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ed33b8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1029acaf8; end: 1029acb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029acaf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed33a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed33a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed33b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed33b8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029acb74; end: 1029acc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029acb74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ed33a0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ed33a0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112ed2ec8,&UNK_10dafae48);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1029acc4c; end: 1029acec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029acc4c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112ed33a8;
  ppuVar11 = &puStack_80;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112ed33a8);
  puVar10 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c3cf30();
    func_0x000107c61180();
    lVar4 = 0x73676e6974746573;
    func_0x000107c5fadc(0x73676e6974746573,0xee00656c7469745f);
    uVar5 = 0x6f706552794d4353;
    func_0x000107c5fadc(0x6f706552794d4353,0xeb00000000737472);
    uVar6 = 0;
    func_0x000107c5fe40(0);
    lVar7 = lVar4;
    uVar12 = uVar5;
    func_0x0001000f6108(lVar4,uVar5,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029acec4);
      (*pcVar2)();
    }
    lVar4 = lVar7;
    func_0x000107c5faec(lVar7);
    uVar5 = uVar12;
    func_0x000107c61170(lVar7);
    FUN_1029ad234();
    puVar8 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(lVar4,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fadc(lVar7,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c48dac(puVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar7);
    puVar9 = &UNK_11057a508;
    func_0x000107c613fc(&UNK_11057a508,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    puVar10 = PTR_PTR_1126aeae8;
    func_0x000107c610f8();
    pcStack_60 = FUN_1029ad210;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ea3124;
    puStack_68 = &UNK_11057a520;
    puStack_58 = puVar9;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c(puVar9);
    func_0x000107c48560();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar8);
    func_0x000107c60bd0(ppuVar11);
    puVar3 = puStack_58;
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar3);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61170(uVar12);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar10;
}



/* Entry: 1029acec4; end: 1029acfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029acec4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      func_0x000100083b20(&uStack_60);
      lVar1 = param_1;
      func_0x000107c41408(param_1);
      func_0x000107c61180();
      uVar2 = uStack_60;
      func_0x000107c3ed50(uStack_60);
      func_0x000107c61180();
      func_0x000107c61170(uStack_60);
      func_0x000107c615e8(lVar1);
      FUN_1029acb74();
      func_0x000107c42c1c();
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}


