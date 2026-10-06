/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa8c9cc; end: 10aa8c9d3;  */

undefined4 FUN_10aa8c9cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aa8c9d4; end: 10aa8ca7b;  */

void FUN_10aa8c9d4(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  *(undefined ***)(param_1 + -0x40) = &PTR____cxa_pure_virtual_110ba1b68;
  if (*(long *)(param_1 + -0x38) != 0) {
    *(long *)(param_1 + -0x30) = *(long *)(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8ca7c; end: 10aa8ca83;  */

undefined4 FUN_10aa8ca7c(long param_1)

{
  return *(undefined4 *)(param_1 + -0x20);
}



/* Entry: 10aa8ca84; end: 10aa8cb23;  */

void FUN_10aa8ca84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-10] = &PTR____cxa_pure_virtual_110ba1b68;
  if (param_1[-9] != 0) {
    param_1[-8] = param_1[-9];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8cb24; end: 10aa8cb2f;  */

undefined4 FUN_10aa8cb24(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20);
}



/* Entry: 10aa8cb30; end: 10aa8cc1b;  */

long FUN_10aa8cb30(long param_1)

{
  FUN_10a493e78(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10aa8cc1c; end: 10aa8cc27;  */

undefined4 FUN_10aa8cc1c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20);
}



/* Entry: 10aa8cc28; end: 10aa8cc9b;  */

undefined8 * FUN_10aa8cc28(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a493e78(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8cc9c; end: 10aa8ce23;  */

float FUN_10aa8cc9c(float param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  iVar6 = (int)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  func_0x00010aaa6084();
  lVar7 = *(long *)(param_2 + 8);
  uVar8 = (*(long *)(param_2 + 0x10) - lVar7 >> 2) * -0x3333333333333333;
  if (((ulong)(long)iVar5 <= uVar8 && uVar8 - (long)iVar5 != 0) &&
     ((ulong)(long)iVar6 <= uVar8 && uVar8 - (long)iVar6 != 0)) {
    fVar10 = *(float *)(lVar7 + (long)iVar5 * 0x14);
    fVar11 = *(float *)(lVar7 + (long)iVar6 * 0x14);
    fVar15 = 1.0;
    if (1.1920929e-07 <= ABS(fVar10 - fVar11)) {
      fVar15 = (param_1 - fVar10) / (fVar11 - fVar10);
    }
    fVar10 = 0.0;
    if (0.0 <= fVar15) {
      fVar10 = fVar15;
    }
    fVar11 = 1.0;
    if (fVar10 <= 1.0) {
      fVar11 = fVar10;
    }
    lVar9 = lVar7 + (long)iVar5 * 0x14;
    lVar7 = lVar7 + (long)iVar6 * 0x14;
    pauVar1 = (undefined1 (*) [12])(lVar7 + 4);
    uVar2 = *(undefined8 *)(lVar7 + 0xc);
    uVar16 = *(undefined8 *)*pauVar1;
    fVar15 = (float)uVar16;
    uVar20 = *(undefined8 *)(lVar9 + 0xc);
    uVar19 = *(undefined8 *)(lVar9 + 4);
    fVar18 = (float)uVar19;
    fVar10 = fVar15 * fVar18;
    fVar12 = (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
    fVar13 = (float)uVar2 * (float)uVar20;
    fVar14 = (float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
    auVar17._4_4_ = fVar12;
    auVar17._0_4_ = fVar10;
    auVar17._8_4_ = fVar13;
    auVar17._12_4_ = fVar14;
    auVar3._4_4_ = fVar12;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fVar13;
    auVar3._12_4_ = fVar14;
    auVar17 = NEON_ext(auVar17,auVar3,8,1);
    uVar16 = NEON_rev64(auVar17._0_8_,4);
    fVar12 = fVar10 + (float)uVar16 + fVar12 + (float)((ulong)uVar16 >> 0x20);
    fVar15 = -fVar15;
    fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ SUB124(*pauVar1,0)) & ~-(uint)(fVar12 < 0.0));
    fVar10 = -fVar12;
    if (0.0 <= fVar12) {
      fVar10 = fVar12;
    }
    if (fVar10 <= 0.9999999) {
      _acosf();
      fVar12 = (1.0 - fVar11) * fVar10;
      _sinf();
      fVar11 = fVar11 * fVar10;
      _sinf();
      _sinf(fVar10);
      fVar10 = (fVar18 * fVar12 + fVar15 * fVar11) / fVar10;
    }
    else {
      fVar10 = fVar15 * fVar11 + fVar18 * (1.0 - fVar11);
    }
    return fVar10;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa8ce24);
  (*pcVar4)();
}



/* Entry: 10aa8ce24; end: 10aa8cec3;  */

undefined8 * FUN_10aa8ce24(undefined8 *param_1)

{
  param_1[0xb] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xc);
  *param_1 = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa8cec4; end: 10aa8cecb;  */

undefined4 FUN_10aa8cec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aa8cecc; end: 10aa8cf73;  */

void FUN_10aa8cecc(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  *(undefined ***)(param_1 + -0x48) = &PTR____cxa_pure_virtual_110ba1b98;
  if (*(long *)(param_1 + -0x40) != 0) {
    *(long *)(param_1 + -0x38) = *(long *)(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8cf74; end: 10aa8cf7b;  */

undefined4 FUN_10aa8cf74(long param_1)

{
  return *(undefined4 *)(param_1 + -0x28);
}



/* Entry: 10aa8cf7c; end: 10aa8d01b;  */

void FUN_10aa8cf7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-0xb] = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[-10] != 0) {
    param_1[-9] = param_1[-10];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8d01c; end: 10aa8d027;  */

undefined4 FUN_10aa8d01c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x20);
}



/* Entry: 10aa8d028; end: 10aa8d113;  */

long FUN_10aa8d028(long param_1)

{
  FUN_10a493e78(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10aa8d114; end: 10aa8d11f;  */

undefined4 FUN_10aa8d114(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x20);
}



/* Entry: 10aa8d120; end: 10aa8d233;  */

undefined8 * FUN_10aa8d120(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a493e78(param_1 + 7);
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8d234; end: 10aa8d23b;  */

undefined4 FUN_10aa8d234(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aa8d23c; end: 10aa8d2e3;  */

void FUN_10aa8d23c(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  *(undefined ***)(param_1 + -0x38) = &PTR____cxa_pure_virtual_110ba1bc8;
  if (*(long *)(param_1 + -0x30) != 0) {
    *(long *)(param_1 + -0x28) = *(long *)(param_1 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8d2e4; end: 10aa8d2eb;  */

undefined4 FUN_10aa8d2e4(long param_1)

{
  return *(undefined4 *)(param_1 + -0x18);
}



/* Entry: 10aa8d2ec; end: 10aa8d42b;  */

void FUN_10aa8d2ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-9] = &PTR____cxa_pure_virtual_110ba1bc8;
  if (param_1[-8] != 0) {
    param_1[-7] = param_1[-8];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8d42c; end: 10aa8d433;  */

undefined4 FUN_10aa8d42c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aa8d434; end: 10aa8d4db;  */

void FUN_10aa8d434(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  *(undefined ***)(param_1 + -0x38) = &PTR____cxa_pure_virtual_110c42b70;
  if (*(long *)(param_1 + -0x30) != 0) {
    *(long *)(param_1 + -0x28) = *(long *)(param_1 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8d4dc; end: 10aa8d4e3;  */

undefined4 FUN_10aa8d4dc(long param_1)

{
  return *(undefined4 *)(param_1 + -0x18);
}



/* Entry: 10aa8d4e4; end: 10aa8d5eb;  */

void FUN_10aa8d4e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-9] = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[-8] != 0) {
    param_1[-7] = param_1[-8];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aa8d5ec; end: 10aa8d60b;  */

undefined8 FUN_10aa8d5ec(void)

{
  return 0;
}



/* Entry: 10aa8d60c; end: 10aa8d6b7;  */

void FUN_10aa8d60c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10aa8d6b8; end: 10aa8d737;  */

void FUN_10aa8d6b8(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x78))(&lStack_38,param_2,&PTR_DAT_110c408d0);
  FUN_10a0ca9fc(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa8d738; end: 10aa8d773;  */

void FUN_10aa8d738(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))(param_2,&PTR_DAT_110c408d0,param_1 + 0xe8);
  return;
}



/* Entry: 10aa8d774; end: 10aa8db67;  */

void FUN_10aa8d774(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x130;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c40ab8;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c40900;
    plVar3[5] = (long)&PTR_DAT_110c409b0;
    plVar3[10] = (long)&PTR_DAT_110c40a08;
    plVar3[0x1f] = (long)&PTR_FUN_110c40a28;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaac950(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaac5fc(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8da78;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x118;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c40900;
    plVar3[2] = (long)&PTR_DAT_110c409b0;
    plVar3[7] = (long)&PTR_DAT_110c40a08;
    plVar3[0x1c] = (long)&PTR_FUN_110c40a28;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c40a58;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaac950(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaac5fc(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8da78;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8da78:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa8db68; end: 10aa8db77;  */

undefined4 FUN_10aa8db68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa8db78; end: 10aa8dd67;  */

undefined8 * FUN_10aa8db78(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110ba1bc8;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa8dd68; end: 10aa8dde7;  */

void FUN_10aa8dd68(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x80))(&lStack_38,param_2,&PTR_DAT_110c40af8);
  func_0x00010aa8e660(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa8dde8; end: 10aa8de23;  */

void FUN_10aa8dde8(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x158))(param_2,&PTR_DAT_110c40af8,param_1 + 0xe8);
  return;
}



/* Entry: 10aa8de24; end: 10aa8e21f;  */

void FUN_10aa8de24(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x138;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c40ce0;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    *(undefined4 *)(plVar3 + 0x26) = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c40b28;
    plVar3[5] = (long)&PTR_DAT_110c40bd8;
    plVar3[10] = (long)&PTR_DAT_110c40c30;
    plVar3[0x1f] = (long)&PTR_FUN_110c40c50;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaacedc(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaacb88(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8e130;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x120;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    *(undefined4 *)(plVar3 + 0x23) = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c40b28;
    plVar3[2] = (long)&PTR_DAT_110c40bd8;
    plVar3[7] = (long)&PTR_DAT_110c40c30;
    plVar3[0x1c] = (long)&PTR_FUN_110c40c50;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c40c80;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaacedc(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaacb88(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8e130;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8e130:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa8e220; end: 10aa8e22f;  */

undefined4 FUN_10aa8e220(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa8e230; end: 10aa8e327;  */

undefined8 * FUN_10aa8e230(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110c42bb8;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa8e328; end: 10aa8e5e3;  */

undefined8 * FUN_10aa8e328(float param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aa8e5d8:
    puVar6 = (undefined8 *)&UNK_10f68d5a4;
    FUN_10a00946c();
    *puVar6 = &PTR____cxa_pure_virtual_110c42bb8;
    if (puVar6[1] != 0) {
      puVar6[2] = puVar6[1];
      __ZdlPv();
    }
    puVar6[-0x1c] = &PTR_FUN_110c3ec18;
    puVar6[-0x1a] = &PTR_DAT_110c3ecb8;
    puVar6[-0x15] = &PTR_DAT_110c3ed10;
    func_0x00010aa92258(puVar6 + -2);
    if (puVar6[-3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__15mutexD1Ev(puVar6 + -0xc);
    if (puVar6[-0xd] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar6 + -0x71) < '\0') {
      __ZdlPv(puVar6[-0x11]);
    }
    if (puVar6[-0x16] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar6[-0x1a] = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar6 + -0x19);
    return puVar6 + -0x1c;
  }
  pfVar3 = (float *)param_2[1];
  lVar4 = param_2[2];
  lVar8 = lVar4 - (long)pfVar3;
  uVar14 = (lVar8 >> 2) * -0x5555555555555555;
  if (uVar14 < 2) goto LAB_10aa8e5d8;
  puVar6 = param_2;
  if (lVar8 == 0x18) {
    uVar12 = 0x100000000;
  }
  else {
    iVar7 = *(int *)(param_2 + 7);
    if (iVar7 == 0) {
      fVar15 = (float)uVar14;
      _logf();
      iVar7 = (int)fVar15;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      *(int *)(param_2 + 7) = iVar7;
    }
    uVar11 = *(uint *)((long)param_2 + 0x24);
    uVar12 = (ulong)uVar11;
    if (*(float *)(param_2 + 5) <= param_1) {
      uVar12 = (long)(int)uVar11 + 1;
      uVar2 = (int)uVar14 - 1;
      uVar11 = (int)uVar12 + iVar7;
      if ((int)uVar2 <= (int)uVar11) {
        uVar11 = uVar2;
      }
      uVar9 = uVar12;
      if ((int)uVar12 < (int)uVar11) {
        pfVar10 = pfVar3 + uVar12 * 3;
        lVar8 = 0;
        if (uVar12 <= uVar14) {
          lVar8 = uVar14 - uVar12;
        }
        do {
          if (lVar8 == 0) goto LAB_10aa8e5c8;
          uVar9 = uVar12;
          if (param_1 < *pfVar10) break;
          uVar1 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar1;
          uVar9 = (ulong)uVar11;
          pfVar10 = pfVar10 + 3;
          lVar8 = lVar8 + -1;
        } while (uVar11 != uVar1);
      }
      uVar11 = (uint)uVar9;
      uVar12 = (ulong)uVar2;
      if (uVar11 != uVar2) {
        if (uVar14 < (ulong)(long)(int)uVar11 || uVar14 - (long)(int)uVar11 == 0)
        goto LAB_10aa8e5c8;
        uVar12 = uVar9;
        if (pfVar3[(long)(int)uVar11 * 3] <= param_1) goto LAB_10aa8e494;
      }
    }
    else {
      uVar2 = uVar11 - iVar7 & ((int)(uVar11 - iVar7) >> 0x1f ^ 0xffffffffU);
      uVar9 = uVar12;
      if ((int)uVar2 < (int)uVar11) {
        pfVar10 = pfVar3 + (ulong)uVar11 * 3;
        do {
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) goto LAB_10aa8e5c8;
          uVar9 = uVar12;
        } while ((param_1 <= *pfVar10) &&
                (uVar12 = uVar12 - 1, uVar9 = (ulong)uVar2, pfVar10 = pfVar10 + -3,
                (long)(ulong)uVar2 < (long)uVar12));
      }
      iVar7 = (int)uVar9;
      if (iVar7 != 0) {
        if (uVar14 < (ulong)(long)iVar7 || uVar14 - (long)iVar7 == 0) goto LAB_10aa8e5c8;
        if (param_1 <= pfVar3[(long)iVar7 * 3]) {
LAB_10aa8e494:
          *(float *)((long)param_2 + 0x2c) = param_1;
          lVar4 = (lVar4 + -0xc) - (long)pfVar3;
          pfVar10 = pfVar3;
          if (lVar4 != 0) {
            uVar12 = (lVar4 >> 2) * -0x5555555555555555;
            do {
              uVar13 = uVar12 >> 1;
              uVar9 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
              uVar12 = uVar13;
              if (pfVar10[uVar13 * 3] <= param_1) {
                uVar12 = uVar9;
                pfVar10 = pfVar10 + uVar13 * 3 + 3;
              }
            } while (uVar12 != 0);
          }
          uVar12 = (ulong)(uint)((int)((ulong)((long)pfVar10 - (long)pfVar3) >> 2) * -0x55555555);
          goto LAB_10aa8e4fc;
        }
      }
      uVar12 = (ulong)(iVar7 + 1);
    }
LAB_10aa8e4fc:
    uVar11 = (int)uVar12 - 1;
    if (uVar14 < (ulong)(long)(int)uVar11 || uVar14 - (long)(int)uVar11 == 0) goto LAB_10aa8e5c8;
    fVar15 = pfVar3[(long)(int)uVar11 * 3];
    *(uint *)((long)param_2 + 0x24) = uVar11;
    *(float *)(param_2 + 5) = fVar15;
    uVar12 = (ulong)uVar11 | uVar12 << 0x20;
  }
  if (((ulong)(long)(int)uVar12 <= uVar14 && uVar14 - (long)(int)uVar12 != 0) &&
     ((ulong)((long)uVar12 >> 0x20) <= uVar14 && uVar14 - ((long)uVar12 >> 0x20) != 0)) {
    return puVar6;
  }
LAB_10aa8e5c8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa8e5cc);
  (*pcVar5)();
}



/* Entry: 10aa8e5e4; end: 10aa8e753;  */

undefined8 * FUN_10aa8e5e4(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110c42bb8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  param_1[-0x1c] = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return param_1 + -0x1c;
}



/* Entry: 10aa8e754; end: 10aa8e7d3;  */

void FUN_10aa8e754(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x88))(&lStack_38,param_2,&PTR_DAT_110c40d20);
  FUN_10a0cb98c(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa8e7d4; end: 10aa8e80f;  */

void FUN_10aa8e7d4(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8e80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,&PTR_DAT_110c40d20,param_1 + 0xe8);
  return;
}



/* Entry: 10aa8e810; end: 10aa8ec0b;  */

void FUN_10aa8e810(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x138;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c40f08;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x26] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c40d50;
    plVar3[5] = (long)&PTR_DAT_110c40e00;
    plVar3[10] = (long)&PTR_DAT_110c40e58;
    plVar3[0x1f] = (long)&PTR_FUN_110c40e78;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaad468(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaad114(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8eb1c;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x120;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c40d50;
    plVar3[2] = (long)&PTR_DAT_110c40e00;
    plVar3[7] = (long)&PTR_DAT_110c40e58;
    plVar3[0x1c] = (long)&PTR_FUN_110c40e78;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c40ea8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaad468(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaad114(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8eb1c;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8eb1c:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa8ec0c; end: 10aa8ec1b;  */

undefined4 FUN_10aa8ec0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa8ec1c; end: 10aa8ee0b;  */

undefined8 * FUN_10aa8ec1c(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110ba1b68;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa8ee0c; end: 10aa8ee8b;  */

void FUN_10aa8ee0c(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x90))(&lStack_38,param_2,&PTR_DAT_110c40f48);
  FUN_10aa8f728(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa8ee8c; end: 10aa8eec7;  */

void FUN_10aa8ee8c(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8eec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))(param_2,&PTR_DAT_110c40f48,param_1 + 0xe8);
  return;
}



/* Entry: 10aa8eec8; end: 10aa8f2c7;  */

void FUN_10aa8eec8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x140;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c41130;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    *(undefined8 *)((long)plVar3 + 0x134) = 0;
    *(undefined8 *)((long)plVar3 + 300) = 0;
    plVar3[3] = (long)&PTR_FUN_110c40f78;
    plVar3[5] = (long)&PTR_DAT_110c41028;
    plVar3[10] = (long)&PTR_DAT_110c41080;
    plVar3[0x1f] = (long)&PTR_FUN_110c410a0;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaad9f4(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaad6a0(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8f1d8;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x128;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    *(undefined8 *)((long)plVar3 + 0x11c) = 0;
    *(undefined8 *)((long)plVar3 + 0x114) = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c40f78;
    plVar3[2] = (long)&PTR_DAT_110c41028;
    plVar3[7] = (long)&PTR_DAT_110c41080;
    plVar3[0x1c] = (long)&PTR_FUN_110c410a0;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c410d0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaad9f4(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaad6a0(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8f1d8;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8f1d8:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa8f2c8; end: 10aa8f2d7;  */

undefined4 FUN_10aa8f2c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa8f2d8; end: 10aa8f3cf;  */

undefined8 * FUN_10aa8f2d8(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110c3fec0;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa8f3d0; end: 10aa8f6ab;  */

undefined8 * FUN_10aa8f3d0(float param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aa8f6a0:
    puVar6 = (undefined8 *)&UNK_10f68d5a4;
    FUN_10a00946c();
    *puVar6 = &PTR____cxa_pure_virtual_110c3fec0;
    if (puVar6[1] != 0) {
      puVar6[2] = puVar6[1];
      __ZdlPv();
    }
    puVar6[-0x1c] = &PTR_FUN_110c3ec18;
    puVar6[-0x1a] = &PTR_DAT_110c3ecb8;
    puVar6[-0x15] = &PTR_DAT_110c3ed10;
    func_0x00010aa92258(puVar6 + -2);
    if (puVar6[-3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__15mutexD1Ev(puVar6 + -0xc);
    if (puVar6[-0xd] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar6 + -0x71) < '\0') {
      __ZdlPv(puVar6[-0x11]);
    }
    if (puVar6[-0x16] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar6[-0x1a] = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar6 + -0x19);
    return puVar6 + -0x1c;
  }
  pfVar3 = (float *)param_2[1];
  lVar4 = param_2[2];
  lVar8 = lVar4 - (long)pfVar3;
  uVar14 = (lVar8 >> 2) * -0x3333333333333333;
  if (uVar14 < 2) goto LAB_10aa8f6a0;
  puVar6 = param_2;
  if (lVar8 == 0x28) {
    uVar12 = 0x100000000;
  }
  else {
    iVar7 = *(int *)(param_2 + 8);
    if (iVar7 == 0) {
      fVar15 = (float)uVar14;
      _logf();
      iVar7 = (int)fVar15;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      *(int *)(param_2 + 8) = iVar7;
    }
    uVar11 = *(uint *)((long)param_2 + 0x24);
    uVar12 = (ulong)uVar11;
    if (*(float *)(param_2 + 5) <= param_1) {
      uVar12 = (long)(int)uVar11 + 1;
      uVar2 = (int)uVar14 - 1;
      uVar11 = (int)uVar12 + iVar7;
      if ((int)uVar2 <= (int)uVar11) {
        uVar11 = uVar2;
      }
      uVar9 = uVar12;
      if ((int)uVar12 < (int)uVar11) {
        pfVar10 = pfVar3 + uVar12 * 5;
        lVar8 = 0;
        if (uVar12 <= uVar14) {
          lVar8 = uVar14 - uVar12;
        }
        do {
          if (lVar8 == 0) goto LAB_10aa8f690;
          uVar9 = uVar12;
          if (param_1 < *pfVar10) break;
          uVar1 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar1;
          uVar9 = (ulong)uVar11;
          pfVar10 = pfVar10 + 5;
          lVar8 = lVar8 + -1;
        } while (uVar11 != uVar1);
      }
      uVar11 = (uint)uVar9;
      uVar12 = (ulong)uVar2;
      if (uVar11 != uVar2) {
        if (uVar14 < (ulong)(long)(int)uVar11 || uVar14 - (long)(int)uVar11 == 0)
        goto LAB_10aa8f690;
        uVar12 = uVar9;
        if (pfVar3[(long)(int)uVar11 * 5] <= param_1) goto LAB_10aa8f53c;
      }
    }
    else {
      uVar2 = uVar11 - iVar7 & ((int)(uVar11 - iVar7) >> 0x1f ^ 0xffffffffU);
      uVar9 = uVar12;
      if ((int)uVar2 < (int)uVar11) {
        pfVar10 = pfVar3 + (ulong)uVar11 * 5;
        do {
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) goto LAB_10aa8f690;
          uVar9 = uVar12;
        } while ((param_1 <= *pfVar10) &&
                (uVar12 = uVar12 - 1, uVar9 = (ulong)uVar2, pfVar10 = pfVar10 + -5,
                (long)(ulong)uVar2 < (long)uVar12));
      }
      iVar7 = (int)uVar9;
      if (iVar7 != 0) {
        if (uVar14 < (ulong)(long)iVar7 || uVar14 - (long)iVar7 == 0) goto LAB_10aa8f690;
        if (param_1 <= pfVar3[(long)iVar7 * 5]) {
LAB_10aa8f53c:
          *(float *)((long)param_2 + 0x2c) = param_1;
          lVar4 = (lVar4 + -0x14) - (long)pfVar3;
          pfVar10 = pfVar3;
          if (lVar4 != 0) {
            uVar12 = (lVar4 >> 2) * -0x3333333333333333;
            do {
              uVar13 = uVar12 >> 1;
              uVar9 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
              uVar12 = uVar13;
              if (pfVar10[uVar13 * 5] <= param_1) {
                uVar12 = uVar9;
                pfVar10 = pfVar10 + uVar13 * 5 + 5;
              }
            } while (uVar12 != 0);
          }
          uVar12 = (ulong)(uint)((int)((ulong)((long)pfVar10 - (long)pfVar3) >> 2) * -0x33333333);
          goto LAB_10aa8f5a4;
        }
      }
      uVar12 = (ulong)(iVar7 + 1);
    }
LAB_10aa8f5a4:
    uVar11 = (int)uVar12 - 1;
    if (uVar14 < (ulong)(long)(int)uVar11 || uVar14 - (long)(int)uVar11 == 0) goto LAB_10aa8f690;
    fVar15 = pfVar3[(long)(int)uVar11 * 5];
    *(uint *)((long)param_2 + 0x24) = uVar11;
    *(float *)(param_2 + 5) = fVar15;
    uVar12 = (ulong)uVar11 | uVar12 << 0x20;
  }
  if (((ulong)(long)(int)uVar12 <= uVar14 && uVar14 - (long)(int)uVar12 != 0) &&
     ((ulong)((long)uVar12 >> 0x20) <= uVar14 && uVar14 - ((long)uVar12 >> 0x20) != 0)) {
    return puVar6;
  }
LAB_10aa8f690:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa8f694);
  (*pcVar5)();
}



/* Entry: 10aa8f6ac; end: 10aa8f727;  */

undefined8 * FUN_10aa8f6ac(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110c3fec0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  param_1[-0x1c] = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return param_1 + -0x1c;
}



/* Entry: 10aa8f728; end: 10aa8f8a3;  */

long * FUN_10aa8f728(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  
  plVar1 = param_1 + 1;
  plVar4 = param_1;
  if (plVar1 == param_2) {
    puVar6 = (undefined4 *)param_1[2];
    goto LAB_10aa8f858;
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar8 = lVar3 - lVar2;
  lVar5 = param_1[3];
  plVar9 = (long *)param_1[1];
  if ((ulong)(lVar5 - (long)plVar9) < uVar8) {
    uVar10 = ((long)uVar8 >> 2) * -0x3333333333333333;
    if (plVar9 != (long *)0x0) {
      param_1[2] = (long)plVar9;
      __ZdlPv();
      lVar5 = 0;
      *plVar1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      plVar4 = plVar9;
    }
    if (0xccccccccccccccc < uVar10) {
      FUN_10a107a9c();
      plVar4[0x1c] = (long)&PTR____cxa_pure_virtual_110ba1b98;
      if (plVar4[0x1d] != 0) {
        plVar4[0x1e] = plVar4[0x1d];
        __ZdlPv();
      }
      *plVar4 = (long)&PTR_FUN_110c3ec18;
      plVar4[2] = (long)&PTR_DAT_110c3ecb8;
      plVar4[7] = (long)&PTR_DAT_110c3ed10;
      func_0x00010aa92258(plVar4 + 0x1a);
      if (plVar4[0x19] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZNSt3__15mutexD1Ev(plVar4 + 0x10);
      if (plVar4[0xf] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)plVar4 + 0x6f) < '\0') {
        __ZdlPv(plVar4[0xb]);
      }
      if (plVar4[6] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar4[2] = (long)&PTR_DAT_110b17898;
      func_0x00010a004dac(plVar4 + 3);
      return plVar4;
    }
    uVar7 = (lVar5 >> 2) * -0x6666666666666666;
    if (uVar7 < uVar10 || uVar7 + ((long)uVar8 >> 2) * 0x3333333333333333 == 0) {
      uVar7 = uVar10;
    }
    if (0x666666666666665 < (ulong)((lVar5 >> 2) * -0x3333333333333333)) {
      uVar7 = 0xccccccccccccccc;
    }
    plVar4 = plVar1;
    func_0x00010a107a58(plVar1,uVar7);
    plVar9 = (long *)param_1[2];
LAB_10aa8f838:
    if (lVar3 != lVar2) {
      plVar4 = plVar9;
      _memmove(plVar9,lVar2,uVar8);
    }
    puVar6 = (undefined4 *)((long)plVar9 + uVar8);
  }
  else {
    plVar11 = (long *)param_1[2];
    if (uVar8 <= (ulong)((long)plVar11 - (long)plVar9)) goto LAB_10aa8f838;
    lVar5 = lVar2 + ((long)plVar11 - (long)plVar9);
    if (plVar11 != plVar9) {
      _memmove(plVar9,lVar2);
      plVar11 = (long *)param_1[2];
      plVar4 = plVar9;
    }
    lVar3 = lVar3 - lVar5;
    if (lVar3 != 0) {
      plVar4 = plVar11;
      _memmove(plVar11,lVar5,lVar3);
    }
    puVar6 = (undefined4 *)((long)plVar11 + lVar3);
  }
  param_1[2] = (long)puVar6;
LAB_10aa8f858:
  if ((undefined4 *)*plVar1 == puVar6) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar12 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = puVar6[-5];
    uVar12 = *(undefined4 *)*plVar1;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = uVar12;
  *(undefined4 *)(param_1 + 8) = 0;
  return plVar4;
}



/* Entry: 10aa8f8a4; end: 10aa8f91f;  */

undefined8 * FUN_10aa8f8a4(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa8f920; end: 10aa8f99f;  */

void FUN_10aa8f920(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x98))(&lStack_38,param_2,&PTR_DAT_110c41170);
  func_0x00010a0cbfcc(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa8f9a0; end: 10aa8f9db;  */

void FUN_10aa8f9a0(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x170))(param_2,&PTR_DAT_110c41170,param_1 + 0xe8);
  return;
}



/* Entry: 10aa8f9dc; end: 10aa8fde7;  */

void FUN_10aa8f9dc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x140;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c41358;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[0x26] = 0x3f80000000000000;
    *(undefined4 *)(plVar3 + 0x27) = 0;
    plVar3[3] = (long)&PTR_FUN_110c411a0;
    plVar3[5] = (long)&PTR_DAT_110c41250;
    plVar3[10] = (long)&PTR_DAT_110c412a8;
    plVar3[0x1f] = (long)&PTR_FUN_110c412c8;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaadf80(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaadc2c(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8fcf8;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x128;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x23] = 0x3f80000000000000;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *(undefined4 *)(plVar3 + 0x24) = 0;
    *plVar3 = (long)&PTR_FUN_110c411a0;
    plVar3[2] = (long)&PTR_DAT_110c41250;
    plVar3[7] = (long)&PTR_DAT_110c412a8;
    plVar3[0x1c] = (long)&PTR_FUN_110c412c8;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c412f8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaadf80(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaadc2c(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8fcf8;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8fcf8:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa8fde8; end: 10aa8fdf7;  */

undefined4 FUN_10aa8fde8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa8fdf8; end: 10aa8ffe7;  */

undefined8 * FUN_10aa8fdf8(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa8ffe8; end: 10aa90067;  */

void FUN_10aa8ffe8(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x70))(&lStack_38,param_2,&PTR_DAT_110c41398);
  func_0x00010aa83d64(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa90068; end: 10aa900a3;  */

void FUN_10aa90068(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa900a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,&PTR_DAT_110c41398,param_1 + 0xe8);
  return;
}



/* Entry: 10aa900a4; end: 10aa90497;  */

void FUN_10aa900a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x130;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c41580;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c413c8;
    plVar3[5] = (long)&PTR_DAT_110c41478;
    plVar3[10] = (long)&PTR_DAT_110c414d0;
    plVar3[0x1f] = (long)&PTR_SUB_110c414f0;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaae50c(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaae1b8(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa903a8;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x118;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c413c8;
    plVar3[2] = (long)&PTR_DAT_110c41478;
    plVar3[7] = (long)&PTR_DAT_110c414d0;
    plVar3[0x1c] = (long)&PTR_SUB_110c414f0;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c41520;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaae50c(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaae1b8(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa903a8;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa903a8:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa90498; end: 10aa904a7;  */

undefined4 FUN_10aa90498(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa904a8; end: 10aa9071b;  */

undefined8 * FUN_10aa904a8(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa9071c; end: 10aa9079b;  */

void FUN_10aa9071c(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x70))(&lStack_38,param_2,&PTR_DAT_110c415c0);
  func_0x00010aa83d64(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa9079c; end: 10aa907d7;  */

void FUN_10aa9079c(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa907d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,&PTR_DAT_110c415c0,param_1 + 0xe8);
  return;
}



/* Entry: 10aa907d8; end: 10aa90bcb;  */

void FUN_10aa907d8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x130;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c417a8;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c415f0;
    plVar3[5] = (long)&PTR_DAT_110c416a0;
    plVar3[10] = (long)&PTR_DAT_110c416f8;
    plVar3[0x1f] = (long)&PTR_SUB_110c41718;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaaea98(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaae744(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa90adc;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x118;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c415f0;
    plVar3[2] = (long)&PTR_DAT_110c416a0;
    plVar3[7] = (long)&PTR_DAT_110c416f8;
    plVar3[0x1c] = (long)&PTR_SUB_110c41718;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c41748;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaaea98(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaae744(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa90adc;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa90adc:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa90bcc; end: 10aa90bdb;  */

undefined4 FUN_10aa90bcc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa90bdc; end: 10aa90dcb;  */

undefined8 * FUN_10aa90bdc(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa90dcc; end: 10aa90e4b;  */

void FUN_10aa90dcc(long param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x88))(&lStack_38,param_2,&PTR_DAT_110c417e8);
  func_0x00010aa916c4(param_1 + 0xe0,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa90e4c; end: 10aa90e87;  */

void FUN_10aa90e4c(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa90e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,&PTR_DAT_110c417e8,param_1 + 0xe8);
  return;
}



/* Entry: 10aa90e88; end: 10aa91283;  */

void FUN_10aa90e88(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x138;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c419d0;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[0x26] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[3] = (long)&PTR_FUN_110c41818;
    plVar3[5] = (long)&PTR_DAT_110c418c8;
    plVar3[10] = (long)&PTR_DAT_110c41920;
    plVar3[0x1f] = (long)&PTR_FUN_110c41940;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    func_0x00010aaaf024(&plStack_50,plVar3 + 8,plVar5);
    FUN_10aaaecd0(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa91194;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x120;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    plVar3[0x23] = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    *plVar3 = (long)&PTR_FUN_110c41818;
    plVar3[2] = (long)&PTR_DAT_110c418c8;
    plVar3[7] = (long)&PTR_DAT_110c41920;
    plVar3[0x1c] = (long)&PTR_FUN_110c41940;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c41970;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    func_0x00010aaaf024(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aaaecd0(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa91194;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa91194:
  (**(code **)(plStack_90[0x1c] + 0x18))(plStack_90 + 0x1c,param_2 + 0xe8);
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa91284; end: 10aa91293;  */

undefined4 FUN_10aa91284(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 10aa91294; end: 10aa9138b;  */

undefined8 * FUN_10aa91294(undefined8 *param_1)

{
  param_1[0x1a] = &PTR____cxa_pure_virtual_110c3fef0;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10aa9138c; end: 10aa91647;  */

undefined8 * FUN_10aa9138c(float param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aa9163c:
    puVar6 = (undefined8 *)&UNK_10f68d5a4;
    FUN_10a00946c();
    *puVar6 = &PTR____cxa_pure_virtual_110c3fef0;
    if (puVar6[1] != 0) {
      puVar6[2] = puVar6[1];
      __ZdlPv();
    }
    puVar6[-0x1c] = &PTR_FUN_110c3ec18;
    puVar6[-0x1a] = &PTR_DAT_110c3ecb8;
    puVar6[-0x15] = &PTR_DAT_110c3ed10;
    func_0x00010aa92258(puVar6 + -2);
    if (puVar6[-3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__15mutexD1Ev(puVar6 + -0xc);
    if (puVar6[-0xd] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar6 + -0x71) < '\0') {
      __ZdlPv(puVar6[-0x11]);
    }
    if (puVar6[-0x16] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar6[-0x1a] = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar6 + -0x19);
    return puVar6 + -0x1c;
  }
  pfVar3 = (float *)param_2[1];
  lVar4 = param_2[2];
  uVar14 = lVar4 - (long)pfVar3;
  if (uVar14 < 0x11) goto LAB_10aa9163c;
  uVar13 = (long)uVar14 >> 4;
  puVar6 = param_2;
  if (uVar14 == 0x20) {
    uVar10 = 0x100000000;
    uVar14 = 2;
  }
  else {
    iVar7 = *(int *)((long)param_2 + 0x3c);
    if (iVar7 == 0) {
      fVar15 = (float)uVar13;
      _logf();
      iVar7 = (int)fVar15;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      *(int *)((long)param_2 + 0x3c) = iVar7;
    }
    uVar9 = *(uint *)((long)param_2 + 0x24);
    uVar14 = (ulong)uVar9;
    if (*(float *)(param_2 + 5) <= param_1) {
      uVar14 = (long)(int)uVar9 + 1;
      uVar2 = (int)uVar13 - 1;
      uVar9 = (int)uVar14 + iVar7;
      if ((int)uVar2 <= (int)uVar9) {
        uVar9 = uVar2;
      }
      uVar10 = uVar14;
      if ((int)uVar14 < (int)uVar9) {
        pfVar8 = pfVar3 + uVar14 * 4;
        lVar12 = 0;
        if (uVar14 <= uVar13) {
          lVar12 = uVar13 - uVar14;
        }
        do {
          if (lVar12 == 0) goto LAB_10aa9162c;
          uVar10 = uVar14;
          if (param_1 < *pfVar8) break;
          uVar1 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar1;
          uVar10 = (ulong)uVar9;
          pfVar8 = pfVar8 + 4;
          lVar12 = lVar12 + -1;
        } while (uVar9 != uVar1);
      }
      uVar9 = (uint)uVar10;
      uVar14 = (ulong)uVar2;
      if (uVar9 != uVar2) {
        if (uVar13 <= (ulong)(long)(int)uVar9) goto LAB_10aa9162c;
        uVar14 = uVar10;
        if (pfVar3[(long)(int)uVar9 * 4] <= param_1) goto LAB_10aa914e4;
      }
    }
    else {
      uVar2 = uVar9 - iVar7 & ((int)(uVar9 - iVar7) >> 0x1f ^ 0xffffffffU);
      uVar10 = uVar14;
      if ((int)uVar2 < (int)uVar9) {
        pfVar8 = pfVar3 + uVar14 * 4;
        do {
          if (uVar13 <= uVar14) goto LAB_10aa9162c;
          uVar10 = uVar14;
        } while ((param_1 <= *pfVar8) &&
                (uVar14 = uVar14 - 1, uVar10 = (ulong)uVar2, pfVar8 = pfVar8 + -4,
                (long)(ulong)uVar2 < (long)uVar14));
      }
      iVar7 = (int)uVar10;
      if (iVar7 != 0) {
        if (uVar13 <= (ulong)(long)iVar7) goto LAB_10aa9162c;
        if (param_1 <= pfVar3[(long)iVar7 * 4]) {
LAB_10aa914e4:
          *(float *)((long)param_2 + 0x2c) = param_1;
          lVar4 = (lVar4 + -0x10) - (long)pfVar3;
          pfVar8 = pfVar3;
          if (lVar4 != 0) {
            uVar14 = lVar4 >> 4;
            do {
              uVar11 = uVar14 >> 1;
              uVar10 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
              uVar14 = uVar11;
              if (pfVar8[uVar11 * 4] <= param_1) {
                uVar14 = uVar10;
                pfVar8 = pfVar8 + uVar11 * 4 + 4;
              }
            } while (uVar14 != 0);
          }
          uVar14 = (ulong)((long)pfVar8 - (long)pfVar3) >> 4;
          goto LAB_10aa91530;
        }
      }
      uVar14 = (ulong)(iVar7 + 1);
    }
LAB_10aa91530:
    uVar9 = (int)uVar14 - 1;
    if (uVar13 <= (ulong)(long)(int)uVar9) goto LAB_10aa9162c;
    fVar15 = pfVar3[(long)(int)uVar9 * 4];
    *(uint *)((long)param_2 + 0x24) = uVar9;
    *(float *)(param_2 + 5) = fVar15;
    uVar10 = (ulong)uVar9 | uVar14 << 0x20;
    uVar14 = uVar13;
  }
  if (((((ulong)(long)(int)uVar10 < uVar14) && ((ulong)((long)uVar10 >> 0x20) < uVar14)) &&
      ((ulong)(long)(int)uVar10 < uVar13)) && ((ulong)((long)uVar10 >> 0x20) < uVar13)) {
    return puVar6;
  }
LAB_10aa9162c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa91630);
  (*pcVar5)();
}



/* Entry: 10aa91648; end: 10aa917af;  */

undefined8 * FUN_10aa91648(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110c3fef0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  param_1[-0x1c] = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return param_1 + -0x1c;
}



/* Entry: 10aa917b0; end: 10aa917cf;  */

long * FUN_10aa917b0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1[-1] = &PTR_DAT_110c3ed30;
  *param_1 = &PTR_FUN_110c3ed68;
  param_1[1] = &PTR_FUN_110c3ed98;
  plVar1 = param_1 + 3;
  plVar2 = (long *)param_1[5];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10aa917d0; end: 10aa9180b;  */

void FUN_10aa917d0(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110c3ed30;
  *param_1 = &PTR_FUN_110c3ed68;
  param_1[1] = &PTR_FUN_110c3ed98;
  func_0x0001094d9408(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10aa9180c; end: 10aa91827;  */

long * FUN_10aa9180c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  param_1[-2] = &PTR_DAT_110c3ed30;
  param_1[-1] = &PTR_FUN_110c3ed68;
  plVar3 = param_1 + 2;
  *param_1 = &PTR_FUN_110c3ed98;
  plVar1 = (long *)param_1[4];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10aa91828; end: 10aa91a7f;  */

void FUN_10aa91828(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110c3ed30;
  param_1[-1] = &PTR_FUN_110c3ed68;
  *param_1 = &PTR_FUN_110c3ed98;
  func_0x0001094d9408(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10aa91a80; end: 10aa91a83;  */

undefined8 * FUN_10aa91a80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ef48;
  param_1[1] = &PTR_DAT_110c3ef80;
  param_1[4] = &PTR_DAT_110c3efb0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aa91a84; end: 10aa91a97;  */

void FUN_10aa91a84(void)

{
  FUN_10aa92204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa91a98; end: 10aa91aa7;  */

undefined8 FUN_10aa91a98(void)

{
  return 0;
}



/* Entry: 10aa91aa8; end: 10aa91abf;  */

void FUN_10aa91aa8(long param_1)

{
  FUN_10aa92204(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa91ac0; end: 10aa91acf;  */

undefined8 FUN_10aa91ac0(void)

{
  return 0;
}



/* Entry: 10aa91ad0; end: 10aa91ae7;  */

void FUN_10aa91ad0(long param_1)

{
  FUN_10aa92204(param_1 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa91ae8; end: 10aa91c83;  */

undefined8 * FUN_10aa91ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c41b28;
  param_1[2] = &PTR_DAT_110c41bd0;
  param_1[7] = &PTR_DAT_110c41c28;
  FUN_10a37e7d4(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa91c84; end: 10aa91ceb;  */

void FUN_10aa91c84(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x28;
        FUN_10aa91cec(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa91cec; end: 10aa91e67;  */

void FUN_10aa91cec(undefined8 *param_1)

{
  FUN_10a493e78(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10aa91e68; end: 10aa91e7b;  */

undefined1  [16] FUN_10aa91e68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a493e78();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10aa91e7c; end: 10aa91f2b;  */

undefined1  [16] FUN_10aa91e7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a493e78();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10aa91f2c; end: 10aa91faf;  */

undefined8 * FUN_10aa91f2c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR____cxa_pure_virtual_110c3fba8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  func_0x00010aa95adc(param_1 + 7);
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar2 = param_1[2];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x00010aa91efc(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = param_1[1];
    }
    param_1[2] = lVar3;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10aa91fb0; end: 10aa9200b;  */

undefined8 * FUN_10aa91fb0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_110c3fdb0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  FUN_10a436634(param_1 + 7);
  puStack_28 = param_1 + 1;
  FUN_10a4367dc(&puStack_28);
  return param_1;
}



/* Entry: 10aa9200c; end: 10aa92067;  */

long * FUN_10aa9200c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10aa92068(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa92068; end: 10aa9215b;  */

void FUN_10aa92068(undefined8 *param_1)

{
  func_0x00010a435d00(param_1 + 6);
  func_0x00010a435d58(param_1 + 4);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10aa9215c; end: 10aa921b7;  */

long * FUN_10aa9215c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10aa921b8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa921b8; end: 10aa921f3;  */

void FUN_10aa921b8(undefined8 *param_1)

{
  func_0x00010a0ccba4(param_1 + 4);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10aa921f4; end: 10aa92203;  */

void FUN_10aa921f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa921f8);
  (*pcVar1)();
}



/* Entry: 10aa92204; end: 10aa92307;  */

undefined8 * FUN_10aa92204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ef48;
  param_1[1] = &PTR_DAT_110c3ef80;
  param_1[4] = &PTR_DAT_110c3efb0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aa92308; end: 10aa92403;  */

undefined1  [16] FUN_10aa92308(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f028;
  puVar1 = &UNK_10f68c0c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c3f028;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}


