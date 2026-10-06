/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10378167c; end: 10378183f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10378167c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x98) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001037817f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + _DAT_112fe20e0);
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  func_0x000107c61174();
  func_0x000107c44580();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_112fe2098);
  *(undefined **)(unaff_x22 + 0x30) = &UNK_11068f240;
  *(undefined ***)(unaff_x22 + 0x38) = &PTR_DAT_11068f3a0;
  puVar1 = &UNK_110691080;
  func_0x000107c613fc(&UNK_110691080,0x48,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  FUN_1037617a8(lVar4 + 0x40,puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  uVar3 = *(ulong *)(*(long *)(lVar4 + 0x10) + _DAT_112fec058);
  if (uVar3 < 3) {
    plVar7 = (long *)0x430;
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_103781840;
    plVar7[0x7c] = unaff_x22 + 0x10;
    *(char *)((long)plVar7 + 0x2ba) = (char)(0x30200 >> (ulong)((uint)(uVar3 << 3) & 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10377fa48,0,0);
    return;
  }
  uVar2 = 0x112f91678;
  func_0x0001000285a8(0x112f91678,&UNK_10dc09e78);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss27_diagnoseUnexpectedEnumCase4types5NeverOxm_tlF_11034ec80)(uVar2,uVar2);
  return;
}



/* Entry: 103781840; end: 1037818a3;  */

void FUN_103781840(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    FUN_103781ce0(lVar2 + 0x10);
    pcVar1 = FUN_1037818a4;
  }
  else {
    pcVar1 = FUN_10378192c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1037818a4; end: 10378192b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037818a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = _DAT_112fec060;
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112fec060,unaff_x22 + 0x78,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  if (lVar3 != 0) {
    func_0x000107c4eda4();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103781928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10378192c; end: 1037819f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10378192c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  FUN_103781ce0(unaff_x22 + 0x10);
  lVar1 = _DAT_112fec060;
  lVar3 = *(long *)(lVar3 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112fec060,unaff_x22 + 0x60,0,0);
  lVar1 = lVar3 + lVar1;
  func_0x000107c61618();
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  if (lVar1 == 0) {
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000107c61174(lVar3);
    func_0x000107c4eda4(lVar1);
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001037819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037819f4; end: 103781a47;  */

void FUN_1037819f4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103781a48;
  plVar1[0x12] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10378167c,0,0);
  return;
}



/* Entry: 103781a48; end: 103781ad7;  */

void FUN_103781a48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103781a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103781ad8; end: 103781af7;  */

void FUN_103781ad8(void)

{
  FUN_1037811c4();
  return;
}



/* Entry: 103781af8; end: 103781aff;  */

undefined8 FUN_103781af8(void)

{
  return 0;
}



/* Entry: 103781b00; end: 103781b1f;  */

void FUN_103781b00(void)

{
  func_0x000107c61168(&PTR_PTR_112f915e8);
  return;
}



/* Entry: 103781b20; end: 103781b83;  */

void FUN_103781b20(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103781b84;
                    /* WARNING: Could not recover jumptable at 0x000103781b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 103781b84; end: 103781bc3;  */

void FUN_103781b84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103781bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103781bc4; end: 103781c33;  */

void FUN_103781bc4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103781d60;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_103781b84;
                    /* WARNING: Could not recover jumptable at 0x000103781b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103781c34; end: 103781ca3;  */

void FUN_103781c34(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103781ca4;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_103781b84;
                    /* WARNING: Could not recover jumptable at 0x000103781b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103781ca4; end: 103781cdf;  */

void FUN_103781ca4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103781cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103781ce0; end: 103781d13;  */

undefined8 FUN_103781ce0(undefined8 param_1)

{
  (*(code *)(undefined *)0x10378092c)();
  return param_1;
}



/* Entry: 103781d14; end: 103781d57;  */

void FUN_103781d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91680 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad6f0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f91680 = puVar1;
  return;
}



/* Entry: 103781d58; end: 103781d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103781d58(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  FUN_103781ce0(unaff_x22 + 0x10);
  lVar1 = _DAT_112fec060;
  lVar3 = *(long *)(lVar3 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112fec060,unaff_x22 + 0x60,0,0);
  lVar1 = lVar3 + lVar1;
  func_0x000107c61618();
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  if (lVar1 == 0) {
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000107c61174(lVar3);
    func_0x000107c4eda4(lVar1);
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001037819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103781d6c; end: 103782107;  */

undefined *
FUN_103781d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar10;
  long alStack_d0 [2];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  puVar3 = (undefined8 *)0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&puStack_c0 + -extraout_x8;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001048d88f4(0xd00000000000001c,0x800000010f164200);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000019;
  func_0x000100029b28(0xd000000000000019,0x800000010f164220);
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(&puStack_c0);
  puVar6 = puStack_c0;
  func_0x000107c5ab84();
  iVar2 = (int)puStack_c0;
  func_0x000107c615e8();
  func_0x000107c30abc();
  if (iVar2 == 0) {
    func_0x000107c5fcf4(lVar10);
    lVar7 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar10,0,1,lVar7);
    puVar8 = &UNK_1106911c8;
    func_0x000107c613fc(&UNK_1106911c8,0x58,7);
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0;
    *(undefined8 *)(puVar8 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar8 + 0x28) = param_1;
    *(undefined8 *)(puVar8 + 0x30) = param_2;
    puVar8[0x38] = (char)puVar6;
    *(undefined8 *)(puVar8 + 0x40) = uVar5;
    *(undefined8 *)(puVar8 + 0x48) = param_3;
    *(undefined8 *)(puVar8 + 0x50) = param_4;
    func_0x000107c615f0(param_2);
    func_0x000107c6157c();
    func_0x000107c61434(param_1);
    func_0x000107c6157c(param_4);
    uVar5 = 0;
    func_0x0001000abba4(0,0,lVar10,&UNK_10dc09f90,puVar8);
    puVar6 = PTR_PTR_1126afd78;
    func_0x000107c610f8();
    pcStack_a0 = (code *)0x103787220;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_1106911e0;
    ppuVar9 = &puStack_c0;
    uStack_98 = uVar5;
    func_0x000107c60bc4(ppuVar9);
    uVar4 = uStack_98;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar4);
    func_0x000107c45b74();
    func_0x000107c60bd0(ppuVar9);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103782108);
      (*pcVar1)();
    }
  }
  else {
    puVar8 = &UNK_110691218;
    func_0x000107c613fc(&UNK_110691218,0x48,7);
    *(undefined8 *)(puVar8 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    puVar8[0x28] = (char)puVar6;
    *(undefined8 *)(puVar8 + 0x30) = uVar5;
    *(undefined8 *)(puVar8 + 0x38) = param_3;
    *(undefined8 *)(puVar8 + 0x40) = param_4;
    func_0x000107c615f0(param_2);
    func_0x000107c6157c();
    func_0x000107c61434(param_1);
    func_0x000107c6157c(param_4);
    *(undefined **)((long)alStack_d0 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
    uVar5 = 4;
    func_0x0001001ca524(4,0,100,3,0,0,&UNK_10dc09fa0,puVar8);
    func_0x000107c61574(puVar8);
    puVar6 = PTR_PTR_1126afd78;
    func_0x000107c610f8();
    pcStack_a0 = FUN_103787018;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_110691230;
    ppuVar9 = &puStack_c0;
    uStack_98 = uVar5;
    func_0x000107c60bc4(ppuVar9);
    uVar4 = uStack_98;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar4);
    func_0x000107c45b74();
    func_0x000107c60bd0(ppuVar9);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103781fb8);
      (*pcVar1)();
    }
  }
  func_0x000107c61574(uVar5);
  return puVar6;
}



/* Entry: 103782108; end: 1037821c3;  */

void FUN_103782108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x278) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_3;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x1e0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  lVar1 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  *(long *)(unaff_x22 + 0x1f8) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  lVar1 = 0;
  FUN_10378d110();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037821c4,0,0);
  return;
}



/* Entry: 1037821c4; end: 1037823c3;  */

/* WARNING: Removing unreachable block (ram,0x0001037821ec) */
/* WARNING: Removing unreachable block (ram,0x0001037822d4) */
/* WARNING: Removing unreachable block (ram,0x0001037822e4) */
/* WARNING: Removing unreachable block (ram,0x000103782320) */
/* WARNING: Removing unreachable block (ram,0x000103782230) */
/* WARNING: Removing unreachable block (ram,0x000103782384) */

void FUN_1037821c4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x210) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1037823c4;
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  plVar2[0x2e] = *(long *)(unaff_x22 + 0x1b8);
  plVar2[0x2f] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783988,0,0);
  return;
}



/* Entry: 1037823c4; end: 10378242f;  */

