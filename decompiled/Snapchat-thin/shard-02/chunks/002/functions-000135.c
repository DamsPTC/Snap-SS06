/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a07964; end: 101a07a4f;  */

void FUN_101a07964(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000100f89a68();
  if ((param_3 & 1) == 0) {
    lVar2 = 0;
    FUN_101a0782c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101a14070();
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar2 = 0;
    FUN_101a0782c();
    lVar6 = *(long *)(lVar2 + -8);
    func_0x000101a07edc(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_101a07a50(param_2,lVar4,FUN_101a0782c);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a07a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 101a07a50; end: 101a07d53;  */

void FUN_101a07a50(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar12 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar12 = uVar12 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar13 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar13 + uVar11 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar12) {
        if (uVar12 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_101a07b1c:
          puVar3 = (undefined8 *)(lVar13 + param_1 * 8);
          if ((param_1 != uVar11) || (puVar2 + 1 <= puVar3)) {
            *puVar3 = *puVar2;
          }
          lVar13 = *(long *)(param_2 + 0x38);
          lVar5 = 0;
          (*param_3)();
          lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
          lVar8 = lVar10 * param_1;
          uVar7 = lVar13 + lVar8;
          lVar9 = lVar10 * uVar11;
          lVar13 = lVar13 + lVar9;
          param_1 = uVar11;
          if (lVar8 < lVar9 || (ulong)(lVar13 + lVar10) <= uVar7) {
            func_0x000107c61414(uVar7,lVar13,1,lVar5);
          }
          else if (lVar8 - lVar9 != 0) {
            func_0x000107c61410(uVar7,lVar13,1);
          }
        }
      }
      else if (uVar12 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_101a07b1c;
      uVar11 = uVar11 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a07be4);
  (*pcVar4)();
}



/* Entry: 101a07d54; end: 101a07e97;  */

ulong FUN_101a07d54(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_2 != 0) {
    uStack_58 = 0;
    uVar4 = 0;
    func_0x000101a08290(0,0x112d512f8,&PTR_PTR_1126b25d8);
    func_0x000107c5fc50(param_2,&uStack_58,uVar4);
    func_0x000107c61170(param_2);
    uVar2 = uStack_58;
    if (uStack_58 != 0) {
      uVar9 = uStack_58 & 0xffffffffffffff8;
      if (uStack_58 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar9 + 0x10);
      }
      else {
        uVar7 = uStack_58;
        if (-1 < (long)uStack_58) {
          uVar7 = uVar9;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          if ((uVar2 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a07e58);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar2 + uVar8 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar8;
            func_0x000100fb10dc(uVar8,uVar2);
          }
          uVar1 = uVar8 + 1;
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a07e54);
            (*pcVar3)();
          }
          uVar6 = uVar5;
          func_0x000107c4c9b4();
          if (uVar6 == param_1) {
            func_0x000107c6142c(uVar2);
            return uVar5;
          }
          func_0x000107c61170(uVar5);
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar7);
      }
      func_0x000107c6142c(uVar2);
    }
  }
  return 0;
}



/* Entry: 101a07e98; end: 101a07f1f;  */

undefined8 FUN_101a07e98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101a0782c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101a07f20; end: 101a07fbb;  */

void FUN_101a07f20(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_101a0782c();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a07fbc;
  plVar3[4] = unaff_x20 + uVar5;
  plVar3[5] = unaff_x20 + (lVar4 + uVar5 + 7 & 0xfffffffffffffff8);
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a062f8,0,0);
  return;
}



/* Entry: 101a07fbc; end: 101a07ff7;  */

void FUN_101a07fbc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a07ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a07ff8; end: 101a08033;  */

undefined8 FUN_101a07ff8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101a0782c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101a08034; end: 101a0808b;  */

void FUN_101a08034(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a083ac;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a0734c,0,0);
  return;
}



/* Entry: 101a0808c; end: 101a080f7;  */

void FUN_101a0808c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a083b0;
  plVar5[3] = lVar1;
  plVar5[4] = lVar7;
  plVar5[2] = lVar2;
  plVar6 = (long *)0x130;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar5[5] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)FUN_101a07284;
  plVar6[0x14] = lVar2;
  plVar6[0x15] = lVar7;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar6[0x16] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x17] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x18] = uVar3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x19] = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1a] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1b] = uVar3;
  lVar2 = 0x112deb540;
  func_0x0001000285a8(0x112deb540,&UNK_10d9b7740);
  plVar6[0x1c] = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1d] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1e] = uVar3;
  lVar2 = 0;
  FUN_101a0782c();
  plVar6[0x1f] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x20] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x21] = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x22] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x23] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a06554,0,0);
  return;
}



/* Entry: 101a080f8; end: 101a0816f;  */

void FUN_101a080f8(void)

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
  plVar5[1] = 0x101a083b4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a08170; end: 101a0819b;  */

void FUN_101a08170(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a0819c; end: 101a0821f;  */

void FUN_101a0819c(undefined8 param_1)

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
  plVar5[1] = 0x101a083b8;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a08220; end: 101a082cf;  */

undefined8 FUN_101a08220(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103aeb070)(param_2,param_1);
  return param_2;
}



/* Entry: 101a082d0; end: 101a082d7;  */

void FUN_101a082d0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101a082d8; end: 101a083a7;  */

undefined8 FUN_101a082d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101a083a8; end: 101a083cb;  */

void FUN_101a083a8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a07920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a083cc; end: 101a08427;  */

void FUN_101a083cc(undefined1 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x57) = param_4;
  *(undefined1 *)(unaff_x22 + 0x56) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(long *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x55) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a08428;
  plVar1[3] = unaff_x20;
  *(undefined1 *)(plVar1 + 0xd) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a08428; end: 101a0848b;  */

void FUN_101a08428(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a08468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0848c,0,0);
  return;
}



/* Entry: 101a0848c; end: 101a086ff;  */

void FUN_101a0848c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar16 = *(long *)(unaff_x22 + 0xc0);
  uVar18 = (ulong)*(byte *)(unaff_x22 + 0x56);
  uVar5 = *(undefined1 *)(*(long *)(unaff_x22 + 0xb0) + 0x68);
  func_0x0001000d224c(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar15 = *(long *)(unaff_x22 + 0xa0);
  func_0x0001000a8868(unaff_x22 + 0x80,uVar10);
  (**(code **)(lVar15 + 8))(unaff_x22 + 0x58,uVar10,lVar15);
  func_0x0001000834e4(unaff_x22 + 0x80);
  plVar8 = (long *)(unaff_x22 + 0x58);
  FUN_101a0ce58();
  if (lVar16 != 0) {
    plVar9 = plVar8;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,plVar9,0,0);
    *plVar9 = (long)plVar8;
    plVar9[1] = uVar18;
    *(undefined1 *)(plVar9 + 2) = param_3;
    func_0x0001000834e4(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000101a08570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(long *)(*(long *)(unaff_x22 + 0xa8) + 0x10) == 0) {
    uVar14 = *(ulong *)(*(long *)(unaff_x22 + 0xb0) + 0x10);
    uVar18 = uVar14;
    FUN_101a11138();
    if (((uVar18 & 1) == 0) && (*(long *)(*(long *)(unaff_x22 + 0xb0) + 0x38) == 0)) {
      uVar10 = 0;
      func_0x000103aeb250(0);
      func_0x000103ae9d4c(unaff_x22 + 0x10,uVar14,uVar10);
      lVar15 = *(long *)(unaff_x22 + 0x18);
      if (lVar15 != 0) {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x3c);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x44);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x4c);
        cVar6 = *(char *)(unaff_x22 + 0x54);
        cVar7 = *(char *)(unaff_x22 + 0x38);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
        lVar4 = *(long *)(unaff_x22 + 0x78);
        lVar16 = unaff_x22 + 0x58;
        func_0x0001000a8868(lVar16,uVar2);
        if ((cVar7 == '\x01') || (cVar6 == '\x01')) {
          (**(code **)(lVar4 + 0x30))(lVar16,uVar17,lVar15,uVar5,1,uVar2,lVar4);
        }
        else {
          (**(code **)(lVar4 + 0x38))(uVar17,lVar15,uVar10,uVar3,uVar13,uVar11,uVar19,uVar20,uVar5);
        }
        func_0x000101a116cc(unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
      }
    }
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x48);
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  lVar15 = *(long *)(*(long *)(unaff_x22 + 0xb0) + 0x50);
  *(long *)(unaff_x22 + 0xd0) = lVar15;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  piVar12 = *(int **)(lVar15 + 8);
  iVar1 = *piVar12;
  plVar8 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101a08700;
                    /* WARNING: Could not recover jumptable at 0x000101a086fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))(uVar10,lVar15);
  return;
}



/* Entry: 101a08700; end: 101a08763;  */

void FUN_101a08700(undefined1 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x138) = param_1;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a08764;
  }
  else {
    pcVar1 = FUN_101a08950;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a08764; end: 101a0894f;  */

void FUN_101a08764(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  byte bVar8;
  
  if (*(char *)(unaff_x22 + 0x55) == '\x01') {
    piVar7 = *(int **)(*(long *)(unaff_x22 + 0xd0) + 0x10);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a08984;
                    /* WARNING: Could not recover jumptable at 0x000101a087dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xd0));
    return;
  }
  if ((*(byte *)(unaff_x22 + 0x138) & 1) == 0) {
    bVar8 = 0;
  }
  else {
    uVar4 = 0;
    FUN_101a0d090(0,*(undefined1 *)(unaff_x22 + 0x57));
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x78);
    func_0x0001000a8868(unaff_x22 + 0x58,uVar2);
    (**(code **)(lVar3 + 0x40))(uVar4,uVar2,lVar3);
    func_0x000107c615e8(uVar4);
    bVar8 = *(byte *)(unaff_x22 + 0x55);
  }
  uVar5 = *(ulong *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x0001000a8868(unaff_x22 + 0x58,uVar5);
  (**(code **)(lVar3 + 0x60))(uVar5,lVar3);
  *(ulong *)(unaff_x22 + 0x100) = uVar5;
  func_0x0001000834e4(unaff_x22 + 0x58);
  if ((bVar8 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a0889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x100),0,0,0xf000000000000000);
    return;
  }
  if ((*(char *)(unaff_x22 + 0x56) == '\x01') && (func_0x000101a112d8(), (uVar5 & 1) != 0)) {
    *(undefined8 *)(unaff_x22 + 0x118) = 0;
    piVar7 = *(int **)(*(long *)(unaff_x22 + 0xd0) + 0x18);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a08c70;
                    /* WARNING: Could not recover jumptable at 0x000101a08910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (0,0,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xd0));
    return;
  }
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a08bb8;
  plVar6[0xe] = *(long *)(unaff_x22 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c350,0,0);
  return;
}



/* Entry: 101a08950; end: 101a08983;  */

void FUN_101a08950(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000101a08980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a08984; end: 101a089f3;  */

void FUN_101a08984(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x139) = param_1 & 1;
    pcVar1 = FUN_101a089f4;
  }
  else {
    pcVar1 = FUN_101a08b84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a089f4; end: 101a08b83;  */

void FUN_101a089f4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  if (((*(byte *)(unaff_x22 + 0x138) & 1) != 0) || (*(char *)(unaff_x22 + 0x139) == '\x01')) {
    uVar5 = (ulong)*(byte *)(unaff_x22 + 0x55);
    FUN_101a0d090(uVar5,*(undefined1 *)(unaff_x22 + 0x57));
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x78);
    func_0x0001000a8868(unaff_x22 + 0x58,uVar2);
    (**(code **)(lVar3 + 0x40))(uVar5,uVar2,lVar3);
    func_0x000107c615e8(uVar5);
  }
  bVar4 = *(byte *)(unaff_x22 + 0x55);
  uVar5 = *(ulong *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x0001000a8868(unaff_x22 + 0x58,uVar5);
  (**(code **)(lVar3 + 0x60))(uVar5,lVar3);
  *(ulong *)(unaff_x22 + 0x100) = uVar5;
  func_0x0001000834e4(unaff_x22 + 0x58);
  if ((bVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a08ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x100),0,0,0xf000000000000000);
    return;
  }
  if ((*(char *)(unaff_x22 + 0x56) == '\x01') && (func_0x000101a112d8(), (uVar5 & 1) != 0)) {
    *(undefined8 *)(unaff_x22 + 0x118) = 0;
    piVar7 = *(int **)(*(long *)(unaff_x22 + 0xd0) + 0x18);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a08c70;
                    /* WARNING: Could not recover jumptable at 0x000101a08b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (0,0,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xd0));
    return;
  }
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a08bb8;
  plVar6[0xe] = *(long *)(unaff_x22 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c350,0,0);
  return;
}



/* Entry: 101a08b84; end: 101a08bb7;  */

void FUN_101a08b84(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000101a08bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a08bb8; end: 101a08c6f;  */

void FUN_101a08bb8(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x108));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a08cfc,0,0);
    return;
  }
  *(undefined8 *)(lVar4 + 0x118) = param_1;
  piVar3 = *(int **)(*(long *)(lVar4 + 0xd0) + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x120) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_101a08c70;
                    /* WARNING: Could not recover jumptable at 0x000101a08c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (0,0,*(undefined8 *)(lVar4 + 0xd8),*(undefined8 *)(lVar4 + 0xd0));
  return;
}



/* Entry: 101a08c70; end: 101a08ce3;  */

void FUN_101a08c70(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x128) = param_2;
    *(undefined8 *)(lVar2 + 0x130) = param_1;
    pcVar1 = FUN_101a08ce4;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101a08d30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a08ce4; end: 101a08cfb;  */

void FUN_101a08ce4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a08cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x118),
             *(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Entry: 101a08cfc; end: 101a08d2f;  */

void FUN_101a08cfc(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x000101a08d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a08d30; end: 101a08d4b;  */

void FUN_101a08d30(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a08d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x118),0,
             0xf000000000000000);
  return;
}



/* Entry: 101a08d4c; end: 101a08db3;  */

void FUN_101a08d4c(undefined1 param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a08db4;
  *(undefined1 *)((long)plVar2 + 0x57) = 0;
  *(undefined1 *)((long)plVar2 + 0x56) = param_3;
  plVar2[0x15] = param_2;
  plVar2[0x16] = unaff_x20;
  *(undefined1 *)((long)plVar2 + 0x55) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0x17] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101a08428;
  plVar1[3] = unaff_x20;
  *(undefined1 *)(plVar1 + 0xd) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a08db4; end: 101a08e23;  */

void FUN_101a08db4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a08e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a08e24; end: 101a08e3b;  */

void FUN_101a08e24(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a08e3c,0,0);
  return;
}



/* Entry: 101a08e3c; end: 101a09f3f;  */

/* WARNING: Removing unreachable block (ram,0x000101a09390) */
/* WARNING: Removing unreachable block (ram,0x000101a09204) */

void FUN_101a08e3c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  code *pcVar36;
  long unaff_x22;
  undefined4 uVar37;
  float fVar38;
  undefined *puVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  lVar31 = *(long *)(unaff_x22 + 0x188);
  func_0x000103aeb250(0);
  lVar31 = *(long *)(lVar31 + 0x10);
  *(long *)(unaff_x22 + 400) = lVar31;
  func_0x000103ae9d4c(unaff_x22 + 0xa0,lVar31);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined1 *)(unaff_x22 + 0x55) = *(undefined1 *)(unaff_x22 + 200);
  puVar39 = *(undefined **)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x4a8) = *(undefined8 *)(unaff_x22 + 0xd4);
  *(undefined **)(unaff_x22 + 0x4a0) = puVar39;
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xcc);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xdc);
  *(undefined1 *)(unaff_x22 + 0x56) = *(undefined1 *)(unaff_x22 + 0xe4);
  if (*(long *)(unaff_x22 + 0xa8) != 0) {
    func_0x0001000d224c(unaff_x22 + 0x160);
    lVar33 = *(long *)(unaff_x22 + 0x160);
    *(long *)(unaff_x22 + 0x1c8) = lVar33;
    if (lVar33 != 0) {
      plVar19 = (long *)0x130;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1d0) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_101a09f40;
      plVar19[0x14] = lVar31;
      plVar19[0x15] = lVar33;
      lVar31 = 0;
      func_0x000107c5ede0();
      plVar19[0x16] = lVar31;
      lVar31 = *(long *)(lVar31 + -8);
      plVar19[0x17] = lVar31;
      uVar17 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x18] = uVar17;
      lVar31 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar17 = *(long *)(*(long *)(lVar31 + -8) + 0x40) + 0xf;
      uVar18 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x19] = uVar18;
      uVar18 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x1a] = uVar18;
      uVar17 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x1b] = uVar17;
      lVar31 = 0x112deb540;
      func_0x0001000285a8(0x112deb540,&UNK_10d9b7740);
      plVar19[0x1c] = lVar31;
      uVar17 = *(long *)(*(long *)(lVar31 + -8) + 0x40) + 0xf;
      uVar18 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x1d] = uVar18;
      uVar17 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x1e] = uVar17;
      lVar31 = 0;
      FUN_101a0782c();
      plVar19[0x1f] = lVar31;
      lVar31 = *(long *)(lVar31 + -8);
      plVar19[0x20] = lVar31;
      uVar17 = *(long *)(lVar31 + 0x40) + 0xf;
      uVar18 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x21] = uVar18;
      uVar18 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x22] = uVar18;
      uVar17 = uVar17 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x23] = uVar17;
      pcVar36 = FUN_101a06554;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar36,0,0);
      return;
    }
    lVar31 = *(long *)(unaff_x22 + 400);
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar31 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f1c);
      (*pcVar36)();
    }
    lVar33 = lVar31;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar31);
    if (lVar33 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f20);
      (*pcVar36)();
    }
    puStack_a0 = (undefined *)0x0;
    uVar20 = 0;
    func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc4c(lVar33,&puStack_a0,uVar20);
    puVar21 = puStack_a0;
    *(undefined **)(unaff_x22 + 0x1e0) = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f24);
      (*pcVar36)();
    }
    func_0x000107c61170(lVar33);
    if ((ulong)puVar21 >> 0x3e == 0) {
      puVar21 = *(undefined **)((undefined *)((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
      *(undefined **)(unaff_x22 + 0x1e8) = puVar21;
    }
    else {
      if (-1 < (long)puVar21) {
        puVar21 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
      *(undefined **)(unaff_x22 + 0x1e8) = puVar21;
    }
    if (puVar21 != (undefined *)0x0) {
      uVar17 = 0;
      do {
        uVar18 = *(ulong *)(unaff_x22 + 0x1e0);
        if ((uVar18 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x101a090f8);
            (*pcVar36)();
          }
          uVar22 = *(ulong *)(uVar18 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar22 = uVar17;
          func_0x000101a0fddc(uVar17,uVar18,&PTR_PTR_1126b25d0,0x112d55598);
        }
        lVar31 = uVar17 + 1;
        *(ulong *)(unaff_x22 + 0x1f0) = uVar22;
        *(long *)(unaff_x22 + 0x1f8) = lVar31;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x101a090f4);
          (*pcVar36)();
        }
        uVar18 = uVar22;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar18 == 0) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f18);
          (*pcVar36)();
        }
        uVar23 = uVar18;
        func_0x000107c3e240();
        func_0x000107c61170(uVar18);
        if ((int)uVar23 != 6) {
          plVar19 = (long *)0x140;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x200) = plVar19;
          *plVar19 = unaff_x22;
          plVar19[1] = (long)FUN_101a0afe0;
          lVar31 = *(long *)(unaff_x22 + 0x188);
          plVar19[0x11] = uVar22;
          plVar19[0x12] = lVar31;
          lVar31 = 0;
          func_0x000107c5ede0();
          plVar19[0x13] = lVar31;
          lVar31 = *(long *)(lVar31 + -8);
          plVar19[0x14] = lVar31;
          uVar17 = *(long *)(lVar31 + 0x40) + 0xf;
          uVar18 = uVar17 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x15] = uVar18;
          uVar18 = uVar17 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x16] = uVar18;
          uVar18 = uVar17 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x17] = uVar18;
          uVar17 = uVar17 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x18] = uVar17;
          pcVar36 = FUN_101a0edc8;
          goto LAB_107c615e0;
        }
        lVar33 = *(long *)(unaff_x22 + 0x1e8);
        func_0x000107c61170(uVar22);
        uVar17 = uVar17 + 1;
      } while (lVar31 != lVar33);
    }
    lVar31 = *(long *)(unaff_x22 + 400);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e0));
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101a10bd8();
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar31 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f28);
      (*pcVar36)();
    }
    lVar33 = lVar31;
    func_0x000107c4c97c();
    func_0x000107c61180();
    func_0x000107c61170(lVar31);
    if (lVar33 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f2c);
      (*pcVar36)();
    }
    lVar31 = lVar33;
    func_0x000107c4aba8();
    func_0x000107c61180();
    func_0x000107c61170(lVar33);
    if (lVar31 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f30);
      (*pcVar36)();
    }
    lVar33 = lVar31;
    func_0x000107c5ce78();
    func_0x000107c61180();
    func_0x000107c61170(lVar31);
    if (lVar33 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f34);
      (*pcVar36)();
    }
    puStack_a0 = (undefined *)0x0;
    uVar20 = 0;
    func_0x000101a1170c(0,0x112deb550,&PTR_PTR_1126bce80);
    func_0x000107c5fc50(lVar33,&puStack_a0,uVar20);
    func_0x000107c61170(lVar33);
    puVar21 = puStack_a0;
    *(undefined **)(unaff_x22 + 0x180) = puStack_a0;
    func_0x0001000285a8(0x112deb558,&UNK_10d9b7788);
    func_0x0001048da110(unaff_x22 + 0x158);
    func_0x000107c6142c(puVar21);
    uVar17 = *(ulong *)(unaff_x22 + 0x158);
    if (uVar17 >> 0x3e == 0) {
      uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar18 = uVar17 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar17) {
        uVar18 = uVar17;
      }
      func_0x000107c60480();
    }
    if (uVar18 != 0) {
      uVar22 = 0;
      do {
        if ((uVar17 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09e50);
            (*pcVar36)();
          }
          uVar23 = *(ulong *)(uVar17 + uVar22 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar23 = uVar22;
          func_0x000101a0fddc(uVar22,uVar17,&PTR_PTR_1126bce80,0x112deb550);
        }
        uVar1 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09e4c);
          (*pcVar36)();
        }
        uVar24 = uVar23;
        func_0x000107c49e94();
        if ((int)uVar24 == 0) {
          func_0x000107c6142c(uVar17);
          uVar17 = uVar23;
          func_0x000107c5ce10();
          func_0x000107c61180();
          if (uVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f3c);
            (*pcVar36)();
          }
          puStack_a0 = (undefined *)0x0;
          uVar20 = 0;
          func_0x000101a1170c(0,0x112deb560,&PTR_PTR_1126bce88);
          func_0x000107c5fc50(uVar17,&puStack_a0,uVar20);
          func_0x000107c61170(uVar17);
          puVar21 = puStack_a0;
          *(undefined **)(unaff_x22 + 0x178) = puStack_a0;
          func_0x0001000285a8(0x112deb568,&UNK_10d9b7790);
          func_0x0001048da110(unaff_x22 + 0x150);
          func_0x000107c6142c(puVar21);
          uVar17 = *(ulong *)(unaff_x22 + 0x150);
          if (uVar17 >> 0x3e == 0) {
            uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar18 = uVar17 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar17) {
              uVar18 = uVar17;
            }
            func_0x000107c60480();
          }
          lVar31 = *(long *)(unaff_x22 + 0x188);
          func_0x000107c61428(lVar31 + 0x30,unaff_x22 + 0x138,0,0);
          if (uVar18 == 0) goto LAB_101a09b80;
          uStack_b0 = 0;
          puVar21 = *(undefined **)PTR__kCMTimeZero_110348670;
          uVar35 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
          uVar37 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
          cVar6 = *(char *)(unaff_x22 + 0x56);
          cVar7 = *(char *)(unaff_x22 + 0x55);
          uVar20 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          goto LAB_101a095f4;
        }
        func_0x000107c61170(uVar23);
        uVar22 = uVar22 + 1;
      } while (uVar1 != uVar18);
    }
    func_0x000107c6142c(uVar17);
    puVar29 = (undefined8 *)(unaff_x22 + 0xa0);
    func_0x000101a116cc(puVar29,0x112deb530,&UNK_10d9b82d0);
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar29,0,0);
    puVar29[1] = 0;
    *puVar29 = 2;
    *(undefined1 *)(puVar29 + 2) = 4;
    func_0x000107c61654();
    func_0x000107c6142c(puStack_a8);
