/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102718f2c; end: 102719003; -[_TtC45StandalonePlaceProfilePresenterImplementation31StandalonePlaceProfilePresenter closePlaceProfile] */

void FUN_102718f2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105401e0;
  func_0x000107c613fc(&UNK_1105401e0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110540248;
  func_0x000107c613fc(&UNK_110540248,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dad30a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad30a8,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102719004; end: 10271911b;  */

undefined8 FUN_102719004(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  if (param_2 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      while ((param_2 & 0xc000000000000001) != 0) {
        uVar3 = uVar5;
        FUN_102719fc8(uVar5,param_2);
        bVar2 = SCARRY8(uVar5,1);
        uVar5 = uVar5 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10271911c);
          (*pcVar1)();
        }
        func_0x000107c615e8();
        if (uVar3 == uVar6) {
          return 1;
        }
        if (uVar5 == uVar4) {
          return 0;
        }
      }
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027190c0);
        (*pcVar1)();
      }
      if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027190c4);
        (*pcVar1)();
      }
      if (*(ulong *)(param_2 + 0x20 + uVar5 * 8) == uVar6) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return 0;
}



/* Entry: 10271911c; end: 1027191a3;  */

void FUN_10271911c(long param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_1027191a4();
      func_0x000107c61170(param_1);
      param_1 = param_2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1027191a4; end: 10271933b;  */

/* WARNING: Removing unreachable block (ram,0x000102719330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027191a4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ebaad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ebaad0,auStack_58,0x21,0);
  func_0x000107c61174(param_1);
  lVar4 = unaff_x20 + lVar2;
  FUN_10271b210(lVar4,param_1);
  func_0x000107c61170(param_1);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c60480();
  }
  if ((long)uVar5 < lVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10271929c);
    (*pcVar3)();
  }
  FUN_10271b05c(lVar4);
  func_0x000107c614a8(auStack_58);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ebaae0))
                + 0x60))();
    if (uVar5 != 0) {
      func_0x000107c4dc9c();
      func_0x000107c615e8(uVar5);
    }
  }
  else {
    uVar1 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102719308);
      (*pcVar3)();
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102719330);
        (*pcVar3)();
      }
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10271927c);
        (*pcVar3)();
      }
    }
    else {
      func_0x000107c61434(uVar6);
      FUN_102719fc8(uVar1,uVar6);
      func_0x000107c615e8();
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}



/* Entry: 10271933c; end: 10271939b; -[_TtC45StandalonePlaceProfilePresenterImplementation31StandalonePlaceProfilePresenter init] */

void FUN_10271933c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StandalonePlaceProfilePresenterImplementation.StandalonePlaceProfilePresenter"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102719368);
  (*pcVar1)();
}



/* Entry: 10271939c; end: 1027193f7; -[_TtC45StandalonePlaceProfilePresenterImplementation31StandalonePlaceProfilePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271939c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebaae8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebaad0));
  func_0x000100d027e0(*(undefined8 *)(param_1 + _DAT_112ebaad8),
                      ((undefined8 *)(param_1 + _DAT_112ebaad8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebaae0));
  return;
}



/* Entry: 1027193f8; end: 10271950f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027193f8(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebaad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ebaad0,auStack_48,0,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027194e0);
      (*pcVar2)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10271950c);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102719510);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar5);
      FUN_102719fc8(uVar4,uVar5);
      func_0x000107c6142c(uVar5);
    }
    if (*(long *)(uVar4 + _DAT_112ebaa20) == param_1) {
      func_0x000107c42018(*(undefined8 *)(uVar4 + _DAT_112ebaa18));
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102719510; end: 10271964f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102719510(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ebaad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ebaad0,auStack_58,0,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102719620);
      (*pcVar2)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10271964c);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102719650);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar5);
      FUN_102719fc8(uVar4,uVar5);
      func_0x000107c6142c(uVar5);
    }
    if (*(long *)(uVar4 + _DAT_112ebaa20) == param_2) {
      func_0x000107c575ec(*(undefined8 *)(uVar4 + _DAT_112ebaa18));
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102719650; end: 1027196bf;  */

void FUN_102719650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027196c0,uVar1,uVar2);
  return;
}



/* Entry: 1027196c0; end: 1027198d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027196c0(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x10,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  lVar11 = _DAT_112ebaad0;
  if (lVar10 != 0) {
    func_0x000107c61428(lVar10 + _DAT_112ebaad0,unaff_x22 + 0x28,0,0);
    uVar9 = *(ulong *)(lVar10 + lVar11);
    if (uVar9 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar4 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      uVar5 = uVar4 - 1;
      if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027198a8);
        (*pcVar3)();
      }
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1027198d0);
          (*pcVar3)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1027198d4);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar9);
        FUN_102719fc8(uVar5,uVar9);
        func_0x000107c6142c(uVar9);
      }
      func_0x000107c61170(lVar10);
      lVar10 = *(long *)(unaff_x22 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar11 = *(long *)(unaff_x22 + 0x58);
      uVar7 = *(undefined8 *)(uVar5 + _DAT_112ebaa20);
      lVar2 = ((undefined8 *)(uVar5 + _DAT_112ebaa20))[1];
      func_0x000107c614f0(uVar7);
      (**(code **)(lVar2 + 8))();
      puVar6 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      func_0x0001038c1d34(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      uVar7 = 0x27;
      func_0x0001038c1b68(0x27);
      uVar8 = 0;
      func_0x0001038c1788(0);
      func_0x000107c610f8();
      func_0x0001038c1598(lVar10,uVar1,uVar7,uVar8);
      func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x40,0,0);
      lVar11 = lVar11 + 0x10;
      func_0x000107c61618();
      if (lVar11 != 0) {
        FUN_10271a6a0(lVar10,puVar6,lVar11);
        func_0x000107c61170(lVar11);
      }
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000102719888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027198d4; end: 1027198db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027198d4(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebaad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ebaad0,auStack_48,0,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027194e0);
      (*pcVar2)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10271950c);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102719510);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar5);
      FUN_102719fc8(uVar4,uVar5);
      func_0x000107c6142c(uVar5);
    }
    if (*(long *)(uVar4 + _DAT_112ebaa20) == param_1) {
      func_0x000107c42018(*(undefined8 *)(uVar4 + _DAT_112ebaa18));
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1027198dc; end: 1027199c3;  */

/* WARNING: Possible PIC construction at 0x0001027199a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027199ac) */

