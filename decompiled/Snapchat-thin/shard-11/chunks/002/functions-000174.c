/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083457cc; end: 108345837;  */

undefined8 * FUN_1083457cc(undefined8 *param_1)

{
  FUN_10840f118(param_1 + 9);
  FUN_10840f118(param_1 + 6);
  FUN_10837ca5c(*param_1);
  return param_1;
}



/* Entry: 108345838; end: 10834594f;  */

void FUN_108345838(void)

{
  return;
}



/* Entry: 108345950; end: 108345b0b;  */

ulong FUN_108345950(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4,long param_5,
                   ulong param_6,undefined1 *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_26c [100];
  long lStack_208;
  int iStack_200;
  long lStack_1f8;
  int iStack_1f0;
  undefined1 auStack_1e8 [376];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  lVar10 = param_2;
  uVar8 = param_3;
  puVar11 = param_4;
  lVar12 = param_5;
  uVar13 = param_6;
  func_0x00010835c63c();
  iVar2 = 0;
  if (((ulong)puVar5 & 0xffffffff) != 0) {
    iVar2 = (int)(param_6 / ((ulong)puVar5 & 0xffffffff));
  }
  puVar5 = param_1;
  func_0x00010835c63c();
  puVar6 = param_4;
  func_0x00010835c63c();
  iVar4 = (int)param_7;
  if ((long)iVar2 * (long)(int)puVar6 - param_6 == 0) {
    iVar3 = 0;
    if (((ulong)puVar5 & 0xffffffff) != 0) {
      iVar3 = (int)(param_3 / ((ulong)puVar5 & 0xffffffff));
    }
    puVar5 = param_1;
    func_0x00010835c63c();
    iVar4 = (int)param_7;
    if ((long)iVar3 * (long)(int)puVar5 - param_3 == 0) {
      FUN_108344004(auStack_26c,*param_4,*(undefined4 *)((long)param_4 + 0xc),*param_1,
                    *(undefined4 *)((long)param_1 + 0xc));
      lVar14 = 0;
      do {
        iVar4 = (int)param_7;
        if (lVar14 == 0x18) {
          lStack_208 = param_2;
          iStack_200 = iVar3;
          lStack_1f8 = param_5;
          iStack_1f0 = iVar2;
          FUN_10821a8e4(auStack_1e8);
          FUN_108387f8c(auStack_1e8,*(undefined4 *)(param_4 + 1),&lStack_1f8);
          func_0x0001083442d0(auStack_26c,auStack_1e8);
          func_0x000108388378(auStack_1e8,*(undefined4 *)(param_1 + 1),&lStack_208);
          puVar11 = (undefined8 *)(long)*(int *)(param_4 + 2);
          lVar12 = (long)*(int *)((long)param_4 + 0x14);
          lVar10 = 0;
          uVar8 = 0;
          FUN_108388618(auStack_1e8,0,0,puVar11,lVar12);
          func_0x00010821a970(auStack_1e8);
          break;
        }
        param_7 = auStack_26c;
        puVar5 = param_1;
        lVar10 = param_2;
        uVar8 = param_3;
        puVar11 = param_4;
        lVar12 = param_5;
        uVar13 = param_6;
        (**(code **)((long)&PTR_FUN_110a3e0e0 + lVar14))(param_1,param_2,param_3,param_4,param_5);
        iVar4 = (int)param_7;
        lVar14 = lVar14 + 8;
      } while (((ulong)puVar5 & 1) == 0);
      uVar7 = 1;
      goto LAB_108345ab4;
    }
  }
  uVar7 = 0;
LAB_108345ab4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x00010821a970(auStack_1e8);
  __Unwind_Resume();
  if (*(int *)(uVar7 + 8) == *(int *)(puVar11 + 1)) {
    if ((*(int *)(uVar7 + 8) == 1) || (FUN_10828b104(), iVar4 == 0)) {
      uVar9 = uVar7;
      func_0x0001078bdb50();
      uVar1 = *(uint *)(uVar7 + 0x14);
      if (uVar9 == uVar8 && uVar9 == uVar13) {
        _memcpy(lVar10,lVar12,uVar13 * (long)(int)uVar1);
      }
      else {
        for (uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU); uVar1 != 0; uVar1 = uVar1 - 1) {
          _memcpy(lVar10,lVar12,uVar9);
          lVar10 = lVar10 + uVar8;
          lVar12 = lVar12 + uVar13;
        }
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0;
}



/* Entry: 108345b0c; end: 108345bd3;  */

undefined8
FUN_108345b0c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_4 + 8)) {
    if ((*(int *)(param_1 + 8) == 1) || (FUN_10828b104(), param_7 == 0)) {
      lVar3 = param_1;
      func_0x0001078bdb50();
      uVar1 = *(uint *)(param_1 + 0x14);
      if (lVar3 == param_3 && lVar3 == param_6) {
        _memcpy(param_2,param_5,param_6 * (int)uVar1);
      }
      else {
        for (uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU); uVar1 != 0; uVar1 = uVar1 - 1) {
          _memcpy(param_2,param_5,lVar3);
          param_2 = param_2 + param_3;
          param_5 = param_5 + param_6;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 108345bd4; end: 108345fc3;  */

undefined8
FUN_108345bd4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             char *param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 8) & 0xfffffffd) != 4) {
    return 0;
  }
  if ((*(uint *)(param_4 + 8) & 0xfffffffd) != 4) {
    return 0;
  }
  if ((param_7[1] & 1U) != 0) {
    return 0;
  }
  if ((param_7[2] & 1U) != 0) {
    return 0;
  }
  if ((param_7[3] & 1U) != 0) {
    return 0;
  }
  if (param_7[4] == '\x01') {
    ppuVar2 = &PTR_DAT_113255f08;
    ppuVar1 = &PTR_DAT_113255f00;
  }
  else {
    if (*param_7 != '\x01') {
      ppuVar1 = &PTR_DAT_113255ef8;
      goto LAB_108345c90;
    }
    ppuVar2 = &PTR_FUN_113255f18;
    ppuVar1 = &PTR_FUN_113255f10;
  }
  if (*(uint *)(param_1 + 8) != *(uint *)(param_4 + 8)) {
    ppuVar1 = ppuVar2;
  }
LAB_108345c90:
  pcVar3 = (code *)*ppuVar1;
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    (*pcVar3)(param_2,param_5,*(undefined4 *)(param_1 + 0x10));
    param_2 = param_2 + param_3;
    param_5 = param_5 + param_6;
  }
  return 1;
}



/* Entry: 108345fc4; end: 10834601f;  */

void FUN_108345fc4(void)

{
  return;
}



/* Entry: 108346020; end: 10834608f;  */

void FUN_108346020(void)

{
  int iVar1;
  char cStack_21;
  
  cStack_21 = cRam0000000113826c98;
  if (cRam0000000113826c98 == '\0') {
    iVar1 = 0x13826c98;
    FUN_10825bc50(0x113826c98,&cStack_21,1,0,0);
    if (iVar1 != 0) {
      cRam0000000113826c98 = 2;
      return;
    }
  }
  do {
  } while (cRam0000000113826c98 != '\x02');
  return;
}



/* Entry: 108346090; end: 108346163;  */

undefined8 FUN_108346090(float param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 4) - param_1;
  fVar5 = *(float *)(param_2 + 0x1c) - param_1;
  if (0.0 <= fVar1) {
    fVar6 = 0.0;
    if (fVar1 <= 0.0) goto LAB_108346158;
    if (0.0 < fVar5) {
      return 0;
    }
    fVar2 = 1.0;
    fVar3 = 0.0;
  }
  else {
    if (fVar5 < 0.0) {
      return 0;
    }
    fVar2 = 0.0;
    fVar3 = 1.0;
  }
  fVar4 = *(float *)(param_2 + 0xc) - param_1;
  param_1 = *(float *)(param_2 + 0x14) - param_1;
  do {
    fVar6 = (fVar3 + fVar2) * 0.5;
    fVar7 = fVar1 + fVar6 * (fVar4 - fVar1);
    fVar8 = fVar4 + fVar6 * (param_1 - fVar4);
    fVar7 = fVar7 + fVar6 * (fVar8 - fVar7);
    fVar7 = fVar7 + fVar6 * ((fVar8 + fVar6 * ((param_1 + fVar6 * (fVar5 - param_1)) - fVar8)) -
                            fVar7);
    if (fVar7 == 0.0) goto LAB_108346158;
    fVar8 = fVar6;
    if (0.0 <= fVar7) {
      fVar8 = fVar2;
      fVar3 = fVar6;
    }
    fVar2 = fVar8;
  } while (1.5258789e-05 < ABS(fVar3 - fVar8));
  fVar6 = (fVar8 + fVar3) * 0.5;
LAB_108346158:
  *param_3 = fVar6;
  return 1;
}



/* Entry: 108346164; end: 108346263;  */

float FUN_108346164(float param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (((1e-10 < fVar2) && (1e-10 < 1.0 - fVar2)) && (param_2[6] != 0.0)) {
    if (param_2[6] == 1.4013e-45) {
      fVar2 = fVar2 / *param_2;
      _powf(fVar2,0x3eaaaaab);
    }
    else {
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar5 = -fVar2;
      iVar1 = 8;
      do {
        fVar6 = fVar5 + fVar2 * (param_2[4] + fVar2 * (fVar4 + fVar2 * fVar3));
        if (ABS(fVar6) <= 5e-05) break;
        fVar7 = param_2[4] + fVar2 * (fVar4 + fVar4 + fVar2 * fVar3 * 3.0);
        fVar2 = fVar2 - ((fVar7 + fVar7) * fVar6) /
                        (-((fVar4 + fVar4 + fVar2 * (fVar3 * 3.0 + fVar3 * 3.0)) * fVar6) +
                        fVar7 * (fVar7 + fVar7));
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    fVar2 = fVar2 * (param_2[5] + fVar2 * (param_2[3] + fVar2 * param_2[1]));
  }
  return fVar2;
}



/* Entry: 108346264; end: 108346317;  */

void FUN_108346264(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = param_1;
  }
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = param_3;
  }
  fVar7 = 1.0;
  if (fVar5 <= 1.0) {
    fVar7 = fVar5;
  }
  uVar9 = NEON_fmov(0x40400000,4);
  fVar5 = fVar4 * (float)uVar9;
  fVar8 = (float)((ulong)uVar9 >> 0x20);
  fVar6 = param_2 * fVar8;
  fVar10 = ABS(fVar7 - param_4);
  fVar7 = fVar7 * (float)uVar9;
  param_4 = param_4 * fVar8;
  uVar9 = NEON_fmov(0x3f800000,4);
  fVar8 = (fVar7 - fVar5) - fVar5;
  param_5[1] = CONCAT44((param_4 - fVar6) - fVar6,fVar8);
  *param_5 = CONCAT44((fVar6 + (float)((ulong)uVar9 >> 0x20)) - param_4,
                      (fVar5 + (float)uVar9) - fVar7);
  param_5[2] = CONCAT44(fVar6,fVar5);
  *(undefined4 *)(param_5 + 3) = 2;
  bVar1 = false;
  bVar2 = true;
  if (ABS(fVar4 - param_2) <= 0.00024414062) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 == 0.00024414062;
      bVar2 = 0.00024414062 <= fVar10;
    }
  }
  if (!bVar2 || bVar1) {
    uVar3 = 0;
  }
  else {
    if (1e-07 < ABS(fVar8)) {
      return;
    }
    if (1e-07 < ABS(fVar5)) {
      return;
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_5 + 3) = uVar3;
  return;
}



/* Entry: 108346318; end: 10834648b;  */

