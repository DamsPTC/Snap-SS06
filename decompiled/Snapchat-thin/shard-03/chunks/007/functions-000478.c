/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102be6f08; end: 102be6f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be6f08(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efdee8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100f11150();
  func_0x000100f11134(uVar2,uVar3);
  if (param_1 != (code *)0x0) {
    (*param_1)((double)*(long *)(unaff_x20 + _DAT_112efdee0));
  }
  return;
}



/* Entry: 102be6f78; end: 102be7067; -[_TtC16PlusComposerPage30PlusComposerPageViewController setPageVisibilityObserver:] */

/* WARNING: Possible PIC construction at 0x000102be6ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102be7028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102be7000) */
/* WARNING: Removing unreachable block (ram,0x000102be704c) */
/* WARNING: Removing unreachable block (ram,0x000102be7004) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000102be702c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be6f78(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105af2e8;
    func_0x000107c613fc(&UNK_1105af2e8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102be80b4;
  }
  plVar1 = (long *)(param_1 + _DAT_112efdee8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = (long)pcVar5;
  plVar1[1] = (long)puVar4;
  func_0x000107c61174(param_1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 102be7068; end: 102be706f;  */

undefined8 FUN_102be7068(void)

{
  return 0;
}



/* Entry: 102be7070; end: 102be7077; -[_TtC16PlusComposerPage30PlusComposerPageViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_102be7070(void)

{
  return 0;
}



/* Entry: 102be7078; end: 102be72db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong *unaff_x20;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  FUN_102be6d20();
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar2,PTR_s_viewDidLoad_112684cd8);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x108))();
  if (puVar2 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_112efdef0);
    puVar5 = &UNK_1105af220;
    func_0x000107c613fc(&UNK_1105af220,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uStack_70 = 0x102be7e54;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105af238;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
  }
  else {
    uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_112efded8);
    *(undefined1 **)((long)unaff_x20 + _DAT_112efded8) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    func_0x000107c61174();
    puVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be72d8);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(puVar3);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,puVar2);
    func_0x000107c61170(puVar2);
    puVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be72dc);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    lVar8 = *(long *)((long)unaff_x20 + _DAT_112efdec8);
    if (lVar8 != 0) {
      func_0x0001008479c8();
      func_0x000107c613fc();
      puVar3[3] = 3;
      puVar3[2] = 1;
      puVar3[4] = (ulong)puVar2;
      uVar7 = 0;
      func_0x000102be7eac(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c61174(puVar2);
      func_0x000107c615f0(lVar8);
      puVar4 = puVar3;
      func_0x000107c5fc48(puVar3,uVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c497d0(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102be72dc; end: 102be7303; -[_TtC16PlusComposerPage30PlusComposerPageViewController viewDidLoad] */

void FUN_102be72dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102be7078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102be7304; end: 102be73bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_102be6d20();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillLayoutSubviews_112526958);
  lVar2 = *(long *)(unaff_x20 + _DAT_112efded8);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be73bc);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102be73bc; end: 102be73e3; -[_TtC16PlusComposerPage30PlusComposerPageViewController viewWillLayoutSubviews] */

void FUN_102be73bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102be7304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102be73e4; end: 102be74df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be73e4(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  FUN_102be6d20();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar4 = *(long *)(unaff_x20 + _DAT_112efdec8);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126d1db8;
    func_0x000107c61168(PTR_PTR_1126d1db8);
    lVar2 = lVar4;
    func_0x000107c6148c(lVar4,puVar1);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar4);
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102be74e0);
        (*pcVar5)();
      }
      func_0x000107c497c8(lVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112efdee0) = 1;
  pcVar5 = *(code **)(unaff_x20 + _DAT_112efdee8);
  if (pcVar5 != (code *)0x0) {
    uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112efdee8))[1];
    func_0x000107c6157c(uVar6);
    (*pcVar5)(0x3ff0000000000000);
    func_0x000100f11134(pcVar5,uVar6);
  }
  return;
}



/* Entry: 102be74e0; end: 102be750f; -[_TtC16PlusComposerPage30PlusComposerPageViewController viewDidAppear:] */

void FUN_102be74e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102be73e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102be7510; end: 102be75ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7510(uint param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  FUN_102be6d20();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  *(undefined8 *)((long)unaff_x20 + _DAT_112efdee0) = 0;
  pcVar4 = *(code **)((long)unaff_x20 + _DAT_112efdee8);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)((long)unaff_x20 + _DAT_112efdee8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)(0);
    func_0x000100f11134(pcVar4,uVar3);
  }
  puVar1 = unaff_x20;
  func_0x000107c49aa0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (puVar1 != (ulong *)0x0) {
      puVar2 = puVar1;
      func_0x000107c49aa0();
      func_0x000107c61170(puVar1);
      if (((ulong)puVar2 & 1) != 0) goto LAB_102be75cc;
    }
    puVar1 = unaff_x20;
    func_0x000107c4a094();
    if ((int)puVar1 == 0) {
      return;
    }
  }
LAB_102be75cc:
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x110))();
  return;
}



/* Entry: 102be7600; end: 102be762f; -[_TtC16PlusComposerPage30PlusComposerPageViewController viewDidDisappear:] */

void FUN_102be7600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102be7510(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102be7630; end: 102be765f;  */

void FUN_102be7630(void)

{
  FUN_102be6d20();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102be7660; end: 102be76bb; -[_TtC16PlusComposerPage30PlusComposerPageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102be767c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102be7680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112efdec8));
  return;
}



/* Entry: 102be76bc; end: 102be76ff; -[_TtC16PlusComposerPage30PlusComposerPageViewController defaultProjectNameV2] */

void FUN_102be76bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070250();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102be7700; end: 102be776b;  */

void FUN_102be7700(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102be776c,uVar1,uVar2);
  return;
}



/* Entry: 102be776c; end: 102be77ab;  */

void FUN_102be776c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c420a8(uVar1,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000102be77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102be77ac; end: 102be78d7; -[_TtC16PlusComposerPage30PlusComposerPageViewController exit:] */

void FUN_102be77ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puVar1 = &UNK_1105af270;
  func_0x000107c613fc(&UNK_1105af270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1105af298;
  func_0x000107c613fc(&UNK_1105af298,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db30390;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1105af2c0;
  func_0x000107c613fc(&UNK_1105af2c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db303a0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10db303b0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 102be78d8; end: 102be794b;  */

void FUN_102be78d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102be794c,uVar1,uVar2);
  return;
}



/* Entry: 102be794c; end: 102be79bf;  */

void FUN_102be794c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61174();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102be79c0,uVar2,uVar3);
  return;
}



/* Entry: 102be79c0; end: 102be7a17;  */

