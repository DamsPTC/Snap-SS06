/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f9a0fc; end: 100f9a13b;  */

void FUN_100f9a0fc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9a13c,uVar1,0);
  return;
}



/* Entry: 100f9a13c; end: 100f9a177;  */

void FUN_100f9a13c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100f9a470();
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100f9a174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9a178; end: 100f9a1c3;  */

void FUN_100f9a178(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9a1c4,uVar1,0);
  return;
}



/* Entry: 100f9a1c4; end: 100f9a1ff;  */

void FUN_100f9a1c4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100f9a470();
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100f9a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9a200; end: 100f9a26b;  */

void FUN_100f9a200(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f9a26c;
  plVar2[9] = param_3;
  plVar2[10] = lVar3;
  plVar2[7] = param_1;
  plVar2[8] = param_2;
  lVar3 = 0;
  func_0x000107c5f804();
  plVar2[0xb] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xc] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f99eb8,0,0);
  return;
}



/* Entry: 100f9a26c; end: 100f9a2a7;  */

void FUN_100f9a26c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f9a2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f9a2a8; end: 100f9a2bf;  */

void FUN_100f9a2a8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9a2c0);
  return;
}



/* Entry: 100f9a2c0; end: 100f9a33b;  */

void FUN_100f9a2c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  if (0 < *(long *)(lVar1 + 0x78)) {
    *(long *)(lVar1 + 0x78) = *(long *)(lVar1 + 0x78) + -1;
                    /* WARNING: Could not recover jumptable at 0x000100f9a2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_100f9a6d0();
  func_0x000107c614f0(lVar1);
  func_0x000107c5fca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9a33c,lVar1,param_1);
  return;
}



/* Entry: 100f9a33c; end: 100f9a427;  */

void FUN_100f9a33c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f9a428;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x000107c61428(lVar5 + 0x80,unaff_x22 + 0x50,0x21,0);
  uVar4 = *(ulong *)(lVar5 + 0x80);
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(lVar5 + 0x80) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_100fb4b60(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(lVar5 + 0x80) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100fb4b60(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  *(long *)(uVar4 + uVar2 * 8 + 0x20) = lVar1;
  *(ulong *)(lVar5 + 0x80) = uVar4;
  func_0x000107c614a8(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f9a428; end: 100f9a467;  */

void FUN_100f9a428(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9a468,*(undefined8 *)(*unaff_x22 + 0x68),0);
  return;
}



/* Entry: 100f9a468; end: 100f9a46f;  */

void FUN_100f9a468(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100f9a46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9a470; end: 100f9a51f;  */

void FUN_100f9a470(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x80,auStack_38,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  if (*(long *)(lVar2 + 0x10) == 0) {
    if (*(long *)(unaff_x20 + 0x70) <= *(long *)(unaff_x20 + 0x78)) {
      func_0x0001048d9980(0xd000000000000038,0x800000010ef1d280);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a520);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x78) = *(long *)(unaff_x20 + 0x78) + 1;
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x80,auStack_50,0x21,0);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    FUN_100f9a614(0,1);
    func_0x000107c614a8(auStack_50);
    func_0x000107c61450(uVar3);
  }
  return;
}



/* Entry: 100f9a520; end: 100f9a563;  */

void FUN_100f9a520(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100f9a564; end: 100f9a56f;  */

void FUN_100f9a564(void)

{
  return;
}



/* Entry: 100f9a570; end: 100f9a613;  */

void FUN_100f9a570(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9a604);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9a608);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9a60c);
      (*pcVar5)();
    }
    uVar1 = lVar6 + 0x20 + param_1 * 8 + param_3 * 8;
    uVar2 = lVar6 + 0x20 + param_2 * 8;
    if (uVar1 != uVar2 || uVar2 + lVar4 * 8 <= uVar1) {
      func_0x000107c610b8(uVar1,uVar2,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9a610);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9a614);
  (*pcVar5)();
}



/* Entry: 100f9a614; end: 100f9a6cf;  */

void FUN_100f9a614(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9a6c0);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9a6c4);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9a6c8);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_100fb4b60();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100f9a570(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9a6d0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9a6cc);
  (*pcVar2)();
}



/* Entry: 100f9a6d0; end: 100f9a713;  */

void FUN_100f9a6d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d50800 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100f9a544(0xff);
  puVar2 = &UNK_10d9171d8;
  func_0x000107c61520(&UNK_10d9171d8,uVar1);
  puRam0000000112d50800 = puVar2;
  return;
}



/* Entry: 100f9a714; end: 100f9a9db;  */

void FUN_100f9a714(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a9cc);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a9d0);
    (*pcVar1)();
  }
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef1d300);
  func_0x000107c520f4(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a9d4);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  puVar5 = puVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar2 + 0x20) = puVar8;
    puVar5 = puVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = unaff_x20;
      func_0x000107c3f764(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar9 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar6);
      *(undefined **)(lVar2 + 0x28) = puVar9;
      uVar4 = 0;
      func_0x000100847984(0);
      lVar6 = lVar2;
      func_0x000107c5fc48(lVar2,uVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(lVar6);
      func_0x000107c5ba54(puVar3);
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a9dc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9a9d8);
  (*pcVar1)();
}



/* Entry: 100f9a9dc; end: 100f9aa03; -[_TtC29MemoriesQuickCutOrchestration36DirectLaunchTransitionViewController viewDidLoad] */

void FUN_100f9a9dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f9a714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f9aa04; end: 100f9aabb; -[_TtC29MemoriesQuickCutOrchestration36DirectLaunchTransitionViewController initWithNibName:bundle:] */

undefined1 * FUN_100f9aa04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 100f9aabc; end: 100f9ab3b; -[_TtC29MemoriesQuickCutOrchestration36DirectLaunchTransitionViewController initWithCoder:] */

undefined1 * FUN_100f9aabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100f9ab3c; end: 100f9ab8f;  */

void FUN_100f9ab3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f9ab90; end: 100f9ad57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f9ab90(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  func_0x0001000d224c(&lStack_70);
  lVar3 = lStack_70;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_70 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d50830);
    func_0x000107c6157c(uVar10);
    func_0x0001000c74f0(&lStack_70);
    func_0x000107c61574(uVar10);
    lVar4 = lStack_70;
    uVar12 = *(ulong *)(lStack_70 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      uVar13 = 0;
      puVar14 = (undefined1 *)(lStack_70 + 0x28);
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f9ad58);
          (*pcVar5)();
        }
        lVar11 = *(long *)(puVar14 + -8);
        uVar2 = *puVar14;
        lStack_70 = lVar11;
        uStack_68 = uVar2;
        FUN_100f9d71c(lVar11,uVar2);
        FUN_100f9ad58(&lStack_78,&lStack_70,lVar3);
        func_0x000100f9d754(lVar11,uVar2);
        lVar11 = lStack_78;
        if (lStack_78 != 0) {
          puVar7 = puVar8;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
             (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar6 = puVar8;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_100fb4c60(0,puVar6 + 1,1,puVar8);
          }
          uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar9 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_100fb4c60(puVar8,uVar1 + 1,1,puVar7);
            uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
          *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar11;
        }
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 0x10;
      } while (uVar12 != uVar13);
    }
    func_0x000107c615e8(lVar3);
    func_0x000107c6142c(lVar4);
  }
  return puVar8;
}



