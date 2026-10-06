/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083a15e8; end: 1083a160f;  */

undefined8 * FUN_1083a15e8(undefined8 *param_1)

{
  func_0x0001083a0fdc(*param_1);
  return param_1;
}



/* Entry: 1083a1610; end: 1083a16a7;  */

long FUN_1083a1610(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10840f740(param_1 + 0x158);
  FUN_1083153b0(param_1 + 0x148);
  func_0x0001083a1674(param_1 + 0x130);
  FUN_1083150d0(param_1 + 0x128);
  FUN_108410074(param_1 + 0x110);
  func_0x0001083a261c(param_1 + 0x68);
  return param_1;
}



/* Entry: 1083a16a8; end: 1083a16bf;  */

void FUN_1083a16a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083a16c0; end: 1083a173b;  */

void FUN_1083a16c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001083a18cc();
  func_0x0001083a192c();
  *(undefined8 **)(unaff_x20 + 8) = param_1 + 6;
  puVar1 = (undefined8 *)*unaff_x19;
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  uVar2 = puVar1[2];
  uVar6 = puVar1[5];
  uVar5 = puVar1[4];
  param_1[3] = puVar1[3];
  param_1[2] = uVar2;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  return;
}



/* Entry: 1083a173c; end: 1083a1823;  */

long * FUN_1083a173c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar5 = *param_1;
  lVar8 = param_1[1] - lVar5;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar9 = *plStack_58;
    uVar6 = lVar9 - lVar5;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1083a1820;
      lVar3 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8);
    *puVar2 = *param_2;
    _memcpy(puVar2 + -(lVar8 >> 3),lVar5,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar3 + uVar7 * 8;
    lStack_78 = lVar5;
    lStack_70 = lVar5;
    lStack_68 = lVar5;
    lStack_60 = lVar9;
    FUN_1083a1838(&lStack_78);
    return puVar2 + 1;
  }
  FUN_1083a1824();
LAB_1083a1820:
  func_0x000104bd35f4();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = plVar4[2];
  while (lVar5 != plVar4[1]) {
    lVar5 = lVar5 + -8;
    plVar4[2] = lVar5;
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 1083a1824; end: 1083a1837;  */

long * FUN_1083a1824(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -8;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1083a1838; end: 1083a1877;  */

long * FUN_1083a1838(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083a1878; end: 1083a193f;  */

undefined8 * FUN_1083a1878(void)

{
  undefined8 in_stack_00000008;
  
  func_0x0001083a0fdc(in_stack_00000008);
  return &stack0x00000008;
}



/* Entry: 1083a1940; end: 1083a19c3;  */

undefined8 FUN_1083a1940(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam00000001138270a8 & 1) == 0) {
    iVar1 = 0x138270a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x58;
      __Znwm();
      FUN_1083a2024();
      uRam00000001138270a0 = uVar2;
      ___cxa_guard_release(0x1138270a8);
    }
  }
  return uRam00000001138270a0;
}



/* Entry: 1083a19c4; end: 1083a1a9b;  */

/* WARNING: Removing unreachable block (ram,0x0001083a1a40) */

void FUN_1083a19c4(long param_1)

{
  long *unaff_x19;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001083a2558();
  lStack_38 = param_1 + 8;
  func_0x0001081efc58();
  FUN_1083a1a9c();
  if (*unaff_x19 == 0) {
    FUN_1083a1b44(&uStack_40);
    uStack_40 = 0;
    func_0x0001083a216c();
    FUN_1083145d8(&uStack_40);
  }
  func_0x0001083a2514();
  FUN_1081efc78(&lStack_38);
  return;
}



/* Entry: 1083a1a9c; end: 1083a1b43;  */

void FUN_1083a1a9c(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  
  func_0x0001083a2558();
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
LAB_1083a1ac8:
    plVar7 = (long *)(unaff_x20 + 0x28);
    FUN_1083a1d48();
    if (plVar7 == (long *)0x0) {
      lVar9 = 0;
      goto LAB_1083a1b30;
    }
    lVar9 = *plVar7;
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == lVar9) {
      if (lVar9 == 0) goto LAB_1083a1b30;
    }
    else {
      lVar2 = *(long *)(lVar9 + 0x178);
      lVar3 = *(long *)(lVar9 + 0x180);
      *(long *)(lVar3 + 0x178) = lVar2;
      if (lVar2 == 0) {
        *(long *)(unaff_x20 + 0x20) = lVar3;
      }
      else {
        *(long *)(lVar2 + 0x180) = lVar3;
      }
      *(long *)(lVar8 + 0x180) = lVar9;
      *(long *)(lVar9 + 0x178) = lVar8;
      *(undefined8 *)(lVar9 + 0x180) = 0;
      *(long *)(unaff_x20 + 0x18) = lVar9;
    }
  }
  else {
    uVar6 = *(ulong *)(lVar9 + 0x68);
    func_0x000108346878();
    if ((uVar6 & 1) == 0) goto LAB_1083a1ac8;
  }
  piVar1 = (int *)(lVar9 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_1083a1b30:
  *unaff_x19 = lVar9;
  return;
}



/* Entry: 1083a1b44; end: 1083a1c0f;  */

void FUN_1083a1b44(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  FUN_108315064(&lStack_40,param_3);
  uStack_48 = param_2;
  FUN_1083a1ddc(param_1,&uStack_48,param_3,&lStack_40,&uStack_38,param_5);
  lStack_50 = *param_1;
  if (lStack_50 != 0) {
    piVar1 = (int *)(lStack_50 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1083a1ec8(param_2,&lStack_50);
  FUN_1083145d8(&lStack_50);
  lVar4 = lStack_40;
  lStack_40 = 0;
  if (lVar4 != 0) {
    FUN_1083a24d8();
  }
  return;
}



/* Entry: 1083a1c10; end: 1083a1c3b;  */

undefined8 FUN_1083a1c10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001083a216c(param_1,uVar1);
  return param_1;
}



/* Entry: 1083a1c3c; end: 1083a1d13;  */

ulong FUN_1083a1c3c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar3 = iVar6 - *(int *)(param_1 + 0x48);
  if (iVar3 <= iVar6 >> 2) {
    iVar3 = iVar6 >> 2;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (iVar6 <= *(int *)(param_1 + 0x48)) {
    iVar3 = 0;
  }
  uVar5 = 0;
  if (*(ulong *)(param_1 + 0x38) <= uVar2) {
    uVar5 = uVar2 - *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  uVar1 = uVar5;
  if (uVar5 <= uVar2 >> 2) {
    uVar1 = uVar2 >> 2;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar1;
  }
  if ((iVar3 == 0) && (uVar2 == 0)) {
    return 0;
  }
  uVar5 = 0;
  iVar6 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  do {
    do {
      lVar8 = lVar7;
      if (lVar8 == 0) {
        return uVar5;
      }
      if (uVar2 <= uVar5 && iVar3 <= iVar6) {
        return uVar5;
      }
      lVar7 = *(long *)(lVar8 + 0x180);
      plVar4 = *(long **)(lVar8 + 0x188);
    } while ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 0x10))(), (int)plVar4 == 0));
    uVar5 = *(long *)(lVar8 + 400) + uVar5;
    iVar6 = iVar6 + 1;
    FUN_1083a1f58(param_1,lVar8);
  } while( true );
}



/* Entry: 1083a1d14; end: 1083a1d47;  */

void FUN_1083a1d14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1083a19c4(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x0001083a2568();
  return;
}



/* Entry: 1083a1d48; end: 1083a1ddb;  */

uint * FUN_1083a1d48(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x0001083a2578();
  uVar4 = *param_2;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = uVar5 - 1 & uVar4;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar2 * 0x10);
    uVar6 = *puVar1;
    if (uVar6 == 0) break;
    if ((uVar4 == uVar6) && (uVar7 = unaff_x19, func_0x000108346878(), (uVar7 & 1) != 0)) {
      return puVar1 + 2;
    }
    uVar6 = 0;
    if ((int)uVar2 < 1) {
      uVar6 = uVar5;
    }
    uVar2 = (uVar2 + uVar6) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 1083a1ddc; end: 1083a1ec7;  */

