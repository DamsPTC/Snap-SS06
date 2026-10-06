/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103357ea0; end: 10335812b;  */

/* WARNING: Possible PIC construction at 0x000103357ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033580f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033580c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033580d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033580a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033580b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033580b4) */
/* WARNING: Removing unreachable block (ram,0x0001033580a4) */
/* WARNING: Removing unreachable block (ram,0x0001033580d4) */
/* WARNING: Removing unreachable block (ram,0x0001033580c4) */
/* WARNING: Removing unreachable block (ram,0x000103358104) */
/* WARNING: Removing unreachable block (ram,0x0001033580f4) */
/* WARNING: Removing unreachable block (ram,0x000103358024) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103358014) */
/* WARNING: Removing unreachable block (ram,0x000103358004) */
/* WARNING: Removing unreachable block (ram,0x000103357ff4) */
/* WARNING: Removing unreachable block (ram,0x000103358094) */

void FUN_103357ea0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3efdc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b198();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c401f8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b410();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4b33c();
            func_0x000107c61180();
            if (lVar6 != 0) {
              func_0x000107c4b2f4();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar7 = 0;
                FUN_10334bdb0();
                func_0x000107c613fc();
                *(long *)(lVar7 + 0x10) = lVar1;
                *(long *)(lVar7 + 0x18) = lVar2;
                *(long *)(lVar7 + 0x20) = lVar3;
                *(long *)(lVar7 + 0x28) = lVar4;
                *(long *)(lVar7 + 0x30) = lVar5;
                *(long *)(lVar7 + 0x38) = lVar6;
                *(long *)(lVar7 + 0x40) = unaff_x20;
                *(undefined8 *)(lVar7 + 0x48) = 0;
                func_0x000107c61174(lVar1);
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(unaff_x20);
                FUN_10334b7e0();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10335812c; end: 103358153; -[SCLensTalkMultiplayerURIHandlerEntryPoint begin] */

void FUN_10335812c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103357ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103358154; end: 103358197; -[SCLensTalkMultiplayerURIHandlerEntryPoint end] */

void FUN_103358154(undefined8 param_1)

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



/* Entry: 103358198; end: 10335854f;  */

void FUN_103358198(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x635349556c6c6163;
    if (((param_2 == 0x635349556c6c6163) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x635349556c6c6163,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52f5c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef0ebfba0)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010f140460,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55d58();
      }
      else {
        uVar2 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0ed68e0)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010f129720,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53764();
        }
        else {
          if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10cce40)) {
            uVar2 = 0xd000000000000011;
            func_0x000107c605b8(0xd000000000000011,0x800000010ef331c0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10d9490)) ||
                 (func_0x000107c605b8(0xd00000000000001e,0x800000010ef26b70,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55e0c();
              }
              else {
                uVar2 = 0xd000000000000015;
                if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) &&
                   (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "LensMultiplayerURIHandler/SCLensTalkMultiplayerURIHandlerEntryPoint.swift"
                                      ,0x49,2,0x42,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103358550);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55df4();
              }
              goto LAB_103358228;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59490();
        }
      }
    }
  }
LAB_103358228:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103358550; end: 1033585fb; -[SCLensTalkMultiplayerURIHandlerEntryPoint setValue:forIvarName:] */

void FUN_103358550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103358198(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033585fc; end: 1033586d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033585fc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5b8f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5b900) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033586d4; end: 1033586f3; -[SCLensTalkMultiplayerURIHandlerEntryPoint init] */

void FUN_1033586d4(void)

{
  FUN_1033585fc();
  return;
}



/* Entry: 1033586f4; end: 103358727;  */

void FUN_1033586f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103358728; end: 1033587bf; -[SCLensTalkMultiplayerURIHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103358728(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5b8c8);
  func_0x000107c61610(param_1 + _DAT_112f5b8d0);
  func_0x000107c61610(param_1 + _DAT_112f5b8d8);
  func_0x000107c61610(param_1 + _DAT_112f5b8e0);
  func_0x000107c61610(param_1 + _DAT_112f5b8e8);
  func_0x000107c61610(param_1 + _DAT_112f5b8f0);
  func_0x000107c61610(param_1 + _DAT_112f5b8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b900));
  return;
}



/* Entry: 1033587c0; end: 1033587df;  */

void FUN_1033587c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0178);
  return;
}



/* Entry: 1033587e0; end: 103358877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033587e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b930) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103358878; end: 1033588d7; -[_TtC21GamesPresenceServices21GamesPresenceServices init] */

void FUN_103358878(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesPresenceServices.GamesPresenceServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033588a4);
  (*pcVar1)();
}



/* Entry: 1033588d8; end: 1033588e7; -[_TtC21GamesPresenceServices21GamesPresenceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033588d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b930));
  return;
}



/* Entry: 1033588e8; end: 1033589a7;  */

