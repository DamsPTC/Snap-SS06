/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024db298; end: 1024db2bf;  */

void FUN_1024db298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x380) = param_6;
  *(undefined8 *)(unaff_x22 + 0x378) = param_5;
  *(undefined8 *)(unaff_x22 + 0x370) = param_4;
  *(undefined8 *)(unaff_x22 + 0x348) = param_3;
  *(undefined8 *)(unaff_x22 + 0x318) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db2c0,0,0);
  return;
}



/* Entry: 1024db2c0; end: 1024db343;  */

void FUN_1024db2c0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x348);
  func_0x000107c61418(unaff_x22 + 0x10,0,PTR___sSbN_11034dd40,&UNK_10dab3a70,unaff_x22 + 0x350,
                      unaff_x22 + 0x3b8);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x388) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1024db344;
  lVar2 = *(long *)(unaff_x22 + 0x318);
  plVar1[0xb] = *(long *)(unaff_x22 + 0x348);
  plVar1[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024da6e4,0,0);
  return;
}



/* Entry: 1024db344; end: 1024db3d7;  */

void FUN_1024db344(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long *)(lVar1 + 0x390) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x388));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db958,0,0);
    return;
  }
  *(undefined8 *)(lVar1 + 0x3a0) = param_1;
  *(undefined8 *)(lVar1 + 0x398) = 0;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (lVar1 + 0x10,lVar1 + 0x3b8,FUN_1024db3d8,lVar1 + 0x290);
  return;
}



/* Entry: 1024db3d8; end: 1024db3eb;  */

void FUN_1024db3d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db3ec,0,0);
  return;
}



/* Entry: 1024db3ec; end: 1024db47f;  */

void FUN_1024db3ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3b9) = *(undefined1 *)(unaff_x22 + 0x3b8);
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x3a8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1024dd044(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db480,uVar2,uVar3);
  return;
}



/* Entry: 1024db480; end: 1024db8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024db480(void)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  
  cVar1 = *(char *)(unaff_x22 + 0x3b9);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3a8));
  lVar16 = *(long *)(unaff_x22 + 0x370);
  if (cVar1 == '\x01') {
    uVar11 = (ulong)*(byte *)(lVar16 + _DAT_113021ed8);
  }
  else {
    uVar11 = 0;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
  lVar13 = *(long *)(unaff_x22 + 0x318);
  FUN_1024dcd18(uVar4,uVar11);
  lVar13 = *(long *)(lVar13 + _DAT_112ea1380);
  func_0x000107c61174(lVar16);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar15);
  }
  else {
    lVar14 = *(long *)(unaff_x22 + 0x348);
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168();
    func_0x000107c451b0();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126c3378;
    func_0x000107c61168();
    func_0x000107c4a978();
    func_0x000107c61180();
    func_0x000107c61174();
    lVar16 = lVar14;
    FUN_1024dc9d0();
    func_0x000107c45288();
    func_0x000107c61180();
    if (lVar14 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024db8d8);
      (*pcVar3)();
    }
    cVar1 = *(char *)(unaff_x22 + 0x3b9);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x380);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x348);
    lVar12 = *(long *)(unaff_x22 + 0x318);
    puVar7 = PTR_PTR_1126b0ae0;
    func_0x000107c61168();
    uVar10 = uVar15;
    func_0x000107c4527c(uVar15);
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x2d8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x2e0) = uVar17;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x2b8) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x2c8) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x2d0) = &UNK_110517060;
    lVar8 = unaff_x22 + 0x2b8;
    func_0x000107c60bc4(lVar8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
    func_0x000107c6157c(uVar17);
    func_0x000107c61574(uVar18);
    *(undefined8 *)(unaff_x22 + 0x308) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x310) = uVar17;
    *(undefined **)(unaff_x22 + 0x2e8) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x2f8) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x300) = &UNK_110517088;
    lVar9 = unaff_x22 + 0x2e8;
    func_0x000107c60bc4();
    uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
    func_0x000107c6157c(uVar17);
    func_0x000107c61574(uVar18);
    func_0x000107c45288();
    func_0x000107c61180();
    func_0x000107c40b00();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c60bd0(lVar9);
    func_0x000107c60bd0(lVar8);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(puVar6);
    uVar10 = *(undefined8 *)(lVar12 + _DAT_112ea1378);
    *(undefined **)(lVar12 + _DAT_112ea1378) = puVar7;
    func_0x000107c61170(uVar10);
    func_0x000107c5c2e0(lVar13);
    if (cVar1 == '\x01') {
      (**(code **)(*(long *)(unaff_x22 + 0x370) + _DAT_113021ee0))();
    }
    lVar16 = *(long *)(unaff_x22 + 0x398);
    FUN_1024db1a4(*(undefined8 *)(unaff_x22 + 0x348));
    if (lVar16 != 0) {
      lVar14 = *(long *)(unaff_x22 + 0x348);
      func_0x000107c4f6e0();
      func_0x000107c61180();
      if (lVar14 == 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024db8f0);
        (*pcVar3)();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
      lVar8 = lVar14;
      func_0x000107c5faec();
      func_0x000107c61170(lVar14);
      FUN_1024daf74(lVar8,uVar11);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar15);
      func_0x000107c615e8(lVar13);
      func_0x000107c6142c(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c614ac(lVar16);
      goto LAB_1024db888;
    }
    lVar16 = *(long *)(unaff_x22 + 0x348);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x370));
    func_0x000107c4f6e0();
    func_0x000107c61180();
    if (lVar16 == 0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x370));
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024db8fc);
      (*pcVar3)();
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
    lVar14 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
    func_0x0001024db08c(lVar14,uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(lVar13);
    func_0x000107c6142c(uVar11);
  }
  func_0x000107c61170(uVar10);
LAB_1024db888:
  *(undefined8 *)(unaff_x22 + 0x3b0) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db8fc,0,0);
  return;
}



/* Entry: 1024db8fc; end: 1024db93b;  */

void FUN_1024db8fc(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x3b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x3b8,FUN_1024db93c,unaff_x22 + 800);
  return;
}



/* Entry: 1024db93c; end: 1024db957;  */

void FUN_1024db93c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1024db950,0,0);
  return;
}



/* Entry: 1024db958; end: 1024dba17;  */

void FUN_1024db958(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x348);
  func_0x000107c51f08();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x390);
  if (lVar1 == 0) {
    func_0x000107c614ac(uVar4);
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000108ffe710();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    uVar3 = 1;
    func_0x000108ffef38(1,lVar2,1);
    func_0x000107c61180();
    func_0x000107c614ac(uVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61174(uVar3);
  }
  *(undefined8 *)(unaff_x22 + 0x3a0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x398) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x10,unaff_x22 + 0x3b8,FUN_1024db3d8,unaff_x22 + 0x290);
  return;
}



/* Entry: 1024dba18; end: 1024dba6f;  */