/* Entry: 100f9ad58; end: 100f9b08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9ad58(undefined8 *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar6 = *param_2;
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar8 = ((undefined8 *)(lVar6 + _DAT_112fda128))[1];
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar6 + _DAT_112fda128);
      *(undefined8 *)(lVar3 + 0x28) = uVar8;
      func_0x000107c61434();
      lVar6 = lVar3;
      func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar3);
      uVar4 = param_3;
      func_0x000107c4310c();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (uVar4 != 0) {
        uVar8 = 0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        uVar5 = uVar4;
        func_0x000107c5fc54(uVar4,uVar8);
        func_0x000107c61170(uVar4);
        if (uVar5 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar5 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar5) {
            uVar4 = uVar5;
          }
          func_0x000107c60480();
        }
        if (uVar4 == 0) goto LAB_100f9b038;
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9b088);
            (*pcVar2)();
          }
          uVar8 = *(undefined8 *)(uVar5 + 0x20);
          func_0x000107c615f0(uVar8);
        }
        else {
          uVar8 = 0;
          FUN_100fb0ba0(0,uVar5);
        }
        func_0x000107c6142c(uVar5);
        func_0x000107c430dc();
        func_0x000107c61180();
        if (param_3 != 0) {
          puVar7 = PTR_PTR_1126b3060;
          func_0x000107c61168();
          func_0x000107c43c60();
          func_0x000107c61180();
          func_0x000107c615e8(param_3);
          goto LAB_100f9af7c;
        }
        func_0x000107c615e8(uVar8);
      }
    }
    else {
      func_0x000107c430dc(param_3,param_3,lVar6);
      func_0x000107c61180();
      if (param_3 != 0) {
        puVar7 = PTR_PTR_1126b3060;
        func_0x000107c61168();
        func_0x000107c43c60();
        func_0x000107c61180();
        func_0x000107c615e8(param_3);
        goto LAB_100f9b040;
      }
    }
  }
  else {
    if (bVar1 != 2) {
      puVar7 = PTR_PTR_1126b3060;
      func_0x000107c61168();
      func_0x000107c3f1c0();
      func_0x000107c61180();
      goto LAB_100f9b040;
    }
    func_0x000107c430f8(param_3,param_3,lVar6);
    func_0x000107c61180();
    if (param_3 != 0) {
      uVar8 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar5 = param_3;
      func_0x000107c5fc54(param_3,uVar8);
      func_0x000107c61170(param_3);
      if (uVar5 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar4 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9b08c);
            (*pcVar2)();
          }
          uVar8 = *(undefined8 *)(uVar5 + 0x20);
          func_0x000107c615f0(uVar8);
        }
        else {
          uVar8 = 0;
          FUN_100fb0ba0(0,uVar5);
        }
        func_0x000107c6142c(uVar5);
        puVar7 = PTR_PTR_1126b3060;
        func_0x000107c61168();
        func_0x000107c43c60();
        func_0x000107c61180();
LAB_100f9af7c:
        func_0x000107c615e8(uVar8);
        goto LAB_100f9b040;
      }
LAB_100f9b038:
      func_0x000107c6142c(uVar5);
    }
  }
  puVar7 = (undefined *)0x0;
LAB_100f9b040:
  *param_1 = puVar7;
  return;
}



/* Entry: 100f9b08c; end: 100f9b0eb; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter init] */

void FUN_100f9b08c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutOrchestration.MemoriesPickerPresenter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9b0b8);
  (*pcVar1)();
}



/* Entry: 100f9b0ec; end: 100f9b1c3; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f9b0ec(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50830));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50838));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50840));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50848));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50850));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50858));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d50868));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50870));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d50878));
  FUN_100c9dd74(param_1 + _DAT_112d50880);
  param_1 = param_1 + _DAT_112d50888;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f9b1c4; end: 100f9b1e3;  */

void FUN_100f9b1c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a6438);
  return;
}



/* Entry: 100f9b1e4; end: 100f9b2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9b1e4(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + _DAT_112d50830);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_100f9d78c,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100f9b2d4; end: 100f9b2fb; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter onBackPressed] */

void FUN_100f9b2d4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100f9b250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f9b2fc; end: 100f9b427; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter memoriesPickerV2DidDismiss] */

/* WARNING: Possible PIC construction at 0x000100f9b338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f9b354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f9b33c) */
/* WARNING: Removing unreachable block (ram,0x000100f9b358) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9b2fc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f9b428; end: 100f9b52f;  */

void FUN_100f9b428(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___sytN_11034f1b0;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    func_0x000107c5fd50(lVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
  }
  puVar2 = &UNK_1103713d0;
  func_0x000107c613fc(&UNK_1103713d0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  puVar3 = &UNK_1103713f8;
  func_0x000107c613fc(&UNK_1103713f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c61434(param_3);
  lVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d9172c0,puVar3,puVar1 + 8);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(puVar3);
  *param_1 = lVar4;
  return;
}



/* Entry: 100f9b530; end: 100f9b547;  */

void FUN_100f9b530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b548,0,0);
  return;
}



/* Entry: 100f9b548; end: 100f9b633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9b548(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x70);
    if (*(char *)(unaff_x22 + 0x70) == '\x01') {
      plVar1 = (long *)0x100;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_100f9b634;
      plVar1[0x10] = *(long *)(unaff_x22 + 0x40);
      plVar1[0x11] = lVar3;
      func_0x000107c614f0();
      plVar1[0x12] = lVar3;
      pcVar2 = FUN_100f9baf0;
    }
    else {
      plVar1 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_100f9b684;
      plVar1[5] = *(long *)(unaff_x22 + 0x40);
      plVar1[6] = lVar3;
      func_0x000107c614f0();
      plVar1[7] = lVar3;
      pcVar2 = FUN_100f9c35c;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9b5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9b634; end: 100f9b683;  */

void FUN_100f9b634(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
  *(undefined8 *)(lVar1 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b6d4,0,0);
  return;
}



/* Entry: 100f9b684; end: 100f9b6d3;  */

void FUN_100f9b684(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
  *(undefined8 *)(lVar1 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b6d4,0,0);
  return;
}



/* Entry: 100f9b6d4; end: 100f9b81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9b6d4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    uVar4 = *(ulong *)(unaff_x22 + 0x40);
    if (uVar4 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if ((uVar2 == 0) || (*(long *)(*(long *)(unaff_x22 + 0x60) + 0x10) != 0)) {
      uVar3 = 0;
      func_0x000107c5fcec();
      uVar6 = uVar3;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b81c,uVar3,uVar6);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c6142c();
    func_0x0001000d224c(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    uVar3 = uVar6;
    func_0x000107c614f0(uVar6);
    (**(code **)(lVar1 + 0xc0))(0,0xd00000000000004b,0x800000010ef1d330,uVar3,lVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar6);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c61170(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9b81c; end: 100f9b86b;  */

void FUN_100f9b81c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  FUN_100f9b89c(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b86c,0,0);
  return;
}



/* Entry: 100f9b86c; end: 100f9b89b;  */

void FUN_100f9b86c(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100f9b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9b89c; end: 100f9b947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9b89c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  ulong uStack_50;
  
  uVar1 = param_1;
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d50830);
    uStack_50 = param_1;
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_100f9d410,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    lVar2 = unaff_x20 + _DAT_112d50880;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_100fc23d8(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 100f9b948; end: 100f9b99f; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter onItemsSelectedWithItems:] */

void FUN_100f9b948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100f9b9b0(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  func_0x000100f9b380(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 100f9b9a0; end: 100f9b9a3; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter onItemClickedWithItem:thumbnailCell:] */

void FUN_100f9b9a0(void)

{
  return;
}



/* Entry: 100f9b9a4; end: 100f9b9a7; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_100f9b9a4(void)

{
  return;
}



/* Entry: 100f9b9a8; end: 100f9b9af; -[_TtC29MemoriesQuickCutOrchestration23MemoriesPickerPresenter onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

void FUN_100f9b9a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 100f9b9b0; end: 100f9ba0b;  */

void FUN_100f9b9b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4c1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c66e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4c1d0 = puVar1;
  return;
}