undefined8 FUN_1033588e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103359224(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 1033589a8; end: 103358a0f;  */

void FUN_1033589a8(ulong param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c3ebcc();
    if ((param_1 & 1) == 0) {
      FUN_103358a10(2);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103358a10; end: 103358c77;  */

/* WARNING: Possible PIC construction at 0x000103358ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103358af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103358ab8) */
/* WARNING: Removing unreachable block (ram,0x000103358afc) */

void FUN_103358a10(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 == 0) {
    pcVar1 = *(code **)(unaff_x20 + 0x28);
    puVar3 = *(undefined **)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    if (pcVar1 == (code *)0x0) {
      return;
    }
    func_0x000107c6157c(puVar3);
    (*pcVar1)(param_1);
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  else {
    lVar2 = lVar5;
    func_0x000107c614f0(lVar5);
    puVar3 = &UNK_110642018;
    func_0x000107c613fc(&UNK_110642018,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_1106420a0;
    func_0x000107c613fc(&UNK_1106420a0,0x19,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = (char)param_1;
    func_0x000107c615f0(lVar5);
    func_0x000107c6157c(puVar3);
    func_0x00010090569c(0x1033593e0,puVar4,lVar2);
    func_0x000107c615e8(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103358c78; end: 103358f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103358c78(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        *(code **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_1 + 0x30) = param_3;
        func_0x000100d44000(uVar11,uVar2);
        lVar3 = 0;
        FUN_10335a250();
        lVar4 = lVar3;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar4 + _DAT_112f5ba28);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + _DAT_112f5ba30) = 0;
        *(undefined8 *)(lVar4 + _DAT_112f5ba38) = 0;
        *(undefined8 *)(lVar4 + _DAT_112f5ba40) = 0;
        puVar8 = PTR_s_initWithFrame__1125e2948;
        lStack_78 = lVar4;
        lStack_70 = lVar3;
        func_0x000107c6157c(param_3);
        func_0x000107c61174(lVar10);
        plVar5 = &lStack_78;
        func_0x000107c61154(0,0,0,0,plVar5,puVar8);
        FUN_1033598fc(lVar10);
        func_0x000107c61170(lVar10);
        puVar8 = &UNK_110642018;
        puVar6 = puVar8;
        func_0x000107c613fc(&UNK_110642018,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,param_1);
        func_0x000107c6157c(param_1);
        puVar7 = puVar6;
        func_0x000107c6157c(puVar6);
        FUN_1033597ec();
        func_0x000107c3d8b8();
        func_0x000107c61170(puVar7);
        puVar1 = (undefined8 *)((long)plVar5 + _DAT_112f5ba28);
        uVar11 = *puVar1;
        uVar2 = puVar1[1];
        *puVar1 = 0x10335938c;
        puVar1[1] = puVar6;
        func_0x000100d44000(uVar11,uVar2);
        func_0x000107c61574(puVar6);
        func_0x000107c613fc(&UNK_110642018,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,param_1);
        func_0x000107c61574(param_1);
        puVar7 = puVar8;
        func_0x000107c6157c(puVar8);
        func_0x000103359800();
        uStack_88 = 0x1033593a8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_110642068;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar6 = puStack_80;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar6);
        func_0x000107c56ea0(puVar7);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61578(puVar8,2);
        func_0x000107c61170(puVar7);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar5;
        func_0x000107c61174(plVar5);
        func_0x000107c61170(uVar11);
        FUN_10335941c();
        func_0x000107c61574(param_1);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(plVar5);
        return;
      }
    }
    func_0x000107c61574();
  }
  (*param_2)(2);
  return;
}



/* Entry: 103358f30; end: 103358f8b;  */

void FUN_103358f30(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_103358a10(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103358f8c; end: 1033590e7;  */

void FUN_103358f8c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar5 == 0) {
      if (pcVar1 != (code *)0x0) {
        func_0x000107c6157c(uVar2);
        (*pcVar1)(param_2);
        func_0x000100d44000(pcVar1,uVar2);
        func_0x000107c61574(param_1);
        func_0x000100d44000(pcVar1,uVar2);
        return;
      }
    }
    else {
      puVar3 = &UNK_110642018;
      func_0x000107c613fc(&UNK_110642018,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,param_1);
      puVar4 = &UNK_1106420c8;
      func_0x000107c613fc(&UNK_1106420c8,0x29,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(code **)(puVar4 + 0x18) = pcVar1;
      *(undefined8 *)(puVar4 + 0x20) = uVar2;
      puVar4[0x28] = (char)param_2;
      func_0x000107c61174(lVar5);
      func_0x000107c6157c(puVar3);
      func_0x0001033593fc(pcVar1,uVar2);
      FUN_10335958c(0x1033593ec,puVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000100d44000(pcVar1,uVar2);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1033590e8; end: 1033591bf;  */

void FUN_1033590e8(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c4ff34(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar3);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)(param_4);
  }
  return;
}



/* Entry: 1033591c0; end: 103359203;  */

void FUN_1033591c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100d44000(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103359204; end: 103359223;  */

void FUN_103359204(void)

{
  func_0x000103358b2c();
  return;
}



/* Entry: 103359224; end: 10335933b;  */

void FUN_103359224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  puVar1 = &UNK_110642018;
  func_0x000107c613fc(&UNK_110642018,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uStack_50 = 0x10335940c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100b5fdac;
  puStack_58 = &UNK_1106420e0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5c320(param_2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(param_2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10335933c; end: 10335935f;  */

void FUN_10335933c(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100b60084(&uStack_11);
  return;
}



/* Entry: 103359360; end: 10335936b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103359360(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x20) == 0) {
      lVar14 = *(long *)(lVar5 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar14 != 0) {
        uVar2 = *(undefined8 *)(lVar5 + 0x28);
        uVar3 = *(undefined8 *)(lVar5 + 0x30);
        *(code **)(lVar5 + 0x28) = pcVar4;
        *(undefined8 *)(lVar5 + 0x30) = uVar13;
        func_0x000100d44000(uVar2,uVar3);
        lVar6 = 0;
        FUN_10335a250();
        lVar7 = lVar6;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar7 + _DAT_112f5ba28);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar7 + _DAT_112f5ba30) = 0;
        *(undefined8 *)(lVar7 + _DAT_112f5ba38) = 0;
        *(undefined8 *)(lVar7 + _DAT_112f5ba40) = 0;
        puVar11 = PTR_s_initWithFrame__1125e2948;
        lStack_78 = lVar7;
        lStack_70 = lVar6;
        func_0x000107c6157c(uVar13);
        func_0x000107c61174(lVar14);
        plVar8 = &lStack_78;
        func_0x000107c61154(0,0,0,0,plVar8,puVar11);
        FUN_1033598fc(lVar14);
        func_0x000107c61170(lVar14);
        puVar11 = &UNK_110642018;
        puVar9 = puVar11;
        func_0x000107c613fc(&UNK_110642018,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,lVar5);
        func_0x000107c6157c(lVar5);
        puVar10 = puVar9;
        func_0x000107c6157c(puVar9);
        FUN_1033597ec();
        func_0x000107c3d8b8();
        func_0x000107c61170(puVar10);
        puVar1 = (undefined8 *)((long)plVar8 + _DAT_112f5ba28);
        uVar13 = *puVar1;
        uVar2 = puVar1[1];
        *puVar1 = 0x10335938c;
        puVar1[1] = puVar9;
        func_0x000100d44000(uVar13,uVar2);
        func_0x000107c61574(puVar9);
        func_0x000107c613fc(&UNK_110642018,0x18,7);
        func_0x000107c61644(puVar11 + 0x10,lVar5);
        func_0x000107c61574(lVar5);
        puVar10 = puVar11;
        func_0x000107c6157c(puVar11);
        func_0x000103359800();
        uStack_88 = 0x1033593a8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_110642068;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        puVar9 = puStack_80;
        func_0x000107c6157c(puVar11);
        func_0x000107c61574(puVar9);
        func_0x000107c56ea0(puVar10);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61578(puVar11,2);
        func_0x000107c61170(puVar10);
        uVar13 = *(undefined8 *)(lVar5 + 0x20);
        *(long **)(lVar5 + 0x20) = plVar8;
        func_0x000107c61174(plVar8);
        func_0x000107c61170(uVar13);
        FUN_10335941c();
        func_0x000107c61574(lVar5);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(plVar8);
        return;
      }
    }
    func_0x000107c61574();
  }
  (*pcVar4)(2);
  return;
}



/* Entry: 10335936c; end: 1033593c3;  */

void FUN_10335936c(void)

{
  func_0x000107c61168(&PTR_PTR_112f5b9a8);
  return;
}



/* Entry: 1033593c4; end: 10335941b;  */

void FUN_1033593c4(long param_1,long param_2)

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



/* Entry: 10335941c; end: 10335958b;  */

void FUN_10335941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  puStack_80 = (undefined *)0x3ff0000000000000;
  uStack_78 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_68 = (undefined *)0x3ff0000000000000;
  pcStack_60 = (code *)0x0;
  puStack_58 = (undefined *)0x0;
  func_0x000107c6089c(&puStack_b0,0,param_1,&puStack_80);
  uStack_78 = uStack_a8;
  puStack_80 = puStack_b0;
  puStack_68 = (undefined *)uStack_98;
  puStack_70 = (undefined *)uStack_a0;
  puStack_58 = (undefined *)uStack_88;
  pcStack_60 = (code *)uStack_90;
  func_0x000107c5a03c();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar1 = &UNK_110642120;
  func_0x000107c613fc(&UNK_110642120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  pcStack_60 = FUN_10335a270;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110642138;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c3dcd4(0x3fd3333333333333,0,puVar2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10335958c; end: 1033596ff;  */

void FUN_10335958c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puStack_90 = (undefined *)0x3ff0000000000000;
  uStack_88 = 0;
  puStack_80 = (undefined *)0x0;
  puStack_78 = (undefined *)0x3ff0000000000000;
  pcStack_70 = (code *)0x0;
  puStack_68 = (undefined *)0x0;
  func_0x000107c5a03c();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_110642170;
  func_0x000107c613fc(&UNK_110642170,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10335a4a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110642188;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106421c0;
  func_0x000107c613fc(&UNK_1106421c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_70 = FUN_10335a4ac;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1106421d8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c3dcd4(0x3fd0000000000000,0,puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103359700; end: 1033597eb;  */

undefined * FUN_103359700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  FUN_10335a4dc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1);
  func_0x000107c59c74(puVar1);
  func_0x000107c52518(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c5a050(puVar1);
  return puVar1;
}



/* Entry: 1033597ec; end: 103359813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033597ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5ba38;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5ba38);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10335a2d4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 103359814; end: 10335986f;  */

long FUN_103359814(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 103359870; end: 1033598fb; -[_TtC27MatchmakingConsentPresenter22MatchmakingConsentView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103359870(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f5ba28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112f5ba30) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5ba38) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5ba40) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MatchmakingConsentPresenter/MatchmakingConsentView.swift",0x38,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033598fc);
  (*pcVar2)();
}



/* Entry: 1033598fc; end: 10335a077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033598fc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  double dVar10;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar1);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(lVar2);
  func_0x000107c5a050();
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1405d0);
  func_0x000107c520f4();
  func_0x000107c61170(uVar3);
  func_0x000107c55528();
  puVar1 = &DAT_112f5ba30;
  FUN_103359814(&DAT_112f5ba30,FUN_103359700);
  func_0x000107c3d89c();
  func_0x000107c61170(puVar1);
  puVar1 = &DAT_112f5ba38;
  FUN_103359814(&DAT_112f5ba38,FUN_10335a2d4);
  func_0x000107c3d89c();
  func_0x000107c61170(puVar1);
  puVar1 = &DAT_112f5ba40;
  FUN_103359814(&DAT_112f5ba40,0x10335a3bc);
  func_0x000107c3d89c();
  func_0x000107c61170(puVar1);
  func_0x000107c3d89c(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  dVar10 = 7.90505033345994e-323;
  *(undefined8 *)(puVar4 + 0x18) = 0x21;
  *(undefined8 *)(puVar4 + 0x10) = 0x10;
  lVar2 = unaff_x20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *(long *)(puVar4 + 0x20) = lVar5;
  lVar2 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c3f764(param_1);
  func_0x000107c61180();
  func_0x000107c3ec60(param_1);
  func_0x000107c609b0();
  lVar5 = lVar2;
  func_0x000107c40284(dVar10 * -0.015);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *(long *)(puVar4 + 0x28) = lVar5;
  lVar2 = unaff_x20;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c402b0(0x4079a00000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  *(long *)(puVar4 + 0x30) = lVar5;
  lVar2 = unaff_x20;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c402a0(0x4074800000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  *(long *)(puVar4 + 0x38) = lVar5;
  lVar2 = _DAT_112f5ba30;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f5ba30);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar4 + 0x40) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar4 + 0x48) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar4 + 0x50) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar2 = _DAT_112f5ba38;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f5ba38);
  func_0x000107c5cbe4(uVar7);
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar4 + 0x58) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar4 + 0x60) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(puVar4 + 0x68) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar5 = _DAT_112f5ba40;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f5ba40);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar4 + 0x70) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40290(0x404a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar4 + 0x78) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x80) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x88) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40284(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x90) = uVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40288(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar4 + 0x98) = uVar3;
  uVar3 = 0;
  func_0x000100847984();
  puVar9 = puVar4;
  func_0x000107c5fc48(puVar4,uVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10335a078; end: 10335a123;  */

void FUN_10335a078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_70 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c60890(auStack_70,0,param_1);
  func_0x000107c5a03c(param_5,param_6,auStack_70);
  return;
}



/* Entry: 10335a124; end: 10335a193; -[_TtC27MatchmakingConsentPresenter22MatchmakingConsentView optInButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335a124(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f5ba28);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f5ba28))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10335a194; end: 10335a1f3; -[_TtC27MatchmakingConsentPresenter22MatchmakingConsentView initWithFrame:] */

void FUN_10335a194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MatchmakingConsentPresenter.MatchmakingConsentView",0x32,"init(frame:)",0xc,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10335a1c0);
  (*pcVar1)();
}



/* Entry: 10335a1f4; end: 10335a24f; -[_TtC27MatchmakingConsentPresenter22MatchmakingConsentView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010335a224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335a228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335a1f4(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f5ba28),
                      ((undefined8 *)(param_1 + _DAT_112f5ba28))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ba30));
  return;
}



/* Entry: 10335a250; end: 10335a26f;  */

void FUN_10335a250(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0328);
  return;
}



/* Entry: 10335a270; end: 10335a2b7;  */

void FUN_10335a270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_50 = 0x3ff0000000000000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c5a03c(uVar1,param_2,&uStack_50);
  func_0x000107c4abfc(uVar1);
  return;
}



/* Entry: 10335a2b8; end: 10335a2d3;  */

void FUN_10335a2b8(long param_1,long param_2)

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



/* Entry: 10335a2d4; end: 10335a4a3;  */

undefined * FUN_10335a2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  puVar2 = puVar1;
  func_0x000107c59e34(puVar1);
  func_0x00010335a5ac();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1405b0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c55528(puVar1);
  return puVar1;
}



/* Entry: 10335a4a4; end: 10335a4ab;  */

void FUN_10335a4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c60890(auStack_70,0,param_1);
  func_0x000107c5a03c(uVar2,param_6,auStack_70);
  return;
}



/* Entry: 10335a4ac; end: 10335a4cb;  */

void FUN_10335a4ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10335a4cc; end: 10335a4db;  */

void FUN_10335a4cc(long param_1,long param_2)

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



/* Entry: 10335a4dc; end: 10335a743;  */

undefined1  [16] FUN_10335a4dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f140650);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f140610);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10335a5ac);
  (*pcVar1)();
}



/* Entry: 10335a744; end: 10335a757;  */

bool FUN_10335a744(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10335a758; end: 10335a803;  */

void FUN_10335a758(void)

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



/* Entry: 10335a804; end: 10335a813;  */

void FUN_10335a804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10335a814; end: 10335a84f;  */

void FUN_10335a814(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10335a850; end: 10335a85b;  */

void FUN_10335a850(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10335a85c; end: 10335a9d3;  */

void FUN_10335a85c(void)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  ulong auStack_50 [4];
  
  uVar5 = *unaff_x20;
  func_0x0001000d224c(auStack_50);
  uVar1 = auStack_50[0];
  if (auStack_50[0] == 0) {
    func_0x0001007d6c6c(3,0xd000000000000046,0x800000010f140670,uVar5,&PTR_DAT_110642388);
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    auStack_50[0] = auStack_50[0] & 0xffffffffffffff00;
    func_0x000104888f7c(auStack_50);
    return;
  }
  uVar3 = auStack_50[0];
  func_0x000107c5dc1c();
  func_0x000107c61180();
  if (uVar3 == 0) {
    auStack_50[1] = 0;
    auStack_50[0] = 0;
    auStack_50[3] = 0;
    auStack_50[2] = 0;
  }
  else {
    func_0x000107c60234(auStack_50);
    func_0x000107c615e8(uVar3);
  }
  func_0x000100672b50(auStack_50,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,auStack_70,PTR___sypN_11034f1a8 + 8,uVar5,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = uStack_78;
      func_0x000107c3ebcc();
      uVar2 = (undefined1)uVar5;
      func_0x000107c61170(uStack_78);
      goto LAB_10335a980;
    }
  }
  uVar2 = 0;
LAB_10335a980:
  uVar5 = 0x112e1cb88;
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  auStack_70[0] = uVar2;
  func_0x000104888f7c(auStack_70,uVar5);
  func_0x000107c61170(uVar1);
  func_0x00010006e7f4(auStack_50);
  return;
}



/* Entry: 10335a9d4; end: 10335ad13;  */

undefined * FUN_10335a9d4(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar11 = *unaff_x20;
  func_0x0001000d224c(&puStack_a0);
  puVar10 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x3e);
    func_0x000107c5fb78(0xd000000000000016,0x800000010f1406c0);
    bVar4 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0xd000000000000026,0x800000010f1406e0);
    uVar1 = uStack_98;
    func_0x0001007d6c6c(3,puStack_a0,uStack_98,uVar11,&PTR_DAT_110642388);
    func_0x000107c6142c(uVar1);
    puVar9 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_10335ad14();
    puVar10 = &UNK_110642428;
    func_0x000107c613f8(&UNK_110642428,puVar9,0,0);
    *puVar9 = 0;
    puVar12 = puVar10;
    func_0x00010488904c();
    func_0x000107c614ac(puVar10);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar5 = 0;
    func_0x00010095c380();
    puVar12 = &UNK_110642290;
    func_0x000107c613fc(&UNK_110642290,0x19,7);
    *(undefined **)(puVar12 + 0x10) = puStack_a0;
    param_1 = param_1 & 1;
    puVar12[0x18] = param_1;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10335ad54;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106422a8;
    puStack_78 = puVar12;
    func_0x000107c60bc4(&puStack_a0);
    puVar12 = puStack_78;
    func_0x000107c61174(puVar10);
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_1106422e0;
    func_0x000107c613fc(&UNK_1106422e0,0x28,7);
    puVar12[0x10] = param_1;
    *(long *)(puVar12 + 0x18) = lVar5;
    *(undefined8 *)(puVar12 + 0x20) = uVar11;
    pcStack_80 = FUN_10335adbc;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106422f8;
    puStack_78 = puVar12;
    func_0x000107c60bc4(&puStack_a0);
    puVar12 = puStack_78;
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_110642330;
    func_0x000107c613fc(&UNK_110642330,0x28,7);
    puVar12[0x10] = param_1;
    *(long *)(puVar12 + 0x18) = lVar5;
    *(undefined8 *)(puVar12 + 0x20) = uVar11;
    pcStack_80 = FUN_10335ae90;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100ff4e14;
    puStack_88 = &UNK_110642348;
    puStack_78 = puVar12;
    func_0x000107c60bc4(&puStack_a0);
    puVar12 = puStack_78;
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(puVar12);
    func_0x000107c4e568(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    puVar12 = *(undefined **)(lVar5 + 0x10);
    func_0x000107c6157c(puVar12);
    func_0x000107c61574(lVar5);
  }
  return puVar12;
}



