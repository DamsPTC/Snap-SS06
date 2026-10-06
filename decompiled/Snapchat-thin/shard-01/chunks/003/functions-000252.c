/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f55c74; end: 100f55c93;  */

void FUN_100f55c74(void)

{
  FUN_100f54f4c();
  return;
}



/* Entry: 100f55c94; end: 100f55c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55c94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c51a1c(*(undefined8 *)(lVar1 + _DAT_112d4e0d8));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f55c9c; end: 100f55cbb;  */

void FUN_100f55c9c(void)

{
  FUN_100f54f4c();
  return;
}



/* Entry: 100f55cbc; end: 100f55ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55cbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112d4e100);
    if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + _DAT_112d4e030), lVar2 != 0)) {
      func_0x000107c61174(lVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c53dec(param_1);
      func_0x000107c5677c(param_1);
      func_0x000107c4f018(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f55ce8; end: 100f55d13;  */

void FUN_100f55ce8(void)

{
  FUN_100f538ec();
  return;
}



/* Entry: 100f55d14; end: 100f55d43;  */

void FUN_100f55d14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f55d44; end: 100f55d4b;  */

/* WARNING: Possible PIC construction at 0x000100f53b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53be8) */
/* WARNING: Removing unreachable block (ram,0x000100f53ba8) */
/* WARNING: Removing unreachable block (ram,0x000100f53b84) */
/* WARNING: Removing unreachable block (ram,0x000100f53bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55d44(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    FUN_100f5494c();
    puVar2 = PTR_PTR_1126a6088;
    func_0x000107c610f8(PTR_PTR_1126a6088);
    func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
    func_0x000107c47948(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100f55d4c; end: 100f55d6b;  */

void FUN_100f55d4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f55d6c; end: 100f55d73;  */

/* WARNING: Possible PIC construction at 0x000100f53cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f53d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f53d08) */
/* WARNING: Removing unreachable block (ram,0x000100f53cbc) */
/* WARNING: Removing unreachable block (ram,0x000100f53d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55d6c(void)

{
  undefined *puVar1;
  long in_x3;
  
  if (*(long *)(in_x3 + 0x10) != 0) {
    FUN_100f5494c();
    puVar1 = PTR_PTR_1126a6088;
    func_0x000107c610f8(PTR_PTR_1126a6088);
    func_0x000107c5fc48(in_x3,PTR___sSSN_11034da80);
    func_0x000107c47948(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x3);
    return;
  }
  return;
}



/* Entry: 100f55d74; end: 100f55dd3;  */

void FUN_100f55d74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f55dd4; end: 100f55e33;  */

void FUN_100f55dd4(long param_1,long param_2)

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



/* Entry: 100f55e34; end: 100f55e8f; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112d4e158;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  FUN_100f562e8();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 100f55e90; end: 100f55ee3; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f55e90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d4e158;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  FUN_100f567c8();
  FUN_100f562e8();
  func_0x000107c61464(param_1,lVar1,0x18,7);
  return 0;
}



/* Entry: 100f55ee4; end: 100f560af; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController viewDidLoad] */

void FUN_100f55ee4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_100f562e8();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef1c220);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f55f98);
  (*pcVar2)();
}



/* Entry: 100f560b0; end: 100f560df; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController viewWillAppear:] */

void FUN_100f560b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000100f55f98(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f560e0; end: 100f561a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f560e0(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + _DAT_112d4e158;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4e110);
    uVar2 = 0;
    func_0x000107c5fca0(0);
    func_0x000107c4d664(uVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61168();
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170();
  FUN_100f562e8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillDisappear__112685438,param_1 & 1);
  return;
}



/* Entry: 100f561a8; end: 100f561d7; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController viewWillDisappear:] */

void FUN_100f561a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100f560e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f561d8; end: 100f561df; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController applicationWillEnterForeground:] */

/* WARNING: Possible PIC construction at 0x000100f56254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f56258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f561d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112d4e158;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4e110);
    func_0x000107c61174(param_1);
    uVar2 = 1;
    func_0x000107c5fca0(1);
    func_0x000107c4d664(uVar3,param_2,uVar2);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 100f561e0; end: 100f561e7; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController applicationDidEnterBackground:] */

