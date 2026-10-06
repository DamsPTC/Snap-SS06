/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b12b2c4; end: 10b12b2e7;  */

void FUN_10b12b2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b12b2e8; end: 10b12b30b;  */

void FUN_10b12b2e8(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12b30c; end: 10b12b467;  */

void FUN_10b12b30c(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_310 [80];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [23];
  undefined1 uStack_291;
  byte bStack_270;
  long lStack_260;
  char cStack_250;
  long lStack_228;
  byte bStack_220;
  
  plVar3 = *(long **)(param_1 + 0x10);
  func_0x00010b1340dc(auStack_2a8,*(undefined8 *)(plVar3[8] + 0x28),plVar3 + 2);
  if ((((cStack_250 == '\x01') && ((bStack_220 & 1) != 0)) && (lStack_228 == 0)) &&
     (lStack_260 == 0)) {
    uVar1 = 0;
    FUN_10b1c4a58();
    if ((uVar1 & 1) == 0) {
      func_0x00010b1340c8();
      func_0x00010b13551c();
      func_0x00010b134dec();
      func_0x00010b1356a0();
    }
    else if ((bStack_270 & 1) == 0) {
      func_0x00010b1340c8();
      func_0x00010b13551c();
      func_0x00010b134dec();
      func_0x00010b1356b0();
    }
    else {
      func_0x00010b1350c4(uStack_291);
      if (extraout_x8 != 0) {
        uVar2 = *(undefined8 *)(*plVar3 + 0x28);
        FUN_10b202630(auStack_310,auStack_2a8);
        FUN_10b1f6fe0(uVar2,auStack_310,(int)plVar3[5],plVar3 + 2);
        func_0x00010b134cc8();
      }
      func_0x00010b1340c8();
      func_0x00010b13551c();
      func_0x00010b134dec();
      func_0x00010b1356b0();
    }
  }
  else {
    func_0x00010b1340c8();
    func_0x00010b13551c();
    func_0x00010b134dec();
    func_0x00010b1356a0();
  }
  func_0x000107c27c20(auStack_310);
  FUN_10b127ebc(auStack_2c0);
  func_0x00010b1356c0();
  return;
}



/* Entry: 10b12b468; end: 10b12b487;  */

void FUN_10b12b468(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b118740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12b488; end: 10b12b49f;  */

void FUN_10b12b488(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12b4a0; end: 10b12b4bf;  */

void FUN_10b12b4a0(void)

{
  func_0x00010b13502c();
  FUN_10b12b4c0();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b12b4c0; end: 10b12b4eb;  */

void FUN_10b12b4c0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x147ae147ae147af) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 200);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbdab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b4ec; end: 10b12b4ef;  */

void FUN_10b12b4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b4f0; end: 10b12b503;  */

void FUN_10b12b4f0(void)

{
  FUN_10b12b5e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12b504; end: 10b12b50f;  */

undefined8 FUN_10b12b504(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  func_0x00010b12b638(param_1 + 0x70);
  func_0x00010b12b720(param_1 + 0x50);
  FUN_10b12b58c(param_1 + 0x38);
  func_0x000107c27c20(param_1 + 0x28);
  func_0x000107c350ac();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b12b510; end: 10b12b52f;  */

void FUN_10b12b510(void)

{
  func_0x00010b13502c();
  FUN_10b12b530();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b12b530; end: 10b12b55b;  */

void FUN_10b12b530(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbd780;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b55c; end: 10b12b55f;  */

void FUN_10b12b55c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd780;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b560; end: 10b12b573;  */

void FUN_10b12b560(void)

{
  func_0x00010b12b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12b574; end: 10b12b58b;  */

long FUN_10b12b574(long param_1)

{
  func_0x0001001148fc(param_1 + 0x70);
  func_0x0001001148fc(param_1 + 0x50);
  func_0x0001000e30f4(param_1 + 0x38);
  return param_1 + 0x18;
}



/* Entry: 10b12b58c; end: 10b12b5af;  */

void FUN_10b12b58c(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12b5b0; end: 10b12b5bf;  */

void FUN_10b12b5b0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12b5c0; end: 10b12b5e3;  */

void FUN_10b12b5c0(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b12b5e4; end: 10b12b5ef;  */

void FUN_10b12b5e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b5f0; end: 10b12b687;  */

undefined8 FUN_10b12b5f0(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  func_0x00010b12b638(param_1 + 0x58);
  func_0x00010b12b720(param_1 + 0x38);
  FUN_10b12b58c(param_1 + 0x20);
  func_0x000107c27c20(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b12b688; end: 10b12b68f;  */

void FUN_10b12b688(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010b12b6c4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12b690; end: 10b12b6e3;  */

void FUN_10b12b690(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010b12b6c4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12b6e4; end: 10b12b6fb;  */

void FUN_10b12b6e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b134078();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b12b6fc; end: 10b12b76f;  */

void FUN_10b12b6fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b134078();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b12b770; end: 10b12b777;  */

void FUN_10b12b770(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b13448c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    func_0x00010b13508c(**(undefined8 **)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12b778; end: 10b12b7b7;  */

void FUN_10b12b778(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b13448c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    func_0x00010b13508c(**(undefined8 **)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12b7b8; end: 10b12b817;  */

void FUN_10b12b7b8(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b133f58();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b12b818(param_2,&uStack_20);
    FUN_10b12b860(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b12b818; end: 10b12b84f;  */

void FUN_10b12b818(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b13422c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b133fe4();
  FUN_10b12b5c0();
  return;
}



/* Entry: 10b12b850; end: 10b12b85f;  */

void FUN_10b12b850(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12b860; end: 10b12b883;  */

void FUN_10b12b860(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12b884; end: 10b12b8fb;  */

void FUN_10b12b884(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((lStack_18 = *(long *)(param_2 + 0x10), lStack_18 == 0 || (*(long *)(lStack_18 + 8) == -1))))
  {
    lStack_30 = param_2;
    lStack_28 = param_3;
    if (param_3 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
      lStack_18 = *(long *)(param_2 + 0x10);
    }
    uStack_20 = *(undefined8 *)(param_2 + 8);
    *(long *)(param_2 + 8) = param_2;
    *(long *)(param_2 + 0x10) = param_3;
    FUN_10b12b928(&uStack_20);
    func_0x00010b12b94c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10b12b8fc; end: 10b12b8ff;  */

void FUN_10b12b8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbcde0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b900; end: 10b12b913;  */

void FUN_10b12b900(void)

{
  func_0x00010b12b91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12b914; end: 10b12b927;  */

void FUN_10b12b914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b12b928; end: 10b12b9a3;  */

void FUN_10b12b928(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b12b9a4; end: 10b12b9a7;  */

void FUN_10b12b9a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbce30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b9a8; end: 10b12b9bb;  */

void FUN_10b12b9a8(void)

{
  func_0x00010b12b9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12b9bc; end: 10b12b9cf;  */

void FUN_10b12b9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b12b9d0; end: 10b12ba4b;  */

void FUN_10b12b9d0(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b12ba4c; end: 10b12ba8f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1a18c0) */

void FUN_10b12ba4c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  int extraout_w11;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_f8 [24];
  long *plStack_e0;
  long *plStack_d8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x00010b1aa568(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  FUN_10b19af84(&uStack_60);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  plStack_d8 = (long *)0x7fffffffffffffff;
  plStack_e0 = (long *)0x0;
  FUN_10b19f5c4(&puStack_c0,unaff_x19 + 0x480,&plStack_e0);
  puVar8 = puStack_c0;
LAB_10b1a1664:
  if (puVar8 == puStack_b8) {
    func_0x00010b1aadf0();
    FUN_10b19cef0(&uStack_60);
LAB_10b1a1860:
    plVar10 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      func_0x000107c278b8(&puStack_c0,&UNK_10f731324);
      func_0x00010b1aa8b8(*(undefined8 *)(*plVar10 + 0x18),plVar10,8,&puStack_c0);
      func_0x00010b1aadf8();
    }
    FUN_10b0fb81c(&plStack_90);
    FUN_10b122f98(&uStack_60);
    return;
  }
  if (puVar8[5] != unaff_x20) goto code_r0x00010b1a1678;
  func_0x00010b1aae28();
  if (*(char *)(unaff_x19 + 0x46c) == '\x01') {
    FUN_10b10537c(&plStack_90,puVar8 + 2);
  }
  uStack_78 = puVar8[1];
  uStack_80 = *puVar8;
  uStack_70 = 1;
  func_0x00010b1aadf0();
  lVar4 = unaff_x19 + 0xd0;
  FUN_10b127a84();
  if ((int)lVar4 == 0) {
    plStack_a8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
  }
  else {
    func_0x00010b1aae90();
    plStack_a8 = *(long **)(lVar4 + 0x10);
    plStack_d8 = *(long **)(lVar4 + 0x18);
    plStack_e0 = plStack_a8;
    if (plStack_d8 != (long *)0x0) {
      do {
        func_0x00010b1aa588();
        plStack_a8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  uStack_98 = *(undefined1 *)(unaff_x19 + 0x46b);
  puStack_c0 = (ulong *)0x0;
  puStack_b8 = (ulong *)0x0;
  uStack_b0 = 0;
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_a0 = plStack_d8;
  func_0x0001052a9ef8(&plStack_e0);
  FUN_10b19f8ac(&plStack_e0,unaff_x19 + 0x590,&uStack_80);
  plVar3 = plStack_d8;
  plVar10 = plStack_e0;
LAB_10b1a1750:
  if (plVar10 == plVar3) {
    func_0x00010b1a457c(&plStack_e0);
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b1aae54(&puStack_c0);
    func_0x00010b1aa468();
    FUN_10b1a45c4(&puStack_c0);
    goto LAB_10b1a1860;
  }
  puVar5 = *(undefined8 **)(unaff_x19 + 0x488);
  while (puVar5 != (undefined8 *)(unaff_x19 + 0x490U)) {
    if (*plVar10 < (long)puVar5[5] && (long)puVar5[4] < plVar10[1]) goto LAB_10b1a1824;
    func_0x000107c27be0();
  }
  puVar6 = *(undefined8 **)(unaff_x19 + 0x728);
  for (puVar9 = *(undefined8 **)(unaff_x19 + 0x720); puVar7 = puVar6, puVar9 != puVar6;
      puVar9 = puVar9 + 5) {
    func_0x00010b1aaecc(*puVar9);
    puVar7 = puVar9;
    if ((int)puVar5 != 0) goto LAB_10b1a17ac;
  }
  goto LAB_10b1a17dc;
code_r0x00010b1a1678:
  puVar8 = puVar8 + 7;
  goto LAB_10b1a1664;
LAB_10b1a17ac:
  while (puVar9 = puVar9 + 5, puVar9 != puVar6) {
    func_0x00010b1aaecc(*puVar9);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = puVar7;
      func_0x00010b1a4b00(puVar7,puVar9);
      puVar7 = puVar7 + 5;
    }
  }
LAB_10b1a17dc:
  if (puVar7 != *(undefined8 **)(unaff_x19 + 0x728)) {
    func_0x00010b1a4acc(unaff_x19 + 0x720,puVar7);
  }
  FUN_10b19faf4(&puStack_c0,plVar10 + 2);
  FUN_10b19fac0(auStack_f8,unaff_x19 + 0x590,plVar10 + 2);
  FUN_10b1a15e4();
LAB_10b1a1824:
  plVar10 = plVar10 + 5;
  goto LAB_10b1a1750;
}



/* Entry: 10b12ba90; end: 10b12bac3;  */

void FUN_10b12ba90(void)

{
  func_0x00010b134308();
  func_0x00010b1362ec();
  func_0x00010b1342a8();
  func_0x00010b134e3c();
  return;
}



/* Entry: 10b12bac4; end: 10b12baf7;  */

void FUN_10b12bac4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12baf8; end: 10b12c80b;  */

void FUN_10b12baf8(long param_1)

{
  code cVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined8 **ppuVar12;
  byte bVar13;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **extraout_x8_02;
  undefined **extraout_x8_03;
  long extraout_x8_04;
  undefined **extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 *extraout_x8_08;
  long *extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w12;
  long *plVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  undefined ***unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined ***unaff_x26;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined8 in_stack_00000050;
  undefined8 uStack_1350;
  undefined8 *puStack_1348;
  undefined1 auStack_1340 [32];
  undefined1 auStack_1320 [120];
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined1 uStack_1280;
  undefined7 uStack_127f;
  undefined1 uStack_1278;
  undefined7 uStack_1277;
  undefined1 uStack_1270;
  undefined7 uStack_126f;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 *puStack_1240;
  undefined8 *puStack_1238;
  undefined8 *puStack_1230;
  undefined8 *puStack_1228;
  undefined8 uStack_1208;
  undefined ***pppuStack_1200;
  undefined ***pppuStack_11f8;
  undefined ***pppuStack_11f0;
  ulong uStack_11e8;
  long *plStack_11e0;
  undefined ***pppuStack_11d8;
  undefined ***pppuStack_11d0;
  undefined ***pppuStack_11c8;
  undefined **ppuStack_11c0;
  long *plStack_11b8;
  undefined8 *puStack_11b0;
  code *pcStack_11a8;
  long *plStack_1190;
  char cStack_1188;
  undefined1 auStack_1178 [24];
  char cStack_1160;
  undefined **ppuStack_1158;
  undefined **ppuStack_1150;
  undefined **appuStack_1140 [2];
  undefined **ppuStack_1130;
  long lStack_1128;
  undefined **ppuStack_1120;
  undefined **ppuStack_1118;
  undefined **ppuStack_1108;
  undefined **ppuStack_1100;
  undefined **ppuStack_10f8;
  undefined **ppuStack_10a0;
  undefined **ppuStack_1098;
  undefined **ppuStack_1090;
  long lStack_1088;
  undefined ***pppuStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined1 uStack_1068;
  undefined1 uStack_d88;
  undefined ***pppuStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  char cStack_d60;
  undefined *apuStack_d10 [3];
  undefined1 auStack_cf8 [80];
  undefined4 uStack_ca8;
  long lStack_c88;
  byte bStack_c70;
  char cStack_b37;
  char cStack_b36;
  undefined *puStack_a80;
  undefined *puStack_a78;
  undefined1 auStack_a70 [32];
  undefined1 auStack_a50 [40];
  undefined8 uStack_a28;
  undefined **ppuStack_a20;
  undefined ***pppuStack_a18;
  long *plStack_9b0;
  long lStack_9a8;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined8 uStack_520;
  undefined1 uStack_510;
  undefined1 uStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  long lStack_4d0;
  undefined ***pppuStack_4c8;
  undefined1 auStack_4c0 [32];
  undefined1 auStack_4a0 [120];
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined8 uStack_3f7;
  undefined1 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [24];
  long lStack_188;
  long lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [32];
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 auStack_40 [40];
  undefined8 uStack_18;
  
  func_0x00010b134cf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar8 = &ppuStack_10a0;
  func_0x00010b133e8c();
  plVar15 = *(long **)(param_1 + 0x10);
  ppuVar16 = (undefined **)plVar15[10];
  puStack_a78 = (undefined *)plVar15[5];
  puStack_a80 = (undefined *)plVar15[4];
  uStack_18 = extraout_x8;
  if (plVar15[5] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b123c68(auStack_a70,plVar15);
  func_0x00010b135254(auStack_a50);
  ppuVar5 = (undefined **)ppuVar16[5];
  func_0x00010b1340dc(auStack_cf8,ppuVar5,plVar15 + 6);
  if ((bStack_c70 & 1) == 0) {
    func_0x00010b135a50();
    plVar15 = *(long **)(extraout_x8_00 + 0x30);
    lStack_9a8 = *(long *)(extraout_x8_00 + 0x38);
    plStack_9b0 = plVar15;
    if (lStack_9a8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    ppuStack_4f0 = (undefined **)FUN_10b12ce14;
    ppuStack_4e8 = &PTR_FUN_110cbcea0;
    func_0x00010b135d68();
    ppuVar5[1] = puStack_a78;
    *ppuVar5 = puStack_a80;
    if (puStack_a78 != (undefined *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b136330();
    func_0x00010b123c68();
    func_0x00010b121ddc(ppuVar5 + 6,auStack_a50);
    pppuVar18 = &ppuStack_4f0;
    ppuStack_4e0 = ppuVar5;
    func_0x00010b1346dc();
    pppuVar11 = &ppuStack_4f0;
    func_0x00010b134584();
    func_0x00010b133eb4(ppuStack_4e8);
    FUN_10b127ebc(&plStack_9b0);
    goto LAB_10b12c3e8;
  }
  FUN_10b2029a0();
  FUN_10b20345c();
  uVar6 = 0;
  FUN_10b11b69c();
  if (((uVar6 & 1) == 0) && (*(char *)((long)ppuVar5 + 0x56) == '\x01')) {
    FUN_10b1245a8(&ppuStack_4f0,ppuVar16[5]);
    if (*(float *)((long)ppuStack_4f0 + 0x65c) <= 0.0) {
      func_0x00010b1245e8(&ppuStack_4f0);
      goto LAB_10b12bdc0;
    }
    cVar1 = *(code *)(ppuStack_4f0 + 0x88);
    func_0x00010b1245e8(&ppuStack_4f0);
    if (cVar1 != (code)0x1) goto LAB_10b12bdc0;
    pppuVar18 = *(undefined ****)ppuVar16[3];
    FUN_10b12983c(&ppuStack_4f0,(int)plVar15[9]);
    func_0x00010b134904(&plStack_9b0,&ppuStack_4f0);
    func_0x00010b134528(pppuVar18,0xb4,&plStack_9b0);
    FUN_10b120998(&plStack_9b0);
    func_0x00010b134618(&ppuStack_4f0);
    func_0x00010b135254(&uStack_a28);
    func_0x000107c278b8(&ppuStack_1108,&UNK_10e55a8c8);
    func_0x0001073176c8(&pppuStack_d78,&UNK_10f7300aa);
    ppuStack_1090 = ppuStack_10f8;
    ppuStack_1098 = ppuStack_1100;
    ppuStack_10a0 = ppuStack_1108;
    ppuStack_1100 = (undefined **)0x0;
    ppuStack_10f8 = (undefined **)0x0;
    ppuStack_1108 = (undefined **)0x0;
    lStack_1088 = 2;
    pppuStack_1080 = (undefined ***)((ulong)pppuStack_1080 & 0xffffffffffffff00);
    in_ZR = cStack_d60 == '\x01';
    if ((bool)in_ZR) {
      uStack_1078 = uStack_d70;
      pppuStack_1080 = pppuStack_d78;
      uStack_1070 = uStack_d68;
      uStack_d68 = 0;
      pppuStack_d78 = (undefined ***)0x0;
      uStack_d70 = 0;
    }
    uStack_1068 = in_ZR;
    func_0x0001052b8c70(&plStack_9b0,&ppuStack_10a0);
    FUN_10b1195f4(&ppuStack_4f0,&plStack_9b0);
    func_0x00010b135010(&ppuStack_530);
    pppuVar11 = &ppuStack_530;
    FUN_10b11d020(plVar15);
    func_0x00010b0f7f30(&ppuStack_530);
    func_0x00010b0faf64(&ppuStack_4f0);
    func_0x0001052a038c(&plStack_9b0);
    func_0x0001052a03ac(&ppuStack_10a0);
    func_0x000107c279a4(&pppuStack_d78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1108);
    ppuVar5 = (undefined **)&uStack_a28;
    unaff_x23 = (undefined ***)0x1;
  }
  else {
LAB_10b12bdc0:
    unaff_x23 = &ppuStack_4f0;
    if (((cStack_b37 == '\x01') && (lStack_c88 == 0)) || (*(char *)((long)ppuVar5 + 0x54) == '\x01')
       ) {
      puVar7 = (undefined8 *)ppuVar16[5];
      FUN_10b1262f4();
      FUN_10b1d2ae8(&ppuStack_10a0,*puVar7);
      if ((char)ppuStack_1090 == '\x01') {
        ppuStack_4e8 = (undefined **)plVar15[1];
        ppuStack_4f0 = (undefined **)*plVar15;
        ppuStack_4d8 = (undefined **)plVar15[3];
        ppuStack_4e0 = (undefined **)plVar15[2];
        *plVar15 = 0;
        plVar15[1] = 0;
        plVar15[2] = 0;
        plVar15[3] = 0;
        pppuVar18 = &ppuStack_4f0;
        pppuStack_4c8 = (undefined ***)plVar15[5];
        lStack_4d0 = plVar15[4];
        in_ZR = 1;
        if (plVar15[5] != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_02 != 0);
        }
        func_0x00010b135254(auStack_4c0);
        func_0x00010b135560(auStack_4a0);
        lStack_420 = plVar15[0x1b];
        lStack_428 = plVar15[0x1a];
        lStack_410 = plVar15[0x1d];
        lStack_418 = plVar15[0x1c];
        lStack_408 = plVar15[0x1e];
        uStack_3f7 = *(undefined8 *)((long)plVar15 + 0x101);
        uStack_3f8 = (undefined1)((ulong)*(undefined8 *)((long)plVar15 + 0xf9) >> 0x38);
        uStack_400 = (undefined1)plVar15[0x1f];
        uStack_3ff = (undefined7)((ulong)plVar15[0x1f] >> 8);
        FUN_10b12c80c(&pppuStack_d78,&ppuStack_10a0,&ppuStack_4f0);
        func_0x000107c27b58(&pppuStack_d78);
        FUN_10b12cc48(&ppuStack_4f0);
        ppuVar5 = *(undefined ***)ppuVar16[3];
        FUN_10b12983c(&plStack_9b0,(int)plVar15[9]);
        func_0x00010b134904(&uStack_a28,&plStack_9b0);
        pppuVar11 = (undefined ***)0xb1;
        func_0x00010b134528(ppuVar5,0xb1,&uStack_a28);
        FUN_10b120998(&uStack_a28);
        func_0x00010b134618(&plStack_9b0);
        func_0x00010b135e38();
        goto LAB_10b12c3e8;
      }
      func_0x00010b135e38();
    }
    FUN_10b1f72cc(*(undefined8 *)(plVar15[4] + 0x28),auStack_cf8);
    if (cStack_b36 == '\x01') {
      uVar19 = **(undefined8 **)(plVar15[4] + 0x18);
      func_0x00010b135a38();
      func_0x000107c278b8(&ppuStack_4f0);
      FUN_10b20bd54(uVar19,&ppuStack_4f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_4f0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (apuStack_d10,auStack_cf8);
    if ((char)plVar15[0x21] == '\x01') {
      bVar13 = *(byte *)((long)plVar15 + 0xf9);
    }
    else {
      bVar13 = 0;
    }
    FUN_10b11fae8(&pppuStack_d78,ppuVar16,bVar13 & 1);
    unaff_x24 = plVar15 + 0x1a;
    in_ZR = (char)plVar15[0x21] == '\x01';
    if ((bool)in_ZR) {
      bVar13 = *(byte *)(plVar15 + 0x1f);
    }
    else {
      bVar13 = 0;
    }
    FUN_10b1252ec(&ppuStack_1108,&pppuStack_d78);
    cStack_1188 = cStack_b36;
    func_0x00010b1359c0();
    plStack_1190 = unaff_x24;
    func_0x00010b135e68(&ppuStack_10a0,ppuVar16,auStack_cf8,bVar13 & 1,plVar15 + 0xb,plVar15 + 6,
                        &ppuStack_1108);
    func_0x00010b121ac0(&ppuStack_1108);
    ppuStack_1120 = ppuStack_10a0;
    ppuStack_1118 = ppuStack_1098;
    ppuVar5 = ppuStack_10a0;
    if (ppuStack_1098 != (undefined **)0x0) {
      do {
        func_0x00010b133f58();
        ppuVar5 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    if (ppuStack_1090 == (undefined **)0x0) {
      if (ppuVar5 == (undefined **)0x0) {
        bVar13 = 0;
        goto LAB_10b12c03c;
      }
LAB_10b12bfec:
      func_0x00010b134248();
      uVar14 = 1;
      if (!(bool)in_ZR) {
        uVar14 = 2;
      }
      unaff_x25 = (ulong)uVar14;
      if (ppuStack_1120 == (undefined **)0x0) {
        bVar13 = 0;
        ppuVar5 = ppuStack_1090;
        goto joined_r0x00010b12c01c;
      }
      ppuStack_4e8 = (undefined **)(long)*(char *)((long)ppuStack_1120 + 0x777);
      if ((long)ppuStack_4e8 < 0) {
        bVar13 = 0;
        ppuStack_4f0 = (undefined **)ppuStack_1120[0xec];
        ppuStack_4e8 = (undefined **)ppuStack_1120[0xed];
      }
      else {
        bVar13 = 0;
        ppuStack_4f0 = ppuStack_1120 + 0xec;
      }
    }
    else {
      if (ppuVar5 != (undefined **)0x0) goto LAB_10b12bfec;
      bVar13 = (*(byte *)((long)ppuStack_1090 + 0x469) ^ 0xff) & 1;
LAB_10b12c03c:
      unaff_x25 = 2;
      ppuVar5 = ppuStack_1090;
joined_r0x00010b12c01c:
      ppuStack_1090 = ppuVar5;
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar5 = apuStack_d10;
      }
      else {
        func_0x00010b12cc78();
      }
      ppuStack_4e8 = (undefined **)(long)*(char *)((long)ppuVar5 + 0x17);
      ppuStack_4f0 = ppuVar5;
      if ((long)ppuStack_4e8 < 0) {
        ppuStack_4f0 = (undefined **)*ppuVar5;
        ppuStack_4e8 = (undefined **)ppuVar5[1];
      }
    }
    func_0x0001082afa98(apuStack_d10,&ppuStack_4f0);
    ppuVar5 = *(undefined ***)(plVar15[4] + 0xc0);
    ppuStack_4e8 = *(undefined ***)(plVar15[4] + 200);
    ppuStack_4f0 = ppuVar5;
    if (ppuStack_4e8 != (undefined **)0x0) {
      do {
        func_0x00010b133f58();
        ppuVar5 = extraout_x8_02;
      } while (extraout_w11_00 != 0);
    }
    if (ppuVar5 != (undefined **)0x0) {
      plStack_60 = (long *)plVar15[0x22];
      lStack_9a8 = plVar15[0x23];
      lStack_58 = lStack_9a8;
      plStack_9b0 = plStack_60;
      if (lStack_9a8 != 0) {
        do {
          func_0x00010b133f68();
          ppuVar5 = extraout_x8_03;
          plStack_60 = extraout_x9;
          lStack_58 = lStack_9a8;
        } while (extraout_w12 != 0);
      }
      pcStack_70 = FUN_10b12d6fc;
      ppuStack_68 = &PTR_DAT_110cbced0;
      lStack_9a8 = 0;
      plStack_9b0 = (long *)0x0;
      func_0x00010b1ae2f4(ppuVar5 + 6,apuStack_d10,&pcStack_70);
      func_0x00010b135610();
      func_0x00010539eeb0(&plStack_9b0);
    }
    func_0x00010b125888(&ppuStack_4f0);
    ppuStack_4f0 = (undefined **)CONCAT71(ppuStack_4f0._1_7_,bVar13);
    ppuStack_4e0 = ppuStack_1098;
    ppuStack_4e8 = ppuStack_10a0;
    if (ppuStack_1098 != (undefined **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_03 != 0);
    }
    lStack_4d0 = lStack_1088;
    ppuStack_4d8 = ppuStack_1090;
    if (lStack_1088 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_04 != 0);
    }
    pppuStack_4c8 = pppuStack_1080;
    unaff_x28 = &ppuStack_4f0;
    unaff_x26 = &ppuStack_10a0;
    FUN_10b12d728(auStack_4c0,&uStack_1078);
    uStack_1d0 = uStack_d88;
    ppuStack_1c8 = ppuVar16;
    func_0x00010b135254(auStack_1c0);
    unaff_x27 = &ppuStack_4f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1a0,apuStack_d10);
    lStack_188 = plVar15[4];
    lStack_180 = plVar15[5];
    if (lStack_180 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_05 != 0);
    }
    uStack_178 = uStack_ca8;
    uStack_174 = (undefined4)unaff_x25;
    func_0x00010b1363ec();
    if (extraout_x8_04 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_06 != 0);
    }
    lStack_158 = plVar15[0x1b];
    lStack_160 = *unaff_x24;
    lStack_148 = plVar15[0x1d];
    lStack_150 = plVar15[0x1c];
    lStack_140 = plVar15[0x1e];
    uStack_12f = *(undefined8 *)((long)plVar15 + 0x101);
    uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)plVar15 + 0xf9) >> 0x38);
    uStack_138 = (undefined1)plVar15[0x1f];
    uStack_137 = (undefined7)((ulong)plVar15[0x1f] >> 8);
    func_0x00010b135560(auStack_120);
    pppuVar18 = &ppuStack_4f0;
    func_0x00010b123c68(auStack_a8,plVar15);
    uStack_78 = (undefined1)plVar15[0x26];
    lStack_80 = plVar15[0x25];
    lStack_88 = plVar15[0x24];
    ppuStack_1130 = ppuStack_1090;
    lStack_1128 = lStack_1088;
    ppuVar5 = ppuStack_1090;
    if (lStack_1088 != 0) {
      do {
        func_0x00010b133f58();
        ppuVar5 = extraout_x8_05;
      } while (extraout_w11_01 != 0);
    }
    pppuVar3 = pppuStack_1080;
    if (ppuVar5 == (undefined **)0x0) {
      if (ppuStack_1120 == (undefined **)0x0) {
        func_0x00010b135254(auStack_40);
        func_0x00010b135444();
        FUN_10b12ee08(auStack_1178,&UNK_10f7300b9);
        ppuStack_528 = ppuStack_1150;
        ppuStack_530 = ppuStack_1158;
        func_0x00010b13631c();
        uStack_510 = 0;
        uStack_4f8 = 0;
        in_ZR = cStack_1160 == '\x01';
        uStack_520 = extraout_x9_00;
        if ((bool)in_ZR) {
          func_0x00010b1354bc();
          uStack_4f8 = extraout_w8;
        }
        func_0x0001052b8c70(&uStack_a28,&ppuStack_530);
        FUN_10b1195f4(&plStack_9b0,&uStack_a28);
        func_0x00010b135010(appuStack_1140);
        pppuVar11 = appuStack_1140;
        FUN_10b11d020(plVar15);
        func_0x00010b0f7f30(appuStack_1140);
        func_0x00010b0faf64(&plStack_9b0);
        func_0x0001052a038c(&uStack_a28);
        func_0x0001052a03ac(&ppuStack_530);
        func_0x00010b135504();
        func_0x00010b135288();
        func_0x00010b1349e4();
        goto LAB_10b12c290;
      }
      func_0x00010b135ea8();
      ppuVar16 = ppuStack_1120;
      FUN_10b12cc9c(&plStack_9b0,&ppuStack_4f0);
      ppuStack_530 = (undefined **)FUN_10b12ee20;
      ppuStack_528 = &PTR_FUN_110cbcf20;
      uVar19 = 0x480;
      __Znwm();
      FUN_10b12cc9c();
      unaff_x23 = &ppuStack_530;
      pppuVar8 = (undefined ***)plVar15[4];
      pppuVar18 = (undefined ***)(ulong)*(uint *)(plVar15 + 9);
      uStack_520 = uVar19;
      func_0x00010b135560(&uStack_a28);
      pppuVar11 = pppuVar18;
      func_0x00010b2054c4();
      if (((ulong)pppuVar11 & 1) != 0) {
        iVar4 = (int)pppuVar8[3][2];
        func_0x00010b20ecd8();
        if (iVar4 != 0) {
          uStack_a28._0_5_ = CONCAT14(1,(undefined4)uStack_a28);
          pppuVar8 = (undefined ***)*pppuVar8[3];
          FUN_10b12983c(auStack_40,pppuVar18);
          func_0x00010b134904(auStack_1178,auStack_40);
          func_0x00010b134528(pppuVar8,0x20,auStack_1178);
          FUN_10b120998(auStack_1178);
          func_0x00010b134618(auStack_40);
        }
      }
      FUN_10b192aec(&ppuStack_1130,ppuVar16,&ppuStack_530,&uStack_a28);
      pppuVar11 = &ppuStack_1130;
      FUN_10b12ee94(&ppuStack_1158);
      ppuVar5 = ppuStack_1130;
      ppuStack_1130 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        func_0x00010b133ecc();
      }
      func_0x00010b135e58();
      func_0x00010b133f10(ppuStack_528);
      func_0x00010b12cd9c(&plStack_9b0);
      if ((ppuStack_1158 != (undefined **)0x0) && (plVar15[2] != 0)) {
        pppuVar11 = &ppuStack_1158;
        FUN_10b21069c();
      }
      func_0x00010539eeb0(&ppuStack_1158);
    }
    else {
      FUN_10b12255c(&plStack_9b0,&uStack_1078);
      uStack_a28 = FUN_10b12d770;
      ppuStack_a20 = &PTR_FUN_110cbcf08;
      pppuVar8 = (undefined ***)0x480;
      __Znwm();
      FUN_10b12cc9c();
      unaff_x23 = (undefined ***)&uStack_a28;
      pppuVar11 = &ppuStack_1130;
      pppuStack_a18 = pppuVar8;
      FUN_10b118a10(ppuVar16,pppuVar11,pppuVar3,&plStack_9b0,plVar15 + 2,&uStack_a28,1);
      func_0x00010b133f10(ppuStack_a20);
      FUN_10b122590(&plStack_9b0);
      pppuVar18 = pppuVar3;
LAB_10b12c290:
      func_0x00010b135ea8();
    }
    func_0x00010b12cd9c(&ppuStack_4f0);
    FUN_10b129c1c(&ppuStack_1120);
    func_0x00010b121a94(&ppuStack_10a0);
    func_0x00010b121ac0(&pppuStack_d78);
    ppuVar5 = apuStack_d10;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar5);
  ppuVar5 = ppuVar16;
LAB_10b12c3e8:
  func_0x00010b121af0(auStack_cf8);
  func_0x00010b12cdf0(&puStack_a80);
  func_0x00010b133dfc(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b135b64();
  FUN_10b120998();
  func_0x00010b134618(auStack_40);
  func_0x00010b135e58();
  func_0x00010b133f10(&PTR_FUN_110cbcf20);
  func_0x00010b12cd9c(&plStack_9b0);
  func_0x00010b12cd9c(&ppuStack_4f0);
  FUN_10b129c1c(&ppuStack_1120);
  func_0x00010b121a94(&ppuStack_10a0);
  func_0x00010b121ac0(&pppuStack_d78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_d10);
  func_0x00010b121af0(auStack_cf8);
  ppuVar16 = &puStack_a80;
  func_0x00010b12cdf0();
  func_0x00010b1343d0();
  pcStack_11a8 = FUN_10b12c80c;
  pppuStack_1200 = unaff_x28;
  pppuStack_11f8 = unaff_x27;
  pppuStack_11f0 = unaff_x26;
  uStack_11e8 = unaff_x25;
  plStack_11e0 = unaff_x24;
  pppuStack_11d8 = unaff_x23;
  pppuStack_11d0 = pppuVar8;
  pppuStack_11c8 = pppuVar18;
  ppuStack_11c0 = ppuVar5;
  plStack_11b8 = plVar15;
  puStack_11b0 = &stack0x00000050;
  func_0x00010b133e8c();
  puVar9 = (undefined8 *)0x180;
  uStack_1208 = extraout_x8_07;
  __Znwm();
  ppuVar5 = *pppuVar11;
  ppuVar21 = pppuVar11[3];
  ppuVar20 = pppuVar11[2];
  puVar17 = puVar9 + 10;
  puVar9[0xb] = pppuVar11[1];
  *puVar17 = ppuVar5;
  *puVar9 = FUN_10b1333ac;
  puVar9[1] = FUN_10b133670;
  *pppuVar11 = (undefined **)0x0;
  pppuVar11[1] = (undefined **)0x0;
  puVar9[0xd] = ppuVar21;
  puVar9[0xc] = ppuVar20;
  pppuVar11[2] = (undefined **)0x0;
  pppuVar11[3] = (undefined **)0x0;
  ppuVar5 = pppuVar11[4];
  puVar9[0xf] = pppuVar11[5];
  puVar9[0xe] = ppuVar5;
  pppuVar11[4] = (undefined **)0x0;
  pppuVar11[5] = (undefined **)0x0;
  func_0x00010b121ddc(puVar9 + 0x10,pppuVar11 + 6);
  FUN_10b121fd0(puVar9 + 0x14,pppuVar11 + 10);
  ppuVar5 = pppuVar11[0x19];
  ppuVar21 = pppuVar11[0x1c];
  ppuVar20 = pppuVar11[0x1b];
  puVar9[0x24] = pppuVar11[0x1a];
  puVar9[0x23] = ppuVar5;
  puVar9[0x26] = ppuVar21;
  puVar9[0x25] = ppuVar20;
  ppuVar5 = pppuVar11[0x1d];
  ppuVar21 = pppuVar11[0x20];
  ppuVar20 = pppuVar11[0x1f];
  puVar9[0x28] = pppuVar11[0x1e];
  puVar9[0x27] = ppuVar5;
  puVar9[0x2a] = ppuVar21;
  puVar9[0x29] = ppuVar20;
  FUN_10b124f8c(puVar9 + 2);
  puVar7 = puVar9 + 0x2b;
  FUN_10b124f40(extraout_x8_06,puVar9 + 2);
  puVar2 = ppuVar16[1];
  puVar9[0x2d] = *ppuVar16;
  puVar9[0x2e] = puVar2;
  if (puVar2 != (undefined *)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_07 != 0);
  }
  FUN_10b12cf04(puVar7,puVar9 + 0x2d);
  puVar10 = puVar7;
  FUN_10b12d174();
  if (((ulong)puVar10 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x2f) = 0;
    ppuVar12 = &puStack_1238;
    puVar10 = puVar7;
    puStack_1238 = puVar9;
    puStack_1230 = puVar7;
    FUN_10b12d1c8(&uStack_1350,puVar7);
    puVar9 = puStack_1348;
    if (puStack_1348 != (undefined8 *)0x0) {
      do {
        func_0x00010b1340a4();
      } while (extraout_w11_02 != 0);
      if (extraout_x9_02 == 0) {
        func_0x00010b1346dc();
        func_0x00010b134574();
        puVar10 = puVar9;
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
      }
    }
    while (func_0x00010b133dfc(uStack_1208), !(bool)in_ZR) {
      ___stack_chk_fail();
      if ((int)ppuVar12 == 0) {
        do {
          __Unwind_Resume(puVar10);
        } while ((int)ppuVar12 == 0);
        func_0x000107c27b58(puVar7);
      }
      else {
        func_0x00010b1341cc(puStack_1230);
        func_0x00010b1358a4();
        func_0x00010b1298c4(puVar7);
      }
      func_0x00010b135208();
      func_0x00010b1357ac();
      func_0x00010b134b6c();
      ___cxa_end_catch();
LAB_10b12ca60:
      func_0x00010b13490c();
      *(undefined1 *)(puVar9 + 0x2f) = extraout_w8_00;
      func_0x00010b135134();
      if ((bool)in_ZR) {
        puStack_1240 = &uStack_1248;
        ppuVar12 = &puStack_1240;
        func_0x000107c27b6c(puVar9 + 2);
      }
      else {
        puVar7 = &uStack_1248;
        func_0x00010b134894(&uStack_1248);
        ppuVar12 = &puStack_1240;
        puStack_1240 = puVar7;
        func_0x000104bf33ec(puVar9 + 2);
        __ZNSt13exception_ptrD1Ev(&uStack_1248);
      }
      func_0x00010b1346d4();
      puVar10 = puVar17;
      FUN_10b12cc48(puVar17);
      func_0x00010b134560();
    }
    return;
  }
  FUN_10b12d0d0(puVar7);
  func_0x000107c27b58(puVar7);
  func_0x00010b134af0(puVar9[0xe]);
  func_0x00010b1ff218(puVar7);
  puStack_1348 = (undefined8 *)puVar9[0xf];
  uStack_1350 = puVar9[0xe];
  if (puVar9[0xf] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_08 != 0);
  }
  func_0x00010b121ddc(auStack_1340,puVar9 + 0x10);
  FUN_10b121fd0(auStack_1320,puVar9 + 0x14);
  uStack_12a0 = puVar9[0x24];
  uStack_12a8 = puVar9[0x23];
  uStack_1290 = puVar9[0x26];
  uStack_1298 = puVar9[0x25];
  uStack_1288 = puVar9[0x27];
  uStack_1280 = (undefined1)puVar9[0x28];
  uStack_1277 = (undefined7)*(undefined8 *)((long)puVar9 + 0x149);
  uStack_1270 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x149) >> 0x38);
  uStack_127f = (undefined7)*(undefined8 *)((long)puVar9 + 0x141);
  uStack_1278 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x141) >> 0x38);
  uStack_1260 = puVar9[0xb];
  uStack_1268 = puVar9[10];
  if (puVar9[0xb] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_09 != 0);
  }
  uStack_1250 = puVar9[0xd];
  uStack_1258 = puVar9[0xc];
  if (puVar9[0xd] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_10 != 0);
  }
  func_0x00010b136238();
  puVar10 = (undefined8 *)0x108;
  puStack_1238 = extraout_x8_08;
  puStack_1230 = extraout_x9_01;
  __Znwm();
  puVar10[1] = puStack_1348;
  *puVar10 = uStack_1350;
  uStack_1350 = 0;
  puStack_1348 = (undefined8 *)0x0;
  func_0x00010b121ddc(puVar10 + 2,auStack_1340);
  FUN_10b121fd0(puVar10 + 6,auStack_1320);
  puVar10[0x16] = uStack_12a0;
  puVar10[0x15] = uStack_12a8;
  puVar10[0x18] = uStack_1290;
  puVar10[0x17] = uStack_1298;
  puVar10[0x1a] = CONCAT71(uStack_127f,uStack_1280);
  puVar10[0x19] = uStack_1288;
  puVar10[0x1c] = CONCAT71(uStack_126f,uStack_1270);
  puVar10[0x1b] = CONCAT71(uStack_1277,uStack_1278);
  puVar10[0x1e] = uStack_1260;
  puVar10[0x1d] = uStack_1268;
  uStack_1268 = 0;
  uStack_1260 = 0;
  puVar10[0x20] = uStack_1250;
  puVar10[0x1f] = uStack_1258;
  uStack_1258 = 0;
  uStack_1250 = 0;
  puStack_1228 = puVar10;
  func_0x00010b135fd4();
  func_0x00010b1341cc(puStack_1230);
  func_0x00010b1358a4();
  func_0x00010b1298c4(puVar7);
  func_0x00010b134b1c();
  func_0x00010b135208();
  goto LAB_10b12ca60;
}



/* Entry: 10b12c80c; end: 10b12cc47;  */

void FUN_10b12c80c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [120];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010b133e8c();
  puVar2 = (undefined8 *)0x180;
  uStack_68 = extraout_x8;
  __Znwm();
  uVar7 = *param_3;
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  puVar5 = puVar2 + 10;
  puVar2[0xb] = param_3[1];
  *puVar5 = uVar7;
  *puVar2 = FUN_10b1333ac;
  puVar2[1] = FUN_10b133670;
  *param_3 = 0;
  param_3[1] = 0;
  puVar2[0xd] = uVar9;
  puVar2[0xc] = uVar8;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar7 = param_3[4];
  puVar2[0xf] = param_3[5];
  puVar2[0xe] = uVar7;
  param_3[4] = 0;
  param_3[5] = 0;
  func_0x00010b121ddc(puVar2 + 0x10,param_3 + 6);
  FUN_10b121fd0(puVar2 + 0x14,param_3 + 10);
  uVar7 = param_3[0x19];
  uVar9 = param_3[0x1c];
  uVar8 = param_3[0x1b];
  puVar2[0x24] = param_3[0x1a];
  puVar2[0x23] = uVar7;
  puVar2[0x26] = uVar9;
  puVar2[0x25] = uVar8;
  uVar7 = param_3[0x1d];
  uVar9 = param_3[0x20];
  uVar8 = param_3[0x1f];
  puVar2[0x28] = param_3[0x1e];
  puVar2[0x27] = uVar7;
  puVar2[0x2a] = uVar9;
  puVar2[0x29] = uVar8;
  FUN_10b124f8c(puVar2 + 2);
  puVar6 = puVar2 + 0x2b;
  FUN_10b124f40(param_1,puVar2 + 2);
  lVar1 = param_2[1];
  puVar2[0x2d] = *param_2;
  puVar2[0x2e] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b12cf04(puVar6,puVar2 + 0x2d);
  puVar3 = puVar6;
  FUN_10b12d174();
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x2f) = 0;
    ppuVar4 = &puStack_98;
    puVar3 = puVar6;
    puStack_98 = puVar2;
    puStack_90 = puVar6;
    FUN_10b12d1c8(&uStack_1b0,puVar6);
    puVar2 = puStack_1a8;
    if (puStack_1a8 != (undefined8 *)0x0) {
      do {
        func_0x00010b1340a4();
      } while (extraout_w11 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010b1346dc();
        func_0x00010b134574();
        puVar3 = puVar2;
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar2);
      }
    }
    while (func_0x00010b133dfc(uStack_68), !(bool)in_ZR) {
      ___stack_chk_fail();
      if ((int)ppuVar4 == 0) {
        do {
          __Unwind_Resume(puVar3);
        } while ((int)ppuVar4 == 0);
        func_0x000107c27b58(puVar6);
      }
      else {
        func_0x00010b1341cc(puStack_90);
        func_0x00010b1358a4();
        func_0x00010b1298c4(puVar6);
      }
      func_0x00010b135208();
      func_0x00010b1357ac();
      func_0x00010b134b6c();
      ___cxa_end_catch();
LAB_10b12ca60:
      func_0x00010b13490c();
      *(undefined1 *)(puVar2 + 0x2f) = extraout_w8;
      func_0x00010b135134();
      if ((bool)in_ZR) {
        puStack_a0 = &uStack_a8;
        ppuVar4 = &puStack_a0;
        func_0x000107c27b6c(puVar2 + 2);
      }
      else {
        puVar6 = &uStack_a8;
        func_0x00010b134894(&uStack_a8);
        ppuVar4 = &puStack_a0;
        puStack_a0 = puVar6;
        func_0x000104bf33ec(puVar2 + 2);
        __ZNSt13exception_ptrD1Ev(&uStack_a8);
      }
      func_0x00010b1346d4();
      puVar3 = puVar5;
      FUN_10b12cc48(puVar5);
      func_0x00010b134560();
    }
    return;
  }
  FUN_10b12d0d0(puVar6);
  func_0x000107c27b58(puVar6);
  func_0x00010b134af0(puVar2[0xe]);
  func_0x00010b1ff218(puVar6);
  puStack_1a8 = (undefined8 *)puVar2[0xf];
  uStack_1b0 = puVar2[0xe];
  if (puVar2[0xf] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b121ddc(auStack_1a0,puVar2 + 0x10);
  FUN_10b121fd0(auStack_180,puVar2 + 0x14);
  uStack_100 = puVar2[0x24];
  uStack_108 = puVar2[0x23];
  uStack_f0 = puVar2[0x26];
  uStack_f8 = puVar2[0x25];
  uStack_e8 = puVar2[0x27];
  uStack_e0 = (undefined1)puVar2[0x28];
  uStack_d7 = (undefined7)*(undefined8 *)((long)puVar2 + 0x149);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x149) >> 0x38);
  uStack_df = (undefined7)*(undefined8 *)((long)puVar2 + 0x141);
  uStack_d8 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x141) >> 0x38);
  uStack_c0 = puVar2[0xb];
  uStack_c8 = puVar2[10];
  if (puVar2[0xb] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  uStack_b0 = puVar2[0xd];
  uStack_b8 = puVar2[0xc];
  if (puVar2[0xd] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010b136238();
  puVar3 = (undefined8 *)0x108;
  puStack_98 = extraout_x8_00;
  puStack_90 = extraout_x9;
  __Znwm();
  puVar3[1] = puStack_1a8;
  *puVar3 = uStack_1b0;
  uStack_1b0 = 0;
  puStack_1a8 = (undefined8 *)0x0;
  func_0x00010b121ddc(puVar3 + 2,auStack_1a0);
  FUN_10b121fd0(puVar3 + 6,auStack_180);
  puVar3[0x16] = uStack_100;
  puVar3[0x15] = uStack_108;
  puVar3[0x18] = uStack_f0;
  puVar3[0x17] = uStack_f8;
  puVar3[0x1a] = CONCAT71(uStack_df,uStack_e0);
  puVar3[0x19] = uStack_e8;
  puVar3[0x1c] = CONCAT71(uStack_cf,uStack_d0);
  puVar3[0x1b] = CONCAT71(uStack_d7,uStack_d8);
  puVar3[0x1e] = uStack_c0;
  puVar3[0x1d] = uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puVar3[0x20] = uStack_b0;
  puVar3[0x1f] = uStack_b8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar3;
  func_0x00010b135fd4();
  func_0x00010b1341cc(puStack_90);
  func_0x00010b1358a4();
  func_0x00010b1298c4(puVar6);
  func_0x00010b134b1c();
  func_0x00010b135208();
  goto LAB_10b12ca60;
}



/* Entry: 10b12cc48; end: 10b12cc9b;  */

long FUN_10b12cc48(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010529fe04(param_1 + 0x50);
  func_0x00010b135c78();
  func_0x00010b135c70();
  func_0x00010b134958(param_1);
  FUN_10b12b860();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b12cc9c; end: 10b12cd9b;  */

void FUN_10b12cc9c(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010b134530();
  *param_1 = *param_2;
  FUN_10b125690(param_1 + 8,param_2 + 8);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  func_0x00010b121ddc(unaff_x19 + 0x330,unaff_x20 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x350);
  *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x20 + 0x360);
  *(undefined8 *)(unaff_x19 + 0x358) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x350) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x20 + 0x368);
  *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x20 + 0x370);
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x20 + 0x378);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x380);
  *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x20 + 0x388);
  *(undefined8 *)(unaff_x19 + 0x380) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x3c0);
  *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x20 + 0x3b8);
  *(undefined8 *)(unaff_x19 + 0x3b0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x3c8) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x3c0) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x398) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x390) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x3a8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x3a0) = uVar3;
  FUN_10b121fd0(unaff_x19 + 0x3d0,unaff_x20 + 0x3d0);
  func_0x00010b1237e0(unaff_x19 + 0x448,unaff_x20 + 0x448);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x470);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x468);
  *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x20 + 0x478);
  *(undefined8 *)(unaff_x19 + 0x470) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x468) = uVar1;
  return;
}



