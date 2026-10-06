/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c2fe94; end: 102c300cb;  */

/* WARNING: Possible PIC construction at 0x000102c30000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c30010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c3002c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c3003c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c30058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c300a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c30040) */
/* WARNING: Removing unreachable block (ram,0x000102c30030) */
/* WARNING: Removing unreachable block (ram,0x000102c30014) */
/* WARNING: Removing unreachable block (ram,0x000102c30004) */
/* WARNING: Removing unreachable block (ram,0x000102c300a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2fe94(void)

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
  func_0x000107c4def8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509f8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3d170();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102c2f27c();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102c2f4f4();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102c300cc);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f011d8) = lVar5;
        *(long *)(lVar4 + _DAT_112f011e0) = unaff_x20;
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



/* Entry: 102c300cc; end: 102c300f3; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102c300cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c2fe94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c300f4; end: 102c30137; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_102c300f4(undefined8 param_1)

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



/* Entry: 102c30138; end: 102c303a7;  */

void FUN_102c30138(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0eff910)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010f1006f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0eff8f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000018,0x800000010f100710,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000031;
            if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0eff8d0)) &&
               (func_0x000107c605b8(0xd000000000000031,0x800000010f100730,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ActiveOperaSessionScopeGraphBridge/SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x5c,2,0x39,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102c303a8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5220c();
            goto LAB_102c301c4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57fa0();
        goto LAB_102c301c4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57014();
  }
LAB_102c301c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c303a8; end: 102c30453; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102c303a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c30138(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c30454; end: 102c304d7; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30454(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f012b8,0);
  *(undefined8 *)(param_1 + _DAT_112f012c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f012c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f012d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f012d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c304d8; end: 102c3050b;  */

void FUN_102c304d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c3050c; end: 102c30573; -[SCActiveOperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c30538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c30558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c3053c) */
/* WARNING: Removing unreachable block (ram,0x000102c3055c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3050c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f012b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f012c0));
  return;
}



/* Entry: 102c30574; end: 102c30593;  */

void FUN_102c30574(void)

{
  func_0x000107c61168(&PTR_PTR_112898c68);
  return;
}



/* Entry: 102c30594; end: 102c305db; -[SCActiveOperaSessionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f01308;
  func_0x000107c61428(param_1 + _DAT_112f01308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c305dc; end: 102c30633; -[SCActiveOperaSessionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c305dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f01308;
  func_0x000107c61428(param_1 + _DAT_112f01308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c30634; end: 102c3070b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30634(undefined8 param_1,long param_2)

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
    FUN_102c2f4d4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f01210) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c3070c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f01218);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f01310);
    *(long **)(unaff_x20 + _DAT_112f01310) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102c3070c; end: 102c30733; -[SCActiveOperaSessionScopedServicesSaberEntryPoint begin] */

void FUN_102c3070c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c30634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c30734; end: 102c308ab;  */

/* WARNING: Possible PIC construction at 0x000102c3079c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c30834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c307a0) */
/* WARNING: Removing unreachable block (ram,0x000102c30838) */
/* WARNING: Removing unreachable block (ram,0x000102c30850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30734(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f01310);
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



/* Entry: 102c308ac; end: 102c308b3;  */

void FUN_102c308ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c308b4; end: 102c308e7; -[SCActiveOperaSessionScopedServicesSaberEntryPoint end] */

void FUN_102c308b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c30734();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c308e8; end: 102c30a07;  */

void FUN_102c308e8(long param_1,long param_2,long param_3)

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
                        "ActiveOperaSessionScopeGraphBridge/SCActiveOperaSessionScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c30a08);
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



/* Entry: 102c30a08; end: 102c30ab3; -[SCActiveOperaSessionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c30a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c308e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c30ab4; end: 102c30b13; -[SCActiveOperaSessionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30ab4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f01308,0);
  *(undefined8 *)(param_1 + _DAT_112f01310) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c30b14; end: 102c30b47;  */

void FUN_102c30b14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c30b48; end: 102c30b7f; -[SCActiveOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30b48(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f01308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f01310));
  return;
}



/* Entry: 102c30b80; end: 102c30b9f;  */

void FUN_102c30b80(void)

{
  func_0x000107c61168(&PTR_PTR_112898d40);
  return;
}



/* Entry: 102c30ba0; end: 102c30bb7;  */

bool FUN_102c30ba0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102c30bb8; end: 102c30bf7;  */

void FUN_102c30bb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f01340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db34c10;
  func_0x000107c61520(&UNK_10db34c10,&UNK_1105b5610);
  puRam0000000112f01340 = puVar1;
  return;
}



/* Entry: 102c30bf8; end: 102c30ca3;  */

void FUN_102c30bf8(void)

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



/* Entry: 102c30ca4; end: 102c30e2b;  */

void FUN_102c30ca4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102c30e2c; end: 102c30e8f;  */

undefined8
FUN_102c30e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100948368(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102c30e90; end: 102c30ebb;  */

void FUN_102c30e90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c30ebc; end: 102c30edb;  */

void FUN_102c30ebc(void)

{
  func_0x0001009486b0();
  return;
}



/* Entry: 102c30edc; end: 102c30ee3;  */

undefined8 FUN_102c30edc(void)

{
  return 0;
}



/* Entry: 102c30ee4; end: 102c30f7b;  */

undefined8 FUN_102c30ee4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f01348;
  func_0x0001000285a8(0x112f01348,&UNK_10db34d40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102c30f7c; end: 102c30fa3;  */

undefined8 * FUN_102c30f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102c30fa4; end: 102c30ff7;  */

undefined8 FUN_102c30fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c30ff8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102c30ff8; end: 102c31253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c30ff8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uVar3;
  
  plVar8 = &lStack_f0;
  *(long *)(unaff_x20 + 0x18) = param_2;
  uVar9 = *(undefined8 *)(param_2 + _DAT_113092298);
  uVar3 = uVar9;
  func_0x000107c614f0();
  uVar2 = (uint)uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar9);
  func_0x000100948648();
  func_0x000107c615e8(uVar9);
  if ((uVar2 & 0xff) == 2) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_113078b60);
    lVar4 = 0;
    FUN_102c31958();
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    lVar5 = lVar4;
    func_0x000107c610f8();
    lVar7 = _DAT_112f01570;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    uVar3 = uVar9;
    func_0x000107c615f0();
    func_0x0001000c6580();
    *(undefined8 *)(lVar5 + lVar7) = uVar3;
    *(undefined1 *)(lVar5 + _DAT_112f01540) = 2;
    *(undefined8 *)(lVar5 + _DAT_112f01548) = uVar9;
    *(undefined8 *)(lVar5 + _DAT_112f01550) = 0;
    *(undefined8 *)(lVar5 + _DAT_112f01558) = 0;
    *(undefined8 *)(lVar5 + _DAT_112f01560) = param_3;
    FUN_102c30ee4(&uStack_90,auStack_e0);
    if (lStack_c8 == 0) {
      func_0x000107c615f0(uVar9);
      uVar3 = param_3;
      func_0x000107c61174();
      func_0x000107c5dbd4();
      func_0x000107c61180();
      lVar6 = 0;
      func_0x000102c31664();
      lVar7 = lVar6;
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      ppuStack_98 = &PTR_DAT_1105b5708;
      lStack_b8 = lVar7;
      lStack_a0 = lVar6;
      if (lStack_c8 != 0) {
        func_0x000102c30f34(auStack_e0);
      }
    }
    else {
      FUN_102c30f7c(auStack_e0,&lStack_b8);
      func_0x000107c615f0(uVar9);
      func_0x000107c61174(param_3);
    }
    plVar1 = (long *)(lVar5 + _DAT_112f01568);
    plVar1[4] = (long)ppuStack_98;
    plVar1[1] = lStack_b0;
    *plVar1 = lStack_b8;
    plVar1[3] = lStack_a0;
    plVar1[2] = lStack_a8;
    lStack_f0 = lVar5;
    lStack_e8 = lVar4;
    func_0x000107c61154(&lStack_f0,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000102c30f34(&uStack_90);
  }
  else {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    plVar8 = (long *)0x0;
  }
  *(long **)(unaff_x20 + 0x10) = plVar8;
  return;
}



