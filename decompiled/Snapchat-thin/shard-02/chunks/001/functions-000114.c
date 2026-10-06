/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10199dc64; end: 10199dc77;  */

void FUN_10199dc64(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010199dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10199dc78; end: 10199dcbf;  */

void FUN_10199dc78(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010199dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10199dcc0; end: 10199dccb;  */

void FUN_10199dcc0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 10199dccc; end: 10199dd13;  */

void FUN_10199dccc(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10199dd14;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199cdf8,0,0);
  return;
}



/* Entry: 10199dd14; end: 10199dd5b;  */

void FUN_10199dd14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010199dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10199dd5c; end: 10199ddab;  */

void FUN_10199dd5c(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10199e334;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199cfd0,0,0);
  return;
}



/* Entry: 10199ddac; end: 10199de0b;  */

void FUN_10199ddac(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10199e330;
  plVar1[6] = param_2;
  plVar1[7] = lVar2;
  plVar1[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199d7bc,0,0);
  return;
}



/* Entry: 10199de0c; end: 10199dec7;  */

void FUN_10199de0c(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10199de54;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199d368,0,0);
  return;
}



/* Entry: 10199dec8; end: 10199decf;  */

void FUN_10199dec8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10199ded0; end: 10199df37;  */

undefined8 * FUN_10199ded0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10199df38; end: 10199e027;  */

int FUN_10199df38(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10199e028; end: 10199e047;  */

void FUN_10199e028(void)

{
  func_0x000107c61168(&PTR_PTR_112de0fd8);
  return;
}



/* Entry: 10199e048; end: 10199e137;  */

undefined * FUN_10199e048(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10199e138);
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
    puVar3 = (undefined *)0x112de1040;
    func_0x0001000285a8(0x112de1040,&UNK_10dca1af0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10199e138; end: 10199e32f;  */

undefined * FUN_10199e138(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x21;
  ulong uVar14;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    uVar14 = 0;
    do {
      uVar4 = uVar14;
      if (uVar14 <= uVar11) {
        uVar4 = uVar11;
      }
      puVar12 = (undefined8 *)(param_1 + 0x48 + uVar14 * 0x30);
      uVar14 = uVar14 + 1;
      while( true ) {
        if (uVar14 - uVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10199e330);
          (*pcVar9)();
        }
        uVar1 = puVar12[-5];
        lVar5 = puVar12[-4];
        lVar2 = puVar12[-3];
        uVar6 = puVar12[-2];
        uVar3 = puVar12[-1];
        uVar7 = *puVar12;
        if (lVar2 == 0) break;
        func_0x000107c61434(lVar2);
        func_0x000107c61434(uVar7);
        lVar13 = lVar5;
        FUN_10199e934(lVar5,lVar2);
        if (unaff_x21 != 0) {
          func_0x000107c61574(puVar8);
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(lVar2);
          return puVar8;
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        func_0x000107c6142c();
        if (lVar13 == 0) goto LAB_10199e234;
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(lVar2);
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 6;
        if (uVar14 - uVar11 == 1) {
          return puVar8;
        }
      }
      func_0x000107c61434(uVar7);
LAB_10199e234:
      puVar10 = puVar8;
      func_0x000107c61558();
      if (((ulong)puVar10 & 1) == 0) {
        func_0x00010199735c(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar4 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
        func_0x00010199735c(1 < *(ulong *)(puVar8 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar8 + uVar4 * 0x30 + 0x20) = uVar1;
      *(long *)(puVar8 + uVar4 * 0x30 + 0x28) = lVar5;
      *(long *)(puVar8 + uVar4 * 0x30 + 0x30) = lVar2;
      *(undefined8 *)(puVar8 + uVar4 * 0x30 + 0x38) = uVar6;
      *(undefined8 *)(puVar8 + uVar4 * 0x30 + 0x40) = uVar3;
      *(undefined8 *)(puVar8 + uVar4 * 0x30 + 0x48) = uVar7;
    } while (uVar14 != uVar11);
  }
  return puVar8;
}



/* Entry: 10199e330; end: 10199e33f;  */

void FUN_10199e330(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010199de8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10199e340; end: 10199e847;  */

/* WARNING: Removing unreachable block (ram,0x00010199e79c) */
/* WARNING: Removing unreachable block (ram,0x00010199e814) */
/* WARNING: Removing unreachable block (ram,0x00010199e794) */
/* WARNING: Removing unreachable block (ram,0x00010199e7a0) */
/* WARNING: Removing unreachable block (ram,0x00010199e7e0) */
/* WARNING: Removing unreachable block (ram,0x00010199e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010199e7e4) */
/* WARNING: Removing unreachable block (ram,0x00010199e7e8) */

void FUN_10199e340(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c61618();
  if (lVar3 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar3,0,0);
    func_0x000107c61654();
  }
  else {
    lVar14 = *(long *)(unaff_x20 + 8);
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uStack_98 = 0xd000000000000024;
    uStack_90 = 0x800000010efc55e0;
    uStack_88 = 0xe22c887;
    uStack_80 = 0;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar5 = lVar3;
    uStack_70 = uVar4;
    func_0x000107c614f0(lVar3);
    (**(code **)(lVar14 + 8))(&uStack_c0,&uStack_98,lVar5,lVar14);
    if (unaff_x21 == 0) {
      lStack_118 = lVar3;
      FUN_10199e888(&uStack_c0,&uStack_110);
      if (lStack_f8 != 0) {
        puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          FUN_10199e8d8(&uStack_110,auStack_e8);
          FUN_10199e8f0(auStack_e8,&uStack_110);
          lVar5 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar6 = 0;
          (**(code **)(lVar5 + 0x10))(0,0x10199f508,0,lVar3,lVar5);
          lVar5 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar7 = 1;
          uVar4 = 0x10199f524;
          (**(code **)(lVar5 + 0x38))(1,0x10199f524,0,lVar3,lVar5);
          lVar5 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar8 = 2;
          (**(code **)(lVar5 + 0x10))(2,0x10199f540,0,lVar3,lVar5);
          lVar5 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar9 = 3;
          uVar12 = 0x10199f55c;
          (**(code **)(lVar5 + 0x30))(3,0x10199f55c,0,lVar3,lVar5);
          func_0x0001000834e4(&uStack_110);
          puVar10 = puStack_58;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            plVar1 = (long *)(puStack_58 + 0x10);
            puStack_58 = (undefined *)0x0;
            FUN_101993c0c(0,*plVar1 + 1,1);
          }
          uVar2 = *(ulong *)(puStack_58 + 0x10);
          if (*(ulong *)(puStack_58 + 0x18) >> 1 <= uVar2) {
            puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puStack_58 + 0x18));
            FUN_101993c0c(puStack_58,uVar2 + 1,1);
          }
          lVar5 = lStack_c8;
          lVar3 = lStack_d0;
          *(ulong *)(puStack_58 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x20) = uVar6;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x28) = uVar7;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x30) = uVar4;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x38) = uVar8;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x40) = uVar9;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x48) = uVar12;
          func_0x0001000c6518(auStack_e8,lStack_d0);
          pcVar17 = *(code **)(lVar5 + 8);
          lVar14 = 0;
          func_0x000107c60188(0,lVar3);
          lVar16 = *(long *)(lVar14 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar15 = auStack_120 + -extraout_x8;
          (*pcVar17)(puVar15,lVar3,lVar5);
          lVar13 = *(long *)(lVar3 + -8);
          puVar11 = puVar15;
          (**(code **)(lVar13 + 0x30))(puVar15,1,lVar3);
          if ((int)puVar11 == 1) {
            FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
            (**(code **)(lVar16 + 8))(puVar15,lVar14);
            lStack_f0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            lStack_f8 = 0;
            uStack_100 = 0;
          }
          else {
            lStack_f8 = lVar3;
            lStack_f0 = lVar5;
            func_0x0001000c5db4(&uStack_110);
            (**(code **)(lVar13 + 0x20))();
            FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
          }
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          lStack_a8 = lStack_f8;
          uStack_b0 = uStack_100;
          lStack_a0 = lStack_f0;
          func_0x0001000834e4(auStack_e8);
          FUN_10199e888(&uStack_c0,&uStack_110);
        } while (lStack_f8 != 0);
      }
      FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(lStack_118);
      FUN_10199f368(&uStack_110,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10199e848; end: 10199e887;  */

void FUN_10199e848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de10e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da70e00;
  func_0x000107c61520(&UNK_10da70e00,&UNK_1104e5c48);
  puRam0000000112de10e8 = puVar1;
  return;
}