/* Entry: 10335ad14; end: 10335ad53;  */

void FUN_10335ad14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ba70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3e98;
  func_0x000107c61520(&UNK_10dbb3e98,&UNK_110642428);
  puRam0000000112f5ba70 = puVar1;
  return;
}



/* Entry: 10335ad54; end: 10335ad9f;  */

void FUN_10335ad54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5490c(uVar2,param_2,0x55d,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10335ada0; end: 10335adbb;  */

void FUN_10335ada0(long param_1,long param_2)

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



/* Entry: 10335adbc; end: 10335ae8f;  */

void FUN_10335adbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long unaff_x20;
  
  cVar4 = *(char *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(0xe000000000000000);
  bVar5 = cVar4 == '\0';
  uVar1 = 0x65757274;
  if (bVar5) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x0001007d6c6c(1,0xd00000000000001d,0x800000010f140740,uVar3,&PTR_DAT_110642388);
  func_0x000107c6142c(0x800000010f140740);
  func_0x000100b60084();
  return;
}



/* Entry: 10335ae90; end: 10335b063;  */

void FUN_10335ae90(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  cVar3 = *(char *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = 0;
  puStack_48 = (undefined1 *)0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f140710);
  bVar4 = cVar3 == '\0';
  uVar5 = 0x65757274;
  if (bVar4) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x20505553206f7420,0xed0000206d657469);
  puStack_58 = (undefined *)0x55d;
  puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  puStack_58 = param_1;
  func_0x000107c614b0(param_1);
  uVar5 = 0x112d511f8;
  func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
  func_0x000107c5fb18(&puStack_58,uVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  puVar6 = puStack_48;
  func_0x0001007d6c6c(3,uStack_50,puStack_48,uVar2,&PTR_DAT_110642388);
  func_0x000107c6142c();
  puVar7 = param_1;
  if (param_1 == (undefined *)0x0) {
    FUN_10335ad14();
    puVar7 = &UNK_110642428;
    func_0x000107c613f8(&UNK_110642428,puVar6,0,0);
    *puVar6 = 1;
  }
  func_0x000107c614b0(param_1);
  func_0x00010488ade0(puVar7);
  func_0x000107c614ac(puVar7);
  return;
}



/* Entry: 10335b064; end: 10335b08f;  */

void FUN_10335b064(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10335b090; end: 10335b093;  */

void FUN_10335b090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ba78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3e30;
  func_0x000107c61520(&UNK_10dbb3e30,&UNK_110642428);
  puRam0000000112f5ba78 = puVar1;
  return;
}



/* Entry: 10335b094; end: 10335b0d3;  */

void FUN_10335b094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5ba78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3e30;
  func_0x000107c61520(&UNK_10dbb3e30,&UNK_110642428);
  puRam0000000112f5ba78 = puVar1;
  return;
}



