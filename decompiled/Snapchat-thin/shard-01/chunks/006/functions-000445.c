/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101331688; end: 1013316cb;  */

void FUN_101331688(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013316cc; end: 1013316d7; -[SCShoppingPreviewControllerImplPreviewEntryPoint setShoppingPreviewControllerPrivateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013316cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73cd0;
  func_0x000107c61428(param_1 + _DAT_112d73cd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013316d8; end: 10133172b;  */

void FUN_1013316d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10133172c; end: 101331773; -[SCShoppingPreviewControllerImplPreviewEntryPoint shoppingPreviewControllerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133172c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73cd8;
  func_0x000107c61428(param_1 + _DAT_112d73cd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101331774; end: 1013317d7; -[SCShoppingPreviewControllerImplPreviewEntryPoint setShoppingPreviewControllerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73cd8;
  func_0x000107c61428(param_1 + _DAT_112d73cd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013317d8; end: 10133195b;  */

/* WARNING: Possible PIC construction at 0x0001013318cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013318dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013318ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013318e0) */
/* WARNING: Removing unreachable block (ram,0x0001013318d0) */
/* WARNING: Removing unreachable block (ram,0x0001013318f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013317d8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5aac8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5aad4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_10132f65c(0);
        func_0x000107c613fc();
        func_0x000107c6157c(*(undefined8 *)(lVar2 + _DAT_112d73ac0));
        uVar4 = 0x112d73978;
        func_0x0001000285a8(0x112d73978,&UNK_10d934170);
        pcVar3 = FUN_10132f62c;
        func_0x0001000cb480(FUN_10132f62c,0,uVar4);
        uVar4 = 0;
        FUN_10133bb94(0);
        func_0x000107c610f8();
        func_0x00010133bad8(pcVar3,uVar4);
        func_0x000107c42c20(unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10133195c; end: 101331983; -[SCShoppingPreviewControllerImplPreviewEntryPoint begin] */

void FUN_10133195c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013317d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101331984; end: 1013319c7; -[SCShoppingPreviewControllerImplPreviewEntryPoint end] */

void FUN_101331984(undefined8 param_1)

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



/* Entry: 1013319c8; end: 101331bcb;  */

void FUN_1013319c8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef10c8a10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010ef375f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef10c89e0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000028,0x800000010ef37620,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ShoppingPreviewControllerImpl/SCShoppingPreviewControllerImplPreviewEntryPoint.swift"
                                ,0x54,2,0x2e,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101331bcc);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5910c();
        goto LAB_101331a54;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59100();
  }
LAB_101331a54:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101331bcc; end: 101331c77; -[SCShoppingPreviewControllerImplPreviewEntryPoint setValue:forIvarName:] */

void FUN_101331bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013319c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101331c78; end: 101331cf7; -[SCShoppingPreviewControllerImplPreviewEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331c78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d73cc8,0);
  func_0x000107c61614(param_1 + _DAT_112d73cd0,0);
  *(undefined8 *)(param_1 + _DAT_112d73cd8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d73ce0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101331cf8; end: 101331d2b;  */

void FUN_101331cf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101331d2c; end: 101331d83; -[SCShoppingPreviewControllerImplPreviewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331d2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d73cc8);
  func_0x000107c61610(param_1 + _DAT_112d73cd0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73cd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d73ce0));
  return;
}



/* Entry: 101331d84; end: 101331da3;  */

void FUN_101331d84(void)

{
  func_0x000107c61168(&PTR_PTR_1127c91c0);
  return;
}



/* Entry: 101331da4; end: 101331daf; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73d10;
  func_0x000107c61428(param_1 + _DAT_112d73d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101331db0; end: 101331dbb; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73d10;
  func_0x000107c61428(param_1 + _DAT_112d73d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101331dbc; end: 101331dc7; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint shoppingPreviewControllerPrivateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331dbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73d18;
  func_0x000107c61428(param_1 + _DAT_112d73d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101331dc8; end: 101331e0b;  */

void FUN_101331dc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101331e0c; end: 101331e17; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint setShoppingPreviewControllerPrivateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73d18;
  func_0x000107c61428(param_1 + _DAT_112d73d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101331e18; end: 101331e6b;  */

void FUN_101331e18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101331e6c; end: 101331fcb;  */

/* WARNING: Possible PIC construction at 0x000101331f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101331f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101331f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101331f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101331f60) */
/* WARNING: Removing unreachable block (ram,0x000101331f50) */
/* WARNING: Removing unreachable block (ram,0x000101331f3c) */
/* WARNING: Removing unreachable block (ram,0x000101331f70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101331e6c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5aac8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_10132f794(0);
    func_0x000107c613fc();
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112d73ac0));
    func_0x000107c4e9e4(lVar1);
    func_0x000107c61180();
    uVar2 = 0x112d73a18;
    func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
    pcVar3 = FUN_10132f76c;
    func_0x0001000cb480(FUN_10132f76c,0,uVar2);
    func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(pcVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101331fcc; end: 101331ff3; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint begin] */

void FUN_101331fcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101331e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101331ff4; end: 101332037; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint end] */

void FUN_101331ff4(undefined8 param_1)

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



/* Entry: 101332038; end: 1013321cf;  */

void FUN_101332038(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef10c8a10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010ef375f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ShoppingPreviewControllerImpl/SCShoppingPreviewControllerImplPreviewPlugInEntryPoint.swift"
                            ,0x5a,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013321d0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59100();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013321d0; end: 10133227b; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint setValue:forIvarName:] */

void FUN_1013321d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101332038(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10133227c; end: 1013322ef; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133227c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d73d10,0);
  func_0x000107c61614(param_1 + _DAT_112d73d18,0);
  *(undefined8 *)(param_1 + _DAT_112d73d20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013322f0; end: 101332323;  */

void FUN_1013322f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101332324; end: 10133236b; -[SCShoppingPreviewControllerImplPreviewPlugInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101332324(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d73d10);
  func_0x000107c61610(param_1 + _DAT_112d73d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d73d20));
  return;
}



/* Entry: 10133236c; end: 10133238b;  */

void FUN_10133236c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9290);
  return;
}



/* Entry: 10133238c; end: 101332dd7;  */

undefined8
FUN_10133238c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c3fe2c();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c5b1fc();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c5d2b0();
  func_0x000107c61180();
  puVar4 = &UNK_1103a4210;
  func_0x000107c613fc(&UNK_1103a4210,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  *(undefined8 *)(puVar4 + 0x30) = param_7;
  *(undefined8 *)(puVar4 + 0x38) = param_6;
  *(undefined8 *)(puVar4 + 0x40) = param_8;
  func_0x0001000285a8(0x112d73d50,&UNK_10d934440);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  pcVar5 = FUN_101332dd8;
  func_0x0001000bdd8c(FUN_101332dd8,puVar4);
  FUN_10133e658(0);
  func_0x000107c610f8();
  pcVar6 = pcVar5;
  func_0x000107c6157c(pcVar5);
  func_0x00010133e59c();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(pcVar6);
  return unaff_x20;
}



/* Entry: 101332dd8; end: 101332ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101332dd8(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar17;
  undefined8 uVar18;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *apuStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar16 = *(long *)(unaff_x20 + 0x40);
  puVar5 = (undefined *)0x0;
  func_0x00010133350c(0,*(undefined8 *)(unaff_x20 + 0x18));
  puStack_170 = puVar5;
  func_0x000107c613fc();
  *(long *)(puVar5 + 0x10) = lVar6;
  func_0x000107c61174();
  func_0x00010451338c();
  lVar9 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lStack_150 = lVar9;
  if (lVar9 == 0) {
    pcVar1 = "Navigation delegate is unavailable";
    uVar18 = 0x23;
    uVar17 = 0xd000000000000022;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 != 0) {
      puVar7 = (undefined *)0x0;
      puStack_160 = param_1;
      FUN_1013333e8();
      puVar8 = puVar7;
      func_0x000107c613fc();
      lVar6 = _DAT_112d73df0;
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar8 + lVar6,1,1,lVar9);
      *(long *)(puVar8 + 0x10) = lVar15;
      uVar19 = *(undefined8 *)(lVar10 + _DAT_113091b70);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      lStack_168 = lVar15;
      func_0x000107c615f0(lVar15);
      func_0x000107c41b80(uVar19);
      func_0x000107c61180();
      func_0x000107c61174();
      uVar18 = uVar17;
      FUN_101332e80();
      uStack_178 = uVar18;
      func_0x000107c61170(uVar17);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      func_0x000107c41b80();
      func_0x000107c61180();
      uStack_188 = uVar19;
      func_0x000107c3fa04();
      func_0x000107c61180();
      puVar3 = puStack_170;
      if (lVar16 != 0) {
        puStack_78 = puStack_170;
        ppuStack_70 = &PTR_DAT_1103a4328;
        ppuStack_98 = &PTR_DAT_1103a4300;
        lVar9 = 0;
        puStack_158 = puVar8;
        apuStack_b8[0] = puVar8;
        puStack_a0 = puVar7;
        apuStack_90[0] = puVar5;
        FUN_101335b98();
        lVar10 = lVar9;
        lStack_1c8 = lVar9;
        func_0x000107c610f8();
        func_0x0001000c6518(apuStack_90,puVar3);
        uStack_198 = *(undefined8 *)(*(long *)(puVar3 + -8) + 0x40);
        puStack_1c0 = (undefined1 *)&puStack_1d0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_190 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
        puVar21 = (undefined8 *)((long)&puStack_1d0 - uStack_190);
        pcStack_1a0 = *(code **)(extraout_x8 + 0x10);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_b8,puVar7);
        uStack_1b0 = *(undefined8 *)(*(long *)(puVar7 + -8) + 0x40);
        puStack_1d0 = puVar21;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_1a8 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        pcStack_1b8 = *(code **)(extraout_x8_00 + 0x10);
        (*pcStack_1b8)(puVar20);
        lVar6 = _DAT_112d740c8;
        auStack_e0[0] = *puVar21;
        auStack_108[0] = *puVar20;
        puStack_c8 = puVar3;
        ppuStack_c0 = &PTR_DAT_1103a4328;
        ppuStack_e8 = &PTR_DAT_1103a4300;
        puVar11 = PTR_PTR_1126ae810;
        puStack_f0 = puVar7;
        func_0x000107c610f8();
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar8);
        lVar15 = lStack_150;
        func_0x000107c615f0(lStack_150);
        func_0x000107c453e4();
        *(undefined **)(lVar10 + lVar6) = puVar11;
        lVar6 = _DAT_112d740d0;
        lVar12 = 0;
        FUN_10133e00c();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar10 + lVar6,1,1,lVar12);
        *(undefined8 *)(lVar10 + _DAT_112d740d8) = 0;
        FUN_101333170(auStack_e0,lVar10 + _DAT_112d740a0);
        func_0x000107c615fc(lVar10 + _DAT_112d740a8,lVar15);
        uVar17 = uStack_180;
        *(undefined8 *)(lVar10 + _DAT_112d740b0) = uStack_180;
        FUN_101333170(auStack_108,lVar10 + _DAT_112d740b8);
        *(long *)(lVar10 + _DAT_112d740c0) = lVar16;
        puVar8 = PTR_s_init_1125d9248;
        lStack_118 = lVar10;
        lStack_110 = lVar9;
        func_0x000107c61174(uVar17);
        func_0x000107c615f0(lVar16);
        plVar13 = &lStack_118;
        func_0x000107c61154(plVar13,puVar8);
        puVar8 = &UNK_1103a4260;
        func_0x000107c613fc(&UNK_1103a4260,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,plVar13);
        ppuStack_128 = (undefined **)FUN_1013331b4;
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0x42000000;
        pcStack_138 = FUN_100c1de60;
        puStack_130 = &UNK_1103a4278;
        ppuVar14 = &puStack_148;
        puStack_120 = puVar8;
        func_0x000107c60bc4(ppuVar14);
        puVar8 = puStack_120;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        uVar17 = uStack_188;
        uVar18 = uStack_188;
        func_0x000107c5c320(uStack_188);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar14);
        uVar19 = *(undefined8 *)((long)plVar13 + _DAT_112d740c8);
        func_0x000107c61174(uVar19);
        func_0x000107c3e924(uVar18);
        func_0x000107c615e8(lVar16);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lVar15);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar19);
        func_0x000107c61574(puVar5);
        puVar8 = puStack_158;
        func_0x000107c61574(puStack_158);
        func_0x0001000834e4(auStack_108);
        func_0x0001000834e4(auStack_e0);
        func_0x0001000834e4(apuStack_b8);
        func_0x0001000834e4(apuStack_90);
        puVar2 = puStack_1c0;
        ppuStack_128 = &PTR_DAT_1103a4328;
        puStack_130 = puVar3;
        ppuStack_70 = &PTR_DAT_1103a4300;
        apuStack_90[0] = puVar8;
        lVar15 = 0;
        puStack_148 = puVar5;
        puStack_78 = puVar7;
        func_0x000101333ddc();
        lVar6 = lVar15;
        func_0x000107c613fc();
        func_0x0001000c6518(&puStack_148,puVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar21 = (undefined8 *)(puVar2 + -uStack_190);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_90,puVar7);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        (*pcStack_1b8)(puVar20);
        uVar17 = *puVar21;
        uVar18 = *puVar20;
        *(undefined **)(lVar6 + 0x28) = puVar3;
        *(undefined ***)(lVar6 + 0x30) = &PTR_DAT_1103a4328;
        *(undefined8 *)(lVar6 + 0x10) = uVar17;
        *(undefined **)(lVar6 + 0x58) = puVar7;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4300;
        *(long **)(lVar6 + 0x38) = plVar13;
        *(undefined8 *)(lVar6 + 0x40) = uVar18;
        func_0x000107c6157c(puVar5);
        puVar3 = puStack_158;
        func_0x000107c6157c(puStack_158);
        func_0x000107c61174();
        func_0x0001000834e4(apuStack_90);
        func_0x0001000834e4(&puStack_148);
        uVar18 = 0;
        FUN_101334d2c();
        puVar21 = puStack_160;
        uVar17 = uStack_178;
        puStack_160[3] = uVar18;
        puStack_160[4] = &PTR_DAT_1103a43f0;
        *puStack_160 = uStack_178;
        puStack_160[8] = lStack_1c8;
        puStack_160[9] = &PTR_DAT_1103a4408;
        puStack_160[5] = plVar13;
        puStack_160[0xd] = lVar15;
        puStack_160[0xe] = &PTR_DAT_1103a4338;
        func_0x000107c61174(plVar13);
        func_0x000107c61174(uVar17);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lStack_150);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(lStack_168);
        puVar21[10] = lVar6;
        func_0x000107c61170(uVar17);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101332d3c);
      (*pcVar4)();
    }
    pcVar1 = "Unlockable Lens tracker is unavailable";
    uVar18 = 0x26;
    uVar17 = 0xd000000000000026;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar17,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewProductLinkImpl/ShoppingPreviewProductLinkImplEntryPoint.swift"
                      ,0x4d,2,uVar18,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101332dd8);
  (*pcVar4)();
}



/* Entry: 101332ddc; end: 101332e2f;  */

void FUN_101332ddc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101332e30; end: 101332e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101332e30(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar17;
  undefined8 uVar18;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *apuStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar16 = *(long *)(unaff_x20 + 0x40);
  puVar5 = (undefined *)0x0;
  func_0x00010133350c(0,*(undefined8 *)(unaff_x20 + 0x18));
  puStack_170 = puVar5;
  func_0x000107c613fc();
  *(long *)(puVar5 + 0x10) = lVar6;
  func_0x000107c61174();
  func_0x00010451338c();
  lVar9 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lStack_150 = lVar9;
  if (lVar9 == 0) {
    pcVar1 = "Navigation delegate is unavailable";
    uVar18 = 0x23;
    uVar17 = 0xd000000000000022;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 != 0) {
      puVar7 = (undefined *)0x0;
      puStack_160 = param_1;
      FUN_1013333e8();
      puVar8 = puVar7;
      func_0x000107c613fc();
      lVar6 = _DAT_112d73df0;
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar8 + lVar6,1,1,lVar9);
      *(long *)(puVar8 + 0x10) = lVar15;
      uVar19 = *(undefined8 *)(lVar10 + _DAT_113091b70);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      lStack_168 = lVar15;
      func_0x000107c615f0(lVar15);
      func_0x000107c41b80(uVar19);
      func_0x000107c61180();
      func_0x000107c61174();
      uVar18 = uVar17;
      FUN_101332e80();
      uStack_178 = uVar18;
      func_0x000107c61170(uVar17);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar8);
      func_0x000107c41b80();
      func_0x000107c61180();
      uStack_188 = uVar19;
      func_0x000107c3fa04();
      func_0x000107c61180();
      puVar3 = puStack_170;
      if (lVar16 != 0) {
        puStack_78 = puStack_170;
        ppuStack_70 = &PTR_DAT_1103a4328;
        ppuStack_98 = &PTR_DAT_1103a4300;
        lVar9 = 0;
        puStack_158 = puVar8;
        apuStack_b8[0] = puVar8;
        puStack_a0 = puVar7;
        apuStack_90[0] = puVar5;
        FUN_101335b98();
        lVar10 = lVar9;
        lStack_1c8 = lVar9;
        func_0x000107c610f8();
        func_0x0001000c6518(apuStack_90,puVar3);
        uStack_198 = *(undefined8 *)(*(long *)(puVar3 + -8) + 0x40);
        puStack_1c0 = (undefined1 *)&puStack_1d0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_190 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
        puVar21 = (undefined8 *)((long)&puStack_1d0 - uStack_190);
        pcStack_1a0 = *(code **)(extraout_x8 + 0x10);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_b8,puVar7);
        uStack_1b0 = *(undefined8 *)(*(long *)(puVar7 + -8) + 0x40);
        puStack_1d0 = puVar21;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uStack_1a8 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        pcStack_1b8 = *(code **)(extraout_x8_00 + 0x10);
        (*pcStack_1b8)(puVar20);
        lVar6 = _DAT_112d740c8;
        auStack_e0[0] = *puVar21;
        auStack_108[0] = *puVar20;
        puStack_c8 = puVar3;
        ppuStack_c0 = &PTR_DAT_1103a4328;
        ppuStack_e8 = &PTR_DAT_1103a4300;
        puVar11 = PTR_PTR_1126ae810;
        puStack_f0 = puVar7;
        func_0x000107c610f8();
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar8);
        lVar15 = lStack_150;
        func_0x000107c615f0(lStack_150);
        func_0x000107c453e4();
        *(undefined **)(lVar10 + lVar6) = puVar11;
        lVar6 = _DAT_112d740d0;
        lVar12 = 0;
        FUN_10133e00c();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar10 + lVar6,1,1,lVar12);
        *(undefined8 *)(lVar10 + _DAT_112d740d8) = 0;
        FUN_101333170(auStack_e0,lVar10 + _DAT_112d740a0);
        func_0x000107c615fc(lVar10 + _DAT_112d740a8,lVar15);
        uVar17 = uStack_180;
        *(undefined8 *)(lVar10 + _DAT_112d740b0) = uStack_180;
        FUN_101333170(auStack_108,lVar10 + _DAT_112d740b8);
        *(long *)(lVar10 + _DAT_112d740c0) = lVar16;
        puVar8 = PTR_s_init_1125d9248;
        lStack_118 = lVar10;
        lStack_110 = lVar9;
        func_0x000107c61174(uVar17);
        func_0x000107c615f0(lVar16);
        plVar13 = &lStack_118;
        func_0x000107c61154(plVar13,puVar8);
        puVar8 = &UNK_1103a4260;
        func_0x000107c613fc(&UNK_1103a4260,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,plVar13);
        ppuStack_128 = (undefined **)FUN_1013331b4;
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0x42000000;
        pcStack_138 = FUN_100c1de60;
        puStack_130 = &UNK_1103a4278;
        ppuVar14 = &puStack_148;
        puStack_120 = puVar8;
        func_0x000107c60bc4(ppuVar14);
        puVar8 = puStack_120;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        uVar17 = uStack_188;
        uVar18 = uStack_188;
        func_0x000107c5c320(uStack_188);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar14);
        uVar19 = *(undefined8 *)((long)plVar13 + _DAT_112d740c8);
        func_0x000107c61174(uVar19);
        func_0x000107c3e924(uVar18);
        func_0x000107c615e8(lVar16);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lVar15);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar19);
        func_0x000107c61574(puVar5);
        puVar8 = puStack_158;
        func_0x000107c61574(puStack_158);
        func_0x0001000834e4(auStack_108);
        func_0x0001000834e4(auStack_e0);
        func_0x0001000834e4(apuStack_b8);
        func_0x0001000834e4(apuStack_90);
        puVar2 = puStack_1c0;
        ppuStack_128 = &PTR_DAT_1103a4328;
        puStack_130 = puVar3;
        ppuStack_70 = &PTR_DAT_1103a4300;
        apuStack_90[0] = puVar8;
        lVar15 = 0;
        puStack_148 = puVar5;
        puStack_78 = puVar7;
        func_0x000101333ddc();
        lVar6 = lVar15;
        func_0x000107c613fc();
        func_0x0001000c6518(&puStack_148,puVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar21 = (undefined8 *)(puVar2 + -uStack_190);
        (*pcStack_1a0)(puVar21);
        func_0x0001000c6518(apuStack_90,puVar7);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar20 = (undefined8 *)((long)puVar21 - uStack_1a8);
        (*pcStack_1b8)(puVar20);
        uVar17 = *puVar21;
        uVar18 = *puVar20;
        *(undefined **)(lVar6 + 0x28) = puVar3;
        *(undefined ***)(lVar6 + 0x30) = &PTR_DAT_1103a4328;
        *(undefined8 *)(lVar6 + 0x10) = uVar17;
        *(undefined **)(lVar6 + 0x58) = puVar7;
        *(undefined ***)(lVar6 + 0x60) = &PTR_DAT_1103a4300;
        *(long **)(lVar6 + 0x38) = plVar13;
        *(undefined8 *)(lVar6 + 0x40) = uVar18;
        func_0x000107c6157c(puVar5);
        puVar3 = puStack_158;
        func_0x000107c6157c(puStack_158);
        func_0x000107c61174();
        func_0x0001000834e4(apuStack_90);
        func_0x0001000834e4(&puStack_148);
        uVar18 = 0;
        FUN_101334d2c();
        puVar21 = puStack_160;
        uVar17 = uStack_178;
        puStack_160[3] = uVar18;
        puStack_160[4] = &PTR_DAT_1103a43f0;
        *puStack_160 = uStack_178;
        puStack_160[8] = lStack_1c8;
        puStack_160[9] = &PTR_DAT_1103a4408;
        puStack_160[5] = plVar13;
        puStack_160[0xd] = lVar15;
        puStack_160[0xe] = &PTR_DAT_1103a4338;
        func_0x000107c61174(plVar13);
        func_0x000107c61174(uVar17);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lStack_150);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(lStack_168);
        puVar21[10] = lVar6;
        func_0x000107c61170(uVar17);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101332d3c);
      (*pcVar4)();
    }
    pcVar1 = "Unlockable Lens tracker is unavailable";
    uVar18 = 0x26;
    uVar17 = 0xd000000000000026;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar17,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ShoppingPreviewProductLinkImpl/ShoppingPreviewProductLinkImplEntryPoint.swift"
                      ,0x4d,2,uVar18,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101332dd8);
  (*pcVar4)();
}