/* Entry: 102c31254; end: 102c313f3;  */

/* WARNING: Possible PIC construction at 0x000102c31340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c31254(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + _DAT_112f01540) != '\0') {
      if (*(char *)(lVar6 + _DAT_112f01540) == '\x01') {
        plVar5 = *(long **)(lVar6 + _DAT_112f01550);
        if (plVar5 != (long *)0x0) {
          lVar7 = *(long *)(lVar6 + _DAT_112f01558);
          if (lVar7 != 0) {
            puVar1 = &UNK_1105b56d0;
            func_0x000107c613fc(&UNK_1105b56d0,0x18,7);
            func_0x000107c61614(puVar1 + 0x10,lVar6);
            pcVar8 = *(code **)(*plVar5 + 0x60);
            func_0x000107c6157c(plVar5);
            func_0x000107c6157c(lVar7);
            uVar2 = 0x102c31448;
            puVar4 = puVar1;
            (*pcVar8)(0x102c31448);
            func_0x000107c61574(puVar1);
            uVar3 = uVar2;
            func_0x000107c614f0(uVar2);
            (**(code **)(puVar4 + 0x10))(*(undefined8 *)(lVar6 + _DAT_112f01570),uVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
            return;
          }
        }
      }
      else {
        FUN_102c316a8();
      }
    }
  }
  return;
}



/* Entry: 102c313f4; end: 102c3141f;  */

void FUN_102c313f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c31420; end: 102c3143f;  */

void FUN_102c31420(void)

{
  FUN_102c31254();
  return;
}



/* Entry: 102c31440; end: 102c31457;  */

undefined8 FUN_102c31440(void)

{
  return 0;
}



/* Entry: 102c31458; end: 102c31477;  */

void FUN_102c31458(void)

{
  func_0x000107c61168(&PTR_PTR_112f01438);
  return;
}



/* Entry: 102c31478; end: 102c3148b;  */

void FUN_102c31478(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    ppuVar1 = &puStack_50;
    pcStack_30 = FUN_102c3148c;
    uStack_28 = 0;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_100f1c768;
    puStack_38 = &UNK_1105b5720;
    func_0x000107c60bc4(&puStack_50);
    func_0x000107c440d8(param_1);
    func_0x000107c60bd0(ppuVar1);
  }
  return;
}



/* Entry: 102c3148c; end: 102c31523;  */

/* WARNING: Possible PIC construction at 0x000102c31500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31504) */

void FUN_102c3148c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dedc8;
    func_0x000107c61168(PTR_PTR_1126dedc8);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1,param_2,param_1);
    func_0x000107c61180();
    func_0x000107c4c1cc();
    func_0x000107c61180();
    func_0x000107c4dd1c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 102c31524; end: 102c31537;  */

void FUN_102c31524(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    ppuVar1 = &puStack_50;
    pcStack_30 = FUN_102c315a8;
    uStack_28 = 0;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_100f1c768;
    puStack_38 = &UNK_1105b5748;
    func_0x000107c60bc4(&puStack_50);
    func_0x000107c440d8(param_1);
    func_0x000107c60bd0(ppuVar1);
  }
  return;
}



/* Entry: 102c31538; end: 102c315a7;  */

void FUN_102c31538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    ppuVar1 = &puStack_50;
    uStack_28 = 0;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_100f1c768;
    uStack_38 = param_3;
    uStack_30 = param_2;
    func_0x000107c60bc4(&puStack_50);
    func_0x000107c440d8(param_1);
    func_0x000107c60bd0(ppuVar1);
  }
  return;
}



/* Entry: 102c315a8; end: 102c3163f;  */

/* WARNING: Possible PIC construction at 0x000102c3161c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31620) */

void FUN_102c315a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dedc8;
    func_0x000107c61168(PTR_PTR_1126dedc8);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1,param_2,param_1);
    func_0x000107c61180();
    func_0x000107c4c1cc();
    func_0x000107c61180();
    func_0x000107c4dd18();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 102c31640; end: 102c31683;  */