LAB_101a09ecc:
                    /* WARNING: Could not recover jumptable at 0x000101a09ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_101a10bd8(PTR___swiftEmptyArrayStorage_11034f1c8);
  goto LAB_101a08f40;
LAB_101a095f4:
  do {
    fVar38 = SUB84(puVar39,0);
    if ((uVar17 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= uStack_b0) {
                    /* WARNING: Does not return */
        pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09efc);
        (*pcVar36)();
      }
      uVar22 = *(ulong *)(uVar17 + uStack_b0 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar22 = uStack_b0;
      func_0x000101a0fddc(uStack_b0,uVar17,&PTR_PTR_1126bce88,0x112deb560);
    }
    uVar1 = uStack_b0 + 1;
    if (SCARRY8(uStack_b0,1)) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09ef8);
      (*pcVar36)();
    }
    func_0x0001000d224c(unaff_x22 + 0x110);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar33 = *(long *)(unaff_x22 + 0x130);
    func_0x0001000a8868(unaff_x22 + 0x110,uVar27);
    (**(code **)(lVar33 + 8))(unaff_x22 + 0xe8,uVar27,lVar33);
    func_0x0001000834e4(unaff_x22 + 0x110);
    uVar30 = 5;
    uVar24 = uVar22;
    FUN_101a0ec3c();
    if (uVar24 == 0) {
      func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
      puStack_a0 = (undefined *)0x0;
      uStack_98 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x40);
      func_0x000107c5fb78(0xd00000000000003e,0x800000010efc8cd0);
      uVar18 = uVar22;
      func_0x000107c4e928();
      func_0x000107c61180();
      *(ulong *)(unaff_x22 + 0x168) = uVar18;
      puVar29 = (undefined8 *)0x112deb570;
      func_0x0001000285a8(0x112deb570,&UNK_10d9b7798);
      func_0x000107c5fb18(unaff_x22 + 0x168);
      func_0x000107c5fb78();
      func_0x000107c6142c();
      puVar21 = uStack_98;
      puVar39 = puStack_a0;
      func_0x000101a058d8();
      func_0x000107c613f8(&UNK_11042c930,puVar29,0,0);
      *puVar29 = puVar39;
      puVar29[1] = puVar21;
      *(undefined1 *)(puVar29 + 2) = 0;
      func_0x000107c61654();
LAB_101a09e1c:
      func_0x000107c61170(uVar22);
      func_0x000107c61170(uVar23);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(puStack_a8);
      func_0x0001000834e4(unaff_x22 + 0xe8);
      goto LAB_101a09ecc;
    }
    uVar26 = uVar24;
    func_0x000107c4e920();
    lVar33 = *(long *)(lVar31 + 0x30);
    if ((*(long *)(lVar33 + 0x10) == 0) || (func_0x00010149a22c(), (uVar30 & 1) == 0)) {
      func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
      puStack_a0 = (undefined *)0x0;
      uStack_98 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined *)0xd00000000000002b;
      uStack_98 = (undefined *)0x800000010efc8d10;
      uVar18 = uVar24;
      func_0x000107c4e920();
      *(int *)(unaff_x22 + 0x49c) = (int)uVar18;
      puVar29 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
      func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
      func_0x000107c5fb78();
      func_0x000107c6142c();
      puVar21 = uStack_98;
      puVar39 = puStack_a0;
      func_0x000101a058d8();
      func_0x000107c613f8(&UNK_11042c930,puVar29,0,0);
      *puVar29 = puVar39;
      puVar29[1] = puVar21;
      *(undefined1 *)(puVar29 + 2) = 1;
      func_0x000107c61654();
LAB_101a09e14:
      func_0x000107c61170(uVar24);
      goto LAB_101a09e1c;
    }
    uVar27 = *(undefined8 *)(*(long *)(lVar33 + 0x38) + uVar26 * 8);
    func_0x000107c61174();
    uVar30 = uVar24;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar30 == 0) {
      func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
      puStack_a0 = (undefined *)0x0;
      uStack_98 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x24);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined *)0xd000000000000022;
      uStack_98 = (undefined *)0x800000010efc8d40;
      uVar18 = uVar24;
      func_0x000107c4e920();
      *(int *)(unaff_x22 + 0x498) = (int)uVar18;
      puVar29 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
      func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
      func_0x000107c5fb78();
      func_0x000107c6142c();
      puVar21 = uStack_98;
      puVar39 = puStack_a0;
      func_0x000101a058d8();
      func_0x000107c613f8(&UNK_11042c930,puVar29,0,0);
      *puVar29 = puVar39;
      puVar29[1] = puVar21;
      *(undefined1 *)(puVar29 + 2) = 2;
      func_0x000107c61654();
      func_0x000107c61170(uVar27);
      goto LAB_101a09e14;
    }
    FUN_101a0e4e0(unaff_x22 + 0x240);
    uVar26 = uVar24;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar26 == 0) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f38);
      (*pcVar36)();
    }
    uVar28 = uVar26;
    func_0x000107c44a34();
    func_0x000107c61170(uVar26);
    dVar40 = 1.0;
    if ((int)uVar28 != 0) {
      uVar26 = uVar24;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar26 == 0) {
                    /* WARNING: Does not return */
        pcVar36 = (code *)SoftwareBreakpoint(1,0x101a09f40);
        (*pcVar36)();
      }
      uVar28 = uVar26;
      func_0x000107c4e958();
      func_0x000107c61180();
      func_0x000107c61170(uVar26);
      if (uVar28 != 0) {
        func_0x000107c5b794(uVar28);
        func_0x000107c61170(uVar28);
        dVar40 = (double)fVar38;
      }
    }
    uVar34 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x250);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 600);
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x268);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x248);
    func_0x000107c60a50(&puStack_a0,ABS(dVar40),unaff_x22 + 0x318);
    *(undefined8 *)(unaff_x22 + 0x330) = uVar34;
    *(undefined8 *)(unaff_x22 + 0x338) = uVar41;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar32;
    *(undefined **)(unaff_x22 + 0x348) = puStack_a0;
    *(undefined **)(unaff_x22 + 0x350) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0x358) = uStack_90;
    func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x330,unaff_x22 + 0x348);
    uVar16 = uStack_78;
    uVar15 = uStack_7c;
    uVar14 = uStack_80;
    uVar41 = uStack_88;
    *(undefined **)(unaff_x22 + 0x218) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0x210) = puStack_a0;
    *(undefined8 *)(unaff_x22 + 0x220) = uStack_90;
    *(undefined8 *)(unaff_x22 + 0x228) = uStack_88;
    *(undefined4 *)(unaff_x22 + 0x230) = uStack_80;
    *(undefined4 *)(unaff_x22 + 0x234) = uStack_7c;
    *(undefined8 *)(unaff_x22 + 0x238) = uStack_78;
    uVar32 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar33 = unaff_x22 + 0xe8;
    puVar39 = puStack_a0;
    func_0x0001000a8868(lVar33,uVar32);
    func_0x000101eb0074(uVar27,(undefined8 *)(unaff_x22 + 0x210),uVar32,uVar34,lVar33);
    if (cVar7 == '\x01' || cVar6 == '\x01') {
      uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar33 = *(long *)(unaff_x22 + 0x108);
      func_0x0001000a8868(unaff_x22 + 0xe8,uVar34);
      pcVar36 = *(code **)(lVar33 + 0x30);
      func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
      (*pcVar36)(uVar32,uVar2,1,1,uVar34,lVar33);
LAB_101a094e0:
      func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    }
    else {
      uVar32 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar4 = *(undefined4 *)(unaff_x22 + 0x4a4);
      uVar5 = *(undefined4 *)(unaff_x22 + 0x4a0);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
      *(undefined **)(unaff_x22 + 0x3a8) = puVar21;
      *(undefined4 *)(unaff_x22 + 0x3b0) = uVar35;
      *(undefined4 *)(unaff_x22 + 0x3b4) = uVar37;
      *(undefined8 *)(unaff_x22 + 0x3b8) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x3c0) = uVar41;
      *(undefined4 *)(unaff_x22 + 0x3c8) = uVar14;
      *(undefined4 *)(unaff_x22 + 0x3cc) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x3d0) = uVar16;
      uVar42 = *(undefined8 *)(unaff_x22 + 0x4a8);
      func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3a8,unaff_x22 + 0x3c0);
      uVar13 = uStack_90;
      puVar25 = puStack_a0;
      uVar9 = (undefined4)uStack_98;
      uVar11 = uStack_98._4_4_;
      *(undefined8 *)(unaff_x22 + 0x3d8) = uVar34;
      *(undefined4 *)(unaff_x22 + 0x3e0) = uVar5;
      *(undefined4 *)(unaff_x22 + 0x3e4) = uVar4;
      *(undefined8 *)(unaff_x22 + 1000) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x3f0) = uVar32;
      *(undefined8 *)(unaff_x22 + 0x3f8) = uVar42;
      *(undefined8 *)(unaff_x22 + 0x400) = uVar2;
      func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3d8,unaff_x22 + 0x3f0);
      uVar32 = uStack_90;
      puVar8 = puStack_a0;
      uVar10 = (undefined4)uStack_98;
      uVar12 = uStack_98._4_4_;
      *(undefined **)(unaff_x22 + 0x408) = puVar25;
      *(undefined4 *)(unaff_x22 + 0x410) = uVar9;
      *(undefined4 *)(unaff_x22 + 0x414) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x418) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x420) = uVar34;
      *(undefined4 *)(unaff_x22 + 0x428) = uVar5;
      *(undefined4 *)(unaff_x22 + 0x42c) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x430) = uVar3;
      lVar33 = unaff_x22 + 0x408;
      func_0x000107c60a38(lVar33,unaff_x22 + 0x420);
      if (0 < (int)lVar33) {
        *(undefined **)(unaff_x22 + 0x438) = puVar8;
        *(undefined4 *)(unaff_x22 + 0x440) = uVar10;
        *(undefined4 *)(unaff_x22 + 0x444) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x448) = uVar32;
        *(undefined **)(unaff_x22 + 0x450) = puVar21;
        *(undefined4 *)(unaff_x22 + 0x458) = uVar35;
        *(undefined4 *)(unaff_x22 + 0x45c) = uVar37;
        *(undefined8 *)(unaff_x22 + 0x460) = uVar20;
        lVar33 = unaff_x22 + 0x438;
        func_0x000107c60a38(lVar33,unaff_x22 + 0x450);
        if (0 < (int)lVar33) {
          uVar34 = *(undefined8 *)(unaff_x22 + 0x198);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
          *(undefined **)(unaff_x22 + 0x468) = puVar21;
          *(undefined4 *)(unaff_x22 + 0x470) = uVar35;
          *(undefined4 *)(unaff_x22 + 0x474) = uVar37;
          *(undefined8 *)(unaff_x22 + 0x478) = uVar20;
          *(undefined8 *)(unaff_x22 + 0x480) = *(undefined8 *)(unaff_x22 + 0x1a8);
          *(undefined8 *)(unaff_x22 + 0x488) = *(undefined8 *)(unaff_x22 + 0x4a0);
          *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(unaff_x22 + 0x1b0);
          func_0x000107c60a48(&puStack_a0,unaff_x22 + 0x468,unaff_x22 + 0x480);
          uVar3 = uStack_90;
          puVar39 = puStack_a0;
          uVar4 = (undefined4)uStack_98;
          uVar5 = uStack_98._4_4_;
          *(undefined **)(unaff_x22 + 0x288) = puVar25;
          *(undefined4 *)(unaff_x22 + 0x290) = uVar9;
          *(undefined4 *)(unaff_x22 + 0x294) = uVar11;
          *(undefined8 *)(unaff_x22 + 0x298) = uVar13;
          *(undefined **)(unaff_x22 + 0x390) = puVar8;
          *(undefined4 *)(unaff_x22 + 0x398) = uVar10;
          *(undefined4 *)(unaff_x22 + 0x39c) = uVar12;
          *(undefined8 *)(unaff_x22 + 0x3a0) = uVar32;
          func_0x000107c60a4c(&puStack_a0,unaff_x22 + 0x288,unaff_x22 + 0x390);
          *(undefined **)(unaff_x22 + 0x360) = puStack_a0;
          *(undefined **)(unaff_x22 + 0x368) = uStack_98;
          *(undefined8 *)(unaff_x22 + 0x370) = uStack_90;
          *(undefined **)(unaff_x22 + 0x300) = puVar39;
          *(undefined4 *)(unaff_x22 + 0x308) = uVar4;
          *(undefined4 *)(unaff_x22 + 0x30c) = uVar5;
          *(undefined8 *)(unaff_x22 + 0x310) = uVar3;
          func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x360,unaff_x22 + 0x300);
          uVar32 = uStack_90;
          puVar8 = uStack_98;
          puVar25 = puStack_a0;
          *(undefined **)(unaff_x22 + 0x2e8) = puVar39;
          *(undefined4 *)(unaff_x22 + 0x2f0) = uVar4;
          *(undefined4 *)(unaff_x22 + 0x2f4) = uVar5;
          *(undefined8 *)(unaff_x22 + 0x2f8) = uVar3;
          *(undefined **)(unaff_x22 + 0x2d0) = puVar21;
          *(undefined4 *)(unaff_x22 + 0x2d8) = uVar35;
          *(undefined4 *)(unaff_x22 + 0x2dc) = uVar37;
          *(undefined8 *)(unaff_x22 + 0x2e0) = uVar20;
          func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x2e8,unaff_x22 + 0x2d0);
          *(undefined **)(unaff_x22 + 0x2b8) = puStack_a0;
          *(undefined **)(unaff_x22 + 0x2c0) = uStack_98;
          *(undefined8 *)(unaff_x22 + 0x2c8) = uStack_90;
          *(undefined **)(unaff_x22 + 0x2a0) = puVar25;
          *(undefined **)(unaff_x22 + 0x2a8) = puVar8;
          *(undefined8 *)(unaff_x22 + 0x2b0) = uVar32;
          puVar39 = uStack_98;
          func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x2b8,unaff_x22 + 0x2a0);
          uVar42 = uStack_78;
          uVar13 = uStack_88;
          uVar3 = uStack_90;
          puVar8 = uStack_98;
          puVar25 = puStack_a0;
          uVar32 = CONCAT44(uStack_7c,uStack_80);
          lVar33 = *(long *)(unaff_x22 + 0x108);
          func_0x0001000a8868(unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x100));
          pcVar36 = *(code **)(lVar33 + 0x38);
          func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x58,0x112deb530,&UNK_10d9b82d0);
          (*pcVar36)(uVar34,uVar2,puVar25,puVar8,uVar3,uVar13,uVar32,uVar42,0x101);
          goto LAB_101a094e0;
        }
      }
    }
    uVar26 = uVar24;
    func_0x000107c4e920(uVar24);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar33 = *(long *)(unaff_x22 + 0x108);
    func_0x0001000a8868(unaff_x22 + 0xe8,uVar32);
    (**(code **)(lVar33 + 0x60))(uVar32,lVar33);
    puVar25 = puStack_a8;
    func_0x000107c61558(puStack_a8);
    puStack_a0 = puStack_a8;
    FUN_101a1036c(uVar32,0,0,0xf000000000000000,uVar26,puVar25);
    puStack_a8 = puStack_a0;
    *(undefined **)(unaff_x22 + 0x378) = puVar21;
    *(undefined4 *)(unaff_x22 + 0x380) = uVar35;
    *(undefined4 *)(unaff_x22 + 900) = uVar37;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x270) = uVar41;
    *(undefined4 *)(unaff_x22 + 0x278) = uVar14;
    *(undefined4 *)(unaff_x22 + 0x27c) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x280) = uVar16;
    func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x378,unaff_x22 + 0x270);
    uVar20 = uStack_90;
    puVar21 = puStack_a0;
    uVar35 = (undefined4)uStack_98;
    uVar37 = uStack_98._4_4_;
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar22);
    func_0x0001000834e4(unaff_x22 + 0xe8);
    uStack_b0 = uStack_b0 + 1;
  } while (uVar1 != uVar18);
LAB_101a09b80:
  func_0x000107c6142c(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
LAB_101a08f40:
                    /* WARNING: Could not recover jumptable at 0x000101a08f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a09f40; end: 101a09f8f;  */

void FUN_101a09f40(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1d8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a09f90,0,0);
  return;
}



/* Entry: 101a09f90; end: 101a0afdf;  */

/* WARNING: Removing unreachable block (ram,0x000101a0a3f8) */
/* WARNING: Removing unreachable block (ram,0x000101a0a26c) */

