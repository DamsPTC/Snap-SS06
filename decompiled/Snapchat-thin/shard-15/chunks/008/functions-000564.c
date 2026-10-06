/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bccca30; end: 10bcccb8b;  */

undefined8 * FUN_10bccca30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x00010bcce234();
  plVar5 = *(long **)(param_1 + 0x30);
  lStack_d0 = param_2[1];
  uStack_d8 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__17promiseIvEC1Ev(&uStack_a0);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_a8,&uStack_a0);
  uStack_88 = uStack_a0;
  uStack_a0 = 0;
  uStack_b8 = uStack_d8;
  lStack_b0 = lStack_d0;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_98 = FUN_10bcccdd0;
  ppuStack_90 = &PTR_DAT_110d9a0a8;
  uStack_c8 = 0;
  uStack_78 = uStack_d8;
  lStack_70 = lStack_d0;
  lStack_c0 = param_1;
  lStack_80 = param_1;
  if (lStack_d0 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,&pcStack_98);
  func_0x00010bcce1b4();
  FUN_10bcccda8(&uStack_c8);
  __ZNSt3__117__assoc_sub_state4waitEv(uStack_a8);
  __ZNSt3__16futureIvED1Ev(&uStack_a8);
  __ZNSt3__17promiseIvED1Ev(&uStack_a0);
  puVar4 = &uStack_d8;
  func_0x00010b21c33c();
  func_0x00010bcce1d4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__16futureIvED1Ev(&uStack_a8);
    __ZNSt3__17promiseIvED1Ev(&uStack_a0);
    puVar4 = &uStack_d8;
    func_0x00010b21c33c();
    func_0x00010bcce17c();
    *puVar4 = &PTR_DAT_110d9a078;
    FUN_10bcceaec(puVar4[6]);
    func_0x000107c27c20(puVar4 + 6);
    FUN_10bcccd08(puVar4 + 1);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10bcccb8c; end: 10bcccbd3;  */

undefined8 * FUN_10bcccb8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9a078;
  FUN_10bcceaec(param_1[6]);
  func_0x000107c27c20(param_1 + 6);
  FUN_10bcccd08(param_1 + 1);
  return param_1;
}



/* Entry: 10bcccbd4; end: 10bccccb7;  */

void FUN_10bcccbd4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 auStack_c0 [5];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x00010bcce234();
  func_0x00010b21be60(auStack_c0);
  func_0x00010b21bd60(param_1,auStack_c0);
  plVar2 = *(long **)(param_2 + 0x30);
  lStack_f0 = param_2;
  FUN_10bccccb8(auStack_e8,auStack_c0);
  pcStack_98 = FUN_10bccd248;
  func_0x00010bcce0e4(auStack_90,&lStack_f0);
  (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_98);
  func_0x00010bcce1a4();
  func_0x00010bcce1f4();
  func_0x00010b21c0c8(auStack_c0);
  func_0x00010bcce1d4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcce1a4();
  func_0x00010b21c0c8(auStack_e8);
  func_0x00010b1059a4(param_1);
  puVar1 = auStack_c0;
  func_0x00010b21c0c8();
  func_0x00010bcce194();
  FUN_10bccccdc();
  *puVar1 = &PTR_DAT_110cc8530;
  return;
}



/* Entry: 10bccccb8; end: 10bccccdb;  */

void FUN_10bccccb8(undefined8 *param_1)

{
  FUN_10bccccdc();
  *param_1 = &PTR_DAT_110cc8530;
  return;
}



/* Entry: 10bccccdc; end: 10bcccd07;  */

void FUN_10bccccdc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110cc8578;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10bcccd08; end: 10bcccd8f;  */

long FUN_10bcccd08(long param_1)

{
  func_0x00010bcccd30(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10bcccd90(param_1,0);
  return param_1;
}



/* Entry: 10bcccd90; end: 10bcccda7;  */

void FUN_10bcccd90(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcccda8; end: 10bcccdcf;  */

void FUN_10bcccda8(long param_1)

{
  func_0x00010b21c33c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_1103468b8)(param_1);
  return;
}



/* Entry: 10bcccdd0; end: 10bccd19b;  */

void FUN_10bcccdd0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long **pplVar7;
  int extraout_w10;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  long **pplVar12;
  long **unaff_x22;
  long **pplVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x18);
  plStack_78 = *(long **)(param_1 + 0x20);
  pplVar7 = &plStack_78;
  func_0x000107c278cc(pplVar7,8);
  pplVar13 = *(long ***)(lVar1 + 0x10);
  if (pplVar13 == (long **)0x0) {
    lVar14 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar4 = (long)pplVar13 - 1;
    if (((ulong)pplVar13 & uVar4) == 0) {
      unaff_x22 = (long **)(uVar4 & (ulong)pplVar7);
    }
    else {
      unaff_x22 = pplVar7;
      if (pplVar13 <= pplVar7) {
        uVar6 = 0;
        if (pplVar13 != (long **)0x0) {
          uVar6 = (ulong)pplVar7 / (ulong)pplVar13;
        }
        unaff_x22 = (long **)((long)pplVar7 - uVar6 * (long)pplVar13);
      }
    }
    plVar5 = *(long **)(*(long *)(lVar1 + 8) + (long)unaff_x22 * 8);
    lVar14 = *(long *)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10bcccea0;
          pplVar8 = (long **)plVar5[1];
          if (pplVar8 != pplVar7) break;
          if (plVar5[2] == lVar14) goto LAB_10bccd160;
        }
        if (((ulong)pplVar13 & uVar4) == 0) {
          pplVar8 = (long **)((ulong)pplVar8 & uVar4);
        }
        else if (pplVar13 <= pplVar8) {
          uVar6 = 0;
          if (pplVar13 != (long **)0x0) {
            uVar6 = (ulong)pplVar8 / (ulong)pplVar13;
          }
          pplVar8 = (long **)((long)pplVar8 - uVar6 * (long)pplVar13);
        }
      } while (pplVar8 == unaff_x22);
    }
  }
