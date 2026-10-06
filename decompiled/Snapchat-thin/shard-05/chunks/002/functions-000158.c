/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bec798; end: 103bec84f;  */

void FUN_103bec798(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x2c0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x2b8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103bec850,0,0);
    return;
  }
  piVar3 = *(int **)(lVar4 + 0x270);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x2c8) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_103bec884;
                    /* WARNING: Could not recover jumptable at 0x000103bec84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,lVar4 + 0x10,*(undefined8 *)(lVar4 + 0x238),*(undefined8 *)(lVar4 + 0x240),0,
             *(undefined8 *)(lVar4 + 600),*(undefined8 *)(lVar4 + 0x260));
  return;
}



/* Entry: 103bec850; end: 103bec883;  */

void FUN_103bec850(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2a8));
                    /* WARNING: Could not recover jumptable at 0x000103bec880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bec884; end: 103bec94b;  */

void FUN_103bec884(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x2d0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x2c8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103beca7c,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x48);
  piVar3 = *(int **)(*(long *)(lVar5 + 0x260) + 0x70);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar5 + 0x2d8) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)FUN_103bec94c;
                    /* WARNING: Could not recover jumptable at 0x000103bec948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,lVar5 + 0x1c0,*(undefined8 *)(lVar5 + 0x238),*(undefined8 *)(lVar5 + 0x240),
             uVar4,1,*(undefined8 *)(lVar5 + 600),*(undefined8 *)(lVar5 + 0x260));
  return;
}



/* Entry: 103bec94c; end: 103bec9b7;  */

void FUN_103bec94c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2d8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x2e8) = *(undefined8 *)(lVar2 + 0x2a8);
    func_0x0001012b6798(lVar2 + 0x10);
    pcVar1 = FUN_103bec9b8;
  }
  else {
    pcVar1 = FUN_103becb18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bec9b8; end: 103beca7b;  */

void FUN_103bec9b8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x230);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2e8));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(unaff_x22 + 0x1e0);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103bec9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103beca7c; end: 103becb17;  */

void FUN_103beca7c(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2a8));
  if (*(long *)(unaff_x22 + 0x2b0) == 2) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103becac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x2b0) = *(long *)(unaff_x22 + 0x2b0) + 1;
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x2d0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103bec798;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}



/* Entry: 103becb18; end: 103becbbb;  */

void FUN_103becb18(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2a8));
  func_0x0001012b6798(unaff_x22 + 0x10);
  if (*(long *)(unaff_x22 + 0x2b0) == 2) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103becb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x2b0) = *(long *)(unaff_x22 + 0x2b0) + 1;
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x2e0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103bec798;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}



/* Entry: 103becbbc; end: 103becca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103becbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5e38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5e40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5e48) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103becca4; end: 103becd03; -[KronosCalendarServices init] */

void FUN_103becca4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KronosCalendarServices.KronosCalendarServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103beccd0);
  (*pcVar1)();
}



/* Entry: 103becd04; end: 103becd4b; -[KronosCalendarServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103becd20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103becd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103becd04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff5e38));
  return;
}



/* Entry: 103becd4c; end: 103bece53;  */

undefined * FUN_103becd4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bece54);
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
    puVar3 = (undefined *)0x112d6f780;
    func_0x0001000285a8(0x112d6f780,&UNK_10dc63a20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1106e6610);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103bece54; end: 103bece8f;  */

undefined8 FUN_103bece54(undefined8 param_1,undefined8 param_2)

{
  FUN_103beb030(param_2,param_1);
  return param_2;
}



/* Entry: 103bece90; end: 103becfa7;  */