/* Entry: 101332e60; end: 101332e7f;  */

void FUN_101332e60(void)

{
  func_0x000107c61168(&PTR_PTR_112d73d98);
  return;
}



/* Entry: 101332e80; end: 10133316f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101332e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar10;
  code *apcStack_150 [4];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar2 = 0;
  func_0x00010133350c();
  ppuStack_70 = &PTR_DAT_1103a4328;
  lVar3 = 0;
  auStack_90[0] = param_2;
  lStack_78 = lVar2;
  FUN_1013333e8();
  ppuStack_98 = &PTR_DAT_1103a4300;
  lVar4 = 0;
  auStack_b8[0] = param_3;
  lStack_a0 = lVar3;
  FUN_101334d2c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_90,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)apcStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  func_0x0001000c6518(auStack_b8,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar10);
  lVar1 = _DAT_112d74060;
  auStack_e0[0] = *puVar8;
  auStack_108[0] = *puVar10;
  ppuStack_c0 = &PTR_DAT_1103a4328;
  ppuStack_e8 = &PTR_DAT_1103a4300;
  puVar6 = PTR_PTR_1126ae810;
  lStack_f0 = lVar3;
  lStack_c8 = lVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112d74068) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d74070) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d74048) = param_1;
  FUN_101333170(auStack_e0,lVar5 + _DAT_112d74050);
  FUN_101333170(auStack_108,lVar5 + _DAT_112d74058);
  puVar6 = PTR_s_init_1125d9248;
  lStack_118 = lVar5;
  lStack_110 = lVar4;
  func_0x000107c61174(param_1);
  plVar7 = &lStack_118;
  func_0x000107c61154(plVar7,puVar6);
  puVar6 = &UNK_1103a42b0;
  func_0x000107c613fc(&UNK_1103a42b0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar7);
  uStack_128 = 0x1013331d8;
  apcStack_150[1] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  apcStack_150[2] = (code *)0x42000000;
  apcStack_150[3] = FUN_100c1de60;
  puStack_130 = &UNK_1103a42c8;
  puVar8 = apcStack_150 + 1;
  puStack_120 = puVar6;
  func_0x000107c60bc4(puVar8);
  puVar6 = puStack_120;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  uVar9 = param_4;
  func_0x000107c5c320(param_4);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar8);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return plVar7;
}



/* Entry: 101333170; end: 1013331b3;  */