/* Entry: 100f9ba0c; end: 100f9ba6f;  */

void FUN_100f9ba0c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f9ba70;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9b548,0,0);
  return;
}



/* Entry: 100f9ba70; end: 100f9baef;  */

void FUN_100f9ba70(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f9baa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f9baf0; end: 100f9bda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9baf0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x80);
  uVar16 = uVar15 & 0xffffffffffffff8;
  if (uVar15 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar16 + 0x10);
    uVar11 = uVar15;
  }
  else {
    uVar12 = uVar16;
    if (0x7fffffffffffffff < uVar15) {
      uVar12 = uVar15;
    }
    func_0x000107c60480();
    uVar11 = *(ulong *)(unaff_x22 + 0x80);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        if ((uVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9bd8c);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar11 + 0x20 + uVar5 * 8);
          func_0x000107c61174();
          lVar10 = param_2;
        }
        else {
          lVar10 = *(long *)(unaff_x22 + 0x80);
          uVar3 = uVar5;
          FUN_100fb0ef8();
        }
        uVar1 = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9bd88);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c5d0f0();
        param_2 = lVar10;
        if ((int)uVar4 == 0) break;
LAB_100f9bb50:
        func_0x000107c61170(uVar3);
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar12) goto LAB_100f9bc74;
      }
      uVar4 = uVar3;
      func_0x000107c4cc8c();
      func_0x000107c61180();
      param_2 = lVar10;
      if (uVar4 == 0) goto LAB_100f9bb50;
      uVar5 = uVar4;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      func_0x000107c5faec();
      param_2 = lVar10;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        param_2 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1,puVar8);
      }
      uVar5 = *(ulong *)(puVar7 + 0x10);
      lVar14 = uVar5 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_2 = lVar14;
        func_0x0001000d182c(puVar8,lVar14,1,puVar7);
      }
      *(long *)(puVar8 + 0x10) = lVar14;
      *(ulong *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar4;
      *(long *)(puVar8 + uVar5 * 0x10 + 0x28) = lVar10;
      *(undefined **)(unaff_x22 + 0x98) = puVar8;
      uVar5 = uVar1;
    } while (uVar1 != uVar12);
  }
LAB_100f9bc74:
  puVar6 = &UNK_110371420;
  func_0x000107c613fc(&UNK_110371420,0x18,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar6;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100fac7ac();
  *(undefined **)(puVar6 + 0x10) = puVar7;
  if (*(long *)(puVar8 + 0x10) == 0) {
    func_0x000107c6142c();
    func_0x000107c5fd5c();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100f9bd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
    plVar13 = *(long **)(*(long *)(unaff_x22 + 0x88) + _DAT_112d50878);
    plVar9 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100f9c0e0;
    lVar10 = unaff_x22 + 0x78;
  }
  else {
    plVar13 = *(long **)(*(long *)(unaff_x22 + 0x88) + _DAT_112d50848);
    plVar9 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100f9bda4;
    lVar10 = unaff_x22 + 0x10;
  }
  plVar9[5] = lVar10;
  plVar9[6] = (long)plVar13;
  lVar14 = *(long *)(*plVar13 + 0x50);
  plVar9[7] = lVar14;
  lVar10 = 0;
  __sSqMa(0,lVar14);
  plVar9[8] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[9] = lVar10;
  uVar15 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[10] = uVar15;
  lVar10 = *(long *)(lVar14 + -8);
  plVar9[0xb] = lVar10;
  uVar15 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xc] = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100f9bda4; end: 100f9be1b;  */

void FUN_100f9bda4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0xb0) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100f9be1c;
                    /* WARNING: Could not recover jumptable at 0x000100f9be18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fa336c(*(undefined8 *)(lVar2 + 0x98),lVar2 + 0x10);
  return;
}



/* Entry: 100f9be1c; end: 100f9be93;  */

void FUN_100f9be1c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x000107c6142c(uVar2);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xc0) = param_1;
    pcVar1 = FUN_100f9be94;
  }
  else {
    pcVar1 = FUN_100f9bf3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100f9be94; end: 100f9bf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9be94(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(ulong *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  func_0x000107c6142c();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100f9beec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  plVar5 = *(long **)(*(long *)(unaff_x22 + 0x88) + _DAT_112d50878);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f9c0e0;
  plVar2[5] = unaff_x22 + 0x78;
  plVar2[6] = (long)plVar5;
  lVar6 = *(long *)(*plVar5 + 0x50);
  plVar2[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar1;
  lVar3 = *(long *)(lVar6 + -8);
  plVar2[0xb] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100f9bf3c; end: 100f9c0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9bf3c(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  uVar4 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x0001000d224c(unaff_x22 + 0x50);
    uVar4 = *(ulong *)(unaff_x22 + 0x50);
    lVar3 = *(long *)(unaff_x22 + 0x58);
    uVar1 = uVar4;
    func_0x000107c614f0(uVar4);
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0xd000000000000037,0x800000010ef1d380);
    func_0x000107c614cc(uVar5,unaff_x22 + 0x70,unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x40),uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    (**(code **)(lVar3 + 0xc0))(0,0,0xe000000000000000,uVar1,lVar3);
    func_0x000107c614ac(uVar5);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c615e8();
    func_0x000107c5fd5c();
    if ((uVar4 & 1) == 0) {
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x88) + _DAT_112d50878);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100f9c0e0;
      plVar2[5] = unaff_x22 + 0x78;
      plVar2[6] = (long)plVar7;
      lVar8 = *(long *)(*plVar7 + 0x50);
      plVar2[7] = lVar8;
      lVar3 = 0;
      __sSqMa(0,lVar8);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar8 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  func_0x000107c61574(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100f9c084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 100f9c0e0; end: 100f9c127;  */

void FUN_100f9c0e0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9c128,0,0);
  return;
}



/* Entry: 100f9c128; end: 100f9c203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9c128(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x88) + _DAT_112d50870);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar7;
  puVar4 = &UNK_110371448;
  func_0x000107c613fc(&UNK_110371448,0x30,7);
  *(undefined **)(unaff_x22 + 0xe0) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  plVar5 = (long *)0x50;
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f9c204;
                    /* WARNING: Could not recover jumptable at 0x000100f9c200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x100fadae4)(uVar1,FUN_100f9d404,puVar4);
  return;
}



/* Entry: 100f9c204; end: 100f9c25b;  */

void FUN_100f9c204(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(lVar2 + 0xf0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9c25c,0,0);
  return;
}



/* Entry: 100f9c25c; end: 100f9c317;  */

void FUN_100f9c25c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar5 = *(undefined **)(unaff_x22 + 0xf0);
  if (puVar5 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x0001000d224c(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    uVar3 = uVar1;
    func_0x000107c614f0(uVar1);
    (**(code **)(lVar2 + 0xc0))(0,0xd00000000000003f,0x800000010ef1d3c0,uVar3,lVar2);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c61574(uVar6);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
    func_0x000107c61574(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9c314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5);
  return;
}



/* Entry: 100f9c318; end: 100f9c35b;  */

void FUN_100f9c318(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9c35c,0,0);
  return;
}



/* Entry: 100f9c35c; end: 100f9c597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9c35c(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long unaff_x22;
  ulong uVar16;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100f9c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  uVar12 = *(ulong *)(unaff_x22 + 0x28);
  uVar16 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar13 = *(ulong *)(uVar16 + 0x10);
    uVar11 = uVar12;
  }
  else {
    uVar13 = uVar16;
    if (0x7fffffffffffffff < uVar12) {
      uVar13 = uVar12;
    }
    func_0x000107c60480();
    uVar11 = *(ulong *)(unaff_x22 + 0x28);
  }
  *(undefined **)(unaff_x22 + 0x40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar5 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9c580);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar11 + 0x20 + uVar5 * 8);
          func_0x000107c61174();
          lVar10 = param_2;
        }
        else {
          lVar10 = *(long *)(unaff_x22 + 0x28);
          uVar3 = uVar5;
          FUN_100fb0ef8();
        }
        uVar1 = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f9c57c);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c5d0f0();
        param_2 = lVar10;
        if ((int)uVar4 == 0) break;
LAB_100f9c3f8:
        func_0x000107c61170(uVar3);
        uVar5 = uVar5 + 1;
        if (uVar1 == uVar13) goto LAB_100f9c51c;
      }
      uVar4 = uVar3;
      func_0x000107c4cc8c();
      func_0x000107c61180();
      param_2 = lVar10;
      if (uVar4 == 0) goto LAB_100f9c3f8;
      uVar5 = uVar4;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      func_0x000107c5faec();
      param_2 = lVar10;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        param_2 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1,puVar8);
      }
      uVar5 = *(ulong *)(puVar7 + 0x10);
      lVar15 = uVar5 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_2 = lVar15;
        func_0x0001000d182c(puVar8,lVar15,1,puVar7);
      }
      *(long *)(puVar8 + 0x10) = lVar15;
      *(ulong *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar4;
      *(long *)(puVar8 + uVar5 * 0x10 + 0x28) = lVar10;
      *(undefined **)(unaff_x22 + 0x40) = puVar8;
      uVar5 = uVar1;
    } while (uVar1 != uVar13);
  }
LAB_100f9c51c:
  plVar14 = *(long **)(*(long *)(unaff_x22 + 0x30) + _DAT_112d50878);
  plVar9 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100f9c598;
  plVar9[5] = unaff_x22 + 0x20;
  plVar9[6] = (long)plVar14;
  lVar15 = *(long *)(*plVar14 + 0x50);
  plVar9[7] = lVar15;
  lVar10 = 0;
  __sSqMa(0,lVar15);
  plVar9[8] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar9[9] = lVar10;
  uVar12 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[10] = uVar12;
  lVar10 = *(long *)(lVar15 + -8);
  plVar9[0xb] = lVar10;
  uVar12 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xc] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100f9c598; end: 100f9c5df;  */

void FUN_100f9c598(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9c5e0,0,0);
  return;
}



/* Entry: 100f9c5e0; end: 100f9c713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9c5e0(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  func_0x000107c5fd5c();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  if ((param_1 & 1) != 0) {
    func_0x000107c6142c(uVar4);
    func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100f9c648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112d50840);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112d50870);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  puVar2 = &UNK_110371470;
  func_0x000107c613fc(&UNK_110371470,0x38,7);
  *(undefined **)(unaff_x22 + 0x60) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  plVar3 = (long *)0x50;
  func_0x000107c6157c(uVar6);
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f9c714;
                    /* WARNING: Could not recover jumptable at 0x000100f9c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x100fadae4)(uVar5,FUN_100f9d468,puVar2);
  return;
}



/* Entry: 100f9c714; end: 100f9c76b;  */

void FUN_100f9c714(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9c76c,0,0);
  return;
}



