/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a81d10; end: 100a81d53;  */

void FUN_100a81d10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a81d54; end: 100a81d5f; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint strUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81d54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048ef8;
  func_0x000107c61428(param_1 + _DAT_113048ef8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a81d60; end: 100a81da7; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint sCLegacyStoriesTooltipsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048f00;
  func_0x000107c61428(param_1 + _DAT_113048f00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a81da8; end: 100a81dc7;  */

void FUN_100a81da8(void)

{
  func_0x000107c61168(&PTR_PTR_11297ee38);
  return;
}



/* Entry: 100a81dc8; end: 100a81dcf;  */

void FUN_100a81dc8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a81dd0; end: 100a81e23;  */

void FUN_100a81dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a81e24; end: 100a81e2b;  */

void FUN_100a81e24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002020e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a81eb4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a81e2c; end: 100a81eb3;  */

void FUN_100a81e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002020e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a81eb4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a81eb4; end: 100a8206b;  */

void FUN_100a81eb4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efcf970);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8206c);
  (*pcVar1)();
}



/* Entry: 100a8206c; end: 100a82183; -[SCLegacyStoriesTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8206c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112727e5c);
  }
  func_0x000107c61174(uVar3);
  puVar2 = PTR_PTR_1126bd3a0;
  func_0x000107c610f4(PTR_PTR_1126bd3a0);
  func_0x000107c47188();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100a82184; end: 100a821db; -[SCLegacyStoriesTooltipsServices initWithLegacyStoriesTooltipsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_1130491a8) = param_3;
  lVar2 = param_1;
  FUN_100209e2c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100a821dc; end: 100a82207;  */

void FUN_100a821dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a82208; end: 100a8220f; +[SCUserFileManagementEntryPoint context] */

undefined8 FUN_100a82208(void)

{
  return 1;
}



/* Entry: 100a82210; end: 100a82383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82210(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112db2680,0);
  *(undefined8 *)(unaff_x20 + _DAT_112db2688) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db26f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2700) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2708) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2710) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2718) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112db2740) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a82384; end: 100a823a3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_100a82384(void)

{
  FUN_100a82210();
  return;
}



/* Entry: 100a823a4; end: 100a8244f; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a823a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a82450(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a82450; end: 100a82ec3;  */