void FUN_108346318(undefined8 *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cStack_31;
  
  if (param_3 != 0) {
    if (0xffffffffffffffd7 < param_3) {
      FUN_10841076c(&UNK_10f48f31d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083463dc);
      (*pcVar3)();
    }
    puVar4 = (undefined4 *)(param_3 + 0x28);
    __Znwm();
    *puVar4 = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined4 **)(puVar4 + 6) = puVar4 + 10;
    *(ulong *)(puVar4 + 8) = param_3;
    *param_1 = puVar4;
    if (param_2 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(puVar4 + 10,param_2,param_3);
    return;
  }
  cStack_31 = cRam0000000113826ca0;
  if (cRam0000000113826ca0 == '\0') {
    piVar5 = (int *)0x113826ca0;
    FUN_10825bc50(0x113826ca0,&cStack_31,1,0,0);
    if ((int)piVar5 == 0) goto LAB_10834645c;
    func_0x000108346750();
    *piVar5 = 1;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[8] = 0;
    piVar5[9] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    cRam0000000113826ca0 = '\x02';
    piRam0000000113826ca8 = piVar5;
  }
  else {
LAB_10834645c:
    do {
    } while (cRam0000000113826ca0 != '\x02');
    piVar5 = piRam0000000113826ca8;
    if (piRam0000000113826ca8 == (int *)0x0) goto LAB_108346480;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_108346480:
  *param_1 = piVar5;
  return;
}



/* Entry: 10834648c; end: 10834648f;  */

void FUN_10834648c(void)

{
  return;
}



/* Entry: 108346490; end: 1083464d3;  */

void FUN_108346490(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  func_0x000108346750();
  *puVar1 = 1;
  *(code **)(puVar1 + 2) = FUN_1083464d4;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 **)(puVar1 + 6) = param_2;
  *(undefined8 *)(puVar1 + 8) = param_3;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083464d4; end: 1083464e3;  */

void FUN_1083464d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 1083464e4; end: 10834651f;  */

void FUN_1083464e4(long *param_1,long param_2)

{
  FUN_1083464d4();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)
              (*(undefined8 *)(*param_1 + 0x18),*(undefined8 *)(*param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108346520; end: 108346573;  */

void FUN_108346520(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  func_0x000108346750();
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 2) = param_4;
  *(undefined8 *)(puVar1 + 4) = param_5;
  *(undefined4 **)(puVar1 + 6) = param_2;
  *(undefined8 *)(puVar1 + 8) = param_3;
  *param_1 = puVar1;
  return;
}



/* Entry: 108346574; end: 1083465cb;  */

void FUN_108346574(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 in_stack_ffffffffffffffd8;
  
  FUN_1083b9f3c(param_2,&stack0xffffffffffffffd8);
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
    func_0x000108346750();
    *puVar1 = 1;
    *(code **)(puVar1 + 2) = FUN_1083465cc;
    *(undefined8 *)(puVar1 + 4) = in_stack_ffffffffffffffd8;
    *(undefined4 **)(puVar1 + 6) = param_2;
    *(undefined8 *)(puVar1 + 8) = in_stack_ffffffffffffffd8;
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083465cc; end: 1083465cf;  */

void FUN_1083465cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__munmap_11034c6d0)();
  return;
}



/* Entry: 1083465d0; end: 10834661b;  */

void FUN_1083465d0(undefined8 *param_1,long param_2)

{
  if ((param_2 != 0) && (FUN_1083b9c50(param_2,1), param_2 != 0)) {
    FUN_108346574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fclose_11034c270)(param_2);
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10834661c; end: 1083466a3;  */

void FUN_10834661c(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  char cStack_31;
  
  if ((param_4 != 0) &&
     (uVar3 = *(ulong *)(param_2 + 8) - param_3, param_3 <= *(ulong *)(param_2 + 8) && uVar3 != 0))
  {
    if (uVar3 <= param_4) {
      param_4 = uVar3;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = *param_2 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    piVar4 = param_2;
    func_0x000108346750();
    lVar5 = *(long *)(param_2 + 6);
    *piVar4 = 1;
    *(code **)(piVar4 + 2) = FUN_1083466a4;
    *(int **)(piVar4 + 4) = param_2;
    *(ulong *)(piVar4 + 6) = lVar5 + param_3;
    *(ulong *)(piVar4 + 8) = param_4;
    *param_1 = piVar4;
    return;
  }
  cStack_31 = cRam0000000113826ca0;
  if (cRam0000000113826ca0 == '\0') {
    piVar4 = (int *)0x113826ca0;
    FUN_10825bc50(0x113826ca0,&cStack_31,1,0,0);
    if ((int)piVar4 == 0) goto LAB_10834645c;
    func_0x000108346750();
    *piVar4 = 1;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    cRam0000000113826ca0 = '\x02';
    piRam0000000113826ca8 = piVar4;
  }
  else {
LAB_10834645c:
    do {
    } while (cRam0000000113826ca0 != '\x02');
    piVar4 = piRam0000000113826ca8;
    if (piRam0000000113826ca8 == (int *)0x0) goto LAB_108346480;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_108346480:
  *param_1 = piVar4;
  return;
}



/* Entry: 1083466a4; end: 1083466ab;  */

void FUN_1083466a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_2 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_2 + 2) != (code *)0x0) {
      (**(code **)(param_2 + 2))(*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1083466ac; end: 10834673f;  */

void FUN_1083466ac(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_38;
  
  plVar1 = param_2;
  FUN_1083a08b4();
  if ((int)plVar1 == 0) {
    FUN_1083464d4(&lStack_38,param_3);
    lVar2 = lStack_38;
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(lStack_38 + 0x18),param_3);
    if (param_2 == param_3) {
      lStack_38 = 0;
    }
    else {
      lVar2 = 0;
    }
    *param_1 = lVar2;
    func_0x0001078bddf8(&lStack_38);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 108346740; end: 1083467b7;  */

void FUN_108346740(void)

{
  return;
}



/* Entry: 1083467b8; end: 10834680f;  */

void FUN_1083467b8(undefined8 *param_1,undefined8 *param_2)

{
  __Znwm();
  *param_2 = 0xc00000000;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 108346810; end: 10834682f;  */

void FUN_108346810(long param_1)

{
  FUN_108343308((uint *)(param_1 + 4),(ulong)*(uint *)(param_1 + 4) - 4,0);
  return;
}



/* Entry: 108346830; end: 1083468a7;  */

int * FUN_108346830(long param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar2 < 1) {
      return (int *)0x0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1] + 8);
    iVar2 = iVar2 + -1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = piVar1[1];
  }
  return piVar1 + 2;
}



/* Entry: 1083468a8; end: 108346917;  */

void FUN_1083468a8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1083469c0();
  if (param_2 < 0x7d) {
    param_1[1] = 0xc00000000;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = param_1 + 1;
  }
  else {
    FUN_1083467b8(&uStack_28,param_2);
    uVar1 = uStack_28;
    uStack_28 = 0;
    *param_1 = uVar1;
    FUN_1083469d8(&uStack_28);
  }
  return;
}



/* Entry: 108346918; end: 108346957;  */

void FUN_108346918(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  FUN_1083468a8(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*param_1,param_2,uVar1);
  return;
}



/* Entry: 108346958; end: 1083469bf;  */

void FUN_108346958(void)

{
  func_0x000108346a1c();
  FUN_108346918();
  return;
}



/* Entry: 1083469c0; end: 1083469d7;  */

void FUN_1083469c0(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083469d8; end: 1083469fb;  */

undefined8 FUN_1083469d8(undefined8 param_1)

{
  FUN_1083469fc(param_1,0);
  return param_1;
}



/* Entry: 1083469fc; end: 108346a27;  */

void FUN_1083469fc(long *param_1,long param_2)

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



/* Entry: 108346a28; end: 108346b17;  */

undefined8 *
FUN_108346a28(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_register_00005028;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_3 + 1) = 1;
  *param_3 = &PTR_FUN_110a3e108;
  FUN_10814102c(param_3 + 2);
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_3[6] = uVar2;
  param_3[5] = uVar1;
  func_0x0001083485ec();
  param_3[8] = uVar2;
  param_3[7] = uVar1;
  param_3[10] = in_register_00005028;
  param_3[9] = param_2;
  uVar4 = *(undefined8 *)(extraout_x8 + 0x28);
  uVar3 = *(undefined8 *)(extraout_x8 + 0x20);
  uVar6 = *(undefined8 *)(extraout_x8 + 0x38);
  uVar5 = *(undefined8 *)(extraout_x8 + 0x30);
  param_3[0xc] = uVar4;
  param_3[0xb] = uVar3;
  param_3[0xe] = uVar6;
  param_3[0xd] = uVar5;
  param_3[0x10] = uVar2;
  param_3[0xf] = uVar1;
  param_3[0x12] = in_register_00005028;
  param_3[0x11] = param_2;
  param_3[0x14] = uVar4;
  param_3[0x13] = uVar3;
  param_3[0x16] = uVar6;
  param_3[0x15] = uVar5;
  param_3[0x1c] = uVar4;
  param_3[0x1b] = uVar3;
  param_3[0x18] = uVar2;
  param_3[0x17] = uVar1;
  param_3[0x1a] = in_register_00005028;
  param_3[0x19] = param_2;
  param_3[0x1e] = uVar6;
  param_3[0x1d] = uVar5;
  FUN_10810c9b4(param_3 + 0x1f);
  *(undefined1 *)(param_3 + 0x24) = 1;
  *(undefined4 *)(param_3 + 0xf) = 0x3f800000;
  *(undefined8 *)((long)param_3 + 0x84) = 0;
  *(undefined8 *)((long)param_3 + 0x7c) = 0;
  *(undefined4 *)((long)param_3 + 0x8c) = 0x3f800000;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  *(undefined4 *)(param_3 + 0x14) = 0x3f800000;
  *(undefined8 *)((long)param_3 + 0xac) = 0;
  *(undefined8 *)((long)param_3 + 0xa4) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_3 + 0xb4) = uVar1;
  *(undefined8 *)((long)param_3 + 0xc4) = 0;
  *(undefined8 *)((long)param_3 + 0xbc) = 0;
  *(undefined4 *)((long)param_3 + 0xcc) = 0x3f800000;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0x3f800000;
  *(undefined8 *)((long)param_3 + 0xec) = 0;
  *(undefined8 *)((long)param_3 + 0xe4) = 0;
  *(undefined4 *)((long)param_3 + 0xf4) = 0x3f800000;
  return param_3;
}



/* Entry: 108346b18; end: 108346c07;  */

void FUN_108346b18(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[6];
  *(undefined8 *)(param_1 + 0xb0) = param_2[7];
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  FUN_10835ebb8(param_1 + 0x78);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  uVar7 = param_3[6];
  *(undefined8 *)(param_1 + 0xf0) = param_3[7];
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 200) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  FUN_10835ebb8(param_1 + 0xb8);
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  uVar6 = param_4[5];
  uVar5 = param_4[4];
  uVar7 = param_4[6];
  *(undefined8 *)(param_1 + 0x70) = param_4[7];
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_10835ebb8(param_1 + 0x38);
  if (param_6 != 0 || param_5 != 0) {
    FUN_10835e73c((float)param_5,(float)param_6,0,param_1 + 0x78);
    func_0x0001083485d4(-param_6,param_1 + 0xb8);
    func_0x0001083485d4(param_1 + 0x38);
  }
  func_0x000108348620();
  func_0x000108348574();
  return;
}



/* Entry: 108346c08; end: 108346c5b;  */

void FUN_108346c08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[6];
  *(undefined8 *)(param_1 + 0x70) = param_2[7];
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_10835ebb8(param_1 + 0x38);
  FUN_108346c5c(param_1 + 0x38,param_1 + 0xb8);
  func_0x000108348620();
  func_0x000108348574();
  return;
}



/* Entry: 108346c5c; end: 108346c63;  */

undefined4 * FUN_108346c5c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  func_0x00010835f3a0();
  func_0x00010835f3a0(param_1[4],param_1[5],param_1[6],param_1[7]);
  func_0x00010835f3d8();
  uVar8 = param_1[0xb];
  func_0x00010835f3a0(param_1[8],param_1[9],param_1[10]);
  func_0x00010835f3a8();
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar9 = param_1[0xf];
  func_0x00010835f3a0();
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  param_1[4] = unaff_s12;
  param_1[5] = unaff_s13;
  param_1[6] = unaff_s14;
  param_1[7] = unaff_s15;
  param_1[8] = unaff_s8;
  param_1[9] = unaff_s9;
  param_1[10] = unaff_s10;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar9;
  return param_1;
}



/* Entry: 108346c64; end: 108346cab;  */

void FUN_108346c64(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_38 = 0;
  uStack_40 = 0x3f80000000000000;
  uStack_28 = 0x3f800000;
  uStack_30 = 0;
  uStack_18 = 0x3f80000000000000;
  uStack_20 = CONCAT44((int)(float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20),
                       (int)(float)*(undefined8 *)(param_1 + 0xa8));
  func_0x00010835e54c(&uStack_50,param_1 + 0x78);
  return;
}



/* Entry: 108346cac; end: 108346ce7;  */

undefined8 FUN_108346cac(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fminnm((int)*(float *)(param_1 + 0xa8),0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  fVar2 = (float)NEON_fminnm((int)*(float *)(param_1 + 0xac),0x4effffff);
  if (fVar2 <= -2.1474835e+09) {
    fVar2 = -2.1474835e+09;
  }
  return CONCAT44((int)fVar2,(int)fVar1);
}



/* Entry: 108346ce8; end: 108346e1f;  */

void FUN_108346ce8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,long *param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  byte bStack_5a;
  undefined1 auStack_58 [16];
  byte bStack_48;
  
  uVar2 = (int)param_5 + 0xf8;
  func_0x0001081421e0();
  bVar1 = true;
  if (((*(uint *)(param_7 + 9) & 0xc0) == 0) && (param_7[2] == 0)) {
    bVar1 = *param_7 != 0;
  }
  if ((*(uint *)(param_7 + 9) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    FUN_108346e20((int)param_5[0x20]);
    if (uVar3 == 0) goto LAB_108346dc0;
    param_1 = *(undefined4 *)((long)param_5 + 0x10c);
    FUN_108346e20();
    uVar3 = uVar3 ^ 1;
  }
  if ((!(bool)(1 < uVar2 | bVar1)) && (uVar3 == 0)) {
    FUN_1083902c4(&uStack_68,param_6);
    while ((bStack_48 & 1) == 0) {
      FUN_10817500c(auStack_58);
      uStack_78 = param_1;
      uStack_74 = param_2;
      uStack_70 = param_3;
      uStack_6c = param_4;
      (**(code **)(*param_5 + 0x100))(param_5,&uStack_78,param_7);
      func_0x000108390338(&uStack_68);
    }
    return;
  }
LAB_108346dc0:
  FUN_108376ad8(&uStack_68);
  FUN_1083912bc(param_6,&uStack_68);
  bStack_5a = bStack_5a | 4;
  func_0x000108348564(*(undefined8 *)(*param_5 + 0x130));
  FUN_10837ca5c(uStack_68);
  return;
}



/* Entry: 108346e20; end: 108346e5f;  */

bool FUN_108346e20(float param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)(param_1 + 0.5),0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return param_1 == (float)(int)fVar1;
}



/* Entry: 108346e60; end: 108346ec7;  */

void FUN_108346e60(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x00010834862c();
  FUN_10837b4c0(auStack_40,param_2,(*(uint *)(param_3 + 9) & 0xc0) == 0 && *param_3 == 0);
  func_0x000108348564(*(undefined8 *)(*param_1 + 0x130));
  func_0x0001083485a8();
  return;
}



/* Entry: 108346ec8; end: 108346f47;  */

void FUN_108346ec8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [14];
  byte bStack_32;
  
  func_0x00010834862c();
  FUN_10837816c(auStack_40,param_2,0);
  FUN_10837816c(auStack_40,param_3,0);
  bStack_32 = bStack_32 & 0xf8 | 5;
  func_0x000108348564(*(undefined8 *)(*param_1 + 0x130));
  func_0x0001083485a8();
  return;
}



/* Entry: 108346f48; end: 10834700f;  */

void FUN_108346f48(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = param_2;
  FUN_108406fa8(param_2,param_1 + 0x1f);
  FUN_108407124(&lStack_48,param_2,param_3,param_4,uVar1,uVar1 >> 0x20,param_1[2]);
  if (lStack_48 != 0) {
    uStack_50 = *param_5;
    *param_5 = 0;
    (**(code **)(*param_1 + 0x158))(param_1,lStack_48,&uStack_50,param_6,0);
    FUN_108154c6c(&uStack_50);
  }
  func_0x00010827f564(&lStack_48);
  return;
}



/* Entry: 108347010; end: 1083471e7;  */