long FUN_101333170(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1013331b4; end: 1013331e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013331b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112d740d8) != 0) {
      func_0x000107c41864();
    }
    FUN_101335898();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013331e8; end: 1013333a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013331e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_90 - extraout_x8;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  cVar3 = *(char *)(param_1 + 0x58);
  if (-1 < cVar3) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_88 = uVar1;
    uStack_80 = uVar6;
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar1,uVar6);
    func_0x000107c5eea0(lVar8);
    (**(code **)(lVar9 + 0x10))(lVar10,lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))(lVar10,0,1,lVar5);
    lVar4 = _DAT_112d73df0;
    func_0x000107c61428(unaff_x20 + _DAT_112d73df0,auStack_78,0x21,0);
    func_0x000100ed9cbc(lVar10,unaff_x20 + lVar4);
    func_0x000107c614a8(auStack_78);
    uVar1 = uStack_90;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar6 = uStack_90;
    func_0x000107c5fadc(uStack_90,uVar2);
    uVar7 = uVar6;
    func_0x000107c5ee70();
    func_0x000107c5cdf0(uVar11);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    FUN_101333498(uVar1,uVar2,uStack_88,uStack_80,(long)cVar3);
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  return;
}



/* Entry: 1013333a8; end: 1013333df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013333a8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000d1dcc(unaff_x20 + _DAT_112d73df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013333e0; end: 1013333e7;  */