/* Entry: 10b12cd9c; end: 10b12ce13;  */

long FUN_10b12cd9c(long param_1)

{
  FUN_10b1237f0(param_1 + 0x448);
  func_0x00010529fe04(param_1 + 0x3d0);
  FUN_10b129c1c(param_1 + 0x380);
  func_0x00010b12592c(param_1 + 0x368);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x350);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x330);
  func_0x00010b121a94(param_1 + 8);
  return param_1;
}



/* Entry: 10b12ce14; end: 10b12cedf;  */

void FUN_10b12ce14(void)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined1 auStack_390 [64];
  undefined1 uStack_350;
  undefined1 auStack_348 [744];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  func_0x00010b1349c0();
  uVar1 = *extraout_x8;
  func_0x000107c278b8(auStack_348,&UNK_10f7300d3);
  func_0x00010b134cc0();
  func_0x00010b135288();
  func_0x00010b1357c4();
  auStack_390[0] = 0;
  uStack_350 = 0;
  FUN_10b1195f4(auStack_348,auStack_390);
  FUN_10b11c794(auStack_40,uVar1,auStack_60,auStack_348,4);
  func_0x00010b135e4c();
  func_0x00010b134db4();
  func_0x00010b0faf64(auStack_348);
  func_0x0001052a038c(auStack_390);
  func_0x00010b1352c8();
  return;
}