/* Entry: 100f9c76c; end: 100f9c80f;  */

void FUN_100f9c76c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  
  puVar5 = *(undefined **)(unaff_x22 + 0x70);
  if (puVar5 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    uVar4 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(lVar3 + 0xc0))(0,0xd00000000000003f,0x800000010ef1d3c0,uVar4,lVar3);
    func_0x000107c615e8(uVar2);
    func_0x000107c615e8(uVar1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5);
  return;
}



/* Entry: 100f9c810; end: 100f9d403;  */

void FUN_100f9c810(undefined8 *param_1,undefined *param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_e8;
  ulong uStack_90;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar15 = param_2;
    }
    func_0x000107c60480();
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    uStack_90 = (ulong)param_2 & 0xffffffffffffff8;
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_90 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f9cca0);
            (*pcVar4)();
          }
          puVar6 = *(undefined **)(param_2 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = param_3;
        }
        else {
          puVar6 = puVar11;
          puVar12 = param_2;
          FUN_100fb0ef8();
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f9cc9c);
          (*pcVar4)();
        }
        puVar10 = puVar6;
        func_0x000107c5d0f0();
        if ((int)puVar10 != 0) break;
        puVar10 = puVar6;
        func_0x000107c4cc8c();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
          func_0x0001000d224c(&uStack_78);
          lVar14 = lStack_70;
          uVar3 = uStack_78;
          uVar5 = uStack_78;
          func_0x000107c614f0(uStack_78);
          param_3 = (undefined *)0xd000000000000039;
          (**(code **)(lVar14 + 0xc0))(0,0xd000000000000039,0x800000010ef1d450,uVar5,lVar14);
          func_0x000107c615e8(uVar3);
        }
        else {
          puVar9 = puVar10;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          puVar10 = puVar9;
          func_0x000107c5faec();
          func_0x000107c61170(puVar9);
          func_0x000107c61428(param_4 + 0x10,&uStack_78,0x20,0);
          lVar14 = *(long *)(param_4 + 0x10);
          if (*(long *)(lVar14 + 0x10) != 0) {
            func_0x000107c61434(lVar14);
            puVar9 = puVar10;
            param_3 = puVar12;
            func_0x000100029284();
            if (((ulong)param_3 & 1) != 0) {
              puVar10 = *(undefined **)(*(long *)(lVar14 + 0x38) + (long)puVar9 * 8);
              func_0x000107c61174();
              func_0x000107c614a8(&uStack_78);
              func_0x000107c6142c(puVar12);
              func_0x000107c61170(puVar6);
              func_0x000107c6142c(lVar14);
              uVar13 = 0;
              goto LAB_100f9cc04;
            }
            func_0x000107c6142c(lVar14);
          }
          func_0x000107c614a8(&uStack_78);
          func_0x0001000d224c(&uStack_78);
          lVar14 = lStack_70;
          uVar3 = uStack_78;
          uVar5 = uStack_78;
          func_0x000107c614f0(uStack_78);
          func_0x000107c602fc(0x39);
          func_0x000107c5fb78(0xd000000000000022,0x800000010ef1d400);
          func_0x000107c5fb78(puVar10,puVar12);
          func_0x000107c5fb78(0xd000000000000015,0x800000010ef1d430);
          param_3 = (undefined *)0x0;
          (**(code **)(lVar14 + 0xc0))(0,0,0xe000000000000000,uVar5,lVar14);
          func_0x000107c615e8(uVar3);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c6142c(puVar12);
        }
LAB_100f9c8f8:
        func_0x000107c61170(puVar6);
LAB_100f9c900:
        puVar11 = puVar11 + 1;
        if (puVar1 == puVar15) goto LAB_100f9ccc8;
      }
      param_3 = puVar12;
      if ((int)puVar10 != 1) goto LAB_100f9c8f8;
      puVar10 = puVar6;
      func_0x000107c4c9b0();
      func_0x000107c61180();
      param_3 = puVar12;
      if (puVar10 == (undefined *)0x0) goto LAB_100f9c8f8;
      puVar9 = puVar10;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puVar9;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar9 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170(puVar10);
      puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      lVar14 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x18) = 2;
      *(undefined8 *)(lVar14 + 0x10) = 1;
      *(undefined **)(lVar14 + 0x20) = puVar9;
      *(undefined **)(lVar14 + 0x28) = puVar12;
      lVar8 = lVar14;
      param_3 = PTR___sSSN_11034da80;
      func_0x000107c5fc48();
      func_0x000107c61574(lVar14);
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      puVar10 = puVar7;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      if (puVar10 == (undefined *)0x0) goto LAB_100f9c900;
      uVar13 = 3;