void FUN_1083a1ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = 0x1a0;
  __Znwm();
  plVar3 = (long *)*param_4;
  *param_4 = 0;
  lVar2 = *param_6;
  *param_6 = 0;
  FUN_1083a0e78();
  *param_1 = uVar1;
  if (lVar2 != 0) {
    FUN_1083a24d8();
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083a1e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 1083a1ec8; end: 1083a1f57;  */

void FUN_1083a1ec8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lStack_28 = lVar2;
  FUN_1083a1fc0(param_1 + 0x28,&lStack_28);
  func_0x0001083a2568();
  lVar1 = *(long *)(lVar2 + 400);
  *(ulong *)(param_1 + 0x4c) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
                (uint)(*(long *)(lVar2 + 0x188) != 0),(int)*(undefined8 *)(param_1 + 0x4c) + 1);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar1;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x180) = lVar2;
    *(long *)(lVar2 + 0x178) = lVar1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    *(long *)(param_1 + 0x20) = lVar2;
  }
  *(long *)(param_1 + 0x18) = lVar2;
  return;
}



/* Entry: 1083a1f58; end: 1083a1fbf;  */

undefined4 FUN_1083a1f58(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  lVar17 = *(long *)(param_2 + 400);
  *(ulong *)(param_1 + 0x4c) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) -
                (uint)(*(long *)(param_2 + 0x188) != 0),(int)*(undefined8 *)(param_1 + 0x4c) + -1);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) - lVar17;
  lVar17 = *(long *)(param_2 + 0x178);
  lVar5 = *(long *)(param_2 + 0x180);
  if (lVar5 == 0) {
    *(long *)(param_1 + 0x18) = lVar17;
  }
  else {
    *(long *)(lVar5 + 0x178) = lVar17;
  }
  if (lVar17 == 0) {
    *(long *)(param_1 + 0x20) = lVar5;
  }
  else {
    *(long *)(lVar17 + 0x180) = lVar5;
  }
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined1 *)(param_2 + 0x198) = 1;
  puVar9 = *(uint **)(param_2 + 0x68);
  piVar2 = (int *)(param_1 + 0x28);
  uVar14 = 0;
  uVar6 = *puVar9;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar7 = *(uint *)(param_1 + 0x2c);
  uVar10 = uVar7 - 1 & uVar6;
  for (; uVar15 = (ulong)uVar10, (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar14;
      uVar14 = uVar14 + 1) {
    lVar17 = *(long *)(param_1 + 0x30);
    puVar1 = (uint *)(lVar17 + (long)(int)uVar10 * 0x10);
    uVar12 = *puVar1;
    if (uVar12 == 0) break;
    if ((uVar6 == uVar12) &&
       (puVar8 = puVar9, func_0x000108346878(puVar9,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x68)),
       (int)puVar8 != 0)) {
      *piVar2 = *piVar2 + -1;
      uVar16 = uVar15;
      while( true ) {
        uVar6 = (int)uVar15 - 1;
        if ((int)uVar15 < 1) {
          uVar6 = *(int *)(param_1 + 0x2c) + uVar6;
        }
        uVar15 = (ulong)uVar6;
        uVar10 = *(uint *)(lVar17 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4));
        uVar12 = (uint)uVar16;
        puVar9 = (uint *)(lVar17 + (long)(int)uVar12 * 0x10);
        if (uVar10 == 0) break;
        uVar3 = *(int *)(param_1 + 0x2c) - 1U & uVar10;
        if ((int)uVar3 < (int)uVar6 || (int)uVar12 <= (int)uVar3) {
          if ((((int)uVar6 <= (int)uVar12) || ((int)uVar12 <= (int)uVar3 && (int)uVar3 < (int)uVar6)
              ) && (uVar16 = uVar15, uVar12 != uVar6)) {
            puVar1 = (uint *)(lVar17 + (long)(int)uVar6 * 0x10);
            if (*puVar9 == 0) {
              uVar13 = *(undefined8 *)(puVar1 + 2);
              puVar1[2] = 0;
              puVar1[3] = 0;
              *(undefined8 *)(puVar9 + 2) = uVar13;
            }
            else {
              FUN_1083a1c10(puVar9 + 2,puVar1 + 2);
              uVar10 = *puVar1;
              lVar17 = *(long *)(param_1 + 0x30);
            }
            *puVar9 = uVar10;
          }
        }
      }
      FUN_1083a2110(puVar9);
      uVar6 = *(uint *)(param_1 + 0x2c);
      if ((4 < (int)uVar6) && (*piVar2 * 4 <= (int)uVar6)) {
        FUN_1083a217c(piVar2,uVar6 >> 1);
      }
      uVar11 = 1;
      goto LAB_1083a23d8;
    }
    uVar12 = 0;
    if ((int)uVar10 < 1) {
      uVar12 = uVar7;
    }
    uVar10 = (uVar10 + uVar12) - 1;
  }
  uVar11 = 0;
LAB_1083a23d8:
  uVar4 = 0;
  if ((int)uVar14 < (int)uVar7) {
    uVar4 = uVar11;
  }
  return uVar4;
}



/* Entry: 1083a1fc0; end: 1083a200b;  */

uint * FUN_1083a1fc0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  long *unaff_x19;
  int *unaff_x20;
  uint *puVar9;
  
  func_0x0001083a2578();
  if (param_1[1] * 3 <= *param_1 * 4) {
    FUN_1083a217c();
  }
  piVar7 = unaff_x20;
  func_0x0001083a2578();
  puVar9 = *(uint **)(*unaff_x19 + 0x68);
  uVar5 = *puVar9;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = piVar7[1];
  uVar2 = uVar6 - 1 & uVar5;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar5 == *puVar1) &&
       (puVar8 = puVar9, func_0x000108346878(puVar9,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x68)),
       (int)puVar8 != 0)) {
      func_0x0001083a2528();
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x0001083a2528();
  *unaff_x20 = *unaff_x20 + 1;
  return puVar1 + 2;
}



/* Entry: 1083a200c; end: 1083a200f;  */

long FUN_1083a200c(long param_1)

{
  func_0x0001083a2094(param_1 + 0x30);
  FUN_108410074(param_1 + 8);
  return param_1;
}



/* Entry: 1083a2010; end: 1083a2023;  */

void FUN_1083a2010(void)