/* Entry: 10199e888; end: 10199e8d7;  */

undefined8 FUN_10199e888(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112de1128;
  func_0x0001000285a8(0x112de1128,&UNK_10d9a87b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10199e8d8; end: 10199e8ef;  */

undefined8 * FUN_10199e8d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10199e8f0; end: 10199e933;  */

long FUN_10199e8f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10199e934; end: 10199ee9f;  */

/* WARNING: Removing unreachable block (ram,0x00010199edf4) */
/* WARNING: Removing unreachable block (ram,0x00010199ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010199edec) */
/* WARNING: Removing unreachable block (ram,0x00010199edf8) */
/* WARNING: Removing unreachable block (ram,0x00010199ee38) */
/* WARNING: Removing unreachable block (ram,0x00010199ee28) */
/* WARNING: Removing unreachable block (ram,0x00010199ee3c) */
/* WARNING: Removing unreachable block (ram,0x00010199ee40) */

void FUN_10199e934(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined1 uVar13;
  long unaff_x20;
  long lVar14;
  long unaff_x21;
  long lVar15;
  code *pcVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c61618();
  if (lVar3 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar3,0,0);
    func_0x000107c61654();
  }
  else {
    lVar15 = *(long *)(unaff_x20 + 8);
    lVar4 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = param_1;
    }
    uVar13 = 5;
    if (param_2 != 0) {
      uVar13 = 2;
    }
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(long *)(lVar4 + 0x28) = param_2;
    *(undefined1 *)(lVar4 + 0x30) = uVar13;
    uVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uStack_98 = 0xd00000000000003b;
    uStack_90 = 0x800000010efc5630;
    uStack_88 = 0x5cd06ba;
    uStack_80 = 0;
    lVar14 = lVar3;
    lStack_78 = lVar4;
    uStack_70 = uVar5;
    func_0x000107c614f0(lVar3);
    pcVar16 = *(code **)(lVar15 + 8);
    func_0x000107c61434(param_2);
    (*pcVar16)(&uStack_c0,&uStack_98,lVar14,lVar15);
    func_0x000107c61574(lVar4);
    if (unaff_x21 == 0) {
      lStack_118 = lVar3;
      FUN_10199e888(&uStack_c0,&uStack_110);
      if (lStack_f8 != 0) {
        puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          FUN_10199e8d8(&uStack_110,auStack_e8);
          FUN_10199e8f0(auStack_e8,&uStack_110);
          lVar4 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar6 = 0;
          (**(code **)(lVar4 + 0x10))(0,0x10199f508,0,lVar3,lVar4);
          lVar4 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar7 = 1;
          uVar5 = 0x10199f524;
          (**(code **)(lVar4 + 0x38))(1,0x10199f524,0,lVar3,lVar4);
          lVar4 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar8 = 2;
          (**(code **)(lVar4 + 0x10))(2,0x10199f540,0,lVar3,lVar4);
          lVar4 = lStack_f0;
          lVar3 = lStack_f8;
          func_0x0001000a8868(&uStack_110,lStack_f8);
          uVar9 = 3;
          uVar12 = 0x10199f55c;
          (**(code **)(lVar4 + 0x30))(3,0x10199f55c,0,lVar3,lVar4);
          func_0x0001000834e4(&uStack_110);
          puVar10 = puStack_58;
          func_0x000107c61558();
          if (((ulong)puVar10 & 1) == 0) {
            plVar1 = (long *)(puStack_58 + 0x10);
            puStack_58 = (undefined *)0x0;
            FUN_101993c0c(0,*plVar1 + 1,1);
          }
          uVar2 = *(ulong *)(puStack_58 + 0x10);
          if (*(ulong *)(puStack_58 + 0x18) >> 1 <= uVar2) {
            puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puStack_58 + 0x18));
            FUN_101993c0c(puStack_58,uVar2 + 1,1);
          }
          lVar4 = lStack_c8;
          lVar3 = lStack_d0;
          *(ulong *)(puStack_58 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x20) = uVar6;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x28) = uVar7;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x30) = uVar5;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x38) = uVar8;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x40) = uVar9;
          *(undefined8 *)(puStack_58 + uVar2 * 0x30 + 0x48) = uVar12;
          func_0x0001000c6518(auStack_e8,lStack_d0);
          pcVar16 = *(code **)(lVar4 + 8);
          lVar15 = 0;
          func_0x000107c60188(0,lVar3);
          lVar18 = *(long *)(lVar15 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar17 = auStack_120 + -extraout_x8;
          (*pcVar16)(puVar17,lVar3,lVar4);
          lVar14 = *(long *)(lVar3 + -8);
          puVar11 = puVar17;
          (**(code **)(lVar14 + 0x30))(puVar17,1,lVar3);
          if ((int)puVar11 == 1) {
            FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
            (**(code **)(lVar18 + 8))(puVar17,lVar15);
            lStack_f0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            lStack_f8 = 0;
            uStack_100 = 0;
          }
          else {
            lStack_f8 = lVar3;
            lStack_f0 = lVar4;
            func_0x0001000c5db4(&uStack_110);
            (**(code **)(lVar14 + 0x20))();
            FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
          }
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          lStack_a8 = lStack_f8;
          uStack_b0 = uStack_100;
          lStack_a0 = lStack_f0;
          func_0x0001000834e4(auStack_e8);
          FUN_10199e888(&uStack_c0,&uStack_110);
        } while (lStack_f8 != 0);
      }
      FUN_10199f368(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(lStack_118);
      FUN_10199f368(&uStack_110,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10199eea0; end: 10199eebb;  */

void FUN_10199eea0(void)

{
  FUN_10199eebc();
  return;
}



/* Entry: 10199eebc; end: 10199f06f;  */

void FUN_10199eebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 auStack_f8 [5];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 8);
    (*param_6)(&uStack_d0,param_1,param_2,param_3,param_4,param_5);
    lVar2 = lVar1;
    func_0x000107c614f0(lVar1);
    (**(code **)(lVar6 + 8))(auStack_f8,&uStack_d0,lVar2,lVar6);
    if (unaff_x21 == 0) {
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      func_0x000100bcb1dc(&uStack_90);
      uStack_98 = uStack_b0;
      FUN_10199f368(&uStack_98,0x112de1170,&UNK_10d9a87c0);
      uStack_a0 = uStack_a8;
      FUN_10199f368(&uStack_a0,0x112d38270,&UNK_10d905a20);
      func_0x000107c615e8(lVar1);
      uVar4 = 0x112de1128;
      puVar5 = &UNK_10d9a87b0;
      puVar3 = auStack_f8;
    }
    else {
      func_0x000107c615e8(lVar1);
      uStack_68 = uStack_c8;
      uStack_70 = uStack_d0;
      func_0x000100bcb1dc(&uStack_70);
      uStack_58 = uStack_b0;
      FUN_10199f368(&uStack_58,0x112de1170,&UNK_10d9a87c0);
      uStack_78 = uStack_a8;
      uVar4 = 0x112d38270;
      puVar5 = &UNK_10d905a20;
      puVar3 = &uStack_78;
    }
    FUN_10199f368(puVar3,uVar4,puVar5);
  }
  return;
}



/* Entry: 10199f070; end: 10199f1e7;  */

