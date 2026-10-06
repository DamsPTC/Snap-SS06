/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e1460c; end: 100e14633; -[SCChangeUsernameFHPSignalProviderEntryPoint begin] */

void FUN_100e1460c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e14330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e14634; end: 100e14677; -[SCChangeUsernameFHPSignalProviderEntryPoint end] */

void FUN_100e14634(undefined8 param_1)

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



/* Entry: 100e14678; end: 100e14953;  */

void FUN_100e14678(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001d;
            if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10ee2e0)) ||
               (func_0x000107c605b8(0xd00000000000001d,0x800000010ef11d20,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53308();
            }
            else {
              uVar2 = 0xd00000000000001f;
              if (((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10ee2c0)) &&
                 (func_0x000107c605b8(0xd00000000000001f,0x800000010ef11d40,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ChangeUsernameFHPSignalProvider/SCChangeUsernameFHPSignalProviderEntryPoint.swift"
                                    ,0x51,2,0x35,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e14954);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c532f8();
            }
            goto LAB_100e14704;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a368();
        goto LAB_100e14704;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3f8();
  }
LAB_100e14704:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e14954; end: 100e149ff; -[SCChangeUsernameFHPSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e14954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e14678(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e14a00; end: 100e14aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14a00(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d38d30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d38d38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d38d40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d38d48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d38d50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d38d58) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e14ab0; end: 100e14acf; -[SCChangeUsernameFHPSignalProviderEntryPoint init] */

void FUN_100e14ab0(void)

{
  FUN_100e14a00();
  return;
}



/* Entry: 100e14ad0; end: 100e14b03;  */

void FUN_100e14ad0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e14b04; end: 100e14b7b; -[SCChangeUsernameFHPSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14b04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d38d30);
  func_0x000107c61610(param_1 + _DAT_112d38d38);
  func_0x000107c61610(param_1 + _DAT_112d38d40);
  func_0x000107c61610(param_1 + _DAT_112d38d48);
  func_0x000107c61610(param_1 + _DAT_112d38d50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d38d58));
  return;
}



/* Entry: 100e14b7c; end: 100e14b9b;  */

void FUN_100e14b7c(void)

{
  func_0x000107c61168(&PTR_PTR_112799558);
  return;
}



/* Entry: 100e14b9c; end: 100e14c13; -[_TtC33ChangeUsernameFHPUIConfigProvider33ChangeUsernameFHPUIConfigProvider canHandleCampaignId:] */

uint FUN_100e14b9c(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffda) && (param_2 == -0x7ffffffef10ee1f0)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 100e14c14; end: 100e14e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e14c14(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c2bdb4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d38d88);
    uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d38d88))[1];
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    lVar4 = lVar3;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar8;
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    func_0x000107c61434(uVar6);
    uVar8 = param_2;
    func_0x000107c5fb00(lVar2,param_2,lVar3);
    func_0x000107c6142c(param_2);
    puVar5 = PTR_PTR_1126aed90;
    func_0x000107c610f8();
    uVar6 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef11e10);
    func_0x000107c5fadc(lVar2,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c45cc4();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar2);
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    lVar3 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar8 = 0;
    FUN_100e14f08(0,0x112d38dc8,&PTR_PTR_1126aed90);
    *(undefined8 *)(lVar3 + 0x38) = uVar8;
    *(undefined **)(lVar3 + 0x20) = puVar5;
    FUN_100e14f08(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174(puVar5);
    func_0x000107c600f0(lVar3);
    func_0x000107c451b0(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar3);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e14e40);
  (*pcVar1)();
}



/* Entry: 100e14e40; end: 100e14e73; -[_TtC33ChangeUsernameFHPUIConfigProvider33ChangeUsernameFHPUIConfigProvider configs] */

void FUN_100e14e40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e14c14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e14e74; end: 100e14ed3; -[_TtC33ChangeUsernameFHPUIConfigProvider33ChangeUsernameFHPUIConfigProvider init] */

void FUN_100e14e74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChangeUsernameFHPUIConfigProvider.ChangeUsernameFHPUIConfigProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e14ea0);
  (*pcVar1)();
}



/* Entry: 100e14ed4; end: 100e14ee7; -[_TtC33ChangeUsernameFHPUIConfigProvider33ChangeUsernameFHPUIConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e14ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d38d88 + 8))
  ;
  return;
}



/* Entry: 100e14ee8; end: 100e14f07;  */