void FUN_101a09f90(undefined *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined4 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined *puVar36;
  code *pcVar37;
  long unaff_x22;
  undefined4 uVar38;
  long lVar39;
  float fVar40;
  double dVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar31 = *(long *)(unaff_x22 + 0x188);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1c8));
  uVar18 = *(undefined8 *)(lVar31 + 0x38);
  *(undefined8 *)(lVar31 + 0x38) = uVar33;
  func_0x000107c6142c(uVar18);
  lVar31 = *(long *)(unaff_x22 + 400);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afbc);
    (*pcVar37)();
  }
  lVar39 = lVar31;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar31);
  if (lVar39 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afc0);
    (*pcVar37)();
  }
  puStack_a0 = (undefined *)0x0;
  uVar18 = 0;
  func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
  func_0x000107c5fc4c(lVar39,&puStack_a0,uVar18);
  puVar19 = puStack_a0;
  *(undefined **)(unaff_x22 + 0x1e0) = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afc4);
    (*pcVar37)();
  }
  func_0x000107c61170(lVar39);
  if ((ulong)puVar19 >> 0x3e == 0) {
    puVar19 = *(undefined **)((undefined *)((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
    *(undefined **)(unaff_x22 + 0x1e8) = puVar19;
  }
  else {
    if (-1 < (long)puVar19) {
      puVar19 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
    }
    func_0x000107c60480();
    *(undefined **)(unaff_x22 + 0x1e8) = puVar19;
  }
  if (puVar19 != (undefined *)0x0) {
    uVar34 = 0;
    do {
      uVar28 = *(ulong *)(unaff_x22 + 0x1e0);
      if ((uVar28 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar28 & 0xffffffffffffff8) + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0a160);
          (*pcVar37)();
        }
        uVar20 = *(ulong *)(uVar28 + uVar34 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar20 = uVar34;
        func_0x000101a0fddc(uVar34,uVar28,&PTR_PTR_1126b25d0,0x112d55598);
      }
      lVar31 = uVar34 + 1;
      *(ulong *)(unaff_x22 + 0x1f0) = uVar20;
      *(long *)(unaff_x22 + 0x1f8) = lVar31;
      if (SCARRY8(uVar34,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0a15c);
        (*pcVar37)();
      }
      uVar28 = uVar20;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar28 == 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afb8);
        (*pcVar37)();
      }
      uVar22 = uVar28;
      func_0x000107c3e240();
      func_0x000107c61170(uVar28);
      if ((int)uVar22 != 6) {
        plVar21 = (long *)0x140;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x200) = plVar21;
        *plVar21 = unaff_x22;
        plVar21[1] = (long)FUN_101a0afe0;
        lVar31 = *(long *)(unaff_x22 + 0x188);
        plVar21[0x11] = uVar20;
        plVar21[0x12] = lVar31;
        lVar31 = 0;
        func_0x000107c5ede0();
        plVar21[0x13] = lVar31;
        lVar31 = *(long *)(lVar31 + -8);
        plVar21[0x14] = lVar31;
        uVar34 = *(long *)(lVar31 + 0x40) + 0xf;
        uVar28 = uVar34 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar21[0x15] = uVar28;
        uVar28 = uVar34 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar21[0x16] = uVar28;
        uVar28 = uVar34 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar21[0x17] = uVar28;
        uVar34 = uVar34 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar21[0x18] = uVar34;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0edc8,0,0);
        return;
      }
      lVar39 = *(long *)(unaff_x22 + 0x1e8);
      func_0x000107c61170(uVar20);
      uVar34 = uVar34 + 1;
    } while (lVar31 != lVar39);
  }
  lVar31 = *(long *)(unaff_x22 + 400);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e0));
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a10bd8();
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afc8);
    (*pcVar37)();
  }
  lVar39 = lVar31;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(lVar31);
  if (lVar39 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afcc);
    (*pcVar37)();
  }
  lVar31 = lVar39;
  func_0x000107c4aba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar39);
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afd0);
    (*pcVar37)();
  }
  lVar39 = lVar31;
  func_0x000107c5ce78();
  func_0x000107c61180();
  func_0x000107c61170(lVar31);
  if (lVar39 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afd4);
    (*pcVar37)();
  }
  puStack_a0 = (undefined *)0x0;
  uVar18 = 0;
  func_0x000101a1170c(0,0x112deb550,&PTR_PTR_1126bce80);
  func_0x000107c5fc50(lVar39,&puStack_a0,uVar18);
  func_0x000107c61170(lVar39);
  puVar36 = puStack_a0;
  *(undefined **)(unaff_x22 + 0x180) = puStack_a0;
  func_0x0001000285a8(0x112deb558,&UNK_10d9b7788);
  func_0x0001048da110(unaff_x22 + 0x158);
  func_0x000107c6142c(puVar36);
  uVar34 = *(ulong *)(unaff_x22 + 0x158);
  if (uVar34 >> 0x3e == 0) {
    uVar28 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar28 = uVar34 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar34) {
      uVar28 = uVar34;
    }
    func_0x000107c60480();
  }
  if (uVar28 != 0) {
    uVar20 = 0;
    do {
      if ((uVar34 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0aef0);
          (*pcVar37)();
        }
        uVar22 = *(ulong *)(uVar34 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar22 = uVar20;
        func_0x000101a0fddc(uVar20,uVar34,&PTR_PTR_1126bce80,0x112deb550);
      }
      uVar1 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0aeec);
        (*pcVar37)();
      }
      uVar23 = uVar22;
      func_0x000107c49e94();
      if ((int)uVar23 == 0) {
        func_0x000107c6142c(uVar34);
        uVar34 = uVar22;
        func_0x000107c5ce10();
        func_0x000107c61180();
        if (uVar34 == 0) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afdc);
          (*pcVar37)();
        }
        puStack_a0 = (undefined *)0x0;
        uVar18 = 0;
        func_0x000101a1170c(0,0x112deb560,&PTR_PTR_1126bce88);
        func_0x000107c5fc50(uVar34,&puStack_a0,uVar18);
        func_0x000107c61170(uVar34);
        puVar36 = puStack_a0;
        *(undefined **)(unaff_x22 + 0x178) = puStack_a0;
        func_0x0001000285a8(0x112deb568,&UNK_10d9b7790);
        func_0x0001048da110(unaff_x22 + 0x150);
        func_0x000107c6142c(puVar36);
        uVar34 = *(ulong *)(unaff_x22 + 0x150);
        if (uVar34 >> 0x3e == 0) {
          uVar28 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar28 = uVar34 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar34) {
            uVar28 = uVar34;
          }
          func_0x000107c60480();
        }
        lVar31 = *(long *)(unaff_x22 + 0x188);
        func_0x000107c61428(lVar31 + 0x30,unaff_x22 + 0x138,0,0);
        if (uVar28 == 0) goto LAB_101a0abec;
        uStack_a8 = 0;
        puVar36 = *(undefined **)PTR__kCMTimeZero_110348670;
        uVar30 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
        uVar38 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
        cVar6 = *(char *)(unaff_x22 + 0x56);
        cVar7 = *(char *)(unaff_x22 + 0x55);
        uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        goto LAB_101a0a658;
      }
      func_0x000107c61170(uVar22);
      uVar20 = uVar20 + 1;
    } while (uVar1 != uVar28);
  }
  func_0x000107c6142c(uVar34);
  puVar27 = (undefined8 *)(unaff_x22 + 0xa0);
  func_0x000101a116cc(puVar27,0x112deb530,&UNK_10d9b82d0);
  func_0x000101a058d8();
  func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
  puVar27[1] = 0;
  *puVar27 = 2;
  *(undefined1 *)(puVar27 + 2) = 4;
  func_0x000107c61654();
  func_0x000107c6142c(puVar19);
LAB_101a0af6c:
                    /* WARNING: Could not recover jumptable at 0x000101a0af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
LAB_101a0a658:
  fVar40 = SUB84(param_1,0);
  if ((uVar34 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10) <= uStack_a8) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0af9c);
      (*pcVar37)();
    }
    uVar20 = *(ulong *)(uVar34 + uStack_a8 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar20 = uStack_a8;
    func_0x000101a0fddc(uStack_a8,uVar34,&PTR_PTR_1126bce88,0x112deb560);
  }
  uVar1 = uStack_a8 + 1;
  if (SCARRY8(uStack_a8,1)) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0af98);
    (*pcVar37)();
  }
  func_0x0001000d224c(unaff_x22 + 0x110);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar39 = *(long *)(unaff_x22 + 0x130);
  func_0x0001000a8868(unaff_x22 + 0x110,uVar33);
  (**(code **)(lVar39 + 8))(unaff_x22 + 0xe8,uVar33,lVar39);
  func_0x0001000834e4(unaff_x22 + 0x110);
  uVar29 = 5;
  uVar23 = uVar20;
  FUN_101a0ec3c();
  if (uVar23 == 0) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010efc8cd0);
    uVar28 = uVar20;
    func_0x000107c4e928();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x168) = uVar28;
    puVar27 = (undefined8 *)0x112deb570;
    func_0x0001000285a8(0x112deb570,&UNK_10d9b7798);
    func_0x000107c5fb18(unaff_x22 + 0x168);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar24 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar24;
    *(undefined1 *)(puVar27 + 2) = 0;
    func_0x000107c61654();
LAB_101a0aebc:
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar34);
    func_0x000107c6142c(puVar19);
    func_0x0001000834e4(unaff_x22 + 0xe8);
    goto LAB_101a0af6c;
  }
  uVar25 = uVar23;
  func_0x000107c4e920();
  lVar39 = *(long *)(lVar31 + 0x30);
  if ((*(long *)(lVar39 + 0x10) == 0) || (func_0x00010149a22c(), (uVar29 & 1) == 0)) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd00000000000002b;
    uStack_98 = (undefined *)0x800000010efc8d10;
    uVar28 = uVar23;
    func_0x000107c4e920();
    *(int *)(unaff_x22 + 0x49c) = (int)uVar28;
    puVar27 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar24 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar24;
    *(undefined1 *)(puVar27 + 2) = 1;
    func_0x000107c61654();
LAB_101a0aeb4:
    func_0x000107c61170(uVar23);
    goto LAB_101a0aebc;
  }
  uVar33 = *(undefined8 *)(*(long *)(lVar39 + 0x38) + uVar25 * 8);
  func_0x000107c61174();
  uVar29 = uVar23;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar29 == 0) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd000000000000022;
    uStack_98 = (undefined *)0x800000010efc8d40;
    uVar28 = uVar23;
    func_0x000107c4e920();
    *(int *)(unaff_x22 + 0x498) = (int)uVar28;
    puVar27 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar24 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar24;
    *(undefined1 *)(puVar27 + 2) = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar33);
    goto LAB_101a0aeb4;
  }
  FUN_101a0e4e0(unaff_x22 + 0x240);
  uVar25 = uVar23;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (uVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afd8);
    (*pcVar37)();
  }
  uVar26 = uVar25;
  func_0x000107c44a34();
  func_0x000107c61170(uVar25);
  dVar41 = 1.0;
  if ((int)uVar26 != 0) {
    uVar25 = uVar23;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar25 == 0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0afe0);
      (*pcVar37)();
    }
    uVar26 = uVar25;
    func_0x000107c4e958();
    func_0x000107c61180();
    func_0x000107c61170(uVar25);
    if (uVar26 != 0) {
      func_0x000107c5b794(uVar26);
      func_0x000107c61170(uVar26);
      dVar41 = (double)fVar40;
    }
  }
  uVar35 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x268);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x248);
  func_0x000107c60a50(&puStack_a0,ABS(dVar41),unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x330) = uVar35;
  *(undefined8 *)(unaff_x22 + 0x338) = uVar42;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar32;
  *(undefined **)(unaff_x22 + 0x348) = puStack_a0;
  *(undefined **)(unaff_x22 + 0x350) = uStack_98;
  *(undefined8 *)(unaff_x22 + 0x358) = uStack_90;
  func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x330,unaff_x22 + 0x348);
  uVar17 = uStack_78;
  uVar16 = uStack_7c;
  uVar15 = uStack_80;
  uVar42 = uStack_88;
  *(undefined **)(unaff_x22 + 0x218) = uStack_98;
  *(undefined8 *)(unaff_x22 + 0x210) = puStack_a0;
  *(undefined8 *)(unaff_x22 + 0x220) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x228) = uStack_88;
  *(undefined4 *)(unaff_x22 + 0x230) = uStack_80;
  *(undefined4 *)(unaff_x22 + 0x234) = uStack_7c;
  *(undefined8 *)(unaff_x22 + 0x238) = uStack_78;
  uVar32 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar39 = unaff_x22 + 0xe8;
  param_1 = puStack_a0;
  func_0x0001000a8868(lVar39,uVar32);
  func_0x000101eb0074(uVar33,(undefined8 *)(unaff_x22 + 0x210),uVar32,uVar35,lVar39);
  if (cVar7 == '\x01' || cVar6 == '\x01') {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar39 = *(long *)(unaff_x22 + 0x108);
    func_0x0001000a8868(unaff_x22 + 0xe8,uVar35);
    pcVar37 = *(code **)(lVar39 + 0x30);
    func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
    (*pcVar37)(uVar32,uVar2,1,1,uVar35,lVar39);
LAB_101a0a548:
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
  }
  else {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined4 *)(unaff_x22 + 0x4a4);
    uVar5 = *(undefined4 *)(unaff_x22 + 0x4a0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined **)(unaff_x22 + 0x3a8) = puVar36;
    *(undefined4 *)(unaff_x22 + 0x3b0) = uVar30;
    *(undefined4 *)(unaff_x22 + 0x3b4) = uVar38;
    *(undefined8 *)(unaff_x22 + 0x3b8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x3c0) = uVar42;
    *(undefined4 *)(unaff_x22 + 0x3c8) = uVar15;
    *(undefined4 *)(unaff_x22 + 0x3cc) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x3d0) = uVar17;
    uVar43 = *(undefined8 *)(unaff_x22 + 0x4a8);
    func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3a8,unaff_x22 + 0x3c0);
    uVar14 = uStack_90;
    puVar24 = puStack_a0;
    uVar10 = (undefined4)uStack_98;
    uVar12 = uStack_98._4_4_;
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar35;
    *(undefined4 *)(unaff_x22 + 0x3e0) = uVar5;
    *(undefined4 *)(unaff_x22 + 0x3e4) = uVar4;
    *(undefined8 *)(unaff_x22 + 1000) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x3f0) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x3f8) = uVar43;
    *(undefined8 *)(unaff_x22 + 0x400) = uVar2;
    func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3d8,unaff_x22 + 0x3f0);
    uVar32 = uStack_90;
    puVar8 = puStack_a0;
    uVar11 = (undefined4)uStack_98;
    uVar13 = uStack_98._4_4_;
    *(undefined **)(unaff_x22 + 0x408) = puVar24;
    *(undefined4 *)(unaff_x22 + 0x410) = uVar10;
    *(undefined4 *)(unaff_x22 + 0x414) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x418) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x420) = uVar35;
    *(undefined4 *)(unaff_x22 + 0x428) = uVar5;
    *(undefined4 *)(unaff_x22 + 0x42c) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x430) = uVar3;
    lVar39 = unaff_x22 + 0x408;
    func_0x000107c60a38(lVar39,unaff_x22 + 0x420);
    if (0 < (int)lVar39) {
      *(undefined **)(unaff_x22 + 0x438) = puVar8;
      *(undefined4 *)(unaff_x22 + 0x440) = uVar11;
      *(undefined4 *)(unaff_x22 + 0x444) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x448) = uVar32;
      *(undefined **)(unaff_x22 + 0x450) = puVar36;
      *(undefined4 *)(unaff_x22 + 0x458) = uVar30;
      *(undefined4 *)(unaff_x22 + 0x45c) = uVar38;
      *(undefined8 *)(unaff_x22 + 0x460) = uVar18;
      lVar39 = unaff_x22 + 0x438;
      func_0x000107c60a38(lVar39,unaff_x22 + 0x450);
      if (0 < (int)lVar39) {
        uVar35 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
        *(undefined **)(unaff_x22 + 0x468) = puVar36;
        *(undefined4 *)(unaff_x22 + 0x470) = uVar30;
        *(undefined4 *)(unaff_x22 + 0x474) = uVar38;
        *(undefined8 *)(unaff_x22 + 0x478) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x480) = *(undefined8 *)(unaff_x22 + 0x1a8);
        *(undefined8 *)(unaff_x22 + 0x488) = *(undefined8 *)(unaff_x22 + 0x4a0);
        *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(unaff_x22 + 0x1b0);
        func_0x000107c60a48(&puStack_a0,unaff_x22 + 0x468,unaff_x22 + 0x480);
        uVar3 = uStack_90;
        puVar9 = puStack_a0;
        uVar4 = (undefined4)uStack_98;
        uVar5 = uStack_98._4_4_;
        *(undefined **)(unaff_x22 + 0x288) = puVar24;
        *(undefined4 *)(unaff_x22 + 0x290) = uVar10;
        *(undefined4 *)(unaff_x22 + 0x294) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x298) = uVar14;
        *(undefined **)(unaff_x22 + 0x390) = puVar8;
        *(undefined4 *)(unaff_x22 + 0x398) = uVar11;
        *(undefined4 *)(unaff_x22 + 0x39c) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x3a0) = uVar32;
        func_0x000107c60a4c(&puStack_a0,unaff_x22 + 0x288,unaff_x22 + 0x390);
        *(undefined **)(unaff_x22 + 0x360) = puStack_a0;
        *(undefined **)(unaff_x22 + 0x368) = uStack_98;
        *(undefined8 *)(unaff_x22 + 0x370) = uStack_90;
        *(undefined **)(unaff_x22 + 0x300) = puVar9;
        *(undefined4 *)(unaff_x22 + 0x308) = uVar4;
        *(undefined4 *)(unaff_x22 + 0x30c) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x310) = uVar3;
        func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x360,unaff_x22 + 0x300);
        uVar32 = uStack_90;
        puVar8 = uStack_98;
        puVar24 = puStack_a0;
        *(undefined **)(unaff_x22 + 0x2e8) = puVar9;
        *(undefined4 *)(unaff_x22 + 0x2f0) = uVar4;
        *(undefined4 *)(unaff_x22 + 0x2f4) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x2f8) = uVar3;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar36;
        *(undefined4 *)(unaff_x22 + 0x2d8) = uVar30;
        *(undefined4 *)(unaff_x22 + 0x2dc) = uVar38;
        *(undefined8 *)(unaff_x22 + 0x2e0) = uVar18;
        func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x2e8,unaff_x22 + 0x2d0);
        *(undefined **)(unaff_x22 + 0x2b8) = puStack_a0;
        *(undefined **)(unaff_x22 + 0x2c0) = uStack_98;
        *(undefined8 *)(unaff_x22 + 0x2c8) = uStack_90;
        *(undefined **)(unaff_x22 + 0x2a0) = puVar24;
        *(undefined **)(unaff_x22 + 0x2a8) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x2b0) = uVar32;
        param_1 = uStack_98;
        func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x2b8,unaff_x22 + 0x2a0);
        uVar43 = uStack_78;
        uVar14 = uStack_88;
        uVar3 = uStack_90;
        puVar8 = uStack_98;
        puVar24 = puStack_a0;
        uVar32 = CONCAT44(uStack_7c,uStack_80);
        lVar39 = *(long *)(unaff_x22 + 0x108);
        func_0x0001000a8868(unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x100));
        pcVar37 = *(code **)(lVar39 + 0x38);
        func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x58,0x112deb530,&UNK_10d9b82d0);
        (*pcVar37)(uVar35,uVar2,puVar24,puVar8,uVar3,uVar14,uVar32,uVar43,0x101);
        goto LAB_101a0a548;
      }
    }
  }
  uVar25 = uVar23;
  func_0x000107c4e920(uVar23);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar39 = *(long *)(unaff_x22 + 0x108);
  func_0x0001000a8868(unaff_x22 + 0xe8,uVar32);
  (**(code **)(lVar39 + 0x60))(uVar32,lVar39);
  puVar24 = puVar19;
  func_0x000107c61558(puVar19);
  puStack_a0 = puVar19;
  FUN_101a1036c(uVar32,0,0,0xf000000000000000,uVar25,puVar24);
  puVar19 = puStack_a0;
  *(undefined **)(unaff_x22 + 0x378) = puVar36;
  *(undefined4 *)(unaff_x22 + 0x380) = uVar30;
  *(undefined4 *)(unaff_x22 + 900) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x388) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x270) = uVar42;
  *(undefined4 *)(unaff_x22 + 0x278) = uVar15;
  *(undefined4 *)(unaff_x22 + 0x27c) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x280) = uVar17;
  func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x378,unaff_x22 + 0x270);
  uVar18 = uStack_90;
  puVar36 = puStack_a0;
  uVar30 = (undefined4)uStack_98;
  uVar38 = uStack_98._4_4_;
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar20);
  func_0x0001000834e4(unaff_x22 + 0xe8);
  uStack_a8 = uStack_a8 + 1;
  if (uVar1 == uVar28) {
LAB_101a0abec:
    func_0x000107c6142c(uVar34);
    func_0x000107c61170(uVar22);
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
                    /* WARNING: Could not recover jumptable at 0x000101a0ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar19);
    return;
  }
  goto LAB_101a0a658;
}



/* Entry: 101a0afe0; end: 101a0b03b;  */