void FUN_102be79c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c420a8(uVar2,param_2,1,0);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102be7a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102be7a18; end: 102be7a5b; -[_TtC16PlusComposerPage30PlusComposerPageViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7a18(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_112efded0);
  func_0x00010451429c(0);
  if (cVar1 == '\x01') {
    func_0x000104514100();
  }
  else {
    func_0x000104514080();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102be7a5c; end: 102be7a73; -[_TtC16PlusComposerPage30PlusComposerPageViewController canExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_102be7a5c(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112efded0) ^ 0xff) & 1;
}



/* Entry: 102be7a74; end: 102be7a77; -[_TtC16PlusComposerPage30PlusComposerPageViewController cardToExpandTransition] */

void FUN_102be7a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102be7a78; end: 102be7a83; -[_TtC16PlusComposerPage30PlusComposerPageViewController cardTransitionWillBeginWithView:] */

void FUN_102be7a78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 102be7a84; end: 102be7c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102be7a84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112efded8);
  if (uVar6 == 0) {
    return 1;
  }
  func_0x000102be7eac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174();
  func_0x000107c60118(param_3,uVar6);
  uVar2 = uVar6;
  if ((param_3 & 1) != 0) {
    if (((*(byte *)(unaff_x20 + _DAT_112efded0) & 1) != 0) ||
       (uVar1 = uVar6, func_0x000107c3f42c(param_1,param_2), (uVar1 & 1) != 0)) {
      uVar7 = 0;
      goto LAB_102be7c30;
    }
    func_0x000107c44ec4(param_1,param_2);
    func_0x000107c61180();
    if (uVar2 != 0) {
      func_0x000102be7eac(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      do {
        func_0x000107c61174();
        uVar1 = uVar2;
        func_0x000107c60118();
        if ((uVar1 & 1) != 0) {
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar2);
          uVar7 = 1;
          goto LAB_102be7c30;
        }
        puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
        uVar1 = uVar2;
        func_0x000107c6148c(uVar2,puVar3);
        if (uVar1 != 0) {
          uVar4 = uVar2;
          func_0x000107c61174(uVar2);
          uVar5 = uVar1;
          func_0x000107c4a3a8();
          if ((int)uVar5 != 0) {
            func_0x000107c58cd8(uVar1);
            func_0x000107c58cd8(uVar1);
          }
          func_0x000107c61170(uVar4);
        }
        uVar1 = uVar2;
        func_0x000107c5c42c();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar2);
        uVar2 = uVar1;
      } while (uVar1 != 0);
    }
  }
  uVar7 = 1;
  uVar2 = uVar6;
LAB_102be7c30:
  func_0x000107c61170(uVar2);
  return uVar7;
}



/* Entry: 102be7c74; end: 102be7ce7; -[_TtC16PlusComposerPage30PlusComposerPageViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_102be7c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_102be7a84(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102be7ce8; end: 102be7d63;  */

void FUN_102be7ce8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102be7d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102be7d64; end: 102be7e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7d64(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112efdec8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112efded0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efded8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efdee0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efdee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112efdef0;
  puVar4 = &UNK_10db30350;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusComposerPage/PlusComposerPageViewController.swift",0x35,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102be7e20);
  (*pcVar3)();
}



/* Entry: 102be7e20; end: 102be7e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102be7e20(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112efded0) = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 102be7e54; end: 102be7eeb;  */

void FUN_102be7e54(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c420a8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102be7eec; end: 102be7f4f;  */

void FUN_102be7eec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102be7f50;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[4] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  plVar3[6] = lVar2;
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102be794c,lVar1,lVar2);
  return;
}



/* Entry: 102be7f50; end: 102be7f8b;  */

void FUN_102be7f50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102be7f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102be7f8c; end: 102be8003;  */

void FUN_102be7f8c(void)

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
  plVar5[1] = 0x102be80d8;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102be8004; end: 102be802f;  */

void FUN_102be8004(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102be8030; end: 102be80b3;  */

void FUN_102be8030(undefined8 param_1)

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
  plVar5[1] = 0x102be80dc;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102be80b4; end: 102be80df;  */

void FUN_102be80b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102be80bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102be80e0; end: 102be874f;  */

undefined1  [16] FUN_102be80e0(double param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  func_0x000107c5f994();
  lStack_98 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar3 = 0;
  puStack_a0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f9a4();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar3 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f9a0(lVar3);
  puVar17 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar18 = puVar17;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  uVar4 = 0;
  func_0x000102be9a90(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar9 = uVar4;
  func_0x000100deaee4();
  puVar17 = puVar18;
  func_0x000107c5fe10(puVar18,uVar4,uVar9);
  func_0x000107c61170(puVar18);
  puVar18 = puVar17;
  FUN_102be8750();
  uStack_b8 = 0;
  func_0x000107c6142c(puVar17);
  puVar17 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
  if ((ulong)puVar18 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar17 + 0x10);
  }
  else {
    puVar19 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar18) {
      puVar19 = puVar18;
    }
    func_0x000107c60480();
  }
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_88 = lVar3;
  if (puVar19 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar18 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102be8424);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar18 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar6;
          FUN_102be92d0(puVar6,puVar18,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
        }
        puVar11 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be8420);
          (*pcVar2)();
        }
        puVar16 = puVar5;
        func_0x000107c3d0e4();
        if ((puVar16 == (undefined *)0x0) ||
           (puVar16 = puVar5, func_0x000107c3d0e4(), puVar16 == (undefined *)0x1)) break;
        func_0x000107c61170(puVar5);
        puVar6 = puVar6 + 1;
        if (puVar11 == puVar19) goto LAB_102be8328;
      }
      puVar6 = puVar15;
      func_0x000107c61558();
      puStack_80 = puVar15;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x0001014aa0c0(0,*(long *)(puVar15 + 0x10) + 1,1);
      }
      uVar20 = *(ulong *)(puStack_80 + 0x10);
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar20) {
        func_0x0001014aa0c0(1 < *(ulong *)(puStack_80 + 0x18),uVar20 + 1,1);
      }
      *(ulong *)(puStack_80 + 0x10) = uVar20 + 1;
      *(undefined **)(puStack_80 + uVar20 * 8 + 0x20) = puVar5;
      puVar6 = puVar11;
      puVar15 = puStack_80;
    } while (puVar11 != puVar19);
  }