void FUN_1027198dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1105401e0;
  func_0x000107c613fc(&UNK_1105401e0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105402c0;
  func_0x000107c613fc(&UNK_1105402c0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1105402e8;
  func_0x000107c613fc(&UNK_1105402e8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad30c0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61434(param_2);
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad30c8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027199c4; end: 102719a1f;  */

void FUN_1027199c4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_102717cbc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ebab18;
  plVar5 = (long *)&UNK_10dad30d8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102719a20; end: 102719a8f;  */

void FUN_102719a20(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102719a90(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102719a90; end: 102719bb7;  */

ulong FUN_102719a90(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102719bb8);
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
  FUN_102719bb8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102719bb4);
      (*pcVar1)();
    }
    FUN_102719c38(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102719bb8; end: 102719c37;  */

undefined * FUN_102719bb8(undefined *param_1,undefined *param_2)

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
    FUN_1027199c4();
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



/* Entry: 102719c38; end: 102719d2f;  */

long FUN_102719c38(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102719d2c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102719d30);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102717cbc(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102717cbc(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102719d28);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102719d30; end: 102719fc7;  */

/* WARNING: Removing unreachable block (ram,0x000102719f7c) */

ulong FUN_102719d30(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  ulong uStack_58;
  
  uVar8 = *param_1;
  uVar7 = uVar8;
  uVar6 = param_2;
  FUN_10271ae58();
  if (unaff_x21 == 0) {
    if (((uint)uVar6 & 0xff) == 1) {
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar7 = uVar8;
        }
        func_0x000107c60480(uVar7);
      }
    }
    else {
      uVar10 = uVar7;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102719dd4);
        (*pcVar2)();
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar4 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar10 == uVar4) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102719f94);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102719f98);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar10;
          FUN_102719fc8(uVar10,uVar8);
        }
        puVar5 = &uStack_58;
        uStack_58 = uVar4;
        FUN_102719004(puVar5,param_2);
        func_0x000107c61170(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          if (uVar7 != uVar10) {
            if ((uVar8 & 0xc000000000000001) == 0) {
              if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102719fa8);
                (*pcVar2)();
              }
              uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
              if (uVar4 <= uVar7) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102719fac);
                (*pcVar2)();
              }
              if (uVar4 <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102719fb0);
                (*pcVar2)();
              }
              uStack_68 = *(ulong *)(uVar8 + 0x20 + uVar7 * 8);
              uVar4 = *(ulong *)(uVar8 + 0x20 + uVar10 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uStack_68 = uVar7;
              FUN_102719fc8(uVar7,uVar8);
              uVar4 = uVar10;
              FUN_102719fc8(uVar10,uVar8);
            }
            uVar11 = uVar8;
            func_0x000107c61550();
            if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
              FUN_10271a650();
              uVar9 = (uint)(uVar8 >> 0x3e) & 1;
            }
            else {
              uVar9 = 0;
            }
            uVar11 = uVar8 & 0xffffffffffffff8;
            lVar1 = uVar11 + uVar7 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar4;
            func_0x000107c61170(uVar6);
            if (((long)uVar8 < 0) || (uVar9 != 0)) {
              FUN_10271a650();
              uVar11 = uVar8 & 0xffffffffffffff8;
            }
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102719f7c);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102719fa4);
              (*pcVar2)();
            }
            lVar1 = uVar11 + uVar10 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uStack_68;
            func_0x000107c61170(uVar6);
            *param_1 = uVar8;
          }
          bVar3 = SCARRY8(uVar7,1);
          uVar7 = uVar7 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102719fa0);
            (*pcVar2)();
          }
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102719f9c);
          (*pcVar2)();
        }
      }
    }
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c6142c(param_2);
    uVar7 = unaff_x22;
  }
  return uVar7;
}



/* Entry: 102719fc8; end: 10271a163;  */

ulong FUN_102719fc8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271a098);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271a09c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_102717cbc(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_102717cbc(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f0b86f0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10271a164);
  (*pcVar2)();
}



/* Entry: 10271a164; end: 10271a173;  */

undefined1  [16] FUN_10271a164(void)

{
  return ZEXT816(0x110540228);
}



/* Entry: 10271a174; end: 10271a21f;  */

void FUN_10271a174(void)

{
  func_0x000107c61168(&PTR_PTR_11285d8b0);
  return;
}



/* Entry: 10271a220; end: 10271a28f;  */

void FUN_10271a220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10271b46c;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10271a290; end: 10271a2bb;  */

void FUN_10271a290(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10271a2bc; end: 10271a31b;  */

void FUN_10271a2bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10271b470;
  plVar4[0xf] = lVar3;
  plVar4[0x10] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec(0,lVar1,uVar5);
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x11] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102718438,lVar2,lVar3);
  return;
}



/* Entry: 10271a31c; end: 10271a38b;  */

void FUN_10271a31c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10271b474;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10271a38c; end: 10271a3b7;  */

void FUN_10271a38c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10271a3b8; end: 10271a417;  */

void FUN_10271a3b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10271a418;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar4;
  plVar3[0xb] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xe] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027196c0,lVar1,lVar2);
  return;
}



/* Entry: 10271a418; end: 10271a453;  */

void FUN_10271a418(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010271a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10271a454; end: 10271a4c3;  */

void FUN_10271a454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10271b478;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10271a4c4; end: 10271a64f;  */

undefined * FUN_10271a4c4(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10271a5a0);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_1027199c4();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271a59c);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_102717cbc(0);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 10271a650; end: 10271a69f;  */

/* WARNING: Removing unreachable block (ram,0x000102719ac4) */
/* WARNING: Removing unreachable block (ram,0x000102719ae8) */
/* WARNING: Removing unreachable block (ram,0x000102719acc) */
/* WARNING: Removing unreachable block (ram,0x000102719bb4) */
/* WARNING: Removing unreachable block (ram,0x000102719ad8) */
/* WARNING: Removing unreachable block (ram,0x000102719ae0) */
/* WARNING: Removing unreachable block (ram,0x000102719b24) */
/* WARNING: Removing unreachable block (ram,0x000102719b38) */
/* WARNING: Removing unreachable block (ram,0x000102719b44) */
/* WARNING: Removing unreachable block (ram,0x000102719b4c) */