void FUN_1024dba18(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1024dba70;
  plVar1[0x17] = param_3;
  plVar1[0x18] = param_2;
  lVar2 = 0;
  func_0x000107c5f7fc();
  plVar1[0x19] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x1a] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1b] = uVar3;
  lVar2 = 0;
  func_0x000107c5f824();
  plVar1[0x1c] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x1d] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1e] = uVar3;
  lVar2 = 0;
  func_0x000107c5f7f0();
  plVar1[0x1f] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x20] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x21] = uVar3;
  lVar2 = 0;
  func_0x000107c5f83c();
  plVar1[0x22] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x23] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x24] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x25] = uVar3;
  lVar2 = 0;
  func_0x000107c5f804();
  plVar1[0x26] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x27] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x28] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024dbbe4,0,0);
  return;
}



/* Entry: 1024dba70; end: 1024dbabf;  */

void FUN_1024dba70(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024dbac0,0,0);
  return;
}



/* Entry: 1024dbac0; end: 1024dbad7;  */

void FUN_1024dbac0(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001024dbad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024dbad8; end: 1024dbbe3;  */

void FUN_1024dbad8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f7fc();
  *(long *)(unaff_x22 + 200) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar1 = 0;
  func_0x000107c5f824();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  lVar1 = 0;
  func_0x000107c5f7f0();
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x110) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0x130) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024dbbe4,0,0);
  return;
}



/* Entry: 1024dbbe4; end: 1024dc0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024dbbe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar5 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c51f08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar18 = *(long *)(unaff_x22 + 0xc0);
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    *(undefined8 *)(unaff_x22 + 0x148) = param_2;
    lVar5 = *(long *)(lVar18 + _DAT_112ea13b0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x150) = lVar5;
    if (lVar5 != 0) {
      func_0x000107c4f6dc();
      lVar1 = *(long *)(unaff_x22 + 0x138);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x158;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1024dc0ec;
      lVar18 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar18,0);
      lVar7 = lVar18;
      func_0x0001024dc690();
      func_0x000107c613fc();
      puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + 0x10) = puVar8;
      *(undefined1 *)(lVar7 + 0x18) = 0;
      lVar9 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(long *)(lVar9 + 0x20) = lVar6;
      *(undefined8 *)(lVar9 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar10 = lVar9;
      func_0x000107c5fc48(lVar9,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar9);
      puVar8 = &UNK_110517200;
      func_0x000107c613fc(&UNK_110517200,0x30,7);
      *(long *)(puVar8 + 0x10) = lVar7;
      *(long *)(puVar8 + 0x18) = lVar18;
      *(long *)(puVar8 + 0x20) = lVar6;
      *(undefined8 *)(puVar8 + 0x28) = param_2;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1024dd030;
      *(undefined **)(unaff_x22 + 0x78) = puVar8;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_1024dc3a4;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110517218;
      lVar6 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar6);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(lVar7);
      func_0x000107c61574(uVar21);
      func_0x000107c43278(lVar5);
      func_0x000107c60bd0(lVar6);
      func_0x000107c61170(lVar10);
      func_0x0001024dd084(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar1 + 0x68))
                (uVar13,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,uVar15);
      uVar21 = uVar13;
      func_0x000107c5fff0();
      (**(code **)(lVar1 + 8))(uVar13,uVar15);
      func_0x000107c5f830(uVar16);
      if (lRam0000000112ea14b8 != -1) {
        func_0x000107c61568(0x112ea14b8,FUN_1024dc4ac);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x110);
      lVar9 = *(long *)(unaff_x22 + 0x118);
      lVar5 = *(long *)(unaff_x22 + 0x100);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar1 = *(long *)(unaff_x22 + 0xe8);
      lVar6 = *(long *)(unaff_x22 + 0xd0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar19 = *(undefined8 *)(unaff_x22 + 200);
      uVar11 = uVar14;
      func_0x000100028790(uVar14,0x112ea14c0);
      (**(code **)(lVar5 + 0x10))(uVar15,uVar11,uVar14);
      func_0x000107c5f858(uVar3,uVar13,uVar15);
      (**(code **)(lVar5 + 8))(uVar15,uVar14);
      pcVar17 = *(code **)(lVar9 + 8);
      (*pcVar17)(uVar13,uVar16);
      puVar8 = &UNK_110517250;
      func_0x000107c613fc(&UNK_110517250,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar7;
      *(long *)(puVar8 + 0x18) = lVar18;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0x1024dd03c;
      *(undefined **)(unaff_x22 + 0xa8) = puVar8;
      puVar12 = (undefined8 *)(unaff_x22 + 0x80);
      *puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x90) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x98) = &UNK_110517268;
      func_0x000107c60bc4();
      func_0x000107c6157c(lVar7);
      func_0x000107c5f808(uVar20);
      *(undefined8 *)(unaff_x22 + 0xb0) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar13 = 0x112d4af88;
      func_0x0001024dd044(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar15 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = uVar15;
      func_0x0001001c7f30();
      func_0x000107c60264(uVar4,(undefined8 *)(unaff_x22 + 0xb0),uVar15,uVar14,uVar19,uVar13);
      func_0x000107c5ffc8(uVar3,uVar20,uVar4,puVar12);
      func_0x000107c60bd0(puVar12);
      func_0x000107c61170(uVar21);
      func_0x000107c61574(lVar7);
      (**(code **)(lVar6 + 8))(uVar4,uVar19);
      (**(code **)(lVar1 + 8))(uVar20,uVar2);
      (*pcVar17)(uVar3,uVar16);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(param_2);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001024dc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1024dc0ec; end: 1024dc12b;  */

void FUN_1024dc0ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024dc12c,0,0);
  return;
}



/* Entry: 1024dc12c; end: 1024dc1bb;  */

void FUN_1024dc12c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c615e8(uVar1);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001024dc1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1024dc1bc; end: 1024dc3a3;  */

/* WARNING: Possible PIC construction at 0x0001024dc238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dc23c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc244) */
/* WARNING: Removing unreachable block (ram,0x0001024dc35c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc360) */
/* WARNING: Removing unreachable block (ram,0x0001024dc254) */
/* WARNING: Removing unreachable block (ram,0x0001024dc25c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2a4) */
/* WARNING: Removing unreachable block (ram,0x0001024dc324) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2ac) */
/* WARNING: Removing unreachable block (ram,0x0001024dc358) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2b8) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2c4) */
/* WARNING: Removing unreachable block (ram,0x0001024dc354) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2d0) */
/* WARNING: Removing unreachable block (ram,0x0001024dc2e4) */
/* WARNING: Removing unreachable block (ram,0x0001024dc318) */
/* WARNING: Removing unreachable block (ram,0x0001024dc26c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc290) */
/* WARNING: Removing unreachable block (ram,0x0001024dc370) */
/* WARNING: Removing unreachable block (ram,0x0001024dc320) */
/* WARNING: Removing unreachable block (ram,0x0001024dc334) */
/* WARNING: Removing unreachable block (ram,0x0001024dc33c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc374) */
/* WARNING: Removing unreachable block (ram,0x000107c6144c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0074) */