void FUN_1037823c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x218) = param_1;
  *(undefined8 *)(lVar2 + 0x220) = param_2;
  *(undefined8 *)(lVar2 + 0x228) = param_3;
  *(long *)(lVar2 + 0x230) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103782430;
  }
  else {
    pcVar1 = FUN_10378346c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103782430; end: 103782b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103782430(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar12 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar6 = uVar12;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010379078c(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103782b34);
      (*pcVar1)();
    }
    if ((uVar12 & 0xc000000000000001) == 0) {
      plVar10 = (long *)(*(long *)(unaff_x22 + 0x228) + 0x20);
      do {
        lVar7 = _DAT_112fe2200;
        lVar15 = *plVar10;
        func_0x000107c61428(lVar15 + _DAT_112fe2200,unaff_x22 + 0x170,0,0);
        uVar3 = *(undefined8 *)(lVar15 + lVar7);
        uVar12 = *(ulong *)(puVar5 + 0x10);
        uVar2 = *(ulong *)(puVar5 + 0x18);
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar12) {
          func_0x00010379078c(1 < uVar2,uVar12 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar12 + 1;
        *(undefined8 *)(puVar5 + uVar12 * 8 + 0x20) = uVar3;
        uVar6 = uVar6 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar12 = 0;
      do {
        uVar2 = uVar12;
        FUN_10378e588(uVar12,*(undefined8 *)(unaff_x22 + 0x228));
        lVar7 = _DAT_112fe2200;
        func_0x000107c61428(uVar2 + _DAT_112fe2200,unaff_x22 + 0x140,0,0);
        uVar3 = *(undefined8 *)(uVar2 + lVar7);
        func_0x000107c61174();
        func_0x000107c615e8(uVar2);
        uVar2 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          func_0x00010379078c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar5 + uVar2 * 8 + 0x20) = uVar3;
      } while (uVar6 != uVar12);
    }
  }
  lVar7 = *(long *)(unaff_x22 + 0x220);
  if (lVar7 == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = *(undefined8 **)(unaff_x22 + 0x218);
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(puVar13,lVar7);
    func_0x000107c6142c(lVar7);
  }
  lVar7 = *(long *)(unaff_x22 + 0x1c0);
  puVar8 = PTR_PTR_1126c0a88;
  func_0x000107c610f8();
  uVar3 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  func_0x000107c48250();
  *(undefined **)(unaff_x22 + 0x238) = puVar8;
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if ((lVar7 == 0) || ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
    puVar14 = *(undefined8 **)(unaff_x22 + 0x230);
    func_0x000107c5fd64();
    puVar8 = *(undefined **)(unaff_x22 + 0x238);
    if (puVar14 == (undefined8 *)0x0) {
      pcVar1 = *(code **)(unaff_x22 + 0x1d0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
      lVar7 = *(long *)(unaff_x22 + 0x1b0);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar13;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar11);
      func_0x000107c61170(uVar3);
      puVar5 = puVar8;
      func_0x000107c61174(puVar8);
      (*pcVar1)(puVar8,0);
      func_0x000107c61170(puVar5);
      lVar7 = *(long *)(lVar7 + 0x48);
      *(long *)(unaff_x22 + 0x250) = lVar7;
      if (lVar7 == 0) {
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
        lVar7 = *(long *)(unaff_x22 + 0x1c0);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
        lVar15 = *(long *)(unaff_x22 + 0x208);
        lVar17 = *(long *)(unaff_x22 + 0x1b0);
        uVar3 = *(undefined8 *)(lVar17 + 0x80);
        func_0x000107c61174(uVar3);
        func_0x000107c61174(lVar7);
        FUN_103789d40(lVar15,uVar3);
        uVar3 = *(undefined8 *)(lVar15 + 0x20);
        func_0x000107c61434(uVar11);
        func_0x000107c6142c(uVar3);
        *(undefined8 *)(lVar15 + 0x20) = uVar11;
        func_0x000107c6142c(*(undefined8 *)(lVar15 + 0x38));
        *(undefined8 *)(lVar15 + 0x30) = uVar16;
        *(undefined8 *)(lVar15 + 0x38) = uVar9;
        lVar7 = *(long *)(lVar17 + 0x50);
        *(long *)(unaff_x22 + 600) = lVar7;
        if (lVar7 != 0) {
          *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x198;
          *(long *)(unaff_x22 + 0x50) = unaff_x22;
          *(code **)(unaff_x22 + 0x58) = FUN_103782ff0;
          lVar15 = unaff_x22 + 0x50;
          func_0x000107c61448(lVar15,1);
          uVar3 = 0x112f91760;
          func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
          *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
          *(code **)(unaff_x22 + 0xe0) = FUN_10379511c;
          *(undefined **)(unaff_x22 + 0xe8) = &UNK_110691280;
          *(long *)(unaff_x22 + 0xf0) = lVar15;
          func_0x000107c507e4(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
          return;
        }
        puVar13 = *(undefined8 **)(unaff_x22 + 0x208);
        func_0x000107c6142c(puVar13[1]);
        *puVar13 = 0;
        puVar13[1] = 0;
        uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
        lVar7 = *(long *)(unaff_x22 + 0x208);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
        func_0x000107c6142c(*(undefined8 *)(lVar7 + 0x18));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        FUN_10378703c(lVar7,uVar11);
        func_0x000107c6159c(uVar11,uVar3,0);
        FUN_103789e1c(uVar11);
        func_0x000107c61170(uVar9);
        FUN_103787190(uVar11,0x112f91758,&UNK_10dc09fa8);
        func_0x000103787080(lVar7);
        lVar7 = *(long *)(unaff_x22 + 0x1c0);
      }
      if ((lVar7 != 0) && ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
        plVar10 = (long *)0x70;
        func_0x000107c615f0(lVar7);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x270) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_1037833bc;
        lVar15 = *(long *)(unaff_x22 + 0x228);
        lVar17 = *(long *)(unaff_x22 + 0x1b0);
        goto LAB_103782aa8;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
      func_0x000107c6142c(uVar3);
      goto LAB_103782ad8;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x1c0);
    puVar14 = *(undefined8 **)(unaff_x22 + 0x230);
    func_0x000107c615f0(lVar7);
    func_0x000107c5fd64();
    *(undefined8 **)(unaff_x22 + 0x240) = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      plVar10 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x248) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_103782b34;
      lVar15 = *(long *)(unaff_x22 + 0x228);
      lVar17 = *(long *)(unaff_x22 + 0x1b0);
LAB_103782aa8:
      plVar10[9] = lVar7;
      plVar10[10] = lVar17;
      plVar10[8] = lVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c6142c(uVar3);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 **)(unaff_x22 + 0x1a8) = puVar14;
  func_0x000107c614b0(puVar14);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar11,unaff_x22 + 0x1a8,uVar3,uVar9,0);
  if ((int)uVar11 == 0) {
    puVar13 = *(undefined8 **)(unaff_x22 + 0x1a8);
    lVar7 = *(long *)(unaff_x22 + 0x1b0);
    func_0x000107c614ac();
    if (*(long *)(lVar7 + 0x48) != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
      puVar13 = *(undefined8 **)(unaff_x22 + 0x200);
      *puVar13 = puVar14;
      func_0x000107c6159c(puVar13,uVar3,1);
      func_0x000107c614b0(puVar14);
      FUN_103789e1c(puVar13);
      FUN_103787190(puVar13,0x112f91758,&UNK_10dc09fa8);
    }
    pcVar1 = *(code **)(unaff_x22 + 0x1d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar13;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c614b0(puVar14);
    (*pcVar1)(0,puVar14);
    func_0x000107c614ac(puVar14);
    func_0x000107c614ac(puVar14);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x1e8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x000107c614ac();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar11 = *puVar14;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uVar9);
    func_0x000107c61170(uVar11);
    (**(code **)(lVar7 + 8))(uVar3,uVar16);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
  }
LAB_103782ad8:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103782b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103782b34; end: 103782b7b;  */

void FUN_103782b34(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103782b7c,0,0);
  return;
}



/* Entry: 103782b7c; end: 103782fef;  */

void FUN_103782b7c(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1c0);
  func_0x000107c615e8();
  puVar8 = *(undefined8 **)(unaff_x22 + 0x240);
  func_0x000107c5fd64();
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    pcVar1 = *(code **)(unaff_x22 + 0x1d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
    lVar11 = *(long *)(unaff_x22 + 0x1b0);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
    func_0x000107c61174(uVar5);
    (*pcVar1)(uVar5,0);
    func_0x000107c61170(uVar3);
    lVar11 = *(long *)(lVar11 + 0x48);
    *(long *)(unaff_x22 + 0x250) = lVar11;
    if (lVar11 == 0) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
      lVar11 = *(long *)(unaff_x22 + 0x1c0);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar9 = *(long *)(unaff_x22 + 0x208);
      lVar12 = *(long *)(unaff_x22 + 0x1b0);
      uVar3 = *(undefined8 *)(lVar12 + 0x80);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(lVar11);
      FUN_103789d40(lVar9,uVar3);
      uVar3 = *(undefined8 *)(lVar9 + 0x20);
      func_0x000107c61434(uVar5);
      func_0x000107c6142c(uVar3);
      *(undefined8 *)(lVar9 + 0x20) = uVar5;
      func_0x000107c6142c(*(undefined8 *)(lVar9 + 0x38));
      *(undefined8 *)(lVar9 + 0x30) = uVar10;
      *(undefined8 *)(lVar9 + 0x38) = uVar7;
      lVar11 = *(long *)(lVar12 + 0x50);
      *(long *)(unaff_x22 + 600) = lVar11;
      if (lVar11 != 0) {
        *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x198;
        *(long *)(unaff_x22 + 0x50) = unaff_x22;
        *(code **)(unaff_x22 + 0x58) = FUN_103782ff0;
        lVar9 = unaff_x22 + 0x50;
        func_0x000107c61448(lVar9,1);
        uVar3 = 0x112f91760;
        func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
        *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
        *(code **)(unaff_x22 + 0xe0) = FUN_10379511c;
        *(undefined **)(unaff_x22 + 0xe8) = &UNK_110691280;
        *(long *)(unaff_x22 + 0xf0) = lVar9;
        func_0x000107c507e4(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
        return;
      }
      puVar8 = *(undefined8 **)(unaff_x22 + 0x208);
      func_0x000107c6142c(puVar8[1]);
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
      lVar11 = *(long *)(unaff_x22 + 0x208);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
      func_0x000107c6142c(*(undefined8 *)(lVar11 + 0x18));
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      FUN_10378703c(lVar11,uVar5);
      func_0x000107c6159c(uVar5,uVar3,0);
      FUN_103789e1c(uVar5);
      func_0x000107c61170(uVar7);
      FUN_103787190(uVar5,0x112f91758,&UNK_10dc09fa8);
      func_0x000103787080(lVar11);
      lVar11 = *(long *)(unaff_x22 + 0x1c0);
    }
    if ((lVar11 != 0) && ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
      plVar4 = (long *)0x70;
      func_0x000107c615f0(lVar11);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x270) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1037833bc;
      lVar9 = *(long *)(unaff_x22 + 0x228);
      lVar12 = *(long *)(unaff_x22 + 0x1b0);
      plVar4[9] = lVar11;
      plVar4[10] = lVar12;
      plVar4[8] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
    func_0x000107c6142c(uVar3);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(uVar3);
    uVar6 = *(ulong *)(unaff_x22 + 0x1f0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 **)(unaff_x22 + 0x1a8) = puVar8;
    func_0x000107c614b0(puVar8);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar6,unaff_x22 + 0x1a8,uVar3,uVar5,0);
    if ((uVar6 & 1) == 0) {
      puVar2 = *(undefined8 **)(unaff_x22 + 0x1a8);
      lVar11 = *(long *)(unaff_x22 + 0x1b0);
      func_0x000107c614ac();
      if (*(long *)(lVar11 + 0x48) != 0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
        puVar2 = *(undefined8 **)(unaff_x22 + 0x200);
        *puVar2 = puVar8;
        func_0x000107c6159c(puVar2,uVar3,1);
        func_0x000107c614b0(puVar8);
        FUN_103789e1c(puVar2);
        FUN_103787190(puVar2,0x112f91758,&UNK_10dc09fa8);
      }
      pcVar1 = *(code **)(unaff_x22 + 0x1d0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c614b0(puVar8);
      (*pcVar1)(0,puVar8);
      func_0x000107c614ac(puVar8);
      func_0x000107c614ac(puVar8);
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0x1e8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x000107c614ac();
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar5 = *puVar8;
      func_0x000107c61174(uVar5);
      func_0x000100069b5c(uVar7);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar11 + 8))(uVar3,uVar10);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103782fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103782ff0; end: 103783047;  */

