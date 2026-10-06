/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10734d9e8; end: 10734da33;  */

void FUN_10734d9e8(void)

{
  func_0x000107351a14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10734da34; end: 10734db67;  */

undefined8 * FUN_10734da34(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar5 = param_2 + 1;
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  puStack_80 = param_1 + 4;
  *puStack_80 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar6 = param_2[4];
  uVar1 = param_2[5];
  uStack_78 = 0;
  bVar3 = uVar6 <= uVar1;
  if (uVar1 - uVar6 != 0) {
    lVar4 = (long)(uVar1 - uVar6) / 0x48;
    func_0x000107351c90();
    if (bVar3) {
      FUN_10734db68();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10734db40);
      (*pcVar2)();
    }
    FUN_10734db7c();
    plStack_70 = param_1 + 6;
    *plStack_70 = lVar4 + (long)puVar5 * 0x48;
    param_1[4] = lVar4;
    param_1[5] = lVar4;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar4;
    for (; lStack_48 = lVar4, uVar6 != uVar1; uVar6 = uVar6 + 0x48) {
      FUN_10734dbb4(lVar4,uVar6);
      lVar4 = lStack_48 + 0x48;
    }
    uStack_58 = 1;
    FUN_10734dbfc(&plStack_70);
    param_1[5] = lVar4;
  }
  uStack_78 = 1;
  func_0x00010734dc40(&puStack_80);
  return param_1;
}



/* Entry: 10734db68; end: 10734db7b;  */

