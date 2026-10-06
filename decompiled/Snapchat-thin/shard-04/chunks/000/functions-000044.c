/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ff1dd0; end: 102ff1ddb;  */

void FUN_102ff1dd0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102ff1ddc; end: 102ff1e13; +[SCSettingsDeepLinkResolver resolveWithDeepLinkUrl:] */

undefined8 FUN_102ff1ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102ff1e94();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102ff1e14; end: 102ff1e4f; -[SCSettingsDeepLinkResolver init] */

void FUN_102ff1e14(undefined8 param_1)

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



/* Entry: 102ff1e50; end: 102ff1e83;  */

void FUN_102ff1e50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff1e84; end: 102ff1e93;  */

undefined1  [16] FUN_102ff1e84(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xc) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xb < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102ff1e94; end: 102ff235f;  */

undefined8 FUN_102ff1e94(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c4e434(param_1,param_2,1);
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    uVar3 = 0xb;
  }
  else {
    ppuVar1 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f83dd8;
    func_0x000107c5faec();
    if (ppuVar2 == ppuVar1 && lVar4 == param_2) {
      func_0x000107c6142c(param_2);
      param_2 = lVar4;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110dc67f8;
        func_0x000107c5faec();
        if (ppuVar2 == ppuVar1 && lVar5 == param_2) {
          func_0x000107c6142c(param_2);
          param_2 = lVar5;
        }
        else {
          lVar4 = lVar5;
          func_0x000107c605b8();
          func_0x000107c6142c(lVar5);
          if (((ulong)ppuVar2 & 1) == 0) {
            ppuVar2 = &PTR____CFConstantStringClassReference_110f83df8;
            func_0x000107c5faec();
            if ((ppuVar2 == ppuVar1) && (lVar4 == param_2)) {
              func_0x000107c6142c(param_2);
              param_2 = lVar4;
            }
            else {
              lVar5 = lVar4;
              func_0x000107c605b8();
              func_0x000107c6142c(lVar4);
              if (((ulong)ppuVar2 & 1) == 0) {
                ppuVar2 = &PTR____CFConstantStringClassReference_110f83e18;
                func_0x000107c5faec();
                if ((ppuVar2 == ppuVar1) && (lVar5 == param_2)) {
                  func_0x000107c6142c(param_2);
                  param_2 = lVar5;
                }
                else {
                  lVar4 = lVar5;
                  func_0x000107c605b8();
                  func_0x000107c6142c(lVar5);
                  if (((ulong)ppuVar2 & 1) == 0) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110f83e38;
                    func_0x000107c5faec();
                    if ((ppuVar2 == ppuVar1) && (lVar4 == param_2)) {
                      func_0x000107c6142c(param_2);
                      param_2 = lVar4;
                    }
                    else {
                      lVar5 = lVar4;
                      func_0x000107c605b8();
                      func_0x000107c6142c(lVar4);
                      if (((ulong)ppuVar2 & 1) == 0) {
                        ppuVar2 = &PTR____CFConstantStringClassReference_110e3aaf8;
                        func_0x000107c5faec();
                        if ((ppuVar2 == ppuVar1) && (lVar5 == param_2)) {
                          func_0x000107c6142c(param_2);
                          param_2 = lVar5;
                        }
                        else {
                          lVar4 = lVar5;
                          func_0x000107c605b8();
                          func_0x000107c6142c(lVar5);
                          if (((ulong)ppuVar2 & 1) == 0) {
                            ppuVar2 = &PTR____CFConstantStringClassReference_110e538f8;
                            func_0x000107c5faec();
                            if ((ppuVar2 == ppuVar1) && (lVar4 == param_2)) {
                              func_0x000107c6142c(param_2);
                              param_2 = lVar4;
                            }
                            else {
                              lVar5 = lVar4;
                              func_0x000107c605b8();
                              func_0x000107c6142c(lVar4);
                              if (((ulong)ppuVar2 & 1) == 0) {
                                ppuVar2 = &PTR____CFConstantStringClassReference_110f83e58;
                                func_0x000107c5faec();
                                if ((ppuVar2 == ppuVar1) && (lVar5 == param_2)) {
                                  func_0x000107c6142c(param_2);
                                  param_2 = lVar5;
                                }
                                else {
                                  lVar4 = lVar5;
                                  func_0x000107c605b8();
                                  func_0x000107c6142c(lVar5);
                                  if (((ulong)ppuVar2 & 1) == 0) {
                                    ppuVar2 = &PTR____CFConstantStringClassReference_110dd96b8;
                                    func_0x000107c5faec();
                                    if ((ppuVar2 == ppuVar1) && (lVar4 == param_2)) {
                                      func_0x000107c6142c(param_2);
                                      param_2 = lVar4;
                                    }
                                    else {
                                      lVar5 = lVar4;
                                      func_0x000107c605b8();
                                      func_0x000107c6142c(lVar4);
                                      if (((ulong)ppuVar2 & 1) == 0) {
                                        ppuVar2 = &PTR____CFConstantStringClassReference_110f83e78;
                                        func_0x000107c5faec();
                                        if ((ppuVar2 == ppuVar1) && (lVar5 == param_2)) {
                                          func_0x000107c6142c(param_2);
                                          param_2 = lVar5;
                                        }
                                        else {
                                          lVar4 = lVar5;
                                          func_0x000107c605b8();
                                          func_0x000107c6142c(lVar5);
                                          if (((ulong)ppuVar2 & 1) == 0) {
                                            ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_110dc7958;
                                            func_0x000107c5faec();
                                            if ((ppuVar2 == ppuVar1) && (lVar4 == param_2)) {
                                              func_0x000107c6142c(param_2);
                                              func_0x000107c6142c(lVar4);
                                              return 10;
                                            }
                                            func_0x000107c605b8();
                                            func_0x000107c6142c(param_2);
                                            func_0x000107c6142c(lVar4);
                                            if (((ulong)ppuVar2 & 1) != 0) {
                                              return 10;
                                            }
                                            return 0xb;
                                          }
                                        }
                                        func_0x000107c6142c(param_2);
                                        return 9;
                                      }
                                    }
                                    func_0x000107c6142c(param_2);
                                    return 8;
                                  }
                                }
                                func_0x000107c6142c(param_2);
                                return 7;
                              }
                            }
                            func_0x000107c6142c(param_2);
                            return 6;
                          }
                        }
                        func_0x000107c6142c(param_2);
                        return 5;
                      }
                    }
                    func_0x000107c6142c(param_2);
                    return 4;
                  }
                }
                func_0x000107c6142c(param_2);
                return 3;
              }
            }
            func_0x000107c6142c(param_2);
            return 2;
          }
        }
        func_0x000107c6142c(param_2);
        return 1;
      }
    }
    func_0x000107c6142c(param_2);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 102ff2360; end: 102ff2363;  */