void FUN_1024dc1bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c4b940(uVar1);
  if (*(char *)(param_3 + 0x18) != '\x01') {
    *(undefined1 *)(param_3 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1024dc3a4; end: 1024dc437;  */

void FUN_1024dc3a4(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001024dd084(0,0x112ea14d8,&PTR_PTR_1126bb4b8);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024dc438; end: 1024dc4ab;  */

/* WARNING: Possible PIC construction at 0x0001024dc488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dc48c) */
/* WARNING: Removing unreachable block (ram,0x000107c6144c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0074) */

void FUN_1024dc438(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4b940(uVar1);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1024dc4ac; end: 1024dc50b;  */

void FUN_1024dc4ac(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5f7f0();
  func_0x000100028750();
  puVar2 = puVar1;
  func_0x000100028790(puVar1,0x112ea14c0);
  *puVar2 = 2000;
                    /* WARNING: Could not recover jumptable at 0x0001024dc508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1[-1] + 0x68))();
  return;
}



/* Entry: 1024dc50c; end: 1024dc56b; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin init] */

void FUN_1024dc50c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInAppNotificationPresentingPlugin.FriendingInAppNotificationPresentingPlugin"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dc538);
  (*pcVar1)();
}



/* Entry: 1024dc56c; end: 1024dc64b; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024dc588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dc5ec) */
/* WARNING: Removing unreachable block (ram,0x0001024dc5cc) */
/* WARNING: Removing unreachable block (ram,0x0001024dc5ac) */
/* WARNING: Removing unreachable block (ram,0x0001024dc58c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024dc56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1370));
  return;
}



/* Entry: 1024dc64c; end: 1024dc6af;  */

void FUN_1024dc64c(void)

{
  func_0x000107c61168(&PTR_PTR_1128493a0);
  return;
}



/* Entry: 1024dc6b0; end: 1024dc6b7;  */

void FUN_1024dc6b0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c445dc();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1024dc6b8; end: 1024dc7c7;  */

/* WARNING: Possible PIC construction at 0x0001024dc708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dc70c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc748) */
/* WARNING: Removing unreachable block (ram,0x0001024dc7b0) */
/* WARNING: Removing unreachable block (ram,0x0001024dc758) */

void FUN_1024dc6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c422bc(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c549b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1024dc7c8; end: 1024dc80b;  */

void FUN_1024dc7c8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8();
  func_0x000107c482a8(0x3f90101010101010,0x3feb7b7b7b7b7b7b,0,0x3ff0000000000000);
  puRam0000000112ea14b0 = puVar1;
  return;
}



/* Entry: 1024dc80c; end: 1024dc9cf;  */

ulong FUN_1024dc80c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024dc8f0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024dc8f4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bb4b8;
    func_0x000107c61168(PTR_PTR_1126bb4b8);
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
    puVar4 = PTR_PTR_1126bb4b8;
    func_0x000107c61168(PTR_PTR_1126bb4b8);
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
  func_0x0001024dd084(0,0x112ea14d8,&PTR_PTR_1126bb4b8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024dc9d0);
  (*pcVar2)();
}



/* Entry: 1024dc9d0; end: 1024dca57;  */

undefined * FUN_1024dc9d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  FUN_1024dd62c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4f6dc();
    if (param_1 == 0xe) {
      func_0x0001024dd6fc();
    }
    else {
      func_0x0001024dd710();
    }
  }
  else {
    FUN_1024dd6ec();
    param_1 = uVar1;
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  puVar2 = PTR_PTR_1126b15a0;
  func_0x000107c61168(PTR_PTR_1126b15a0);
  func_0x000107c3ee8c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1024dca58; end: 1024dca73;  */

void FUN_1024dca58(long param_1,long param_2)

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



/* Entry: 1024dca74; end: 1024dcaf3;  */

void FUN_1024dca74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x3c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1024dcaf4;
  plVar5[0x70] = lVar6;
  plVar5[0x6f] = lVar4;
  plVar5[0x6e] = lVar2;
  plVar5[0x69] = lVar3;
  plVar5[99] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024db2c0,0,0);
  return;
}



/* Entry: 1024dcaf4; end: 1024dcb2f;  */

void FUN_1024dcaf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001024dcb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1024dcb30; end: 1024dcb93;  */

void FUN_1024dcb30(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1024dcb94;
  plVar6[2] = param_1;
  plVar2 = (long *)0x160;
  func_0x000107c615b8();
  plVar6[3] = (long)plVar2;
  *plVar2 = (long)plVar6;
  plVar2[1] = (long)FUN_1024dba70;
  plVar2[0x17] = lVar1;
  plVar2[0x18] = lVar3;
  lVar3 = 0;
  func_0x000107c5f7fc();
  plVar2[0x19] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x1a] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1b] = uVar4;
  lVar3 = 0;
  func_0x000107c5f824();
  plVar2[0x1c] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x1d] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1e] = uVar4;
  lVar3 = 0;
  func_0x000107c5f7f0();
  plVar2[0x1f] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x20] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x21] = uVar4;
  lVar3 = 0;
  func_0x000107c5f83c();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x25] = uVar4;
  lVar3 = 0;
  func_0x000107c5f804();
  plVar2[0x26] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x27] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x28] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024dbbe4,0,0);
  return;
}



/* Entry: 1024dcb94; end: 1024dcbcf;  */

void FUN_1024dcb94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x0001024dcbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1024dcbd0; end: 1024dcd17;  */

undefined * FUN_1024dcbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  FUN_1024d99e8(param_1,param_2,param_3);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0x6e69646e65697266;
  func_0x000107c5fadc(0x6e69646e65697266,0xe900000000000067);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1024dcd18; end: 1024dcf43;  */