void FUN_10199f070(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar2 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined1 *)(lVar2 + 0x30) = 2;
    uStack_80 = 0xd000000000000039;
    uStack_78 = 0x800000010efc5670;
    uStack_70 = 0xffffffffa13a5cc8;
    uStack_68 = 0x100;
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar1;
    lStack_60 = lVar2;
    func_0x000107c614f0(lVar1);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61434(param_2);
    (*pcVar5)(auStack_a8,&uStack_80,lVar3,lVar4);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(lVar2);
      FUN_10199f368(auStack_a8,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10199f1e8; end: 10199f27f;  */

undefined8 FUN_10199f1e8(void)

{
  func_0x0001000285a8(0x112de10e0,&UNK_10d9a87a0);
  func_0x000107c61538();
  return 0xb;
}



/* Entry: 10199f280; end: 10199f367;  */

/* WARNING: Possible PIC construction at 0x00010199f348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010199f34c) */

void FUN_10199f280(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = 0x112de1130;
  func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 6;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_2;
  }
  uVar1 = 5;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(long *)(lVar4 + 0x28) = param_3;
  *(undefined1 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = param_4;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined1 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = param_5;
  *(undefined8 *)(lVar4 + 0x58) = param_6;
  *(undefined1 *)(lVar4 + 0x60) = 2;
  *param_1 = 0xd000000000000066;
  param_1[1] = 0x800000010efc56b0;
  param_1[2] = 0xffffffffb970c2b9;
  *(undefined2 *)(param_1 + 3) = 0x100;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = lVar4;
  param_1[5] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10199f368; end: 10199f3a7;  */

undefined8 FUN_10199f368(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10199f3a8; end: 10199f577;  */

undefined ** FUN_10199f3a8(void)

{
  return &PTR_DAT_110420cd8;
}



/* Entry: 10199f578; end: 10199f5bf;  */

void FUN_10199f578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x000107c614e0();
  uStack_28 = param_1;
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c5fb20(&uStack_28,param_2);
  return;
}



/* Entry: 10199f5c0; end: 10199f5ff;  */

void FUN_10199f5c0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10199f814(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 10199f600; end: 10199f6ab;  */

void FUN_10199f600(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c606a0(uVar1);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar4,lVar2);
  }
  func_0x000107c606a0(uVar5);
  func_0x000107c5fb58(auStack_98,uVar3,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 10199f6ac; end: 10199f727;  */

/* WARNING: Possible PIC construction at 0x00010199f6f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010199f6f4) */

void FUN_10199f6ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  
  uVar2 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  lVar5 = unaff_x20[5];
  func_0x000107c606a0(*unaff_x20);
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    func_0x000107c606a0(uVar3);
  }
  else {
    func_0x000107c60694(1);
    uVar4 = uVar2;
    lVar5 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 10199f728; end: 10199f7cf;  */

void FUN_10199f728(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_98);
  func_0x000107c606a0(uVar1);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar4,lVar2);
  }
  func_0x000107c606a0(uVar5);
  func_0x000107c5fb58(auStack_98,uVar3,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 10199f7d0; end: 10199f813;  */

uint FUN_10199f7d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10199f9a8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10199f814; end: 10199f9a7;  */

/* WARNING: Removing unreachable block (ram,0x00010199f970) */

void FUN_10199f814(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x21;
  
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar7);
  uVar3 = 0;
  (**(code **)(lVar2 + 0x10))(0,0x10199f508,0,uVar7,lVar2);
  if (unaff_x21 == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar8);
    uVar7 = 0x10199f524;
    uVar4 = 1;
    (**(code **)(lVar2 + 0x38))(1,0x10199f524,0,uVar8,lVar2);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar8);
    uVar5 = 2;
    (**(code **)(lVar2 + 0x10))(2,0x10199f540,0,uVar8,lVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar1);
    uVar8 = 0x10199f55c;
    uVar6 = 3;
    (**(code **)(lVar2 + 0x30))(3,0x10199f55c,0,uVar1,lVar2);
    func_0x0001000834e4(param_2);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar7;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar8;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10199f9a8; end: 10199fa67;  */

/* WARNING: Possible PIC construction at 0x00010199f9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010199fa00) */
/* WARNING: Removing unreachable block (ram,0x00010199fa18) */

long FUN_10199f9a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 == *param_2) {
    lVar3 = param_1[2];
    lVar2 = param_2[2];
    if (lVar3 == 0) {
      if (lVar2 != 0) {
        return 0;
      }
    }
    else {
      if (lVar2 == 0) {
        return 0;
      }
      lVar4 = param_1[1];
      lVar1 = param_2[1];
      if (lVar4 != lVar1 || lVar3 != lVar2) goto code_r0x000107c605b8;
    }
    if (param_1[3] == param_2[3]) {
      lVar4 = param_1[4];
      lVar3 = param_1[5];
      lVar1 = param_2[4];
      lVar2 = param_2[5];
      if ((lVar4 == lVar1) && (lVar3 == lVar2)) {
        return 1;
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar4,lVar3,lVar1,lVar2,0);
      return lVar4;
    }
  }
  return 0;
}



/* Entry: 10199fa68; end: 10199fa6b;  */

void FUN_10199fa68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de11a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a88c0;
  func_0x000107c61520(&UNK_10d9a88c0,&UNK_110420f70);
  puRam0000000112de11a8 = puVar1;
  return;
}



/* Entry: 10199fa6c; end: 10199faab;  */

void FUN_10199fa6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de11a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a88c0;
  func_0x000107c61520(&UNK_10d9a88c0,&UNK_110420f70);
  puRam0000000112de11a8 = puVar1;
  return;
}



/* Entry: 10199faac; end: 10199fb4b;  */

long FUN_10199faac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10199fb4c; end: 10199fbc7;  */

undefined8 * FUN_10199fb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10199fbc8; end: 10199fc1b;  */

undefined8 * FUN_10199fbc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10199fc1c; end: 10199fcbf;  */

int FUN_10199fc1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10199fcc0; end: 10199fed7;  */

void FUN_10199fcc0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5fc54(puVar4,lVar2);
  func_0x000107c61170(puVar4);
  lVar5 = *(long *)(puVar3 + 0x10);
  if (lVar5 == 0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    (**(code **)(lVar10 + 0x10))
              (lVar7,puVar3 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6142c(puVar3);
  }
  pcVar9 = *(code **)(lVar10 + 0x38);
  (*pcVar9)(lVar7,lVar5 == 0,1,lVar2);
  func_0x000100029394(lVar7,lVar8);
  lVar5 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar2);
  bVar1 = (int)lVar5 != 1;
  if (bVar1) {
    (**(code **)(lVar10 + 0x20))(puVar6,lVar8,lVar2);
    func_0x000107c5ed9c(param_1,0xd000000000000025,0x800000010efc5720);
    (**(code **)(lVar10 + 8))(puVar6,lVar2);
  }
  else {
    func_0x0001000293e4(lVar7);
    lVar7 = lVar8;
  }
  func_0x0001000293e4(lVar7);
  (*pcVar9)(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 10199fed8; end: 10199ff13;  */

undefined8 FUN_10199fed8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10199ff14(param_1);
  return unaff_x20;
}



/* Entry: 10199ff14; end: 1019a0167;  */

void FUN_10199ff14(byte param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_70 [16];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar9 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12;
  FUN_10199fcc0(puVar9);
  puVar2 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar9);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efc5090);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000285a8(0x112de11c8,&UNK_10d9a89a8);
    func_0x000107c613fc();
    pcVar12 = FUN_1019a02f4;
    func_0x0001000bdd8c(FUN_1019a02f4,0);
    func_0x000107c61170(puVar4);
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(lVar6,puVar9,lVar1);
    (**(code **)(lVar11 + 0x10))(lVar7,lVar6,lVar1);
    uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar10 = uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff);
    puVar4 = &UNK_110421060;
    func_0x000107c613fc(&UNK_110421060,uVar10 + lVar8,uVar5 | 7);
    puVar4[0x10] = param_1 & 1;
    (*pcVar12)(puVar4 + uVar10,lVar7,lVar1);
    func_0x0001000285a8(0x112de11c8,&UNK_10d9a89a8);
    func_0x000107c613fc();
    pcVar12 = FUN_1019a02fc;
    func_0x0001000bdd8c(FUN_1019a02fc,puVar4);
    (**(code **)(lVar11 + 8))(lVar6,lVar1);
  }
  *(code **)(unaff_x20 + 0x10) = pcVar12;
  return;
}



/* Entry: 1019a0168; end: 1019a02f3;  */

/* WARNING: Removing unreachable block (ram,0x0001019a02cc) */

void FUN_1019a0168(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar1 = 0x112de1278;
  func_0x0001000285a8(0x112de1278,&UNK_10d9a8a88);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_2 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_3,lVar2);
    func_0x000107c6159c(puVar3,lVar1,0);
    FUN_1019aa2ec(auStack_70,&UNK_1104212b0,&PTR_DAT_112de1298);
    func_0x0001000285a8(0x112de1280,&UNK_10d9a8a90);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar1,3);
    FUN_1019aa2ec(auStack_70,&UNK_1104212b0,&PTR_DAT_112de1298);
    func_0x0001000285a8(0x112de1280,&UNK_10d9a8a90);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 1019a02f4; end: 1019a02fb;  */