/* Entry: 10b12cee0; end: 10b12ceff;  */

void FUN_10b12cee0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b12cdf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12cf00; end: 10b12cf03;  */

void FUN_10b12cf00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12cf04; end: 10b12d0cf;  */

void FUN_10b12cf04(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 *puVar9;
  
  func_0x00010b13652c();
  func_0x00010b134ce0();
  func_0x00010b135fc4();
  *param_1 = FUN_10b1332cc;
  param_1[1] = FUN_10b13338c;
  param_1[0xb] = unaff_x20;
  func_0x00010b136070();
  func_0x00010b134ff8();
  lVar5 = *unaff_x20;
  __ZNSt3__115recursive_mutex4lockEv(lVar5);
  bVar2 = *(byte *)(*unaff_x20 + 0x50);
  __ZNSt3__115recursive_mutex6unlockEv(lVar5);
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    plVar6 = (long *)param_1[0xb];
    lVar5 = *plVar6;
    func_0x00010b134c84();
    lVar8 = *plVar6;
    if ((*(byte *)(lVar8 + 0x50) & 1) == 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x60);
      uVar4 = *(undefined8 **)(lVar8 + 0x68) <= puVar9;
      if ((bool)uVar4) {
        lVar7 = *(long *)(lVar8 + 0x58);
        func_0x00010b134648();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b12d068:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b12d06c);
          (*pcVar3)();
        }
        func_0x00010b133e4c(extraout_x8 - lVar7);
        uVar1 = extraout_x9;
        if ((bool)uVar4) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b12d068;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b133f38();
        *(undefined8 *)(lVar8 + 0x58) = unaff_x23;
        *(undefined8 **)(lVar8 + 0x60) = puVar9;
        *(ulong *)(lVar8 + 0x68) = uVar1;
        if (lVar7 != 0) {
          func_0x00010b134bcc();
        }
      }
      else {
        *puVar9 = param_1;
        puVar9 = puVar9 + 1;
      }
      *(undefined8 **)(lVar8 + 0x60) = puVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar5);
      return;
    }
    func_0x00010b134884();
    func_0x00010b134574(*param_1);
  }
  else {
    if ((*(byte *)(*(long *)param_1[0xb] + 0x48) & 1) == 0) {
      func_0x00010b135cd8();
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 10);
      goto LAB_10b12d068;
    }
    func_0x00010b134b1c();
    func_0x00010b13490c();
    *(undefined1 *)(param_1 + 0xc) = extraout_w8;
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
  }
  return;
}