undefined * FUN_1024dcd18(undefined8 param_1,double param_2,undefined *param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  if ((param_3 != (undefined *)0x0) && ((param_4 & 1) != 0)) {
    puVar2 = param_3;
    func_0x000107c61174();
    dVar8 = (double)func_0x000107c5b078();
    if ((0.0 < dVar8) && (func_0x000107c5b078(puVar2), 0.0 < param_2)) {
      dVar9 = (double)func_0x000107c5b078(puVar2);
      func_0x000107c5b078(puVar2);
      dVar8 = 48.0 / param_2;
      if (48.0 / dVar9 <= 48.0 / param_2) {
        dVar8 = 48.0 / dVar9;
      }
      dVar9 = (double)func_0x000107c5b078(puVar2);
      func_0x000107c5b078(puVar2);
      puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x000107c486f8(0x4048000000000000,0x4048000000000000);
      puVar4 = &UNK_1105170c0;
      func_0x000107c613fc(&UNK_1105170c0,0x58,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(double *)(puVar4 + 0x18) = (48.0 - dVar9 * dVar8) * 0.5;
      *(double *)(puVar4 + 0x20) = (48.0 - param_2 * dVar8) * 0.5;
      *(double *)(puVar4 + 0x28) = dVar9 * dVar8;
      *(double *)(puVar4 + 0x30) = param_2 * dVar8;
      *(undefined8 *)(puVar4 + 0x40) = 0x4042000000000000;
      *(undefined8 *)(puVar4 + 0x38) = 0x4042000000000000;
      auVar10 = NEON_fmov(0x4028000000000000,8);
      *(long *)(puVar4 + 0x50) = auVar10._8_8_;
      *(long *)(puVar4 + 0x48) = auVar10._0_8_;
      puVar5 = &UNK_1105170e8;
      func_0x000107c613fc(&UNK_1105170e8,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_1024dcf44;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      pcStack_80 = FUN_1024dcf5c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100f9148c;
      puStack_88 = &UNK_110517100;
      puStack_78 = puVar5;
      func_0x000107c60bc4(&puStack_a0);
      puVar7 = puStack_78;
      func_0x000107c61174(puVar2);
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar7);
      puVar7 = puVar3;
      func_0x000107c45138(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar3);
      puVar2 = puVar5;
      func_0x000107c61544(puVar5,"",0x76,0x210,0x40,1);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar4);
      if (((ulong)puVar2 & 1) == 0) {
        return puVar7;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dcf0c);
      (*pcVar1)();
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61174(param_3);
  return param_3;
}



/* Entry: 1024dcf44; end: 1024dcf5b;  */

/* WARNING: Possible PIC construction at 0x0001024dc708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dc744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dc70c) */
/* WARNING: Removing unreachable block (ram,0x0001024dc748) */
/* WARNING: Removing unreachable block (ram,0x0001024dc7b0) */
/* WARNING: Removing unreachable block (ram,0x0001024dc758) */

void FUN_1024dcf44(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c422bc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c549b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1024dcf5c; end: 1024dcf7b;  */

void FUN_1024dcf5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024dcf7c; end: 1024dcf87;  */

/* WARNING: Possible PIC construction at 0x0001024dac24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dac70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dac8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dad6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dac74) */
/* WARNING: Removing unreachable block (ram,0x0001024dac78) */
/* WARNING: Removing unreachable block (ram,0x0001024dac44) */
/* WARNING: Removing unreachable block (ram,0x0001024dad18) */
/* WARNING: Removing unreachable block (ram,0x0001024dac58) */
/* WARNING: Removing unreachable block (ram,0x0001024dac28) */
/* WARNING: Removing unreachable block (ram,0x0001024dac2c) */
/* WARNING: Removing unreachable block (ram,0x0001024dac90) */
/* WARNING: Removing unreachable block (ram,0x0001024dad70) */

void FUN_1024dcf7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if ((param_1 == 0) || (param_2 != 0)) {
    uVar2 = 1;
    FUN_1024dcbd0(1,0,3);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = uVar2;
  }
  else {
    func_0x000107c61174();
    func_0x000107c3e9e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c3e978();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    FUN_1024dcbd0(uVar2,uVar3,0);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar1,uVar3);
  return;
}



/* Entry: 1024dcf88; end: 1024dd027;  */

void FUN_1024dcf88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar10 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x1024dd104;
  plVar10[3] = lVar2;
  plVar10[4] = lVar8;
  plVar10[2] = lVar5;
  plVar9 = (long *)0xb0;
  func_0x000107c615b8();
  plVar10[5] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_1024dae34;
  plVar9[0x10] = lVar4;
  plVar9[0x11] = lVar1;
  plVar9[0xe] = lVar3;
  plVar9[0xf] = lVar7;
  plVar9[0xc] = lVar2;
  plVar9[0xd] = lVar6;
  plVar9[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024da1ec,0,0);
  return;
}



/* Entry: 1024dd028; end: 1024dd043;  */

void FUN_1024dd028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
    return;
  }
  FUN_1024dcbd0(0,0,3,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *plVar3 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar1,uVar2);
  return;
}



/* Entry: 1024dd044; end: 1024dd0c3;  */

void FUN_1024dd044(long *param_1,code *param_2,long param_3)

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



/* Entry: 1024dd0c4; end: 1024dd107;  */

void FUN_1024dd0c4(long param_1,long param_2)

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



/* Entry: 1024dd108; end: 1024dd523;  */

void FUN_1024dd108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea14e0,&UNK_10dab3ab0);
  puVar1 = &UNK_1105172a0;
  func_0x000107c613fc(&UNK_1105172a0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1024dd524,puVar1);
  return;
}



/* Entry: 1024dd524; end: 1024dd557;  */

void FUN_1024dd524(void)

{
  long unaff_x20;
  
  func_0x0001024dd20c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1024dd558; end: 1024dd567;  */

undefined1  [16] FUN_1024dd558(void)

{
  return ZEXT816(0x1105172c8);
}



/* Entry: 1024dd568; end: 1024dd61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024dd568(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113021f38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000103e6e8ec(0);
    func_0x000107c610f8();
    func_0x000103e6e7ec(0,0x1024dd628,0);
  }
  else {
    func_0x000107c44240(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1024dd620; end: 1024dd62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024dd620(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113021f38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000103e6e8ec(0);
    func_0x000107c610f8();
    func_0x000103e6e7ec(0,0x1024dd628,0);
  }
  else {
    func_0x000107c44240(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1024dd62c; end: 1024dd6eb;  */

void FUN_1024dd62c(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c499d0();
  if ((((uVar2 & 1) == 0) && (uVar2 = unaff_x20, func_0x000107c4f6dc(), uVar2 == 0xe)) &&
     (uVar2 = unaff_x20, func_0x000107c4a364(), (int)uVar2 != 0)) {
    func_0x000107c51a94();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar2 = unaff_x20;
      func_0x000107c42e80();
      if ((int)uVar2 == 0xb) {
        uVar2 = unaff_x20;
        func_0x000107c43968();
        func_0x000107c61180();
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dd6ec);
          (*pcVar1)();
        }
        func_0x000107c4f6cc();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(unaff_x20);
      }
      else {
        func_0x000107c61170(unaff_x20);
      }
    }
  }
  return;
}



/* Entry: 1024dd6ec; end: 1024dd71f;  */

undefined1  [16] FUN_1024dd6ec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x74616863;
  func_0x000107c5fadc(0x74616863,0xe400000000000000);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010dab3ae0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dd7d0);
  (*pcVar1)();
}



/* Entry: 1024dd720; end: 1024dd7cf;  */

undefined1  [16] FUN_1024dd720(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010dab3ae0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dd7d0);
  (*pcVar1)();
}



/* Entry: 1024dd7d0; end: 1024dd7df;  */

undefined1  [16] FUN_1024dd7d0(void)

{
  return ZEXT816(0x1105172e8);
}



/* Entry: 1024dd7e0; end: 1024dd903;  */