LAB_10bcccea0:
  lVar15 = *(long *)(param_1 + 0x28);
  plVar5 = (long *)(lVar1 + 0x18);
  plVar3 = (long *)0x20;
  __Znwm();
  uStack_68 = 1;
  *plVar3 = 0;
  plVar3[1] = (long)pplVar7;
  plVar3[2] = lVar14;
  plVar3[3] = lVar15;
  plStack_78 = plVar3;
  plStack_70 = plVar5;
  if (lVar15 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  fVar16 = (float)(*(long *)(lVar1 + 0x20) + 1);
  if ((pplVar13 != (long **)0x0) && (fVar16 <= *(float *)(lVar1 + 0x28) * (float)pplVar13))
  goto LAB_10bccd0e8;
  uVar4 = 1;
  if ((long **)0x2 < pplVar13) {
    uVar4 = (ulong)(((ulong)pplVar13 & (long)pplVar13 - 1U) != 0);
  }
  pplVar8 = (long **)(uVar4 | (long)pplVar13 << 1);
  pplVar13 = (long **)(long)(fVar16 / *(float *)(lVar1 + 0x28));
  if (pplVar8 <= pplVar13) {
    pplVar8 = pplVar13;
  }
  if ((long)pplVar8 - 1U == 0) {
    pplVar8 = (long **)0x2;
  }
  else if (((ulong)pplVar8 & (long)pplVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  pplVar13 = *(long ***)(lVar1 + 0x10);
  if (pplVar13 < pplVar8) {
LAB_10bcccf5c:
    if ((ulong)pplVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10bccd18c);
      (*pcVar2)();
    }
    lVar14 = (long)pplVar8 << 3;
    __Znwm(lVar14);
    FUN_10bccd19c(lVar1 + 8,lVar14);
    *(long ***)(lVar1 + 0x10) = pplVar8;
    lVar14 = *(long *)(lVar1 + 8);
    for (pplVar13 = (long **)0x0; pplVar8 != pplVar13; pplVar13 = (long **)((long)pplVar13 + 1)) {
      *(undefined8 *)(lVar14 + (long)pplVar13 * 8) = 0;
    }
    plVar9 = (long *)*plVar5;
    pplVar13 = pplVar8;
    if (plVar9 != (long *)0x0) {
      pplVar11 = (long **)plVar9[1];
      uVar6 = (long)pplVar8 - 1;
      uVar4 = 0;
      if (pplVar8 != (long **)0x0) {
        uVar4 = (ulong)pplVar11 / (ulong)pplVar8;
      }
      pplVar12 = pplVar11;
      if (pplVar8 <= pplVar11) {
        pplVar12 = (long **)((long)pplVar11 - uVar4 * (long)pplVar8);
      }
      if (((ulong)pplVar8 & uVar6) == 0) {
        pplVar12 = (long **)((ulong)pplVar11 & uVar6);
      }
      *(long **)(lVar14 + (long)pplVar12 * 8) = plVar5;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        pplVar11 = (long **)plVar9[1];
        if (((ulong)pplVar8 & uVar6) == 0) {
          pplVar11 = (long **)((ulong)pplVar11 & uVar6);
        }
        else if (pplVar8 <= pplVar11) {
          uVar4 = 0;
          if (pplVar8 != (long **)0x0) {
            uVar4 = (ulong)pplVar11 / (ulong)pplVar8;
          }
          pplVar11 = (long **)((long)pplVar11 - uVar4 * (long)pplVar8);
        }
        if (pplVar11 != pplVar12) {
          if (*(long *)(lVar14 + (long)pplVar11 * 8) == 0) {
            *(long **)(lVar14 + (long)pplVar11 * 8) = plVar10;
            pplVar12 = pplVar11;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar14 + (long)pplVar11 * 8);
            **(long **)(lVar14 + (long)pplVar11 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (pplVar8 < pplVar13) {
    pplVar11 = (long **)(long)((float)*(ulong *)(lVar1 + 0x20) / *(float *)(lVar1 + 0x28));
    if ((pplVar13 < (long **)0x3) || (((ulong)pplVar13 & (long)pplVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long **)0x1 < pplVar11) {
      pplVar11 = (long **)(1L << (-LZCOUNT((long)pplVar11 + -1) & 0x3fU));
    }
    if (pplVar8 <= pplVar11) {
      pplVar8 = pplVar11;
    }
    if (pplVar8 < pplVar13) {
      if (pplVar8 != (long **)0x0) goto LAB_10bcccf5c;
      FUN_10bccd19c(lVar1 + 8,0);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      pplVar13 = (long **)0x0;
    }
    else {
      pplVar13 = *(long ***)(lVar1 + 0x10);
    }
  }
  if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
    unaff_x22 = (long **)((long)pplVar13 - 1U & (ulong)pplVar7);
  }
  else {
    unaff_x22 = pplVar7;
    if (pplVar13 <= pplVar7) {
      uVar4 = 0;
      if (pplVar13 != (long **)0x0) {
        uVar4 = (ulong)pplVar7 / (ulong)pplVar13;
      }
      unaff_x22 = (long **)((long)pplVar7 - uVar4 * (long)pplVar13);
    }
  }
LAB_10bccd0e8:
  lVar14 = *(long *)(lVar1 + 8);
  plVar9 = *(long **)(lVar14 + (long)unaff_x22 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
    *(long **)(lVar14 + (long)unaff_x22 * 8) = plVar5;
    if (*plVar3 != 0) {
      pplVar7 = *(long ***)(*plVar3 + 8);
      if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
        pplVar7 = (long **)((ulong)pplVar7 & (long)pplVar13 - 1U);
      }
      else if (pplVar13 <= pplVar7) {
        uVar4 = 0;
        if (pplVar13 != (long **)0x0) {
          uVar4 = (ulong)pplVar7 / (ulong)pplVar13;
        }
        pplVar7 = (long **)((long)pplVar7 - uVar4 * (long)pplVar13);
      }
      *(long **)(lVar14 + (long)pplVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar9;
    *plVar9 = (long)plVar3;
  }
  plStack_78 = (long *)0x0;
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 1;
  FUN_10bccd1b4(&plStack_78);
LAB_10bccd160:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 0x10);
  return;
}



/* Entry: 10bccd19c; end: 10bccd1b3;  */

void FUN_10bccd19c(long *param_1,long param_2)

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



/* Entry: 10bccd1b4; end: 10bccd1f7;  */

long * FUN_10bccd1b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b21c33c(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10bccd1f8; end: 10bccd247;  */

void FUN_10bccd1f8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110d9a0a8;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  *param_2 = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10bccd248; end: 10bccd813;  */

void FUN_10bccd248(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lStack_180;
  long alStack_178 [6];
  undefined1 auStack_148 [16];
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  long *plStack_f0;
  long *plStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_78;
  long alStack_70 [2];
  
  lVar12 = *(long *)(param_1 + 0x10);
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  uVar6 = *(ulong *)(lVar12 + 0x20);
  if (uVar6 != 0) {
    if (uVar6 >> 0x3c != 0) {
      FUN_10bccd814();
LAB_10bccd6c8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10bccd6cc);
      (*pcVar3)();
    }
    func_0x00010bccd8c8(&plStack_120,uVar6,0,&plStack_128);
    func_0x00010bcce204();
    FUN_10bccd92c(&plStack_120);
  }
  plVar10 = (long *)(lVar12 + 0x18);
  do {
    plVar8 = plStack_130;
    plVar11 = plStack_138;
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      puVar4 = (undefined8 *)0x48;
      __Znwm();
      plVar13 = puVar4 + 1;
      *plVar13 = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_110d9a0d0;
      plVar14 = puVar4 + 3;
      *plVar14 = (long)plVar8 - (long)plVar11 >> 4;
      func_0x000107c27b50(puVar4 + 4);
      plStack_c0 = plVar14;
      puStack_b8 = puVar4;
      func_0x000107c27b4c(auStack_148,puVar4 + 4);
      plVar10 = plStack_130;
      plVar11 = plStack_138;
      if (plStack_138 == plStack_130) {
        func_0x000107c27b68(puVar4 + 4);
      }
      else {
        for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar2) {
              *plVar13 = *plVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          lStack_180 = 0;
          alStack_178[0] = 0;
          alStack_70[0] = 0;
          alStack_70[1] = 0;
          plStack_e0 = plVar14;
          puStack_d8 = puVar4;
          func_0x00010b105c90(&plStack_120,plVar11,alStack_70);
          func_0x00010b105ce4(&lStack_180,&plStack_120);
          func_0x00010bcce218();
          func_0x00010b1059a4(alStack_70);
          func_0x000107c27b48(&plStack_78);
          func_0x000107c27b4c(&lStack_90,plStack_78);
          plStack_110 = plStack_78;
          plStack_e0 = (long *)0x0;
          puStack_d8 = (undefined8 *)0x0;
          plStack_78 = (long *)0x0;
          lStack_a0 = 0;
          lStack_98 = 0;
          plStack_b0 = (long *)(lStack_180 + 0x38);
          lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
          plStack_120 = plVar14;
          puStack_118 = puVar4;
          __ZNSt3__15mutex4lockEv();
          lVar7 = lStack_180;
          func_0x00010b105d24();
          if ((int)lVar7 == 0) {
            puVar5 = (undefined8 *)0x20;
            __Znwm();
            plVar8 = plStack_110;
            *puVar5 = &PTR_FUN_110d9a120;
            puVar5[2] = puStack_118;
            puVar5[1] = plStack_120;
            plStack_120 = (long *)0x0;
            puStack_118 = (undefined8 *)0x0;
            plStack_110 = (long *)0x0;
            puVar5[3] = plVar8;
            plVar8 = *(long **)(lStack_180 + 0x80);
            *(undefined8 **)(lStack_180 + 0x80) = puVar5;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
          else {
            func_0x00010b105ce4(&lStack_a0,&lStack_180);
          }
          func_0x000107c2798c(&plStack_b0);
          if ((long *)lStack_a0 != (long *)0x0) {
            plStack_b0 = (long *)lStack_a0;
            lStack_a8 = lStack_98;
            if (lStack_98 != 0) {
              do {
                func_0x00010bcce130();
              } while (extraout_w10 != 0);
            }
            FUN_10bccd9a8(&plStack_120);
            func_0x00010b1059a4(&plStack_b0);
          }
          lStack_c8 = uStack_88;
          lStack_d0 = lStack_90;
          lStack_90 = 0;
          uStack_88 = 0;
          func_0x00010b1059a4(&lStack_a0);
          func_0x00010bccdb10(&plStack_120);
          func_0x00010bcce184();
          plVar8 = plStack_78;
          plStack_78 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            func_0x00010bcce124();
          }
          func_0x00010bcce148();
          func_0x000107c27b58(&lStack_d0);
          func_0x00010bccdb38(&plStack_e0);
        }
      }
      func_0x00010bccdb38(&plStack_c0);
      lStack_180 = lVar12;
      FUN_10bccccb8(alStack_178,param_1 + 0x18);
      alStack_70[0] = 0;
      alStack_70[1] = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27b60(&plStack_120,auStack_148,&lStack_90);
      func_0x000107c27b64(alStack_70,&plStack_120);
      func_0x000107c27b58(&plStack_120);
      func_0x00010bcce184();
      func_0x000107c27b48(&plStack_e0);
      func_0x000107c27b4c(&lStack_a0,plStack_e0);
      func_0x00010bccdb60(&plStack_120,&lStack_180);
      plStack_f0 = plStack_e0;
      plStack_e0 = (long *)0x0;
      plStack_b0 = (long *)0x0;
      lStack_a8 = 0;
      plStack_c0 = (long *)(alStack_70[0] + 0x38);
      puStack_b8 = (undefined8 *)CONCAT71(puStack_b8._1_7_,1);
      __ZNSt3__15mutex4lockEv();
      lVar12 = alStack_70[0];
      func_0x0001052a9e98();
      if ((int)lVar12 == 0) {
        __Znwm(0x40);
        func_0x00010bcce220();
        func_0x00010bccdb60();
        plVar10 = plStack_f0;
        plStack_f0 = (long *)0x0;
        *(long **)(param_1 + 0x38) = plVar10;
        lVar12 = *(long *)(alStack_70[0] + 0x80);
        *(long *)(alStack_70[0] + 0x80) = param_1;
        if (lVar12 != 0) {
          func_0x00010bcce124();
        }
      }
      else {
        func_0x000107c27b64(&plStack_b0,alStack_70);
      }
      func_0x000107c2798c(&plStack_c0);
      if (plStack_b0 != (long *)0x0) {
        plStack_c0 = plStack_b0;
        puStack_b8 = (undefined8 *)lStack_a8;
        if (lStack_a8 != 0) {
          do {
            func_0x00010bcce130();
          } while (extraout_w10_00 != 0);
        }
        FUN_10bccdb88(&plStack_120);
        func_0x000107c27b58(&plStack_c0);
      }
      lStack_c8 = lStack_98;
      lStack_d0 = lStack_a0;
      lStack_a0 = 0;
      lStack_98 = 0;
      func_0x000107c27b58(&plStack_b0);
      FUN_10bccde84(&plStack_120);
      func_0x000107c27b58(&lStack_a0);
      plVar10 = plStack_e0;
      plStack_e0 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        func_0x00010bcce124();
      }
      func_0x00010bcce19c();
      func_0x000107c27b58(&lStack_d0);
      func_0x00010bcce1f4();
      func_0x00010bcce1fc();
      FUN_10bcce09c(&plStack_138);
      return;
    }
    FUN_10bcccbd4(&lStack_180,plVar10[2]);
    if (plStack_130 < plStack_128) {
      plVar11 = plStack_130 + 2;
      plStack_130[1] = alStack_178[0];
      *plStack_130 = lStack_180;
      lStack_180 = 0;
      alStack_178[0] = 0;
    }
    else {
      lVar7 = (long)plStack_130 - (long)plStack_138 >> 4;
      uVar6 = lVar7 + 1;
      if (uVar6 >> 0x3c != 0) {
        FUN_10bccd814();
        goto LAB_10bccd6c8;
      }
      uVar9 = (long)plStack_128 - (long)plStack_138 >> 3;
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      if (0x7fffffffffffffef < (ulong)((long)plStack_128 - (long)plStack_138)) {
        uVar9 = 0xfffffffffffffff;
      }
      func_0x00010bccd8c8(&plStack_120,uVar9,lVar7,&plStack_128);
      plStack_110[1] = alStack_178[0];
      *plStack_110 = lStack_180;
      lStack_180 = 0;
      alStack_178[0] = 0;
      plStack_110 = plStack_110 + 2;
      func_0x00010bcce204();
      plVar11 = plStack_130;
      FUN_10bccd92c(&plStack_120);
    }
    plStack_130 = plVar11;
    func_0x00010bcce148();
  } while( true );
}



/* Entry: 10bccd814; end: 10bccd827;  */

void FUN_10bccd814(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar4 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  for (puVar7 = puVar4; puVar7 != puVar2; puVar7 = puVar7 + 2) {
    uVar8 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar8;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar5 = puVar5 + 2;
  }
  for (; puVar4 != puVar2; puVar4 = puVar4 + 2) {
    func_0x00010b1059a4();
  }
  param_2[1] = puVar1;
  lVar6 = *plVar3;
  *plVar3 = (long)puVar1;
  plVar3[1] = lVar6;
  param_2[1] = lVar6;
  lVar6 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bccd828; end: 10bccd92b;  */

void FUN_10bccd828(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar4 = puVar1;
  for (puVar6 = puVar3; puVar6 != puVar2; puVar6 = puVar6 + 2) {
    uVar7 = *puVar6;
    puVar4[1] = puVar6[1];
    *puVar4 = uVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar4 = puVar4 + 2;
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
    func_0x00010b1059a4();
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bccd92c; end: 10bccd973;  */

long * FUN_10bccd92c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x00010b1059a4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bccd974; end: 10bccd977;  */

void FUN_10bccd974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a0d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bccd978; end: 10bccd98b;  */

void FUN_10bccd978(void)

{
  func_0x00010bccd998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccd98c; end: 10bccd9a7;  */

void FUN_10bccd98c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  param_1 = param_1 + 0x20;
  func_0x0001003b6a18();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000104bf336c();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x0001003b6c64(unaff_x19 + 0x18);
  func_0x0001003b6c64((long *)(param_1 + 8));
  return;
}



/* Entry: 10bccd9a8; end: 10bccda87;  */

void FUN_10bccd9a8(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = param_2;
  lStack_48 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
    do {
      func_0x00010bcce130();
    } while (extraout_w10_00 != 0);
  }
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_40 = param_2;
  lStack_38 = param_3;
  if (lVar4 + -1 == 0) {
    func_0x000107c27b68(*param_1 + 8);
  }
  func_0x00010b1059a4(&uStack_40);
  func_0x00010b1059a4(&uStack_50);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10bccda88; end: 10bccda8b;  */

undefined8 * FUN_10bccda88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a120;
  func_0x00010bccdb10(param_1 + 1);
  return param_1;
}



/* Entry: 10bccda8c; end: 10bccda9f;  */

void FUN_10bccda8c(void)

{
  FUN_10bccdae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccdaa0; end: 10bccdae3;  */

void FUN_10bccdaa0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010bcce168();
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  FUN_10bccd9a8(param_1 + 8);
  func_0x00010bcce148();
  return;
}



/* Entry: 10bccdae4; end: 10bccdb87;  */

undefined8 * FUN_10bccdae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a120;
  func_0x00010bccdb10(param_1 + 1);
  return param_1;
}



/* Entry: 10bccdb88; end: 10bccde83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bccdb88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar4;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [40];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_58 [5];
  
  uStack_128 = param_2;
  lStack_120 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
    do {
      func_0x00010bcce130();
    } while (extraout_w10_00 != 0);
  }
  plVar4 = (long *)*param_1;
  uStack_118 = param_2;
  lStack_110 = param_3;
  if (plVar4[4] != 0) {
    func_0x00010bcccd30(plVar4 + 1,plVar4[3]);
    plVar4[3] = 0;
    lVar3 = plVar4[2];
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(plVar4[1] + lVar2 * 8) = 0;
    }
    plVar4[4] = 0;
  }
  (**(code **)(*plVar4 + 0x18))(auStack_d0,plVar4);
  FUN_10bccccb8(auStack_108,param_1 + 1);
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  func_0x00010b105c90(auStack_a0,auStack_d0,alStack_58 + 1);
  func_0x00010b105ce4(alStack_58 + 3,auStack_a0);
  func_0x00010b1059a4(auStack_a0);
  func_0x00010b1059a4(alStack_58 + 1);
  func_0x000107c27b48(alStack_58);
  func_0x000107c27b4c(&uStack_70,alStack_58[0]);
  FUN_10bccccb8(auStack_a0,auStack_108);
  lStack_78 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_c0 = alStack_58[3] + 0x38;
  lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_58[3];
  func_0x00010b105d24();
  if ((int)lVar2 == 0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
    *puVar1 = &PTR_SUB_110d9a1a0;
    FUN_10bccccb8(puVar1 + 1,auStack_a0);
    lVar2 = lStack_78;
    lStack_78 = 0;
    puVar1[6] = lVar2;
    lVar2 = *(long *)(alStack_58[3] + 0x80);
    *(undefined8 **)(alStack_58[3] + 0x80) = puVar1;
    if (lVar2 != 0) {
      func_0x00010bcce124();
    }
  }
  else {
    func_0x00010b105ce4(&lStack_b0,alStack_58 + 3);
  }
  func_0x000107c2798c(&lStack_c0);
  if (lStack_b0 != 0) {
    lStack_c0 = lStack_b0;
    lStack_b8 = lStack_a8;
    if (lStack_a8 != 0) {
      do {
        func_0x00010bcce130();
      } while (extraout_w10_01 != 0);
    }
    FUN_10bccdf30(auStack_a0);
    func_0x00010b1059a4(&lStack_c0);
  }
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b1059a4(&lStack_b0);
  FUN_10bccdff0(auStack_a0);
  func_0x00010bcce19c();
  lVar2 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar2 != 0) {
    func_0x00010bcce124();
  }
  func_0x00010b1059a4(alStack_58 + 3);
  func_0x000107c27b58(&uStack_e0);
  func_0x00010b21c0c8(auStack_108);
  func_0x00010bcce218();
  func_0x000107c27b58(&uStack_118);
  func_0x000107c27b58(&uStack_128);
  func_0x000107c27b68(param_1[6]);
  return;
}



/* Entry: 10bccde84; end: 10bccdecf;  */

long FUN_10bccde84(long param_1)

{
  func_0x000107c27b70(param_1 + 0x30);
  func_0x00010b21c0c8(param_1 + 8);
  return param_1;
}



/* Entry: 10bccded0; end: 10bccdee3;  */

void FUN_10bccded0(void)

{
  func_0x00010bccdeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccdee4; end: 10bccdf2f;  */

void FUN_10bccdee4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010bcce168();
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  FUN_10bccdb88(param_1 + 8);
  func_0x000107c27b58(auStack_30);
  return;
}



/* Entry: 10bccdf30; end: 10bccdfef;  */

void FUN_10bccdf30(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  uStack_58 = param_2;
  lStack_50 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
    do {
      func_0x00010bcce130();
    } while (extraout_w10_00 != 0);
  }
  uStack_48 = param_2;
  lStack_40 = param_3;
  func_0x00010b21bdac(param_1,&uStack_31);
  func_0x00010b1059a4(&uStack_48);
  func_0x00010b1059a4(&uStack_58);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bccdff0; end: 10bcce043;  */

long FUN_10bccdff0(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000107c27b70(param_1 + 0x28);
  func_0x00010b21c464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x00010b21c12c(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b1059a4(unaff_x19 + 0x18);
  func_0x00010b1059a4((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 10bcce044; end: 10bcce057;  */

void FUN_10bcce044(void)

{
  func_0x00010bcce018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcce058; end: 10bcce09b;  */

void FUN_10bcce058(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010bcce168();
  if (param_3 != 0) {
    do {
      func_0x00010bcce130();
    } while (extraout_w10 != 0);
  }
  FUN_10bccdf30(param_1 + 8);
  func_0x00010bcce148();
  return;
}



/* Entry: 10bcce09c; end: 10bcce113;  */

long * FUN_10bcce09c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x00010b1059a4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10bcce114; end: 10bcce267;  */

void FUN_10bcce114(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  param_1 = param_1 + 0x10;
  func_0x00010b21c464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x00010b21c12c();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b1059a4(unaff_x19 + 0x18);
  func_0x00010b1059a4((long *)(param_1 + 8));
  return;
}



/* Entry: 10bcce268; end: 10bcce323;  */

void FUN_10bcce268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___tlv_bootstrap_11340e248;
  ppuVar3 = &PTR___tlv_bootstrap_11340e248;
  ppuVar2 = ppuVar3;
  (*(code *)PTR___tlv_bootstrap_11340e248)();
  if (((ulong)*ppuVar2 & 1) == 0) {
    func_0x000107c2a878(&uStack_50);
    __ZNSt3__113random_deviceclEv(&uStack_50);
    FUN_10bcce454();
    func_0x000107c2a880();
    __ZNSt3__113random_deviceD1Ev(&uStack_50);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar3 = 1;
    ppuVar2 = ppuVar3;
  }
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_10bcce454();
  FUN_10bcce324(&uStack_50,ppuVar2);
  return;
}



/* Entry: 10bcce324; end: 10bcce32b;  */

void FUN_10bcce324(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] - *param_1 != 0) {
    puVar1 = (undefined8 *)((param_1[1] - *param_1) + 1);
    if (puVar1 == (undefined8 *)0x0) {
      uStack_58 = 0x40;
      uStack_60 = 0x40;
      uStack_48 = 1;
      uStack_50 = 1;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xffffffffffffffff;
      uStack_68 = param_2;
      FUN_10bcce428(&uStack_68);
    }
    else {
      lVar2 = 0x3f;
      if (((long)puVar1 << (LZCOUNT(puVar1) & 0x3fU) & 0x7fffffffffffffffU) != 0) {
        lVar2 = 0x40;
      }
      FUN_10bcce3cc(&uStack_68,param_2,lVar2 - LZCOUNT(puVar1));
      do {
        puVar3 = &uStack_68;
        FUN_10bcce428();
      } while (puVar1 <= puVar3);
    }
  }
  return;
}



/* Entry: 10bcce32c; end: 10bcce3cb;  */

void FUN_10bcce32c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3[1] - *param_3 != 0) {
    puVar1 = (undefined8 *)((param_3[1] - *param_3) + 1);
    if (puVar1 == (undefined8 *)0x0) {
      uStack_58 = 0x40;
      uStack_60 = 0x40;
      uStack_48 = 1;
      uStack_50 = 1;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xffffffffffffffff;
      uStack_68 = param_2;
      FUN_10bcce428(&uStack_68);
    }
    else {
      lVar2 = 0x3f;
      if (((long)puVar1 << (LZCOUNT(puVar1) & 0x3fU) & 0x7fffffffffffffffU) != 0) {
        lVar2 = 0x40;
      }
      FUN_10bcce3cc(&uStack_68,param_2,lVar2 - LZCOUNT(puVar1));
      do {
        puVar3 = &uStack_68;
        FUN_10bcce428();
      } while (puVar1 <= puVar3);
    }
  }
  return;
}



/* Entry: 10bcce3cc; end: 10bcce427;  */

void FUN_10bcce3cc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar3 = param_3 >> 6;
  if ((param_3 & 0x3f) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = param_3 / uVar3;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar3 + (uVar2 * uVar3 - param_3);
  param_1[5] = 0;
  uVar1 = 0;
  if (uVar3 <= param_3) {
    uVar1 = 0xffffffffffffffff >> (-uVar2 & 0x3f);
  }
  param_1[6] = 0;
  param_1[7] = uVar1;
  uVar3 = 0xffffffffffffffff >> (~uVar2 & 0x3f);
  if (0x3e < uVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  param_1[8] = uVar3;
  return;
}



/* Entry: 10bcce428; end: 10bcce453;  */

ulong FUN_10bcce428(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  func_0x000108c70948(uVar1);
  return param_1[7] & uVar1;
}



/* Entry: 10bcce454; end: 10bcce45f;  */

void FUN_10bcce454(void)

{
  undefined8 *unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x00010bcce45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_x21)();
  return;
}



/* Entry: 10bcce460; end: 10bcce4c3;  */

undefined8 * FUN_10bcce460(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110d9a1f8;
  plVar1 = (long *)param_1[1];
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  FUN_10bccf3b0(param_1[3]);
  (**(code **)param_1[5])();
  func_0x000107c31440(param_1 + 1);
  return param_1;
}



/* Entry: 10bcce4c4; end: 10bcce4c7;  */

undefined8 * FUN_10bcce4c4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110d9a1f8;
  plVar1 = (long *)param_1[1];
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  FUN_10bccf3b0(param_1[3]);
  (**(code **)param_1[5])();
  func_0x000107c31440(param_1 + 1);
  return param_1;
}



/* Entry: 10bcce4c8; end: 10bcce4db;  */

void FUN_10bcce4c8(void)

{
  FUN_10bcce460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcce4dc; end: 10bcce55b;  */

undefined8 * FUN_10bcce4dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c2816c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10bcce55c; end: 10bcce56b;  */

void FUN_10bcce55c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000105277f8c();
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  func_0x000107c316cc(auStack_48,"timer",5,puVar1[0xc]);
  (*(code *)*puVar1)(puVar1);
  func_0x000107c316d0(auStack_48);
  return;
}



/* Entry: 10bcce56c; end: 10bcce5cf;  */

void FUN_10bcce56c(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000107c316cc(auStack_38,"timer",5,puVar1[0xc]);
  (*(code *)*puVar1)(puVar1);
  func_0x000107c316d0(auStack_38);
  return;
}



/* Entry: 10bcce5d0; end: 10bcce5f3;  */

void FUN_10bcce5d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bcce5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Entry: 10bcce5f4; end: 10bcce64f;  */

void FUN_10bcce5f4(int *param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c3a544(param_1,&UNK_10f82fc0f);
  func_0x000107c31448();
  iVar1 = *param_1;
  if ((*(byte *)(param_1 + 2) & 0 < iVar1) == 0) {
    iVar1 = 2;
  }
  FUN_10bcce650(auStack_38,iVar1);
  func_0x000107c3a530();
  return;
}



/* Entry: 10bcce650; end: 10bcce6d7;  */

undefined8 FUN_10bcce650(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000113404458 & 1) == 0) {
    iVar1 = 0x13404458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c3a54c();
      func_0x000107c3a550();
      func_0x000107c3a548();
      uRam0000000113404450 = unaff_x20;
      ___cxa_guard_release(0x113404458);
    }
  }
  return uRam0000000113404450;
}