/* Entry: 10b12d0d0; end: 10b12d173;  */

void FUN_10b12d0d0(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27b60(&uStack_40,param_1,&uStack_50);
  func_0x000107c27b64(&uStack_30,&uStack_40);
  func_0x00010b1349cc();
  func_0x00010b1348ac();
  if (lStack_28 == 0) {
    uStack_38 = 0;
    uStack_40 = uStack_30;
  }
  else {
    do {
      func_0x00010b133f68();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1348e4();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b12d50c(&uStack_40);
  func_0x00010b1349cc();
  func_0x00010b13489c();
  func_0x00010b134e6c();
  return;
}



/* Entry: 10b12d174; end: 10b12d1c7;  */

long FUN_10b12d174(void)

{
  long lVar1;
  long alStack_30 [2];
  
  FUN_10b1250a0(alStack_30);
  func_0x00010b134918(alStack_30[0] + 0x38);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  func_0x0001052a9e98(alStack_30[0]);
  func_0x00010b135308();
  func_0x00010b1348ac();
  return lVar1;
}



/* Entry: 10b12d1c8; end: 10b12d343;  */

void FUN_10b12d1c8(void)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b135114();
  func_0x000107c27b60(&uStack_80);
  func_0x000107c27b64(aiStack_30,&uStack_80);
  func_0x000107c27b58(&uStack_80);
  func_0x000107c27b58(auStack_40);
  func_0x00010b135ec8();
  func_0x00010b135f44(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  func_0x00010b134930();
  func_0x00010b1359a0(extraout_x8 + 0x38);
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a9e98();
  if (aiStack_30[0] == 0) {
    FUN_10b12d3f0(aplStack_a8,&uStack_80);
    func_0x00010b135960();
    lVar1 = *(long *)(extraout_x8_00 + 0x80);
    *(undefined8 *)(extraout_x8_00 + 0x80) = extraout_x9;
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      func_0x00010b133ecc();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x00010b133ecc();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    func_0x000107c27b64(plVar2,aiStack_30);
  }
  func_0x00010b134e44();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b12d344(&uStack_80,&lStack_b8);
    plVar2 = &lStack_b8;
    func_0x000107c27b58();
  }
  func_0x00010b134f68();
  func_0x000107c27b58();
  func_0x00010b136204();
  if (plVar2 != (long *)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b134fb4();
  func_0x00010b1356e8();
  if (plVar2 != (long *)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b134e6c();
  return;
}



/* Entry: 10b12d344; end: 10b12d3ef;  */

void FUN_10b12d344(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b1359f0();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f68();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1348e4();
    } while (extraout_w11 != 0);
  }
  func_0x00010b134abc();
  FUN_10b12d4a0();
  func_0x00010b1349cc();
  func_0x00010b1348ac();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b12d3f0; end: 10b12d413;  */

void FUN_10b12d3f0(void)

{
  func_0x00010b1347fc();
  func_0x00010b1353a0(&PTR_FUN_110cbdbe8);
  return;
}



/* Entry: 10b12d414; end: 10b12d417;  */

undefined8 * FUN_10b12d414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdbe8;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b12d418; end: 10b12d42b;  */

void FUN_10b12d418(void)

{
  FUN_10b12d474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12d42c; end: 10b12d473;  */

void FUN_10b12d42c(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b135a10();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b12d344(param_1 + 8,auStack_30);
  func_0x00010b13489c();
  return;
}



/* Entry: 10b12d474; end: 10b12d49f;  */

undefined8 * FUN_10b12d474(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdbe8;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b12d4a0; end: 10b12d4df;  */

void FUN_10b12d4a0(void)

{
  code *extraout_x8;
  
  func_0x00010b1364b8();
  FUN_10b1250a0();
  func_0x00010b13534c();
  FUN_10b12d4e0();
  func_0x00010b13489c();
  func_0x00010b134da8();
  (*extraout_x8)();
  return;
}



/* Entry: 10b12d4e0; end: 10b12d50b;  */

void FUN_10b12d4e0(void)

{
  func_0x00010b13448c();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b136100();
  func_0x00010b1341ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b12d50c; end: 10b12d5c7;  */

void FUN_10b12d50c(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b13629c();
  func_0x00010b136284();
  func_0x000107c27b60();
  func_0x00010b136278();
  func_0x000107c27b64();
  func_0x000107c27b58(auStack_40);
  func_0x00010b1349cc();
  func_0x00010b134e2c(lStack_30 + 0x38);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b136260();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f58();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b13626c(lVar2 + 8);
  FUN_10b12d5c8();
  func_0x00010b1348ac();
  if (*(long *)(lStack_30 + 0x78) != 0) {
    func_0x00010b1355b4();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b12d598);
    (*pcVar1)();
  }
  func_0x00010b134ab4();
  func_0x00010b134e6c();
  return;
}



/* Entry: 10b12d5c8; end: 10b12d5f7;  */

void FUN_10b12d5c8(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b13421c();
  while (uVar1 = unaff_x19, FUN_10b12d5f8(), (uVar1 & 1) == 0) {
    func_0x00010b1344fc();
  }
  return;
}



/* Entry: 10b12d5f8; end: 10b12d5ff;  */

undefined8 FUN_10b12d5f8(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 1) & 1) == 0) {
    func_0x0001052a9f28(*(undefined8 *)(*param_1 + 0x78));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b12d600; end: 10b12d62f;  */

undefined8 FUN_10b12d600(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b1237f0(param_1 + 0xe8);
  func_0x00010529fe04(param_1 + 0x30);
  func_0x00010b134b74();
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b12d630; end: 10b12d693;  */

void FUN_10b12d630(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = *puVar2;
  func_0x00010b123c68(auStack_50,puVar2 + 0x1d);
  FUN_10b119b74(auStack_30,uVar1,puVar2 + 2,puVar2 + 6,puVar2 + 0x15,auStack_50);
  func_0x00010539eeb0(auStack_30);
  FUN_10b1237f0(auStack_50);
  return;
}



/* Entry: 10b12d694; end: 10b12d6b3;  */

void FUN_10b12d694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b12d600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12d6b4; end: 10b12d6b7;  */

void FUN_10b12d6b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12d6b8; end: 10b12d6db;  */

void FUN_10b12d6b8(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12d6dc; end: 10b12d6fb;  */

void FUN_10b12d6dc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b12d6b8();
  }
  return;
}



/* Entry: 10b12d6fc; end: 10b12d727;  */

void FUN_10b12d6fc(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b12d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b12d728; end: 10b12d76f;  */

void FUN_10b12d728(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_10b123f60();
    *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
  }
  return;
}



/* Entry: 10b12d770; end: 10b12d7c7;  */

void FUN_10b12d770(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010b134dd4();
  *unaff_x19 = 0;
  func_0x00010b1362a8();
  FUN_10b12d7c8();
  func_0x00010b134bbc();
  func_0x00010b134610();
  return;
}



/* Entry: 10b12d7c8; end: 10b12e543;  */

long * FUN_10b12d7c8(char *param_1,long param_2,undefined8 param_3,code **param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte bVar11;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  byte *extraout_x8_01;
  code **extraout_x8_02;
  code **ppcVar12;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  byte *unaff_x19;
  undefined8 uVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  code *pcVar23;
  undefined1 auStack_12e8 [744];
  undefined1 auStack_1000 [632];
  long alStack_d88 [3];
  undefined4 uStack_d70;
  undefined1 uStack_d30;
  int iStack_d24;
  code **ppcStack_b10;
  undefined8 *puStack_b08;
  code **ppcStack_b00;
  undefined8 *puStack_af8;
  long lStack_af0;
  long lStack_ae8;
  ulong uStack_ae0;
  long lStack_ad8;
  ulong uStack_ad0;
  long lStack_ac8;
  undefined8 *puStack_ac0;
  byte bStack_ab8;
  undefined1 auStack_ab0 [16];
  undefined1 auStack_aa0 [64];
  char cStack_a60;
  long lStack_a58;
  undefined8 *puStack_a50;
  long lStack_a48;
  byte *pbStack_a40;
  byte *pbStack_a38;
  undefined8 *puStack_a30;
  long lStack_a28;
  code *pcStack_a18;
  undefined **ppuStack_a10;
  ulong uStack_a08;
  long lStack_a00;
  undefined8 *puStack_9f8;
  undefined8 *apuStack_9f0 [5];
  undefined1 auStack_9c8 [16];
  undefined1 auStack_9b8 [544];
  undefined1 auStack_798 [104];
  undefined8 *puStack_730;
  long lStack_728;
  undefined1 auStack_720 [32];
  undefined1 auStack_700 [32];
  undefined4 uStack_6e0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  long lStack_490;
  undefined4 uStack_488;
  code *pcStack_480;
  ulong uStack_478;
  long lStack_470;
  undefined8 *puStack_468;
  char cStack_460;
  ulong uStack_458;
  long lStack_450;
  undefined8 *puStack_448;
  byte bStack_420;
  code *pcStack_418;
  undefined1 auStack_410 [32];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  byte bStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined1 auStack_3c8 [32];
  code *pcStack_3a8;
  undefined **ppuStack_3a0;
  code **ppcStack_398;
  undefined1 auStack_130 [112];
  code *pcStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [48];
  undefined8 uStack_20;
  long lStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x00010b134cf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010b133e10();
  pcVar15 = *(code **)(param_1 + 0x328);
  uVar7 = *param_1 == '\x01';
  uStack_8 = extraout_x8;
  if ((bool)uVar7) {
    FUN_10b1a23e0(alStack_d88,*(undefined8 *)(unaff_x19 + 0x18));
  }
  else {
    func_0x00010b1340dc(alStack_d88,*(undefined8 *)(pcVar15 + 0x28),unaff_x19 + 0x330);
  }
  FUN_10b119744(alStack_d88,unaff_x19 + 0x350,*(undefined8 *)(pcVar15 + 0x28));
  uVar13 = **(undefined8 **)(*(long *)(unaff_x19 + 0x368) + 0x18);
  func_0x00010b1348b4(uStack_d30);
  uVar2 = extraout_w9;
  if ((bool)uVar7) {
    uVar2 = extraout_w8;
  }
  FUN_10b12983c(&pcStack_a18,uVar2);
  func_0x00010b12aca4(apuStack_9f0,*(undefined4 *)(unaff_x19 + 0x378));
  func_0x00010b12460c(auStack_9c8,param_3);
  func_0x00010b134fbc(&pcStack_3a8,&pcStack_a18);
  func_0x00010b134528(uVar13,6,&pcStack_3a8);
  FUN_10b120998(&pcStack_3a8);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9b8);
    func_0x00010b13517c();
  } while (!(bool)uVar7);
  *(undefined4 *)(param_2 + 0x270) = *(undefined4 *)(unaff_x19 + 0x37c);
  FUN_10b117280(&pcStack_a18,pcVar15 + 0x58);
  uVar8 = uStack_a08;
  FUN_10b129c64(uStack_a08,alStack_d88);
  iVar17 = (int)param_3;
  *(int *)(uVar8 + 0x308) = iVar17;
  FUN_10b12e544(uVar8 + 0x18,param_2);
  func_0x000107c2798c(&pcStack_a18);
  pcVar19 = *(code **)(*(long *)(unaff_x19 + 0x368) + 0xc0);
  ppuStack_a10 = *(undefined ***)(*(long *)(unaff_x19 + 0x368) + 200);
  pcStack_a18 = pcVar19;
  if (ppuStack_a10 != (undefined **)0x0) {
    do {
      func_0x00010b133f58();
      pcVar19 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (pcVar19 != (code *)0x0) {
    FUN_10b1ae534(pcVar19 + 0x30,unaff_x19 + 0x350,param_3);
  }
  func_0x00010b125888(&pcStack_a18);
  plVar18 = alStack_d88;
  FUN_10b1c41c0();
  if (*(long *)(unaff_x19 + 0x380) == 0) {
    bVar11 = *unaff_x19;
  }
  else {
    bVar11 = 1;
  }
  plVar14 = (long *)0x0;
  if ((((iVar17 == 0) && ((unaff_x19[0x3c8] & 1) != 0)) && (iStack_d24 == 2)) &&
     (((bVar11 & 1) != 0 && (plVar18 != (long *)0x0)))) {
    plVar14 = plVar18;
    func_0x00010b1349d4(*(undefined8 *)(*(long *)(pcVar15 + 0x18) + 0x10));
    if (((ulong)plVar14 & 1) == 0) {
      lVar16 = *(long *)(*(long *)(pcVar15 + 0x18) + 0x10) + 0x38;
      func_0x00010b20192c(lVar16,&PTR_DAT_110cbd720,*(undefined4 *)(unaff_x19 + 0x348));
      if ((int)lVar16 != 0) goto LAB_10b12d9c4;
    }
    else {
LAB_10b12d9c4:
      uVar8 = 0;
      FUN_10b11b69c();
      if ((uVar8 & 1) != 0) {
        plVar14 = (long *)0x0;
        goto LAB_10b12da14;
      }
    }
    if (unaff_x19[0x390] == 1) {
      plVar14 = alStack_d88;
      FUN_10b17f060(plVar14,plVar18,*(undefined8 *)(pcVar15 + 0x1c0),unaff_x19 + 0x390,
                    *(undefined4 *)(unaff_x19 + 0x3ec));
    }
    else {
      plVar14 = alStack_d88;
      FUN_10b17ee04(plVar14,plVar18,*(undefined8 *)(pcVar15 + 0x1c0),unaff_x19 + 0x390);
    }
  }
LAB_10b12da14:
  if (*param_4 == (code *)0x0) {
    plVar18 = *(long **)(unaff_x19 + 0x380);
    if (plVar18 == (long *)0x0) {
      uVar13 = *(undefined8 *)(pcVar15 + 0x18);
      FUN_10b12394c(auStack_1000,alStack_d88);
      func_0x00010b135e98(&pcStack_a18,uVar13,auStack_1000);
    }
    else {
      FUN_10b194f44(&pcStack_a18,plVar18);
    }
    FUN_10b11a178(param_4,&pcStack_a18);
    func_0x00010b12b970(&pcStack_a18);
    if (plVar18 == (long *)0x0) {
      func_0x00010b135bf8();
    }
  }
  uVar7 = plVar14 == (long *)0x1;
  if ((long)plVar14 < 1) {
    pcStack_a18 = pcVar15;
    FUN_10b121c1c(&ppuStack_a10,alStack_d88);
    func_0x00010b135e00(auStack_798);
    uStack_4b0 = *(undefined8 *)(unaff_x19 + 0x380);
    lStack_4a8 = *(long *)(unaff_x19 + 0x388);
    if (lStack_4a8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_11 != 0);
    }
    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,iVar17);
    FUN_10b121fd0(&puStack_498,unaff_x19 + 0x3d0);
    bStack_420 = *unaff_x19;
    pcStack_418 = *param_4;
    if (pcStack_418 != (code *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_12 != 0);
    }
    func_0x00010b121ddc(auStack_410,unaff_x19 + 0x330);
    uStack_3e8 = *(undefined8 *)(unaff_x19 + 0x470);
    uStack_3f0 = *(undefined8 *)(unaff_x19 + 0x468);
    bStack_3e0 = unaff_x19[0x478];
    uStack_3d8 = *(undefined8 *)(unaff_x19 + 0x368);
    lStack_3d0 = *(long *)(unaff_x19 + 0x370);
    if (lStack_3d0 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_13 != 0);
    }
    func_0x00010b123c68(auStack_3c8,unaff_x19 + 0x448);
    pcStack_3a8 = FUN_10b12e9d8;
    ppuStack_3a0 = &PTR_FUN_110cbcee8;
    param_4 = (code **)0x670;
    __Znwm();
    FUN_10b12ecc0();
    ppcStack_398 = param_4;
    FUN_10b11cebc(pcVar15,unaff_x19 + 0x330,&pcStack_3a8);
    func_0x00010b133eb4(ppuStack_3a0);
    func_0x00010b12e5f0(&pcStack_a18);
    goto LAB_10b12e268;
  }
  lVar16 = *(long *)(unaff_x19 + 0x368);
  func_0x00010b135e00(auStack_12e8);
  FUN_10b127af8(&puStack_a30,*(undefined8 *)(lVar16 + 8),*(undefined8 *)(lVar16 + 0x10));
  pbVar1 = unaff_x19 + 0x448;
  pbStack_a38 = unaff_x19 + 0x330;
  lStack_a48 = lStack_a28;
  puStack_a50 = puStack_a30;
  lStack_a58 = lVar16;
  if (lStack_a28 != 0) {
    do {
      func_0x00010b133f58();
      pbStack_a38 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  plVar18 = &lStack_a58;
  pbStack_a40 = pbVar1;
  func_0x00010b207c58(auStack_aa0);
  uVar7 = cStack_a60 == '\x01';
  if ((bool)uVar7) {
    func_0x00010b1348b4(uStack_d30);
    uVar2 = extraout_w10;
    uVar4 = extraout_w9_00;
    if ((bool)uVar7) {
      uVar2 = 0;
      uVar4 = extraout_w8_00;
    }
    puVar9 = auStack_aa0;
    FUN_10b207d14(puVar9,uVar4,*(undefined4 *)(unaff_x19 + 0x3d0),uVar2);
    if ((int)puVar9 == 0) goto LAB_10b12dc6c;
    func_0x000107c278b8(&pcStack_a18,&UNK_10f72f5c9);
    func_0x00010b134cc0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a18);
    FUN_10b207d6c(&pcStack_c0);
    FUN_10b1238dc(&pcStack_3a8,auStack_12e8);
    lVar16 = lStack_a58;
    func_0x0001056419c0(auStack_130,&pcStack_c0);
    lVar16 = *(long *)(*(long *)(lVar16 + 0x18) + 0x30);
    uStack_ad0 = *(ulong *)(lVar16 + 0x30);
    lStack_ac8 = *(long *)(lVar16 + 0x38);
    if (lStack_ac8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b1238dc(&pcStack_a18,&pcStack_3a8);
    puStack_730 = puStack_a50;
    lStack_728 = lStack_a48;
    if (lStack_a48 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b123c68(auStack_720,pbStack_a40);
    func_0x00010b121ddc(auStack_700,pbStack_a38);
    uStack_6e0 = 3;
    pcStack_80 = FUN_10b123848;
    ppuStack_78 = &PTR_FUN_110cbc828;
    uVar10 = 0x340;
    __Znwm();
    uVar8 = uVar10;
    FUN_10b1238dc();
    *(long *)(uVar8 + 0x2f0) = lStack_728;
    *(undefined8 **)(uVar8 + 0x2e8) = puStack_730;
    puStack_730 = (undefined8 *)0x0;
    lStack_728 = 0;
    func_0x00010b123c68(uVar8 + 0x2f8,auStack_720);
    func_0x00010b121ddc(uVar10 + 0x318,auStack_700);
    param_4 = &pcStack_80;
    *(undefined4 *)(uVar10 + 0x338) = uStack_6e0;
    puStack_70 = (undefined8 *)uVar10;
    func_0x00010b1346dc();
    func_0x00010b134584();
    func_0x00010b133ea8(ppuStack_78);
    func_0x00010b123814(&pcStack_a18);
    FUN_10b127ebc(&uStack_ad0);
    func_0x00010b0faf64(&pcStack_3a8);
    func_0x00010b135a44();
    func_0x0001052a03ac();
  }
  else {
LAB_10b12dc6c:
    plVar14 = alStack_d88;
    FUN_10b1c41c0();
    if (plVar14 != (long *)0x0) {
      FUN_10b1b3d48(auStack_ab0);
      FUN_10b12394c(&pcStack_3a8,alStack_d88);
      func_0x00010b135dc8(&uStack_ad0,lVar16,&pcStack_3a8,auStack_ab0,unaff_x19 + 0x3d0,param_4);
      func_0x00010b121af0(&pcStack_3a8);
      if ((bStack_ab8 & 1) == 0) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x18) + 0x30);
        uStack_20 = *(undefined8 *)(lVar16 + 0x30);
        lStack_18 = *(long *)(lVar16 + 0x38);
        if (lStack_18 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_14 != 0);
        }
        func_0x00010b135a44(alStack_d88);
        func_0x00010b135fcc();
        ppuStack_78 = ppuStack_b8;
        pcStack_80 = pcStack_c0;
        puStack_70 = (undefined8 *)uStack_b0;
        ppuStack_b8 = (undefined **)0x0;
        pcStack_c0 = (code *)0x0;
        uStack_b0 = 0;
        puStack_68 = (undefined8 *)CONCAT44(puStack_68._4_4_,uStack_d70);
        lStack_58 = lStack_a28;
        puStack_60 = puStack_a30;
        if (lStack_a28 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_15 != 0);
        }
        func_0x00010b123c68(auStack_50,pbVar1);
        pcStack_a18 = FUN_10b12ef6c;
        param_4 = &pcStack_a18;
        FUN_10b12eff4(&ppuStack_a10,&pcStack_80);
        func_0x00010b1346dc();
        func_0x00010b134584();
        func_0x00010b133ea8(ppuStack_a10);
        func_0x00010b11a0fc(&pcStack_80);
        func_0x00010b135a44();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        FUN_10b127ebc(&uStack_20);
      }
      else {
        lStack_ad8 = lStack_ac8;
        uStack_ae0 = uStack_ad0;
        if (lStack_ac8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_02 != 0);
        }
        puVar5 = puStack_ac0;
        lStack_af0 = *(long *)(unaff_x19 + 0x458);
        lStack_ae8 = *(long *)(unaff_x19 + 0x460);
        if (lStack_ae8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_03 != 0);
        }
        uVar2 = *(undefined4 *)(unaff_x19 + 0x3ec);
        FUN_10b1238dc(&pcStack_a18,auStack_12e8);
        FUN_10b121c1c(&puStack_730,alStack_d88);
        func_0x00010b123c68(&uStack_4b8,pbVar1);
        lStack_490 = lStack_a28;
        puStack_498 = puStack_a30;
        if (lStack_a28 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_04 != 0);
        }
        pcStack_480 = *param_4;
        uStack_488 = uVar2;
        if (pcStack_480 != (code *)0x0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_05 != 0);
        }
        uStack_478 = uStack_478 & 0xffffffffffffff00;
        cStack_460 = '\0';
        if (bStack_ab8 == 1) {
          lStack_470 = lStack_ac8;
          uStack_478 = uStack_ad0;
          if (lStack_ac8 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_06 != 0);
          }
          puStack_468 = puStack_ac0;
          cStack_460 = '\x01';
        }
        lStack_450 = lStack_ad8;
        uStack_458 = uStack_ae0;
        if (lStack_ad8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_07 != 0);
        }
        puStack_448 = puVar5;
        pcStack_c0 = FUN_10b12f064;
        ppuStack_b8 = &PTR_FUN_110cbcfe0;
        lVar16 = 0x5d8;
        __Znwm();
        FUN_10b1238dc();
        func_0x00010b135ba8();
        ppcVar12 = &pcStack_a18;
        *(undefined8 *)(lVar16 + 0x568) = uStack_4b0;
        *(undefined8 *)(lVar16 + 0x560) = uStack_4b8;
        uStack_4b0 = 0;
        uStack_4b8 = 0;
        *(undefined8 *)(lVar16 + 0x578) = uStack_4a0;
        *(long *)(lVar16 + 0x570) = lStack_4a8;
        uStack_4a0 = 0;
        lStack_4a8 = 0;
        *(long *)(lVar16 + 0x588) = lStack_490;
        *(undefined8 **)(lVar16 + 0x580) = puStack_498;
        puStack_498 = (undefined8 *)0x0;
        lStack_490 = 0;
        *(undefined4 *)(lVar16 + 0x590) = uStack_488;
        *(code **)(lVar16 + 0x598) = pcStack_480;
        if (pcStack_480 != (code *)0x0) {
          do {
            func_0x00010b133f58();
            ppcVar12 = extraout_x8_02;
          } while (extraout_w11_01 != 0);
        }
        *(undefined1 *)(lVar16 + 0x5a0) = 0;
        *(undefined1 *)(lVar16 + 0x5b8) = 0;
        uVar7 = cStack_460 == '\x01';
        if ((bool)uVar7) {
          *(long *)(lVar16 + 0x5a8) = lStack_470;
          *(ulong *)(lVar16 + 0x5a0) = uStack_478;
          ppcVar12[0xb4] = (code *)0x0;
          ppcVar12[0xb5] = (code *)0x0;
          *(undefined8 **)(lVar16 + 0x5b0) = puStack_468;
          *(undefined1 *)(lVar16 + 0x5b8) = 1;
        }
        *(long *)(lVar16 + 0x5c8) = lStack_450;
        *(ulong *)(lVar16 + 0x5c0) = uStack_458;
        ppcVar12[0xb8] = (code *)0x0;
        ppcVar12[0xb9] = (code *)0x0;
        *(undefined8 **)(lVar16 + 0x5d0) = puStack_448;
        uStack_b0 = lVar16;
        FUN_10b123cb4(&uStack_20,1);
        puStack_10[2] = 0;
        *puStack_10 = &PTR_FUN_110cbd860;
        puStack_10[1] = 0;
        pcStack_80 = FUN_10b12f064;
        ppuStack_78 = &PTR_FUN_110cbcfe0;
        uStack_b0 = 0;
        puStack_10[3] = &PTR_FUN_110cc5db8;
        puStack_10[4] = FUN_10b12f064;
        puStack_10[5] = &PTR_FUN_110cbcfe0;
        puStack_10[6] = lVar16;
        puStack_70 = (undefined8 *)0x0;
        FUN_10b12f590(&ppuStack_78);
        puVar6 = puStack_10;
        puStack_10 = (undefined8 *)0x0;
        param_4 = (code **)(puVar6 + 3);
        puStack_af8 = puVar6;
        ppcStack_b00 = param_4;
        func_0x00010b123d28(&uStack_20);
        FUN_10b12f590(&ppuStack_b8);
        func_0x00010b11a120(&pcStack_a18);
        puStack_b08 = puVar6;
        ppcStack_b10 = param_4;
        if (puVar6 != (undefined8 *)0x0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_08 != 0);
        }
        FUN_10b19de70();
        func_0x00010b136028();
        if (lStack_af0 != 0) {
          uVar8 = uStack_ae0;
          lVar16 = lStack_ad8;
          if (lStack_ad8 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_09 != 0);
          }
          puStack_70 = puVar6;
          puStack_68 = puVar5;
          pcStack_a18 = FUN_10b12f5b4;
          ppuStack_a10 = &PTR_FUN_110cbcff8;
          pcStack_80 = (code *)0x0;
          ppuStack_78 = (undefined **)0x0;
          apuStack_9f0[0] = puVar5;
          puStack_9f8 = puVar6;
          uStack_a08 = uVar8;
          lStack_a00 = lVar16;
          FUN_10b210574();
          func_0x00010b133ea8(ppuStack_a10);
          param_4 = &pcStack_80;
          func_0x00010b129c40(&pcStack_80);
          uVar8 = uStack_ae0;
          lVar16 = lStack_ad8;
          if (lStack_ad8 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_10 != 0);
          }
          lStack_18 = 0;
          puStack_10 = puVar5;
          pcStack_80 = FUN_10b12f600;
          ppuStack_78 = &PTR_FUN_110cbd010;
          uStack_20 = 0;
          puStack_60 = puVar5;
          puStack_70 = (undefined8 *)uVar8;
          puStack_68 = (undefined8 *)lVar16;
          FUN_10b2104a8();
          func_0x00010b133ea8(ppuStack_78);
          func_0x00010b129c40(&uStack_20);
        }
        func_0x00010b1258e4(&ppcStack_b00);
        FUN_10b12b860(&lStack_af0);
        func_0x00010b129c40(&uStack_ae0);
      }
      FUN_10b123d38(&uStack_ad0);
      func_0x0001052ac684(auStack_ab0);
    }
  }
  FUN_10b12338c(auStack_aa0);
  func_0x00010b12592c(&puStack_a50);
  func_0x00010b12592c(&puStack_a30);
  func_0x00010b134610();