ulong FUN_10271a650(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_102719bb8(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_102719c38(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102719bb4);
  (*pcVar1)();
}



/* Entry: 10271a6a0; end: 10271aa77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271a6a0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puStack_90 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_90;
  func_0x00010042e6a0();
  ppuStack_78 = (undefined **)0x0;
  func_0x000107c61614(auStack_80,0);
  uStack_68 = 0;
  func_0x000107c61614(auStack_70,0);
  ppuStack_78 = &PTR_DAT_1105401f8;
  puStack_90 = param_1;
  ppuStack_88 = ppuVar5;
  func_0x000107c61604(auStack_80,param_3);
  uStack_68 = 0;
  func_0x000107c61604(auStack_70,0);
  func_0x000107c6157c(ppuVar5);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_b0);
  uVar6 = uStack_b0;
  func_0x00010008a7c8(&uStack_98,&puStack_90);
  func_0x000107c61574(uVar6);
  func_0x000100083b20(&uStack_b0);
  func_0x000107c61574(uStack_98);
  uVar6 = uStack_b0;
  func_0x000107c614f0();
  uVar11 = uVar6;
  (**(code **)(lStack_a8 + 0x18))();
  if ((uVar11 & 1) == 0) {
    FUN_102686c5c(&puStack_90);
    func_0x000107c615e8(uStack_b0);
  }
  else {
    (**(code **)(lStack_a8 + 8))(uVar6,lStack_a8);
    puVar7 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(uVar6);
    func_0x000107c52684(puVar7);
    FUN_102717cbc(0);
    func_0x000107c610f8();
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61174();
    func_0x000107c615f0(uStack_b0);
    puVar8 = puVar7;
    FUN_102717a18(puVar7,uStack_b0,lStack_a8,ppuVar5);
    puVar4 = &UNK_1105401e0;
    func_0x000107c613fc(&UNK_1105401e0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_3);
    puVar9 = &UNK_110540310;
    func_0x000107c613fc(&UNK_110540310,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,puVar8);
    puVar10 = &UNK_110540338;
    func_0x000107c613fc(&UNK_110540338,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar4;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    puVar1 = (undefined8 *)(puVar8 + _DAT_112ebaa30);
    uVar13 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_10271aa78;
    puVar1[1] = puVar10;
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(puVar9);
    func_0x000100d027e0(uVar13,uVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar9);
    func_0x000107c4ef38(puVar7);
    lVar3 = _DAT_112ebaad0;
    func_0x000107c61428(param_3 + _DAT_112ebaad0,&uStack_b0,0x21,0);
    func_0x000107c61174();
    FUN_102719a20();
    uVar11 = *(ulong *)(param_3 + lVar3);
    uVar12 = uVar11 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar12 + 0x10);
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_102719a90(uVar11,uVar6 + 1,1);
      uVar12 = uVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined **)(uVar12 + uVar6 * 8 + 0x20) = puVar8;
    *(ulong *)(param_3 + lVar3) = uVar11;
    func_0x000107c614a8(&uStack_b0);
    puVar1 = (undefined8 *)(param_3 + _DAT_112ebaad8);
    func_0x000107c61428(puVar1,&uStack_b0,0x20,0);
    pcVar14 = (code *)*puVar1;
    if (pcVar14 != (code *)0x0) {
      uVar13 = puVar1[1];
      func_0x000107c614a8(&uStack_b0);
      func_0x000107c6157c(uVar13);
      (*pcVar14)(puVar8);
      func_0x000100d027e0(pcVar14,uVar13);
      func_0x000107c61170(puVar8);
      func_0x000107c61574(ppuVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(uStack_b0);
      FUN_102686c5c(&puStack_90);
      return;
    }
    FUN_102686c5c(&puStack_90);
    func_0x000107c614a8(&uStack_b0);
    func_0x000107c615e8(uStack_b0);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61574(ppuVar5);
  return;
}



/* Entry: 10271aa78; end: 10271aa7f;  */

void FUN_10271aa78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1027191a4();
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10271aa80; end: 10271ae57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271aa80(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puStack_90 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_90;
  func_0x00010042e6a0();
  ppuStack_78 = (undefined **)0x0;
  func_0x000107c61614(auStack_80,0);
  uStack_68 = 0;
  func_0x000107c61614(auStack_70,0);
  ppuStack_78 = &PTR_DAT_1105401f8;
  puStack_90 = param_1;
  ppuStack_88 = ppuVar5;
  func_0x000107c61604(auStack_80,param_3);
  uStack_68 = 0;
  func_0x000107c61604(auStack_70,0);
  func_0x000107c6157c(ppuVar5);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_b0);
  uVar6 = uStack_b0;
  func_0x00010008a7c8(&uStack_98,&puStack_90);
  func_0x000107c61574(uVar6);
  func_0x000100083b20(&uStack_b0);
  func_0x000107c61574(uStack_98);
  uVar6 = uStack_b0;
  func_0x000107c614f0();
  uVar11 = uVar6;
  (**(code **)(lStack_a8 + 0x18))();
  if ((uVar11 & 1) == 0) {
    FUN_102686c5c(&puStack_90);
    func_0x000107c615e8(uStack_b0);
  }
  else {
    (**(code **)(lStack_a8 + 8))(uVar6,lStack_a8);
    puVar7 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(uVar6);
    func_0x000107c52684(puVar7);
    FUN_102717cbc(0);
    func_0x000107c610f8();
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61174();
    func_0x000107c615f0(uStack_b0);
    puVar8 = puVar7;
    FUN_102717a18(puVar7,uStack_b0,lStack_a8,ppuVar5);
    puVar4 = &UNK_1105401e0;
    func_0x000107c613fc(&UNK_1105401e0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_3);
    puVar9 = &UNK_110540310;
    func_0x000107c613fc(&UNK_110540310,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,puVar8);
    puVar10 = &UNK_110540360;
    func_0x000107c613fc(&UNK_110540360,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar4;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    puVar1 = (undefined8 *)(puVar8 + _DAT_112ebaa30);
    uVar13 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_10271b468;
    puVar1[1] = puVar10;
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(puVar9);
    func_0x000100d027e0(uVar13,uVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar9);
    func_0x000107c4ef38(puVar7);
    lVar3 = _DAT_112ebaad0;
    func_0x000107c61428(param_3 + _DAT_112ebaad0,&uStack_b0,0x21,0);
    func_0x000107c61174();
    FUN_102719a20();
    uVar11 = *(ulong *)(param_3 + lVar3);
    uVar12 = uVar11 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar12 + 0x10);
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_102719a90(uVar11,uVar6 + 1,1);
      uVar12 = uVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined **)(uVar12 + uVar6 * 8 + 0x20) = puVar8;
    *(ulong *)(param_3 + lVar3) = uVar11;
    func_0x000107c614a8(&uStack_b0);
    puVar1 = (undefined8 *)(param_3 + _DAT_112ebaad8);
    func_0x000107c61428(puVar1,&uStack_b0,0x20,0);
    pcVar14 = (code *)*puVar1;
    if (pcVar14 != (code *)0x0) {
      uVar13 = puVar1[1];
      func_0x000107c614a8(&uStack_b0);
      func_0x000107c6157c(uVar13);
      (*pcVar14)(puVar8);
      func_0x000100d027e0(pcVar14,uVar13);
      func_0x000107c61170(puVar8);
      func_0x000107c61574(ppuVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(uStack_b0);
      FUN_102686c5c(&puStack_90);
      return;
    }
    FUN_102686c5c(&puStack_90);
    func_0x000107c614a8(&uStack_b0);
    func_0x000107c615e8(uStack_b0);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61574(ppuVar5);
  return;
}



/* Entry: 10271ae58; end: 10271af5f;  */

ulong FUN_10271ae58(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_58;
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  do {
    if (uVar6 == uVar5) {
      return 0;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10271af48);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar5;
      FUN_102719fc8(uVar5,param_1);
    }
    puVar4 = &uStack_58;
    uStack_58 = uVar3;
    FUN_102719004(puVar4,param_2);
    func_0x000107c61170(uVar3);
    if (unaff_x21 != 0) {
      return uVar5;
    }
    if (((ulong)puVar4 & 1) != 0) {
      return uVar5;
    }
    bVar2 = SCARRY8(uVar5,1);
    uVar5 = uVar5 + 1;
  } while (!bVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10271af4c);
  (*pcVar1)();
}



/* Entry: 10271af60; end: 10271b05b;  */

void FUN_10271af60(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10271b038);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_102717cbc(0);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10271b03c);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10271b054);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10271b058);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10271b05c);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10271b05c; end: 10271b11f;  */

/* WARNING: Removing unreachable block (ram,0x00010271b058) */

void FUN_10271b05c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b0fc);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b114);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b118);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b120);
      (*pcVar3)();
    }
    func_0x00010271a5a0(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b038);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_102717cbc(0);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b03c);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b054);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b058);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10271b11c);
  (*pcVar3)();
}



/* Entry: 10271b120; end: 10271b20f;  */

undefined1  [16] FUN_10271b120(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  do {
    if (uVar6 == uVar3) {
      uVar3 = 0;
      uVar4 = 1;
LAB_10271b1cc:
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = uVar3;
      return auVar8;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10271b1e8);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_1 + uVar3 * 8 + 0x20);
    }
    else {
      uVar5 = uVar3;
      FUN_102719fc8(uVar3,param_1);
      func_0x000107c615e8();
    }
    if (uVar5 == param_2) {
      uVar4 = 0;
      goto LAB_10271b1cc;
    }
    bVar2 = SCARRY8(uVar3,1);
    uVar3 = uVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10271b1ec);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 10271b210; end: 10271b43b;  */

void FUN_10271b210(ulong *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  uVar9 = param_2;
  FUN_10271b120();
  if (unaff_x21 == 0) {
    if (((uint)uVar9 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar9 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b278);
        (*pcVar2)();
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar9 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b408);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b40c);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
          if (uVar10 != param_2) {
            if (uVar4 != uVar9) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b418);
                (*pcVar2)();
              }
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b41c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
LAB_10271b308:
              uVar11 = uVar8;
              func_0x000107c61550();
              if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
                FUN_10271a650();
                uVar7 = (uint)(uVar8 >> 0x3e) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar11 = uVar8 & 0xffffffffffffff8;
              lVar1 = uVar11 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar10;
              func_0x000107c61170(uVar6);
              if (((long)uVar8 < 0) || (uVar7 != 0)) {
                FUN_10271a650();
                uVar11 = uVar8 & 0xffffffffffffff8;
              }
              if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b3e0);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b420);
                (*pcVar2)();
              }
              lVar1 = uVar11 + uVar9 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61170(uVar6);
              *param_1 = uVar8;
            }
