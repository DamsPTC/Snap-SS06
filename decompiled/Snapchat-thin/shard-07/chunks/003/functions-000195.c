/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10538dde0; end: 10538dde3;  */

undefined8 * FUN_10538dde0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f3a0;
  FUN_10538ce4c(param_1 + 6);
  func_0x000100450be4(param_1 + 3);
  func_0x00010538df24(param_1 + 1);
  return param_1;
}



/* Entry: 10538dde4; end: 10538de13;  */

void FUN_10538dde4(void)

{
  func_0x00010538dee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538de14; end: 10538de3b;  */

long FUN_10538de14(long param_1)

{
  long lStack_28;
  
  FUN_10538ce4c(param_1 + 0x28);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10538de3c; end: 10538de6f;  */

void FUN_10538de3c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10538de14();
  }
  return;
}



/* Entry: 10538de70; end: 10538df4b;  */

undefined8 * FUN_10538de70(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11087f320;
  FUN_10538ce4c(param_1 + 2);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10538df4c; end: 10538df4f;  */

void FUN_10538df4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f450;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10538df50; end: 10538df63;  */

void FUN_10538df50(void)

{
  func_0x00010538df6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538df64; end: 10538df7b;  */

void FUN_10538df64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538df7c; end: 10538df8f;  */

void FUN_10538df7c(void)

{
  func_0x00010538df9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538df90; end: 10538dfab;  */

void FUN_10538df90(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10538dfac; end: 10538dfbf;  */

void FUN_10538dfac(void)

{
  func_0x00010538dfc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10538dfc0; end: 10538dfd3;  */

void FUN_10538dfc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010538e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10538dfd4; end: 10538e023;  */

long FUN_10538dfd4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10538e024; end: 10538e0bb;  */

void FUN_10538e024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10538e0bc; end: 10538e127;  */

void FUN_10538e0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010538fd7c();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x00010538fd7c(param_3);
  FUN_10538e190(param_1,&uStack_40,param_3,uVar1);
  func_0x00010538fee8(uStack_28);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(extraout_x8_00,param_1);
  FUN_10538e0bc(extraout_x8_00,"+","-");
  FUN_10538e0bc(extraout_x8_00,"/","_");
  return;
}



/* Entry: 10538e128; end: 10538e18f;  */

void FUN_10538e128(undefined8 param_1,undefined8 param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2);
  FUN_10538e0bc(param_1,"+","-");
  FUN_10538e0bc(param_1,"/","_");
  return;
}



/* Entry: 10538e190; end: 10538e233;  */

undefined1  [16] FUN_10538e190(long *param_1,undefined8 *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char *pcVar10;
  char *pcVar11;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  char *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar8 = (char *)&uStack_50;
  plVar5 = param_1;
  func_0x00010538fee8(param_2);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  cVar4 = *(char *)((long)plVar5 + 0x17);
  plVar7 = (long *)*plVar5;
  if (-1 < (long)cVar4) {
    plVar7 = plVar5;
  }
  lVar1 = plVar5[1];
  if (-1 < cVar4) {
    lVar1 = (long)cVar4;
  }
  lVar6 = extraout_x8;
  uStack_38 = extraout_x9;
  FUN_10538e298(extraout_x8,plVar7,(long)plVar7 + lVar1);
  FUN_10538e234();
  func_0x00010538fee8(uStack_38);
  if (extraout_x9_00 == extraout_x8_00) {
    auVar15._8_8_ = pcVar8;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar9 = (char *)&uStack_80;
  pcStack_58 = FUN_10538e234;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((long *)lVar6 != plVar7) {
    uStack_78 = *(undefined8 *)(pcVar8 + 8);
    uStack_80 = *(undefined8 *)pcVar8;
    uStack_70 = *(undefined8 *)(pcVar8 + 0x10);
    FUN_10538e2f8();
    pcVar8 = pcVar9;
  }
  func_0x00010538fee8(uStack_68);
  if (extraout_x9_01 == extraout_x8_01) {
    auVar13._8_8_ = pcVar8;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  for (; pcVar9 = param_3, pcVar11 = param_3, pcVar8 != param_3; pcVar8 = pcVar8 + 1) {
    pcVar2 = (char *)param_1[1];
    pcVar10 = pcVar8;
    pcVar12 = (char *)*param_1;
    if ((char *)*param_1 == pcVar2) break;
    do {
      if (pcVar10 == param_3 || pcVar12 == pcVar2) {
        pcVar9 = pcVar8;
        pcVar11 = pcVar10;
        if (pcVar12 == pcVar2) goto LAB_10538e2e4;
        break;
      }
      cVar4 = *pcVar10;
      cVar3 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 == cVar3);
  }
LAB_10538e2e4:
  auVar14._8_8_ = pcVar11;
  auVar14._0_8_ = pcVar9;
  return auVar14;
}



/* Entry: 10538e234; end: 10538e297;  */

undefined1  [16]
FUN_10538e234(long *param_1,char *param_2,char *param_3,undefined8 param_4,long param_5,long param_6
             )

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long extraout_x8;
  char *pcVar5;
  char *pcVar6;
  long extraout_x9;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pcVar4 = (char *)&uStack_30;
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 != param_6) {
    uStack_28 = *(undefined8 *)(param_2 + 8);
    uStack_30 = *(undefined8 *)param_2;
    uStack_20 = *(undefined8 *)(param_2 + 0x10);
    FUN_10538e2f8();
    param_2 = pcVar4;
  }
  func_0x00010538fee8(uStack_18);
  if (extraout_x9 == extraout_x8) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  ___stack_chk_fail();
  for (; pcVar4 = param_3, pcVar6 = param_3, param_2 != param_3; param_2 = param_2 + 1) {
    pcVar1 = (char *)param_1[1];
    pcVar5 = param_2;
    pcVar7 = (char *)*param_1;
    if ((char *)*param_1 == pcVar1) break;
    do {
      if (pcVar5 == param_3 || pcVar7 == pcVar1) {
        pcVar4 = param_2;
        pcVar6 = pcVar5;
        if (pcVar7 == pcVar1) goto LAB_10538e2e4;
        break;
      }
      cVar2 = *pcVar5;
      cVar3 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 == cVar3);
  }
LAB_10538e2e4:
  auVar9._8_8_ = pcVar6;
  auVar9._0_8_ = pcVar4;
  return auVar9;
}



/* Entry: 10538e298; end: 10538e2f7;  */

undefined1  [16] FUN_10538e298(long *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  for (; pcVar4 = param_3, pcVar6 = param_3, param_2 != param_3; param_2 = param_2 + 1) {
    pcVar1 = (char *)param_1[1];
    pcVar5 = param_2;
    pcVar7 = (char *)*param_1;
    if ((char *)*param_1 == pcVar1) break;
    do {
      if (pcVar5 == param_3 || pcVar7 == pcVar1) {
        pcVar4 = param_2;
        pcVar6 = pcVar5;
        if (pcVar7 == pcVar1) goto LAB_10538e2e4;
        break;
      }
      cVar2 = *pcVar5;
      cVar3 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 == cVar3);
  }
LAB_10538e2e4:
  auVar8._8_8_ = pcVar6;
  auVar8._0_8_ = pcVar4;
  return auVar8;
}



/* Entry: 10538e2f8; end: 10538e7e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10538e2f8(long ******param_1,long ******param_2,long param_3,undefined1 *param_4,
                  long ******param_5,long ******param_6,long param_7,undefined1 *param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  long *****ppppplVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long *extraout_x8;
  long *******ppppppplVar17;
  undefined1 *puVar18;
  long extraout_x8_00;
  long *******extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x9;
  long *******ppppppplVar19;
  long *******extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long ******pppppplStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long lStack_b8;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long ******pppppplStack_90;
  undefined1 uStack_81;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  uStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  ppppppplStack_c0 = (long *******)0x0;
  pppppplVar9 = (long ******)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    pppppplVar9 = param_1;
  }
  lStack_d8 = 0;
  pppppplStack_e0 = (long ******)0x0;
  pppppplVar15 = pppppplVar9;
  while (pppppplVar16 = param_6, uVar8 = param_5 == pppppplVar16, !(bool)uVar8) {
    pppppplVar13 = (long ******)&pppppplStack_e0;
    pppppplVar14 = param_1;
    FUN_10538e7e4(pppppplVar13,param_1,pppppplVar9,pppppplVar15);
    pppppplVar9 = pppppplVar13;
    func_0x000105390090();
    pppppplStack_98 = pppppplVar9;
    pppppplStack_90 = pppppplVar14;
    func_0x00010539003c();
    if ((bool)uVar8) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = *extraout_x8 + (extraout_x9 & 0xfff);
    }
    ppppppplVar10 = &pppppplStack_98;
    FUN_10538ef24(ppppppplVar10,auStack_80);
    ppppppplVar23 = (long *******)(param_8 + -param_7);
    if (ppppppplVar10 < (long *******)(lStack_b8 - (long)ppppppplVar10)) {
      if (ppppppplStack_c0 <= ppppppplVar23 && (long)ppppppplVar23 - (long)ppppppplStack_c0 != 0) {
        FUN_10538ef40(&pppppplStack_e0,(long)ppppppplVar23 - (long)ppppppplStack_c0);
      }
      ppppppplVar11 = (long *******)(lStack_d8 + ((ulong)ppppppplStack_c0 >> 0xc) * 8);
      if (lStack_d0 == lStack_d8) {
        ppppppplVar22 = (long *******)0x0;
      }
      else {
        ppppppplVar22 = (long *******)((long)*ppppppplVar11 + ((ulong)ppppppplStack_c0 & 0xfff));
      }
      cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar10);
      lVar4 = (long)ppppppplVar23 - (long)ppppppplVar10;
      uVar8 = lVar4 == 0;
      ppppppplStack_a8 = ppppppplVar11;
      lVar5 = param_7;
      ppppppplStack_a0 = ppppppplVar22;
      if (ppppppplVar10 <= ppppppplVar23 && !(bool)uVar8) {
        lVar20 = (long)param_8 - (long)ppppppplVar10;
        lVar5 = (long)param_8 - (long)ppppppplVar10;
        if ((long *******)((ulong)ppppppplVar23 >> 1) <= ppppppplVar10) {
          lVar20 = param_7 + lVar4;
          lVar5 = param_7 + lVar4;
        }
        while( true ) {
          cVar6 = SBORROW8(lVar20,param_7);
          lVar4 = lVar20 - param_7;
          if (lVar20 == param_7) break;
          if (ppppppplVar22 == (long *******)*ppppppplVar11) {
            ppppppplVar11 = ppppppplVar11 + -1;
            ppppppplVar22 = (long *******)(*ppppppplVar11 + 0x200);
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + -1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)(lVar20 + -1);
          func_0x0001053900ec();
          lVar20 = extraout_x8_00;
        }
        uVar8 = true;
        ppppppplVar23 = ppppppplVar10;
      }
      cVar7 = lVar4 < 0;
      if (ppppppplVar23 != (long *******)0x0) {
        ppppppplVar17 = (long *******)&ppppppplStack_a8;
        ppppppplVar19 = ppppppplVar23;
        FUN_10538f19c();
        ppppppplVar21 = ppppppplVar17;
        ppppppplVar12 = ppppppplVar19;
        while (ppppppplVar12 != ppppppplStack_a0) {
          if (ppppppplVar22 == (long *******)*ppppppplVar11) {
            ppppppplVar11 = ppppppplVar11 + -1;
            ppppppplVar22 = (long *******)(*ppppppplVar11 + 0x200);
          }
          if (ppppppplVar12 == (long *******)*ppppppplVar21) {
            ppppppplVar12 = (long *******)(ppppppplVar21[-1] + 0x200);
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + -1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)((long)ppppppplVar12 + -1);
          func_0x0001053900ec();
          ppppppplVar21 = extraout_x8_01;
          ppppppplVar12 = extraout_x9_00;
        }
        cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar10);
        cVar7 = (long)ppppppplVar23 - (long)ppppppplVar10 < 0;
        uVar8 = ppppppplVar23 == ppppppplVar10;
        if (ppppppplVar23 < ppppppplVar10) {
          ppppppplVar23 = (long *******)&ppppppplStack_a8;
          ppppppplVar11 = ppppppplVar10;
          FUN_10538f19c(ppppppplVar23,ppppppplVar10);
          func_0x00010538f1c8(ppppppplVar17,ppppppplVar19,ppppppplVar23,ppppppplVar11,
                              ppppppplStack_a8,ppppppplStack_a0);
          ppppppplStack_a8 = ppppppplVar17;
          ppppppplStack_a0 = ppppppplVar19;
        }
        func_0x00010538f7ec(auStack_80,&uStack_81,lVar5,param_8,ppppppplStack_a8,ppppppplStack_a0);
      }
    }
    else {
      lVar4 = 0;
      if (lStack_d0 != lStack_d8) {
        lVar4 = (lStack_d0 - lStack_d8) * 0x200 + -1;
      }
      ppppppplVar17 = (long *******)(lVar4 - ((long)ppppppplStack_c0 + lStack_b8));
      ppppppplVar22 = (long *******)((long)ppppppplVar23 - (long)ppppppplVar17);
      ppppppplVar11 = ppppppplVar10;
      if (ppppppplVar17 <= ppppppplVar23 && ppppppplVar22 != (long *******)0x0) {
        ppppppplVar11 = &pppppplStack_e0;
        FUN_10538f1ec();
      }
      func_0x000105390090();
      ppppppplStack_a8 = ppppppplVar11;
      ppppppplStack_a0 = ppppppplVar22;
      ppppppplVar17 = (long *******)(lStack_b8 - (long)ppppppplVar10);
      cVar6 = SBORROW8((long)ppppppplVar17,(long)ppppppplVar23);
      lVar4 = (long)ppppppplVar17 - (long)ppppppplVar23;
      uVar8 = lVar4 == 0;
      puVar2 = param_8;
      if (ppppppplVar17 < ppppppplVar23) {
        puVar18 = (undefined1 *)(param_7 + (long)ppppppplVar17);
        puVar2 = (undefined1 *)(param_7 + (long)ppppppplVar17);
        if ((long *******)((ulong)ppppppplVar23 >> 1) <= ppppppplVar17) {
          puVar18 = param_8 + lVar4;
          puVar2 = param_8 + lVar4;
        }
        while( true ) {
          cVar6 = SBORROW8((long)puVar18,(long)param_8);
          lVar4 = (long)puVar18 - (long)param_8;
          if (puVar18 == param_8) break;
          ppppppplVar23 = (long *******)((long)ppppppplVar22 + 1);
          *(undefined1 *)ppppppplVar22 = *puVar18;
          if ((long)ppppppplVar23 - (long)*ppppppplVar11 == 0x1000) {
            ppppppplVar11 = ppppppplVar11 + 1;
            ppppppplVar23 = (long *******)*ppppppplVar11;
          }
          lStack_b8 = lStack_b8 + 1;
          puVar18 = puVar18 + 1;
          ppppppplVar22 = ppppppplVar23;
        }
        uVar8 = true;
        ppppppplVar23 = ppppppplVar17;
      }
      cVar7 = lVar4 < 0;
      if (ppppppplVar23 != (long *******)0x0) {
        ppppppplVar12 = (long *******)&ppppppplStack_a8;
        ppppppplVar19 = ppppppplVar23;
        FUN_10538f418();
        while (ppppppplVar19 != ppppppplStack_a0) {
          ppppppplVar21 = (long *******)((long)ppppppplVar22 + 1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)ppppppplVar19;
          if ((long)ppppppplVar21 - (long)*ppppppplVar11 == 0x1000) {
            ppppppplVar11 = ppppppplVar11 + 1;
            ppppppplVar21 = (long *******)*ppppppplVar11;
          }
          ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1);
          if ((long)ppppppplVar19 - (long)*ppppppplVar12 == 0x1000) {
            ppppppplVar12 = ppppppplVar12 + 1;
            ppppppplVar19 = (long *******)*ppppppplVar12;
          }
          lStack_b8 = lStack_b8 + 1;
          ppppppplVar22 = ppppppplVar21;
        }
        cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar17);
        cVar7 = (long)ppppppplVar23 - (long)ppppppplVar17 < 0;
        uVar8 = ppppppplVar23 == ppppppplVar17;
        if (ppppppplVar23 < ppppppplVar17) {
          ppppppplVar23 = (long *******)&ppppppplStack_a8;
          FUN_10538f418();
          func_0x00010538f444();
          ppppppplStack_a8 = ppppppplVar23;
          ppppppplStack_a0 = ppppppplVar17;
        }
        func_0x00010538fa1c(auStack_80,&uStack_81,param_7,puVar2,ppppppplStack_a8,ppppppplStack_a0);
      }
    }
    func_0x00010539003c();
    if ((bool)uVar8) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = *extraout_x8_02 + (extraout_x9_01 & 0xfff);
    }
    FUN_10538f19c(auStack_80,ppppppplVar10);
    func_0x00010538ffdc();
    lVar4 = extraout_x11;
    lVar5 = extraout_x10;
    if (cVar7 == cVar6) {
      lVar4 = extraout_x8_03;
      lVar5 = extraout_x12;
    }
    param_5 = param_2;
    param_6 = pppppplVar16;
    FUN_10538e298(param_2,pppppplVar16,lVar5 + lVar4);
    pppppplVar9 = pppppplVar13;
    pppppplVar15 = pppppplVar16;
    if (param_5 != param_6) {
      param_8 = param_4;
      param_7 = param_3;
    }
  }
  cVar6 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
  cVar7 = '\0';
  ppppplVar3 = param_1[1];
  pppppplVar16 = (long ******)*param_1;
  if (!(bool)cVar6) {
    ppppplVar3 = (long *****)(ulong)*(byte *)((long)param_1 + 0x17);
    pppppplVar16 = param_1;
  }
  pppppplVar13 = (long ******)&pppppplStack_e0;
  FUN_10538e7e4(pppppplVar13,param_1,pppppplVar9,pppppplVar15,(long)pppppplVar16 + (long)ppppplVar3)
  ;
  if (lStack_b8 == 0) {
    ppppplVar3 = param_1[1];
    pppppplVar9 = (long ******)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      ppppplVar3 = (long *****)(ulong)*(byte *)((long)param_1 + 0x17);
      pppppplVar9 = param_1;
    }
    func_0x00010015bbdc(param_1,pppppplVar13,(long)pppppplVar9 + (long)ppppplVar3);
  }
  else {
    pppppplVar9 = pppppplVar13;
    func_0x00010538ffdc();
    lVar4 = extraout_x11_00;
    lVar5 = extraout_x10_00;
    if (cVar6 == cVar7) {
      lVar4 = extraout_x8_04;
      lVar5 = extraout_x12_00;
    }
    plVar1 = (long *)(lStack_d8 + ((ulong)ppppppplStack_c0 >> 0xc) * 8);
    if (lStack_d0 == lStack_d8) {
      lVar20 = 0;
    }
    else {
      lVar20 = *plVar1 + ((ulong)ppppppplStack_c0 & 0xfff);
    }
    func_0x000105390090();
    func_0x00010538fa94(param_1,lVar5 + lVar4,plVar1,lVar20,pppppplVar13,pppppplVar9);
  }
  FUN_10538fc94(&pppppplStack_e0);
  return;
}



/* Entry: 10538e7e4; end: 10538e80b;  */

void FUN_10538e7e4(void)

{
  undefined1 uStack_11;
  
  func_0x00010538fe24();
  FUN_10538e858(&uStack_11);
  return;
}



/* Entry: 10538e80c; end: 10538e857;  */

void FUN_10538e80c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10538e858; end: 10538e93b;  */

undefined1 *
FUN_10538e858(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined1 extraout_w8;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  func_0x00010538e8e8(param_2,param_4,param_5);
  if (*(long *)(param_2 + 0x28) == 0) {
    if (param_5 != puVar2) {
      lVar1 = (long)param_6 - (long)param_5;
      if (lVar1 != 0) {
        _memmove(puVar2,param_5,lVar1);
      }
      param_6 = puVar2 + lVar1;
    }
  }
  else {
    for (; puVar2 != param_6; puVar2 = puVar2 + 1) {
      FUN_10538e93c(param_2,puVar2);
      func_0x00010538ff4c();
      *puVar2 = extraout_w8;
      FUN_10538e980(param_2);
    }
  }
  return param_6;
}



/* Entry: 10538e93c; end: 10538e97f;  */

void FUN_10538e93c(long param_1,undefined1 *param_2)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010538ff2c();
  func_0x00010538e99c();
  if (param_1 == 0) {
    FUN_10538e9c4();
  }
  func_0x00010538e830();
  *param_2 = *unaff_x20;
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 10538e980; end: 10538e9c3;  */

bool FUN_10538e980(long param_1)

{
  bool bVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x1fff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    func_0x00010538ffbc();
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x1000;
  }
  return bVar1;
}



/* Entry: 10538e9c4; end: 10538eb2f;  */

void FUN_10538e9c4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x1000) {
    uVar5 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar3 = *plVar2;
    uVar4 = lVar3 - *param_1;
    if (uVar4 <= uVar5) {
      lVar1 = (long)uVar4 >> 2;
      if (lVar3 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      FUN_10538ee04();
      lStack_48 = (long)plVar2 + uVar5;
      plStack_38 = plVar2 + lVar1;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      func_0x00010538fea4();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x1000;
      lStack_70 = (long)plVar2;
      lStack_68 = (long)plVar2;
      FUN_10538ecb8(&lStack_50,&lStack_70);
      lStack_68 = 0;
      lVar3 = param_1[2];
      while (lVar1 = param_1[1], lVar3 != lVar1) {
        lVar3 = lVar3 + -8;
        FUN_10538ed3c(&lStack_50,lVar3);
      }
      lVar3 = *param_1;
      lVar7 = param_1[3];
      lVar6 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar3;
      lStack_48 = lVar1;
      lStack_40 = lVar6;
      plStack_38 = (long *)lVar7;
      FUN_10538ee44(&lStack_68);
      FUN_10538ee80(&lStack_50);
      return;
    }
    lVar1 = 0x1000;
    if (lVar3 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      FUN_10538ebac(param_1,&lStack_50);
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    FUN_10538ec28(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x1000;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_10538eb30(param_1,&lStack_50);
  return;
}



/* Entry: 10538eb30; end: 10538ebab;  */

void FUN_10538eb30(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  
  func_0x00010538ff2c();
  func_0x00010538fed8();
  if ((bool)in_ZR) {
    func_0x0001053900cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001053900c0();
      uVar1 = extraout_x8;
      if ((bool)in_ZR) {
        uVar1 = 0;
      }
      func_0x00010538fe5c();
      func_0x00010538fd9c(param_1 + (uVar1 >> 2) * 8);
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdd4();
      if (!(bool)in_ZR) {
        func_0x00010538fe68();
      }
      func_0x00010538fec8();
    }
  }
  func_0x00010538ff1c();
  return;
}



/* Entry: 10538ebac; end: 10538ec27;  */

void FUN_10538ebac(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  
  func_0x00010538ff2c();
  func_0x00010538fed8();
  if ((bool)in_ZR) {
    func_0x0001053900cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001053900c0();
      uVar1 = extraout_x8;
      if ((bool)in_ZR) {
        uVar1 = 0;
      }
      func_0x00010538fe5c();
      func_0x00010538fd9c(param_1 + (uVar1 >> 2) * 8);
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdd4();
      if (!(bool)in_ZR) {
        func_0x00010538fe68();
      }
      func_0x00010538fec8();
    }
  }
  func_0x00010538ff1c();
  return;
}



/* Entry: 10538ec28; end: 10538ecb7;  */

void FUN_10538ec28(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  
  func_0x00010538fef8();
  if ((bool)in_ZR) {
    lVar1 = unaff_x19;
    func_0x00010538fed8();
    if ((bool)in_CY) {
      lVar2 = extraout_x9 - param_2 >> 2;
      if (extraout_x9 - param_2 == 0) {
        lVar2 = 1;
      }
      func_0x00010539007c();
      func_0x00010538fd9c(lVar1 + (lVar2 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdfc();
      lVar1 = extraout_x8;
      if (!(bool)in_ZR) {
        func_0x000105390098();
        lVar1 = *(long *)(unaff_x19 + 0x10);
      }
      *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar1 + unaff_x22 * 8;
    }
  }
  func_0x00010538ffcc();
  return;
}



/* Entry: 10538ecb8; end: 10538ed3b;  */

void FUN_10538ecb8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010538ff2c();
  bVar2 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar3 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar3) {
    func_0x0001053900cc();
    if (!bVar2 || bVar3) {
      func_0x0001053900c0();
      uVar1 = extraout_x8;
      if (bVar3) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      func_0x00010538fe5c(lVar4);
      func_0x00010538fd9c(lVar4 + (uVar1 >> 2) * 8);
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdd4();
      if (!bVar3) {
        func_0x00010538fe68();
      }
      func_0x00010538fec8();
    }
  }
  func_0x00010538ff1c();
  return;
}



/* Entry: 10538ed3c; end: 10538edcf;  */

void FUN_10538ed3c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  
  func_0x00010538fef8();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x00010538fdfc();
      lVar4 = extraout_x8;
      if (!bVar2) {
        func_0x000105390098();
        lVar4 = *(long *)(unaff_x19 + 0x10);
      }
      *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar4 + unaff_x22 * 8;
    }
    else {
      lVar4 = (long)(uVar1 - param_2) >> 2;
      if (uVar1 - param_2 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      func_0x00010539007c(lVar3);
      func_0x00010538fd9c(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
  }
  func_0x00010538ffcc();
  return;
}



/* Entry: 10538edd0; end: 10538ee03;  */

void FUN_10538edd0(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 10538ee04; end: 10538ee27;  */

void FUN_10538ee04(void)

{
  FUN_10538ee28();
  return;
}



/* Entry: 10538ee28; end: 10538ee43;  */

long FUN_10538ee28(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10538ee68();
  return param_1;
}



/* Entry: 10538ee44; end: 10538ee67;  */

undefined8 FUN_10538ee44(undefined8 param_1)

{
  FUN_10538ee68(param_1,0);
  return param_1;
}



/* Entry: 10538ee68; end: 10538ee7f;  */

void FUN_10538ee68(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10538ee80; end: 10538eeab;  */

long * FUN_10538ee80(long *param_1)

{
  FUN_10538eeac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10538eeac; end: 10538eecf;  */

void FUN_10538eeac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10538eed0; end: 10538ef23;  */

uint FUN_10538eed0(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ulong *)(param_1 + 0x20) < 0x1000) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x2000) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    func_0x00010538ffbc();
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x1000;
  }
  return uVar1 ^ 1;
}



/* Entry: 10538ef24; end: 10538ef3f;  */

long FUN_10538ef24(long *param_1,long *param_2)

{
  if (param_1[1] != param_2[1]) {
    return ((param_1[1] - param_2[1]) - *(long *)*param_1) + *(long *)*param_2 +
           (*param_1 - *param_2) * 0x200;
  }
  return 0;
}



/* Entry: 10538ef40; end: 10538f19b;  */

void FUN_10538ef40(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if (param_1[2] == param_1[1]) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_2 >> 0xc;
  bVar2 = (param_2 & 0xfff) != 0;
  uVar10 = (ulong)bVar2;
  uVar1 = uVar8;
  if (bVar2) {
    uVar1 = uVar8 + 1;
  }
  plVar11 = param_1;
  func_0x00010538e99c();
  uVar6 = uVar1;
  if ((ulong)plVar11 >> 0xc <= uVar1) {
    uVar6 = (ulong)plVar11 >> 0xc;
  }
  if ((ulong)plVar11 >> 0xc < uVar1) {
    uVar9 = uVar1 - uVar6;
    plVar11 = param_1 + 3;
    lVar3 = param_1[1];
    lVar5 = param_1[2];
    lVar7 = lVar5 - lVar3 >> 3;
    if ((ulong)((*plVar11 - *param_1 >> 3) - lVar7) < uVar9) {
      uVar10 = *plVar11 - *param_1 >> 2;
      uVar8 = lVar7 + uVar9;
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      plStack_50 = plVar11;
      if (uVar10 == 0) {
        plStack_70 = (long *)0x0;
      }
      else {
        FUN_10538ee04();
        plStack_70 = plVar11;
      }
      plStack_58 = plStack_70 + uVar10;
      plStack_68 = plStack_70;
      plStack_60 = plStack_70;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        func_0x00010538fea4();
        func_0x000105390064();
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        FUN_10538f504(&plStack_70,param_1[2] + -8);
        func_0x0001053900a0();
      }
      for (lVar7 = param_1[1]; lVar4 = param_1[2], lVar7 != lVar4; lVar7 = lVar7 + 8) {
        FUN_10538f504(&plStack_70,lVar7);
      }
      lVar12 = param_1[1];
      plVar11 = (long *)*param_1;
      lVar7 = param_1[3];
      param_1[1] = (long)plStack_68;
      *param_1 = (long)plStack_70;
      param_1[3] = (long)plStack_58;
      param_1[2] = (long)plStack_60;
      param_1[4] = (uVar1 * 0x1000 - (ulong)(lVar5 == lVar3)) + param_1[4];
      plStack_70 = plVar11;
      plStack_68 = (long *)lVar12;
      plStack_60 = (long *)lVar4;
      plStack_58 = (long *)lVar7;
      func_0x00010538ff88();
    }
    else {
      lVar7 = uVar10 - uVar6;
      for (; lVar7 + uVar8 != 0; uVar8 = uVar8 - 1) {
        if (lVar3 == *param_1) {
          uVar6 = uVar10 + uVar8;
          break;
        }
        func_0x00010538fea4();
        func_0x00010538ff0c();
        FUN_10538ec28();
        lVar3 = param_1[1];
        lVar5 = 0xfff;
        if (param_1[2] - lVar3 != 8) {
          lVar5 = 0x1000;
        }
        param_1[4] = lVar5 + param_1[4];
      }
      for (lVar7 = lVar7 + uVar8; lVar7 != 0; lVar7 = lVar7 + -1) {
        func_0x00010538fea4();
        func_0x00010538ff0c();
        FUN_10538ebac();
      }
      param_1[4] = param_1[4] + uVar6 * 0x1000;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        plStack_70 = *(long **)(param_1[2] + -8);
        func_0x0001053900a0();
        func_0x0001053900b4();
      }
    }
  }
  else {
    param_1[4] = param_1[4] + uVar6 * 0x1000;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      plStack_70 = *(long **)(param_1[2] + -8);
      func_0x0001053900a0();
      func_0x0001053900b4();
    }
  }
  return;
}