void FUN_103782ff0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x260) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103783048;
  }
  else {
    pcVar1 = FUN_103783624;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103783048; end: 103783227;  */

void FUN_103783048(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar7 = *(long *)(unaff_x22 + 600);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x208);
  func_0x000107c6142c(puVar8[1]);
  *puVar8 = uVar6;
  puVar8[1] = uVar3;
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 600);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x188;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103783228;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,1);
    uVar6 = 0x112f91760;
    func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(code **)(unaff_x22 + 0xa0) = FUN_10379511c;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_110691258;
    *(long *)(unaff_x22 + 0xb0) = lVar7;
    func_0x000107c507e4(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar7 = *(long *)(unaff_x22 + 0x208);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar7 + 0x18));
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  FUN_10378703c(lVar7,uVar3);
  func_0x000107c6159c(uVar3,uVar6,0);
  FUN_103789e1c(uVar3);
  func_0x000107c61170(uVar4);
  FUN_103787190(uVar3,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar7);
  lVar7 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar7 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar2 = (long *)0x70;
    func_0x000107c615f0(lVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1037833bc;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar5 = *(long *)(unaff_x22 + 0x1b0);
    plVar2[9] = lVar7;
    plVar2[10] = lVar5;
    plVar2[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar6);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103783224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103783228; end: 10378327f;  */

void FUN_103783228(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x268) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103783280;
  }
  else {
    pcVar1 = FUN_103783824;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103783280; end: 1037833bb;  */

void FUN_103783280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar4 = *(long *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x18));
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  FUN_10378703c(lVar4,uVar2);
  func_0x000107c6159c(uVar2,uVar9,0);
  FUN_103789e1c(uVar2);
  func_0x000107c61170(uVar6);
  FUN_103787190(uVar2,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar4);
  lVar4 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar4 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar5 = (long *)0x70;
    func_0x000107c615f0(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1037833bc;
    lVar3 = *(long *)(unaff_x22 + 0x228);
    lVar7 = *(long *)(unaff_x22 + 0x1b0);
    plVar5[9] = lVar4;
    plVar5[10] = lVar7;
    plVar5[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001037833b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037833bc; end: 10378340f;  */

void FUN_1037833bc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x228);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x270));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783410,0,0);
  return;
}



/* Entry: 103783410; end: 10378346b;  */

void FUN_103783410(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c615e8(uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103783468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10378346c; end: 103783623;  */

void FUN_10378346c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x230);
  uVar6 = *(ulong *)(unaff_x22 + 0x1f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 **)(unaff_x22 + 0x1a8) = puVar4;
  func_0x000107c614b0(puVar4);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar6,unaff_x22 + 0x1a8,uVar5,uVar8,0);
  if ((uVar6 & 1) == 0) {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x1a8);
    lVar1 = *(long *)(unaff_x22 + 0x1b0);
    func_0x000107c614ac();
    if (*(long *)(lVar1 + 0x48) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
      puVar3 = *(undefined8 **)(unaff_x22 + 0x200);
      *puVar3 = puVar4;
      func_0x000107c6159c(puVar3,uVar5,1);
      func_0x000107c614b0(puVar4);
      FUN_103789e1c(puVar3);
      FUN_103787190(puVar3,0x112f91758,&UNK_10dc09fa8);
    }
    pcVar2 = *(code **)(unaff_x22 + 0x1d0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar5 = *puVar3;
    func_0x000107c61174(uVar5);
    func_0x000100069b5c(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c614b0(puVar4);
    (*pcVar2)(0,puVar4);
    func_0x000107c614ac(puVar4);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x1e8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x000107c614ac();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar8 = *puVar4;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar8);
    (**(code **)(lVar1 + 8))(uVar5,uVar9);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x1a8);
  }
  func_0x000107c614ac(puVar4);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103783620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103783624; end: 103783823;  */

void FUN_103783624(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  func_0x000107c61654();
  func_0x000107c614ac(uVar4);
  lVar5 = *(long *)(unaff_x22 + 600);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x208);
  func_0x000107c6142c(puVar2[1]);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x188;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103783228;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,1);
    uVar4 = 0x112f91760;
    func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(code **)(unaff_x22 + 0xa0) = FUN_10379511c;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_110691258;
    *(long *)(unaff_x22 + 0xb0) = lVar5;
    func_0x000107c507e4(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar5 = *(long *)(unaff_x22 + 0x208);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar5 + 0x18));
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  FUN_10378703c(lVar5,uVar6);
  func_0x000107c6159c(uVar6,uVar4,0);
  FUN_103789e1c(uVar6);
  func_0x000107c61170(uVar7);
  FUN_103787190(uVar6,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar5);
  lVar5 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar5 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar3 = (long *)0x70;
    func_0x000107c615f0(lVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1037833bc;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar8 = *(long *)(unaff_x22 + 0x1b0);
    plVar3[9] = lVar5;
    plVar3[10] = lVar8;
    plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar4);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103783820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103783824; end: 10378396f;  */

void FUN_103783824(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  func_0x000107c61654();
  func_0x000107c614ac(uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar2 = *(long *)(unaff_x22 + 0x208);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x18));
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  FUN_10378703c(lVar2,uVar7);
  func_0x000107c6159c(uVar7,uVar4,0);
  FUN_103789e1c(uVar7);
  func_0x000107c61170(uVar5);
  FUN_103787190(uVar7,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar2);
  lVar2 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar2 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar3 = (long *)0x70;
    func_0x000107c615f0(lVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1037833bc;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar6 = *(long *)(unaff_x22 + 0x1b0);
    plVar3[9] = lVar2;
    plVar3[10] = lVar6;
    plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar4);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010378396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103783970; end: 103783987;  */

void FUN_103783970(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
  *(undefined8 *)(unaff_x22 + 0x178) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783988,0,0);
  return;
}



/* Entry: 103783988; end: 103783bd3;  */

void FUN_103783988(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x170);
  lVar3 = *(long *)(unaff_x22 + 0x178);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x180) = param_1;
  func_0x000107c61428();
  uVar6 = *param_1;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000018;
  func_0x000100029b28(0xd000000000000018,0x800000010f1641e0);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar7;
  func_0x000107c61170(uVar6);
  FUN_103786c9c(lVar3 + 0x10,unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x0001000a8868(unaff_x22 + 0xa0,uVar6);
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x170)) {
      uVar10 = *(ulong *)(unaff_x22 + 0x170);
    }
    func_0x000107c60480();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    func_0x00010379071c(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103783bd4);
      (*pcVar5)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      puVar12 = (undefined8 *)(*(long *)(unaff_x22 + 0x170) + 0x20);
      do {
        func_0x000107c61174(*puVar12);
        func_0x000103aa67f0(unaff_x22 + 0x40);
        uVar11 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
          func_0x00010379071c(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(puVar4 + 0x10) = uVar11 + 1;
        uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x59);
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x41) = *(undefined8 *)(unaff_x22 + 0x61);
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x39) = uVar16;
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x28) = uVar13;
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x20) = uVar7;
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x38) = uVar15;
        *(undefined8 *)(puVar4 + uVar11 * 0x30 + 0x30) = uVar14;
        uVar10 = uVar10 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar10 != 0);
    }
    else {
      uVar11 = 0;
      do {
        func_0x000102424840(uVar11,*(undefined8 *)(unaff_x22 + 0x170));
        func_0x000103aa67f0(unaff_x22 + 0x70);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          func_0x00010379071c(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x89);
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x41) = *(undefined8 *)(unaff_x22 + 0x91);
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x39) = uVar16;
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x28) = uVar13;
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x20) = uVar7;
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x38) = uVar15;
        *(undefined8 *)(puVar4 + uVar2 * 0x30 + 0x30) = uVar14;
      } while (uVar10 != uVar11);
    }
  }
  *(undefined **)(unaff_x22 + 400) = puVar4;
  piVar9 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103783bd4;
                    /* WARNING: Could not recover jumptable at 0x000103783bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(puVar4,uVar6,lVar3);
  return;
}



/* Entry: 103783bd4; end: 103783c43;  */

void FUN_103783bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long **)(lVar3 + 200) = unaff_x22;
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(undefined8 *)(lVar3 + 0xd8) = param_2;
  *(undefined8 *)(lVar3 + 0xe0) = param_3;
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  uVar1 = *(undefined8 *)(lVar3 + 400);
  *(undefined8 *)(lVar3 + 0x1a0) = param_3;
  *(long *)(lVar3 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x198));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103783c44;
  }
  else {
    pcVar2 = FUN_103783e20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103783c44; end: 103783e1f;  */

void FUN_103783c44(void)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x1a0);
  FUN_1037870e4(unaff_x22 + 0xa0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(lVar7 + 0x10);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x1a0);
  if (lVar7 == 0) {
    func_0x000107c6142c(puVar9);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000103790770(0,lVar7,0);
    uVar3 = 0;
    func_0x000103aa7a90(0);
    do {
      uVar10 = puVar9[5];
      uVar8 = puVar9[4];
      uVar12 = puVar9[7];
      uVar5 = puVar9[6];
      uVar11 = *(undefined8 *)((long)puVar9 + 0x39);
      *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)((long)puVar9 + 0x41);
      *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
      uVar8 = puVar9[10];
      uVar12 = puVar9[0xb];
      uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar2 = *(undefined1 *)(puVar9 + 7);
      uVar5 = puVar9[5];
      *(undefined8 *)(unaff_x22 + 0x128) = puVar9[6];
      *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
      *(undefined1 *)(unaff_x22 + 0x130) = uVar2;
      uVar2 = *(undefined1 *)(puVar9 + 9);
      *(undefined8 *)(unaff_x22 + 0x150) = puVar9[8];
      *(undefined1 *)(unaff_x22 + 0x158) = uVar2;
      func_0x000107c610f8(uVar3);
      func_0x000107c61174(uVar10);
      FUN_103786e74(unaff_x22 + 0x120,unaff_x22 + 0x138);
      FUN_103772a2c(unaff_x22 + 0x150,unaff_x22 + 0x160);
      func_0x000107c61434(uVar8);
      lVar4 = unaff_x22 + 0x10;
      func_0x000103aa7918(uVar12,lVar4,uVar8);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        func_0x000103790770(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 8 + 0x20) = lVar4;
      lVar7 = lVar7 + -1;
      puVar9 = puVar9 + 8;
    } while (lVar7 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1a0));
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c61428(puVar9,unaff_x22 + 0x108,0,0);
  uVar5 = *puVar9;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar10);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103783e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar8,puVar6);
  return;
}