LAB_10271b28c:
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b414);
              (*pcVar2)();
            }
          }
        }
        else {
          uVar5 = uVar9;
          FUN_102719fc8(uVar9,uVar8);
          func_0x000107c615e8();
          if (uVar5 != param_2) {
            if (uVar4 != uVar9) {
              uVar5 = uVar4;
              FUN_102719fc8(uVar4,uVar8);
              uVar10 = uVar9;
              FUN_102719fc8(uVar9,uVar8);
              goto LAB_10271b308;
            }
            goto LAB_10271b28c;
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10271b410);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 10271b43c; end: 10271b467;  */

void FUN_10271b43c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10271b468; end: 10271b47b;  */

void FUN_10271b468(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1027191a4();
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10271b47c; end: 10271b6a7;  */

/* WARNING: Possible PIC construction at 0x00010271b5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b5f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271b680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271b674) */
/* WARNING: Removing unreachable block (ram,0x00010271b664) */
/* WARNING: Removing unreachable block (ram,0x00010271b654) */
/* WARNING: Removing unreachable block (ram,0x00010271b644) */
/* WARNING: Removing unreachable block (ram,0x00010271b634) */
/* WARNING: Removing unreachable block (ram,0x00010271b624) */
/* WARNING: Removing unreachable block (ram,0x00010271b614) */
/* WARNING: Removing unreachable block (ram,0x00010271b604) */
/* WARNING: Removing unreachable block (ram,0x00010271b5f4) */
/* WARNING: Removing unreachable block (ram,0x00010271b5e4) */
/* WARNING: Removing unreachable block (ram,0x00010271b5d4) */
/* WARNING: Removing unreachable block (ram,0x00010271b5c4) */
/* WARNING: Removing unreachable block (ram,0x00010271b684) */

void FUN_10271b47c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  code *pcVar28;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar24 = *(undefined8 *)(unaff_x20 + 200);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xd8);
  puVar26 = &UNK_110540480;
  func_0x000107c613fc(&UNK_110540480,0xe0,7);
  *(undefined8 *)(puVar26 + 0x10) = uVar1;
  *(undefined8 *)(puVar26 + 0x18) = uVar13;
  *(undefined8 *)(puVar26 + 0x20) = uVar27;
  *(undefined8 *)(puVar26 + 0x28) = uVar14;
  *(undefined8 *)(puVar26 + 0x30) = uVar2;
  *(undefined8 *)(puVar26 + 0x38) = uVar15;
  *(undefined8 *)(puVar26 + 0x40) = uVar3;
  *(undefined8 *)(puVar26 + 0x48) = uVar16;
  *(undefined8 *)(puVar26 + 0x50) = uVar4;
  *(undefined8 *)(puVar26 + 0x58) = uVar17;
  *(undefined8 *)(puVar26 + 0x60) = uVar5;
  *(undefined8 *)(puVar26 + 0x68) = uVar18;
  *(undefined8 *)(puVar26 + 0x70) = uVar6;
  *(undefined8 *)(puVar26 + 0x78) = uVar19;
  *(undefined8 *)(puVar26 + 0x80) = uVar7;
  *(undefined8 *)(puVar26 + 0x88) = uVar20;
  *(undefined8 *)(puVar26 + 0x90) = uVar8;
  *(undefined8 *)(puVar26 + 0x98) = uVar21;
  *(undefined8 *)(puVar26 + 0xa0) = uVar9;
  *(undefined8 *)(puVar26 + 0xa8) = uVar22;
  *(undefined8 *)(puVar26 + 0xb0) = uVar10;
  *(undefined8 *)(puVar26 + 0xb8) = uVar23;
  *(undefined8 *)(puVar26 + 0xc0) = uVar11;
  *(undefined8 *)(puVar26 + 200) = uVar24;
  *(undefined8 *)(puVar26 + 0xd0) = uVar12;
  *(undefined8 *)(puVar26 + 0xd8) = uVar25;
  uVar27 = 0x112ebab28;
  func_0x0001000285a8(0x112ebab28,&UNK_10dad3140);
  func_0x000107c613fc();
  pcVar28 = FUN_10271b7a4;
  func_0x0001000841fc(FUN_10271b7a4,puVar26,uVar27);
  func_0x000100084214(&UNK_10dad3110,0x28,2);
  *param_1 = pcVar28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10271b6a8; end: 10271b6b7;  */

undefined1  [16] FUN_10271b6a8(void)

{
  return ZEXT816(0x110540460);
}



/* Entry: 10271b6b8; end: 10271b7a3;  */

void FUN_10271b6b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10271b7a4; end: 10271bb1b;  */

void FUN_10271b7a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x20;
  
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar14 = *(undefined8 *)(unaff_x20 + 200);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xd8);
  func_0x0001000285a8(0x112ebab30,&UNK_10dad3148);
  func_0x0001000838ec();
  FUN_10272fd20();
  func_0x000100082720("CaaSCameraScopeExposerServiceProvider",0x25,2);
  FUN_10272fdbc();
  func_0x000100082720("MapPlaceSharingScopeExposerServiceProvider",0x2a,2);
  FUN_10272fd54();
  func_0x000100082720("MapPlaceSuggestAttributeTrayScopeExposerServiceProvider",0x37,2);
  FUN_10272fcb8();
  func_0x000100082720("MapStoryPlaybackScopeExposerServiceProvider",0x2b,2);
  uVar20 = uVar1;
  FUN_10272ee40(uVar1,uVar7,param_2);
  func_0x000100082720("PlaceProfileVisitStateManagerServiceProvider",0x2c,2);
  FUN_1027245dc(uVar21,uVar1,uVar8,param_2,uVar27,uVar9,uVar20);
  func_0x000100082720("PlaceProfileDataProviderServiceProvider",0x27,2);
  FUN_10272fcec();
  func_0x000100082720("UnifiedPublicProfilesPresenterScopeExposerServiceProvider",0x39,2);
  FUN_10272fdf0();
  func_0x000100082720("VenueEditorScopeExposerServiceProvider",0x26,2);
  FUN_10272fd88();
  func_0x000100082720("WebBrowsingScopeExposerServiceProvider",0x26,2);
  FUN_10272bde4(uVar25,uVar2,uVar10,uVar16,uVar26,uVar11,uVar3,uVar18,uVar7,uVar17,param_2,uVar22,
                uVar23,uVar24);
  func_0x000100082720("PlaceProfileTrayRouterServiceProvider",0x25,2);
  FUN_102720f60(uVar26,uVar25,uVar20);
  func_0x000100082720("PlaceProfileActionSheetPresenterServiceProvider",0x2f,2);
  uVar27 = uVar26;
  FUN_10272ff88(uVar26,uVar12,uVar4,uVar13,uVar5,uVar21,uVar14,uVar1,uVar8,uVar19,uVar6,param_2,
                uVar15,uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(param_2);
  func_0x000100082720("VenueProfileComponentEntryPointProvider",0x27,2);
  *param_1 = uVar27;
  return;
}



/* Entry: 10271bb1c; end: 10271bbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10271bb1c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = _DAT_112ebab78;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112ebab78);
  puVar6 = puVar4;
  if (puVar4 == (undefined *)0x1) {
    lVar3 = unaff_x20 + _DAT_112ebab60;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      (**(code **)(lVar5 + 8))();
      func_0x000107c615e8(lVar2);
      puVar6 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x000107c61170(lVar3);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar6;
    func_0x000107c61174(puVar6);
    FUN_102720138(uVar7);
  }
  func_0x000102720148(puVar4);
  return puVar6;
}



/* Entry: 10271bbf4; end: 10271bd37; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler handlePlaceLoyaltyShareTapWithStickerData:] */

/* WARNING: Possible PIC construction at 0x00010271bcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271bcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271bd18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271bcf0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010271bce0) */
/* WARNING: Removing unreachable block (ram,0x00010271bd1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271bbf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10271bb1c();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ebab48);
    puVar2 = &UNK_110540570;
    func_0x000107c613fc(&UNK_110540570,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,uVar4);
    puVar3 = &UNK_110540a48;
    func_0x000107c613fc(&UNK_110540a48,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_3;
    *(long *)(puVar3 + 0x20) = lVar1;
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar1);
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad32e0,puVar3,PTR___sytN_11034f1b0 + 8);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271bd38; end: 10271be33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271bd38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112fa9ab8;
  lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_112ebab40) + 0x10);
  func_0x000107c61428(lVar7 + _DAT_112fa9ab8,auStack_68,0,0);
  if (*(char *)(lVar7 + lVar5) == '\x01') {
    lVar5 = unaff_x20 + _DAT_112ebab70;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      puVar1 = (undefined8 *)(lVar7 + _DAT_112fa9a98);
      func_0x000107c61428(puVar1,auStack_80,0,0);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      pcVar8 = *(code **)(lVar6 + 0x38);
      func_0x000107c61434(uVar3);
      (*pcVar8)(param_1,uVar2,uVar3,lVar5,lVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 10271be34; end: 10271bf13; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler launchBusinessProfileWithBusinessId:placeId:] */