void FUN_1013333e0(void)

{
  if (lRam0000000112d73e20 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62ee48);
  return;
}



/* Entry: 1013333e8; end: 10133341f;  */

void FUN_1013333e8(undefined8 param_1)

{
  if (lRam0000000112d73e20 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62ee48);
  return;
}



/* Entry: 101333420; end: 101333497;  */

void FUN_101333420(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10d934538;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 101333498; end: 1013334e7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101333498(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  
  func_0x000107c6142c(param_2);
  if ((param_5 >> 7 & 1) != 0) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1013334e8; end: 10133352b;  */

void FUN_1013334e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10133352c; end: 101333ac7;  */

void FUN_10133352c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *apuStack_b0 [3];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_f0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10133d330();
  lStack_d8 = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(lStack_d8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)puVar11 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ed90();
  lVar5 = lVar4;
  func_0x000107c4a740();
  func_0x000107c61170(lVar4);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if ((int)lVar5 != 0) {
    uVar12 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
    apuStack_b0[0] = (undefined *)CONCAT71(apuStack_b0[0]._1_7_,1);
    puStack_98 = PTR___sSbN_11034dd40;
    func_0x000100102924(apuStack_b0,&puStack_90);
    func_0x000107c61174(uVar12);
    puVar6 = puVar15;
    func_0x000107c61558(puVar15);
    apuStack_b0[0] = puVar15;
    FUN_101334054(&puStack_90,uVar12,puVar6);
    func_0x000107c61170(uVar12);
    puVar15 = apuStack_b0[0];
  }
  puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puStack_e0 = puVar6;
  func_0x000107c5ed90();
  uVar7 = 0;
  puStack_e8 = puVar6;
  FUN_100dfa6ec(0);
  uVar12 = uVar7;
  FUN_100f33384();
  puVar8 = puVar15;
  func_0x000107c5f9dc(puVar15,uVar7,PTR___sypN_11034f1a8 + 8,uVar12);
  puVar6 = &UNK_1103a4358;
  func_0x000107c613fc(&UNK_1103a4358,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  FUN_101333f44(param_1,lVar17);
  (**(code **)(lVar13 + 0x10))(puVar11,param_2,lVar3);
  bVar1 = *(byte *)(lStack_d8 + 0x50);
  uVar16 = (ulong)bVar1 + 0x18 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar13 + 0x50);
  uVar19 = lVar18 + (ulong)bVar2 + uVar16 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar9 = &UNK_1103a4380;
  func_0x000107c613fc(&UNK_1103a4380,uVar19 + lVar14,bVar1 | bVar2 | 7);
  *(undefined **)(puVar9 + 0x10) = puVar6;
  func_0x000101333f88(lVar17,puVar9 + uVar16);
  (**(code **)(lVar13 + 0x20))(puVar9 + uVar19,puVar11,lVar3);
  pcStack_70 = FUN_101333fcc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_1103a4398;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_68);
  puVar9 = puStack_e0;
  puVar6 = puStack_e8;
  func_0x000107c4de70(puStack_e0);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c6142c(puVar15);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 101333ac8; end: 101333ce3;  */

void FUN_101333ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [64];
  
  ppuVar7 = &puStack_c0;
  plVar1 = (long *)(unaff_x20 + 0x10);
  func_0x0001000a8868(plVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = *(long *)(*plVar1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c4d070();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
      func_0x000107c610f8(PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778);
      func_0x000107c453e4();
      lVar3 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      puVar9 = auStack_90;
      func_0x000107c61534();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar5 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
      func_0x000107c5faec();
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(undefined1 **)(lVar3 + 0x28) = puVar9;
      *(undefined8 *)(lVar3 + 0x30) = param_2;
      *(undefined8 *)(lVar3 + 0x38) = param_3;
      func_0x000107c61434(param_3);
      lVar6 = lVar3;
      func_0x0001001830b8(lVar3);
      func_0x000107c61588(lVar3);
      func_0x0001013348a4((undefined8 *)(lVar3 + 0x20),0x112d38308,&UNK_10d902040);
      lVar3 = lVar6;
      func_0x000100215634(lVar6);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar3;
      func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar3);
      pcStack_a0 = FUN_101333da4;
      uStack_98 = 0;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_1012d20f0;
      puStack_a8 = &UNK_1103a43c0;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c4b760(puVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c3e2c0(lVar2);
      puVar8 = (undefined8 *)(unaff_x20 + 0x40);
      func_0x0001000a8868(puVar8,*(undefined8 *)(unaff_x20 + 0x58));
      FUN_101334664(param_1,0,*puVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar4);
    }
  }
  return;
}