void FUN_102c31640(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c31684; end: 102c316a7;  */

void FUN_102c31684(long param_1,long param_2)

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



/* Entry: 102c316a8; end: 102c3176f;  */

/* WARNING: Possible PIC construction at 0x000102c31730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31734) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c316a8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bba0a4();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bba06c();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  if (*(long *)(unaff_x20 + _DAT_112f01548) == 0) {
    func_0x000107c61434();
  }
  else {
    func_0x000107c61434();
    func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102c31770; end: 102c31797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c31770(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long alStack_58 [3];
  long lStack_40;
  
  ppuVar2 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c30ee4(param_2 + _DAT_112f01568,alStack_58);
    func_0x000107c61170(param_2);
    if (lStack_40 == 0) {
      func_0x000102c30f34(alStack_58);
    }
    else {
      plVar1 = alStack_58;
      func_0x0001000a8868();
      uVar3 = *(undefined8 *)(*plVar1 + 0x10);
      pcStack_80 = FUN_102c31478;
      uStack_78 = 0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f2343c;
      puStack_88 = &UNK_1105b57e8;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c4db94(uVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x0001000834e4(alStack_58);
    }
  }
  return;
}



/* Entry: 102c31798; end: 102c3187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c31798(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long alStack_58 [3];
  long lStack_40;
  
  ppuVar2 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c30ee4(param_2 + _DAT_112f01568,alStack_58);
    func_0x000107c61170(param_2);
    if (lStack_40 == 0) {
      func_0x000102c30f34(alStack_58);
    }
    else {
      plVar1 = alStack_58;
      func_0x0001000a8868();
      uVar3 = *(undefined8 *)(*plVar1 + 0x10);
      uStack_78 = 0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f2343c;
      uStack_88 = param_4;
      uStack_80 = param_3;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c4db94(uVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x0001000834e4(alStack_58);
    }
  }
  return;
}



/* Entry: 102c31880; end: 102c318df; -[_TtC25AdMultiSegmentUserSession33AdMultiSegmentUserSessionWorkflow init] */

void FUN_102c31880(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdMultiSegmentUserSession.AdMultiSegmentUserSessionWorkflow",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c318ac);
  (*pcVar1)();
}



/* Entry: 102c318e0; end: 102c31957; -[_TtC25AdMultiSegmentUserSession33AdMultiSegmentUserSessionWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c3190c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c318e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f01548));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f01550));
  return;
}



/* Entry: 102c31958; end: 102c31977;  */

void FUN_102c31958(void)

{
  func_0x000107c61168(&PTR_PTR_112898e00);
  return;
}



/* Entry: 102c31978; end: 102c31a2b; -[_TtC25AdMultiSegmentUserSession33AdMultiSegmentUserSessionWorkflow operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c31a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c31a14) */

void FUN_102c31978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c31a2c(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c31a2c; end: 102c31bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c31a2c(long *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long lStack_40;
  
  plVar3 = param_1;
  func_0x000103bba0a4();
  plVar1 = (long *)*plVar3;
  if ((plVar1 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar1,plVar3[1],param_1,param_2,0), ((ulong)plVar1 & 1) != 0)) {
    FUN_102c30ee4(unaff_x20 + _DAT_112f01568,alStack_58);
    if (lStack_40 == 0) goto LAB_102c31b9c;
    plVar3 = alStack_58;
    func_0x0001000a8868();
    uVar4 = *(undefined8 *)(*plVar3 + 0x10);
    pcStack_68 = FUN_102c31478;
    puStack_70 = &UNK_1105b5798;
  }
  else {
    func_0x000103bba06c();
    plVar3 = (long *)*plVar1;
    if ((plVar3 != param_1 || plVar1[1] != param_2) &&
       (func_0x000107c605b8(plVar3,plVar1[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
      return;
    }
    FUN_102c30ee4(unaff_x20 + _DAT_112f01568,alStack_58);
    if (lStack_40 == 0) {
LAB_102c31b9c:
      func_0x000102c30f34(alStack_58);
      return;
    }
    plVar3 = alStack_58;
    func_0x0001000a8868();
    uVar4 = *(undefined8 *)(*plVar3 + 0x10);
    pcStack_68 = FUN_102c31524;
    puStack_70 = &UNK_1105b5770;
  }
  uStack_80 = 0x42000000;
  uStack_60 = 0;
  puStack_78 = &UNK_100f2343c;
  ppuVar2 = &puStack_88;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c4db94(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000834e4(alStack_58);
  return;
}



/* Entry: 102c31bb8; end: 102c31beb;  */

void FUN_102c31bb8(long param_1,long param_2)

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



/* Entry: 102c31bec; end: 102c31d2b;  */

undefined8 FUN_102c31bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102c31d78(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102c31d2c; end: 102c31d4f;  */

void FUN_102c31d2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c31d50; end: 102c31d6f;  */

void FUN_102c31d50(void)

{
  func_0x000102c31c90();
  return;
}



/* Entry: 102c31d70; end: 102c31d77;  */

undefined8 FUN_102c31d70(void)

{
  return 0;
}



/* Entry: 102c31d78; end: 102c31e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c31d78(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113078b58);
  uVar3 = *(undefined8 *)(param_1 + _DAT_113078b50);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113078b60);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11304f660);
  lVar1 = 0;
  func_0x000102c31e80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(long *)(unaff_x20 + 0x10) = lVar1;
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar3);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(uVar5);
  return;
}



/* Entry: 102c31e24; end: 102c31e43;  */

void FUN_102c31e24(void)

{
  func_0x000107c61168(&PTR_PTR_112f015e0);
  return;
}



/* Entry: 102c31e44; end: 102c31e9f;  */

void FUN_102c31e44(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c31ea0; end: 102c3218b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c31ea0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_120 [4];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  lVar2 = param_1;
  alStack_120[3] = param_4;
  uStack_100 = param_3;
  lStack_f8 = param_2;
  func_0x000103b97f74();
  uVar7 = *(undefined8 *)(param_1 + _DAT_113078cc8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113078cf0);
  alStack_120[1] = lVar2;
  func_0x0001000285a8(0x112f016f8,&UNK_10db34ed0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_112ff2410);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  alStack_120[2] = param_1;
  func_0x000107c61174();
  uVar3 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000d224c(alStack_90);
  lVar4 = 0;
  func_0x000102c33788();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(long *)(lVar5 + 0x10) = alStack_90[0];
  uVar9 = 0;
  func_0x00010036def4();
  ppuStack_70 = &PTR_DAT_1105b6168;
  ppuStack_98 = &PTR_DAT_1105b59f0;
  alStack_b8[0] = lVar5;
  lStack_a0 = lVar4;
  alStack_90[0] = param_1;
  uStack_78 = uVar9;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_b8,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  lVar2 = alStack_120[1];
  auStack_e0[0] = *puVar10;
  ppuStack_c0 = &PTR_DAT_1105b59f0;
  *(long *)(unaff_x20 + _DAT_112f01700) = alStack_120[1];
  *(undefined8 *)(unaff_x20 + _DAT_112f01708) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112f01710) = uVar8;
  lStack_c8 = lVar4;
  FUN_102c3218c(alStack_90,unaff_x20 + _DAT_112f01718);
  *(undefined8 *)(unaff_x20 + _DAT_112f01720) = uVar3;
  FUN_102c3218c(auStack_e0,unaff_x20 + _DAT_112f01728);
  lVar4 = alStack_120[3];
  *(long *)(unaff_x20 + _DAT_112f01730) = alStack_120[3];
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(lVar5);
  func_0x000107c61174(lVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(lVar4);
  puVar6 = auStack_f0;
  func_0x000107c61154(puVar6,puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(alStack_120[2]);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x0001000834e4(alStack_90);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(alStack_b8);
  return puVar6;
}



/* Entry: 102c3218c; end: 102c321cf;  */

long FUN_102c3218c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c321d0; end: 102c3222f; -[_TtC29SCAdOperaPluginImplementation28AdOperaFeaturePlugInWorkflow init] */

void FUN_102c321d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaPluginImplementation.AdOperaFeaturePlugInWorkflow",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c321fc);
  (*pcVar1)();
}



/* Entry: 102c32230; end: 102c322b7; -[_TtC29SCAdOperaPluginImplementation28AdOperaFeaturePlugInWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c3224c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c3226c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c32250) */
/* WARNING: Removing unreachable block (ram,0x000102c32270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c32230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f01700));
  return;
}



/* Entry: 102c322b8; end: 102c32333; -[_TtC29SCAdOperaPluginImplementation28AdOperaFeaturePlugInWorkflow registerPlaylistPluginsWithContext:] */

void FUN_102c322b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_102c324b4();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450)
  ;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c32334; end: 102c324b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c32334(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f01700);
  lVar4 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      func_0x000107c61170(lVar1);
      lVar4 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112ff23c8);
      lVar4 = ((undefined8 *)(lVar1 + _DAT_112ff23d0))[1];
      if (lVar4 == 0) {
        func_0x000107c61174(uVar2);
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + _DAT_112ff23d0);
        func_0x000107c61174(uVar2);
        func_0x000107c61434(lVar4);
        func_0x000107c5fadc(uVar3,lVar4);
        func_0x000107c6142c(lVar4);
      }
      lVar4 = lStack_58;
      func_0x000107c40bac(lStack_58);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
  }
  return lVar4;
}



/* Entry: 102c324b4; end: 102c32903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c324b4(void)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long alStack_90 [4];
  ulong uStack_70;
  long lStack_68;
  
  plVar5 = (long *)(unaff_x20 + _DAT_112f01728);
  plVar3 = plVar5;
  func_0x0001000a8868(plVar5,plVar5[3]);
  lVar4 = *(long *)(*plVar3 + 0x10);
  if (lVar4 == 0) {
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  func_0x000107c42550();
  lVar16 = _DAT_113078da8;
  if ((int)lVar4 == 0) {
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  lVar18 = *(long *)(unaff_x20 + _DAT_112f01708);
  uVar17 = *(undefined8 *)(lVar18 + _DAT_113078da8);
  func_0x0001000a8868(plVar5,plVar5[3]);
  FUN_102c335bc();
  lVar11 = plVar5[2];
  lVar4 = 0x20;
  while (lVar11 != 0) {
    piVar1 = (int *)((long)plVar5 + lVar4);
    lVar4 = lVar4 + 8;
    lVar11 = lVar11 + -1;
    if (*piVar1 == (int)uVar17) {
      func_0x000107c6142c();
      return PTR___swiftEmptySetSingleton_11034f1d8;
    }
  }
  func_0x000107c6142c();
  lVar4 = unaff_x20 + _DAT_112f01718;
  uVar14 = *(ulong *)(lVar4 + 0x18);
  lVar11 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar14);
  (**(code **)(lVar11 + 0x10))(uVar14,lVar11);
  if (uVar14 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c();
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
    func_0x000107c6142c();
  }
  if (uVar13 != 0) {
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  uVar13 = *(long *)(lVar18 + lVar16) + 1;
  if (uVar13 < 0x29 && (1L << (uVar13 & 0x3f) & 0x100a0001001U) != 0) {
    uVar14 = 0;
  }
  else {
    FUN_102c32334();
  }
  func_0x0001000d224c(&lStack_c0);
  lVar4 = lStack_c0;
  if (lStack_c0 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = lStack_c0;
    func_0x000107c40920();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
  }
  uStack_70 = uVar14;
  lStack_68 = lVar16;
  func_0x000107c615f0(lVar16);
  func_0x000107c615f0(uVar14);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102c32694:
  lVar11 = lVar4 + 4;
  do {
    lVar4 = alStack_90[lVar11];
    if (lVar4 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
      lVar18 = lVar4;
      func_0x000107c6148c(lVar4,puVar6);
      if (lVar18 != 0) break;
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 6) goto LAB_102c32788;
  } while( true );
  func_0x000107c615f0(lVar4);
  puVar6 = puVar10;
  func_0x000107c61550();
  if ((((int)puVar6 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar6 = puVar10;
      }
      func_0x000107c60480(puVar6);
    }
    puVar7 = (undefined *)0x0;
    func_0x000102c3ada8(0,puVar6 + 1,1,puVar10);
    puVar10 = puVar7;
  }
  uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
  uVar13 = *(ulong *)(uVar12 + 0x10);
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar13) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x000102c3ada8(puVar6,uVar13 + 1,1,puVar10);
    uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
    puVar10 = puVar6;
  }
  lVar4 = lVar11 + -3;
  *(ulong *)(uVar12 + 0x10) = uVar13 + 1;
  *(long *)(uVar12 + uVar13 * 8 + 0x20) = lVar18;
  if (lVar11 == 5) {
LAB_102c32788:
    uVar17 = 0x112f01760;
    func_0x0001000285a8(0x112f01760,&UNK_10db34f20);
    func_0x000107c61408(&uStack_70,2,uVar17);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar6 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c6142c(puVar10);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_98 = puVar15;
      func_0x0001007bbbdc(0,(ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c32904);
        (*pcVar2)();
      }
      puVar7 = (undefined *)0x0;
      do {
        puVar15 = puStack_98;
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          puVar8 = *(undefined **)(puVar10 + (long)puVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar7;
          func_0x0001020f3928(puVar7,puVar10);
        }
        uVar9 = 0;
        puStack_c8 = puVar8;
        func_0x0001007bbbf8(0);
        uVar17 = uVar9;
        func_0x0001007bbc3c();
        func_0x000107c602d4(&lStack_c0,&puStack_c8,uVar9,uVar17);
        uVar13 = *(ulong *)(puVar15 + 0x10);
        puStack_98 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar13) {
          func_0x0001007bbbdc(1 < *(ulong *)(puVar15 + 0x18),uVar13 + 1,1);
        }
        puVar15 = puStack_98;
        puVar7 = puVar7 + 1;
        *(ulong *)(puStack_98 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puStack_98 + uVar13 * 0x28 + 0x40) = uStack_a0;
        *(undefined8 *)(puStack_98 + uVar13 * 0x28 + 0x28) = uStack_b8;
        *(long *)(puStack_98 + uVar13 * 0x28 + 0x20) = lStack_c0;
        *(undefined8 *)(puStack_98 + uVar13 * 0x28 + 0x38) = uStack_a8;
        *(undefined8 *)(puStack_98 + uVar13 * 0x28 + 0x30) = uStack_b0;
      } while (puVar6 != puVar7);
      func_0x000107c6142c(puVar10);
    }
    puVar10 = puVar15;
    func_0x0001007bbc80(puVar15);
    func_0x000107c615e8(lVar16);
    func_0x000107c615e8(uVar14);
    func_0x000107c6142c(puVar15);
    return puVar10;
  }
  goto LAB_102c32694;
}



/* Entry: 102c32904; end: 102c32923;  */

void FUN_102c32904(void)

{
  func_0x000107c61168(&PTR_PTR_112898ef0);
  return;
}



/* Entry: 102c32924; end: 102c331df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c32924(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_150 [3];
  undefined1 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  uStack_128 = param_8;
  uStack_120 = param_5;
  uStack_110 = param_1;
  lStack_f8 = param_6;
  func_0x000107c613fc();
  uVar14 = *(undefined8 *)(param_4 + _DAT_11304a478);
  lStack_118 = param_4;
  lStack_100 = unaff_x20;
  func_0x000107c6157c(uVar14);
  func_0x0001000d224c(&lStack_90);
  func_0x000107c61574(uVar14);
  lVar2 = lStack_90;
  lVar11 = _DAT_113078cc8;
  uVar14 = *(undefined8 *)(*(long *)(param_2 + _DAT_113078cc8) + _DAT_113078da8);
  lStack_108 = param_7;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_7 != 0) {
    uVar15 = *(undefined8 *)(*(long *)(param_2 + _DAT_113078cf0) + _DAT_1130790c0);
    lVar4 = 0;
    func_0x000102c33808();
    lVar5 = lVar4;
    func_0x000107c613fc();
    *(long *)(lVar5 + 0x10) = param_7;
    *(undefined8 *)(lVar5 + 0x18) = uVar15;
    *(undefined8 *)(lVar5 + 0x20) = uVar14;
    *(long *)(lVar5 + 0x28) = lStack_90;
    *(undefined8 *)(lVar5 + 0x30) = uStack_88;
    uVar14 = *(undefined8 *)(param_2 + lVar11);
    func_0x0001000285a8(0x112f016f8,&UNK_10db34ed0);
    uVar15 = *(undefined8 *)(param_3 + _DAT_112ff2410);
    lStack_130 = param_3;
    func_0x000107c615f0(lStack_90);
    func_0x000107c61174();
    alStack_150[1] = uVar14;
    func_0x000107c61174();
    alStack_150[2] = param_2;
    func_0x000107c61174();
    uVar6 = uVar15;
    func_0x0001000bda74();
    func_0x000107c61170(uVar15);
    func_0x0001000285a8(0x112f01768,&UNK_10db34f28);
    uVar14 = *(undefined8 *)(lStack_f8 + _DAT_11306ce28);
    func_0x000107c61174();
    uVar7 = uVar14;
    func_0x0001000bda74();
    func_0x000107c61170(uVar14);
    puVar8 = &UNK_1105b5990;
    func_0x000107c613fc(&UNK_1105b5990,0x20,7);
    *(long *)(puVar8 + 0x10) = lStack_90;
    *(undefined8 *)(puVar8 + 0x18) = uStack_88;
    uVar14 = 0;
    func_0x00010036def4();
    ppuStack_70 = &PTR_DAT_1105b6168;
    ppuStack_98 = &PTR_DAT_1105b5a08;
    lVar9 = 0;
    alStack_b8[0] = lVar5;
    lStack_a0 = lVar4;
    lStack_90 = param_2;
    uStack_78 = uVar14;
    FUN_102c3a260();
    lVar10 = lVar9;
    func_0x000107c610f8();
    func_0x0001000c6518(alStack_b8,lVar4);
    puStack_138 = (undefined1 *)alStack_150;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    puVar13 = (undefined8 *)((long)alStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar13);
    lVar11 = alStack_150[1];
    auStack_e0[0] = *puVar13;
    ppuStack_c0 = &PTR_DAT_1105b5a08;
    *(long *)(lVar10 + _DAT_112f02420) = alStack_150[1];
    lStack_c8 = lVar4;
    FUN_102c33574(&lStack_90,lVar10 + _DAT_112f02428);
    *(undefined8 *)(lVar10 + _DAT_112f02430) = uVar6;
    *(undefined8 *)(lVar10 + _DAT_112f02438) = uVar7;
    FUN_102c33574(auStack_e0,lVar10 + _DAT_112f02440);
    uVar15 = uStack_120;
    uVar14 = uStack_128;
    puVar13 = (undefined8 *)(lVar10 + _DAT_112f02458);
    *puVar13 = FUN_102c333a8;
    puVar13[1] = puVar8;
    alStack_150[0] = lVar2;
    *(undefined8 *)(lVar10 + _DAT_112f02448) = uStack_128;
    *(undefined8 *)(lVar10 + _DAT_112f02450) = uStack_120;
    puVar1 = PTR_s_init_1125d9248;
    lStack_f0 = lVar10;
    lStack_e8 = lVar9;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(lVar11);
    func_0x000107c6157c(lVar5);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(puVar8);
    func_0x000107c61174(uVar14);
    func_0x000107c61174(uVar15);
    plVar12 = &lStack_f0;
    func_0x000107c61154(plVar12,puVar1);
    func_0x000107c61170(lVar11);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(alStack_150[2]);
    func_0x000107c61574(lVar5);
    func_0x000107c615e8(alStack_150[0]);
    func_0x000107c61170(lStack_118);
    func_0x000107c61170(lStack_130);
    func_0x000107c61170(lStack_f8);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lStack_108);
    func_0x0001000834e4(&lStack_90);
    func_0x0001000834e4(auStack_e0);
    func_0x0001000834e4(alStack_b8);
    *(long **)(lStack_100 + 0x10) = plVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c32d8c);
  (*pcVar3)();
}



/* Entry: 102c331e0; end: 102c333a7;  */

undefined1  [16] FUN_102c331e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long alStack_c0 [4];
  undefined **ppuStack_a0;
  
  uVar1 = 0;
  func_0x000102c354e4(0);
  func_0x000107c61534();
  FUN_102c35504();
  lVar2 = 0;
  func_0x000102c34948();
  lVar3 = lVar2;
  func_0x000107c613fc();
  lVar4 = lVar3;
  FUN_102c3541c();
  *(long *)(lVar3 + 0x10) = lVar4;
  func_0x000107c614f0(param_2);
  if (lRam0000000112f01b40 != -1) {
    func_0x000107c61568(0x112f01b40,FUN_102c34860);
  }
  (**(code **)(param_3 + 8))
            (alStack_c0,0x113804f00,&UNK_1107386a0,&PTR_DAT_11304a5d0,param_2,param_3);
  lVar4 = alStack_c0[0];
  func_0x000100403a6c();
  func_0x000107c6142c(alStack_c0[0]);
  *(long *)(lVar3 + 0x18) = lVar4;
  ppuStack_a0 = &PTR_DAT_1105b5a38;
  uVar5 = 0;
  alStack_c0[0] = lVar3;
  alStack_c0[3] = lVar2;
  FUN_102c339a8(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_c0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar6 = *puVar7;
  func_0x000107c6157c(lVar3);
  func_0x000107c615f0(param_1);
  FUN_102c33444(uVar6,param_1,uVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(alStack_c0);
  auVar8._8_8_ = &PTR_DAT_1105b5a18;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 102c333a8; end: 102c333b7;  */

undefined1  [16] FUN_102c333a8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long alStack_c0 [4];
  undefined **ppuStack_a0;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar1 = 0;
  func_0x000102c354e4(0);
  func_0x000107c61534();
  FUN_102c35504();
  lVar2 = 0;
  func_0x000102c34948();
  lVar3 = lVar2;
  func_0x000107c613fc();
  lVar4 = lVar3;
  FUN_102c3541c();
  *(long *)(lVar3 + 0x10) = lVar4;
  func_0x000107c614f0(uVar6);
  if (lRam0000000112f01b40 != -1) {
    func_0x000107c61568(0x112f01b40,FUN_102c34860);
  }
  (**(code **)(lVar5 + 8))(alStack_c0,0x113804f00,&UNK_1107386a0,&PTR_DAT_11304a5d0,uVar6,lVar5);
  lVar5 = alStack_c0[0];
  func_0x000100403a6c();
  func_0x000107c6142c(alStack_c0[0]);
  *(long *)(lVar3 + 0x18) = lVar5;
  ppuStack_a0 = &PTR_DAT_1105b5a38;
  uVar6 = 0;
  alStack_c0[0] = lVar3;
  alStack_c0[3] = lVar2;
  FUN_102c339a8(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_c0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar7 = *puVar8;
  func_0x000107c6157c(lVar3);
  func_0x000107c615f0(param_1);
  FUN_102c33444(uVar7,param_1,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(alStack_c0);
  auVar9._8_8_ = &PTR_DAT_1105b5a18;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 102c333b8; end: 102c333f7;  */

undefined8 FUN_102c333b8(void)

{
  long unaff_x20;
  
  func_0x000107c427dc(*(undefined8 *)(unaff_x20 + 0x10));
  return 0;
}



/* Entry: 102c333f8; end: 102c33403;  */

void FUN_102c333f8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(*unaff_x20 + 0x10),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 102c33404; end: 102c33443;  */

undefined8 FUN_102c33404(void)

{
  long *unaff_x20;
  
  func_0x000107c427dc(*(undefined8 *)(*unaff_x20 + 0x10));
  return 0;
}



/* Entry: 102c33444; end: 102c33573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c33444(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  plVar7 = &lStack_80;
  lVar2 = param_3;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000102c34948();
  lVar1 = _DAT_112f01a40;
  ppuStack_48 = &PTR_DAT_1105b5a38;
  uVar4 = 0;
  auStack_68[0] = param_1;
  uStack_50 = uVar3;
  func_0x000102c35eec();
  func_0x000107c613fc();
  FUN_102c35f0c();
  *(undefined8 *)(param_3 + lVar1) = uVar4;
  *(undefined8 *)(param_3 + _DAT_112f01a48) = 0;
  lVar1 = _DAT_112f01a50;
  puVar5 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  puStack_70 = puVar5;
  func_0x0001000285a8(0x112f01818,&UNK_10db34f68);
  func_0x000107c613fc();
  ppuVar6 = &puStack_70;
  func_0x00010006c248();
  *(undefined ***)(param_3 + lVar1) = ppuVar6;
  FUN_102c33574(auStack_68,param_3 + _DAT_112f01a58);
  *(undefined8 *)(param_3 + _DAT_112f01a60) = param_2;
  lStack_80 = param_3;
  lStack_78 = lVar2;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_68);
  return (undefined1 *)plVar7;
}



/* Entry: 102c33574; end: 102c335b7;  */

long FUN_102c33574(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c335b8; end: 102c335bb;  */

undefined1  [16] FUN_102c335b8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long alStack_c0 [4];
  undefined **ppuStack_a0;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar1 = 0;
  func_0x000102c354e4(0);
  func_0x000107c61534();
  FUN_102c35504();
  lVar2 = 0;
  func_0x000102c34948();
  lVar3 = lVar2;
  func_0x000107c613fc();
  lVar4 = lVar3;
  FUN_102c3541c();
  *(long *)(lVar3 + 0x10) = lVar4;
  func_0x000107c614f0(uVar6);
  if (lRam0000000112f01b40 != -1) {
    func_0x000107c61568(0x112f01b40,FUN_102c34860);
  }
  (**(code **)(lVar5 + 8))(alStack_c0,0x113804f00,&UNK_1107386a0,&PTR_DAT_11304a5d0,uVar6,lVar5);
  lVar5 = alStack_c0[0];
  func_0x000100403a6c();
  func_0x000107c6142c(alStack_c0[0]);
  *(long *)(lVar3 + 0x18) = lVar5;
  ppuStack_a0 = &PTR_DAT_1105b5a38;
  uVar6 = 0;
  alStack_c0[0] = lVar3;
  alStack_c0[3] = lVar2;
  FUN_102c339a8(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_c0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar7 = *puVar8;
  func_0x000107c6157c(lVar3);
  func_0x000107c615f0(param_1);
  FUN_102c33444(uVar7,param_1,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(alStack_c0);
  auVar9._8_8_ = &PTR_DAT_1105b5a18;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 102c335bc; end: 102c33763;  */

undefined * FUN_102c335bc(undefined8 param_1,undefined *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c3d37c();
    func_0x000107c61180();
    param_2 = (undefined *)0x0;
    func_0x0001002ed07c();
    puVar4 = puVar3;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar3);
  }
  puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar9 = *(undefined **)(puVar3 + 0x10);
  }
  else {
    puVar9 = puVar3;
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar9 = puVar4;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = (undefined *)0x0;
  while( true ) {
    if (puVar9 == puVar7) {
      func_0x000107c6142c(puVar4);
      return puVar8;
    }
    if (((ulong)puVar4 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar3 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c33750);
        (*pcVar2)();
      }
      puVar5 = *(undefined **)(puVar4 + (long)puVar7 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar5 = puVar7;
      param_2 = puVar4;
      func_0x0001002ec9a0();
    }
    if (SCARRY8((long)puVar7,1)) break;
    puVar10 = puVar7 + 1;
    puVar6 = puVar5;
    func_0x000107c49820();
    func_0x000107c61170(puVar5);
    FUN_102c337a8();
    puVar7 = puVar7 + 1;
    if (((uint)param_2 & 0xff) != 1) {
      puVar7 = puVar8;
      func_0x000107c61558();
      puVar5 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
        puVar5 = (undefined *)0x0;
        FUN_102c3ab80(0,param_2,1,puVar8);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar7 = (undefined *)(uVar1 + 1);
      puVar8 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        param_2 = puVar7;
        FUN_102c3ab80(puVar8,puVar7,1,puVar5);
      }
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined **)(puVar8 + uVar1 * 8 + 0x20) = puVar6;
      puVar7 = puVar10;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c3374c);
  (*pcVar2)();
}



/* Entry: 102c33764; end: 102c337a7;  */

void FUN_102c33764(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c337a8; end: 102c337db;  */

undefined1  [16] FUN_102c337a8(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 + 1U < 0x6d) {
    auVar1._0_8_ = *(undefined8 *)(&UNK_10db34fd8 + (param_1 + 1U) * 8);
    auVar1[8] = (&UNK_10db35341)[param_1];
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 102c337dc; end: 102c3386b;  */

void FUN_102c337dc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c3386c; end: 102c338df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c3386c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f01a48;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f01a48);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_102c35d58(*(undefined8 *)(unaff_x20 + _DAT_112f01a40));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61434(lVar3);
  return lVar2;
}



/* Entry: 102c338e0; end: 102c3393f; -[_TtC29SCAdOperaPluginImplementation24AdOperaEventListenerImpl init] */

void FUN_102c338e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaPluginImplementation.AdOperaEventListenerImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3390c);
  (*pcVar1)();
}



/* Entry: 102c33940; end: 102c339a7; -[_TtC29SCAdOperaPluginImplementation24AdOperaEventListenerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c33940(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f01a40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f01a48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f01a50));
  func_0x0001000834e4(param_1 + _DAT_112f01a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f01a60));
  return;
}



/* Entry: 102c339a8; end: 102c339c7;  */

void FUN_102c339a8(void)

{
  func_0x000107c61168(&PTR_PTR_112898fe0);
  return;
}



/* Entry: 102c339c8; end: 102c33ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c339c8(long param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 ***pppuVar7;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1;
  FUN_102c3386c();
  pppuVar7 = *(undefined8 ****)(lVar3 + 0x10);
  if (pppuVar7 == (undefined8 ***)0x0) {
    func_0x000107c6142c(lVar3);
    pppuVar4 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppuVar4 = pppuVar7;
    func_0x00010109b448(pppuVar7,0);
    pppuVar5 = &ppuStack_68;
    FUN_102c34460(pppuVar5,pppuVar4 + 4,pppuVar7,lVar3);
    func_0x000100d201ec(ppuStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
    if (pppuVar5 != pppuVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c33a3c);
      (*pcVar2)();
    }
  }
  plVar6 = (long *)(unaff_x20 + _DAT_112f01a58);
  func_0x0001000a8868(plVar6,plVar6[3]);
  ppuStack_68 = pppuVar4;
  func_0x000107c61434(*(undefined8 *)(*plVar6 + 0x10));
  func_0x000102c345b0();
  ppuVar1 = ppuStack_68;
  pppuVar7 = (undefined8 ***)ppuStack_68;
  func_0x000107c5fc48(ppuStack_68,PTR___sSSN_11034da80);
  func_0x000107c6142c(ppuVar1);
  func_0x000107c3d744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar7);
  return;
}



/* Entry: 102c33ac4; end: 102c33b0b; -[_TtC29SCAdOperaPluginImplementation24AdOperaEventListenerImpl setEventAnnouncer:] */

void FUN_102c33ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102c339c8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c33b0c; end: 102c33fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c33b0c(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  if (param_3 == 0) {
    plVar9 = (long *)(unaff_x20 + _DAT_112f01a58);
    func_0x0001000a8868(plVar9,plVar9[3]);
    uVar10 = *(undefined8 *)(*plVar9 + 0x18);
    func_0x000107c61434(uVar10);
    uVar6 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar10);
    func_0x000107c6142c(uVar10);
    if ((uVar6 & 1) == 0) {
      puStack_70 = &UNK_11065d188;
      ppuStack_68 = &PTR_DAT_11065d0f0;
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      uStack_a0 = param_1;
      uStack_98 = param_2;
      func_0x0001034e2644(&uStack_88,0x102c343b8,auStack_b0,0,0,0);
      func_0x0001000834e4(&uStack_88);
    }
  }
  else {
    uVar6 = param_3;
    uVar3 = param_2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    uVar7 = uVar3;
    uVar2 = uVar6;
    if (uVar6 == 0) {
      func_0x000107c5faec();
      uVar7 = uVar3;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c5faec();
    func_0x000107c499b8();
    uVar3 = uVar7;
    func_0x000107c61434();
    FUN_102c3386c();
    if ((*(long *)(uVar3 + 0x10) == 0) ||
       (uVar11 = param_1, uVar12 = param_2, func_0x000100029284(), (uVar12 & 1) == 0)) {
      func_0x000107c6142c(uVar3);
      plVar9 = (long *)(unaff_x20 + _DAT_112f01a58);
      func_0x0001000a8868(plVar9,plVar9[3]);
      uVar10 = *(undefined8 *)(*plVar9 + 0x10);
      func_0x000107c61434(uVar10);
      uVar3 = param_1;
      func_0x0001000f66f0(param_1,param_2,uVar10);
      func_0x000107c6142c(uVar10);
      if ((uVar3 & 1) != 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f01a50);
        func_0x000107c6157c(uVar10);
        func_0x0001000c74f0(&uStack_88);
        func_0x000107c61574(uVar10);
        uVar3 = uStack_88;
        uVar11 = uStack_88;
        func_0x000107c3db80();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar10 = 0;
        FUN_102c3572c(0);
        uVar3 = uVar11;
        func_0x000107c5fc54(uVar11,uVar10);
        func_0x000107c61170(uVar11);
        if (uVar3 >> 0x3e == 0) {
          uVar11 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar11 = uVar3 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar11 = uVar3;
          }
          func_0x000107c60480();
        }
        if (uVar11 != 0) {
          uVar12 = 0;
          do {
            if ((uVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102c33fbc);
                (*pcVar1)();
              }
              uVar13 = *(ulong *)(uVar3 + uVar12 * 8 + 0x20);
              uVar5 = uVar13;
              func_0x000107c6157c();
            }
            else {
              uVar13 = uVar12;
              func_0x000102c3a9e4(uVar12,uVar3);
              uVar5 = uVar13;
            }
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102c33ee4);
              (*pcVar1)();
            }
            uVar14 = uVar12 + 1;
            if (((uVar6 == *(ulong *)(uVar13 + 0x50) && uVar7 == *(ulong *)(uVar13 + 0x58)) ||
                (uVar5 = uVar6,
                func_0x000107c605b8(uVar6,uVar7,*(ulong *)(uVar13 + 0x50),*(ulong *)(uVar13 + 0x58),
                                    0), (uVar5 & 1) != 0)) && ((int)param_3 != 0)) {
              FUN_102c350e0();
              if ((*(long *)(uVar5 + 0x10) == 0) ||
                 (uVar4 = param_1, uVar8 = param_2, func_0x000100029284(), (uVar8 & 1) == 0)) {
                func_0x000107c6142c(uVar5);
                func_0x000107c61574(uVar13);
              }
              else {
                plVar9 = *(long **)(*(long *)(uVar5 + 0x38) + uVar4 * 8);
                func_0x000107c6157c(plVar9);
                func_0x000107c6142c(uVar5);
                uVar5 = *(ulong *)(uVar13 + 0x48);
                func_0x000107c3d368();
                func_0x000107c61180();
                if (uVar5 == 0) {
                  puStack_70 = &UNK_11065d188;
                  ppuStack_68 = &PTR_DAT_11065d0f0;
                  uStack_88 = CONCAT71(uStack_88._1_7_,4);
                  uStack_a0 = param_1;
                  uStack_98 = param_2;
                  func_0x0001034e2644(&uStack_88,FUN_102c34458,auStack_b0,0,0,0);
                  func_0x000107c61574(plVar9);
                  func_0x000107c61574(uVar13);
                  func_0x0001000834e4(&uStack_88);
                }
                else {
                  uStack_88 = uVar5;
                  (**(code **)(*plVar9 + 0x58))(param_1,param_2,&uStack_88,param_4);
                  func_0x000107c61170(uVar5);
                  func_0x000107c61574(plVar9);
                  func_0x000107c61574(uVar13);
                }
              }
            }
            else {
              func_0x000107c61574(uVar13);
            }
            uVar12 = uVar12 + 1;
          } while (uVar14 != uVar11);
        }
        func_0x000107c6142c(uVar3);
      }
      func_0x000107c61170(uVar2);
      func_0x000107c61430(uVar7,2);
    }
    else {
      plVar9 = *(long **)(*(long *)(uVar3 + 0x38) + uVar11 * 8);
      func_0x000107c6157c(plVar9);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar3);
      uStack_78 = (undefined1)param_3;
      uStack_88 = uVar6;
      uStack_80 = uVar7;
      (**(code **)(*plVar9 + 0x58))(param_1,param_2,&uStack_88,param_4);
      func_0x000107c6142c(uVar7);
      func_0x000107c61574(plVar9);
    }
  }
  return;
}