/* WARNING: Possible PIC construction at 0x000100f56254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f56258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f561e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112d4e158;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4e110);
    func_0x000107c61174(param_1);
    uVar2 = 0;
    func_0x000107c5fca0(0);
    func_0x000107c4d664(uVar3,param_2,uVar2);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 100f561e8; end: 100f5627b;  */

/* WARNING: Possible PIC construction at 0x000100f56254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f56258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f561e8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112d4e158;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4e110);
    func_0x000107c61174(param_1);
    uVar2 = (ulong)(param_4 & 1);
    func_0x000107c5fca0(uVar2);
    func_0x000107c4d664(uVar3,param_2,uVar2);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 100f5627c; end: 100f562d7; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController initWithNibName:bundle:] */

void FUN_100f5627c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCCommerceComposerScreenshopViewController",
                      0x4b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f562a8);
  (*pcVar1)();
}



/* Entry: 100f562d8; end: 100f562e7; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f562d8(long param_1)

{
  param_1 = param_1 + _DAT_112d4e158;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f562e8; end: 100f56307;  */

void FUN_100f562e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127a49e0);
  return;
}



/* Entry: 100f56308; end: 100f56433; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController exit:] */

void FUN_100f56308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11036d580;
  func_0x000107c613fc(&UNK_11036d580,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11036d5a8;
  func_0x000107c613fc(&UNK_11036d5a8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d914670;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11036d5d0;
  func_0x000107c613fc(&UNK_11036d5d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d914680;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d914690,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 100f56434; end: 100f564a7;  */

void FUN_100f56434(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f564a8,uVar1,uVar2);
  return;
}



/* Entry: 100f564a8; end: 100f56513;  */

void FUN_100f564a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f56514,uVar3,uVar2);
  return;
}



/* Entry: 100f56514; end: 100f56553;  */

void FUN_100f56514(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100f56550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f56554; end: 100f5657b; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController backgroundExitBehavior] */

void FUN_100f56554(void)

{
  func_0x00010451429c(0);
  func_0x000104514080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5657c; end: 100f56583; -[_TtC32SCCommerceComposerScreenshopImpl42SCCommerceComposerScreenshopViewController pageViewName] */

undefined8 FUN_100f5657c(void)

{
  return 0xfa;
}



/* Entry: 100f56584; end: 100f565e7;  */

void FUN_100f56584(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f565e8;
  plVar4[2] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec(0,uVar1);
  plVar4[3] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[4] = lVar3;
  func_0x000100eea164();
  plVar4[5] = lVar3;
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f564a8,lVar2,lVar3);
  return;
}



/* Entry: 100f565e8; end: 100f56623;  */

void FUN_100f565e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f56620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f56624; end: 100f5669b;  */

void FUN_100f56624(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f567ec;
  FUN_100e8ded0(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 100f5669c; end: 100f56703;  */

void FUN_100f5669c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f566d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f56704; end: 100f56787;  */

void FUN_100f56704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100f567f4;
  FUN_100e8df9c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 100f56788; end: 100f567c7;  */

void FUN_100f56788(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f567c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f567c8; end: 100f567eb;  */

undefined8 FUN_100f567c8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f567ec; end: 100f567f7;  */

void FUN_100f567ec(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f56620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f567f8; end: 100f56853; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper init] */

void FUN_100f567f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceComposerScreenshopImpl.SCScreenshopTooltipsHelper",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f56824);
  (*pcVar1)();
}



/* Entry: 100f56854; end: 100f56863; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4e188));
  return;
}



/* Entry: 100f56864; end: 100f56883;  */

void FUN_100f56864(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4ad0);
  return;
}



/* Entry: 100f56884; end: 100f5688f; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper pushToValdiMarshaller:] */

undefined8 FUN_100f56884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0ae8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x000104e08ba4();
  return param_3;
}