void FUN_108347010(undefined8 param_1,float param_2,float param_3,float param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  ulong param_10)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  code *extraout_x8;
  float fVar7;
  undefined8 uVar8;
  ulong auStack_150 [2];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e5;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [112];
  
  FUN_10835d750(auStack_c0,param_7,param_8);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  bStack_e5 = 0;
  uStack_100 = 0;
  uVar8 = 0x300000006;
  uStack_f0 = 0x100000001;
  uStack_f8 = 0x300000006;
  do {
    while( true ) {
      auStack_150[0] = 0;
      auStack_150[1] = 0;
      puVar4 = auStack_c0;
      func_0x00010835dca0(puVar4,auStack_150,&uStack_e0,&bStack_e5,&uStack_e4);
      if ((int)puVar4 == 0) {
        FUN_10810a400(&uStack_100);
        FUN_10827f7b4(auStack_c0);
        return;
      }
      FUN_10817500c(auStack_150);
      fVar7 = (float)uVar8;
      uStack_d0 = CONCAT44(param_2,fVar7);
      uStack_c8 = CONCAT44(param_4,param_3);
      if ((bStack_e5 & 1) == 0) break;
LAB_1083470a4:
      if ((uStack_e4 != 0) || (uVar5 = param_10, FUN_1083762bc(), (uVar5 & 1) == 0)) {
        FUN_108375f34(auStack_150,param_10);
        uVar1 = uStack_e4;
        uVar5 = param_10;
        FUN_108188360(param_10);
        uVar1 = uVar1 >> 8 & 0xff0000;
        FUN_108343500(uVar1 + uVar1 * (int)uVar5 & 0xff000000 | uStack_e4 & 0xffffff);
        uStack_120 = (undefined4)uVar8;
        fStack_11c = param_2;
        fStack_118 = param_3;
        fStack_114 = param_4;
        (**(code **)(*param_5 + 0x100))(param_5,&uStack_e0,auStack_150);
        FUN_108375e94(auStack_150);
      }
    }
    param_3 = param_3 - fVar7;
    param_4 = param_4 - param_2;
    bVar2 = false;
    bVar3 = true;
    if (param_3 <= 1.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_4)) {
        bVar2 = param_4 == 1.0;
        bVar3 = 1.0 <= param_4;
      }
    }
    if ((!bVar3 || bVar2) &&
       (plVar6 = param_6,
       (**(code **)(*param_6 + 0x78))(param_6,0,&uStack_100,&uStack_e4,4,(int)fVar7,(int)param_2,0),
       (int)plVar6 != 0)) goto LAB_1083470a4;
    auStack_150[0] = auStack_150[0] & 0xffffff0000000000;
    auStack_150[1] = 0;
    uStack_13c = 0;
    uStack_140 = param_9;
    func_0x000108348614(*(undefined8 *)(*param_5 + 0x138));
    (*extraout_x8)();
  } while( true );
}



/* Entry: 1083471e8; end: 1083473ff;  */

void FUN_1083471e8(long *param_1,long param_2,long param_3,undefined4 *param_4,uint param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  long lStack_100;
  long lStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined4 *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 3;
  if (param_4 == (undefined4 *)0x0) {
    uVar11 = 1;
  }
  puVar10 = param_6;
  FUN_1083a9268(alStack_a0,0,param_5 * 6,0,uVar11);
  if (alStack_a0[0] == 0) {
    puVar15 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)0x0;
    lVar12 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(alStack_a0[0] + 8);
    puVar15 = *(undefined8 **)(alStack_a0[0] + 0x18);
    lVar12 = *(long *)(alStack_a0[0] + 0x20);
  }
  pfVar1 = (float *)(param_3 + 8);
  uStack_b0 = param_7;
  puVar3 = param_4;
  plStack_b8 = param_1;
  for (uVar13 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
      uVar13 = uVar13 - 1) {
    func_0x000108386054(*pfVar1 - pfVar1[-2],pfVar1[1] - pfVar1[-1],param_2,&uStack_90);
    puVar14[1] = uStack_88;
    *puVar14 = uStack_90;
    puVar14[3] = uStack_90;
    puVar14[2] = uStack_80;
    puVar14[5] = uStack_78;
    puVar14[4] = uStack_80;
    uStack_90 = *(undefined8 *)(pfVar1 + -2);
    uStack_80 = *(undefined8 *)pfVar1;
    uStack_88 = CONCAT44((int)((ulong)uStack_90 >> 0x20),(int)uStack_80);
    uStack_78 = CONCAT44((int)((ulong)uStack_80 >> 0x20),(int)uStack_90);
    puVar15[1] = uStack_88;
    *puVar15 = uStack_90;
    puVar15[3] = uStack_90;
    puVar15[2] = uStack_80;
    puVar15[5] = uStack_78;
    puVar15[4] = uStack_80;
    if (param_4 != (undefined4 *)0x0) {
      (*(code *)PTR_DAT_113254e78)(lVar12,*puVar3,6);
      lVar12 = lVar12 + 0x18;
    }
    param_2 = param_2 + 0x10;
    pfVar1 = pfVar1 + 4;
    puVar3 = puVar3 + 1;
    puVar14 = puVar14 + 6;
    puVar15 = puVar15 + 6;
  }
  FUN_1083a93b8(&uStack_90,alStack_a0);
  uStack_a8 = *param_6;
  *param_6 = 0;
  puVar14 = &uStack_a8;
  uVar9 = 0;
  uVar6 = uStack_90;
  uVar8 = uStack_b0;
  (**(code **)(*plStack_b8 + 0x158))(plStack_b8,uStack_90,puVar14,uStack_b0,0);
  iVar7 = (int)uVar8;
  FUN_108154c6c(&uStack_a8);
  func_0x00010827f564(&uStack_90);
  plVar4 = alStack_a0;
  FUN_10834845c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_108154c6c(&uStack_a8);
    func_0x00010827f564(&uStack_90);
    plVar5 = alStack_a0;
    FUN_10834845c();
    FUN_10834854c();
    pcStack_c8 = FUN_108347400;
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_114 = 0x3f800000;
    uStack_10c = 0x40800000;
    lStack_100 = lVar12;
    lStack_f8 = param_2;
    puStack_f0 = puVar3;
    puStack_e8 = param_6;
    puStack_e0 = param_4;
    plStack_d8 = plVar4;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_108375e28(&uStack_150,uVar9,0);
    FUN_1083762f4(&uStack_150,puVar10);
    uVar2 = uStack_10c._4_4_ & 0xfffffffe;
    if (iVar7 == 0xf) {
      uVar2 = uVar2 + 1;
    }
    uStack_10c = CONCAT44(uVar2,(undefined4)uStack_10c);
    if (puVar14 == (undefined8 *)0x0) {
      (**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&uStack_150);
    }
    else {
      func_0x00010834862c();
      func_0x000108348648(auStack_160,puVar14);
      (**(code **)(*plVar5 + 0x130))(plVar5,auStack_160,&uStack_150,1);
      func_0x0001083485a8();
    }
    FUN_108375e94(&uStack_150);
    return;
  }
  return;
}



/* Entry: 108347400; end: 10834750b;  */

void FUN_108347400(long *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_54 = 0x3f800000;
  uStack_4c = 0x40800000;
  FUN_108375e28(&uStack_90,param_5,0);
  FUN_1083762f4(&uStack_90,param_6);
  uVar1 = uStack_4c._4_4_ & 0xfffffffe;
  if (param_4 == 0xf) {
    uVar1 = uVar1 + 1;
  }
  uStack_4c = CONCAT44(uVar1,(undefined4)uStack_4c);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x100))(param_1,param_2,&uStack_90);
  }
  else {
    func_0x00010834862c();
    func_0x000108348648(auStack_a0,param_3);
    (**(code **)(*param_1 + 0x130))(param_1,auStack_a0,&uStack_90,1);
    func_0x0001083485a8();
  }
  FUN_108375e94(&uStack_90);
  return;
}



/* Entry: 10834750c; end: 108347707;  */

void FUN_10834750c(long *param_1,long param_2,uint param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_190 [64];
  undefined8 auStack_150 [8];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_c8 [60];
  float fStack_8c;
  uint uStack_80;
  
  FUN_108375f34(auStack_c8,param_7);
  iVar3 = 0;
  lStack_108 = param_1[8];
  lStack_110 = param_1[7];
  lStack_f8 = param_1[10];
  lStack_100 = param_1[9];
  lStack_e8 = param_1[0xc];
  lStack_f0 = param_1[0xb];
  lStack_d8 = param_1[0xe];
  lStack_e0 = param_1[0xd];
  pcVar1 = (char *)(param_2 + 0x34);
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    uStack_80 = uStack_80 & 0xfffffffe;
    if (*(int *)(pcVar1 + -4) == 0xf) {
      uStack_80 = uStack_80 + 1;
    }
    fVar4 = *(float *)(param_7 + 0x3c) * *(float *)(pcVar1 + -8);
    fStack_8c = 1.0;
    if (fVar4 <= 1.0) {
      fStack_8c = fVar4;
    }
    if (fStack_8c <= 0.0) {
      fStack_8c = 0.0;
    }
    if (-1 < (int)*(uint *)(pcVar1 + -0xc)) {
      func_0x00010818d67c(auStack_190,param_5 + (ulong)*(uint *)(pcVar1 + -0xc) * 0x28);
      FUN_10835e5d0(auStack_150,&lStack_110,auStack_190);
      FUN_108337d68(param_1,auStack_150);
    }
    if (*pcVar1 == '\x01') {
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_108376ad8(auStack_150);
      func_0x000108348648(auStack_150,param_4 + (long)iVar3 * 8);
      (**(code **)(*param_1 + 0x48))(param_1,auStack_150,1,uStack_80 & 1);
      iVar3 = iVar3 + 4;
      FUN_10837ca5c(auStack_150[0]);
    }
    (**(code **)(*param_1 + 0x138))
              (param_1,*(undefined8 *)(pcVar1 + -0x34),pcVar1 + -0x2c,pcVar1 + -0x1c,param_6,
               auStack_c8,param_8);
    if (*pcVar1 == '\x01') {
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    if (-1 < *(int *)(pcVar1 + -0xc)) {
      FUN_108337d68(param_1,&lStack_110);
    }
    pcVar1 = pcVar1 + 0x38;
  }
  FUN_108375e94(auStack_c8);
  return;
}



/* Entry: 108347708; end: 10834771f;  */

void FUN_108347708(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lStack_30;
  int iStack_28;
  
  iStack_28 = 0;
  if (param_2 != 0) {
    iStack_28 = *(int *)(param_2 + 0xc60);
    *(int *)(param_2 + 0xc60) = iStack_28 + 1;
    *(int *)(*(long *)(param_2 + 0xc40) + 0x58) = *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
  }
  lStack_30 = param_2;
  if (param_4 != 0) {
    FUN_10833e2b0(param_2,param_4);
  }
  (**(code **)(*param_3 + 0x48))(param_3,param_2);
  FUN_10815b978(&lStack_30);
  return;
}



/* Entry: 108347720; end: 108347753;  */

void FUN_108347720(long *param_1)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = param_1[4];
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x1a0))(param_1,&uStack_20,0);
  return;
}



/* Entry: 108347754; end: 10834775f;  */

void FUN_108347754(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm(0x30,param_4);
  FUN_108355f9c(&uStack_38,1);
  uVar2 = uStack_38;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_DAT_110a3ea18;
  uStack_38 = 0;
  puVar1[2] = uVar2;
  uVar2 = *param_3;
  puVar1[4] = param_3[1];
  puVar1[3] = uVar2;
  *(undefined4 *)(puVar1 + 5) = 4;
  FUN_1082e1f34(&uStack_38);
  *puVar1 = &PTR_DAT_110a3ea68;
  uStack_38 = 0;
  *param_1 = puVar1;
  FUN_108357138(&uStack_38);
  return;
}



/* Entry: 108347760; end: 108347857;  */

void FUN_108347760(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_4c;
  long lStack_38;
  
  FUN_108347720(&lStack_38,param_2);
  if (lStack_38 == 0) goto LAB_108347824;
  FUN_10835e5d0(&uStack_a0,param_1 + 0x17,param_2 + 0x78);
  FUN_10816eab0(auStack_60,&uStack_a0);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar3 = param_3;
  FUN_1081753ec(param_3,&uStack_a0);
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)auStack_60;
    func_0x0001081420d4();
    if ((iVar2 == 0) || (fStack_58 != (float)(int)fStack_58)) goto LAB_108347800;
    bVar1 = fStack_4c == (float)(int)fStack_4c;
  }
  else {
LAB_108347800:
    bVar1 = false;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,lStack_38,auStack_60,param_3,param_4,bVar1);
LAB_108347824:
  FUN_1083389b0(&lStack_38);
  return;
}



/* Entry: 108347858; end: 10834789f;  */

long * FUN_108347858(long *param_1)

{
  func_0x0001083485fc();
  (**(code **)(*param_1 + 0x1e8))();
  func_0x0001083485cc();
  return param_1;
}



/* Entry: 1083478a0; end: 1083478e7;  */

long * FUN_1083478a0(long *param_1)

{
  func_0x0001083485fc();
  (**(code **)(*param_1 + 0x1f0))();
  func_0x0001083485cc();
  return param_1;
}



/* Entry: 1083478e8; end: 10834795b;  */