/* WARNING: Possible PIC construction at 0x0001024dd8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dd8c0) */

void FUN_1024dd7e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *param_1;
  (**(code **)(unaff_x20 + 0x18))(lVar1,param_1[1]);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = 0;
      FUN_1024de864();
      FUN_1024e43dc(*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x20)) == '\x01');
      func_0x000107c61168(PTR_PTR_1126ae5c0);
      func_0x000107c3d954();
      func_0x000107c61180();
      func_0x000107c3d6c4(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024dd904; end: 1024dd937;  */

void FUN_1024dd904(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024dd938; end: 1024dda43;  */

undefined * FUN_1024dd938(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112ea15b0);
  puVar3 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar9;
  func_0x0001000a7158();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uStack_48;
      *puVar1 = uStack_50;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024dda44);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c6157c(uStack_48);
        return puVar3;
      }
      uVar9 = puVar6[-1];
      uVar10 = puVar6[1];
      uStack_50 = *puVar6;
      func_0x000107c6157c(uStack_48);
      uVar4 = uVar9;
      func_0x0001000a7158();
      puVar6 = puVar6 + 3;
      uStack_48 = uVar10;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024dda14);
  (*pcVar2)();
}



/* Entry: 1024dda44; end: 1024dda57;  */

undefined * FUN_1024dda44(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ea15c0,&UNK_10dab4130);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ddb4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ddb50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1024dda58; end: 1024ddc4f;  */

undefined * FUN_1024dda58(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ddb4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ddb50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1024ddc50; end: 1024ddcbf;  */

void FUN_1024ddc50(void)

{
  func_0x000107c61168(&PTR_PTR_112ea1528);
  return;
}



/* Entry: 1024ddcc0; end: 1024ddebb;  */

undefined * FUN_1024ddcc0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112ea15a0);
    puVar2 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dddb4);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024dddb8);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1024ddebc; end: 1024ddebf;  */

void FUN_1024ddebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4DateVACycfC_110350bb0)();
  return;
}



/* Entry: 1024ddec0; end: 1024de067;  */