undefined * FUN_103bece90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103becfa8);
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
    puVar2 = (undefined *)0x112f2a128;
    func_0x0001000285a8(0x112f2a128,&UNK_10db66390);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x28) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106e6588);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x28 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 103becfa8; end: 103bed20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103becfa8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,ulong param_10,byte param_11,undefined4 param_12,undefined8 param_13
                  ,undefined8 param_14,byte param_15,undefined4 param_16,code *param_17,
                  undefined8 param_18)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  long alStack_100 [2];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_a8 = param_2;
  uStack_a0 = param_4;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  func_0x000107c614f0();
  uVar5 = 0;
  uStack_98 = unaff_x20;
  func_0x000107c5efa8();
  lVar10 = *(long *)(uVar5 - 8);
  uVar6 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_78);
  if (lStack_78 == 0) {
    (*param_17)(0,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    pcStack_c0 = param_17;
    uStack_d8 = param_13;
    uStack_d0 = param_14;
    uStack_dc = (uint)param_11;
    uStack_e8 = uStack_70;
    lVar9 = *(long *)(param_1 + 0x10);
    uVar1 = param_9 & 0xffffffffffff;
    if ((param_10 & 0x2000000000000000) != 0) {
      uVar1 = param_10 >> 0x38 & 0xf;
    }
    lStack_c8 = param_1;
    uStack_b8 = param_3;
    uStack_b0 = param_5;
    if (uVar1 == 0) {
      func_0x000107c5efa4(auStack_f0 + lVar2);
      func_0x000107c5ef94();
      (**(code **)(lVar10 + 8))(auStack_f0 + lVar2,uVar5);
      param_10 = param_2;
    }
    else {
      func_0x000107c61434(param_10);
      uVar6 = param_9;
    }
    puVar7 = &UNK_1106e6b60;
    func_0x000107c613fc(&UNK_1106e6b60,0xa8,7);
    uVar4 = uStack_b0;
    uVar3 = uStack_b8;
    lVar10 = lStack_c8;
    uVar8 = uStack_d0;
    *(long *)(puVar7 + 0x10) = lStack_78;
    *(undefined8 *)(puVar7 + 0x18) = uStack_e8;
    puVar7[0x20] = lVar9 != 0 & param_15;
    *(long *)(puVar7 + 0x28) = lStack_c8;
    *(ulong *)(puVar7 + 0x30) = uStack_a8;
    *(undefined8 *)(puVar7 + 0x38) = uStack_b8;
    *(undefined8 *)(puVar7 + 0x40) = uStack_a0;
    *(undefined8 *)(puVar7 + 0x48) = uStack_b0;
    *(undefined8 *)(puVar7 + 0x50) = uStack_90;
    *(undefined8 *)(puVar7 + 0x58) = uStack_88;
    *(undefined8 *)(puVar7 + 0x60) = uStack_80;
    *(ulong *)(puVar7 + 0x68) = uVar6;
    *(ulong *)(puVar7 + 0x70) = param_10;
    puVar7[0x78] = (byte)uStack_dc & 1;
    *(undefined8 *)(puVar7 + 0x80) = uStack_d8;
    *(undefined8 *)(puVar7 + 0x88) = uStack_d0;
    *(code **)(puVar7 + 0x90) = pcStack_c0;
    *(undefined8 *)(puVar7 + 0x98) = param_18;
    *(undefined8 *)(puVar7 + 0xa0) = uStack_98;
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    func_0x000107c6157c(param_18);
    func_0x000107c615f0(lStack_78);
    func_0x000107c61434(lVar10);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    *(undefined **)((long)alStack_100 + lVar2) = PTR___sytN_11034f1b0 + 8;
    uVar8 = 6;
    func_0x0001001ca524(6,0,0x54,4,0,0,&UNK_10dc63a30,puVar7);
    func_0x000107c615e8(lStack_78);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 103bed20c; end: 103bed2cf;  */

void FUN_103bed20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_20;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_19;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_18;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_17;
  *(undefined1 *)(unaff_x22 + 0x371) = param_15;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_14;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_13;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_12;
  *(undefined8 *)(unaff_x22 + 0x298) = param_11;
  *(undefined8 *)(unaff_x22 + 0x290) = param_10;
  *(undefined8 *)(unaff_x22 + 0x288) = param_9;
  *(undefined8 *)(unaff_x22 + 0x280) = param_8;
  *(undefined8 *)(unaff_x22 + 0x278) = param_7;
  *(undefined8 *)(unaff_x22 + 0x270) = param_6;
  *(undefined8 *)(unaff_x22 + 0x268) = param_5;
  *(undefined1 *)(unaff_x22 + 0x370) = param_4;
  *(undefined8 *)(unaff_x22 + 0x260) = param_3;
  *(undefined8 *)(unaff_x22 + 600) = param_2;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x2d8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x2e0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2e8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2f0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bed2d0,0,0);
  return;
}



/* Entry: 103bed2d0; end: 103bed3f7;  */

void FUN_103bed2d0(void)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(char *)(unaff_x22 + 0x370) == '\x01') {
    puVar3 = *(undefined **)(unaff_x22 + 0x268);
    func_0x000107c61434();
  }
  *(undefined **)(unaff_x22 + 0x2f8) = puVar3;
  uVar11 = *(ulong *)(unaff_x22 + 0x278);
  uVar1 = *(ulong *)(unaff_x22 + 0x270) & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar1 = uVar11 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    plVar5 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x300) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103bed3f8;
    uVar8 = *(ulong *)(unaff_x22 + 0x2c0);
    uVar11 = *(ulong *)(unaff_x22 + 0x2b8);
    lVar9 = *(long *)(unaff_x22 + 0x2b0);
    lVar7 = *(long *)(unaff_x22 + 0x260);
    lVar12 = *(long *)(unaff_x22 + 600);
    plVar5[0x12] = *(long *)(unaff_x22 + 0x2a8);
    plVar5[0x13] = lVar9;
    plVar5[0x10] = lVar12;
    plVar5[0x11] = lVar7;
    uVar1 = uVar11 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar1 = uVar8 >> 0x38 & 0xf;
    }
    func_0x000107c614f0();
    if (uVar1 == 0) {
      piVar10 = *(int **)(lVar7 + 8);
      iVar2 = *piVar10;
      plVar6 = (long *)(ulong)(uint)piVar10[1];
      func_0x000107c615b8();
      plVar5[0x17] = (long)plVar6;
      *plVar6 = (long)plVar5;
      plVar6[1] = (long)FUN_103bee47c;
                    /* WARNING: Could not recover jumptable at 0x000103bee2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar10))
                (plVar6,plVar5 + 2,plVar5[0x12],plVar5[0x13],lVar12,plVar5[0x11]);
      return;
    }
    piVar10 = *(int **)(lVar7 + 0x30);
    iVar2 = *piVar10;
    plVar6 = (long *)(ulong)(uint)piVar10[1];
    func_0x000107c615b8();
    plVar5[0x14] = (long)plVar6;
    *plVar6 = (long)plVar5;
    plVar6[1] = (long)FUN_103bee300;
                    /* WARNING: Could not recover jumptable at 0x000103bee2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar10))(uVar11,uVar8,lVar12,lVar7);
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x260);
  uVar4 = *(undefined8 *)(unaff_x22 + 600);
  func_0x000107c614f0(uVar4);
  piVar10 = *(int **)(lVar12 + 0x38);
  iVar2 = *piVar10;
  plVar5 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c61434(uVar11);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x318) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103bed63c;
                    /* WARNING: Could not recover jumptable at 0x000103bed3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar10))
            (plVar5,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x270),
             *(undefined8 *)(unaff_x22 + 0x278),0,uVar4,*(undefined8 *)(unaff_x22 + 0x260));
  return;
}



/* Entry: 103bed3f8; end: 103bed44b;  */

void FUN_103bed3f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x308) = param_1;
  *(undefined8 *)(lVar1 + 0x310) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bed44c,0,0);
  return;
}