/* Entry: 101333ce4; end: 101333da3;  */

void FUN_101333ce4(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_60;
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000101333800(param_3);
      func_0x000107c61574(param_2);
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_10133461c(param_2 + 0x40,auStack_60);
      func_0x000107c61574(param_2);
      func_0x0001000a8868(auStack_60,uStack_48);
      FUN_101334664(param_3,2,*puVar1);
      FUN_101334848(auStack_60);
    }
  }
  return;
}



/* Entry: 101333da4; end: 101333da7;  */

void FUN_101333da4(void)

{
  return;
}



/* Entry: 101333da8; end: 101333dfb;  */

void FUN_101333da8(void)

{
  long unaff_x20;
  
  FUN_101334848(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_101334848(unaff_x20 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101333dfc; end: 101333f43;  */

void FUN_101333dfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10133d330();
  func_0x0001013348e4(param_1 + *(int *)(lVar2 + 0x14),puVar4,0x112d36580,&UNK_10d9016d0);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001013348a4(puVar4,0x112d36580,&UNK_10d9016d0);
    func_0x000101333800(param_1);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar1);
    func_0x00010133352c(param_1,lVar5);
    (**(code **)(lVar6 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 101333f44; end: 101333fcb;  */

undefined8 FUN_101333f44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10133d330();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101333fcc; end: 101334037;  */

void FUN_101333fcc(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  lVar2 = 0;
  FUN_10133d330();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar4 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = unaff_x20 + uVar4;
  puVar1 = auStack_60;
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(uVar3,lVar2 + 0x10,auStack_60,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      func_0x000101333800(lVar5);
      func_0x000107c61574(lVar2);
    }
  }
  else {
    func_0x000107c61428(uVar3,lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      FUN_10133461c(lVar2 + 0x40,auStack_60);
      func_0x000107c61574(lVar2);
      func_0x0001000a8868(auStack_60,uStack_48);
      FUN_101334664(lVar5,2,*puVar1);
      FUN_101334848(auStack_60);
    }
  }
  return;
}



/* Entry: 101334038; end: 101334053;  */

void FUN_101334038(long param_1,long param_2)

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



/* Entry: 101334054; end: 10133415b;  */

undefined8 * FUN_101334054(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *unaff_x20;
  puVar2 = param_2;
  puVar3 = param_2;
  FUN_100df9600();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101334120);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000101334344(lVar4);
    puVar2 = param_2;
    FUN_100df9600();
    if (((uint)puVar3 & 1) != (param_3 & 1)) {
      FUN_100dfa6ec(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013340e4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001013341c0();
    lVar4 = *unaff_x20;
    goto joined_r0x000101334134;
  }
  lVar4 = *unaff_x20;
joined_r0x000101334134:
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20);
    FUN_101334848(puVar2);
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar8;
    puVar2[3] = uVar10;
    puVar2[2] = uVar9;
    return puVar2;
  }
  FUN_10133415c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return param_2;
}



/* Entry: 10133415c; end: 1013341bf;  */

void FUN_10133415c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013341c0);
  (*pcVar2)();
}