{
  FUN_1083a2068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a2024; end: 1083a2067;  */

void FUN_1083a2024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40650;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0x200000;
  param_1[9] = 0x800;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 1083a2068; end: 1083a20bf;  */

long FUN_1083a2068(long param_1)

{
  func_0x0001083a2094(param_1 + 0x30);
  FUN_108410074(param_1 + 8);
  return param_1;
}



/* Entry: 1083a20c0; end: 1083a210f;  */

void FUN_1083a20c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + -8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0x10;
    lVar1 = param_1 + lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_1083a2110(lVar1);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083a2110; end: 1083a213f;  */

void FUN_1083a2110(int *param_1)

{
  if (*param_1 != 0) {
    FUN_1083145d8(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083a2140; end: 1083a217b;  */

void FUN_1083a2140(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083a2164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083a217c; end: 1083a2247;  */

void FUN_1083a217c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  lVar6 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)((long)param_2 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 0x10) || param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  lStack_38 = lVar6;
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar3 = (long)param_2 << 4;
    puVar4 = puVar2 + 2;
    do {
      *(undefined4 *)puVar4 = 0;
      lVar3 = lVar3 + -0x10;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar2 + 2;
  lVar6 = lVar6 + 8;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    if (*(int *)(lVar6 + -8) != 0) {
      FUN_1083a2248(param_1,lVar6);
    }
    lVar6 = lVar6 + 0x10;
  }
  func_0x0001083a2094(&lStack_38);
  return;
}



/* Entry: 1083a2248; end: 1083a2303;  */

uint * FUN_1083a2248(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *unaff_x20;
  uint *puVar8;
  
  func_0x0001083a2578();
  puVar8 = *(uint **)(*param_2 + 0x68);
  uVar5 = *puVar8;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar2 = uVar6 - 1 & uVar5;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar5 == *puVar1) &&
       (puVar7 = puVar8, func_0x000108346878(puVar8,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x68)),
       (int)puVar7 != 0)) {
      func_0x0001083a2528();
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x0001083a2528();
  *unaff_x20 = *unaff_x20 + 1;
  return puVar1 + 2;
}



/* Entry: 1083a2304; end: 1083a2347;  */

undefined4 * FUN_1083a2304(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_1083a2110();
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1083a2348; end: 1083a24d7;  */

undefined4 FUN_1083a2348(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar11 = 0;
  uVar4 = *param_2;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = param_1[1];
  uVar7 = uVar5 - 1 & uVar4;
  for (; uVar12 = (ulong)uVar7, (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != uVar11;
      uVar11 = uVar11 + 1) {
    lVar14 = *(long *)(param_1 + 2);
    puVar1 = (uint *)(lVar14 + (long)(int)uVar7 * 0x10);
    uVar9 = *puVar1;
    if (uVar9 == 0) break;
    if ((uVar4 == uVar9) &&
       (puVar6 = param_2, func_0x000108346878(param_2,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x68))
       , (int)puVar6 != 0)) {
      *param_1 = *param_1 + -1;
      uVar13 = uVar12;
      while( true ) {
        uVar4 = (int)uVar12 - 1;
        if ((int)uVar12 < 1) {
          uVar4 = param_1[1] + uVar4;
        }
        uVar12 = (ulong)uVar4;
        uVar7 = *(uint *)(lVar14 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4));
        uVar9 = (uint)uVar13;
        puVar1 = (uint *)(lVar14 + (long)(int)uVar9 * 0x10);
        if (uVar7 == 0) break;
        uVar2 = param_1[1] - 1U & uVar7;
        if ((int)uVar2 < (int)uVar4 || (int)uVar9 <= (int)uVar2) {
          if ((((int)uVar4 <= (int)uVar9) || ((int)uVar9 <= (int)uVar2 && (int)uVar2 < (int)uVar4))
             && (uVar13 = uVar12, uVar9 != uVar4)) {
            puVar6 = (uint *)(lVar14 + (long)(int)uVar4 * 0x10);
            if (*puVar1 == 0) {
              uVar10 = *(undefined8 *)(puVar6 + 2);
              puVar6[2] = 0;
              puVar6[3] = 0;
              *(undefined8 *)(puVar1 + 2) = uVar10;
            }
            else {
              FUN_1083a1c10(puVar1 + 2,puVar6 + 2);
              uVar7 = *puVar6;
              lVar14 = *(long *)(param_1 + 2);
            }
            *puVar1 = uVar7;
          }
        }
      }
      FUN_1083a2110(puVar1);
      uVar4 = param_1[1];
      if ((4 < (int)uVar4) && (*param_1 * 4 <= (int)uVar4)) {
        FUN_1083a217c(param_1,uVar4 >> 1);
      }
      uVar8 = 1;
      goto LAB_1083a23d8;
    }
    uVar9 = 0;
    if ((int)uVar7 < 1) {
      uVar9 = uVar5;
    }
    uVar7 = (uVar7 + uVar9) - 1;
  }
  uVar8 = 0;
LAB_1083a23d8:
  uVar3 = 0;
  if ((int)uVar11 < (int)uVar5) {
    uVar3 = uVar8;
  }
  return uVar3;
}



/* Entry: 1083a24d8; end: 1083a2583;  */

void FUN_1083a24d8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083a24e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083a2584; end: 1083a2657;  */

void FUN_1083a2584(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  FUN_108346958();
  uVar1 = 0;
  if (*(long *)(param_2 + 0x88) != 0) {
    do {
      FUN_1083a2ffc();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = 0;
  if (*(long *)(param_2 + 0x90) != 0) {
    do {
      FUN_1083a2ffc();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = 0;
  if (*(long *)(param_2 + 0x98) != 0) {
    do {
      FUN_1083a2ffc();
      uVar1 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  return;
}



/* Entry: 1083a2658; end: 1083a26df;  */

void FUN_1083a2658(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lStack_38;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined4 uStack_28;
  byte bStack_24;
  undefined2 uStack_23;
  
  lStack_38 = *param_2;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *(undefined8 *)((long)param_2 + 0xf);
  uStack_28 = (undefined4)((ulong)uVar4 >> 8);
  bStack_24 = (byte)((ulong)uVar4 >> 0x28);
  uStack_23 = (undefined2)((ulong)uVar4 >> 0x30);
  uStack_30 = (undefined7)param_2[1];
  uStack_29 = (undefined1)((ulong)param_2[1] >> 0x38);
  bStack_24 = bStack_24 & 0xfb;
  FUN_1083a2b0c(param_1,&lStack_38,param_3,param_4,param_5,param_6);
  func_0x0001083a3028();
  return;
}



/* Entry: 1083a26e0; end: 1083a27f7;  */

void FUN_1083a26e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar6;
  int extraout_w11;
  long unaff_x19;
  undefined4 uVar7;
  float fVar8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [8];
  float fStack_2b8;
  byte bStack_2ac;
  char cStack_2ab;
  undefined1 uStack_2aa;
  byte bStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined1 auStack_248 [160];
  undefined8 uStack_1a8;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined4 uStack_150;
  byte bStack_14c;
  undefined2 uStack_14b;
  undefined1 auStack_148 [80];
  undefined1 auStack_f8 [160];
  undefined8 uStack_58;
  
  func_0x0001083a30a0();
  uStack_58 = extraout_x8;
  FUN_108375f34(auStack_148);
  uVar7 = (undefined4)param_1;
  uStack_160 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001083a2ffc();
      uVar7 = (undefined4)param_1;
      uStack_160 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uVar6 = *(undefined8 *)((long)param_2 + 0xf);
  uStack_150 = (undefined4)((ulong)uVar6 >> 8);
  bStack_14c = (byte)((ulong)uVar6 >> 0x28);
  uStack_14b = (undefined2)((ulong)uVar6 >> 0x30);
  uStack_158 = (undefined7)param_2[1];
  uStack_151 = (undefined1)((ulong)param_2[1] >> 0x38);
  bStack_14c = bStack_14c & 0xfb;
  FUN_108350334(&uStack_160,auStack_148);
  FUN_1083a2b0c(auStack_f8,&uStack_160,auStack_148,param_4,param_5,0x113254e20);
  puVar5 = auStack_f8;
  func_0x0001083a25e8();
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar7;
  func_0x0001083a261c(auStack_f8);
  func_0x0001081298a0(&uStack_160);
  puVar2 = auStack_148;
  FUN_108375e94();
  func_0x0001083a308c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083a261c(auStack_f8);
  func_0x0001081298a0(&uStack_160);
  puVar3 = auStack_148;
  FUN_108375e94(puVar3);
  func_0x0001083a3030();
  func_0x0001083a30a0();
  uStack_26c = 0;
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_264 = 0x3f800000;
  uStack_25c = 0x40800000;
  uStack_1a8 = extraout_x8_01;
  if (puVar5 != (undefined1 *)0x0) {
    FUN_108376024(&uStack_2a0);
  }
  auStack_2c0[0] = 0;
  bStack_2a8 = 0;
  puVar4 = &uStack_2a0;
  FUN_1083a298c(puVar4,puVar3,0x113254e20);
  fVar8 = 1.0;
  puVar5 = puVar3;
  if ((int)puVar4 != 0) {
    puVar5 = auStack_2c0;
    func_0x0001083a2a38(puVar5,puVar3);
    fVar8 = fStack_2b8;
    if ((bStack_2a8 & 1) == 0) goto LAB_1083a2950;
    bStack_2ac = bStack_2ac & 0xf8 | 4;
    uStack_2aa = 0;
    in_ZR = cStack_2ab == '\x02';
    if ((bool)in_ZR) {
      cStack_2ab = '\x01';
    }
    fStack_2b8 = 64.0;
    FUN_1083761a0(&uStack_2a0);
    fVar8 = fVar8 * 0.015625;
  }
  uStack_2d0 = 0;
  uStack_2c8 = 0x3f000000;
  FUN_1083a2b0c(auStack_248,puVar5,&uStack_2a0,&uStack_2d0,3,0x113254e20);
  func_0x0001083a25e8(puVar2,auStack_248);
  *(float *)(puVar2 + 0xa0) = fVar8;
  func_0x0001083a261c(auStack_248);
  func_0x0001083a2f10(auStack_2c0);
  FUN_108375e94(&uStack_2a0);
  func_0x0001083a308c(uStack_1a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1083a2950:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a2958);
  (*pcVar1)();
}



/* Entry: 1083a27f8; end: 1083a298b;  */

void FUN_1083a27f8(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  float fVar4;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  float fStack_158;
  byte bStack_14c;
  char cStack_14b;
  undefined1 uStack_14a;
  byte bStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined1 auStack_e8 [160];
  undefined8 uStack_48;
  
  func_0x0001083a30a0();
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_104 = 0x3f800000;
  uStack_fc = 0x40800000;
  uStack_48 = extraout_x8;
  if (param_2 != 0) {
    FUN_108376024(&uStack_140);
  }
  auStack_160[0] = 0;
  bStack_148 = 0;
  puVar2 = &uStack_140;
  FUN_1083a298c(puVar2,param_1,0x113254e20);
  fVar4 = 1.0;
  puVar3 = param_1;
  if ((int)puVar2 != 0) {
    puVar3 = auStack_160;
    func_0x0001083a2a38(puVar3,param_1);
    fVar4 = fStack_158;
    if ((bStack_148 & 1) == 0) goto LAB_1083a2950;
    bStack_14c = bStack_14c & 0xf8 | 4;
    uStack_14a = 0;
    in_ZR = cStack_14b == '\x02';
    if ((bool)in_ZR) {
      cStack_14b = '\x01';
    }
    fStack_158 = 64.0;
    FUN_1083761a0(&uStack_140);
    fVar4 = fVar4 * 0.015625;
  }
  uStack_170 = 0;
  uStack_168 = 0x3f000000;
  FUN_1083a2b0c(auStack_e8,puVar3,&uStack_140,&uStack_170,3,0x113254e20);
  func_0x0001083a25e8();
  *(float *)(unaff_x19 + 0xa0) = fVar4;
  func_0x0001083a261c(auStack_e8);
  func_0x0001083a2f10(auStack_160);
  FUN_108375e94(&uStack_140);
  func_0x0001083a308c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1083a2950:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a2958);
  (*pcVar1)();
}



/* Entry: 1083a298c; end: 1083a2a5b;  */

bool FUN_1083a298c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  
  if ((((*(uint *)(param_1 + 0x48) & 0xc0) != 0x40) || (*(float *)(param_1 + 0x40) != 0.0)) &&
     (uVar1 = param_3, FUN_10828e338(), (uVar1 & 1) == 0)) {
    FUN_1083a2b00(&fStack_48,param_2);
    FUN_108363f68(&fStack_48,param_3);
    if (fStack_3c * fStack_3c + fStack_48 * fStack_48 <= 65536.0) {
      return 65536.0 < fStack_38 * fStack_38 + fStack_44 * fStack_44;
    }
  }
  return true;
}



/* Entry: 1083a2a5c; end: 1083a2aff;  */

void FUN_1083a2a5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_34 = 0x3f800000;
  uStack_2c = 0x40800000;
  if (param_3 != 0) {
    FUN_108376024(&uStack_70);
  }
  uStack_80 = 0;
  uStack_78 = 0x3f000000;
  FUN_1083a2b0c(param_1,param_2,&uStack_70,&uStack_80,3,0x113254e20);
  FUN_108375e94(&uStack_70);
  return;
}



/* Entry: 1083a2b00; end: 1083a2b0b;  */

void FUN_1083a2b00(undefined8 param_1,long param_2)

{
  float fVar1;
  undefined4 uStack_38;
  float fStack_34;
  
  fVar1 = *(float *)(param_2 + 0x10);
  func_0x00010815f6c0(*(float *)(param_2 + 8) * *(float *)(param_2 + 0xc),*(float *)(param_2 + 8));
  if (fVar1 != 0.0) {
    uStack_38 = 0x3f800000;
    fStack_34 = fVar1;
    FUN_108363f68(param_1,&uStack_38);
    return;
  }
  return;
}



/* Entry: 1083a2b0c; end: 1083a2c53;  */

undefined8 *
FUN_1083a2b0c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = 0;
  param_1[0x13] = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  FUN_1083974c0(param_2,param_3,param_4,param_5,param_6,param_1,&lStack_50);
  if (lStack_48 != 0) {
    do {
      func_0x0001083a3048();
    } while (extraout_w10 != 0);
  }
  uStack_58 = 0;
  func_0x00010837656c(param_1 + 0x11);
  FUN_10810c718(&uStack_58);
  if (lStack_50 != 0) {
    do {
      func_0x0001083a3048();
    } while (extraout_w10_00 != 0);
  }
  uStack_58 = 0;
  FUN_1082b15a4(param_1 + 0x12);
  func_0x000108115b70(&uStack_58);
  if (*param_2 != 0) {
    do {
      func_0x0001083a3048();
    } while (extraout_w10_01 != 0);
  }
  uStack_58 = 0;
  FUN_108162698(param_1 + 0x13);
  func_0x0001083a3028();
  return param_1;
}



/* Entry: 1083a2c54; end: 1083a2c7f;  */

/* WARNING: Removing unreachable block (ram,0x0001083a1a40) */

void FUN_1083a2c54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_1083a1940();
  func_0x0001083a2558(param_1);
  lStack_38 = param_2 + 8;
  func_0x0001081efc58();
  FUN_1083a1a9c(unaff_x19,unaff_x20,*unaff_x21);
  if (*unaff_x19 == 0) {
    FUN_1083a1b44(&uStack_40,unaff_x20);
    uVar1 = uStack_40;
    uStack_40 = 0;
    func_0x0001083a216c(unaff_x19,uVar1);
    FUN_1083145d8(&uStack_40);
  }
  func_0x0001083a2514();
  FUN_1081efc78(&lStack_38);
  return;
}



/* Entry: 1083a2c80; end: 1083a2cb3;  */

undefined8 * FUN_1083a2c80(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  func_0x0001083a3070(param_1 + 0x17);
  return param_1;
}



/* Entry: 1083a2cb4; end: 1083a2cd3;  */

void FUN_1083a2cb4(void)

{
  func_0x0001083a3078();
  FUN_1083a2d04();
  return;
}



/* Entry: 1083a2cd4; end: 1083a2d03;  */

void FUN_1083a2cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  undefined8 unaff_x22;
  
  func_0x0001083a3014();
  FUN_1083a2d04();
  func_0x0001083a3038(*(undefined8 *)(unaff_x21 + 0xb8));
  func_0x0001083a1884();
  FUN_1083a1120(unaff_x22,unaff_x21,param_3,0,param_4);
  func_0x0001083a18a4();
  func_0x0001083a18f8();
  return;
}