void FUN_102ff2360(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76b60;
  func_0x000107c61520(&UNK_10db76b60,&UNK_1105fa7e0);
  puRam0000000112f30f30 = puVar1;
  return;
}



/* Entry: 102ff2364; end: 102ff23a3;  */

void FUN_102ff2364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76b60;
  func_0x000107c61520(&UNK_10db76b60,&UNK_1105fa7e0);
  puRam0000000112f30f30 = puVar1;
  return;
}



/* Entry: 102ff23a4; end: 102ff23b3;  */

undefined1  [16] FUN_102ff23a4(void)

{
  return ZEXT816(0x1105fa7e0);
}



/* Entry: 102ff23b4; end: 102ff23d3;  */

void FUN_102ff23b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128af1c0);
  return;
}



/* Entry: 102ff23d4; end: 102ff24b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff23d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f30f70;
  func_0x000107c61614(unaff_x20 + _DAT_112f30f70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f30f60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f30f68) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102ff24b4; end: 102ff2547; -[_TtC17PlusDeeplinkScope17PlusDeeplinkScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff24b4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f30f60));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f30f68));
  param_1 = param_1 + _DAT_112f30f70;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff2548; end: 102ff264f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102ff2548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100350624();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f30f70;
  func_0x000107c61614(lVar4 + _DAT_112f30f70,0);
  *(long *)(lVar4 + _DAT_112f30f60) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f30f68) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  plStack_88 = plVar5;
  func_0x00010008a7c8(&uStack_80,&plStack_88);
  func_0x000100083b20(&plStack_88);
  func_0x000107c61574(uStack_80);
  func_0x000107c61170(plVar5);
  return plStack_88;
}



/* Entry: 102ff2650; end: 102ff26e3; -[_TtC17PlusDeeplinkScope32PlusDeeplinkScopeFactoryServices buildWithUIContainer:deepLinkURL:delegate:] */

void FUN_102ff2650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ff2548(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ff26e4; end: 102ff26e7;  */

void FUN_102ff26e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff26e8; end: 102ff271b;  */

void FUN_102ff26e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff271c; end: 102ff273b; -[_TtC17PlusDeeplinkScope32PlusDeeplinkScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff271c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f30f80));
  return;
}



/* Entry: 102ff273c; end: 102ff275f;  */

undefined8 FUN_102ff273c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff2760; end: 102ff2763;  */