/* Entry: 10bcce6d8; end: 10bcce72f;  */

void FUN_10bcce6d8(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c3a544(param_1,&UNK_10f82fc1b);
  func_0x000107c31448();
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x38) & 0 < iVar1) == 0) {
    iVar1 = 1;
  }
  FUN_10bcce730(auStack_38,iVar1);
  func_0x000107c3a530();
  return;
}



/* Entry: 10bcce730; end: 10bcce7b7;  */

undefined8 FUN_10bcce730(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000113404468 & 1) == 0) {
    iVar1 = 0x13404468;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c3a54c();
      func_0x000107c3a550();
      func_0x000107c3a548();
      uRam0000000113404460 = unaff_x20;
      ___cxa_guard_release(0x113404468);
    }
  }
  return uRam0000000113404460;
}



/* Entry: 10bcce7b8; end: 10bcce8fb;  */

void FUN_10bcce7b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  if ((bRam00000001138471b0 & 1) == 0) {
    iVar2 = 0x138471b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      *puVar3 = 0x32aaaba7;
      puVar3[2] = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      puRam00000001138471a8 = puVar3;
      ___cxa_guard_release(0x1138471b0);
    }
  }
  puStack_30 = puRam00000001138471a8;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  if ((bRam00000001138471c0 & 1) == 0) {
    iVar2 = 0x138471c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      *(undefined1 *)puVar3 = 0;
      *(undefined1 *)((long)puVar3 + 0x3c) = 0;
      puRam00000001138471b8 = puVar3;
      ___cxa_guard_release(0x1138471c0);
    }
  }
  puVar3 = puRam00000001138471b8;
  if ((*(byte *)((long)puRam00000001138471b8 + 0x3c) & 1) == 0) {
    uVar5 = param_1[1];
    uVar4 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    uVar9 = param_1[5];
    uVar8 = param_1[4];
    uVar10 = *(undefined8 *)((long)param_1 + 0x2c);
    puVar1 = (undefined8 *)((long)puRam00000001138471b8 + 0x2c);
    *(undefined8 *)((long)puRam00000001138471b8 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
    *puVar1 = uVar10;
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    *(undefined1 *)((long)puVar3 + 0x3c) = 1;
  }
  func_0x000107c2798c(&puStack_30);
  return;
}