/* Entry: 10538f19c; end: 10538f1eb;  */

undefined1  [16] FUN_10538f19c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010538f5a4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10538f1ec; end: 10538f417;  */

void FUN_10538f1ec(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  
  if (param_1[2] - param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar7 = param_2 >> 0xc;
  bVar1 = (param_2 & 0xfff) != 0;
  uVar9 = (ulong)bVar1;
  uVar8 = uVar7;
  if (bVar1) {
    uVar8 = uVar7 + 1;
  }
  uVar4 = param_1[4];
  uVar5 = uVar8;
  if (uVar4 >> 0xc <= uVar8) {
    uVar5 = uVar4 >> 0xc;
  }
  if (uVar4 >> 0xc < uVar8) {
    plVar3 = param_1 + 3;
    uVar8 = uVar8 - uVar5;
    lVar6 = param_1[2] - param_1[1] >> 3;
    if ((ulong)((*plVar3 - *param_1 >> 3) - lVar6) < uVar8) {
      uVar7 = *plVar3 - *param_1 >> 2;
      if (uVar7 <= uVar8 + lVar6) {
        uVar7 = uVar8 + lVar6;
      }
      plStack_50 = plVar3;
      if (uVar7 == 0) {
        plStack_70 = (long *)0x0;
      }
      else {
        FUN_10538ee04();
        plStack_70 = plVar3;
      }
      lStack_68 = (long)(plStack_70 + (lVar6 - uVar5));
      lStack_58 = (long)(plStack_70 + uVar7);
      lStack_60 = lStack_68;
      for (; uVar7 = uVar5, uVar8 != 0; uVar8 = uVar8 - 1) {
        func_0x00010538fea4();
        func_0x000105390064();
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        FUN_10538f504(&plStack_70,param_1[1]);
        func_0x00010538ffbc();
      }
      lVar6 = param_1[2];
      while (lVar2 = param_1[1], lVar6 != lVar2) {
        lVar6 = lVar6 + -8;
        FUN_10538ed3c(&plStack_70,lVar6);
      }
      plVar3 = (long *)*param_1;
      lVar10 = param_1[3];
      lVar6 = param_1[2];
      param_1[1] = lStack_68;
      *param_1 = (long)plStack_70;
      param_1[3] = lStack_58;
      param_1[2] = lStack_60;
      param_1[4] = param_1[4] + uVar5 * -0x1000;
      plStack_70 = plVar3;
      lStack_68 = lVar2;
      lStack_60 = lVar6;
      lStack_58 = lVar10;
      func_0x00010538ff88();
    }
    else {
      lVar6 = uVar9 - uVar5;
      for (; lVar6 + uVar7 != 0; uVar7 = uVar7 - 1) {
        if (param_1[3] == param_1[2]) {
          uVar5 = uVar9 + uVar7;
          break;
        }
        func_0x00010538fea4();
        func_0x00010538ff0c();
        FUN_10538ebac();
      }
      lVar6 = lVar6 + uVar7;
      while (lVar6 != 0) {
        func_0x00010538fea4();
        func_0x00010538ff0c();
        FUN_10538ec28();
        lVar6 = lVar6 + -1;
        lVar2 = 0xfff;
        if (param_1[2] - param_1[1] != 8) {
          lVar2 = 0x1000;
        }
        param_1[4] = lVar2 + param_1[4];
      }
      param_1[4] = param_1[4] + uVar5 * -0x1000;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        func_0x00010538feac();
      }
    }
  }
  else {
    param_1[4] = uVar4 + uVar5 * -0x1000;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      func_0x00010538feac();
    }
  }
  return;
}