void FUN_1083478e8(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [8];
  int iStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined2 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined2 uStack_82;
  undefined8 auStack_80 [2];
  
  func_0x000108348694();
  param_1 = param_1 + 0xf8;
  FUN_1082c36d0();
  if (param_1 == 0) {
    return;
  }
  plVar5 = unaff_x20;
  FUN_10834795c();
  if (((ulong)plVar5 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x22 + 0x200);
    func_0x000108348614();
                    /* WARNING: Could not recover jumptable at 0x000108347958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000108348614();
  plVar7 = unaff_x20;
  func_0x000108348694();
  plVar5 = (long *)*plVar7;
  plVar7 = plVar5 + plVar7[1] * 0xc;
  do {
    if (plVar5 == plVar7) {
      return;
    }
    if (plVar5[8] == 0) {
      FUN_1084040d0(&puStack_e8,0,0,unaff_x20[6],plVar5,unaff_x19);
      func_0x000108348614();
      FUN_1083478e8();
    }
    else {
      lVar4 = unaff_x20[5];
      uVar14 = *(undefined4 *)((long)unaff_x20 + 0x2c);
      auStack_80[0] = 0;
      puStack_e8 = &uStack_82;
      puStack_e0 = auStack_80;
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_a0 = plVar5[9];
      if (lStack_a0 != 0) {
        piVar1 = (int *)(lStack_a0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_98 = (undefined7)plVar5[10];
      uStack_91 = (undefined1)*(undefined8 *)((long)plVar5 + 0x57);
      uStack_90 = (undefined7)((ulong)*(undefined8 *)((long)plVar5 + 0x57) >> 8);
      lStack_128 = plVar5[1];
      lStack_130 = *plVar5;
      uVar9 = plVar5[2];
      uStack_118 = 0;
      plStack_110 = &lStack_130;
      uStack_108 = 0;
      lVar11 = 4;
      uStack_120 = uVar9;
      plStack_100 = plStack_110;
      uStack_f8 = uVar9;
      for (uVar10 = 0; uVar9 != uVar10; uVar10 = uVar10 + 1) {
        uStack_82 = *(undefined2 *)(lStack_130 + uVar10 * 2);
        if ((ulong)plVar5[8] <= uVar10) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x108347c74);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar12 = *(undefined8 *)(plVar5[7] + uVar10 * 8);
        uVar13 = *(undefined8 *)(lStack_128 + uVar10 * 8);
        fStack_154 = -*(float *)(plVar5[7] + lVar11);
        uStack_158 = (undefined4)uVar12;
        uStack_148 = CONCAT44((int)((ulong)uVar13 >> 0x20),uStack_158);
        uStack_150 = CONCAT44((int)((ulong)uVar12 >> 0x20),(int)uVar13);
        uStack_140 = 0;
        uStack_138 = 0xc03f800000;
        FUN_108363ef4((int)lVar4,uVar14,&uStack_158);
        FUN_108375f34(auStack_1a8,unaff_x19);
        lVar8 = *(long *)(unaff_x19 + 8);
        lStack_1f8 = 0;
        uStack_200 = 0x3f800000;
        uStack_1e8 = 0;
        uStack_1f0 = 0x3f800000;
        uStack_1e0 = 0x103f800000;
        if (lVar8 == 0) {
LAB_108347b34:
          uVar12 = 0;
        }
        else {
          puVar6 = &uStack_158;
          FUN_10818cfd0(puVar6,&uStack_200);
          if ((int)puVar6 == 0) goto LAB_108347b34;
          FUN_1083be074(&uStack_1b0,lVar8,&uStack_200);
          uVar12 = uStack_1b0;
        }
        uVar13 = uStack_1a0;
        uStack_1b0 = 0;
        uStack_1a0 = uVar12;
        FUN_108114eec(uVar13);
        func_0x000106f47224(&uStack_1b0);
        iStack_1b8 = 0;
        if (unaff_x21 != 0) {
          iStack_1b8 = *(int *)(unaff_x21 + 0xc60);
          *(int *)(unaff_x21 + 0xc60) = iStack_1b8 + 1;
          *(int *)(*(long *)(unaff_x21 + 0xc40) + 0x58) =
               *(int *)(*(long *)(unaff_x21 + 0xc40) + 0x58) + 1;
        }
        uStack_200 = CONCAT44(uStack_150._4_4_,uStack_158);
        lStack_1f8 = uStack_140 << 0x20;
        uStack_1f0 = CONCAT44((undefined4)uStack_148,fStack_154);
        uStack_1e8 = uStack_140 & 0xffffffff00000000;
        uStack_1d8 = 0x3f800000;
        uStack_1e0 = 0;
        uStack_1d0 = (undefined4)uStack_150;
        uStack_1cc = uStack_148._4_4_;
        uStack_1c8 = 0;
        uStack_1c4 = (undefined4)uStack_138;
        func_0x00010833e2f0(unaff_x21,&uStack_200);
        FUN_1084040d0(&uStack_200,0,0,unaff_x20[6],&puStack_e8,unaff_x19);
        func_0x000108348614();
        FUN_1083478e8();
        FUN_10815b978(auStack_1c0);
        FUN_108375e94(auStack_1a8);
        lVar11 = lVar11 + 8;
      }
      func_0x000108348634();
    }
    plVar5 = plVar5 + 0xc;
  } while( true );
}



/* Entry: 10834795c; end: 10834798b;  */

bool FUN_10834795c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] * 0x60;
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    plVar1 = (long *)(lVar3 + 0x40);
    lVar3 = lVar3 + 0x60;
    lVar2 = lVar4 + -0x60;
  } while (*plVar1 == 0);
  return lVar4 != 0;
}



/* Entry: 10834798c; end: 108347ca3;  */

void FUN_10834798c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined2 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined2 uStack_82;
  undefined8 auStack_80 [2];
  
  func_0x000108348694();
  plVar7 = (long *)*param_3;
  plVar6 = plVar7 + param_3[1] * 0xc;
  do {
    if (plVar7 == plVar6) {
      return;
    }
    if (plVar7[8] == 0) {
      FUN_1084040d0(&puStack_e8,0,0,*(undefined8 *)(unaff_x20 + 0x30),plVar7);
      func_0x000108348614();
      FUN_1083478e8();
    }
    else {
      uVar14 = *(undefined4 *)(unaff_x20 + 0x28);
      uVar15 = *(undefined4 *)(unaff_x20 + 0x2c);
      auStack_80[0] = 0;
      puStack_e8 = &uStack_82;
      puStack_e0 = auStack_80;
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_a0 = plVar7[9];
      if (lStack_a0 != 0) {
        piVar1 = (int *)(lStack_a0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_98 = (undefined7)plVar7[10];
      uStack_91 = (undefined1)*(undefined8 *)((long)plVar7 + 0x57);
      uStack_90 = (undefined7)((ulong)*(undefined8 *)((long)plVar7 + 0x57) >> 8);
      lStack_128 = plVar7[1];
      lStack_130 = *plVar7;
      uVar9 = plVar7[2];
      uStack_118 = 0;
      plStack_110 = &lStack_130;
      uStack_108 = 0;
      lVar11 = 4;
      uStack_120 = uVar9;
      plStack_100 = plStack_110;
      uStack_f8 = uVar9;
      for (uVar10 = 0; uVar9 != uVar10; uVar10 = uVar10 + 1) {
        uStack_82 = *(undefined2 *)(lStack_130 + uVar10 * 2);
        if ((ulong)plVar7[8] <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108347c74);
          (*pcVar4)();
        }
        uVar12 = *(undefined8 *)(plVar7[7] + uVar10 * 8);
        uVar13 = *(undefined8 *)(lStack_128 + uVar10 * 8);
        fStack_154 = -*(float *)(plVar7[7] + lVar11);
        uStack_158 = (undefined4)uVar12;
        uStack_148 = CONCAT44((int)((ulong)uVar13 >> 0x20),uStack_158);
        uStack_150 = CONCAT44((int)((ulong)uVar12 >> 0x20),(int)uVar13);
        uStack_140 = 0;
        uStack_138 = 0xc03f800000;
        FUN_108363ef4(uVar14,uVar15,&uStack_158);
        FUN_108375f34(auStack_1a8);
        lVar8 = *(long *)(unaff_x19 + 8);
        lStack_1f8 = 0;
        uStack_200 = 0x3f800000;
        uStack_1e8 = 0;
        uStack_1f0 = 0x3f800000;
        uStack_1e0 = 0x103f800000;
        if (lVar8 == 0) {
LAB_108347b34:
          uVar12 = 0;
        }
        else {
          puVar5 = &uStack_158;
          FUN_10818cfd0(puVar5,&uStack_200);
          if ((int)puVar5 == 0) goto LAB_108347b34;
          FUN_1083be074(&uStack_1b0,lVar8,&uStack_200);
          uVar12 = uStack_1b0;
        }
        uVar13 = uStack_1a0;
        uStack_1b0 = 0;
        uStack_1a0 = uVar12;
        FUN_108114eec(uVar13);
        func_0x000106f47224(&uStack_1b0);
        if (unaff_x21 != 0) {
          *(int *)(unaff_x21 + 0xc60) = *(int *)(unaff_x21 + 0xc60) + 1;
          *(int *)(*(long *)(unaff_x21 + 0xc40) + 0x58) =
               *(int *)(*(long *)(unaff_x21 + 0xc40) + 0x58) + 1;
        }
        uStack_200 = CONCAT44(uStack_150._4_4_,uStack_158);
        lStack_1f8 = uStack_140 << 0x20;
        uStack_1f0 = CONCAT44((undefined4)uStack_148,fStack_154);
        uStack_1e8 = uStack_140 & 0xffffffff00000000;
        uStack_1d8 = 0x3f800000;
        uStack_1e0 = 0;
        uStack_1d0 = (undefined4)uStack_150;
        uStack_1cc = uStack_148._4_4_;
        uStack_1c8 = 0;
        uStack_1c4 = (undefined4)uStack_138;
        func_0x00010833e2f0();
        FUN_1084040d0(&uStack_200,0,0,*(undefined8 *)(unaff_x20 + 0x30),&puStack_e8);
        func_0x000108348614();
        FUN_1083478e8();
        FUN_10815b978(&stack0xfffffffffffffe40);
        FUN_108375e94(auStack_1a8);
        lVar11 = lVar11 + 8;
      }
      func_0x000108348634();
    }
    plVar7 = plVar7 + 0xc;
  } while( true );
}



/* Entry: 108347ca4; end: 108347cab;  */

void FUN_108347ca4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108347cac; end: 108347cd7;  */

undefined8 FUN_108347cac(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    FUN_108343d54();
    if ((uVar1 & 1) != 0) {
      return 2;
    }
  }
  return 3;
}



/* Entry: 108347cd8; end: 108347de3;  */

void FUN_108347cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000108348680();
  func_0x00010821a0c0();
  uStack_80 = *unaff_x21;
  *unaff_x21 = 0;
  uStack_38 = 0;
  uStack_78 = 0;
  uStack_70 = param_4;
  FUN_108346a28();
  FUN_10810a400(&uStack_80);
  FUN_10810a400(&uStack_38);
  *unaff_x19 = &PTR_DAT_110a3e320;
  unaff_x19[0x31] = unaff_x19 + 0x25;
  uVar1 = 0x800000000;
  uVar2 = 0;
  unaff_x19[0x32] = 0x800000000;
  func_0x0001083485ec();
  uStack_58 = *(undefined8 *)(extraout_x8 + 0x28);
  uStack_60 = *(undefined8 *)(extraout_x8 + 0x20);
  uStack_48 = *(undefined8 *)(extraout_x8 + 0x38);
  uStack_50 = *(undefined8 *)(extraout_x8 + 0x30);
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = param_2;
  FUN_108347e30();
  uStack_78 = unaff_x19[4];
  uStack_80 = 0;
  uStack_81 = 0;
  uStack_82 = 1;
  FUN_108347e4c(unaff_x19 + 0x31,&uStack_80,&uStack_81,&uStack_82);
  return;
}



/* Entry: 108347de4; end: 108347e2f;  */

undefined8 FUN_108347de4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_108347cd8();
  FUN_10810a400(&uStack_28);
  return param_1;
}



/* Entry: 108347e30; end: 108347e4b;  */

void FUN_108347e30(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(param_1 + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f800000;
  FUN_10835ebb8(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0xf0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x3f800000;
  FUN_10835ebb8(param_1 + 0xb8);
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[6];
  *(undefined8 *)(param_1 + 0x70) = param_2[7];
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_10835ebb8(param_1 + 0x38);
  if (param_4 != 0 || param_3 != 0) {
    FUN_10835e73c((float)param_3,(float)param_4,0,param_1 + 0x78);
    func_0x0001083485d4(-param_4,param_1 + 0xb8);
    func_0x0001083485d4(param_1 + 0x38);
  }
  func_0x000108348620();
  func_0x000108348574();
  return;
}



/* Entry: 108347e4c; end: 108347f0f;  */

long * FUN_108347e4c(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  long *plVar3;
  long lVar4;
  
  func_0x000108348680();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar3 = (long *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 0x18);
    uVar1 = *unaff_x22;
    uVar2 = *unaff_x21;
    lVar4 = *unaff_x20;
    plVar3[1] = unaff_x20[1];
    *plVar3 = lVar4;
    *(undefined4 *)(plVar3 + 2) = 0;
    *(undefined1 *)((long)plVar3 + 0x14) = uVar1;
    *(undefined1 *)((long)plVar3 + 0x15) = uVar2;
  }
  else {
    plVar3 = unaff_x19;
    func_0x0001083484b4(0x3ff8000000000000);
    plVar3 = plVar3 + (long)(int)unaff_x19[1] * 3;
    uVar1 = *unaff_x22;
    uVar2 = *unaff_x21;
    lVar4 = *unaff_x20;
    plVar3[1] = unaff_x20[1];
    *plVar3 = lVar4;
    *(undefined4 *)(plVar3 + 2) = 0;
    *(undefined1 *)((long)plVar3 + 0x14) = uVar1;
    *(undefined1 *)((long)plVar3 + 0x15) = uVar2;
    FUN_1083484d8();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar3;
}



/* Entry: 108347f10; end: 108347faf;  */

undefined8 FUN_108347f10(long param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_2[2] - *param_2 == *(int *)(param_1 + 0x20)) &&
     (param_2[3] - param_2[1] == *(int *)(param_1 + 0x24))) {
    if (0 < *(int *)(param_1 + 400)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = *(undefined8 **)(param_1 + 0x188);
      *puVar3 = 0;
      puVar3[1] = uVar2;
      if (0 < *(int *)(param_1 + 400)) {
        *(undefined2 *)(*(long *)(param_1 + 0x188) + 0x14) = 0x100;
        func_0x0001083485ec();
        FUN_108347e30();
        return 1;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108347fb0);
    (*pcVar1)();
  }
  return 0;
}



/* Entry: 108347fb0; end: 10834800f;  */

void FUN_108347fb0(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 400) != 0) {
    lVar2 = *(long *)(param_1 + 0x188) + (long)*(int *)(param_1 + 400) * 0x18;
    *(int *)(lVar2 + -8) = *(int *)(lVar2 + -8) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108347fd8);
  (*pcVar1)();
}



/* Entry: 108348010; end: 1083480fb;  */

undefined8 * FUN_108348010(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x188) + (long)iVar1 * 0x18);
    puVar5 = puVar4 + -3;
    if (0 < *(int *)(puVar4 + -1)) {
      *(int *)(puVar4 + -1) = *(int *)(puVar4 + -1) + -1;
      uVar6 = *puVar5;
      if (iVar1 < (int)(*(uint *)(param_1 + 0x194) >> 1)) {
        func_0x00010834866c(*puVar5);
        puVar5 = puVar4;
      }
      else {
        lVar3 = param_1 + 0x188;
        func_0x0001083484b4(0x3ff8000000000000,lVar3,1);
        puVar5 = (undefined8 *)(lVar3 + (long)*(int *)(param_1 + 400) * 0x18);
        func_0x00010834866c(lVar3,uVar6);
        FUN_1083484d8(param_1 + 0x188,extraout_x8);
      }
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    }
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083480d8);
  (*pcVar2)();
}



/* Entry: 1083480fc; end: 108348223;  */

void FUN_1083480fc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,float *param_6,undefined8 param_7,float *param_8,int param_9,
                  int param_10)