/* Entry: 100f56890; end: 100f5689f; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper dotTooltipDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d4e188),PTR_s_didShowScreenshopDotTooltip_1125bc7e8);
  return;
}



/* Entry: 100f568a0; end: 100f568b7; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper shouldDisplayDotTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568a0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d4e188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c234150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d4e188),PTR_s_shouldShowScreenshopDotTooltip_11266aa78);
    return;
  }
  return;
}



/* Entry: 100f568b8; end: 100f568c7; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper swipingTooltipDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d4e188),
             PTR_s_didShowScreenshopSwipingTooltip_1125bc7f8);
  return;
}



/* Entry: 100f568c8; end: 100f568df; -[_TtC32SCCommerceComposerScreenshopImpl26SCScreenshopTooltipsHelper shouldDisplaySwipingTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568c8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d4e188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c234190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d4e188),PTR_s_shouldShowScreenshopSwipingToolt_11266aa88)
    ;
    return;
  }
  return;
}



/* Entry: 100f568e0; end: 100f568eb; -[SCCommerceComposerScreenshopEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1b8;
  func_0x000107c61428(param_1 + _DAT_112d4e1b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f568ec; end: 100f568f7; -[SCCommerceComposerScreenshopEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1b8;
  func_0x000107c61428(param_1 + _DAT_112d4e1b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f568f8; end: 100f56903; -[SCCommerceComposerScreenshopEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f568f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1c0;
  func_0x000107c61428(param_1 + _DAT_112d4e1c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56904; end: 100f5690f; -[SCCommerceComposerScreenshopEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1c0;
  func_0x000107c61428(param_1 + _DAT_112d4e1c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56910; end: 100f5691b; -[SCCommerceComposerScreenshopEntryPoint valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1c8;
  func_0x000107c61428(param_1 + _DAT_112d4e1c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5691c; end: 100f56927; -[SCCommerceComposerScreenshopEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5691c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1c8;
  func_0x000107c61428(param_1 + _DAT_112d4e1c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56928; end: 100f56933; -[SCCommerceComposerScreenshopEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1d0;
  func_0x000107c61428(param_1 + _DAT_112d4e1d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56934; end: 100f5693f; -[SCCommerceComposerScreenshopEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1d0;
  func_0x000107c61428(param_1 + _DAT_112d4e1d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56940; end: 100f5694b; -[SCCommerceComposerScreenshopEntryPoint showcaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1d8;
  func_0x000107c61428(param_1 + _DAT_112d4e1d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5694c; end: 100f56957; -[SCCommerceComposerScreenshopEntryPoint setShowcaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5694c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1d8;
  func_0x000107c61428(param_1 + _DAT_112d4e1d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56958; end: 100f56963; -[SCCommerceComposerScreenshopEntryPoint commerceFavoritesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1e0;
  func_0x000107c61428(param_1 + _DAT_112d4e1e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56964; end: 100f5696f; -[SCCommerceComposerScreenshopEntryPoint setCommerceFavoritesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56964(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1e0;
  func_0x000107c61428(param_1 + _DAT_112d4e1e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56970; end: 100f5697b; -[SCCommerceComposerScreenshopEntryPoint commerceConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56970(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1e8;
  func_0x000107c61428(param_1 + _DAT_112d4e1e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f5697c; end: 100f56987; -[SCCommerceComposerScreenshopEntryPoint setCommerceConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5697c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1e8;
  func_0x000107c61428(param_1 + _DAT_112d4e1e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56988; end: 100f56993; -[SCCommerceComposerScreenshopEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56988(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1f0;
  func_0x000107c61428(param_1 + _DAT_112d4e1f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56994; end: 100f5699f; -[SCCommerceComposerScreenshopEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1f0;
  func_0x000107c61428(param_1 + _DAT_112d4e1f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f569a0; end: 100f569ab; -[SCCommerceComposerScreenshopEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e1f8;
  func_0x000107c61428(param_1 + _DAT_112d4e1f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f569ac; end: 100f569b7; -[SCCommerceComposerScreenshopEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e1f8;
  func_0x000107c61428(param_1 + _DAT_112d4e1f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f569b8; end: 100f569c3; -[SCCommerceComposerScreenshopEntryPoint commerceStaticImageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e200;
  func_0x000107c61428(param_1 + _DAT_112d4e200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f569c4; end: 100f569cf; -[SCCommerceComposerScreenshopEntryPoint setCommerceStaticImageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e200;
  func_0x000107c61428(param_1 + _DAT_112d4e200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f569d0; end: 100f569db; -[SCCommerceComposerScreenshopEntryPoint userIPInferredLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e208;
  func_0x000107c61428(param_1 + _DAT_112d4e208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f569dc; end: 100f569e7; -[SCCommerceComposerScreenshopEntryPoint setUserIPInferredLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e208;
  func_0x000107c61428(param_1 + _DAT_112d4e208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f569e8; end: 100f569f3; -[SCCommerceComposerScreenshopEntryPoint screenshopService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e210;
  func_0x000107c61428(param_1 + _DAT_112d4e210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f569f4; end: 100f569ff; -[SCCommerceComposerScreenshopEntryPoint setScreenshopService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f569f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e210;
  func_0x000107c61428(param_1 + _DAT_112d4e210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56a00; end: 100f56a0b; -[SCCommerceComposerScreenshopEntryPoint composerCameraRollServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e218;
  func_0x000107c61428(param_1 + _DAT_112d4e218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56a0c; end: 100f56a17; -[SCCommerceComposerScreenshopEntryPoint setComposerCameraRollServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e218;
  func_0x000107c61428(param_1 + _DAT_112d4e218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56a18; end: 100f56a23; -[SCCommerceComposerScreenshopEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e220;
  func_0x000107c61428(param_1 + _DAT_112d4e220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56a24; end: 100f56a2f; -[SCCommerceComposerScreenshopEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e220;
  func_0x000107c61428(param_1 + _DAT_112d4e220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56a30; end: 100f56a3b; -[SCCommerceComposerScreenshopEntryPoint userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e228;
  func_0x000107c61428(param_1 + _DAT_112d4e228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56a3c; end: 100f56a47; -[SCCommerceComposerScreenshopEntryPoint setUserStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e228;
  func_0x000107c61428(param_1 + _DAT_112d4e228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56a48; end: 100f56a53; -[SCCommerceComposerScreenshopEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e230;
  func_0x000107c61428(param_1 + _DAT_112d4e230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f56a54; end: 100f56a97;  */