/* Entry: 10538f418; end: 10538f467;  */

undefined1  [16] FUN_10538f418(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10538f864(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10538f468; end: 10538f473;  */

void FUN_10538f468(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != lVar1 + -8) {
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 10538f474; end: 10538f503;  */

void FUN_10538f474(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  
  func_0x00010538fef8();
  if ((bool)in_ZR) {
    lVar1 = unaff_x19;
    func_0x00010538fed8();
    if ((bool)in_CY) {
      lVar2 = extraout_x9 - param_2 >> 2;
      if (extraout_x9 - param_2 == 0) {
        lVar2 = 1;
      }
      func_0x00010539007c();
      func_0x00010538fd9c(lVar1 + (lVar2 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdfc();
      lVar1 = extraout_x8;
      if (!(bool)in_ZR) {
        func_0x000105390098();
        lVar1 = *(long *)(unaff_x19 + 0x10);
      }
      *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar1 + unaff_x22 * 8;
    }
  }
  func_0x00010538ffcc();
  return;
}



/* Entry: 10538f504; end: 10538f587;  */

void FUN_10538f504(long param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010538ff2c();
  bVar2 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar3 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar3) {
    func_0x0001053900cc();
    if (!bVar2 || bVar3) {
      func_0x0001053900c0();
      uVar1 = extraout_x8;
      if (bVar3) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      func_0x00010538fe5c(lVar4);
      func_0x00010538fd9c(lVar4 + (uVar1 >> 2) * 8);
      func_0x00010538fe9c();
      func_0x00010538fd84();
    }
    else {
      func_0x00010538fdd4();
      if (!bVar3) {
        func_0x00010538fe68();
      }
      func_0x00010538fec8();
    }
  }
  func_0x00010538ff1c();
  return;
}



/* Entry: 10538f588; end: 10538f5ff;  */

void FUN_10538f588(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10538f600; end: 10538f63f;  */

void FUN_10538f600(void)

{
  undefined8 *extraout_x8;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010538fe24();
  FUN_10538f640(&uStack_40,&uStack_41);
  extraout_x8[1] = uStack_38;
  *extraout_x8 = uStack_40;
  extraout_x8[3] = uStack_28;
  extraout_x8[2] = uStack_30;
  return;
}



/* Entry: 10538f640; end: 10538f6ff;  */

void FUN_10538f640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_7;
  uStack_38 = param_8;
  func_0x00010538f690(param_3,param_4,param_5,param_6,&uStack_40);
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  return;
}



/* Entry: 10538f700; end: 10538f773;  */

void FUN_10538f700(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010538f744(auStack_38,param_2,param_3,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]
                     );
  puVar1 = (undefined8 *)*param_1;
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  return;
}



/* Entry: 10538f774; end: 10538f863;  */

void FUN_10538f774(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long *extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar3;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000105390024();
  if ((bool)in_ZR) {
    *unaff_x19 = unaff_x20;
    unaff_x19[1] = (long)unaff_x21;
    unaff_x19[2] = unaff_x23;
  }
  else {
    lVar2 = *unaff_x21;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      func_0x00010539000c(lVar2);
      if (unaff_x24 != 0) {
        func_0x00010538ff68();
      }
      unaff_x20 = unaff_x20 + unaff_x24;
      bVar1 = param_3 == unaff_x20;
      if (bVar1) break;
      lVar2 = *unaff_x21;
    }
    func_0x00010538fff4();
    lVar2 = extraout_x8;
    plVar3 = extraout_x9;
    if (bVar1) {
      lVar2 = *unaff_x21;
      plVar3 = unaff_x21;
    }
    *unaff_x19 = unaff_x20;
    unaff_x19[1] = (long)plVar3;
    unaff_x19[2] = lVar2;
  }
  return;
}



/* Entry: 10538f864; end: 10538f86b;  */

void FUN_10538f864(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (-param_2 != 0) {
    plVar2 = (long *)*param_1;
    uVar1 = (param_1[1] - *plVar2) + -param_2;
    if ((long)uVar1 < 1) {
      plVar2 = plVar2 + -(0xfff - uVar1 >> 0xc);
      lVar3 = *plVar2 + ((ulong)~(uint)(0xfff - uVar1) & 0xfff);
    }
    else {
      plVar2 = plVar2 + (uVar1 >> 0xc);
      lVar3 = *plVar2 + (uVar1 & 0xfff);
    }
    *param_1 = (long)plVar2;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 10538f86c; end: 10538f8ab;  */

void FUN_10538f86c(void)

{
  undefined8 *extraout_x8;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010538fe24();
  FUN_10538f8ac(&uStack_40,&uStack_41);
  extraout_x8[1] = uStack_38;
  *extraout_x8 = uStack_40;
  extraout_x8[3] = uStack_28;
  extraout_x8[2] = uStack_30;
  return;
}



/* Entry: 10538f8ac; end: 10538f973;  */

void FUN_10538f8ac(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long *param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == param_5) {
    FUN_10538f974(auStack_58,param_4,param_6,param_7,param_8);
    *param_1 = param_5;
    param_1[1] = param_6;
  }
  else {
    lVar1 = *param_5;
    lVar2 = param_6;
    plVar3 = param_5;
    while( true ) {
      plVar3 = plVar3 + -1;
      FUN_10538f974(auStack_58,lVar1,lVar2,param_7,param_8);
      if (plVar3 == param_3) break;
      lVar1 = *plVar3;
      lVar2 = lVar1 + 0x1000;
      param_7 = uStack_50;
      param_8 = uStack_48;
    }
    FUN_10538f974(auStack_58,param_4,*plVar3 + 0x1000,uStack_50,uStack_48);
    *param_1 = param_5;
    param_1[1] = param_6;
  }
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  return;
}



/* Entry: 10538f974; end: 10538f9a3;  */

void FUN_10538f974(void)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x00010538fe24();
  FUN_10538f9a4(auStack_38,&uStack_39);
  func_0x0001053900d8();
  return;
}



/* Entry: 10538f9a4; end: 10538fb03;  */

void FUN_10538f9a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x24;
  
  func_0x000105390100();
  if ((bool)in_ZR) {
    *unaff_x20 = unaff_x22;
    unaff_x20[1] = (long)unaff_x19;
    unaff_x20[2] = param_5;
  }
  else {
    lVar2 = *unaff_x19;
    lVar1 = param_3;
    while( true ) {
      func_0x00010538ff90(lVar2);
      if (lVar1 != 0) {
        func_0x000105390070();
      }
      if (unaff_x22 == param_3) break;
      unaff_x19 = unaff_x19 + -1;
      lVar2 = *unaff_x19;
    }
    if (unaff_x24 == *unaff_x19 + 0x1000) {
      unaff_x19 = unaff_x19 + 1;
      unaff_x24 = *unaff_x19;
    }
    *unaff_x20 = param_3;
    unaff_x20[1] = (long)unaff_x19;
    unaff_x20[2] = unaff_x24;
  }
  return;
}



/* Entry: 10538fb04; end: 10538fbb7;  */

long FUN_10538fb04(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  plVar1 = param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    plVar1 = (long *)*param_1;
  }
  if (param_7 == 0) {
    param_7 = (param_2 - (long)plVar1) + (long)plVar1;
  }
  else {
    FUN_10538fc00(&pppuStack_48,param_3,param_4,param_5,param_6);
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppuStack_48 = &pppuStack_48;
    }
    func_0x000100602e94(param_1,param_7,param_2 - (long)plVar1,pppuStack_48,
                        (long)pppuStack_48 + uStack_40);
    func_0x000105390084();
  }
  return param_7;
}



