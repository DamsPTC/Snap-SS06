/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004c3b80; end: 004c3cf7;  */

void FUN_004c3b80(long param_1)

{
  if (param_1 == 0) {
    func_0x004c60f8();
  }
  else {
    func_0x004c6118();
  }
  func_0x004c6050(&UNK_009f1208);
  *(undefined **)(param_1 + 0x10) = &DAT_00b69408;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 004c3cf8; end: 004c3d03;  */

void FUN_004c3cf8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,0x4bb960);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,0x4bb960);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 004c3d04; end: 004c3de7;  */

void FUN_004c3d04(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x38;
    __Znwm();
  }
  else {
    func_0x005510c4(param_1,0x38);
  }
  func_0x004c6050(&UNK_00a00100);
  *(undefined **)(param_1 + 0x10) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x18) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 004c3de8; end: 004c3e13;  */

undefined1 * FUN_004c3de8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_004c3e14();
  return param_1;
}



/* Entry: 004c3e14; end: 004c3e27;  */

void FUN_004c3e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 004c3e28; end: 004c3fb3;  */

void FUN_004c3e28(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x28;
    __Znwm();
  }
  else {
    func_0x005510c4(param_1,0x28);
  }
  func_0x004c6050(&UNK_009f9968);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 004c3fb4; end: 004c3fcb;  */

void FUN_004c3fb4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c3fcc; end: 004c401f;  */

void FUN_004c3fcc(undefined8 *param_1,long param_2)

{
  func_0x004c5fd8();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x004c4060();
  func_0x004c4020();
  return;
}



/* Entry: 004c4020; end: 004c410b;  */