LAB_102be8328:
  func_0x000107c6142c(puVar18);
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
    puVar17 = puVar15;
    func_0x000107c60480();
  }
  else {
    puVar17 = *(undefined **)(puVar15 + 0x10);
  }
  if (puVar17 != (undefined *)0x0) {
    uVar20 = 0;
    do {
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be8428);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(puVar15 + uVar20 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        uVar7 = uVar20;
        FUN_102be92d0(uVar20,puVar15,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
      }
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102be841c);
        (*pcVar2)();
      }
      puVar18 = (undefined *)(uVar20 + 1);
      func_0x000107c61174();
      uVar8 = uVar7;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar9 = 0;
      func_0x000102be9a90(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar10 = uVar8;
      func_0x000107c5fc54(uVar8,uVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x00010148e5e0(uVar10);
      uVar20 = uVar20 + 1;
    } while (puVar18 != puVar17);
  }
  func_0x000107c61574(puVar15);
  puVar17 = puStack_80;
  puVar18 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff8);
  if ((ulong)puStack_80 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar18 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = puVar18;
    if ((undefined *)0x7fffffffffffffff < puStack_80) {
      puVar19 = puStack_80;
    }
    func_0x000107c60480();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
  if (puVar19 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
LAB_102be84b8:
    do {
      if (((ulong)puVar17 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar18 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be85b8);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar17 + (long)puVar6 * 8 + 0x20);
        func_0x000107c61174();
        dVar21 = param_1;
      }
      else {
        puVar5 = puVar6;
        FUN_102be92d0(puVar6,puVar17,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
        dVar21 = param_1;
      }
      if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102be85b4);
        (*pcVar2)();
      }
      puVar16 = puVar6 + 1;
      func_0x000107c61174();
      puVar11 = puVar5;
      func_0x000107c49eac();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000107c3dc40(puVar5);
        param_1 = dVar21;
        func_0x000107c61170(puVar5);
        if (0.01 < dVar21) {
          puVar6 = puVar15;
          func_0x000107c61558();
          puStack_80 = puVar15;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_102be92b4(0,*(long *)(puVar15 + 0x10) + 1,1);
          }
          uVar20 = *(ulong *)(puStack_80 + 0x10);
          if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar20) {
            FUN_102be92b4(1 < *(ulong *)(puStack_80 + 0x18),uVar20 + 1,1);
          }
          *(ulong *)(puStack_80 + 0x10) = uVar20 + 1;
          *(undefined **)(puStack_80 + uVar20 * 8 + 0x20) = puVar5;
          puVar15 = puStack_80;
          puVar6 = puVar16;
          if (puVar16 == puVar19) break;
          goto LAB_102be84b8;
        }
      }
      else {
        func_0x000107c61170(puVar5);
        param_1 = dVar21;
      }
      func_0x000107c61170(puVar5);
      puVar6 = puVar6 + 1;
    } while (puVar16 != puVar19);
  }
  func_0x000107c6142c(puVar17);
  if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
    puVar17 = puVar15;
    func_0x000107c60480();
    lVar3 = lStack_88;
  }
  else {
    puVar17 = *(undefined **)(puVar15 + 0x10);
    lVar3 = lStack_88;
  }
  lStack_88 = lVar3;
  if (puVar17 != (undefined *)0x0) {
    if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102be8750);
      (*pcVar2)();
    }
    puVar18 = (undefined *)0x0;
    do {
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        puVar19 = *(undefined **)(puVar15 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174(puVar19);
      }
      else {
        puVar19 = puVar18;
        FUN_102be92d0(puVar18,puVar15,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
      }
      puVar18 = puVar18 + 1;
      FUN_102be8a44();
      func_0x000107c61170(puVar19);
    } while (puVar17 != puVar18);
  }
  func_0x000107c61574(puVar15);
  puVar1 = puStack_a0;
  func_0x000107c5f99c(puStack_a0);
  puVar12 = puVar1;
  FUN_102be8d14();
  uVar9 = 0x112d38270;
  puStack_80 = puVar12;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = 0x112d38278;
  func_0x000102be9ad0(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar13 = 0;
  uVar14 = 0xe000000000000000;
  func_0x000107c5fa80(0,0xe000000000000000,uVar9,uVar4);
  func_0x000107c6142c(puVar12);
  (**(code **)(lStack_98 + 8))(puVar1,lStack_90);
  (**(code **)(lStack_b0 + 8))(lVar3,lStack_a8);
  auVar22._8_8_ = uVar14;
  auVar22._0_8_ = uVar13;
  return auVar22;
}



/* Entry: 102be8750; end: 102be8a43;  */

undefined * FUN_102be8750(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x000102be9a90(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_102be8a00:
        puStack_58 = (undefined *)0x0;
LAB_102be8a04:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      func_0x000102be9a90(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102be8a44);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_102be8a00;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_102be8a04;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_102be9054(0,puVar7 + 1,1,puStack_98,&UNK_10109b4c8,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_102be9054(puVar10,uVar13 + 1,1,puStack_98,&UNK_10109b4c8,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 102be8a44; end: 102be8d13;  */

undefined *
FUN_102be8a44(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  ppuVar6 = &puStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  func_0x000107c614f0();
  uVar11 = 0x112dab9f8;
  puStack_90 = puVar5;
  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
  func_0x000107c5fb18(&puStack_90);
  func_0x000107c61434(uVar11);
  uVar12 = uVar11;
  func_0x000100e35e30(ppuVar6,uVar11);
  func_0x000101aae4e4();
  func_0x00010006c090(ppuVar6,uVar12);
  func_0x000107c438d4(param_5);
  puVar15 = auStack_70;
  puStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c5f998(&puStack_90);
  puVar5 = param_5;
  func_0x000107c49eac();
  func_0x000107c3dc40(param_5);
  bVar1 = (byte)puVar5 | 2;
  if (0.01 <= (double)param_1) {
    bVar1 = (byte)puVar5;
  }
  puVar5 = param_5;
  func_0x000107c3cf00();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    uVar17 = 0;
    puVar15 = (undefined1 *)0xe000000000000000;
  }
  else {
    puVar14 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    uVar17 = (ulong)puVar14 & 0xffffffffffff;
  }
  func_0x000107c6142c(puVar15);
  if (((ulong)puVar15 & 0x2000000000000000) != 0) {
    uVar17 = (ulong)puVar15 >> 0x38 & 0xf;
  }
  if (uVar17 != 0) {
    bVar1 = bVar1 | 4;
  }
  lVar13 = 0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  uVar12 = 0x21;
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 2;
  *(undefined8 *)(lVar13 + 0x10) = 1;
  *(byte *)(lVar13 + 0x20) = bVar1;
  lVar7 = lVar13;
  func_0x0001004496cc();
  func_0x000107c61574(lVar13);
  func_0x000101aae4e4(lVar7,uVar12,param_6);
  func_0x00010006c090(lVar7,uVar12);
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar12 = 0;
  func_0x000102be9a90(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = param_5;
  func_0x000107c5fc54(param_5,uVar12);
  func_0x000107c61170(param_5);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar14 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar14 != (undefined *)0x0) {
    if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102be8d10);
      (*pcVar4)();
    }
    puVar16 = (undefined *)0x0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar8 = *(undefined **)(puVar5 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar16;
        FUN_102be92d0(puVar16,puVar5,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      puVar16 = puVar16 + 1;
      FUN_102be8a44();
      func_0x000107c61170(puVar8);
    } while (puVar14 != puVar16);
  }
  func_0x000107c6142c(uVar11);
  puVar14 = puVar5;
  func_0x000107c6142c(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  func_0x000107c60e78();
  uVar9 = 0;
  func_0x000107c5f994();
  lVar13 = *(long *)(uVar9 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar11 = 0x112df70f0;
  func_0x000102be9a50(0x112df70f0);
  uVar17 = uVar9;
  func_0x000107c5fbe0(uVar9,uVar11);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar13 + 0x10))
            ((long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar14,uVar9);
  func_0x000107c5fbdc(&lStack_100,uVar9,uVar11);
  lVar13 = lStack_100;
  if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102be9054);
    (*pcVar4)();
  }
  uVar9 = uStack_f8;
  if (uVar17 != 0) {
    uStack_110 = *(ulong *)(lStack_100 + 0x10);
    lVar7 = lStack_100 + 0x20;
    uStack_118 = 2;
    uStack_120 = 1;
    puStack_128 = puVar5;
    do {
      if (uStack_110 == uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102be9044);
        (*pcVar4)();
      }
      if ((long)uStack_f8 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102be9048);
        (*pcVar4)();
      }
      if (*(ulong *)(lVar13 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102be904c);
        (*pcVar4)();
      }
      uVar3 = *(undefined1 *)(lVar7 + uVar9);
      lVar10 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = uStack_118;
      *(undefined8 *)(lVar10 + 0x10) = uStack_120;
      *(undefined **)(lVar10 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar10 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar10 + 0x20) = uVar3;
      uVar11 = 0x78323025;
      uVar12 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar10);
      uVar2 = *(ulong *)(puVar16 + 0x10);
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar2) {
        uStack_130 = uVar11;
        func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar2 + 1,1);
        uVar11 = uStack_130;
      }
      *(ulong *)(puVar16 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar16 + uVar2 * 0x10 + 0x20) = uVar11;
      *(undefined8 *)(puVar16 + uVar2 * 0x10 + 0x28) = uVar12;
      uVar9 = uVar9 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  uStack_f8 = uVar9;
  uVar17 = *(ulong *)(lStack_100 + 0x10);
  if (uStack_f8 != uVar17) {
    uStack_108 = 2;
    uStack_110 = 1;
    do {
      if (uVar17 <= uStack_f8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102be9050);
        (*pcVar4)();
      }
      uVar3 = *(undefined1 *)(lStack_100 + 0x20 + uStack_f8);
      lVar13 = 0x112d36008;
      uStack_f8 = uStack_f8 + 1;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar13 + 0x18) = uStack_108;
      *(ulong *)(lVar13 + 0x10) = uStack_110;
      *(undefined **)(lVar13 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar13 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar13 + 0x20) = uVar3;
      uVar11 = 0x78323025;
      uVar12 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar13);
      uVar17 = *(ulong *)(puVar16 + 0x10);
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
        uStack_120 = uVar11;
        func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar17 + 1,1);
        uVar11 = uStack_120;
      }
      *(ulong *)(puVar16 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar16 + uVar17 * 0x10 + 0x20) = uVar11;
      *(undefined8 *)(puVar16 + uVar17 * 0x10 + 0x28) = uVar12;
      uVar17 = *(ulong *)(lStack_100 + 0x10);
    } while (uStack_f8 != uVar17);
  }
  func_0x000107c6142c(lStack_100);
  return puVar16;
}