/* Entry: 10335b0d4; end: 10335b113;  */

void FUN_10335b0d4(void)

{
  FUN_10335a85c();
  return;
}



/* Entry: 10335b114; end: 10335b137;  */

void FUN_10335b114(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010335b124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 10335b138; end: 10335b157;  */

void FUN_10335b138(void)

{
  func_0x000107c61168(&PTR_PTR_112f5bac0);
  return;
}



/* Entry: 10335b158; end: 10335b2df;  */

int FUN_10335b158(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10335b1d4;
        goto LAB_10335b1b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10335b1b8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10335b1d4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10335b2e0; end: 10335b38b;  */

void FUN_10335b2e0(void)

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



/* Entry: 10335b38c; end: 10335b38f;  */

void FUN_10335b38c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bb28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3f70;
  func_0x000107c61520(&UNK_10dbb3f70,&UNK_1106425a8);
  puRam0000000112f5bb28 = puVar1;
  return;
}



/* Entry: 10335b390; end: 10335b3cf;  */

void FUN_10335b390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bb28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3f70;
  func_0x000107c61520(&UNK_10dbb3f70,&UNK_1106425a8);
  puRam0000000112f5bb28 = puVar1;
  return;
}



/* Entry: 10335b3d0; end: 10335b533;  */

int FUN_10335b3d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10335b44c;
        goto LAB_10335b430;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10335b430:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10335b44c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10335b534; end: 10335b6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10335b534(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(param_3 + _DAT_112fc8c48);
  func_0x000107c6157c(uVar7);
  uVar3 = 0x112f5bb30;
  func_0x0001000285a8(0x112f5bb30,&UNK_10dbb4060);
  pcVar8 = FUN_10335b6d0;
  func_0x0001000cb480(FUN_10335b6d0,0,uVar3);
  func_0x000107c61574(uVar7);
  puVar4 = (undefined8 *)0x0;
  func_0x0001009438d0();
  func_0x000107c613fc();
  puVar4[2] = 0x6f6272656461656c;
  puVar4[3] = 0xec00000073647261;
  puVar4[4] = 1;
  puVar5 = puVar4;
  func_0x0001009438f0();
  uVar3 = puVar5[1];
  puVar4[5] = *puVar5;
  puVar4[6] = uVar3;
  func_0x000107c61434();
  pcVar6 = "WebLensLeaderboardCapabilityHandler";
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar4[7] = pcVar8;
  puVar4[8] = pcVar6;
  lVar1 = *(long *)(param_4 + _DAT_113070408);
  lVar2 = ((long *)(param_4 + _DAT_113070408))[1];
  *(long *)(unaff_x20 + 0x10) = lVar1;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  *(undefined8 **)(unaff_x20 + 0x20) = puVar4;
  if (lVar1 != 0) {
    func_0x000107c614f0(lVar1);
    pcVar8 = *(code **)(lVar2 + 0x18);
    func_0x000107c615f4(lVar1,2);
    func_0x000107c6157c(puVar4);
    (*pcVar8)();
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(puVar4);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 10335b6d0; end: 10335b767;  */

void FUN_10335b6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar2);
  return;
}