void FUN_1019a02f4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1019a02fc; end: 1019a033b;  */

/* WARNING: Removing unreachable block (ram,0x0001019a02cc) */

void FUN_1019a02fc(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  lVar4 = 0x112de1278;
  func_0x0001000285a8(0x112de1278,&UNK_10d9a8a88);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((bVar1 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))
              (puVar3,unaff_x20 + (uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6159c(puVar3,lVar4,0);
    FUN_1019aa2ec(auStack_70,&UNK_1104212b0,&PTR_DAT_112de1298);
    func_0x0001000285a8(0x112de1280,&UNK_10d9a8a90);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar4,3);
    FUN_1019aa2ec(auStack_70,&UNK_1104212b0,&PTR_DAT_112de1298);
    func_0x0001000285a8(0x112de1280,&UNK_10d9a8a90);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 1019a033c; end: 1019a0353;  */

void FUN_1019a033c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0354,0,0);
  return;
}



/* Entry: 1019a0354; end: 1019a043b;  */

void FUN_1019a0354(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar1 = &UNK_110421088;
    func_0x000107c613fc(&UNK_110421088,0x18,7);
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    plVar5 = (long *)0x70;
    func_0x000107c61434(uVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    lVar2 = 0x112de11d0;
    func_0x0001000285a8(0x112de11d0,&UNK_10d9a89b8);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1019a043c;
    plVar5[0xb] = lVar2;
    plVar5[0xc] = lVar4;
    plVar5[9] = (long)FUN_1019a050c;
    plVar5[10] = (long)puVar1;
    plVar5[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a0438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1019a043c; end: 1019a049f;  */

void FUN_1019a043c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1019a04a0;
  }
  else {
    pcVar2 = (code *)0x1019a04d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1019a04a0; end: 1019a050b;  */

void FUN_1019a04a0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001019a04d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 1019a050c; end: 1019a053f;  */

void FUN_1019a050c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1019a1bc0();
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 1019a0540; end: 1019a0557;  */

void FUN_1019a0540(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0558,0,0);
  return;
}



/* Entry: 1019a0558; end: 1019a0623;  */

void FUN_1019a0558(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar1 = &UNK_1104210b0;
    func_0x000107c613fc(&UNK_1104210b0,0x18,7);
    *(undefined **)(unaff_x22 + 0x30) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    plVar4 = (long *)0x70;
    func_0x000107c61434(uVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1019a0624;
    plVar4[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar4[0xc] = lVar3;
    plVar4[9] = (long)FUN_1019a0a2c;
    plVar4[10] = (long)puVar1;
    plVar4[8] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a0620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a0624; end: 1019a0687;  */

void FUN_1019a0624(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x1019a1044;
  }
  else {
    uVar1 = 0x1019a1040;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1019a0688; end: 1019a0a2b;  */

/* WARNING: Removing unreachable block (ram,0x0001019a0934) */

void FUN_1019a0688(undefined8 param_1,long param_2)

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
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long unaff_x21;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar26 = *(long *)(param_2 + 0x10);
  if (lVar26 != 0) {
    puVar28 = (undefined8 *)(param_2 + 0x80);
    do {
      uVar1 = puVar28[-0xb];
      uVar13 = puVar28[-10];
      uVar2 = puVar28[-9];
      uVar14 = puVar28[-8];
      uVar3 = puVar28[-7];
      uVar15 = puVar28[-6];
      uVar4 = puVar28[-5];
      uVar16 = puVar28[-4];
      uVar5 = puVar28[-3];
      uVar17 = puVar28[-2];
      uVar6 = puVar28[-1];
      uVar18 = *puVar28;
      uVar7 = puVar28[1];
      uVar19 = puVar28[2];
      uVar8 = puVar28[3];
      uVar20 = puVar28[4];
      uVar9 = puVar28[5];
      uVar21 = puVar28[6];
      uVar10 = puVar28[7];
      uVar22 = puVar28[8];
      uVar11 = puVar28[9];
      uVar23 = puVar28[10];
      uVar31 = puVar28[0xb];
      uVar27 = puVar28[0xc];
      uVar32 = puVar28[0xd];
      uVar12 = puVar28[0xe];
      uVar24 = puVar28[0xf];
      lVar29 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar29 + 0x18) = 2;
      *(undefined8 *)(lVar29 + 0x10) = 1;
      puVar30 = (undefined8 *)(lVar29 + 0x20);
      *puVar30 = uVar1;
      *(undefined8 *)(lVar29 + 0x28) = uVar13;
      func_0x000107c61434(uVar24);
      func_0x000107c61438(uVar13,2);
      func_0x000107c61434(uVar14);
      func_0x000107c61434(uVar15);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61434();
      func_0x000107c61434();
      func_0x000107c61434();
      func_0x000107c61434();
      lVar25 = lVar29;
      FUN_1019a1bc0();
      if (unaff_x21 != 0) {
        func_0x000107c6142c(uVar24);
        func_0x000107c6142c(uVar23);
        func_0x000107c6142c(uVar22);
        func_0x000107c6142c(uVar21);
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar14);
        func_0x000107c6142c(uVar13);
        func_0x000107c61588(lVar29);
        func_0x000107c61408(puVar30,*(undefined8 *)(lVar29 + 0x10),PTR___sSSN_11034da80);
        return;
      }
      func_0x000107c61588(lVar29);
      func_0x000107c61408(puVar30,*(undefined8 *)(lVar29 + 0x10),PTR___sSSN_11034da80);
      lVar29 = *(long *)(lVar25 + 0x10);
      func_0x000107c6142c(lVar25);
      if (lVar29 == 0) {
        FUN_1019a2014(uVar31,uVar32,uVar1,uVar13,uVar2,uVar14,uVar3,uVar15,uVar4,uVar16,uVar5,uVar17
                      ,uVar6,uVar18,uVar7,uVar19,uVar8,uVar20,uVar9,uVar21,uVar10,uVar22,uVar11,
                      uVar23,uVar27,uVar12,uVar24);
      }
      puVar28 = puVar28 + 0x1c;
      func_0x000107c6142c(uVar24);
      func_0x000107c6142c(uVar23);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(uVar21);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar15);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar13);
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  return;
}



/* Entry: 1019a0a2c; end: 1019a0a43;  */

void FUN_1019a0a2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019a0688(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019a0a44; end: 1019a0a5f;  */

void FUN_1019a0a44(undefined1 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0a60,0,0);
  return;
}



/* Entry: 1019a0a60; end: 1019a0b33;  */

void FUN_1019a0a60(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x48);
    puVar2 = &UNK_1104210d8;
    func_0x000107c613fc(&UNK_1104210d8,0x19,7);
    *(undefined **)(unaff_x22 + 0x30) = puVar2;
    *(undefined8 *)(puVar2 + 0x10) = uVar3;
    puVar2[0x18] = uVar1;
    plVar5 = (long *)0x70;
    func_0x000107c61434(uVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1019a0b34;
    plVar5[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar5[0xc] = lVar4;
    plVar5[9] = (long)FUN_1019a0c80;
    plVar5[10] = (long)puVar2;
    plVar5[8] = (long)plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a0b34; end: 1019a0b97;  */

void FUN_1019a0b34(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1019a0b98;
  }
  else {
    pcVar2 = (code *)0x1019a0bcc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1019a0b98; end: 1019a0bff;  */

void FUN_1019a0b98(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001019a0bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a0c00; end: 1019a0c7f;  */

void FUN_1019a0c00(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    FUN_1019a2634((param_3 & 0xff) - 1);
  }
  else {
    puVar4 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      func_0x000107c61434(uVar2);
      FUN_1019a24bc(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      if (unaff_x21 != 0) {
        return;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1019a0c80; end: 1019a0c9b;  */

void FUN_1019a0c80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019a0c00(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1019a0c9c; end: 1019a0cb3;  */

void FUN_1019a0c9c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0cb4,0,0);
  return;
}



/* Entry: 1019a0cb4; end: 1019a0e07;  */

void FUN_1019a0cb4(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x1019a0d44;
    plVar1[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar1[0xc] = lVar2;
    plVar1[9] = (long)FUN_1019a0e08;
    plVar1[10] = 0;
    plVar1[8] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a0d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a0e08; end: 1019a0e27;  */

void FUN_1019a0e08(void)

{
  FUN_1019a23c4();
  return;
}



/* Entry: 1019a0e28; end: 1019a0e4b;  */

void FUN_1019a0e28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019a0e4c; end: 1019a0e9b;  */

void FUN_1019a0e4c(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019a0e9c;
  plVar1[4] = param_1;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0354,0,0);
  return;
}



/* Entry: 1019a0e9c; end: 1019a0ee3;  */

void FUN_1019a0e9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019a0ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019a0ee4; end: 1019a0f33;  */

void FUN_1019a0ee4(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019a1038;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0558,0,0);
  return;
}



/* Entry: 1019a0f34; end: 1019a0f93;  */

void FUN_1019a0f34(undefined1 param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019a0f94;
  plVar1[3] = param_2;
  plVar1[4] = lVar2;
  *(undefined1 *)(plVar1 + 9) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a0a60,0,0);
  return;
}



/* Entry: 1019a0f94; end: 1019a1037;  */

void FUN_1019a0f94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019a0fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019a1038; end: 1019a105b;  */

void FUN_1019a1038(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019a0fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019a105c; end: 1019a1133;  */

void FUN_1019a105c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690((ulong)bVar1 - 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019a1134; end: 1019a1157;  */

void FUN_1019a1134(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 - 1;
  return;
}



/* Entry: 1019a1158; end: 1019a196b;  */

undefined * FUN_1019a1158(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uStack_70;
  
  if (*(long *)(unaff_x20 + 0x38) == 1) {
    uStack_70 = PTR_PTR_1126bb3e0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar10 = *(long *)(unaff_x20 + 0x90);
  }
  else {
    uStack_70 = (undefined *)0x0;
    lVar10 = *(long *)(unaff_x20 + 0x90);
  }
  if (lVar10 == 0) {
    uVar2 = 0;
    lVar10 = *(long *)(unaff_x20 + 0xa0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
    func_0x000107c5fadc(uVar2);
    lVar10 = *(long *)(unaff_x20 + 0xa0);
  }
  if (lVar10 == 0) {
    uVar3 = 0;
    lVar10 = *(long *)(unaff_x20 + 0xb0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
    func_0x000107c5fadc(uVar3);
    lVar10 = *(long *)(unaff_x20 + 0xb0);
  }
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
    func_0x000107c5fadc(uVar4);
  }
  puVar5 = PTR_PTR_1126bb3f8;
  func_0x000107c610f8();
  func_0x000107c48b68();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    uVar2 = 0;
    lVar10 = *(long *)(unaff_x20 + 0x58);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c5fadc(uVar2);
    lVar10 = *(long *)(unaff_x20 + 0x58);
  }
  if (lVar10 == 0) {
    uVar3 = 0;
    lVar10 = *(long *)(unaff_x20 + 0x68);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c5fadc(uVar3);
    lVar10 = *(long *)(unaff_x20 + 0x68);
  }
  if (lVar10 == 0) {
    uVar4 = 0;
    lVar10 = *(long *)(unaff_x20 + 0x78);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
    func_0x000107c5fadc(uVar4);
    lVar10 = *(long *)(unaff_x20 + 0x78);
  }
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c5fadc(uVar6);
  }
  puVar7 = PTR_PTR_1126b14b8;
  func_0x000107c610f8(PTR_PTR_1126b14b8);
  func_0x000107c4598c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar8 = PTR_PTR_1126b15c8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  func_0x000107c5fadc(uVar2,uVar6);
  uVar6 = uVar3;
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5fadc(uVar4,uVar9);
  uVar9 = uVar3;
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c49278(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  return puVar8;
}



/* Entry: 1019a196c; end: 1019a19db;  */

long FUN_1019a196c(long param_1)

{
  long lVar1;
  
  lVar1 = 4;
  if (param_1 + 1U < 4) {
    lVar1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 1019a19dc; end: 1019a1a1b;  */

void FUN_1019a19dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de1288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8aa0;
  func_0x000107c61520(&UNK_10d9a8aa0,&UNK_110421198);
  puRam0000000112de1288 = puVar1;
  return;
}



/* Entry: 1019a1a1c; end: 1019a1bbf;  */

int FUN_1019a1a1c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1019a1a98;
        goto LAB_1019a1a7c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1019a1a7c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1019a1a98:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1019a1bc0; end: 1019a2013;  */

undefined * FUN_1019a1bc0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar8;
  long unaff_x21;
  long lVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 auStack_218 [24];
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  
  puVar7 = unaff_x20;
  func_0x000107c61618();
  if (puVar7 == (undefined *)0x0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,puVar7,0,0);
    func_0x000107c61654();
  }
  else {
    unaff_x20 = *(undefined **)(unaff_x20 + 8);
    FUN_1019a297c(&uStack_1c0,param_1);
    puVar6 = puVar7;
    func_0x000107c614f0(puVar7);
    (**(code **)(unaff_x20 + 8))(&uStack_1f0,&uStack_1c0,puVar6,unaff_x20);
    if (unaff_x21 == 0) {
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      puStack_258 = puVar7;
      func_0x000100bcb1dc(&uStack_a0);
      uStack_a8 = uStack_1a0;
      FUN_1019a2b60(&uStack_a8,0x112de1170,&UNK_10d9a87c0);
      uStack_b0 = uStack_198;
      FUN_1019a2b60(&uStack_b0,0x112d38270,&UNK_10d905a20);
      FUN_10199e888(&uStack_1f0,&uStack_240);
      unaff_x20 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lStack_228 != 0) {
        lVar9 = 0;
        do {
          FUN_10199e8d8(&uStack_240,auStack_218);
          FUN_10199e8f0(auStack_218,&uStack_240);
          FUN_1019a3334(&uStack_190,&uStack_240);
          if (lVar9 != 0) {
            FUN_1019a2b60(&uStack_1f0,0x112de1128,&UNK_10d9a87b0);
            func_0x000107c6142c(unaff_x20);
            func_0x000107c615e8(puStack_258);
LAB_1019a1fe4:
            func_0x0001000834e4(auStack_218);
            return unaff_x20;
          }
          puVar7 = unaff_x20;
          func_0x000107c61558();
          puVar6 = unaff_x20;
          if (((ulong)puVar7 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            func_0x000101993d28(0,*(long *)(unaff_x20 + 0x10) + 1,1,unaff_x20);
          }
          uVar1 = *(ulong *)(puVar6 + 0x10);
          puVar7 = puVar6;
          lStack_248 = lVar9;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            func_0x000101993d28(puVar7,uVar1 + 1,1,puVar6);
          }
          lVar3 = lStack_1f8;
          lVar2 = lStack_200;
          *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x28) = uStack_188;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x20) = uStack_190;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x38) = uStack_178;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x30) = uStack_180;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x68) = uStack_148;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x60) = uStack_150;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x78) = uStack_138;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x70) = uStack_140;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x48) = uStack_168;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x40) = uStack_170;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x58) = uStack_158;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x50) = uStack_160;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xa8) = uStack_108;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xa0) = uStack_110;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xb8) = uStack_f8;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xb0) = uStack_100;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x88) = uStack_128;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x80) = uStack_130;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x98) = uStack_118;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0x90) = uStack_120;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xe8) = uStack_c8;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xe0) = uStack_d0;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xf8) = uStack_b8;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xf0) = uStack_c0;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 200) = uStack_e8;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xc0) = uStack_f0;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xd8) = uStack_d8;
          *(undefined8 *)(puVar7 + uVar1 * 0xe0 + 0xd0) = uStack_e0;
          puStack_250 = puVar7;
          func_0x0001000c6518(auStack_218,lStack_200);
          pcVar10 = *(code **)(lVar3 + 8);
          lVar4 = 0;
          func_0x000107c60188(0,lVar2);
          unaff_x20 = *(undefined **)(lVar4 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(unaff_x20 + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar9 = lStack_248;
          puVar11 = auStack_260 + -extraout_x8;
          (*pcVar10)(puVar11,lVar2,lVar3);
          if (lVar9 != 0) {
            FUN_1019a2b60(&uStack_1f0,0x112de1128,&UNK_10d9a87b0);
            func_0x000107c6142c(puStack_250);
            func_0x000107c615e8(puStack_258);
            goto LAB_1019a1fe4;
          }
          lVar8 = *(long *)(lVar2 + -8);
          puVar5 = puVar11;
          (**(code **)(lVar8 + 0x30))(puVar11,1,lVar2);
          if ((int)puVar5 == 1) {
            FUN_1019a2b60(&uStack_1f0,0x112de1128,&UNK_10d9a87b0);
            (**(code **)(unaff_x20 + 8))(puVar11,lVar4);
            lStack_220 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            lStack_228 = 0;
            uStack_230 = 0;
          }
          else {
            lStack_228 = lVar2;
            lStack_220 = lVar3;
            func_0x0001000c5db4(&uStack_240);
            (**(code **)(lVar8 + 0x20))();
            FUN_1019a2b60(&uStack_1f0,0x112de1128,&UNK_10d9a87b0);
          }
          unaff_x20 = puStack_250;
          uStack_1e8 = uStack_238;
          uStack_1f0 = uStack_240;
          lStack_1d8 = lStack_228;
          uStack_1e0 = uStack_230;
          lStack_1d0 = lStack_220;
          func_0x0001000834e4(auStack_218);
          FUN_10199e888(&uStack_1f0,&uStack_240);
        } while (lStack_228 != 0);
      }
      FUN_1019a2b60(&uStack_1f0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(puStack_258);
      FUN_1019a2b60(&uStack_240,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(puVar7);
      uStack_78 = uStack_1b8;
      uStack_80 = uStack_1c0;
      func_0x000100bcb1dc(&uStack_80);
      uStack_58 = uStack_1a0;
      FUN_1019a2b60(&uStack_58,0x112de1170,&UNK_10d9a87c0);
      uStack_88 = uStack_198;
      FUN_1019a2b60(&uStack_88,0x112d38270,&UNK_10d905a20);
    }
  }
  return unaff_x20;
}