/* Entry: 10538fbb8; end: 10538fbe3;  */

void FUN_10538fbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10538fbe4(&uStack_30,&uStack_20);
  return;
}



/* Entry: 10538fbe4; end: 10538fbff;  */

long FUN_10538fbe4(long *param_1,long *param_2)

{
  if (param_1[1] != param_2[1]) {
    return ((param_1[1] - param_2[1]) - *(long *)*param_1) + *(long *)*param_2 +
           (*param_1 - *param_2) * 0x200;
  }
  return 0;
}



/* Entry: 10538fc00; end: 10538fc93;  */

void FUN_10538fc00(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 param_4,
                  char *param_5)

{
  char *pcVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    pcVar1 = param_3 + -0x1000;
    do {
      if (param_3 == param_5) {
        return;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)*param_3);
      param_3 = param_3 + 1;
      pcVar1 = pcVar1 + 1;
    } while ((char *)*param_2 != pcVar1);
    param_2 = param_2 + 1;
    param_3 = (char *)*param_2;
  } while( true );
}



/* Entry: 10538fc94; end: 10538fcd7;  */

long * FUN_10538fc94(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10538fcd8();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10538fd74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10538fcd8; end: 10538fd73;  */

void FUN_10538fcd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_10538e80c();
  func_0x00010538e830(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar1);
    func_0x00010538ffbc();
    puVar1 = extraout_x8;
  }
  if (uVar3 == 1) {
    uVar2 = 0x800;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x1000;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10538fd74; end: 105390113;  */

void FUN_10538fd74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 105390114; end: 10539015b;  */

long FUN_105390114(long param_1)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return (param_1 / 1000000000) * 1000000000;
}