/* Entry: 103bed44c; end: 103bed63b;  */

void FUN_103bed44c(void)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_64;
  ulong uStack_60;
  
  lVar16 = *(long *)(unaff_x22 + 0x310);
  if (lVar16 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2f8));
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2e8);
    (**(code **)(unaff_x22 + 0x2c8))
              (*(undefined8 *)(unaff_x22 + 0x308),0,PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c6142c(0);
    func_0x000107c6142c(puVar3);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000103bed51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(ulong *)(unaff_x22 + 0x2a0);
  if (uVar10 != 0) {
    uStack_60 = *(ulong *)(unaff_x22 + 0x298);
    uVar1 = uStack_60 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar1 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(uVar10);
      uStack_64 = 0;
      goto LAB_103bed538;
    }
    uVar10 = 0;
  }
  uStack_60 = 0;
  uStack_64 = 0xff;
LAB_103bed538:
  uVar18 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x371);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x280);
  lVar15 = *(long *)(unaff_x22 + 0x260);
  uVar14 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = uVar12;
  uVar11 = uVar9;
  FUN_103bee710();
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar18;
  *(long *)(unaff_x22 + 0x1c8) = lVar16;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar11;
  *(undefined1 *)(unaff_x22 + 0x1f8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x200) = 0;
  *(undefined8 *)(unaff_x22 + 0x208) = 0xe000000000000000;
  *(ulong *)(unaff_x22 + 0x210) = uStack_60;
  *(ulong *)(unaff_x22 + 0x218) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x228) = 0;
  *(undefined8 *)(unaff_x22 + 0x220) = 0;
  *(undefined1 *)(unaff_x22 + 0x230) = uStack_64;
  *(undefined1 *)(unaff_x22 + 0x231) = 1;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar9;
  func_0x000107c614f0(uVar14);
  piVar7 = *(int **)(lVar15 + 0x10);
  iVar2 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar9);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x328) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103bed698;
                    /* WARNING: Could not recover jumptable at 0x000103bed638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar7))
            (plVar5,unaff_x22 + 0x10,unaff_x22 + 0x1c0,uVar14,*(undefined8 *)(unaff_x22 + 0x260));
  return;
}



/* Entry: 103bed63c; end: 103bed697;  */

void FUN_103bed63c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 800) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x318));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103bedbf8;
  }
  else {
    pcVar1 = FUN_103bedd54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bed698; end: 103bed6fb;  */

void FUN_103bed698(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x330) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x328));
  FUN_103bee914(lVar2 + 0x1c0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103bed6fc;
  }
  else {
    pcVar1 = FUN_103bed860;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bed6fc; end: 103bed85f;  */

void FUN_103bed6fc(void)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x10);
  uVar10 = *(ulong *)(unaff_x22 + 0x18);
  func_0x000107c61434(uVar10);
  func_0x0001012b6798((ulong *)(unaff_x22 + 0x10));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  *(ulong *)(unaff_x22 + 0x348) = uVar10;
  *(ulong *)(unaff_x22 + 0x340) = uVar11;
  *(ulong *)(unaff_x22 + 0x338) = uVar10;
  uVar1 = uVar11 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  uVar4 = *(ulong *)(unaff_x22 + 0x2f8);
  if (uVar1 == 0) {
    func_0x000107c6142c();
    uVar11 = 0;
    uVar4 = uVar10;
    uVar10 = 0;
  }
  else if (*(long *)(uVar4 + 0x10) != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x260);
    uVar5 = *(undefined8 *)(unaff_x22 + 600);
    func_0x000107c614f0(uVar5);
    piVar7 = *(int **)(lVar8 + 0x58);
    iVar2 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x350) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_103bed9b8;
                    /* WARNING: Could not recover jumptable at 0x000103bed7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar7))
              (uVar11,uVar10,uVar9,*(undefined8 *)(unaff_x22 + 0x2f8),uVar5,
               *(undefined8 *)(unaff_x22 + 0x260));
    return;
  }
  func_0x000107c6142c(uVar4);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))(uVar11,uVar10,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(uVar10);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103bed85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bed860; end: 103bed9b7;  */