/* Entry: 10335b768; end: 10335b793;  */

void FUN_10335b768(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10335b794; end: 10335b797;  */

void FUN_10335b794(void)

{
  return;
}



/* Entry: 10335b798; end: 10335b7ef;  */

undefined8 FUN_10335b798(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar3 + 0x18);
    func_0x000107c614f0(lVar2);
    (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar3 + 0x20),&PTR_DAT_110642a90,lVar2,lVar1);
  }
  return 0;
}



/* Entry: 10335b7f0; end: 10335b95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335b7f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f5bc18;
  if (param_2 == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_2 + _DAT_112f5bc18);
  if (uVar4 == 0) {
    bVar2 = true;
  }
  else {
    if (uVar4 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)uVar4) {
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    bVar2 = uVar4 == 0;
  }
  uStack_70 = 0;
  uVar3 = 0;
  FUN_10335d900(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc50(uVar5,&uStack_70,uVar3);
  uVar4 = uStack_70;
  uVar5 = *(undefined8 *)(param_2 + lVar1);
  *(ulong *)(param_2 + lVar1) = uStack_70;
  func_0x000107c61434(uStack_70);
  func_0x000107c6142c(uVar5);
  if (bVar2) {
    func_0x000107c6142c(uVar4);
  }
  else {
    if (uVar4 != 0) {
      if (uVar4 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar4;
        if (-1 < (long)uVar4) {
          uVar6 = uVar4 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar4);
      if (uVar6 != 0) goto LAB_10335b918;
    }
    func_0x000104875e28(&uStack_70);
    uVar4 = uStack_70;
    if (uStack_70 != 0) {
      func_0x000107c614f0(uStack_70);
      (**(code **)(lStack_68 + 8))();
      func_0x000107c615e8(uVar4);
    }
  }
LAB_10335b918:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10335b95c; end: 10335b9bb; -[_TtC19LensLeaderboardImpl25LensLeaderboardURIHandler init] */