/* WARNING: Possible PIC construction at 0x00010271bef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271bef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271be34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10271bb1c();
  if (lVar1 != 0) {
    FUN_10271bd38(6);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ebab48);
    func_0x000107c61174(lVar1);
    func_0x000107c61174();
    FUN_10271faa0(param_3,param_2,param_4,uVar2,lVar1,uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    param_1 = lVar1;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271bf14; end: 10271bfa7;  */

void FUN_10271bf14(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271bfa8,uVar2,uVar3);
  return;
}



/* Entry: 10271bfa8; end: 10271c0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271bfa8(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar5 = lVar6 + _DAT_112ebab68;
    lVar3 = lVar5;
    func_0x000107c61618();
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c61170(lVar6);
    if (lVar3 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x28,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        lVar1 = lVar6 + _DAT_112ebab60;
        lVar4 = lVar1;
        func_0x000107c61618();
        uVar7 = *(undefined8 *)(lVar1 + 8);
        func_0x000107c61170(lVar6);
        if (lVar4 != 0) {
          uVar2 = *(uint *)(unaff_x22 + 0x50);
          lVar6 = lVar3;
          func_0x000107c614f0(lVar3);
          if (uVar2 < 2) {
            (**(code **)(lVar5 + 8))(lVar4,uVar7,lVar6,lVar5);
          }
          else {
            (**(code **)(lVar5 + 0x10))(uVar2,lVar4,uVar7,lVar6,lVar5);
          }
          func_0x000107c615e8(lVar3);
          lVar3 = lVar4;
        }
      }
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010271c0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10271c0e8; end: 10271c1db; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler updateTrayPositionWithPosition:] */

void FUN_10271c0e8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105405e8;
  func_0x000107c613fc(&UNK_1105405e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1105409a8;
  func_0x000107c613fc(&UNK_1105409a8,0x1c,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined4 *)(puVar2 + 0x18) = param_3;
  puVar1 = &UNK_1105409d0;
  func_0x000107c613fc(&UNK_1105409d0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad32c0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad32c8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10271c1dc; end: 10271c40f;  */

void FUN_10271c1dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_70 - extraout_x8;
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(uVar1 - 8);
  lVar9 = *(long *)(lVar13 + 0x40);
  uVar6 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000109021904();
  if ((uVar6 & 1) == 0) {
    uStack_70 = 0x2f2f3a6c6574;
    uStack_68 = 0xe600000000000000;
    func_0x000107c5fb78(param_1,param_2);
    uVar5 = uStack_68;
    func_0x000107c5edd0(lVar10,uStack_70,uStack_68);
    func_0x000107c6142c(uVar5);
    lVar2 = lVar10;
    (**(code **)(lVar13 + 0x30))(lVar10,1,uVar1);
    if ((int)lVar2 == 1) {
      func_0x0001000293e4(lVar10);
    }
    else {
      pcVar12 = *(code **)(lVar13 + 0x20);
      (*pcVar12)(lVar7,lVar10,uVar1);
      FUN_10271bd38(4);
      (**(code **)(lVar13 + 0x10))(lVar8,lVar7,uVar1);
      uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
      puVar3 = &UNK_110540958;
      func_0x000107c613fc(&UNK_110540958,uVar11 + lVar9,uVar6 | 7);
      (*pcVar12)(puVar3 + uVar11,lVar8,uVar1);
      puVar4 = &UNK_110540980;
      func_0x000107c613fc(&UNK_110540980,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10dad32a8;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(undefined **)(lVar7 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar5 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad32b0,puVar4);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
      (**(code **)(lVar13 + 8))(lVar7,uVar1);
    }
  }
  return;
}



/* Entry: 10271c410; end: 10271c49f;  */

void FUN_10271c410(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271c4a0,uVar2,uVar3);
  return;
}



/* Entry: 10271c4a0; end: 10271c587;  */

void FUN_10271c4a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar4 = 0;
  func_0x000100dfa6ec(0);
  uVar5 = 0x112d377a8;
  FUN_102720bc4(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(puVar3);
  func_0x000107c4de70(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010271c584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10271c588; end: 10271c593; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler callPlacePhoneNumberWithPhoneNumber:] */

void FUN_10271c588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10271c1dc(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271c594; end: 10271c773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271c594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&uStack_80 - extraout_x8;
  uVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000109021904();
  if ((uVar4 & 1) == 0) {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c5fb78(0x5f656372756f7326,0xeb000000003d6469);
    func_0x000107c5fb78(param_4,param_5);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f0b8950);
    func_0x000107c5fddc(param_1,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_78;
    func_0x000107c5edd0(lVar2,uStack_80,uStack_78);
    func_0x000107c6142c(uVar1);
    lVar5 = lVar2;
    (**(code **)(lVar7 + 0x30))(lVar2,1,uVar3);
    if ((int)lVar5 == 1) {
      func_0x0001000293e4(lVar2);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,lVar2,uVar3);
      FUN_10272bb9c(lVar6);
      (**(code **)(lVar7 + 8))(lVar6,uVar3);
    }
  }
  return;
}



/* Entry: 10271c774; end: 10271c807; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openShopDeeplinkWithStoreUrl:placeId:sessionId:] */

/* WARNING: Possible PIC construction at 0x00010271c7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271c7ec) */

void FUN_10271c774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_3;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_2);
  FUN_10271c594(param_1,param_4,param_3,param_5,uVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10271c808; end: 10271ca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271c808(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long alStack_70 [2];
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(uVar1 - 8);
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar12 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  func_0x000109021904();
  if (((uVar2 & 1) == 0) && (FUN_10271bb1c(), uVar2 != 0)) {
    func_0x000107c5edd0(puVar12,param_1,param_2);
    puVar3 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,uVar1);
    if ((int)puVar3 == 1) {
      func_0x000107c61170(uVar2);
      func_0x0001000293e4(puVar12);
    }
    else {
      pcVar13 = *(code **)(lVar15 + 0x20);
      (*pcVar13)(lVar8,puVar12,uVar1);
      FUN_10271bd38(5);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ebab48);
      puVar4 = &UNK_110540570;
      func_0x000107c613fc(&UNK_110540570,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,uVar7);
      (**(code **)(lVar15 + 0x10))(lVar9,lVar8,uVar1);
      uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
      uVar14 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
      uVar11 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
      puVar5 = &UNK_110540908;
      func_0x000107c613fc(&UNK_110540908,uVar11 + 8,uVar6 | 7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      (*pcVar13)(puVar5 + uVar14,lVar9,uVar1);
      *(ulong *)(puVar5 + uVar11) = uVar2;
      puVar4 = &UNK_110540930;
      func_0x000107c613fc(&UNK_110540930,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10dad3290;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      func_0x000107c61174(uVar2);
      func_0x000107c61174();
      *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3298,puVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar7);
      (**(code **)(lVar15 + 8))(lVar8,uVar1);
    }
  }
  return;
}



/* Entry: 10271ca7c; end: 10271ca87; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openWebPageUrlWithUrl:] */

void FUN_10271ca7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10271c808(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271ca88; end: 10271ccd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271ca88(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long alStack_70 [2];
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(uVar1 - 8);
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar12 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  func_0x000109021904();
  if (((uVar2 & 1) == 0) && (FUN_10271bb1c(), uVar2 != 0)) {
    func_0x000107c5edd0(puVar12,param_1,param_2);
    puVar3 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,uVar1);
    if ((int)puVar3 == 1) {
      func_0x000107c61170(uVar2);
      func_0x0001000293e4(puVar12);
    }
    else {
      pcVar14 = *(code **)(lVar15 + 0x20);
      (*pcVar14)(lVar8,puVar12,uVar1);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ebab48);
      puVar4 = &UNK_110540570;
      func_0x000107c613fc(&UNK_110540570,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,uVar7);
      (**(code **)(lVar15 + 0x10))(lVar9,lVar8,uVar1);
      uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
      uVar13 = uVar6 + 0x19 & (uVar6 ^ 0xffffffffffffffff);
      uVar11 = lVar10 + uVar13 + 7 & 0xfffffffffffffff8;
      puVar5 = &UNK_1105408e0;
      func_0x000107c613fc(&UNK_1105408e0,uVar11 + 8,uVar6 | 7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      puVar5[0x18] = 1;
      (*pcVar14)(puVar5 + uVar13,lVar9,uVar1);
      *(ulong *)(puVar5 + uVar11) = uVar2;
      func_0x000107c61174(uVar2);
      func_0x000107c61174();
      *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3288,puVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar7);
      (**(code **)(lVar15 + 8))(lVar8,uVar1);
    }
  }
  return;
}