void FUN_103bed860(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar2 = *(ulong *)(unaff_x22 + 0x2e8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x248) = uVar4;
  func_0x000107c614b0(uVar4);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar2,unaff_x22 + 0x248,uVar3,uVar5,0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f8);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x270) & 0xffffffffffff;
    if ((*(ulong *)(unaff_x22 + 0x278) & 0x2000000000000000) != 0) {
      uVar2 = *(ulong *)(unaff_x22 + 0x278) >> 0x38 & 0xf;
    }
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x248));
    func_0x000107c6142c(uVar3);
    func_0x000107c614ac(uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
    lVar7 = *(long *)(unaff_x22 + 0x2e0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar2 = *(ulong *)(unaff_x22 + 0x270) & 0xffffffffffff;
    if ((*(ulong *)(unaff_x22 + 0x278) & 0x2000000000000000) != 0) {
      uVar2 = *(ulong *)(unaff_x22 + 0x278) >> 0x38 & 0xf;
    }
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(uVar3);
    (**(code **)(lVar7 + 8))(uVar5,uVar6);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x248));
  }
  if (uVar2 != 0) {
    func_0x000107c6142c();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))(0,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(0);
  func_0x000107c6142c(puVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103bed9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bed9b8; end: 103beda2b;  */

void FUN_103bed9b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x358) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x350));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x360) = param_2;
    *(undefined8 *)(lVar2 + 0x368) = param_1;
    pcVar1 = FUN_103beda2c;
  }
  else {
    pcVar1 = FUN_103bedac0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103beda2c; end: 103bedabf;  */

void FUN_103beda2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2f8));
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))(*(undefined8 *)(unaff_x22 + 0x340),uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103bedabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bedac0; end: 103bedbf7;  */

void FUN_103bedac0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x2f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x358);
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar3,unaff_x22 + 0x250,uVar4,uVar2,0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x358);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2f8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x250));
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar5);
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2f0);
    lVar7 = *(long *)(unaff_x22 + 0x2e0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(uVar2);
    (**(code **)(lVar7 + 8))(uVar5,uVar6);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x250));
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))
            (*(undefined8 *)(unaff_x22 + 0x340),uVar4,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(uVar4);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103bedbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bedbf8; end: 103bedd53;  */

void FUN_103bedbf8(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  
  func_0x0001012b6798(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(ulong *)(unaff_x22 + 0x278);
  uVar7 = *(ulong *)(unaff_x22 + 0x270);
  *(ulong *)(unaff_x22 + 0x348) = uVar11;
  *(ulong *)(unaff_x22 + 0x340) = uVar7;
  *(ulong *)(unaff_x22 + 0x338) = uVar11;
  uVar10 = uVar7 & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar10 = uVar11 >> 0x38 & 0xf;
  }
  uVar3 = *(ulong *)(unaff_x22 + 0x2f8);
  if (uVar10 == 0) {
    func_0x000107c6142c();
    uVar7 = 0;
    uVar10 = 0;
    uVar3 = uVar11;
  }
  else {
    uVar10 = uVar11;
    if (*(long *)(uVar3 + 0x10) != 0) {
      lVar8 = *(long *)(unaff_x22 + 0x260);
      uVar4 = *(undefined8 *)(unaff_x22 + 600);
      func_0x000107c614f0(uVar4);
      piVar6 = *(int **)(lVar8 + 0x58);
      iVar1 = *piVar6;
      plVar5 = (long *)(ulong)(uint)piVar6[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x350) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_103bed9b8;
                    /* WARNING: Could not recover jumptable at 0x000103bedcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar6))
                (uVar7,uVar11,uVar9,*(undefined8 *)(unaff_x22 + 0x2f8),uVar4,
                 *(undefined8 *)(unaff_x22 + 0x260));
      return;
    }
  }
  func_0x000107c6142c(uVar3);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))(uVar7,uVar10,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(uVar10);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103bedd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bedd54; end: 103bedebb;  */

void FUN_103bedd54(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar4 = *(ulong *)(unaff_x22 + 0x2e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x248) = uVar2;
  func_0x000107c614b0(uVar2);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar4,unaff_x22 + 0x248,uVar5,uVar6,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f8);
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(unaff_x22 + 0x270) & 0xffffffffffff;
    if ((*(ulong *)(unaff_x22 + 0x278) & 0x2000000000000000) != 0) {
      uVar4 = *(ulong *)(unaff_x22 + 0x278) >> 0x38 & 0xf;
    }
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x248));
    func_0x000107c6142c(uVar5);
    func_0x000107c614ac(uVar2);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
    lVar8 = *(long *)(unaff_x22 + 0x2e0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar4 = *(ulong *)(unaff_x22 + 0x270) & 0xffffffffffff;
    if ((*(ulong *)(unaff_x22 + 0x278) & 0x2000000000000000) != 0) {
      uVar4 = *(ulong *)(unaff_x22 + 0x278) >> 0x38 & 0xf;
    }
    func_0x000107c614ac(uVar2);
    func_0x000107c6142c(uVar5);
    (**(code **)(lVar8 + 8))(uVar6,uVar7);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x248));
  }
  if (uVar4 != 0) {
    func_0x000107c6142c(uVar3);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2e8);
  (**(code **)(unaff_x22 + 0x2c8))(0,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(0);
  func_0x000107c6142c(puVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103bedeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bedebc; end: 103bedfa7;  */

void FUN_103bedebc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long unaff_x20;
  long unaff_x22;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  lVar20 = *(long *)(unaff_x20 + 0x50);
  lVar18 = *(long *)(unaff_x20 + 0x48);
  lVar16 = *(long *)(unaff_x20 + 0x60);
  lVar14 = *(long *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x68);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x78);
  lVar21 = *(long *)(unaff_x20 + 0x88);
  lVar19 = *(long *)(unaff_x20 + 0x80);
  lVar17 = *(long *)(unaff_x20 + 0x98);
  lVar15 = *(long *)(unaff_x20 + 0x90);
  plVar13 = (long *)0x380;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_103bedfa8;
  plVar13[0x5a] = lVar17;
  plVar13[0x59] = lVar15;
  plVar13[0x58] = lVar21;
  plVar13[0x57] = lVar19;
  *(undefined1 *)((long)plVar13 + 0x371) = uVar9;
  plVar13[0x56] = lVar7;
  plVar13[0x55] = lVar3;
  plVar13[0x54] = lVar16;
  plVar13[0x53] = lVar14;
  plVar13[0x52] = lVar20;
  plVar13[0x51] = lVar18;
  plVar13[0x50] = lVar6;
  plVar13[0x4f] = lVar2;
  plVar13[0x4e] = lVar5;
  plVar13[0x4d] = lVar1;
  *(undefined1 *)(plVar13 + 0x6e) = uVar8;
  plVar13[0x4c] = lVar4;
  plVar13[0x4b] = lVar10;
  lVar10 = 0;
  func_0x000107c5fcbc();
  plVar13[0x5b] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar13[0x5c] = lVar10;
  uVar12 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar11 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar13[0x5d] = uVar11;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar13[0x5e] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bed2d0,0,0);
  return;
}