/* Entry: 10539015c; end: 105390163;  */

void FUN_10539015c(void)

{
  return;
}



/* Entry: 105390164; end: 1053901db;  */

long FUN_105390164(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1;
  puVar4 = param_5;
  FUN_10539036c();
  *(undefined4 *)(lVar5 + 0x18) = param_3;
  *(undefined4 *)(lVar5 + 0x1c) = param_4;
  plVar3 = (long *)*puVar4;
  (**(code **)(*plVar3 + 0x18))();
  *(long **)(param_1 + 0x20) = plVar3;
  lVar5 = param_5[1];
  uVar6 = *param_5;
  *(undefined8 *)(param_1 + 0x30) = param_5[1];
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return param_1;
}



/* Entry: 1053901dc; end: 105390227;  */

void FUN_1053901dc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_10539036c();
  *(undefined8 *)(param_1 + 0x18) = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[4];
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = param_2[6];
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = *param_2;
  }
  param_2[1] = uVar5;
  return;
}



/* Entry: 105390228; end: 10539036b;  */

long FUN_105390228(long param_1,undefined8 *param_2)

{
  func_0x00010065acbc();
  param_2[1] = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[4];
  func_0x000105390274(param_1 + 0x28,param_2 + 5);
  return param_1;
}



/* Entry: 10539036c; end: 1053903c3;  */