/* Entry: 1013341c0; end: 10133461b;  */

void FUN_1013341c0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112d377b0,&UNK_10d913200);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1013342a4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_1013342a4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101334344);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101334314;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101334314:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10133461c; end: 10133465f;  */

long FUN_10133461c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101334660; end: 101334663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101334660(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_7c;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *param_1;
  iStack_7c = (int)*(char *)(lVar7 + 0x58);
  if (-1 < iStack_7c) {
    uVar8 = *(undefined8 *)(lVar7 + 0x50);
    uVar1 = *(undefined8 *)(lVar7 + 0x40);
    uVar2 = *(undefined8 *)(lVar7 + 0x48);
    uStack_98 = *(undefined8 *)(lVar7 + 0x38);
    uStack_90 = uVar2;
    uStack_88 = uVar8;
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar2,uVar8);
    func_0x000107c5eea0(lVar5);
    (**(code **)(lVar9 + 0x10))(puVar10,lVar5,lVar3);
    (**(code **)(lVar9 + 0x38))(puVar10,0,1,lVar3);
    lVar7 = _DAT_112d73df0;
    func_0x000107c61428(param_3 + _DAT_112d73df0,auStack_78,0x21,0);
    func_0x000100ed9cbc(puVar10,param_3 + lVar7);
    func_0x000107c614a8(auStack_78);
    uVar2 = uStack_98;
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar8 = uStack_98;
    func_0x000107c5fadc(uStack_98,uVar1);
    uVar4 = uVar8;
    func_0x000107c5ee70();
    func_0x000107c5cdf0(uVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    FUN_101333498(uVar2,uVar1,uStack_90,uStack_88,iStack_7c);
    (**(code **)(lVar9 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 101334664; end: 101334847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101334664(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_7c;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *param_1;
  iStack_7c = (int)*(char *)(lVar7 + 0x58);
  if (-1 < iStack_7c) {
    uVar8 = *(undefined8 *)(lVar7 + 0x50);
    uVar1 = *(undefined8 *)(lVar7 + 0x40);
    uVar2 = *(undefined8 *)(lVar7 + 0x48);
    uStack_98 = *(undefined8 *)(lVar7 + 0x38);
    uStack_90 = uVar2;
    uStack_88 = uVar8;
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar2,uVar8);
    func_0x000107c5eea0(lVar5);
    (**(code **)(lVar9 + 0x10))(puVar10,lVar5,lVar3);
    (**(code **)(lVar9 + 0x38))(puVar10,0,1,lVar3);
    lVar7 = _DAT_112d73df0;
    func_0x000107c61428(param_3 + _DAT_112d73df0,auStack_78,0x21,0);
    func_0x000100ed9cbc(puVar10,param_3 + lVar7);
    func_0x000107c614a8(auStack_78);
    uVar2 = uStack_98;
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar8 = uStack_98;
    func_0x000107c5fadc(uStack_98,uVar1);
    uVar4 = uVar8;
    func_0x000107c5ee70();
    func_0x000107c5cdf0(uVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    FUN_101333498(uVar2,uVar1,uStack_90,uStack_88,iStack_7c);
    (**(code **)(lVar9 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 101334848; end: 101334867;  */

void FUN_101334848(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010133485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101334868; end: 10133492b;  */

undefined8 FUN_101334868(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10133e00c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10133492c; end: 101334933;  */

void FUN_10133492c(long param_1,long param_2)

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



/* Entry: 101334934; end: 101334987;  */

void FUN_101334934(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101334bc4();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101334988; end: 101334bc3;  */

/* WARNING: Possible PIC construction at 0x000101334a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101334b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101334b70) */
/* WARNING: Removing unreachable block (ram,0x000101334b90) */
/* WARNING: Removing unreachable block (ram,0x000101334b30) */
/* WARNING: Removing unreachable block (ram,0x000101334aec) */
/* WARNING: Removing unreachable block (ram,0x000101334af0) */
/* WARNING: Removing unreachable block (ram,0x000101334a84) */
/* WARNING: Removing unreachable block (ram,0x000101334b88) */
/* WARNING: Removing unreachable block (ram,0x000101334ab0) */
/* WARNING: Removing unreachable block (ram,0x000101334a24) */
/* WARNING: Removing unreachable block (ram,0x000101334b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101334988(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d74070);
  *(long *)(unaff_x20 + _DAT_112d74070) = param_1;
  func_0x000107c61574(uVar2);
  func_0x000107c6157c(param_1);
  FUN_101334d98();
  if (-1 < *(long *)(param_1 + 0x10)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5fadc(uVar2);
    }
    func_0x000107c61168(PTR_PTR_1126b0518);
    func_0x000107c5b064();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101334bc4);
  (*pcVar1)();
}



/* Entry: 101334bc4; end: 101334c53;  */

/* WARNING: Possible PIC construction at 0x000101334c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101334c34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101334bc4(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d74068) != 0) {
    func_0x000107c42848(*(undefined8 *)(unaff_x20 + _DAT_112d74048));
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d74070);
  if (lVar1 == 0) {
    lVar1 = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112d74070) = 0;
  }
  else {
    func_0x0001000a8868(unaff_x20 + _DAT_112d74058,
                        *(undefined8 *)(unaff_x20 + _DAT_112d74058 + 0x18));
    func_0x000107c6157c(lVar1);
    FUN_101335e2c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101334c54; end: 101334cb3; -[_TtC30ShoppingPreviewProductLinkImpl41ShoppingPreviewProductLinkLauncherPDPImpl init] */

void FUN_101334c54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingPreviewProductLinkImpl.ShoppingPreviewProductLinkLauncherPDPImpl",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101334c80);
  (*pcVar1)();
}



/* Entry: 101334cb4; end: 101334d2b; -[_TtC30ShoppingPreviewProductLinkImpl41ShoppingPreviewProductLinkLauncherPDPImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101334cb4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74048));
  func_0x0001000834e4(param_1 + _DAT_112d74050);
  func_0x0001000834e4(param_1 + _DAT_112d74058);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74060));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74068));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d74070));
  return;
}



/* Entry: 101334d2c; end: 101334d4b;  */

void FUN_101334d2c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c93a8);
  return;
}



/* Entry: 101334d4c; end: 101334d6b;  */

void FUN_101334d4c(void)

{
  FUN_101334988();
  return;
}



/* Entry: 101334d6c; end: 101334d6f; -[_TtC30ShoppingPreviewProductLinkImpl41ShoppingPreviewProductLinkLauncherPDPImpl commerceBrowserWillPresent] */

void FUN_101334d6c(void)

{
  return;
}



/* Entry: 101334d70; end: 101334d97; -[_TtC30ShoppingPreviewProductLinkImpl41ShoppingPreviewProductLinkLauncherPDPImpl commerceBrowserWillDismiss] */

void FUN_101334d70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101334bc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101334d98; end: 101334eff;  */

undefined * FUN_101334d98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  cVar5 = *(char *)(param_1 + 0x58);
  if (cVar5 < '\0') {
    puVar7 = PTR___sSiN_11034deb0;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5fadc(uVar8);
    }
    puVar9 = PTR_PTR_1126b0840;
    func_0x000107c61168(PTR_PTR_1126b0840);
    uVar6 = 0x50;
    FUN_100c6f294(0x50);
    func_0x000107c61180();
    func_0x000107c5aa90(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar9 = PTR_PTR_1126b0840;
    func_0x000107c61168(PTR_PTR_1126b0840);
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar1,uVar3);
    uVar8 = uVar1;
    func_0x000107c5ee20(uVar1,uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5fe40(uVar6);
    func_0x000107c4b058(puVar9);
    func_0x000107c61180();
    FUN_101333498(uVar2,uVar4,uVar1,uVar3,(long)cVar5);
  }
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  return puVar9;
}



/* Entry: 101334f00; end: 101335063;  */

undefined * FUN_101334f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61434(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61434(uVar2);
  puVar4 = PTR___sSiN_11034deb0;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fadc(puVar4,puVar7);
  func_0x000107c6142c(puVar7);
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(uVar8,lVar3);
  }
  puVar7 = PTR_PTR_1126b04c8;
  func_0x000107c610f8(PTR_PTR_1126b04c8);
  func_0x000107c488d8();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar8);
  return puVar7;
}



/* Entry: 101335064; end: 1013350cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101335064(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112d740d8) != 0) {
      func_0x000107c41864();
    }
    FUN_101335898();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013350d0; end: 1013357b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013350d0(undefined8 param_1,uint param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long alStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_a4 = param_2;
  FUN_10133e00c();
  lVar18 = *(long *)(lVar2 + -8);
  lStack_98 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0x112d3ae80;
  puStack_a0 = auStack_b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)(auStack_b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar15 - extraout_x12_00;
  lVar3 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar16 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d74120;
  func_0x0001000285a8(0x112d74120,&UNK_10d934740);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar16 - extraout_x8_02;
  func_0x000101335d3c(param_1,lVar12);
  (**(code **)(lVar18 + 0x38))(lVar12,0,1,lVar2);
  lVar3 = _DAT_112d740d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d740d0,&puStack_90,0x21,0);
  func_0x000101336364(lVar12,unaff_x20 + lVar3,0x112d74120,&UNK_10d934740);
  func_0x000107c614a8(&puStack_90);
  lVar3 = 0;
  func_0x000107c5ede0();
  pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar13)(lVar19,1,1,lVar3);
  (*pcVar13)(lVar15,1,1,lVar3);
  lVar3 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar17,1,1,lVar3);
  *(undefined1 *)(lVar12 + -8) = 0;
  *(undefined8 *)(lVar12 + -0x10) = 0;
  *(undefined8 *)(lVar12 + -0x18) = 0;
  *(undefined8 *)(lVar12 + -0x20) = 0;
  *(undefined8 *)(lVar12 + -0x28) = 0;
  *(undefined8 *)(lVar12 + -0x30) = 0;
  *(undefined8 *)(lVar12 + -0x38) = 0;
  *(long *)(lVar12 + -0x40) = lVar17;
  func_0x000104638e24(lVar16,0xe,lVar19,0,lVar15,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar16);
  puVar4 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar1 = puStack_a0;
  func_0x000101335d3c(param_1,puStack_a0);
  uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1103a4428;
  func_0x000107c613fc(&UNK_1103a4428,uVar14 + lStack_98,uVar11 | 7);
  func_0x000101335d80(puVar1,puVar6 + uVar14);
  pcStack_70 = FUN_101335dc4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e38b5c;
  puStack_78 = &UNK_1103a4440;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_68);
  func_0x000107c5dc64(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar5);
  plVar8 = (long *)(unaff_x20 + _DAT_112d740a0);
  func_0x0001000a8868(plVar8,plVar8[3]);
  lVar3 = *(long *)(*plVar8 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar3 = lVar2;
    func_0x000107c4d070();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar9 = 0;
      func_0x0001000956f0(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126c5b30;
      func_0x000107c610f8(PTR_PTR_1126c5b30);
      func_0x000107c45db0();
      lVar2 = lVar16;
      func_0x000103c5d254(lVar16,puVar4,lVar3);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d740b0));
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d740d8);
      *(long *)(unaff_x20 + _DAT_112d740d8) = lVar3;
      func_0x000107c615f0(lVar3);
      func_0x000107c615e8(uVar9);
      if ((uStack_a4 & 1) != 0) {
        puVar10 = (undefined8 *)(unaff_x20 + _DAT_112d740b8);
        func_0x0001000a8868(puVar10,puVar10[3]);
        FUN_101334660(param_1,2,*puVar10);
      }
      func_0x000107c61170(lVar16);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
      return;
    }
  }
  func_0x000107c61170(lVar16);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1013357b4; end: 101335897;  */

void FUN_1013357b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0;
    FUN_10133e00c();
    func_0x000107c5ed90((long)*(int *)(lVar1 + 0x14));
    func_0x000107c4b788(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101335898; end: 101335a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101335898(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_10133e00c();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d74120;
  func_0x0001000285a8(0x112d74120,&UNK_10d934740);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d740b0);
  lVar2 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar2 = _DAT_112d740d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d740d0,auStack_68,0,0);
  func_0x00010133631c(unaff_x20 + lVar2,lVar7,0x112d74120,&UNK_10d934740);
  lVar8 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar8 != 1) {
    func_0x000101335d80(lVar7,puVar6);
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d740b8);
    func_0x0001000a8868(puVar3,puVar3[3]);
    func_0x000101336080(puVar6,*puVar3);
    FUN_101334868(puVar6);
  }
  (**(code **)(lVar9 + 0x38))(lVar5,1,1,lVar1);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,0x21,0);
  func_0x000101336364(lVar5,unaff_x20 + lVar2,0x112d74120,&UNK_10d934740);
  func_0x000107c614a8(auStack_80);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d740d8);
  *(undefined8 *)(unaff_x20 + _DAT_112d740d8) = 0;
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 101335a88; end: 101335ae7; -[_TtC30ShoppingPreviewProductLinkImpl45ShoppingPreviewProductLinkLauncherWebViewImpl init] */

void FUN_101335a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingPreviewProductLinkImpl.ShoppingPreviewProductLinkLauncherWebViewImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101335ab4);
  (*pcVar1)();
}