void FUN_101a0afe0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x208) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a0b03c;
  }
  else {
    pcVar1 = FUN_101a0bfd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a0b03c; end: 101a0bfd7;  */

/* WARNING: Removing unreachable block (ram,0x000101a0b3f4) */
/* WARNING: Removing unreachable block (ram,0x000101a0b174) */

void FUN_101a0b03c(undefined *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined *puVar36;
  code *pcVar37;
  long unaff_x22;
  undefined4 uVar38;
  ulong uVar39;
  float fVar40;
  double dVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1f0));
  uVar31 = *(ulong *)(unaff_x22 + 0x1f8);
  if (uVar31 != *(ulong *)(unaff_x22 + 0x1e8)) {
    do {
      uVar35 = *(ulong *)(unaff_x22 + 0x1e0);
      if ((uVar35 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar35 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bdec);
          (*pcVar37)();
        }
        uVar39 = *(ulong *)(uVar35 + uVar31 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar39 = uVar31;
        func_0x000101a0fddc(uVar31,uVar35,&PTR_PTR_1126b25d0,0x112d55598);
      }
      lVar32 = uVar31 + 1;
      *(ulong *)(unaff_x22 + 0x1f0) = uVar39;
      *(long *)(unaff_x22 + 0x1f8) = lVar32;
      if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bde8);
        (*pcVar37)();
      }
      uVar35 = uVar39;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar35 == 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfbc);
        (*pcVar37)();
      }
      uVar20 = uVar35;
      func_0x000107c3e240();
      func_0x000107c61170(uVar35);
      if ((int)uVar20 != 6) {
        plVar22 = (long *)0x140;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x200) = plVar22;
        *plVar22 = unaff_x22;
        plVar22[1] = (long)FUN_101a0afe0;
        lVar32 = *(long *)(unaff_x22 + 0x188);
        plVar22[0x11] = uVar39;
        plVar22[0x12] = lVar32;
        lVar32 = 0;
        func_0x000107c5ede0();
        plVar22[0x13] = lVar32;
        lVar32 = *(long *)(lVar32 + -8);
        plVar22[0x14] = lVar32;
        uVar31 = *(long *)(lVar32 + 0x40) + 0xf;
        uVar35 = uVar31 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar22[0x15] = uVar35;
        uVar35 = uVar31 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar22[0x16] = uVar35;
        uVar35 = uVar31 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar22[0x17] = uVar35;
        uVar31 = uVar31 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar22[0x18] = uVar31;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0edc8,0,0);
        return;
      }
      lVar33 = *(long *)(unaff_x22 + 0x1e8);
      func_0x000107c61170(uVar39);
      uVar31 = uVar31 + 1;
    } while (lVar32 != lVar33);
  }
  lVar32 = *(long *)(unaff_x22 + 400);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e0));
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a10bd8();
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar32 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfc0);
    (*pcVar37)();
  }
  lVar33 = lVar32;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(lVar32);
  if (lVar33 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfc4);
    (*pcVar37)();
  }
  lVar32 = lVar33;
  func_0x000107c4aba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  if (lVar32 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfc8);
    (*pcVar37)();
  }
  lVar33 = lVar32;
  func_0x000107c5ce78();
  func_0x000107c61180();
  func_0x000107c61170(lVar32);
  if (lVar33 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfcc);
    (*pcVar37)();
  }
  puStack_a0 = (undefined *)0x0;
  uVar19 = 0;
  func_0x000101a1170c(0,0x112deb550,&PTR_PTR_1126bce80);
  func_0x000107c5fc50(lVar33,&puStack_a0,uVar19);
  func_0x000107c61170(lVar33);
  puVar36 = puStack_a0;
  *(undefined **)(unaff_x22 + 0x180) = puStack_a0;
  func_0x0001000285a8(0x112deb558,&UNK_10d9b7788);
  func_0x0001048da110(unaff_x22 + 0x158);
  func_0x000107c6142c(puVar36);
  uVar31 = *(ulong *)(unaff_x22 + 0x158);
  if (uVar31 >> 0x3e == 0) {
    uVar35 = *(ulong *)((uVar31 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar35 = uVar31 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar31) {
      uVar35 = uVar31;
    }
    func_0x000107c60480();
  }
  if (uVar35 != 0) {
    uVar39 = 0;
    do {
      if ((uVar31 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar31 & 0xffffffffffffff8) + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bef4);
          (*pcVar37)();
        }
        uVar20 = *(ulong *)(uVar31 + uVar39 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar20 = uVar39;
        func_0x000101a0fddc(uVar39,uVar31,&PTR_PTR_1126bce80,0x112deb550);
      }
      uVar1 = uVar39 + 1;
      if (SCARRY8(uVar39,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bef0);
        (*pcVar37)();
      }
      uVar21 = uVar20;
      func_0x000107c49e94();
      if ((int)uVar21 == 0) {
        func_0x000107c6142c(uVar31);
        uVar31 = uVar20;
        func_0x000107c5ce10();
        func_0x000107c61180();
        if (uVar31 == 0) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfd4);
          (*pcVar37)();
        }
        puStack_a0 = (undefined *)0x0;
        uVar19 = 0;
        func_0x000101a1170c(0,0x112deb560,&PTR_PTR_1126bce88);
        func_0x000107c5fc50(uVar31,&puStack_a0,uVar19);
        func_0x000107c61170(uVar31);
        puVar36 = puStack_a0;
        *(undefined **)(unaff_x22 + 0x178) = puStack_a0;
        func_0x0001000285a8(0x112deb568,&UNK_10d9b7790);
        func_0x0001048da110(unaff_x22 + 0x150);
        func_0x000107c6142c(puVar36);
        uVar31 = *(ulong *)(unaff_x22 + 0x150);
        if (uVar31 >> 0x3e == 0) {
          uVar35 = *(ulong *)((uVar31 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar35 = uVar31 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar31) {
            uVar35 = uVar31;
          }
          func_0x000107c60480();
        }
        lVar32 = *(long *)(unaff_x22 + 0x188);
        func_0x000107c61428(lVar32 + 0x30,unaff_x22 + 0x138,0,0);
        if (uVar35 == 0) goto LAB_101a0bbe8;
        uStack_a8 = 0;
        puVar36 = *(undefined **)PTR__kCMTimeZero_110348670;
        uVar29 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
        uVar38 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
        cVar6 = *(char *)(unaff_x22 + 0x56);
        cVar7 = *(char *)(unaff_x22 + 0x55);
        uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        goto LAB_101a0b654;
      }
      func_0x000107c61170(uVar20);
      uVar39 = uVar39 + 1;
    } while (uVar1 != uVar35);
  }
  func_0x000107c6142c(uVar31);
  puVar27 = (undefined8 *)(unaff_x22 + 0xa0);
  func_0x000101a116cc(puVar27,0x112deb530,&UNK_10d9b82d0);
  func_0x000101a058d8();
  func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
  puVar27[1] = 0;
  *puVar27 = 2;
  *(undefined1 *)(puVar27 + 2) = 4;
  func_0x000107c61654();
  func_0x000107c6142c(puVar18);
LAB_101a0bf70:
                    /* WARNING: Could not recover jumptable at 0x000101a0bf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
LAB_101a0b654:
  fVar40 = SUB84(param_1,0);
  if ((uVar31 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar31 & 0xffffffffffffff8) + 0x10) <= uStack_a8) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfa0);
      (*pcVar37)();
    }
    uVar39 = *(ulong *)(uVar31 + uStack_a8 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar39 = uStack_a8;
    func_0x000101a0fddc(uStack_a8,uVar31,&PTR_PTR_1126bce88,0x112deb560);
  }
  uVar1 = uStack_a8 + 1;
  if (SCARRY8(uStack_a8,1)) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bf9c);
    (*pcVar37)();
  }
  func_0x0001000d224c(unaff_x22 + 0x110);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar33 = *(long *)(unaff_x22 + 0x130);
  func_0x0001000a8868(unaff_x22 + 0x110,uVar25);
  (**(code **)(lVar33 + 8))(unaff_x22 + 0xe8,uVar25,lVar33);
  func_0x0001000834e4(unaff_x22 + 0x110);
  uVar28 = 5;
  uVar21 = uVar39;
  FUN_101a0ec3c();
  if (uVar21 == 0) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010efc8cd0);
    uVar35 = uVar39;
    func_0x000107c4e928();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x168) = uVar35;
    puVar27 = (undefined8 *)0x112deb570;
    func_0x0001000285a8(0x112deb570,&UNK_10d9b7798);
    func_0x000107c5fb18(unaff_x22 + 0x168);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar23 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar23;
    *(undefined1 *)(puVar27 + 2) = 0;
    func_0x000107c61654();
LAB_101a0bec0:
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar20);
    func_0x000107c6142c(uVar31);
    func_0x000107c6142c(puVar18);
    func_0x0001000834e4(unaff_x22 + 0xe8);
    goto LAB_101a0bf70;
  }
  uVar24 = uVar21;
  func_0x000107c4e920();
  lVar33 = *(long *)(lVar32 + 0x30);
  if ((*(long *)(lVar33 + 0x10) == 0) || (func_0x00010149a22c(), (uVar28 & 1) == 0)) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd00000000000002b;
    uStack_98 = (undefined *)0x800000010efc8d10;
    uVar35 = uVar21;
    func_0x000107c4e920();
    *(int *)(unaff_x22 + 0x49c) = (int)uVar35;
    puVar27 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar23 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar23;
    *(undefined1 *)(puVar27 + 2) = 1;
    func_0x000107c61654();
LAB_101a0beb8:
    func_0x000107c61170(uVar21);
    goto LAB_101a0bec0;
  }
  uVar25 = *(undefined8 *)(*(long *)(lVar33 + 0x38) + uVar24 * 8);
  func_0x000107c61174();
  uVar28 = uVar21;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar28 == 0) {
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd000000000000022;
    uStack_98 = (undefined *)0x800000010efc8d40;
    uVar35 = uVar21;
    func_0x000107c4e920();
    *(int *)(unaff_x22 + 0x498) = (int)uVar35;
    puVar27 = (undefined8 *)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
    func_0x000107c6057c(PTR___ss6UInt32VN_11034f020);
    func_0x000107c5fb78();
    func_0x000107c6142c();
    puVar23 = uStack_98;
    puVar36 = puStack_a0;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar27,0,0);
    *puVar27 = puVar36;
    puVar27[1] = puVar23;
    *(undefined1 *)(puVar27 + 2) = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar25);
    goto LAB_101a0beb8;
  }
  FUN_101a0e4e0(unaff_x22 + 0x240);
  uVar24 = uVar21;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (uVar24 == 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfd0);
    (*pcVar37)();
  }
  uVar26 = uVar24;
  func_0x000107c44a34();
  func_0x000107c61170(uVar24);
  dVar41 = 1.0;
  if ((int)uVar26 != 0) {
    uVar24 = uVar21;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar24 == 0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x101a0bfd8);
      (*pcVar37)();
    }
    uVar26 = uVar24;
    func_0x000107c4e958();
    func_0x000107c61180();
    func_0x000107c61170(uVar24);
    if (uVar26 != 0) {
      func_0x000107c5b794(uVar26);
      func_0x000107c61170(uVar26);
      dVar41 = (double)fVar40;
    }
  }
  uVar34 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x268);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x248);
  func_0x000107c60a50(&puStack_a0,ABS(dVar41),unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x330) = uVar34;
  *(undefined8 *)(unaff_x22 + 0x338) = uVar42;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar30;
  *(undefined **)(unaff_x22 + 0x348) = puStack_a0;
  *(undefined **)(unaff_x22 + 0x350) = uStack_98;
  *(undefined8 *)(unaff_x22 + 0x358) = uStack_90;
  func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x330,unaff_x22 + 0x348);
  uVar17 = uStack_78;
  uVar16 = uStack_7c;
  uVar15 = uStack_80;
  uVar42 = uStack_88;
  *(undefined **)(unaff_x22 + 0x218) = uStack_98;
  *(undefined8 *)(unaff_x22 + 0x210) = puStack_a0;
  *(undefined8 *)(unaff_x22 + 0x220) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x228) = uStack_88;
  *(undefined4 *)(unaff_x22 + 0x230) = uStack_80;
  *(undefined4 *)(unaff_x22 + 0x234) = uStack_7c;
  *(undefined8 *)(unaff_x22 + 0x238) = uStack_78;
  uVar30 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar33 = unaff_x22 + 0xe8;
  param_1 = puStack_a0;
  func_0x0001000a8868(lVar33,uVar30);
  func_0x000101eb0074(uVar25,(undefined8 *)(unaff_x22 + 0x210),uVar30,uVar34,lVar33);
  if (cVar7 == '\x01' || cVar6 == '\x01') {
    uVar30 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar33 = *(long *)(unaff_x22 + 0x108);
    func_0x0001000a8868(unaff_x22 + 0xe8,uVar34);
    pcVar37 = *(code **)(lVar33 + 0x30);
    func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
    (*pcVar37)(uVar30,uVar2,1,1,uVar34,lVar33);
LAB_101a0b544:
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
  }
  else {
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined4 *)(unaff_x22 + 0x4a4);
    uVar5 = *(undefined4 *)(unaff_x22 + 0x4a0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined **)(unaff_x22 + 0x3a8) = puVar36;
    *(undefined4 *)(unaff_x22 + 0x3b0) = uVar29;
    *(undefined4 *)(unaff_x22 + 0x3b4) = uVar38;
    *(undefined8 *)(unaff_x22 + 0x3b8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x3c0) = uVar42;
    *(undefined4 *)(unaff_x22 + 0x3c8) = uVar15;
    *(undefined4 *)(unaff_x22 + 0x3cc) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x3d0) = uVar17;
    uVar43 = *(undefined8 *)(unaff_x22 + 0x4a8);
    func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3a8,unaff_x22 + 0x3c0);
    uVar14 = uStack_90;
    puVar23 = puStack_a0;
    uVar10 = (undefined4)uStack_98;
    uVar12 = uStack_98._4_4_;
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar34;
    *(undefined4 *)(unaff_x22 + 0x3e0) = uVar5;
    *(undefined4 *)(unaff_x22 + 0x3e4) = uVar4;
    *(undefined8 *)(unaff_x22 + 1000) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x3f0) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x3f8) = uVar43;
    *(undefined8 *)(unaff_x22 + 0x400) = uVar2;
    func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x3d8,unaff_x22 + 0x3f0);
    uVar30 = uStack_90;
    puVar8 = puStack_a0;
    uVar11 = (undefined4)uStack_98;
    uVar13 = uStack_98._4_4_;
    *(undefined **)(unaff_x22 + 0x408) = puVar23;
    *(undefined4 *)(unaff_x22 + 0x410) = uVar10;
    *(undefined4 *)(unaff_x22 + 0x414) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x418) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x420) = uVar34;
    *(undefined4 *)(unaff_x22 + 0x428) = uVar5;
    *(undefined4 *)(unaff_x22 + 0x42c) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x430) = uVar3;
    lVar33 = unaff_x22 + 0x408;
    func_0x000107c60a38(lVar33,unaff_x22 + 0x420);
    if (0 < (int)lVar33) {
      *(undefined **)(unaff_x22 + 0x438) = puVar8;
      *(undefined4 *)(unaff_x22 + 0x440) = uVar11;
      *(undefined4 *)(unaff_x22 + 0x444) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x448) = uVar30;
      *(undefined **)(unaff_x22 + 0x450) = puVar36;
      *(undefined4 *)(unaff_x22 + 0x458) = uVar29;
      *(undefined4 *)(unaff_x22 + 0x45c) = uVar38;
      *(undefined8 *)(unaff_x22 + 0x460) = uVar19;
      lVar33 = unaff_x22 + 0x438;
      func_0x000107c60a38(lVar33,unaff_x22 + 0x450);
      if (0 < (int)lVar33) {
        uVar34 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
        *(undefined **)(unaff_x22 + 0x468) = puVar36;
        *(undefined4 *)(unaff_x22 + 0x470) = uVar29;
        *(undefined4 *)(unaff_x22 + 0x474) = uVar38;
        *(undefined8 *)(unaff_x22 + 0x478) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x480) = *(undefined8 *)(unaff_x22 + 0x1a8);
        *(undefined8 *)(unaff_x22 + 0x488) = *(undefined8 *)(unaff_x22 + 0x4a0);
        *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(unaff_x22 + 0x1b0);
        func_0x000107c60a48(&puStack_a0,unaff_x22 + 0x468,unaff_x22 + 0x480);
        uVar3 = uStack_90;
        puVar9 = puStack_a0;
        uVar4 = (undefined4)uStack_98;
        uVar5 = uStack_98._4_4_;
        *(undefined **)(unaff_x22 + 0x288) = puVar23;
        *(undefined4 *)(unaff_x22 + 0x290) = uVar10;
        *(undefined4 *)(unaff_x22 + 0x294) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x298) = uVar14;
        *(undefined **)(unaff_x22 + 0x390) = puVar8;
        *(undefined4 *)(unaff_x22 + 0x398) = uVar11;
        *(undefined4 *)(unaff_x22 + 0x39c) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x3a0) = uVar30;
        func_0x000107c60a4c(&puStack_a0,unaff_x22 + 0x288,unaff_x22 + 0x390);
        *(undefined **)(unaff_x22 + 0x360) = puStack_a0;
        *(undefined **)(unaff_x22 + 0x368) = uStack_98;
        *(undefined8 *)(unaff_x22 + 0x370) = uStack_90;
        *(undefined **)(unaff_x22 + 0x300) = puVar9;
        *(undefined4 *)(unaff_x22 + 0x308) = uVar4;
        *(undefined4 *)(unaff_x22 + 0x30c) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x310) = uVar3;
        func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x360,unaff_x22 + 0x300);
        uVar30 = uStack_90;
        puVar8 = uStack_98;
        puVar23 = puStack_a0;
        *(undefined **)(unaff_x22 + 0x2e8) = puVar9;
        *(undefined4 *)(unaff_x22 + 0x2f0) = uVar4;
        *(undefined4 *)(unaff_x22 + 0x2f4) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x2f8) = uVar3;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar36;
        *(undefined4 *)(unaff_x22 + 0x2d8) = uVar29;
        *(undefined4 *)(unaff_x22 + 0x2dc) = uVar38;
        *(undefined8 *)(unaff_x22 + 0x2e0) = uVar19;
        func_0x000107c60a5c(&puStack_a0,unaff_x22 + 0x2e8,unaff_x22 + 0x2d0);
        *(undefined **)(unaff_x22 + 0x2b8) = puStack_a0;
        *(undefined **)(unaff_x22 + 0x2c0) = uStack_98;
        *(undefined8 *)(unaff_x22 + 0x2c8) = uStack_90;
        *(undefined **)(unaff_x22 + 0x2a0) = puVar23;
        *(undefined **)(unaff_x22 + 0x2a8) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x2b0) = uVar30;
        param_1 = uStack_98;
        func_0x000107c60a58(&puStack_a0,unaff_x22 + 0x2b8,unaff_x22 + 0x2a0);
        uVar43 = uStack_78;
        uVar14 = uStack_88;
        uVar3 = uStack_90;
        puVar8 = uStack_98;
        puVar23 = puStack_a0;
        uVar30 = CONCAT44(uStack_7c,uStack_80);
        lVar33 = *(long *)(unaff_x22 + 0x108);
        func_0x0001000a8868(unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x100));
        pcVar37 = *(code **)(lVar33 + 0x38);
        func_0x000101a11684(unaff_x22 + 0xa0,unaff_x22 + 0x58,0x112deb530,&UNK_10d9b82d0);
        (*pcVar37)(uVar34,uVar2,puVar23,puVar8,uVar3,uVar14,uVar30,uVar43,0x101);
        goto LAB_101a0b544;
      }
    }
  }
  uVar24 = uVar21;
  func_0x000107c4e920(uVar21);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar33 = *(long *)(unaff_x22 + 0x108);
  func_0x0001000a8868(unaff_x22 + 0xe8,uVar30);
  (**(code **)(lVar33 + 0x60))(uVar30,lVar33);
  puVar23 = puVar18;
  func_0x000107c61558(puVar18);
  puStack_a0 = puVar18;
  FUN_101a1036c(uVar30,0,0,0xf000000000000000,uVar24,puVar23);
  puVar18 = puStack_a0;
  *(undefined **)(unaff_x22 + 0x378) = puVar36;
  *(undefined4 *)(unaff_x22 + 0x380) = uVar29;
  *(undefined4 *)(unaff_x22 + 900) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x388) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x270) = uVar42;
  *(undefined4 *)(unaff_x22 + 0x278) = uVar15;
  *(undefined4 *)(unaff_x22 + 0x27c) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x280) = uVar17;
  func_0x000107c60a34(&puStack_a0,unaff_x22 + 0x378,unaff_x22 + 0x270);
  uVar19 = uStack_90;
  puVar36 = puStack_a0;
  uVar29 = (undefined4)uStack_98;
  uVar38 = uStack_98._4_4_;
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar39);
  func_0x0001000834e4(unaff_x22 + 0xe8);
  uStack_a8 = uStack_a8 + 1;
  if (uVar1 == uVar35) {
LAB_101a0bbe8:
    func_0x000107c6142c(uVar31);
    func_0x000107c61170(uVar20);
    func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
                    /* WARNING: Could not recover jumptable at 0x000101a0bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar18);
    return;
  }
  goto LAB_101a0b654;
}



/* Entry: 101a0bfd8; end: 101a0c02f;  */