undefined8 FUN_1024ddec0(double param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  double *pdVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c(uVar6);
  (*pcVar1)(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c5ee8c();
  (**(code **)(lVar9 + 8))(puVar4,lVar3);
  dVar10 = (double)param_2 * 60.0 * 60.0;
  if (param_2 < 1) {
    dVar10 = 86400.0;
  }
  FUN_1024de3a4();
  lVar3 = *(long *)(puVar4 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    pdVar8 = (double *)(puVar4 + 0x20);
    do {
      dVar11 = *pdVar8;
      if (param_1 - dVar10 <= dVar11) {
        puVar5 = puVar7;
        func_0x000107c61558();
        puStack_68 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010134166c(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
          func_0x00010134166c(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
        *(double *)(puStack_68 + uVar2 * 8 + 0x20) = dVar11;
        puVar7 = puStack_68;
      }
      lVar3 = lVar3 + -1;
      pdVar8 = pdVar8 + 1;
    } while (lVar3 != 0);
  }
  func_0x000107c6142c(puVar4);
  uVar6 = *(undefined8 *)(puVar7 + 0x10);
  func_0x000107c61574(puVar7);
  return uVar6;
}



/* Entry: 1024de068; end: 1024de3a3;  */

void FUN_1024de068(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  double *pdVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + 1;
    pcVar3 = *(code **)(unaff_x20 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c6157c(uVar13);
    (*pcVar3)(puVar5);
    func_0x000107c61574(uVar13);
    func_0x000107c5ee8c();
    (**(code **)(lVar9 + 8))(puVar5,lVar4);
    dVar12 = (double)param_2 * 60.0 * 60.0;
    if (param_2 < 1) {
      dVar12 = 86400.0;
    }
    FUN_1024de3a4();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar4 = *(long *)(puVar5 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar4 != 0) {
      pdVar11 = (double *)(puVar5 + 0x20);
      do {
        dVar14 = *pdVar11;
        if (param_1 - dVar12 <= dVar14) {
          puVar6 = puVar8;
          func_0x000107c61558();
          puStack_88 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010134166c(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puStack_88 + 0x10);
          if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar1) {
            func_0x00010134166c(1 < *(ulong *)(puStack_88 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puStack_88 + 0x10) = uVar1 + 1;
          *(double *)(puStack_88 + uVar1 * 8 + 0x20) = dVar14;
          puVar8 = puStack_88;
        }
        lVar4 = lVar4 + -1;
        pdVar11 = pdVar11 + 1;
      } while (lVar4 != 0);
    }
    func_0x000107c6142c(puVar5);
    puVar6 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001014dd0d8(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    lVar4 = uVar1 + 1;
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001014dd0d8(puVar8,lVar4,1,puVar7);
    }
    *(long *)(puVar8 + 0x10) = lVar4;
    *(double *)(puVar8 + uVar1 * 8 + 0x20) = param_1;
    lVar9 = *(long *)(unaff_x20 + 0x10);
    if (lVar9 == 0) {
      func_0x000107c6142c(puVar8);
    }
    else {
      puStack_88 = puVar2;
      func_0x0001002ecff4(0,lVar4,0);
      lVar4 = uVar1 + 1;
      lVar10 = 0x20;
      do {
        puVar2 = puStack_88;
        uVar13 = *(undefined8 *)(puVar8 + lVar10);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c466c0(uVar13);
        uVar1 = *(ulong *)(puVar2 + 0x10);
        puStack_88 = puVar2;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x0001002ecff4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        puVar2 = puStack_88;
        *(ulong *)(puStack_88 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_88 + uVar1 * 8 + 0x20) = puVar6;
        lVar10 = lVar10 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar13 = 0;
      func_0x0001002ed07c(0);
      puVar6 = puVar2;
      func_0x000107c5fc48(puVar2,uVar13);
      func_0x000107c6142c(puVar2);
      uVar13 = 0xd000000000000027;
      func_0x000107c5fadc(0xd000000000000027,0x800000010f0a6bc0);
      func_0x000107c56bd8(lVar9);
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar13);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024de360);
  (*pcVar3)();
}



/* Entry: 1024de3a4; end: 1024de5f3;  */

undefined * FUN_1024de3a4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    uVar4 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0a6bc0);
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar5 = lVar10;
      func_0x000107c6148c(lVar10,puVar9);
      if (lVar5 == 0) {
        func_0x000107c615e8(lVar10);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000100e15a08();
        func_0x000107c601c0(auStack_90,lVar3,lVar5);
        puVar2 = PTR___sypN_11034f1a8;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_78 != 0) {
          func_0x000100102924(auStack_90,auStack_b0);
          func_0x0001000bb420(auStack_b0,auStack_d0);
          uVar4 = 0;
          func_0x0001002ed07c(0);
          puVar6 = &uStack_d8;
          func_0x000107c6147c(puVar6,auStack_d0,puVar2 + 8,uVar4,6);
          uVar4 = uStack_d8;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000100183ab8(auStack_b0);
          }
          else {
            func_0x000107c4223c(uStack_d8);
            uVar12 = param_1;
            func_0x000107c61170(uVar4);
            func_0x000100183ab8(auStack_b0);
            puVar7 = puVar9;
            func_0x000107c61558();
            puVar8 = puVar9;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001014dd0d8(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x0001014dd0d8(puVar9,uVar1 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
            *(undefined8 *)(puVar9 + uVar1 * 8 + 0x20) = param_1;
            param_1 = uVar12;
          }
          func_0x000107c601c0(auStack_90,lVar3,lVar5);
        }
        (**(code **)(lVar11 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
        func_0x000107c615e8(lVar10);
      }
    }
  }
  return puVar9;
}



/* Entry: 1024de5f4; end: 1024de63f;  */

void FUN_1024de5f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024de640; end: 1024de797;  */

void FUN_1024de640(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x646e756f6274756f;
  if (cVar3 != '\x01') {
    uVar1 = 0x646e756f626e69;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1024de798; end: 1024de80f;  */

void FUN_1024de798(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1024de810; end: 1024de863;  */

void FUN_1024de810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x646e756f6274756f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x646e756f626e69;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1024de864; end: 1024de89b;  */

void FUN_1024de864(undefined8 param_1)

{
  if (lRam0000000112ea1738 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6dec58);
  return;
}



/* Entry: 1024de89c; end: 1024de89f;  */

undefined8 FUN_1024de89c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = (long)puVar11 - extraout_x8_00;
  lVar13 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar12 - extraout_x8_01;
  uVar9 = *param_1;
  if (((uVar9 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  uVar9 = param_1[2];
  if (((uVar9 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  uVar9 = param_1[4];
  if (((uVar9 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  lVar5 = 0;
  FUN_1024de864();
  iVar3 = *(int *)(lVar5 + 0x1c);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar3,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar3,lVar10 + lVar13);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar6 = lVar10;
  (*pcVar15)(lVar10,1,lVar4);
  if ((int)lVar6 == 1) {
    lVar13 = lVar10 + lVar13;
    (*pcVar15)(lVar13,1,lVar4);
    if ((int)lVar13 != 1) {
LAB_1024dea94:
      FUN_1024df678(lVar10,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    FUN_1024df678(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar10,uVar12);
    lVar6 = lVar10 + lVar13;
    (*pcVar15)(lVar6,1,lVar4);
    if ((int)lVar6 == 1) {
      (**(code **)(lVar14 + 8))(uVar12,lVar4);
      goto LAB_1024dea94;
    }
    puVar7 = puVar11;
    (**(code **)(lVar14 + 0x20))(puVar11,lVar10 + lVar13,lVar4);
    func_0x000101553b98();
    uVar9 = uVar12;
    func_0x000107c5fab8(uVar12,puVar11,lVar4,puVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(puVar11,lVar4);
    (*pcVar15)(uVar12,lVar4);
    FUN_1024df678(lVar10,0x112d36580,&UNK_10d9016d0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) ==
      *(char *)((long)param_2 + (long)*(int *)(lVar5 + 0x20))) {
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    uVar12 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar12 != 0) {
        return 0;
      }
    }
    else {
      if (uVar12 == 0) {
        return 0;
      }
      uVar8 = *puVar1;
      if (((uVar8 != *puVar2) || (uVar9 != uVar12)) && (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    uVar12 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar12 != 0) {
        return 0;
      }
    }
    else {
      if (uVar12 == 0) {
        return 0;
      }
      uVar8 = *puVar1;
      if (((uVar8 != *puVar2) || (uVar9 != uVar12)) && (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
        return 0;
      }
    }
    param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
    uVar9 = param_1[1];
    param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    uVar12 = param_2[1];
    if (uVar9 == 0) {
      if (uVar12 == 0) {
        return 1;
      }
    }
    else if ((uVar12 != 0) &&
            (((uVar8 = *param_1, uVar8 == *param_2 && (uVar9 == uVar12)) ||
             (func_0x000107c605b8(), (uVar8 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1024de8a0; end: 1024dec2b;  */

undefined8 FUN_1024de8a0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = (long)puVar11 - extraout_x8_00;
  lVar13 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar12 - extraout_x8_01;
  uVar9 = *param_1;
  if (((uVar9 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  uVar9 = param_1[2];
  if (((uVar9 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  uVar9 = param_1[4];
  if (((uVar9 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
    return 0;
  }
  lVar5 = 0;
  FUN_1024de864();
  iVar3 = *(int *)(lVar5 + 0x1c);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar3,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar3,lVar10 + lVar13);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar6 = lVar10;
  (*pcVar15)(lVar10,1,lVar4);
  if ((int)lVar6 == 1) {
    lVar13 = lVar10 + lVar13;
    (*pcVar15)(lVar13,1,lVar4);
    if ((int)lVar13 != 1) {
LAB_1024dea94:
      FUN_1024df678(lVar10,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    FUN_1024df678(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar10,uVar12);
    lVar6 = lVar10 + lVar13;
    (*pcVar15)(lVar6,1,lVar4);
    if ((int)lVar6 == 1) {
      (**(code **)(lVar14 + 8))(uVar12,lVar4);
      goto LAB_1024dea94;
    }
    puVar7 = puVar11;
    (**(code **)(lVar14 + 0x20))(puVar11,lVar10 + lVar13,lVar4);
    func_0x000101553b98();
    uVar9 = uVar12;
    func_0x000107c5fab8(uVar12,puVar11,lVar4,puVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(puVar11,lVar4);
    (*pcVar15)(uVar12,lVar4);
    FUN_1024df678(lVar10,0x112d36580,&UNK_10d9016d0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) ==
      *(char *)((long)param_2 + (long)*(int *)(lVar5 + 0x20))) {
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    uVar12 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar12 != 0) {
        return 0;
      }
    }
    else {
      if (uVar12 == 0) {
        return 0;
      }
      uVar8 = *puVar1;
      if (((uVar8 != *puVar2) || (uVar9 != uVar12)) && (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    uVar12 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar12 != 0) {
        return 0;
      }
    }
    else {
      if (uVar12 == 0) {
        return 0;
      }
      uVar8 = *puVar1;
      if (((uVar8 != *puVar2) || (uVar9 != uVar12)) && (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
        return 0;
      }
    }
    param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
    uVar9 = param_1[1];
    param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    uVar12 = param_2[1];
    if (uVar9 == 0) {
      if (uVar12 == 0) {
        return 1;
      }
    }
    else if ((uVar12 != 0) &&
            (((uVar8 = *param_1, uVar8 == *param_2 && (uVar9 == uVar12)) ||
             (func_0x000107c605b8(), (uVar8 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1024dec2c; end: 1024dec2f;  */

void FUN_1024dec2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea16d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab3cc8;
  func_0x000107c61520(&UNK_10dab3cc8,&UNK_110517440);
  puRam0000000112ea16d8 = puVar1;
  return;
}



/* Entry: 1024dec30; end: 1024dec6f;  */

void FUN_1024dec30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea16d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab3cc8;
  func_0x000107c61520(&UNK_10dab3cc8,&UNK_110517440);
  puRam0000000112ea16d8 = puVar1;
  return;
}



/* Entry: 1024dec70; end: 1024dedeb;  */

long * FUN_1024dec70(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar12 = (long)*(int *)(param_3 + 0x1c);
    lVar9 = 0;
    func_0x000107c5ede0();
    lVar13 = *(long *)(lVar9 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar4);
    lVar10 = (long)param_2 + lVar12;
    (*pcVar14)(lVar10,1,lVar9);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar9);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,lVar9);
    }
    else {
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                          *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(param_3 + 0x24);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar7 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1024dedec; end: 1024dee9b;  */

/* WARNING: Possible PIC construction at 0x0001024dee0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dee68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024dee20) */
/* WARNING: Removing unreachable block (ram,0x0001024dee4c) */
/* WARNING: Removing unreachable block (ram,0x0001024dee5c) */
/* WARNING: Removing unreachable block (ram,0x0001024dee10) */
/* WARNING: Removing unreachable block (ram,0x0001024dee6c) */

void FUN_1024dedec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1024dee9c; end: 1024defeb;  */

undefined8 * FUN_1024dee9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar7 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  lVar8 = (long)param_2 + lVar9;
  (*pcVar11)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar7);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x24);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar6 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar4 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1024defec; end: 1024df1e3;  */

undefined8 * FUN_1024defec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[4] = param_2[4];
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_1024df120;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_1024df120;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_1024df120:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 1024df1e4; end: 1024df2d7;  */

undefined8 * FUN_1024df1e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 1024df2d8; end: 1024df46b;  */

undefined8 * FUN_1024df2d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  uVar3 = param_2[3];
  uVar5 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar5);
  uVar3 = param_2[5];
  uVar5 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  func_0x000107c6142c(uVar5);
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar6 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar9;
  (*pcVar11)(lVar7,1,lVar6);
  lVar8 = (long)param_2 + lVar9;
  (*pcVar11)(lVar8,1,lVar6);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      goto LAB_1024df3dc;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar6);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    goto LAB_1024df3dc;
  }
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                      *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
LAB_1024df3dc:
  iVar4 = *(int *)(param_3 + 0x24);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = param_2[1];
  uVar5 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  return param_1;
}



/* Entry: 1024df46c; end: 1024df483;  */

void FUN_1024df46c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1024df484; end: 1024df513;  */

void FUN_1024df484(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dab3d40;
  puStack_58 = &UNK_10dab3d40;
  puStack_50 = &UNK_10dab3d40;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dab3d58;
    puStack_38 = &UNK_10dab3d70;
    puStack_30 = &UNK_10dab3d70;
    puStack_28 = &UNK_10dab3d70;
    func_0x000107c6153c(param_1,0x100,8,&puStack_60,param_1 + 0x10);
  }
  return;
}



/* Entry: 1024df514; end: 1024df677;  */

int FUN_1024df514(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1024df590;
        goto LAB_1024df574;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1024df574:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1024df590:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1024df678; end: 1024df6b7;  */

undefined8 FUN_1024df678(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1024df6b8; end: 1024df707;  */

void FUN_1024df6b8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024df708; end: 1024df727;  */

void FUN_1024df708(void)

{
  func_0x000107c61168(&PTR_PTR_112ea17c8);
  return;
}



/* Entry: 1024df728; end: 1024df9db;  */

undefined * FUN_1024df728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4040000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1024df9dc; end: 1024dfb13;  */

undefined * FUN_1024df9dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  pcStack_40 = FUN_1024dfb14;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f9954c;
  puStack_48 = &UNK_1105174f8;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(uStack_38);
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c59a2c(puVar2,param_2,2);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar4 = puVar3;
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55260(puVar2,param_2,puVar4,0);
  func_0x000107c61170(puVar4);
  func_0x000107c5af9c(puVar3,param_2,0x1d8,1,1);
  func_0x000107c61180();
  func_0x000107c55260(puVar2,param_2,puVar3,4);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar2,param_2,0);
  return puVar2;
}



/* Entry: 1024dfb14; end: 1024dfb1b;  */

void FUN_1024dfb14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 1024dfb1c; end: 1024dfdab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024dfb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112ea1828;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  lVar2 = _DAT_113804720;
  lVar1 = 0;
  FUN_1024de864();
  lVar2 = unaff_x20 + lVar2;
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar2,1,1,lVar1);
  lVar1 = _DAT_112ea1830;
  FUN_1024df728();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar2 = _DAT_112ea1838;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c59c74(puVar3);
  func_0x000107c61170(puVar3);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea1840;
  func_0x0001024df7fc();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea1848;
  func_0x0001024df89c();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea1850;
  func_0x0001024df93c();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea1858;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4000000000000000,puVar3);
  func_0x000107c52610(puVar3);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea1860;
  FUN_1024df9dc();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea1868;
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55260(puVar3);
  func_0x000107c5a050(puVar3);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1870) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1024dfdac();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 1024dfdac; end: 1024e0603;  */

/* WARNING: Possible PIC construction at 0x0001024dfe04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dfe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dfe4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024dffac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e00a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e00e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e01bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e02d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e032c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e03dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e048c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e04e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e0590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e05d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e0594) */
/* WARNING: Removing unreachable block (ram,0x0001024e053c) */
/* WARNING: Removing unreachable block (ram,0x0001024e04e4) */
/* WARNING: Removing unreachable block (ram,0x0001024e0490) */
/* WARNING: Removing unreachable block (ram,0x0001024e0438) */
/* WARNING: Removing unreachable block (ram,0x0001024e03e0) */
/* WARNING: Removing unreachable block (ram,0x0001024e0388) */
/* WARNING: Removing unreachable block (ram,0x0001024e0330) */
/* WARNING: Removing unreachable block (ram,0x0001024e02d8) */
/* WARNING: Removing unreachable block (ram,0x0001024e0284) */
/* WARNING: Removing unreachable block (ram,0x0001024e0238) */
/* WARNING: Removing unreachable block (ram,0x0001024e0204) */
/* WARNING: Removing unreachable block (ram,0x0001024e01c0) */
/* WARNING: Removing unreachable block (ram,0x0001024e016c) */
/* WARNING: Removing unreachable block (ram,0x0001024e011c) */
/* WARNING: Removing unreachable block (ram,0x0001024e00e8) */
/* WARNING: Removing unreachable block (ram,0x0001024e00ac) */
/* WARNING: Removing unreachable block (ram,0x0001024e0054) */
/* WARNING: Removing unreachable block (ram,0x0001024dffb0) */
/* WARNING: Removing unreachable block (ram,0x0001024dfe50) */
/* WARNING: Removing unreachable block (ram,0x0001024dfe2c) */
/* WARNING: Removing unreachable block (ram,0x0001024dfe08) */
/* WARNING: Removing unreachable block (ram,0x0001024e05d4) */

void FUN_1024dfdac(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1024e0604; end: 1024e0623; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView initWithFrame:] */

void FUN_1024e0604(void)

{
  FUN_1024dfb1c();
  return;
}



/* Entry: 1024e0624; end: 1024e064b; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView initWithCoder:] */

void FUN_1024e0624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1024e14d4();
  return;
}



/* Entry: 1024e064c; end: 1024e100f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e064c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar13 = 0x112ea18b8;
  uStack_8c = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  func_0x0001000285a8(0x112ea18b8,&UNK_10dab3e80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  func_0x0001024e1440(param_1,puVar9);
  lVar4 = 0;
  FUN_1024de864();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,0,1,lVar4);
  lVar13 = _DAT_113804720;
  uVar8 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_113804720,&uStack_78,0x21,0);
  func_0x0001024e1484(puVar9,unaff_x20 + lVar13);
  func_0x000107c614a8(&uStack_78);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea1840);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = uVar5;
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c59c6c(uVar10);
  func_0x000107c61170(uVar12);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea1848);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5fadc(uVar12,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c59c6c(uVar10);
  func_0x000107c61170(uVar12);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea1838);
  func_0x000107c61434(uVar7);
  uVar10 = 1;
  uVar12 = uVar7;
  func_0x000101297580(1,uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb2c(uVar10,uVar5,uVar12,uVar8);
  func_0x000107c6142c(uVar8);
  uVar12 = uVar5;
  func_0x000107c5fb24(uVar10,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(uVar10,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c59c6c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c550d8(uVar11);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea1830);
  uStack_98 = uVar5;
  func_0x000107c55258();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ea1850);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    func_0x000107c59c6c(uVar12);
    lVar14 = -0x2000000000000000;
  }
  else {
    uStack_78 = *puVar1;
    lStack_70 = lVar13;
    func_0x000100e8b654();
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c601ec(PTR___sSSN_11034da80,uVar5);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
    func_0x000107c59c6c(uVar12);
    func_0x000107c61170(puVar6);
    lVar14 = lVar13;
  }
  func_0x000107c61434(lVar13);
  func_0x000107c6142c(lVar14);
  func_0x000107c550d8(uVar12);
  cVar2 = *(char *)(param_1 + *(int *)(lVar4 + 0x20));
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea1860);
  lVar13 = 0x656363615f617463;
  if (cVar2 != '\0') {
    lVar13 = 0x6464615f617463;
  }
  uVar12 = 0xea00000000007470;
  if (cVar2 != '\0') {
    uVar12 = 0xe700000000000000;
  }
  func_0x000107c5fadc(lVar13,uVar12);
  func_0x000107c6142c(uVar12);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0a6c00);
  uVar7 = 0;
  func_0x000107c5fe40(0);
  lVar4 = lVar13;
  func_0x0001000f6108(lVar13,uVar12,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  if (lVar4 != 0) {
    func_0x000107c59e1c(uVar5);
    func_0x000107c61170(lVar4);
    lVar13 = 0x656363615f617463;
    if (cVar2 != '\0') {
      lVar13 = 0x656464615f617463;
    }
    uVar12 = 0xec00000064657470;
    if (cVar2 != '\0') {
      uVar12 = 0xe900000000000064;
    }
    func_0x000107c5fadc(lVar13,uVar12);
    func_0x000107c6142c(uVar12);
    uVar12 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f0a6c00);
    uVar7 = 0;
    func_0x000107c5fe40(0);
    lVar4 = lVar13;
    func_0x0001000f6108(lVar13,uVar12,uVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar7);
    if (lVar4 != 0) {
      func_0x000107c59e1c(uVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c58dd8(uVar5);
      func_0x000107c5a378(uVar5);
      func_0x000107c5a378(uStack_98);
      func_0x0001024e0ae8(param_1,uStack_88,uStack_80);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e0ae8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e0ae4);
  (*pcVar3)();
}



/* Entry: 1024e1010; end: 1024e112f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e1010(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      puVar1 = (ulong *)(param_2 + _DAT_113804720);
      func_0x000107c61428(puVar1,auStack_70,0,0);
      lVar2 = 0;
      FUN_1024de864();
      puVar3 = puVar1;
      (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar1,1,lVar2);
      if ((int)puVar3 == 0) {
        uVar4 = *puVar1;
        if ((uVar4 == param_3 && puVar1[1] == param_4) ||
           (func_0x000107c605b8(uVar4,puVar1[1],param_3,param_4,0), (uVar4 & 1) != 0)) {
          uVar5 = *(undefined8 *)(param_2 + _DAT_112ea1830);
          func_0x000107c61174(param_1);
          func_0x000107c55258(uVar5);
          func_0x000107c550d8(*(undefined8 *)(param_2 + _DAT_112ea1838));
          func_0x000107c61170(param_2);
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024e1130; end: 1024e113b; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView didTapAdd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e1130(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ea1870) & 1) == 0) {
    lVar1 = param_1 + _DAT_112ea1828;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      (*(code *)0x1024e7b1c)();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1024e113c; end: 1024e1147; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView didTapDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e113c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ea1870) & 1) == 0) {
    lVar1 = param_1 + _DAT_112ea1828;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      (*(code *)0x1024e7b28)();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1024e1148; end: 1024e1153; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView didTapProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e1148(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ea1870) & 1) == 0) {
    lVar1 = param_1 + _DAT_112ea1828;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      (*(code *)0x1024e7d60)();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1024e1154; end: 1024e11d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e1154(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ea1870) & 1) == 0) {
    lVar1 = param_1 + _DAT_112ea1828;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      (*param_3)();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1024e11d4; end: 1024e11d7; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView absorbCardTap] */

void FUN_1024e11d4(void)

{
  return;
}



/* Entry: 1024e11d8; end: 1024e120b;  */

void FUN_1024e11d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024e120c; end: 1024e12d3; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024e1258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e1278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e1298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e12b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e129c) */
/* WARNING: Removing unreachable block (ram,0x0001024e127c) */
/* WARNING: Removing unreachable block (ram,0x0001024e125c) */
/* WARNING: Removing unreachable block (ram,0x0001024e12bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e120c(long param_1)

{
  FUN_1024e1760(param_1 + _DAT_112ea1828);
  func_0x0001024e1784(param_1 + _DAT_113804720,0x112ea18b8,&UNK_10dab3e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1830));
  return;
}



/* Entry: 1024e12d4; end: 1024e12db;  */

void FUN_1024e12d4(void)

{
  if (lRam0000000112ea18a0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6ded48);
  return;
}