/* Entry: 102be8d14; end: 102be9053;  */

undefined * FUN_102be8d14(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_a0;
  long lStack_70;
  ulong uStack_68;
  
  uVar6 = 0;
  func_0x000107c5f994();
  lVar12 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar8 = 0x112df70f0;
  FUN_102be9a50(0x112df70f0);
  uVar10 = uVar6;
  func_0x000107c5fbe0(uVar6,uVar8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar12 + 0x10))
            ((long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,uVar6);
  func_0x000107c5fbdc(&lStack_70,uVar6,uVar8);
  lVar12 = lStack_70;
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102be9054);
    (*pcVar5)();
  }
  uVar6 = uStack_68;
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lStack_70 + 0x10);
    lVar1 = lStack_70 + 0x20;
    do {
      if (uVar11 == uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102be9044);
        (*pcVar5)();
      }
      if ((long)uStack_68 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102be9048);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102be904c);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lVar1 + uVar6);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar7 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        uStack_a0 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        uVar8 = uStack_a0;
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar9;
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_68 = uVar6;
  uVar10 = *(ulong *)(lStack_70 + 0x10);
  if (uStack_68 != uVar10) {
    do {
      if (uVar10 <= uStack_68) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102be9050);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lStack_70 + 0x20 + uStack_68);
      lVar12 = 0x112d36008;
      uStack_68 = uStack_68 + 1;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined **)(lVar12 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar12 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar12 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar12);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = *(ulong *)(lStack_70 + 0x10);
    } while (uStack_68 != uVar10);
  }
  func_0x000107c6142c(lStack_70);
  return puVar4;
}



/* Entry: 102be9054; end: 102be92b3;  */

ulong FUN_102be9054(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be9198);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102be9194);
      (*pcVar1)();
    }
    func_0x000102be9198(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102be92b4; end: 102be92cf;  */

void FUN_102be92b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102beeef4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102be92d0; end: 102be948b;  */

ulong FUN_102be92d0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102be93b4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102be93b8);
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
  func_0x000102be9a90(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102be948c);
  (*pcVar2)();
}



/* Entry: 102be948c; end: 102be9a4f;  */