/* Entry: 103783e20; end: 103783e53;  */

void FUN_103783e20(void)

{
  long unaff_x22;
  
  FUN_1037870e4(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x000103783e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103783e54; end: 103783e6f;  */

void FUN_103783e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
  return;
}



/* Entry: 103783e70; end: 103783f47;  */

void FUN_103783e70(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x50);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x58) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000019;
  func_0x000100029b28(0xd000000000000019,0x800000010f164240);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(lVar7 + 0x70);
  lVar2 = *(long *)(lVar7 + 0x78);
  func_0x0001000a8868(lVar7 + 0x58,uVar3);
  piVar6 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103783f48;
                    /* WARNING: Could not recover jumptable at 0x000103783f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x48),uVar3,lVar2);
  return;
}



/* Entry: 103783f48; end: 103783f8f;  */

void FUN_103783f48(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783f90,0,0);
  return;
}



/* Entry: 103783f90; end: 103784017;  */

void FUN_103783f90(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar4);
  FUN_1037857a0(uVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103784014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103784018; end: 1037840d7;  */

void FUN_103784018(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 in_w6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x1d8) = in_stack_00000008;
  *(undefined1 *)(unaff_x22 + 0x278) = in_w6;
  *(undefined8 *)(unaff_x22 + 0x1c0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x1c8) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = in_x4;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x1e0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  lVar1 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  *(long *)(unaff_x22 + 0x1f8) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  lVar1 = 0;
  FUN_10378d110();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037840d8,0,0);
  return;
}



/* Entry: 1037840d8; end: 1037842d7;  */

/* WARNING: Removing unreachable block (ram,0x000103784100) */
/* WARNING: Removing unreachable block (ram,0x0001037841e8) */
/* WARNING: Removing unreachable block (ram,0x0001037841f8) */
/* WARNING: Removing unreachable block (ram,0x000103784234) */
/* WARNING: Removing unreachable block (ram,0x000103784144) */
/* WARNING: Removing unreachable block (ram,0x000103784298) */

void FUN_1037840d8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x210) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1037842d8;
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  plVar2[0x2e] = *(long *)(unaff_x22 + 0x1b8);
  plVar2[0x2f] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783988,0,0);
  return;
}



/* Entry: 1037842d8; end: 103784343;  */

void FUN_1037842d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x218) = param_1;
  *(undefined8 *)(lVar2 + 0x220) = param_2;
  *(undefined8 *)(lVar2 + 0x228) = param_3;
  *(long *)(lVar2 + 0x230) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103784344;
  }
  else {
    pcVar1 = (code *)0x1037871ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103784344; end: 103784a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103784344(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar12 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar6 = uVar12;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010379078c(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103784a48);
      (*pcVar1)();
    }
    if ((uVar12 & 0xc000000000000001) == 0) {
      plVar10 = (long *)(*(long *)(unaff_x22 + 0x228) + 0x20);
      do {
        lVar7 = _DAT_112fe2200;
        lVar15 = *plVar10;
        func_0x000107c61428(lVar15 + _DAT_112fe2200,unaff_x22 + 0x170,0,0);
        uVar3 = *(undefined8 *)(lVar15 + lVar7);
        uVar12 = *(ulong *)(puVar5 + 0x10);
        uVar2 = *(ulong *)(puVar5 + 0x18);
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar12) {
          func_0x00010379078c(1 < uVar2,uVar12 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar12 + 1;
        *(undefined8 *)(puVar5 + uVar12 * 8 + 0x20) = uVar3;
        uVar6 = uVar6 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar12 = 0;
      do {
        uVar2 = uVar12;
        FUN_10378e588(uVar12,*(undefined8 *)(unaff_x22 + 0x228));
        lVar7 = _DAT_112fe2200;
        func_0x000107c61428(uVar2 + _DAT_112fe2200,unaff_x22 + 0x140,0,0);
        uVar3 = *(undefined8 *)(uVar2 + lVar7);
        func_0x000107c61174();
        func_0x000107c615e8(uVar2);
        uVar2 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          func_0x00010379078c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar5 + uVar2 * 8 + 0x20) = uVar3;
      } while (uVar6 != uVar12);
    }
  }
  lVar7 = *(long *)(unaff_x22 + 0x220);
  if (lVar7 == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = *(undefined8 **)(unaff_x22 + 0x218);
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(puVar13,lVar7);
    func_0x000107c6142c(lVar7);
  }
  lVar7 = *(long *)(unaff_x22 + 0x1c0);
  puVar8 = PTR_PTR_1126c0a88;
  func_0x000107c610f8();
  uVar3 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  func_0x000107c48250();
  *(undefined **)(unaff_x22 + 0x238) = puVar8;
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if ((lVar7 == 0) || ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
    puVar14 = *(undefined8 **)(unaff_x22 + 0x230);
    func_0x000107c5fd64();
    puVar8 = *(undefined **)(unaff_x22 + 0x238);
    if (puVar14 == (undefined8 *)0x0) {
      pcVar1 = *(code **)(unaff_x22 + 0x1d0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
      lVar7 = *(long *)(unaff_x22 + 0x1b0);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar13;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar11);
      func_0x000107c61170(uVar3);
      puVar5 = puVar8;
      func_0x000107c61174(puVar8);
      (*pcVar1)(puVar8,0);
      func_0x000107c61170(puVar5);
      lVar7 = *(long *)(lVar7 + 0x48);
      *(long *)(unaff_x22 + 0x250) = lVar7;
      if (lVar7 == 0) {
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
        lVar7 = *(long *)(unaff_x22 + 0x1c0);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
        lVar15 = *(long *)(unaff_x22 + 0x208);
        lVar17 = *(long *)(unaff_x22 + 0x1b0);
        uVar3 = *(undefined8 *)(lVar17 + 0x80);
        func_0x000107c61174(uVar3);
        func_0x000107c61174(lVar7);
        FUN_103789d40(lVar15,uVar3);
        uVar3 = *(undefined8 *)(lVar15 + 0x20);
        func_0x000107c61434(uVar11);
        func_0x000107c6142c(uVar3);
        *(undefined8 *)(lVar15 + 0x20) = uVar11;
        func_0x000107c6142c(*(undefined8 *)(lVar15 + 0x38));
        *(undefined8 *)(lVar15 + 0x30) = uVar16;
        *(undefined8 *)(lVar15 + 0x38) = uVar9;
        lVar7 = *(long *)(lVar17 + 0x50);
        *(long *)(unaff_x22 + 600) = lVar7;
        if (lVar7 != 0) {
          *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x198;
          *(long *)(unaff_x22 + 0x50) = unaff_x22;
          *(code **)(unaff_x22 + 0x58) = FUN_103784f04;
          lVar15 = unaff_x22 + 0x50;
          func_0x000107c61448(lVar15,1);
          uVar3 = 0x112f91760;
          func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
          *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
          *(code **)(unaff_x22 + 0xe0) = FUN_10379511c;
          *(undefined **)(unaff_x22 + 0xe8) = &UNK_110691320;
          *(long *)(unaff_x22 + 0xf0) = lVar15;
          func_0x000107c507e4(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
          return;
        }
        puVar13 = *(undefined8 **)(unaff_x22 + 0x208);
        func_0x000107c6142c(puVar13[1]);
        *puVar13 = 0;
        puVar13[1] = 0;
        uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
        lVar7 = *(long *)(unaff_x22 + 0x208);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
        func_0x000107c6142c(*(undefined8 *)(lVar7 + 0x18));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        FUN_10378703c(lVar7,uVar11);
        func_0x000107c6159c(uVar11,uVar3,0);
        FUN_103789e1c(uVar11);
        func_0x000107c61170(uVar9);
        FUN_103787190(uVar11,0x112f91758,&UNK_10dc09fa8);
        func_0x000103787080(lVar7);
        lVar7 = *(long *)(unaff_x22 + 0x1c0);
      }
      if ((lVar7 != 0) && ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
        plVar10 = (long *)0x70;
        func_0x000107c615f0(lVar7);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x270) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_1037852d0;
        lVar15 = *(long *)(unaff_x22 + 0x228);
        lVar17 = *(long *)(unaff_x22 + 0x1b0);
        goto FUN_103783e54;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
      func_0x000107c6142c(uVar3);
      goto LAB_1037849ec;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x1c0);
    puVar14 = *(undefined8 **)(unaff_x22 + 0x230);
    func_0x000107c615f0(lVar7);
    func_0x000107c5fd64();
    *(undefined8 **)(unaff_x22 + 0x240) = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      plVar10 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x248) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_103784a48;
      lVar15 = *(long *)(unaff_x22 + 0x228);
      lVar17 = *(long *)(unaff_x22 + 0x1b0);
FUN_103783e54:
      plVar10[9] = lVar7;
      plVar10[10] = lVar17;
      plVar10[8] = lVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c6142c(uVar3);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 **)(unaff_x22 + 0x1a8) = puVar14;
  func_0x000107c614b0(puVar14);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar11,unaff_x22 + 0x1a8,uVar3,uVar9,0);
  if ((int)uVar11 == 0) {
    puVar13 = *(undefined8 **)(unaff_x22 + 0x1a8);
    lVar7 = *(long *)(unaff_x22 + 0x1b0);
    func_0x000107c614ac();
    if (*(long *)(lVar7 + 0x48) != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
      puVar13 = *(undefined8 **)(unaff_x22 + 0x200);
      *puVar13 = puVar14;
      func_0x000107c6159c(puVar13,uVar3,1);
      func_0x000107c614b0(puVar14);
      FUN_103789e1c(puVar13);
      FUN_103787190(puVar13,0x112f91758,&UNK_10dc09fa8);
    }
    pcVar1 = *(code **)(unaff_x22 + 0x1d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar13;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c614b0(puVar14);
    (*pcVar1)(0,puVar14);
    func_0x000107c614ac(puVar14);
    func_0x000107c614ac(puVar14);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x1e8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x000107c614ac();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar11 = *puVar14;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uVar9);
    func_0x000107c61170(uVar11);
    (**(code **)(lVar7 + 8))(uVar3,uVar16);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
  }