/* Entry: 1019a2014; end: 1019a23c3;  */

void FUN_1019a2014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,long param_15,undefined8 param_16,long param_17,
                  undefined8 param_18,undefined8 param_19,long param_20,undefined8 param_21,
                  long param_22,undefined8 param_23,long param_24,undefined8 param_25,
                  undefined8 param_26,long param_27)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [40];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  lVar2 = unaff_x20;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar2,0,0);
    func_0x000107c61654();
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 8);
    lVar3 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 0x20;
    *(undefined8 *)(lVar3 + 0x10) = 0x10;
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    *(undefined1 *)(lVar3 + 0x30) = 2;
    *(undefined8 *)(lVar3 + 0x38) = param_5;
    *(undefined8 *)(lVar3 + 0x40) = param_6;
    *(undefined1 *)(lVar3 + 0x48) = 2;
    *(undefined8 *)(lVar3 + 0x50) = param_7;
    *(undefined8 *)(lVar3 + 0x58) = param_8;
    *(undefined1 *)(lVar3 + 0x60) = 2;
    *(undefined8 *)(lVar3 + 0x68) = param_9;
    *(undefined8 *)(lVar3 + 0x70) = 0;
    *(undefined1 *)(lVar3 + 0x78) = 0;
    uVar1 = 0;
    if (param_11 != 0) {
      uVar1 = param_10;
    }
    uVar5 = 5;
    if (param_11 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(long *)(lVar3 + 0x88) = param_11;
    *(undefined1 *)(lVar3 + 0x90) = uVar5;
    uVar1 = 0;
    if (param_13 != 0) {
      uVar1 = param_12;
    }
    uVar5 = 5;
    if (param_13 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0x98) = uVar1;
    *(long *)(lVar3 + 0xa0) = param_13;
    *(undefined1 *)(lVar3 + 0xa8) = uVar5;
    uVar1 = 0;
    if (param_15 != 0) {
      uVar1 = param_14;
    }
    uVar5 = 5;
    if (param_15 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0xb0) = uVar1;
    *(long *)(lVar3 + 0xb8) = param_15;
    *(undefined1 *)(lVar3 + 0xc0) = uVar5;
    uVar1 = 0;
    if (param_17 != 0) {
      uVar1 = param_16;
    }
    uVar5 = 5;
    if (param_17 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 200) = uVar1;
    *(long *)(lVar3 + 0xd0) = param_17;
    *(undefined1 *)(lVar3 + 0xd8) = uVar5;
    *(undefined8 *)(lVar3 + 0xe0) = param_18;
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    *(undefined1 *)(lVar3 + 0xf0) = 0;
    uVar1 = 0;
    if (param_20 != 0) {
      uVar1 = param_19;
    }
    uVar5 = 5;
    if (param_20 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0xf8) = uVar1;
    *(long *)(lVar3 + 0x100) = param_20;
    *(undefined1 *)(lVar3 + 0x108) = uVar5;
    uVar1 = 0;
    if (param_22 != 0) {
      uVar1 = param_21;
    }
    uVar5 = 5;
    if (param_22 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0x110) = uVar1;
    *(long *)(lVar3 + 0x118) = param_22;
    *(undefined1 *)(lVar3 + 0x120) = uVar5;
    uVar1 = 0;
    if (param_24 != 0) {
      uVar1 = param_23;
    }
    uVar5 = 5;
    if (param_24 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0x128) = uVar1;
    *(long *)(lVar3 + 0x130) = param_24;
    *(undefined1 *)(lVar3 + 0x138) = uVar5;
    *(undefined8 *)(lVar3 + 0x140) = param_1;
    *(undefined8 *)(lVar3 + 0x148) = 0;
    *(undefined1 *)(lVar3 + 0x150) = 1;
    *(undefined8 *)(lVar3 + 0x158) = param_25;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined1 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x170) = param_2;
    *(undefined8 *)(lVar3 + 0x178) = 0;
    *(undefined1 *)(lVar3 + 0x180) = 1;
    uVar1 = 0;
    if (param_27 != 0) {
      uVar1 = param_26;
    }
    uVar5 = 5;
    if (param_27 != 0) {
      uVar5 = 2;
    }
    *(undefined8 *)(lVar3 + 0x188) = uVar1;
    *(long *)(lVar3 + 400) = param_27;
    *(undefined1 *)(lVar3 + 0x198) = uVar5;
    uStack_a8 = 0xd0000000000002b7;
    uStack_a0 = 0x800000010efc5780;
    uStack_98 = 0xffffffffb970c2b9;
    uStack_90 = 0x100;
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar4 = lVar2;
    lStack_88 = lVar3;
    func_0x000107c614f0(lVar2);
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_11);
    func_0x000107c61434(param_13);
    func_0x000107c61434(param_15);
    func_0x000107c61434(param_17);
    func_0x000107c61434(param_20);
    func_0x000107c61434(param_22);
    func_0x000107c61434(param_24);
    func_0x000107c61434(param_27);
    (*pcVar7)(auStack_d0,&uStack_a8,lVar4,lVar6);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(lVar3);
      FUN_1019a2b60(auStack_d0,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c61574(lVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1019a23c4; end: 1019a24bb;  */

void FUN_1019a23c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 8);
    uStack_60 = 0xd000000000000030;
    uStack_58 = 0x800000010efc5a40;
    uStack_50 = 0x2f1a8c14;
    uStack_48 = 0x100;
    puStack_40 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(auStack_88,&uStack_60,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    if (unaff_x21 == 0) {
      FUN_1019a2b60(auStack_88,0x112de1128,&UNK_10d9a87b0);
    }
  }
  return;
}