/* Entry: 1083a2d04; end: 1083a2d63;  */

void FUN_1083a2d04(long *param_1,int param_2)

{
  long *plVar1;
  
  if ((int)param_1[0x16] != param_2) {
    plVar1 = param_1;
    if (0x15 < (int)param_1[0x16]) {
      plVar1 = (long *)*param_1;
      _free();
    }
    if (param_2 < 0x16) {
      plVar1 = param_1 + 1;
      if (param_2 < 1) {
        plVar1 = (long *)0x0;
      }
    }
    else {
      func_0x0001083a3058();
    }
    *param_1 = (long)plVar1;
    *(int *)(param_1 + 0x16) = param_2;
  }
  return;
}



/* Entry: 1083a2d64; end: 1083a2d97;  */

undefined8 * FUN_1083a2d64(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  func_0x0001083a3070(param_1 + 0x17);
  return param_1;
}



/* Entry: 1083a2d98; end: 1083a2db7;  */

void FUN_1083a2d98(void)

{
  func_0x0001083a3078();
  FUN_1083a2d04();
  return;
}



/* Entry: 1083a2db8; end: 1083a2de7;  */

void FUN_1083a2db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  undefined8 unaff_x22;
  
  func_0x0001083a3014();
  FUN_1083a2d04();
  func_0x0001083a3038(*(undefined8 *)(unaff_x21 + 0xb8));
  func_0x0001083a1884();
  FUN_1083a1120(unaff_x22,unaff_x21,param_3,1,param_4);
  func_0x0001083a18a4();
  func_0x0001083a18f8();
  return;
}



/* Entry: 1083a2de8; end: 1083a2e23;  */

undefined8 * FUN_1083a2de8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  func_0x0001083a3070(param_1 + 0x43);
  return param_1;
}



/* Entry: 1083a2e24; end: 1083a2e4b;  */

long FUN_1083a2e24(long param_1)

{
  FUN_1083145d8(param_1 + 0x218);
  FUN_1083a2e7c(param_1,0);
  return param_1;
}



/* Entry: 1083a2e4c; end: 1083a2e7b;  */