{
  int iVar1;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined8 *puStack_70;
  float *pfStack_68;
  undefined8 *puStack_60;
  float *pfStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar2;
  
  pfVar5 = param_6;
  if (param_10 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = param_7;
    FUN_1083483c0();
    iVar1 = (int)uVar2;
  }
  *(byte *)((long)param_5 + 0x14) = *(byte *)((long)param_5 + 0x14) | (byte)param_9;
  if (*param_8 < param_8[2]) {
    fVar6 = param_8[1];
    fVar7 = param_8[3];
    if (fVar6 < fVar7) {
      FUN_10835e94c(param_7);
      uStack_50 = CONCAT44(fVar7,fVar6);
      uStack_48 = CONCAT44(param_4,param_3);
      goto LAB_108348188;
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  param_8 = pfVar5;
LAB_108348188:
  if ((int)param_6 == 1) {
    puVar3 = &uStack_50;
    if (param_9 == 0) {
      FUN_108277294();
    }
    else {
      func_0x00010812f180();
    }
    puVar4 = param_5;
    puStack_60 = puVar3;
    pfStack_58 = param_8;
    func_0x00010821b838(param_5,&puStack_60);
    if (((ulong)puVar4 & 1) == 0) {
      *param_5 = 0;
      param_5[1] = 0;
    }
    *(byte *)((long)param_5 + 0x15) = (byte)iVar1 & *(byte *)((long)param_5 + 0x15);
  }
  else {
    if (iVar1 != 0) {
      puVar3 = &uStack_50;
      if (param_9 == 0) {
        FUN_108277294();
      }
      else {
        FUN_10834840c();
      }
      puVar4 = param_5;
      puStack_70 = puVar3;
      pfStack_68 = param_8;
      FUN_10838edd8(param_5,&puStack_70,&puStack_60);
      if ((int)puVar4 != 0) {
        param_5[1] = pfStack_58;
        *param_5 = puStack_60;
        return;
      }
    }
    *(undefined1 *)((long)param_5 + 0x15) = 0;
  }
  return;
}



/* Entry: 108348224; end: 10834824f;  */

void FUN_108348224(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,float *param_6,undefined8 param_7,float *param_8,int param_9)

{
  int iVar1;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  uint uVar6;
  long unaff_x21;
  float fVar7;
  float fVar8;
  undefined8 *puStack_70;
  float *pfStack_68;
  undefined8 *puStack_60;
  float *pfStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar2;
  
  func_0x0001083485b8();
  uVar6 = (uint)(*(int *)(unaff_x21 + 0x30) == 1);
  func_0x0001083486a8();
  pfVar5 = param_6;
  if (uVar6 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = param_7;
    FUN_1083483c0();
    iVar1 = (int)uVar2;
  }
  *(byte *)((long)param_5 + 0x14) = *(byte *)((long)param_5 + 0x14) | (byte)param_9;
  if (*param_8 < param_8[2]) {
    fVar7 = param_8[1];
    fVar8 = param_8[3];
    if (fVar7 < fVar8) {
      FUN_10835e94c(param_7);
      uStack_50 = CONCAT44(fVar8,fVar7);
      uStack_48 = CONCAT44(param_4,param_3);
      goto LAB_108348188;
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  param_8 = pfVar5;
LAB_108348188:
  if ((int)param_6 == 1) {
    puVar3 = &uStack_50;
    if (param_9 == 0) {
      FUN_108277294();
    }
    else {
      func_0x00010812f180();
    }
    puVar4 = param_5;
    puStack_60 = puVar3;
    pfStack_58 = param_8;
    func_0x00010821b838(param_5,&puStack_60);
    if (((ulong)puVar4 & 1) == 0) {
      *param_5 = 0;
      param_5[1] = 0;
    }
    *(byte *)((long)param_5 + 0x15) = (byte)iVar1 & *(byte *)((long)param_5 + 0x15);
  }
  else {
    if (iVar1 != 0) {
      puVar3 = &uStack_50;
      if (param_9 == 0) {
        FUN_108277294();
      }
      else {
        FUN_10834840c();
      }
      puVar4 = param_5;
      puStack_70 = puVar3;
      pfStack_68 = param_8;
      FUN_10838edd8(param_5,&puStack_70,&puStack_60);
      if ((int)puVar4 != 0) {
        param_5[1] = pfStack_58;
        *param_5 = puStack_60;
        return;
      }
    }
    *(undefined1 *)((long)param_5 + 0x15) = 0;
  }
  return;
}



/* Entry: 108348250; end: 1083482bf;  */

/* WARNING: Removing unreachable block (ram,0x00010834812c) */
/* WARNING: Removing unreachable block (ram,0x0001083481a4) */
/* WARNING: Removing unreachable block (ram,0x0001083481e0) */
/* WARNING: Removing unreachable block (ram,0x0001083481ac) */
/* WARNING: Removing unreachable block (ram,0x0001083481e4) */
/* WARNING: Removing unreachable block (ram,0x0001083481fc) */

void FUN_108348250(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,float *param_6,uint param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 *puStack_60;
  float *pfStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)((long)param_6 + 0xe) & 2) != 0) {
    param_7 = (uint)(param_7 == 0);
  }
  puVar3 = param_5;
  FUN_108348010();
  func_0x0001083773e0();
  *(byte *)((long)puVar3 + 0x14) = *(byte *)((long)puVar3 + 0x14) | (byte)param_8;
  if (*param_6 < param_6[2]) {
    fVar4 = param_6[1];
    fVar5 = param_6[3];
    if (fVar4 < fVar5) {
      FUN_10835e94c(param_5 + 7);
      uStack_50 = CONCAT44(fVar5,fVar4);
      uStack_48 = CONCAT44(param_4,param_3);
      goto LAB_108348188;
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  param_6 = (float *)(ulong)param_7;
LAB_108348188:
  if (param_7 == 1) {
    puVar1 = &uStack_50;
    if (param_8 == 0) {
      FUN_108277294();
    }
    else {
      func_0x00010812f180();
    }
    puVar2 = puVar3;
    puStack_60 = puVar1;
    pfStack_58 = param_6;
    func_0x00010821b838(puVar3,&puStack_60);
    if (((ulong)puVar2 & 1) == 0) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    *(undefined1 *)((long)puVar3 + 0x15) = 0;
  }
  else {
    *(undefined1 *)((long)puVar3 + 0x15) = 0;
  }
  return;
}



/* Entry: 1083482c0; end: 108348323;  */

void FUN_1083482c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = param_5;
  FUN_108348010();
  FUN_10817500c(param_6);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_1083480fc(lVar1,param_7,param_5 + 0xb8,&uStack_40,0,*(long *)(param_6 + 0x10) == 0);
  return;
}



/* Entry: 108348324; end: 10834833b;  */

void FUN_108348324(long param_1)

{
  FUN_108348010();
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}



/* Entry: 10834833c; end: 1083483bf;  */

void FUN_10834833c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined1 *puStack_28;
  
  puVar3 = &uStack_50;
  FUN_10817500c(param_6);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10835e94c(param_5 + 0x17);
  uStack_40 = CONCAT44(param_2,param_1);
  uStack_38 = CONCAT44(param_4,param_3);
  puVar1 = &uStack_40;
  FUN_108277294();
  uStack_38 = param_5[4];
  uStack_40 = 0;
  ppuVar2 = &puStack_30;
  puStack_30 = puVar1;
  puStack_28 = (undefined1 *)puVar3;
  func_0x00010821b838(ppuVar2,&uStack_40);
  if (((ulong)ppuVar2 & 1) == 0) {
    puStack_30 = (undefined8 *)0x0;
    puStack_28 = (undefined1 *)0x0;
  }
  FUN_108348010();
  param_5[1] = (long)puStack_28;
  *param_5 = (long)puStack_30;
  *(undefined2 *)((long)param_5 + 0x14) = 0x100;
  return;
}



/* Entry: 1083483c0; end: 10834840b;  */

bool FUN_1083483c0(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*(float *)(param_1 + 4) == 0.0) && (*(float *)(param_1 + 0xc) == 0.0)) &&
      (*(float *)(param_1 + 0x10) == 0.0)) && (*(float *)(param_1 + 0x1c) == 0.0)) {
    bVar1 = *(float *)(param_1 + 0x3c) == 1.0;
  }
  return bVar1;
}



/* Entry: 10834840c; end: 108348433;  */

undefined1  [16] FUN_10834840c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10833b104(param_1,&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108348434; end: 108348443;  */

void FUN_108348434(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108348438);
  (*pcVar1)();
}



/* Entry: 108348444; end: 108348457;  */

void FUN_108348444(void)

{
  FUN_10831559c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108348458; end: 10834845b;  */

void FUN_108348458(void)

{
  return;
}



/* Entry: 10834845c; end: 108348483;  */

undefined8 FUN_10834845c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010724e5b8(param_1 + 8);
  func_0x00010827fe08();
  if (param_1 != 0) {
    FUN_10827f588();
  }
  return unaff_x19;
}



/* Entry: 108348484; end: 1083484d7;  */

void FUN_108348484(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x18;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083484d8; end: 10834854b;  */

void FUN_1083484d8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x18);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x18;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10834854c; end: 10834870f;  */

void FUN_10834854c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108348710; end: 10834875b;  */

void FUN_108348710(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010834967c();
  for (uVar1 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    func_0x000108349650();
    if ((int)param_1 != 0) {
      param_1 = auStack_40;
      FUN_108349368();
      func_0x000108349704();
      FUN_10839b6e4();
    }
  }
  return;
}



/* Entry: 10834875c; end: 10834879f;  */

void FUN_10834875c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010834967c();
  for (lVar1 = 0; lVar1 < param_3; lVar1 = lVar1 + 2) {
    func_0x000108349740();
    FUN_10839d530();
  }
  return;
}



/* Entry: 1083487a0; end: 1083487b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1083487a0(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  bool bVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 (*unaff_x22) [16];
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *puStack_4f8;
  undefined1 (*pauStack_4f0) [16];
  undefined1 **ppuStack_4e8;
  undefined1 (*pauStack_4e0) [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_12c;
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [16];
  byte bStack_c8;
  undefined1 auStack_c0 [16];
  float afStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  
  func_0x00010839e094(param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  if (!(bool)in_ZR) {
    func_0x00010839dff4();
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010839e088(0xffffffffffffffff);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    lStack_4c0 = extraout_x9 + 0x10;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010839e07c(&uStack_4d8);
    puVar5 = &stack0xffffffffffffffb0;
    func_0x00010812f180();
    ppuVar6 = &puStack_4f8;
    puStack_4f8 = puVar5;
    pauStack_4f0 = param_3;
    func_0x00010839dfb8();
    ppuStack_4e8 = ppuVar6;
    pauStack_4e0 = param_3;
    func_0x00010839e008();
    if (((ulong)ppuVar6 & 1) == 0) {
      func_0x00010839dfc4(&uStack_4d8);
    }
    func_0x00010839e1ac();
    FUN_10839aec8();
    pauVar4 = (undefined1 (*) [16])&uStack_4d8;
    func_0x00010834950c(pauVar4);
    return pauVar4;
  }
  func_0x00010839e1ac();
  pauVar4 = param_2;
  pauVar8 = unaff_x22;
  func_0x00010839c538();
  auVar1 = _UNK_10df1e6c0;
  uStack_80 = extraout_x8;
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    afStack_b0[0] = 0.0;
    afStack_b0[1] = 0.0;
    afStack_b0[2] = 0.0;
    afStack_b0[3] = 0.0;
  }
  else {
    if (*(long *)unaff_x22[1] == -1) goto LAB_10839b070;
    auVar11 = NEON_scvtf(*unaff_x22,4);
    afStack_b0[3] = auVar11._12_4_ + 1.0;
    afStack_b0[2] = auVar11._8_4_ + 1.0;
    afStack_b0[1] = auVar11._4_4_ + -1.0;
    afStack_b0[0] = auVar11._0_4_ + -1.0;
  }
  uStack_98 = 0x46fffe0046fffe00;
  uStack_a0 = 0xc6fffe00c6fffe00;
  uVar9 = 0;
  iVar7 = (int)param_3;
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  for (; uVar9 != iVar7 - 1; uVar9 = uVar9 + 1) {
    pauVar4 = (undefined1 (*) [16])(*param_2 + uVar9 * 8);
    param_3 = (undefined1 (*) [16])&uStack_a0;
    FUN_10835de90(pauVar4,param_3,auStack_90);
    if ((int)pauVar4 != 0) {
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        pauVar4 = (undefined1 (*) [16])auStack_90;
        param_3 = (undefined1 (*) [16])afStack_b0;
        FUN_10835de90(pauVar4,param_3,auStack_90);
        if ((int)pauVar4 == 0) goto LAB_10839b010;
      }
      uVar14 = NEON_fcvtzs(auStack_90[0],6,4);
      uVar12 = NEON_fcvtzs(auStack_90[1],6,4);
      if (unaff_x22 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
        pauVar4 = (undefined1 (*) [16])(uVar14 & 0xffffffff);
        param_3 = (undefined1 (*) [16])(uVar14 >> 0x20);
        FUN_10839b0f4(pauVar4,param_3,uVar12 & 0xffffffff,uVar12 >> 0x20,0);
      }
      else {
        uVar10 = NEON_smin(uVar12,uVar14,4);
        uVar13 = NEON_smax(uVar14,uVar12,4);
        auStack_c0._0_4_ = auVar1._0_4_ + ((int)uVar10 >> 6);
        auStack_c0._4_4_ = auVar1._4_4_ + (int)((long)uVar10 >> 0x26);
        auStack_c0._8_4_ = auVar1._8_4_ + ((int)uVar13 + 0x3f >> 6);
        auStack_c0._12_4_ = auVar1._12_4_ + ((int)((ulong)uVar13 >> 0x20) + 0x3f >> 6);
        param_3 = &auStack_c0;
        pauVar4 = unaff_x22;
        FUN_10839b0a4();
        if (((ulong)pauVar4 & 1) == 0) {
          pauVar4 = unaff_x22;
          func_0x00010834954c();
          if (((ulong)pauVar4 & 1) != 0) goto LAB_10839aff4;
          pauVar4 = (undefined1 (*) [16])auStack_110;
          param_3 = unaff_x22;
          FUN_1083903d0();
          uStack_12c = (undefined4)(uVar12 >> 0x20);
          while ((bStack_c8 & 1) == 0) {
            param_3 = (undefined1 (*) [16])(uVar14 >> 0x20);
            FUN_10839b0f4((int)uVar14,(undefined1 (*) [16])(uVar14 >> 0x20),uVar12 & 0xffffffff,
                          uStack_12c,auStack_d8);
            pauVar4 = (undefined1 (*) [16])auStack_110;
            FUN_108390454();
          }
        }
      }
    }
LAB_10839b010:
  }
LAB_10839b070:
  bVar2 = true;
  func_0x00010839c460(uStack_80);
  if (bVar2) {
    return pauVar4;
  }
  ___stack_chk_fail();
  if (*(long *)pauVar4[1] == -1) {
    return (undefined1 (*) [16])0x1;
  }
  FUN_10821a6d8();
  uVar3 = (uint)param_3;
  if (((ulong)param_3 & 1) == 0) {
    func_0x00010839c548();
    FUN_10821a044();
    pauVar4 = (undefined1 (*) [16])(ulong)(uVar3 ^ 1);
  }
  else {
    pauVar4 = (undefined1 (*) [16])0x1;
  }
  return pauVar4;
}



/* Entry: 1083487b4; end: 108348867;  */