void FUN_004c4020(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x004c420c(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 004c410c; end: 004c41d7;  */

void FUN_004c410c(long *param_1,ulong param_2)

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
    FUN_004c41d8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_004c41f0(plVar6);
    FUN_004c41d8(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x004c64f4();
      func_0x004c64e0();
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
            func_0x004c61f8();
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



/* Entry: 004c41d8; end: 004c41ef;  */

void FUN_004c41d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c41f0; end: 004c423f;  */

void FUN_004c41f0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  FUN_0040cee8();
  func_0x004c4224();
  return;
}



/* Entry: 004c4240; end: 004c4407;  */

undefined1  [16] FUN_004c4240(long *param_1,int *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long lVar5;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar6;
  ulong extraout_x9;
  long *plVar7;
  ulong extraout_x9_00;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    func_0x004c64c8();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar4 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x23 * 8);
    uVar4 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_004c42e4;
          uVar6 = plVar9[1];
          if (uVar6 != uVar8) break;
          if ((int)plVar9[2] == iVar1) {
            uVar3 = 0;
            goto LAB_004c43dc;
          }
        }
        if ((uVar10 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar10 <= uVar6) {
          func_0x004c64bc();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_004c42e4:
  func_0x004c6534(aplStack_58);
  FUN_004c4408();
  func_0x004c6514();
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)extraout_x8_01)) {
    func_0x004c6384();
    uVar2 = uVar10 == 3;
    func_0x004c6000();
    func_0x004c4060(param_1);
    uVar10 = param_1[1];
    func_0x004c64c8();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_02 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar4 * uVar10;
      }
    }
  }
  plVar9 = aplStack_58[0];
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
    *(long **)(lVar5 + unaff_x23 * 8) = plVar7;
    if (*aplStack_58[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        func_0x004c64bc();
        lVar5 = extraout_x8_03;
        uVar8 = extraout_x9_00;
      }
      *(long **)(lVar5 + uVar8 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  func_0x004c6514();
  param_1[3] = extraout_x8_04;
  func_0x004c4488(aplStack_58);
  uVar3 = 1;
LAB_004c43dc:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar9;
  return auVar11;
}



/* Entry: 004c4408; end: 004c445f;  */

void FUN_004c4408(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x004c6034();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_004c4460(param_2 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 004c4460; end: 004c44ab;  */

undefined4 * FUN_004c4460(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 004c44ac; end: 004c44c3;  */

void FUN_004c44ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 004c44c4; end: 004c4503;  */

void FUN_004c44c4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 004c4504; end: 004c4507;  */

void FUN_004c4504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edae0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4508; end: 004c451b;  */

void FUN_004c4508(void)

{
  func_0x004c4598();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c451c; end: 004c45a3;  */

long FUN_004c451c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x004c3f58(lVar1,*(undefined8 *)(param_1 + 0x28));
  FUN_004c3fb4(lVar1,0);
  return lVar1;
}



/* Entry: 004c45a4; end: 004c45c7;  */

void FUN_004c45a4(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c45c8; end: 004c45cb;  */

void FUN_004c45c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edb30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c45cc; end: 004c45df;  */

void FUN_004c45cc(void)

{
  func_0x004c4600();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c45e0; end: 004c460f;  */

void FUN_004c45e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c4610; end: 004c4623;  */

void FUN_004c4610(void)

{
  func_0x004c462c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c4624; end: 004c463b;  */

void FUN_004c4624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c463c; end: 004c464f;  */

void FUN_004c463c(void)

{
  func_0x004c4664();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c4650; end: 004c466f;  */

void FUN_004c4650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c4670; end: 004c4693;  */

void FUN_004c4670(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c4694; end: 004c4697;  */

void FUN_004c4694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edcc8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4698; end: 004c46ab;  */

void FUN_004c4698(void)

{
  func_0x004c46e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c46ac; end: 004c46ef;  */

void FUN_004c46ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c46f0; end: 004c4713;  */

void FUN_004c46f0(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c4714; end: 004c4717;  */

void FUN_004c4714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edd90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4718; end: 004c472b;  */

void FUN_004c4718(void)

{
  FUN_004c4768();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c472c; end: 004c4747;  */

void FUN_004c472c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c4748; end: 004c4767;  */

long FUN_004c4748(long param_1,long param_2)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return param_1 + param_2;
}



/* Entry: 004c4768; end: 004c4773;  */

void FUN_004c4768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edd90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4774; end: 004c4797;  */

void FUN_004c4774(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c4798; end: 004c479b;  */

void FUN_004c4798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ede48;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c479c; end: 004c47af;  */

void FUN_004c479c(void)

{
  FUN_004c4848();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c47b0; end: 004c47b7;  */

void FUN_004c47b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c47b8; end: 004c4847;  */

void FUN_004c47b8(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c4848; end: 004c4853;  */

void FUN_004c4848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ede48;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4854; end: 004c492b;  */

void FUN_004c4854(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 004c492c; end: 004c492f;  */

void FUN_004c492c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ede98;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4930; end: 004c4943;  */

void FUN_004c4930(void)

{
  func_0x004c494c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c4944; end: 004c4957;  */

void FUN_004c4944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c4958; end: 004c497b;  */

void FUN_004c4958(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c497c; end: 004c497f;  */

void FUN_004c497c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edee8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c4980; end: 004c4993;  */

void FUN_004c4980(void)

{
  FUN_004c514c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c4994; end: 004c499f;  */

void FUN_004c4994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c49a0; end: 004c49b3;  */

void FUN_004c49a0(void)

{
  FUN_004c4ad0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c49b4; end: 004c4a3f;  */

void FUN_004c49b4(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  uStack_24 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  FUN_004c4b2c(puVar1,&uStack_24);
  *puVar1 = 0;
  if (param_2 - 4U < 0xe) {
    uStack_28 = *(undefined4 *)(&UNK_00808b74 + (ulong)(param_2 - 4U) * 4);
  }
  else {
    uStack_28 = 3;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  FUN_004c4b2c(puVar1,&uStack_28);
  *puVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 0x40);
  return;
}



/* Entry: 004c4a40; end: 004c4acf;  */

void FUN_004c4a40(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  long unaff_x19;
  
  func_0x004c5fac();
  func_0x004c6028();
  (*extraout_x8)();
  if (*(char *)(param_3 + 8) == '\r') {
    return;
  }
  __ZNSt3__15mutex4lockEv(unaff_x19 + 0x40);
  FUN_004c4eb0();
  FUN_004c4eb0();
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x40);
  return;
}



/* Entry: 004c4ad0; end: 004c4b2b;  */

undefined8 * FUN_004c4ad0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_009edf38;
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_004c5128(param_1 + 1);
  return param_1;
}



/* Entry: 004c4b2c; end: 004c4d13;  */

long FUN_004c4b2c(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  
  iVar2 = *param_2;
  uVar10 = (ulong)iVar2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_004c4be0;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) break;
          if ((int)plVar8[2] == iVar2) goto LAB_004c4ce8;
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar3 * uVar9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_004c4be0:
  plVar1 = param_1 + 2;
  plVar8 = param_1;
  func_0x004c6424();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(int *)(plVar8 + 2) = iVar2;
  *(undefined4 *)((long)plVar8 + 0x14) = 0;
  func_0x004c6514();
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)extraout_x8)) {
    func_0x004c6000(uVar9 << 1);
    FUN_004c4d14(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar8 = *plVar1;
    *plVar1 = (long)plVar8;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar1;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar5 + uVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  func_0x004c6514();
  param_1[3] = extraout_x8_00;
  func_0x004c6258();
LAB_004c4ce8:
  return (long)plVar8 + 0x14;
}



/* Entry: 004c4d14; end: 004c4e6b;  */

void FUN_004c4d14(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1;
  plVar3 = param_2;
  if ((undefined1 *)((long)param_2 - 1U) == (undefined1 *)0x0) {
    param_2 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)plVar7 & (ulong)((long)plVar7 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x004c6218();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_004c4e6c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_004c4e6c(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar4 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x004c64f4();
      func_0x004c64e0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9;
      uVar5 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
        plVar6 = (long *)plVar4[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            func_0x004c61f8();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_00;
            uVar5 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  FUN_0040cee8();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c4e6c; end: 004c4e83;  */

void FUN_004c4e6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c4e84; end: 004c4eaf;  */

long * FUN_004c4e84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004c4eb0; end: 004c5127;  */

void FUN_004c4eb0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long lVar6;
  long extraout_x8_01;
  long *plVar7;
  ulong extraout_x9;
  long *plVar8;
  ulong extraout_x9_00;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  
  uVar11 = param_1[4];
  uVar12 = param_2 & 0xffffffff;
  iVar10 = (int)param_2;
  plVar3 = param_1;
  if (uVar11 != 0) {
    if (param_1[6] != 0) {
      uVar4 = uVar11 - 1;
      uVar5 = 0;
      if (uVar11 <= uVar12) {
        uVar5 = uVar11;
      }
      in_ZR = (uVar11 & uVar4) == 0;
      uVar5 = uVar12 - uVar5;
      if ((bool)in_ZR) {
        uVar5 = (int)uVar11 + 7 & uVar12;
      }
      plVar7 = *(long **)(param_1[3] + uVar5 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_004c4f60;
            uVar9 = plVar7[1];
            if (uVar9 != uVar12) break;
            in_ZR = false;
            if (*(int *)(plVar7 + 2) == iVar10) {
              iVar10 = *(int *)((long)plVar7 + 0x14) + 1;
              *(int *)((long)plVar7 + 0x14) = iVar10;
              goto LAB_004c50e0;
            }
          }
          if ((uVar11 & uVar4) == 0) {
            uVar9 = uVar9 & uVar4;
          }
          else if (uVar11 <= uVar9) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar9 / uVar11;
            }
            uVar9 = uVar9 - uVar1 * uVar11;
          }
          in_ZR = uVar9 == uVar5;
        } while ((bool)in_ZR);
      }
    }
LAB_004c4f60:
    func_0x004c64c8();
    if ((bool)in_ZR) {
      unaff_x24 = (int)uVar11 + 7 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar5 * uVar11;
      }
    }
    plVar7 = *(long **)(param_1[3] + unaff_x24 * 8);
    uVar5 = extraout_x8;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_004c4fe0;
          uVar4 = plVar7[1];
          if (uVar4 != uVar12) break;
          if ((int)plVar7[2] == iVar10) goto LAB_004c50dc;
        }
        if ((uVar11 & uVar5) == 0) {
          uVar4 = uVar4 & uVar5;
        }
        else if (uVar11 <= uVar4) {
          func_0x004c64bc();
          uVar5 = extraout_x8_00;
          uVar4 = extraout_x9;
        }
      } while (uVar4 == unaff_x24);
    }
  }
LAB_004c4fe0:
  plVar7 = param_1 + 5;
  func_0x004c6424();
  *plVar3 = 0;
  plVar3[1] = uVar12;
  *(int *)(plVar3 + 2) = iVar10;
  *(undefined4 *)((long)plVar3 + 0x14) = 1;
  if ((uVar11 == 0) || (*(float *)(param_1 + 7) * (float)uVar11 < (float)(param_1[6] + 1))) {
    func_0x004c6384();
    uVar2 = uVar11 == 3;
    func_0x004c6000();
    FUN_004c4d14(param_1 + 3);
    uVar11 = param_1[4];
    func_0x004c64c8();
    if ((bool)uVar2) {
      unaff_x24 = (int)uVar11 + 7 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar5 * uVar11;
      }
    }
  }
  lVar6 = param_1[3];
  plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar7;
    if (*plVar3 != 0) {
      uVar12 = *(ulong *)(*plVar3 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        func_0x004c64bc();
        lVar6 = extraout_x8_01;
        uVar12 = extraout_x9_00;
      }
      *(long **)(lVar6 + uVar12 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  param_1[6] = param_1[6] + 1;
  func_0x004c6258();
  plVar7 = plVar3;
LAB_004c50dc:
  iVar10 = *(int *)((long)plVar7 + 0x14);
LAB_004c50e0:
  (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2,iVar10);
  return;
}



/* Entry: 004c5128; end: 004c514b;  */

void FUN_004c5128(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c514c; end: 004c5157;  */

void FUN_004c514c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edee8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c5158; end: 004c517b;  */

void FUN_004c5158(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c517c; end: 004c517f;  */

void FUN_004c517c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edf90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c5180; end: 004c5193;  */

void FUN_004c5180(void)

{
  FUN_004c520c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5194; end: 004c51d3;  */

void FUN_004c5194(long param_1)

{
  FUN_004c5128(param_1 + 0xa8);
  FUN_004c51d8(param_1 + 0xa0);
  FUN_0045dd30(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1 + 0x18);
  return;
}



/* Entry: 004c51d4; end: 004c51d7;  */

void FUN_004c51d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c51d8; end: 004c520b;  */

long * FUN_004c51d8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 004c520c; end: 004c521b;  */

void FUN_004c520c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009edf90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c521c; end: 004c522f;  */

void FUN_004c521c(void)

{
  func_0x004c5238();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5230; end: 004c5247;  */

void FUN_004c5230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5248; end: 004c525b;  */

void FUN_004c5248(void)

{
  func_0x004c5264();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c525c; end: 004c5273;  */

void FUN_004c525c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5274; end: 004c5287;  */

void FUN_004c5274(void)

{
  func_0x004c5290();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5288; end: 004c529f;  */

void FUN_004c5288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c52a0; end: 004c52b3;  */

void FUN_004c52a0(void)

{
  func_0x004c52bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c52b4; end: 004c52cb;  */

void FUN_004c52b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c52cc; end: 004c52df;  */

void FUN_004c52cc(void)

{
  func_0x004c52e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c52e0; end: 004c52f7;  */

void FUN_004c52e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c52f8; end: 004c530b;  */

void FUN_004c52f8(void)

{
  func_0x004c5314();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c530c; end: 004c531f;  */

void FUN_004c530c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5320; end: 004c5367;  */

void FUN_004c5320(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c5368; end: 004c536b;  */

void FUN_004c5368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee1c0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c536c; end: 004c537f;  */

void FUN_004c536c(void)

{
  func_0x004c5388();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5380; end: 004c5393;  */

void FUN_004c5380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5394; end: 004c54fb;  */

void FUN_004c5394(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c54fc; end: 004c54ff;  */

void FUN_004c54fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee210;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c5500; end: 004c5513;  */

void FUN_004c5500(void)

{
  FUN_004c5610();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5514; end: 004c551f;  */

void FUN_004c5514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5520; end: 004c5533;  */

void FUN_004c5520(void)

{
  FUN_004c55d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5534; end: 004c554b;  */

void FUN_004c5534(void)

{
  return;
}



/* Entry: 004c554c; end: 004c555f;  */

void FUN_004c554c(void)

{
  FUN_004c559c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5560; end: 004c5563;  */

void FUN_004c5560(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x004c647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(in_x3 + 0x10))();
  return;
}



/* Entry: 004c5564; end: 004c5597;  */

void FUN_004c5564(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x004c6100(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 004c5598; end: 004c559b;  */

void FUN_004c5598(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004c559c; end: 004c55d7;  */

undefined8 * FUN_004c559c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009ee308;
  func_0x004c6100(param_1[8]);
  func_0x004c6100(param_1[2]);
  return param_1;
}



/* Entry: 004c55d8; end: 004c560f;  */

undefined8 * FUN_004c55d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009ee260;
  func_0x004bea94(param_1[0xd]);
  *param_1 = &PTR_DAT_009ee308;
  func_0x004c6100(param_1[8]);
  func_0x004c6100(param_1[2]);
  return param_1;
}



/* Entry: 004c5610; end: 004c561b;  */

void FUN_004c5610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee210;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c561c; end: 004c5773;  */

void FUN_004c561c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  long *plVar3;
  undefined ***pppuVar4;
  code *extraout_x8;
  long lVar5;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar5 = *(long *)(param_2 + 0x10);
  FUN_006ad008();
  ppuStack_a8 = &PTR_FUN_009efec0;
  uStack_a0 = 0;
  ppuStack_90 = (undefined **)0x0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  FUN_004c29bc(&ppuStack_a8);
  FUN_004f0bd4();
  uStack_88 = *(undefined8 *)(lVar5 + 0x20);
  plVar3 = *(long **)(lVar5 + 0x40);
  uStack_80 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,lVar5,&ppuStack_a8);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x004c6508(*(undefined8 *)(lVar5 + 0x48));
      (*extraout_x8)();
    }
    else {
      pppuVar4 = &ppuStack_a8;
      FUN_004d31f8(pppuVar4);
      ppuVar1 = &PTR_PTR_00b11808;
      if (ppuStack_90 != (undefined **)0x0) {
        ppuVar1 = ppuStack_90;
      }
      FUN_004c2204(*(undefined8 *)(lVar5 + 0x48),1,pppuVar4,*(undefined4 *)(ppuVar1 + 4),0xffffffff)
      ;
    }
    FUN_004d3084(&ppuStack_a8);
    return;
  }
  func_0x004686dc();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x4c5700);
  (*pcVar2)();
}