/* Entry: 103bedfa8; end: 103bedfe3;  */

void FUN_103bedfa8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bedfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bedfe4; end: 103bee17b; -[KronosCalendarServices createPlanAndInviteWithRecipientIds:existingEventId:title:startTimestampMs:locationText:tzid:isAllDay:creatorUserId:directInviteEnabled:completion:] */

/* WARNING: Possible PIC construction at 0x000103bee12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bee13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bee14c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bee140) */
/* WARNING: Removing unreachable block (ram,0x000103bee130) */
/* WARNING: Removing unreachable block (ram,0x000103bee150) */

void FUN_103bedfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_stack_00000018;
  long lStack_98;
  
  func_0x000107c60bc4();
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3);
  func_0x000107c5faec();
  puVar3 = puVar2;
  func_0x000107c5faec();
  if (param_7 == 0) {
    lStack_98 = 0;
    puVar5 = (undefined *)0x0;
    puVar4 = puVar3;
  }
  else {
    puVar5 = puVar3;
    func_0x000107c5faec();
    puVar4 = puVar5;
    lStack_98 = param_7;
  }
  func_0x000107c5faec();
  func_0x000107c5faec();
  puVar1 = &UNK_1106e6b88;
  func_0x000107c613fc(&UNK_1106e6b88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000018;
  func_0x000107c61174(param_1);
  FUN_103becfa8(param_3,param_4,puVar2,param_5,puVar3,param_6,lStack_98,puVar5,param_8,puVar4,
                param_9);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103bee17c; end: 103bee1eb;  */

/* WARNING: Possible PIC construction at 0x000103bee1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bee1d8) */

void FUN_103bee17c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bee1ec; end: 103bee1f3;  */

/* WARNING: Possible PIC construction at 0x000103bee1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bee1d8) */

void FUN_103bee1ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bee1f4; end: 103bee2ff;  */

void FUN_103bee1f4(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(long *)(unaff_x22 + 0x88) = param_2;
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  func_0x000107c614f0();
  if (uVar1 != 0) {
    piVar4 = *(int **)(param_2 + 0x30);
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103bee300;
                    /* WARNING: Could not recover jumptable at 0x000103bee2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar4))(param_3,param_4,param_1,param_2);
    return;
  }
  piVar4 = *(int **)(param_2 + 8);
  iVar2 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103bee47c;
                    /* WARNING: Could not recover jumptable at 0x000103bee2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar4))
            (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined8 *)(unaff_x22 + 0x98),param_1,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 103bee300; end: 103bee3cb;  */

void FUN_103bee300(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  lVar7 = *unaff_x22;
  *(undefined8 *)(lVar6 + 0xa8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xa0));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
    uVar3 = *(undefined8 *)(lVar6 + 0x80);
    lVar2 = *(long *)(lVar6 + 0x88);
    func_0x000107c614f0(uVar3);
    piVar5 = *(int **)(lVar2 + 8);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(lVar6 + 0xb8) = plVar4;
    *plVar4 = lVar7;
    plVar4[1] = (long)FUN_103bee47c;
                    /* WARNING: Could not recover jumptable at 0x000103bee3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (plVar4,lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x98),uVar3
               ,*(undefined8 *)(lVar6 + 0x88));
    return;
  }
  *(undefined8 *)(lVar6 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bee3cc,0,0);
  return;
}



/* Entry: 103bee3cc; end: 103bee47b;  */

void FUN_103bee3cc(void)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0xa8);
  uVar1 = *(ulong *)(unaff_x22 + 0xb0) & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103bee410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c6142c(uVar3);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c614f0(uVar5);
  piVar7 = *(int **)(lVar4 + 8);
  iVar2 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103bee47c;
                    /* WARNING: Could not recover jumptable at 0x000103bee478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar7))
            (plVar6,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined8 *)(unaff_x22 + 0x98),uVar5,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 103bee47c; end: 103bee4eb;  */

void FUN_103bee47c(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
                    /* WARNING: Could not recover jumptable at 0x000103bee4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bee4ec,0,0);
  return;
}



/* Entry: 103bee4ec; end: 103bee55b;  */

void FUN_103bee4ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x10);
  uVar3 = *(ulong *)(unaff_x22 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(uVar3);
  }
  func_0x000103bee990((ulong *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bee558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3);
  return;
}



/* Entry: 103bee55c; end: 103bee70f;  */

undefined1  [16] FUN_103bee55c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar3 = 0;
  func_0x000107c5ef14();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  func_0x000107c453e4();
  uVar5 = 0x4f505f53555f6e65;
  func_0x000107c5eed0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x4f505f53555f6e65,0xeb00000000584953);
  func_0x000107c5ef00();
  (**(code **)(lVar9 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  func_0x000107c5601c(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c5ef9c();
  func_0x000107c59d94(puVar4);
  func_0x000107c61170(uVar5);
  bVar2 = (param_3 & 1) == 0;
  uVar5 = 0x2d4d4d2d79797979;
  if (bVar2) {
    uVar5 = 0xd000000000000012;
  }
  uVar1 = 0xea00000000006464;
  if (bVar2) {
    uVar1 = 0x800000010ef33bf0;
  }
  uVar8 = uVar1;
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c53e28(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c5ee70();
  puVar6 = puVar4;
  func_0x000107c5c1b8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  puVar7 = puVar6;
  func_0x000107c5faec(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = puVar7;
  return auVar10;
}



/* Entry: 103bee710; end: 103bee913;  */

long FUN_103bee710(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lStack_70 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d48c78;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar6 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5efa8();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar5 = lVar1 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef90(lVar1,param_2,param_3);
  func_0x0001012b67cc(lVar1,lVar6);
  pcVar7 = *(code **)(lVar3 + 0x30);
  lVar1 = lVar6;
  (*pcVar7)(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000107c5efa4(lVar5);
    lVar1 = lVar6;
    (*pcVar7)(lVar6,1,lVar2);
    if ((int)lVar1 != 1) {
      func_0x000103bee948(lVar6);
    }
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar5,lVar6,lVar2);
  }
  func_0x000107c5ee88(lVar4,(double)param_1 / 1000.0);
  lVar1 = lVar4;
  FUN_103bee55c(lVar4,lVar5,param_4 & 1);
  (**(code **)(lStack_70 + 8))(lVar4,lStack_68);
  (**(code **)(lVar3 + 8))(lVar5,lVar2);
  return lVar1;
}



/* Entry: 103bee914; end: 103beea6f;  */

undefined8 FUN_103bee914(undefined8 param_1)

{
  FUN_103bea420();
  return param_1;
}



/* Entry: 103beea70; end: 103beeaa7;  */

void FUN_103beea70(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103beeaa8; end: 103beeb0f; -[SCCalendarEventTiming description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beeaa8(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff5e78) == '\0') {
    if (*(char *)(param_1 + _DAT_112ff5e88 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103beeb10);
      (*pcVar1)();
    }
  }
  else if ((*(char *)(param_1 + _DAT_112ff5e78) == '\x01') &&
          (*(long *)(param_1 + _DAT_112ff5e80 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103beead8);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103beeb10; end: 103beeb57; -[SCCalendarEventTiming init] */

void FUN_103beeb10(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "KronosCalendarServices/CalendarEventDataWrapper.swift",0x35,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103beeb58);
  (*pcVar1)();
}



/* Entry: 103beeb58; end: 103beebcb; +[SCCalendarEventTiming dateTimeWithStartTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beeb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff5e78) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e88);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103beebcc; end: 103beec5f; +[SCCalendarEventTiming allDayWithStartDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beebcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff5e78) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103beec60; end: 103beecd7; +[SCCalendarEventTiming unknown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beec60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff5e78) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff5e80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103beecd8; end: 103beedb3; -[SCCalendarEventTiming matchDateTime:allDay:unknown:] */

/* WARNING: Possible PIC construction at 0x000103beed48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103beed4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beecd8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_112ff5e78) == '\0') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_112ff5e88) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103beed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_112ff5e88));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103beedb4);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_112ff5e78) == '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_112ff5e80))[1];
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112ff5e80);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar3,lVar2);
      (**(code **)(param_4 + 0x10))(param_4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103beedb0);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103beeda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 103beedb4; end: 103beedc7; -[SCCalendarEventTiming .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beedb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff5e80 + 8))
  ;
  return;
}



/* Entry: 103beedc8; end: 103beee13; -[SCCalendarEventData title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beedc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5e90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5e90))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103beee14; end: 103beee23; -[SCCalendarEventData timing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beee14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5e98));
  return;
}



/* Entry: 103beee24; end: 103beee7f; -[SCCalendarEventData creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beee24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5ea0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5ea0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103beee80; end: 103beef0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beee80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5e90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5e98) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5ea0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103beef0c; end: 103bef0af; -[SCCalendarEventData initWithTitle:timing:creatorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beef0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5e90);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff5e98) = param_4;
  plVar2 = (long *)(param_1 + _DAT_112ff5ea0);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar3);
  return;
}



/* Entry: 103bef0b0; end: 103bef113; -[SCCalendarEventData description] */

void FUN_103bef0b0(void)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_103bef2e4(&uStack_88);
  uStack_18 = uStack_80;
  uStack_20 = uStack_88;
  func_0x000100bcb1dc(&uStack_20);
  uStack_38 = uStack_70;
  uStack_40 = uStack_78;
  uStack_30 = uStack_68;
  func_0x000102f48fd8(&uStack_40);
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  func_0x000101994d34(&uStack_50);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bef114; end: 103bef15b; -[SCCalendarEventData init] */

void FUN_103bef114(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "KronosCalendarServices/CalendarEventDataWrapper.swift",0x35,2,0x8b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bef15c);
  (*pcVar1)();
}



/* Entry: 103bef15c; end: 103bef15f;  */

void FUN_103bef15c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bef160; end: 103bef193;  */

void FUN_103bef160(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bef194; end: 103bef1e3; -[SCCalendarEventData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bef1b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bef1b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff5e90 + 8))
  ;
  return;
}



/* Entry: 103bef1e4; end: 103bef2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef1e4(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_60 [6];
  
  plVar5 = alStack_60;
  lVar3 = param_1;
  FUN_103bef3e8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  if (param_3 == '\0') {
    *(undefined1 *)(lVar4 + _DAT_112ff5e78) = 0;
    plVar2 = (long *)(lVar4 + _DAT_112ff5e88);
    *plVar2 = param_1;
    *(undefined1 *)(plVar2 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ff5e80);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar4 + _DAT_112ff5e78) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ff5e88);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    plVar5 = (long *)(lVar4 + _DAT_112ff5e80);
    *plVar5 = param_1;
    plVar5[1] = param_2;
    plVar5 = alStack_60 + 2;
  }
  else {
    *(undefined1 *)(lVar4 + _DAT_112ff5e78) = 2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ff5e88);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ff5e80);
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar5 = alStack_60 + 4;
  }
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bef2e4; end: 103bef3e7;  */

/* WARNING: Possible PIC construction at 0x000103bef35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bef360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef2e4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = ((undefined8 *)(param_2 + _DAT_112ff5e90))[1];
  lVar4 = *(long *)(param_2 + _DAT_112ff5e98);
  cVar2 = *(char *)(lVar4 + _DAT_112ff5e78);
  if (cVar2 == '\0') {
    if (*(char *)((undefined8 *)(lVar4 + _DAT_112ff5e88) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bef3e8);
      (*pcVar3)();
    }
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112ff5e88);
  }
  else {
    if (cVar2 == '\x01') {
      lVar4 = *(long *)(lVar4 + _DAT_112ff5e80 + 8);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bef3e4);
        (*pcVar3)();
      }
      goto code_r0x000107c61434;
    }
    uVar5 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff5ea0);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112ff5e90);
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  param_1[3] = 0;
  *(char *)(param_1 + 4) = cVar2;
  lVar4 = puVar1[1];
  uVar6 = *puVar1;
  param_1[6] = puVar1[1];
  param_1[5] = uVar6;
  func_0x000107c61434();
code_r0x000107c61434:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar4);
  return;
}



/* Entry: 103bef3e8; end: 103bef427;  */

void FUN_103bef3e8(void)

{
  func_0x000107c61168(&PTR_PTR_1129432b8);
  return;
}



/* Entry: 103bef428; end: 103bef58f;  */

int FUN_103bef428(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bef4a4;
        goto LAB_103bef488;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bef488:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103bef4a4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bef590; end: 103bef5cf;  */

void FUN_103bef590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63a9c;
  func_0x000107c61520(&UNK_10dc63a9c,&UNK_1106e6c20);
  puRam0000000112ff5ef8 = puVar1;
  return;
}



/* Entry: 103bef5d0; end: 103bef5d3; -[SCCalendarEventTiming copyWithZone:] */

void FUN_103bef5d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bef5d4; end: 103bef5db; -[SCCalendarEventData copyWithZone:] */

void FUN_103bef5d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bef5dc; end: 103bef79b;  */

long FUN_103bef5dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103bef79c; end: 103bef7ab; -[PreviewFilterLoggingServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5f00));
  return;
}



/* Entry: 103bef7ac; end: 103bef7bb; -[PreviewFilterLoggingServices loggingInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5f08));
  return;
}



/* Entry: 103bef7bc; end: 103bef883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef7bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f08) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bef884; end: 103bef8e3; -[PreviewFilterLoggingServices init] */

void FUN_103bef884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFilterLoggingServices.PreviewFilterLoggingServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bef8b0);
  (*pcVar1)();
}