void FUN_100a82450(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef104eb70)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010efb1490,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c524a0();
    }
    else {
      uVar2 = 0xd00000000000001f;
      if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef104eb50)) ||
         (func_0x000107c605b8(0xd00000000000001f,0x800000010efb14b0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57f8c();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef104eb30)) ||
           (func_0x000107c605b8(0xd000000000000026,0x800000010efb14d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58034();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef104eb00)) {
            uVar2 = 0xd00000000000001f;
            func_0x000107c605b8(0xd00000000000001f,0x800000010efb1500,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000023;
              if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef104eae0)) ||
                 (func_0x000107c605b8(0xd000000000000023,0x800000010efb1520,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c584ac();
                goto LAB_100a824e0;
              }
              if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104eab0)) {
                uVar2 = 0xd000000000000023;
                func_0x000107c605b8(0xd000000000000023,0x800000010efb1550,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef104ea80)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010efb1580,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c58534();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef104ea60)) ||
                       (func_0x000107c605b8(0xd00000000000001e,0x800000010efb15a0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58738();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef104ea40)) {
                        uVar2 = 0xd00000000000001b;
                        func_0x000107c605b8(0xd00000000000001b,0x800000010efb15c0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0xd00000000000001d;
                          if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef104ea20))
                             || (func_0x000107c605b8(0xd00000000000001d,0x800000010efb15e0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c588b0();
                          }
                          else {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffe8) &&
                                (param_3 == -0x7ffffffef104ea00)) ||
                               (func_0x000107c605b8(0xd000000000000018,0x800000010efb1600,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c58a44();
                            }
                            else {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffd8) &&
                                  (param_3 == -0x7ffffffef104e9e0)) ||
                                 (func_0x000107c605b8(0xd000000000000028,0x800000010efb1620,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c580a0();
                              }
                              else {
                                uVar2 = 0xd000000000000035;
                                if (((param_2 == -0x2fffffffffffffcb) &&
                                    (param_3 == -0x7ffffffef104e9b0)) ||
                                   (func_0x000107c605b8(0xd000000000000035,0x800000010efb1650,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c581d4();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffcb) ||
                                     (param_3 != -0x7ffffffef104e970)) {
                                    uVar2 = 0xd000000000000035;
                                    func_0x000107c605b8(0xd000000000000035,0x800000010efb1690,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0;
                                      if (((param_2 == -0x2fffffffffffffe0) &&
                                          (param_3 == -0x7ffffffef104e930)) ||
                                         (func_0x000107c605b8(0xd000000000000020,0x800000010efb16d0,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                        func_0x000107c605b0();
                                        func_0x000107c582c0();
                                      }
                                      else {
                                        uVar2 = 0xd000000000000027;
                                        if (((param_2 == -0x2fffffffffffffd9) &&
                                            (param_3 == -0x7ffffffef104e900)) ||
                                           (func_0x000107c605b8(0xd000000000000027,
                                                                0x800000010efb1700,param_2,param_3,0
                                                               ), (uVar2 & 1) != 0)) {
                                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c58338();
                                        }
                                        else {
                                          uVar2 = 0;
                                          if (((param_2 == -0x2fffffffffffffd4) &&
                                              (param_3 == -0x7ffffffef104e8d0)) ||
                                             (func_0x000107c605b8(0xd00000000000002c,
                                                                  0x800000010efb1730,param_2,param_3
                                                                  ,0), (uVar2 & 1) != 0)) {
                                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c58474();
                                          }
                                          else {
                                            uVar2 = 0;
                                            if (((param_2 == -0x2fffffffffffffd6) &&
                                                (param_3 == -0x7ffffffef104e8a0)) ||
                                               (func_0x000107c605b8(0xd00000000000002a,
                                                                    0x800000010efb1760,param_2,
                                                                    param_3,0), (uVar2 & 1) != 0)) {
                                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                              ;
                                              func_0x000107c605b0();
                                              func_0x000107c58494();
                                            }
                                            else {
                                              uVar2 = 0xd000000000000025;
                                              if (((param_2 == -0x2fffffffffffffdb) &&
                                                  (param_3 == -0x7ffffffef104e870)) ||
                                                 (func_0x000107c605b8(0xd000000000000025,
                                                                      0x800000010efb1790,param_2,
                                                                      param_3,0), (uVar2 & 1) != 0))
                                              {
                                                FUN_1006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c584d4();
                                              }
                                              else {
                                                uVar2 = 0xd00000000000003b;
                                                if (((param_2 == -0x2fffffffffffffc5) &&
                                                    (param_3 == -0x7ffffffef104e840)) ||
                                                   (func_0x000107c605b8(0xd00000000000003b,
                                                                        0x800000010efb17c0,param_2,
                                                                        param_3,0), (uVar2 & 1) != 0
                                                   )) {
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c584dc();
                                                }
                                                else {
                                                  if ((param_2 != -0x2fffffffffffffe5) ||
                                                     (param_3 != -0x7ffffffef104e800)) {
                                                    uVar2 = 0xd00000000000001b;
                                                    func_0x000107c605b8(0xd00000000000001b,
                                                                        0x800000010efb1800,param_2,
                                                                        param_3,0);
                                                    if ((uVar2 & 1) == 0) {
                                                      if ((param_2 != -0x2fffffffffffffd8) ||
                                                         (param_3 != -0x7ffffffef104e7e0)) {
                                                        uVar2 = 0;
                                                        func_0x000107c605b8(0xd000000000000028,
                                                                            0x800000010efb1820,
                                                                            param_2,param_3,0);
                                                        if ((uVar2 & 1) == 0) {
                                                          if ((param_2 != -0x2fffffffffffffd6) ||
                                                             (param_3 != -0x7ffffffef104e7b0)) {
                                                            uVar2 = 0;
                                                            func_0x000107c605b8(0xd00000000000002a,
                                                                                0x800000010efb1850,
                                                                                param_2,param_3,0);
                                                            if ((uVar2 & 1) == 0) {
                                                              func_0x000107c602fc(0x15);
                                                              func_0x000107c6142c(0xe000000000000000
                                                                                 );
                                                              func_0x000107c5fb78(param_2,param_3);
                                                              func_0x000107c60450("Fatal error",0xb,
                                                                                  2,
                                                  0xd000000000000013,0x800000010ef0fc20,
                                                  "UserSessionScopeGraphBridge/SCUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                                                  ,0x4e,2,0xc3,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a82ec4)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5a400();
                                                  goto LAB_100a824e0;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c58654();
                                                  goto LAB_100a824e0;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5852c();
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_100a824e0;
                                    }
                                  }
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c581d8();
                                }
                              }
                            }
                          }
                          goto LAB_100a824e0;
                        }
                      }
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58864();
                    }
                  }
                  goto LAB_100a824e0;
                }
              }
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c584c4();
              goto LAB_100a824e0;
            }
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58044();
        }
      }
    }
  }
LAB_100a824e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a82ec4; end: 100a82f1b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2680;
  func_0x000107c61428(param_1 + _DAT_112db2680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a82f1c; end: 100a82f27; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2738;
  func_0x000107c61428(param_1 + _DAT_112db2738,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82f28; end: 100a82f87;  */

void FUN_100a82f28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100a82f88; end: 100a82f93; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setAddFriendsTrayScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2688;
  func_0x000107c61428(param_1 + _DAT_112db2688,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82f94; end: 100a82f9f; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCActiveUserSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2690;
  func_0x000107c61428(param_1 + _DAT_112db2690,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fa0; end: 100a82fab; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiAvatarBuilderLensScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2698;
  func_0x000107c61428(param_1 + _DAT_112db2698,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fac; end: 100a82fb7; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiCreateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26a0;
  func_0x000107c61428(param_1 + _DAT_112db26a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fb8; end: 100a82fc3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensProcessingBitmojiScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26a8;
  func_0x000107c61428(param_1 + _DAT_112db26a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fc4; end: 100a82fcf; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensProcessingPluginsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26b0;
  func_0x000107c61428(param_1 + _DAT_112db26b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fd0; end: 100a82fdb; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLogoutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26b8;
  func_0x000107c61428(param_1 + _DAT_112db26b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fdc; end: 100a82fe7; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCPostRegistrationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26c0;
  func_0x000107c61428(param_1 + _DAT_112db26c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82fe8; end: 100a82ff3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCShakeToReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26c8;
  func_0x000107c61428(param_1 + _DAT_112db26c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a82ff4; end: 100a82fff; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCSnapSavingEventScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a82ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26d0;
  func_0x000107c61428(param_1 + _DAT_112db26d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83000; end: 100a8300b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCTermsOfUseScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26d8;
  func_0x000107c61428(param_1 + _DAT_112db26d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8300c; end: 100a83017; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCBootstrapResponseProcessorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8300c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26e0;
  func_0x000107c61428(param_1 + _DAT_112db26e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83018; end: 100a83023; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCComposerUserSessionImageLoadersRegistryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26e8;
  func_0x000107c61428(param_1 + _DAT_112db26e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83024; end: 100a8302f; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCComposerUserSessionVideoLoadersRegistryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26f0;
  func_0x000107c61428(param_1 + _DAT_112db26f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83030; end: 100a8303b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCDeltaSyncProcessorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db26f8;
  func_0x000107c61428(param_1 + _DAT_112db26f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8303c; end: 100a83047; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCFriendmojiDecoratorPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8303c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2700;
  func_0x000107c61428(param_1 + _DAT_112db2700,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83048; end: 100a83053; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensExternalDataFetchingPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2708;
  func_0x000107c61428(param_1 + _DAT_112db2708,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83054; end: 100a8305f; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensMetadataRepositoryPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2710;
  func_0x000107c61428(param_1 + _DAT_112db2710,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83060; end: 100a8306b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensProcessingURIPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2718;
  func_0x000107c61428(param_1 + _DAT_112db2718,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8306c; end: 100a83077; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLensScheduleNamespaceRequestFeatureInfoPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2720;
  func_0x000107c61428(param_1 + _DAT_112db2720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83078; end: 100a83083; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCLogoutCleanupScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2728;
  func_0x000107c61428(param_1 + _DAT_112db2728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83084; end: 100a8308f; -[SCUserSessionScopeGraphBridgeSaberEntryPoint setSCMessagePresendUploadPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a83084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2730;
  func_0x000107c61428(param_1 + _DAT_112db2730,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a83090; end: 100a830b7; -[SCUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a83090(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a830b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a830b8; end: 100a843bb;  */

/* WARNING: Possible PIC construction at 0x000100a83918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a839b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a839c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a839e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a842f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a842a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a842b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a842c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a842d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a841f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a840e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a84040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a83b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a83b44) */
/* WARNING: Removing unreachable block (ram,0x000100a83b34) */
/* WARNING: Removing unreachable block (ram,0x000100a83b64) */
/* WARNING: Removing unreachable block (ram,0x000100a83b54) */
/* WARNING: Removing unreachable block (ram,0x000100a83b94) */
/* WARNING: Removing unreachable block (ram,0x000100a83b84) */
/* WARNING: Removing unreachable block (ram,0x000100a83bd4) */
/* WARNING: Removing unreachable block (ram,0x000100a83bc4) */
/* WARNING: Removing unreachable block (ram,0x000100a83bb4) */
/* WARNING: Removing unreachable block (ram,0x000100a83c14) */
/* WARNING: Removing unreachable block (ram,0x000100a83c04) */
/* WARNING: Removing unreachable block (ram,0x000100a83bf4) */
/* WARNING: Removing unreachable block (ram,0x000100a83be4) */
/* WARNING: Removing unreachable block (ram,0x000100a83c54) */
/* WARNING: Removing unreachable block (ram,0x000100a83c44) */
/* WARNING: Removing unreachable block (ram,0x000100a83c34) */
/* WARNING: Removing unreachable block (ram,0x000100a83c24) */
/* WARNING: Removing unreachable block (ram,0x000100a83ca4) */
/* WARNING: Removing unreachable block (ram,0x000100a83c94) */
/* WARNING: Removing unreachable block (ram,0x000100a83c84) */
/* WARNING: Removing unreachable block (ram,0x000100a83c74) */
/* WARNING: Removing unreachable block (ram,0x000100a83d04) */
/* WARNING: Removing unreachable block (ram,0x000100a83cf4) */
/* WARNING: Removing unreachable block (ram,0x000100a83ce4) */
/* WARNING: Removing unreachable block (ram,0x000100a83cd4) */
/* WARNING: Removing unreachable block (ram,0x000100a83cc4) */
/* WARNING: Removing unreachable block (ram,0x000100a83d64) */
/* WARNING: Removing unreachable block (ram,0x000100a83d54) */
/* WARNING: Removing unreachable block (ram,0x000100a83d44) */
/* WARNING: Removing unreachable block (ram,0x000100a83d34) */
/* WARNING: Removing unreachable block (ram,0x000100a83d24) */
/* WARNING: Removing unreachable block (ram,0x000100a83d14) */
/* WARNING: Removing unreachable block (ram,0x000100a83dc4) */
/* WARNING: Removing unreachable block (ram,0x000100a83db4) */
/* WARNING: Removing unreachable block (ram,0x000100a83da4) */
/* WARNING: Removing unreachable block (ram,0x000100a83d94) */
/* WARNING: Removing unreachable block (ram,0x000100a83d84) */
/* WARNING: Removing unreachable block (ram,0x000100a83d74) */
/* WARNING: Removing unreachable block (ram,0x000100a83e34) */
/* WARNING: Removing unreachable block (ram,0x000100a83e24) */
/* WARNING: Removing unreachable block (ram,0x000100a83e14) */
/* WARNING: Removing unreachable block (ram,0x000100a83e04) */
/* WARNING: Removing unreachable block (ram,0x000100a83df4) */
/* WARNING: Removing unreachable block (ram,0x000100a83de4) */
/* WARNING: Removing unreachable block (ram,0x000100a83eb4) */
/* WARNING: Removing unreachable block (ram,0x000100a83ea4) */
/* WARNING: Removing unreachable block (ram,0x000100a83e94) */
/* WARNING: Removing unreachable block (ram,0x000100a83e84) */
/* WARNING: Removing unreachable block (ram,0x000100a83e74) */
/* WARNING: Removing unreachable block (ram,0x000100a83e64) */
/* WARNING: Removing unreachable block (ram,0x000100a83e54) */
/* WARNING: Removing unreachable block (ram,0x000100a83f34) */
/* WARNING: Removing unreachable block (ram,0x000100a83f24) */
/* WARNING: Removing unreachable block (ram,0x000100a83f14) */
/* WARNING: Removing unreachable block (ram,0x000100a83f04) */
/* WARNING: Removing unreachable block (ram,0x000100a83ef4) */
/* WARNING: Removing unreachable block (ram,0x000100a83ee4) */
/* WARNING: Removing unreachable block (ram,0x000100a83ed4) */
/* WARNING: Removing unreachable block (ram,0x000100a83ec4) */
/* WARNING: Removing unreachable block (ram,0x000100a83fb4) */
/* WARNING: Removing unreachable block (ram,0x000100a83fa4) */
/* WARNING: Removing unreachable block (ram,0x000100a83f94) */
/* WARNING: Removing unreachable block (ram,0x000100a83f84) */
/* WARNING: Removing unreachable block (ram,0x000100a83f74) */
/* WARNING: Removing unreachable block (ram,0x000100a83f64) */
/* WARNING: Removing unreachable block (ram,0x000100a83f54) */
/* WARNING: Removing unreachable block (ram,0x000100a83f44) */
/* WARNING: Removing unreachable block (ram,0x000100a84044) */
/* WARNING: Removing unreachable block (ram,0x000100a84034) */
/* WARNING: Removing unreachable block (ram,0x000100a84024) */
/* WARNING: Removing unreachable block (ram,0x000100a84014) */
/* WARNING: Removing unreachable block (ram,0x000100a84004) */
/* WARNING: Removing unreachable block (ram,0x000100a83ff4) */
/* WARNING: Removing unreachable block (ram,0x000100a83fe4) */
/* WARNING: Removing unreachable block (ram,0x000100a83fd4) */
/* WARNING: Removing unreachable block (ram,0x000100a840e4) */
/* WARNING: Removing unreachable block (ram,0x000100a840d4) */
/* WARNING: Removing unreachable block (ram,0x000100a840c4) */
/* WARNING: Removing unreachable block (ram,0x000100a840b4) */
/* WARNING: Removing unreachable block (ram,0x000100a840a4) */
/* WARNING: Removing unreachable block (ram,0x000100a84094) */
/* WARNING: Removing unreachable block (ram,0x000100a84084) */
/* WARNING: Removing unreachable block (ram,0x000100a84074) */
/* WARNING: Removing unreachable block (ram,0x000100a84064) */
/* WARNING: Removing unreachable block (ram,0x000100a84184) */
/* WARNING: Removing unreachable block (ram,0x000100a84174) */
/* WARNING: Removing unreachable block (ram,0x000100a84164) */
/* WARNING: Removing unreachable block (ram,0x000100a84154) */
/* WARNING: Removing unreachable block (ram,0x000100a84144) */
/* WARNING: Removing unreachable block (ram,0x000100a84134) */
/* WARNING: Removing unreachable block (ram,0x000100a84124) */
/* WARNING: Removing unreachable block (ram,0x000100a84114) */
/* WARNING: Removing unreachable block (ram,0x000100a84104) */
/* WARNING: Removing unreachable block (ram,0x000100a840f4) */
/* WARNING: Removing unreachable block (ram,0x000100a84224) */
/* WARNING: Removing unreachable block (ram,0x000100a84214) */
/* WARNING: Removing unreachable block (ram,0x000100a84204) */
/* WARNING: Removing unreachable block (ram,0x000100a841f4) */
/* WARNING: Removing unreachable block (ram,0x000100a841e4) */
/* WARNING: Removing unreachable block (ram,0x000100a841d4) */
/* WARNING: Removing unreachable block (ram,0x000100a841c4) */
/* WARNING: Removing unreachable block (ram,0x000100a841b4) */
/* WARNING: Removing unreachable block (ram,0x000100a841a4) */
/* WARNING: Removing unreachable block (ram,0x000100a84194) */
/* WARNING: Removing unreachable block (ram,0x000100a842d4) */
/* WARNING: Removing unreachable block (ram,0x000100a842c4) */
/* WARNING: Removing unreachable block (ram,0x000100a842b4) */
/* WARNING: Removing unreachable block (ram,0x000100a842a4) */
/* WARNING: Removing unreachable block (ram,0x000100a84294) */
/* WARNING: Removing unreachable block (ram,0x000100a84284) */
/* WARNING: Removing unreachable block (ram,0x000100a84274) */
/* WARNING: Removing unreachable block (ram,0x000100a84264) */
/* WARNING: Removing unreachable block (ram,0x000100a84254) */
/* WARNING: Removing unreachable block (ram,0x000100a84244) */
/* WARNING: Removing unreachable block (ram,0x000100a84394) */
/* WARNING: Removing unreachable block (ram,0x000100a84384) */
/* WARNING: Removing unreachable block (ram,0x000100a84374) */
/* WARNING: Removing unreachable block (ram,0x000100a84364) */
/* WARNING: Removing unreachable block (ram,0x000100a84354) */
/* WARNING: Removing unreachable block (ram,0x000100a84344) */
/* WARNING: Removing unreachable block (ram,0x000100a84334) */
/* WARNING: Removing unreachable block (ram,0x000100a84324) */
/* WARNING: Removing unreachable block (ram,0x000100a84314) */
/* WARNING: Removing unreachable block (ram,0x000100a84304) */
/* WARNING: Removing unreachable block (ram,0x000100a842f4) */
/* WARNING: Removing unreachable block (ram,0x000100a83abc) */
/* WARNING: Removing unreachable block (ram,0x000100a83aac) */
/* WARNING: Removing unreachable block (ram,0x000100a83a9c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a8c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a7c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a6c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a5c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a4c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a3c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a2c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a1c) */
/* WARNING: Removing unreachable block (ram,0x000100a83a0c) */
/* WARNING: Removing unreachable block (ram,0x000100a839e4) */
/* WARNING: Removing unreachable block (ram,0x000100a839cc) */
/* WARNING: Removing unreachable block (ram,0x000100a839b4) */
/* WARNING: Removing unreachable block (ram,0x000100a8399c) */
/* WARNING: Removing unreachable block (ram,0x000100a8398c) */
/* WARNING: Removing unreachable block (ram,0x000100a8397c) */
/* WARNING: Removing unreachable block (ram,0x000100a8396c) */
/* WARNING: Removing unreachable block (ram,0x000100a8395c) */
/* WARNING: Removing unreachable block (ram,0x000100a8394c) */
/* WARNING: Removing unreachable block (ram,0x000100a8393c) */
/* WARNING: Removing unreachable block (ram,0x000100a8392c) */
/* WARNING: Removing unreachable block (ram,0x000100a8391c) */
/* WARNING: Removing unreachable block (ram,0x000100a83b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a830b8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [2];
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3d6f0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509e4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50a8c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c50a9c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c50f04();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c50f1c();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              lVar5 = unaff_x20;
              func_0x000107c50f8c();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar5 = unaff_x20;
                func_0x000107c51190();
                func_0x000107c61180();
                if (lVar5 != 0) {
                  lVar5 = unaff_x20;
                  func_0x000107c512bc();
                  func_0x000107c61180();
                  if (lVar5 != 0) {
                    lVar5 = unaff_x20;
                    func_0x000107c51308();
                    func_0x000107c61180();
                    if (lVar5 == 0) {
                      func_0x000107c61170(lVar3);
                      lVar3 = lVar4;
                    }
                    else {
                      lVar5 = unaff_x20;
                      func_0x000107c5149c();
                      func_0x000107c61180();
                      if (lVar5 == 0) {
                        func_0x000107c61170(lVar3);
                        lVar3 = lVar4;
                      }
                      else {
                        lVar5 = unaff_x20;
                        func_0x000107c50af8();
                        func_0x000107c61180();
                        if (lVar5 != 0) {
                          lVar5 = unaff_x20;
                          func_0x000107c50c2c();
                          func_0x000107c61180();
                          if (lVar5 != 0) {
                            lVar5 = unaff_x20;
                            func_0x000107c50c30();
                            func_0x000107c61180();
                            if (lVar5 == 0) {
                              func_0x000107c61170(lVar3);
                              lVar3 = lVar4;
                            }
                            else {
                              lVar5 = unaff_x20;
                              func_0x000107c50d18();
                              func_0x000107c61180();
                              if (lVar5 == 0) {
                                func_0x000107c61170(lVar3);
                                lVar3 = lVar4;
                              }
                              else {
                                lVar5 = unaff_x20;
                                func_0x000107c50d90();
                                func_0x000107c61180();
                                if (lVar5 != 0) {
                                  lVar5 = unaff_x20;
                                  func_0x000107c50ecc();
                                  func_0x000107c61180();
                                  if (lVar5 != 0) {
                                    lVar5 = unaff_x20;
                                    func_0x000107c50eec();
                                    func_0x000107c61180();
                                    if (lVar5 == 0) {
                                      func_0x000107c61170(lVar3);
                                      lVar3 = lVar4;
                                    }
                                    else {
                                      lVar5 = unaff_x20;
                                      func_0x000107c50f2c();
                                      func_0x000107c61180();
                                      if (lVar5 == 0) {
                                        func_0x000107c61170(lVar3);
                                        lVar3 = lVar4;
                                      }
                                      else {
                                        lVar5 = unaff_x20;
                                        func_0x000107c50f34();
                                        func_0x000107c61180();
                                        if (lVar5 != 0) {
                                          lVar5 = unaff_x20;
                                          func_0x000107c50f84();
                                          func_0x000107c61180();
                                          if (lVar5 != 0) {
                                            lVar5 = unaff_x20;
                                            func_0x000107c510ac();
                                            func_0x000107c61180();
                                            if (lVar5 == 0) {
                                              func_0x000107c61170(lVar3);
                                              lVar3 = lVar4;
                                            }
                                            else {
                                              func_0x000107c5da7c();
                                              func_0x000107c61180();
                                              if (unaff_x20 == 0) {
                                                func_0x000107c61170(lVar3);
                                                lVar3 = lVar4;
                                              }
                                              else {
                                                lVar6 = 0;
                                                FUN_100a84a7c();
                                                lVar4 = lVar6;
                                                func_0x000107c610f8();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                func_0x000107c61174();
                                                lVar5 = lVar3;
                                                FUN_100a84a9c();
                                                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                                                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a843bc)
                                                  ;
                                                  (*pcVar2)();
                                                }
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                uVar1 = auStack_70[0];
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(uVar1);
                                                FUN_100083b20(auStack_70);
                                                FUN_100087c34(auStack_78);
                                                func_0x000107c61574(auStack_70[0]);
                                                *(long *)(lVar4 + _DAT_112db12d8) = lVar5;
                                                *(long *)(lVar4 + _DAT_112db12e0) = unaff_x20;
                                                lStack_88 = lVar4;
                                                lStack_80 = lVar6;
                                                func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248)
                                                ;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100a843bc; end: 100a84403; -[SCUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a843bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2680;
  func_0x000107c61428(param_1 + _DAT_112db2680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a84404; end: 100a8444b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint addFriendsTrayScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2688;
  func_0x000107c61428(param_1 + _DAT_112db2688,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8444c; end: 100a84493; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCActiveUserSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8444c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2690;
  func_0x000107c61428(param_1 + _DAT_112db2690,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84494; end: 100a844db; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCBitmojiAvatarBuilderLensScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84494(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2698;
  func_0x000107c61428(param_1 + _DAT_112db2698,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a844dc; end: 100a84523; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCBitmojiCreateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a844dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26a0;
  func_0x000107c61428(param_1 + _DAT_112db26a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84524; end: 100a8456b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensProcessingBitmojiScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84524(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26a8;
  func_0x000107c61428(param_1 + _DAT_112db26a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8456c; end: 100a845b3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensProcessingPluginsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8456c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26b0;
  func_0x000107c61428(param_1 + _DAT_112db26b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a845b4; end: 100a845fb; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLogoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a845b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26b8;
  func_0x000107c61428(param_1 + _DAT_112db26b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a845fc; end: 100a84643; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCPostRegistrationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a845fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26c0;
  func_0x000107c61428(param_1 + _DAT_112db26c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84644; end: 100a8468b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCShakeToReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84644(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26c8;
  func_0x000107c61428(param_1 + _DAT_112db26c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8468c; end: 100a846d3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCSnapSavingEventScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8468c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26d0;
  func_0x000107c61428(param_1 + _DAT_112db26d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a846d4; end: 100a8471b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCTermsOfUseScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a846d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26d8;
  func_0x000107c61428(param_1 + _DAT_112db26d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8471c; end: 100a84763; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCBootstrapResponseProcessorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8471c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26e0;
  func_0x000107c61428(param_1 + _DAT_112db26e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84764; end: 100a847ab; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCComposerUserSessionImageLoadersRegistryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26e8;
  func_0x000107c61428(param_1 + _DAT_112db26e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a847ac; end: 100a847f3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCComposerUserSessionVideoLoadersRegistryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a847ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26f0;
  func_0x000107c61428(param_1 + _DAT_112db26f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a847f4; end: 100a8483b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCDeltaSyncProcessorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a847f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db26f8;
  func_0x000107c61428(param_1 + _DAT_112db26f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8483c; end: 100a84883; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCFriendmojiDecoratorPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8483c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2700;
  func_0x000107c61428(param_1 + _DAT_112db2700,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84884; end: 100a848cb; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensExternalDataFetchingPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84884(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2708;
  func_0x000107c61428(param_1 + _DAT_112db2708,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a848cc; end: 100a84913; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensMetadataRepositoryPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a848cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2710;
  func_0x000107c61428(param_1 + _DAT_112db2710,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84914; end: 100a8495b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensProcessingURIPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2718;
  func_0x000107c61428(param_1 + _DAT_112db2718,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8495c; end: 100a849a3; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLensScheduleNamespaceRequestFeatureInfoPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8495c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2720;
  func_0x000107c61428(param_1 + _DAT_112db2720,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a849a4; end: 100a849eb; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCLogoutCleanupScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a849a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2728;
  func_0x000107c61428(param_1 + _DAT_112db2728,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a849ec; end: 100a84a33; -[SCUserSessionScopeGraphBridgeSaberEntryPoint sCMessagePresendUploadPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a849ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2730;
  func_0x000107c61428(param_1 + _DAT_112db2730,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84a34; end: 100a84a7b; -[SCUserSessionScopeGraphBridgeSaberEntryPoint userSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a84a34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2738;
  func_0x000107c61428(param_1 + _DAT_112db2738,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a84a7c; end: 100a84a9b;  */

void FUN_100a84a7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e06c0);
  return;
}



/* Entry: 100a84a9c; end: 100a84b6b;  */

undefined8 FUN_100a84a9c(void)

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
  
  func_0x000107c61428(0x112db2448,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1002442d0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a84b6c; end: 100a84b77;  */

void FUN_100a84b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100a84b78; end: 100a84bc3;  */

void FUN_100a84b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba038;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c47f70();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a84bc4; end: 100a84c83; -[SCComposerUserSessionImageLoadersRegistryScope initWithPlugInRegistry:] */

undefined1 * FUN_100a84bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd580;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a84c84; end: 100a84cf7; -[SCComposerUserSessionVideoLoadersRegistryScope initWithPlugInRegistry:] */

undefined1 * FUN_100a84c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ea4c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a84cf8; end: 100a84ddb;  */

void FUN_100a84cf8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100a84ddc; end: 100a84e4f; -[SCDeltaSyncProcessorScope initWithRegistry:] */

undefined1 * FUN_100a84ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702330;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a84e50; end: 100a84e53;  */

void FUN_100a84e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a84e54; end: 100a84e9f;  */

void FUN_100a84e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba2a0;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c47f70();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a84ea0; end: 100a84f5f; -[SCFriendmojiDecoratorPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100a84ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705e40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a84f60; end: 100a8501f; -[SCLensExternalDataFetchingPluginScope initWithPluginRegistry:] */

undefined1 * FUN_100a84f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705b20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a85020; end: 100a850df; -[SCLensMetadataRepositoryPluginScope initWithLensMetadatasProvidersPlugInRegistry:] */

undefined1 * FUN_100a85020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a380;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a850e0; end: 100a8519f; -[SCLensScheduleNamespaceRequestFeatureInfoPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100a850e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a3a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a851a0; end: 100a8525f; -[SCLogoutCleanupScope initWithRegistry:] */

undefined1 * FUN_100a851a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9d60;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a85260; end: 100a852d3; -[SCMessagePresendUploadPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100a85260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126faeb8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a852d4; end: 100a85353; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a852d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112db2770,0);
  func_0x000107c61614(param_1 + _DAT_112db2778,0);
  *(undefined8 *)(param_1 + _DAT_112db2780) = 0;
  *(undefined8 *)(param_1 + _DAT_112db2788) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a85354; end: 100a853ff; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a85354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a85400(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a85400; end: 100a85603;  */

void FUN_100a85400(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104e730)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010efb18d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef104e700)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010efb1900,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UserSessionScopeGraphBridge/SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint.swift"
                              ,0x5b,2,0x6f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a85604);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c577b4();
        goto LAB_100a8548c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3fc();
  }
LAB_100a8548c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a85604; end: 100a8560f; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a85604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2770;
  func_0x000107c61428(param_1 + _DAT_112db2770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a85610; end: 100a85663;  */

void FUN_100a85610(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a85664; end: 100a8566f; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint setUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a85664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2778;
  func_0x000107c61428(param_1 + _DAT_112db2778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a85670; end: 100a856d3; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint setPreviewLensIconImpressionLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a85670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2780;
  func_0x000107c61428(param_1 + _DAT_112db2780,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a856d4; end: 100a856fb; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint begin] */

void FUN_100a856d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a856fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a856fc; end: 100a8587f;  */

/* WARNING: Possible PIC construction at 0x000100a857fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8580c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a85828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a85800) */
/* WARNING: Removing unreachable block (ram,0x000100a85810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a856fc(void)

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
    func_0x000107c5da78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4f154();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a85924();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112db2470);
        *(undefined8 *)(lVar2 + _DAT_112db1310) = uVar6;
        *(long *)(lVar2 + _DAT_112db1318) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112db1318);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100a85880; end: 100a8588b; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a85880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2770;
  func_0x000107c61428(param_1 + _DAT_112db2770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8588c; end: 100a858cf;  */

void FUN_100a8588c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a858d0; end: 100a858db; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint userSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a858d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2778;
  func_0x000107c61428(param_1 + _DAT_112db2778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a858dc; end: 100a85923; -[SCPreviewLensIconImpressionLoggingServicesSaberEntryPoint previewLensIconImpressionLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a858dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2780;
  func_0x000107c61428(param_1 + _DAT_112db2780,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a85924; end: 100a85943;  */

void FUN_100a85924(void)

{
  func_0x000107c61168(&PTR_PTR_1127e0788);
  return;
}



/* Entry: 100a85944; end: 100a8594b;  */

void FUN_100a85944(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_40);
  uVar1 = 0;
  FUN_1002396c0(0);
  func_0x000107c610f8();
  FUN_100a85b50(uStack_40,uStack_38,uVar1);
  *param_1 = uStack_40;
  return;
}



/* Entry: 100a8594c; end: 100a859ab;  */

void FUN_100a8594c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_40);
  uVar1 = 0;
  FUN_1002396c0(0);
  func_0x000107c610f8();
  FUN_100a85b50(uStack_40,uStack_38,uVar1);
  *param_1 = uStack_40;
  return;
}