LAB_10b12e268:
  plVar14 = alStack_d88;
  func_0x00010b121af0();
  func_0x00010b133dfc(uStack_8);
  if ((bool)uVar7) {
    return plVar14;
  }
  ___stack_chk_fail();
  func_0x00010b133ea8(ppuStack_78);
  func_0x00010b129c40(&uStack_20);
  func_0x00010b1258e4(&ppcStack_b00);
  FUN_10b12b860(&lStack_af0);
  func_0x00010b129c40(&uStack_ae0);
  FUN_10b123d38(&uStack_ad0);
  func_0x0001052ac684(auStack_ab0);
  FUN_10b12338c(auStack_aa0);
  func_0x00010b12592c(plVar18 + 1);
  func_0x00010b12592c(&puStack_a30);
  func_0x00010b134610();
  plVar18 = alStack_d88;
  func_0x00010b121af0();
  func_0x00010b1343d0();
  func_0x00010b134530();
  if ((char)plVar18[0x5d] == '\x01') {
    pcVar19 = param_4[1];
    pcVar15 = *param_4;
    pcVar21 = param_4[3];
    pcVar20 = param_4[2];
    pcVar23 = param_4[5];
    pcVar22 = param_4[4];
    uVar13 = *(undefined8 *)((long)param_4 + 0x29);
    *(undefined8 *)((long)plVar14 + 0x31) = *(undefined8 *)((long)param_4 + 0x31);
    *(undefined8 *)((long)plVar14 + 0x29) = uVar13;
    plVar14[3] = (long)pcVar21;
    plVar14[2] = (long)pcVar20;
    plVar14[5] = (long)pcVar23;
    plVar14[4] = (long)pcVar22;
    plVar14[1] = (long)pcVar19;
    *plVar14 = (long)pcVar15;
    cVar3 = (char)plVar14[0x4d];
    if (cVar3 == *(char *)(param_4 + 0x4d)) {
      if (cVar3 != '\0') {
        func_0x00010b12e64c(plVar14 + 8,param_4 + 8);
      }
    }
    else if (cVar3 == '\0') {
      FUN_10b124010(plVar14 + 8,param_4 + 8);
    }
    else {
      FUN_10b122170();
    }
    func_0x00010b1362cc();
    FUN_10b12e97c();
    func_0x000107c27c5c(plVar14 + 0x58,param_4 + 0x58);
    plVar14[0x5c] = (long)param_4[0x5c];
  }
  else {
    func_0x00010b134b9c();
    FUN_10b123f60();
    *(undefined1 *)(plVar14 + 0x5d) = 1;
  }
  return plVar14;
}