void FUN_102ff2760(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff2764; end: 102ff2783; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2764(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f30fd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff2784; end: 102ff280f; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f30fe0;
  func_0x000107c61428(param_1 + _DAT_112f30fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff2810; end: 102ff29b3; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f30fe0;
  func_0x000107c61428(param_1 + _DAT_112f30fe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff29b4; end: 102ff2a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff29b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f30fe0;
  func_0x000107c61614(unaff_x20 + _DAT_112f30fe0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f30fd8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102ff2a70; end: 102ff2b07; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112f30fe0;
  func_0x000107c61614(param_1 + _DAT_112f30fe0,0);
  *(undefined8 *)(param_1 + _DAT_112f30fd8) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  func_0x000100350730();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 102ff2b08; end: 102ff2b63; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope init] */

void FUN_102ff2b08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusDefaultTabTrayScope.PlusDefaultTabTrayScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ff2b34);
  (*pcVar1)();
}



/* Entry: 102ff2b64; end: 102ff2c0b; -[_TtC23PlusDefaultTabTrayScope23PlusDefaultTabTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff2b64(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f30fd8));
  param_1 = param_1 + _DAT_112f30fe0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff2c0c; end: 102ff2c93; -[_TtC23PlusDefaultTabTrayScope38PlusDefaultTabTrayScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102ff2c94; end: 102ff2cf3; -[_TtC23PlusDefaultTabTrayScope38PlusDefaultTabTrayScopeFactoryServices init] */

void FUN_102ff2c94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusDefaultTabTrayScope.PlusDefaultTabTrayScopeFactoryServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ff2cc0);
  (*pcVar1)();
}



/* Entry: 102ff2cf4; end: 102ff2d03;  */

undefined1  [16] FUN_102ff2cf4(void)

{
  return ZEXT816(0x1105fa998);
}



/* Entry: 102ff2d04; end: 102ff2d13; -[_TtC23PlusDefaultTabTrayScope38PlusDefaultTabTrayScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f31018));
  return;
}



/* Entry: 102ff2d14; end: 102ff2d33; -[_TtC24SCSessionManagementScope24SCSessionManagementScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2d14(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f31048));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff2d34; end: 102ff2d7b; -[_TtC24SCSessionManagementScope24SCSessionManagementScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2d34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f31050;
  func_0x000107c61428(param_1 + _DAT_112f31050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff2d7c; end: 102ff2dd3; -[_TtC24SCSessionManagementScope24SCSessionManagementScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f31050;
  func_0x000107c61428(param_1 + _DAT_112f31050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff2dd4; end: 102ff2e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff2dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f31050;
  func_0x000107c61614(unaff_x20 + _DAT_112f31050,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f31048) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102ff2e90; end: 102ff2f33; -[_TtC24SCSessionManagementScope24SCSessionManagementScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff2e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f31050;
  func_0x000107c61614(param_1 + _DAT_112f31050,0);
  *(undefined8 *)(param_1 + _DAT_112f31048) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102ff2f34; end: 102ff2fdb; -[_TtC24SCSessionManagementScope24SCSessionManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff2f34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f31048));
  param_1 = param_1 + _DAT_112f31050;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff2fdc; end: 102ff30c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102ff2fdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100336a44();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f31050;
  func_0x000107c61614(lVar4 + _DAT_112f31050,0);
  *(long *)(lVar4 + _DAT_112f31048) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 102ff30c4; end: 102ff3137; -[_TtC24SCSessionManagementScope32SCSessionManagementScopeServices buildWithUiContainer:delegate:] */

void FUN_102ff30c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ff2fdc(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ff3138; end: 102ff313b;  */

void FUN_102ff3138(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff313c; end: 102ff316f;  */

void FUN_102ff313c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff3170; end: 102ff31a3; -[_TtC24SCSessionManagementScope32SCSessionManagementScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f31060));
  return;
}



/* Entry: 102ff31a4; end: 102ff31c3; -[SCBugsAndSuggestionsScope UIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff31a4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f310d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff31c4; end: 102ff31d3; -[SCBugsAndSuggestionsScope navigationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff31c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f310d8));
  return;
}



/* Entry: 102ff31d4; end: 102ff31f3; -[SCBugsAndSuggestionsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff31d4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f310e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff31f4; end: 102ff32db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff31f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f310d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f310d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f310e0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ff32dc; end: 102ff336b; -[SCBugsAndSuggestionsScope initWithUIContainer:navigationController:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff32dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f310d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f310d8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f310e0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102ff336c; end: 102ff33cb; -[SCBugsAndSuggestionsScope init] */