undefined1  [16]
FUN_1083a2e4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *unaff_x21;
  undefined8 unaff_x22;
  long lVar3;
  undefined1 auVar4 [16];
  
  func_0x0001083a3014();
  FUN_1083a2e7c();
  func_0x0001083a3038(*(undefined8 *)(unaff_x21 + 0x86));
  func_0x0001083a1884();
  puVar1 = param_4;
  for (lVar3 = param_3 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    uVar2 = unaff_x22;
    FUN_1083a127c(unaff_x22,*unaff_x21);
    func_0x0001083a12ac(unaff_x22,uVar2);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001083a18a4();
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 1083a2e7c; end: 1083a2edb;  */

void FUN_1083a2e7c(long *param_1,int param_2)

{
  long *plVar1;
  
  if ((int)param_1[0x42] != param_2) {
    plVar1 = param_1;
    if (0x41 < (int)param_1[0x42]) {
      plVar1 = (long *)*param_1;
      _free();
    }
    if (param_2 < 0x42) {
      plVar1 = param_1 + 1;
      if (param_2 < 1) {
        plVar1 = (long *)0x0;
      }
    }
    else {
      func_0x0001083a3058();
    }
    *param_1 = (long)plVar1;
    *(int *)(param_1 + 0x42) = param_2;
  }
  return;
}



/* Entry: 1083a2edc; end: 1083a2f2f;  */

undefined8 FUN_1083a2edc(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_14;
  
  puVar2 = &uStack_14;
  uStack_14 = param_2;
  FUN_1083a2e4c(param_1,puVar2,1);
  if (puVar2 != (undefined4 *)0x0) {
    return *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a2f10);
  (*pcVar1)();
}



/* Entry: 1083a2f30; end: 1083a2f93;  */

undefined8 * FUN_1083a2f30(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  long lVar2;
  int extraout_w11;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_1081fde68(param_1);
  }
  else {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        FUN_1083a2ffc();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar1;
    lVar2 = param_2[1];
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 1083a2f94; end: 1083a2fab;  */

long FUN_1083a2f94(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  FUN_1083a2d04();
  return param_1;
}



/* Entry: 1083a2fac; end: 1083a2fd3;  */

undefined8 FUN_1083a2fac(undefined8 param_1)

{
  FUN_1083a2d04(param_1,0);
  return param_1;
}



/* Entry: 1083a2fd4; end: 1083a2ffb;  */

undefined8 FUN_1083a2fd4(undefined8 param_1)

{
  FUN_1083a2e7c(param_1,0);
  return param_1;
}



/* Entry: 1083a2ffc; end: 1083a30b3;  */

void FUN_1083a2ffc(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1083a30b4; end: 1083a3163;  */

void FUN_1083a30b4(void)

{
  _strlen();
  return;
}



/* Entry: 1083a3164; end: 1083a317b;  */

long FUN_1083a3164(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *unaff_x19;
  long lVar4;
  long unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = param_1;
    if ((int)param_2 < 0) {
      *param_1 = 0x2d;
      param_2 = (undefined1 *)(ulong)(uint)-(int)param_2;
      puVar2 = param_1 + 1;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_1 = puVar2;
    func_0x0001083a3d04();
    unaff_x20 = 0;
    do {
      lVar4 = unaff_x20;
      uVar3 = (uint)param_2;
      *(byte *)((long)register0x00000008 + lVar4 + -0x29) =
           (char)param_2 + (char)(uVar3 / 10) * -10 | 0x30;
      unaff_x20 = lVar4 + -1;
      uVar1 = uVar3 == 9;
      param_2 = (undefined1 *)(ulong)(uVar3 / 10);
    } while (9 < uVar3);
    param_2 = (undefined1 *)((long)register0x00000008 + lVar4 + -0x29);
    func_0x0001083a3dc4();
    func_0x0001083a3cac(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar1) break;
    unaff_x30 = FUN_1083a3164;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = puVar2;
  }
  return (long)puVar2 - unaff_x20;
}



/* Entry: 1083a317c; end: 1083a322b;  */

undefined4 * FUN_1083a317c(double param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001083a3d04();
  fVar5 = SUB84(param_1,0);
  uVar1 = !NAN(fVar5) && !NAN(fVar5);
  if (!NAN(fVar5)) {
    uVar1 = !NAN(fVar5 - fVar5);
    if (NAN(fVar5 - fVar5)) goto LAB_1083a3200;
    param_1 = (double)fVar5;
    puVar2 = auStack_38;
    _snprintf(puVar2,0x10,&UNK_10df1e8e9);
    func_0x0001083a3dc4();
    param_2 = (undefined4 *)((long)param_2 + (long)(int)puVar2);
    while (func_0x0001083a3cac(uStack_28), !(bool)uVar1) {
      ___stack_chk_fail();
LAB_1083a3200:
      uVar1 = SUB84(param_1,0) == 0.0;
      if (0.0 < SUB84(param_1,0)) {
        uVar3 = 0x666e69;
        puVar4 = param_2;
LAB_1083a3210:
        param_2 = (undefined4 *)((long)puVar4 + 3);
        *puVar4 = uVar3;
      }
      else {
        *param_2 = 0x666e692d;
        param_2 = param_2 + 1;
        *(undefined1 *)param_2 = 0;
      }
    }
    return param_2;
  }
  uVar3 = 0x6e616e;
  puVar4 = param_2;
  goto LAB_1083a3210;
}



/* Entry: 1083a322c; end: 1083a32df;  */

void FUN_1083a322c(ulong *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_1 = 0x1138270b0;
  }
  else {
    if ((param_3 >> 0x20 != 0) || (param_3 + 0xc < param_3 + 9)) {
      FUN_10841076c(&UNK_10f4905b1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a32e0);
      (*pcVar1)();
    }
    puVar2 = (undefined4 *)(param_3 + 0xc & 0x1fffffffc);
    __Znwm();
    *puVar2 = (int)param_3;
    puVar2[1] = 1;
    *param_1 = (ulong)puVar2;
    puVar2 = puVar2 + 2;
    *(undefined1 *)puVar2 = 0;
    if (param_2 != 0) {
      _memcpy(puVar2,param_2,param_3);
    }
    *(undefined1 *)((long)puVar2 + param_3) = 0;
  }
  return;
}



/* Entry: 1083a32e0; end: 1083a330f;  */

void FUN_1083a32e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (param_1 != 0x1138270b0) {
    piVar1 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3310; end: 1083a3347;  */

void FUN_1083a3310(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001083a3dfc();
  FUN_1083a322c(auStack_28,0);
  func_0x0001083a3cec();
  return;
}



/* Entry: 1083a3348; end: 1083a3393;  */

void FUN_1083a3348(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_2;
  func_0x0001083a3dfc();
  if (lVar1 != 0) {
    _strlen(param_2);
  }
  FUN_1083a322c(auStack_28,param_2);
  func_0x0001083a3cec();
  return;
}



/* Entry: 1083a3394; end: 1083a33c3;  */

void FUN_1083a3394(void)

{
  func_0x0001083a3dfc();
  func_0x0001083a3d58();
  func_0x0001083a3cec();
  return;
}



/* Entry: 1083a33c4; end: 1083a33ff;  */

undefined8 * FUN_1083a33c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  FUN_1083a3400(param_2,0x1138270b0);
  return param_1;
}



/* Entry: 1083a3400; end: 1083a340f;  */

void FUN_1083a3400(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (lVar5 == 0) {
    return;
  }
  if (lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3410; end: 1083a343f;  */

void FUN_1083a3410(void)

{
  func_0x0001083a3dfc();
  func_0x0001083a3d58();
  func_0x0001083a3cec();
  return;
}



/* Entry: 1083a3440; end: 1083a345f;  */

bool FUN_1083a3440(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_2;
  if ((int *)*param_1 == piVar2) {
    return true;
  }
  if (*piVar2 == *(int *)*param_1) {
    if (*piVar2 != 0) {
      piVar1 = (int *)*param_1 + 2;
      _memcmp(piVar1,piVar2 + 2);
      return (int)piVar1 == 0;
    }
    return true;
  }
  return false;
}



/* Entry: 1083a3460; end: 1083a34a3;  */

bool FUN_1083a3460(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  
  if (param_3 != *(uint *)*param_1) {
    return false;
  }
  if (param_3 != 0) {
    puVar1 = (uint *)*param_1 + 2;
    _memcmp(puVar1);
    return (int)puVar1 == 0;
  }
  return true;
}



/* Entry: 1083a34a4; end: 1083a357b;  */

bool FUN_1083a34a4(ulong param_1,long param_2)

{
  uint *puVar1;
  undefined8 *unaff_x20;
  
  func_0x0001083a3d90();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001083a3d50();
  }
  if (param_1 == *(uint *)*unaff_x20) {
    if (param_1 != 0) {
      puVar1 = (uint *)*unaff_x20 + 2;
      _memcmp(puVar1);
      return (int)puVar1 == 0;
    }
    return true;
  }
  return false;
}



/* Entry: 1083a357c; end: 1083a3587;  */

void FUN_1083a357c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *param_1 = 0x1138270b0;
  if (lVar5 == 0) {
    return;
  }
  if (lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3588; end: 1083a35db;  */

int * FUN_1083a3588(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_28 [8];
  
  piVar2 = (int *)*param_1;
  if ((*piVar2 != 0) && (piVar1 = piVar2 + 1, piVar2 = (int *)*param_1, *piVar1 != 1)) {
    FUN_1083a322c(auStack_28,piVar2 + 2,*piVar2);
    func_0x0001083a3cec();
    piVar2 = (int *)*param_1;
  }
  return piVar2 + 2;
}



/* Entry: 1083a35dc; end: 1083a367f;  */

void FUN_1083a35dc(long *param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_38 [8];
  
  uVar6 = 0xfffffffe < param_2;
  bVar7 = param_2 == 0xffffffff;
  uVar3 = param_2;
  if ((bool)uVar6) {
    uVar3 = 0xffffffff;
  }
  if (param_2 != 0) {
    plVar8 = param_1;
    func_0x0001083a3de8();
    uVar11 = (uint)uVar3;
    if ((!bVar7) || (func_0x0001083a3e08(), (bool)uVar6 && !bVar7)) {
      puVar9 = auStack_38;
      FUN_1083a3310(puVar9,uVar3);
      func_0x0001083a3de0();
      uVar2 = *(uint *)*param_1;
      if (uVar11 <= *(uint *)*param_1) {
        uVar2 = uVar11;
      }
      _memcpy();
      puVar9[(int)uVar2] = 0;
      func_0x0001083a3cdc(*param_1);
    }
    else {
      func_0x0001083a3dbc();
      *(undefined1 *)((long)plVar8 + uVar3) = 0;
      *(uint *)*param_1 = uVar11;
    }
    return;
  }
  lVar10 = *param_1;
  *param_1 = 0x1138270b0;
  if (lVar10 == 0) {
    return;
  }
  if (lVar10 != 0x1138270b0) {
    piVar1 = (int *)(lVar10 + 4);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3680; end: 1083a36b7;  */

void FUN_1083a3680(ulong param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x0001083a3d90();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001083a3d50();
  }
  uVar5 = 0xfffffffe < param_1;
  bVar6 = param_1 == 0xffffffff;
  uVar2 = param_1;
  if ((bool)uVar5) {
    uVar2 = 0xffffffff;
  }
  if (param_1 != 0) {
    plVar7 = unaff_x20;
    func_0x0001083a3de8();
    if ((!bVar6) || (func_0x0001083a3e08(), (bool)uVar5 && !bVar6)) {
      FUN_1083a3394(auStack_38);
      func_0x0001083a3cdc(*unaff_x20);
    }
    else {
      func_0x0001083a3dbc();
      if (unaff_x19 != 0) {
        func_0x0001083a3d9c(plVar7);
      }
      *(undefined1 *)((long)plVar7 + uVar2) = 0;
      *(int *)*unaff_x20 = (int)uVar2;
    }
    return;
  }
  lVar8 = *unaff_x20;
  *unaff_x20 = 0x1138270b0;
  if (lVar8 == 0) {
    return;
  }
  if (lVar8 != 0x1138270b0) {
    piVar1 = (int *)(lVar8 + 4);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a36b8; end: 1083a3793;  */

void FUN_1083a36b8(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_38 [8];
  
  uVar5 = 0xfffffffe < param_3;
  bVar6 = param_3 == 0xffffffff;
  uVar2 = param_3;
  if ((bool)uVar5) {
    uVar2 = 0xffffffff;
  }
  if (param_3 != 0) {
    plVar7 = param_1;
    func_0x0001083a3de8();
    if ((!bVar6) || (func_0x0001083a3e08(), (bool)uVar5 && !bVar6)) {
      FUN_1083a3394(auStack_38,param_2,uVar2);
      func_0x0001083a3cdc(*param_1);
    }
    else {
      func_0x0001083a3dbc();
      if (param_2 != 0) {
        func_0x0001083a3d9c(plVar7,param_2);
      }
      *(undefined1 *)((long)plVar7 + uVar2) = 0;
      *(int *)*param_1 = (int)uVar2;
    }
    return;
  }
  lVar8 = *param_1;
  *param_1 = 0x1138270b0;
  if (lVar8 == 0) {
    return;
  }
  if (lVar8 != 0x1138270b0) {
    piVar1 = (int *)(lVar8 + 4);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3794; end: 1083a38c3;  */

void FUN_1083a3794(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_58 [8];
  
  if (param_4 != 0) {
    uVar8 = (ulong)*(uint *)*param_1;
    uVar2 = param_2;
    if (uVar8 <= param_2) {
      uVar2 = uVar8;
    }
    uVar3 = uVar8 ^ 0xffffffff;
    if (param_4 + uVar8 >> 0x20 == 0) {
      uVar3 = param_4;
    }
    if (uVar3 != 0) {
      uVar1 = uVar3 + uVar8;
      if (((uint *)*param_1)[1] == 1 && (uVar1 ^ uVar8) < 4) {
        plVar7 = param_1;
        func_0x0001083a3dbc();
        if (param_2 < uVar8) {
          _memmove((long)plVar7 + uVar2 + uVar3,(long)plVar7 + uVar2,uVar8 - uVar2);
        }
        func_0x0001083a3dd4((long)plVar7 + uVar2);
        *(undefined1 *)((long)plVar7 + uVar1) = 0;
        *(int *)*param_1 = (int)uVar1;
      }
      else {
        puVar5 = auStack_58;
        FUN_1083a3310(puVar5,uVar3 + *(uint *)*param_1);
        func_0x0001083a3de0();
        if (uVar2 != 0) {
          func_0x0001083a3d9c(puVar5,*param_1 + 8);
        }
        func_0x0001083a3dd4(puVar5 + uVar2);
        puVar6 = (uint *)*param_1;
        lVar4 = *puVar6 - uVar2;
        if (uVar2 <= *puVar6 && lVar4 != 0) {
          _memcpy(puVar5 + uVar2 + uVar3,(long)puVar6 + uVar2 + 8,lVar4);
          puVar6 = (uint *)*param_1;
        }
        func_0x0001083a3cdc(puVar6);
      }
    }
  }
  return;
}



/* Entry: 1083a38c4; end: 1083a38fb;  */

void FUN_1083a38c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_24 [4];
  
  func_0x0001083a3d90();
  FUN_108410674(param_3,auStack_24);
  if (param_3 != 0) {
    func_0x0001083a3db0();
  }
  return;
}



/* Entry: 1083a38fc; end: 1083a394b;  */

void FUN_1083a38fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_42 [10];
  undefined8 uStack_38;
  
  func_0x0001083a3d90();
  func_0x0001083a3d04();
  func_0x0001083a30ec(auStack_42,param_3);
  func_0x0001083a3db0();
  func_0x0001083a3cac(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3970();
  return;
}



/* Entry: 1083a394c; end: 1083a396f;  */

void FUN_1083a394c(undefined8 param_1,undefined8 param_2)

{
  FUN_1083a3970(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083a3970; end: 1083a39eb;  */

undefined1  [16] FUN_1083a3970(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *extraout_x8;
  undefined8 extraout_x9;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  func_0x0001083a3cc0(param_3);
  puVar5 = auStack_438;
  puVar4 = extraout_x8;
  puVar3 = param_1;
  uStack_38 = extraout_x9;
  FUN_1083a39ec();
  uVar1 = auStack_438 == param_2;
  puVar2 = param_2;
  if ((bool)uVar1) {
    puVar5 = (undefined1 *)(long)(int)puVar4;
    FUN_1083a36b8(param_1);
    puVar2 = param_1;
    puVar4 = param_2;
  }
  func_0x0001083a3cac(uStack_38);
  if ((bool)uVar1) {
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  _vsnprintf(puVar5,0x400,puVar2,puVar4);
  if ((int)(uint)puVar6 < 0) {
    FUN_10841076c(&UNK_10f490629);
    puVar6 = (undefined1 *)0x0;
  }
  else if (0x3ff < (uint)puVar6) {
    FUN_1083a36b8(puVar3,0,(ulong)puVar6 & 0xffffffff);
    FUN_1083a3588(puVar3);
    _vsnprintf();
    puVar5 = puVar3;
  }
  auVar8._8_8_ = (ulong)puVar6 & 0xffffffff;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1083a39ec; end: 1083a3a8f;  */

undefined1  [16] FUN_1083a39ec(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_3;
  _vsnprintf(param_3,0x400,param_1,param_2);
  if ((int)(uint)uVar1 < 0) {
    FUN_10841076c(&UNK_10f490629);
    uVar1 = 0;
  }
  else if (0x3ff < (uint)uVar1) {
    FUN_1083a36b8(param_4,0,uVar1 & 0xffffffff);
    FUN_1083a3588(param_4);
    _vsnprintf();
    param_3 = param_4;
  }
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1083a3a90; end: 1083a3ab3;  */

void FUN_1083a3a90(undefined8 param_1,undefined8 param_2)

{
  FUN_1083a3ab4(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083a3ab4; end: 1083a3b77;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

undefined1  [16] FUN_1083a3ab4(code **param_1,code **param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  uint *puVar10;
  code **ppcVar11;
  undefined8 uVar12;
  long lVar13;
  code **ppcVar14;
  code **extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  code **ppcVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_488 [8];
  code *pcStack_438;
  uint *puStack_430;
  undefined1 auStack_428 [1008];
  undefined8 uStack_38;
  
  ppcVar14 = param_1;
  func_0x0001083a3cc0(param_3);
  if (*(int *)*ppcVar14 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x9_00) {
      func_0x0001083a3cc0(extraout_x8_00);
      ppcVar14 = &pcStack_438;
      ppcVar11 = extraout_x8;
      ppcVar9 = param_1;
      uStack_38 = extraout_x9;
      FUN_1083a39ec();
      uVar4 = &pcStack_438 == param_2;
      ppcVar8 = param_2;
      if ((bool)uVar4) {
        ppcVar14 = (code **)(long)(int)ppcVar11;
        FUN_1083a36b8(param_1);
        ppcVar8 = param_1;
        ppcVar11 = param_2;
      }
      func_0x0001083a3cac(uStack_38);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        ppcVar15 = ppcVar14;
        _vsnprintf(ppcVar14,0x400,ppcVar8,ppcVar11);
        if ((int)(uint)ppcVar15 < 0) {
          FUN_10841076c(&UNK_10f490629);
          ppcVar15 = (code **)0x0;
        }
        else if (0x3ff < (uint)ppcVar15) {
          FUN_1083a36b8(ppcVar9,0,(ulong)ppcVar15 & 0xffffffff);
          FUN_1083a3588(ppcVar9);
          _vsnprintf();
          ppcVar14 = ppcVar9;
        }
        auVar19._8_8_ = (ulong)ppcVar15 & 0xffffffff;
        auVar19._0_8_ = ppcVar14;
        return auVar19;
      }
      auVar18._8_8_ = ppcVar11;
      auVar18._0_8_ = ppcVar8;
      return auVar18;
    }
  }
  else {
    puStack_430 = (uint *)0x1138270b0;
    uVar12 = extraout_x8_00;
    FUN_1083a39ec(param_2,extraout_x8_00,auStack_428,&puStack_430);
    param_3 = (ulong)(int)uVar12;
    FUN_1083a3b78(param_1,param_2);
    puVar6 = puStack_430;
    func_0x0001083a3ca0();
    func_0x0001083a3cac(extraout_x9_00);
    if ((bool)in_ZR) {
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = puVar6;
      return auVar20;
    }
  }
  ___stack_chk_fail();
  puVar10 = puStack_430;
  FUN_1083a3d3c();
  lVar13 = -1;
  pcStack_438 = FUN_1083a3b78;
  puVar6 = puVar10;
  if (param_3 != 0) {
    uVar16 = (ulong)**(uint **)puVar10;
    uVar2 = uVar16 ^ 0xffffffff;
    if (param_3 + uVar16 >> 0x20 == 0) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      uVar1 = uVar2 + uVar16;
      if ((*(uint **)puVar10)[1] == 1 && (uVar1 ^ uVar16) < 4) {
        puVar7 = puVar10;
        func_0x0001083a3dbc();
        puVar6 = (uint *)((long)puVar7 + uVar16);
        func_0x0001083a3dd4(puVar6);
        *(undefined1 *)((long)puVar7 + uVar1) = 0;
        **(undefined4 **)puVar10 = (int)uVar1;
      }
      else {
        puVar5 = auStack_488;
        lVar13 = uVar2 + **(uint **)puVar10;
        FUN_1083a3310(puVar5,lVar13);
        func_0x0001083a3de0();
        if (uVar16 != 0) {
          lVar13 = *(long *)puVar10 + 8;
          func_0x0001083a3d9c(puVar5,lVar13);
        }
        func_0x0001083a3dd4(puVar5 + uVar16);
        puVar6 = *(uint **)puVar10;
        lVar3 = *puVar6 - uVar16;
        if (uVar16 <= *puVar6 && lVar3 != 0) {
          lVar13 = (long)puVar6 + uVar16 + 8;
          _memcpy(puVar5 + uVar16 + uVar2,lVar13,lVar3);
          puVar6 = *(uint **)puVar10;
        }
        func_0x0001083a3cdc(puVar6);
      }
    }
  }
  auVar17._8_8_ = lVar13;
  auVar17._0_8_ = puVar6;
  return auVar17;
}



/* Entry: 1083a3b78; end: 1083a3b87;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1083a3b78(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  if (param_3 != 0) {
    uVar7 = (ulong)*(uint *)*param_1;
    uVar2 = uVar7 ^ 0xffffffff;
    if (param_3 + uVar7 >> 0x20 == 0) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      uVar1 = uVar2 + uVar7;
      if (((uint *)*param_1)[1] == 1 && (uVar1 ^ uVar7) < 4) {
        plVar6 = param_1;
        func_0x0001083a3dbc(param_1,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar6 + uVar7);
        *(undefined1 *)((long)plVar6 + uVar1) = 0;
        *(int *)*param_1 = (int)uVar1;
      }
      else {
        puVar4 = auStack_58;
        FUN_1083a3310(puVar4,uVar2 + *(uint *)*param_1);
        func_0x0001083a3de0();
        if (uVar7 != 0) {
          func_0x0001083a3d9c(puVar4,*param_1 + 8);
        }
        func_0x0001083a3dd4(puVar4 + uVar7);
        puVar5 = (uint *)*param_1;
        lVar3 = *puVar5 - uVar7;
        if (uVar7 <= *puVar5 && lVar3 != 0) {
          _memcpy(puVar4 + uVar7 + uVar2,(long)puVar5 + uVar7 + 8,lVar3);
          puVar5 = (uint *)*param_1;
        }
        func_0x0001083a3cdc(puVar5);
      }
    }
  }
  return;
}



/* Entry: 1083a3b88; end: 1083a3c33;  */

void FUN_1083a3b88(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_48 [8];
  
  uVar5 = (ulong)*(uint *)*param_1;
  uVar1 = uVar5 - param_2;
  if (param_2 <= uVar5 && uVar1 != 0) {
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    if (param_3 != 0) {
      puVar3 = auStack_48;
      FUN_1083a3310(puVar3,uVar5 - param_3);
      func_0x0001083a3de0();
      lVar4 = *param_1;
      if (param_2 != 0) {
        func_0x0001083a3d9c(puVar3,lVar4 + 8);
      }
      lVar2 = uVar5 - (param_3 + param_2);
      if (lVar2 != 0) {
        _memcpy(puVar3 + param_2,lVar4 + 8 + param_3 + param_2,lVar2);
      }
      func_0x0001083a3cdc(*param_1);
    }
  }
  return;
}



/* Entry: 1083a3c34; end: 1083a3c7b;  */

void FUN_1083a3c34(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0x1138270b0;
  FUN_1083a3970(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083a3c7c; end: 1083a3c9f;  */

undefined8 * FUN_1083a3c7c(undefined8 *param_1)

{
  FUN_1083a3ca0(*param_1);
  return param_1;
}



/* Entry: 1083a3ca0; end: 1083a3d3b;  */

void FUN_1083a3ca0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0x1138270b0) {
    piVar1 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1083a3d3c; end: 1083a3d4f;  */

void FUN_1083a3d3c(void)

{
  FUN_1083a3ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083a3d50; end: 1083a3e1b;  */

void FUN_1083a3d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)();
  return;
}



/* Entry: 1083a3e1c; end: 1083a3ecf;  */

void FUN_1083a3e1c(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_28 = 0x1138270b0;
    FUN_1083a394c(&uStack_28,&UNK_10f490662);
    puVar1 = &uStack_28;
    FUN_1083a3ed0(puVar1,0x2e);
    if ((int)puVar1 != 0) {
      func_0x00010818f354(&uStack_28,0x66);
    }
    FUN_1081fe608(param_1,&uStack_28);
    FUN_1083a3ca0(uStack_28);
  }
  else if (param_2 == 1) {
    FUN_1083a3a90(param_1,&UNK_10f49064d);
  }
  return;
}



/* Entry: 1083a3ed0; end: 1083a3f07;  */

bool FUN_1083a3ed0(long *param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  lVar1 = *param_1 + 8;
  uStack_12 = param_2;
  FUN_1083a3f08(lVar1,&uStack_12);
  return (int)lVar1 != -1;
}



/* Entry: 1083a3f08; end: 1083a3f33;  */

int FUN_1083a3f08(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  _strstr();
  iVar1 = (int)lVar2 - (int)param_1;
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Entry: 1083a3f34; end: 1083a3fd7;  */

void FUN_1083a3f34(char *param_1,undefined8 param_2,int param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  
  if (param_3 == 1) {
    pcVar1 = param_1;
    FUN_1083a3fd8();
    param_1 = param_1 + (long)pcVar1;
  }
  if (*param_1 != '\0') {
    while( true ) {
      pcVar1 = param_1;
      _strcspn(param_1,param_2);
      if ((param_3 == 0) || (lVar2 = 0, pcVar1 != (char *)0x0)) {
        lVar2 = param_4;
        FUN_1082dbd2c();
        FUN_1083a36b8();
        param_1 = param_1 + (long)pcVar1;
      }
      if (*param_1 == '\0') break;
      if (param_3 == 1) {
        FUN_1083a3fd8();
      }
      else {
        lVar2 = 1;
      }
      param_1 = param_1 + lVar2;
    }
  }
  return;
}



/* Entry: 1083a3fd8; end: 1083a3fe3;  */

void FUN_1083a3fd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strspn_11034cc40)();
  return;
}



/* Entry: 1083a3fe4; end: 1083a4107;  */

undefined8
FUN_1083a3fe4(undefined8 param_1,undefined8 param_2,uint *param_3,ulong *param_4,undefined8 *param_5
             ,undefined8 param_6)

{
  ulong *puVar1;
  undefined8 uStack_48;
  
  puVar1 = param_4;
  FUN_1083a4108(param_3[0xf],param_3[0x10],param_1,param_2,param_3[2],*param_3,param_4,param_5);
  if (((ulong)puVar1 & 1) == 0) {
    if (*(long *)(param_3 + 0x16) == 0x1083a64cc) {
      return 0;
    }
    *param_4 = (ulong)*param_3;
    *param_5 = 0x3f800000;
  }
  if (param_3[0x14] == 0) {
    *(ulong *)(param_3 + 5) = *param_4;
    *(undefined8 *)(param_3 + 9) = *param_5;
    *(ulong *)(param_3 + 0x11) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0xf) >> 0x20) + (float)(*param_4 >> 0x20)
                  ,(float)*(undefined8 *)(param_3 + 0xf) + (float)*param_4);
    FUN_10817abbc(param_3 + 0x1e,param_3 + 0x11);
    uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0xf) >> 0x20) -
                         (float)(*param_4 >> 0x20),
                         (float)*(undefined8 *)(param_3 + 0xf) - (float)*param_4);
    FUN_10817abbc(param_3 + 0x1a,&uStack_48);
  }
  else {
    (**(code **)(param_3 + 0x18))
              (*param_3,param_3[1],param_3 + 0x1e,param_3 + 0x1a,param_3 + 0xb,param_3 + 0xf,param_5
               ,(char)param_3[0x15],param_6);
  }
  *(char *)(param_3 + 0x15) = (char)param_6;
  return 1;
}



/* Entry: 1083a4108; end: 1083a4163;  */

void FUN_1083a4108(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,int param_8)

{
  float *unaff_x19;
  float *unaff_x20;
  float fVar1;
  float fVar2;
  
  func_0x0001083a61e4();
  func_0x000108384968((param_3 - param_1) * param_5,param_5 * (param_4 - param_2));
  if (param_8 != 0) {
    fVar1 = *unaff_x20;
    fVar2 = unaff_x20[1];
    *unaff_x20 = fVar2;
    unaff_x20[1] = -fVar1;
    *unaff_x19 = param_6 * fVar2;
    unaff_x19[1] = -(fVar1 * param_6);
  }
  return;
}



/* Entry: 1083a4164; end: 1083a431b;  */

void FUN_1083a4164(undefined4 *param_1,int param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((int)param_1[0x14] < 1) goto LAB_1083a42f4;
  if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0x1a);
    uVar2 = *(uint *)(*plVar5 + 0x30);
    if ((int)uVar2 < 1) {
      uStack_28 = 0;
    }
    else {
      uStack_28 = *(undefined8 *)(*(long *)(*plVar5 + 0x28) + (ulong)uVar2 * 8 + -8);
    }
    plVar1 = plVar5;
    if (param_3 == 0) {
      plVar1 = (long *)0x0;
    }
    (**(code **)(param_1 + 0x16))(param_1 + 0x1e,param_1 + 0xf,param_1 + 7,&uStack_28,plVar1);
    FUN_108379448(param_1 + 0x1e,plVar5);
    uStack_30 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20),
                         -(float)*(undefined8 *)(param_1 + 5));
    if (*(char *)(param_1 + 0x15) == '\0') {
      plVar5 = (long *)0x0;
    }
    (**(code **)(param_1 + 0x16))(param_1 + 0x1e,param_1 + 0xd,&uStack_30,param_1 + 0x11,plVar5);
LAB_1083a42c4:
    FUN_108377ec8(param_1 + 0x1e);
  }
  else {
    (**(code **)(param_1 + 0x18))
              (*param_1,param_1[1],param_1 + 0x1e,param_1 + 0x1a,param_1 + 0xb,param_1 + 0xf,
               param_1 + 9,*(undefined1 *)(param_1 + 0x15));
    FUN_108377ec8(param_1 + 0x1e);
    if (*(char *)((long)param_1 + 0x55) != '\x01') {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x1a) + 0x30);
      if ((int)uVar2 < 1) {
        uStack_28 = 0;
      }
      else {
        uStack_28 = *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x1a) + 0x28) + (ulong)uVar2 * 8 + -8);
      }
      FUN_10817abbc(param_1 + 0x1e,&uStack_28);
      FUN_108379448(param_1 + 0x1e,param_1 + 0x1a);
      goto LAB_1083a42c4;
    }
    puVar3 = param_1 + 0x1a;
    func_0x0001083773e0();
    puVar4 = param_1 + 0x1e;
    func_0x0001083773e0(puVar4);
    FUN_108281a6c(puVar3,puVar4);
    if ((int)puVar3 != 0) {
      func_0x000108376c1c(param_1 + 0x1a,param_1 + 0x1e);
    }
  }
  plVar5 = (long *)(param_1 + 0x22);
  if (*(int *)(*plVar5 + 0x48) != 0) {
    func_0x000108142250(param_1 + 0x1e,plVar5,0);
    FUN_1083772f4(plVar5);
  }
LAB_1083a42f4:
  FUN_1083772f4(param_1 + 0x1a);
  param_1[0x13] = *(undefined4 *)(*(long *)(param_1 + 0x1e) + 0x30);
  param_1[0x14] = 0xffffffff;
  return;
}