void FUN_10335b95c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardImpl.LensLeaderboardURIHandler",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10335b988);
  (*pcVar1)();
}



/* Entry: 10335b9bc; end: 10335ba57; -[_TtC19LensLeaderboardImpl25LensLeaderboardURIHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010335b9dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335b9e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335b9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f5bbe0 + 8))
  ;
  return;
}



/* Entry: 10335ba58; end: 10335ba77;  */

void FUN_10335ba58(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0400);
  return;
}



/* Entry: 10335ba78; end: 10335ccd3;  */

void FUN_10335ba78(long param_1,code *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined1 *)0x0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  puVar2 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    func_0x000107c498b4(param_4);
    func_0x000107c61180();
    (*param_2)();
  }
  else {
    puVar3 = param_4;
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(puVar4);
    func_0x000107c61170();
    func_0x000107c5edc4();
    (**(code **)(lVar7 + 8))();
    func_0x00010912c574();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    if (puVar5 == puVar3 && puVar1 == puVar6) {
      func_0x000107c6142c(puVar6);
      puVar6 = puVar1;
    }
    else {
      puVar4 = puVar1;
      func_0x000107c605b8(puVar5,puVar1,puVar3,puVar6,0);
      func_0x000107c6142c();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010912c5a0();
        func_0x000107c61180();
        puVar5 = puVar1;
        func_0x000107c5faec();
        func_0x000107c61170(puVar1);
        if ((puVar5 == puVar3) && (puVar4 == puVar6)) {
          func_0x000107c6142c(puVar6);
          puVar6 = puVar4;
        }
        else {
          puVar1 = puVar4;
          func_0x000107c605b8(puVar5,puVar4,puVar3,puVar6,0);
          func_0x000107c6142c();
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010912c5cc();
            func_0x000107c61180();
            puVar5 = puVar4;
            func_0x000107c5faec();
            func_0x000107c61170(puVar4);
            if ((puVar5 == puVar3) && (puVar1 == puVar6)) {
              func_0x000107c6142c(puVar6);
              func_0x000107c6142c(puVar1);
            }
            else {
              func_0x000107c605b8(puVar5,puVar1,puVar3,puVar6,0);
              func_0x000107c6142c(puVar6);
              func_0x000107c6142c(puVar1);
              if (((ulong)puVar5 & 1) == 0) {
                func_0x000107c498f4(param_4);
                func_0x000107c61180();
                (*param_2)();
                func_0x000107c61170(param_4);
                param_4 = puVar2;
                goto LAB_10335bbec;
              }
            }
            func_0x00010335c8b8(param_4,param_2,param_3);
            param_4 = puVar2;
            goto LAB_10335bbec;
          }
        }
        func_0x000107c6142c(puVar6);
        func_0x00010335c4a0(param_4,param_2,param_3);
        param_4 = puVar2;
        goto LAB_10335bbec;
      }
    }
    func_0x000107c6142c(puVar6);
    func_0x00010335bd58(param_4,param_2,param_3);
    param_4 = puVar2;
  }