/* Entry: 103bef8e4; end: 103bef91b; -[PreviewFilterLoggingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bef900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bef904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5f00));
  return;
}



/* Entry: 103bef91c; end: 103bef93b;  */

void FUN_103bef91c(void)

{
  func_0x000107c61168(&PTR_PTR_112943460);
  return;
}



/* Entry: 103bef93c; end: 103bef987; -[SCPreviewFilterVenueLoggingParameters venueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef93c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5f38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5f38))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bef988; end: 103bef997; -[SCPreviewFilterVenueLoggingParameters isVenueFromSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bef988(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff5f40);
}



/* Entry: 103bef998; end: 103bef9a7; -[SCPreviewFilterVenueLoggingParameters venueDistanceFromSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bef998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff5f48);
}



/* Entry: 103bef9a8; end: 103bef9b7; -[SCPreviewFilterVenueLoggingParameters selectedVenueIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bef9a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff5f50);
}



/* Entry: 103bef9b8; end: 103befa53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bef9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5f38);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff5f40) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f50) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103befa54; end: 103befaf7; -[SCPreviewFilterVenueLoggingParameters initWithVenueId:isVenueFromSearch:venueDistanceFromSnap:selectedVenueIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befa54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff5f38);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined1 *)(param_2 + _DAT_112ff5f40) = param_5;
  *(undefined8 *)(param_2 + _DAT_112ff5f48) = param_1;
  *(undefined8 *)(param_2 + _DAT_112ff5f50) = param_6;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103befaf8; end: 103befb77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befaf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5f38);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff5f40) = *(undefined1 *)(param_1 + 2);
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f48) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f50) = param_1[4];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103befb78; end: 103befb7b; -[SCPreviewFilterVenueLoggingParameters copyWithZone:] */

