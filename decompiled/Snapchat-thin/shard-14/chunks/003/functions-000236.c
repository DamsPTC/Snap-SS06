/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b131fb8; end: 10b132063;  */

void FUN_10b131fb8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar2 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 < param_2) {
LAB_10b132000:
    func_0x00010b134b9c();
    if (plVar2 == (long *)0x0) {
      FUN_10b132138(plVar6);
      plVar6[1] = 0;
    }
    else {
      plVar8 = plVar6 + 1;
      FUN_10b132150(plVar8);
      FUN_10b132138(plVar6,plVar8);
      plVar6[1] = (long)plVar2;
      lVar3 = *plVar6;
      for (plVar8 = (long *)0x0; plVar2 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar8 * 8) = 0;
      }
      if (plVar6[2] != 0) {
        func_0x00010b136188();
        func_0x00010b136174();
        lVar3 = extraout_x8;
        plVar6 = extraout_x9;
        uVar5 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
          plVar7 = (long *)plVar6[1];
          if (((ulong)plVar2 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar2 <= plVar7) {
            uVar1 = 0;
            if (plVar2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar4;
              plVar8 = plVar7;
            }
            else {
              *plVar4 = *plVar6;
              func_0x00010b134964();
              lVar3 = extraout_x8_00;
              plVar6 = extraout_x9_00;
              uVar5 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < plVar8) {
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b134418();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (param_2 < plVar8) goto LAB_10b132000;
  }
  return;
}



/* Entry: 10b132064; end: 10b132137;  */

void FUN_10b132064(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b132138(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_10b132150(plVar6);
    FUN_10b132138(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010b136188();
      func_0x00010b136174();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x00010b134964();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b132138; end: 10b13214f;  */

void FUN_10b132138(long *param_1,long param_2)

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



/* Entry: 10b132150; end: 10b13216b;  */

void FUN_10b132150(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1353d8();
  FUN_10b13218c();
  return;
}



/* Entry: 10b13216c; end: 10b13218b;  */

void FUN_10b13216c(void)

{
  func_0x00010b1353d8();
  FUN_10b13218c();
  return;
}



/* Entry: 10b13218c; end: 10b1321a3;  */

void FUN_10b13218c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010b134b74();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b1321a4; end: 10b1321df;  */

void FUN_10b1321a4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010b134b74();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b1321e0; end: 10b1321e3;  */

void FUN_10b1321e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd398;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1321e4; end: 10b1321f7;  */

void FUN_10b1321e4(void)

{
  FUN_10b132260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1321f8; end: 10b1321ff;  */

void FUN_10b1321f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b132200; end: 10b13222f;  */

void FUN_10b132200(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10b132230();
  return;
}



/* Entry: 10b132230; end: 10b132243;  */

void FUN_10b132230(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x00010b121ddc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10b132244; end: 10b13225f;  */

void FUN_10b132244(long param_1)

{
  func_0x00010b121ddc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b132260; end: 10b13226b;  */

void FUN_10b132260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd398;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b13226c; end: 10b13228f;  */

void FUN_10b13226c(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b132290; end: 10b132533;  */

void FUN_10b132290(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  undefined8 extraout_x8;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_70;
  
  func_0x00010b133e8c();
  plVar14 = (long *)param_1[2];
  lVar13 = plVar14[2];
  lVar2 = plVar14[3];
  lVar12 = *(long *)(*(long *)(*plVar14 + 0x18) + 0x30);
  ppuStack_a8 = *(undefined ***)(lVar12 + 0x48);
  pcStack_b0 = *(code **)(lVar12 + 0x40);
  uStack_70 = extraout_x8;
  if (*(long *)(lVar12 + 0x48) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b135f04();
  plVar15 = param_1 + 1;
  *plVar15 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd3e8;
  func_0x000107c278b8(&uStack_110,&UNK_10f7301bc);
  puVar1 = param_1 + 3;
  ppuStack_98 = ppuStack_a8;
  pcStack_a0 = pcStack_b0;
  pcStack_b0 = (code *)0x0;
  ppuStack_a8 = (undefined **)0x0;
  FUN_10b13b044(puVar1,&uStack_110,(ulong)(lVar2 - lVar13) >> 5,plVar14 + 5,&pcStack_a0);
  func_0x000107c27c20(&pcStack_a0);
  func_0x00010b134678();
  puStack_120 = puVar1;
  puStack_118 = param_1;
  FUN_10b127ebc(&pcStack_b0);
  lVar2 = plVar14[3];
  for (lVar13 = plVar14[2]; uVar9 = lVar13 == lVar2, !(bool)uVar9; lVar13 = lVar13 + 0x20) {
    lVar12 = *plVar14;
    func_0x00010b1ff218(&pcStack_b0,*(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x30),
                        *(undefined4 *)(lVar13 + 0x18));
    uStack_108 = *(undefined8 *)(lVar12 + 0x30);
    uStack_110 = *(undefined8 *)(lVar12 + 0x28);
    if (*(long *)(lVar12 + 0x30) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b127af8(&uStack_100,*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
    puVar10 = auStack_f0;
    func_0x00010b1351d8();
    uStack_d0 = 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_a0 = FUN_10b132cc0;
    ppuStack_98 = &PTR_FUN_110cbd538;
    lStack_c8 = lVar12;
    puStack_c0 = puVar1;
    puStack_b8 = param_1;
    func_0x00010b135704();
    uVar6 = uStack_108;
    uVar5 = uStack_110;
    uStack_110 = 0;
    uStack_108 = 0;
    puVar10[1] = uVar6;
    *puVar10 = uVar5;
    puVar10[3] = uStack_f8;
    puVar10[2] = uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010b121ddc(puVar10 + 4,auStack_f0);
    puVar8 = puStack_b8;
    puVar7 = puStack_c0;
    uVar5 = CONCAT44(uStack_cc,uStack_d0);
    puVar10[9] = lStack_c8;
    puVar10[8] = uVar5;
    puVar10[0xb] = puVar8;
    puVar10[10] = puVar7;
    if (puVar8 != (undefined8 *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    puStack_90 = puVar10;
    func_0x00010b135fd4();
    func_0x00010b1352a4();
    func_0x00010b11f5ec(&uStack_110);
    func_0x00010b1298c4(&pcStack_b0);
  }
  func_0x00010b124be8(&puStack_120);
  func_0x00010b133dfc(uStack_70);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x000107c27c20(&pcStack_a0);
    func_0x00010b134678();
    __ZNSt3__119__shared_weak_countD2Ev(param_1);
    __ZdlPv();
    ppcVar11 = &pcStack_b0;
    FUN_10b127ebc();
    func_0x00010b1343d8();
    *ppcVar11 = (code *)&PTR_FUN_110cbd3e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10b132534; end: 10b132537;  */

void FUN_10b132534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd3e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b132538; end: 10b13254b;  */

void FUN_10b132538(void)

{
  FUN_10b132578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b13254c; end: 10b132577;  */

void FUN_10b13254c(long param_1)

{
  func_0x000107c27c20(param_1 + 0x48);
  func_0x0001052a6df8(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10b132578; end: 10b132587;  */

void FUN_10b132578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b132588; end: 10b1325a7;  */

void FUN_10b132588(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11ec00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1325a8; end: 10b1325c7;  */

void FUN_10b1325a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1325c8; end: 10b132747;  */

undefined8 * FUN_10b1325c8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  func_0x00010b133e10();
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x28) + 0x18);
  uVar2 = false;
  uStack_28 = extraout_x8;
  if ((*(char *)(lVar5 + 0x58) != '\x01') ||
     (iVar1 = *(int *)(lVar5 + 0x290), uVar2 = iVar1 == 0, iVar1 < 1)) {
    func_0x00010b135cec();
    func_0x00010b135a50();
    uStack_b0 = *(undefined8 *)(extraout_x8_00 + 0x40);
    lStack_a8 = *(long *)(extraout_x8_00 + 0x48);
    if (lStack_a8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    func_0x00010b135ad4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    pcStack_88 = (code *)0x10b1325ac;
    ppuStack_80 = &PTR_DAT_110cbd440;
    uStack_78 = param_1;
    func_0x00010b1346b0();
    func_0x00010b135fb4();
    func_0x00010b133ea8(ppuStack_80);
    func_0x00010b134558();
    func_0x00010b1358dc();
    func_0x00010b135200();
  }
  lVar5 = *(long *)(unaff_x19 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar5 + 0x18) + 0x30);
  uStack_a0 = *(undefined8 *)(lVar6 + 0x40);
  lStack_98 = *(long *)(lVar6 + 0x48);
  if (lStack_98 != 0) {
    do {
      func_0x00010b133f58();
      lVar5 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  puVar3 = &uStack_b0;
  FUN_10b127af8(puVar3,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
  pcStack_88 = FUN_10b132b40;
  ppuStack_80 = &PTR_FUN_110cbd520;
  lStack_70 = lStack_a8;
  uStack_78 = uStack_b0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133ea8(ppuStack_80);
  func_0x00010b13509c();
  func_0x00010b13558c();
  func_0x00010b133dfc(uStack_28);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = puVar3;
    func_0x00010b133ea8(ppuStack_80);
    func_0x00010b134558();
    func_0x00010b1358dc();
    func_0x00010b135200();
    func_0x00010b1343d0();
    puVar4 = puVar4 + 1;
    func_0x000107c350ac();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10b132748; end: 10b13275b;  */

void FUN_10b132748(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b13275c; end: 10b13276f;  */

void FUN_10b13275c(void)

{
  func_0x00010b132778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b132770; end: 10b132783;  */

void FUN_10b132770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b132784; end: 10b1327a7;  */

void FUN_10b132784(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1327a8; end: 10b1328ab;  */

undefined8 * FUN_10b1327a8(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lVar3;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_38;
  
  puVar2 = &uStack_d0;
  func_0x00010b133e24();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010b134af0(*(undefined8 *)(lVar3 + 0x18));
  func_0x00010b135fbc();
  lStack_c8 = *(long *)(lVar3 + 0x38);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x30);
  if (*(long *)(lVar3 + 0x38) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b11f2c4(&uStack_c0,lVar3);
  pcStack_98 = FUN_10b1328d0;
  ppuStack_90 = &PTR_DAT_110cbd4c0;
  lStack_80 = lStack_c8;
  uStack_88 = uStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133ea8(ppuStack_90);
  FUN_10b1328ac();
  func_0x00010b134d98();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133ea8(ppuStack_90);
    FUN_10b1328ac(&uStack_d0);
    func_0x00010b134d98();
    func_0x00010b1343d0();
    func_0x00010b134958();
    FUN_10b0f3ee0();
    puVar1 = (undefined1 *)puVar2;
    func_0x000107c3503c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar2;
}



/* Entry: 10b1328ac; end: 10b1328cf;  */

long FUN_10b1328ac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  FUN_10b0f3ee0();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1328d0; end: 10b13290b;  */

void FUN_10b1328d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b134d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),param_1 + 0x20);
  return;
}



/* Entry: 10b13290c; end: 10b13292b;  */

void FUN_10b13290c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11f29c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13292c; end: 10b13292f;  */

void FUN_10b13292c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132930; end: 10b132a27;  */

undefined8 * FUN_10b132930(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 extraout_x10;
  int extraout_w13;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_28;
  
  puVar2 = &uStack_c0;
  func_0x00010b133e10();
  uStack_28 = extraout_x8;
  func_0x00010b134af0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010b135fbc();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uStack_68 = *(undefined4 *)(unaff_x19 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x19 + 0x40);
  lStack_a0 = *(long *)(unaff_x19 + 0x48);
  lStack_58 = 0;
  uStack_b0 = uStack_68;
  uStack_a8 = uStack_60;
  if (lStack_a0 != 0) {
    do {
      func_0x00010b1343e8();
      lStack_58 = extraout_x9;
      uStack_60 = extraout_x10;
      uStack_68 = extraout_w8;
    } while (extraout_w13 != 0);
  }
  pcStack_88 = FUN_10b132a48;
  ppuStack_80 = &PTR_FUN_110cbd4f0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  if (lStack_58 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1346b0();
  func_0x00010b135fb4();
  func_0x00010b13485c(ppuStack_80);
  FUN_10b132a28();
  func_0x00010b134d98();
  func_0x00010b133dfc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b134840(&pcStack_88);
    FUN_10b132a28(&uStack_c0);
    func_0x00010b134d98();
    func_0x00010b1343d0();
    func_0x00010b1348cc();
    func_0x00010b0f7fc0();
    puVar1 = (undefined1 *)puVar2;
    func_0x000107c350ac();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar2;
}



/* Entry: 10b132a28; end: 10b132a47;  */

long FUN_10b132a28(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1348cc();
  func_0x00010b0f7fc0();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b132a48; end: 10b132a93;  */

void FUN_10b132a48(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b11f2c4(auStack_30,param_1 + 0x10);
  func_0x00010b1346dc();
  func_0x00010b134584();
  FUN_10b0f3ee0(auStack_30);
  return;
}



/* Entry: 10b132a94; end: 10b132b3f;  */

long FUN_10b132a94(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1348cc(param_1 + 8);
  func_0x00010b0f7fc0();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b132b40; end: 10b132caf;  */

undefined1 * FUN_10b132b40(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x9;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x00010b133e10();
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x48);
  puVar3 = (undefined1 *)0x0;
  uStack_38 = extraout_x8;
  if (plVar1 != (long *)0x0) {
    func_0x00010b134620();
    (**(code **)(*plVar1 + 0x78))(&lStack_60);
    uVar7 = 0;
    for (lVar5 = lStack_60; in_ZR = lVar5 == lStack_58, !(bool)in_ZR; lVar5 = lVar5 + 0x30) {
      FUN_10b11ea78(auStack_a8,*(long *)(unaff_x19 + 0x10) + 0x150);
      lVar2 = lStack_98;
      func_0x0001067e0440(lStack_98,lVar5);
      if (lVar2 == 0) {
        func_0x00010726db00(auStack_90,lVar5);
      }
      uVar7 = *(long *)(lVar5 + 0x18) + uVar7;
      func_0x00010b134e7c();
    }
    func_0x00010563d3b0(&lStack_60);
    uVar6 = **(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 0x18);
    FUN_10b126f8c(&lStack_60,0x10005);
    func_0x00010b134904(auStack_a8,&lStack_60);
    FUN_10b11ef50(uVar6,0x52,auStack_a8,uVar7 >> 10);
    func_0x00010b134754();
    func_0x00010b134618(&lStack_60);
    if (lStack_78 != 0) {
      func_0x00010b1364f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x48));
      (*extraout_x9)(&lStack_60);
      FUN_10b131cc0(&lStack_60);
    }
    puVar3 = auStack_90;
    func_0x000107c2826c();
  }
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_90;
  func_0x000107c2826c();
  func_0x00010b1343d0();
  puVar4 = puVar4 + 8;
  func_0x000107c350ac();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar3;
}



/* Entry: 10b132cb0; end: 10b132cbf;  */

void FUN_10b132cb0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b132cc0; end: 10b132e7f;  */

void FUN_10b132cc0(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long *plVar5;
  long lVar6;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined1 uStack_520;
  undefined1 uStack_4e0;
  undefined1 uStack_4d8;
  undefined1 uStack_4b0;
  undefined1 uStack_4a8;
  undefined1 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3c0;
  undefined1 uStack_3b8;
  undefined1 uStack_380;
  undefined2 uStack_378;
  undefined1 uStack_376;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  byte bStack_270;
  byte bStack_250;
  byte bStack_220;
  
  plVar5 = *(long **)(param_1 + 0x10);
  lVar6 = plVar5[9];
  func_0x00010b1340dc(&uStack_2a8,*plVar5,plVar5 + 4);
  uVar1 = uStack_298;
  uStack_2b0 = uStack_298;
  uStack_2b8 = uStack_2a0;
  uStack_2c0 = uStack_2a8;
  uStack_298 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b0._7_1_ = (undefined1)((ulong)uVar1 >> 0x38);
  uVar2 = uStack_2b0._7_1_;
  uStack_2b0 = uVar1;
  func_0x00010b1350c4(uVar2);
  if (extraout_x8 != 0) {
    if ((bStack_250 & 1) == 0) {
      if ((bStack_220 & 1) == 0) goto LAB_10b132e1c;
    }
    else if ((bStack_270 & 1) != 0) {
      uStack_530 = 0;
      lStack_528 = 0;
      uStack_538 = 0;
      FUN_10b1f71a4(*plVar5,&uStack_2c0,(int)plVar5[7],plVar5 + 4,(int)plVar5[8],&uStack_538);
      func_0x000107c27914(&uStack_538);
      goto LAB_10b132e1c;
    }
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_376 = 0;
    uStack_530 = 0;
    lStack_528 = 0;
    uStack_538 = 0;
    uStack_520 = 0;
    func_0x00010b1342ec(&uStack_538);
    FUN_10b1151e4(&uStack_2a8,&uStack_538);
    func_0x00010b1355cc();
    lVar3 = *plVar5;
    puVar4 = &uStack_2c0;
    FUN_10b1f7128(lVar3,puVar4,(int)plVar5[7],plVar5 + 4,(int)plVar5[8]);
    if ((((ulong)puVar4 & 1) != 0) && (lVar3 != 0)) {
      FUN_10b117280(&uStack_538,lVar6 + 0x58);
      lVar3 = lStack_528;
      FUN_10b12abac(lStack_528,&uStack_2c0);
      if (lVar3 != 0) {
        FUN_10b20bea8(**(undefined8 **)(lVar6 + 0x18),&UNK_10f7301cb,0x10);
        *(undefined4 *)(lVar3 + 0x330) = 3;
      }
      func_0x00010b134e7c();
    }
  }
LAB_10b132e1c:
  if (plVar5[10] != 0) {
    FUN_10b13b204();
  }
  func_0x00010b135c2c();
  func_0x00010b121af0(&uStack_2a8);
  return;
}



/* Entry: 10b132e80; end: 10b132e9f;  */

void FUN_10b132e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b11f5ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b132ea0; end: 10b132ea7;  */

void FUN_10b132ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132ea8; end: 10b132ed3;  */

void FUN_10b132ea8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b134078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b132ed4; end: 10b132edb;  */

void FUN_10b132ed4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132edc; end: 10b132f07;  */

void FUN_10b132edc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b134078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b132f08; end: 10b132f0f;  */

void FUN_10b132f08(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132f10; end: 10b132f3b;  */

void FUN_10b132f10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b134078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b132f3c; end: 10b132f43;  */

void FUN_10b132f3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132f44; end: 10b132f6f;  */

void FUN_10b132f44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b134078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b132f70; end: 10b132f73;  */

void FUN_10b132f70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b132f74; end: 10b132f93;  */

void FUN_10b132f74(void)

{
  func_0x00010b1353d8();
  FUN_10b132f94();
  return;
}



/* Entry: 10b132f94; end: 10b132fab;  */

void FUN_10b132f94(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c281f0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b132fac; end: 10b132fcb;  */

void FUN_10b132fac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c281f0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b132fcc; end: 10b132fef;  */

void FUN_10b132fcc(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b132ff0; end: 10b1330db;  */

undefined8 FUN_10b132ff0(long param_1)

{
  long lVar1;
  long lVar2;
  long alStack_2d0 [2];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [136];
  byte bStack_220;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  func_0x00010b1340dc(auStack_2a8,*(undefined8 *)(lVar2 + 0x28),lVar1 + 0x18);
  if ((bStack_220 & 1) == 0) {
    func_0x000107c278b8(&uStack_2c0,&UNK_10f7301dc);
    func_0x00010b134cc0();
    func_0x00010b134678();
  }
  else {
    FUN_10b1330dc(alStack_2d0,*(undefined8 *)(lVar2 + 0x28),auStack_2a8);
    if (alStack_2d0[0] != 0) {
      uStack_2b8 = *(undefined8 *)(lVar1 + 0x48);
      uStack_2c0 = *(undefined8 *)(lVar1 + 0x40);
      uStack_2b0 = *(undefined8 *)(lVar1 + 0x50);
      FUN_10b2046a4(alStack_2d0[0],*(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38),
                    &uStack_2c0);
    }
    FUN_10b133118(alStack_2d0);
  }
  func_0x00010b121af0(auStack_2a8);
  return 0;
}



/* Entry: 10b1330dc; end: 10b133117;  */

void FUN_10b1330dc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 in_stack_00000014;
  long in_stack_00000028;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  func_0x00010b13448c();
  FUN_10b1262f4();
  lVar1 = *param_1;
  func_0x00010b1ee684(extraout_x8);
  if (*(long *)(lVar1 + 0x568) != 0) {
    lVar2 = unaff_x19;
    FUN_10b1c41c0();
    func_0x00010b1ebbd4(*(undefined1 *)(unaff_x19 + 0x17));
    if ((extraout_x8_01 != 0) && (*(char *)(unaff_x19 + 0x88) == '\x01' && lVar2 != 0)) {
      func_0x00010b1eb3bc(&stack0x00000018,lVar1,unaff_x20,unaff_x19);
      if ((in_stack_00000028 == 0) || ((*(byte *)(in_stack_00000028 + 0x40) & 1) == 0)) {
        *extraout_x8_00 = 0;
        extraout_x8_00[1] = 0;
      }
      else {
        in_stack_00000014 = *(undefined4 *)(unaff_x19 + 0x50);
        if (*(char *)(unaff_x19 + 0x58) == '\0') {
          in_stack_00000014 = 0;
        }
        lVar3 = *(long *)(in_stack_00000028 + 0x150);
        if (lVar3 == 0) {
          FUN_10b1c90e0(&stack0x00000000,lVar1 + 0x568,*(ulong *)(lVar2 + 0x40) & 0xfffffffffffffffc
                        ,&stack0x00000014,unaff_x19 + 0x78,lVar1 + 0x6e8,lVar1 + 0x678);
          func_0x00010b137bf8(in_stack_00000028 + 0x150,&stack0x00000000);
          func_0x00010b1ee090();
          lVar3 = *(long *)(in_stack_00000028 + 0x150);
        }
        lVar1 = *(long *)(in_stack_00000028 + 0x158);
        *extraout_x8_00 = lVar3;
        extraout_x8_00[1] = lVar1;
        if (lVar1 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
      }
      func_0x00010b1ec750();
      return;
    }
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  return;
}



/* Entry: 10b133118; end: 10b13313b;  */

void FUN_10b133118(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b13313c; end: 10b13315b;  */

void FUN_10b13313c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b12044c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13315c; end: 10b13315f;  */

void FUN_10b13315c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b133160; end: 10b1331f3;  */

void FUN_10b133160(long param_1)

{
  undefined1 in_ZR;
  
  FUN_10b1278b8(*(undefined8 *)(param_1 + 0x50));
  func_0x00010b134b1c();
  func_0x00010b13425c();
  if ((bool)in_ZR) {
    func_0x00010b1345a0();
    func_0x00010b134368();
  }
  else {
    func_0x00010b134068();
    func_0x00010b13435c();
    func_0x00010b1348a4();
  }
  func_0x00010b1346d4();
  func_0x00010b134560();
  return;
}



/* Entry: 10b1331f4; end: 10b133213;  */

void FUN_10b1331f4(void)

{
  func_0x00010b134958();
  FUN_10b12505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b133214; end: 10b1332ab;  */

void FUN_10b133214(long param_1)

{
  undefined1 in_ZR;
  
  FUN_10b124cf0(**(undefined8 **)(param_1 + 0x50));
  func_0x00010b134b1c();
  func_0x00010b13425c();
  if ((bool)in_ZR) {
    func_0x00010b1345a0();
    func_0x00010b134368();
  }
  else {
    func_0x00010b134068();
    func_0x00010b13435c();
    func_0x00010b1348a4();
  }
  func_0x00010b1346d4();
  func_0x00010b134560();
  return;
}



/* Entry: 10b1332ac; end: 10b1332cb;  */

void FUN_10b1332ac(void)

{
  func_0x00010b134958();
  FUN_10b12505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1332cc; end: 10b13338b;  */

void FUN_10b1332cc(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 extraout_w8;
  
  if ((*(byte *)(**(long **)(param_1 + 0x58) + 0x48) & 1) != 0) {
    func_0x00010b134b1c();
    func_0x00010b13490c();
    *(undefined1 *)(param_1 + 0x60) = extraout_w8;
    func_0x00010b135134();
    if ((bool)in_ZR) {
      func_0x00010b1345a0();
      func_0x00010b134368();
    }
    else {
      func_0x00010b134068();
      func_0x00010b13435c();
      func_0x00010b1348a4();
    }
    func_0x00010b1346d4();
    func_0x00010b134560();
    return;
  }
  func_0x00010b135cd8();
  __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b133340);
  (*pcVar1)();
}



/* Entry: 10b13338c; end: 10b1333ab;  */

void FUN_10b13338c(void)

{
  func_0x00010b134958();
  FUN_10b12505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1333ac; end: 10b13366f;  */

void FUN_10b1333ac(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [120];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  func_0x00010b133e10();
  uStack_58 = extraout_x8;
  FUN_10b12d0d0(param_1 + 0x158);
  func_0x00010b135f0c();
  func_0x00010b134af0(*(undefined8 *)(unaff_x19 + 0x70));
  func_0x00010b1ff218(unaff_x19 + 0x158);
  uStack_188 = *(undefined8 *)(unaff_x19 + 0x78);
  puStack_190 = *(undefined8 **)(unaff_x19 + 0x70);
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b121ddc(auStack_180,unaff_x19 + 0x80);
  FUN_10b121fd0(auStack_160,unaff_x19 + 0xa0);
  uStack_e0 = *(undefined8 *)(unaff_x19 + 0x120);
  uStack_e8 = *(undefined8 *)(unaff_x19 + 0x118);
  uStack_d0 = *(undefined8 *)(unaff_x19 + 0x130);
  uStack_d8 = *(undefined8 *)(unaff_x19 + 0x128);
  uStack_c8 = *(undefined8 *)(unaff_x19 + 0x138);
  uStack_c0 = (undefined1)*(undefined8 *)(unaff_x19 + 0x140);
  uStack_b7 = (undefined7)*(undefined8 *)(unaff_x19 + 0x149);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x149) >> 0x38);
  uStack_bf = (undefined7)*(undefined8 *)(unaff_x19 + 0x141);
  uStack_b8 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x141) >> 0x38);
  uStack_a0 = *(undefined8 *)(unaff_x19 + 0x58);
  uStack_a8 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  uStack_90 = *(undefined8 *)(unaff_x19 + 0x68);
  uStack_98 = *(undefined8 *)(unaff_x19 + 0x60);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b136238();
  puVar1 = (undefined8 *)0x108;
  auStack_88[0] = extraout_x8_00;
  __Znwm();
  puVar1[1] = uStack_188;
  *puVar1 = puStack_190;
  puStack_190 = (undefined8 *)0x0;
  uStack_188 = 0;
  func_0x00010b121ddc(puVar1 + 2,auStack_180);
  FUN_10b121fd0(puVar1 + 6,auStack_160);
  puVar1[0x16] = uStack_e0;
  puVar1[0x15] = uStack_e8;
  puVar1[0x18] = uStack_d0;
  puVar1[0x17] = uStack_d8;
  puVar1[0x1a] = CONCAT71(uStack_bf,uStack_c0);
  puVar1[0x19] = uStack_c8;
  puVar1[0x1c] = CONCAT71(uStack_af,uStack_b0);
  puVar1[0x1b] = CONCAT71(uStack_b7,uStack_b8);
  puVar1[0x1e] = uStack_a0;
  puVar1[0x1d] = uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar1[0x20] = uStack_90;
  puVar1[0x1f] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_78 = puVar1;
  func_0x00010b135d54();
  func_0x00010b133e7c();
  func_0x00010b1358a4();
  func_0x00010b1298c4(unaff_x19 + 0x158);
  func_0x00010b134b1c();
  func_0x00010b135208();
  while( true ) {
    func_0x00010b13490c();
    *(undefined1 *)(unaff_x19 + 0x178) = extraout_w8;
    func_0x00010b135134();
    if ((bool)in_ZR) {
      auStack_88[0] = CONCAT71(auStack_88[0]._1_7_,extraout_w8_00);
      puStack_190 = auStack_88;
      ppuVar3 = &puStack_190;
      func_0x000107c27b6c(unaff_x19 + 0x10);
    }
    else {
      func_0x00010b134894(auStack_88);
      ppuVar3 = &puStack_190;
      puStack_190 = auStack_88;
      func_0x000104bf33ec(unaff_x19 + 0x10);
      __ZNSt13exception_ptrD1Ev(auStack_88);
    }
    func_0x00010b1346d4();
    lVar2 = unaff_x19 + 0x50;
    FUN_10b12cc48(lVar2);
    func_0x00010b134560();
    func_0x00010b133dfc(uStack_58);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)ppuVar3 == 0) {
      do {
        func_0x00010b1343d8();
        func_0x000104bd46a0(lVar2);
      } while ((int)ppuVar3 == 0);
      func_0x00010b135f0c();
    }
    else {
      func_0x00010b133e7c();
      func_0x00010b1358a4();
      func_0x00010b1298c4(unaff_x19 + 0x158);
    }
    func_0x00010b135208();
    func_0x00010b13487c();
    func_0x00010b134b6c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b133670; end: 10b1336a7;  */

void FUN_10b133670(long param_1)

{
  if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
    func_0x00010b135f0c();
    func_0x00010b135208();
  }
  func_0x00010b1346d4();
  FUN_10b12cc48(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1336a8; end: 10b13377b;  */

void FUN_10b1336a8(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 extraout_w8;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  lVar2 = param_1 + 0x10;
  FUN_10b124cf0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010b135f4c();
  func_0x00010b12046c((undefined8 *)(param_1 + 0x58));
  func_0x00010b13490c();
  *(undefined1 *)(param_1 + 0x68) = extraout_w8;
  puVar1 = (undefined1 *)(param_1 + 0x38);
  func_0x00010b1361d0();
  if ((bool)in_ZR) {
    puStack_38 = puVar1;
    FUN_10b129190(lVar2,&puStack_38);
  }
  else {
    func_0x00010b136080();
    puStack_38 = auStack_40;
    FUN_10b129038(lVar2,&puStack_38);
    func_0x00010b1348a4();
  }
  func_0x00010b129274(lVar2);
  func_0x00010b134560();
  return;
}



/* Entry: 10b13377c; end: 10b1337a7;  */

void FUN_10b13377c(long param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    func_0x00010b135f68();
  }
  func_0x00010b135ffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1337a8; end: 10b133d57;  */

void FUN_10b1337a8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  ulong extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 uVar10;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_88 [2];
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar2 = param_1 + 0x20;
  puVar12 = param_1 + 0x22;
  if (*(char *)(param_1 + 0x26) == '\0') {
    FUN_10b113e08(puVar2,param_1 + 0xb);
    func_0x00010b135f70();
    FUN_10b113eb4(puVar12,puVar2,param_1 + 0x1d);
    FUN_10b1ab8c8(alStack_88,puVar12);
    if (alStack_88[0] == 0) {
      iVar13 = 0;
    }
    else {
      uStack_98 = *(undefined8 *)(alStack_88[0] + 0x28);
      lStack_a0 = *(long *)(alStack_88[0] + 0x20);
      if (*(long *)(alStack_88[0] + 0x28) != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_01 != 0);
      }
      param_1[0xc] = &PTR_FUN_110cbca30;
      param_1[0xb] = FUN_10b127674;
      param_1[0xd] = &lStack_a0;
      param_1[0xe] = puVar12;
      param_1[0xf] = alStack_88;
      FUN_10b112778(&puStack_78,param_1 + 0x1d,param_1 + 0xb);
      func_0x00010b1343c4(param_1[0xc]);
      func_0x00010b1358e4();
      FUN_10b127528(param_1 + 7,&puStack_78);
      func_0x00010b135db8();
      iVar13 = 3;
    }
    func_0x00010b125888(alStack_88);
    if (alStack_88[0] != 0) goto LAB_10b1339d4;
    func_0x00010b135c40();
    puVar6 = param_1 + 0x24;
    FUN_10b113ed8();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x26) = 1;
      uVar9 = param_1[0x24];
      __ZNSt3__115recursive_mutex4lockEv(uVar9);
      lVar8 = param_1[0x24];
      if ((*(byte *)(lVar8 + 0x58) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar9);
        func_0x00010b134574(*param_1);
        return;
      }
      plVar11 = *(long **)(lVar8 + 0x68);
      bVar4 = *(long **)(lVar8 + 0x70) <= plVar11;
      if (bVar4) {
        lVar14 = *(long *)(lVar8 + 0x60);
        lVar15 = (long)plVar11 - lVar14;
        if ((lVar15 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b133c0c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b133c10);
          (*pcVar3)();
        }
        func_0x00010b133e4c((long)*(long **)(lVar8 + 0x70) - lVar14);
        uVar1 = extraout_x9_04;
        if (bVar4) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b133c0c;
          }
          lVar7 = uVar1 << 3;
          __Znwm();
        }
        plVar11 = (long *)(lVar7 + lVar15);
        plVar16 = plVar11 + 1;
        *plVar11 = (long)param_1;
        _memcpy(plVar11 + -(lVar15 >> 3),lVar14,lVar15);
        *(long **)(lVar8 + 0x60) = plVar11 + -(lVar15 >> 3);
        *(long **)(lVar8 + 0x68) = plVar16;
        *(ulong *)(lVar8 + 0x70) = lVar7 + uVar1 * 8;
        if (lVar14 != 0) {
          __ZdlPv(lVar14);
        }
      }
      else {
        plVar16 = plVar11 + 1;
        *plVar11 = (long)param_1;
      }
      *(long **)(lVar8 + 0x68) = plVar16;
      __ZNSt3__115recursive_mutex6unlockEv(uVar9);
      return;
    }
  }
  puVar6 = param_1 + 0x24;
  FUN_10b113f00();
  lVar8 = puVar6[1];
  uVar9 = *puVar6;
  param_1[0xc] = puVar6[1];
  param_1[0xb] = uVar9;
  if (lVar8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1351f0();
  uStack_b0 = *(undefined8 *)(param_1[0xb] + 8);
  lStack_a8 = *(long *)(param_1[0xb] + 0x10);
  if (lStack_a8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1364f8();
  func_0x00010b134cd8();
  lVar8 = lStack_a0;
  if (lStack_a0 == 0) {
    iVar13 = 0;
  }
  else {
    func_0x00010b134a58(uStack_b0);
    (*extraout_x9)(&puStack_78);
    param_1[0x12] = &PTR_FUN_110cbca00;
    param_1[0x11] = FUN_10b127584;
    param_1[0x13] = &uStack_b0;
    param_1[0x14] = puVar2;
    param_1[0x15] = &lStack_a0;
    FUN_10b112778(alStack_88,&puStack_78,param_1 + 0x11);
    func_0x00010b135f54();
    func_0x00010b12592c(alStack_88);
    func_0x00010b1343c4(param_1[0x12]);
    func_0x00010b13525c();
    iVar13 = 3;
  }
  func_0x000107c278a4(&lStack_a0);
  if (lVar8 == 0) {
    func_0x00010b134a58(uStack_b0);
    (*extraout_x9_00)(&puStack_78);
    func_0x00010b1361f0();
    param_1[0x18] = extraout_x9_01;
    param_1[0x17] = extraout_x8;
    param_1[0x19] = &uStack_b0;
    param_1[0x1a] = puVar2;
    FUN_10b112778(alStack_88,&puStack_78,param_1 + 0x17);
    func_0x00010b135f54();
    func_0x00010b12592c(alStack_88);
    func_0x00010b1343c4(param_1[0x18]);
    func_0x00010b13525c();
    iVar13 = 3;
  }
  func_0x000107c2bdf4(&uStack_b0);
  func_0x000107c2be20(param_1 + 0xb);
LAB_10b1339d4:
  func_0x00010b1257f8(puVar12);
  func_0x00010b125908(puVar2);
  uVar5 = iVar13 == 3;
  if ((bool)uVar5) {
    func_0x00010b135930();
    func_0x00010b1361d0();
    if ((bool)uVar5) {
      __ZNSt3__112__get_sp_mutEPKv(param_1 + 3);
      func_0x00010b136100();
      puVar2 = (undefined8 *)param_1[3];
      lVar8 = param_1[4];
      param_1[3] = 0;
      param_1[4] = 0;
      __ZNSt3__18__sp_mut6unlockEv(puVar12);
      puStack_78 = puVar2;
      lStack_70 = lVar8;
      __ZNSt3__15mutex4lockEv(puVar2 + 9);
      uVar9 = param_1[7];
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar10 = param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        lVar8 = puVar2[1];
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar12 = puStack_78;
        if (lVar8 != 0) {
          do {
            func_0x00010b1340a4();
          } while (extraout_w11 != 0);
          puVar12 = puStack_78;
          if (extraout_x9_02 == 0) {
            func_0x00010b1347e0();
            func_0x00010b135d4c();
            puVar12 = puStack_78;
          }
        }
      }
      else {
        *puVar2 = uVar9;
        puVar2[1] = param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        *(undefined1 *)(puVar2 + 2) = 1;
        puVar12 = puVar2;
      }
      plVar11 = (long *)puVar12[0x12];
      puVar12[0x12] = 0;
      __ZNSt3__15mutex6unlockEv(puVar2 + 9);
      if (plVar11 == (long *)0x0) {
        __ZNSt3__118condition_variable10notify_allEv(puVar12 + 3);
      }
      else {
        func_0x00010b1353c0();
        func_0x00010b1355d4();
        func_0x00010b134eb4(*(undefined8 *)(*plVar11 + 8));
      }
      if (lStack_70 != 0) {
        do {
          func_0x00010b1340a4();
        } while (extraout_w11_00 != 0);
        if (extraout_x9_03 == 0) {
          func_0x00010b1347e0();
          func_0x00010b135d4c();
        }
      }
    }
    else {
      func_0x00010b134894(&puStack_78);
      FUN_10b120c04(param_1 + 2,&puStack_78);
      __ZNSt13exception_ptrD1Ev(&puStack_78);
    }
  }
  FUN_10b120efc(param_1 + 2);
  func_0x00010b1354fc();
  func_0x00010b134560();
  return;
}



/* Entry: 10b133d58; end: 10b133dab;  */

void FUN_10b133d58(long param_1)

{
  if (*(char *)(param_1 + 0x130) == '\0') {
    func_0x00010b135f70();
  }
  else if (*(char *)(param_1 + 0x130) != '\x02') {
    func_0x00010b1351f0();
    func_0x00010b1257f8(param_1 + 0x110);
    func_0x00010b125908(param_1 + 0x100);
  }
  FUN_10b120efc(param_1 + 0x10);
  func_0x00010b1354fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b133dac; end: 10b13658b;  */

void FUN_10b133dac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b13658c; end: 10b136653;  */

long FUN_10b13658c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_10b1369f0();
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[2];
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  *(undefined8 *)(param_1 + 0x58) = param_4[2];
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  lVar4 = param_5[1];
  uVar5 = *param_5;
  *(undefined8 *)(param_1 + 0xb8) = param_5[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_6[1];
  uVar5 = *param_6;
  *(undefined8 *)(param_1 + 200) = param_6[1];
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10b136654; end: 10b13669f;  */

long FUN_10b136654(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b1369f0();
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x0001052b8c70(param_1 + 0x68,param_3);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return param_1;
}



/* Entry: 10b1366a0; end: 10b1366b7;  */

void FUN_10b1366a0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x30);
  return;
}



/* Entry: 10b1366b8; end: 10b136817;  */

void FUN_10b1366b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [72];
  undefined1 auStack_60 [32];
  long alStack_40 [2];
  
  FUN_10b125dc8(alStack_40,param_2 + 0xc0);
  if (alStack_40[0] == 0) {
    func_0x000107c281f8(auStack_60,param_2 + 0x48);
    func_0x000107c278b8(&uStack_108,&UNK_10e55a968);
    func_0x00010731ef9c(&uStack_128,&UNK_10f7301ed);
    uStack_e0 = uStack_f8;
    uStack_e8 = uStack_100;
    uStack_f0 = uStack_108;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    uStack_d8 = 5;
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_b8 = cStack_110 == '\x01';
    if ((bool)uStack_b8) {
      uStack_c8 = uStack_120;
      uStack_d0 = uStack_128;
      uStack_c0 = uStack_118;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
    }
    func_0x0001052b8c70(auStack_a8,&uStack_f0);
    FUN_10b1026dc(param_1,auStack_60,auStack_a8);
    func_0x0001052a038c(auStack_a8);
    func_0x0001052a03ac(&uStack_f0);
    func_0x000107c279a4(&uStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
    func_0x000107c279a4(auStack_60);
  }
  else {
    FUN_10b117928(param_1,alStack_40[0],param_3,param_2 + 0x48,*(undefined4 *)(param_2 + 0x60));
  }
  func_0x00010b12592c(alStack_40);
  return;
}



/* Entry: 10b136818; end: 10b136913;  */

long ** FUN_10b136818(long param_1)

{
  long lVar1;
  long **pplVar2;
  long **extraout_x8;
  long *plVar3;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_50 = (long *)0x0;
  lStack_48 = 0;
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_48 = lVar1;
    if (lVar1 != 0) {
      plVar3 = *(long **)(param_1 + 0xb0);
      plStack_50 = plVar3;
      if (plVar3 != (long *)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_40,param_1 + 0x48);
        func_0x0001074e1df0(auStack_a0,auStack_40,1);
        (**(code **)(*plVar3 + 0x60))(auStack_78,plVar3,auStack_a0);
        FUN_10b131cc0(auStack_78);
        func_0x000107c2826c(auStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
      }
    }
  }
  pplVar2 = &plStack_50;
  func_0x00010b125864();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pplVar2;
  }
  ___stack_chk_fail();
  func_0x000107c2826c(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  func_0x00010b125864(&plStack_50);
  __Unwind_Resume(pplVar2);
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 8) = 0;
  func_0x0001052a0730(extraout_x8,pplVar2 + 0xd);
  return extraout_x8;
}



/* Entry: 10b136914; end: 10b136937;  */

undefined1 * FUN_10b136914(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  func_0x0001052a0730(param_1,param_2 + 0x68);
  return param_1;
}



/* Entry: 10b136938; end: 10b13694b;  */

void FUN_10b136938(void)

{
  FUN_10b136994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b13694c; end: 10b136993;  */

undefined4 FUN_10b13694c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



/* Entry: 10b136994; end: 10b1369ef;  */

undefined8 * FUN_10b136994(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbdc88;
  func_0x00010b12581c(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x0001052a038c(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  FUN_10b0f7ab4(param_1 + 1);
  return param_1;
}



/* Entry: 10b1369f0; end: 10b1369ff;  */

void FUN_10b1369f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110cbdc88;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 3);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



/* Entry: 10b136a00; end: 10b136bfb;  */

void FUN_10b136a00(undefined8 *param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
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
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  while ((0 < param_3 && (lVar5 = *(long *)(param_2 + 0x20), lVar5 != *(long *)(param_2 + 0x10)))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_c0 = &PTR_FUN_110ccad58;
    uStack_b8 = 0;
    ppuStack_a8 = (undefined **)0x0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8f = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    pppuVar2 = &ppuStack_c0;
    FUN_10b136bfc(pppuVar2,lVar5 + 0x28);
    if ((int)pppuVar2 != 0) {
      ppuVar1 = &PTR_PTR_113405540;
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_a8;
      }
      puVar4 = (undefined8 *)((ulong)ppuVar1[2] & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar4 + 0x17);
      if (lVar3 < 0) {
        lVar3 = puVar4[1];
        puVar4 = (undefined8 *)*puVar4;
      }
      func_0x0001089a20f8(&uStack_80,puVar4,(long)puVar4 + lVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_148,lVar5);
      uStack_c8 = uStack_70;
      uStack_d0 = uStack_78;
      uStack_d8 = uStack_80;
      uStack_100 = uStack_138;
      uStack_108 = uStack_140;
      uStack_110 = uStack_148;
      uStack_118 = *(undefined4 *)(param_2 + 0x28);
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_f8 = uStack_118;
      FUN_10b136cc8(param_1,&uStack_110);
      func_0x00010b0f3dc4(&uStack_110);
      func_0x000107c27914(&uStack_178);
      func_0x000107c27914(&uStack_160);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_148);
    }
    FUN_10b24fff8(&ppuStack_c0);
    func_0x000107c27914(&uStack_80);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x40;
    param_3 = param_3 + -1;
  }
  return;
}



/* Entry: 10b136bfc; end: 10b136caf;  */

ulong FUN_10b136bfc(ulong param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 auStack_30 [2];
  ulong uStack_28;
  
  if (*param_2 == param_2[1]) {
    uVar2 = 1;
  }
  else {
    uVar1 = param_1;
    FUN_10b1371b0();
    uVar2 = uVar1;
    if (0x7ffffffe < uVar1) {
      uVar2 = 0x7fffffff;
    }
    if ((ulong)(param_2[1] - *param_2) <= uVar2) {
      func_0x000100063660(param_1,&stack0xffffffffffffffe0);
      return param_1;
    }
    auStack_30[0] = 0;
    FUN_10b24b460();
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_28 = uVar1;
    FUN_10b114b00(auStack_30,0xd4,&uStack_48,1);
    FUN_10b120998(&uStack_48);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b136cb0; end: 10b136cb3;  */

undefined8 * FUN_10b136cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdcf8;
  func_0x00010b1248a0(param_1 + 1);
  return param_1;
}



/* Entry: 10b136cb4; end: 10b136cc7;  */

void FUN_10b136cb4(void)

{
  func_0x00010b137184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b136cc8; end: 10b136d2b;  */

long FUN_10b136cc8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b136d04();
    lVar2 = uVar1 + 0x50;
  }
  else {
    lVar2 = param_1;
    FUN_10b136d2c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x50;
}



/* Entry: 10b136d2c; end: 10b136dd3;  */

long FUN_10b136d2c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10b136e38(param_1,(param_1[1] - *param_1) / 0x50 + 1);
  FUN_10b136f28(auStack_58,plVar1,(param_1[1] - *param_1) / 0x50,param_1 + 2);
  FUN_10b136dd4(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x50;
  FUN_10b136e88(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010b137118(auStack_58);
  return lVar2;
}



/* Entry: 10b136dd4; end: 10b136e37;  */

void FUN_10b136dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



/* Entry: 10b136e38; end: 10b136e87;  */

long * FUN_10b136e38(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_10b136f14();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b136fc4(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b136e88; end: 10b136f13;  */

void FUN_10b136e88(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b136fc4(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b136f14; end: 10b136f27;  */

long * FUN_10b136f14(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b136f74();
  }
  lVar2 = param_4 + param_3 * 0x50;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x50;
  return plVar1;
}



/* Entry: 10b136f28; end: 10b136f97;  */

long * FUN_10b136f28(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b136f74();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10b136f98; end: 10b136fc3;  */

void FUN_10b136f98(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x50) {
    FUN_10b136dd4(param_4,uVar1);
    param_4 = lStack_48 + 0x50;
  }
  uStack_58 = 1;
  FUN_10b137068(param_1,param_2,param_3);
  FUN_10b137098(&uStack_70);
  return;
}



/* Entry: 10b136fc4; end: 10b137067;  */

void FUN_10b136fc4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x50) {
    FUN_10b136dd4(param_4,lVar1);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  FUN_10b137068(param_1,param_2,param_3);
  FUN_10b137098(&uStack_60);
  return;
}



/* Entry: 10b137068; end: 10b137097;  */

void FUN_10b137068(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x00010b0f3dc4();
  }
  return;
}



/* Entry: 10b137098; end: 10b1370c7;  */

long FUN_10b137098(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b1370c8(param_1);
  }
  return param_1;
}



/* Entry: 10b1370c8; end: 10b1370e7;  */

void FUN_10b1370c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b0f3dc4();
  }
  return;
}



/* Entry: 10b1370e8; end: 10b137143;  */

void FUN_10b1370e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x50;
    func_0x00010b0f3dc4();
  }
  return;
}



/* Entry: 10b137144; end: 10b13714b;  */

void FUN_10b137144(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x50;
    func_0x00010b0f3dc4();
  }
  return;
}



/* Entry: 10b13714c; end: 10b1371af;  */

void FUN_10b13714c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x50;
    func_0x00010b0f3dc4();
  }
  return;
}