LAB_100f9cc04:
      puVar11 = puStack_e8;
      func_0x000107c61558();
      if (((ulong)puVar11 & 1) == 0) {
        param_3 = (undefined *)(*(long *)(puStack_e8 + 0x10) + 1);
        puStack_e8 = (undefined *)0x0;
        FUN_100fb4c74(0,param_3,1);
      }
      uVar2 = *(ulong *)(puStack_e8 + 0x10);
      puVar11 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
        param_3 = puVar11;
        FUN_100fb4c74(puVar6,puVar11,1,puStack_e8);
        puStack_e8 = puVar6;
      }
      *(undefined **)(puStack_e8 + 0x10) = puVar11;
      *(undefined **)(puStack_e8 + uVar2 * 0x10 + 0x20) = puVar10;
      puStack_e8[uVar2 * 0x10 + 0x28] = uVar13;
      puVar11 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_100f9ccc8:
  *param_1 = puStack_e8;
  return;
}



/* Entry: 100f9d404; end: 100f9d40f;  */

void FUN_100f9d404(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 uVar15;
  long lVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined *puStack_e8;
  ulong uStack_90;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  puVar10 = *(undefined **)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar17 = puVar3;
    }
    func_0x000107c60480();
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar17 != (undefined *)0x0) {
    uStack_90 = (ulong)puVar3 & 0xffffffffffffff8;
    puVar13 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar3 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_90 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100f9cca0);
            (*pcVar6)();
          }
          puVar8 = *(undefined **)(puVar3 + (long)puVar13 * 8 + 0x20);
          func_0x000107c61174();
          puVar14 = puVar10;
        }
        else {
          puVar8 = puVar13;
          puVar14 = puVar3;
          FUN_100fb0ef8();
        }
        puVar1 = puVar13 + 1;
        if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100f9cc9c);
          (*pcVar6)();
        }
        puVar12 = puVar8;
        func_0x000107c5d0f0();
        if ((int)puVar12 != 0) break;
        puVar10 = puVar8;
        func_0x000107c4cc8c();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
          func_0x0001000d224c(&uStack_78);
          lVar16 = lStack_70;
          uVar5 = uStack_78;
          uVar7 = uStack_78;
          func_0x000107c614f0(uStack_78);
          puVar10 = (undefined *)0xd000000000000039;
          (**(code **)(lVar16 + 0xc0))(0,0xd000000000000039,0x800000010ef1d450,uVar7,lVar16);
          func_0x000107c615e8(uVar5);
        }
        else {
          puVar12 = puVar10;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          puVar11 = puVar12;
          func_0x000107c5faec();
          func_0x000107c61170(puVar12);
          func_0x000107c61428(lVar4 + 0x10,&uStack_78,0x20,0);
          lVar16 = *(long *)(lVar4 + 0x10);
          if (*(long *)(lVar16 + 0x10) != 0) {
            func_0x000107c61434(lVar16);
            puVar12 = puVar11;
            puVar10 = puVar14;
            func_0x000100029284();
            if (((ulong)puVar10 & 1) != 0) {
              puVar12 = *(undefined **)(*(long *)(lVar16 + 0x38) + (long)puVar12 * 8);
              func_0x000107c61174();
              func_0x000107c614a8(&uStack_78);
              func_0x000107c6142c(puVar14);
              func_0x000107c61170(puVar8);
              func_0x000107c6142c(lVar16);
              uVar15 = 0;
              goto LAB_100f9cc04;
            }
            func_0x000107c6142c(lVar16);
          }
          func_0x000107c614a8(&uStack_78);
          func_0x0001000d224c(&uStack_78);
          lVar16 = lStack_70;
          uVar5 = uStack_78;
          uVar7 = uStack_78;
          func_0x000107c614f0(uStack_78);
          func_0x000107c602fc(0x39);
          func_0x000107c5fb78(0xd000000000000022,0x800000010ef1d400);
          func_0x000107c5fb78(puVar11,puVar14);
          func_0x000107c5fb78(0xd000000000000015,0x800000010ef1d430);
          puVar10 = (undefined *)0x0;
          (**(code **)(lVar16 + 0xc0))(0,0,0xe000000000000000,uVar7,lVar16);
          func_0x000107c615e8(uVar5);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c6142c(puVar14);
        }
LAB_100f9c8f8:
        func_0x000107c61170(puVar8);
LAB_100f9c900:
        puVar13 = puVar13 + 1;
        if (puVar1 == puVar17) goto LAB_100f9ccc8;
      }
      puVar10 = puVar14;
      if ((int)puVar12 != 1) goto LAB_100f9c8f8;
      puVar12 = puVar8;
      func_0x000107c4c9b0();
      func_0x000107c61180();
      puVar10 = puVar14;
      if (puVar12 == (undefined *)0x0) goto LAB_100f9c8f8;
      puVar10 = puVar12;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = puVar10;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puVar12;
      func_0x000107c5faec();
      func_0x000107c61170(puVar12);
      puVar11 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      lVar16 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar16 + 0x18) = 2;
      *(undefined8 *)(lVar16 + 0x10) = 1;
      *(undefined **)(lVar16 + 0x20) = puVar10;
      *(undefined **)(lVar16 + 0x28) = puVar14;
      lVar9 = lVar16;
      puVar10 = PTR___sSSN_11034da80;
      func_0x000107c5fc48();
      func_0x000107c61574(lVar16);
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      puVar12 = puVar11;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar8);
      if (puVar12 == (undefined *)0x0) goto LAB_100f9c900;
      uVar15 = 3;
LAB_100f9cc04:
      puVar13 = puStack_e8;
      func_0x000107c61558();
      if (((ulong)puVar13 & 1) == 0) {
        puVar10 = (undefined *)(*(long *)(puStack_e8 + 0x10) + 1);
        puStack_e8 = (undefined *)0x0;
        FUN_100fb4c74(0,puVar10,1);
      }
      uVar2 = *(ulong *)(puStack_e8 + 0x10);
      puVar13 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
        puVar10 = puVar13;
        FUN_100fb4c74(puVar8,puVar13,1,puStack_e8);
        puStack_e8 = puVar8;
      }
      *(undefined **)(puStack_e8 + 0x10) = puVar13;
      *(undefined **)(puStack_e8 + uVar2 * 0x10 + 0x20) = puVar12;
      puStack_e8[uVar2 * 0x10 + 0x28] = uVar15;
      puVar13 = puVar1;
    } while (puVar1 != puVar17);
  }
LAB_100f9ccc8:
  *param_1 = puStack_e8;
  return;
}



/* Entry: 100f9d410; end: 100f9d423;  */

void FUN_100f9d410(void)

{
  FUN_100f9d424();
  return;
}



/* Entry: 100f9d424; end: 100f9d467;  */