void FUN_103befb78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103befb7c; end: 103befb97; -[SCPreviewFilterVenueLoggingParameters description] */

void FUN_103befb7c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103befb98; end: 103befc13; -[SCPreviewFilterVenueLoggingParameters init] */

void FUN_103befb98(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PreviewFilterLoggingServices/PreviewFilterVenueLoggingParametersWrapper.swift"
                      ,0x4d,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103befbe0);
  (*pcVar1)();
}



/* Entry: 103befc14; end: 103befc27; -[SCPreviewFilterVenueLoggingParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befc14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff5f38 + 8))
  ;
  return;
}



/* Entry: 103befc28; end: 103befc47;  */

void FUN_103befc28(void)

{
  func_0x000107c61168(&PTR_PTR_112943528);
  return;
}



/* Entry: 103befc48; end: 103befcc7;  */

void FUN_103befc48(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106e6e28;
  if (lRam0000000112ff5f80 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ff5f80 = param_1;
  }
  return;
}



/* Entry: 103befcc8; end: 103befcd7; -[SCGenAIFeatureActionEvent actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103befcc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff5f98);
}



/* Entry: 103befcd8; end: 103befce3; -[SCGenAIFeatureActionEvent snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befcd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5fa0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5fa0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103befce4; end: 103befcef; -[SCGenAIFeatureActionEvent storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befce4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5fa8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5fa8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103befcf0; end: 103befd47;  */