LAB_1037849ec:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103784a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103784a48; end: 103784a8f;  */

void FUN_103784a48(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103784a90,0,0);
  return;
}



/* Entry: 103784a90; end: 103784f03;  */

void FUN_103784a90(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1c0);
  func_0x000107c615e8();
  puVar8 = *(undefined8 **)(unaff_x22 + 0x240);
  func_0x000107c5fd64();
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    pcVar1 = *(code **)(unaff_x22 + 0x1d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
    lVar11 = *(long *)(unaff_x22 + 0x1b0);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar7);
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
    func_0x000107c61174(uVar5);
    (*pcVar1)(uVar5,0);
    func_0x000107c61170(uVar3);
    lVar11 = *(long *)(lVar11 + 0x48);
    *(long *)(unaff_x22 + 0x250) = lVar11;
    if (lVar11 == 0) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
      lVar11 = *(long *)(unaff_x22 + 0x1c0);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar9 = *(long *)(unaff_x22 + 0x208);
      lVar12 = *(long *)(unaff_x22 + 0x1b0);
      uVar3 = *(undefined8 *)(lVar12 + 0x80);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(lVar11);
      FUN_103789d40(lVar9,uVar3);
      uVar3 = *(undefined8 *)(lVar9 + 0x20);
      func_0x000107c61434(uVar5);
      func_0x000107c6142c(uVar3);
      *(undefined8 *)(lVar9 + 0x20) = uVar5;
      func_0x000107c6142c(*(undefined8 *)(lVar9 + 0x38));
      *(undefined8 *)(lVar9 + 0x30) = uVar10;
      *(undefined8 *)(lVar9 + 0x38) = uVar7;
      lVar11 = *(long *)(lVar12 + 0x50);
      *(long *)(unaff_x22 + 600) = lVar11;
      if (lVar11 != 0) {
        *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x198;
        *(long *)(unaff_x22 + 0x50) = unaff_x22;
        *(code **)(unaff_x22 + 0x58) = FUN_103784f04;
        lVar9 = unaff_x22 + 0x50;
        func_0x000107c61448(lVar9,1);
        uVar3 = 0x112f91760;
        func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
        *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
        *(code **)(unaff_x22 + 0xe0) = FUN_10379511c;
        *(undefined **)(unaff_x22 + 0xe8) = &UNK_110691320;
        *(long *)(unaff_x22 + 0xf0) = lVar9;
        func_0x000107c507e4(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
        return;
      }
      puVar8 = *(undefined8 **)(unaff_x22 + 0x208);
      func_0x000107c6142c(puVar8[1]);
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
      lVar11 = *(long *)(unaff_x22 + 0x208);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
      func_0x000107c6142c(*(undefined8 *)(lVar11 + 0x18));
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      FUN_10378703c(lVar11,uVar5);
      func_0x000107c6159c(uVar5,uVar3,0);
      FUN_103789e1c(uVar5);
      func_0x000107c61170(uVar7);
      FUN_103787190(uVar5,0x112f91758,&UNK_10dc09fa8);
      func_0x000103787080(lVar11);
      lVar11 = *(long *)(unaff_x22 + 0x1c0);
    }
    if ((lVar11 != 0) && ((*(byte *)(unaff_x22 + 0x278) & 1) != 0)) {
      plVar4 = (long *)0x70;
      func_0x000107c615f0(lVar11);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x270) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1037852d0;
      lVar9 = *(long *)(unaff_x22 + 0x228);
      lVar12 = *(long *)(unaff_x22 + 0x1b0);
      plVar4[9] = lVar11;
      plVar4[10] = lVar12;
      plVar4[8] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
    func_0x000107c6142c(uVar3);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(uVar3);
    uVar6 = *(ulong *)(unaff_x22 + 0x1f0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 **)(unaff_x22 + 0x1a8) = puVar8;
    func_0x000107c614b0(puVar8);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar6,unaff_x22 + 0x1a8,uVar3,uVar5,0);
    if ((uVar6 & 1) == 0) {
      puVar2 = *(undefined8 **)(unaff_x22 + 0x1a8);
      lVar11 = *(long *)(unaff_x22 + 0x1b0);
      func_0x000107c614ac();
      if (*(long *)(lVar11 + 0x48) != 0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
        puVar2 = *(undefined8 **)(unaff_x22 + 0x200);
        *puVar2 = puVar8;
        func_0x000107c6159c(puVar2,uVar3,1);
        func_0x000107c614b0(puVar8);
        FUN_103789e1c(puVar2);
        FUN_103787190(puVar2,0x112f91758,&UNK_10dc09fa8);
      }
      pcVar1 = *(code **)(unaff_x22 + 0x1d0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c614b0(puVar8);
      (*pcVar1)(0,puVar8);
      func_0x000107c614ac(puVar8);
      func_0x000107c614ac(puVar8);
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0x1e8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x000107c614ac();
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar5 = *puVar8;
      func_0x000107c61174(uVar5);
      func_0x000100069b5c(uVar7);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar11 + 8))(uVar3,uVar10);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103784f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103784f04; end: 103784f5b;  */

void FUN_103784f04(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x260) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103784f5c;
  }
  else {
    pcVar1 = FUN_103785324;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103784f5c; end: 10378513b;  */

void FUN_103784f5c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar7 = *(long *)(unaff_x22 + 600);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x208);
  func_0x000107c6142c(puVar8[1]);
  *puVar8 = uVar6;
  puVar8[1] = uVar3;
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 600);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x188;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10378513c;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,1);
    uVar6 = 0x112f91760;
    func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(code **)(unaff_x22 + 0xa0) = FUN_10379511c;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106912f8;
    *(long *)(unaff_x22 + 0xb0) = lVar7;
    func_0x000107c507e4(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar7 = *(long *)(unaff_x22 + 0x208);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar7 + 0x18));
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  FUN_10378703c(lVar7,uVar3);
  func_0x000107c6159c(uVar3,uVar6,0);
  FUN_103789e1c(uVar3);
  func_0x000107c61170(uVar4);
  FUN_103787190(uVar3,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar7);
  lVar7 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar7 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar2 = (long *)0x70;
    func_0x000107c615f0(lVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1037852d0;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar5 = *(long *)(unaff_x22 + 0x1b0);
    plVar2[9] = lVar7;
    plVar2[10] = lVar5;
    plVar2[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar6);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103785138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10378513c; end: 103785193;  */

void FUN_10378513c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x268) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103785194;
  }
  else {
    pcVar1 = FUN_103785524;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103785194; end: 1037852cf;  */

void FUN_103785194(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar4 = *(long *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x18));
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  FUN_10378703c(lVar4,uVar2);
  func_0x000107c6159c(uVar2,uVar9,0);
  FUN_103789e1c(uVar2);
  func_0x000107c61170(uVar6);
  FUN_103787190(uVar2,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar4);
  lVar4 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar4 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar5 = (long *)0x70;
    func_0x000107c615f0(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1037852d0;
    lVar3 = *(long *)(unaff_x22 + 0x228);
    lVar7 = *(long *)(unaff_x22 + 0x1b0);
    plVar5[9] = lVar4;
    plVar5[10] = lVar7;
    plVar5[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001037852cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037852d0; end: 103785323;  */

void FUN_1037852d0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x228);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x270));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10378721c,0,0);
  return;
}



/* Entry: 103785324; end: 103785523;  */

void FUN_103785324(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  func_0x000107c61654();
  func_0x000107c614ac(uVar4);
  lVar5 = *(long *)(unaff_x22 + 600);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x208);
  func_0x000107c6142c(puVar2[1]);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x188;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10378513c;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,1);
    uVar4 = 0x112f91760;
    func_0x0001000285a8(0x112f91760,&UNK_10dc09fc0);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(code **)(unaff_x22 + 0xa0) = FUN_10379511c;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106912f8;
    *(long *)(unaff_x22 + 0xb0) = lVar5;
    func_0x000107c507e4(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar5 = *(long *)(unaff_x22 + 0x208);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar5 + 0x18));
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  FUN_10378703c(lVar5,uVar6);
  func_0x000107c6159c(uVar6,uVar4,0);
  FUN_103789e1c(uVar6);
  func_0x000107c61170(uVar7);
  FUN_103787190(uVar6,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar5);
  lVar5 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar5 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar3 = (long *)0x70;
    func_0x000107c615f0(lVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1037852d0;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar8 = *(long *)(unaff_x22 + 0x1b0);
    plVar3[9] = lVar5;
    plVar3[10] = lVar8;
    plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar4);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103785520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103785524; end: 10378566f;  */