void FUN_100f9d424(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 100f9d468; end: 100f9d477;  */

/* WARNING: Removing unreachable block (ram,0x000100f9d3f4) */

void FUN_100f9d468(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined1 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_78;
  long lStack_70;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar13 = *(undefined **)(unaff_x20 + 0x18);
  puVar2 = *(undefined **)(unaff_x20 + 0x20);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(lVar4 + 0x10) != 0) &&
     (func_0x0001000d224c(&puStack_78), puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8,
     puStack_78 != (undefined *)0x0)) {
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(lVar4);
    puVar17 = puStack_78;
    func_0x000107c4310c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_78);
    func_0x000107c61170(lVar4);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar17 != (undefined *)0x0) {
      puVar13 = (undefined *)0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      puVar5 = puVar17;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar17);
    }
  }
  puVar17 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar14 = *(undefined **)(puVar17 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar14 = puVar5;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (puVar14 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f9cef0);
            (*pcVar3)();
          }
          puVar16 = *(undefined **)(puVar5 + (long)puVar10 * 8 + 0x20);
          func_0x000107c615f0(puVar16);
          puVar12 = puVar13;
        }
        else {
          puVar16 = puVar10;
          puVar12 = puVar5;
          FUN_100fb0ba0();
        }
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f9ceec);
          (*pcVar3)();
        }
        puVar18 = puVar10 + 1;
        puVar6 = puVar16;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) break;
        puVar10 = puVar6;
        func_0x000107c5faec();
        puVar13 = puVar12;
        func_0x000107c61170(puVar6);
        puVar6 = puVar11;
        func_0x000107c61558();
        puVar7 = puVar11;
        if (((ulong)puVar6 & 1) == 0) {
          puVar13 = (undefined *)(*(long *)(puVar11 + 0x10) + 1);
          puVar7 = (undefined *)0x0;
          FUN_100fb4d7c(0,puVar13,1,puVar11);
        }
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puVar6 = (undefined *)(uVar1 + 1);
        puVar11 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          puVar13 = puVar6;
          FUN_100fb4d7c(puVar11,puVar6,1,puVar7);
        }
        *(undefined **)(puVar11 + 0x10) = puVar6;
        *(undefined **)(puVar11 + uVar1 * 0x18 + 0x20) = puVar10;
        *(undefined **)(puVar11 + uVar1 * 0x18 + 0x28) = puVar12;
        *(undefined **)(puVar11 + uVar1 * 0x18 + 0x30) = puVar16;
        puVar10 = puVar18;
        if (puVar18 == puVar14) goto LAB_100f9cf0c;
      }
      func_0x000107c615e8(puVar16);
      puVar13 = puVar12;
      puVar10 = puVar10 + 1;
    } while (puVar18 != puVar14);
  }
LAB_100f9cf0c:
  func_0x000107c6142c(puVar5);
  puVar13 = *(undefined **)(puVar11 + 0x10);
  puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d508b8,&UNK_10d9172e0);
    func_0x000107c60498();
    puStack_78 = puVar13;
  }
  puVar13 = (undefined *)0x1;
  FUN_100f9d478(puVar11,1,&puStack_78);
  func_0x000107c6142c(puVar11);
  puVar5 = puStack_78;
  puVar17 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar14 = *(undefined **)(puVar17 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar14 = puVar2;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (puVar14 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f9d3a8);
            (*pcVar3)();
          }
          puVar16 = *(undefined **)(puVar2 + (long)puVar10 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = puVar13;
        }
        else {
          puVar16 = puVar10;
          puVar12 = puVar2;
          FUN_100fb0ef8();
        }
        puVar6 = puVar10 + 1;
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f9d3a4);
          (*pcVar3)();
        }
        puVar18 = puVar16;
        func_0x000107c5d0f0();
        if ((int)puVar18 != 0) break;
        puVar13 = puVar16;
        func_0x000107c4cc8c();
        func_0x000107c61180();
        if (puVar13 == (undefined *)0x0) {
          func_0x0001000d224c(&puStack_78);
          lVar4 = lStack_70;
          puVar12 = puStack_78;
          puVar18 = puStack_78;
          func_0x000107c614f0(puStack_78);
          puVar13 = (undefined *)0xd000000000000039;
          (**(code **)(lVar4 + 0xc0))(0,0xd000000000000039,0x800000010ef1d450,puVar18,lVar4);
          func_0x000107c615e8(puVar12);
          goto LAB_100f9d02c;
        }
        puVar18 = puVar13;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        puVar7 = puVar18;
        func_0x000107c5faec();
        func_0x000107c61170(puVar18);
        if (*(long *)(puVar5 + 0x10) != 0) {
          func_0x000107c6157c(puVar5);
          puVar18 = puVar7;
          puVar13 = puVar12;
          func_0x000100029284();
          if (((ulong)puVar13 & 1) != 0) {
            puVar18 = *(undefined **)(*(long *)(puVar5 + 0x38) + (long)puVar18 * 8);
            func_0x000107c615f0(puVar18);
            func_0x000107c61574(puVar5);
            func_0x000107c6142c(puVar12);
            func_0x000107c61170(puVar16);
            uVar15 = 1;
            goto LAB_100f9d314;
          }
          func_0x000107c61574(puVar5);
        }
        func_0x0001000d224c(&puStack_78);
        lVar4 = lStack_70;
        puVar18 = puStack_78;
        puVar9 = puStack_78;
        func_0x000107c614f0(puStack_78);
        func_0x000107c602fc(0x36);
        func_0x000107c5fb78(0xd000000000000022,0x800000010ef1d400);
        func_0x000107c5fb78(puVar7,puVar12);
        func_0x000107c5fb78(0xd000000000000012,0x800000010ef1d490);
        puVar13 = (undefined *)0x0;
        (**(code **)(lVar4 + 0xc0))(0,0,0xe000000000000000,puVar9,lVar4);
        func_0x000107c615e8(puVar18);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(puVar16);
LAB_100f9d034:
        puVar10 = puVar10 + 1;
        if (puVar6 == puVar14) goto LAB_100f9d3c4;
      }
      puVar13 = puVar12;
      if ((int)puVar18 != 1) {
LAB_100f9d02c:
        func_0x000107c61170(puVar16);
        goto LAB_100f9d034;
      }
      puVar18 = puVar16;
      func_0x000107c4c9b0();
      func_0x000107c61180();
      puVar13 = puVar12;
      if (puVar18 == (undefined *)0x0) goto LAB_100f9d02c;
      puVar13 = puVar18;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar18);
      puVar18 = puVar13;
      func_0x000107c4a77c();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar13 = puVar18;
      func_0x000107c5faec();
      func_0x000107c61170(puVar18);
      puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined **)(lVar4 + 0x20) = puVar13;
      *(undefined **)(lVar4 + 0x28) = puVar12;
      lVar8 = lVar4;
      puVar13 = PTR___sSSN_11034da80;
      func_0x000107c5fc48();
      func_0x000107c61574(lVar4);
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      puVar18 = puVar7;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar16);
      if (puVar18 == (undefined *)0x0) goto LAB_100f9d034;
      uVar15 = 3;
LAB_100f9d314:
      puVar10 = puVar11;
      func_0x000107c61558();
      if (((ulong)puVar10 & 1) == 0) {
        puVar13 = (undefined *)(*(long *)(puVar11 + 0x10) + 1);
        puVar10 = (undefined *)0x0;
        FUN_100fb4c74(0,puVar13,1,puVar11);
        puVar11 = puVar10;
      }
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puVar10 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        puVar13 = puVar10;
        FUN_100fb4c74(puVar11,puVar10,1);
      }
      *(undefined **)(puVar11 + 0x10) = puVar10;
      *(undefined **)(puVar11 + uVar1 * 0x10 + 0x20) = puVar18;
      puVar11[uVar1 * 0x10 + 0x28] = uVar15;
      puVar10 = puVar6;
    } while (puVar6 != puVar14);
  }
LAB_100f9d3c4:
  func_0x000107c61574(puVar5);
  *param_1 = puVar11;
  return;
}



/* Entry: 100f9d478; end: 100f9d71b;  */

void FUN_100f9d478(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar10 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar12);
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_100f9d714:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100f9d718);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar13) {
    func_0x000100fb636c(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar8 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
LAB_100f9d528:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f9d538);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000100fb5c8c();
    lVar13 = *param_3;
    goto joined_r0x000100f9d598;
  }
  lVar13 = *param_3;