void FUN_101a0bfd8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000107c6142c(uVar1);
  func_0x000101a116cc(unaff_x22 + 0xa0,0x112deb530,&UNK_10d9b82d0);
                    /* WARNING: Could not recover jumptable at 0x000101a0c02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0c030; end: 101a0c337;  */

void FUN_101a0c030(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_78;
  
  uVar11 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = uVar11;
  func_0x000107c444cc();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5e304();
    if (((int)uVar4 != 0) && (uVar4 = uVar3, func_0x000107c44d98(), (int)uVar4 != 0)) {
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c334);
        (*pcVar2)();
      }
      uVar4 = uVar11;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c338);
        (*pcVar2)();
      }
      uStack_78 = 0;
      uVar5 = 0;
      func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(uVar4,&uStack_78,uVar5);
      func_0x000107c61170(uVar4);
      uVar11 = uStack_78;
      if (uStack_78 != 0) {
        uVar4 = uVar3;
        func_0x000107c5e304();
        uVar6 = uVar3;
        func_0x000107c44d98();
        uVar14 = uVar11 & 0xffffffffffffff8;
        if (uVar11 >> 0x3e == 0) {
          uVar12 = *(ulong *)(uVar14 + 0x10);
        }
        else {
          uVar12 = uVar11;
          if (-1 < (long)uVar11) {
            uVar12 = uVar14;
          }
          func_0x000107c60480();
        }
        if (uVar12 != 0) {
          uVar13 = 0;
          do {
            if ((uVar11 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c2c4);
                (*pcVar2)();
              }
              uVar7 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar13;
              func_0x000101a0fddc(uVar13,uVar11,&PTR_PTR_1126b25d0,0x112d55598);
            }
            uVar1 = uVar13 + 1;
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c2c0);
              (*pcVar2)();
            }
            uVar8 = uVar7;
            func_0x000107c4abb4();
            if ((int)uVar8 == 1) {
              uVar8 = uVar7;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c320);
                (*pcVar2)();
              }
              uVar9 = uVar8;
              func_0x000107c3e240();
              func_0x000107c61170(uVar8);
              if ((int)uVar9 != 5) goto LAB_101a0c138;
              uVar8 = uVar7;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c330);
                (*pcVar2)();
              }
              uVar9 = uVar8;
              func_0x000107c41e40();
              func_0x000107c61180();
              func_0x000107c61170(uVar8);
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c32c);
                (*pcVar2)();
              }
              uVar8 = uVar9;
              func_0x000107c5e304();
              func_0x000107c61170(uVar9);
              uVar9 = uVar7;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c328);
                (*pcVar2)();
              }
              uVar10 = uVar9;
              func_0x000107c41e40();
              func_0x000107c61180();
              func_0x000107c61170(uVar9);
              if (uVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c324);
                (*pcVar2)();
              }
              uVar9 = uVar10;
              func_0x000107c44d98();
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar10);
              if ((((int)uVar8 != 0) && ((int)uVar9 != 0)) &&
                 (0.01 < ABS((float)(uVar8 & 0xffffffff) / (float)(uVar9 & 0xffffffff) -
                             (float)(uVar4 & 0xffffffff) / (float)(uVar6 & 0xffffffff)))) {
                func_0x000107c6142c(uVar11);
                func_0x000107c61170(uVar3);
                return;
              }
            }
            else {
LAB_101a0c138:
              func_0x000107c61170(uVar7);
            }
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar12);
        }
        func_0x000107c6142c(uVar11);
      }
    }
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101a0c338; end: 101a0c34f;  */

void FUN_101a0c338(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c350,0,0);
  return;
}



/* Entry: 101a0c350; end: 101a0c3c7;  */

void FUN_101a0c350(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x48);
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x50);
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a0c3c8;
                    /* WARNING: Could not recover jumptable at 0x000101a0c3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,lVar2);
  return;
}



/* Entry: 101a0c3c8; end: 101a0c43f;  */

void FUN_101a0c3c8(byte param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a0c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(byte *)(lVar1 + 0xb0) = param_1 & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c440,0,0);
  return;
}



/* Entry: 101a0c440; end: 101a0c753;  */

void FUN_101a0c440(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(char *)(unaff_x22 + 0xb0) != '\x01') {
    puVar4 = (undefined *)0x0;
    goto LAB_101a0c730;
  }
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x80);
  if (lVar9 != 0) {
    iVar3 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x10);
    func_0x000107c4491c();
    if (iVar3 == 0) {
      lVar9 = 0;
    }
    else {
      func_0x000107c6157c(lVar9);
    }
  }
  lVar8 = *(long *)(unaff_x22 + 0x70);
  lVar10 = *(long *)(lVar8 + 0x70);
  if (lVar10 == 0) {
LAB_101a0c4fc:
    uVar11 = *(undefined8 *)(lVar8 + 0x10);
    uVar5 = *(undefined8 *)(lVar8 + 0x40);
    func_0x000101a21d74(0);
    func_0x000107c610f8();
    func_0x000107c6157c(lVar9);
    func_0x000107c61174();
    func_0x000107c61174(uVar5);
    func_0x000107c615f0(lVar10);
    func_0x000101a205d4(uVar11,0,0xe000000000000000,0x74757074756f,0xe600000000000000,uVar5,0,lVar10
                        ,lVar9);
  }
  else {
    uVar5 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efc8e80);
    lVar6 = lVar10;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    lVar8 = *(long *)(unaff_x22 + 0x70);
    if ((int)lVar6 != 0) goto LAB_101a0c4fc;
    uVar11 = *(undefined8 *)(lVar8 + 0x10);
    uVar5 = *(undefined8 *)(lVar8 + 0x40);
    uVar12 = *(undefined8 *)(lVar8 + 0x78);
    FUN_101a1f2b4(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar12);
    func_0x000107c61174();
    func_0x000107c615f0(lVar10);
    func_0x000107c61174(uVar5);
    func_0x000101a1c948(uVar11,0,0xe000000000000000,0x74757074756f,0xe600000000000000,uVar5,0,lVar10
                        ,uVar12);
  }
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  *(undefined4 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined4 *)(unaff_x22 + 0x8c) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined4 *)(unaff_x22 + 0xa0) = uVar1;
  *(undefined4 *)(unaff_x22 + 0xa4) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
  func_0x000107c5dc60();
  func_0x000107c61180();
  lVar8 = 0x112d36830;
  FUN_101a0fce0(0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300,0x112deb828,&UNK_10db354d0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar11;
  puVar4 = PTR_PTR_1126bf6b8;
  func_0x000107c610f8(PTR_PTR_1126bf6b8);
  uVar5 = 0;
  func_0x000101a1170c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(uVar11);
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,uVar5);
  func_0x000107c61574(lVar8);
  *(undefined8 *)(unaff_x22 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  *(undefined8 *)(unaff_x22 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  func_0x000107c309b0(puVar4,puVar7,unaff_x22 + 0x10,unaff_x22 + 0x40,2,0,0,lVar10,0);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(lVar9);
  func_0x000107c61170(uVar11);
LAB_101a0c730:
                    /* WARNING: Could not recover jumptable at 0x000101a0c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 101a0c754; end: 101a0c76f;  */

void FUN_101a0c754(undefined1 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0c770,0,0);
  return;
}



/* Entry: 101a0c770; end: 101a0c9e3;  */

void FUN_101a0c770(void)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  ulong uStack_58;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar10 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x20) = lVar10;
  if (lVar10 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
    plVar5 = (long *)0x130;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101a0c9e4;
    plVar5[0x14] = lVar9;
    plVar5[0x15] = lVar10;
    lVar10 = 0;
    func_0x000107c5ede0();
    plVar5[0x16] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar5[0x17] = lVar10;
    uVar3 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x18] = uVar3;
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar3 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x19] = uVar4;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x1a] = uVar4;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x1b] = uVar3;
    lVar10 = 0x112deb540;
    func_0x0001000285a8(0x112deb540,&UNK_10d9b7740);
    plVar5[0x1c] = lVar10;
    uVar3 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x1d] = uVar4;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x1e] = uVar3;
    lVar10 = 0;
    FUN_101a0782c();
    plVar5[0x1f] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar5[0x20] = lVar10;
    uVar3 = *(long *)(lVar10 + 0x40) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x21] = uVar4;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x22] = uVar4;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x23] = uVar3;
    pcVar2 = FUN_101a06554;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
    return;
  }
  lVar10 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c9dc);
    (*pcVar2)();
  }
  lVar9 = lVar10;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c9e0);
    (*pcVar2)();
  }
  uStack_58 = 0;
  uVar6 = 0;
  func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
  func_0x000107c5fc4c(lVar9,&uStack_58,uVar6);
  uVar3 = uStack_58;
  *(ulong *)(unaff_x22 + 0x38) = uStack_58;
  if (uStack_58 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c9e4);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar9);
  if (uVar3 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x40) = uVar3;
  }
  else {
    if (-1 < (long)uVar3) {
      uVar3 = uVar3 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x40) = uVar3;
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(ulong *)(unaff_x22 + 0x38);
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c990);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar4 + uVar3 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar3;
        func_0x000101a0fddc(uVar3,uVar4,&PTR_PTR_1126b25d0,0x112d55598);
      }
      lVar10 = uVar3 + 1;
      *(ulong *)(unaff_x22 + 0x48) = uVar7;
      *(long *)(unaff_x22 + 0x50) = lVar10;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c98c);
        (*pcVar2)();
      }
      uVar4 = uVar7;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0c9d8);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(unaff_x22 + 0x68);
      uVar8 = uVar4;
      func_0x000107c3e240();
      func_0x000107c61170(uVar4);
      if (((int)uVar8 != 6) || ((bVar1 & 1) != 0)) {
        plVar5 = (long *)0x140;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_101a0cc58;
        lVar10 = *(long *)(unaff_x22 + 0x18);
        plVar5[0x11] = uVar7;
        plVar5[0x12] = lVar10;
        lVar10 = 0;
        func_0x000107c5ede0();
        plVar5[0x13] = lVar10;
        lVar10 = *(long *)(lVar10 + -8);
        plVar5[0x14] = lVar10;
        uVar3 = *(long *)(lVar10 + 0x40) + 0xf;
        uVar4 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x15] = uVar4;
        uVar4 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x16] = uVar4;
        uVar4 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x17] = uVar4;
        uVar3 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x18] = uVar3;
        pcVar2 = FUN_101a0edc8;
        goto LAB_107c615e0;
      }
      lVar9 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61170(uVar7);
      uVar3 = uVar3 + 1;
    } while (lVar10 != lVar9);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101a0c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0c9e4; end: 101a0ca33;  */

void FUN_101a0c9e4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0ca34,0,0);
  return;
}



/* Entry: 101a0ca34; end: 101a0cc57;  */

void FUN_101a0ca34(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  ulong uStack_58;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x20));
  uVar3 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x38) = uVar10;
  func_0x000107c6142c(uVar3);
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc50);
    (*pcVar2)();
  }
  lVar11 = lVar4;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc54);
    (*pcVar2)();
  }
  uStack_58 = 0;
  uVar3 = 0;
  func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
  func_0x000107c5fc4c(lVar11,&uStack_58,uVar3);
  uVar5 = uStack_58;
  *(ulong *)(unaff_x22 + 0x38) = uStack_58;
  if (uStack_58 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc58);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar11);
  if (uVar5 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x40) = uVar5;
  }
  else {
    if (-1 < (long)uVar5) {
      uVar5 = uVar5 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x40) = uVar5;
  }
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar9 = *(ulong *)(unaff_x22 + 0x38);
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc04);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar5;
        func_0x000101a0fddc(uVar5,uVar9,&PTR_PTR_1126b25d0,0x112d55598);
      }
      lVar4 = uVar5 + 1;
      *(ulong *)(unaff_x22 + 0x48) = uVar6;
      *(long *)(unaff_x22 + 0x50) = lVar4;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc00);
        (*pcVar2)();
      }
      uVar9 = uVar6;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0cc4c);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(unaff_x22 + 0x68);
      uVar7 = uVar9;
      func_0x000107c3e240();
      func_0x000107c61170(uVar9);
      if (((int)uVar7 != 6) || ((bVar1 & 1) != 0)) {
        plVar8 = (long *)0x140;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101a0cc58;
        lVar4 = *(long *)(unaff_x22 + 0x18);
        plVar8[0x11] = uVar6;
        plVar8[0x12] = lVar4;
        lVar4 = 0;
        func_0x000107c5ede0();
        plVar8[0x13] = lVar4;
        lVar4 = *(long *)(lVar4 + -8);
        plVar8[0x14] = lVar4;
        uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
        uVar9 = uVar5 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar8[0x15] = uVar9;
        uVar9 = uVar5 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar8[0x16] = uVar9;
        uVar9 = uVar5 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar8[0x17] = uVar9;
        uVar5 = uVar5 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar8[0x18] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0edc8,0,0);
        return;
      }
      lVar11 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61170(uVar6);
      uVar5 = uVar5 + 1;
    } while (lVar4 != lVar11);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101a0cc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0cc58; end: 101a0ccb3;  */

void FUN_101a0cc58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a0ccb4;
  }
  else {
    pcVar1 = FUN_101a0ce18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a0ccb4; end: 101a0ce17;  */

void FUN_101a0ccb4(void)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
  uVar7 = *(ulong *)(unaff_x22 + 0x50);
  if (uVar7 != *(ulong *)(unaff_x22 + 0x40)) {
    do {
      uVar6 = *(ulong *)(unaff_x22 + 0x38);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0ce14);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar6 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        func_0x000101a0fddc(uVar7,uVar6,&PTR_PTR_1126b25d0,0x112d55598);
      }
      lVar8 = uVar7 + 1;
      *(ulong *)(unaff_x22 + 0x48) = uVar3;
      *(long *)(unaff_x22 + 0x50) = lVar8;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0ce10);
        (*pcVar2)();
      }
      uVar6 = uVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0ce18);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(unaff_x22 + 0x68);
      uVar4 = uVar6;
      func_0x000107c3e240();
      func_0x000107c61170(uVar6);
      if (((int)uVar4 != 6) || ((bVar1 & 1) != 0)) {
        plVar5 = (long *)0x140;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_101a0cc58;
        lVar8 = *(long *)(unaff_x22 + 0x18);
        plVar5[0x11] = uVar3;
        plVar5[0x12] = lVar8;
        lVar8 = 0;
        func_0x000107c5ede0();
        plVar5[0x13] = lVar8;
        lVar8 = *(long *)(lVar8 + -8);
        plVar5[0x14] = lVar8;
        uVar7 = *(long *)(lVar8 + 0x40) + 0xf;
        uVar6 = uVar7 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x15] = uVar6;
        uVar6 = uVar7 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x16] = uVar6;
        uVar6 = uVar7 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x17] = uVar6;
        uVar7 = uVar7 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar5[0x18] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0edc8,0,0);
        return;
      }
      lVar9 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (lVar8 != lVar9);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101a0cd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0ce18; end: 101a0ce57;  */

void FUN_101a0ce18(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a0ce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0ce58; end: 101a0d08f;  */

ulong FUN_101a0ce58(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x27;
  ulong uStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d080);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d084);
    (*pcVar3)();
  }
  lVar4 = lVar5;
  func_0x000107c4aba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d088);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x000107c5ce78();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    uStack_58 = 0;
    uVar6 = 0;
    func_0x000101a1170c(0,0x112deb550,&PTR_PTR_1126bce80);
    func_0x000107c5fc4c(lVar5,&uStack_58,uVar6);
    uVar2 = uStack_58;
    if (uStack_58 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d090);
      (*pcVar3)();
    }
    func_0x000107c61170(lVar5);
    uVar10 = uVar2 & 0xffffffffffffff8;
    if (uVar2 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar11 = uVar2;
      if (-1 < (long)uVar2) {
        uVar11 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d064);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(uVar2 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar12;
          func_0x000101a0fddc(uVar12,uVar2,&PTR_PTR_1126bce80,0x112deb550);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d060);
          (*pcVar3)();
        }
        uVar8 = uVar7;
        func_0x000107c49e94();
        uVar9 = uVar7;
        if ((int)uVar8 == 0) {
          FUN_101a0de28(uVar7,param_1);
        }
        else {
          FUN_101a0d344(uVar7,param_1,param_2 & 1);
        }
        if (unaff_x21 != 0) {
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar2);
          return uVar9;
        }
        func_0x000107c61170(uVar7);
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar11);
    }
    func_0x000107c6142c(uVar2);
    return unaff_x27;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0d08c);
  (*pcVar3)();
}



/* Entry: 101a0d090; end: 101a0d343;  */

void FUN_101a0d090(undefined8 *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffff60;
  
  puVar4 = param_1;
  FUN_101eb005c();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fb78(uVar1,uVar2);
  uVar6 = 1;
  if (((ulong)param_1 & 1) != 0) {
    uVar6 = 2;
  }
  lVar10 = *(long *)(unaff_x20 + 0x70);
  if (lVar10 == 0) {
    if ((param_2 & 1) != 0) {
LAB_101a0d20c:
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
      FUN_101a1f2b4(0);
      func_0x000107c610f8();
      func_0x000107c615f0(uVar11);
      func_0x000107c615f0(lVar10);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(uVar8);
      func_0x000101a1c948(uVar7,uVar1,uVar2,0x2d74757074756f,0xe700000000000000,uVar8,uVar6,lVar10,
                          uVar11);
      return;
    }
    bVar3 = 0;
  }
  else {
    uVar7 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efc8e80);
    lVar5 = lVar10;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar7);
    if (((int)lVar5 == 0) || ((param_2 & 1) != 0)) {
      uVar7 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010efc8e40);
      lVar5 = lVar10;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar7);
      if (((int)lVar5 == 0) || ((param_2 & 1) == 0)) goto LAB_101a0d20c;
    }
    bVar3 = 0x1d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efc8e20);
    lVar5 = lVar10;
    func_0x000107c3ebd4();
    func_0x000107c61170();
    if (((int)lVar5 == 0) || ((*(byte *)(unaff_x20 + 0x68) & 1) != 0)) {
      bVar3 = 0;
      bVar9 = 0;
      if ((param_2 & 1) != 0) goto LAB_101a0d2a4;
    }
    else {
      FUN_101a0c030();
      if ((param_2 & 1) != 0) {
        bVar9 = 0;
        goto LAB_101a0d2a4;
      }
    }
  }
  bVar9 = bVar3 ^ 1;
LAB_101a0d2a4:
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  FUN_101a1baac(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(lVar10);
  func_0x000101a18c24(uVar7,uVar1,uVar2,0x2d74757074756f,0xe700000000000000,uVar8,uVar6,lVar10,
                      (CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff60 >> 0x10),param_2),
                                bVar9) & 0xffffffffffffff01 ^ 0xff00) & 0xffffffffffff01ff,uVar11);
  return;
}



/* Entry: 101a0d344; end: 101a0de27;  */