/* Entry: 101335ae8; end: 101335b8f; -[_TtC30ShoppingPreviewProductLinkImpl45ShoppingPreviewProductLinkLauncherWebViewImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101335b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101335b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101335ae8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d740a0);
  func_0x0001013363ac(param_1 + _DAT_112d740a8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d740b0));
  func_0x0001000834e4(param_1 + _DAT_112d740b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d740c0));
  return;
}



/* Entry: 101335b90; end: 101335b97;  */

void FUN_101335b90(void)

{
  if (lRam0000000112d74108 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62efa4);
  return;
}



/* Entry: 101335b98; end: 101335bcf;  */

void FUN_101335b98(undefined8 param_1)

{
  if (lRam0000000112d74108 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62efa4);
  return;
}



/* Entry: 101335bd0; end: 101335d13;  */

void FUN_101335bd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10d9346d0;
  puStack_58 = &UNK_10d9346e8;
  puStack_50 = PTR___sBOWV_11034d658 + 0x40;
  puStack_48 = &UNK_10d9346d0;
  puStack_40 = &UNK_10d934700;
  lVar1 = 0x13f;
  puStack_38 = puStack_50;
  func_0x000101335c74();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d934718;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 101335d14; end: 101335dc3; -[_TtC30ShoppingPreviewProductLinkImpl45ShoppingPreviewProductLinkLauncherWebViewImpl webBrowserDidDismiss:] */