joined_r0x000100f9d598:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_100f9d718:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f9d71c);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c615f0(uVar11);
    func_0x000107c615e8(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
    func_0x000107c615e8(uVar12);
  }
  if (lVar9 != 1) {
    lVar9 = lVar9 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar10 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar12);
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) goto LAB_100f9d714;
      if (*(long *)(lVar10 + 0x18) < lVar13) {
        func_0x000100fb636c(lVar13,1);
        uVar5 = uVar2;
        uVar8 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) goto LAB_100f9d528;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_100f9d718;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c615f0(uVar11);
        func_0x000107c615e8(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
        func_0x000107c615e8(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 100f9d71c; end: 100f9d78b;  */

void FUN_100f9d71c(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
_objc_retain:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_2 != 1) {
      return;
    }
  }
  else if (param_2 != 2) {
    if (param_2 != 3) {
      return;
    }
    goto _objc_retain;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 100f9d78c; end: 100f9d833;  */

void FUN_100f9d78c(void)

{
  FUN_100f9d410();
  return;
}



/* Entry: 100f9d834; end: 100f9dae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9d834(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  lVar11 = *(long *)(unaff_x22 + 0x50);
  lVar17 = *(long *)(lVar11 + 0x10);
  if (lVar17 == 0) {
    uVar5 = 0;
    uVar9 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x20);
    uVar9 = (ulong)*(byte *)(lVar11 + 0x28);
    FUN_100f9f364();
  }
  puVar1 = (ulong *)(*(long *)(unaff_x22 + 0x58) + _DAT_112d508e8);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  uVar16 = puVar1[2];
  if (uVar2 == 0) {
    uVar14 = 0;
  }
  else {
    func_0x000107c61434(uVar2);
    uVar14 = uVar6;
  }
  func_0x000100f9f53c(uVar6,uVar2,uVar16);
  uVar10 = uVar2;
  func_0x000100f9f50c(uVar6,uVar2,uVar16);
  if (uVar9 == 0) {
    uVar9 = uVar6;
    uVar6 = uVar2;
    if (uVar2 == 0) goto LAB_100f9d928;
LAB_100f9d90c:
    func_0x000107c6142c(uVar6);
  }
  else {
    uVar6 = uVar9;
    if (uVar2 == 0) goto LAB_100f9d90c;
    if ((uVar5 == uVar14) && (uVar9 == uVar2)) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c();
      goto LAB_100f9d928;
    }
    uVar10 = uVar9;
    func_0x000107c605b8(uVar5,uVar9,uVar14,uVar2,0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c();
    if ((uVar5 & 1) != 0) goto LAB_100f9d928;
  }
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar5 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  func_0x000100f9f50c(uVar9,uVar10,uVar5);
LAB_100f9d928:
  lVar11 = *(long *)(unaff_x22 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c5eec4(uVar13);
  func_0x000107c5eeac();
  (**(code **)(lVar11 + 8))(uVar13,uVar12);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  if (lVar17 == 0) {
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(ulong *)(unaff_x22 + 0x40) = uVar9;
    *(ulong *)(unaff_x22 + 0x48) = uVar10;
    uVar13 = 0x112d50a48;
    func_0x0001000285a8(0x112d50a48,&UNK_10d917438);
    func_0x000107c5fd28(uVar12,unaff_x22 + 0x30,uVar13);
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x20);
    uVar4 = *(undefined1 *)(*(long *)(unaff_x22 + 0x50) + 0x28);
    puVar7 = &UNK_1103715a0;
    func_0x000107c613fc(&UNK_1103715a0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,uVar13);
    puVar8 = &UNK_1103715c8;
    func_0x000107c613fc(&UNK_1103715c8,0x21,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar15;
    puVar8[0x20] = uVar4;
    *(undefined **)(unaff_x22 + 0x10) = &UNK_10d917430;
    *(undefined **)(unaff_x22 + 0x18) = puVar8;
    *(ulong *)(unaff_x22 + 0x20) = uVar9;
    *(ulong *)(unaff_x22 + 0x28) = uVar10;
    FUN_100f9d71c(uVar15,uVar4);
    FUN_100f9d71c(uVar15,uVar4);
    func_0x000107c6157c(puVar8);
    uVar13 = 0x112d50a48;
    func_0x0001000285a8(0x112d50a48,&UNK_10d917438);
    func_0x000107c5fd28(uVar12,unaff_x22 + 0x10,uVar13);
    func_0x000107c61574(puVar8);
    func_0x000100f9d754(uVar15,uVar4);
  }
  (**(code **)(lVar11 + 8))(uVar12,uVar3);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100f9daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9dae4; end: 100f9db03;  */

void FUN_100f9dae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9db04,0,0);
  return;
}



/* Entry: 100f9db04; end: 100f9dc1b;  */

void FUN_100f9db04(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x100f9db98;
    lVar3 = *(long *)(unaff_x22 + 0x40);
    lVar5 = *(long *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x60);
    plVar2[5] = lVar4;
    plVar2[3] = lVar5;
    plVar2[4] = lVar6;
    *(undefined1 *)(plVar2 + 0xb) = uVar1;
    plVar2[2] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9dc40,lVar4,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9dc1c; end: 100f9dc3f;  */

void FUN_100f9dc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined1 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9dc40);
  return;
}



/* Entry: 100f9dc40; end: 100f9dd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9dc40(void)

{
  ulong *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  uVar3 = *(ulong *)(unaff_x22 + 0x10);
  uVar6 = (ulong)*(byte *)(unaff_x22 + 0x58);
  FUN_100f9f364();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  *(ulong *)(unaff_x22 + 0x38) = uVar6;
  lVar7 = _DAT_112d508e8;
  *(long *)(unaff_x22 + 0x40) = _DAT_112d508e8;
  puVar1 = (ulong *)(lVar8 + lVar7);
  if (puVar1[1] != 0) {
    uVar4 = *puVar1;
    uVar9 = puVar1[2];
    if ((uVar4 == uVar3 && puVar1[1] == uVar6) || (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
      func_0x000107c61174(uVar9);
      func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100f9dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar9);
      return;
    }
  }
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f9dd18;
  lVar8 = *(long *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x18);
  lVar11 = *(long *)(unaff_x22 + 0x20);
  lVar7 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x58);
  plVar5[5] = lVar8;
  plVar5[3] = lVar10;
  plVar5[4] = lVar11;
  *(undefined1 *)(plVar5 + 0x12) = uVar2;
  plVar5[2] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9de0c,lVar8,0);
  return;
}



/* Entry: 100f9dd18; end: 100f9dd6b;  */

void FUN_100f9dd18(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9dd6c,uVar2,0);
  return;
}



/* Entry: 100f9dd6c; end: 100f9dde7;  */

void FUN_100f9dd6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x50);
  if (lVar4 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + *(long *)(unaff_x22 + 0x40));
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar6 = puVar1[2];
    *puVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar1[1] = uVar5;
    puVar1[2] = lVar4;
    func_0x000107c61174();
    FUN_100f9f50c(uVar2,uVar3,uVar6);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9dde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 100f9dde8; end: 100f9de0b;  */

void FUN_100f9dde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined1 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9de0c);
  return;
}