undefined1  [16] FUN_101a0d344(ulong param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *****pppppuVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 *****pppppuVar25;
  undefined4 uVar26;
  long unaff_x20;
  long lVar27;
  undefined8 uVar28;
  ulong unaff_x22;
  undefined8 *****pppppuVar29;
  undefined8 *****pppppuVar30;
  undefined8 ***pppuVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined8 ****ppppuStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined4 uStack_f4;
  undefined8 ****appppuStack_f0 [3];
  undefined8 ***pppuStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 ***pppuStack_98;
  
  lVar27 = param_2;
  func_0x000107c5ce10();
  func_0x000107c61180();
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de24);
    (*pcVar8)();
  }
  appppuStack_f0[0] = (undefined8 *****)0x0;
  uVar10 = 0;
  func_0x000101a1170c(0,0x112deb560,&PTR_PTR_1126bce88);
  func_0x000107c5fc4c(lVar27,appppuStack_f0,uVar10);
  ppppuVar7 = appppuStack_f0[0];
  if ((undefined8 *****)appppuStack_f0[0] == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de28);
    (*pcVar8)();
  }
  func_0x000107c61170(lVar27);
  pppppuVar23 = (undefined8 *****)((ulong)ppppuVar7 & 0xffffffffffffff8);
  if ((ulong)ppppuVar7 >> 0x3e == 0) {
    pppppuVar25 = (undefined8 *****)pppppuVar23[2];
  }
  else {
    pppppuVar25 = (undefined8 *****)ppppuVar7;
    if (-1 < (long)ppppuVar7) {
      pppppuVar25 = pppppuVar23;
    }
    func_0x000107c60480();
  }
  if (pppppuVar25 != (undefined8 *****)0x0) {
    unaff_x22 = (ulong)ppppuVar7 & 0xc000000000000001;
    pppppuVar16 = appppuStack_f0;
    ppuVar22 = (undefined **)0x0;
    func_0x000107c61428(unaff_x20 + 0x30,pppppuVar16,0,0);
    pppppuVar30 = (undefined8 *****)0x0;
    ppppuVar24 = *(undefined8 *****)PTR__kCMTimeZero_110348670;
    uVar4 = *(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar5 = *(uint *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    do {
      if (unaff_x22 == 0) {
        if (pppppuVar23[2] <= pppppuVar30) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0dde4);
          (*pcVar8)();
        }
        pppppuVar11 = (undefined8 *****)ppppuVar7[(long)pppppuVar30 + 4];
        func_0x000107c61174();
      }
      else {
        ppuVar22 = &PTR_PTR_1126bce88;
        pppppuVar11 = pppppuVar30;
        pppppuVar16 = (undefined8 *****)ppppuVar7;
        func_0x000101a0fddc();
      }
      bVar9 = SCARRY8((long)pppppuVar30,1);
      pppppuVar30 = (undefined8 *****)((long)pppppuVar30 + 1);
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddc8);
        (*pcVar8)();
      }
      pppppuVar12 = pppppuVar11;
      FUN_101a0f764();
      if ((ulong)pppppuVar12 >> 0x3e == 0) {
        pppppuVar13 = *(undefined8 ******)(((ulong)pppppuVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pppppuVar13 = (undefined8 *****)((ulong)pppppuVar12 & 0xffffffffffffff8);
        if ((undefined8 *****)0x7fffffffffffffff < pppppuVar12) {
          pppppuVar13 = pppppuVar12;
        }
        func_0x000107c60480();
      }
      if (pppppuVar13 != (undefined8 *****)0x0) {
        pppppuVar29 = (undefined8 *****)0x0;
        do {
          if (((ulong)pppppuVar12 & 0xc000000000000001) == 0) {
            if (*(undefined8 ******)(((ulong)pppppuVar12 & 0xffffffffffffff8) + 0x10) <= pppppuVar29
               ) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddbc);
              (*pcVar8)();
            }
            pppppuVar14 = (undefined8 *****)pppppuVar12[(long)pppppuVar29 + 4];
            func_0x000107c61174();
          }
          else {
            ppuVar22 = &PTR_PTR_1126b25d0;
            pppppuVar14 = pppppuVar29;
            pppppuVar16 = pppppuVar12;
            func_0x000101a0fddc();
          }
          pppppuVar1 = (undefined8 *****)((long)pppppuVar29 + 1);
          if (SCARRY8((long)pppppuVar29,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddb8);
            (*pcVar8)();
          }
          pppppuVar15 = pppppuVar14;
          func_0x000107c4e920();
          lVar27 = *(long *)(unaff_x20 + 0x30);
          if ((*(long *)(lVar27 + 0x10) == 0) ||
             (func_0x00010149a22c(), ((ulong)pppppuVar16 & 1) == 0)) {
            ppppuStack_110 = (undefined8 ****)0x0;
            uStack_108 = 0xe000000000000000;
            func_0x000107c602fc(0x2d);
            func_0x000107c6142c(uStack_108);
            ppppuStack_110 = (undefined8 *****)0xd00000000000002b;
            uStack_108 = 0x800000010efc8d10;
            pppppuVar23 = pppppuVar14;
            func_0x000107c4e920();
            uStack_f4 = SUB84(pppppuVar23,0);
            puVar21 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
            func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                                PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar21);
            unaff_x22 = uStack_108;
            pppppuVar23 = (undefined8 *****)ppppuStack_110;
            uStack_100 = 1;
            uVar10 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar10 != 0) {
              func_0x000101a058d8();
              func_0x000107c61658(&ppppuStack_110,&UNK_11042c930,uVar10);
            }
            func_0x000107c6142c(ppppuVar7);
            func_0x000107c6142c(pppppuVar12);
            func_0x000107c61170(pppppuVar11);
            goto LAB_101a0dac8;
          }
          pppppuVar15 = *(undefined8 ******)(*(long *)(lVar27 + 0x38) + (long)pppppuVar15 * 8);
          func_0x000107c61174();
          pppppuVar16 = pppppuVar14;
          func_0x000107c4abb4();
          if ((int)pppppuVar16 != 1) {
            pppppuVar16 = pppppuVar14;
            func_0x000107c4abb4();
            if ((int)pppppuVar16 == 4) {
              pppppuVar16 = pppppuVar14;
              func_0x000107c40dc8();
              func_0x000107c61180();
              if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddf8);
                (*pcVar8)();
              }
              pppppuVar17 = pppppuVar16;
              func_0x000107c4a764();
              func_0x000107c61180();
              func_0x000107c61170(pppppuVar16);
              if (pppppuVar17 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddf4);
                (*pcVar8)();
              }
              pppppuVar16 = pppppuVar17;
              func_0x000107c42924();
              func_0x000107c61180();
              func_0x000107c61170(pppppuVar17);
              if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddf0);
                (*pcVar8)();
              }
              pppppuVar17 = pppppuVar16;
              func_0x000107c42930();
              func_0x000107c61170(pppppuVar16);
              if ((int)pppppuVar17 == 7) {
                pppppuVar16 = pppppuVar14;
                func_0x000107c40dc8();
                func_0x000107c61180();
                if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de14);
                  (*pcVar8)();
                }
                pppppuVar17 = pppppuVar16;
                func_0x000107c4a764();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar16);
                if (pppppuVar17 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de10);
                  (*pcVar8)();
                }
                pppppuVar16 = pppppuVar17;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar17);
                if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de0c);
                  (*pcVar8)();
                }
                pppppuVar17 = pppppuVar16;
                func_0x000107c4d2a4();
                func_0x000107c61180();
                func_0x000107c61170(pppppuVar16);
                if (pppppuVar17 != (undefined8 *****)0x0) {
                  pppppuVar16 = pppppuVar14;
                  func_0x000107c4f4ec();
                  func_0x000107c61180();
                  if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de1c);
                    (*pcVar8)();
                  }
                  pppppuVar18 = pppppuVar16;
                  func_0x000107c44430();
                  func_0x000107c61180();
                  func_0x000107c61170(pppppuVar16);
                  if (pppppuVar18 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de18);
                    (*pcVar8)();
                  }
                  pppppuVar16 = pppppuVar18;
                  func_0x000107c42378();
                  func_0x000107c61170(pppppuVar18);
                  if ((long)pppppuVar16 < 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddc4);
                    (*pcVar8)();
                  }
                  func_0x000107c60a40(&ppppuStack_110,pppppuVar16,1000);
                  pppppuVar16 = pppppuVar17;
                  func_0x000107c5bb48();
                  ppppuVar19 = (undefined8 ****)((ulong)pppppuVar16 & 0xffffffff);
                  uVar20 = 1000;
                  func_0x000107c600c8();
                  func_0x000107c61170(pppppuVar17);
                  uVar26 = (undefined4)(uVar20 >> 0x20);
                  goto LAB_101a0d7a0;
                }
              }
            }
            ppppuStack_110 = (undefined8 ****)0x0;
            uStack_108 = 0xe000000000000000;
            func_0x000107c602fc(0x1c);
            func_0x000107c6142c(uStack_108);
            pcVar2 = "Incompatible media layer: ";
            lVar27 = -0x11;
LAB_101a0db48:
            ppppuStack_110 = (undefined8 ****)(lVar27 + -0x2fffffffffffffd5);
            uStack_108 = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
            pppppuVar23 = pppppuVar14;
            func_0x000107c4e920();
            uStack_f4 = SUB84(pppppuVar23,0);
            puVar21 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
            func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                                PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar21);
            unaff_x22 = uStack_108;
            pppppuVar23 = (undefined8 *****)ppppuStack_110;
            uStack_100 = 2;
            uVar10 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar10 != 0) {
              func_0x000101a058d8();
              func_0x000107c61658(&ppppuStack_110,&UNK_11042c930,uVar10);
            }
            func_0x000107c6142c(ppppuVar7);
            func_0x000107c6142c(pppppuVar12);
            func_0x000107c61170(pppppuVar11);
            func_0x000107c61170(pppppuVar14);
            goto LAB_101a0dbe4;
          }
          pppppuVar16 = pppppuVar14;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (pppppuVar16 == (undefined8 *****)0x0) {
            ppppuStack_110 = (undefined8 ****)0x0;
            uStack_108 = 0xe000000000000000;
            func_0x000107c602fc(0x24);
            func_0x000107c6142c(uStack_108);
            pcVar2 = "no media metadata in media layer: ";
            lVar27 = -9;
            goto LAB_101a0db48;
          }
          FUN_101a0e4e0(&pppuStack_d8);
          ppuVar22 = (undefined **)pppuStack_c8;
          uVar26 = uStack_cc;
          ppppuVar19 = (undefined8 ****)pppuStack_d8;
          uVar20 = (ulong)uStack_d0;
          func_0x000107c61170(pppppuVar16);
LAB_101a0d7a0:
          uStack_a0 = (undefined4)uVar20;
          lVar27 = param_2;
          pppuStack_a8 = ppppuVar19;
          uStack_9c = uVar26;
          pppuStack_98 = (undefined8 ***)ppuVar22;
          func_0x000107c5ce30();
          pppppuVar16 = pppppuVar14;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddec);
            (*pcVar8)();
          }
          uVar6 = 0x3f800000;
          if (1 < (int)lVar27 - 1U) {
            uVar6 = 0;
          }
          pppppuVar17 = pppppuVar16;
          func_0x000107c44740();
          func_0x000107c61170(pppppuVar16);
          uVar20 = (ulong)uVar6;
          if ((int)pppppuVar17 != 0) {
            pppppuVar16 = pppppuVar14;
            func_0x000107c4f4ec();
            func_0x000107c61180();
            if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de00);
              (*pcVar8)();
            }
            pppppuVar17 = pppppuVar16;
            func_0x000107c3e404();
            func_0x000107c61180();
            func_0x000107c61170(pppppuVar16);
            if (pppppuVar17 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddfc);
              (*pcVar8)();
            }
            func_0x000107c5dc0c(pppppuVar17);
            func_0x000107c61170(pppppuVar17);
            uVar20 = param_1;
          }
          param_1 = uVar20;
          pppppuVar16 = pppppuVar14;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0dde8);
            (*pcVar8)();
          }
          pppppuVar17 = pppppuVar16;
          func_0x000107c448c8();
          func_0x000107c61170(pppppuVar16);
          if ((int)pppppuVar17 == 0) {
            pppppuVar16 = pppppuVar11;
            func_0x000107c44b88();
            uVar20 = (ulong)uVar4;
            ppuVar22 = (undefined **)ppppuVar24;
            uVar28 = uVar10;
            uVar32 = (ulong)uVar5;
            if ((int)pppppuVar16 != 0) {
              pppppuVar16 = pppppuVar11;
              func_0x000107c5c5b4();
              func_0x000107c61180();
              if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de20);
                (*pcVar8)();
              }
              pppppuVar17 = pppppuVar16;
              func_0x000107c5c9d0();
              func_0x000107c61170(pppppuVar16);
              goto LAB_101a0d4cc;
            }
          }
          else {
            pppppuVar16 = pppppuVar14;
            func_0x000107c4f4ec();
            func_0x000107c61180();
            if (pppppuVar16 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de08);
              (*pcVar8)();
            }
            pppppuVar18 = pppppuVar16;
            func_0x000107c44430();
            func_0x000107c61180();
            func_0x000107c61170(pppppuVar16);
            if (pppppuVar18 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0de04);
              (*pcVar8)();
            }
            pppppuVar17 = pppppuVar18;
            func_0x000107c5bbe8();
            func_0x000107c61170(pppppuVar18);
            if ((long)pppppuVar17 < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0ddc0);
              (*pcVar8)();
            }
LAB_101a0d4cc:
            func_0x000107c60a40(&ppppuStack_110,pppppuVar17,1000);
            uVar20 = uStack_108 & 0xffffffff;
            ppuVar22 = (undefined **)ppppuStack_110;
            uVar28 = CONCAT71(uStack_ff,uStack_100);
            uVar32 = uStack_108 >> 0x20;
          }
          uVar3 = *(undefined8 *)(param_3 + 0x18);
          lVar27 = *(long *)(param_3 + 0x20);
          func_0x0001000a8868(param_3,uVar3);
          pppppuVar17 = (undefined8 *****)&pppuStack_a8;
          (**(code **)(lVar27 + 0x18))
                    (param_1,pppppuVar15,pppppuVar17,ppuVar22,uVar20 | uVar32 << 0x20,uVar28,uVar3,
                     lVar27);
          pppppuVar16 = pppppuVar17;
          func_0x000107c61170(pppppuVar14);
          func_0x000107c61170(pppppuVar15);
          func_0x000107c6142c(pppppuVar17);
          pppppuVar29 = (undefined8 *****)((long)pppppuVar29 + 1);
        } while (pppppuVar1 != pppppuVar13);
      }
      func_0x000107c6142c(pppppuVar12);
      if (((param_4 & 1) != 0) &&
         (pppppuVar14 = pppppuVar11, FUN_101a0fb10(), pppppuVar14 != (undefined8 *****)0x0)) {
        pppppuVar12 = pppppuVar14;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (pppppuVar12 == (undefined8 *****)0x0) {
          ppppuStack_110 = (undefined8 ****)0x0;
          uStack_108 = 0xe000000000000000;
          func_0x000107c602fc(0x2d);
          func_0x000107c6142c(uStack_108);
          ppppuStack_110 = (undefined8 *****)0xd00000000000002b;
          uStack_108 = 0x800000010efc8db0;
          pppppuVar23 = pppppuVar14;
          func_0x000107c4e920();
          uStack_f4 = SUB84(pppppuVar23,0);
          puVar21 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
          func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                              PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar21);
          unaff_x22 = uStack_108;
          pppppuVar23 = (undefined8 *****)ppppuStack_110;
          uStack_100 = 2;
          uVar10 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar10 != 0) {
            func_0x000101a058d8();
            func_0x000107c61658(&ppppuStack_110,&UNK_11042c930,uVar10);
          }
          func_0x000107c61170(pppppuVar11);
          func_0x000107c6142c(ppppuVar7);
          pppppuVar15 = pppppuVar14;
LAB_101a0dbe4:
          func_0x000107c61170(pppppuVar15);
          goto LAB_101a0dbf4;
        }
        func_0x000107c61170();
        pppppuVar12 = pppppuVar14;
        func_0x000107c4e920();
        lVar27 = *(long *)(unaff_x20 + 0x30);
        if ((*(long *)(lVar27 + 0x10) == 0) ||
           (func_0x00010149a22c(), ((ulong)pppppuVar16 & 1) == 0)) {
          ppppuStack_110 = (undefined8 ****)0x0;
          uStack_108 = 0xe000000000000000;
          func_0x000107c602fc(0x32);
          func_0x000107c6142c(uStack_108);
          ppppuStack_110 = (undefined8 *****)0xd000000000000030;
          uStack_108 = 0x800000010efc8de0;
          pppppuVar23 = pppppuVar14;
          func_0x000107c4e920();
          uStack_f4 = SUB84(pppppuVar23,0);
          puVar21 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
          func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                              PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar21);
          unaff_x22 = uStack_108;
          pppppuVar23 = (undefined8 *****)ppppuStack_110;
          uStack_100 = 1;
          uVar10 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar10 != 0) {
            func_0x000101a058d8();
            func_0x000107c61658(&ppppuStack_110,&UNK_11042c930,uVar10);
          }
          func_0x000107c61170(pppppuVar11);
          func_0x000107c6142c(ppppuVar7);
LAB_101a0dac8:
          func_0x000107c61170(pppppuVar14);
          goto LAB_101a0dbf4;
        }
        uVar28 = *(undefined8 *)(*(long *)(lVar27 + 0x38) + (long)pppppuVar12 * 8);
        pppppuVar16 = *(undefined8 ******)(param_3 + 0x18);
        ppuVar22 = *(undefined ***)(param_3 + 0x20);
        func_0x0001000a8868(param_3,pppppuVar16);
        pppuVar31 = (undefined8 ***)ppuVar22[5];
        func_0x000107c61174(uVar28);
        (*(code *)pppuVar31)();
        func_0x000107c61170(pppppuVar14);
        func_0x000107c61170(uVar28);
      }
      func_0x000107c61170(pppppuVar11);
    } while (pppppuVar30 != pppppuVar25);
  }
  func_0x000107c6142c(ppppuVar7);
  pppppuVar23 = (undefined8 *****)ppppuVar7;
LAB_101a0dbf4:
  auVar33._8_8_ = unaff_x22;
  auVar33._0_8_ = pppppuVar23;
  return auVar33;
}



/* Entry: 101a0de28; end: 101a0e3c7;  */

undefined1  [16] FUN_101a0de28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  ulong auStack_c0 [3];
  undefined1 auStack_a8 [56];
  ulong uStack_58;
  
  lVar13 = param_2;
  func_0x000107c5ce10();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e3c4);
    (*pcVar3)();
  }
  auStack_c0[0] = 0;
  uVar4 = 0;
  func_0x000101a1170c(0,0x112deb560,&PTR_PTR_1126bce88);
  func_0x000107c5fc4c(lVar13,auStack_c0,uVar4);
  uVar2 = auStack_c0[0];
  if (auStack_c0[0] == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e3c8);
    (*pcVar3)();
  }
  func_0x000107c61170(lVar13);
  uVar12 = uVar2 & 0xffffffffffffff8;
  if (uVar2 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    uVar14 = uVar2;
    if (-1 < (long)uVar2) {
      uVar14 = uVar12;
    }
    func_0x000107c60480();
  }
  func_0x000107c61428(unaff_x20 + 0x30,auStack_c0,0,0);
  lVar13 = unaff_x20;
  if (uVar14 != 0) {
    unaff_x24 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar12 + 0x10) <= unaff_x24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e3a4);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar2 + unaff_x24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = unaff_x24;
        func_0x000101a0fddc(unaff_x24,uVar2,&PTR_PTR_1126bce88,0x112deb560);
      }
      if (SCARRY8(unaff_x24,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e0d8);
        (*pcVar3)();
      }
      uVar15 = unaff_x24 + 1;
      uVar10 = 5;
      uVar6 = uVar5;
      FUN_101a0ec3c();
      if (uVar6 == 0) {
        lStack_d8 = 0;
        uStack_d0 = 0xe000000000000000;
        func_0x000107c602fc(0x40);
        func_0x000107c5fb78(0xd00000000000003e,0x800000010efc8cd0);
        uVar12 = uVar5;
        func_0x000107c4e928();
        func_0x000107c61180();
        uVar4 = 0x112deb570;
        uStack_58 = uVar12;
        func_0x0001000285a8(0x112deb570,&UNK_10d9b7798);
        func_0x000107c5fb18(&uStack_58,uVar4);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar4);
        unaff_x24 = uStack_d0;
        lVar13 = lStack_d8;
        uStack_c8 = 0;
        uVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          func_0x000101a058d8();
          func_0x000107c61658(&lStack_d8,&UNK_11042c930,uVar4);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar2);
        goto LAB_101a0e374;
      }
      uVar7 = uVar6;
      func_0x000107c4e920();
      lVar13 = *(long *)(unaff_x20 + 0x30);
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101a0e0e8:
        lStack_d8 = 0;
        uStack_d0 = 0xe000000000000000;
        func_0x000107c602fc(0x2d);
        func_0x000107c6142c(uStack_d0);
        lStack_d8 = -0x2fffffffffffffd5;
        uStack_d0 = 0x800000010efc8d10;
        uVar12 = uVar6;
        func_0x000107c4e920();
        uStack_58 = CONCAT44(uStack_58._4_4_,(int)uVar12);
        puVar11 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
        func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                            PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar11);
        unaff_x24 = uStack_d0;
        lVar13 = lStack_d8;
        uStack_c8 = 1;
        uVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          func_0x000101a058d8();
          func_0x000107c61658(&lStack_d8,&UNK_11042c930,uVar4);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar2);
        goto LAB_101a0e374;
      }
      func_0x00010149a22c();
      if ((uVar10 & 1) == 0) goto LAB_101a0e0e8;
      uVar4 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar7 * 8);
      func_0x000107c61174();
      uVar10 = uVar6;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar10 == 0) {
        lStack_d8 = 0;
        uStack_d0 = 0xe000000000000000;
        func_0x000107c602fc(0x24);
        func_0x000107c6142c(uStack_d0);
        lStack_d8 = -0x2fffffffffffffde;
        uStack_d0 = 0x800000010efc8d40;
        uVar12 = uVar6;
        func_0x000107c4e920();
        uStack_58 = CONCAT44(uStack_58._4_4_,(int)uVar12);
        puVar11 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
        func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                            PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar11);
        unaff_x24 = uStack_d0;
        lVar13 = lStack_d8;
        uStack_c8 = 2;
        uVar9 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar9 != 0) {
          func_0x000101a058d8();
          func_0x000107c61658(&lStack_d8,&UNK_11042c930,uVar9);
        }
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        goto LAB_101a0e374;
      }
      FUN_101a0e4e0(auStack_a8);
      FUN_101a1106c(param_2,uVar6);
      uVar7 = uVar6;
      uVar9 = param_1;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e3bc);
        (*pcVar3)();
      }
      uVar8 = uVar7;
      func_0x000107c44a34();
      func_0x000107c61170(uVar7);
      uVar16 = 0x3f800000;
      if ((int)uVar8 != 0) {
        uVar7 = uVar6;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0e3c0);
          (*pcVar3)();
        }
        uVar8 = uVar7;
        func_0x000107c4e958();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (uVar8 != 0) {
          func_0x000107c5b794(uVar8);
          func_0x000107c61170(uVar8);
          uVar16 = uVar9;
        }
      }
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      lVar1 = *(long *)(param_3 + 0x20);
      lVar13 = param_3;
      func_0x0001000a8868(param_3,uVar9);
      uVar7 = uVar6;
      FUN_101a0e3c8(uVar6);
      (**(code **)(lVar1 + 0x10))(param_1,uVar16,uVar4,auStack_a8,uVar7,uVar9,lVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar7);
      unaff_x24 = unaff_x24 + 1;
    } while (uVar15 != uVar14);
  }
  func_0x000107c6142c(uVar2);