LAB_10335bbec:
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10335ccd4; end: 10335cd4f; -[_TtC19LensLeaderboardImpl25LensLeaderboardURIHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x00010335cd38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335cd3c) */

void FUN_10335ccd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10335d5d4(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10335cd50; end: 10335cd67; -[_TtC19LensLeaderboardImpl25LensLeaderboardURIHandler reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335cd50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f5bc18);
  *(undefined8 *)(param_1 + _DAT_112f5bc18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10335cd68; end: 10335cf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335cd68(void)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c5b3f0();
    func_0x000107c615e8(lStack_38);
    func_0x0001008cc2b4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10335cf84; end: 10335d117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10335cf84(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112f5bc18);
  if (uVar7 != 0) {
    uVar8 = uVar7 & 0xffffffffffffff8;
    uVar4 = param_2;
    if (uVar7 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar10 = uVar7;
      if (-1 < (long)uVar7) {
        uVar10 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar7);
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10335d104);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
          uVar6 = uVar4;
        }
        else {
          uVar3 = uVar9;
          uVar6 = uVar7;
          func_0x000100ff3f88();
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10335d100);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if ((uVar5 == param_1) && (uVar6 == param_2)) {
          func_0x000107c6142c(uVar7);
          uVar7 = uVar6;
LAB_10335d0bc:
          func_0x000107c6142c(uVar7);
          uVar7 = uVar3;
          func_0x000107c4a55c(uVar3);
          func_0x000107c61170(uVar3);
          return uVar7;
        }
        uVar4 = uVar6;
        func_0x000107c605b8(uVar5,uVar6,param_1,param_2,0);
        func_0x000107c6142c(uVar6);
        if ((uVar5 & 1) != 0) goto LAB_10335d0bc;
        func_0x000107c61170(uVar3);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar10);
    }
    func_0x000107c6142c(uVar7);
  }
  return 0;
}



/* Entry: 10335d118; end: 10335d29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335d118(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_90 [2];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000d224c(alStack_90);
    lVar2 = alStack_90[0];
    if (alStack_90[0] == 0) {
      lVar5 = 100;
    }
    else {
      lVar5 = alStack_90[0];
      func_0x000107c4d46c(alStack_90[0]);
      func_0x000107c615e8(lVar2);
    }
    func_0x0001000d224c(alStack_90);
    lVar2 = alStack_90[0];
    func_0x000107c614f0(alStack_90[0]);
    func_0x000107c4e06c();
    iVar1 = param_5;
    if (param_5 != 2) {
      iVar1 = 0;
    }
    if (param_5 == 1) {
      iVar1 = 1;
    }
    uVar3 = param_6;
    FUN_10335cf84(param_6,param_7);
    (**(code **)(lStack_80 + 0x20))
              (param_3,param_4,iVar1,lVar5,(uint)uVar3 & 1,param_6,param_7,lVar2,lStack_80);
    func_0x000107c615e8(alStack_90[0]);
    func_0x000107c61170(param_2);
  }
  FUN_10335da20(uVar4);
  (*param_8)();
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10335d2a0; end: 10335d4d7;  */