/* Entry: 1019a24bc; end: 1019a2633;  */

void FUN_1019a24bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar2 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined1 *)(lVar2 + 0x30) = 2;
    uStack_80 = 0xd000000000000047;
    uStack_78 = 0x800000010efc5a80;
    uStack_70 = 0xffffffffa4d522f3;
    uStack_68 = 0x100;
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar1;
    lStack_60 = lVar2;
    func_0x000107c614f0(lVar1);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61434(param_2);
    (*pcVar5)(auStack_a8,&uStack_80,lVar3,lVar4);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(lVar2);
      FUN_1019a2b60(auStack_a8,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1019a2634; end: 1019a278f;  */

void FUN_1019a2634(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar2 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined1 *)(lVar2 + 0x30) = 0;
    uStack_70 = 0xd00000000000005b;
    uStack_68 = 0x800000010efc5ad0;
    uStack_60 = 0x5063df32;
    uStack_58 = 0x100;
    puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar1;
    lStack_50 = lVar2;
    func_0x000107c614f0(lVar1);
    (**(code **)(lVar4 + 8))(auStack_98,&uStack_70,lVar3,lVar4);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(lVar2);
      FUN_1019a2b60(auStack_98,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1019a2790; end: 1019a2807;  */

undefined8 FUN_1019a2790(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112de1290 != -1) {
    func_0x000107c61568(0x112de1290,0x1019a1b8c);
  }
  uVar2 = uRam0000000113803918;
  uVar1 = uRam0000000113803900;
  func_0x000107c61434(uRam0000000113803910);
  func_0x000107c61434(uVar2);
  return uVar1;
}



/* Entry: 1019a2808; end: 1019a2847;  */

void FUN_1019a2808(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61604();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1019a2848; end: 1019a2863;  */

void FUN_1019a2848(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1019a2864();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1019a2864; end: 1019a297b;  */

undefined * FUN_1019a2864(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a297c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1104e5f90);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 1019a297c; end: 1019a2b5f;  */

void FUN_1019a297c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  puVar4 = PTR___sSSN_11034da80;
  lVar11 = param_2;
  puVar9 = PTR___sSSN_11034da80;
  FUN_102211748();
  *(undefined **)(lVar5 + 0x38) = puVar4;
  lVar6 = lVar11;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x40) = lVar6;
  *(long *)(lVar5 + 0x20) = lVar11;
  *(undefined **)(lVar5 + 0x28) = puVar9;
  uVar10 = 0x800000010efc5b30;
  uVar7 = 0xd00000000000004b;
  func_0x000107c5fb00(0xd00000000000004b,0x800000010efc5b30,lVar5);
  lVar5 = 0x112de1130;
  func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    FUN_1019a2848(0,lVar11,0);
    puVar12 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar8 = puVar12[-1];
      uVar2 = *puVar12;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      uVar3 = *(ulong *)(puVar4 + 0x18);
      func_0x000107c61434(uVar2);
      if (uVar3 >> 1 <= uVar1) {
        FUN_1019a2848(1 < uVar3,uVar1 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x18 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar1 * 0x18 + 0x28) = uVar2;
      puVar4[uVar1 * 0x18 + 0x30] = 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined **)(lVar5 + 0x20) = puVar4;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined1 *)(lVar5 + 0x30) = 4;
  uVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *param_1 = uVar7;
  param_1[1] = uVar10;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[4] = lVar5;
  param_1[5] = uVar8;
  return;
}