void FUN_102ff336c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBugsAndSuggestionsScope.SCBugsAndSuggestionsScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ff3398);
  (*pcVar1)();
}



/* Entry: 102ff33cc; end: 102ff34d7; -[SCBugsAndSuggestionsScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ff33e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ff33ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff33cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f310d0));
  return;
}



/* Entry: 102ff34d8; end: 102ff34db;  */

void FUN_102ff34d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76eb0;
  func_0x000107c61520(&UNK_10db76eb0,&UNK_1105fac00);
  puRam0000000112f31120 = puVar1;
  return;
}



/* Entry: 102ff34dc; end: 102ff3547;  */

void FUN_102ff34dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76eb0;
  func_0x000107c61520(&UNK_10db76eb0,&UNK_1105fac00);
  puRam0000000112f31120 = puVar1;
  return;
}



/* Entry: 102ff3548; end: 102ff354b;  */

void FUN_102ff3548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76f58;
  func_0x000107c61520(&UNK_10db76f58,&UNK_1105fac90);
  puRam0000000112f31138 = puVar1;
  return;
}



/* Entry: 102ff354c; end: 102ff35b7;  */

void FUN_102ff354c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76f58;
  func_0x000107c61520(&UNK_10db76f58,&UNK_1105fac90);
  puRam0000000112f31138 = puVar1;
  return;
}



/* Entry: 102ff35b8; end: 102ff363b;  */

void FUN_102ff35b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102ff363c; end: 102ff363f;  */

void FUN_102ff363c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76fc8;
  func_0x000107c61520(&UNK_10db76fc8,&UNK_1105fac90);
  puRam0000000112f31150 = puVar1;
  return;
}



/* Entry: 102ff3640; end: 102ff367f;  */

void FUN_102ff3640(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76fc8;
  func_0x000107c61520(&UNK_10db76fc8,&UNK_1105fac90);
  puRam0000000112f31150 = puVar1;
  return;
}



/* Entry: 102ff3680; end: 102ff3683;  */

void FUN_102ff3680(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76f80;
  func_0x000107c61520(&UNK_10db76f80,&UNK_1105fac90);
  puRam0000000112f31158 = puVar1;
  return;
}



/* Entry: 102ff3684; end: 102ff36c3;  */

void FUN_102ff3684(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76f80;
  func_0x000107c61520(&UNK_10db76f80,&UNK_1105fac90);
  puRam0000000112f31158 = puVar1;
  return;
}



/* Entry: 102ff36c4; end: 102ff385b;  */

void FUN_102ff36c4(void)

{
  return;
}



/* Entry: 102ff385c; end: 102ff38a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff385c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f311f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ff38a8; end: 102ff3907; -[_TtC35SCNavigationItemBadgePluginRegistry39SCNavigationItemBadgePluginSaberService init] */

void FUN_102ff38a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNavigationItemBadgePluginRegistry.SCNavigationItemBadgePluginSaberService",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ff38d4);
  (*pcVar1)();
}



/* Entry: 102ff3908; end: 102ff393b; -[_TtC35SCNavigationItemBadgePluginRegistry39SCNavigationItemBadgePluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f311f0));
  return;
}



/* Entry: 102ff393c; end: 102ff3a13;  */

void FUN_102ff393c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ff3a14; end: 102ff3a1f;  */

void FUN_102ff3a14(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102ff3a20; end: 102ff3a2f; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope buttonItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f31268));
  return;
}



/* Entry: 102ff3a30; end: 102ff3a3f; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ff3a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f31270);
}



/* Entry: 102ff3a40; end: 102ff3a87; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3a40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f31278;
  func_0x000107c61428(param_1 + _DAT_112f31278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff3a88; end: 102ff3adf; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f31278;
  func_0x000107c61428(param_1 + _DAT_112f31278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff3ae0; end: 102ff3baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff3ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f31278;
  func_0x000107c61614(unaff_x20 + _DAT_112f31278,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f31268) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f31270) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102ff3bb0; end: 102ff3c33; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff3bb0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f31268));
  param_1 = param_1 + _DAT_112f31278;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff3c34; end: 102ff3c37;  */

void FUN_102ff3c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff3c38; end: 102ff3c6b;  */

void FUN_102ff3c38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff3c6c; end: 102ff3c8b; -[_TtC29SCAddFriendsHeaderButtonScope37SCAddFriendsHeaderButtonScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f31288));
  return;
}



/* Entry: 102ff3c8c; end: 102ff3caf;  */

undefined8 FUN_102ff3c8c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff3cb0; end: 102ff3cb3;  */