/* Entry: 10b12e544; end: 10b12e6d7;  */

void FUN_10b12e544(long param_1)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010b134530();
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    uVar7 = unaff_x20[5];
    uVar6 = unaff_x20[4];
    uVar8 = *(undefined8 *)((long)unaff_x20 + 0x29);
    *(undefined8 *)((long)unaff_x19 + 0x31) = *(undefined8 *)((long)unaff_x20 + 0x31);
    *(undefined8 *)((long)unaff_x19 + 0x29) = uVar8;
    unaff_x19[3] = uVar5;
    unaff_x19[2] = uVar4;
    unaff_x19[5] = uVar7;
    unaff_x19[4] = uVar6;
    unaff_x19[1] = uVar3;
    *unaff_x19 = uVar2;
    cVar1 = *(char *)(unaff_x19 + 0x4d);
    if (cVar1 == *(char *)(unaff_x20 + 0x4d)) {
      if (cVar1 != '\0') {
        func_0x00010b12e64c(unaff_x19 + 8,unaff_x20 + 8);
      }
    }
    else if (cVar1 == '\0') {
      FUN_10b124010(unaff_x19 + 8,unaff_x20 + 8);
    }
    else {
      FUN_10b122170();
    }
    func_0x00010b1362cc();
    FUN_10b12e97c();
    func_0x000107c27c5c(unaff_x19 + 0x58,unaff_x20 + 0x58);
    unaff_x19[0x5c] = unaff_x20[0x5c];
  }
  else {
    func_0x00010b134b9c();
    FUN_10b123f60();
    *(undefined1 *)(unaff_x19 + 0x5d) = 1;
  }
  return;
}