/* Entry: 1019a2b60; end: 1019a2b9f;  */

undefined8 FUN_1019a2b60(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019a2ba0; end: 1019a2f2b;  */

undefined ** FUN_1019a2ba0(void)

{
  return &PTR_DAT_110421238;
}



/* Entry: 1019a2f2c; end: 1019a2f73;  */

void FUN_1019a2f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x000107c614e0();
  uStack_28 = param_1;
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c5fb20(&uStack_28,param_2);
  return;
}



/* Entry: 1019a2f74; end: 1019a31b3;  */

/* WARNING: Possible PIC construction at 0x0001019a2fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a2fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a2fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a302c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a30b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a30dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019a30e0) */
/* WARNING: Removing unreachable block (ram,0x0001019a30bc) */
/* WARNING: Removing unreachable block (ram,0x0001019a3054) */
/* WARNING: Removing unreachable block (ram,0x0001019a3030) */
/* WARNING: Removing unreachable block (ram,0x0001019a300c) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fe8) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fbc) */
/* WARNING: Removing unreachable block (ram,0x0001019a3058) */
/* WARNING: Removing unreachable block (ram,0x0001019a2ff0) */
/* WARNING: Removing unreachable block (ram,0x0001019a3068) */
/* WARNING: Removing unreachable block (ram,0x0001019a3014) */
/* WARNING: Removing unreachable block (ram,0x0001019a3078) */
/* WARNING: Removing unreachable block (ram,0x0001019a3038) */
/* WARNING: Removing unreachable block (ram,0x0001019a3088) */
/* WARNING: Removing unreachable block (ram,0x0001019a3090) */
/* WARNING: Removing unreachable block (ram,0x0001019a3108) */
/* WARNING: Removing unreachable block (ram,0x0001019a30c4) */
/* WARNING: Removing unreachable block (ram,0x0001019a3118) */
/* WARNING: Removing unreachable block (ram,0x0001019a30e8) */
/* WARNING: Removing unreachable block (ram,0x0001019a3128) */
/* WARNING: Removing unreachable block (ram,0x0001019a30a0) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fcc) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fa4) */
/* WARNING: Removing unreachable block (ram,0x0001019a3104) */
/* WARNING: Removing unreachable block (ram,0x0001019a3130) */
/* WARNING: Removing unreachable block (ram,0x0001019a3134) */
/* WARNING: Removing unreachable block (ram,0x0001019a3138) */
/* WARNING: Removing unreachable block (ram,0x0001019a313c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3140) */
/* WARNING: Removing unreachable block (ram,0x0001019a3154) */
/* WARNING: Removing unreachable block (ram,0x0001019a3158) */
/* WARNING: Removing unreachable block (ram,0x0001019a315c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3198) */
/* WARNING: Removing unreachable block (ram,0x0001019a316c) */