void FUN_103785524(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  func_0x000107c61654();
  func_0x000107c614ac(uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar2 = *(long *)(unaff_x22 + 0x208);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x18));
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  FUN_10378703c(lVar2,uVar7);
  func_0x000107c6159c(uVar7,uVar4,0);
  FUN_103789e1c(uVar7);
  func_0x000107c61170(uVar5);
  FUN_103787190(uVar7,0x112f91758,&UNK_10dc09fa8);
  func_0x000103787080(lVar2);
  lVar2 = *(long *)(unaff_x22 + 0x1c0);
  if ((lVar2 != 0) && (*(char *)(unaff_x22 + 0x278) == '\x01')) {
    plVar3 = (long *)0x70;
    func_0x000107c615f0(lVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x270) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1037852d0;
    lVar1 = *(long *)(unaff_x22 + 0x228);
    lVar6 = *(long *)(unaff_x22 + 0x1b0);
    plVar3[9] = lVar2;
    plVar3[10] = lVar6;
    plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103783e70,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c6142c(uVar4);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010378566c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103785670; end: 103785747; -[_TtC20SendToRankingRecents20SendToRankingRecents rankRecipients:logger:completion:] */

void FUN_103785670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_1106911a0;
  func_0x000107c613fc(&UNK_1106911a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_103781d6c(param_3,param_4,FUN_103786eb0,puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103785748; end: 10378579f;  */

void FUN_103785748(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1037857a0; end: 103785aaf;  */

void FUN_1037857a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar1 = 0;
  uStack_c8 = param_1;
  uStack_c0 = param_2;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_a8);
  puVar4 = puStack_a8;
  func_0x000107c4bfc8();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5fe10(puVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170();
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar6 = *puVar4;
    lStack_d0 = lVar12;
    func_0x000107c61174(uVar6);
    uVar7 = 0xd000000000000017;
    func_0x000100029b28(0xd000000000000017,0x800000010f164260);
    func_0x000107c61170(uVar6);
    FUN_103787104(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar14 + 0x68))
              (lVar15,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    lVar12 = lVar15;
    func_0x000107c5fff0(lVar15);
    lStack_d8 = lVar2;
    (**(code **)(lVar14 + 8))(lVar15,lVar3);
    puVar8 = &UNK_1106912b8;
    func_0x000107c613fc(&UNK_1106912b8,0x30,7);
    uVar10 = uStack_c0;
    uVar6 = uStack_c8;
    *(undefined8 *)(puVar8 + 0x10) = uStack_c8;
    *(undefined8 **)(puVar8 + 0x18) = puVar5;
    *(undefined8 *)(puVar8 + 0x20) = uStack_c0;
    *(undefined8 *)(puVar8 + 0x28) = uVar7;
    pcStack_88 = FUN_103787144;
    puStack_a8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1106912d0;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61434(uVar6);
    func_0x000107c615f0(uVar10);
    func_0x000107c5f808(lVar13);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = uVar6;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar11,&puStack_b0,uVar6,uVar7,lVar1,uVar10);
    func_0x000107c5ffe8(0,lVar13,puVar11,ppuVar9);
    func_0x000107c61170(lVar12);
    func_0x000107c60bd0(ppuVar9);
    (**(code **)(lStack_d0 + 8))(puVar11,lVar1);
    (**(code **)(lStack_b8 + 8))(lVar13,lStack_d8);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 103785ab0; end: 103785bf3; -[_TtC20SendToRankingRecents20SendToRankingRecents rankingArtifactsForRecipients:completionHandler:] */

void FUN_103785ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar1 = &UNK_110691128;
  func_0x000107c613fc(&UNK_110691128,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110691150;
  func_0x000107c613fc(&UNK_110691150,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10dc09f68;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110691178;
  func_0x000107c613fc(&UNK_110691178,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10dc09f70;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10dc09f78,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 103785bf4; end: 103785c87;  */

void FUN_103785bf4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc54(param_1,uVar1);
  *(long *)(unaff_x22 + 0x20) = param_1;
  plVar2 = (long *)0x1b0;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103785c88;
  plVar2[0x2e] = param_1;
  plVar2[0x2f] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783988,0,0);
  return;
}



/* Entry: 103785c88; end: 103785da7;  */

void FUN_103785c88(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar3);
  if (unaff_x20 == 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    uVar1 = 0;
    func_0x000103aa7a90(0);
    unaff_x20 = param_3;
    func_0x000107c5fc48(param_3,uVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,param_1,unaff_x20,0);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_3);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    (**(code **)(lVar4 + 0x10))(lVar4,0,0,unaff_x20);
  }
  func_0x000107c61170(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x000103785da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 103785da8; end: 103785dc3;  */

void FUN_103785da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103785dc4,0,0);
  return;
}



/* Entry: 103785dc4; end: 103786017;  */

void FUN_103785dc4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  uVar11 = *(ulong *)(unaff_x22 + 200);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0xe0) = param_1;
  func_0x000107c61428();
  uVar5 = *param_1;
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000029;
  func_0x000100029b28(0xd000000000000029,0x800000010f1641b0);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar6;
  func_0x000107c61170(uVar5);
  FUN_103786c9c(lVar9 + 0x10,unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar9 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000a8868(unaff_x22 + 0x70,uVar5);
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 200)) {
      uVar10 = *(ulong *)(unaff_x22 + 200);
    }
    func_0x000107c60480();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    func_0x00010379071c(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103786018);
      (*pcVar4)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      puVar12 = (undefined8 *)(*(long *)(unaff_x22 + 200) + 0x20);
      do {
        func_0x000107c61174(*puVar12);
        func_0x000103aa67f0(unaff_x22 + 0x10);
        uVar11 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar11) {
          func_0x00010379071c(1 < *(ulong *)(puVar3 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar11 + 1;
        uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x29);
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x41) = *(undefined8 *)(unaff_x22 + 0x31);
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x39) = uVar16;
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x28) = uVar13;
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x20) = uVar6;
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x38) = uVar15;
        *(undefined8 *)(puVar3 + uVar11 * 0x30 + 0x30) = uVar14;
        uVar10 = uVar10 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar10 != 0);
    }
    else {
      uVar11 = 0;
      do {
        func_0x000102424840(uVar11,*(undefined8 *)(unaff_x22 + 200));
        func_0x000103aa67f0(unaff_x22 + 0x40);
        uVar2 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
          func_0x00010379071c(1 < *(ulong *)(puVar3 + 0x18),uVar2 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puVar3 + 0x10) = uVar2 + 1;
        uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x59);
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x41) = *(undefined8 *)(unaff_x22 + 0x61);
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x39) = uVar16;
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x28) = uVar13;
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x20) = uVar6;
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x38) = uVar15;
        *(undefined8 *)(puVar3 + uVar2 * 0x30 + 0x30) = uVar14;
      } while (uVar10 != uVar11);
    }
  }
  *(undefined **)(unaff_x22 + 0xf0) = puVar3;
  piVar8 = *(int **)(lVar9 + 0x28);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103786018;
                    /* WARNING: Could not recover jumptable at 0x000103785ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(puVar3,*(undefined8 *)(unaff_x22 + 0xd0),uVar5,lVar9);
  return;
}



/* Entry: 103786018; end: 10378606f;  */

void FUN_103786018(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar2 + 0x100) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103786070,0,0);
  return;
}



/* Entry: 103786070; end: 1037860db;  */

void FUN_103786070(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  FUN_1037870e4(unaff_x22 + 0x70);
  func_0x000107c61428(puVar1,unaff_x22 + 0xb0,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001037860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x100));
  return;
}



/* Entry: 1037860dc; end: 10378622b; -[_TtC20SendToRankingRecents20SendToRankingRecents generateEncodedRankingSubjects:additionalFeatureKeys:completionHandler:] */