void FUN_102ff3cb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db77108;
  func_0x000107c61520(&UNK_10db77108,&UNK_1105fadb8);
  puRam0000000112f31290 = puVar1;
  return;
}



/* Entry: 102ff3cb4; end: 102ff3cf3;  */

void FUN_102ff3cb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db77108;
  func_0x000107c61520(&UNK_10db77108,&UNK_1105fadb8);
  puRam0000000112f31290 = puVar1;
  return;
}



/* Entry: 102ff3cf4; end: 102ff3d17;  */

undefined1  [16] FUN_102ff3cf4(void)

{
  return ZEXT816(0x1105fadb8);
}



/* Entry: 102ff3d18; end: 102ff3d27; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope buttonItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f312e8));
  return;
}



/* Entry: 102ff3d28; end: 102ff3d37; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope attribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f312f0));
  return;
}



/* Entry: 102ff3d38; end: 102ff3d7f; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3d38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f312f8;
  func_0x000107c61428(param_1 + _DAT_112f312f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff3d80; end: 102ff3dd7; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f312f8;
  func_0x000107c61428(param_1 + _DAT_112f312f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff3dd8; end: 102ff3ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff3dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f312f8;
  func_0x000107c61614(unaff_x20 + _DAT_112f312f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f312e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f312f0) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102ff3ebc; end: 102ff3f77; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope initWithButtonItem:attribution:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff3ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f312f8;
  func_0x000107c61614(param_1 + _DAT_112f312f8,0);
  *(undefined8 *)(param_1 + _DAT_112f312e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f312f0) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102ff3f78; end: 102ff3fab;  */

void FUN_102ff3f78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff3fac; end: 102ff4017; -[_TtC22SCMapHeaderButtonScope22SCMapHeaderButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff3fac(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f312e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f312f0));
  param_1 = param_1 + _DAT_112f312f8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff4018; end: 102ff406f; -[_TtC26SCProfileHeaderButtonScope26SCProfileHeaderButtonScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff4018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f31330;
  func_0x000107c61428(param_1 + _DAT_112f31330,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff4070; end: 102ff412f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff4070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f31330;
  func_0x000107c61614(unaff_x20 + _DAT_112f31330,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f31328) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102ff4130; end: 102ff41d3; -[_TtC26SCProfileHeaderButtonScope26SCProfileHeaderButtonScope initWithButtonItem:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff4130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f31330;
  func_0x000107c61614(param_1 + _DAT_112f31330,0);
  *(undefined8 *)(param_1 + _DAT_112f31328) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102ff41d4; end: 102ff427b; -[_TtC26SCProfileHeaderButtonScope26SCProfileHeaderButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff41d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f31328));
  param_1 = param_1 + _DAT_112f31330;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff427c; end: 102ff427f;  */

void FUN_102ff427c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff4280; end: 102ff42b3;  */

void FUN_102ff4280(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff42b4; end: 102ff42c3;  */

undefined1  [16] FUN_102ff42b4(void)

{
  return ZEXT816(0x1105faf88);
}



/* Entry: 102ff42c4; end: 102ff42d7; -[_TtC26SCProfileHeaderButtonScope34SCProfileHeaderButtonScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff42c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f31340));
  return;
}



/* Entry: 102ff42d8; end: 102ff42e7; -[_TtC25SCSearchHeaderButtonScope25SCSearchHeaderButtonScope buttonItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff42d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f313b0));
  return;
}



/* Entry: 102ff42e8; end: 102ff432f; -[_TtC25SCSearchHeaderButtonScope25SCSearchHeaderButtonScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff42e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f313b8;
  func_0x000107c61428(param_1 + _DAT_112f313b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff4330; end: 102ff4387; -[_TtC25SCSearchHeaderButtonScope25SCSearchHeaderButtonScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff4330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f313b8;
  func_0x000107c61428(param_1 + _DAT_112f313b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff4388; end: 102ff4447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff4388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f313b8;
  func_0x000107c61614(unaff_x20 + _DAT_112f313b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f313b0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102ff4448; end: 102ff44ef; -[_TtC25SCSearchHeaderButtonScope25SCSearchHeaderButtonScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff4448(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f313b0));
  param_1 = param_1 + _DAT_112f313b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff44f0; end: 102ff44f3;  */

void FUN_102ff44f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff44f4; end: 102ff4527;  */

void FUN_102ff44f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff4528; end: 102ff4537;  */

undefined1  [16] FUN_102ff4528(void)

{
  return ZEXT816(0x1105fb040);
}