void FUN_1019a2f74(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c606a0(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 1019a31b4; end: 1019a321b;  */

void FUN_1019a31b4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  FUN_1019a3334(&uStack_100);
  if (unaff_x21 == 0) {
    param_1[0x15] = uStack_58;
    param_1[0x14] = uStack_60;
    param_1[0x17] = uStack_48;
    param_1[0x16] = uStack_50;
    param_1[0x19] = uStack_38;
    param_1[0x18] = uStack_40;
    param_1[0x1b] = uStack_28;
    param_1[0x1a] = uStack_30;
    param_1[0xd] = uStack_98;
    param_1[0xc] = uStack_a0;
    param_1[0xf] = uStack_88;
    param_1[0xe] = uStack_90;
    param_1[0x11] = uStack_78;
    param_1[0x10] = uStack_80;
    param_1[0x13] = uStack_68;
    param_1[0x12] = uStack_70;
    param_1[5] = uStack_d8;
    param_1[4] = uStack_e0;
    param_1[7] = uStack_c8;
    param_1[6] = uStack_d0;
    param_1[9] = uStack_b8;
    param_1[8] = uStack_c0;
    param_1[0xb] = uStack_a8;
    param_1[10] = uStack_b0;
    param_1[1] = uStack_f8;
    *param_1 = uStack_100;
    param_1[3] = uStack_e8;
    param_1[2] = uStack_f0;
  }
  return;
}



/* Entry: 1019a321c; end: 1019a3257;  */

void FUN_1019a321c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1019a2f74(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019a3258; end: 1019a325b;  */

/* WARNING: Possible PIC construction at 0x0001019a2fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a2fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a2fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a302c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a30b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a30dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019a3100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019a30e0) */
/* WARNING: Removing unreachable block (ram,0x0001019a30bc) */
/* WARNING: Removing unreachable block (ram,0x0001019a3054) */
/* WARNING: Removing unreachable block (ram,0x0001019a3030) */
/* WARNING: Removing unreachable block (ram,0x0001019a300c) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fe8) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fbc) */
/* WARNING: Removing unreachable block (ram,0x0001019a3058) */
/* WARNING: Removing unreachable block (ram,0x0001019a2ff0) */
/* WARNING: Removing unreachable block (ram,0x0001019a3068) */
/* WARNING: Removing unreachable block (ram,0x0001019a3014) */
/* WARNING: Removing unreachable block (ram,0x0001019a3078) */
/* WARNING: Removing unreachable block (ram,0x0001019a3038) */
/* WARNING: Removing unreachable block (ram,0x0001019a3088) */
/* WARNING: Removing unreachable block (ram,0x0001019a3090) */
/* WARNING: Removing unreachable block (ram,0x0001019a3108) */
/* WARNING: Removing unreachable block (ram,0x0001019a30c4) */
/* WARNING: Removing unreachable block (ram,0x0001019a3118) */
/* WARNING: Removing unreachable block (ram,0x0001019a30e8) */
/* WARNING: Removing unreachable block (ram,0x0001019a3128) */
/* WARNING: Removing unreachable block (ram,0x0001019a30a0) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fcc) */
/* WARNING: Removing unreachable block (ram,0x0001019a2fa4) */
/* WARNING: Removing unreachable block (ram,0x0001019a3104) */
/* WARNING: Removing unreachable block (ram,0x0001019a3130) */
/* WARNING: Removing unreachable block (ram,0x0001019a3134) */
/* WARNING: Removing unreachable block (ram,0x0001019a3138) */
/* WARNING: Removing unreachable block (ram,0x0001019a313c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3140) */
/* WARNING: Removing unreachable block (ram,0x0001019a3154) */
/* WARNING: Removing unreachable block (ram,0x0001019a3158) */
/* WARNING: Removing unreachable block (ram,0x0001019a315c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3198) */
/* WARNING: Removing unreachable block (ram,0x0001019a316c) */

void FUN_1019a3258(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c606a0(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 1019a325c; end: 1019a3293;  */

void FUN_1019a325c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1019a2f74(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019a3294; end: 1019a3333;  */

uint FUN_1019a3294(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_1019a3bac(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1019a3334; end: 1019a3bab;  */

/* WARNING: Removing unreachable block (ram,0x0001019a3a04) */
/* WARNING: Removing unreachable block (ram,0x0001019a389c) */
/* WARNING: Removing unreachable block (ram,0x0001019a370c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3580) */
/* WARNING: Removing unreachable block (ram,0x0001019a34d0) */
/* WARNING: Removing unreachable block (ram,0x0001019a36a0) */
/* WARNING: Removing unreachable block (ram,0x0001019a3778) */
/* WARNING: Removing unreachable block (ram,0x0001019a382c) */
/* WARNING: Removing unreachable block (ram,0x0001019a390c) */
/* WARNING: Removing unreachable block (ram,0x0001019a359c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3a6c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3454) */
/* WARNING: Removing unreachable block (ram,0x0001019a35a0) */
/* WARNING: Removing unreachable block (ram,0x0001019a3600) */
/* WARNING: Removing unreachable block (ram,0x0001019a35b4) */
/* WARNING: Removing unreachable block (ram,0x0001019a35b8) */
/* WARNING: Removing unreachable block (ram,0x0001019a360c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3610) */
/* WARNING: Removing unreachable block (ram,0x0001019a35c4) */
/* WARNING: Removing unreachable block (ram,0x0001019a35c8) */
/* WARNING: Removing unreachable block (ram,0x0001019a361c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3620) */
/* WARNING: Removing unreachable block (ram,0x0001019a35d4) */
/* WARNING: Removing unreachable block (ram,0x0001019a35d8) */
/* WARNING: Removing unreachable block (ram,0x0001019a362c) */
/* WARNING: Removing unreachable block (ram,0x0001019a3630) */
/* WARNING: Removing unreachable block (ram,0x0001019a35e4) */
/* WARNING: Removing unreachable block (ram,0x0001019a3640) */
/* WARNING: Removing unreachable block (ram,0x0001019a35ec) */
/* WARNING: Removing unreachable block (ram,0x0001019a35fc) */
/* WARNING: Removing unreachable block (ram,0x0001019a3648) */

void FUN_1019a3334(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined1 auStack_310 [224];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar5);
  uVar2 = 0;
  (**(code **)(lVar1 + 0x10))(0,0x1019a2d50,0,uVar5,lVar1);
  if (unaff_x21 == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_148 = uVar2;
    func_0x0001000a8868(param_3,uVar4);
    uVar5 = 0x1019a2d6c;
    uVar3 = 1;
    (**(code **)(lVar1 + 0x30))(1,0x1019a2d6c,0,uVar4,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_140 = uVar3;
    uStack_138 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2d88;
    uVar4 = 2;
    (**(code **)(lVar1 + 0x30))(2,0x1019a2d88,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_130 = uVar4;
    uStack_128 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2da4;
    uVar4 = 3;
    (**(code **)(lVar1 + 0x30))(3,0x1019a2da4,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_120 = uVar4;
    uStack_118 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 4;
    (**(code **)(lVar1 + 0x10))(4,0x1019a2dc0,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_110 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2ddc;
    uVar4 = 5;
    (**(code **)(lVar1 + 0x38))(5,0x1019a2ddc,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_108 = uVar4;
    uStack_100 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2df8;
    uVar4 = 6;
    (**(code **)(lVar1 + 0x38))(6,0x1019a2df8,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_f8 = uVar4;
    uStack_f0 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2e14;
    uVar4 = 7;
    (**(code **)(lVar1 + 0x38))(7,0x1019a2e14,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_e8 = uVar4;
    uStack_e0 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2e30;
    uVar4 = 8;
    (**(code **)(lVar1 + 0x38))(8,0x1019a2e30,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_d8 = uVar4;
    uStack_d0 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 9;
    (**(code **)(lVar1 + 0x10))(9,0x1019a2e4c,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_c8 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2e68;
    uVar4 = 10;
    (**(code **)(lVar1 + 0x38))(10,0x1019a2e68,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_c0 = uVar4;
    uStack_b8 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2e84;
    uVar4 = 0xb;
    (**(code **)(lVar1 + 0x38))(0xb,0x1019a2e84,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_b0 = uVar4;
    uStack_a8 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2ea0;
    uVar4 = 0xc;
    (**(code **)(lVar1 + 0x38))(0xc,0x1019a2ea0,0,uVar2,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_a0 = uVar4;
    uStack_98 = uVar5;
    func_0x0001000a8868(param_3,uVar2);
    (**(code **)(lVar1 + 0x20))(0xd,0x1019a2ebc,0,uVar2,lVar1);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_90 = param_2;
    func_0x0001000a8868(param_3,uVar5);
    uVar2 = 0xe;
    (**(code **)(lVar1 + 0x10))(0xe,0x1019a2ed8,0,uVar5,lVar1);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_88 = uVar2;
    func_0x0001000a8868(param_3,uVar5);
    (**(code **)(lVar1 + 0x20))(0xf,0x1019a2ef4,0,uVar5,lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    uStack_80 = param_2;
    func_0x0001000a8868(param_3,uVar2);
    uVar5 = 0x1019a2f10;
    uVar4 = 0x10;
    (**(code **)(lVar1 + 0x38))(0x10,0x1019a2f10,0,uVar2,lVar1);
    uStack_188 = uStack_a0;
    uStack_190 = uStack_a8;
    uStack_178 = uStack_90;
    uStack_180 = uStack_98;
    uStack_1c8 = uStack_e0;
    uStack_1d0 = uStack_e8;
    uStack_1b8 = uStack_d0;
    uStack_1c0 = uStack_d8;
    uStack_1a8 = uStack_c0;
    uStack_1b0 = uStack_c8;
    uStack_198 = uStack_b0;
    uStack_1a0 = uStack_b8;
    uStack_208 = uStack_120;
    uStack_210 = uStack_128;
    uStack_1f8 = uStack_110;
    uStack_200 = uStack_118;
    uStack_1e8 = uStack_100;
    uStack_1f0 = uStack_108;
    uStack_1d8 = uStack_f0;
    uStack_1e0 = uStack_f8;
    uStack_228 = uStack_140;
    uStack_230 = uStack_148;
    uStack_218 = uStack_130;
    uStack_220 = uStack_138;
    uStack_168 = uStack_80;
    uStack_170 = uStack_88;
    uStack_160 = uVar4;
    uStack_158 = uVar5;
    uStack_78 = uVar4;
    uStack_70 = uVar5;
    FUN_1019982e4(&uStack_230,auStack_310);
    func_0x0001000834e4(param_3);
    func_0x000101998320(&uStack_148);
    param_1[0x15] = uStack_188;
    param_1[0x14] = uStack_190;
    param_1[0x17] = uStack_178;
    param_1[0x16] = uStack_180;
    param_1[0x19] = uStack_168;
    param_1[0x18] = uStack_170;
    param_1[0x1b] = uStack_158;
    param_1[0x1a] = uStack_160;
    param_1[0xd] = uStack_1c8;
    param_1[0xc] = uStack_1d0;
    param_1[0xf] = uStack_1b8;
    param_1[0xe] = uStack_1c0;
    param_1[0x11] = uStack_1a8;
    param_1[0x10] = uStack_1b0;
    param_1[0x13] = uStack_198;
    param_1[0x12] = uStack_1a0;
    param_1[5] = uStack_208;
    param_1[4] = uStack_210;
    param_1[7] = uStack_1f8;
    param_1[6] = uStack_200;
    param_1[9] = uStack_1e8;
    param_1[8] = uStack_1f0;
    param_1[0xb] = uStack_1d8;
    param_1[10] = uStack_1e0;
    param_1[1] = uStack_228;
    *param_1 = uStack_230;
    param_1[3] = uStack_218;
    param_1[2] = uStack_220;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}