LAB_101a0e374:
  auVar17._8_8_ = unaff_x24;
  auVar17._0_8_ = lVar13;
  return auVar17;
}



/* Entry: 101a0e3c8; end: 101a0e4df;  */

undefined * FUN_101a0e3c8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = param_1;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0e4dc);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c44bd0();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 != 0) {
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0e4e0);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5cf30();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c444cc();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5e304();
        if (((int)lVar4 != 0) && (lVar4 = lVar3, func_0x000107c44d98(), (int)lVar4 != 0)) {
          func_0x000107c5e304(lVar3);
          func_0x000107c44d98(lVar3);
          puVar5 = PTR_PTR_1126a8520;
          func_0x000107c610f8(PTR_PTR_1126a8520);
          func_0x000107c309a0();
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar2);
          return puVar5;
        }
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 101a0e4e0; end: 101a0ec3b;  */

void FUN_101a0e4e0(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  lVar17 = 0x112d7e680;
  uStack_f8 = param_2;
  lStack_b8 = param_3;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&lStack_110 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar10 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  lVar5 = 0x112d36580;
  lStack_108 = lVar9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_f0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c8 = lVar9 - extraout_x12_02;
  lVar5 = param_4;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec1c);
    (*pcVar14)();
  }
  lVar6 = lVar5;
  func_0x000107c44430();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec20);
    (*pcVar14)();
  }
  lVar5 = lVar6;
  func_0x000107c42378();
  func_0x000107c61170(lVar6);
  if (lVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec0c);
    (*pcVar14)();
  }
  uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_110 = lVar10;
  puStack_d0 = param_1;
  func_0x000107c60a40(&uStack_80,lVar5,1000);
  uStack_a0 = uStack_80;
  uStack_a8 = uStack_74;
  uStack_a4 = uStack_78;
  uStack_b0 = uStack_70;
  puVar7 = &uStack_80;
  uStack_e8 = uVar12;
  uStack_e0 = uVar2;
  uStack_dc = uVar1;
  uStack_d8 = uVar15;
  uStack_98 = uVar15;
  uStack_90 = uVar1;
  uStack_8c = uVar2;
  uStack_88 = uVar12;
  func_0x000107c60a38(puVar7,&uStack_98);
  uVar11 = uStack_f8;
  lVar5 = lStack_b8;
  if (((int)puVar7 == 0) &&
     (uVar8 = uStack_f8, func_0x000107c4c978(), lVar5 = lStack_b8, (int)uVar8 != 0)) {
    func_0x000107c4c978(uVar11);
    func_0x000107c60a40(&uStack_80,uVar11 & 0xffffffff,1000);
    uStack_a0 = uStack_80;
    uStack_a8 = uStack_74;
    uStack_a4 = uStack_78;
    uStack_b0 = uStack_70;
  }
  uVar11 = 3;
  FUN_101a0ec3c();
  lVar10 = lStack_c0;
  if (lVar5 != 0) {
    func_0x000107c61170(lVar5);
  }
  lVar6 = param_4;
  uStack_f8 = lVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec24);
    (*pcVar14)();
  }
  lVar13 = lVar6;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar5 = lStack_c8;
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec28);
    (*pcVar14)();
  }
  lVar6 = lVar13;
  func_0x000107c4c9b4(lVar13);
  func_0x000107c61170(lVar13);
  lVar13 = *(long *)(unaff_x20 + 0x38);
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) ||
     (func_0x000100f89a68(lVar6), lVar3 = lStack_110, (uVar11 & 1) == 0)) {
    uVar12 = 1;
  }
  else {
    (**(code **)(lVar10 + 0x10))
              (lStack_110,*(long *)(lVar13 + 0x38) + *(long *)(lVar10 + 0x48) * lVar6,lVar4);
    lVar6 = lStack_108;
    pcVar14 = *(code **)(lVar10 + 0x20);
    (*pcVar14)(lStack_108,lVar3,lVar4);
    (*pcVar14)(lVar5,lVar6,lVar4);
    uVar12 = 0;
  }
  pcVar14 = *(code **)(lVar10 + 0x38);
  (*pcVar14)(lVar5,uVar12,1,lVar4);
  (*pcVar14)(lVar9,1,1,lVar4);
  lVar17 = (long)*(int *)(lVar17 + 0x30);
  func_0x000101a11684(lVar5,lVar16,0x112d36580,&UNK_10d9016d0);
  func_0x000101a11684(lVar9,lVar16 + lVar17,0x112d36580,&UNK_10d9016d0);
  pcVar14 = *(code **)(lVar10 + 0x30);
  lVar6 = lVar16;
  (*pcVar14)(lVar16,1,lVar4);
  uVar11 = uStack_f0;
  if ((int)lVar6 == 1) {
    func_0x000101a116cc(lVar9,0x112d36580,&UNK_10d9016d0);
    func_0x000101a116cc(lVar5,0x112d36580,&UNK_10d9016d0);
    lVar17 = lVar16 + lVar17;
    (*pcVar14)(lVar17,1,lVar4);
    if ((int)lVar17 != 1) {
LAB_101a0e994:
      func_0x000101a116cc(lVar16,0x112d7e680,&UNK_10d95e350);
      goto LAB_101a0ea9c;
    }
    func_0x000101a116cc(lVar16,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000101a11684(lVar16,uStack_f0,0x112d36580,&UNK_10d9016d0);
    lVar6 = lVar16 + lVar17;
    (*pcVar14)(lVar6,1,lVar4);
    lVar13 = lStack_100;
    if ((int)lVar6 == 1) {
      func_0x000101a116cc(lVar9,0x112d36580,&UNK_10d9016d0);
      func_0x000101a116cc(lVar5,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar10 + 8))(uVar11,lVar4);
      goto LAB_101a0e994;
    }
    lVar6 = lStack_100;
    (**(code **)(lVar10 + 0x20))(lStack_100,lVar16 + lVar17,lVar4);
    func_0x000101553b98();
    uVar8 = uVar11;
    func_0x000107c5fab8(uVar11,lVar13,lVar4,lVar6);
    pcVar14 = *(code **)(lVar10 + 8);
    (*pcVar14)(lVar13,lVar4);
    func_0x000101a116cc(lVar9,0x112d36580,&UNK_10d9016d0);
    func_0x000101a116cc(lVar5,0x112d36580,&UNK_10d9016d0);
    (*pcVar14)(uVar11,lVar4);
    func_0x000101a116cc(lVar16,0x112d36580,&UNK_10d9016d0);
    if ((uVar8 & 1) == 0) goto LAB_101a0ea9c;
  }
  lVar17 = param_4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec2c);
    (*pcVar14)();
  }
  lVar5 = lVar17;
  func_0x000107c3e240();
  func_0x000107c61170(lVar17);
  if ((uStack_f8 == 0) || ((int)lVar5 != 5)) {
    lVar17 = param_4;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec30);
      (*pcVar14)();
    }
    lVar5 = lVar17;
    func_0x000107c5d04c();
    func_0x000107c61170(lVar17);
    lVar17 = lStack_b8;
    if (lVar5 == 0) {
      lVar5 = lStack_b8;
      func_0x000107c44be0();
      if ((int)lVar5 != 0) {
        func_0x000107c5d040();
        func_0x000107c61180();
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec38);
          (*pcVar14)();
        }
        lVar5 = lVar17;
        func_0x000107c5bbe8();
        func_0x000107c61170(lVar17);
        if (lVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec14);
          (*pcVar14)();
        }
        func_0x000107c60a40(&uStack_80,lVar5,1000);
        uVar15 = uStack_70;
        uVar2 = uStack_74;
        uVar1 = uStack_78;
        uVar12 = uStack_80;
        lVar17 = lStack_b8;
        func_0x000107c5d040();
        func_0x000107c61180();
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec3c);
          (*pcVar14)();
        }
        lVar5 = lVar17;
        func_0x000107c42378();
        func_0x000107c61170(lVar17);
        if (lVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec18);
          (*pcVar14)();
        }
        func_0x000107c60a40(&uStack_80,lVar5,1000);
        uStack_a0 = uStack_80;
        uStack_b0 = uStack_70;
        uStack_d8 = uVar12;
        uStack_e8 = uVar15;
        uStack_e0 = uVar2;
        uStack_dc = uVar1;
        uStack_a8 = uStack_74;
        uStack_a4 = uStack_78;
      }
    }
    else {
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (param_4 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec34);
        (*pcVar14)();
      }
      lVar17 = param_4;
      func_0x000107c5d04c();
      func_0x000107c61170(param_4);
      if (lVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0ec10);
        (*pcVar14)();
      }
      func_0x000107c60a40(&uStack_80,lVar17,1000);
      uStack_d8 = uStack_80;
      uStack_e8 = uStack_70;
      uStack_e0 = uStack_74;
      uStack_dc = uStack_78;
    }
  }
LAB_101a0ea9c:
  *puStack_d0 = uStack_d8;
  *(undefined4 *)(puStack_d0 + 1) = uStack_dc;
  *(undefined4 *)((long)puStack_d0 + 0xc) = uStack_e0;
  puStack_d0[2] = uStack_e8;
  puStack_d0[3] = uStack_a0;
  *(undefined4 *)(puStack_d0 + 4) = uStack_a4;
  *(undefined4 *)((long)puStack_d0 + 0x24) = uStack_a8;
  puStack_d0[5] = uStack_b0;
  return;
}



/* Entry: 101a0ec3c; end: 101a0ed43;  */

long FUN_101a0ec3c(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1;
  uVar5 = param_2;
  func_0x000107c4e92c();
  if (lVar2 != 0) {
    lVar7 = 0;
    do {
      lVar6 = param_1;
      func_0x000107c4e928();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0ed40);
        (*pcVar1)();
      }
      lVar3 = lVar6;
      func_0x000107c5dc14();
      func_0x000107c61170(lVar6);
      lVar6 = *(long *)(unaff_x20 + 0x28);
      if ((*(long *)(lVar6 + 0x10) != 0) && (func_0x00010149a22c(), (uVar5 & 1) != 0)) {
        lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + lVar3 * 8);
        func_0x000107c61174();
        lVar6 = lVar3;
        func_0x000107c4abb4();
        if ((int)lVar6 == 1) {
          lVar6 = lVar3;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0ed44);
            (*pcVar1)();
          }
          lVar4 = lVar6;
          func_0x000107c3e240();
          func_0x000107c61170(lVar6);
          if ((uint)lVar4 == param_2) {
            return lVar3;
          }
        }
        func_0x000107c61170(lVar3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
  }
  return 0;
}



/* Entry: 101a0ed44; end: 101a0edc7;  */

void FUN_101a0ed44(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0edc8,0,0);
  return;
}



/* Entry: 101a0edc8; end: 101a0f1b3;  */

void FUN_101a0edc8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long unaff_x22;
  
  iVar12 = (int)*(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c4abb4();
  if (iVar12 == 4) {
    lVar7 = *(long *)(unaff_x22 + 0x88);
    FUN_101a10e00();
    *(long *)(unaff_x22 + 0x110) = lVar7;
    if (lVar7 != 0) {
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x18);
      plVar11 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x118) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_101a0f5b8;
      plVar11[6] = lVar7;
      plVar11[7] = lVar13;
      pcVar14 = FUN_101a12a60;
      goto LAB_107c615e0;
    }
  }
  else if (iVar12 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1a0);
      (*pcVar14)();
    }
    lVar13 = lVar7;
    func_0x000107c3e240();
    func_0x000107c61170(lVar7);
    iVar12 = (int)lVar13;
    if (iVar12 < 6) {
      if (iVar12 != 2) {
        if (iVar12 == 5) {
          lVar7 = *(long *)(unaff_x22 + 0x88);
          func_0x000107c4c930();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1a8);
            (*pcVar14)();
          }
          lVar13 = lVar7;
          func_0x000107c4c99c();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1b0);
            (*pcVar14)();
          }
          lVar15 = *(long *)(unaff_x22 + 0x90);
          lVar7 = lVar13;
          func_0x000107c4c9b4(lVar13);
          func_0x000107c61170(lVar13);
          lVar13 = *(long *)(lVar15 + 0x38);
          if (((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) ||
             (func_0x000100f89a68(lVar7), (param_2 & 1) == 0)) {
            lVar7 = *(long *)(unaff_x22 + 0x88);
            lVar13 = *(long *)(unaff_x22 + 0x90);
            lVar15 = lVar7;
            func_0x000107c4e920();
            *(int *)(unaff_x22 + 0x130) = (int)lVar15;
            lVar13 = *(long *)(lVar13 + 0x18);
            func_0x000107c4c930();
            func_0x000107c61180();
            *(long *)(unaff_x22 + 200) = lVar7;
            if (lVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1b4);
              (*pcVar14)();
            }
            plVar11 = (long *)0x60;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xd0) = plVar11;
            *plVar11 = unaff_x22;
            plVar11[1] = (long)FUN_101a0f1b4;
            plVar11[5] = lVar7;
            plVar11[6] = lVar13;
            pcVar14 = FUN_101a122b8;
            goto LAB_107c615e0;
          }
          uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
          uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
          lVar15 = *(long *)(unaff_x22 + 0xa0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
          lVar6 = *(long *)(unaff_x22 + 0x90);
          (**(code **)(lVar15 + 0x10))
                    (uVar2,*(long *)(lVar13 + 0x38) + *(long *)(lVar15 + 0x48) * lVar7,uVar3);
          pcVar14 = *(code **)(lVar15 + 0x20);
          (*pcVar14)(uVar5,uVar2,uVar3);
          (*pcVar14)(uVar1,uVar5,uVar3);
          (*pcVar14)(uVar4,uVar1,uVar3);
          func_0x000107c4e920(uVar8);
          puVar9 = PTR_PTR_1126bf698;
          func_0x000107c61168(PTR_PTR_1126bf698);
          puVar10 = puVar9;
          func_0x000107c5ed90();
          func_0x000107c3e244(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61428(lVar6 + 0x30,unaff_x22 + 0x70,0x21,0);
          FUN_101a05d48(puVar9,uVar8);
          func_0x000107c614a8(unaff_x22 + 0x70);
          (**(code **)(lVar15 + 8))(uVar4,uVar3);
        }
        goto LAB_101a0f070;
      }
    }
    else {
      if (iVar12 == 6) {
        lVar7 = *(long *)(unaff_x22 + 0x88);
        lVar13 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x18);
        func_0x000107c4c930();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xf8) = lVar7;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1ac);
          (*pcVar14)();
        }
        plVar11 = (long *)0x30;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x100) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_101a0f484;
        plVar11[2] = lVar7;
        plVar11[3] = lVar13;
        pcVar14 = FUN_101a12f84;
        goto LAB_107c615e0;
      }
      if (iVar12 != 0xe) goto LAB_101a0f070;
    }
    lVar7 = *(long *)(unaff_x22 + 0x88);
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x18);
    func_0x000107c4c930();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xe0) = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x101a0f1a4);
      (*pcVar14)();
    }
    plVar11 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101a0f310;
    plVar11[6] = lVar7;
    plVar11[7] = lVar13;
    pcVar14 = FUN_101a12560;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar14,0,0);
    return;
  }
LAB_101a0f070:
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a0f0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f1b4; end: 101a0f253;  */

void FUN_101a0f1b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 200);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xd0));
  func_0x000107c61170(uVar1);
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0xb8);
    uVar2 = *(undefined8 *)(lVar5 + 0xa8);
    uVar3 = *(undefined8 *)(lVar5 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xc0));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a0f228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  *(undefined8 *)(lVar5 + 0xd8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0f254,0,0);
  return;
}



/* Entry: 101a0f254; end: 101a0f30f;  */

void FUN_101a0f254(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x130);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar5 + 0x30,unaff_x22 + 0x58,0x21,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  func_0x000107c61558(uVar2);
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  *(undefined8 *)(lVar5 + 0x30) = 0x8000000000000000;
  func_0x000101a1023c(uVar4,uVar1,uVar2);
  *(undefined8 *)(lVar5 + 0x30) = uVar3;
  func_0x000107c614a8(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a0f30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f310; end: 101a0f3af;  */

void FUN_101a0f310(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0xe0);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xe8));
  func_0x000107c61170(uVar1);
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0xb8);
    uVar2 = *(undefined8 *)(lVar5 + 0xa8);
    uVar3 = *(undefined8 *)(lVar5 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xc0));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a0f384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  *(undefined8 *)(lVar5 + 0xf0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0f3b0,0,0);
  return;
}



/* Entry: 101a0f3b0; end: 101a0f483;  */

void FUN_101a0f3b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c4e920(uVar2);
  func_0x000107c61428(lVar1 + 0x30,unaff_x22 + 0x40,0x21,0);
  func_0x000107c61174(uVar5);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  func_0x000107c61558(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0x8000000000000000;
  func_0x000101a1023c(uVar5,uVar2,uVar3);
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  func_0x000107c614a8(unaff_x22 + 0x40);
  func_0x000107c61170(uVar5);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101a0f480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f484; end: 101a0f523;  */

void FUN_101a0f484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0xf8);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x100));
  func_0x000107c61170(uVar1);
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0xb8);
    uVar2 = *(undefined8 *)(lVar5 + 0xa8);
    uVar3 = *(undefined8 *)(lVar5 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xc0));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a0f4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  *(undefined8 *)(lVar5 + 0x108) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0f524,0,0);
  return;
}



/* Entry: 101a0f524; end: 101a0f5b7;  */