void FUN_10734db68(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107351c90();
  if (!(bool)in_CY) {
    __Znwm((long)puVar1 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107351a08();
  *puVar1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 2,param_2 + 2);
  *(undefined1 *)(unaff_x19 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x00010734f97c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10734db7c; end: 10734dbb3;  */

void FUN_10734db7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351c90();
  if (!(bool)in_CY) {
    __Znwm((long)param_1 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107351a08();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  *(undefined1 *)(unaff_x19 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x00010734f97c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10734dbb4; end: 10734dbfb;  */

void FUN_10734dbb4(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351a08();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  *(undefined1 *)(unaff_x19 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x00010734f97c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10734dbfc; end: 10734dc6b;  */

long FUN_10734dbfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x00010734d880();
    }
  }
  return param_1;
}



/* Entry: 10734dc6c; end: 10734dcc7;  */

void FUN_10734dc6c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x48;
      func_0x00010734d880();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10734dcc8; end: 10734dcf3;  */

undefined8 FUN_10734dcc8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10734dc6c(&uStack_28);
  return param_1;
}



/* Entry: 10734dcf4; end: 10734dd43;  */

long * FUN_10734dcf4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10734dd44(lVar1);
    func_0x000107351be0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10734dd44; end: 10734dd67;  */

void FUN_10734dd44(void)

{
  func_0x000107351a14();
  FUN_10734dcc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10734dd68; end: 10734dd6b;  */

void FUN_10734dd68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a43f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10734dd6c; end: 10734dd7f;  */

void FUN_10734dd6c(void)

{
  func_0x00010734dd88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734dd80; end: 10734dd9b;  */

void FUN_10734dd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107351e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10734dd9c; end: 10734ddaf;  */

void FUN_10734dd9c(void)

{
  func_0x00010734ddb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734ddb0; end: 10734ddc7;  */

void FUN_10734ddb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107351e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10734ddc8; end: 10734de27;  */

long * FUN_10734ddc8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(param_1);
  if (param_1[1] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10734de28; end: 10734de3b;  */

void FUN_10734de28(void)

{
  func_0x00010734ddfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734de3c; end: 10734de5f;  */

long FUN_10734de3c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351c54();
  func_0x000107351b54();
  *param_1 = &PTR_SUB_1109a4498;
  FUN_10734e760(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10734de60; end: 10734de83;  */

void FUN_10734de60(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351b54(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a4498;
  FUN_10734e760(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10734de84; end: 10734e6f7;  */

void FUN_10734de84(long param_1,long *****param_2)

{
  long ****pppplVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long ***ppplVar6;
  undefined8 extraout_x8;
  long *****ppppplVar7;
  long *****extraout_x8_00;
  long extraout_x8_01;
  long ****pppplVar8;
  code *extraout_x8_02;
  long *****extraout_x9;
  long *****ppppplVar9;
  ulong uVar10;
  ulong extraout_x9_00;
  undefined8 *puVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  long *****extraout_x10;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long *****extraout_x11;
  long *****ppppplVar17;
  long *****ppppplVar18;
  long *****ppppplVar19;
  long ****pppplVar20;
  long lVar21;
  long *****unaff_x22;
  ulong uVar22;
  long *****ppppplVar23;
  long ****pppplVar24;
  undefined1 auStack_190 [16];
  long ****pppplStack_180;
  long ****pppplStack_178;
  long ****pppplStack_170;
  undefined1 uStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  long ***ppplStack_150;
  long ****apppplStack_148 [3];
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ***ppplStack_118;
  long ****pppplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  float fStack_a0;
  long ****pppplStack_98;
  long **pplStack_90;
  undefined4 uStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  func_0x0001073518a8();
  iVar5 = (int)auStack_190;
  uStack_70 = extraout_x8;
  func_0x000107351ad0();
  func_0x000107351a90();
  if (iVar5 != 0) {
    ppppplVar18 = *(long ******)(param_1 + 0x20);
    ppppplVar23 = ppppplVar18 + 0x23;
    pppplStack_b8 = (long ****)0x0;
    lStack_c0 = 0;
    pppplStack_a8 = (long ****)0x0;
    pppplStack_b0 = (long ****)0x0;
    fStack_a0 = 1.0;
    while (ppppplVar23 = (long *****)*ppppplVar23, ppppplVar23 != (long *****)0x0) {
      FUN_10734c4dc(&pplStack_90,ppppplVar18,ppppplVar23 + 7);
      uVar22 = 0;
      param_2 = ppppplVar23 + 4;
      func_0x0001000e107c();
      if ((uVar22 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (ppppplVar23 + 4,&pplStack_90);
        ppppplVar12 = &pppplStack_a8;
        func_0x000100102e7c(ppppplVar12,&pplStack_90);
        ppppplVar9 = (long *****)pppplStack_b8;
        if ((long *****)pppplStack_b8 != (long *****)0x0) {
          uVar22 = (long)pppplStack_b8 - 1;
          if (((ulong)pppplStack_b8 & uVar22) == 0) {
            unaff_x22 = (long *****)(uVar22 & (ulong)ppppplVar12);
          }
          else {
            unaff_x22 = ppppplVar12;
            if (pppplStack_b8 <= ppppplVar12) {
              uVar10 = 0;
              if ((long *****)pppplStack_b8 != (long *****)0x0) {
                uVar10 = (ulong)ppppplVar12 / (ulong)pppplStack_b8;
              }
              unaff_x22 = (long *****)((long)ppppplVar12 - uVar10 * (long)pppplStack_b8);
            }
          }
          ppppplVar19 = *(long ******)(lStack_c0 + (long)unaff_x22 * 8);
          if (ppppplVar19 != (long *****)0x0) {
            do {
              while( true ) {
                ppppplVar19 = (long *****)*ppppplVar19;
                if (ppppplVar19 == (long *****)0x0) goto LAB_10734dfbc;
                ppppplVar7 = (long *****)ppppplVar19[1];
                if (ppppplVar7 != ppppplVar12) break;
                ppppplVar7 = ppppplVar19 + 2;
                ppplVar6 = &pplStack_90;
                func_0x0001000e107c();
                if (((ulong)ppppplVar7 & 1) != 0) goto LAB_10734e24c;
              }
              if (((ulong)ppppplVar9 & uVar22) == 0) {
                ppppplVar7 = (long *****)((ulong)ppppplVar7 & uVar22);
              }
              else if (ppppplVar9 <= ppppplVar7) {
                uVar10 = 0;
                if (ppppplVar9 != (long *****)0x0) {
                  uVar10 = (ulong)ppppplVar7 / (ulong)ppppplVar9;
                }
                ppppplVar7 = (long *****)((long)ppppplVar7 - uVar10 * (long)ppppplVar9);
              }
            } while (ppppplVar7 == unaff_x22);
          }
        }
LAB_10734dfbc:
        ppppplVar19 = (long *****)0x40;
        __Znwm();
        pppplStack_120 = (long ****)0x0;
        *ppppplVar19 = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplVar12;
        ppplVar6 = &pplStack_90;
        pppplStack_130 = (long ****)ppppplVar19;
        pppplStack_128 = (long ****)&pppplStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(ppppplVar19 + 2);
        ppppplVar19[5] = (long ****)0x0;
        ppppplVar19[6] = (long ****)0x0;
        ppppplVar19[7] = (long ****)0x0;
        pppplStack_120 = (long ****)CONCAT71(pppplStack_120._1_7_,1);
        if ((ppppplVar9 == (long *****)0x0) ||
           (fStack_a0 * (float)ppppplVar9 < (float)((long)pppplStack_a8 + 1))) {
          bVar3 = (long *****)0x2 < ppppplVar9;
          bVar4 = ppppplVar9 == (long *****)0x3;
          func_0x000107351a7c((long)ppppplVar9 << 1);
          ppppplVar7 = extraout_x8_00;
          if (!bVar3 || bVar4) {
            ppppplVar7 = extraout_x9;
          }
          if ((long)ppppplVar7 - 1U == 0) {
            ppppplVar7 = (long *****)0x2;
          }
          else if (((ulong)ppppplVar7 & (long)ppppplVar7 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppplVar20 = pppplStack_b8;
          if (pppplStack_b8 < ppppplVar7) {
LAB_10734e05c:
            if ((ulong)ppppplVar7 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10734e618;
            }
            ppplVar6 = (long ***)((long)ppppplVar7 << 3);
            __Znwm();
            FUN_1073515e8(&lStack_c0);
            for (ppppplVar9 = (long *****)0x0; ppppplVar7 != ppppplVar9;
                ppppplVar9 = (long *****)((long)ppppplVar9 + 1)) {
              *(undefined8 *)(lStack_c0 + (long)ppppplVar9 * 8) = 0;
            }
            ppppplVar9 = ppppplVar7;
            pppplStack_b8 = (long ****)ppppplVar7;
            if ((long *****)pppplStack_b0 != (long *****)0x0) {
              ppppplVar15 = (long *****)pppplStack_b0[1];
              uVar10 = (long)ppppplVar7 - 1;
              uVar22 = 0;
              if (ppppplVar7 != (long *****)0x0) {
                uVar22 = (ulong)ppppplVar15 / (ulong)ppppplVar7;
              }
              ppppplVar16 = ppppplVar15;
              if (ppppplVar7 <= ppppplVar15) {
                ppppplVar16 = (long *****)((long)ppppplVar15 - uVar22 * (long)ppppplVar7);
              }
              if (((ulong)ppppplVar7 & uVar10) == 0) {
                ppppplVar16 = (long *****)((ulong)ppppplVar15 & uVar10);
              }
              *(long ******)(lStack_c0 + (long)ppppplVar16 * 8) = &pppplStack_b0;
              lVar21 = lStack_c0;
              ppppplVar15 = (long *****)pppplStack_b0;
              while (ppppplVar14 = ppppplVar15, ppppplVar15 = (long *****)*ppppplVar14,
                    ppppplVar15 != (long *****)0x0) {
                ppppplVar17 = (long *****)ppppplVar15[1];
                if (((ulong)ppppplVar7 & uVar10) == 0) {
                  ppppplVar17 = (long *****)((ulong)ppppplVar17 & uVar10);
                }
                else if (ppppplVar7 <= ppppplVar17) {
                  uVar22 = 0;
                  if (ppppplVar7 != (long *****)0x0) {
                    uVar22 = (ulong)ppppplVar17 / (ulong)ppppplVar7;
                  }
                  ppppplVar17 = (long *****)((long)ppppplVar17 - uVar22 * (long)ppppplVar7);
                }
                if (ppppplVar17 != ppppplVar16) {
                  if (*(long *)(lVar21 + (long)ppppplVar17 * 8) == 0) {
                    *(long ******)(lVar21 + (long)ppppplVar17 * 8) = ppppplVar14;
                    ppppplVar16 = ppppplVar17;
                  }
                  else {
                    *ppppplVar14 = *ppppplVar15;
                    func_0x000107351978();
                    lVar21 = extraout_x8_01;
                    uVar10 = extraout_x9_00;
                    ppppplVar15 = extraout_x10;
                    ppppplVar16 = extraout_x11;
                  }
                }
              }
            }
          }
          else {
            ppppplVar9 = (long *****)pppplStack_b8;
            if (ppppplVar7 < pppplStack_b8) {
              ppppplVar9 = (long *****)(long)((float)pppplStack_a8 / fStack_a0);
              if ((pppplStack_b8 < (long *****)0x3) ||
                 (((ulong)pppplStack_b8 & (long)pppplStack_b8 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *****)0x1 < ppppplVar9) {
                ppppplVar9 = (long *****)(1L << (-LZCOUNT((long)ppppplVar9 + -1) & 0x3fU));
              }
              if (ppppplVar7 <= ppppplVar9) {
                ppppplVar7 = ppppplVar9;
              }
              ppppplVar9 = (long *****)pppplStack_b8;
              if (ppppplVar7 < pppplVar20) {
                if (ppppplVar7 != (long *****)0x0) goto LAB_10734e05c;
                ppplVar6 = (long ***)0x0;
                FUN_1073515e8(&lStack_c0);
                pppplStack_b8 = (long ****)0x0;
                ppppplVar9 = (long *****)0x0;
              }
            }
          }
          if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
            unaff_x22 = (long *****)((long)ppppplVar9 - 1U & (ulong)ppppplVar12);
          }
          else {
            unaff_x22 = ppppplVar12;
            if (ppppplVar9 <= ppppplVar12) {
              uVar22 = 0;
              if (ppppplVar9 != (long *****)0x0) {
                uVar22 = (ulong)ppppplVar12 / (ulong)ppppplVar9;
              }
              unaff_x22 = (long *****)((long)ppppplVar12 - uVar22 * (long)ppppplVar9);
            }
          }
        }
        puVar11 = *(undefined8 **)(lStack_c0 + (long)unaff_x22 * 8);
        if (puVar11 == (undefined8 *)0x0) {
          *ppppplVar19 = pppplStack_b0;
          *(long ******)(lStack_c0 + (long)unaff_x22 * 8) = &pppplStack_b0;
          pppplStack_b0 = (long ****)ppppplVar19;
          if (*ppppplVar19 != (long ****)0x0) {
            ppppplVar12 = (long *****)(*ppppplVar19)[1];
            if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
              ppppplVar12 = (long *****)((ulong)ppppplVar12 & (long)ppppplVar9 - 1U);
            }
            else if (ppppplVar9 <= ppppplVar12) {
              uVar22 = 0;
              if (ppppplVar9 != (long *****)0x0) {
                uVar22 = (ulong)ppppplVar12 / (ulong)ppppplVar9;
              }
              ppppplVar12 = (long *****)((long)ppppplVar12 - uVar22 * (long)ppppplVar9);
            }
            *(long ******)(lStack_c0 + (long)ppppplVar12 * 8) = ppppplVar19;
          }
        }
        else {
          *ppppplVar19 = (long ****)*puVar11;
          *puVar11 = ppppplVar19;
        }
        pppplStack_130 = (long ****)0x0;
        pppplStack_a8 = (long ****)((long)pppplStack_a8 + 1);
        func_0x000107351600(&pppplStack_130);
LAB_10734e24c:
        ppppplVar12 = ppppplVar19 + 7;
        pppplVar8 = *ppppplVar12;
        pppplVar20 = ppppplVar19[6];
        in_ZR = pppplVar20 == pppplVar8;
        if (pppplVar20 < pppplVar8) {
          param_2 = ppppplVar23 + 3;
          FUN_10734dbb4(pppplVar20);
          pppplVar20 = pppplVar20 + 9;
          ppppplVar19[6] = pppplVar20;
        }
        else {
          lVar21 = (long)pppplVar20 - (long)ppppplVar19[5];
          pppplVar20 = (long ****)(lVar21 / 0x48 + 1);
          if ((long ****)0x38e38e38e38e38e < pppplVar20) {
            FUN_10734db68();
LAB_10734e618:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10734e61c);
            (*pcVar2)();
          }
          uVar22 = ((long)pppplVar8 - (long)ppppplVar19[5]) / 0x48;
          pppplVar8 = (long ****)(uVar22 * 2);
          if (pppplVar8 < pppplVar20 || (long)pppplVar8 - (long)pppplVar20 == 0) {
            pppplVar8 = pppplVar20;
          }
          if (0x1c71c71c71c71c6 < uVar22) {
            pppplVar8 = (long ****)0x38e38e38e38e38e;
          }
          pppplStack_110 = (long ****)ppppplVar12;
          if (pppplVar8 == (long ****)0x0) {
            pppplVar8 = (long ****)0x0;
            ppplVar6 = (long ***)0x0;
          }
          else {
            FUN_10734db7c();
          }
          lVar21 = (long)pppplVar8 + lVar21;
          ppplStack_118 = (long ***)(pppplVar8 + (long)ppplVar6 * 9);
          param_2 = ppppplVar23 + 3;
          pppplStack_130 = pppplVar8;
          pppplStack_128 = (long ****)lVar21;
          pppplStack_120 = (long ****)lVar21;
          FUN_10734dbb4();
          pppplStack_120 = (long ****)(lVar21 + 0x48);
          pppplVar8 = ppppplVar19[5];
          pppplVar1 = ppppplVar19[6];
          unaff_x22 = (long *****)(lVar21 + (((long)pppplVar1 - (long)pppplVar8) / -0x48) * 0x48);
          pppplStack_178 = (long ****)&pppplStack_98;
          pppplStack_170 = (long ****)apppplStack_148;
          apppplStack_148[0] = (long ****)unaff_x22;
          pppplStack_180 = (long ****)ppppplVar12;
          pppplStack_98 = (long ****)unaff_x22;
          for (pppplVar20 = pppplVar8; pppplVar20 != pppplVar1; pppplVar20 = pppplVar20 + 9) {
            *(undefined4 *)apppplStack_148[0] = *(undefined4 *)pppplVar20;
            pppplVar24 = (long ****)pppplVar20[2];
            pppplVar13 = (long ****)pppplVar20[1];
            apppplStack_148[0][3] = pppplVar20[3];
            apppplStack_148[0][2] = (long ***)pppplVar24;
            apppplStack_148[0][1] = (long ***)pppplVar13;
            pppplVar20[2] = (long ***)0x0;
            pppplVar20[3] = (long ***)0x0;
            pppplVar20[1] = (long ***)0x0;
            *(undefined1 *)(apppplStack_148[0] + 4) = *(undefined1 *)(pppplVar20 + 4);
            pppplVar13 = (long ****)pppplVar20[8];
            if (pppplVar13 == (long ****)0x0) {
              apppplStack_148[0][8] = (long ***)0x0;
            }
            else if (pppplVar20 + 5 == pppplVar13) {
              param_2 = (long *****)(apppplStack_148[0] + 5);
              apppplStack_148[0][8] = (long ***)param_2;
              func_0x000107351e14(pppplVar20[8]);
              (*extraout_x8_02)();
            }
            else {
              apppplStack_148[0][8] = (long ***)pppplVar13;
              pppplVar20[8] = (long ***)0x0;
            }
            apppplStack_148[0] = apppplStack_148[0] + 9;
          }
          uStack_168 = 1;
          for (; in_ZR = pppplVar8 == pppplVar1, !(bool)in_ZR; pppplVar8 = pppplVar8 + 9) {
            func_0x00010734d880(pppplVar8);
          }
          FUN_10734dbfc(&pppplStack_180);
          pppplVar20 = pppplStack_120;
          pppplStack_130 = ppppplVar19[5];
          ppppplVar19[5] = (long ****)unaff_x22;
          pppplVar8 = ppppplVar19[7];
          ppppplVar19[7] = (long ****)ppplStack_118;
          ppppplVar19[6] = pppplStack_120;
          pppplStack_128 = pppplStack_130;
          pppplStack_120 = pppplStack_130;
          ppplStack_118 = (long ***)pppplVar8;
          func_0x000107351640(&pppplStack_130);
        }
        ppppplVar19[6] = pppplVar20;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_90);
    }
    ppppplVar23 = (long *****)pppplStack_b0;
    if ((long *****)pppplStack_a8 != (long *****)0x0) {
      pppplStack_130._0_4_ = 0x1e;
      ppplStack_118 = (long ***)((ulong)ppplStack_118 & 0xffffffff00000000);
      uStack_100 = 0;
      uStack_f8 = 0;
      pppplStack_110 = (long ****)&PTR_DAT_110996720;
      uStack_108 = 0;
      uStack_f0._0_4_ = 0x1e;
      uStack_e8._5_3_ = (undefined3)((ulong)uStack_e8 >> 0x28);
      uStack_e8._0_5_ = 0x100000000;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      func_0x000107351990(ppppplVar18[0x1e],&pppplStack_130);
      func_0x000107351d3c();
      pppplStack_130 = (long ****)CONCAT44(pppplStack_130._4_4_,0x1f);
      ppplStack_118 = (long ***)((ulong)ppplStack_118 & 0xffffffff00000000);
      uStack_100 = 0;
      uStack_f8 = 0;
      pppplStack_110 = (long ****)&PTR_DAT_110996720;
      uStack_108 = 0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0x1f);
      uStack_e8 = CONCAT35(uStack_e8._5_3_,0x100000000);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      pppplStack_180 = pppplStack_a8;
      pppplStack_178 = (long ****)CONCAT44(pppplStack_178._4_4_,3);
      pplStack_90 = (long **)*ppppplVar18[0x1e];
      uStack_88 = 3;
      param_2 = &pppplStack_130;
      FUN_10743fa44(ppppplVar18[0x1e],param_2,&pppplStack_180,&pplStack_90,7);
      func_0x000107351d3c();
      ppppplVar23 = (long *****)pppplStack_b0;
    }
    for (; ppppplVar23 != (long *****)0x0; ppppplVar23 = (long *****)*ppppplVar23) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppplStack_148,ppppplVar23 + 2);
      iVar5 = iRam00000001136ca250 + 1;
      iRam00000001136ca250 = iVar5;
      pppplStack_180 = (long ****)ppppplVar18;
      func_0x000107351da4();
      ppplStack_158 = (long ***)ppppplVar23[6];
      ppplStack_160 = (long ***)ppppplVar23[5];
      ppplStack_150 = (long ***)ppppplVar23[7];
      ppppplVar23[6] = (long ****)0x0;
      ppppplVar23[7] = (long ****)0x0;
      ppppplVar23[5] = (long ****)0x0;
      FUN_10734d68c(&pppplStack_130,ppppplVar18 + 0x40);
      FUN_10734da34(&ppplStack_118,&pppplStack_180);
      puStack_78 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      *puVar11 = &PTR_SUB_1109a49a8;
      puVar11[2] = pppplStack_128;
      puVar11[1] = pppplStack_130;
      pppplStack_130 = (long ****)0x0;
      pppplStack_128 = (long ****)0x0;
      puVar11[4] = ppplStack_118;
      puVar11[3] = pppplStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar11 + 5,&pppplStack_110);
      puVar11[9] = uStack_f0;
      puVar11[8] = uStack_f8;
      puVar11[10] = uStack_e8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_f8 = 0;
      param_2 = apppplStack_148;
      puStack_78 = puVar11;
      FUN_10734ca88(ppppplVar18,param_2,0,iVar5,&pplStack_90);
      func_0x0001072cc30c(&pplStack_90);
      func_0x00010734d598(&pppplStack_130);
      func_0x00010734d5b8(&pppplStack_180);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppplStack_148);
    }
    FUN_10734dcf4(&lStack_c0);
  }
  func_0x000107270b00(auStack_190);
  func_0x000107351844(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107351d3c();
  FUN_10734dcf4(&lStack_c0);
  func_0x000107270b00();
  do {
    func_0x00010735190c();
  } while ((int)param_2 == 0);
  func_0x000107351d2c();
  func_0x0001073519f4();
  func_0x000107351970();
  func_0x0001073518b8();
  return;
}



/* Entry: 10734e6f8; end: 10734e71f;  */

void FUN_10734e6f8(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a44f8);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734e720; end: 10734e72b;  */

undefined ** FUN_10734e720(void)

{
  return &PTR_DAT_1109a44f8;
}



/* Entry: 10734e72c; end: 10734e75f;  */

void FUN_10734e72c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351b54();
  *param_1 = &PTR_SUB_1109a4498;
  FUN_10734e760(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10734e760; end: 10734e78f;  */

void FUN_10734e760(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10734e790; end: 10734e86b;  */

void FUN_10734e790(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10734e808;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10734e808:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 10734e86c; end: 10734e8a7;  */

void FUN_10734e86c(long *param_1,undefined8 param_2)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_1 != -1) {
    puStack_20 = &uStack_18;
    uStack_18 = param_2;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(param_1,&puStack_20,FUN_10734e8a8);
  }
  return;
}



/* Entry: 10734e8a8; end: 10734e947;  */

long * FUN_10734e8a8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_30;
  lVar3 = **(long **)*param_1;
  plVar1 = *(long **)(lVar3 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(&lStack_30);
    if (*(char *)(lVar3 + 0x30) == '\x01') {
      func_0x0001072ab4a4(lVar3 + 0x20);
    }
    *(undefined8 *)(lVar3 + 0x28) = uStack_28;
    *(long *)(lVar3 + 0x20) = lStack_30;
    lStack_30 = 0;
    uStack_28 = 0;
    *(undefined1 *)(lVar3 + 0x30) = 1;
    func_0x0001072ab4a4(&lStack_30);
    return plVar2;
  }
  func_0x000104bfeb48();
  *plVar1 = (long)&PTR_SUB_1109a4518;
  FUN_10734c48c(plVar1 + 1);
  return plVar1;
}



/* Entry: 10734e948; end: 10734e95b;  */

void FUN_10734e948(void)

{
  func_0x00010734e91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734e95c; end: 10734e98f;  */

undefined8 FUN_10734e95c(undefined8 param_1)

{
  func_0x000107351bd0();
  FUN_10734ef20();
  return param_1;
}



/* Entry: 10734e990; end: 10734e9b3;  */

void FUN_10734e990(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_SUB_1109a4518);
  func_0x000107351ba0();
  FUN_10734d7d4();
  return;
}



/* Entry: 10734e9b4; end: 10734eeeb;  */

void FUN_10734e9b4(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined ****ppppuVar2;
  undefined1 *puVar3;
  undefined *****pppppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined ***extraout_x8_00;
  undefined ***pppuVar6;
  undefined ****extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  undefined ****ppppuVar7;
  undefined1 auStack_248 [16];
  undefined ***pppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined ***pppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 *puStack_188;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [16];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  undefined ****ppppuStack_130;
  undefined ****ppppuStack_128;
  undefined ****ppppuStack_120;
  undefined ****ppppuStack_118;
  undefined1 auStack_f0 [24];
  undefined *****pppppuStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ****ppppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined1 auStack_78 [24];
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x0001073518a8();
  iVar1 = (int)auStack_248;
  uStack_58 = extraout_x8;
  func_0x000107351ad0();
  func_0x000107351a90();
  if (iVar1 != 0) {
    ppppuVar7 = *(undefined *****)(param_1 + 0x20);
    ppppuVar2 = ppppuVar7 + 0xb;
    FUN_10734d0c8();
    pppuVar6 = *ppppuVar2;
    ppuStack_148 = (undefined **)ppppuVar2[1];
    ppuStack_150 = (undefined **)pppuVar6;
    if ((undefined ***)ppuStack_148 != (undefined ***)0x0) {
      do {
        func_0x000107351c74();
        pppuVar6 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (pppuVar6 != (undefined ***)0x0) {
      func_0x000107351cd4(auStack_160);
      func_0x000107351cdc();
      if (((ulong)ppppuVar2 & 1) != 0) {
        FUN_10734d498(auStack_178,param_1 + 0x40);
        puVar3 = auStack_178;
        FUN_10734ef5c(puVar3,ppppuVar7[7],ppppuVar7[3][1]);
        if ((int)puVar3 == 0) {
          pppuStack_1d8 = *(undefined ****)(param_1 + 0x78);
          pppuStack_1e0 = *(undefined ****)(param_1 + 0x70);
          if (*(long *)(param_1 + 0x78) != 0) {
            do {
              func_0x0001073518c8();
            } while (extraout_w10_02 != 0);
          }
          iVar1 = (int)puVar3;
          func_0x000107351cd4(&ppppuStack_140);
          func_0x000107351cdc();
          if (iVar1 == 0) {
            if ((undefined ****)pppuStack_1e0 != (undefined ****)0x0) {
              func_0x000107351c84();
              (*extraout_x8_03)();
            }
          }
          else {
            func_0x00010728433c(param_1 + 0x28);
            pppuStack_1f0 = pppuStack_1e0;
            pppuStack_1e8 = pppuStack_1d8;
            pppuStack_c8 = pppuStack_1e0;
            if ((undefined ****)pppuStack_1d8 != (undefined ****)0x0) {
              do {
                func_0x000107351c74();
                pppuStack_c8 = (undefined ***)extraout_x8_01;
              } while (extraout_w11_00 != 0);
            }
            pppuStack_d0 = (undefined ***)&PTR_FUN_1109a4618;
            ppppuStack_b8 = (undefined ****)0x0;
            pppuStack_c0 = pppuStack_1e8;
            if ((undefined ****)pppuStack_1e8 != (undefined ****)0x0) {
              do {
                func_0x0001073518c8();
              } while (extraout_w10_03 != 0);
            }
            ppppuStack_b8 = &pppuStack_d0;
            func_0x000107351c84();
            (*extraout_x8_02)();
            func_0x0001006393ec(&pppuStack_d0);
            FUN_10734d858(&pppuStack_1f0);
          }
          func_0x000107270b00(&ppppuStack_140);
          FUN_10734d858(&pppuStack_1e0);
        }
        else {
          __ZNSt3__16chrono12steady_clock3nowEv();
          ppuStack_1d0 = (undefined **)ppppuVar7[8];
          pppuStack_1d8 = ppppuVar7[7];
          pppuStack_1e0 = (undefined ***)ppppuVar7;
          if (ppppuVar7[8] != (undefined ***)0x0) {
            do {
              func_0x0001073518c8();
            } while (extraout_w10 != 0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1c8,auStack_178);
          uStack_1a8 = *(undefined8 *)(param_1 + 0x78);
          uStack_1b0 = *(undefined8 *)(param_1 + 0x70);
          if (*(long *)(param_1 + 0x78) != 0) {
            do {
              func_0x0001073518c8();
            } while (extraout_w10_00 != 0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1a0,param_1 + 0x40);
          puStack_188 = puVar3;
          func_0x000107351bd8(&pppuStack_d0);
          pppppuVar4 = &ppppuStack_b8;
          FUN_10734f088(pppppuVar4,&pppuStack_1e0);
          ppppuStack_128 = (undefined ****)0x0;
          func_0x000107351bd0();
          ppppuVar2 = ppppuStack_b8;
          pppuVar6 = pppuStack_c0;
          pppppuVar4[2] = (undefined ****)pppuStack_c8;
          pppppuVar4[1] = (undefined ****)pppuStack_d0;
          *pppppuVar4 = (undefined ****)&PTR_FUN_1109a4588;
          pppuStack_d0 = (undefined ***)0x0;
          pppuStack_c8 = (undefined ***)0x0;
          pppppuVar4[4] = ppppuVar2;
          pppppuVar4[3] = (undefined ****)pppuVar6;
          pppppuVar4[6] = (undefined ****)pppuStack_a8;
          pppppuVar4[5] = (undefined ****)pppuStack_b0;
          pppuStack_b0 = (undefined ***)0x0;
          pppuStack_a8 = (undefined ***)0x0;
          func_0x000107351d04(&pppuStack_d0);
          pppppuVar4[0xb] = (undefined ****)pppuStack_80;
          pppppuVar4[10] = (undefined ****)pppuStack_88;
          if ((undefined ****)pppuStack_80 != (undefined ****)0x0) {
            do {
              func_0x0001073518c8();
            } while (extraout_w10_01 != 0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (pppppuVar4 + 0xc,auStack_78);
          pppppuVar4[0xf] = (undefined ****)pppuStack_60;
          ppppuStack_128 = (undefined ****)pppppuVar4;
          func_0x000107351d18();
          FUN_10734b1cc(&ppppuStack_140);
          FUN_10734efec(&pppuStack_d0);
          func_0x00010734f00c(&pppuStack_1e0);
        }
        FUN_10734d498(auStack_208,param_1 + 0x58);
        uVar5 = param_1 + 0x40;
        func_0x0001000e107c(uVar5,param_1 + 0x58);
        if ((uVar5 & 1) == 0) {
          puVar3 = auStack_208;
          FUN_10734ef5c(puVar3,ppppuVar7[7],ppppuVar7[3][1]);
          if ((int)puVar3 != 0) {
            ppuStack_228 = (undefined **)ppppuVar7[8];
            ppuStack_230 = (undefined **)ppppuVar7[7];
            pppuStack_238 = (undefined ***)ppppuVar7;
            if (ppppuVar7[8] != (undefined ***)0x0) {
              do {
                func_0x0001073518c8();
              } while (extraout_w10_04 != 0);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_220,auStack_208);
            func_0x000107351bd8(&ppppuStack_140);
            pppppuVar4 = &ppppuStack_128;
            FUN_10734f724(pppppuVar4,&pppuStack_238);
            pppppuStack_d8 = (undefined *****)0x0;
            func_0x000107351d70();
            ppppuVar2 = ppppuStack_128;
            pppppuVar4[2] = ppppuStack_138;
            pppppuVar4[1] = ppppuStack_140;
            *pppppuVar4 = (undefined ****)&PTR_FUN_1109a4698;
            ppppuStack_140 = (undefined ****)0x0;
            ppppuStack_138 = (undefined ****)0x0;
            pppppuVar4[4] = ppppuVar2;
            pppppuVar4[3] = ppppuStack_130;
            pppppuVar4[6] = ppppuStack_118;
            pppppuVar4[5] = ppppuStack_120;
            ppppuStack_120 = (undefined ****)0x0;
            ppppuStack_118 = (undefined ****)0x0;
            func_0x000107351d04(&ppppuStack_140);
            pppppuStack_d8 = pppppuVar4;
            func_0x000107351d18();
            FUN_10734b1cc(auStack_f0);
            func_0x00010734f044(&ppppuStack_140);
            func_0x00010734f064(&pppuStack_238);
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
      }
      func_0x000107270b00(auStack_160);
    }
    func_0x0001072ab4a4(&ppuStack_150);
  }
  func_0x000107351c08();
  func_0x000107351844(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10734b1cc(auStack_f0);
    func_0x00010734f044(&ppppuStack_140);
    func_0x00010734f064(&pppuStack_238);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    func_0x000107270b00(auStack_160);
    do {
      func_0x0001072ab4a4(&ppuStack_150);
      func_0x000107351c08();
      func_0x00010735190c();
    } while( true );
  }
  return;
}



/* Entry: 10734eeec; end: 10734ef13;  */

void FUN_10734eeec(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4708);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734ef14; end: 10734ef1f;  */

undefined ** FUN_10734ef14(void)

{
  return &PTR_DAT_1109a4708;
}



/* Entry: 10734ef20; end: 10734ef5b;  */

void FUN_10734ef20(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_SUB_1109a4518);
  func_0x000107351ba0();
  FUN_10734d7d4();
  return;
}



/* Entry: 10734ef5c; end: 10734efeb;  */

void FUN_10734ef5c(ulong param_1,long *param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined1 uStack_21;
  
  (**(code **)(*param_2 + 0x28))(param_2);
  if ((param_1 & 1) != 0) {
    func_0x000107351dcc();
    func_0x0001073518f8();
    func_0x000107351ab0();
    func_0x000107351afc(uStack_21);
    uVar1 = 0xa8c0;
    if (extraout_x8 != 0) {
      uVar1 = 600;
    }
    func_0x000107351b44();
    FUN_10734d4ac(param_2,uVar1);
  }
  return;
}



/* Entry: 10734efec; end: 10734f087;  */

long FUN_10734efec(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107351a14();
  func_0x00010734f00c();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10734f088; end: 10734f11f;  */

void FUN_10734f088(void)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107351a08();
  func_0x000107351e20();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x18,unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x40,unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10734f120; end: 10734f14b;  */

undefined8 * FUN_10734f120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4588;
  FUN_10734efec(param_1 + 1);
  return param_1;
}



/* Entry: 10734f14c; end: 10734f15f;  */

void FUN_10734f14c(void)

{
  FUN_10734f120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734f160; end: 10734f193;  */

undefined8 FUN_10734f160(undefined8 param_1)

{
  func_0x000107351bd0();
  FUN_10734f3b4();
  return param_1;
}



/* Entry: 10734f194; end: 10734f1b7;  */

void FUN_10734f194(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_FUN_1109a4588);
  func_0x000107351ba0();
  FUN_10734f088();
  return;
}



/* Entry: 10734f1b8; end: 10734f37f;  */

void FUN_10734f1b8(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined4 auStack_c0 [6];
  undefined4 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_74;
  
  puVar1 = auStack_100;
  func_0x000107351a08();
  func_0x000107351ad0();
  func_0x000107351a90();
  if ((int)puVar1 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (*(int *)(unaff_x20 + 0x80) == 1) {
      puVar1 = *(undefined1 **)(unaff_x19 + 0x50);
      if (puVar1 != (undefined1 *)0x0) {
        func_0x000107351c84();
        (*extraout_x8_00)();
      }
    }
    else if (*(int *)(unaff_x20 + 0x80) == 0) {
      FUN_10734f5b4();
      FUN_10734f3f0();
      puVar1 = *(undefined1 **)(unaff_x19 + 0x50);
      if (puVar1 != (undefined1 *)0x0) {
        func_0x000107351c84();
        (*extraout_x8)();
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar5 = *(long *)(unaff_x19 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0xf0);
    auStack_c0[0] = 0x18;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107351e40();
    uStack_74 = 1;
    func_0x000107351c40();
    func_0x000107351e34();
    puVar2 = auStack_c0;
    func_0x000107351b34(puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_d8,unaff_x19 + 0x60);
    func_0x000107351b8c();
    func_0x00010726e300(puVar2);
    func_0x000107351990(uVar3,puVar2);
    func_0x000107351b44();
    func_0x0001073519dc();
    auStack_c0[0] = 0x1b;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107351e40();
    uStack_74 = 1;
    func_0x000107351c40();
    func_0x000107351e34();
    func_0x000107351b34(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f0,unaff_x19 + 0x60);
    func_0x000107351b8c();
    func_0x000107351dc4();
    func_0x000107351c20((long)puVar1 - lVar5);
    func_0x000107351c30();
    func_0x0001073519dc();
  }
  func_0x0001073519ec();
  return;
}



/* Entry: 10734f380; end: 10734f3a7;  */

void FUN_10734f380(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a45f8);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734f3a8; end: 10734f3b3;  */

undefined ** FUN_10734f3a8(void)

{
  return &PTR_DAT_1109a45f8;
}



/* Entry: 10734f3b4; end: 10734f3ef;  */

void FUN_10734f3b4(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_FUN_1109a4588);
  func_0x000107351ba0();
  FUN_10734f088();
  return;
}



/* Entry: 10734f3f0; end: 10734f5b3;  */

uint FUN_10734f3f0(ulong param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [32];
  byte bStack_b8;
  undefined1 auStack_b0 [76];
  undefined1 uStack_64;
  
  if (*(char *)(param_1 + 0x79) == '\x01') {
    func_0x000107351cec(*(undefined8 *)(*param_3 + 0x30));
    uVar3 = 1;
    if ((param_1 & 1) == 0) {
      func_0x000107351858(0x22);
      uStack_64 = 1;
      func_0x000107351c40();
      func_0x000107351ab8();
      func_0x000107351938();
      func_0x0001073519dc();
    }
    iVar2 = 0;
    goto LAB_10734f568;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x18))(auStack_f0,param_3,param_2);
  if (bStack_b8 == 1) {
    plVar1 = (long *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    func_0x0001000e107c(plVar1,auStack_d8);
    if (((ulong)plVar1 & 1) == 0) goto LAB_10734f524;
    func_0x000107351cec(*(undefined8 *)(*param_3 + 0x30));
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000107351858(0x22);
      uStack_64 = 1;
      func_0x000107351c40();
      func_0x000107351ab8();
      func_0x000107351938();
      func_0x0001073519dc();
    }
    func_0x000107351bf8(*(undefined8 *)(param_1 + 0x48));
    uVar3 = 1;
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000107351858(0x22);
      uStack_64 = 1;
      func_0x000107351c40();
      func_0x00010729d56c(auStack_b0,&DAT_10f40ac14,"etag");
      func_0x000107351938();
      func_0x0001073519dc();
    }
    iVar2 = 0;
  }
  else {
LAB_10734f524:
    func_0x000107351bf8(*(undefined8 *)(param_1 + 0x38));
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000107351858(0x21);
      uStack_64 = 1;
      func_0x000107351c40();
      func_0x000107351938();
      func_0x0001073519dc();
    }
    iVar2 = 1;
    uVar3 = (uint)bStack_b8;
  }
  func_0x0001072fa808(auStack_f0);
LAB_10734f568:
  return uVar3 | iVar2 << 8;
}



/* Entry: 10734f5b4; end: 10734f603;  */

void FUN_10734f5b4(long param_1)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  func_0x00010563ab98();
  FUN_10743f9dc();
  return;
}



/* Entry: 10734f604; end: 10734f62f;  */

undefined8 * FUN_10734f604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4618;
  FUN_10734d858(param_1 + 1);
  return param_1;
}



/* Entry: 10734f630; end: 10734f643;  */

void FUN_10734f630(void)

{
  FUN_10734f604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734f644; end: 10734f68b;  */

void FUN_10734f644(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a4618;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10734f68c; end: 10734f6ef;  */

void FUN_10734f68c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a4618;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073518c8(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10734f6f0; end: 10734f717;  */

void FUN_10734f6f0(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4678);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734f718; end: 10734f723;  */

undefined ** FUN_10734f718(void)

{
  return &PTR_DAT_1109a4678;
}



/* Entry: 10734f724; end: 10734f76b;  */

long FUN_10734f724(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107351e20();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 10734f76c; end: 10734f797;  */

undefined8 * FUN_10734f76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4698;
  func_0x00010734f044(param_1 + 1);
  return param_1;
}



/* Entry: 10734f798; end: 10734f7ab;  */

void FUN_10734f798(void)

{
  FUN_10734f76c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734f7ac; end: 10734f7df;  */

undefined8 FUN_10734f7ac(undefined8 param_1)

{
  func_0x000107351d70();
  FUN_10734f8a8();
  return param_1;
}



/* Entry: 10734f7e0; end: 10734f803;  */

void FUN_10734f7e0(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_FUN_1109a4698);
  func_0x000107351ba0();
  FUN_10734f724();
  return;
}



/* Entry: 10734f804; end: 10734f873;  */

void FUN_10734f804(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  
  func_0x000107351b08();
  iVar1 = unaff_w20 + 8;
  func_0x00010734e81c();
  if ((iVar1 != 0) && (*(int *)(unaff_x19 + 0x80) == 0)) {
    FUN_10734f5b4();
    FUN_10734f3f0();
  }
  func_0x0001073519ec();
  return;
}



/* Entry: 10734f874; end: 10734f89b;  */

void FUN_10734f874(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a46f8);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734f89c; end: 10734f8a7;  */

undefined ** FUN_10734f89c(void)

{
  return &PTR_DAT_1109a46f8;
}



/* Entry: 10734f8a8; end: 10734f8e3;  */

void FUN_10734f8a8(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_FUN_1109a4698);
  func_0x000107351ba0();
  FUN_10734f724();
  return;
}



/* Entry: 10734f8e4; end: 10734f8fb;  */

void FUN_10734f8e4(long *param_1,long param_2)

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



/* Entry: 10734f8fc; end: 10734f91f;  */

undefined8 FUN_10734f8fc(undefined8 param_1)

{
  FUN_10734f920(param_1,0);
  return param_1;
}



/* Entry: 10734f920; end: 10734f937;  */

void FUN_10734f920(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010734d880(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10734f938; end: 10734fa03;  */

void FUN_10734f938(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010734d880(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10734fa04; end: 10734faa3;  */

long FUN_10734fa04(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 10734faa4; end: 10734fad3;  */

undefined8 FUN_10734faa4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10734fad4(auStack_38);
  FUN_10734f8fc(auStack_38);
  return uVar1;
}



/* Entry: 10734fad4; end: 10734fbc7;  */

void FUN_10734fad4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10734fb88;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10734fb88;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10734fb88:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10734fbc8; end: 10734fbe3;  */

long * FUN_10734fbc8(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010734fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  func_0x000107351c64();
  func_0x0001072cc30c();
  return param_1;
}



/* Entry: 10734fbe4; end: 10734fc07;  */

undefined8 FUN_10734fbe4(undefined8 param_1)

{
  func_0x000107351c64();
  func_0x0001072cc30c();
  return param_1;
}



/* Entry: 10734fc08; end: 10734fc1b;  */

void FUN_10734fc08(void)

{
  FUN_10734fbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734fc1c; end: 10734fc4f;  */

undefined8 FUN_10734fc1c(undefined8 param_1)

{
  func_0x000107351c54();
  FUN_10734fe24();
  return param_1;
}



/* Entry: 10734fc50; end: 10734fc73;  */

undefined8 FUN_10734fc50(long param_1,undefined8 param_2)

{
  func_0x000107351c64(param_2,param_1 + 8);
  func_0x00010734f97c();
  return param_2;
}



/* Entry: 10734fc74; end: 10734fdef;  */

void FUN_10734fc74(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107351b54();
  func_0x0001073518a8();
  uStack_38 = extraout_x8;
  func_0x00010734f97c(auStack_98,unaff_x20 + 8);
  func_0x00010734f97c(auStack_b8,unaff_x20 + 8);
  func_0x00010734f97c(auStack_78,auStack_98);
  func_0x00010734f97c(auStack_58,auStack_b8);
  if (*(int *)(unaff_x19 + 0x80) == 0) {
    func_0x000107351bac(*(undefined8 *)(unaff_x19 + 0x38),auStack_120);
    func_0x000107351bac(*(undefined8 *)(unaff_x19 + 0x48),&uStack_108);
    func_0x000107351bb4();
    uStack_d0 = uStack_100;
    uStack_d8 = uStack_108;
    uStack_c8 = uStack_f8;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_c0 = 0;
    func_0x000107351d60(uStack_60);
    func_0x000107351a74();
    FUN_10734d9e8(auStack_120);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_120);
    func_0x000107351bb4();
    uStack_c0 = 2;
    func_0x000107351d60(uStack_40);
    func_0x000107351a74();
    func_0x0001073519e4();
  }
  func_0x00010734fe48(auStack_78);
  func_0x0001072cc30c(auStack_b8);
  func_0x0001072cc30c(auStack_98);
  func_0x000107351844(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107351a48();
  FUN_10734d9e8(auStack_120);
  func_0x00010734fe48(auStack_78);
  func_0x0001072cc30c(auStack_b8);
  func_0x0001072cc30c(auStack_98);
  do {
    func_0x00010735190c();
  } while( true );
}



/* Entry: 10734fdf0; end: 10734fe17;  */

void FUN_10734fdf0(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4788);
  func_0x0001073518b8();
  return;
}



/* Entry: 10734fe18; end: 10734fe23;  */

undefined ** FUN_10734fe18(void)

{
  return &PTR_DAT_1109a4788;
}



/* Entry: 10734fe24; end: 10734fe9b;  */

undefined8 FUN_10734fe24(undefined8 param_1)

{
  func_0x000107351c64();
  func_0x00010734f97c();
  return param_1;
}



/* Entry: 10734fe9c; end: 10734feaf;  */

void FUN_10734fe9c(void)

{
  func_0x00010734fe70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734feb0; end: 10734fee7;  */

undefined8 FUN_10734feb0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb8;
  __Znwm(0xb8);
  FUN_107350288();
  return uVar1;
}



/* Entry: 10734fee8; end: 10734ff0b;  */

void FUN_10734fee8(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_SUB_1109a47a8);
  func_0x000107351ba0();
  FUN_10734d8f8();
  return;
}



/* Entry: 10734ff0c; end: 107350253;  */

void FUN_10734ff0c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  int extraout_w11;
  long *plVar5;
  long lVar6;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [184];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [32];
  undefined1 uStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001073518a8();
  iVar1 = (int)auStack_298;
  uStack_58 = extraout_x8;
  func_0x000107351ad0();
  func_0x000107351a90();
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    plVar5 = (long *)(lVar6 + 0x58);
    FUN_10734d0c8();
    lVar4 = *plVar5;
    lStack_1b8 = plVar5[1];
    lStack_1c0 = lVar4;
    if (lStack_1b8 != 0) {
      do {
        func_0x000107351c74();
        lVar4 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (lVar4 != 0) {
      func_0x000107351cd4(auStack_1d0);
      func_0x000107351cdc();
      if (((ulong)plVar5 & 1) != 0) {
        (**(code **)(**(long **)(lVar6 + 0x38) + 0x38))
                  (&uStack_120,*(long **)(lVar6 + 0x38),param_1 + 0x58);
        FUN_10734d1c0(auStack_288,param_1 + 0x40,&uStack_120,lVar6 + 0xd8,lVar6 + 0xa8,lVar6 + 0xc0,
                      lVar6 + 0xfc);
        puVar3 = &uStack_120;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        __ZNSt3__16chrono12steady_clock3nowEv();
        puVar2 = (undefined8 *)(lVar6 + 0x58);
        FUN_10734d0c8();
        plVar5 = (long *)*puVar2;
        lStack_1b0 = lVar6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1a8,param_1 + 0x40);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_190,param_1 + 0x58);
        func_0x00010028af84(auStack_178,param_1 + 0x70);
        uStack_158 = *(undefined1 *)(param_1 + 0x90);
        uStack_148 = *(undefined4 *)(param_1 + 0x94);
        puStack_150 = puVar3;
        func_0x00010734f97c(auStack_140,param_1 + 0x98);
        FUN_10734d68c(&uStack_120,lVar6 + 0x200);
        FUN_107350318(&uStack_108,&lStack_1b0);
        puStack_60 = (undefined8 *)0x0;
        puVar3 = (undefined8 *)0xb0;
        __Znwm();
        *puVar3 = &PTR_FUN_1109a4818;
        puVar3[2] = uStack_118;
        puVar3[1] = uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        puVar3[4] = uStack_108;
        puVar3[3] = uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar3 + 5,auStack_100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar3 + 8,auStack_e8);
        *(undefined1 *)(puVar3 + 0xb) = 0;
        *(undefined1 *)(puVar3 + 0xe) = 0;
        in_ZR = cStack_b8 == '\x01';
        if ((bool)in_ZR) {
          puVar3[0xc] = uStack_c8;
          puVar3[0xb] = uStack_d0;
          puVar3[0xd] = uStack_c0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_d0 = 0;
          *(undefined1 *)(puVar3 + 0xe) = 1;
        }
        puVar3[0x10] = uStack_a8;
        puVar3[0xf] = uStack_b0;
        *(undefined4 *)(puVar3 + 0x11) = uStack_a0;
        func_0x00010734f97c(puVar3 + 0x12,auStack_98);
        param_1 = param_1 + 0x28;
        puStack_60 = puVar3;
        func_0x00010728433c(param_1);
        (**(code **)(*plVar5 + 0x10))(plVar5,auStack_288,auStack_78,param_1);
        FUN_10734b1cc(auStack_78);
        FUN_1073502c4(&uStack_120);
        func_0x0001073502e4(&lStack_1b0);
        func_0x000107351c18();
      }
      func_0x000107270b00(auStack_1d0);
    }
    func_0x0001072ab4a4(&lStack_1c0);
  }
  func_0x000107351c08();
  func_0x000107351844(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10734b1cc(auStack_78);
    FUN_1073502c4(&uStack_120);
    func_0x0001073502e4(&lStack_1b0);
    func_0x000107351c18();
    func_0x000107270b00(auStack_1d0);
    do {
      func_0x0001072ab4a4(&lStack_1c0);
      func_0x000107351c08();
      func_0x00010735190c();
    } while( true );
  }
  return;
}



/* Entry: 107350254; end: 10735027b;  */

void FUN_107350254(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4888);
  func_0x0001073518b8();
  return;
}



/* Entry: 10735027c; end: 107350287;  */

undefined ** FUN_10735027c(void)

{
  return &PTR_DAT_1109a4888;
}



/* Entry: 107350288; end: 1073502c3;  */

void FUN_107350288(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_SUB_1109a47a8);
  func_0x000107351ba0();
  FUN_10734d8f8();
  return;
}



/* Entry: 1073502c4; end: 107350317;  */

long FUN_1073502c4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107351a14();
  func_0x0001073502e4();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107350318; end: 107350393;  */

void FUN_107350318(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107351ad8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107351d54();
  func_0x00010028af84(unaff_x19 + 0x38,unaff_x21 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x58);
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x21 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  func_0x00010734f97c(unaff_x19 + 0x70,unaff_x21 + 0x70);
  return;
}



/* Entry: 107350394; end: 1073503bf;  */

undefined8 * FUN_107350394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4818;
  FUN_1073502c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073503c0; end: 1073503d3;  */

void FUN_1073503c0(void)

{
  FUN_107350394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073503d4; end: 10735040b;  */

undefined8 FUN_1073503d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm(0xb0);
  FUN_107350ba8();
  return uVar1;
}



/* Entry: 10735040c; end: 10735042f;  */

void FUN_10735040c(long param_1,undefined8 param_2)

{
  func_0x000107351a08(param_2,param_1 + 8);
  func_0x000107351880(&PTR_FUN_1109a4818);
  func_0x000107351ba0();
  FUN_107350318();
  return;
}



/* Entry: 107350430; end: 107350b73;  */

void FUN_107350430(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  byte bVar16;
  long lVar17;
  undefined1 auStack_438 [16];
  ulong auStack_428 [3];
  char cStack_410;
  long lStack_408;
  undefined1 auStack_400 [56];
  undefined1 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [56];
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined1 auStack_320 [24];
  undefined8 *puStack_308;
  ulong uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2b8;
  undefined1 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_150;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_78;
  
  lVar17 = param_2;
  func_0x0001073518a8();
  iVar6 = (int)auStack_438;
  uStack_78 = extraout_x8;
  func_0x000107351ad0();
  func_0x000107351a90();
  if (iVar6 == 0) goto LAB_1073506d8;
  lVar13 = *(long *)(param_1 + 0x20);
  uVar7 = (int)*(undefined8 *)(*(long *)(lVar13 + 0x18) + 8) + 0x9c0;
  func_0x00010724e330();
  in_ZR = ((uVar7 ^ 0xffffffff) & 0x101) == 0;
  if ((bool)in_ZR) {
    uVar12 = param_1 + 0x28;
    func_0x0001005d466c();
    uStack_2f0 = (ulong)*(byte *)(param_1 + 0x78);
    uStack_2e8 = 0;
    uStack_300 = uVar12;
    lStack_2f8 = lVar17;
    func_0x0001003a91d4(&UNK_10f40ac2c);
    func_0x0001003a9204(&uStack_380);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_100,&uStack_380);
    lStack_2f8 = uStack_f8;
    uStack_300 = uStack_100;
    uStack_2f0 = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_2d0 = 2;
    func_0x000107351d4c(*(undefined8 *)(param_1 + 0xa8));
    func_0x000107351a6c();
    func_0x000107351d68();
    func_0x000107351bf0();
    goto LAB_1073506d8;
  }
  FUN_10734d5e0(auStack_428,lVar13,*(undefined4 *)(param_1 + 0x88));
  if (cStack_410 == '\x01') {
    puVar8 = auStack_428;
    func_0x0001000e107c(puVar8,param_1 + 0x28);
    if ((int)puVar8 != 0) goto LAB_10735053c;
LAB_107350584:
    bVar3 = false;
    bVar16 = 0;
  }
  else {
LAB_10735053c:
    if (*(int *)(param_2 + 0x80) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_380,param_2);
      lStack_2f8 = uStack_378;
      uStack_300 = uStack_380;
      uStack_2f0 = uStack_370;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_380 = 0;
      uStack_2d0 = 2;
      puVar8 = *(ulong **)(param_1 + 0xa8);
      func_0x000107351d4c(puVar8);
      func_0x000107351a6c();
      func_0x000107351bf0();
      goto LAB_107350584;
    }
    FUN_10734f5b4(param_2);
    func_0x000107351afc(*(undefined1 *)(param_1 + 0x3f));
    if (extraout_x8_00 == 0) {
      FUN_10734d498(&uStack_300,*(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc);
      lVar17 = param_2;
      FUN_10734f3f0(param_2,&uStack_300,*(undefined8 *)(lVar13 + 0x38),
                    *(undefined8 *)(lVar13 + 0xf0));
      uVar7 = (uint)lVar17;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
    }
    else {
      lVar17 = param_2;
      FUN_10734f3f0(param_2,param_1 + 0x40,*(undefined8 *)(lVar13 + 0x38),
                    *(undefined8 *)(lVar13 + 0xf0));
      uVar7 = (uint)lVar17;
    }
    bVar16 = *(byte *)(param_1 + 0x78);
    bVar2 = *(byte *)(param_1 + 0x70);
    plVar15 = *(long **)(lVar13 + 0x18);
    func_0x00010002b838(&uStack_300,PTR_DAT_1131ad040);
    (**(code **)(*plVar15 + 0x28))(plVar15,&uStack_300);
    puVar8 = &uStack_300;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
    if ((*(long *)(lVar13 + 0x98) != 0) && (((uint)plVar15 & 0x101) == 0x101)) {
      uVar12 = *(ulong *)(param_2 + 0x18);
      puVar8 = (ulong *)(param_2 + 0x18);
      if ((uVar12 & 1) != 0) {
        puVar8 = (ulong *)(uVar12 + 7);
      }
      for (lVar17 = (long)*(int *)(param_2 + 0x20) << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
        uVar12 = *puVar8;
        func_0x000107262e9c(&lStack_b0,*(ulong *)(uVar12 + 0x10) & 0xfffffffffffffffc);
        uStack_100 = uStack_100 & 0xffffffffffffff00;
        uStack_b8 = 0;
        auStack_400[0] = 0;
        uStack_3c8 = 0;
        func_0x00010724aea8(&uStack_300,0,&lStack_b0,&uStack_100,3,auStack_400);
        func_0x00010724b12c(auStack_400);
        func_0x00010724b2ac(&uStack_100);
        func_0x000104c2f714(&lStack_b0);
        uStack_150 = 0x100;
        if (*(int *)(uVar12 + 0x18) == 2) {
          uStack_150 = 0x101;
        }
        plVar15 = *(long **)(lVar13 + 0x98);
        lStack_3c0 = lVar13;
        func_0x0001072a5348(auStack_3b8,&uStack_300);
        func_0x000107351bd8(&uStack_380);
        puVar10 = &uStack_368;
        func_0x00010734da0c(puVar10,&lStack_3c0);
        puStack_308 = (undefined8 *)0x0;
        func_0x000107351d94();
        *puVar10 = &PTR_FUN_1109a48a8;
        uVar5 = uStack_368;
        uVar14 = uStack_370;
        puVar10[2] = uStack_378;
        puVar10[1] = uStack_380;
        uStack_380 = 0;
        uStack_378 = 0;
        puVar10[4] = uVar5;
        puVar10[3] = uVar14;
        func_0x000104c318bc(puVar10 + 5,&ppuStack_360);
        puStack_308 = puVar10;
        (**(code **)(*plVar15 + 0x10))(&lStack_408,plVar15,&uStack_300,auStack_320);
        func_0x0001072ad0c8(auStack_320);
        FUN_10734d574(&uStack_380);
        func_0x000104c2f714(auStack_3b8);
        func_0x0001072a5348(&uStack_100,&uStack_300);
        func_0x00010724ef84(auStack_400,&uStack_100);
        uStack_a8 = 1;
        lStack_b0 = lVar13 + 0x130;
        func_0x000107279a5c(lVar13 + 0x130);
        plVar15 = (long *)(lVar13 + 0x1d8);
        FUN_10735114c(plVar15,auStack_400);
        lVar4 = lStack_408;
        lStack_408 = 0;
        lVar11 = *plVar15;
        *plVar15 = lVar4;
        if (lVar11 != 0) {
          func_0x000107351a20();
        }
        func_0x000107279ee0(&lStack_b0);
        func_0x000107351b98();
        func_0x000104c2f714(&uStack_100);
        lVar4 = lStack_408;
        lStack_408 = 0;
        if (lVar4 != 0) {
          func_0x000107351a20();
        }
        func_0x00010724b374(&uStack_300);
        puVar8 = puVar8 + 1;
      }
      puVar8 = *(ulong **)(lVar13 + 0xf0);
      func_0x000107351a38(0x111,puVar8);
      func_0x00010735191c();
      uStack_2b0 = 0;
      FUN_10734d538();
      func_0x000107351b2c();
    }
    uVar1 = bVar16 ^ 1;
    if ((uVar7 & 0xff00) == 0) {
      uVar1 = 1;
    }
    if (((uVar1 & uVar7 & 0xffff) == 1) && ((bVar2 & 1) != 0)) {
      bVar16 = 0;
      bVar3 = true;
    }
    else {
      func_0x000107351bac(*(undefined8 *)(param_2 + 0x38),&uStack_380);
      func_0x000107351bac(*(undefined8 *)(param_2 + 0x48),&uStack_368);
      uStack_2f0 = uStack_370;
      lStack_2f8 = uStack_378;
      uStack_300 = uStack_380;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_380 = 0;
      ppuStack_2e0 = ppuStack_360;
      uStack_2e8 = uStack_368;
      uStack_2d8 = uStack_358;
      uStack_368 = 0;
      ppuStack_360 = (undefined **)0x0;
      uStack_358 = 0;
      uStack_2d0 = 0;
      func_0x000107351d4c(*(undefined8 *)(param_1 + 0xa8));
      func_0x000107351a6c();
      puVar8 = &uStack_380;
      func_0x00010734d9e8(puVar8);
      bVar3 = true;
      bVar16 = 1;
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar17 = *(long *)(param_1 + 0x80);
  uVar14 = *(undefined8 *)(lVar13 + 0xf0);
  bVar2 = *(byte *)(param_1 + 0x70);
  func_0x000107351a38(0x1a);
  func_0x00010735191c();
  uStack_2b0 = 0;
  func_0x000107351e34();
  puVar9 = &uStack_300;
  func_0x000107351b34(puVar9);
  in_ZR = !(bool)(bVar3 & bVar16);
  func_0x00010729d56c();
  func_0x000107351d34(&uStack_380);
  func_0x000107351b8c();
  func_0x00010726e300(puVar9);
  func_0x000107351990(uVar14,puVar9);
  func_0x000107351bf0();
  func_0x000107351b2c();
  func_0x000107351a38(0x1b);
  ppuStack_2e0 = &PTR_DAT_110996720;
  uStack_2d8 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 1;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b0 = 0;
  func_0x000107351e34();
  func_0x000107351b34(&uStack_300);
  func_0x000107351d34(&uStack_100);
  func_0x000107351b8c();
  func_0x000107351dc4();
  func_0x000107351c20((long)puVar8 - lVar17);
  func_0x000107351d68();
  func_0x000107351b2c();
  if (!bVar3 && (bVar2 & 1) == 0) {
    func_0x000107351a38(0x20);
    func_0x00010735191c();
    uStack_2b0 = 0;
    func_0x000107351d34(auStack_400);
    func_0x000107351b8c();
    puVar8 = &uStack_300;
    func_0x00010726e300(puVar8);
    func_0x000107351990(uVar14,puVar8);
    func_0x000107351b98();
    func_0x000107351b2c();
  }
  func_0x0001001148fc(auStack_428);
LAB_1073506d8:
  func_0x000107270b00(auStack_438);
  func_0x000107351844(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
    func_0x0001001148fc(auStack_428);
    do {
      func_0x000107270b00(auStack_438);
      func_0x00010735190c();
    } while( true );
  }
  return;
}



/* Entry: 107350b74; end: 107350b9b;  */

void FUN_107350b74(undefined8 param_1)

{
  func_0x0001073519f4();
  func_0x000107351970(param_1,&PTR_DAT_1109a4878);
  func_0x0001073518b8();
  return;
}



/* Entry: 107350b9c; end: 107350ba7;  */

undefined ** FUN_107350b9c(void)

{
  return &PTR_DAT_1109a4878;
}



/* Entry: 107350ba8; end: 107350be3;  */

void FUN_107350ba8(void)

{
  func_0x000107351a08();
  func_0x000107351880(&PTR_FUN_1109a4818);
  func_0x000107351ba0();
  FUN_107350318();
  return;
}



/* Entry: 107350be4; end: 107350c0f;  */

undefined8 * FUN_107350be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a48a8;
  FUN_10734d574(param_1 + 1);
  return param_1;
}



/* Entry: 107350c10; end: 107350c23;  */

void FUN_107350c10(void)

{
  FUN_107350be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107350c24; end: 107350c47;  */

undefined8 FUN_107350c24(void)

{
  undefined8 unaff_x20;
  
  func_0x000107351d94();
  func_0x000107351b54();
  func_0x000107351880(&PTR_FUN_1109a48a8);
  func_0x00010734da0c();
  return unaff_x20;
}



/* Entry: 107350c48; end: 107350c6b;  */

void FUN_107350c48(long param_1,undefined8 param_2)

{
  func_0x000107351b54(param_2,param_1 + 8);
  func_0x000107351880(&PTR_FUN_1109a48a8);
  func_0x00010734da0c();
  return;
}



/* Entry: 107350c6c; end: 107350db3;  */

void FUN_107350c6c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  long *plStack_78;
  undefined1 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_a0;
  func_0x0001073518a8();
  uStack_38 = extraout_x8;
  func_0x000107351ad0();
  func_0x000107351a90();
  if (iVar1 == 0) goto LAB_107350d40;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010724ef84(auStack_90,param_1 + 0x28);
  pppuStack_40 = appuStack_58;
  appuStack_58[0] = &PTR_FUN_1109a4918;
  lStack_68 = lVar4 + 0x130;
  uStack_60 = 1;
  func_0x000107279a5c();
  lVar2 = lVar4 + 0x1d8;
  FUN_107350e20(lVar2,auStack_90);
  if (lVar2 == 0) {
LAB_107350d18:
    uStack_70 = 0;
    plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
  }
  else {
    pppuVar3 = appuStack_58;
    func_0x0001072ace20(pppuVar3,lVar2 + 0x28);
    if ((int)pppuVar3 == 0) goto LAB_107350d18;
    unaff_x20 = *(long **)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_107350ef4(lVar4 + 0x1d8,auStack_90);
    uStack_70 = 1;
    plStack_78 = unaff_x20;
  }
  func_0x000107279ee0(&lStack_68);
  func_0x0001072ad074(&plStack_78);
  func_0x0001072ad094();
  func_0x000107351c30();
LAB_107350d40:
  func_0x0001073519ec();
  func_0x000107351844(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 8))(unaff_x20);
  }
  func_0x000107279ee0(&lStack_68);
  func_0x0001072ad094(appuStack_58);
  func_0x000107351c30();
  func_0x0001073519ec();
  func_0x00010735190c();
  func_0x0001073519f4();
  func_0x000107351970();
  func_0x0001073518b8();
  return;
}