void FUN_10335d2a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = *param_1;
  puVar4 = &UNK_1106427e0;
  func_0x000107c613fc(&UNK_1106427e0,0x50,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  puVar4[0x28] = param_5;
  *(undefined8 *)(puVar4 + 0x30) = param_6;
  puVar4[0x38] = param_7;
  *(undefined8 *)(puVar4 + 0x40) = param_8;
  *(undefined8 *)(puVar4 + 0x48) = param_9;
  puVar5 = &UNK_110642808;
  func_0x000107c613fc(&UNK_110642808,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10335d8a4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10335d8dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f15b68;
  puStack_78 = &UNK_110642820;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_9);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_70 = FUN_10335d5d0;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_110642848;
  ppuVar7 = &puStack_90;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  FUN_10335da20(uVar9);
  (*param_10)();
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar9);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",100,0xcc,0x23,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10335d4d4);
    (*pcVar3)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",100,0xd4,0x18,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10335d4d8);
  (*pcVar3)();
}



/* Entry: 10335d4d8; end: 10335d5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335d4d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 auStack_90 [2];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f5bc00);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x0001000d224c(auStack_90);
    func_0x000107c61574(uVar1);
    uVar1 = auStack_90[0];
    func_0x000107c614f0(auStack_90[0]);
    (**(code **)(lStack_80 + 0x20))
              (param_3,param_4,param_5,param_6,param_7 & 1,param_8,param_9,uVar1,lStack_80,
               auStack_90[0]);
    func_0x000107c615e8(auStack_90[0]);
  }
  return;
}



/* Entry: 10335d5d0; end: 10335d5d3;  */

void FUN_10335d5d0(void)

{
  return;
}



/* Entry: 10335d5d4; end: 10335d807;  */

/* WARNING: Possible PIC construction at 0x00010335d644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335d7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335d648) */
/* WARNING: Removing unreachable block (ram,0x00010335d660) */
/* WARNING: Removing unreachable block (ram,0x00010335d664) */
/* WARNING: Removing unreachable block (ram,0x00010335d6e4) */
/* WARNING: Removing unreachable block (ram,0x00010335d668) */
/* WARNING: Removing unreachable block (ram,0x00010335d6f4) */
/* WARNING: Removing unreachable block (ram,0x00010335d7b8) */
/* WARNING: Removing unreachable block (ram,0x00010335d710) */
/* WARNING: Removing unreachable block (ram,0x00010335d7ec) */
/* WARNING: Removing unreachable block (ram,0x00010335d698) */

void FUN_10335d5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106426c8;
  func_0x000107c613fc(&UNK_1106426c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c4ce5c(param_1);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10335d808; end: 10335d823;  */

void FUN_10335d808(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010335d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10335d824; end: 10335d8db;  */

void FUN_10335d824(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10335d118(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10335d8dc; end: 10335d8ff;  */

void FUN_10335d8dc(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10335d900; end: 10335d93f;  */

void FUN_10335d900(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10335d940; end: 10335d993;  */

void FUN_10335d940(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  FUN_10335da20(uVar2);
  (*pcVar1)();
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10335d994; end: 10335d9c7;  */

void FUN_10335d994(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10335d9c8; end: 10335d9cb;  */

void FUN_10335d9c8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c498cc(uVar2);
  func_0x000107c61180();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10335d9cc; end: 10335da0f;  */

void FUN_10335d9cc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c498cc(uVar2);
  func_0x000107c61180();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10335da10; end: 10335da1f;  */

void FUN_10335da10(long param_1,long param_2)

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



/* Entry: 10335da20; end: 10335dc5b;  */

undefined8 FUN_10335da20(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar3 = unaff_x20;
  func_0x000107c52014();
  func_0x000107c61180();
  puVar4 = &UNK_1106428d0;
  uStack_78 = uVar3;
  func_0x000107c613fc(&UNK_1106428d0,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_78;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = &UNK_1106428f8;
  func_0x000107c613fc(&UNK_1106428f8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10335de3c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10335de68;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100f15b68;
  puStack_90 = &UNK_110642910;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110642948;
  func_0x000107c613fc(&UNK_110642948,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = unaff_x20;
  puVar8 = &UNK_110642970;
  func_0x000107c613fc(&UNK_110642970,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x10335de8c;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x10335de90;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e27b38;
  puStack_90 = &UNK_110642988;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6e,0x19,0x1d,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10335dc58);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x6e,0x1b,0x14,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return uStack_78;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10335dc5c);
  (*pcVar2)();
}



/* Entry: 10335dc5c; end: 10335de3b;  */

undefined * FUN_10335dc5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar5);
  func_0x000107c61170(unaff_x20);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  if (param_1 == 0) {
    uVar8 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    uStack_68 = 0xf000000000000000;
    uStack_70 = 0;
    func_0x000107c5ee2c(param_1,&uStack_70);
    uVar8 = 0;
    if (uStack_68 >> 0x3c < 0xf) {
      uVar8 = uStack_70;
    }
    uVar6 = 0xf000000000000000;
    if (uStack_68 >> 0x3c < 0xf) {
      uVar6 = uStack_68;
    }
  }
  func_0x000107c5ed90();
  uVar3 = 0x6461654c736e654c;
  func_0x000107c5fadc(0x6461654c736e654c,0xef6472616f627265);
  puVar4 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar2);
  if (uVar6 >> 0x3c < 0xf) {
    uVar7 = uVar8;
    func_0x000107c5ee20(uVar8,uVar6);
    func_0x0001000b44c0(uVar8,uVar6);
  }
  else {
    uVar7 = 0;
  }
  puVar2 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  func_0x000107c4913c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  (**(code **)(lVar9 + 8))(lVar5,lVar1);
  return puVar2;
}



/* Entry: 10335de3c; end: 10335de67;  */

void FUN_10335de3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  FUN_10335dc5c();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