void FUN_101a0f524(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c4e920(uVar3);
  func_0x000107c61428(lVar1 + 0x30,unaff_x22 + 0x28,0x21,0);
  FUN_101a05d48(uVar4,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a0f5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f5b8; end: 101a0f623;  */

void FUN_101a0f5b8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x128) = param_1;
    pcVar1 = FUN_101a0f624;
  }
  else {
    pcVar1 = FUN_101a0f704;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a0f624; end: 101a0f703;  */

void FUN_101a0f624(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c4e920(uVar2);
  func_0x000107c61428(lVar1 + 0x30,unaff_x22 + 0x10,0x21,0);
  func_0x000107c61174(uVar6);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  func_0x000107c61558(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0x8000000000000000;
  func_0x000101a1023c(uVar6,uVar2,uVar3);
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a0f700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f704; end: 101a0f763;  */

void FUN_101a0f704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a0f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a0f764; end: 101a0fb0f;  */

undefined * FUN_101a0f764(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0x112deb7e8;
  func_0x0001000285a8(0x112deb7e8,&UNK_10d9b78b8);
  puVar7 = (undefined *)0x0;
  func_0x000107c61538();
  FUN_101a10f34();
  uVar4 = param_1;
  func_0x000107c4e92c();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uVar4 == 0) ||
     (uVar4 = param_1, func_0x000107c4e92c(), puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8,
     uVar4 == 0)) {
LAB_101a0fac0:
    func_0x000107c6142c(lVar3);
    return puVar9;
  }
  uVar13 = 0;
LAB_101a0f7e0:
  uVar1 = uVar4;
  if (uVar4 <= uVar13) {
    uVar1 = uVar13;
  }
  do {
    if (uVar13 == uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0faf0);
      (*pcVar2)();
    }
    uVar10 = param_1;
    func_0x000107c4e928();
    func_0x000107c61180();
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0faf4);
      (*pcVar2)();
    }
    uVar13 = uVar13 + 1;
    uVar5 = uVar10;
    func_0x000107c5dc14();
    func_0x000107c61170(uVar10);
    lVar12 = *(long *)(unaff_x20 + 0x28);
    if ((*(long *)(lVar12 + 0x10) != 0) && (func_0x00010149a22c(), ((ulong)puVar7 & 1) != 0)) {
      uVar5 = *(ulong *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
      func_0x000107c61174();
      uVar10 = uVar5;
      func_0x000107c4abb4();
      if ((int)uVar10 == 1) {
        uVar10 = uVar5;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0faf8);
          (*pcVar2)();
        }
        uVar6 = uVar10;
        func_0x000107c3e240();
        func_0x000107c61170(uVar10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar3 + 0x28));
          uVar10 = uVar6;
          func_0x000107c6069c();
          func_0x000107c606a8();
          uVar11 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
          uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar3 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
            do {
              if (*(int *)(*(long *)(lVar3 + 0x30) + uVar10 * 4) == (int)uVar6) goto LAB_101a0fa08;
              uVar10 = uVar10 + 1 & ~uVar11;
            } while ((*(ulong *)(lVar3 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
          }
        }
      }
      uVar10 = uVar5;
      func_0x000107c4abb4();
      if ((int)uVar10 == 4) {
        uVar10 = uVar5;
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fb04);
          (*pcVar2)();
        }
        uVar6 = uVar10;
        func_0x000107c4a764();
        func_0x000107c61180();
        func_0x000107c61170(uVar10);
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fb00);
          (*pcVar2)();
        }
        uVar10 = uVar6;
        func_0x000107c42924();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fafc);
          (*pcVar2)();
        }
        uVar6 = uVar10;
        func_0x000107c42930();
        func_0x000107c61170(uVar10);
        if ((int)uVar6 == 7) {
          uVar10 = uVar5;
          func_0x000107c40dc8();
          func_0x000107c61180();
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fb10);
            (*pcVar2)();
          }
          uVar6 = uVar10;
          func_0x000107c4a764();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fb0c);
            (*pcVar2)();
          }
          uVar10 = uVar6;
          func_0x000107c42924();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a0fb08);
            (*pcVar2)();
          }
          uVar6 = uVar10;
          func_0x000107c4d2a4();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (uVar6 != 0) break;
        }
      }
      func_0x000107c61170(uVar5);
    }
    if (uVar13 == uVar4) goto LAB_101a0fac0;
  } while( true );
  func_0x000107c61170(uVar6);
LAB_101a0fa08:
  puVar8 = puVar9;
  func_0x000107c61550();
  if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar7 = puVar9;
      }
      func_0x000107c60480();
    }
    puVar7 = puVar7 + 1;
    puVar8 = (undefined *)0x0;
    FUN_101a10584(0,puVar7,1,puVar9);
    puVar9 = puVar8;
  }
  uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar10 + 0x10);
  puVar8 = (undefined *)(uVar1 + 1);
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    puVar7 = puVar8;
    FUN_101a10584(puVar9,puVar8,1);
    uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
  }
  *(undefined **)(uVar10 + 0x10) = puVar8;
  *(ulong *)(uVar10 + uVar1 * 8 + 0x20) = uVar5;
  if (uVar13 == uVar4) goto LAB_101a0fac0;
  goto LAB_101a0f7e0;
}



/* Entry: 101a0fb10; end: 101a0fc1f;  */

long FUN_101a0fb10(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x000107c4e92c();
  if ((lVar2 != 0) && (lVar2 = param_1, func_0x000107c4e92c(), lVar2 != 0)) {
    lVar6 = 0;
    do {
      lVar5 = param_1;
      func_0x000107c4e928();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0fc1c);
        (*pcVar1)();
      }
      lVar3 = lVar5;
      func_0x000107c5dc14();
      func_0x000107c61170(lVar5);
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if ((*(long *)(lVar5 + 0x10) != 0) && (func_0x00010149a22c(), (param_2 & 1) != 0)) {
        lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + lVar3 * 8);
        func_0x000107c61174();
        lVar5 = lVar3;
        func_0x000107c4abb4();
        if ((int)lVar5 == 1) {
          lVar5 = lVar3;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0fc20);
            (*pcVar1)();
          }
          lVar4 = lVar5;
          func_0x000107c3e240();
          func_0x000107c61170(lVar5);
          if ((int)lVar4 == 6) {
            return lVar3;
          }
        }
        func_0x000107c61170(lVar3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  return 0;
}



/* Entry: 101a0fc20; end: 101a0fcbb;  */

void FUN_101a0fc20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101a0fcbc; end: 101a0fcdf;  */

void FUN_101a0fcbc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d555a0;
  plVar5 = (long *)&UNK_10d9b78c0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a0fce0; end: 101a0ff97;  */

void FUN_101a0fce0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000101a1170c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101a0ff98; end: 101a10133;  */

ulong FUN_101a0ff98(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a10068);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1006c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103fb0314(0);
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
    func_0x000103fb0314(0);
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
  func_0x000107c5fb78(0xd000000000000015,0x800000010efc8d70);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a10134);
  (*pcVar2)();
}



/* Entry: 101a10134; end: 101a1036b;  */

long FUN_101a10134(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000100f89a68();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10208);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_101a148a0(lVar4);
    uVar2 = param_2;
    func_0x000100f89a68();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a101c4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101a14070();
    lVar4 = *unaff_x20;
    goto joined_r0x000101a1021c;
  }
  lVar4 = *unaff_x20;
joined_r0x000101a1021c:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    FUN_101a0782c();
    lVar5 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2;
    lVar4 = 0;
    FUN_101a0782c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(lVar5,param_1,lVar4);
    return lVar5;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  lVar7 = *(long *)(lVar4 + 0x38);
  lVar5 = 0;
  FUN_101a0782c();
  func_0x000101a07edc(param_1,lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar2);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0fddc);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return param_1;
}



/* Entry: 101a1036c; end: 101a104e3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101a1036c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  
  lVar11 = *unaff_x20;
  uVar5 = param_5;
  uVar6 = param_2;
  func_0x00010149a22c();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar10 = (ulong)~(uint)uVar6 & 1;
  lVar9 = lVar8 + uVar10;
  if (SCARRY8(lVar8,uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a10468);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar9) {
    param_6 = param_6 & 1;
    func_0x000101a150e8(lVar9);
    uVar5 = param_5;
    func_0x00010149a22c();
    if (((uint)uVar6 & 1) != (param_6 & 1)) {
      func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a10410);
      (*pcVar4)();
    }
  }
  else if ((param_6 & 1) == 0) {
    FUN_101a145b8();
    lVar9 = *unaff_x20;
    goto joined_r0x000101a1047c;
  }
  lVar9 = *unaff_x20;
joined_r0x000101a1047c:
  if ((uVar6 & 1) == 0) {
    lVar8 = lVar9 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    *(int *)(*(long *)(lVar9 + 0x30) + uVar5 * 4) = (int)param_5;
    puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar5 * 0x20);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    if (!SCARRY8(*(long *)(lVar9 + 0x10),1)) {
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a104e4);
    (*pcVar4)();
  }
  puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar5 * 0x20);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (0xe < uVar6 >> 0x3c) {
    return;
  }
  uVar7 = (uint)(uVar6 >> 0x3e);
  if (uVar7 == 1) {
    uVar5 = uVar6 & 0x3fffffffffffffff;
  }
  else if (uVar7 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar5);
  return;
}



/* Entry: 101a104e4; end: 101a10583;  */

undefined * FUN_101a104e4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d55598;
    FUN_101a0fce0(0x112d55598,&PTR_PTR_1126b25d0,0x112d555a0,&UNK_10d9b78c0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101a10584; end: 101a107c3;  */

ulong FUN_101a10584(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a106ac);
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
  FUN_101a104e4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a106a8);
      (*pcVar1)();
    }
    func_0x000101a106ac(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101a107c4; end: 101a10aab;  */

undefined * FUN_101a107c4(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar9 = 0x112deb7f8;
  func_0x0001000285a8(0x112deb7f8,&UNK_10d9b78d8);
  lVar10 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112deb800,&UNK_10d9b78e0);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar9 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar10 + 0x48);
    do {
      puVar5 = puVar7;
      func_0x000101a11684(param_1,puVar7,0x112deb7f8,&UNK_10d9b78d8);
      uVar11 = *puVar7;
      uVar4 = uVar11;
      func_0x000100f89a68();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a10930);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar11;
      lVar12 = *(long *)(puVar3 + 0x38);
      lVar10 = 0;
      FUN_101a0782c();
      func_0x000101a07edc((undefined1 *)((long)puVar7 + (long)iVar1),
                          lVar12 + *(long *)(*(long *)(lVar10 + -8) + 0x48) * uVar4);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a10934);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar9;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 101a10aac; end: 101a10ad3;  */

undefined * FUN_101a10aac(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar4 = 0;
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112deb7b0);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  func_0x00010149a22c();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(int *)(*(long *)(puVar2 + 0x30) + uVar3 * 4) = (int)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10bd8);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar8 = (ulong)*(uint *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c61174();
      uVar3 = uVar8;
      func_0x00010149a22c();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10ba8);
  (*pcVar1)();
}



/* Entry: 101a10ad4; end: 101a10bd7;  */

undefined * FUN_101a10ad4(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(param_2);
  puVar2 = puVar6;
  func_0x000107c60498();
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar7;
  func_0x00010149a22c();
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(int *)(*(long *)(puVar2 + 0x30) + uVar3 * 4) = (int)uVar7;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10bd8);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar7 = (ulong)*(uint *)(puVar4 + -1);
      uVar8 = *puVar4;
      func_0x000107c61174();
      uVar3 = uVar7;
      func_0x00010149a22c();
      puVar4 = puVar4 + 2;
    } while ((param_3 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10ba8);
  (*pcVar1)();
}



/* Entry: 101a10bd8; end: 101a10cfb;  */

undefined * FUN_101a10bd8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar7 = 0;
  func_0x0001000285a8(0x112deb820);
  puVar4 = puVar8;
  func_0x000107c60498();
  uVar12 = (ulong)*(uint *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar11 = *(ulong *)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar6 = *(ulong *)(param_1 + 0x40);
  uVar5 = uVar12;
  func_0x00010149a22c();
  if ((uVar7 & 1) == 0) {
    puVar13 = (ulong *)(param_1 + 0x68);
    do {
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(int *)(*(long *)(puVar4 + 0x30) + uVar5 * 4) = (int)uVar12;
      puVar1 = (ulong *)(*(long *)(puVar4 + 0x38) + uVar5 * 0x20);
      *puVar1 = uVar9;
      puVar1[1] = uVar11;
      puVar1[2] = uVar10;
      puVar1[3] = uVar6;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a10cfc);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar9);
      func_0x000100de78a0(uVar10);
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        return puVar4;
      }
      uVar12 = (ulong)(uint)puVar13[-4];
      uVar9 = puVar13[-3];
      uVar11 = puVar13[-2];
      uVar10 = puVar13[-1];
      uVar7 = *puVar13;
      uVar5 = uVar12;
      func_0x00010149a22c();
      uVar2 = uVar6 & 1;
      uVar6 = uVar7;
      puVar13 = puVar13 + 5;
    } while (uVar2 == 0);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a10cd0);
  (*pcVar3)();
}



/* Entry: 101a10cfc; end: 101a10dff;  */

undefined * FUN_101a10cfc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112deb808);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  func_0x000100f89a68();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10e00);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      func_0x000100f89a68();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10dd0);
  (*pcVar1)();
}



/* Entry: 101a10e00; end: 101a10f33;  */

long FUN_101a10e00(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar2 == 4) {
    lVar2 = param_1;
    func_0x000107c40dc8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f20);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4a764();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f24);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f28);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c42930();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 == 7) {
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f2c);
        (*pcVar1)();
      }
      lVar2 = param_1;
      func_0x000107c4a764();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c42924();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c4d2a4(lVar3);
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          return lVar2;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f34);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a10f30);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Entry: 101a10f34; end: 101a1106b;  */

undefined * FUN_101a10f34(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112deb7f0,&UNK_10d9b78d0);
    puVar3 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + (long)puVar11 * 4);
      uVar10 = (ulong)uVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      func_0x000107c6069c();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar10 & 0x3f);
      lVar4 = *(long *)(puVar3 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(uint *)(lVar4 + uVar10 * 4) == uVar1) goto LAB_101a10fb8;
          uVar10 = uVar10 + 1 & ~uVar8;
          uVar5 = uVar10 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar10 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(uint *)(lVar4 + uVar10 * 4) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a1106c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_101a10fb8:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 101a1106c; end: 101a11137;  */

ulong FUN_101a1106c(int param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c5ce30();
  lVar3 = param_2;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11130);
    (*pcVar2)();
  }
  uVar5 = 0;
  uVar1 = 0x3f800000;
  if (1 < param_1 - 1U) {
    uVar1 = 0;
  }
  lVar4 = lVar3;
  func_0x000107c44740();
  func_0x000107c61170(lVar3);
  uVar6 = (ulong)uVar1;
  if ((int)lVar4 != 0) {
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11134);
      (*pcVar2)();
    }
    lVar3 = param_2;
    func_0x000107c3e404();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11138);
      (*pcVar2)();
    }
    func_0x000107c5dc0c(lVar3);
    func_0x000107c61170(lVar3);
    uVar6 = uVar5;
  }
  return uVar6;
}



/* Entry: 101a11138; end: 101a1142f;  */

bool FUN_101a11138(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112d0);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112d4);
    (*pcVar2)();
  }
  uStack_68 = 0;
  uVar4 = 0;
  func_0x000101a1170c(0,0x112d55598,&PTR_PTR_1126b25d0);
  func_0x000107c5fc4c(lVar3,&uStack_68,uVar4);
  uVar1 = uStack_68;
  if (uStack_68 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112d8);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar3);
  uVar10 = uVar1 & 0xffffffffffffff8;
  if (uVar1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar9 = uVar1;
    if (-1 < (long)uVar1) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    if (uVar9 == uVar8) break;
    if ((uVar1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112b4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(uVar1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar8;
      func_0x000101a0fddc(uVar8,uVar1,&PTR_PTR_1126b25d0,0x112d55598);
    }
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112b0);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a112cc);
      (*pcVar2)();
    }
    uVar7 = uVar6;
    func_0x000107c3e240();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    uVar5 = uVar8 + 1;
  } while ((int)uVar7 != 3);
  func_0x000107c6142c(uVar1);
  return uVar9 != uVar8;
}



/* Entry: 101a11430; end: 101a1144f;  */

void FUN_101a11430(void)

{
  func_0x000107c61168(&PTR_PTR_112deb5b8);
  return;
}



/* Entry: 101a11450; end: 101a1148f;  */

void FUN_101a11450(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 101a11490; end: 101a1152b;  */

undefined8 * FUN_101a11490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101a11450(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101a1152c; end: 101a1156f;  */

undefined8 * FUN_101a1152c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101a11478(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101a11570; end: 101a1163f;  */

int FUN_101a11570(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101a11640; end: 101a1174b;  */

undefined8 FUN_101a11640(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101a0782c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101a1174c; end: 101a11753;  */

undefined8 * FUN_101a1174c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101a11450(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101a11754; end: 101a11a73;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101a11754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  long unaff_x20;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuStack_68;
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined1 *)(unaff_x20 + 0x38) = param_6;
  pppppppuVar3 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a10cfc();
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  lVar14 = param_1;
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar4 = lVar14;
  func_0x000107c4ca10();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11a60);
    (*pcVar2)();
  }
  pppppppuStack_68 = (undefined8 *******)0x0;
  uVar5 = 0;
  func_0x0001012e2f20(0);
  pppppppuVar9 = &pppppppuStack_68;
  func_0x000107c5fc4c(lVar4,pppppppuVar9,uVar5);
  pppppppuVar1 = pppppppuStack_68;
  if (pppppppuStack_68 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11a64);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar4);
  pppppppuVar11 = (undefined8 *******)((ulong)pppppppuVar1 & 0xffffffffffffff8);
  if ((ulong)pppppppuVar1 >> 0x3e == 0) {
    pppppppuVar16 = (undefined8 *******)pppppppuVar11[2];
  }
  else {
    pppppppuVar16 = pppppppuVar1;
    if (-1 < (long)pppppppuVar1) {
      pppppppuVar16 = pppppppuVar11;
    }
    func_0x000107c60480();
  }
  if (pppppppuVar16 != (undefined8 *******)0x0) {
    lVar14 = 4;
    do {
      ppppppuVar12 = (undefined8 ******)(lVar14 + -4);
      if (((ulong)pppppppuVar1 & 0xc000000000000001) == 0) {
        if (pppppppuVar11[2] <= ppppppuVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a119ec);
          (*pcVar2)();
        }
        ppppppuVar6 = pppppppuVar1[lVar14];
        func_0x000107c61174();
      }
      else {
        ppppppuVar6 = ppppppuVar12;
        pppppppuVar9 = pppppppuVar1;
        func_0x000100fb10dc();
      }
      if (SCARRY8((long)ppppppuVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a119e0);
        (*pcVar2)();
      }
      pppppppuVar13 = (undefined8 *******)(lVar14 + -3);
      ppppppuVar7 = ppppppuVar6;
      func_0x000107c4c9b4();
      func_0x000107c61174();
      pppppppuVar8 = pppppppuVar3;
      func_0x000107c61558();
      ppppppuVar12 = ppppppuVar7;
      pppppppuStack_68 = pppppppuVar3;
      func_0x000100f89a68();
      uVar10 = (ulong)~(uint)pppppppuVar9 & 1;
      if (SCARRY8((long)pppppppuVar3[2],uVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a119e4);
        (*pcVar2)();
      }
      if ((long)pppppppuVar3[3] < (long)((long)pppppppuVar3[2] + uVar10)) {
        func_0x000101a1538c();
        ppppppuVar12 = ppppppuVar7;
        func_0x000100f89a68();
        if (((uint)pppppppuVar9 & 1) != ((uint)pppppppuVar8 & 1)) {
          func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a11a74);
          (*pcVar2)();
        }
joined_r0x000101a119d4:
        uVar10 = (ulong)pppppppuVar9 & 1;
        pppppppuVar9 = pppppppuVar8;
        if (uVar10 != 0) goto LAB_101a11878;
LAB_101a11980:
        pppppppuVar3 = pppppppuStack_68;
        pppppppuStack_68[((ulong)ppppppuVar12 >> 6) + 8] =
             (undefined8 ******)
             ((ulong)pppppppuStack_68[((ulong)ppppppuVar12 >> 6) + 8] |
             1L << ((ulong)ppppppuVar12 & 0x3f));
        pppppppuStack_68[6][(long)ppppppuVar12] = ppppppuVar7;
        pppppppuStack_68[7][(long)ppppppuVar12] = ppppppuVar6;
        func_0x000107c61170(ppppppuVar6);
        if (SCARRY8((long)pppppppuVar3[2],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a119e8);
          (*pcVar2)();
        }
        pppppppuVar3[2] = (undefined8 ******)((long)pppppppuVar3[2] + 1);
        pppppppuVar9 = pppppppuVar8;
      }
      else {
        if (((ulong)pppppppuVar8 & 1) == 0) {
          pppppppuVar8 = pppppppuVar9;
          FUN_101a14744();
          goto joined_r0x000101a119d4;
        }
        pppppppuVar8 = pppppppuVar9;
        if (((ulong)pppppppuVar9 & 1) == 0) goto LAB_101a11980;
LAB_101a11878:
        pppppppuVar3 = pppppppuStack_68;
        pppppuVar15 = pppppppuStack_68[7][(long)ppppppuVar12];
        pppppppuStack_68[7][(long)ppppppuVar12] = ppppppuVar6;
        func_0x000107c61170(ppppppuVar6);
        func_0x000107c61170(pppppuVar15);
      }
      lVar14 = lVar14 + 1;
    } while (pppppppuVar13 != pppppppuVar16);
  }
  func_0x000107c61574(param_5);
  func_0x000107c6142c(pppppppuVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  *(undefined8 ********)(unaff_x20 + 0x40) = pppppppuVar3;
  return;
}



/* Entry: 101a11a74; end: 101a11a8b;  */

void FUN_101a11a74(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a11a8c,0,0);
  return;
}



/* Entry: 101a11a8c; end: 101a11bd3;  */

void FUN_101a11a8c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x60) + 0x18);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x68) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101a11bd4;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_101a11c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efc8ee0);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc8fd0);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101a11bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a11bd4; end: 101a11c4b;  */

void FUN_101a11bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a11c14,0,0);
  return;
}



/* Entry: 101a11c4c; end: 101a11d9f;  */

void FUN_101a11c4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    func_0x000107c5b198(uVar2);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar3);
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_11042c980;
    func_0x000107c613fc(&UNK_11042c980,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    pcStack_50 = FUN_101a159c0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101a11da0;
    puStack_58 = &UNK_11042c998;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c507b4(param_2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a11da0);
  (*pcVar1)();
}