/* Entry: 10bcce8fc; end: 10bcce90f;  */

void FUN_10bcce8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcce910; end: 10bcce977;  */

void FUN_10bcce910(long param_1)

{
  long unaff_x19;
  
  func_0x000107c3a568();
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  FUN_10bccec1c((undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10bcce978; end: 10bcce97b;  */

void FUN_10bcce978(long param_1)

{
  long unaff_x19;
  
  func_0x000107c3a568();
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  FUN_10bccec1c((undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10bcce97c; end: 10bcce98f;  */

void FUN_10bcce97c(void)

{
  FUN_10bcce910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcce990; end: 10bcce9b7;  */

undefined8 * FUN_10bcce990(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c2816c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10bcce9b8; end: 10bcceaeb;  */

undefined **** FUN_10bcce9b8(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined ****ppppuVar4;
  undefined ****ppppuVar5;
  undefined ****ppppuVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined ***pppuStack_1d8;
  undefined1 uStack_1d0;
  undefined ***pppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_168;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [11];
  long lStack_b0;
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x000107c3a560();
  uStack_118 = param_4;
  uStack_48 = extraout_x8;
  func_0x000107c28150();
  uStack_110 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_108,param_3 + 1);
  pppuStack_a8 = (undefined ***)FUN_10bccec44;
  pppuStack_a0 = (undefined ***)&PTR_FUN_110d9a298;
  puVar3 = (undefined8 *)0x68;
  lStack_b0 = lVar2;
  __Znwm();
  *puVar3 = uStack_110;
  (*(code *)apuStack_108[0][2])(puVar3 + 1,apuStack_108);
  puVar3[0xc] = lStack_b0;
  puStack_98 = puVar3;
  (*(code *)*apuStack_108[0])(apuStack_108);
  ppppuVar6 = &pppuStack_a8;
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (param_1,*(long **)(param_2 + 8),ppppuVar6,param_2,&uStack_118);
  ppppuVar4 = &pppuStack_a0;
  (*(code *)*pppuStack_a0)();
  func_0x000107c3a554(uStack_48);
  if ((bool)in_ZR) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  ppppuVar4 = &pppuStack_a0;
  (*(code *)*pppuStack_a0)();
  func_0x00010bcced70();
  ppppuVar5 = ppppuVar4;
  func_0x000107c3a560();
  pppuStack_1d8 = (undefined ***)(ppppuVar5 + 4);
  uStack_1d0 = 1;
  uStack_168 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv();
  if (((ulong)ppppuVar4[0xc] & 1) == 0) {
    *(undefined1 *)(ppppuVar4 + 0xc) = 1;
    do {
      func_0x0001059895d4(auStack_1e0);
      func_0x000105989560(auStack_1e8,auStack_1e0);
      pppuStack_1c8 = (undefined ***)FUN_10bccecfc;
      ppuStack_1c0 = &PTR_FUN_110d9a2b0;
      ppppuVar6 = &pppuStack_1c8;
      pppuStack_1b8 = (undefined ***)ppppuVar4;
      puStack_1b0 = auStack_1e0;
      (*(code *)(*ppppuVar4)[2])(ppppuVar4);
      func_0x00010bcced78();
      iVar1 = (int)auStack_1e8;
      func_0x000105989580();
      func_0x000105989710(auStack_1e8);
      func_0x00010598965c(auStack_1e0);
      in_ZR = iVar1 == 1;
    } while (!(bool)in_ZR);
  }
  ppppuVar4 = &pppuStack_1d8;
  func_0x000107c2798c();
  func_0x000107c3a554(uStack_168);
  if ((bool)in_ZR) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pppuStack_1d8);
  func_0x00010bcced70();
  func_0x000105277f8c();
  if (ppppuVar6[1] != (undefined ***)0x0) {
    func_0x000107c278a0();
  }
  return ppppuVar6;
}



/* Entry: 10bcceaec; end: 10bccec0b;  */

code ** FUN_10bcceaec(long *param_1,code **param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000107c3a560();
  pcStack_b8 = (code *)(plVar2 + 4);
  uStack_b0 = 1;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    do {
      func_0x0001059895d4(auStack_c0);
      func_0x000105989560(auStack_c8,auStack_c0);
      pcStack_a8 = FUN_10bccecfc;
      ppuStack_a0 = &PTR_FUN_110d9a2b0;
      param_2 = &pcStack_a8;
      plStack_98 = param_1;
      puStack_90 = auStack_c0;
      (**(code **)(*param_1 + 0x10))(param_1);
      func_0x00010bcced78();
      iVar1 = (int)auStack_c8;
      func_0x000105989580();
      func_0x000105989710(auStack_c8);
      func_0x00010598965c(auStack_c0);
      in_ZR = iVar1 == 1;
    } while (!(bool)in_ZR);
  }
  ppcVar3 = &pcStack_b8;
  func_0x000107c2798c();
  func_0x000107c3a554(uStack_48);
  if ((bool)in_ZR) {
    return ppcVar3;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pcStack_b8);
  func_0x00010bcced70();
  func_0x000105277f8c();
  if (param_2[1] != (code *)0x0) {
    func_0x000107c278a0();
  }
  return param_2;
}



/* Entry: 10bccec0c; end: 10bccec1b;  */

long FUN_10bccec0c(undefined8 param_1,long param_2)

{
  func_0x000105277f8c();
  if (*(long *)(param_2 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_2;
}



/* Entry: 10bccec1c; end: 10bccec43;  */

long FUN_10bccec1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bccec44; end: 10bcceca3;  */

void FUN_10bccec44(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000107c316cc(auStack_38,"timer",5,puVar1[0xc]);
  (*(code *)*puVar1)(puVar1);
  func_0x000107c316d0(auStack_38);
  return;
}



/* Entry: 10bcceca4; end: 10bccece3;  */

void FUN_10bcceca4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bccece4; end: 10bccecfb;  */

void FUN_10bccece4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10bccecfc; end: 10bcced53;  */

void FUN_10bccecfc(long param_1)

{
  long *plVar1;
  long lVar2;
  int iStack_24;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x18);
  (**(code **)(*plVar1 + 0x58))();
  iStack_24 = (int)plVar1;
  if (iStack_24 == 1) {
    (**(code **)(**(long **)(lVar2 + 0x18) + 0x38))();
  }
  func_0x0001059897a0(*(undefined8 *)(param_1 + 0x18),&iStack_24);
  return;
}



/* Entry: 10bcced54; end: 10bcced93;  */

void FUN_10bcced54(void)

{
  return;
}



/* Entry: 10bcced94; end: 10bcceda7;  */

void FUN_10bcced94(void)

{
  func_0x00010bccedb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcceda8; end: 10bccedcb;  */

void FUN_10bcceda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bccedb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bccedcc; end: 10bcceddf;  */

void FUN_10bccedcc(void)

{
  FUN_10bccee10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccede0; end: 10bccee0f;  */

long FUN_10bccede0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x000107c29ca4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 10bccee10; end: 10bccee2b;  */

void FUN_10bccee10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccee2c; end: 10bccee6f;  */

void FUN_10bccee2c(int *param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  FUN_10bccee70();
  *param_1 = *param_1 + param_3;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + param_4;
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + param_5;
  return;
}



/* Entry: 10bccee70; end: 10bcceea3;  */

long FUN_10bccee70(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10bcceea4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x40;
}



/* Entry: 10bcceea4; end: 10bccef47;  */

undefined1  [16]
FUN_10bcceea4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10bccef48(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10bccefcc(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10bccf028(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x00010bccf104(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10bccef48; end: 10bccefcb;  */

long * FUN_10bccef48(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = (long *)(param_1 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10bccf078(param_3,plVar4 + 4), (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      FUN_10bccf078(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_10bccefb4;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10bccefb4;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_10bccefb4:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10bccefcc; end: 10bccf027;  */

void FUN_10bccefcc(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x58;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x00010bccf0bc(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10bccf028; end: 10bccf077;  */

void FUN_10bccf028(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10bccf078; end: 10bccf0d7;  */

bool FUN_10bccf078(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    func_0x000107c27bd4(piVar1,param_2 + 2);
    return (char)piVar1 < '\0';
  }
  return false;
}



/* Entry: 10bccf0d8; end: 10bccf12b;  */

undefined4 * FUN_10bccf0d8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10bccf12c; end: 10bccf143;  */

void FUN_10bccf12c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10bccf144; end: 10bccf18b;  */

void FUN_10bccf144(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10bccf18c; end: 10bccf1c7;  */

void FUN_10bccf18c(void)

{
  return;
}



/* Entry: 10bccf1c8; end: 10bccf1db;  */

void FUN_10bccf1c8(void)

{
  func_0x00010bccf1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccf1dc; end: 10bccf1fb;  */

void FUN_10bccf1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bccf1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bccf1fc; end: 10bccf23f;  */

undefined8 * FUN_10bccf1fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a4f0;
  FUN_10bcce910(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x00010bccf5ac(param_1 + 1);
  return param_1;
}



/* Entry: 10bccf240; end: 10bccf243;  */

undefined8 * FUN_10bccf240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a4f0;
  FUN_10bcce910(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x00010bccf5ac(param_1 + 1);
  return param_1;
}



/* Entry: 10bccf244; end: 10bccf257;  */

void FUN_10bccf244(void)

{
  FUN_10bccf1fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccf258; end: 10bccf303;  */

void FUN_10bccf258(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined **extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 auStack_2f8 [24];
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  long lStack_298;
  undefined8 uStack_248;
  
  func_0x00010bcd0210();
  uVar1 = *(char *)(param_1 + 0x108) == '\x01';
  lVar2 = param_1;
  if ((bool)uVar1) {
    do {
      func_0x00010bcd02e4();
    } while (extraout_w10 != 0);
    func_0x00010bcd0248();
    lVar2 = 0x68;
    __Znwm();
    func_0x00010bcd0220();
    func_0x00010bcd0314(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10));
    func_0x00010bcd01f0();
    func_0x00010bcd0200();
  }
  func_0x00010bcd01dc(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bcd01f0();
    func_0x00010bcd0200();
    func_0x00010bcd0240();
    func_0x00010bcd0210();
    uVar1 = *(char *)(lVar2 + 0x108) == '\x01';
    lVar3 = lVar2;
    if ((bool)uVar1) {
      do {
        func_0x00010bcd02e4();
      } while (extraout_w10_00 != 0);
      func_0x00010bcd0248();
      lVar3 = 0x68;
      __Znwm();
      func_0x00010bcd0220();
      func_0x00010bcd0314(*(undefined8 *)(*(long *)(lVar2 + 0x58) + 0x10));
      func_0x00010bcd01f0();
      func_0x00010bcd0200();
    }
    func_0x00010bcd01dc(extraout_x8_00);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010bcd01f0();
      func_0x00010bcd0200();
      func_0x00010bcd0240();
      func_0x00010bcd0210();
      uStack_248 = extraout_x8_01;
      do {
        func_0x00010bcd02e4();
      } while (extraout_w10_01 != 0);
      *(undefined1 *)(lVar3 + 0x109) = 1;
      uStack_2a8 = 0x10bccff94;
      ppuStack_2a0 = &PTR_DAT_110d9a598;
      puVar6 = &uStack_2a8;
      lStack_298 = lVar3;
      (**(code **)(*(long *)(lVar3 + 0x58) + 0x10))();
      func_0x00010bcd0280();
      (*extraout_x8_02)();
      func_0x00010bcd01dc(uStack_248);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        pppuVar4 = &ppuStack_2a0;
        (*(code *)*ppuStack_2a0)();
        func_0x00010bcd0240();
        if (*(char *)(pppuVar4 + 0x21) == '\x01') {
          pppuVar5 = pppuVar4;
          func_0x00010bcd02b8();
          *pppuVar5 = extraout_x8_03;
          ppuVar8 = (undefined **)(long)*(char *)((long)pppuVar4 + 0x57);
          if ((long)ppuVar8 < 0) {
            pppuVar7 = (undefined ***)pppuVar4[8];
            ppuVar8 = pppuVar4[9];
          }
          else {
            pppuVar7 = pppuVar4 + 8;
          }
          func_0x000107c316cc(auStack_2f8,pppuVar7,ppuVar8);
          (*(code *)*puVar6)(puVar6);
          func_0x00010bcd02dc();
          *pppuVar5 = (undefined **)0x0;
        }
        func_0x00010bcd030c();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10bccf304; end: 10bccf3af;  */

void FUN_10bccf304(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined **extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_1e8 [24];
  undefined8 uStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 uStack_138;
  
  func_0x00010bcd0210();
  uVar1 = *(char *)(param_1 + 0x108) == '\x01';
  lVar2 = param_1;
  if ((bool)uVar1) {
    do {
      func_0x00010bcd02e4();
    } while (extraout_w10 != 0);
    func_0x00010bcd0248();
    lVar2 = 0x68;
    __Znwm();
    func_0x00010bcd0220();
    func_0x00010bcd0314(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10));
    func_0x00010bcd01f0();
    func_0x00010bcd0200();
  }
  func_0x00010bcd01dc(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bcd01f0();
    func_0x00010bcd0200();
    func_0x00010bcd0240();
    func_0x00010bcd0210();
    uStack_138 = extraout_x8_00;
    do {
      func_0x00010bcd02e4();
    } while (extraout_w10_00 != 0);
    *(undefined1 *)(lVar2 + 0x109) = 1;
    uStack_198 = 0x10bccff94;
    ppuStack_190 = &PTR_DAT_110d9a598;
    puVar5 = &uStack_198;
    lStack_188 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x58) + 0x10))();
    func_0x00010bcd0280();
    (*extraout_x8_01)();
    func_0x00010bcd01dc(uStack_138);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      pppuVar3 = &ppuStack_190;
      (*(code *)*ppuStack_190)();
      func_0x00010bcd0240();
      if (*(char *)(pppuVar3 + 0x21) == '\x01') {
        pppuVar4 = pppuVar3;
        func_0x00010bcd02b8();
        *pppuVar4 = extraout_x8_02;
        ppuVar7 = (undefined **)(long)*(char *)((long)pppuVar3 + 0x57);
        if ((long)ppuVar7 < 0) {
          pppuVar6 = (undefined ***)pppuVar3[8];
          ppuVar7 = pppuVar3[9];
        }
        else {
          pppuVar6 = pppuVar3 + 8;
        }
        func_0x000107c316cc(auStack_1e8,pppuVar6,ppuVar7);
        (*(code *)*puVar5)(puVar5);
        func_0x00010bcd02dc();
        *pppuVar4 = (undefined **)0x0;
      }
      func_0x00010bcd030c();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10bccf3b0; end: 10bccf453;  */

void FUN_10bccf3b0(long param_1)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined **extraout_x8_01;
  int extraout_w10;
  undefined1 auStack_d8 [24];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_28;
  
  func_0x00010bcd0210();
  uStack_28 = extraout_x8;
  do {
    func_0x00010bcd02e4();
  } while (extraout_w10 != 0);
  *(undefined1 *)(param_1 + 0x109) = 1;
  uStack_88 = 0x10bccff94;
  ppuStack_80 = &PTR_DAT_110d9a598;
  puVar3 = &uStack_88;
  lStack_78 = param_1;
  (**(code **)(*(long *)(param_1 + 0x58) + 0x10))();
  func_0x00010bcd0280();
  (*extraout_x8_00)();
  func_0x00010bcd01dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x00010bcd0240();
  if (*(char *)(pppuVar1 + 0x21) == '\x01') {
    pppuVar2 = pppuVar1;
    func_0x00010bcd02b8();
    *pppuVar2 = extraout_x8_01;
    ppuVar5 = (undefined **)(long)*(char *)((long)pppuVar1 + 0x57);
    if ((long)ppuVar5 < 0) {
      pppuVar4 = (undefined ***)pppuVar1[8];
      ppuVar5 = pppuVar1[9];
    }
    else {
      pppuVar4 = pppuVar1 + 8;
    }
    func_0x000107c316cc(auStack_d8,pppuVar4,ppuVar5);
    (*(code *)*puVar3)(puVar3);
    func_0x00010bcd02dc();
    *pppuVar2 = (undefined **)0x0;
  }
  func_0x00010bcd030c();
  return;
}



/* Entry: 10bccf454; end: 10bccf4df;  */

void FUN_10bccf454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = param_1;
    func_0x00010bcd02b8();
    *puVar1 = extraout_x8;
    lVar3 = (long)*(char *)((long)param_1 + 0x57);
    if (lVar3 < 0) {
      puVar2 = (undefined8 *)param_1[8];
      lVar3 = param_1[9];
    }
    else {
      puVar2 = param_1 + 8;
    }
    func_0x000107c316cc(auStack_48,puVar2,lVar3);
    (*(code *)*param_2)(param_2);
    func_0x00010bcd02dc();
    *puVar1 = 0;
  }
  func_0x00010bcd030c();
  return;
}



/* Entry: 10bccf4e0; end: 10bccf533;  */

byte FUN_10bccf4e0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  
  piVar1 = (int *)((long)param_1 + 0x10c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = iVar2 + -1 == 0 & *(byte *)((long)param_1 + 0x109);
  if ((param_1 != (long *)0x0) && (bVar5 != 0)) {
    (**(code **)(*param_1 + 8))();
  }
  return bVar5 ^ 1;
}



/* Entry: 10bccf534; end: 10bccf5ef;  */

void FUN_10bccf534(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *puVar1 = &PTR_FUN_110d9a520;
  puVar1[1] = uVar2;
  puVar1[2] = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 3,param_2 + 1);
  puVar1[0xe] = param_1;
  puVar1[0xf] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bccf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))(*(long **)(param_1 + 0xf8),puVar1);
  return;
}



/* Entry: 10bccf5f0; end: 10bccf6eb;  */

void FUN_10bccf5f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x24) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5 + (*(ulong *)(param_1 + 0x20) % 0x24) * 0x70;
  }
  FUN_10bccf6ec(param_1);
  do {
    lVar6 = lVar4 + -0xfc0;
    do {
      if (lVar4 == param_2) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar1 = *(undefined8 **)(param_1 + 8);
        while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
          __ZdlPv(*puVar1);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar1;
        }
        if (uVar3 == 1) {
          uVar2 = 0x12;
        }
        else {
          if (uVar3 != 2) {
            return;
          }
          uVar2 = 0x24;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        return;
      }
      (*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
      lVar6 = lVar6 + 0x70;
      lVar4 = lVar4 + 0x70;
    } while (*plVar5 != lVar6);
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  } while( true );
}



/* Entry: 10bccf6ec; end: 10bccf72b;  */

void FUN_10bccf6ec(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10bccf72c; end: 10bccf757;  */

long * FUN_10bccf72c(long *param_1)

{
  FUN_10bccf758();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bccf758; end: 10bccf77b;  */

void FUN_10bccf758(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10bccf77c; end: 10bccf7b3;  */

void FUN_10bccf77c(void)

{
  func_0x00010bcd0264();
  return;
}



/* Entry: 10bccf7b4; end: 10bccf7d7;  */

void FUN_10bccf7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcd0324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x70) + 0x70) + 0x10))();
  return;
}



/* Entry: 10bccf7d8; end: 10bccf8e3;  */

code * FUN_10bccf7d8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 uVar12;
  code **ppcVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar20;
  code *pcVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  code *pcVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  long *plStack_138;
  code *pcStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  long *plStack_110;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_38;
  
  plVar25 = param_1;
  func_0x00010bcd0210();
  lVar24 = plVar25[0xe];
  uVar12 = *(char *)(lVar24 + 0x108) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar12) {
    func_0x00010bcd02b8();
    *plVar25 = extraout_x8_00;
    lVar19 = (long)*(char *)(lVar24 + 0x57);
    if (lVar19 < 0) {
      lVar16 = *(long *)(lVar24 + 0x40);
      lVar19 = *(long *)(lVar24 + 0x48);
    }
    else {
      lVar16 = lVar24 + 0x40;
    }
    func_0x000107c316cc(&pcStack_98,lVar16,lVar19,param_1[0xf]);
    (*(code *)param_1[2])();
    func_0x00010bcd02dc();
    *plVar25 = 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  ppcVar13 = &pcStack_98;
  pcStack_98 = FUN_10bccffb4;
  ppuStack_90 = &PTR_FUN_110d9a5b0;
  lStack_88 = lVar24;
  func_0x00010bcd0314(*(undefined8 *)(*(long *)(lVar24 + 0x58) + 0x10));
  func_0x00010bcd0280();
  (*extraout_x8_01)();
  func_0x00010bcd01dc(uStack_38);
  if ((bool)uVar12) {
    return (code *)0x1;
  }
  ___stack_chk_fail();
  func_0x00010bcd02dc();
  (**(code **)(pcStack_98 + 8))();
  func_0x00010bcd0240();
  pcVar27 = ppcVar13[2];
  plVar25 = *(long **)pcVar27;
  if ((*(byte *)(plVar25 + 0x21) & 1) == 0) {
    piVar1 = (int *)((long)plVar25 + 0x10c);
    do {
      iVar6 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar4 = (uint)(iVar6 + -1 == 0 & *(byte *)((long)plVar25 + 0x109));
    if ((plVar25 != (long *)0x0) && (uVar4 != 0)) {
      (**(code **)(*plVar25 + 8))();
    }
    return (code *)(ulong)(uVar4 ^ 1);
  }
  func_0x000107c28150();
  if (plVar25[6] != 0) {
    plVar2 = plVar25 + 1;
    pcVar15 = pcVar27 + 8;
    plVar26 = plVar25 + 6;
    plVar29 = (long *)plVar25[2];
    plVar5 = (long *)plVar25[3];
    uVar9 = (long)plVar5 - (long)plVar29;
    lVar24 = 0;
    if (uVar9 != 0) {
      lVar24 = ((long)plVar5 - (long)plVar29 >> 3) * 0x24 + -1;
    }
    uVar20 = plVar25[5];
    pcVar17 = pcVar15;
    if (lVar24 == *plVar26 + uVar20) {
      if (uVar20 < 0x24) {
        plVar23 = plVar25 + 4;
        plVar30 = (long *)*plVar23;
        plVar31 = (long *)*plVar2;
        if (uVar9 < (ulong)((long)plVar30 - (long)plVar31)) {
          pcVar17 = (code *)0xfc0;
          pcVar21 = pcVar15;
          __Znwm();
          if (plVar30 == plVar5) {
            if (plVar29 == plVar31) {
              lVar24 = (long)plVar30 - (long)plVar29 >> 2;
              if (plVar5 == plVar29) {
                lVar24 = 1;
              }
              plStack_110 = plVar23;
              FUN_10bccfe10();
              func_0x00010bcd02f4(lVar24 * 2 + 6);
              FUN_10bccfde8(&pcStack_130,plVar25[2],plVar25[3]);
              pcVar33 = (code *)plVar25[2];
              pcVar21 = (code *)*plVar2;
              pcVar32 = (code *)plVar25[4];
              pcVar34 = (code *)plVar25[3];
              plVar25[2] = (long)pcStack_128;
              *plVar2 = (long)pcStack_130;
              plVar25[4] = (long)pcStack_118;
              plVar25[3] = (long)pcStack_120;
              pcStack_130 = pcVar21;
              pcStack_128 = pcVar33;
              pcStack_120 = pcVar34;
              pcStack_118 = pcVar32;
              func_0x00010bcd0330();
              plVar29 = (long *)plVar25[2];
            }
            plVar29[-1] = (long)pcVar17;
            plVar25[2] = (long)plVar29;
            FUN_10bccfcf8(plVar2);
          }
          else {
            *plVar5 = (long)pcVar17;
            plVar25[3] = (long)(plVar5 + 1);
            pcVar17 = pcVar21;
          }
        }
        else {
          pcVar21 = (code *)((long)plVar30 - (long)plVar31 >> 2);
          if (plVar30 == plVar31) {
            pcVar21 = (code *)0x1;
          }
          pcVar18 = pcVar15;
          plStack_138 = plVar23;
          FUN_10bccfe10();
          pcVar33 = pcVar21 + uVar9;
          pcVar34 = pcVar21 + (long)pcVar18 * 8;
          uVar14 = 0xfc0;
          pcVar17 = pcVar18;
          pcStack_158 = pcVar21;
          pcStack_150 = pcVar33;
          pcStack_148 = pcVar33;
          pcStack_140 = pcVar34;
          __Znwm();
          uStack_160 = 0x24;
          pcVar32 = pcVar33;
          plStack_168 = plVar26;
          if (uVar9 == (long)pcVar18 * 8) {
            if (plVar5 == plVar29) {
              pcVar32 = (code *)0x1;
              uStack_170 = uVar14;
              plStack_110 = plVar23;
              FUN_10bccfe10();
              pcStack_118 = pcVar32 + (long)pcVar17 * 8;
              pcVar17 = pcVar33;
              pcStack_130 = pcVar32;
              pcStack_128 = pcVar32;
              pcStack_120 = pcVar32;
              FUN_10bccfde8(&pcStack_130,pcVar33,pcVar33);
              pcVar10 = pcStack_118;
              pcVar32 = pcStack_120;
              pcVar3 = pcStack_128;
              pcVar18 = pcStack_130;
              pcStack_158 = pcStack_130;
              pcStack_150 = pcStack_128;
              pcStack_140 = pcStack_118;
              pcStack_130 = pcVar21;
              pcStack_128 = pcVar33;
              pcStack_120 = pcVar33;
              pcStack_118 = pcVar34;
              func_0x00010bcd0330();
              pcVar21 = pcVar18;
              pcVar33 = pcVar3;
              pcVar34 = pcVar10;
            }
            else {
              pcVar33 = pcVar33 + ((((long)pcVar33 - (long)pcVar21 >> 3) + 1) / -2) * 8;
              pcVar32 = pcVar33;
              pcStack_150 = pcVar33;
            }
          }
          pcVar18 = pcVar32 + 8;
          *(undefined8 *)pcVar32 = uVar14;
          uStack_170 = 0;
          puVar28 = (undefined8 *)plVar25[3];
          pcStack_148 = pcVar18;
          while (puVar22 = (undefined8 *)plVar25[2], puVar28 != puVar22) {
            pcVar32 = pcVar33;
            if (pcVar33 == pcVar21) {
              if (pcVar18 < pcVar34) {
                lVar24 = (long)pcVar18 - (long)pcVar21;
                pcVar3 = pcVar18 + ((((long)pcVar34 - (long)pcVar18 >> 3) + 1) / 2) * 8;
                pcVar32 = pcVar3 + -((long)pcVar18 - (long)pcVar21);
                pcVar18 = pcVar3;
                if (lVar24 != 0) {
                  _memmove(pcVar32,pcVar33,lVar24);
                  pcVar17 = pcVar33;
                }
              }
              else {
                lVar24 = (long)pcVar34 - (long)pcVar21 >> 2;
                if ((long)pcVar34 - (long)pcVar21 == 0) {
                  lVar24 = 1;
                }
                plStack_110 = plVar23;
                FUN_10bccfe10(lVar24);
                func_0x00010bcd02f4(lVar24 * 2 + 6);
                pcVar17 = pcVar21;
                FUN_10bccfde8(&pcStack_130,pcVar21,pcVar18);
                pcVar11 = pcStack_118;
                pcVar10 = pcStack_120;
                pcVar32 = pcStack_128;
                pcVar3 = pcStack_130;
                pcStack_130 = pcVar21;
                pcStack_128 = pcVar33;
                pcStack_120 = pcVar18;
                pcStack_118 = pcVar34;
                func_0x00010bcd0330();
                pcVar21 = pcVar3;
                pcVar18 = pcVar10;
                pcVar34 = pcVar11;
              }
            }
            puVar28 = puVar28 + -1;
            pcVar33 = pcVar32 + -8;
            *(undefined8 *)pcVar33 = *puVar28;
          }
          pcStack_158 = (code *)*plVar2;
          *plVar2 = (long)pcVar21;
          plVar25[2] = (long)pcVar33;
          pcStack_140 = (code *)plVar25[4];
          pcStack_148 = (code *)plVar25[3];
          plVar25[3] = (long)pcVar18;
          plVar25[4] = (long)pcVar34;
          pcStack_150 = (code *)puVar22;
          func_0x00010bccfe44(&uStack_170);
          func_0x00010bccfe70(&pcStack_158);
        }
      }
      else {
        plVar25[5] = uVar20 - 0x24;
        pcVar17 = (code *)*plVar29;
        plVar25[2] = (long)(plVar29 + 1);
        FUN_10bccfcf8(plVar2);
      }
    }
    FUN_10bccf6ec(plVar2);
    *(undefined8 *)pcVar17 = *(undefined8 *)pcVar15;
    pcVar15 = pcVar17 + 8;
    (**(code **)(*(long *)(pcVar27 + 0x10) + 0x10))(pcVar15,pcVar27 + 0x10);
    pcVar17[0x60] = (code)0x0;
    *(code ***)(pcVar17 + 0x68) = ppcVar13;
    plVar25[6] = plVar25[6] + 1;
    return pcVar15;
  }
  *(int *)(plVar25 + 7) = (int)plVar25[7] + 1;
  puVar28 = (undefined8 *)0x80;
  __Znwm();
  lVar24 = plVar25[0x1f];
  *puVar28 = &PTR_FUN_110d9a520;
  puVar28[1] = lVar24;
  puVar28[2] = *(undefined8 *)(pcVar27 + 8);
  (**(code **)(*(long *)(pcVar27 + 0x10) + 0x10))(puVar28 + 3,pcVar27 + 0x10);
  puVar28[0xe] = plVar25;
  puVar28[0xf] = ppcVar13;
  pcVar27 = (code *)plVar25[0x1f];
                    /* WARNING: Could not recover jumptable at 0x00010bccf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar27 + 0x18))(pcVar27,puVar28);
  return pcVar27;
}