/* Entry: 10b12e6d8; end: 10b12e6ff;  */

void FUN_10b12e6d8(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x0001052ac664();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_10b124174();
    func_0x00010b136304();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    FUN_10b12e730();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    return;
  }
  return;
}



/* Entry: 10b12e700; end: 10b12e72f;  */

void FUN_10b12e700(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  FUN_10b12e730();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x30) = *(undefined1 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 10b12e730; end: 10b12e757;  */

void FUN_10b12e730(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27a18();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_10b124200();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x00010872611c();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10b12e758; end: 10b12e77f;  */

void FUN_10b12e758(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010872611c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b12e780; end: 10b12e7a7;  */

void FUN_10b12e780(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x0001052b4fd8();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    FUN_10b124280();
    func_0x00010b135188();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b136494();
    if (!bVar2) {
      FUN_10b12e7d8();
    }
    return;
  }
  return;
}



/* Entry: 10b12e7a8; end: 10b12e7d7;  */

void FUN_10b12e7a8(void)

{
  undefined1 in_ZR;
  
  func_0x00010b136494();
  if (!(bool)in_ZR) {
    FUN_10b12e7d8();
  }
  return;
}



/* Entry: 10b12e7d8; end: 10b12e7e3;  */

void FUN_10b12e7d8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3 - param_2 >> 4;
  uVar3 = uVar2;
  func_0x00010b134530();
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 4) < uVar3) {
    func_0x00010b12235c();
    func_0x0001052b52ec();
    FUN_10b124318();
    lVar4 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar5 - lVar4 >> 4) < uVar2) {
      lVar1 = unaff_x20 + (lVar5 - lVar4);
      if (lVar5 != lVar4) {
        _memmove(lVar4);
        lVar5 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar5,lVar1,param_3);
      }
      lVar4 = lVar5 + param_3;
      goto LAB_10b12e89c;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x00010b13579c();
  }
  lVar4 = lVar4 + (param_3 - unaff_x20);