void FUN_1037860dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  puVar1 = &UNK_1106910b0;
  func_0x000107c613fc(&UNK_1106910b0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1106910d8;
  func_0x000107c613fc(&UNK_1106910d8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10dc09f28;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110691100;
  func_0x000107c613fc(&UNK_110691100,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10dc09f38;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10dc09f48,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10378622c; end: 1037862df;  */

void FUN_10378622c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x22;
  long *plVar2;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(long *)(unaff_x22 + 0x18) = param_4;
  uVar1 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc54(param_1,uVar1);
  *(long *)(unaff_x22 + 0x20) = param_1;
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  *(long *)(unaff_x22 + 0x28) = param_2;
  plVar2 = (long *)0x110;
  func_0x000107c6157c(param_4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1037862e0;
  plVar2[0x1a] = param_2;
  plVar2[0x1b] = param_4;
  plVar2[0x19] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103785dc4,0,0);
  return;
}



/* Entry: 1037862e0; end: 103786397;  */

void FUN_1037862e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x30));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = 0;
  FUN_103787104(0,0x112f905e0,&PTR_PTR_1126ad6d0);
  uVar3 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar6 + 0x10))(lVar6,uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103786394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 103786398; end: 1037869fb;  */

/* WARNING: Removing unreachable block (ram,0x0001037865a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103786398(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  lVar6 = 0x112d36580;
  uStack_120 = param_3;
  uStack_118 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_f8 = (long)&uStack_120 - extraout_x8;
  func_0x000107c5eac0();
  lStack_108 = *(long *)(lVar6 + -8);
  lStack_100 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar15 = ((long)&uStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_110 = lVar15;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lStack_d0 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uStack_a0 = uVar7;
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar20 = (undefined8 *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
    puVar20 = (undefined8 *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = (undefined *)puVar20;
  if (uVar17 != 0) {
    uVar19 = param_1 & 0xc000000000000001;
    uStack_c8 = param_1 & 0xffffffffffffff8;
    lVar6 = 4;
    uStack_c0 = param_1;
    uStack_b8 = param_2;
    uStack_b0 = uVar19;
    uStack_a8 = uVar17;
    do {
      uVar16 = lVar6 - 4;
      if (uVar19 == 0) {
        if (*(ulong *)(uStack_c8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103786920);
          (*pcVar5)();
        }
        uVar8 = *(ulong *)(param_1 + lVar6 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar16;
        FUN_10378e588(uVar16,param_1);
      }
      uVar1 = lVar6 - 3;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103786918);
        (*pcVar5)();
      }
      lVar15 = uVar8 + _DAT_112fe2200;
      bVar3 = *(byte *)(lVar15 + 0x18);
      if (bVar3 < 3) {
        uVar17 = *(ulong *)(lVar15 + 8);
        uStack_90 = *(ulong *)(lVar15 + 0x10);
        puVar18 = *(undefined8 **)(uVar8 + _DAT_112fe2210);
        uStack_98 = uVar17;
        puStack_80 = puVar18;
        uStack_78 = param_2;
        FUN_103765724(uVar17,uStack_90,bVar3);
        FUN_103787150();
        func_0x000107c61434(puVar18);
        func_0x000107c61434(param_2);
        ppuVar9 = &puStack_80;
        puVar12 = &UNK_110691940;
        func_0x000107c5eb4c(ppuVar9,&UNK_110691940,uVar17);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar18);
        lVar15 = lStack_d0;
        func_0x000107c5fb04(lStack_d0);
        ppuVar10 = ppuVar9;
        puVar14 = puVar12;
        func_0x000107c5faf0(ppuVar9,puVar12,lVar15);
        lVar15 = lStack_110;
        if (puVar14 == (undefined *)0x0) {
          func_0x000107c5eabc(lStack_110);
          lVar11 = 0;
          func_0x000107c5ede0();
          lVar4 = lStack_f8;
          (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lStack_f8,1,1,lVar11);
          lVar11 = lVar15;
          func_0x000107c5eac4(lVar15,0,lVar4);
          FUN_103787190(lVar4,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lStack_108 + 8))(lVar15,lStack_100);
          func_0x000107c61654();
          func_0x00010006c090(ppuVar9,puVar12);
          puVar18 = puVar20;
          func_0x000107c61558();
          uVar16 = uStack_98;
          uVar13 = uStack_90;
          puStack_80 = puVar20;
          func_0x000100029284();
          uVar17 = (ulong)~(uint)uVar13 & 1;
          lVar15 = puVar20[2] + uVar17;
          if (SCARRY8(puVar20[2],uVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10378691c);
            (*pcVar5)();
          }
          if ((long)puVar20[3] < lVar15) {
            func_0x0001001833c8(lVar15,puVar18);
            uVar16 = uStack_98;
            uVar17 = uStack_90;
            func_0x000100029284();
            if (((uint)uVar13 & 1) != ((uint)uVar17 & 1)) {
LAB_1037869ec:
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1037869fc);
              (*pcVar5)();
            }
          }
          else if (((ulong)puVar18 & 1) == 0) {
            func_0x000100184498();
          }
          puVar20 = puStack_80;
          uVar17 = uStack_a8;
          uVar19 = uStack_b0;
          if ((uVar13 & 1) == 0) {
            puStack_80[(uVar16 >> 6) + 8] = puStack_80[(uVar16 >> 6) + 8] | 1L << (uVar16 & 0x3f);
            puVar2 = (ulong *)(puStack_80[6] + uVar16 * 0x10);
            *puVar2 = uStack_98;
            puVar2[1] = uStack_90;
            puVar18 = (undefined8 *)(puStack_80[7] + uVar16 * 0x10);
            *puVar18 = 0x726f727265;
            puVar18[1] = 0xe500000000000000;
            func_0x000107c614ac(lVar11);
            func_0x000107c61170(uVar8);
            if (SCARRY8(puVar20[2],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103786924);
              (*pcVar5)();
            }
            puVar20[2] = puVar20[2] + 1;
            param_2 = uStack_b8;
            param_1 = uStack_c0;
          }
          else {
            puVar18 = (undefined8 *)(puStack_80[7] + uVar16 * 0x10);
            uVar7 = puVar18[1];
            *puVar18 = 0x726f727265;
            puVar18[1] = 0xe500000000000000;
            func_0x000107c6142c(uVar7);
            func_0x000107c614ac(lVar11);
            func_0x000107c61170(uVar8);
            func_0x00010376573c(uStack_98,uStack_90,bVar3);
            param_2 = uStack_b8;
            param_1 = uStack_c0;
          }
        }
        else {
          puVar18 = puVar20;
          ppuStack_f0 = ppuVar10;
          puStack_e8 = puVar14;
          ppuStack_e0 = ppuVar9;
          puStack_d8 = puVar12;
          func_0x000107c61558();
          uVar17 = uStack_98;
          uVar19 = uStack_90;
          puStack_80 = puVar20;
          func_0x000100029284();
          uVar16 = (ulong)~(uint)uVar19 & 1;
          lVar15 = puVar20[2] + uVar16;
          if (SCARRY8(puVar20[2],uVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103786928);
            (*pcVar5)();
          }
          if ((long)puVar20[3] < lVar15) {
            func_0x0001001833c8(lVar15,puVar18);
            uVar17 = uStack_98;
            uVar16 = uStack_90;
            func_0x000100029284();
            if (((uint)uVar19 & 1) != ((uint)uVar16 & 1)) goto LAB_1037869ec;
          }
          else if (((ulong)puVar18 & 1) == 0) {
            func_0x000100184498();
          }
          puVar20 = puStack_80;
          param_2 = uStack_b8;
          if ((uVar19 & 1) == 0) {
            puStack_80[(uVar17 >> 6) + 8] = puStack_80[(uVar17 >> 6) + 8] | 1L << (uVar17 & 0x3f);
            puVar2 = (ulong *)(puStack_80[6] + uVar17 * 0x10);
            *puVar2 = uStack_98;
            puVar2[1] = uStack_90;
            puVar18 = (undefined8 *)(puStack_80[7] + uVar17 * 0x10);
            *puVar18 = ppuStack_f0;
            puVar18[1] = puStack_e8;
            func_0x00010006c090(ppuStack_e0,puStack_d8);
            func_0x000107c61170(uVar8);
            if (SCARRY8(puVar20[2],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10378692c);
              (*pcVar5)();
            }
            puVar20[2] = puVar20[2] + 1;
            uVar17 = uStack_a8;
            param_1 = uStack_c0;
            uVar19 = uStack_b0;
          }
          else {
            puVar18 = (undefined8 *)(puStack_80[7] + uVar17 * 0x10);
            uVar7 = puVar18[1];
            *puVar18 = ppuStack_f0;
            puVar18[1] = puStack_e8;
            func_0x000107c6142c(uVar7);
            func_0x00010006c090(ppuStack_e0,puStack_d8);
            func_0x000107c61170(uVar8);
            func_0x00010376573c(uStack_98,uStack_90,bVar3);
            uVar17 = uStack_a8;
            param_1 = uStack_c0;
            uVar19 = uStack_b0;
          }
        }
      }
      else {
        func_0x000107c61170(uVar8);
      }
      lVar6 = lVar6 + 1;
    } while (uVar1 != uVar17);
  }
  puVar18 = puVar20;
  func_0x000107c5f9dc(puVar20,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c57be8(uStack_120);
  func_0x000107c61170();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar7 = *puVar18;
  func_0x000107c61174(uVar7);
  func_0x000100069b5c(uStack_118);
  func_0x000107c6142c(puVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_a0);
  return;
}



/* Entry: 1037869fc; end: 103786a6f;  */

void FUN_1037869fc(void)

{
  long unaff_x20;
  
  FUN_1037870e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_1037870e4(unaff_x20 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103786a70; end: 103786ae7;  */

void FUN_103786a70(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103786ae8;
  plVar6[2] = lVar1;
  plVar6[3] = lVar2;
  uVar3 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc54(lVar4,uVar3);
  plVar6[4] = lVar4;
  func_0x000107c5fc54(lVar5,PTR___sSSN_11034da80);
  plVar6[5] = lVar5;
  plVar7 = (long *)0x110;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar6[6] = (long)plVar7;
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)FUN_1037862e0;
  plVar7[0x1a] = lVar5;
  plVar7[0x1b] = lVar2;
  plVar7[0x19] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103785dc4,0,0);
  return;
}



/* Entry: 103786ae8; end: 103786b23;  */

void FUN_103786ae8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103786b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103786b24; end: 103786b9b;  */

void FUN_103786b24(void)

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
  plVar5[1] = 0x1037871fc;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103786b9c; end: 103786bd7;  */

void FUN_103786b9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103786bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103786bd8; end: 103786c5b;  */

void FUN_103786bd8(undefined8 param_1)

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
  plVar5[1] = 0x103787204;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103786c5c; end: 103786c9b;  */

void FUN_103786c5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103786c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103786c9c; end: 103786cdf;  */

long FUN_103786c9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103786ce0; end: 103786d4b;  */

void FUN_103786ce0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x103787208;
  plVar4[2] = lVar1;
  plVar4[3] = lVar5;
  uVar2 = 0;
  FUN_103787104(0,0x112d726d8,&PTR_PTR_1126b5438);
  func_0x000107c5fc54(lVar3,uVar2);
  plVar4[4] = lVar3;
  plVar6 = (long *)0x1b0;
  func_0x000107c6157c(lVar5);
  func_0x000107c615b8();
  plVar4[5] = (long)plVar6;
  *plVar6 = (long)plVar4;
  plVar6[1] = (long)FUN_103785c88;
  plVar6[0x2e] = lVar3;
  plVar6[0x2f] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103783988,0,0);
  return;
}



/* Entry: 103786d4c; end: 103786dc3;  */

void FUN_103786d4c(void)

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
  plVar5[1] = 0x10378720c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103786dc4; end: 103786def;  */

void FUN_103786dc4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103786df0; end: 103786e73;  */

void FUN_103786df0(undefined8 param_1)

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
  plVar5[1] = 0x103787210;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103786e74; end: 103786eaf;  */

undefined8 FUN_103786e74(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103aa7870)(param_2,param_1);
  return param_2;
}



/* Entry: 103786eb0; end: 103786eb7;  */

void FUN_103786eb0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103786eb8; end: 103786f63;  */

void FUN_103786eb8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + 0x30);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  lVar10 = *(long *)(unaff_x20 + 0x50);
  plVar9 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x103787214;
  plVar9[0x3a] = lVar5;
  plVar9[0x3b] = lVar10;
  *(undefined1 *)(plVar9 + 0x4f) = uVar6;
  plVar9[0x38] = lVar11;
  plVar9[0x39] = lVar2;
  plVar9[0x36] = lVar7;
  plVar9[0x37] = lVar4;
  lVar7 = 0;
  func_0x000107c5fcbc(0,uVar1,uVar3);
  plVar9[0x3c] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar9[0x3d] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x3e] = uVar8;
  lVar7 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  plVar9[0x3f] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x40] = uVar8;
  lVar7 = 0;
  FUN_10378d110();
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x41] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037840d8,0,0);
  return;
}



/* Entry: 103786f64; end: 103786f7f;  */

void FUN_103786f64(long param_1,long param_2)

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



/* Entry: 103786f80; end: 103787017;  */

void FUN_103786f80(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x103787218;
  plVar7[0x3a] = lVar3;
  plVar7[0x3b] = lVar8;
  *(undefined1 *)(plVar7 + 0x4f) = uVar4;
  plVar7[0x38] = lVar9;
  plVar7[0x39] = lVar1;
  plVar7[0x36] = lVar5;
  plVar7[0x37] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcbc();
  plVar7[0x3c] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x3d] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x3e] = uVar6;
  lVar5 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  plVar7[0x3f] = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x40] = uVar6;
  lVar5 = 0;
  FUN_10378d110();
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x41] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037821c4,0,0);
  return;
}