void FUN_101335d14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101335898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101335dc4; end: 101335e0f;  */

void FUN_101335dc4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10133e00c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if (param_1 != 0) {
    lVar1 = 0;
    FUN_10133e00c(0,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90((long)*(int *)(lVar1 + 0x14));
    func_0x000107c4b788(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101335e10; end: 101335e2b;  */

void FUN_101335e10(long param_1,long param_2)

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



/* Entry: 101335e2c; end: 1013362d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101335e2c(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar5 = 0x112d373d8;
  lStack_a8 = param_3;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12;
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = lStack_a8;
  lVar5 = _DAT_112d73df0;
  lVar9 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  cVar3 = *(char *)(param_2 + 0x58);
  if (-1 < cVar3) {
    uStack_b8 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uStack_b0 = *(undefined8 *)(param_2 + 0x50);
    func_0x000107c61428(lStack_a8 + _DAT_112d73df0,auStack_88,0,0);
    func_0x00010133631c(lVar7 + lVar5,lVar12,0x112d373d8,&UNK_10d9014c0);
    lVar7 = lVar12;
    (**(code **)(lVar11 + 0x30))(lVar12,1,lVar6);
    if ((int)lVar7 == 1) {
      func_0x0001013363d0(lVar12,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar9,lVar12,lVar6);
      uStack_c0 = uVar2;
      func_0x000107c61434(uVar2);
      func_0x00010006c00c(uVar1,uStack_b0);
      func_0x000107c5ee84();
      uVar4 = uStack_b8;
      uVar13 = *(undefined8 *)(lStack_a8 + 0x10);
      uVar8 = uStack_b8;
      func_0x000107c5fadc(uStack_b8,uVar2);
      func_0x000107c5cdf4(-param_1,uVar13);
      func_0x000107c61170(uVar8);
      FUN_101333498(uVar4,uStack_c0,uVar1,uStack_b0,(long)cVar3);
      (**(code **)(lVar11 + 8))(lVar9,lVar6);
      (**(code **)(lVar11 + 0x38))(lVar10,1,1,lVar6);
      lVar7 = lStack_a8;
      func_0x000107c61428(lStack_a8 + lVar5,auStack_a0,0x21,0);
      func_0x000101336364(lVar10,lVar7 + lVar5,0x112d373d8,&UNK_10d9014c0);
      func_0x000107c614a8(auStack_a0);
    }
  }
  return;
}



/* Entry: 1013362d8; end: 10133640f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013362d8(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  lVar2 = 0;
  FUN_10133e00c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (((param_1 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) {
    puVar1 = auStack_60;
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10133461c(lVar2 + _DAT_112d740b8,auStack_60);
      func_0x000107c61170(lVar2);
      func_0x0001000a8868(auStack_60,uStack_48);
      FUN_101334660(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),2,*puVar1);
      func_0x0001000834e4(auStack_60);
    }
  }
  return;
}



/* Entry: 101336410; end: 101336417;  */

void FUN_101336410(long param_1,long param_2)

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



/* Entry: 101336418; end: 101336423; -[SCShoppingPreviewProductLinkImplEntryPoint previewScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336418(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74128;
  func_0x000107c61428(param_1 + _DAT_112d74128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101336424; end: 10133642f; -[SCShoppingPreviewProductLinkImplEntryPoint setPreviewScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74128;
  func_0x000107c61428(param_1 + _DAT_112d74128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336430; end: 10133643b; -[SCShoppingPreviewProductLinkImplEntryPoint commerceLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74130;
  func_0x000107c61428(param_1 + _DAT_112d74130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133643c; end: 101336447; -[SCShoppingPreviewProductLinkImplEntryPoint setCommerceLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133643c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74130;
  func_0x000107c61428(param_1 + _DAT_112d74130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336448; end: 101336453; -[SCShoppingPreviewProductLinkImplEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336448(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74138;
  func_0x000107c61428(param_1 + _DAT_112d74138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101336454; end: 10133645f; -[SCShoppingPreviewProductLinkImplEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74138;
  func_0x000107c61428(param_1 + _DAT_112d74138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336460; end: 10133646b; -[SCShoppingPreviewProductLinkImplEntryPoint snapAdsUnlockableTrackingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74140;
  func_0x000107c61428(param_1 + _DAT_112d74140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133646c; end: 101336477; -[SCShoppingPreviewProductLinkImplEntryPoint setSnapAdsUnlockableTrackingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133646c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74140;
  func_0x000107c61428(param_1 + _DAT_112d74140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336478; end: 101336483; -[SCShoppingPreviewProductLinkImplEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336478(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74148;
  func_0x000107c61428(param_1 + _DAT_112d74148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101336484; end: 10133648f; -[SCShoppingPreviewProductLinkImplEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74148;
  func_0x000107c61428(param_1 + _DAT_112d74148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101336490; end: 10133649b; -[SCShoppingPreviewProductLinkImplEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101336490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74150;
  func_0x000107c61428(param_1 + _DAT_112d74150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10133649c; end: 1013364df;  */

void FUN_10133649c(long param_1,undefined8 param_2,long *param_3)

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