/* Entry: 102c33fd4; end: 102c3404f;  */

undefined1  [16] FUN_102c33fd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000107c602fc(0x1c);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  auVar1._8_8_ = 0x800000010f1008e0;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 102c34050; end: 102c3410b; -[_TtC29SCAdOperaPluginImplementation24AdOperaEventListenerImpl operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c340f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c340f4) */

void FUN_102c34050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c33b0c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c3410c; end: 102c342cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3410c(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *param_2;
  uVar10 = uVar8;
  func_0x000107c3db80();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_102c3572c();
  uVar3 = uVar10;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar10);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c34234);
          (*pcVar1)();
        }
        uVar7 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c6157c(uVar7);
      }
      else {
        uVar7 = uVar5;
        func_0x000102c3a9e4(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c34224);
        (*pcVar1)();
      }
      uVar9 = uVar5 + 1;
      uVar4 = *(ulong *)(uVar7 + 0x50);
      if ((uVar4 == param_3 && *(ulong *)(uVar7 + 0x58) == param_4) ||
         (func_0x000107c605b8(uVar4,*(ulong *)(uVar7 + 0x58),param_3,param_4,0), (uVar4 & 1) != 0))
      {
        func_0x000107c6142c(uVar3);
        goto LAB_102c342a4;
      }
      func_0x000107c61574(uVar7);
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar10);
  }
  func_0x000107c6142c(uVar3);
  uVar6 = *(undefined8 *)(param_5 + _DAT_112f01a60);
  func_0x000107c613fc(lVar2,0x60,7);
  *(undefined8 *)(lVar2 + 0x48) = uVar6;
  *(ulong *)(lVar2 + 0x50) = param_3;
  *(ulong *)(lVar2 + 0x58) = param_4;
  func_0x000107c615f0(uVar6);
  func_0x000107c61434();
  FUN_102c35504();
  func_0x000107c3d798(uVar8);
  uVar7 = param_4;