void FUN_10539036c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1053903c4; end: 1053903fb;  */

void FUN_1053903c4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -8;
    func_0x000105391980();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1053903fc; end: 10539041b;  */

void FUN_1053903fc(void)

{
  func_0x0001053921b8();
  FUN_1053919ac();
  return;
}



/* Entry: 10539041c; end: 1053904c3;  */

undefined8
FUN_10539041c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  
  uStack_54 = 0xc;
  uVar1 = param_1;
  func_0x00010028b86c();
  FUN_1053903fc(auStack_50,&PTR_s_ArgosTokenManagerQueue_11087f608,&uStack_54,uVar1);
  FUN_1053904c4(param_1,param_2,param_3,param_4,auStack_50,param_5,param_6);
  func_0x000100450be4(auStack_50);
  return param_1;
}



/* Entry: 1053904c4; end: 1053905cb;  */

undefined8
FUN_1053904c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1053905cc(&uStack_60,param_3,param_7,param_6,param_5);
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1053905f0(auStack_c0,param_7 + 200,param_6);
  FUN_10539163c(auStack_90,auStack_c0);
  FUN_105390674(param_1,param_2,&uStack_50,param_4,param_5,param_6,param_7 + 200,auStack_90);
  func_0x0001053916a4(auStack_90);
  func_0x0001053916c4(auStack_c0);
  FUN_105391adc(&uStack_50);
  FUN_105391cc8(&uStack_60);
  return param_1;
}



/* Entry: 1053905cc; end: 1053905ef;  */

void FUN_1053905cc(void)

{
  func_0x0001053921b8();
  FUN_105391b04();
  return;
}



/* Entry: 1053905f0; end: 105390673;  */

void FUN_1053905f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [24];
  char cStack_28;
  
  FUN_10539294c(auStack_40);
  if (cStack_28 == '\x01') {
    FUN_1053921cc(auStack_68,auStack_40,param_3);
    func_0x0001053915c0(param_1,auStack_68);
    func_0x000105391614(auStack_68);
  }
  else {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  func_0x000105392184();
  return;
}



/* Entry: 105390674; end: 10539084f;  */

undefined8 *
FUN_105390674(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,long param_8)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087f620;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar3 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_4[1];
  uVar3 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = param_5[1];
  uVar3 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10_02 != 0);
  }
  uVar1 = (undefined4)param_7;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  lVar2 = param_6[1];
  uVar3 = *param_6;
  param_1[0x1c] = param_6[1];
  param_1[0x1b] = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (lVar2 != 0) {
    do {
      func_0x00010539205c();
      uVar1 = (undefined4)param_7;
    } while (extraout_w10_03 != 0);
  }
  FUN_105392954();
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1d) = uVar1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (*(char *)(param_8 + 0x28) == '\x01') {
    FUN_1053915dc(param_1 + 0x1e,param_8);
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  param_1[0x24] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined8 *)((long)param_1 + 0x151) = 0;
  return param_1;
}



/* Entry: 105390850; end: 10539093f;  */

/* WARNING: Removing unreachable block (ram,0x0001053908d8) */

void FUN_105390850(long param_1,code **param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code **ppcVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  undefined1 auStack_168 [32];
  char cStack_148;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code **ppcStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  undefined8 uStack_98;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_28;
  
  func_0x0001053920a4();
  uStack_28 = extraout_x8;
  if ((*(byte *)(param_1 + 0x160) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x160) = 1;
    in_ZR = 0;
    if (*(char *)(param_1 + 0x118) == '\x01') {
      FUN_105392570(&pcStack_68,param_1 + 0xf0);
      FUN_1053916e4(param_1 + 0x98,&pcStack_68);
      FUN_10538de3c(&pcStack_68);
      in_ZR = *(char *)(param_1 + 0xd0) == '\x01';
      if ((bool)in_ZR) {
        iVar1 = (int)param_1 + 0x98;
        func_0x000105390318();
        if (iVar1 != 0) {
          lStack_70 = 0;
          func_0x0001053921a0();
        }
      }
    }
    pcStack_68 = FUN_105391cf0;
    ppuStack_60 = &PTR_FUN_11087f720;
    param_2 = &pcStack_68;
    func_0x00010bcce990();
    func_0x000105392154(ppuStack_60);
  }
  func_0x00010539206c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_70 != 0) {
    func_0x000105392050();
  }
  func_0x000105392080();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *(undefined8 *)(lStack_70 + 0x10);
  uStack_e8 = *(undefined8 *)(lStack_70 + 8);
  if (*(long *)(lStack_70 + 0x10) != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10 != 0);
  }
  uStack_d8 = *param_3;
  *param_3 = 0;
  pcStack_f8 = FUN_105391d8c;
  ppuStack_f0 = &PTR_FUN_11087f750;
  uStack_108 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  ppcStack_100 = param_2;
  ppcStack_d0 = param_2;
  func_0x000105392124();
  ppcVar4 = &pcStack_f8;
  (*extraout_x8_00)();
  func_0x000105392154(ppuStack_f0);
  FUN_1053911fc();
  func_0x00010539206c(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  puVar2 = &uStack_118;
  FUN_1053911fc(puVar2);
  func_0x000105392080();
  FUN_105390aac(auStack_168,puVar2);
  pcVar3 = *ppcVar4;
  if (cStack_148 == '\x01') {
    func_0x000105392124();
    (*extraout_x8_01)();
  }
  else {
    *ppcVar4 = (code *)0x0;
    func_0x0001053921a0(pcVar3,"get_token");
    if (pcVar3 != (code *)0x0) {
      func_0x000105392050();
    }
  }
  func_0x0001053915a0(auStack_168);
  return;
}



/* Entry: 105390940; end: 105390a07;  */