void FUN_1083487b4(long param_1,long param_2,uint param_3,long *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_2 + 4);
  for (uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    fVar4 = (float)NEON_fminnm((int)pfVar1[-1],0x4effffff);
    if (fVar4 <= -2.1474835e+09) {
      fVar4 = -2.1474835e+09;
    }
    fVar5 = (float)NEON_fminnm((int)*pfVar1,0x4effffff);
    if (fVar5 <= -2.1474835e+09) {
      fVar5 = -2.1474835e+09;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_10838f8d4(uVar2,(int)fVar4,(int)fVar5);
    if ((int)uVar2 != 0) {
      (**(code **)(*param_4 + 0x10))(param_4,(int)fVar4,(int)fVar5,1);
    }
    pfVar1 = pfVar1 + 2;
  }
  return;
}



/* Entry: 108348868; end: 1083488ab;  */

void FUN_108348868(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010834967c();
  for (lVar1 = 0; lVar1 < param_3; lVar1 = lVar1 + 2) {
    func_0x000108349740();
    FUN_10839d434();
  }
  return;
}



/* Entry: 1083488ac; end: 1083488bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1083488ac(long param_1,ulong param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar16;
  ulong extraout_x8_00;
  int iVar17;
  int extraout_w9;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w13;
  int extraout_w13_00;
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 (*unaff_x23) [16];
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  int iVar23;
  undefined1 *puStack_6a0;
  undefined1 (*pauStack_698) [16];
  int iStack_690;
  int iStack_68c;
  int iStack_688;
  int iStack_684;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined **ppuStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 (*pauStack_648) [16];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 (*pauStack_618) [16];
  undefined1 (*pauStack_610) [16];
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 *puStack_4e8;
  undefined1 (*pauStack_4e0) [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  ulong uStack_178;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  int aiStack_110 [4];
  int aiStack_100 [4];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010839e094(param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  if (!(bool)in_ZR) {
    func_0x00010839dff4();
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010839e088(0xffffffffffffffff);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    lStack_4c0 = extraout_x9_01 + 0x10;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010839e07c(&uStack_4d8);
    uStack_68 = 0;
    puVar11 = &stack0xffffffffffffffb0;
    func_0x00010812f180();
    puStack_4e8 = puVar11;
    pauStack_4e0 = param_3;
    func_0x00010839e008();
    if (((ulong)puVar11 & 1) == 0) {
      func_0x00010839dfc4(&uStack_4d8);
    }
    func_0x00010839e1ac();
    FUN_10839c5a0();
    func_0x00010834950c(&uStack_4d8);
    return;
  }
  func_0x00010839e1ac();
  pauVar14 = unaff_x22;
  func_0x00010839deb8();
  ppuStack_f0 = &PTR_DAT_110a3d3a8;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  ppuStack_d8 = &PTR_FUN_110a3d208;
  uStack_98 = 0;
  ppuStack_a8 = &PTR_DAT_110a3d290;
  uStack_a0 = 0;
  aiStack_100[0] = 0;
  aiStack_100[1] = 0;
  aiStack_100[2] = 0;
  aiStack_100[3] = 0;
  aiStack_110[0] = 0;
  aiStack_110[1] = 0;
  aiStack_110[2] = 0;
  aiStack_110[3] = 0;
  auStack_120._8_8_ = UNK_10df1e6b0._8_8_;
  auStack_120._0_8_ = (undefined8)UNK_10df1e6b0;
  uStack_130 = 0;
  uStack_128 = 0;
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    auVar21 = NEON_scvtf(*unaff_x22,4);
    uStack_128 = auVar21._8_8_;
    uStack_130 = auVar21._0_8_;
  }
  uVar20 = 0;
  iVar12 = (int)param_3;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  pauVar10 = unaff_x22;
  uStack_70 = extraout_x8;
  do {
    uVar5 = uVar20 == iVar12 - 1;
    if ((bool)uVar5) {
      FUN_10839c3dc();
      func_0x00010839de28(uStack_70);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      pppuVar8 = &ppuStack_f0;
      FUN_10839c3dc();
      func_0x00010839dfb0();
      uStack_608 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      pauVar13 = param_3;
      pauStack_180 = pauVar10;
      uStack_178 = param_2;
      func_0x00010839e088(0xffffffffffffffff);
      lStack_5f0 = extraout_x9_00 + 0x10;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x00010839e07c(&uStack_608);
      uStack_198 = 0;
      ppuStack_678 = &PTR_DAT_110a3d3a8;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_668 = 0;
      ppuStack_660 = &PTR_FUN_110a3d208;
      uStack_640 = 0;
      uStack_638 = 0;
      uStack_620 = 0;
      ppuStack_630 = &PTR_DAT_110a3d290;
      uStack_628 = 0;
      uVar22 = NEON_fminnm(CONCAT44((int)(*(float *)(pppuVar8 + 1) + 1.0),(int)SUB84(*pppuVar8,0)),
                           0x4effffff4effffff,4);
      uVar22 = NEON_fmaxnm(uVar22,0xceffffffceffffff,4);
      iStack_690 = (int)(float)uVar22;
      iStack_688 = (int)(float)((ulong)uVar22 >> 0x20);
      uVar22 = NEON_fminnm(CONCAT44((int)(*(float *)((long)pppuVar8 + 0xc) + 1.0),
                                    (int)(float)((ulong)*pppuVar8 >> 0x20)),0x4effffff4effffff,4);
      uVar22 = NEON_fmaxnm(uVar22,0xceffffffceffffff,4);
      iStack_68c = (int)(float)uVar22;
      iStack_684 = (int)(float)((ulong)uVar22 >> 0x20);
      lVar16 = 0;
      if (pauVar13[3][0] == '\0') {
        lVar16 = 0x18;
      }
      puVar11 = *pauVar13 + lVar16;
      func_0x00010839dfb8();
      piVar9 = &iStack_690;
      puStack_6a0 = puVar11;
      pauStack_698 = pauVar13;
      func_0x00010821b838(piVar9,&puStack_6a0);
      if ((((ulong)piVar9 & 1) != 0) &&
         (pauVar10 = param_3, FUN_108349328(param_3,&iStack_690), ((ulong)pauVar10 & 1) == 0)) {
        pauVar10 = param_3;
        FUN_108349534(param_3,&iStack_690);
        if ((((ulong)pauVar10 & 1) == 0) &&
           ((pauVar10 = pauVar14, (param_3[3][0] & 1) != 0 ||
            (FUN_108387754(&uStack_608,param_3,pauVar14), pauVar14 = pauStack_188,
            pauVar10 = pauStack_188, param_3 = pauStack_190,
            pauStack_190 != (undefined1 (*) [16])0x0)))) {
          if (*(long *)param_3[1] == -1) {
            pauVar14 = (undefined1 (*) [16])&ppuStack_678;
          }
          else if (*(long *)param_3[1] == 0) {
            pauVar14 = (undefined1 (*) [16])&ppuStack_660;
            uStack_640 = *(undefined8 *)*param_3;
            uStack_638 = *(undefined8 *)(*param_3 + 8);
            pauStack_648 = pauVar10;
          }
          else {
            pauVar14 = (undefined1 (*) [16])&ppuStack_630;
            pauStack_618 = pauVar10;
            pauStack_610 = param_3;
          }
        }
        iVar12 = iStack_688 - iStack_690;
        iVar19 = iStack_684 - iStack_68c;
        if (iVar19 != 0 || iVar12 != 0) {
          if ((iVar12 >= 3 && iVar19 != 2) && (iVar12 < 3 || 1 < iVar19)) {
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar14 + 0x10));
            (**(code **)(*(long *)*pauVar14 + 0x28))
                      (pauVar14,iStack_690,iStack_68c + 1,1,iVar19 + -2);
            (**(code **)(*(long *)*pauVar14 + 0x28))
                      (pauVar14,iStack_688 + -1,iStack_68c + 1,1,iVar19 + -2);
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar14 + 0x10));
          }
          else {
            (**(code **)(*(long *)*pauVar14 + 0x28))(pauVar14,iStack_690,iStack_68c,iVar12,iVar19);
          }
        }
      }
      FUN_10839c3dc(&ppuStack_678);
      func_0x00010834950c(&uStack_608);
      return;
    }
    param_3 = &auStack_120;
    pauVar14 = (undefined1 (*) [16])&uStack_80;
    uVar7 = param_2;
    FUN_10835de90();
    if ((uVar7 & 1) != 0) {
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        iVar19 = (int)&uStack_80;
        param_3 = (undefined1 (*) [16])&uStack_130;
        pauVar14 = (undefined1 (*) [16])&uStack_80;
        FUN_10835de90();
        if (iVar19 == 0) goto LAB_10839c848;
      }
      uVar22 = NEON_fcvtzs(uStack_80,6,4);
      iVar19 = (int)(fStack_78 * 64.0);
      iVar18 = (int)(fStack_74 * 64.0);
      iVar4 = (int)uVar22;
      iVar23 = SUB84(uVar22,4);
      pauVar10 = unaff_x20;
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        aiStack_100[3] = *(int *)(*unaff_x22 + 0xc) << 6;
        aiStack_100[2] = *(int *)(*unaff_x22 + 8) << 6;
        aiStack_100[1] = *(int *)(*unaff_x22 + 4) << 6;
        aiStack_100[0] = *(int *)*unaff_x22 << 6;
        iVar15 = iVar19;
        aiStack_110._0_8_ = uVar22;
        if (iVar19 < iVar4) {
          aiStack_110[1] = iVar23;
          aiStack_110[0] = iVar19;
          iVar15 = iVar4;
        }
        iVar17 = iVar18;
        if (iVar18 < iVar23) {
          aiStack_110[1] = iVar18;
          iVar17 = iVar23;
        }
        aiStack_110[3] = iVar17 + 0x40;
        aiStack_110[2] = iVar15 + 0x40;
        uVar7 = 0;
        param_3 = (undefined1 (*) [16])aiStack_100;
        FUN_10821a044();
        if ((uVar7 & 1) == 0) goto LAB_10839c848;
        lVar16 = *(long *)unaff_x22[1];
        if (lVar16 == 0) {
          uVar7 = 0;
          param_3 = (undefined1 (*) [16])aiStack_110;
          func_0x000108219544();
          if ((uVar7 & 1) != 0) goto LAB_10839c768;
          lVar16 = *(long *)unaff_x22[1];
        }
        if (lVar16 == -1) {
          pauVar10 = (undefined1 (*) [16])&ppuStack_f0;
        }
        else {
          pauVar10 = (undefined1 (*) [16])&ppuStack_a8;
          if (lVar16 == 0) {
            pauVar10 = (undefined1 (*) [16])&ppuStack_d8;
          }
        }
      }
LAB_10839c768:
      uVar3 = iVar19 - iVar4;
      uVar2 = iVar18 - iVar23;
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < uVar1) {
        bVar6 = iVar4 == iVar19;
        func_0x00010839e158();
        if (!bVar6) {
          lVar16 = 0;
          if ((long)extraout_w8 != 0) {
            lVar16 = (long)(-(extraout_x9 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x9 & 0xffffffff) << 0x10) / (long)extraout_w8;
          }
          func_0x00010839df7c(lVar16);
          do {
            pauVar14 = (undefined1 (*) [16])(ulong)(uint)(iVar19 >> 0x10);
            param_3 = unaff_x23;
            (**(code **)(*(long *)*pauVar10 + 0x10))(pauVar10,unaff_x23,pauVar14,1);
            iVar19 = iVar19 + iVar18;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13 >> 6);
        }
      }
      else {
        bVar6 = iVar23 == iVar18;
        func_0x00010839e158();
        if (!bVar6) {
          lVar16 = 0;
          if ((long)extraout_w9 != 0) {
            lVar16 = (long)(-(extraout_x8_00 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x8_00 & 0xffffffff) << 0x10) / (long)extraout_w9;
          }
          func_0x00010839df7c(lVar16);
          do {
            param_3 = (undefined1 (*) [16])(ulong)(uint)(iVar19 >> 0x10);
            pauVar14 = unaff_x23;
            (**(code **)(*(long *)*pauVar10 + 0x10))(pauVar10,param_3,unaff_x23,1);
            iVar19 = iVar19 + iVar18;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13_00 >> 6);
        }
      }
    }
LAB_10839c848:
    uVar20 = uVar20 + 1;
  } while( true );
}



/* Entry: 1083488c0; end: 10834890b;  */

void FUN_1083488c0(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010834967c();
  for (uVar1 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    func_0x000108349650();
    if ((int)param_1 != 0) {
      param_1 = auStack_40;
      FUN_108349368();
      func_0x000108349704();
      FUN_108397bb4();
    }
  }
  return;
}



/* Entry: 10834890c; end: 108348c57;  */