void FUN_100f56a54(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f56a98; end: 100f56aa3; -[SCCommerceComposerScreenshopEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e230;
  func_0x000107c61428(param_1 + _DAT_112d4e230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56aa4; end: 100f56af7;  */

void FUN_100f56aa4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f56af8; end: 100f56b3f; -[SCCommerceComposerScreenshopEntryPoint productCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56af8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e238;
  func_0x000107c61428(param_1 + _DAT_112d4e238,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f56b40; end: 100f56b4b; -[SCCommerceComposerScreenshopEntryPoint setProductCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e238;
  func_0x000107c61428(param_1 + _DAT_112d4e238,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f56b4c; end: 100f56b93; -[SCCommerceComposerScreenshopEntryPoint favoritesCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56b4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4e240;
  func_0x000107c61428(param_1 + _DAT_112d4e240,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f56b94; end: 100f56b9f; -[SCCommerceComposerScreenshopEntryPoint setFavoritesCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f56b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4e240;
  func_0x000107c61428(param_1 + _DAT_112d4e240,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f56ba0; end: 100f56bff;  */

void FUN_100f56ba0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100f56c00; end: 100f574cb;  */

/* WARNING: Possible PIC construction at 0x000100f56f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f56f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5742c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5743c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5744c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5745c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5746c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5747c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5748c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f573fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5741c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5733c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5735c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5736c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5737c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5738c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5739c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f572cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f572dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f572ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f572fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5730c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5731c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5725c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5726c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5728c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5729c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f572ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5720c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5721c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5722c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5723c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5724c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f571ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5715c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5716c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5717c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5718c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5710c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5711c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5712c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5713c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5709c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f570bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5706c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5707c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5703c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5701c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5702c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5700c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f57030) */
/* WARNING: Removing unreachable block (ram,0x000100f57020) */
/* WARNING: Removing unreachable block (ram,0x000100f57050) */
/* WARNING: Removing unreachable block (ram,0x000100f57040) */
/* WARNING: Removing unreachable block (ram,0x000100f57080) */
/* WARNING: Removing unreachable block (ram,0x000100f57070) */
/* WARNING: Removing unreachable block (ram,0x000100f570c0) */
/* WARNING: Removing unreachable block (ram,0x000100f570b0) */
/* WARNING: Removing unreachable block (ram,0x000100f570a0) */
/* WARNING: Removing unreachable block (ram,0x000100f57100) */
/* WARNING: Removing unreachable block (ram,0x000100f570f0) */
/* WARNING: Removing unreachable block (ram,0x000100f570e0) */
/* WARNING: Removing unreachable block (ram,0x000100f570d0) */
/* WARNING: Removing unreachable block (ram,0x000100f57140) */
/* WARNING: Removing unreachable block (ram,0x000100f57130) */
/* WARNING: Removing unreachable block (ram,0x000100f57120) */
/* WARNING: Removing unreachable block (ram,0x000100f57110) */
/* WARNING: Removing unreachable block (ram,0x000100f57190) */
/* WARNING: Removing unreachable block (ram,0x000100f57180) */
/* WARNING: Removing unreachable block (ram,0x000100f57170) */
/* WARNING: Removing unreachable block (ram,0x000100f57160) */
/* WARNING: Removing unreachable block (ram,0x000100f571f0) */
/* WARNING: Removing unreachable block (ram,0x000100f571e0) */
/* WARNING: Removing unreachable block (ram,0x000100f571d0) */
/* WARNING: Removing unreachable block (ram,0x000100f571c0) */
/* WARNING: Removing unreachable block (ram,0x000100f571b0) */
/* WARNING: Removing unreachable block (ram,0x000100f57250) */
/* WARNING: Removing unreachable block (ram,0x000100f57240) */
/* WARNING: Removing unreachable block (ram,0x000100f57230) */
/* WARNING: Removing unreachable block (ram,0x000100f57220) */
/* WARNING: Removing unreachable block (ram,0x000100f57210) */
/* WARNING: Removing unreachable block (ram,0x000100f57200) */
/* WARNING: Removing unreachable block (ram,0x000100f572b0) */
/* WARNING: Removing unreachable block (ram,0x000100f572a0) */
/* WARNING: Removing unreachable block (ram,0x000100f57290) */
/* WARNING: Removing unreachable block (ram,0x000100f57280) */
/* WARNING: Removing unreachable block (ram,0x000100f57270) */
/* WARNING: Removing unreachable block (ram,0x000100f57260) */
/* WARNING: Removing unreachable block (ram,0x000100f57320) */
/* WARNING: Removing unreachable block (ram,0x000100f57310) */
/* WARNING: Removing unreachable block (ram,0x000100f57300) */
/* WARNING: Removing unreachable block (ram,0x000100f572f0) */
/* WARNING: Removing unreachable block (ram,0x000100f572e0) */
/* WARNING: Removing unreachable block (ram,0x000100f572d0) */
/* WARNING: Removing unreachable block (ram,0x000100f573a0) */
/* WARNING: Removing unreachable block (ram,0x000100f57390) */
/* WARNING: Removing unreachable block (ram,0x000100f57380) */
/* WARNING: Removing unreachable block (ram,0x000100f57370) */
/* WARNING: Removing unreachable block (ram,0x000100f57360) */
/* WARNING: Removing unreachable block (ram,0x000100f57350) */
/* WARNING: Removing unreachable block (ram,0x000100f57340) */
/* WARNING: Removing unreachable block (ram,0x000100f57420) */
/* WARNING: Removing unreachable block (ram,0x000100f57410) */
/* WARNING: Removing unreachable block (ram,0x000100f57400) */
/* WARNING: Removing unreachable block (ram,0x000100f573f0) */
/* WARNING: Removing unreachable block (ram,0x000100f573e0) */
/* WARNING: Removing unreachable block (ram,0x000100f573d0) */
/* WARNING: Removing unreachable block (ram,0x000100f573c0) */
/* WARNING: Removing unreachable block (ram,0x000100f573b0) */
/* WARNING: Removing unreachable block (ram,0x000100f574a0) */
/* WARNING: Removing unreachable block (ram,0x000100f57490) */
/* WARNING: Removing unreachable block (ram,0x000100f57480) */
/* WARNING: Removing unreachable block (ram,0x000100f57470) */
/* WARNING: Removing unreachable block (ram,0x000100f57460) */
/* WARNING: Removing unreachable block (ram,0x000100f57450) */
/* WARNING: Removing unreachable block (ram,0x000100f57440) */
/* WARNING: Removing unreachable block (ram,0x000100f57430) */
/* WARNING: Removing unreachable block (ram,0x000100f56f90) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f56f80) */
/* WARNING: Removing unreachable block (ram,0x000100f56f70) */
/* WARNING: Removing unreachable block (ram,0x000100f56f60) */
/* WARNING: Removing unreachable block (ram,0x000100f56f50) */
/* WARNING: Removing unreachable block (ram,0x000100f56f40) */
/* WARNING: Removing unreachable block (ram,0x000100f56f30) */
/* WARNING: Removing unreachable block (ram,0x000100f56f20) */
/* WARNING: Removing unreachable block (ram,0x000100f56f10) */
/* WARNING: Removing unreachable block (ram,0x000100f57010) */

void FUN_100f56c00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5dbac();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5d900();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5af20();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c3fe38();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c3fe34();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c444a8();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4d840();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c3fe54();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c5d980();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar2;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c51a20();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c3ff80();
                          func_0x000107c61180();
                          if (lVar13 != 0) {
                            lVar14 = unaff_x20;
                            func_0x000107c42eb0();
                            func_0x000107c61180();
                            if (lVar14 != 0) {
                              lVar15 = unaff_x20;
                              func_0x000107c5daa0();
                              func_0x000107c61180();
                              if (lVar15 == 0) {
                                func_0x000107c61170(lVar1);
                                lVar1 = lVar2;
                              }
                              else {
                                lVar16 = unaff_x20;
                                func_0x000107c3ff88();
                                func_0x000107c61180();
                                if (lVar16 == 0) {
                                  func_0x000107c61170(lVar1);
                                  lVar1 = lVar2;
                                }
                                else {
                                  lVar17 = unaff_x20;
                                  func_0x000107c4f314();
                                  func_0x000107c61180();
                                  if (lVar17 != 0) {
                                    func_0x000107c42e24();
                                    func_0x000107c61180();
                                    if (unaff_x20 != 0) {
                                      lVar18 = 0;
                                      FUN_100f52cfc();
                                      func_0x000107c613fc();
                                      *(undefined8 *)(lVar18 + 0xa0) = 0;
                                      *(undefined8 *)(lVar18 + 0xa8) = 0;
                                      *(long *)(lVar18 + 0x10) = lVar1;
                                      *(long *)(lVar18 + 0x18) = lVar2;
                                      *(long *)(lVar18 + 0x20) = lVar3;
                                      *(long *)(lVar18 + 0x28) = lVar4;
                                      *(long *)(lVar18 + 0x30) = lVar5;
                                      *(long *)(lVar18 + 0x38) = lVar6;
                                      *(long *)(lVar18 + 0x40) = lVar7;
                                      *(long *)(lVar18 + 0x48) = lVar8;
                                      *(long *)(lVar18 + 0x90) = lVar17;
                                      *(long *)(lVar18 + 0x98) = unaff_x20;
                                      *(long *)(lVar18 + 0x50) = lVar11;
                                      *(long *)(lVar18 + 0x58) = lVar9;
                                      *(long *)(lVar18 + 0x60) = lVar10;
                                      *(long *)(lVar18 + 0x68) = lVar12;
                                      *(long *)(lVar18 + 0x70) = lVar13;
                                      *(long *)(lVar18 + 0x78) = lVar14;
                                      *(long *)(lVar18 + 0x80) = lVar15;
                                      *(long *)(lVar18 + 0x88) = lVar16;
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
                                      func_0x000107c61174(lVar11);
                                      func_0x000107c61174(lVar12);
                                      func_0x000107c61174(lVar13);
                                      func_0x000107c61174(lVar14);
                                      func_0x000107c61174(lVar15);
                                      func_0x000107c61174(lVar16);
                                      func_0x000107c61174(lVar17);
                                      func_0x000107c61174(unaff_x20);
                                      func_0x000100f51990();
                                      lVar1 = unaff_x20;
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
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f574cc; end: 100f574f3; -[SCCommerceComposerScreenshopEntryPoint begin] */

void FUN_100f574cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f56c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f574f4; end: 100f575a7; -[SCCommerceComposerScreenshopEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f574f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d4e248);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_100f52904();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_100f57588;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_100f57588:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100f575a8; end: 100f57e0f;  */

void FUN_100f575a8(long param_1,long param_2,long param_3)

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
    goto LAB_100f57638;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a46c();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a2fc();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e4280)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef1bd80,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e3fe0)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef1c020,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c535c0();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e4260)) ||
                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef1bda0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c535bc();
                }
                else {
                  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10eec60)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0xd00000000000001b;
                          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e3fa0))
                             || (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1c060,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c535dc();
                          }
                          else {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffe2) &&
                                (param_3 == -0x7ffffffef10e3d80)) ||
                               (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1c280,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c5a338();
                            }
                            else {
                              uVar2 = 0xd000000000000011;
                              if (((param_2 == -0x2fffffffffffffef) &&
                                  (param_3 == -0x7ffffffef10e3d60)) ||
                                 (func_0x000107c605b8(0xd000000000000011,0x800000010ef1c2a0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c58cbc();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffe6) &&
                                    (param_3 == -0x7ffffffef10e3d40)) ||
                                   (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1c2c0,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c5367c();
                                }
                                else {
                                  uVar2 = 0xd000000000000017;
                                  if (((param_2 == -0x2fffffffffffffe9) &&
                                      (param_3 == -0x7ffffffef10ef230)) ||
                                     (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c5491c();
                                  }
                                  else {
                                    uVar2 = 0xd000000000000013;
                                    if (((param_2 == -0x2fffffffffffffed) &&
                                        (param_3 == -0x7ffffffef10edce0)) ||
                                       (func_0x000107c605b8(0xd000000000000013,0x800000010ef12320,
                                                            param_2,param_3,0), (uVar2 & 1) != 0)) {
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c5a408();
                                    }
                                    else {
                                      if ((param_2 != -0x2fffffffffffffea) ||
                                         (param_3 != -0x7ffffffef10e63d0)) {
                                        uVar2 = 0;
                                        func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          if ((param_2 != -0x2fffffffffffffe6) ||
                                             (param_3 != -0x7ffffffef10e3f80)) {
                                            uVar2 = 0;
                                            func_0x000107c605b8(0xd00000000000001a,
                                                                0x800000010ef1c080,param_2,param_3,0
                                                               );
                                            if ((uVar2 & 1) == 0) {
                                              if ((param_2 != -0x2fffffffffffffe4) ||
                                                 (param_3 != -0x7ffffffef10e3f60)) {
                                                uVar2 = 0;
                                                func_0x000107c605b8(0xd00000000000001c,
                                                                    0x800000010ef1c0a0,param_2,
                                                                    param_3,0);
                                                if ((uVar2 & 1) == 0) {
                                                  func_0x000107c602fc(0x15);
                                                  func_0x000107c6142c(0xe000000000000000);
                                                  func_0x000107c5fb78(param_2,param_3);
                                                  func_0x000107c60450("Fatal error",0xb,2,
                                                                      0xd000000000000013,
                                                                      0x800000010ef0fc20,
                                                                                                                                            
                                                  "SCCommerceComposerScreenshopImpl/SCCommerceComposerScreenshopEntryPoint.swift"
                                                  ,0x4d,2,0x7a,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f57e10)
                                                  ;
                                                  (*pcVar1)();
                                                }
                                              }
                                              func_0x0001006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c548cc();
                                              goto LAB_100f57638;
                                            }
                                          }
                                          func_0x0001006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c57890();
                                          goto LAB_100f57638;
                                        }
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c53680();
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_100f57638;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c56b34();
                      goto LAB_100f57638;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54f40();
                }
              }
              goto LAB_100f57638;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59278();
        }
      }
      goto LAB_100f57638;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c536e0();
LAB_100f57638:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f57e10; end: 100f57ebb; -[SCCommerceComposerScreenshopEntryPoint setValue:forIvarName:] */

void FUN_100f57e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f575a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f57ebc; end: 100f5805f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f57ebc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e1f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e200,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e208,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e210,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e218,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e220,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e228,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4e230,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4e238) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4e240) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4e248) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f58060; end: 100f5807f; -[SCCommerceComposerScreenshopEntryPoint init] */

void FUN_100f58060(void)

{
  FUN_100f57ebc();
  return;
}



/* Entry: 100f58080; end: 100f580b3;  */

void FUN_100f58080(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f580b4; end: 100f581fb; -[SCCommerceComposerScreenshopEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f580b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4e1b8);
  func_0x000107c61610(param_1 + _DAT_112d4e1c0);
  func_0x000107c61610(param_1 + _DAT_112d4e1c8);
  func_0x000107c61610(param_1 + _DAT_112d4e1d0);
  func_0x000107c61610(param_1 + _DAT_112d4e1d8);
  func_0x000107c61610(param_1 + _DAT_112d4e1e0);
  func_0x000107c61610(param_1 + _DAT_112d4e1e8);
  func_0x000107c61610(param_1 + _DAT_112d4e1f0);
  func_0x000107c61610(param_1 + _DAT_112d4e1f8);
  func_0x000107c61610(param_1 + _DAT_112d4e200);
  func_0x000107c61610(param_1 + _DAT_112d4e208);
  func_0x000107c61610(param_1 + _DAT_112d4e210);
  func_0x000107c61610(param_1 + _DAT_112d4e218);
  func_0x000107c61610(param_1 + _DAT_112d4e220);
  func_0x000107c61610(param_1 + _DAT_112d4e228);
  func_0x000107c61610(param_1 + _DAT_112d4e230);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4e238));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4e240));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4e248));
  return;
}



/* Entry: 100f581fc; end: 100f5821b;  */

void FUN_100f581fc(void)

{
  func_0x000107c61168(&PTR_PTR_1127a4b98);
  return;
}



/* Entry: 100f5821c; end: 100f5838b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5821c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = PTR_PTR_1126a60a8;
  func_0x000107c610f8(PTR_PTR_1126a60a8);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a33c(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5a340(puVar1);
  func_0x000107c61170(param_3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4e288);
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168(PTR_PTR_1126ae748);
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar3 = &UNK_11036d718;
  func_0x000107c613fc(&UNK_11036d718,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  uStack_60 = 0x100f58c08;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100f58c10;
  puStack_68 = &UNK_11036d730;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar3);
  func_0x000107c442bc(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100f5838c; end: 100f5845b; -[_TtC31SCCountdownsNetworkServicesImpl30CountdownsNetworkRequesterImpl getSharedCountdownsWithUserId:friendId:completion:] */

void FUN_100f5838c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_11036d7b8;
  func_0x000107c613fc(&UNK_11036d7b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_100f5821c(param_3,param_2,param_4,uVar2,0x100f58bf8,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f5845c; end: 100f58597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5845c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a60a0;
  func_0x000107c610f8(PTR_PTR_1126a60a0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a344(puVar1);
  func_0x000107c61170(param_1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4e288);
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168(PTR_PTR_1126ae748);
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar3 = &UNK_11036d6c8;
  func_0x000107c613fc(&UNK_11036d6c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  uStack_50 = 0x100f58c04;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x100f58c0c;
  puStack_58 = &UNK_11036d6e0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c43f80(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100f58598; end: 100f585b3; -[_TtC31SCCountdownsNetworkServicesImpl30CountdownsNetworkRequesterImpl getClosestUpcomingCountdownWithUserId:completion:] */

void FUN_100f58598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11036d790;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  func_0x000107c613fc(&UNK_11036d790,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_100f5845c(param_3,param_2,0x100f58bf4,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f585b4; end: 100f586ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f585b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a6098;
  func_0x000107c610f8(PTR_PTR_1126a6098);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a344(puVar1);
  func_0x000107c61170(param_1);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4e288);
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168(PTR_PTR_1126ae748);
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar3 = &UNK_11036d678;
  func_0x000107c613fc(&UNK_11036d678,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  uStack_50 = 0x100f589ac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x100f58c14;
  puStack_58 = &UNK_11036d690;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c43fc0(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100f586f0; end: 100f5874b;  */

void FUN_100f586f0(undefined8 param_1,long param_2,code *param_3)

{
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*param_3)(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  (*param_3)();
  return;
}