void FUN_105390940(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code *pcVar2;
  code **ppcVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  char cStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10 != 0);
  }
  uStack_68 = *param_3;
  *param_3 = 0;
  pcStack_88 = FUN_105391d8c;
  ppuStack_80 = &PTR_FUN_11087f750;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = param_2;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_60 = param_2;
  func_0x000105392124();
  ppcVar3 = &pcStack_88;
  (*extraout_x8)();
  func_0x000105392154(ppuStack_80);
  FUN_1053911fc();
  func_0x00010539206c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_80)(&ppuStack_80);
    puVar1 = &uStack_a8;
    FUN_1053911fc(puVar1);
    func_0x000105392080();
    FUN_105390aac(auStack_f8,puVar1);
    pcVar2 = *ppcVar3;
    if (cStack_d8 == '\x01') {
      func_0x000105392124();
      (*extraout_x8_00)();
    }
    else {
      *ppcVar3 = (code *)0x0;
      func_0x0001053921a0(pcVar2,"get_token");
      if (pcVar2 != (code *)0x0) {
        func_0x000105392050();
      }
    }
    func_0x0001053915a0(auStack_f8);
    return;
  }
  return;
}



/* Entry: 105390a08; end: 105390aab;  */

void FUN_105390a08(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *extraout_x8;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  FUN_105390aac(auStack_48,param_1);
  lVar1 = *param_2;
  if (cStack_28 == '\x01') {
    func_0x000105392124();
    (*extraout_x8)();
  }
  else {
    *param_2 = 0;
    func_0x0001053921a0(lVar1,"get_token");
    if (lVar1 != 0) {
      func_0x000105392050();
    }
  }
  func_0x0001053915a0(auStack_48);
  return;
}



/* Entry: 105390aac; end: 105390c57;  */

void FUN_105390aac(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x120);
  if (*(char *)(param_2 + 0x90) == '\x01') {
    uVar1 = param_2 + 0x58;
    func_0x0001053902d0();
    if ((uVar1 & 1) == 0) {
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      uStack_38 = 0;
      FUN_1053916e4(param_2 + 0x58,&uStack_70);
      FUN_10538de3c(&uStack_70);
      goto LAB_105390b3c;
    }
    FUN_105392dd0();
    func_0x00010002b838(auStack_88,"hot_token");
    func_0x0001053920b4();
    func_0x00010539217c();
    uVar2 = *(undefined4 *)(param_2 + 0x74);
    func_0x00010054f8dc(&uStack_70,param_2 + 0x58);
LAB_105390b84:
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[2] = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined1 *)(param_1 + 4) = 1;
    uStack_58 = uVar2;
    func_0x000100100fec(&uStack_70);
  }
  else {
LAB_105390b3c:
    if (*(char *)(param_2 + 0xd0) == '\x01') {
      uVar1 = param_2 + 0x98;
      func_0x0001053902d0();
      if ((uVar1 & 1) != 0) {
        FUN_105392dd0();
        func_0x000105392160();
        func_0x0001053920b4();
        func_0x0001053920cc();
        uVar2 = *(undefined4 *)(param_2 + 0xb4);
        func_0x00010054f8dc(&uStack_70,param_2 + 0x98);
        goto LAB_105390b84;
      }
      FUN_10539239c(param_2 + 0xf0);
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      uStack_38 = 0;
      FUN_1053916e4(param_2 + 0x98,&uStack_70);
      FUN_10538de3c(&uStack_70);
    }
    FUN_105392dd0();
    func_0x0001053920dc();
    func_0x0001053920b4();
    func_0x00010539209c();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  func_0x00010539211c();
  return;
}



/* Entry: 105390c58; end: 1053910db;  */

void FUN_105390c58(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  code **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 uVar12;
  int extraout_w10;
  long *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  ulong uStack_150;
  long lStack_148;
  undefined1 uStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  char cStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined1 uStack_88;
  undefined8 uStack_58;
  
  lVar7 = param_1;
  func_0x0001053920a4();
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 400) = lVar7;
  *(undefined1 *)(param_1 + 0x170) = 1;
  plVar13 = *(long **)(param_1 + 0x38);
  func_0x00010538e078(&pcStack_c0,param_1 + 0x170);
  (**(code **)(*plVar13 + 0x18))(plVar13,&pcStack_c0);
  FUN_105392dd0();
  func_0x00010002b838(auStack_168,*(undefined8 *)(param_1 + 0x168));
  func_0x00010002b838(auStack_180,"success");
  FUN_105392c24(plVar13,auStack_168,auStack_180,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
  __ZNSt3__15mutex4lockEv(param_1 + 0x120);
  FUN_105392dd0();
  uVar5 = *(int *)(param_2 + 0x1c) - 1;
  if (uVar5 < 5) {
    pcVar11 = (&PTR_s_cold_token_11087f780)[uVar5];
  }
  else {
    pcVar11 = "unknown";
  }
  func_0x00010002b838(&uStack_118,pcVar11);
  func_0x000105392194();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
  if (*(char *)(param_3 + 0x38) == '\x01') {
    FUN_105392dd0();
    uVar5 = *(int *)(param_3 + 0x1c) - 1;
    if (uVar5 < 5) {
      pcVar11 = (&PTR_s_cold_token_11087f780)[uVar5];
    }
    else {
      pcVar11 = "unknown";
    }
    func_0x00010002b838(&uStack_150,pcVar11);
    func_0x000105392194();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    if ((*(char *)(param_1 + 0x118) == '\x01') && ((*(byte *)(param_3 + 0x38) & 1) != 0)) {
      FUN_105392228(param_1 + 0xf0,param_3);
      func_0x000105391774(&pcStack_c0,param_3);
      FUN_1053916e4(param_1 + 0x98,&pcStack_c0);
      FUN_10538de3c(&pcStack_c0);
    }
  }
  func_0x000105391774(&pcStack_c0,param_2);
  FUN_1053916e4(param_1 + 0x58,&pcStack_c0);
  ppcVar8 = &pcStack_c0;
  FUN_10538de3c(ppcVar8);
  func_0x00010539211c();
  if (0 < *(int *)(param_1 + 0xe8)) {
    uVar5 = *(uint *)(param_2 + 0x18) - *(int *)(param_1 + 0xe8);
    if (*(uint *)(param_2 + 0x18) >> 1 < uVar5) {
      uVar9 = *(ulong *)(param_1 + 0xd8);
      func_0x000105392124();
      (*extraout_x8_00)();
      uVar1 = *(ulong *)(param_1 + 8);
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = uVar9;
      uStack_150 = uVar1;
      lStack_148 = lVar7;
      if (lVar7 != 0) {
        do {
          func_0x00010539205c();
        } while (extraout_w10 != 0);
      }
      FUN_105391224();
      *(ulong *)(param_1 + 0x1d0) = uVar10;
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      if (lVar7 != 0) {
        plVar13 = (long *)(lVar7 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_110 = 0;
      pcStack_c0 = FUN_105391f4c;
      ppuStack_b8 = &PTR_FUN_11087f768;
      uStack_118 = 0;
      uStack_108 = uVar10;
      uStack_b0 = uVar1;
      lStack_a8 = lVar7;
      uStack_a0 = uVar10;
      func_0x00010bcce9b8(&pcStack_130,uVar12,&pcStack_c0,uVar9 + (ulong)uVar5 * 1000000000);
      func_0x0001053920e4();
      func_0x000100688f2c(&pcStack_130);
      FUN_10538cfec(&uStack_118);
      FUN_10538cfec(&uStack_150);
    }
    else {
      FUN_105392dd0();
      func_0x00010002b838(&pcStack_c0,"failure");
      FUN_105392b6c(ppcVar8,&pcStack_c0,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_c0);
    }
  }
  pcStack_f0 = (code *)0x105391d68;
  ppuStack_e8 = &PTR_DAT_11087f738;
  puVar2 = *(undefined8 **)(param_1 + 0x1b0);
  lStack_e0 = param_1;
  for (puVar14 = *(undefined8 **)(param_1 + 0x1a8); uVar6 = puVar14 == puVar2, !(bool)uVar6;
      puVar14 = puVar14 + 1) {
    (*pcStack_f0)(&uStack_118,&pcStack_f0);
    if (cStack_f8 == '\x01') {
      func_0x000105392124(*puVar14);
      (*extraout_x8_01)();
    }
    else {
      func_0x00010002b838(&pcStack_130,&UNK_10dd98a28);
      uStack_b0 = uStack_120;
      uStack_150 = uStack_150 & 0xffffffffffffff00;
      uStack_138 = 0;
      ppuStack_b8 = ppuStack_128;
      pcStack_c0 = pcStack_130;
      pcStack_130 = (code *)0x0;
      ppuStack_128 = (undefined **)0x0;
      uStack_120 = 0;
      lStack_a8 = 1;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      uStack_88 = 0;
      func_0x000105392184();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_130);
      (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,&pcStack_c0);
      FUN_1052a03ac(&pcStack_c0);
    }
    func_0x0001053915a0(&uStack_118);
  }
  lVar7 = param_1 + 0x1a8;
  FUN_1053903c4();
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  func_0x0001053920fc();
  func_0x00010539218c();
  func_0x00010539206c(uStack_58);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010539211c();
    func_0x0001053920d4();
    if (*(char *)(lVar7 + 0x60) == '\x01') {
      func_0x000105391740(lVar7 + 0x40);
      *(undefined1 *)(lVar7 + 0x60) = 0;
    }
    return;
  }
  return;
}