void FUN_100e14ee8(void)

{
  func_0x000107c61168(&PTR_PTR_112799638);
  return;
}



/* Entry: 100e14f08; end: 100e14f47;  */

void FUN_100e14f08(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e14f48; end: 100e15083;  */

void FUN_100e14f48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100e15084; end: 100e150af;  */

void FUN_100e15084(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e150b0; end: 100e150cf;  */

void FUN_100e150b0(void)

{
  func_0x000100e14f84();
  return;
}



/* Entry: 100e150d0; end: 100e150d7;  */

undefined8 FUN_100e150d0(void)

{
  return 0;
}



/* Entry: 100e150d8; end: 100e150f7;  */

void FUN_100e150d8(void)

{
  func_0x000107c61168(&PTR_PTR_112d38e18);
  return;
}



/* Entry: 100e150f8; end: 100e15103; -[SCChangeUsernameFHPUIConfigProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e150f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38e80;
  func_0x000107c61428(param_1 + _DAT_112d38e80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e15104; end: 100e1510f; -[SCChangeUsernameFHPUIConfigProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e15104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38e80;
  func_0x000107c61428(param_1 + _DAT_112d38e80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e15110; end: 100e1511b; -[SCChangeUsernameFHPUIConfigProviderEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e15110(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d38e88;
  func_0x000107c61428(param_1 + _DAT_112d38e88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1511c; end: 100e1515f;  */

void FUN_100e1511c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e15160; end: 100e1516b; -[SCChangeUsernameFHPUIConfigProviderEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e15160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d38e88;
  func_0x000107c61428(param_1 + _DAT_112d38e88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1516c; end: 100e151bf;  */

void FUN_100e1516c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e151c0; end: 100e152a3;  */

/* WARNING: Possible PIC construction at 0x000100e15248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1524c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100e151c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5d9b4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_100e150d8();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    *(long *)(lVar2 + 0x18) = unaff_x20;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    func_0x000100e14f84();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e152a4; end: 100e152cb; -[SCChangeUsernameFHPUIConfigProviderEntryPoint begin] */

void FUN_100e152a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e151c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e152cc; end: 100e1530f; -[SCChangeUsernameFHPUIConfigProviderEntryPoint end] */

void FUN_100e152cc(undefined8 param_1)

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



/* Entry: 100e15310; end: 100e154a7;  */

void FUN_100e15310(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChangeUsernameFHPUIConfigProvider/SCChangeUsernameFHPUIConfigProviderEntryPoint.swift"
                            ,0x55,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e154a8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e154a8; end: 100e15553; -[SCChangeUsernameFHPUIConfigProviderEntryPoint setValue:forIvarName:] */

void FUN_100e154a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e15310(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e15554; end: 100e155c7; -[SCChangeUsernameFHPUIConfigProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e15554(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d38e80,0);
  func_0x000107c61614(param_1 + _DAT_112d38e88,0);
  *(undefined8 *)(param_1 + _DAT_112d38e90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e155c8; end: 100e155fb;  */

void FUN_100e155c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e155fc; end: 100e15643; -[SCChangeUsernameFHPUIConfigProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e155fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d38e80);
  func_0x000107c61610(param_1 + _DAT_112d38e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d38e90));
  return;
}



/* Entry: 100e15644; end: 100e15663;  */

void FUN_100e15644(void)

{
  func_0x000107c61168(&PTR_PTR_1127996f8);
  return;
}



/* Entry: 100e15664; end: 100e15723;  */

void FUN_100e15664(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010ef11ea0);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar1 = lVar3;
      func_0x000107c6148c(lVar3,puVar4);
      if (lVar1 != 0) {
        return;
      }
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100e15724; end: 100e15a07;  */

void FUN_100e15724(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar3 = 0;
  uStack_f0 = param_1;
  uStack_e8 = param_2;
  func_0x000107c5ed50();
  lStack_f8 = *(long *)(lVar3 + -8);
  lVar9 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar12 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100e15664();
  lStack_100 = lVar9;
  func_0x000107c600f4(lVar12);
  FUN_100e15a08();
  func_0x000107c601c0(auStack_88,lVar3,lVar9);
  puVar11 = PTR___sypN_11034f1a8;
  puVar8 = PTR___sSSN_11034da80;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_70 != 0) {
    func_0x000100102924(auStack_88,auStack_a8);
    func_0x000100102924(auStack_a8,auStack_d8);
    puVar4 = &uStack_b8;
    func_0x000107c6147c(puVar4,auStack_d8,puVar11 + 8,puVar8,6);
    lVar2 = lStack_b0;
    uVar10 = uStack_b8;
    if ((((ulong)puVar4 & 1) != 0) && (lStack_b0 != 0)) {
      puVar5 = puVar6;
      func_0x000107c61558();
      puVar7 = puVar6;
      if (((ulong)puVar5 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100e15f04(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar6 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100e15f04(puVar6,uVar1 + 1,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar10;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar2;
    }
    func_0x000107c601c0(auStack_88,lVar3,lVar9);
  }
  func_0x000107c61170(lStack_100);
  (**(code **)(lStack_f8 + 8))(lVar12,lVar3);
  uVar10 = uStack_e8;
  func_0x000107c61434(uStack_e8);
  puVar8 = puVar6;
  func_0x000107c61558();
  puVar11 = puVar6;
  if (((ulong)puVar8 & 1) == 0) {
    puVar11 = (undefined *)0x0;
    FUN_100e15f04(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar1 = *(ulong *)(puVar11 + 0x10);
  puVar6 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_100e15f04(puVar6,uVar1 + 1,1,puVar11,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uStack_f0;
  *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = uVar10;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar6);
  }
  else {
    puVar8 = puVar6;
    func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
    uVar10 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010ef11ea0);
    func_0x000107c56bcc(lVar9);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar10);
  }
  return;
}



/* Entry: 100e15a08; end: 100e15a4b;  */

void FUN_100e15a08(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d38ec0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ed50(0xff);
  puVar2 = PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890;
  func_0x000107c61520(PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890,uVar1);
  puRam0000000112d38ec0 = puVar2;
  return;
}



/* Entry: 100e15a4c; end: 100e15a57; -[_TtC43ChangeUsernameStorageServicesImplementation32ChangeUsernameStorageServiceImpl markUserSkippedUsernameWhenRegWithUserId:] */

void FUN_100e15a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_100e15724(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100e15a58; end: 100e15abf; -[_TtC43ChangeUsernameStorageServicesImplementation32ChangeUsernameStorageServiceImpl userSkippedUsernameWhenRegStatusWithUserId:] */

undefined8 FUN_100e15a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c6157c(param_1);
  FUN_100e15664();
  uVar2 = uVar1;
  func_0x000107c40404();
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100e15ac0; end: 100e15e5b;  */

void FUN_100e15ac0(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lStack_100;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined *apuStack_88 [3];
  long lStack_70;
  
  lVar5 = 0;
  lStack_100 = param_2;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar5 + -8);
  lVar12 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar18 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100e15664();
  lVar6 = lVar12;
  func_0x000107c600f4(lVar18);
  FUN_100e15a08();
  func_0x000107c601c0(apuStack_88,lVar5,lVar6);
  puVar11 = PTR___sypN_11034f1a8;
  puVar17 = PTR___sSSN_11034da80;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_70 != 0) {
    func_0x000100102924(apuStack_88,auStack_a8);
    func_0x000100102924(auStack_a8,auStack_d8);
    puVar7 = &uStack_b8;
    func_0x000107c6147c(puVar7,auStack_d8,puVar11 + 8,puVar17,6);
    lVar3 = lStack_b0;
    uVar13 = uStack_b8;
    if ((((ulong)puVar7 & 1) != 0) && (lStack_b0 != 0)) {
      puVar8 = puVar9;
      func_0x000107c61558();
      puVar10 = puVar9;
      if (((ulong)puVar8 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100e15f04(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar16 = *(ulong *)(puVar10 + 0x10);
      puVar9 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100e15f04(puVar9,uVar16 + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(puVar9 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar9 + uVar16 * 0x10 + 0x20) = uVar13;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x28) = lVar3;
    }
    func_0x000107c601c0(apuStack_88,lVar5,lVar6);
  }
  func_0x000107c61170(lVar12);
  (**(code **)(lVar14 + 8))(lVar18,lVar5);
  lVar12 = lStack_100;
  uVar16 = *(ulong *)(puVar9 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar15 = 0;
    do {
      plVar19 = (long *)(puVar9 + uVar15 * 0x10 + 0x28);
      uVar20 = uVar15;
      while( true ) {
        if (*(ulong *)(puVar9 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100e15e5c);
          (*pcVar4)();
        }
        uVar1 = plVar19[-1];
        lVar6 = *plVar19;
        if ((uVar1 != param_1 || lVar6 != lVar12) &&
           (uVar15 = uVar1, func_0x000107c605b8(uVar1,lVar6,param_1,lVar12,0), (uVar15 & 1) == 0))
        break;
        uVar20 = uVar20 + 1;
        plVar19 = plVar19 + 2;
        if (uVar16 == uVar20) goto LAB_100e15da4;
      }
      func_0x000107c61434(lVar6);
      puVar11 = puVar17;
      func_0x000107c61558();
      apuStack_88[0] = puVar17;
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar17 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(apuStack_88[0] + 0x10);
      if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar2 + 1,1);
      }
      uVar15 = uVar20 + 1;
      *(ulong *)(apuStack_88[0] + 0x10) = uVar2 + 1;
      *(ulong *)(apuStack_88[0] + uVar2 * 0x10 + 0x20) = uVar1;
      *(long *)(apuStack_88[0] + uVar2 * 0x10 + 0x28) = lVar6;
      puVar17 = apuStack_88[0];
    } while (uVar16 - 1 != uVar20);
  }
LAB_100e15da4:
  func_0x000107c6142c(puVar9);
  lVar12 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c61574(puVar17);
  }
  else {
    puVar9 = puVar17;
    func_0x000107c5fc48(puVar17,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar17);
    uVar13 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010ef11ea0);
    func_0x000107c56bcc(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar13);
  }
  return;
}



/* Entry: 100e15e5c; end: 100e15e67; -[_TtC43ChangeUsernameStorageServicesImplementation32ChangeUsernameStorageServiceImpl removeUserSkippedUsernameInRegFlagWithUserId:] */

void FUN_100e15e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_100e15ac0(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100e15e68; end: 100e15ebf;  */

void FUN_100e15e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100e15ec0; end: 100e15f03;  */

void FUN_100e15ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e15f04; end: 100e16017;  */

undefined *
FUN_100e15f04(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e16018);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 100e16018; end: 100e160c7;  */

void FUN_100e16018(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 100e160c8; end: 100e160cf;  */

void FUN_100e160c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    lVar1 = 0;
    func_0x000100e15ee4();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
  }
  return;
}



/* Entry: 100e160d0; end: 100e16107;  */

void FUN_100e160d0(long param_1)

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



/* Entry: 100e16108; end: 100e1612b;  */

void FUN_100e16108(long param_1,long param_2)

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



/* Entry: 100e1612c; end: 100e161cb;  */

void FUN_100e1612c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e161cc; end: 100e162b3;  */

void FUN_100e161cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110355500;
  func_0x000107c613fc(&UNK_110355500,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x100e162bc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100e160d0;
  puStack_48 = &UNK_110355518;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  FUN_10151dc28(0);
  func_0x000107c610f8();
  func_0x00010151db98();
  *param_1 = puVar1;
  return;
}



/* Entry: 100e162b4; end: 100e162bf;  */

void FUN_100e162b4(long param_1,long param_2)

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



/* Entry: 100e162c0; end: 100e16307; -[SCChangeUsernameStorageServiceProvider applicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e162c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39040;
  func_0x000107c61428(param_1 + _DAT_112d39040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e16308; end: 100e164c3; -[SCChangeUsernameStorageServiceProvider setApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e16308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39040;
  func_0x000107c61428(param_1 + _DAT_112d39040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e164c4; end: 100e164e7;  */

void FUN_100e164c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    lVar1 = 0;
    func_0x000100e15ee4();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
  }
  return;
}



/* Entry: 100e164e8; end: 100e16573; -[SCChangeUsernameStorageServiceProvider provide] */

void FUN_100e164e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000100e16360();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ChangeUsernameStorageServicesImplementation/SCChangeUsernameStorageServiceProvider.swift"
                      ,0x58,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e16574);
  (*pcVar1)();
}



/* Entry: 100e16574; end: 100e165a7; -[SCChangeUsernameStorageServiceProvider __safeProvide] */

void FUN_100e16574(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e16360();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e165a8; end: 100e165eb; -[SCChangeUsernameStorageServiceProvider end] */

void FUN_100e165a8(undefined8 param_1)

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



/* Entry: 100e165ec; end: 100e16717;  */

void FUN_100e165ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ef1f0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd00000000000001a,0x800000010ef10e10,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                          "ChangeUsernameStorageServicesImplementation/SCChangeUsernameStorageServiceProvider.swift"
                          ,0x58,2,0x29,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e16718);
      (*pcVar1)();
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52858();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e16718; end: 100e167c3; -[SCChangeUsernameStorageServiceProvider setValue:forIvarName:] */

void FUN_100e16718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e165ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e167c4; end: 100e16823; -[SCChangeUsernameStorageServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e167c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39040,0);
  *(undefined8 *)(param_1 + _DAT_112d39048) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e16824; end: 100e16857;  */

void FUN_100e16824(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e16858; end: 100e1688f; -[SCChangeUsernameStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e16858(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39040);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39048));
  return;
}



/* Entry: 100e16890; end: 100e168af;  */

void FUN_100e16890(void)

{
  func_0x000107c61168(&PTR_PTR_112d39090);
  return;
}



/* Entry: 100e168b0; end: 100e168bb;  */

void FUN_100e168b0(long param_1,long param_2)

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



/* Entry: 100e168bc; end: 100e16967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100e168bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d390f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d390f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d39100) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d39108) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d39110) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 100e16968; end: 100e16a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e16968(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d390f8);
  func_0x000107c40634();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_110355640;
    func_0x000107c613fc(&UNK_110355640,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_100e16abc;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x100e17798;
    puStack_48 = &UNK_110355658;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar5 = lVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d390f0);
    *(long *)(unaff_x20 + _DAT_112d390f0) = lVar5;
    func_0x000107c61170(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e16a60);
  (*pcVar1)();
}



/* Entry: 100e16a60; end: 100e16abb;  */

void FUN_100e16a60(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100e16ac4(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100e16abc; end: 100e16ac3;  */

void FUN_100e16abc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100e16ac4(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e16ac4; end: 100e16c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e16ac4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39108);
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010ef12000);
    lVar1 = lVar2;
    func_0x000107c43f64(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    puVar4 = &UNK_110355640;
    func_0x000107c613fc(&UNK_110355640,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1103556a8;
    func_0x000107c613fc(&UNK_1103556a8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    pcStack_50 = FUN_100e17294;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100e1701c;
    puStack_58 = &UNK_1103556c0;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar4);
    pcVar7 = "contextualNotificationRecievedTrigger(_:)";
    func_0x0001000c10c0("contextualNotificationRecievedTrigger(_:)");
    func_0x000107c61180();
    func_0x000107c5dc68(lVar1);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e16c50; end: 100e16c6b;  */

void FUN_100e16c50(long param_1,long param_2)

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



/* Entry: 100e16c6c; end: 100e16cf3;  */

void FUN_100e16c6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_100e16cf4(param_4,param_1);
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100e16cf4; end: 100e1701b;  */

/* WARNING: Possible PIC construction at 0x000100e16d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e16d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e16fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e16fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e16fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e16ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e16fcc) */
/* WARNING: Removing unreachable block (ram,0x000100e16fbc) */
/* WARNING: Removing unreachable block (ram,0x000100e16d78) */
/* WARNING: Removing unreachable block (ram,0x000100e16d50) */
/* WARNING: Removing unreachable block (ram,0x000100e16ff8) */
/* WARNING: Removing unreachable block (ram,0x000100e16d54) */
/* WARNING: Removing unreachable block (ram,0x000100e16da0) */
/* WARNING: Removing unreachable block (ram,0x000100e16d74) */
/* WARNING: Removing unreachable block (ram,0x000100e16fe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e16cf4(undefined8 param_1)

{
  func_0x000104513428();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1701c; end: 100e17093;  */

/* WARNING: Possible PIC construction at 0x000100e17078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1707c) */

void FUN_100e1701c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100e17094; end: 100e17137;  */

void FUN_100e17094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110355918;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c420a8(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100e17138; end: 100e17197; -[_TtC35ContextualNotificationPromptFeature45ContextualNotificationPromptFeatureEntryPoint init] */

void FUN_100e17138(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextualNotificationPromptFeature.ContextualNotificationPromptFeatureEntryPoint"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e17164);
  (*pcVar1)();
}



/* Entry: 100e17198; end: 100e1721f; -[_TtC35ContextualNotificationPromptFeature45ContextualNotificationPromptFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e171b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e171d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e171b8) */
/* WARNING: Removing unreachable block (ram,0x000100e171d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d39110));
  return;
}



/* Entry: 100e17220; end: 100e17227;  */

undefined8 FUN_100e17220(void)

{
  return 0;
}



/* Entry: 100e17228; end: 100e17273; -[_TtC35ContextualNotificationPromptFeature45ContextualNotificationPromptFeatureEntryPoint inAppTakeoverScopeDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d39110);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100e17274; end: 100e17293;  */

void FUN_100e17274(void)

{
  func_0x000107c61168(&PTR_PTR_112799808);
  return;
}



/* Entry: 100e17294; end: 100e172b7;  */

void FUN_100e17294(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_100e16cf4(uVar1,param_1);
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100e172b8; end: 100e17387;  */

void FUN_100e172b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100e17388; end: 100e1766b;  */

undefined1  [16] FUN_100e17388(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  puVar4 = &UNK_110355798;
  func_0x000107c613fc(&UNK_110355798,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_80;
  puVar5 = &UNK_1103557c0;
  func_0x000107c613fc(&UNK_1103557c0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100e176b4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_100e176dc;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_10006eb60;
  puStack_98 = &UNK_1103557d8;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110355810;
  func_0x000107c613fc(&UNK_110355810,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_80;
  puVar8 = &UNK_110355838;
  func_0x000107c613fc(&UNK_110355838,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_100e176fc;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_90 = (code *)0x100e17790;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_10006eb60;
  puStack_98 = &UNK_110355850;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_88;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110355888;
  func_0x000107c613fc(&UNK_110355888,0x18,7);
  *(undefined8 **)(puVar10 + 0x10) = &uStack_80;
  puVar11 = &UNK_1103558b0;
  func_0x000107c613fc(&UNK_1103558b0,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x100e17724;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_90 = (code *)0x100e17794;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_10006eb60;
  puStack_98 = &UNK_1103558c8;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar2 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar2);
  func_0x000107c4c720(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  auVar1._8_8_ = uStack_78;
  auVar1._0_8_ = uStack_80;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x90,0x5e,0x1f,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e17664);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x90,0x60,0x24,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x90,0x62,0x17,1);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) == 0) {
      return auVar1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e1766c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100e17668);
  (*pcVar3)();
}



/* Entry: 100e1766c; end: 100e176b3;  */

undefined8 FUN_100e1766c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100e176b4; end: 100e176db;  */

void FUN_100e176b4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0xd000000000000017;
  puVar2[1] = 0x800000010ef12080;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100e176dc; end: 100e176fb;  */

void FUN_100e176dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e176fc; end: 100e1779f;  */

void FUN_100e176fc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = puVar2[1];
  *puVar2 = 0xd000000000000017;
  puVar2[1] = 0x800000010ef12060;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 100e177a0; end: 100e177ab; -[SCContextualNotificationPromptFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39148;
  func_0x000107c61428(param_1 + _DAT_112d39148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e177ac; end: 100e177b7; -[SCContextualNotificationPromptFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39148;
  func_0x000107c61428(param_1 + _DAT_112d39148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e177b8; end: 100e177c3; -[SCContextualNotificationPromptFeatureEntryPoint snapServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39150;
  func_0x000107c61428(param_1 + _DAT_112d39150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e177c4; end: 100e177cf; -[SCContextualNotificationPromptFeatureEntryPoint setSnapServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39150;
  func_0x000107c61428(param_1 + _DAT_112d39150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e177d0; end: 100e177db; -[SCContextualNotificationPromptFeatureEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39158;
  func_0x000107c61428(param_1 + _DAT_112d39158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e177dc; end: 100e177e7; -[SCContextualNotificationPromptFeatureEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39158;
  func_0x000107c61428(param_1 + _DAT_112d39158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e177e8; end: 100e177f3; -[SCContextualNotificationPromptFeatureEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e177e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39160;
  func_0x000107c61428(param_1 + _DAT_112d39160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e177f4; end: 100e17837;  */

void FUN_100e177f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e17838; end: 100e17843; -[SCContextualNotificationPromptFeatureEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39160;
  func_0x000107c61428(param_1 + _DAT_112d39160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e17844; end: 100e17897;  */

void FUN_100e17844(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e17898; end: 100e178df; -[SCContextualNotificationPromptFeatureEntryPoint inAppTakeoverScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17898(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39168;
  func_0x000107c61428(param_1 + _DAT_112d39168,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e178e0; end: 100e17943; -[SCContextualNotificationPromptFeatureEntryPoint setInAppTakeoverScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e178e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39168;
  func_0x000107c61428(param_1 + _DAT_112d39168,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