undefined8 FUN_102be948c(double param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  double dVar17;
  
  puVar16 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar10 = puVar16;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar3 = 0;
  func_0x000102be9a90(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar3;
  func_0x000100deaee4();
  puVar16 = puVar10;
  func_0x000107c5fe10(puVar10,uVar3,uVar7);
  func_0x000107c61170(puVar10);
  puVar10 = puVar16;
  FUN_102be8750();
  func_0x000107c6142c(puVar16);
  puVar16 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar16 + 0x10);
  }
  else {
    puVar11 = puVar16;
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar11 = puVar10;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar11 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar16 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9754);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(puVar10 + (long)puVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar14;
          FUN_102be92d0(puVar14,puVar10,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
        }
        puVar9 = puVar14 + 1;
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9750);
          (*pcVar2)();
        }
        puVar13 = puVar4;
        func_0x000107c3d0e4();
        if ((puVar13 == (undefined *)0x0) ||
           (puVar13 = puVar4, func_0x000107c3d0e4(), puVar13 == (undefined *)0x1)) break;
        func_0x000107c61170(puVar4);
        puVar14 = puVar14 + 1;
        if (puVar9 == puVar11) goto LAB_102be9650;
      }
      puVar14 = puVar1;
      func_0x000107c61558();
      if (((ulong)puVar14 & 1) == 0) {
        func_0x0001014aa0c0(0,*(long *)(puVar1 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar12) {
        func_0x0001014aa0c0(1 < *(ulong *)(puVar1 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar1 + uVar12 * 8 + 0x20) = puVar4;
      puVar14 = puVar9;
    } while (puVar9 != puVar11);
  }
LAB_102be9650:
  func_0x000107c6142c(puVar10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((long)puVar1 < 0) || (((ulong)puVar1 >> 0x3e & 1) != 0)) {
    puVar10 = puVar1;
    func_0x000107c60480();
  }
  else {
    puVar10 = *(undefined **)(puVar1 + 0x10);
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    uVar12 = 0;
    do {
      if (((ulong)puVar1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9758);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(puVar1 + uVar12 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar12;
        FUN_102be92d0(uVar12,puVar1,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9744);
        (*pcVar2)();
      }
      puVar14 = (undefined *)(uVar12 + 1);
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar7 = 0;
      func_0x000102be9a90(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar8 = uVar6;
      func_0x000107c5fc54(uVar6,uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x00010148e5e0(uVar8);
      uVar12 = uVar12 + 1;
      puVar11 = puVar16;
    } while (puVar14 != puVar10);
  }
  func_0x000107c61574(puVar1);
  puVar16 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar10 = *(undefined **)(puVar16 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = puVar16;
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar10 = puVar11;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (puVar10 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar16 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102be98ec);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(puVar11 + (long)puVar14 * 8 + 0x20);
          func_0x000107c61174();
          dVar17 = param_1;
        }
        else {
          puVar4 = puVar14;
          FUN_102be92d0(puVar14,puVar11,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
          dVar17 = param_1;
        }
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102be98e8);
          (*pcVar2)();
        }
        puVar13 = puVar14 + 1;
        func_0x000107c61174();
        puVar9 = puVar4;
        func_0x000107c49eac();
        if (((ulong)puVar9 & 1) == 0) break;
        func_0x000107c61170(puVar4);
        param_1 = dVar17;
LAB_102be97d8:
        func_0x000107c61170(puVar4);
        puVar14 = puVar14 + 1;
        if (puVar13 == puVar10) goto LAB_102be9908;
      }
      func_0x000107c3dc40(puVar4);
      param_1 = dVar17;
      func_0x000107c61170(puVar4);
      if (dVar17 <= 0.01) goto LAB_102be97d8;
      puVar14 = puVar1;
      func_0x000107c61558();
      if (((ulong)puVar14 & 1) == 0) {
        FUN_102be92b4(0,*(long *)(puVar1 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar12) {
        FUN_102be92b4(1 < *(ulong *)(puVar1 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar1 + uVar12 * 8 + 0x20) = puVar4;
      puVar14 = puVar13;
    } while (puVar13 != puVar10);
  }
LAB_102be9908:
  func_0x000107c6142c(puVar11);
  if (((long)puVar1 < 0) || (((ulong)puVar1 >> 0x3e & 1) != 0)) {
    puVar16 = puVar1;
    func_0x000107c60480();
    if (puVar16 == (undefined *)0x0) {
      uVar7 = 0;
      goto LAB_102be9a04;
    }
  }
  else {
    puVar16 = *(undefined **)(puVar1 + 0x10);
    uVar7 = 0;
    if (puVar16 == (undefined *)0x0) goto LAB_102be9a04;
  }
  puVar10 = PTR___sSSN_11034da80;
  uVar12 = 0;
  do {
    if (((ulong)puVar1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9a3c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(puVar1 + uVar12 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar12;
      FUN_102be92d0(uVar12,puVar1,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
    }
    puVar11 = (undefined *)(uVar12 + 1);
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102be9a38);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c4aba4();
    func_0x000107c61180();
    uVar8 = uVar6;
    func_0x000107c3dcfc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar8 == 0) {
      func_0x000107c61170(uVar5);
    }
    else {
      uVar6 = uVar8;
      func_0x000107c5fc54(uVar8,puVar10);
      func_0x000107c61170(uVar8);
      lVar15 = *(long *)(uVar6 + 0x10);
      func_0x000107c6142c(uVar6);
      func_0x000107c61170(uVar5);
      if (lVar15 != 0) {
        uVar7 = 1;
        goto LAB_102be9a04;
      }
    }
    uVar12 = uVar12 + 1;
  } while (puVar11 != puVar16);
  uVar7 = 0;
LAB_102be9a04:
  func_0x000107c61574(puVar1);
  return uVar7;
}



/* Entry: 102be9a50; end: 102be9b13;  */

void FUN_102be9a50(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102be9b14; end: 102be9c0f;  */

undefined1  [16] FUN_102be9b14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x800000010f0fd940;
  uVar6 = 0xd000000000000014;
  if (bVar5 != 5) {
    uVar4 = 0xef6567617373654d;
    uVar6 = 0x746f687370616e73;
  }
  uVar1 = 0xe900000000000070;
  uVar3 = 0x6d617473656d6974;
  if (bVar5 != 3) {
    uVar1 = 0xe700000000000000;
    uVar3 = 0x7972616d6d7573;
  }
  if (bVar5 < 5) {
    uVar4 = uVar1;
    uVar6 = uVar3;
  }
  uVar1 = 0xe900000000000064;
  uVar3 = 0x4974736575716572;
  if (bVar5 != 1) {
    uVar1 = 0xee0064496e6f6974;
    uVar3 = 0x7069726373627573;
  }
  uVar2 = 0x65707974;
  if (bVar5 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 102be9c10; end: 102be9c33;  */

void FUN_102be9c10(undefined1 *param_1,undefined1 param_2)

{
  FUN_102beb230();
  *param_1 = param_2;
  return;
}



/* Entry: 102be9c34; end: 102be9c4b;  */

undefined1  [16] FUN_102be9c34(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102be9c4c; end: 102be9c9b;  */

void FUN_102be9c4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102beb918();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102be9c9c; end: 102be9eef;  */

/* WARNING: Removing unreachable block (ram,0x000102be9e80) */

void FUN_102be9c9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_51;
  
  lVar2 = 0x112efdfa8;
  func_0x0001000285a8(0x112efdfa8,&UNK_10db30580);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_80 - extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_102beb918();
  func_0x000107c606ec(lVar6,&UNK_1105af728,&UNK_1105af728,param_1,uVar3,uVar1);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_80,lVar2);
  if (unaff_x21 == 0) {
    uStack_80._0_1_ = 1;
    func_0x000107c60520(unaff_x20[2],unaff_x20[3],&uStack_80,lVar2);
    uStack_80._0_1_ = 2;
    func_0x000107c60520(unaff_x20[4],unaff_x20[5],&uStack_80,lVar2);
    uVar3 = unaff_x20[6];
    uStack_80 = CONCAT71(uStack_80._1_7_,3);
    func_0x000107c60538(uVar3,*(undefined1 *)(unaff_x20 + 7),&uStack_80,lVar2);
    uStack_78 = unaff_x20[9];
    uStack_80 = unaff_x20[8];
    uStack_68 = unaff_x20[0xb];
    uStack_70 = unaff_x20[10];
    uStack_51 = 4;
    FUN_102bebae0();
    puVar4 = &uStack_80;
    func_0x000107c60530(puVar4,&uStack_51,lVar2,&UNK_1105aff40,uVar3);
    uStack_78 = unaff_x20[0xd];
    uStack_80 = unaff_x20[0xc];
    uStack_68 = unaff_x20[0xf];
    uStack_70 = unaff_x20[0xe];
    uStack_60 = *(undefined1 *)(unaff_x20 + 0x10);
    uStack_51 = 5;
    func_0x000102bebb20();
    puVar5 = &uStack_80;
    func_0x000107c60530(puVar5,&uStack_51,lVar2,&UNK_1105af550,puVar4);
    uStack_78 = unaff_x20[0x12];
    uStack_80 = unaff_x20[0x11];
    uStack_68 = unaff_x20[0x14];
    uStack_70 = unaff_x20[0x13];
    uStack_51 = 6;
    func_0x000102bebb60();
    func_0x000107c60530(&uStack_80,&uStack_51,lVar2,&UNK_1105af4d0,puVar5);
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 102be9ef0; end: 102be9f1b;  */

undefined1  [16] FUN_102be9ef0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102be9f1c; end: 102be9f8f;  */

void FUN_102be9f1c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102beb498(&uStack_c8);
  if (unaff_x21 == 0) {
    param_1[0x11] = uStack_40;
    param_1[0x10] = uStack_48;
    param_1[0x13] = uStack_30;
    param_1[0x12] = uStack_38;
    param_1[0x14] = uStack_28;
    param_1[9] = uStack_80;
    param_1[8] = uStack_88;
    param_1[0xb] = uStack_70;
    param_1[10] = uStack_78;
    param_1[0xd] = uStack_60;
    param_1[0xc] = uStack_68;
    param_1[0xf] = uStack_50;
    param_1[0xe] = uStack_58;
    param_1[1] = uStack_c0;
    *param_1 = uStack_c8;
    param_1[3] = uStack_b0;
    param_1[2] = uStack_b8;
    param_1[5] = uStack_a0;
    param_1[4] = uStack_a8;
    param_1[7] = uStack_90;
    param_1[6] = uStack_98;
  }
  return;
}



/* Entry: 102be9f90; end: 102be9fa3;  */

void FUN_102be9f90(void)

{
  FUN_102be9c9c();
  return;
}



/* Entry: 102be9fa4; end: 102bea173;  */

/* WARNING: Removing unreachable block (ram,0x000102bea0e8) */

void FUN_102be9fa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_51;
  
  lVar1 = 0x112efe008;
  func_0x0001000285a8(0x112efe008,&UNK_10db305a8);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_60 - extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000102bec058();
  func_0x000107c606ec(lVar4,&UNK_1105af608,&UNK_1105af608,param_1,uVar2,uVar3);
  uStack_60 = *unaff_x20;
  uStack_51 = 0;
  uVar2 = 0x112efdff0;
  func_0x0001000285a8(0x112efdff0,&UNK_10db305a0);
  uVar3 = 0x112efe010;
  FUN_102bec0d8(0x112efe010,FUN_102bec148,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60554(&uStack_60,&uStack_51,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uStack_60 = CONCAT71(uStack_60._1_7_,1);
    func_0x000107c6053c(uVar2,unaff_x20[2],&uStack_60,lVar1);
    uStack_60 = unaff_x20[3];
    uStack_58 = *(undefined1 *)(unaff_x20 + 4);
    uStack_51 = 2;
    func_0x000102aa9638();
    func_0x000107c60530(&uStack_60,&uStack_51,lVar1,PTR___s12CoreGraphics7CGFloatVN_1103513a8,uVar2)
    ;
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 102bea174; end: 102bea1cb;  */

undefined1  [16] FUN_102bea174(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  uVar3 = 0x65707974;
  if (cVar4 != '\x01') {
    uVar3 = 0x63536e6565726373;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000656c61;
  }
  uVar2 = 0x7377656976;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 102bea1cc; end: 102bea1ef;  */

void FUN_102bea1cc(undefined1 *param_1,undefined1 param_2)

{
  FUN_102bebba0();
  *param_1 = param_2;
  return;
}



/* Entry: 102bea1f0; end: 102bea207;  */

undefined1  [16] FUN_102bea1f0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102bea208; end: 102bea257;  */

void FUN_102bea208(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102bec058();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102bea258; end: 102bea29b;  */

void FUN_102bea258(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_102bebcb4(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 102bea29c; end: 102bea2af;  */

void FUN_102bea29c(void)

{
  FUN_102be9fa4();
  return;
}



/* Entry: 102bea2b0; end: 102bea3ef;  */

void FUN_102bea2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112efdfd8;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112efdfd8,&UNK_10db30590);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102bec018();
  func_0x000107c606ec(lVar5,&UNK_1105af698,&UNK_1105af698,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60520(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 102bea3f0; end: 102bea473;  */

void FUN_102bea3f0(void)

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



/* Entry: 102bea474; end: 102bea4a7;  */

undefined1  [16] FUN_102bea474(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x65707974;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x61746144343662;
  }
  uVar2 = 0xe400000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102bea4a8; end: 102bea57f;  */

void FUN_102bea4a8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x61746144343662 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x61746144343662,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == 0x65707974) && (param_3 == -0x1c00000000000000)) {
    func_0x000107c6142c(0xe400000000000000);
    uVar2 = 1;
  }
  else {
    uVar1 = 0;
    func_0x000107c605b8(0x65707974,0xe400000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102bea580; end: 102bea597;  */

undefined1  [16] FUN_102bea580(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102bea598; end: 102bea5e7;  */

void FUN_102bea598(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102bec018();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102bea5e8; end: 102bea613;  */

void FUN_102bea5e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102bebed8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102bea614; end: 102bea62f;  */

void FUN_102bea614(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102bea2b0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102bea630; end: 102bea68b; -[_TtC31InspectorNativeUIImplementation17NativeUIInspector init] */

void FUN_102bea630(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InspectorNativeUIImplementation.NativeUIInspector",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bea65c);
  (*pcVar1)();
}



/* Entry: 102bea68c; end: 102bea6f3; -[_TtC31InspectorNativeUIImplementation17NativeUIInspector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bea68c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112efdf28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112efdf30));
  func_0x0001000834e4(param_1 + _DAT_112efdf38);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112efdf40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efdf48));
  return;
}



/* Entry: 102bea6f4; end: 102bea713;  */

void FUN_102bea6f4(void)

{
  func_0x000107c61168(&PTR_PTR_112896008);
  return;
}



/* Entry: 102bea714; end: 102bea797;  */

/* WARNING: Possible PIC construction at 0x000102bea728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bea738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bea74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bea760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bea778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bea764) */
/* WARNING: Removing unreachable block (ram,0x000102bea750) */
/* WARNING: Removing unreachable block (ram,0x000102bea73c) */
/* WARNING: Removing unreachable block (ram,0x000102bea758) */
/* WARNING: Removing unreachable block (ram,0x000102bea76c) */
/* WARNING: Removing unreachable block (ram,0x000102bea78c) */
/* WARNING: Removing unreachable block (ram,0x000102bea774) */
/* WARNING: Removing unreachable block (ram,0x000102bea760) */
/* WARNING: Removing unreachable block (ram,0x000102bea744) */
/* WARNING: Removing unreachable block (ram,0x000102bea72c) */
/* WARNING: Removing unreachable block (ram,0x000102bea77c) */

void FUN_102bea714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102bea798; end: 102beab93;  */

undefined8 * FUN_102bea798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  lVar2 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  if (lVar2 == 0) {
    uVar1 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar2;
    uVar1 = param_2[10];
    uVar3 = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xb] = uVar3;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar3);
  }
  lVar2 = param_2[0xc];
  if (lVar2 == 0) {
    lVar2 = param_2[0xc];
    uVar3 = param_2[0xf];
    uVar1 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar2;
    param_1[0xf] = uVar3;
    param_1[0xe] = uVar1;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    lVar2 = param_2[0x14];
  }
  else {
    uVar1 = param_2[0xd];
    uVar3 = param_2[0xe];
    param_1[0xc] = lVar2;
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar1;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    lVar2 = param_2[0x14];
  }
  if (lVar2 == 0) {
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
  }
  else {
    uVar1 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar1;
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = lVar2;
    func_0x000107c61434();
    func_0x000107c61434(lVar2);
  }
  return param_1;
}



/* Entry: 102beab94; end: 102beac27;  */

undefined8 FUN_102beab94(undefined8 param_1)

{
  FUN_102bff944();
  return param_1;
}



/* Entry: 102beac28; end: 102bead8f;  */

undefined8 * FUN_102beac28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  if (param_1[9] == 0) {
LAB_102beacc8:
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
  }
  else {
    lVar3 = param_2[9];
    if (lVar3 == 0) {
      func_0x000102beab94(param_1 + 8);
      goto LAB_102beacc8;
    }
    param_1[8] = param_2[8];
    param_1[9] = lVar3;
    func_0x000107c6142c();
    uVar2 = param_1[10];
    param_1[10] = param_2[10];
    func_0x000107c6142c(uVar2);
    uVar2 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    func_0x000107c6142c(uVar2);
  }
  plVar4 = param_1 + 0xc;
  if (*plVar4 != 0) {
    if (param_2[0xc] != 0) {
      param_1[0xc] = param_2[0xc];
      func_0x000107c6142c();
      uVar2 = param_2[0xe];
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar2;
      func_0x000107c6142c(uVar1);
      param_1[0xf] = param_2[0xf];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      lVar3 = param_1[0x14];
      goto joined_r0x000102bead34;
    }
    func_0x000102beabc8(plVar4);
  }
  lVar3 = param_2[0xc];
  uVar1 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  *plVar4 = lVar3;
  param_1[0xf] = uVar1;
  param_1[0xe] = uVar2;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  lVar3 = param_1[0x14];
joined_r0x000102bead34:
  if (lVar3 != 0) {
    lVar3 = param_2[0x14];
    if (lVar3 != 0) {
      uVar2 = param_2[0x12];
      uVar1 = param_1[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar2;
      func_0x000107c6142c(uVar1);
      uVar2 = param_1[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = lVar3;
      func_0x000107c6142c(uVar2);
      return param_1;
    }
    func_0x000102beabf8(param_1 + 0x11);
  }
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  return param_1;
}



/* Entry: 102bead90; end: 102beae4f;  */

int FUN_102bead90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102beae50; end: 102beaeb3;  */

/* WARNING: Possible PIC construction at 0x000102beae64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102beae68) */

void FUN_102beae50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102beaeb4; end: 102beaf1f;  */

undefined8 * FUN_102beaeb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102beaf20; end: 102beaf63;  */

undefined8 * FUN_102beaf20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102beaf64; end: 102beaffb;  */

int FUN_102beaf64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102beaffc; end: 102beb067;  */

/* WARNING: Possible PIC construction at 0x000102beb010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102beb014) */

void FUN_102beaffc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102beb068; end: 102beb0db;  */

undefined8 * FUN_102beb068(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 102beb0dc; end: 102beb12f;  */

undefined8 * FUN_102beb0dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 102beb130; end: 102beb1cb;  */

int FUN_102beb130(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102beb1cc; end: 102beb1ef;  */

void FUN_102beb1cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102beb1f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102beb1f0; end: 102beb22f;  */

void FUN_102beb1f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30508;
  func_0x000107c61520(&UNK_10db30508,&UNK_1105af438);
  puRam0000000112efdf78 = puVar1;
  return;
}



/* Entry: 102beb230; end: 102beb497;  */

undefined4 FUN_102beb230(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x65707974 || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x65707974,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == 0x4974736575716572) && (param_2 == -0x16ffffffffffff9c)) ||
         (func_0x000107c605b8(0x4974736575716572,0xe900000000000064,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        return 1;
      }
      uVar1 = 0x7069726373627573;
      if (((param_1 != 0x7069726373627573) || (param_2 != -0x11ff9bb69190968c)) &&
         (func_0x000107c605b8(0x7069726373627573,0xee0064496e6f6974,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if (((param_1 != 0x6d617473656d6974) || (param_2 != -0x16ffffffffffff90)) &&
           (func_0x000107c605b8(0x6d617473656d6974,0xe900000000000070,param_1,param_2,0),
           (uVar1 & 1) == 0)) {
          uVar1 = 0x7972616d6d7573;
          if (((param_1 != 0x7972616d6d7573) || (param_2 != -0x1900000000000000)) &&
             (func_0x000107c605b8(0x7972616d6d7573,0xe700000000000000,param_1,param_2,0),
             (uVar1 & 1) == 0)) {
            if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0f026c0)) {
              uVar1 = 0;
              func_0x000107c605b8(0xd000000000000014,0x800000010f0fd940,param_1,param_2,0);
              if ((uVar1 & 1) == 0) {
                uVar1 = 0x746f687370616e73;
                if ((param_1 == 0x746f687370616e73) && (param_2 == -0x109a989e8c8c9ab3)) {
                  func_0x000107c6142c(0xef6567617373654d);
                  return 6;
                }
                func_0x000107c605b8(0x746f687370616e73,0xef6567617373654d,param_1,param_2,0);
                func_0x000107c6142c(param_2);
                if ((uVar1 & 1) != 0) {
                  return 6;
                }
                return 7;
              }
            }
            func_0x000107c6142c(param_2);
            return 5;
          }
          func_0x000107c6142c(param_2);
          return 4;
        }
        func_0x000107c6142c(param_2);
        return 3;
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 102beb498; end: 102beb917;  */

/* WARNING: Removing unreachable block (ram,0x000102beb5d8) */
/* WARNING: Removing unreachable block (ram,0x000102beb618) */
/* WARNING: Removing unreachable block (ram,0x000102beb62c) */
/* WARNING: Removing unreachable block (ram,0x000102beb640) */
/* WARNING: Removing unreachable block (ram,0x000102beb570) */
/* WARNING: Removing unreachable block (ram,0x000102beb790) */
/* WARNING: Removing unreachable block (ram,0x000102beb814) */
/* WARNING: Removing unreachable block (ram,0x000102beb82c) */
/* WARNING: Removing unreachable block (ram,0x000102beb6bc) */
/* WARNING: Removing unreachable block (ram,0x000102beb6d4) */
/* WARNING: Removing unreachable block (ram,0x000102beb714) */
/* WARNING: Removing unreachable block (ram,0x000102beb6f8) */
/* WARNING: Removing unreachable block (ram,0x000102beb718) */
/* WARNING: Removing unreachable block (ram,0x000102beb710) */

void FUN_102beb498(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 **ppuStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  uint uStack_2b4;
  undefined8 **ppuStack_2b0;
  long lStack_2a8;
  undefined1 auStack_298 [168];
  undefined8 ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_141;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_118;
  long lStack_110;
  undefined8 ***pppuStack_108;
  long lStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 **ppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0x112efdf80;
  func_0x0001000285a8(0x112efdf80,&UNK_10db30578);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102beb918();
  func_0x000107c606e0((long)&lStack_2f0 - extraout_x8,&UNK_1105af728,&UNK_1105af728,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    pppuStack_1f0 = (undefined8 ***)((ulong)pppuStack_1f0 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_1f0;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_1f0._0_1_ = 1;
    ppppuVar6 = &pppuStack_1f0;
    lVar9 = lVar3;
    pppuStack_118 = ppppuVar5;
    lStack_110 = lVar4;
    func_0x000107c604d4();
    pppuStack_1f0._0_1_ = 2;
    ppppuVar5 = &pppuStack_1f0;
    lVar4 = lVar3;
    pppuStack_108 = ppppuVar6;
    lStack_100 = lVar9;
    func_0x000107c604d4();
    pppuStack_1f0 = (undefined8 ***)CONCAT71(pppuStack_1f0._1_7_,3);
    ppppuVar6 = &pppuStack_1f0;
    lVar9 = lVar3;
    lStack_2a8 = lVar4;
    pppuStack_f8 = ppppuVar5;
    lStack_f0 = lVar4;
    func_0x000107c604f0();
    uStack_e0 = (undefined1)lVar9;
    auStack_298[0] = 4;
    pppuStack_e8 = ppppuVar6;
    FUN_102beb9c0();
    puVar7 = &UNK_1105aff40;
    func_0x000107c604e8(&pppuStack_1f0,&UNK_1105aff40,auStack_298,lVar3,&UNK_1105aff40,ppppuVar6);
    ppuStack_2b0 = pppuStack_1f0;
    ppuStack_d8 = pppuStack_1f0;
    lStack_2f0 = lStack_1e8;
    lStack_2e8 = (long)pppuStack_1e0;
    lStack_d0 = lStack_1e8;
    lStack_c8 = (long)pppuStack_1e0;
    lStack_2e0 = lStack_1d8;
    lStack_c0 = lStack_1d8;
    auStack_298[0] = 5;
    func_0x000102beba00();
    puVar8 = &UNK_1105af550;
    func_0x000107c604e8(&pppuStack_1f0,&UNK_1105af550,auStack_298,lVar3,&UNK_1105af550,puVar7);
    ppuStack_2d8 = pppuStack_1f0;
    lStack_2d0 = lStack_1e8;
    ppuStack_b8 = pppuStack_1f0;
    lStack_b0 = lStack_1e8;
    lStack_2c8 = (long)pppuStack_1e0;
    lStack_2c0 = lStack_1d8;
    lStack_a8 = (long)pppuStack_1e0;
    lStack_a0 = lStack_1d8;
    uStack_2b4 = (uint)(byte)pppuStack_1d0;
    bStack_98 = (byte)pppuStack_1d0;
    uStack_141 = 6;
    func_0x000102beba40();
    func_0x000107c604e8(&lStack_140,&UNK_1105af4d0,&uStack_141,lVar3,&UNK_1105af4d0,puVar8);
    (**(code **)(lVar10 + 8))((long)&lStack_2f0 - extraout_x8,lVar3);
    lStack_88 = lStack_138;
    lStack_90 = lStack_140;
    lStack_78 = lStack_128;
    lStack_80 = lStack_130;
    lStack_1a8 = lStack_d0;
    ppuStack_1b0 = ppuStack_d8;
    lStack_198 = lStack_c0;
    lStack_1a0 = lStack_c8;
    lStack_188 = lStack_b0;
    ppuStack_190 = ppuStack_b8;
    lStack_178 = lStack_a0;
    lStack_180 = lStack_a8;
    lStack_1e8 = lStack_110;
    pppuStack_1f0 = pppuStack_118;
    lStack_1d8 = lStack_100;
    pppuStack_1e0 = pppuStack_108;
    lStack_1b8 = CONCAT71(uStack_df,uStack_e0);
    lStack_1c8 = lStack_f0;
    pppuStack_1d0 = pppuStack_f8;
    pppuStack_1c0 = pppuStack_e8;
    lStack_170 = CONCAT71(uStack_97,bStack_98);
    lStack_168 = lStack_140;
    lStack_158 = lStack_130;
    lStack_160 = lStack_138;
    lStack_150 = lStack_128;
    FUN_102beba80(&pppuStack_1f0,auStack_298);
    func_0x0001000834e4(param_2);
    func_0x000102bebab4(&pppuStack_118);
    param_1[0x11] = lStack_168;
    param_1[0x10] = lStack_170;
    param_1[0x13] = lStack_158;
    param_1[0x12] = lStack_160;
    param_1[0x14] = lStack_150;
    param_1[9] = lStack_1a8;
    param_1[8] = (long)ppuStack_1b0;
    param_1[0xb] = lStack_198;
    param_1[10] = lStack_1a0;
    param_1[0xd] = lStack_188;
    param_1[0xc] = (long)ppuStack_190;
    param_1[0xf] = lStack_178;
    param_1[0xe] = lStack_180;
    param_1[1] = lStack_1e8;
    *param_1 = (long)pppuStack_1f0;
    param_1[3] = lStack_1d8;
    param_1[2] = (long)pppuStack_1e0;
    param_1[5] = lStack_1c8;
    param_1[4] = (long)pppuStack_1d0;
    param_1[7] = lStack_1b8;
    param_1[6] = (long)pppuStack_1c0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102beb918; end: 102beb957;  */

void FUN_102beb918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdf88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30884;
  func_0x000107c61520(&UNK_10db30884,&UNK_1105af728);
  puRam0000000112efdf88 = puVar1;
  return;
}



/* Entry: 102beb958; end: 102beb9bf;  */

/* WARNING: Possible PIC construction at 0x000102beb96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102beb970) */

void FUN_102beb958(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102beb9c0; end: 102beba7f;  */

void FUN_102beb9c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdf90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30cd8;
  func_0x000107c61520(&UNK_10db30cd8,&UNK_1105aff40);
  puRam0000000112efdf90 = puVar1;
  return;
}



/* Entry: 102beba80; end: 102bebadf;  */

undefined8 FUN_102beba80(undefined8 param_1,undefined8 param_2)

{
  FUN_102bea798(param_2,param_1,&UNK_1105af438);
  return param_2;
}



/* Entry: 102bebae0; end: 102bebb9f;  */

void FUN_102bebae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdfb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30cb0;
  func_0x000107c61520(&UNK_10db30cb0,&UNK_1105aff40);
  puRam0000000112efdfb0 = puVar1;
  return;
}



/* Entry: 102bebba0; end: 102bebcb3;  */

undefined4 FUN_102bebba0(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x7377656976 && param_2 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x7377656976,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x65707974) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0;
      func_0x000107c605b8(0x65707974,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x63536e6565726373;
        if ((param_1 == 0x63536e6565726373) && (param_2 == -0x14ffffffff9a939f)) {
          func_0x000107c6142c(0xeb00000000656c61);
          return 2;
        }
        func_0x000107c605b8(0x63536e6565726373,0xeb00000000656c61,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar2 & 1) != 0) {
          return 2;
        }
        return 3;
      }
    }
    func_0x000107c6142c(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 102bebcb4; end: 102bebed7;  */

/* WARNING: Removing unreachable block (ram,0x000102bebe2c) */
/* WARNING: Removing unreachable block (ram,0x000102bebe94) */
/* WARNING: Removing unreachable block (ram,0x000102bebea8) */
/* WARNING: Removing unreachable block (ram,0x000102bebdc8) */

void FUN_102bebcb4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_51;
  
  lVar1 = 0x112efdfe0;
  func_0x0001000285a8(0x112efdfe0,&UNK_10db30598);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar3);
  func_0x000102bec058();
  func_0x000107c606e0((long)&puStack_80 - extraout_x8,&UNK_1105af608,&UNK_1105af608,lVar2,uVar3,
                      uVar4);
  if (unaff_x21 == 0) {
    uVar3 = 0x112efdff0;
    func_0x0001000285a8(0x112efdff0,&UNK_10db305a0);
    uStack_51 = 0;
    uVar4 = 0x112efdff8;
    FUN_102bec0d8(0x112efdff8,0x102bec098,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&uStack_70,uVar3,&uStack_51,lVar1,uVar3,uVar4);
    uVar3 = CONCAT71(uStack_6f,uStack_70);
    uStack_70 = 1;
    puVar5 = &uStack_70;
    lVar2 = lVar1;
    func_0x000107c604f4();
    uStack_51 = 2;
    puStack_80 = puVar5;
    lStack_78 = lVar2;
    func_0x0001010f2b20();
    func_0x000107c604e8(&uStack_70,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_51,lVar1,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    (**(code **)(lVar6 + 8))((long)&puStack_80 - extraout_x8,lVar1);
    uVar4 = CONCAT71(uStack_6f,uStack_70);
    func_0x0001000834e4(param_2);
    *param_1 = uVar3;
    param_1[1] = puStack_80;
    param_1[2] = lStack_78;
    param_1[3] = uVar4;
    *(undefined1 *)(param_1 + 4) = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102bebed8; end: 102bec017;  */

/* WARNING: Removing unreachable block (ram,0x000102bebfa0) */

undefined1  [16] FUN_102bebed8(undefined1 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar2 = 0x112efdfc8;
  func_0x0001000285a8(0x112efdfc8,&UNK_10db30588);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = param_1;
  func_0x0001000a8868(param_1,lVar5);
  puVar4 = puVar3;
  FUN_102bec018();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1105af698,&UNK_1105af698,puVar4,lVar5,uVar1);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar5 = lVar2;
    func_0x000107c604d4(puVar3,lVar2);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = puVar3;
  return auVar7;
}



/* Entry: 102bec018; end: 102bec0d7;  */

void FUN_102bec018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdfd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30834;
  func_0x000107c61520(&UNK_10db30834,&UNK_1105af698);
  puRam0000000112efdfd0 = puVar1;
  return;
}



/* Entry: 102bec0d8; end: 102bec147;  */

void FUN_102bec0d8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112efdff0;
    func_0x00010002969c(0x112efdff0,&UNK_10db305a0);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102bec148; end: 102bec187;  */

void FUN_102bec148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30c88;
  func_0x000107c61520(&UNK_10db30c88,&UNK_1105afeb0);
  puRam0000000112efe018 = puVar1;
  return;
}