/* Entry: 100f9de0c; end: 100f9e01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9de0c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  bVar2 = *(byte *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      plVar4 = (long *)0x110;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100f9e148;
      lVar8 = *(long *)(unaff_x22 + 0x28);
      lVar11 = *(long *)(unaff_x22 + 0x18);
      lVar12 = *(long *)(unaff_x22 + 0x20);
      plVar4[0x14] = lVar8;
      plVar4[0x12] = lVar11;
      plVar4[0x13] = lVar12;
      plVar4[0x11] = lVar6;
      pcVar5 = FUN_100f9e644;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar5,lVar8,0);
      return;
    }
    uVar10 = *(undefined8 *)(lVar6 + _DAT_112fda128);
    uVar1 = ((undefined8 *)(lVar6 + _DAT_112fda128))[1];
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112d508e0);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112d508d8);
    puVar3 = &UNK_110371578;
    func_0x000107c613fc(&UNK_110371578,0x28,7);
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar9;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    *(undefined8 *)(puVar3 + 0x20) = uVar1;
    plVar4 = (long *)0x50;
    func_0x000107c6157c(uVar9);
    func_0x000107c61434(uVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100f9e064;
    pcVar5 = (code *)0x100f9f358;
  }
  else {
    if (bVar2 != 2) {
      plVar4 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x30) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100f9e020;
      lVar8 = *(long *)(unaff_x22 + 0x28);
      lVar11 = *(long *)(unaff_x22 + 0x18);
      lVar12 = *(long *)(unaff_x22 + 0x20);
      plVar4[0x14] = lVar8;
      plVar4[0x12] = lVar11;
      plVar4[0x13] = lVar12;
      plVar4[0x11] = lVar6;
      pcVar5 = FUN_100f9ec88;
      goto LAB_107c615e0;
    }
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112d508e0);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112d508d8);
    puVar3 = &UNK_110371550;
    func_0x000107c613fc(&UNK_110371550,0x20,7);
    *(undefined **)(unaff_x22 + 0x58) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar10;
    *(long *)(puVar3 + 0x18) = lVar6;
    func_0x000107c6157c(uVar10);
    FUN_100f9d71c(lVar6,2);
    plVar4 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100f9e18c;
    pcVar5 = FUN_100f9f350;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9df94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fadcdc(uVar7,pcVar5,puVar3);
  return;
}



/* Entry: 100f9e020; end: 100f9e063;  */

void FUN_100f9e020(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100f9e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100f9e064; end: 100f9e0bf;  */

void FUN_100f9e064(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e0c0,uVar3,0);
  return;
}



/* Entry: 100f9e0c0; end: 100f9e147;  */

void FUN_100f9e0c0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0x48);
  if (lVar3 != 0) {
    plVar1 = (long *)0x110;
    func_0x000107c615f0(lVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100f9e270;
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    plVar1[0x14] = lVar2;
    plVar1[0x12] = lVar4;
    plVar1[0x13] = lVar5;
    plVar1[0x11] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e644,lVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9e144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100f9e148; end: 100f9e18b;  */

void FUN_100f9e148(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100f9e188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100f9e18c; end: 100f9e1e7;  */

void FUN_100f9e18c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e1e8,uVar3,0);
  return;
}



/* Entry: 100f9e1e8; end: 100f9e26f;  */

void FUN_100f9e1e8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  if (lVar3 != 0) {
    plVar1 = (long *)0x110;
    func_0x000107c615f0(lVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x100f9e2fc;
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    plVar1[0x14] = lVar2;
    plVar1[0x12] = lVar4;
    plVar1[0x13] = lVar5;
    plVar1[0x11] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e644,lVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9e26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100f9e270; end: 100f9e387;  */

void FUN_100f9e270(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f9e2c4,uVar2,0);
  return;
}



/* Entry: 100f9e388; end: 100f9e50b;  */

void FUN_100f9e388(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  if (uStack_48 != 0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    uVar5 = uStack_48;
    func_0x000107c4310c();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(lVar3);
    if (uVar5 != 0) {
      uVar6 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar4 = uVar5;
      func_0x000107c5fc54(uVar5,uVar6);
      func_0x000107c61170(uVar5);
      if (uVar4 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar5 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar5 == 0) {
        func_0x000107c6142c(uVar4);
        uVar6 = 0;
      }
      else {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9e50c);
            (*pcVar1)();
          }
          uVar6 = *(undefined8 *)(uVar4 + 0x20);
          func_0x000107c615f0(uVar6);
        }
        else {
          uVar6 = 0;
          FUN_100fb0ba0(0,uVar4);
        }
        func_0x000107c6142c(uVar4);
      }
      *param_1 = uVar6;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 100f9e50c; end: 100f9e623;  */

void FUN_100f9e50c(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (uStack_38 != 0) {
    uVar3 = uStack_38;
    func_0x000107c430f8();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_38);
    if (uVar3 != 0) {
      uVar4 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar2 = uVar3;
      func_0x000107c5fc54(uVar3,uVar4);
      func_0x000107c61170(uVar3);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar2);
        uVar4 = 0;
      }
      else {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f9e624);
            (*pcVar1)();
          }
          uVar4 = *(undefined8 *)(uVar2 + 0x20);
          func_0x000107c615f0(uVar4);
        }
        else {
          uVar4 = 0;
          FUN_100fb0ba0(0,uVar2);
        }
        func_0x000107c6142c(uVar2);
      }
      *param_1 = uVar4;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 100f9e624; end: 100f9e643;  */

void FUN_100f9e624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e644);
  return;
}



/* Entry: 100f9e644; end: 100f9e727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9e644(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xa8) = *(long *)(unaff_x22 + 0x50);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168();
    *(undefined **)(unaff_x22 + 0xb0) = puVar1;
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    uVar3 = 0x112d45220;
    FUN_100f9f2e0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e728,uVar2,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100f9e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100f9e728; end: 100f9e77f;  */

void FUN_100f9e728(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c4c194();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e780,uVar1,0);
  return;
}



/* Entry: 100f9e780; end: 100f9e7e7;  */

void FUN_100f9e780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e7e8,uVar2,uVar1);
  return;
}



/* Entry: 100f9e7e8; end: 100f9e83b;  */

void FUN_100f9e7e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c51820(uVar1);
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e83c,uVar2,0);
  return;
}



/* Entry: 100f9e83c; end: 100f9e8a3;  */

void FUN_100f9e83c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e8a4,uVar2,uVar1);
  return;
}



/* Entry: 100f9e8a4; end: 100f9e8fb;  */

void FUN_100f9e8a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c4c194();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e8fc,uVar1,0);
  return;
}



/* Entry: 100f9e8fc; end: 100f9e963;  */

void FUN_100f9e8fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e964,uVar2,uVar1);
  return;
}



/* Entry: 100f9e964; end: 100f9e9b7;  */

void FUN_100f9e964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c51820(uVar1);
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9e9b8,uVar2,0);
  return;
}



/* Entry: 100f9e9b8; end: 100f9ea4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f9e9b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112d508e0);
  func_0x000107c614f0();
  func_0x000100bcb214();
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  uVar2 = 0x112d50a38;
  FUN_100f9f2e0(0x112d50a38,FUN_100f9f050,&UNK_10d9173c0);
  func_0x000107c614f0(lVar1);
  func_0x000107c5fca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9ea50,lVar1,uVar2);
  return;
}



/* Entry: 100f9ea50; end: 100f9eb7b;  */

void FUN_100f9ea50(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = *(double *)(unaff_x22 + 0x100);
  dVar6 = *(double *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  dVar8 = *(double *)(unaff_x22 + 0x90);
  dVar7 = *(double *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f9eb7c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371500;
  func_0x000107c613fc(&UNK_110371500,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x100f9f320;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100f9ebfc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110371518;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c50340(dVar6 * dVar8,dVar5 * dVar7,uVar3);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f9eb7c; end: 100f9ebfb;  */

void FUN_100f9eb7c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100f9ebbc,*(undefined8 *)(*unaff_x22 + 0xa0),0);
  return;
}



/* Entry: 100f9ebfc; end: 100f9ec67;  */

void FUN_100f9ebfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