/* Entry: 1053910dc; end: 10539110f;  */

void FUN_1053910dc(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_105391740(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 105391110; end: 1053911fb;  */

void FUN_105391110(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 400) = lVar2;
  FUN_105392dd0();
  func_0x00010002b838(auStack_48,*(undefined8 *)(param_1 + 0x168));
  func_0x000105392160();
  FUN_105392c24(lVar2,auStack_48,auStack_60,1);
  func_0x0001053920cc();
  func_0x00010539217c();
  *(undefined1 *)(param_1 + 0x170) = 0;
  plVar3 = *(long **)(param_1 + 0x38);
  func_0x00010538e078(auStack_78,param_1 + 0x170);
  (**(code **)(*plVar3 + 0x18))(plVar3,auStack_78);
  puVar1 = *(undefined8 **)(param_1 + 0x1b0);
  for (puVar4 = *(undefined8 **)(param_1 + 0x1a8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,param_2);
  }
  FUN_1053903c4(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  func_0x00010539218c();
  return;
}



/* Entry: 1053911fc; end: 105391223;  */

undefined8 FUN_1053911fc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000105391980(param_1 + 0x10);
  func_0x00010538d1c4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105391224; end: 10539124b;  */

undefined8 FUN_105391224(void)

{
  undefined8 uStack_18;
  
  func_0x0001004a5eec(&uStack_18,8);
  return uStack_18;
}



/* Entry: 10539124c; end: 10539156f;  */

void FUN_10539124c(undefined8 *param_1,char *param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  code *extraout_x8;
  undefined8 *puVar6;
  code *extraout_x8_00;
  uint uVar7;
  int extraout_w10;
  long *plVar8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  char cStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)*param_3;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    if (plStack_38 != (long *)0x0) {
      *param_3 = 0;
      FUN_1053917c4(param_1 + 0x35,&plStack_38);
      if (plStack_38 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001053912b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_38 + 8))();
        return;
      }
    }
    return;
  }
  puVar5 = param_1;
  if (plStack_38 != (long *)0x0) {
    puVar5 = &uStack_60;
    FUN_105390aac(puVar5,param_1);
    if (cStack_40 == '\x01') {
      FUN_105392dd0();
      func_0x00010002b838(auStack_78,"token_available");
      func_0x00010002b838(auStack_90,param_2);
      func_0x000105392148();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      func_0x000105392124(*param_3);
      (*extraout_x8)();
      func_0x000105392168();
      return;
    }
    func_0x000105392168();
  }
  func_0x00010539218c();
  param_1[0x2d] = param_2;
  uVar7 = 2;
  if (param_2 != "get_token") {
    uVar7 = (uint)(param_2 == "preemptive_refresh");
  }
  uVar1 = 0;
  if (param_2 != "startup_prewarming") {
    uVar1 = uVar7;
  }
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(uint *)((long)param_1 + 0x174) = uVar1;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((long)param_1 + 0x1b9) = 0;
  *(undefined8 *)((long)param_1 + 0x1b1) = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  puVar6 = (undefined8 *)*param_3;
  if (puVar6 != (undefined8 *)0x0) {
    *param_3 = 0;
    puStack_98 = puVar6;
    FUN_1053917c4(param_1 + 0x35,&puStack_98);
    puVar5 = puStack_98;
    if (puStack_98 != (undefined8 *)0x0) {
      func_0x000105392050();
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x33] = puVar5;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x31] = puVar5;
  plVar8 = (long *)param_1[3];
  func_0x00010045fb98(&uStack_60,"");
  func_0x0001053920dc();
  (**(code **)(*plVar8 + 0x10))(auStack_b0,plVar8,&uStack_60,auStack_c8,1);
  func_0x00010539209c();
  puVar5 = &uStack_60;
  func_0x0001001148fc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x34] = puVar5;
  FUN_105392dd0();
  FUN_105392ab4();
  uVar2 = param_1[1];
  lVar4 = param_1[2];
  uStack_60 = uVar2;
  if ((lVar4 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_58 = lVar4, lVar4 != 0)) {
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    *puVar5 = &PTR_FUN_11087f5e8;
    puVar5[1] = uVar2;
    puVar5[2] = lVar4;
    do {
      func_0x00010539205c();
    } while (extraout_w10 != 0);
    func_0x00010538d010(&uStack_60);
    func_0x000105392124(param_1[5]);
    (*extraout_x8_00)();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000105392050();
    }
    func_0x000100100fec(auStack_b0);
    return;
  }
  FUN_10527822c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1053914cc);
  (*pcVar3)();
}



/* Entry: 105391570; end: 105391573;  */

undefined8 * FUN_105391570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f5e8;
  func_0x00010538d010(param_1 + 1);
  return param_1;
}



/* Entry: 105391574; end: 105391587;  */

void FUN_105391574(void)

{
  FUN_1053918c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105391588; end: 10539158b;  */

undefined8 * FUN_105391588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f620;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    FUN_105391740(param_1 + 0x35);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x0001053916a4(param_1 + 0x1e);
  FUN_10538ce4c(param_1 + 0x1b);
  FUN_10538de3c(param_1 + 0x13);
  FUN_10538de3c(param_1 + 0xb);
  func_0x000100450be4(param_1 + 9);
  func_0x000105389b00(param_1 + 7);
  FUN_105391adc(param_1 + 5);
  func_0x000105389adc(param_1 + 3);
  FUN_10538cfec(param_1 + 1);
  return param_1;
}



/* Entry: 10539158c; end: 1053915db;  */

void FUN_10539158c(void)

{
  func_0x0001053918f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053915dc; end: 10539163b;  */

void FUN_1053915dc(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010539205c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10539163c; end: 105391673;  */

undefined1 * FUN_10539163c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_105391674();
  return param_1;
}



/* Entry: 105391674; end: 105391687;  */

void FUN_105391674(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1053915dc();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 105391688; end: 1053916e3;  */

void FUN_105391688(long param_1)

{
  FUN_1053915dc();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1053916e4; end: 10539173f;  */

long FUN_1053916e4(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      FUN_105390228(param_1);
    }
  }
  else if (cVar1 == '\0') {
    func_0x00010538ddf8(param_1);
  }
  else {
    FUN_10538de14(param_1);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return param_1;
}



/* Entry: 105391740; end: 1053917c3;  */

long * FUN_105391740(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1053903c4(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1053917c4; end: 1053918b3;  */

undefined8 * FUN_1053917c4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar4 = *param_2;
    *param_2 = 0;
    puVar10 = puVar3 + 1;
    *puVar3 = uVar4;
    puVar3 = param_1;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
    lVar9 = (long)puVar3 - (long)puVar7;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1053918b4();
LAB_1053918b0:
      func_0x000104bd35f4();
      puVar3 = (undefined8 *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      *puVar3 = &PTR_FUN_11087f5e8;
      func_0x00010538d010(puVar3 + 1);
      return puVar3;
    }
    uVar5 = (long)param_1[2] - (long)puVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_1053918b0;
      lVar2 = uVar6 << 3;
      __Znwm();
    }
    puVar3 = (undefined8 *)(lVar2 + lVar9);
    uVar4 = *param_2;
    *param_2 = 0;
    puVar8 = puVar3 + -(lVar9 >> 3);
    puVar10 = puVar3 + 1;
    *puVar3 = uVar4;
    puVar3 = puVar8;
    _memcpy(puVar8,puVar7,lVar9);
    *param_1 = puVar8;
    param_1[1] = puVar10;
    param_1[2] = lVar2 + uVar6 * 8;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv(puVar7);
      puVar3 = puVar7;
    }
  }
  param_1[1] = puVar10;
  return puVar3;
}



/* Entry: 1053918b4; end: 1053918c7;  */

undefined8 * FUN_1053918b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_11087f5e8;
  func_0x00010538d010(puVar1 + 1);
  return puVar1;
}



/* Entry: 1053918c8; end: 1053919ab;  */

undefined8 * FUN_1053918c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f5e8;
  func_0x00010538d010(param_1 + 1);
  return param_1;
}