/* Entry: 103787018; end: 10378703b;  */

void FUN_103787018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 10378703c; end: 1037870bb;  */

undefined8 FUN_10378703c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10378d110();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1037870bc; end: 1037870cb;  */

long FUN_1037870bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1037870cc; end: 1037870e3;  */

void FUN_1037870cc(long param_1)

{
  FUN_1037870e4(param_1 + 0x20);
  return;
}



/* Entry: 1037870e4; end: 103787103;  */

void FUN_1037870e4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001037870f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103787104; end: 103787143;  */

void FUN_103787104(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103787144; end: 10378714f;  */

/* WARNING: Removing unreachable block (ram,0x0001037865a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103787144(void)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uVar9 = *(ulong *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_f8 = (long)&uStack_120 - extraout_x8;
  func_0x000107c5eac0();
  lStack_108 = *(long *)(lVar6 + -8);
  lStack_100 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar16 = ((long)&uStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_110 = lVar16;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lStack_d0 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uStack_a0 = uVar7;
  if (uVar9 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar21 = (undefined8 *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar18 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar18 = uVar9;
    }
    func_0x000107c60480();
    puVar21 = (undefined8 *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = (undefined *)puVar21;
  if (uVar18 != 0) {
    uVar20 = uVar9 & 0xc000000000000001;
    uStack_c8 = uVar9 & 0xffffffffffffff8;
    lVar6 = 4;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    uStack_b0 = uVar20;
    uStack_a8 = uVar18;
    do {
      uVar17 = lVar6 - 4;
      if (uVar20 == 0) {
        if (*(ulong *)(uStack_c8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103786920);
          (*pcVar5)();
        }
        uVar8 = *(ulong *)(uVar9 + lVar6 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar17;
        FUN_10378e588(uVar17,uVar9);
      }
      uVar1 = lVar6 - 3;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103786918);
        (*pcVar5)();
      }
      lVar16 = uVar8 + _DAT_112fe2200;
      bVar3 = *(byte *)(lVar16 + 0x18);
      if (bVar3 < 3) {
        uVar9 = *(ulong *)(lVar16 + 8);
        uStack_90 = *(ulong *)(lVar16 + 0x10);
        puVar19 = *(undefined8 **)(uVar8 + _DAT_112fe2210);
        uStack_98 = uVar9;
        puStack_80 = puVar19;
        uStack_78 = uVar11;
        FUN_103765724(uVar9,uStack_90,bVar3);
        FUN_103787150();
        func_0x000107c61434(puVar19);
        func_0x000107c61434(uVar11);
        ppuVar10 = &puStack_80;
        puVar14 = &UNK_110691940;
        func_0x000107c5eb4c(ppuVar10,&UNK_110691940,uVar9);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(puVar19);
        lVar16 = lStack_d0;
        func_0x000107c5fb04(lStack_d0);
        ppuVar12 = ppuVar10;
        puVar15 = puVar14;
        func_0x000107c5faf0(ppuVar10,puVar14,lVar16);
        lVar16 = lStack_110;
        if (puVar15 == (undefined *)0x0) {
          func_0x000107c5eabc(lStack_110);
          lVar13 = 0;
          func_0x000107c5ede0();
          lVar4 = lStack_f8;
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lStack_f8,1,1,lVar13);
          lVar13 = lVar16;
          func_0x000107c5eac4(lVar16,0,lVar4);
          FUN_103787190(lVar4,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lStack_108 + 8))(lVar16,lStack_100);
          func_0x000107c61654();
          func_0x00010006c090(ppuVar10,puVar14);
          puVar19 = puVar21;
          func_0x000107c61558();
          uVar9 = uStack_98;
          uVar17 = uStack_90;
          puStack_80 = puVar21;
          func_0x000100029284();
          uVar18 = (ulong)~(uint)uVar17 & 1;
          lVar16 = puVar21[2] + uVar18;
          if (SCARRY8(puVar21[2],uVar18)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10378691c);
            (*pcVar5)();
          }
          if ((long)puVar21[3] < lVar16) {
            func_0x0001001833c8(lVar16,puVar19);
            uVar9 = uStack_98;
            uVar18 = uStack_90;
            func_0x000100029284();
            if (((uint)uVar17 & 1) != ((uint)uVar18 & 1)) {
LAB_1037869ec:
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1037869fc);
              (*pcVar5)();
            }
          }
          else if (((ulong)puVar19 & 1) == 0) {
            func_0x000100184498();
          }
          puVar21 = puStack_80;
          uVar18 = uStack_a8;
          uVar20 = uStack_b0;
          if ((uVar17 & 1) == 0) {
            puStack_80[(uVar9 >> 6) + 8] = puStack_80[(uVar9 >> 6) + 8] | 1L << (uVar9 & 0x3f);
            puVar2 = (ulong *)(puStack_80[6] + uVar9 * 0x10);
            *puVar2 = uStack_98;
            puVar2[1] = uStack_90;
            puVar19 = (undefined8 *)(puStack_80[7] + uVar9 * 0x10);
            *puVar19 = 0x726f727265;
            puVar19[1] = 0xe500000000000000;
            func_0x000107c614ac(lVar13);
            func_0x000107c61170(uVar8);
            if (SCARRY8(puVar21[2],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103786924);
              (*pcVar5)();
            }
            puVar21[2] = puVar21[2] + 1;
            uVar11 = uStack_b8;
            uVar9 = uStack_c0;
          }
          else {
            puVar19 = (undefined8 *)(puStack_80[7] + uVar9 * 0x10);
            uVar11 = puVar19[1];
            *puVar19 = 0x726f727265;
            puVar19[1] = 0xe500000000000000;
            func_0x000107c6142c(uVar11);
            func_0x000107c614ac(lVar13);
            func_0x000107c61170(uVar8);
            func_0x00010376573c(uStack_98,uStack_90,bVar3);
            uVar11 = uStack_b8;
            uVar9 = uStack_c0;
          }
        }
        else {
          puVar19 = puVar21;
          ppuStack_f0 = ppuVar12;
          puStack_e8 = puVar15;
          ppuStack_e0 = ppuVar10;
          puStack_d8 = puVar14;
          func_0x000107c61558();
          uVar9 = uStack_98;
          uVar18 = uStack_90;
          puStack_80 = puVar21;
          func_0x000100029284();
          uVar20 = (ulong)~(uint)uVar18 & 1;
          lVar16 = puVar21[2] + uVar20;
          if (SCARRY8(puVar21[2],uVar20)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103786928);
            (*pcVar5)();
          }
          if ((long)puVar21[3] < lVar16) {
            func_0x0001001833c8(lVar16,puVar19);
            uVar9 = uStack_98;
            uVar20 = uStack_90;
            func_0x000100029284();
            if (((uint)uVar18 & 1) != ((uint)uVar20 & 1)) goto LAB_1037869ec;
          }
          else if (((ulong)puVar19 & 1) == 0) {
            func_0x000100184498();
          }
          puVar21 = puStack_80;
          uVar11 = uStack_b8;
          if ((uVar18 & 1) == 0) {
            puStack_80[(uVar9 >> 6) + 8] = puStack_80[(uVar9 >> 6) + 8] | 1L << (uVar9 & 0x3f);
            puVar2 = (ulong *)(puStack_80[6] + uVar9 * 0x10);
            *puVar2 = uStack_98;
            puVar2[1] = uStack_90;
            puVar19 = (undefined8 *)(puStack_80[7] + uVar9 * 0x10);
            *puVar19 = ppuStack_f0;
            puVar19[1] = puStack_e8;
            func_0x00010006c090(ppuStack_e0,puStack_d8);
            func_0x000107c61170(uVar8);
            if (SCARRY8(puVar21[2],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10378692c);
              (*pcVar5)();
            }
            puVar21[2] = puVar21[2] + 1;
            uVar18 = uStack_a8;
            uVar9 = uStack_c0;
            uVar20 = uStack_b0;
          }
          else {
            puVar19 = (undefined8 *)(puStack_80[7] + uVar9 * 0x10);
            uVar7 = puVar19[1];
            *puVar19 = ppuStack_f0;
            puVar19[1] = puStack_e8;
            func_0x000107c6142c(uVar7);
            func_0x00010006c090(ppuStack_e0,puStack_d8);
            func_0x000107c61170(uVar8);
            func_0x00010376573c(uStack_98,uStack_90,bVar3);
            uVar18 = uStack_a8;
            uVar9 = uStack_c0;
            uVar20 = uStack_b0;
          }
        }
      }
      else {
        func_0x000107c61170(uVar8);
      }
      lVar6 = lVar6 + 1;
    } while (uVar1 != uVar18);
  }
  puVar19 = puVar21;
  func_0x000107c5f9dc(puVar21,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c57be8(uStack_120);
  func_0x000107c61170();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar11 = *puVar19;
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(uStack_118);
  func_0x000107c6142c(puVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uStack_a0);
  return;
}



/* Entry: 103787150; end: 10378718f;  */

void FUN_103787150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a54c;
  func_0x000107c61520(&UNK_10dc0a54c,&UNK_110691940);
  puRam0000000112f91768 = puVar1;
  return;
}



/* Entry: 103787190; end: 1037871cf;  */

undefined8 FUN_103787190(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1037871d0; end: 103787223;  */

void FUN_1037871d0(long param_1)

{
  FUN_1037870e4(param_1 + 0x20);
  return;
}



/* Entry: 103787224; end: 103787287;  */

void FUN_103787224(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103787288;
                    /* WARNING: Could not recover jumptable at 0x000103787284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 103787288; end: 1037872c3;  */

void FUN_103787288(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037872c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037872c4; end: 10378730b;  */

void FUN_1037872c4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ad6f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_103781d14();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110690928;
  *param_1 = puVar1;
  return;
}



/* Entry: 10378730c; end: 10378748b;  */

long FUN_10378730c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
  func_0x000107c613fc();
  pcVar1 = FUN_1037872c4;
  func_0x0001000bdd8c(FUN_1037872c4,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(code **)(unaff_x20 + 0x50) = pcVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  return unaff_x20;
}