void FUN_10834890c(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,float *param_6,float *param_7,float *param_8,float *param_9,
                  code *param_10)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  float *pfVar7;
  uint *puVar8;
  code **ppcVar9;
  long *plVar10;
  undefined1 *puVar11;
  float *pfVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  float *pfVar16;
  long *plVar17;
  ulong uVar18;
  float *pfVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuVar20;
  long lVar21;
  undefined8 *unaff_x20;
  float *unaff_x22;
  float *unaff_x23;
  code *unaff_x24;
  ulong uVar22;
  float *unaff_x25;
  uint *unaff_x26;
  long unaff_x27;
  float *unaff_x28;
  float fVar23;
  float fVar24;
  long *plStack_1fb0;
  long *plStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  long lStack_1f58;
  undefined1 auStack_1f50 [8];
  float fStack_1f48;
  float fStack_1f3c;
  code *pcStack_1f28;
  undefined1 auStack_1f20 [80];
  undefined1 uStack_1ed0;
  ulong uStack_1ec8;
  ulong uStack_1ec0;
  long alStack_1eb8 [7];
  undefined1 *puStack_1e80;
  undefined1 auStack_11b0 [32];
  undefined8 uStack_1190;
  float *pfStack_1180;
  long lStack_1178;
  uint *puStack_1170;
  float *pfStack_1168;
  code *pcStack_1160;
  float *pfStack_1158;
  float *pfStack_1150;
  float *pfStack_1148;
  undefined8 *puStack_1140;
  undefined8 *puStack_1138;
  undefined1 *puStack_1130;
  code *pcStack_1128;
  uint auStack_1118 [2];
  float *pfStack_1110;
  long lStack_1108;
  long lStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  float fStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined1 *puStack_1080;
  undefined8 uStack_1078;
  undefined1 auStack_1070 [1024];
  undefined8 uStack_c70;
  long lStack_c68;
  float *pfStack_c60;
  float afStack_c58 [64];
  float fStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined8 uStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001083496c4();
  uVar15 = (uint)param_6;
  uVar6 = uVar15 == 1;
  pfVar12 = (float *)((ulong)param_7 & 0xfffffffffffffffe);
  if (!(bool)uVar6) {
    pfVar12 = param_7;
  }
  pfVar16 = param_6;
  pfVar19 = param_9;
  pcVar5 = param_10;
  uStack_80 = extraout_x8;
  if ((pfVar12 != (float *)0x0) &&
     (unaff_x27 = param_5[8], unaff_x20 = param_5, (*(byte *)(unaff_x27 + 0x31) & 1) == 0)) {
    unaff_x26 = auStack_1118;
    uStack_10f8 = 0;
    uStack_10f0 = 0;
    uStack_10e0 = 0;
    uStack_10d8 = 0;
    uStack_10c0 = 0;
    uStack_10b8 = 0;
    uStack_10d0 = 0xffffffffffffffff;
    ppuStack_10c8 = &PTR_FUN_110a3cb68;
    uStack_10a0 = 0;
    uStack_1098 = 0;
    puStack_1080 = auStack_1070;
    uStack_1078 = 0x400;
    uStack_c70 = 0;
    if ((param_10 == (code *)0x0) &&
       (((uVar6 = uVar15 == 2, uVar15 < 3 && (*(long *)param_9 == 0)) &&
        (*(long *)(param_9 + 4) == 0)))) {
      fVar24 = param_9[0x10];
      fVar23 = 0.5;
      if (fVar24 != 0.0) {
        uVar6 = ((uint)param_9[0x12] & 0xc) == 4;
        if (!(bool)uVar6) {
          unaff_x25 = (float *)param_5[7];
          pfVar7 = unaff_x25;
          FUN_1082878d0();
          uVar6 = uVar15 == 0;
          uVar2 = (uint)pfVar7 ^ 1;
          if (!(bool)uVar6) {
            uVar2 = 1;
          }
          if ((uVar2 & 1) == 0) {
            fVar23 = ABS(*unaff_x25 - unaff_x25[4]);
            param_3 = 0x39800000;
            uVar6 = fVar23 == 0.00024414062;
            if (fVar23 <= 0.00024414062) {
              param_1 = fVar24 * ABS(*unaff_x25);
              param_2 = 0x3f000000;
              fVar23 = param_1 * 0.5;
              uVar6 = fVar23 == 0.0;
              if (0.0 < fVar23) goto LAB_108348a38;
            }
          }
        }
        goto LAB_1083489b8;
      }
LAB_108348a38:
      uVar6 = *(char *)(unaff_x27 + 0x30) == '\0';
      lVar21 = 0;
      if ((bool)uVar6) {
        lVar21 = 0x18;
      }
      FUN_10817500c(unaff_x27 + lVar21);
      uVar22 = 0;
      fStack_b58 = param_1;
      uStack_b54 = param_2;
      uStack_b50 = param_3;
      uStack_b4c = param_4;
      func_0x0001083486bc();
      if ((uVar22 & 1) == 0) goto LAB_1083489b8;
      lStack_1108 = 0;
      uStack_10f0 = CONCAT44(uStack_b4c,uStack_b50);
      uStack_10f8 = CONCAT44(uStack_b54,fStack_b58);
      pfVar19 = (float *)0x0;
      auStack_1118[0] = uVar15;
      pfStack_1110 = param_9;
      lStack_1100 = unaff_x27;
      fStack_10e8 = fVar23;
      FUN_1083493b4(&fStack_b58,param_5,0,param_9,0);
      lVar21 = lStack_1100;
      param_9 = (float *)CONCAT44(uStack_b54,fStack_b58);
      if ((*(byte *)(lStack_1100 + 0x30) & 1) == 0) {
        FUN_108387754(&uStack_10e0,lStack_1100,(float *)CONCAT44(uStack_b54,fStack_b58));
        lVar21 = lStack_c68;
        param_9 = pfStack_c60;
      }
      if (((uint)pfStack_1110[0x12] & 1) == 0) {
        if (fStack_10e8 <= 0.5) {
          ppuVar20 = &PTR_FUN_110a3e5a0;
LAB_108348b7c:
          param_10 = (code *)ppuVar20[auStack_1118[0]];
        }
        else {
          param_10 = FUN_1083488c0;
        }
      }
      else {
        if (pfStack_1110[0x10] == 0.0) {
          ppuVar20 = &PTR_FUN_110a3e588;
          goto LAB_108348b7c;
        }
        param_10 = (code *)0x0;
        if (((uint)pfStack_1110[0x12] & 0xc) != 4) {
          param_10 = FUN_108348710;
        }
      }
      unaff_x25 = (float *)(ulong)(uVar15 == 2);
      unaff_x27 = 0x20;
      unaff_x28 = afStack_c58;
      pfVar7 = param_8;
      lStack_1108 = lVar21;
      do {
        uVar15 = (uint)pfVar12;
        if (0x1f < (int)uVar15) {
          uVar15 = 0x20;
        }
        param_6 = (float *)(ulong)uVar15;
        pfVar16 = afStack_c58;
        param_7 = pfVar7;
        param_8 = param_6;
        FUN_1083645e0(param_5[7],pfVar16,pfVar7);
        fVar23 = afStack_c58[0] - afStack_c58[0];
        for (lVar21 = 1; lVar21 < (int)(uVar15 << 1); lVar21 = lVar21 + 1) {
          fVar23 = fVar23 * unaff_x28[lVar21];
        }
        uVar6 = !NAN(fVar23);
        if (NAN(fVar23)) break;
        pfVar16 = afStack_c58;
        param_7 = param_6;
        param_8 = param_9;
        (*param_10)(auStack_1118,pfVar16,param_6);
        uVar6 = (long)pfVar12 - (long)(int)uVar15 == 0;
        if ((bool)uVar6) break;
        pfVar7 = pfVar7 + ((long)(int)uVar15 - (long)unaff_x25) * 2;
        pfVar12 = (float *)(((long)pfVar12 - (long)(int)uVar15) + (long)unaff_x25);
      } while (pfVar12 != (float *)0x0);
      func_0x0001083496d4();
    }
    else {
LAB_1083489b8:
      param_7 = pfVar12;
      pcVar5 = param_10;
      FUN_10834a5e4(param_5,param_6,pfVar12,param_8,param_9);
    }
    param_5 = &uStack_10e0;
    func_0x00010834950c();
    unaff_x22 = param_6;
    unaff_x23 = param_9;
    unaff_x24 = param_10;
  }
  func_0x000108349698(uStack_80);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083496d4();
  puVar8 = unaff_x26 + 0xe;
  func_0x00010834950c();
  func_0x0001083496ac();
  pcStack_1128 = FUN_108348c58;
  pfStack_1180 = unaff_x28;
  lStack_1178 = unaff_x27;
  puStack_1170 = unaff_x26;
  pfStack_1168 = unaff_x25;
  pcStack_1160 = unaff_x24;
  pfStack_1158 = unaff_x23;
  pfStack_1150 = unaff_x22;
  pfStack_1148 = pfVar12;
  puStack_1140 = unaff_x20;
  puStack_1138 = param_5;
  puStack_1130 = &stack0xfffffffffffffff0;
  func_0x0001083496c4();
  uStack_1190 = extraout_x8_00;
  if ((((*(byte *)(*(long *)(puVar8 + 0x10) + 0x31) & 1) == 0) && (pfVar16[10] != 0.0)) &&
     ((pfVar16[0xb] != 0.0 && (pfVar16[8] != 0.0)))) {
    auStack_1f20[0] = 0;
    uStack_1ed0 = 0;
    uVar6 = ((byte)pcVar5[0x48] & 0xc0) == 0;
    pcStack_1f28 = pcVar5;
    if (!(bool)uVar6) {
      ppcVar9 = &pcStack_1f28;
      FUN_10827d610();
      *(uint *)(ppcVar9 + 9) = *(uint *)(ppcVar9 + 9) & 0xffffff3f;
    }
    FUN_1081600e0(auStack_1f50,*(undefined8 *)(puVar8 + 0xe),param_7);
    uVar22 = *(ulong *)(puVar8 + 0x10);
    func_0x00010834972c();
    alStack_1eb8[0] = 0;
    alStack_1eb8[1] = 0;
    plVar17 = alStack_1eb8;
    FUN_108364f90(auStack_1f50,plVar17,&uStack_1ec8,1);
    plVar10 = alStack_1eb8;
    func_0x00010812f180();
    plStack_1fb0 = plVar10;
    plStack_1fa8 = plVar17;
    FUN_108349328(uVar22,&plStack_1fb0);
    if ((uVar22 & 1) == 0) {
      if (0x1a < (uint)pfVar16[8]) goto LAB_108348f4c;
      uVar6 = (1 << (ulong)((uint)pfVar16[8] & 0x1f) & 0x7affffdU) == 0;
      if (!(bool)uVar6) {
        alStack_1eb8[0] = *(long *)(pfVar16 + 10);
        puVar11 = auStack_1f50;
        FUN_1083658c8(puVar11,alStack_1eb8,pfVar19,*(uint *)(pcStack_1f28 + 0x48) & 1);
        if ((int)puVar11 != 0) {
          uStack_1f90 = 0;
          plStack_1fa8 = (long *)0x0;
          plStack_1fb0 = (long *)0x0;
          uStack_1f98 = 0;
          uStack_1fa0 = 0;
          pfVar12 = pfVar16;
          FUN_108330de8(pfVar16,&plStack_1fb0);
          if (((ulong)pfVar12 & 1) == 0) {
LAB_108348e94:
            func_0x00010834968c();
            goto LAB_108348f14;
          }
          fVar23 = (float)NEON_fminnm((float)(double)(long)(fStack_1f48 + 0.5),0x4effffff);
          if (fVar23 <= -2.1474835e+09) {
            fVar23 = -2.1474835e+09;
          }
          uVar22 = (ulong)(uint)(int)fVar23;
          fVar23 = (float)NEON_fminnm((float)(double)(long)(fStack_1f3c + 0.5),0x4effffff);
          if (fVar23 <= -2.1474835e+09) {
            fVar23 = -2.1474835e+09;
          }
          uVar18 = (ulong)(uint)(int)fVar23;
          uVar13 = *(undefined8 *)(puVar8 + 0x10);
          FUN_108348fbc(uVar13,uVar22,uVar18,uStack_1f90 & 0xffffffff,uStack_1f90._4_4_);
          if ((int)uVar13 != 0) {
            func_0x000108349610(alStack_1eb8,0xd04);
            lStack_1f58 = *(long *)(*(long *)(puVar8 + 0x10) + 0x38);
            if (lStack_1f58 != 0) {
              piVar1 = (int *)(lStack_1f58 + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            puVar14 = puVar8 + 2;
            FUN_108336b30(puVar14,pcStack_1f28,&plStack_1fb0,uVar22,uVar18,auStack_11b0,&lStack_1f58
                         );
            func_0x000106f47224(&lStack_1f58);
            if (puVar14 != (uint *)0x0) {
              FUN_108219ff8(uVar22,uVar18,uStack_1f90 & 0xffffffff,uStack_1f90._4_4_);
              uStack_1ec8 = uVar22;
              uStack_1ec0 = uVar18;
              FUN_108397b40(&uStack_1ec8,*(undefined8 *)(puVar8 + 0x10),puVar14);
              func_0x0001083496fc();
              goto LAB_108348e94;
            }
            func_0x0001083496fc();
          }
          func_0x00010834968c();
        }
      }
      FUN_1083495b0(alStack_1eb8,puVar8);
      puStack_1e80 = auStack_1f50;
      FUN_108349014(&plStack_1fb0,pcStack_1f28,pfVar16,pfVar19,0);
      func_0x00010834972c();
      if (param_8 == (float *)0x0) {
        FUN_1082b0290(alStack_1eb8,&uStack_1ec8,&plStack_1fb0);
      }
      else {
        FUN_1083497ec(puVar8,&uStack_1ec8,&plStack_1fb0,param_7,param_8);
      }
      FUN_108375e94(&plStack_1fb0);
      FUN_10814ca20(alStack_1eb8);
    }
LAB_108348f14:
    FUN_10819a688(auStack_1f20);
  }
  func_0x000108349698(uStack_1190);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_108348f4c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108348f50);
  (*pcVar5)();
}



/* Entry: 108348c58; end: 108348fbb;  */