LAB_10b12e89c:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 10b12e7e4; end: 10b12e8a7;  */

void FUN_10b12e7e4(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  func_0x00010b134530();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 4) < uVar2) {
    func_0x00010b12235c();
    func_0x0001052b52ec();
    FUN_10b124318();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3 >> 4) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        _memmove(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_10b12e89c;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x00010b13579c();
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_10b12e89c:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 10b12e8a8; end: 10b12e8cf;  */

void FUN_10b12e8a8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xe8);
  if (cVar1 != *(char *)(param_2 + 0xe8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        func_0x0001052b4238();
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
      return;
    }
    FUN_10b1243d4();
    *(undefined1 *)(param_1 + 0xe8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x00010b1345e8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x00010b1361b0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x00010b1363b8();
    func_0x000107c27c5c();
    func_0x000107c27c5c(unaff_x20 + 0x88,unaff_x19 + 0x88);
    func_0x000107c27c5c(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
    func_0x000107c27c5c(unaff_x20 + 200,unaff_x19 + 200);
    return;
  }
  return;
}



/* Entry: 10b12e8d0; end: 10b12e927;  */

void FUN_10b12e8d0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010b1345e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x00010b1361b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x00010b1363b8();
  func_0x000107c27c5c();
  func_0x000107c27c5c(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x000107c27c5c(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  func_0x000107c27c5c(unaff_x20 + 200,unaff_x19 + 200);
  return;
}



/* Entry: 10b12e928; end: 10b12e94f;  */

void FUN_10b12e928(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001052b4f8c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    FUN_10b1244f0();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b134438();
    func_0x00010872611c();
    func_0x00010b134cec();
    func_0x00010866e758();
    return;
  }
  return;
}



/* Entry: 10b12e950; end: 10b12e97b;  */

void FUN_10b12e950(void)

{
  func_0x00010b134438();
  func_0x00010872611c();
  func_0x00010b134cec();
  func_0x00010866e758();
  return;
}



/* Entry: 10b12e97c; end: 10b12e9a3;  */

void FUN_10b12e97c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001052a03ac();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    func_0x0001052a0760();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c27c5c(unaff_x20 + 0x20,unaff_x19 + 0x20);
    return;
  }
  return;
}



/* Entry: 10b12e9a4; end: 10b12e9d7;  */

void FUN_10b12e9a4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x000107c27c5c(unaff_x20 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 10b12e9d8; end: 10b12ec27;  */

void FUN_10b12e9d8(ulong param_1,long param_2)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong auStack_3b0 [2];
  undefined1 auStack_3a0 [24];
  long lStack_388;
  long lStack_380;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_f8;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [120];
  long lStack_48;
  
  plVar4 = *(long **)(param_2 + 0x10);
  lVar2 = *plVar4;
  plVar1 = plVar4 + 1;
  FUN_10b1c41c0(plVar1);
  if (plVar4[0xad] == 0) {
LAB_10b12eacc:
    if ((char)plVar4[0xbf] != '\x01') {
      uStack_110 = uStack_110 & 0xffffffffffffff00;
      uStack_f8 = 0;
      goto LAB_10b12eb18;
    }
  }
  else if (((((int)plVar4[0xaf] == 0) && ((char)plVar4[0x12] == '\x01')) &&
           (*(int *)((long)plVar4 + 0x6c) == 2)) && (plVar4[0xe] != 0)) {
    lVar3 = *(long *)(lVar2 + 0xc0);
    lStack_380 = *(long *)(lVar2 + 200);
    lStack_388 = lVar3;
    if (lStack_380 != 0) {
      do {
        func_0x00010b133f58();
        lVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    if (lVar3 != 0) {
      FUN_10b1b3d48(&uStack_110,plVar1);
      if ((uStack_110 != 0) && (lVar3 = *(long *)(lStack_388 + 0x148), lVar3 != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_e8,plVar4 + 1);
        param_1 = uStack_110;
        uStack_c8 = uStack_108;
        uStack_d0 = uStack_110;
        uStack_110 = 0;
        uStack_108 = 0;
        FUN_10b121fd0(auStack_c0,plVar4 + 0xb0);
        lStack_48 = plVar4[0xe];
        FUN_10b1afdc8(lVar3,auStack_e8);
        FUN_10b12ec28(auStack_e8);
      }
      func_0x0001052ac684(&uStack_110);
    }
    func_0x00010b125888(&lStack_388);
    if (plVar4[0xad] == 0) goto LAB_10b12eacc;
  }
  FUN_10b12394c(&lStack_388,plVar4 + 1);
  FUN_10b1b3d48(auStack_3a0,plVar1);
  func_0x00010b135dc8(&uStack_110,lVar2,&lStack_388,auStack_3a0,plVar4 + 0xb0,plVar4 + 0xc0);
  func_0x0001052ac684(auStack_3a0);
  func_0x00010b1355fc();
LAB_10b12eb18:
  FUN_10b118928(auStack_3a0,lVar2 + 0x18,(ulong)*(uint *)((long)plVar4 + 0x59c) | 0x100000000,
                plVar4 + 1,plVar4 + 0xc1,plVar4 + 0xc0,plVar4 + 0xaf,&uStack_110,plVar4 + 0x50,0);
  func_0x0001053a4504(plVar4 + 0xc5);
  func_0x00010b135ad4();
  auStack_3b0[0] = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b11d020(plVar4 + 0xca,auStack_3b0);
  func_0x00010b0f7f30(auStack_3b0);
  func_0x00010b13559c();
  FUN_10b123d38(&uStack_110);
  return;
}



/* Entry: 10b12ec28; end: 10b12ec4f;  */

void FUN_10b12ec28(void)

{
  long unaff_x19;
  
  func_0x00010b135838();
  func_0x00010529fe04();
  func_0x0001052ac684(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b12ec50; end: 10b12ec6f;  */

void FUN_10b12ec50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b12e5f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12ec70; end: 10b12ec73;  */

void FUN_10b12ec70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12ec74; end: 10b12ecbf;  */

void FUN_10b12ec74(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010b136488();
  *param_1 = &PTR_FUN_110cbcee8;
  uVar1 = 0x670;
  __Znwm();
  FUN_10b12ecc0();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 10b12ecc0; end: 10b12ede3;  */

undefined8 * FUN_10b12ecc0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_10b12394c(param_1 + 1,param_2 + 1);
  FUN_10b123f60(param_1 + 0x50,param_2 + 0x50);
  param_1[0xad] = param_2[0xad];
  lVar1 = param_2[0xae];
  param_1[0xae] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 0xaf) = *(undefined4 *)(param_2 + 0xaf);
  FUN_10b121fd0(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
  lVar1 = param_2[0xc0];
  param_1[0xc0] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b121ddc(param_1 + 0xc1,param_2 + 0xc1);
  uVar3 = param_2[0xc6];
  uVar2 = param_2[0xc5];
  param_1[199] = param_2[199];
  param_1[0xc6] = uVar3;
  param_1[0xc5] = uVar2;
  lVar1 = param_2[0xc9];
  uVar2 = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  param_1[200] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b123c68(param_1 + 0xca,param_2 + 0xca);
  return param_1;
}



/* Entry: 10b12ede4; end: 10b12ee03;  */

void FUN_10b12ede4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b12cd9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12ee04; end: 10b12ee07;  */

void FUN_10b12ee04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12ee08; end: 10b12ee1f;  */

void FUN_10b12ee08(void)

{
  func_0x000107c278b8();
  func_0x00010b135188();
  return;
}



/* Entry: 10b12ee20; end: 10b12ee6f;  */

void FUN_10b12ee20(void)

{
  func_0x00010b1352ec();
  func_0x00010b1362a8();
  FUN_10b12d7c8();
  func_0x00010b134bbc();
  func_0x00010b134610();
  return;
}