LAB_102c342a4:
  *param_1 = uVar7;
  return;
}



/* Entry: 102c342cc; end: 102c34303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c342cc(void)

{
  long *unaff_x20;
  
  func_0x000107c6157c(*(undefined8 *)(*unaff_x20 + _DAT_112f01a40));
  return;
}



/* Entry: 102c34304; end: 102c34387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102c34304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = *unaff_x20;
  uVar2 = *(undefined8 *)(lStack_40 + _DAT_112f01a50);
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_102c3572c(0);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(&uStack_38,FUN_102c34388,auStack_60,uVar1);
  func_0x000107c61574(uVar2);
  auVar3._8_8_ = &PTR_DAT_1105b5c78;
  auVar3._0_8_ = uStack_38;
  return auVar3;
}



/* Entry: 102c34388; end: 102c343a3;  */

void FUN_102c34388(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c3410c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102c343a4; end: 102c343d7;  */

void FUN_102c343a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f01a90 == (undefined *)0x0 || ((ulong)puRam0000000112f01a90 & 1) != 0) {
    puVar1 = &UNK_10e951032;
    func_0x000107c61518(&UNK_10e951032,0x24,0,0);
    puRam0000000112f01a90 = puVar1;
  }
  return;
}



/* Entry: 102c343d8; end: 102c34457;  */

undefined * FUN_102c343d8(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 102c34458; end: 102c3445f;  */

undefined1  [16] FUN_102c34458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  auVar3._8_8_ = 0x800000010f100a30;
  auVar3._0_8_ = 0xd000000000000018;
  return auVar3;
}



/* Entry: 102c34460; end: 102c3485f;  */

long FUN_102c34460(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102c345b0);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102c345ac);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_102c34570;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_102c34570:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}