void FUN_108348c58(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  float fVar13;
  undefined8 *puStack_e90;
  undefined8 *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  long lStack_e38;
  undefined1 auStack_e30 [8];
  float fStack_e28;
  float fStack_e1c;
  long lStack_e08;
  undefined1 auStack_e00 [80];
  undefined1 uStack_db0;
  ulong uStack_da8;
  ulong uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 *puStack_d60;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  func_0x0001083496c4();
  uStack_70 = extraout_x8;
  if (((((*(byte *)(*(long *)(param_1 + 0x40) + 0x31) & 1) == 0) && (*(int *)(param_2 + 0x28) != 0))
      && (*(int *)(param_2 + 0x2c) != 0)) && (*(int *)(param_2 + 0x20) != 0)) {
    auStack_e00[0] = 0;
    uStack_db0 = 0;
    in_ZR = (*(byte *)(param_6 + 0x48) & 0xc0) == 0;
    lStack_e08 = param_6;
    if (!(bool)in_ZR) {
      plVar5 = &lStack_e08;
      FUN_10827d610();
      *(uint *)(plVar5 + 9) = *(uint *)(plVar5 + 9) & 0xffffff3f;
    }
    FUN_1081600e0(auStack_e30,*(undefined8 *)(param_1 + 0x38),param_3);
    uVar12 = *(ulong *)(param_1 + 0x40);
    func_0x00010834972c();
    uStack_d98 = 0;
    uStack_d90 = 0;
    puVar10 = &uStack_d98;
    FUN_108364f90(auStack_e30,puVar10,&uStack_da8,1);
    puVar6 = &uStack_d98;
    func_0x00010812f180();
    puStack_e90 = puVar6;
    puStack_e88 = puVar10;
    FUN_108349328(uVar12,&puStack_e90);
    if ((uVar12 & 1) == 0) {
      if (0x1a < *(uint *)(param_2 + 0x20)) goto LAB_108348f4c;
      in_ZR = (1 << (ulong)(*(uint *)(param_2 + 0x20) & 0x1f) & 0x7affffdU) == 0;
      if (!(bool)in_ZR) {
        uStack_d98 = *(undefined8 *)(param_2 + 0x28);
        puVar7 = auStack_e30;
        FUN_1083658c8(puVar7,&uStack_d98,param_5,*(uint *)(lStack_e08 + 0x48) & 1);
        if ((int)puVar7 != 0) {
          uStack_e70 = 0;
          puStack_e88 = (undefined8 *)0x0;
          puStack_e90 = (undefined8 *)0x0;
          uStack_e78 = 0;
          uStack_e80 = 0;
          uVar12 = param_2;
          FUN_108330de8(param_2,&puStack_e90);
          if ((uVar12 & 1) == 0) {
LAB_108348e94:
            func_0x00010834968c();
            goto LAB_108348f14;
          }
          fVar13 = (float)NEON_fminnm((float)(double)(long)(fStack_e28 + 0.5),0x4effffff);
          if (fVar13 <= -2.1474835e+09) {
            fVar13 = -2.1474835e+09;
          }
          uVar12 = (ulong)(uint)(int)fVar13;
          fVar13 = (float)NEON_fminnm((float)(double)(long)(fStack_e1c + 0.5),0x4effffff);
          if (fVar13 <= -2.1474835e+09) {
            fVar13 = -2.1474835e+09;
          }
          uVar11 = (ulong)(uint)(int)fVar13;
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          FUN_108348fbc(uVar8,uVar12,uVar11,uStack_e70 & 0xffffffff,uStack_e70._4_4_);
          if ((int)uVar8 != 0) {
            func_0x000108349610(&uStack_d98,0xd04);
            lStack_e38 = *(long *)(*(long *)(param_1 + 0x40) + 0x38);
            if (lStack_e38 != 0) {
              piVar1 = (int *)(lStack_e38 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lVar9 = param_1 + 8;
            FUN_108336b30(lVar9,lStack_e08,&puStack_e90,uVar12,uVar11,auStack_90,&lStack_e38);
            func_0x000106f47224(&lStack_e38);
            if (lVar9 != 0) {
              FUN_108219ff8(uVar12,uVar11,uStack_e70 & 0xffffffff,uStack_e70._4_4_);
              uStack_da8 = uVar12;
              uStack_da0 = uVar11;
              FUN_108397b40(&uStack_da8,*(undefined8 *)(param_1 + 0x40),lVar9);
              func_0x0001083496fc();
              goto LAB_108348e94;
            }
            func_0x0001083496fc();
          }
          func_0x00010834968c();
        }
      }
      FUN_1083495b0(&uStack_d98,param_1);
      puStack_d60 = auStack_e30;
      FUN_108349014(&puStack_e90,lStack_e08,param_2,param_5,0);
      func_0x00010834972c();
      if (param_4 == 0) {
        FUN_1082b0290(&uStack_d98,&uStack_da8,&puStack_e90);
      }
      else {
        FUN_1083497ec(param_1,&uStack_da8,&puStack_e90,param_3,param_4);
      }
      FUN_108375e94(&puStack_e90);
      FUN_10814ca20(&uStack_d98);
    }
LAB_108348f14:
    FUN_10819a688(auStack_e00);
  }
  func_0x000108349698(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108348f4c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108348f50);
  (*pcVar4)();
}



/* Entry: 108348fbc; end: 108349013;  */

long FUN_108348fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return 1;
  }
  FUN_108219ff8(param_2,param_3,param_4,param_5);
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_108349534(param_1,&uStack_30);
  return param_1;
}



/* Entry: 108349014; end: 10834909f;  */

void FUN_108349014(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x000108349718();
  FUN_108375f34();
  FUN_1083bb728(&uStack_48);
  uVar1 = uStack_48;
  uStack_48 = 0;
  func_0x000108114f18(unaff_x19 + 8,uVar1);
  func_0x000106f47224(&uStack_48);
  return;
}



/* Entry: 1083490a0; end: 1083490a3;  */

undefined8 * FUN_1083490a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e608;
  FUN_10810a400(param_1 + 3);
  return param_1;
}



/* Entry: 1083490a4; end: 108349327;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_1083490a4(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  undefined1 auVar9 [16];
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e58;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined4 uStack_e28;
  undefined8 uStack_e24;
  undefined4 uStack_e1c;
  undefined8 uStack_e18;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  long alStack_e08 [5];
  ulong uStack_de0;
  undefined4 uStack_ddc;
  undefined1 auStack_dd0 [24];
  long lStack_db8;
  uint uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 uStack_d77;
  undefined1 auStack_d70 [3336];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0001083496c4();
  puVar5 = param_1;
  uStack_48 = extraout_x8;
  if (((((*(byte *)(*(long *)(param_1 + 0x40) + 0x31) & 1) != 0) || (*(int *)(param_2 + 0x28) == 0))
      || (*(int *)(param_2 + 0x2c) == 0)) || (*(int *)(param_2 + 0x20) == 0)) goto LAB_1083492ac;
  uVar7 = param_3;
  uVar8 = param_4;
  FUN_108219ff8();
  uStack_d78 = (undefined1)uVar8;
  uStack_d77 = (undefined7)((ulong)uVar8 >> 8);
  puVar5 = *(undefined1 **)(param_1 + 0x40);
  uStack_d80 = uVar7;
  FUN_108349328(puVar5,&uStack_d80);
  if (((ulong)puVar5 & 1) != 0) goto LAB_1083492ac;
  FUN_108375f34(auStack_dd0,param_5);
  uStack_d88 = uStack_d88 & 0xffffff3f;
  uStack_de0 = 0;
  alStack_e08[2] = 0;
  alStack_e08[1] = 0;
  alStack_e08[4] = 0;
  alStack_e08[3] = 0;
  uVar6 = param_2;
  FUN_108330de8(param_2,alStack_e08 + 1);
  if ((uVar6 & 1) != 0) {
    if (lStack_db8 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      FUN_108348fbc(uVar7,param_3,param_4,uStack_de0 & 0xffffffff,uStack_ddc);
      if ((int)uVar7 != 0) {
        func_0x000108349610(auStack_d70,0xd04);
        alStack_e08[0] = *(long *)(*(long *)(param_1 + 0x40) + 0x38);
        if (alStack_e08[0] != 0) {
          piVar1 = (int *)(alStack_e08[0] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar5 = param_1 + 8;
        FUN_108336b30(puVar5,auStack_dd0,alStack_e08 + 1,param_3,param_4,auStack_68,alStack_e08);
        func_0x000106f47224(alStack_e08);
        if (puVar5 != (undefined1 *)0x0) {
          FUN_108397b40(&uStack_d80,*(undefined8 *)(param_1 + 0x40),puVar5);
          func_0x0001083496e0();
          goto LAB_1083492a0;
        }
        func_0x0001083496e0();
      }
    }
    auVar9[8] = uStack_d78;
    auVar9._0_8_ = uStack_d80;
    auVar9[9] = (char)uStack_d77;
    auVar9[10] = (char)((uint7)uStack_d77 >> 8);
    auVar9[0xb] = (char)((uint7)uStack_d77 >> 0x10);
    auVar9[0xc] = (char)((uint7)uStack_d77 >> 0x18);
    auVar9[0xd] = (char)((uint7)uStack_d77 >> 0x20);
    auVar9[0xe] = (char)((uint7)uStack_d77 >> 0x28);
    auVar9[0xf] = (char)((uint7)uStack_d77 >> 0x30);
    auVar9 = NEON_scvtf(auVar9,4);
    uStack_e38 = auVar9._8_8_;
    uStack_e40 = auVar9._0_8_;
    in_ZR = CONCAT13((byte)((ulong)uStack_d80 >> 0x38) | (byte)((ulong)uStack_d80 >> 0x18),
                     CONCAT12((byte)((ulong)uStack_d80 >> 0x30) | (byte)((ulong)uStack_d80 >> 0x10),
                              CONCAT11((byte)((ulong)uStack_d80 >> 0x28) |
                                       (byte)((ulong)uStack_d80 >> 8),
                                       (byte)((ulong)uStack_d80 >> 0x20) | (byte)uStack_d80))) == 0;
    uStack_e0c = 0x10;
    if (!(bool)in_ZR) {
      uStack_e0c = 0x11;
    }
    uStack_e30 = 0x3f800000;
    uStack_e28 = auVar9._0_4_;
    uStack_e24 = 0x3f80000000000000;
    uStack_e1c = auVar9._4_4_;
    uStack_e18 = 0;
    uStack_e10 = 0x3f800000;
    uStack_e90 = 0;
    uStack_e88 = 0;
    uStack_e80 = 0;
    FUN_108349014(auStack_d70,auStack_dd0,param_2,&uStack_e90,&uStack_e30);
    FUN_1083495b0(&uStack_e90,param_1);
    uStack_e58 = 0x113254e20;
    FUN_1082b0290(&uStack_e90,&uStack_e40,auStack_d70);
    FUN_10814ca20(&uStack_e90);
    FUN_108375e94(auStack_d70);
  }
LAB_1083492a0:
  func_0x0001083496f0();
  puVar5 = auStack_dd0;
  FUN_108375e94(puVar5);
LAB_1083492ac:
  func_0x000108349698(uStack_48);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001083496e0();
  func_0x0001083496f0();
  puVar5 = auStack_dd0;
  FUN_108375e94();
  func_0x0001083496ac();
  lVar2 = 0;
  if (puVar5[0x30] == '\0') {
    lVar2 = 0x18;
  }
  puVar5 = puVar5 + lVar2;
  FUN_10821a044(puVar5);
  return (undefined1 *)(ulong)((uint)puVar5 ^ 1);
}



/* Entry: 108349328; end: 108349367;  */

uint FUN_108349328(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar1 = 0x18;
  }
  param_1 = param_1 + lVar1;
  FUN_10821a044(param_1);
  return (uint)param_1 ^ 1;
}



/* Entry: 108349368; end: 1083493b3;  */

undefined1  [16] FUN_108349368(float *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = NEON_fminnm(CONCAT44(param_1[2] * 65536.0,*param_1 * 65536.0),0x4effffff4effffff,4);
  uVar4 = NEON_fmaxnm(uVar3,0xceffffffceffffff,4);
  uVar3 = NEON_fminnm(CONCAT44(param_1[3] * 65536.0,param_1[1] * 65536.0),0x4effffff4effffff,4);
  uVar3 = NEON_fmaxnm(uVar3,0xceffffffceffffff,4);
  iVar1 = (int)(float)uVar3;
  iVar2 = (int)(float)((ulong)uVar3 >> 0x20);
  auVar5[4] = (char)iVar1;
  auVar5._0_4_ = (int)(float)uVar4;
  auVar5[5] = (char)((uint)iVar1 >> 8);
  auVar5[6] = (char)((uint)iVar1 >> 0x10);
  auVar5[7] = (char)((uint)iVar1 >> 0x18);
  auVar5[0xc] = (char)iVar2;
  auVar5._8_4_ = (int)(float)((ulong)uVar4 >> 0x20);
  auVar5[0xd] = (char)((uint)iVar2 >> 8);
  auVar5[0xe] = (char)((uint)iVar2 >> 0x10);
  auVar5[0xf] = (char)((uint)iVar2 >> 0x18);
  return auVar5;
}



/* Entry: 1083493b4; end: 10834941f;  */

void FUN_1083493b4(undefined8 *param_1)

{
  func_0x000108349718();
  *param_1 = 0;
  FUN_1083494dc(param_1 + 1,0xab0);
  FUN_108349420();
  return;
}



/* Entry: 108349420; end: 1083494db;  */

long FUN_108349420(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pcVar3 = *(code **)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  lStack_28 = *(long *)(*(long *)(param_2 + 0x40) + 0x38);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = *(undefined8 **)(param_2 + 0x48);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_38 = 0;
    uStack_30 = 0x3f000000;
  }
  else {
    uStack_38 = *puVar6;
    uStack_30 = puVar6[1];
  }
  param_2 = param_2 + 8;
  (*pcVar3)(param_2,lVar2,param_4,param_1 + 0x157,param_5,&lStack_28,&uStack_38);
  *param_1 = param_2;
  func_0x000106f47224(&lStack_28);
  return *param_1;
}



/* Entry: 1083494dc; end: 108349533;  */

long FUN_1083494dc(long param_1,undefined8 param_2)

{
  FUN_10840f6d0(param_1 + 0xab0,param_1,0xab0,param_2);
  return param_1;
}



/* Entry: 108349534; end: 1083495af;  */

byte * FUN_108349534(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if ((char)param_1[0xc] != '\x01') {
    pbVar6 = (byte *)(param_1 + 6);
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar7 = param_2[2];
    iVar3 = param_2[3];
    if (*(long *)(param_1 + 10) != 0) {
      pbVar5 = pbVar6;
      iStack_50 = iVar1;
      iStack_4c = iVar2;
      iStack_48 = iVar7;
      iStack_44 = iVar3;
      func_0x000108219544(pbVar6,&iStack_50);
      if ((int)pbVar5 != 0) {
        iStack_50 = 0;
        pbVar4 = pbVar6;
        FUN_10832e534(pbVar6,iVar2,&iStack_50);
        pbVar5 = (byte *)0x0;
        if (iVar3 <= iStack_50) {
          func_0x00010832f788(pbVar6,pbVar4);
          iVar7 = iVar7 - iVar1;
          while( true ) {
            pbVar5 = (byte *)(ulong)(pbVar6[1] == 0xff);
            if (pbVar6[1] != 0xff || iVar7 <= (int)uStack_54) break;
            iVar7 = iVar7 - uStack_54;
            uStack_54 = (uint)pbVar6[2];
            pbVar6 = pbVar6 + 2;
          }
        }
      }
      return pbVar5;
    }
    return (byte *)0x0;
  }
  if (*param_2 < param_2[2]) {
    if ((((param_2[1] < param_2[3]) && (*(long *)(param_1 + 4) == 0)) && (*param_1 <= *param_2)) &&
       ((param_1[1] <= param_2[1] && (param_2[2] <= param_1[2])))) {
      return (byte *)(ulong)(param_2[3] <= param_1[3]);
    }
  }
  return (byte *)0x0;
}



/* Entry: 1083495b0; end: 1083495cf;  */

void FUN_1083495b0(undefined8 *param_1)

{
  FUN_1083495d0();
  *param_1 = &PTR_FUN_110a3e568;
  return;
}