/* Entry: 10271ccd8; end: 10271cce3; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openGoogleReviewsPageWithUrl:] */

void FUN_10271ccd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10271ca88(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271cce4; end: 10271cd3f;  */

void FUN_10271cce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271cd40; end: 10271cdd3;  */

void FUN_10271cd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271cdd4,uVar2,uVar3);
  return;
}



/* Entry: 10271cdd4; end: 10271cf1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271cdd4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    puVar2 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10271cf1c);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c4e57c();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    func_0x000107c43d80();
    func_0x000107c61180();
    func_0x000107c5fadc(uVar3,uVar7);
    func_0x000107c59a00(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    lVar4 = *(long *)(lVar8 + _DAT_112ebab48);
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x00010687973c();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10271cf20);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    FUN_10272bd18(lVar6,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010271cf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10271cf20; end: 10271d037; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler copyAddressForPlaceWithFormattedAddress:] */

void FUN_10271cf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = &UNK_1105405e8;
  func_0x000107c613fc(&UNK_1105405e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110540890;
  func_0x000107c613fc(&UNK_110540890,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1105408b8;
  func_0x000107c613fc(&UNK_1105408b8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad3278;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3280,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10271d038; end: 10271d5cb;  */

/* WARNING: Possible PIC construction at 0x00010271d1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271d554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271d520) */
/* WARNING: Removing unreachable block (ram,0x00010271d508) */
/* WARNING: Removing unreachable block (ram,0x00010271d3bc) */
/* WARNING: Removing unreachable block (ram,0x00010271d374) */
/* WARNING: Removing unreachable block (ram,0x00010271d354) */
/* WARNING: Removing unreachable block (ram,0x00010271d584) */
/* WARNING: Removing unreachable block (ram,0x00010271d360) */
/* WARNING: Removing unreachable block (ram,0x00010271d2b4) */
/* WARNING: Removing unreachable block (ram,0x00010271d2e8) */
/* WARNING: Removing unreachable block (ram,0x00010271d300) */
/* WARNING: Removing unreachable block (ram,0x00010271d318) */
/* WARNING: Removing unreachable block (ram,0x00010271d330) */
/* WARNING: Removing unreachable block (ram,0x00010271d294) */
/* WARNING: Removing unreachable block (ram,0x00010271d550) */
/* WARNING: Removing unreachable block (ram,0x00010271d2a0) */
/* WARNING: Removing unreachable block (ram,0x00010271d234) */
/* WARNING: Removing unreachable block (ram,0x00010271d210) */
/* WARNING: Removing unreachable block (ram,0x00010271d1ec) */
/* WARNING: Removing unreachable block (ram,0x00010271d1c8) */
/* WARNING: Removing unreachable block (ram,0x00010271d59c) */

void FUN_10271d038(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(uVar1 - 8);
  lVar6 = *(long *)(lVar5 + 0x40);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)(auStack_d0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (lVar4 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000109021904();
  if (((uVar2 & 1) == 0) && (FUN_10271bb1c(), uVar2 != 0)) {
    uVar3 = param_1;
    uStack_90 = uVar2;
    func_0x000107c3ec58();
    func_0x000107c61180();
    uVar2 = uStack_90;
    if (uVar3 != 0) {
      puStack_c8 = auStack_d0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
      uStack_c0 = uVar1;
      lStack_b0 = lVar5;
      lStack_a8 = lVar4;
      uStack_a0 = uVar3;
      lStack_98 = (lVar4 - extraout_x12_02) - extraout_x12_03;
      func_0x000107c4e7c0();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c61168(PTR_PTR_1126b1e58);
      uVar2 = uStack_a0;
      func_0x000107c4d540(uStack_a0);
      func_0x000107c61180();
      func_0x000107c4aad8();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10271d5cc; end: 10271d61b; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler sendPlaceProfileWithPlace:] */

/* WARNING: Possible PIC construction at 0x00010271d604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271d608) */

void FUN_10271d5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10271d038(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271d61c; end: 10271d6af;  */

void FUN_10271d61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271d6b0,uVar2,uVar3);
  return;
}



/* Entry: 10271d6b0; end: 10271d7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271d6b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar2 = lVar4 + _DAT_112ebab60;
    func_0x000107c61618();
    lVar1 = _DAT_112ebab40;
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar6 = *(undefined8 *)(lVar4 + _DAT_112ebab40);
      func_0x000107c6157c(uVar6);
      FUN_10272f530(uVar5);
      func_0x000107c61574(uVar6);
      lVar7 = lVar4 + _DAT_112ebab70;
      lVar3 = lVar7;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 8);
        func_0x000107c614f0();
        uVar5 = *(undefined8 *)(*(long *)(lVar4 + lVar1) + 0x10);
        pcVar8 = *(code **)(lVar7 + 0x10);
        func_0x000107c61174(uVar5);
        (*pcVar8)();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar5);
        lVar2 = lVar3;
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010271d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10271d7f4; end: 10271d933; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler onVenueLoadedWithPlace:sessionInfo:] */

/* WARNING: Possible PIC construction at 0x00010271d90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271d910) */

void FUN_10271d7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105405e8;
  func_0x000107c613fc(&UNK_1105405e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1105407f0;
  func_0x000107c613fc(&UNK_1105407f0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar1 = &UNK_110540818;
  func_0x000107c613fc(&UNK_110540818,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad3250;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3258,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271d934; end: 10271dea7; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler handleAttributeEditorTapWithInitialAttributes:placeId:sessionInfo:] */

/* WARNING: Possible PIC construction at 0x00010271db00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271db10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271db50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271db14) */
/* WARNING: Removing unreachable block (ram,0x00010271db04) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010271db54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271d934(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = 0;
  FUN_102720e58(0,0x112d60988,&PTR_PTR_1126a6420);
  func_0x000107c5fc54();
  func_0x000107c5faec();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar2 = param_2;
  FUN_10271bb1c();
  if (lVar2 == 0) {
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_2);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + _DAT_112ebab48);
    func_0x000107c61174();
    func_0x000107c4e7e8(param_6);
    uVar3 = param_6;
    func_0x000107c4c3f0();
    func_0x000107c61180();
    puVar4 = &UNK_110540570;
    func_0x000107c613fc(&UNK_110540570,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar6);
    puVar5 = &UNK_1105407a0;
    func_0x000107c613fc(&UNK_1105407a0,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar2;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    *(undefined8 *)(puVar5 + 0x28) = param_5;
    *(undefined8 *)(puVar5 + 0x30) = uVar1;
    *(undefined8 *)(puVar5 + 0x38) = uVar3;
    *(undefined8 *)(puVar5 + 0x40) = param_1;
    puVar4 = &UNK_1105407c8;
    func_0x000107c613fc(&UNK_1105407c8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dad3238;
    *(undefined **)(puVar4 + 0x18) = puVar5;
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c61434(param_4);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar3);
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3240,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10271dea8; end: 10271df13; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler handlePlacePivotTapWithPivot:placeSessionId:] */

/* WARNING: Possible PIC construction at 0x00010271def4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271def8) */

void FUN_10271dea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010271db7c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271df14; end: 10271df7b; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler handlePlacePivotLongPressWithPivot:placeSessionId:] */

/* WARNING: Possible PIC construction at 0x00010271df5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271df60) */

void FUN_10271df14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10271fc08(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271df7c; end: 10271e00f;  */

void FUN_10271df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271e010,uVar2,uVar3);
  return;
}



/* Entry: 10271e010; end: 10271e0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271e010(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4 + _DAT_112ebab68;
    lVar2 = lVar5;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar5 = *(long *)(lVar5 + 8);
      func_0x000107c61170(lVar4);
      lVar4 = lVar2;
      func_0x000107c614f0(lVar2);
      (**(code **)(lVar5 + 0x18))(uVar3,uVar1,lVar4,lVar5);
      func_0x000107c615e8(lVar2);
      uVar3 = 0;
      goto LAB_10271e0c4;
    }
    func_0x000107c61170(lVar4);
  }
  uVar3 = 1;
LAB_10271e0c4:
                    /* WARNING: Could not recover jumptable at 0x00010271e0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10271e0e0; end: 10271e123;  */

void FUN_10271e0e0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010271e120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10271e124; end: 10271e243; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openPlaceProfileWithPlaceId:lat:lng:] */

void FUN_10271e124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  puVar1 = &UNK_1105405e8;
  func_0x000107c613fc(&UNK_1105405e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110540728;
  func_0x000107c613fc(&UNK_110540728,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_110540750;
  func_0x000107c613fc(&UNK_110540750,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad3210;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3220,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10271e244; end: 10271e433;  */

/* WARNING: Possible PIC construction at 0x00010271e3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e3ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271e3d8) */
/* WARNING: Removing unreachable block (ram,0x00010271e3f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271e244(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = param_1;
  func_0x000109021904();
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20 + _DAT_112ebab60;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar8 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      (**(code **)(lVar8 + 8))();
      func_0x000107c615e8(lVar2);
      FUN_10271bd38(2);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ebab50);
      puVar4 = &UNK_1105405e8;
      func_0x000107c613fc(&UNK_1105405e8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1105406d8;
      func_0x000107c613fc(&UNK_1105406d8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_2;
      *(undefined8 *)(puVar5 + 0x20) = param_3;
      puVar6 = &UNK_110540610;
      func_0x000107c613fc(&UNK_110540610,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar9);
      puVar7 = &UNK_110540700;
      func_0x000107c613fc(&UNK_110540700,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(ulong *)(puVar7 + 0x18) = param_1;
      *(code **)(puVar7 + 0x20) = FUN_1027202d4;
      *(undefined **)(puVar7 + 0x28) = puVar5;
      *(long *)(puVar7 + 0x30) = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c61174();
      func_0x000107c6157c(puVar4);
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar5);
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3200,puVar7,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 10271e434; end: 10271e4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271e434(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112ebab58);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    FUN_10272b49c(0,param_1,param_2,param_4,param_5);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10271e4dc; end: 10271e54f; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openDirectionsActionSheetWithDirectionsData:sectionId:] */

void FUN_10271e4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10271e244(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271e550; end: 10271ea6b;  */

/* WARNING: Possible PIC construction at 0x00010271e6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271e8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ea04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ea20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271ea08) */
/* WARNING: Removing unreachable block (ram,0x00010271e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010271e894) */
/* WARNING: Removing unreachable block (ram,0x00010271e884) */
/* WARNING: Removing unreachable block (ram,0x00010271e768) */
/* WARNING: Removing unreachable block (ram,0x00010271e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010271e6a4) */
/* WARNING: Removing unreachable block (ram,0x00010271e718) */
/* WARNING: Removing unreachable block (ram,0x00010271e76c) */
/* WARNING: Removing unreachable block (ram,0x00010271e774) */
/* WARNING: Removing unreachable block (ram,0x00010271e750) */
/* WARNING: Removing unreachable block (ram,0x00010271e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010271ea24) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271e550(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long alStack_90 [4];
  long lStack_70;
  long lStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(*(long *)(uVar2 - 8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000109021904();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) != 1) {
LAB_10271e8e0:
      lVar5 = unaff_x20 + _DAT_112ebab60;
      lVar4 = lVar5;
      func_0x000107c61618();
      if (lVar4 == 0) {
        return;
      }
      lVar9 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      (**(code **)(lVar9 + 8))();
      func_0x000107c615e8(lVar4);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ebab50);
      puVar6 = &UNK_1105405e8;
      func_0x000107c613fc(&UNK_1105405e8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110540610;
      func_0x000107c613fc(&UNK_110540610,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar10);
      puVar8 = &UNK_110540688;
      func_0x000107c613fc(&UNK_110540688,0x38,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar5;
      *(ulong *)(puVar8 + 0x20) = param_1;
      *(code **)(puVar8 + 0x28) = FUN_102720158;
      *(undefined **)(puVar8 + 0x30) = puVar6;
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c61580(puVar6,2);
      func_0x000107c61434(param_1);
      *(undefined **)
       ((long)alStack_90 + ((-(lVar11 + 0xfU & 0xfffffffffffffff0) - extraout_x8) - extraout_x12)) =
           PTR___sytN_11034f1b0 + 8;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad31f0,puVar8);
      goto code_r0x000107c61170;
    }
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    uVar3 = uVar2;
    func_0x000107c60480();
    if ((uVar3 != 1) || (func_0x000107c60480(), uVar2 == 0)) goto LAB_10271e8e0;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10271ea6c);
      (*pcVar1)();
    }
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar11 = 0;
    FUN_10271f894(0,param_1,&PTR_PTR_1126cd838,0x112ebabb0);
  }
  lVar4 = lVar11;
  FUN_10271bb1c();
  lVar5 = lVar11;
  if (lVar4 != 0) {
    lStack_70 = lVar4;
    func_0x000107c5d7e8(lVar11);
    func_0x000107c61180();
    func_0x000107c5faec();
    lStack_68 = lVar11;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10271ea6c; end: 10271ea77; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openOrderActionSheetWithPartnerInfo:] */

void FUN_10271ea6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102720e58(0,0x112ebabb0,&PTR_PTR_1126cd838);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10271e550(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10271ea78; end: 10271f02b;  */

/* WARNING: Possible PIC construction at 0x00010271ebc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ec00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ec8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ed28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ee40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ee50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271ee60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271efc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010271efe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271efc8) */
/* WARNING: Removing unreachable block (ram,0x00010271ee64) */
/* WARNING: Removing unreachable block (ram,0x00010271ee54) */
/* WARNING: Removing unreachable block (ram,0x00010271ee44) */
/* WARNING: Removing unreachable block (ram,0x00010271ed2c) */
/* WARNING: Removing unreachable block (ram,0x00010271ec90) */
/* WARNING: Removing unreachable block (ram,0x00010271ec04) */
/* WARNING: Removing unreachable block (ram,0x00010271ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010271ec3c) */
/* WARNING: Removing unreachable block (ram,0x00010271ec94) */
/* WARNING: Removing unreachable block (ram,0x00010271ec9c) */
/* WARNING: Removing unreachable block (ram,0x00010271ed50) */
/* WARNING: Removing unreachable block (ram,0x00010271ed54) */
/* WARNING: Removing unreachable block (ram,0x00010271ed14) */
/* WARNING: Removing unreachable block (ram,0x00010271ec78) */
/* WARNING: Removing unreachable block (ram,0x00010271ebfc) */
/* WARNING: Removing unreachable block (ram,0x00010271efe4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271ea78(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long alStack_90 [2];
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 *puStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(*(long *)(uVar2 - 8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000109021904();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) != 1) {
LAB_10271eea0:
      lVar3 = unaff_x20 + _DAT_112ebab60;
      lVar5 = lVar3;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      lVar9 = *(long *)(lVar3 + 8);
      lVar3 = lVar5;
      func_0x000107c614f0();
      (**(code **)(lVar9 + 8))();
      func_0x000107c615e8(lVar5);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ebab50);
      puVar6 = &UNK_1105405e8;
      func_0x000107c613fc(&UNK_1105405e8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110540610;
      func_0x000107c613fc(&UNK_110540610,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar10);
      puVar8 = &UNK_110540638;
      func_0x000107c613fc(&UNK_110540638,0x38,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = lVar3;
      *(ulong *)(puVar8 + 0x20) = param_1;
      *(code **)(puVar8 + 0x28) = FUN_10271fff8;
      *(undefined **)(puVar8 + 0x30) = puVar6;
      func_0x000107c61174(lVar3);
      func_0x000107c61174();
      func_0x000107c61580(puVar6,2);
      func_0x000107c61434(param_1);
      *(undefined **)
       (auStack_80 + ((-(lVar11 + 0xfU & 0xfffffffffffffff0) - extraout_x8) - extraout_x12) + -0x10)
           = PTR___sytN_11034f1b0 + 8;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad31d0,puVar8);
      goto code_r0x000107c61170;
    }
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    uVar4 = uVar2;
    func_0x000107c60480();
    if ((uVar4 != 1) || (func_0x000107c60480(), uVar2 == 0)) goto LAB_10271eea0;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10271f02c);
      (*pcVar1)();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    FUN_10271f894(0,param_1,&PTR_PTR_1126cd838,0x112ebabb0);
  }
  lVar5 = lVar3;
  FUN_10271bb1c();
  if (lVar5 != 0) {
    lStack_70 = lVar5;
    puStack_68 = auStack_80 + ((-(lVar11 + 0xfU & 0xfffffffffffffff0) - extraout_x8) - extraout_x12)
    ;
    func_0x000107c5d7e8(lVar3);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10271f02c; end: 10271f0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271f02c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112ebab58);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    FUN_10272b49c(param_4,param_1,param_2,0,0);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10271f0d0; end: 10271f0db; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler openReservationsActionSheetWithPartnerInfo:] */

void FUN_10271f0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102720e58(0,0x112ebabb0,&PTR_PTR_1126cd838);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10271ea78(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10271f0dc; end: 10271f14f;  */

void FUN_10271f0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102720e58(0,0x112ebabb0,&PTR_PTR_1126cd838);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10271f150; end: 10271f34f;  */

/* WARNING: Possible PIC construction at 0x00010271f310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271f314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271f150(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = param_2;
  func_0x000109021904();
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20 + _DAT_112ebab60;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar6 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      (**(code **)(lVar6 + 8))();
      func_0x000107c615e8(lVar2);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ebab48);
      func_0x000107c4e7c0();
      func_0x000107c61180();
      uVar1 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      func_0x000107c61174();
      func_0x000107c4e7e8(param_3);
      func_0x000107c4c3f0();
      func_0x000107c61180();
      puVar4 = &UNK_110540570;
      func_0x000107c613fc(&UNK_110540570,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,uVar7);
      puVar5 = &UNK_110540598;
      func_0x000107c613fc(&UNK_110540598,0x40,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      *(undefined8 *)(puVar5 + 0x20) = param_1;
      *(long *)(puVar5 + 0x28) = lVar3;
      *(ulong *)(puVar5 + 0x30) = uVar1;
      *(long *)(puVar5 + 0x38) = lVar6;
      puVar4 = &UNK_1105405c0;
      func_0x000107c613fc(&UNK_1105405c0,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10dad31b8;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      func_0x000107c61174(lVar3);
      func_0x000107c61174(param_3);
      func_0x000107c61434(lVar6);
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad31c0,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 10271f350; end: 10271f3bb; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler handleReportIssueTapWithPlace:sessionInfo:] */

/* WARNING: Possible PIC construction at 0x00010271f39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271f3a0) */

void FUN_10271f350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10271f150(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10271f3bc; end: 10271f3e3; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler onFavoriteTappedWithWillBeFavorited:] */

void FUN_10271f3bc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010271fe1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10271f3e4; end: 10271f683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271f3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  uStack_88 = param_6;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  lVar2 = unaff_x20 + _DAT_112ebab70;
  func_0x000107c61618();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  lStack_90 = lVar1;
  func_0x000107c5fadc(param_2,param_3);
  uVar3 = param_4;
  func_0x000107c4d540(param_4);
  func_0x000107c61180();
  func_0x000107c4aad8();
  uVar9 = param_1;
  func_0x000107c61170(uVar3);
  uVar3 = param_4;
  func_0x000107c4d540(param_4);
  func_0x000107c61180();
  func_0x000107c4b6f0();
  uVar10 = uVar9;
  func_0x000107c61170(uVar3);
  uVar3 = param_4;
  func_0x000107c5c488(param_4);
  func_0x000107c61180();
  func_0x000107c4aad8();
  uVar11 = uVar10;
  func_0x000107c61170(uVar3);
  func_0x000107c5c488(param_4);
  func_0x000107c61180();
  func_0x000107c4b6f0();
  func_0x000107c61170(param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  uVar3 = 0;
  if (param_7 != 0) {
    uVar3 = uStack_88;
  }
  lVar2 = -0x2000000000000000;
  if (param_7 != 0) {
    lVar2 = param_7;
  }
  puVar5 = PTR_PTR_1126b1e58;
  func_0x000107c61168();
  func_0x000107c61434(param_7);
  func_0x000107c5fadc(uVar3,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c31268(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c4c438(param_1,uVar9,uVar10,uVar11);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar8,puVar5);
    func_0x000107c61170(puVar5);
    lVar2 = lStack_90;
    (**(code **)(lVar6 + 0x20))(lVar7,lVar8,lStack_90);
    FUN_10272bb9c(lVar7);
    (**(code **)(lVar6 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 10271f684; end: 10271f743; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler presentPlaceOnSnapMapWithPlaceId:boundingBox:placeType:openSource:] */

/* WARNING: Possible PIC construction at 0x00010271f724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271f728) */

void FUN_10271f684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10271f3e4(param_3,param_2,param_4,param_5,param_6,uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10271f744; end: 10271f7a3; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler init] */

void FUN_10271f744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.PlaceProfileActionHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10271f770);
  (*pcVar1)();
}



/* Entry: 10271f7a4; end: 10271f83b; -[_TtC26VenueProfileImplementation25PlaceProfileActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010271f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271f7d4) */
/* WARNING: Removing unreachable block (ram,0x000102720138) */
/* WARNING: Removing unreachable block (ram,0x000102720144) */
/* WARNING: Removing unreachable block (ram,0x000102720140) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271f7a4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebab40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebab48));
  return;
}



/* Entry: 10271f83c; end: 10271f893;  */

bool FUN_10271f83c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10271f894; end: 10271fa4f;  */

ulong FUN_10271f894(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271f978);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271f97c);
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
  FUN_102720e58(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10271fa50);
  (*pcVar2)();
}



/* Entry: 10271fa50; end: 10271fa9f;  */

ulong FUN_10271fa50(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271f978);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271f97c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cdb58;
    func_0x000107c61168(PTR_PTR_1126cdb58);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126cdb58;
    func_0x000107c61168(PTR_PTR_1126cdb58);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102720e58(0,0x112ebac00,&PTR_PTR_1126cdb58);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10271fa50);
  (*pcVar2)();
}



/* Entry: 10271faa0; end: 10271fbd3;  */

/* WARNING: Possible PIC construction at 0x00010271fbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271fbb0) */

void FUN_10271faa0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    puVar2 = &UNK_110540570;
    func_0x000107c613fc(&UNK_110540570,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_6);
    puVar3 = &UNK_1105409f8;
    func_0x000107c613fc(&UNK_1105409f8,0x40,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(ulong *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    *(undefined8 *)(puVar3 + 0x38) = param_5;
    puVar2 = &UNK_110540a20;
    func_0x000107c613fc(&UNK_110540a20,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dad32d0;
    *(undefined **)(puVar2 + 0x18) = puVar3;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61174(param_5);
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad32d8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10271fbd4; end: 10271fbf3;  */

void FUN_10271fbd4(void)

{
  func_0x000107c61168(&PTR_PTR_11285d988);
  return;
}



/* Entry: 10271fbf4; end: 10271fc07;  */

void FUN_10271fbf4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110540550;
  if (lRam0000000112ebaba8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ebaba8 = param_1;
  }
  return;
}