void FUN_103befcf0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103befd48; end: 103befd53; -[SCGenAIFeatureActionEvent chatRecipientIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befd48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff5fb0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103befd54; end: 103befd5f; -[SCGenAIFeatureActionEvent chatGroupIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befd54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff5fb8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103befd60; end: 103befdaf;  */

void FUN_103befd60(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103befdb0; end: 103befdbf; -[SCGenAIFeatureActionEvent params] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5fc0));
  return;
}



/* Entry: 103befdc0; end: 103befe8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f98) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5fa0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5fa8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fb0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fb8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fc0) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103befe8c; end: 103beff2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103befe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ff5f98) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5fa0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5fa8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fb0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fb8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5fc0) = param_8;
  func_0x000103beff0c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103beff2c; end: 103bf0083; -[SCGenAIFeatureActionEvent initWithActionType:snapId:storyId:chatRecipientIds:chatGroupIds:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103beff2c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  if (param_4 == 0) {
    param_4 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  if (param_6 != 0) {
    func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  }
  lVar3 = param_7;
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_7 = 0;
    lStack_68 = param_8;
  }
  else {
    func_0x000107c5fc54(param_7,PTR___sSSN_11034da80);
    func_0x000107c61170();
    lStack_68 = lVar3;
  }
  *(undefined8 *)(param_1 + _DAT_112ff5f98) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112ff5fa0);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff5fa8);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_112ff5fb0) = param_6;
  *(long *)(param_1 + _DAT_112ff5fb8) = param_7;
  *(long *)(param_1 + _DAT_112ff5fc0) = param_8;
  func_0x000103beff0c();
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf0084; end: 103bf013b;  */

undefined8
FUN_103bf0084(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 unaff_x20;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c6142c(param_5);
  }
  func_0x000107c4552c();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 103bf013c; end: 103bf01bf; -[SCGenAIFeatureActionEvent initWithActionType:snapId:storyId:] */

void FUN_103bf013c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  FUN_103bf0084(param_3,param_4,uVar1,param_5,param_2);
  return;
}



/* Entry: 103bf01c0; end: 103bf021b; -[SCGenAIFeatureActionEvent init] */

void FUN_103bf01c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIAnalyticsServices.GenAIFeatureActionEvent",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bf01ec);
  (*pcVar1)();
}



/* Entry: 103bf021c; end: 103bf028b; -[SCGenAIFeatureActionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf021c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5fa0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5fa8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5fb0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5fc0));
  return;
}


