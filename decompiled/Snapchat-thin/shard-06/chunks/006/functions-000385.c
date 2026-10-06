/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a78ca8; end: 104a78d5f;  */

uint * FUN_104a78ca8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *apuStack_468 [4];
  long lStack_448;
  uint *apuStack_388 [4];
  long lStack_368;
  uint *apuStack_2a8 [4];
  long lStack_288;
  uint *apuStack_1c8 [4];
  long lStack_1a8;
  uint *apuStack_e8 [4];
  long lStack_c8;
  uint *apuStack_98 [4];
  long lStack_78;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar4 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adf10c(&plStack_50);
  plVar5 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar10 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (uint *)pplVar4;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar5;
  func_0x00010084bc58(apuStack_98,plVar5 + 1,plVar5[5],plVar5[6]);
  iVar8 = (int)apuStack_98;
  func_0x00010061564c(lVar10);
  puVar6 = apuStack_98[0];
  if ((uint *)0x1 < apuStack_98[0]) {
    do {
      lVar10 = *(long *)apuStack_98[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
      if (bVar3) {
        *(long *)apuStack_98[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_98[0] + 2))();
      puVar6 = apuStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)puVar6;
  func_0x00010084bc58(apuStack_e8,puVar6 + 2,*(long *)(puVar6 + 10),*(long *)(puVar6 + 0xc));
  ppuVar9 = apuStack_e8;
  FUN_104a78ee8(lVar10);
  puVar6 = apuStack_e8[0];
  if ((uint *)0x1 < apuStack_e8[0]) {
    do {
      lVar10 = *(long *)apuStack_e8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_e8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_e8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_e8[0] + 2))();
      puVar6 = apuStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_e8);
  }
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 0x10000;
  if ((uVar1 >> 0x10 & 1) == 0) {
    puVar15 = ppuVar9[1];
    puVar12 = *ppuVar9;
    puVar14 = ppuVar9[3];
    puVar7 = ppuVar9[2];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    *(uint **)(puVar6 + 0x46) = puVar15;
    *(uint **)(puVar6 + 0x44) = puVar12;
    *(uint **)(puVar6 + 0x4a) = puVar14;
    *(uint **)(puVar6 + 0x48) = puVar7;
    puVar7 = puVar6;
  }
  else {
    puVar14 = *ppuVar9;
    puVar12 = ppuVar9[3];
    puVar16 = ppuVar9[2];
    puVar15 = ppuVar9[1];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    puVar7 = *(uint **)(puVar6 + 0x44);
    *(uint **)(puVar6 + 0x44) = puVar14;
    *(uint **)(puVar6 + 0x48) = puVar16;
    *(uint **)(puVar6 + 0x46) = puVar15;
    *(uint **)(puVar6 + 0x4a) = puVar12;
    if ((uint *)0x1 < puVar7) {
      do {
        lVar11 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar6 + 0x44;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)puVar7;
  func_0x00010084bc58(apuStack_1c8,puVar7 + 2,*(undefined8 *)(puVar7 + 10),
                      *(undefined8 *)(puVar7 + 0xc));
  ppuVar9 = apuStack_1c8;
  FUN_104a79098(uVar13);
  puVar6 = apuStack_1c8[0];
  if ((uint *)0x1 < apuStack_1c8[0]) {
    do {
      lVar10 = *(long *)apuStack_1c8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_1c8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_1c8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_1c8[0] + 2))();
      puVar6 = apuStack_1c8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_1c8);
  }
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar15 = ppuVar9[1];
    puVar12 = *ppuVar9;
    puVar14 = ppuVar9[3];
    puVar7 = ppuVar9[2];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    *(uint **)(puVar6 + 0x3e) = puVar15;
    *(uint **)(puVar6 + 0x3c) = puVar12;
    *(uint **)(puVar6 + 0x42) = puVar14;
    *(uint **)(puVar6 + 0x40) = puVar7;
    puVar7 = puVar6;
  }
  else {
    puVar14 = *ppuVar9;
    puVar12 = ppuVar9[3];
    puVar16 = ppuVar9[2];
    puVar15 = ppuVar9[1];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    puVar7 = *(uint **)(puVar6 + 0x3c);
    *(uint **)(puVar6 + 0x3c) = puVar14;
    *(uint **)(puVar6 + 0x40) = puVar16;
    *(uint **)(puVar6 + 0x3e) = puVar15;
    *(uint **)(puVar6 + 0x42) = puVar12;
    if ((uint *)0x1 < puVar7) {
      do {
        lVar11 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar6 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)puVar7;
  func_0x00010084bc58(apuStack_2a8,puVar7 + 2,*(undefined8 *)(puVar7 + 10),
                      *(undefined8 *)(puVar7 + 0xc));
  ppuVar9 = apuStack_2a8;
  FUN_104a79244(uVar13);
  puVar6 = apuStack_2a8[0];
  if ((uint *)0x1 < apuStack_2a8[0]) {
    do {
      lVar10 = *(long *)apuStack_2a8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_2a8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_2a8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_2a8[0] + 2))();
      puVar6 = apuStack_2a8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_2a8);
  }
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar15 = ppuVar9[1];
    puVar12 = *ppuVar9;
    puVar14 = ppuVar9[3];
    puVar7 = ppuVar9[2];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    *(uint **)(puVar6 + 0x36) = puVar15;
    *(uint **)(puVar6 + 0x34) = puVar12;
    *(uint **)(puVar6 + 0x3a) = puVar14;
    *(uint **)(puVar6 + 0x38) = puVar7;
    puVar7 = puVar6;
  }
  else {
    puVar14 = *ppuVar9;
    puVar12 = ppuVar9[3];
    puVar16 = ppuVar9[2];
    puVar15 = ppuVar9[1];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    puVar7 = *(uint **)(puVar6 + 0x34);
    *(uint **)(puVar6 + 0x34) = puVar14;
    *(uint **)(puVar6 + 0x38) = puVar16;
    *(uint **)(puVar6 + 0x36) = puVar15;
    *(uint **)(puVar6 + 0x3a) = puVar12;
    if ((uint *)0x1 < puVar7) {
      do {
        lVar11 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar6 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)puVar7;
  func_0x00010084bc58(apuStack_388,puVar7 + 2,*(undefined8 *)(puVar7 + 10),
                      *(undefined8 *)(puVar7 + 0xc));
  ppuVar9 = apuStack_388;
  FUN_104a793f0(uVar13);
  puVar6 = apuStack_388[0];
  if ((uint *)0x1 < apuStack_388[0]) {
    do {
      lVar10 = *(long *)apuStack_388[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_388[0],0x10);
      if (bVar3) {
        *(long *)apuStack_388[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_388[0] + 2))();
      puVar6 = apuStack_388[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_388);
  }
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar15 = ppuVar9[1];
    puVar12 = *ppuVar9;
    puVar14 = ppuVar9[3];
    puVar7 = ppuVar9[2];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    *(uint **)(puVar6 + 0x2e) = puVar15;
    *(uint **)(puVar6 + 0x2c) = puVar12;
    *(uint **)(puVar6 + 0x32) = puVar14;
    *(uint **)(puVar6 + 0x30) = puVar7;
    puVar7 = puVar6;
  }
  else {
    puVar14 = *ppuVar9;
    puVar12 = ppuVar9[3];
    puVar16 = ppuVar9[2];
    puVar15 = ppuVar9[1];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    puVar7 = *(uint **)(puVar6 + 0x2c);
    *(uint **)(puVar6 + 0x2c) = puVar14;
    *(uint **)(puVar6 + 0x30) = puVar16;
    *(uint **)(puVar6 + 0x2e) = puVar15;
    *(uint **)(puVar6 + 0x32) = puVar12;
    if ((uint *)0x1 < puVar7) {
      do {
        lVar11 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar6 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)puVar7;
  func_0x00010084bc58(apuStack_468,puVar7 + 2,*(undefined8 *)(puVar7 + 10),
                      *(undefined8 *)(puVar7 + 0xc));
  ppuVar9 = apuStack_468;
  FUN_104a7959c(uVar13);
  puVar6 = apuStack_468[0];
  if ((uint *)0x1 < apuStack_468[0]) {
    do {
      lVar10 = *(long *)apuStack_468[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_468[0],0x10);
      if (bVar3) {
        *(long *)apuStack_468[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_468[0] + 2))();
      puVar6 = apuStack_468[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_468);
  }
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar15 = ppuVar9[1];
    puVar12 = *ppuVar9;
    puVar14 = ppuVar9[3];
    puVar7 = ppuVar9[2];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    *(uint **)(puVar6 + 0x26) = puVar15;
    *(uint **)(puVar6 + 0x24) = puVar12;
    *(uint **)(puVar6 + 0x2a) = puVar14;
    *(uint **)(puVar6 + 0x28) = puVar7;
    puVar7 = puVar6;
  }
  else {
    puVar14 = *ppuVar9;
    puVar12 = ppuVar9[3];
    puVar16 = ppuVar9[2];
    puVar15 = ppuVar9[1];
    ppuVar9[1] = (uint *)0x0;
    *ppuVar9 = (uint *)0x0;
    ppuVar9[3] = (uint *)0x0;
    ppuVar9[2] = (uint *)0x0;
    puVar7 = *(uint **)(puVar6 + 0x24);
    *(uint **)(puVar6 + 0x24) = puVar14;
    *(uint **)(puVar6 + 0x28) = puVar16;
    *(uint **)(puVar6 + 0x26) = puVar15;
    *(uint **)(puVar6 + 0x2a) = puVar12;
    if ((uint *)0x1 < puVar7) {
      do {
        lVar11 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar6 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar14 = *(uint **)puVar7;
  puVar6 = puVar7 + 2;
  FUN_104a796c0(puVar6,*(undefined8 *)(puVar7 + 10),*(undefined8 *)(puVar7 + 0xc));
  *puVar14 = *puVar14 | 0x200000;
  *(uint **)(puVar14 + 0x22) = puVar6;
  return puVar6;
}



/* Entry: 104a78d60; end: 104a78e23;  */

uint * FUN_104a78d60(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_418 [4];
  long lStack_3f8;
  uint *apuStack_338 [4];
  long lStack_318;
  uint *apuStack_258 [4];
  long lStack_238;
  uint *apuStack_178 [4];
  long lStack_158;
  uint *apuStack_98 [4];
  long lStack_78;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  iVar6 = (int)apuStack_48;
  func_0x00010061564c(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)puVar4;
  func_0x00010084bc58(apuStack_98,puVar4 + 2,*(long *)(puVar4 + 10),*(long *)(puVar4 + 0xc));
  ppuVar7 = apuStack_98;
  FUN_104a78ee8(lVar8);
  puVar4 = apuStack_98[0];
  if ((uint *)0x1 < apuStack_98[0]) {
    do {
      lVar8 = *(long *)apuStack_98[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
      if (bVar3) {
        *(long *)apuStack_98[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_98[0] + 2))();
      puVar4 = apuStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_98);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x10000;
  if ((uVar1 >> 0x10 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x46) = puVar13;
    *(uint **)(puVar4 + 0x44) = puVar10;
    *(uint **)(puVar4 + 0x4a) = puVar12;
    *(uint **)(puVar4 + 0x48) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x44);
    *(uint **)(puVar4 + 0x44) = puVar12;
    *(uint **)(puVar4 + 0x48) = puVar14;
    *(uint **)(puVar4 + 0x46) = puVar13;
    *(uint **)(puVar4 + 0x4a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x44;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_178,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_178;
  FUN_104a79098(uVar11);
  puVar4 = apuStack_178[0];
  if ((uint *)0x1 < apuStack_178[0]) {
    do {
      lVar8 = *(long *)apuStack_178[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_178[0],0x10);
      if (bVar3) {
        *(long *)apuStack_178[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_178[0] + 2))();
      puVar4 = apuStack_178[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_178);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x3c) = puVar10;
    *(uint **)(puVar4 + 0x42) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x3c);
    *(uint **)(puVar4 + 0x3c) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar14;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x42) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_258,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_258;
  FUN_104a79244(uVar11);
  puVar4 = apuStack_258[0];
  if ((uint *)0x1 < apuStack_258[0]) {
    do {
      lVar8 = *(long *)apuStack_258[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_258[0],0x10);
      if (bVar3) {
        *(long *)apuStack_258[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_258[0] + 2))();
      puVar4 = apuStack_258[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_258);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x34) = puVar10;
    *(uint **)(puVar4 + 0x3a) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar14;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x3a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_338,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_338;
  FUN_104a793f0(uVar11);
  puVar4 = apuStack_338[0];
  if ((uint *)0x1 < apuStack_338[0]) {
    do {
      lVar8 = *(long *)apuStack_338[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_338[0],0x10);
      if (bVar3) {
        *(long *)apuStack_338[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_338[0] + 2))();
      puVar4 = apuStack_338[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_338);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x2c) = puVar10;
    *(uint **)(puVar4 + 0x32) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar14;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x32) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_418,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_418;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_418[0];
  if ((uint *)0x1 < apuStack_418[0]) {
    do {
      lVar8 = *(long *)apuStack_418[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_418[0],0x10);
      if (bVar3) {
        *(long *)apuStack_418[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_418[0] + 2))();
      puVar4 = apuStack_418[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_418);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a78e24; end: 104a78ee7;  */

uint * FUN_104a78e24(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_3c8 [4];
  long lStack_3a8;
  uint *apuStack_2e8 [4];
  long lStack_2c8;
  uint *apuStack_208 [4];
  long lStack_1e8;
  uint *apuStack_128 [4];
  long lStack_108;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_104a78ee8(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x10000;
  if ((uVar1 >> 0x10 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x46) = puVar13;
    *(uint **)(puVar4 + 0x44) = puVar10;
    *(uint **)(puVar4 + 0x4a) = puVar12;
    *(uint **)(puVar4 + 0x48) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x44);
    *(uint **)(puVar4 + 0x44) = puVar12;
    *(uint **)(puVar4 + 0x48) = puVar14;
    *(uint **)(puVar4 + 0x46) = puVar13;
    *(uint **)(puVar4 + 0x4a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x44;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_128,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_128;
  FUN_104a79098(uVar11);
  puVar4 = apuStack_128[0];
  if ((uint *)0x1 < apuStack_128[0]) {
    do {
      lVar8 = *(long *)apuStack_128[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
      if (bVar3) {
        *(long *)apuStack_128[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_128[0] + 2))();
      puVar4 = apuStack_128[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_128);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x3c) = puVar10;
    *(uint **)(puVar4 + 0x42) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x3c);
    *(uint **)(puVar4 + 0x3c) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar14;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x42) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_208,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_208;
  FUN_104a79244(uVar11);
  puVar4 = apuStack_208[0];
  if ((uint *)0x1 < apuStack_208[0]) {
    do {
      lVar8 = *(long *)apuStack_208[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_208[0],0x10);
      if (bVar3) {
        *(long *)apuStack_208[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_208[0] + 2))();
      puVar4 = apuStack_208[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_208);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x34) = puVar10;
    *(uint **)(puVar4 + 0x3a) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar14;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x3a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_2e8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_2e8;
  FUN_104a793f0(uVar11);
  puVar4 = apuStack_2e8[0];
  if ((uint *)0x1 < apuStack_2e8[0]) {
    do {
      lVar8 = *(long *)apuStack_2e8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_2e8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_2e8[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_2e8[0] + 2))();
      puVar4 = apuStack_2e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_2e8);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x2c) = puVar10;
    *(uint **)(puVar4 + 0x32) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar14;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x32) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_3c8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_3c8;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_3c8[0];
  if ((uint *)0x1 < apuStack_3c8[0]) {
    do {
      lVar8 = *(long *)apuStack_3c8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_3c8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_3c8[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_3c8[0] + 2))();
      puVar4 = apuStack_3c8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_3c8);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a78ee8; end: 104a78fd3;  */

uint * FUN_104a78ee8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *apuStack_378 [4];
  long lStack_358;
  uint *apuStack_298 [4];
  long lStack_278;
  uint *apuStack_1b8 [4];
  long lStack_198;
  uint *apuStack_d8 [4];
  long lStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x10000;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar16 = param_2[1];
    uVar14 = *param_2;
    uVar10 = param_2[3];
    uVar12 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x46) = uVar16;
    *(undefined8 *)(param_1 + 0x44) = uVar14;
    *(undefined8 *)(param_1 + 0x4a) = uVar10;
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    puVar4 = param_1;
  }
  else {
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar16 = param_2[2];
    uVar14 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x44);
    *(undefined8 *)(param_1 + 0x44) = uVar12;
    *(undefined8 *)(param_1 + 0x48) = uVar16;
    *(undefined8 *)(param_1 + 0x46) = uVar14;
    *(undefined8 *)(param_1 + 0x4a) = uVar10;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar8 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1 + 0x44;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar4;
  func_0x00010084bc58(apuStack_d8,puVar4 + 2,*(undefined8 *)(puVar4 + 10),
                      *(undefined8 *)(puVar4 + 0xc));
  ppuVar7 = apuStack_d8;
  FUN_104a79098(uVar12);
  puVar4 = apuStack_d8[0];
  if ((uint *)0x1 < apuStack_d8[0]) {
    do {
      lVar9 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar4 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_d8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x3e) = puVar15;
    *(uint **)(puVar4 + 0x3c) = puVar11;
    *(uint **)(puVar4 + 0x42) = puVar13;
    *(uint **)(puVar4 + 0x40) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x3c);
    *(uint **)(puVar4 + 0x3c) = puVar13;
    *(uint **)(puVar4 + 0x40) = puVar17;
    *(uint **)(puVar4 + 0x3e) = puVar15;
    *(uint **)(puVar4 + 0x42) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_1b8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_1b8;
  FUN_104a79244(uVar12);
  puVar4 = apuStack_1b8[0];
  if ((uint *)0x1 < apuStack_1b8[0]) {
    do {
      lVar9 = *(long *)apuStack_1b8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_1b8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_1b8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_1b8[0] + 2))();
      puVar4 = apuStack_1b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_1b8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar15;
    *(uint **)(puVar4 + 0x34) = puVar11;
    *(uint **)(puVar4 + 0x3a) = puVar13;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar13;
    *(uint **)(puVar4 + 0x38) = puVar17;
    *(uint **)(puVar4 + 0x36) = puVar15;
    *(uint **)(puVar4 + 0x3a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_298,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_298;
  FUN_104a793f0(uVar12);
  puVar4 = apuStack_298[0];
  if ((uint *)0x1 < apuStack_298[0]) {
    do {
      lVar9 = *(long *)apuStack_298[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_298[0],0x10);
      if (bVar3) {
        *(long *)apuStack_298[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_298[0] + 2))();
      puVar4 = apuStack_298[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_298);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x2c) = puVar11;
    *(uint **)(puVar4 + 0x32) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar17;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x32) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_378,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_378;
  FUN_104a7959c(uVar12);
  puVar4 = apuStack_378[0];
  if ((uint *)0x1 < apuStack_378[0]) {
    do {
      lVar9 = *(long *)apuStack_378[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_378[0],0x10);
      if (bVar3) {
        *(long *)apuStack_378[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_378[0] + 2))();
      puVar4 = apuStack_378[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_378);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x24) = puVar11;
    *(uint **)(puVar4 + 0x2a) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar17;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x2a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar13 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar13 = *puVar13 | 0x200000;
  *(uint **)(puVar13 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a78fd4; end: 104a79097;  */

uint * FUN_104a78fd4(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_2e8 [4];
  long lStack_2c8;
  uint *apuStack_208 [4];
  long lStack_1e8;
  uint *apuStack_128 [4];
  long lStack_108;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_104a79098(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x3c) = puVar10;
    *(uint **)(puVar4 + 0x42) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x3c);
    *(uint **)(puVar4 + 0x3c) = puVar12;
    *(uint **)(puVar4 + 0x40) = puVar14;
    *(uint **)(puVar4 + 0x3e) = puVar13;
    *(uint **)(puVar4 + 0x42) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_128,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_128;
  FUN_104a79244(uVar11);
  puVar4 = apuStack_128[0];
  if ((uint *)0x1 < apuStack_128[0]) {
    do {
      lVar8 = *(long *)apuStack_128[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
      if (bVar3) {
        *(long *)apuStack_128[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_128[0] + 2))();
      puVar4 = apuStack_128[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_128);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x34) = puVar10;
    *(uint **)(puVar4 + 0x3a) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar14;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x3a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_208,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_208;
  FUN_104a793f0(uVar11);
  puVar4 = apuStack_208[0];
  if ((uint *)0x1 < apuStack_208[0]) {
    do {
      lVar8 = *(long *)apuStack_208[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_208[0],0x10);
      if (bVar3) {
        *(long *)apuStack_208[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_208[0] + 2))();
      puVar4 = apuStack_208[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_208);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x2c) = puVar10;
    *(uint **)(puVar4 + 0x32) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar14;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x32) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_2e8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_2e8;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_2e8[0];
  if ((uint *)0x1 < apuStack_2e8[0]) {
    do {
      lVar8 = *(long *)apuStack_2e8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_2e8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_2e8[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_2e8[0] + 2))();
      puVar4 = apuStack_2e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_2e8);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a79098; end: 104a7917f;  */

uint * FUN_104a79098(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *apuStack_298 [4];
  long lStack_278;
  uint *apuStack_1b8 [4];
  long lStack_198;
  uint *apuStack_d8 [4];
  long lStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar16 = param_2[1];
    uVar14 = *param_2;
    uVar10 = param_2[3];
    uVar12 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x3e) = uVar16;
    *(undefined8 *)(param_1 + 0x3c) = uVar14;
    *(undefined8 *)(param_1 + 0x42) = uVar10;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    puVar4 = param_1;
  }
  else {
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar16 = param_2[2];
    uVar14 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x3c) = uVar12;
    *(undefined8 *)(param_1 + 0x40) = uVar16;
    *(undefined8 *)(param_1 + 0x3e) = uVar14;
    *(undefined8 *)(param_1 + 0x42) = uVar10;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar8 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar4;
  func_0x00010084bc58(apuStack_d8,puVar4 + 2,*(undefined8 *)(puVar4 + 10),
                      *(undefined8 *)(puVar4 + 0xc));
  ppuVar7 = apuStack_d8;
  FUN_104a79244(uVar12);
  puVar4 = apuStack_d8[0];
  if ((uint *)0x1 < apuStack_d8[0]) {
    do {
      lVar9 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar4 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_d8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar15;
    *(uint **)(puVar4 + 0x34) = puVar11;
    *(uint **)(puVar4 + 0x3a) = puVar13;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar13;
    *(uint **)(puVar4 + 0x38) = puVar17;
    *(uint **)(puVar4 + 0x36) = puVar15;
    *(uint **)(puVar4 + 0x3a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_1b8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_1b8;
  FUN_104a793f0(uVar12);
  puVar4 = apuStack_1b8[0];
  if ((uint *)0x1 < apuStack_1b8[0]) {
    do {
      lVar9 = *(long *)apuStack_1b8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_1b8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_1b8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_1b8[0] + 2))();
      puVar4 = apuStack_1b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_1b8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x2c) = puVar11;
    *(uint **)(puVar4 + 0x32) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar17;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x32) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_298,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_298;
  FUN_104a7959c(uVar12);
  puVar4 = apuStack_298[0];
  if ((uint *)0x1 < apuStack_298[0]) {
    do {
      lVar9 = *(long *)apuStack_298[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_298[0],0x10);
      if (bVar3) {
        *(long *)apuStack_298[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_298[0] + 2))();
      puVar4 = apuStack_298[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_298);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x24) = puVar11;
    *(uint **)(puVar4 + 0x2a) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar17;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x2a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar13 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar13 = *puVar13 | 0x200000;
  *(uint **)(puVar13 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a79180; end: 104a79243;  */

uint * FUN_104a79180(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_208 [4];
  long lStack_1e8;
  uint *apuStack_128 [4];
  long lStack_108;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_104a79244(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x34) = puVar10;
    *(uint **)(puVar4 + 0x3a) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x34);
    *(uint **)(puVar4 + 0x34) = puVar12;
    *(uint **)(puVar4 + 0x38) = puVar14;
    *(uint **)(puVar4 + 0x36) = puVar13;
    *(uint **)(puVar4 + 0x3a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_128,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_128;
  FUN_104a793f0(uVar11);
  puVar4 = apuStack_128[0];
  if ((uint *)0x1 < apuStack_128[0]) {
    do {
      lVar8 = *(long *)apuStack_128[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
      if (bVar3) {
        *(long *)apuStack_128[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_128[0] + 2))();
      puVar4 = apuStack_128[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_128);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x2c) = puVar10;
    *(uint **)(puVar4 + 0x32) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar14;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x32) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_208,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_208;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_208[0];
  if ((uint *)0x1 < apuStack_208[0]) {
    do {
      lVar8 = *(long *)apuStack_208[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_208[0],0x10);
      if (bVar3) {
        *(long *)apuStack_208[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_208[0] + 2))();
      puVar4 = apuStack_208[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_208);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a79244; end: 104a7932b;  */

uint * FUN_104a79244(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *apuStack_1b8 [4];
  long lStack_198;
  uint *apuStack_d8 [4];
  long lStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar16 = param_2[1];
    uVar14 = *param_2;
    uVar10 = param_2[3];
    uVar12 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x36) = uVar16;
    *(undefined8 *)(param_1 + 0x34) = uVar14;
    *(undefined8 *)(param_1 + 0x3a) = uVar10;
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    puVar4 = param_1;
  }
  else {
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar16 = param_2[2];
    uVar14 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = uVar12;
    *(undefined8 *)(param_1 + 0x38) = uVar16;
    *(undefined8 *)(param_1 + 0x36) = uVar14;
    *(undefined8 *)(param_1 + 0x3a) = uVar10;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar8 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar4;
  func_0x00010084bc58(apuStack_d8,puVar4 + 2,*(undefined8 *)(puVar4 + 10),
                      *(undefined8 *)(puVar4 + 0xc));
  ppuVar7 = apuStack_d8;
  FUN_104a793f0(uVar12);
  puVar4 = apuStack_d8[0];
  if ((uint *)0x1 < apuStack_d8[0]) {
    do {
      lVar9 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar4 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_d8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x2c) = puVar11;
    *(uint **)(puVar4 + 0x32) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar13;
    *(uint **)(puVar4 + 0x30) = puVar17;
    *(uint **)(puVar4 + 0x2e) = puVar15;
    *(uint **)(puVar4 + 0x32) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_1b8,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_1b8;
  FUN_104a7959c(uVar12);
  puVar4 = apuStack_1b8[0];
  if ((uint *)0x1 < apuStack_1b8[0]) {
    do {
      lVar9 = *(long *)apuStack_1b8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_1b8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_1b8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_1b8[0] + 2))();
      puVar4 = apuStack_1b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_1b8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x24) = puVar11;
    *(uint **)(puVar4 + 0x2a) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar17;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x2a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar13 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar13 = *puVar13 | 0x200000;
  *(uint **)(puVar13 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a7932c; end: 104a793ef;  */

uint * FUN_104a7932c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_128 [4];
  long lStack_108;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_104a793f0(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x2c) = puVar10;
    *(uint **)(puVar4 + 0x32) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x2c);
    *(uint **)(puVar4 + 0x2c) = puVar12;
    *(uint **)(puVar4 + 0x30) = puVar14;
    *(uint **)(puVar4 + 0x2e) = puVar13;
    *(uint **)(puVar4 + 0x32) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)puVar5;
  func_0x00010084bc58(apuStack_128,puVar5 + 2,*(undefined8 *)(puVar5 + 10),
                      *(undefined8 *)(puVar5 + 0xc));
  ppuVar7 = apuStack_128;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_128[0];
  if ((uint *)0x1 < apuStack_128[0]) {
    do {
      lVar8 = *(long *)apuStack_128[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
      if (bVar3) {
        *(long *)apuStack_128[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_128[0] + 2))();
      puVar4 = apuStack_128[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_128);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a793f0; end: 104a794d7;  */

uint * FUN_104a793f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *apuStack_d8 [4];
  long lStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar16 = param_2[1];
    uVar14 = *param_2;
    uVar10 = param_2[3];
    uVar12 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x2e) = uVar16;
    *(undefined8 *)(param_1 + 0x2c) = uVar14;
    *(undefined8 *)(param_1 + 0x32) = uVar10;
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    puVar4 = param_1;
  }
  else {
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar16 = param_2[2];
    uVar14 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x2c) = uVar12;
    *(undefined8 *)(param_1 + 0x30) = uVar16;
    *(undefined8 *)(param_1 + 0x2e) = uVar14;
    *(undefined8 *)(param_1 + 0x32) = uVar10;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar8 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1 + 0x2c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)puVar4;
  func_0x00010084bc58(apuStack_d8,puVar4 + 2,*(undefined8 *)(puVar4 + 10),
                      *(undefined8 *)(puVar4 + 0xc));
  ppuVar7 = apuStack_d8;
  FUN_104a7959c(uVar12);
  puVar4 = apuStack_d8[0];
  if ((uint *)0x1 < apuStack_d8[0]) {
    do {
      lVar9 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar4 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_d8);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar15 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar13 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x24) = puVar11;
    *(uint **)(puVar4 + 0x2a) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar13 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar17 = ppuVar7[2];
    puVar15 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar13;
    *(uint **)(puVar4 + 0x28) = puVar17;
    *(uint **)(puVar4 + 0x26) = puVar15;
    *(uint **)(puVar4 + 0x2a) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar8 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar13 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar13 = *puVar13 | 0x200000;
  *(uint **)(puVar13 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a794d8; end: 104a7959b;  */

uint * FUN_104a794d8(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5],param_1[6]);
  ppuVar7 = apuStack_48;
  FUN_104a7959c(uVar11);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar10 = *ppuVar7;
    puVar12 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x24) = puVar10;
    *(uint **)(puVar4 + 0x2a) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar12 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x24);
    *(uint **)(puVar4 + 0x24) = puVar12;
    *(uint **)(puVar4 + 0x28) = puVar14;
    *(uint **)(puVar4 + 0x26) = puVar13;
    *(uint **)(puVar4 + 0x2a) = puVar10;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar12 = *(uint **)puVar5;
  puVar4 = puVar5 + 2;
  FUN_104a796c0(puVar4,*(undefined8 *)(puVar5 + 10),*(undefined8 *)(puVar5 + 0xc));
  *puVar12 = *puVar12 | 0x200000;
  *(uint **)(puVar12 + 0x22) = puVar4;
  return puVar4;
}



/* Entry: 104a7959c; end: 104a79683;  */

uint * FUN_104a7959c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x26) = uVar13;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x2a) = uVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    puVar4 = param_1;
  }
  else {
    uVar9 = *param_2;
    uVar10 = param_2[3];
    uVar13 = param_2[2];
    uVar12 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = uVar9;
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    *(undefined8 *)(param_1 + 0x26) = uVar12;
    *(undefined8 *)(param_1 + 0x2a) = uVar10;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar7 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  puVar11 = *(uint **)puVar4;
  puVar5 = puVar4 + 2;
  FUN_104a796c0(puVar5,*(undefined8 *)(puVar4 + 10),*(undefined8 *)(puVar4 + 0xc));
  *puVar11 = *puVar11 | 0x200000;
  *(uint **)(puVar11 + 0x22) = puVar5;
  return puVar5;
}



/* Entry: 104a79684; end: 104a796bf;  */

void FUN_104a79684(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_104a796c0(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x200000;
  *(undefined8 **)(puVar2 + 0x22) = puVar1;
  return;
}



/* Entry: 104a796c0; end: 104a7970b;  */

undefined8 FUN_104a796c0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((long *)0x1 < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return 0;
}



/* Entry: 104a7970c; end: 104a79797;  */

void FUN_104a7970c(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  char cStack_21;
  
  puVar2 = (uint *)*param_1;
  FUN_104a79798(auStack_40,param_1 + 1,param_1[5],param_1[6]);
  uVar1 = *puVar2;
  puVar3 = puVar2 + 0x18;
  *puVar2 = uVar1 | 0x400000;
  if ((uVar1 >> 0x16 & 1) == 0) {
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
  }
  FUN_104a7986c(puVar3,auStack_40);
  if (cStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 104a79798; end: 104a7986b;  */

ulong * FUN_104a79798(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_2[1];
  puStack_50 = (ulong *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_104adf32c(&uStack_70,&puStack_50);
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  param_1[1] = uStack_68;
  param_1[3] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar4 = puStack_50;
  if ((ulong *)0x1 < puStack_50) {
    do {
      uVar6 = *puStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar3) {
        *puStack_50 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 == 0) {
      (*(code *)puStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&puStack_50);
  }
  __Unwind_Resume();
  puVar7 = puVar4 + 1;
  if ((*puVar4 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar7 = (ulong *)puVar4[1];
    uVar6 = puVar4[2];
  }
  uVar9 = *puVar4 >> 1;
  if (uVar9 != uVar6) {
    puVar7 = puVar7 + uVar9 * 4;
    *puVar7 = *param_3;
    uVar9 = param_3[2];
    uVar6 = param_3[1];
    puVar7[3] = param_3[3];
    puVar7[2] = uVar9;
    puVar7[1] = uVar6;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    *puVar4 = *puVar4 + 2;
    return puVar7;
  }
  ppuVar5 = &puStack_c0;
  puVar7 = puVar4 + 1;
  uVar6 = *puVar4;
  if ((uVar6 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    puVar7 = (ulong *)puVar4[1];
    uVar9 = puVar4[2] << 1;
  }
  puStack_c0 = (undefined1 *)0x0;
  uStack_b8 = 0;
  FUN_104a79a00();
  uVar11 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar5 + uVar11 * 0x20);
  puStack_c0 = (undefined1 *)ppuVar5;
  uStack_b8 = uVar9;
  *puVar1 = *param_3;
  uVar12 = param_3[2];
  uVar9 = param_3[1];
  puVar1[3] = param_3[3];
  puVar1[2] = uVar12;
  puVar1[1] = uVar9;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[1] = 0;
  if (1 < uVar6) {
    puVar8 = (ulong *)((long)ppuVar5 + 8);
    uVar6 = uVar11;
    puVar10 = puVar7;
    do {
      puVar8[-1] = *puVar10;
      uVar12 = puVar10[2];
      uVar9 = puVar10[1];
      puVar8[2] = puVar10[3];
      puVar8[1] = uVar12;
      *puVar8 = uVar9;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 4;
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 4;
    } while (uVar6 != 0);
    puVar7 = puVar7 + uVar11 * 4 + -3;
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar6 = *puVar4;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(puVar4[1]);
    uVar6 = *puVar4;
  }
  puVar4[1] = (ulong)puStack_c0;
  puVar4[2] = uStack_b8;
  *puVar4 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 104a7986c; end: 104a798cb;  */

ulong * FUN_104a7986c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    puVar3 = puVar3 + uVar5 * 4;
    *puVar3 = *param_2;
    uVar5 = param_2[2];
    uVar6 = param_2[1];
    puVar3[3] = param_2[3];
    puVar3[2] = uVar5;
    puVar3[1] = uVar6;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *param_1 = *param_1 + 2;
    return puVar3;
  }
  ppuVar2 = &puStack_50;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_104a79a00();
  uVar8 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar2 + uVar8 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar5;
  *puVar1 = *param_2;
  uVar9 = param_2[2];
  uVar5 = param_2[1];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar9;
  puVar1[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  if (1 < uVar6) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      puVar4[-1] = *puVar7;
      uVar9 = puVar7[2];
      uVar5 = puVar7[1];
      puVar4[2] = puVar7[3];
      puVar4[1] = uVar9;
      *puVar4 = uVar5;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 104a798cc; end: 104a799ff;  */

undefined8 * FUN_104a798cc(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_104a79a00();
  uVar7 = uVar8 >> 1;
  puVar1 = (undefined8 *)((long)ppuVar2 + uVar7 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  uVar10 = param_2[2];
  uVar9 = param_2[1];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar10;
  puVar1[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  if (1 < uVar8) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      puVar4[-1] = *puVar5;
      uVar11 = puVar5[2];
      uVar3 = puVar5[1];
      puVar4[2] = puVar5[3];
      puVar4[1] = uVar11;
      *puVar4 = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 4 + -3;
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      puVar6 = puVar6 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar8 | 1) + 2;
  return puVar1;
}



/* Entry: 104a79a00; end: 104a79a33;  */

undefined1  [16] FUN_104a79a00(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  uint ***pppuVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint **ppuStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_98;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  uint *apuStack_68 [4];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3b == 0) {
    lVar4 = param_2 << 5;
    __Znwm(lVar4);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar4;
    return auVar15;
  }
  FUN_104a7757c();
  pcStack_28 = FUN_104a79a34;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  uVar9 = param_1[6];
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x00010084bc58(apuStack_68,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_68;
  FUN_104a79af8(uVar12);
  puVar5 = apuStack_68[0];
  if ((uint *)0x1 < apuStack_68[0]) {
    do {
      lVar4 = *(long *)apuStack_68[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_68[0],0x10);
      if (bVar3) {
        *(long *)apuStack_68[0] = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(apuStack_68[0] + 2))();
      puVar5 = apuStack_68[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar16._8_8_ = ppuVar7;
    auVar16._0_8_ = puVar5;
    return auVar16;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_68);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_104a79af8;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar5;
  *puVar5 = uVar1 | 0x800000;
  ppuStack_80 = &puStack_30;
  if ((uVar1 >> 0x17 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar6 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar5 + 0x12) = puVar13;
    *(uint **)(puVar5 + 0x10) = puVar11;
    *(uint **)(puVar5 + 0x16) = puVar10;
    *(uint **)(puVar5 + 0x14) = puVar6;
    puVar6 = puVar5;
  }
  else {
    puVar10 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar6 = *(uint **)(puVar5 + 0x10);
    uStack_f0 = *(undefined8 *)(puVar5 + 0x16);
    uStack_f8 = *(undefined8 *)(puVar5 + 0x14);
    uStack_100 = *(undefined8 *)(puVar5 + 0x12);
    *(uint **)(puVar5 + 0x10) = puVar10;
    *(uint **)(puVar5 + 0x14) = puVar14;
    *(uint **)(puVar5 + 0x12) = puVar13;
    *(uint **)(puVar5 + 0x16) = puVar11;
    if ((uint *)0x1 < puVar6) {
      do {
        lVar4 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    auVar17._8_8_ = ppuVar7;
    auVar17._0_8_ = puVar5 + 0x10;
    return auVar17;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  pppuVar8 = &ppuStack_120;
  pcStack_108 = FUN_104a79be0;
  ppuStack_120 = ppuVar7;
  uStack_118 = uVar9;
  ppuStack_110 = &ppuStack_80;
  FUN_104a79c08();
  auVar18._8_8_ = pppuVar8;
  auVar18._0_8_ = puVar6;
  return auVar18;
}



/* Entry: 104a79a34; end: 104a79af7;  */

uint * FUN_104a79a34(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x00010084bc58(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_104a79af8(uVar12);
  puVar4 = apuStack_48[0];
  if ((uint *)0x1 < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *puVar4;
  *puVar4 = uVar1 | 0x800000;
  if ((uVar1 >> 0x17 & 1) == 0) {
    puVar13 = ppuVar7[1];
    puVar11 = *ppuVar7;
    puVar10 = ppuVar7[3];
    puVar5 = ppuVar7[2];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    *(uint **)(puVar4 + 0x12) = puVar13;
    *(uint **)(puVar4 + 0x10) = puVar11;
    *(uint **)(puVar4 + 0x16) = puVar10;
    *(uint **)(puVar4 + 0x14) = puVar5;
    puVar5 = puVar4;
  }
  else {
    puVar10 = *ppuVar7;
    puVar11 = ppuVar7[3];
    puVar14 = ppuVar7[2];
    puVar13 = ppuVar7[1];
    ppuVar7[1] = (uint *)0x0;
    *ppuVar7 = (uint *)0x0;
    ppuVar7[3] = (uint *)0x0;
    ppuVar7[2] = (uint *)0x0;
    puVar5 = *(uint **)(puVar4 + 0x10);
    *(uint **)(puVar4 + 0x10) = puVar10;
    *(uint **)(puVar4 + 0x14) = puVar14;
    *(uint **)(puVar4 + 0x12) = puVar13;
    *(uint **)(puVar4 + 0x16) = puVar11;
    if ((uint *)0x1 < puVar5) {
      do {
        lVar9 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
  }
  iVar6 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar4 + 0x10;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  FUN_104a79c08();
  return puVar5;
}



/* Entry: 104a79af8; end: 104a79bdf;  */

uint * FUN_104a79af8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x800000;
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x12) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    puVar4 = param_1;
  }
  else {
    uVar8 = *param_2;
    uVar9 = param_2[3];
    uVar11 = param_2[2];
    uVar10 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 0x14) = uVar11;
    *(undefined8 *)(param_1 + 0x12) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    if ((uint *)0x1 < puVar4) {
      do {
        lVar6 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar5 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1 + 0x10;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  FUN_104a79c08();
  return puVar4;
}



/* Entry: 104a79be0; end: 104a79c07;  */

void FUN_104a79be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_104a79c08(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 104a79c08; end: 104a79d1b;  */

void FUN_104a79c08(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  char *apcStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_3[1] & 0xff;
  lStack_40 = (long)param_3 + 9;
  if (*param_3 != 0) {
    uStack_38 = param_3[1];
    lStack_40 = param_3[2];
  }
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  pcStack_70 = " key:";
  uStack_68 = 5;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  pcStack_50 = " value:";
  uStack_48 = 7;
  func_0x00010ae8c7e0(apcStack_98,&uStack_80,5);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  uVar2 = 0x9b1;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x9b1,2,"%s");
  if (cStack_81 < '\0') {
    pcVar1 = apcStack_98[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_81 < '\0') {
    __ZdlPv(apcStack_98[0]);
  }
  __Unwind_Resume();
  FUN_104a79f84();
  plVar3 = *(long **)(pcVar1 + 0x1f8);
  if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
    plVar3 = (long *)0x0;
  }
  lVar4 = 0;
LAB_104a79d54:
  do {
    while (plVar3 == (long *)0x0) {
      if (lVar4 == 0) {
        return;
      }
      FUN_104a79dc4(uVar2,lVar4 << 6 | 0x10,lVar4 << 6 | 0x30);
      lVar4 = lVar4 + 1;
      plVar3 = (long *)0x0;
    }
    FUN_104a79dc4(uVar2,plVar3 + lVar4 * 8 + 2,plVar3 + lVar4 * 8 + 6);
    lVar4 = lVar4 + 1;
    do {
      if (lVar4 != plVar3[1]) goto LAB_104a79d54;
      lVar4 = 0;
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar4 = 0;
  } while( true );
}



/* Entry: 104a79d1c; end: 104a79dc3;  */

void FUN_104a79d1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_104a79f84();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_104a79d54:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_104a79dc4(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_104a79dc4(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_104a79d54;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 104a79dc4; end: 104a79f83;  */

void FUN_104a79dc4(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  if (*param_2 == 0) {
    lVar7 = (long)param_2 + 9;
    uVar6 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar6 = param_2[1];
    if (0x7ffffffffffffff7 < uVar6) {
      func_0x000104a6fa5c(&ppuStack_68);
      goto LAB_104a79f44;
    }
    lVar7 = param_2[2];
  }
  if (uVar6 < 0x17) {
    uStack_58 = CONCAT17((char)uVar6,(undefined7)uStack_58);
    pppuVar3 = &ppuStack_68;
    if (uVar6 != 0) goto LAB_104a79e5c;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_58 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_68 = pppuVar3;
    uStack_60 = uVar6;
LAB_104a79e5c:
    _memmove(pppuVar3,lVar7,uVar6);
  }
  *(undefined1 *)((long)pppuVar3 + uVar6) = 0;
  if (*param_3 == 0) {
    lVar7 = (long)param_3 + 9;
    uVar6 = (ulong)*(byte *)(param_3 + 1);
  }
  else {
    uVar6 = param_3[1];
    if (0x7ffffffffffffff7 < uVar6) {
LAB_104a79f44:
      func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a79f50);
      (*pcVar2)();
    }
    lVar7 = param_3[2];
  }
  if (uVar6 < 0x17) {
    uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
    if (uVar6 == 0) goto LAB_104a79eec;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    ppuVar4 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_80 = (undefined1 *)ppuVar4;
    uStack_78 = uVar6;
  }
  _memmove(ppuVar4,lVar7,uVar6);
  ppuVar5 = ppuVar4;
LAB_104a79eec:
  *(undefined1 *)((long)ppuVar5 + uVar6) = 0;
  func_0x000107551154(param_1,&ppuStack_68,&puStack_80);
  if ((long)uStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 104a79f84; end: 104a7a18b;  */

void FUN_104a79f84(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar6 = *param_1;
  if ((uVar6 >> 1 & 1) == 0) {
    if ((uVar6 >> 3 & 1) != 0) goto LAB_104a7a020;
LAB_104a79fa4:
    if ((uVar6 >> 4 & 1) != 0) goto LAB_104a7a034;
LAB_104a79fa8:
    if ((uVar6 >> 5 & 1) != 0) goto LAB_104a7a048;
LAB_104a79fac:
    if ((uVar6 >> 6 & 1) != 0) goto LAB_104a7a05c;
LAB_104a79fb0:
    if ((uVar6 >> 7 & 1) != 0) goto LAB_104a7a070;
LAB_104a79fb4:
    if ((uVar6 >> 8 & 1) != 0) goto LAB_104a7a084;
LAB_104a79fb8:
    if ((uVar6 >> 9 & 1) != 0) goto LAB_104a7a098;
LAB_104a79fbc:
    if ((uVar6 >> 10 & 1) != 0) goto LAB_104a7a0ac;
LAB_104a79fc0:
    if ((uVar6 >> 0xc & 1) != 0) goto LAB_104a7a0c0;
LAB_104a79fc4:
    if ((uVar6 >> 0xd & 1) != 0) goto LAB_104a7a0d4;
LAB_104a79fc8:
    if ((uVar6 >> 0xe & 1) != 0) goto LAB_104a7a0e8;
LAB_104a79fcc:
    if ((uVar6 >> 0xf & 1) != 0) goto LAB_104a7a0fc;
LAB_104a79fd0:
    if ((uVar6 >> 0x10 & 1) != 0) goto LAB_104a7a110;
LAB_104a79fd4:
    if ((uVar6 >> 0x11 & 1) != 0) goto LAB_104a7a124;
LAB_104a79fd8:
    if ((uVar6 >> 0x12 & 1) != 0) goto LAB_104a7a138;
LAB_104a79fdc:
    if ((uVar6 >> 0x13 & 1) != 0) goto LAB_104a7a14c;
LAB_104a79fe0:
    if ((uVar6 >> 0x14 & 1) != 0) goto LAB_104a7a160;
LAB_104a79fe4:
    if ((uVar6 >> 0x15 & 1) != 0) goto LAB_104a7a174;
LAB_104a79fe8:
    if ((uVar6 >> 0x16 & 1) != 0) {
      FUN_104a7c34c(param_1 + 0x18,param_2);
      uVar6 = *param_1;
    }
    if ((uVar6 >> 0x17 & 1) == 0) {
      return;
    }
  }
  else {
    FUN_104a7a18c(param_2,param_1 + 0x6c);
    uVar6 = *param_1;
    if ((uVar6 >> 3 & 1) == 0) goto LAB_104a79fa4;
LAB_104a7a020:
    FUN_104a7a3b4(param_2,param_1 + 0x69);
    uVar6 = *param_1;
    if ((uVar6 >> 4 & 1) == 0) goto LAB_104a79fa8;
LAB_104a7a034:
    FUN_104a7a600(param_2,param_1 + 0x68);
    uVar6 = *param_1;
    if ((uVar6 >> 5 & 1) == 0) goto LAB_104a79fac;
LAB_104a7a048:
    FUN_104a7a790(param_2,param_1 + 0x67);
    uVar6 = *param_1;
    if ((uVar6 >> 6 & 1) == 0) goto LAB_104a79fb0;
LAB_104a7a05c:
    FUN_104a7a924(param_2,param_1 + 0x66);
    uVar6 = *param_1;
    if ((uVar6 >> 7 & 1) == 0) goto LAB_104a79fb4;
LAB_104a7a070:
    FUN_104a7aaa4(param_2,param_1 + 0x65);
    uVar6 = *param_1;
    if ((uVar6 >> 8 & 1) == 0) goto LAB_104a79fb8;
LAB_104a7a084:
    FUN_104a7acb4(param_2,param_1 + 100);
    uVar6 = *param_1;
    if ((uVar6 >> 9 & 1) == 0) goto LAB_104a79fbc;
LAB_104a7a098:
    FUN_104a7ae9c(param_2,param_1 + 99);
    uVar6 = *param_1;
    if ((uVar6 >> 10 & 1) == 0) goto LAB_104a79fc0;
LAB_104a7a0ac:
    FUN_104a7b078(param_2,param_1 + 0x62);
    uVar6 = *param_1;
    if ((uVar6 >> 0xc & 1) == 0) goto LAB_104a79fc4;
LAB_104a7a0c0:
    FUN_104a7b24c(param_2,param_1 + 0x5e);
    uVar6 = *param_1;
    if ((uVar6 >> 0xd & 1) == 0) goto LAB_104a79fc8;
LAB_104a7a0d4:
    FUN_104a7b434(param_2,param_1 + 0x5c);
    uVar6 = *param_1;
    if ((uVar6 >> 0xe & 1) == 0) goto LAB_104a79fcc;
LAB_104a7a0e8:
    FUN_104a7b600(param_2,param_1 + 0x54);
    uVar6 = *param_1;
    if ((uVar6 >> 0xf & 1) == 0) goto LAB_104a79fd0;
LAB_104a7a0fc:
    FUN_104a7b7e4(param_2,param_1 + 0x4c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x10 & 1) == 0) goto LAB_104a79fd4;
LAB_104a7a110:
    FUN_104a7b9cc(param_2,param_1 + 0x44);
    uVar6 = *param_1;
    if ((uVar6 >> 0x11 & 1) == 0) goto LAB_104a79fd8;
LAB_104a7a124:
    FUN_104a7bba4(param_2,param_1 + 0x3c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x12 & 1) == 0) goto LAB_104a79fdc;
LAB_104a7a138:
    FUN_104a7bda0(param_2,param_1 + 0x34);
    uVar6 = *param_1;
    if ((uVar6 >> 0x13 & 1) == 0) goto LAB_104a79fe0;
LAB_104a7a14c:
    FUN_104a7bf84(param_2,param_1 + 0x2c);
    uVar6 = *param_1;
    if ((uVar6 >> 0x14 & 1) == 0) goto LAB_104a79fe4;
LAB_104a7a160:
    FUN_104a7c168(param_2,param_1 + 0x24);
    uVar6 = *param_1;
    if ((uVar6 >> 0x15 & 1) == 0) goto LAB_104a79fe8;
LAB_104a7a174:
    _abort();
  }
  ppuVar5 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = *(long **)(param_1 + 0x10);
  if ((long *)0x1 < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = *(ulong *)(param_1 + 0x12);
  plStack_70 = *(long **)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x16);
  uStack_60 = *(ulong *)(param_1 + 0x14);
  cStack_71 = '\b';
  uStack_88 = 0x6e656b6f742d626c;
  uStack_80 = 0;
  if (plStack_70 == (long *)0x0) {
    uVar9 = uStack_68 & 0xff;
    uVar10 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar9 = uStack_68;
    uVar10 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7c704;
  }
  if (uVar9 < 0x17) {
    uStack_90 = CONCAT17((char)uVar9,(undefined7)uStack_90);
    if (uVar9 != 0) goto LAB_104a7c664;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar9;
LAB_104a7c664:
    _memmove(ppuVar5,uVar10,uVar9);
    ppuVar11 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar11 + uVar9) = 0;
  func_0x000107551154(param_2,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar8 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7c704:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7c710);
  (*pcVar4)();
}



/* Entry: 104a7a18c; end: 104a7a36f;  */

void FUN_104a7a18c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\n';
  uStack_80 = 0x7974;
  uStack_88 = 0x69726f687475613a;
  uStack_7e = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7a318;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7a278;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7a278:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7a318:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7a324);
  (*pcVar4)();
}



/* Entry: 104a7a370; end: 104a7a3b3;  */

void FUN_104a7a370(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    __ZdlPv(param_2[3]);
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 104a7a3b4; end: 104a7a583;  */

void FUN_104a7a3b4(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_68,*param_2);
  cStack_69 = '\a';
  uStack_80 = 0x6174733a;
  uStack_7c = 0x737574;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7a524;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7a484;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7a484:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7a524:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7a530);
  (*pcVar4)();
}



/* Entry: 104a7a584; end: 104a7a5ff;  */

void FUN_104a7a584(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined7 *puVar7;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char cStack_c9;
  long lStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined7 *puStack_b8;
  long lStack_a8;
  undefined4 auStack_60 [6];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = auStack_60;
  puVar4 = auStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104a6f1a8(param_2,auStack_60);
  _strlen();
  func_0x0001004b6808(&uStack_48,auStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf034(&lStack_c8,*puVar3);
  cStack_c9 = '\a';
  uStack_e0 = 0x6863733a;
  uStack_dc = 0x656d65;
  if (lStack_c8 == 0) {
    uVar6 = (ulong)bStack_c0;
    puVar7 = &uStack_bf;
  }
  else {
    uVar6 = CONCAT71(uStack_bf,bStack_c0);
    puVar7 = puStack_b8;
    if (0x7ffffffffffffff7 < uVar6) goto LAB_104a7a748;
  }
  if (uVar6 < 0x17) {
    uStack_e8 = CONCAT17((char)uVar6,(undefined7)uStack_e8);
    pppuVar5 = &ppuStack_f8;
    if (uVar6 != 0) goto LAB_104a7a6d0;
  }
  else {
    uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar1 = uVar6 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_e8 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_f8 = pppuVar5;
    uStack_f0 = uVar6;
LAB_104a7a6d0:
    _memmove(pppuVar5,puVar7,uVar6);
  }
  *(undefined1 *)((long)pppuVar5 + uVar6) = 0;
  func_0x000107551154(puVar4,&uStack_e0,&ppuStack_f8);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(ppuStack_f8);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(CONCAT44(uStack_dc,uStack_e0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7a748:
  func_0x000104a6fa5c(&ppuStack_f8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7a754);
  (*pcVar2)();
}



/* Entry: 104a7a600; end: 104a7a78f;  */

void FUN_104a7a600(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf034(&lStack_68,*param_2);
  cStack_69 = '\a';
  uStack_80 = 0x6863733a;
  uStack_7c = 0x656d65;
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_104a7a748;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_104a7a6d0;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_104a7a6d0:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT44(uStack_7c,uStack_80));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7a748:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7a754);
  (*pcVar2)();
}



/* Entry: 104a7a790; end: 104a7a923;  */

void FUN_104a7a790(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [23];
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100619644(&lStack_68,*param_2);
  cStack_69 = '\f';
  builtin_strncpy(acStack_80 + 8,"type",5);
  builtin_strncpy(acStack_80,"content-",8);
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_104a7a8dc;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_104a7a864;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_104a7a864:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  func_0x000107551154(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(acStack_80._0_8_);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7a8dc:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7a8e8);
  (*pcVar2)();
}



/* Entry: 104a7a924; end: 104a7aaa3;  */

void FUN_104a7a924(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined7 *puVar5;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  char cStack_69;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100619828(&lStack_68,*param_2);
  cStack_69 = '\x02';
  uStack_80 = 0x6574;
  uStack_7e = 0;
  if (lStack_68 == 0) {
    uVar4 = (ulong)bStack_60;
    puVar5 = &uStack_5f;
  }
  else {
    uVar4 = CONCAT71(uStack_5f,bStack_60);
    puVar5 = puStack_58;
    if (0x7ffffffffffffff7 < uVar4) goto LAB_104a7aa5c;
  }
  if (uVar4 < 0x17) {
    uStack_88 = CONCAT17((char)uVar4,(undefined7)uStack_88);
    pppuVar3 = &ppuStack_98;
    if (uVar4 != 0) goto LAB_104a7a9e4;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar3;
    uStack_90 = uVar4;
LAB_104a7a9e4:
    _memmove(pppuVar3,puVar5,uVar4);
  }
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT53(uStack_7d,CONCAT12(uStack_7e,uStack_80)));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7aa5c:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7aa68);
  (*pcVar2)();
}



/* Entry: 104a7aaa4; end: 104a7ac73;  */

void FUN_104a7aaa4(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 uStack_73;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_68,*param_2);
  cStack_69 = '\r';
  uStack_80 = 0x2d63707267;
  uStack_7b = 0x636e65;
  uStack_78 = 0x676e69646f;
  uStack_73 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7ac14;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7ab74;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7ab74:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT35(uStack_7b,uStack_80));
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ac14:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7ac20);
  (*pcVar4)();
}



/* Entry: 104a7ac74; end: 104a7acb3;  */

void FUN_104a7ac74(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  ulong uVar9;
  undefined7 *puVar10;
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined7 *puStack_78;
  long lStack_68;
  
  if ((int)param_2 != 3) {
    FUN_104ab1470();
    uVar5 = param_2;
    _strlen();
    *param_1 = 1;
    param_1[1] = uVar5;
    param_1[2] = param_2;
    return;
  }
  func_0x00010bda99b8();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_88,*param_3);
  pcVar6 = (char *)0x20;
  __Znwm();
  lStack_90 = -0x7fffffffffffffe0;
  uStack_98 = 0x1e;
  builtin_strncpy(pcVar6,"grpc-internal-encoding-request",0x1f);
  pcStack_a0 = pcVar6;
  if (plStack_88 == (long *)0x0) {
    uVar9 = (ulong)bStack_80;
    puVar10 = &uStack_7f;
  }
  else {
    uVar9 = CONCAT71(uStack_7f,bStack_80);
    puVar10 = puStack_78;
    if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7ae34;
  }
  if (uVar9 < 0x17) {
    uStack_a8 = CONCAT17((char)uVar9,(undefined7)uStack_a8);
    pppuVar7 = &ppuStack_b8;
    if (uVar9 != 0) goto LAB_104a7ad94;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    pppuVar7 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_a8 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_b8 = pppuVar7;
    uStack_b0 = uVar9;
LAB_104a7ad94:
    _memmove(pppuVar7,puVar10,uVar9);
  }
  *(undefined1 *)((long)pppuVar7 + uVar9) = 0;
  func_0x000107551154(param_2,&pcStack_a0,&ppuStack_b8);
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppuStack_b8);
  }
  if (lStack_90 < 0) {
    __ZdlPv(pcStack_a0);
  }
  if ((long *)0x1 < plStack_88) {
    do {
      lVar8 = *plStack_88;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
      if (bVar3) {
        *plStack_88 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_88[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ae34:
  func_0x000104a6fa5c(&ppuStack_b8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7ae40);
  (*pcVar4)();
}



/* Entry: 104a7acb4; end: 104a7ae9b;  */

void FUN_104a7acb4(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  ulong uVar8;
  undefined7 *puVar9;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_68,*param_2);
  pcVar5 = (char *)0x20;
  __Znwm();
  lStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1e;
  builtin_strncpy(pcVar5,"grpc-internal-encoding-request",0x1f);
  pcStack_80 = pcVar5;
  if (plStack_68 == (long *)0x0) {
    uVar8 = (ulong)bStack_60;
    puVar9 = &uStack_5f;
  }
  else {
    uVar8 = CONCAT71(uStack_5f,bStack_60);
    puVar9 = puStack_58;
    if (0x7ffffffffffffff7 < uVar8) goto LAB_104a7ae34;
  }
  if (uVar8 < 0x17) {
    uStack_88 = CONCAT17((char)uVar8,(undefined7)uStack_88);
    pppuVar6 = &ppuStack_98;
    if (uVar8 != 0) goto LAB_104a7ad94;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppuVar6 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar6;
    uStack_90 = uVar8;
LAB_104a7ad94:
    _memmove(pppuVar6,puVar9,uVar8);
  }
  *(undefined1 *)((long)pppuVar6 + uVar8) = 0;
  func_0x000107551154(param_1,&pcStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (lStack_70 < 0) {
    __ZdlPv(pcStack_80);
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar7 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ae34:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7ae40);
  (*pcVar4)();
}



/* Entry: 104a7ae9c; end: 104a7b077;  */

void FUN_104a7ae9c(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [23];
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_80[0] = *param_2;
  func_0x00010061b500(&plStack_68,acStack_80);
  cStack_69 = '\x14';
  builtin_strncpy(acStack_80 + 0x10,"ding",5);
  builtin_strncpy(acStack_80,"grpc-accept-enco",0x10);
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7b018;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7af78;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7af78:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(acStack_80._0_8_);
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b018:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b024);
  (*pcVar4)();
}



/* Entry: 104a7b078; end: 104a7b24b;  */

void FUN_104a7b078(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_68,(long)*param_2);
  cStack_69 = '\v';
  uStack_80 = 0x74732d63707267;
  uStack_79 = 0x73757461;
  uStack_75 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7b1ec;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7b14c;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7b14c:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_79,uStack_80));
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b1ec:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b1f8);
  (*pcVar4)();
}



/* Entry: 104a7b24c; end: 104a7b433;  */

void FUN_104a7b24c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  ulong uVar8;
  undefined7 *puVar9;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_68,*param_2);
  pcVar5 = (char *)0x20;
  __Znwm();
  lStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1a;
  builtin_strncpy(pcVar5,"grpc-previous-rpc-attempts",0x1b);
  pcStack_80 = pcVar5;
  if (plStack_68 == (long *)0x0) {
    uVar8 = (ulong)bStack_60;
    puVar9 = &uStack_5f;
  }
  else {
    uVar8 = CONCAT71(uStack_5f,bStack_60);
    puVar9 = puStack_58;
    if (0x7ffffffffffffff7 < uVar8) goto LAB_104a7b3cc;
  }
  if (uVar8 < 0x17) {
    uStack_88 = CONCAT17((char)uVar8,(undefined7)uStack_88);
    pppuVar6 = &ppuStack_98;
    if (uVar8 != 0) goto LAB_104a7b32c;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppuVar6 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar6;
    uStack_90 = uVar8;
LAB_104a7b32c:
    _memmove(pppuVar6,puVar9,uVar8);
  }
  *(undefined1 *)((long)pppuVar6 + uVar8) = 0;
  func_0x000107551154(param_1,&pcStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (lStack_70 < 0) {
    __ZdlPv(pcStack_80);
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar7 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b3cc:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b3d8);
  (*pcVar4)();
}



/* Entry: 104a7b434; end: 104a7b5ff;  */

void FUN_104a7b434(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char acStack_80 [22];
  short sStack_6a;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_68,*param_2);
  builtin_strncpy(acStack_80,"grpc-retry-pushback-ms",0x16);
  sStack_6a = 0x1600;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7b5a0;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7b500;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7b500:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,acStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (sStack_6a < 0) {
    __ZdlPv(acStack_80._0_8_);
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b5a0:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b5ac);
  (*pcVar4)();
}



/* Entry: 104a7b600; end: 104a7b7e3;  */

void FUN_104a7b600(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\n';
  uStack_80 = 0x746e;
  uStack_88 = 0x6567612d72657375;
  uStack_7e = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7b78c;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7b6ec;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7b6ec:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b78c:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b798);
  (*pcVar4)();
}



/* Entry: 104a7b7e4; end: 104a7b9cb;  */

void FUN_104a7b7e4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\f';
  uStack_80 = 0x65676173;
  uStack_88 = 0x73656d2d63707267;
  uStack_7c = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7b974;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7b8d4;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7b8d4:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7b974:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7b980);
  (*pcVar4)();
}



/* Entry: 104a7b9cc; end: 104a7bba3;  */

void FUN_104a7b9cc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\x04';
  uStack_88 = 0x74736f68;
  uStack_84 = uStack_84 & 0xffffff00;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7bb4c;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7baac;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7baac:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT44(uStack_84,uStack_88));
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7bb4c:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7bb58);
  (*pcVar4)();
}



/* Entry: 104a7bba4; end: 104a7bd9f;  */

void FUN_104a7bba4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar6 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)*param_2;
  if ((long *)0x1 < plVar7) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pcVar5 = (char *)0x20;
  __Znwm();
  lStack_78 = -0x7fffffffffffffe0;
  uStack_80 = 0x19;
  builtin_strncpy(pcVar5,"endpoint-load-metrics-bin",0x1a);
  pcStack_88 = pcVar5;
  if (plStack_70 == (long *)0x0) {
    uVar9 = uStack_68 & 0xff;
    uVar10 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar9 = uStack_68;
    uVar10 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7bd40;
  }
  if (uVar9 < 0x17) {
    uStack_90 = CONCAT17((char)uVar9,(undefined7)uStack_90);
    if (uVar9 != 0) goto LAB_104a7bca0;
  }
  else {
    uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    ppuVar6 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar6;
    uStack_98 = uVar9;
LAB_104a7bca0:
    _memmove(ppuVar6,uVar10,uVar9);
    ppuVar11 = ppuVar6;
  }
  *(undefined1 *)((long)ppuVar11 + uVar9) = 0;
  func_0x000107551154(param_1,&pcStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (lStack_78 < 0) {
    __ZdlPv(pcStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar8 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7bd40:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7bd4c);
  (*pcVar4)();
}



/* Entry: 104a7bda0; end: 104a7bf83;  */

void FUN_104a7bda0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  char acStack_90 [23];
  char cStack_79;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_79 = '\x15';
  builtin_strncpy(acStack_90,"grpc-server-stats-bin",0x16);
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7bf2c;
  }
  if (uVar8 < 0x17) {
    uStack_98 = CONCAT17((char)uVar8,(undefined7)uStack_98);
    pppuVar5 = &ppuStack_a8;
    if (uVar8 != 0) goto LAB_104a7be8c;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_98 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_a8 = pppuVar5;
    uStack_a0 = uVar8;
LAB_104a7be8c:
    _memmove(pppuVar5,uVar9,uVar8);
  }
  *(undefined1 *)((long)pppuVar5 + uVar8) = 0;
  func_0x000107551154(param_1,acStack_90,&ppuStack_a8);
  if ((long)uStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(acStack_90._0_8_);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7bf2c:
  func_0x000104a6fa5c(&ppuStack_a8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7bf38);
  (*pcVar4)();
}



/* Entry: 104a7bf84; end: 104a7c167;  */

void FUN_104a7bf84(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined6 uStack_80;
  undefined1 uStack_7a;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\x0e';
  uStack_88 = 0x742d63707267;
  uStack_82 = 0x6172;
  uStack_80 = 0x6e69622d6563;
  uStack_7a = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7c110;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7c070;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7c070:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT26(uStack_82,uStack_88));
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7c110:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7c11c);
  (*pcVar4)();
}



/* Entry: 104a7c168; end: 104a7c34b;  */

void FUN_104a7c168(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined1 uStack_7b;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\r';
  uStack_88 = 0x2d63707267;
  uStack_83 = 0x676174;
  uStack_80 = 0x6e69622d73;
  uStack_7b = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7c2f4;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7c254;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7c254:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(CONCAT35(uStack_83,uStack_88));
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7c2f4:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7c300);
  (*pcVar4)();
}



/* Entry: 104a7c34c; end: 104a7c3a7;  */

void FUN_104a7c34c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 1;
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (1 < uVar1) {
    lVar3 = (uVar1 >> 1) << 5;
    do {
      FUN_104a7c3a8(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 104a7c3a8; end: 104a7c57b;  */

void FUN_104a7c3a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  ulong uVar7;
  undefined7 *puVar8;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf18c(&plStack_68,param_2);
  cStack_69 = '\v';
  uStack_80 = 0x74736f632d626c;
  uStack_79 = 0x6e69622d;
  uStack_75 = 0;
  if (plStack_68 == (long *)0x0) {
    uVar7 = (ulong)bStack_60;
    puVar8 = &uStack_5f;
  }
  else {
    uVar7 = CONCAT71(uStack_5f,bStack_60);
    puVar8 = puStack_58;
    if (0x7ffffffffffffff7 < uVar7) goto LAB_104a7c51c;
  }
  if (uVar7 < 0x17) {
    uStack_88 = CONCAT17((char)uVar7,(undefined7)uStack_88);
    pppuVar5 = &ppuStack_98;
    if (uVar7 != 0) goto LAB_104a7c47c;
  }
  else {
    uVar1 = (uVar7 & 0x7ffffffffffffff8) + 8;
    if ((uVar7 | 7) != 0x17) {
      uVar1 = uVar7 | 7;
    }
    pppuVar5 = (undefined8 ***)(uVar1 + 1);
    __Znwm();
    uStack_88 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_98 = pppuVar5;
    uStack_90 = uVar7;
LAB_104a7c47c:
    _memmove(pppuVar5,puVar8,uVar7);
  }
  *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
  func_0x000107551154(param_1,&uStack_80,&ppuStack_98);
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_79,uStack_80));
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar6 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7c51c:
  func_0x000104a6fa5c(&ppuStack_98);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7c528);
  (*pcVar4)();
}



/* Entry: 104a7c57c; end: 104a7c75b;  */

void FUN_104a7c57c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  char cStack_71;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  cStack_71 = '\b';
  uStack_88 = 0x6e656b6f742d626c;
  uStack_80 = 0;
  if (plStack_70 == (long *)0x0) {
    uVar8 = uStack_68 & 0xff;
    uVar9 = (ulong)&plStack_70 | 9;
  }
  else {
    uVar8 = uStack_68;
    uVar9 = uStack_60;
    if (0x7ffffffffffffff7 < uStack_68) goto LAB_104a7c704;
  }
  if (uVar8 < 0x17) {
    uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
    if (uVar8 != 0) goto LAB_104a7c664;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    if ((uVar8 | 7) != 0x17) {
      uVar1 = uVar8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_90 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_a0 = (undefined1 *)ppuVar5;
    uStack_98 = uVar8;
LAB_104a7c664:
    _memmove(ppuVar5,uVar9,uVar8);
    ppuVar10 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar10 + uVar8) = 0;
  func_0x000107551154(param_1,&uStack_88,&puStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar3) {
        *plStack_70 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7c704:
  func_0x000104a6fa5c(&puStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7c710);
  (*pcVar4)();
}



/* Entry: 104a7c75c; end: 104a7c7df;  */

void FUN_104a7c75c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_104a7a370(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104a7c7e0; end: 104a7c907;  */

long * FUN_104a7c7e0(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long **pplVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar16;
  undefined8 *unaff_x22;
  undefined7 *puVar17;
  undefined1 *unaff_x23;
  long **pplVar18;
  long *plVar19;
  undefined8 unaff_x24;
  long lVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar22;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 == (undefined1 *)0x5) &&
     ((int)*param_2 == 0x7461703a && *(char *)((long)param_2 + 4) == 'h')) {
    pbVar15 = (byte *)*param_4;
    if ((*pbVar15 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(pbVar15 + 0x1d0) == 0) {
        pbVar12 = pbVar15 + 0x1d9;
        uVar14 = (ulong)pbVar15[0x1d8];
      }
      else {
        uVar14 = *(ulong *)(pbVar15 + 0x1d8);
        pbVar12 = *(byte **)(pbVar15 + 0x1e0);
      }
      *param_1 = (long)pbVar12;
      param_1[1] = uVar14;
      uVar11 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0xa) &&
     (*param_2 == 0x69726f687475613a && (short)param_2[1] == 0x7974)) {
    pbVar15 = (byte *)*param_4;
    if ((*pbVar15 >> 1 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(pbVar15 + 0x1b0) == 0) {
        pbVar12 = pbVar15 + 0x1b9;
        uVar14 = (ulong)pbVar15[0x1b8];
      }
      else {
        uVar14 = *(ulong *)(pbVar15 + 0x1b8);
        pbVar12 = *(byte **)(pbVar15 + 0x1c0);
      }
      *param_1 = (long)pbVar12;
      param_1[1] = uVar14;
      uVar11 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    return param_4;
  }
  if ((param_3 != (undefined1 *)0x7) ||
     ((int)*param_2 != 0x74656d3a || *(int *)((long)param_2 + 3) != 0x646f6874)) {
    if ((param_3 != (undefined1 *)0x7) ||
       ((int)*param_2 != 0x6174733a || *(int *)((long)param_2 + 3) != 0x73757461)) {
      if ((param_3 != (undefined1 *)0x7) ||
         ((int)*param_2 != 0x6863733a || *(int *)((long)param_2 + 3) != 0x656d6568)) {
        if ((param_3 != (undefined1 *)0xc) ||
           (*param_2 != 0x2d746e65746e6f63 || (int)param_2[1] != 0x65707974)) {
          if ((param_3 != (undefined1 *)0x2) || ((short)*param_2 != 0x6574)) {
            if ((param_3 != (undefined1 *)0xd) ||
               (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65
               )) {
              if ((param_3 != (undefined1 *)0x1e) ||
                 (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
                  param_2[2] != 0x722d676e69646f63) ||
                  *(long *)((long)param_2 + 0x16) != 0x747365757165722d)) {
                if ((param_3 != (undefined1 *)0x14) ||
                   ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
                    (int)param_2[2] != 0x676e6964)) {
                  if ((param_3 != (undefined1 *)0xb) ||
                     (*param_2 != 0x6174732d63707267 ||
                      *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
                    if ((param_3 != (undefined1 *)0xc) ||
                       (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
                      if ((param_3 == (undefined1 *)0x1a) &&
                         (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                          param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
                        pplVar5 = &plStack_80;
                        pplVar18 = &plStack_80;
                        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                          uVar11 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                          if (plStack_68 == (long *)0x0) {
                            uVar14 = (ulong)bStack_60;
                            puVar17 = &uStack_5f;
                          }
                          else {
                            uVar14 = CONCAT71(uStack_5f,bStack_60);
                            puVar17 = puStack_58;
                            if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7ddb8;
                          }
                          if (uVar14 < 0x17) {
                            uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                            if (uVar14 != 0) goto LAB_104a7dcf4;
                          }
                          else {
                            uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                            if ((uVar14 | 7) != 0x17) {
                              uVar10 = uVar14 | 7;
                            }
                            pplVar5 = (long **)(uVar10 + 1);
                            __Znwm();
                            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                            plStack_80 = (long *)pplVar5;
                            uStack_78 = uVar14;
LAB_104a7dcf4:
                            _memmove(pplVar5,puVar17,uVar14);
                            pplVar18 = pplVar5;
                          }
                          *(undefined1 *)((long)pplVar18 + uVar14) = 0;
                          puVar13 = (undefined8 *)param_4[1];
                          if (*(char *)((long)puVar13 + 0x17) < '\0') {
                            __ZdlPv(*puVar13);
                          }
                          puVar13[2] = uStack_70;
                          puVar13[1] = uStack_78;
                          *puVar13 = plStack_80;
                          uStack_70 = uStack_70 & 0xffffffffffffff;
                          plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                          if ((long *)0x1 < plStack_68) {
                            do {
                              lVar20 = *plStack_68;
                              cVar1 = '\x01';
                              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                              if (bVar2) {
                                *plStack_68 = lVar20 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (lVar20 + -1 == 0) {
                              (*(code *)plStack_68[1])();
                            }
                          }
                          plVar8 = (long *)param_4[1];
                          uVar14 = plVar8[1];
                          plVar7 = (long *)*plVar8;
                          if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                            uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                            plVar7 = plVar8;
                          }
                          *param_1 = (long)plVar7;
                          param_1[1] = uVar14;
                          uVar11 = 1;
                          param_4 = plStack_68;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar11;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                          return param_4;
                        }
                        ___stack_chk_fail();
LAB_104a7ddb8:
                        func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
                        (*pcVar3)();
                      }
                      if ((param_3 != (undefined1 *)0x16) ||
                         ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                          *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
                        if ((param_3 == (undefined1 *)0xa) &&
                           (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 1) >> 6 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0x150) == 0) {
                              lVar22 = lVar20 + 0x159;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0x158);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0x158);
                              lVar22 = *(long *)(lVar20 + 0x160);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0xc) &&
                           (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                          lVar20 = *param_4;
                          if (*(char *)(lVar20 + 1) < '\0') {
                            if (*(long *)(lVar20 + 0x130) == 0) {
                              lVar22 = lVar20 + 0x139;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0x138);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0x138);
                              lVar22 = *(long *)(lVar20 + 0x140);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          else {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 2) & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0x110) == 0) {
                              lVar22 = lVar20 + 0x119;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0x118);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0x118);
                              lVar22 = *(long *)(lVar20 + 0x120);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0x19) &&
                           (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                            param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 2) >> 1 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0xf0) == 0) {
                              lVar22 = lVar20 + 0xf9;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0xf8);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0xf8);
                              lVar22 = *(long *)(lVar20 + 0x100);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0x15) &&
                           ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                            *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 2) >> 2 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0xd0) == 0) {
                              lVar22 = lVar20 + 0xd9;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0xd8);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0xd8);
                              lVar22 = *(long *)(lVar20 + 0xe0);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0xe) &&
                           (*param_2 == 0x6172742d63707267 &&
                            *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 2) >> 3 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0xb0) == 0) {
                              lVar22 = lVar20 + 0xb9;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0xb8);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0xb8);
                              lVar22 = *(long *)(lVar20 + 0xc0);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0xd) &&
                           (*param_2 == 0x6761742d63707267 &&
                            *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                          lVar20 = *param_4;
                          if ((*(byte *)(lVar20 + 2) >> 4 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            if (*(long *)(lVar20 + 0x90) == 0) {
                              lVar22 = lVar20 + 0x99;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0x98);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0x98);
                              lVar22 = *(long *)(lVar20 + 0xa0);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        if ((param_3 == (undefined1 *)0x13) &&
                           ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                            *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                          unaff_x29 = &stack0xfffffffffffffff0;
                          if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                            *(undefined1 *)param_1 = 0;
                            *(undefined1 *)(param_1 + 2) = 0;
                            return param_4;
                          }
                          unaff_x30 = FUN_104a7e44c;
                          plVar7 = param_4;
                          _abort();
                          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                          param_2 = param_4;
                          param_4 = plVar7;
                          param_1 = extraout_x8;
                        }
                        if ((param_3 == (undefined1 *)0xb) &&
                           (*param_2 == 0x2d74736f632d626c &&
                            *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                          *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                          *(code **)((long)register0x00000008 + -8) = unaff_x30;
                          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                          *(undefined8 *)((long)register0x00000008 + -0x48) =
                               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                          lVar20 = *param_4;
                          unaff_x19 = param_4;
                          plVar7 = param_4;
                          if ((*(byte *)(lVar20 + 2) >> 6 & 1) == 0) {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          else {
                            puVar13 = (undefined8 *)param_4[1];
                            if (*(char *)((long)puVar13 + 0x17) < '\0') {
                              *(undefined1 *)*puVar13 = 0;
                              puVar13[1] = 0;
                            }
                            else {
                              *(undefined1 *)puVar13 = 0;
                              *(undefined1 *)((long)puVar13 + 0x17) = 0;
                            }
                            uVar14 = *(ulong *)(lVar20 + 0x60);
                            unaff_x21 = (undefined8 *)(lVar20 + 0x68);
                            if ((uVar14 & 1) != 0) {
                              unaff_x21 = (undefined8 *)*unaff_x21;
                            }
                            if (1 < uVar14) {
                              unaff_x22 = unaff_x21 + (uVar14 >> 1) * 4;
                              unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                              do {
                                lVar20 = param_4[1];
                                if (*(char *)(lVar20 + 0x17) < '\0') {
                                  if (*(long *)(lVar20 + 8) != 0) goto LAB_104a7e548;
                                }
                                else if (*(char *)(lVar20 + 0x17) != '\0') {
LAB_104a7e548:
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                            (lVar20,0x2c);
                                }
                                FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),
                                              unaff_x21);
                                uVar14 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                                param_3 = unaff_x23;
                                if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                                  uVar14 = *(ulong *)((long)register0x00000008 + -0x60);
                                  param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                                }
                                plVar7 = (long *)(param_3 + uVar14);
                                FUN_104a7e67c(param_4[1]);
                                unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                                if ((long *)0x1 < unaff_x19) {
                                  do {
                                    lVar20 = *unaff_x19;
                                    cVar1 = '\x01';
                                    bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                    if (bVar2) {
                                      *unaff_x19 = lVar20 + -1;
                                      cVar1 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar1 != '\0');
                                  if (lVar20 + -1 == 0) {
                                    (*(code *)unaff_x19[1])();
                                  }
                                }
                                unaff_x21 = unaff_x21 + 4;
                              } while (unaff_x21 != unaff_x22);
                            }
                            plVar19 = (long *)param_4[1];
                            uVar14 = plVar19[1];
                            plVar8 = (long *)*plVar19;
                            if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                              uVar14 = (ulong)*(byte *)((long)plVar19 + 0x17);
                              plVar8 = plVar19;
                            }
                            *param_1 = (long)plVar8;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                            unaff_x20 = param_4;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                              *(long *)((long)register0x00000008 + -0x48)) {
                            return unaff_x19;
                          }
                          ___stack_chk_fail();
                          param_4 = plVar7;
                          if ((int)param_3 != 0) {
                            FUN_104bd46a0();
                            func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                            param_4 = plVar7;
                          }
                          unaff_x30 = FUN_104a7e63c;
                          param_2 = unaff_x19;
                          __Unwind_Resume();
                          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                          param_1 = extraout_x8_00;
                        }
                        if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                          lVar20 = *param_4;
                          if (*(char *)(lVar20 + 2) < '\0') {
                            if (*(long *)(lVar20 + 0x40) == 0) {
                              lVar22 = lVar20 + 0x49;
                              uVar14 = (ulong)*(byte *)(lVar20 + 0x48);
                            }
                            else {
                              uVar14 = *(ulong *)(lVar20 + 0x48);
                              lVar22 = *(long *)(lVar20 + 0x50);
                            }
                            *param_1 = lVar22;
                            param_1[1] = uVar14;
                            uVar11 = 1;
                          }
                          else {
                            uVar11 = 0;
                            *(undefined1 *)param_1 = 0;
                          }
                          *(undefined1 *)(param_1 + 2) = uVar11;
                          return param_4;
                        }
                        lVar20 = *param_4;
                        plVar8 = (long *)param_4[1];
                        plVar7 = (long *)(lVar20 + 0x1f0);
                        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                        *(code **)((long)register0x00000008 + -8) = unaff_x30;
                        *(undefined8 *)((long)register0x00000008 + -0x70) =
                             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                        *(undefined1 *)param_1 = 0;
                        *(undefined1 *)(param_1 + 2) = 0;
                        plVar19 = *(long **)(lVar20 + 0x1f8);
                        if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
                          lVar20 = 0;
                          bVar2 = false;
                          plVar21 = (long *)*param_1;
                          uVar14 = param_1[1];
                          do {
                            if (plVar19[lVar20 * 8 + 2] == 0) {
                              plVar7 = (long *)((long)plVar19 + lVar20 * 0x40 + 0x19);
                              puVar9 = (undefined1 *)(ulong)*(byte *)(plVar19 + lVar20 * 8 + 3);
                            }
                            else {
                              puVar9 = (undefined1 *)plVar19[lVar20 * 8 + 3];
                              plVar7 = (long *)plVar19[lVar20 * 8 + 4];
                            }
                            if ((puVar9 == param_3) &&
                               (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                              if (bVar2) {
                                *(long **)((long)register0x00000008 + -0xa0) = plVar21;
                                *(ulong *)((long)register0x00000008 + -0x98) = uVar14;
                                *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                                *(undefined8 *)((long)register0x00000008 + -200) = 1;
                                if (plVar19[lVar20 * 8 + 6] == 0) {
                                  lVar22 = (long)plVar19 + lVar20 * 0x40 + 0x39;
                                  uVar14 = (ulong)*(byte *)(plVar19 + lVar20 * 8 + 7);
                                }
                                else {
                                  uVar14 = plVar19[lVar20 * 8 + 7];
                                  lVar22 = plVar19[lVar20 * 8 + 8];
                                }
                                *(long *)((long)register0x00000008 + -0x100) = lVar22;
                                *(ulong *)((long)register0x00000008 + -0xf8) = uVar14;
                                plVar7 = (long *)((long)register0x00000008 + -0xa0);
                                func_0x000100066c24((undefined1 *)
                                                    ((long)register0x00000008 + -0x118),plVar7,
                                                    (undefined1 *)((long)register0x00000008 + -0xd0)
                                                    ,(undefined1 *)
                                                     ((long)register0x00000008 + -0x100));
                                if (*(char *)((long)plVar8 + 0x17) < '\0') {
                                  plVar7 = (long *)*plVar8;
                                  __ZdlPv();
                                }
                                uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
                                plVar8[2] = uVar10;
                                lVar22 = *(long *)((long)register0x00000008 + -0x118);
                                plVar8[1] = *(long *)((long)register0x00000008 + -0x110);
                                *plVar8 = lVar22;
                                uVar14 = plVar8[1];
                                plVar21 = (long *)*plVar8;
                                if (-1 < (long)uVar10) {
                                  uVar14 = uVar10 >> 0x38;
                                  plVar21 = plVar8;
                                }
                                *param_1 = (long)plVar21;
                                param_1[1] = uVar14;
                              }
                              else {
                                if (plVar19[lVar20 * 8 + 6] == 0) {
                                  plVar21 = (long *)((long)plVar19 + lVar20 * 0x40 + 0x39);
                                  uVar14 = (ulong)*(byte *)(plVar19 + lVar20 * 8 + 7);
                                }
                                else {
                                  uVar14 = plVar19[lVar20 * 8 + 7];
                                  plVar21 = (long *)plVar19[lVar20 * 8 + 8];
                                }
                                *param_1 = (long)plVar21;
                                param_1[1] = uVar14;
                                bVar2 = true;
                                *(undefined1 *)(param_1 + 2) = 1;
                              }
                            }
                            lVar20 = lVar20 + 1;
                            do {
                              if (lVar20 != plVar19[1]) goto LAB_104adee4c;
                              lVar20 = 0;
                              plVar19 = (long *)*plVar19;
                            } while (plVar19 != (long *)0x0);
                            lVar20 = 0;
LAB_104adee4c:
                          } while ((plVar19 != (long *)0x0) || (lVar20 != 0));
                        }
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                            *(long *)((long)register0x00000008 + -0x70)) {
                          ___stack_chk_fail();
                          iVar4 = (int)plVar7;
                          __Unwind_Resume();
                          plVar7 = (long *)"";
                          if (iVar4 != 1) {
                            plVar7 = (long *)"<discarded-invalid-value>";
                          }
                          plVar8 = (long *)"application/grpc";
                          if (iVar4 != 0) {
                            plVar8 = plVar7;
                          }
                          return plVar8;
                        }
                        return plVar7;
                      }
                      pplVar5 = &plStack_80;
                      pplVar18 = &plStack_80;
                      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
                        uVar11 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
                        if (plStack_68 == (long *)0x0) {
                          uVar14 = (ulong)bStack_60;
                          puVar17 = &uStack_5f;
                        }
                        else {
                          uVar14 = CONCAT71(uStack_5f,bStack_60);
                          puVar17 = puStack_58;
                          if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7dfd8;
                        }
                        if (uVar14 < 0x17) {
                          uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                          if (uVar14 != 0) goto LAB_104a7df14;
                        }
                        else {
                          uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                          if ((uVar14 | 7) != 0x17) {
                            uVar10 = uVar14 | 7;
                          }
                          pplVar5 = (long **)(uVar10 + 1);
                          __Znwm();
                          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                          plStack_80 = (long *)pplVar5;
                          uStack_78 = uVar14;
LAB_104a7df14:
                          _memmove(pplVar5,puVar17,uVar14);
                          pplVar18 = pplVar5;
                        }
                        *(undefined1 *)((long)pplVar18 + uVar14) = 0;
                        puVar13 = (undefined8 *)param_4[1];
                        if (*(char *)((long)puVar13 + 0x17) < '\0') {
                          __ZdlPv(*puVar13);
                        }
                        puVar13[2] = uStack_70;
                        puVar13[1] = uStack_78;
                        *puVar13 = plStack_80;
                        uStack_70 = uStack_70 & 0xffffffffffffff;
                        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                        if ((long *)0x1 < plStack_68) {
                          do {
                            lVar20 = *plStack_68;
                            cVar1 = '\x01';
                            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                            if (bVar2) {
                              *plStack_68 = lVar20 + -1;
                              cVar1 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar1 != '\0');
                          if (lVar20 + -1 == 0) {
                            (*(code *)plStack_68[1])();
                          }
                        }
                        plVar8 = (long *)param_4[1];
                        uVar14 = plVar8[1];
                        plVar7 = (long *)*plVar8;
                        if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                          uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                          plVar7 = plVar8;
                        }
                        *param_1 = (long)plVar7;
                        param_1[1] = uVar14;
                        uVar11 = 1;
                        param_4 = plStack_68;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar11;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                        return param_4;
                      }
                      ___stack_chk_fail();
LAB_104a7dfd8:
                      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
                      (*pcVar3)();
                    }
                    pplVar5 = &plStack_80;
                    pplVar18 = &plStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
                      uVar11 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
                      if (plStack_68 == (long *)0x0) {
                        uVar14 = (ulong)bStack_60;
                        puVar17 = &uStack_5f;
                      }
                      else {
                        uVar14 = CONCAT71(uStack_5f,bStack_60);
                        puVar17 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7db8c;
                      }
                      if (uVar14 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                        if (uVar14 != 0) goto LAB_104a7dac8;
                      }
                      else {
                        uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                        if ((uVar14 | 7) != 0x17) {
                          uVar10 = uVar14 | 7;
                        }
                        pplVar5 = (long **)(uVar10 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                        plStack_80 = (long *)pplVar5;
                        uStack_78 = uVar14;
LAB_104a7dac8:
                        _memmove(pplVar5,puVar17,uVar14);
                        pplVar18 = pplVar5;
                      }
                      *(undefined1 *)((long)pplVar18 + uVar14) = 0;
                      puVar13 = (undefined8 *)param_4[1];
                      if (*(char *)((long)puVar13 + 0x17) < '\0') {
                        __ZdlPv(*puVar13);
                      }
                      puVar13[2] = uStack_70;
                      puVar13[1] = uStack_78;
                      *puVar13 = plStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                      if ((long *)0x1 < plStack_68) {
                        do {
                          lVar20 = *plStack_68;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                          if (bVar2) {
                            *plStack_68 = lVar20 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (lVar20 + -1 == 0) {
                          (*(code *)plStack_68[1])();
                        }
                      }
                      plVar8 = (long *)param_4[1];
                      uVar14 = plVar8[1];
                      plVar7 = (long *)*plVar8;
                      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                        uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                        plVar7 = plVar8;
                      }
                      *param_1 = (long)plVar7;
                      param_1[1] = uVar14;
                      uVar11 = 1;
                      param_4 = plStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar11;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_104a7db8c:
                    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
                    (*pcVar3)();
                  }
                  pplVar5 = &plStack_80;
                  pplVar18 = &plStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
                    uVar11 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
                    if (plStack_68 == (long *)0x0) {
                      uVar14 = (ulong)bStack_60;
                      puVar17 = &uStack_5f;
                    }
                    else {
                      uVar14 = CONCAT71(uStack_5f,bStack_60);
                      puVar17 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7d988;
                    }
                    if (uVar14 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                      if (uVar14 != 0) goto LAB_104a7d8c4;
                    }
                    else {
                      uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                      if ((uVar14 | 7) != 0x17) {
                        uVar10 = uVar14 | 7;
                      }
                      pplVar5 = (long **)(uVar10 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                      plStack_80 = (long *)pplVar5;
                      uStack_78 = uVar14;
LAB_104a7d8c4:
                      _memmove(pplVar5,puVar17,uVar14);
                      pplVar18 = pplVar5;
                    }
                    *(undefined1 *)((long)pplVar18 + uVar14) = 0;
                    puVar13 = (undefined8 *)param_4[1];
                    if (*(char *)((long)puVar13 + 0x17) < '\0') {
                      __ZdlPv(*puVar13);
                    }
                    puVar13[2] = uStack_70;
                    puVar13[1] = uStack_78;
                    *puVar13 = plStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                    if ((long *)0x1 < plStack_68) {
                      do {
                        lVar20 = *plStack_68;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                        if (bVar2) {
                          *plStack_68 = lVar20 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar20 + -1 == 0) {
                        (*(code *)plStack_68[1])();
                      }
                    }
                    plVar8 = (long *)param_4[1];
                    uVar14 = plVar8[1];
                    plVar7 = (long *)*plVar8;
                    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                      uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                      plVar7 = plVar8;
                    }
                    *param_1 = (long)plVar7;
                    param_1[1] = uVar14;
                    uVar11 = 1;
                    param_4 = plStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar11;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_104a7d988:
                  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
                  (*pcVar3)();
                }
                lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
                  uVar11 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
                  func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
                  if (plStack_68 == (long *)0x0) {
                    plVar7 = (long *)(ulong)bStack_60;
                    puVar17 = &uStack_5f;
                  }
                  else {
                    plVar7 = (long *)CONCAT71(uStack_5f,bStack_60);
                    puVar17 = puStack_58;
                    if ((long *)0x7ffffffffffffff7 < plVar7) goto LAB_104a7d77c;
                  }
                  if (plVar7 < (long *)0x17) {
                    uStack_78 = CONCAT17((char)plVar7,(undefined7)uStack_78);
                    pppppuVar6 = &ppppuStack_88;
                    if (plVar7 != (long *)0x0) goto LAB_104a7d6b8;
                  }
                  else {
                    uVar14 = ((ulong)plVar7 & 0x7ffffffffffffff8) + 8;
                    if (((ulong)plVar7 | 7) != 0x17) {
                      uVar14 = (ulong)plVar7 | 7;
                    }
                    pppppuVar6 = (undefined8 *****)(uVar14 + 1);
                    __Znwm();
                    uStack_78 = uVar14 + 1 | 0x8000000000000000;
                    ppppuStack_88 = pppppuVar6;
                    plStack_80 = plVar7;
LAB_104a7d6b8:
                    _memmove(pppppuVar6,puVar17,plVar7);
                  }
                  *(undefined1 *)((long)pppppuVar6 + (long)plVar7) = 0;
                  puVar13 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar13 + 0x17) < '\0') {
                    __ZdlPv(*puVar13);
                  }
                  puVar13[2] = uStack_78;
                  puVar13[1] = plStack_80;
                  *puVar13 = ppppuStack_88;
                  uStack_78 = uStack_78 & 0xffffffffffffff;
                  ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
                  if ((long *)0x1 < plStack_68) {
                    do {
                      lVar20 = *plStack_68;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                      if (bVar2) {
                        *plStack_68 = lVar20 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar20 + -1 == 0) {
                      (*(code *)plStack_68[1])();
                    }
                  }
                  plVar8 = (long *)param_4[1];
                  uVar14 = plVar8[1];
                  plVar7 = (long *)*plVar8;
                  if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                    uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                    plVar7 = plVar8;
                  }
                  *param_1 = (long)plVar7;
                  param_1[1] = uVar14;
                  uVar11 = 1;
                  param_4 = plStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar11;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_104a7d77c:
                func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
                (*pcVar3)();
              }
              pplVar5 = &plStack_80;
              pplVar18 = &plStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) & 1) == 0) {
                uVar11 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
                if (plStack_68 == (long *)0x0) {
                  uVar14 = (ulong)bStack_60;
                  puVar17 = &uStack_5f;
                }
                else {
                  uVar14 = CONCAT71(uStack_5f,bStack_60);
                  puVar17 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7d55c;
                }
                if (uVar14 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                  if (uVar14 != 0) goto LAB_104a7d498;
                }
                else {
                  uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                  if ((uVar14 | 7) != 0x17) {
                    uVar10 = uVar14 | 7;
                  }
                  pplVar5 = (long **)(uVar10 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                  plStack_80 = (long *)pplVar5;
                  uStack_78 = uVar14;
LAB_104a7d498:
                  _memmove(pplVar5,puVar17,uVar14);
                  pplVar18 = pplVar5;
                }
                *(undefined1 *)((long)pplVar18 + uVar14) = 0;
                puVar13 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar13 + 0x17) < '\0') {
                  __ZdlPv(*puVar13);
                }
                puVar13[2] = uStack_70;
                puVar13[1] = uStack_78;
                *puVar13 = plStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar20 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar20 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar20 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar8 = (long *)param_4[1];
                uVar14 = plVar8[1];
                plVar7 = (long *)*plVar8;
                if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                  uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                  plVar7 = plVar8;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar14;
                uVar11 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar11;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7d55c:
              func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
              (*pcVar3)();
            }
            pplVar5 = &plStack_80;
            pplVar18 = &plStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if (*(char *)*param_4 < '\0') {
              FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
              if (plStack_68 == (long *)0x0) {
                uVar14 = (ulong)bStack_60;
                puVar17 = &uStack_5f;
              }
              else {
                uVar14 = CONCAT71(uStack_5f,bStack_60);
                puVar17 = puStack_58;
                if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7d324;
              }
              if (uVar14 < 0x17) {
                uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
                if (uVar14 != 0) goto LAB_104a7d260;
              }
              else {
                uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
                if ((uVar14 | 7) != 0x17) {
                  uVar10 = uVar14 | 7;
                }
                pplVar5 = (long **)(uVar10 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
                plStack_80 = (long *)pplVar5;
                uStack_78 = uVar14;
LAB_104a7d260:
                _memmove(pplVar5,puVar17,uVar14);
                pplVar18 = pplVar5;
              }
              *(undefined1 *)((long)pplVar18 + uVar14) = 0;
              puVar13 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar13 + 0x17) < '\0') {
                __ZdlPv(*puVar13);
              }
              puVar13[2] = uStack_70;
              puVar13[1] = uStack_78;
              *puVar13 = plStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar20 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar20 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar20 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar8 = (long *)param_4[1];
              uVar14 = plVar8[1];
              plVar7 = (long *)*plVar8;
              if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
                uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
                plVar7 = plVar8;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar14;
              uVar11 = 1;
              param_4 = plStack_68;
            }
            else {
              uVar11 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar11;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7d324:
            func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
            (*pcVar3)();
          }
          pplVar5 = &plStack_80;
          pplVar18 = &plStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)*param_4 >> 6 & 1) == 0) {
            uVar11 = 0;
            *(undefined1 *)param_1 = 0;
            plVar7 = param_4;
          }
          else {
            plVar7 = (long *)(ulong)((byte *)*param_4)[0x198];
            func_0x000100619828(&plStack_68,plVar7);
            if (plStack_68 == (long *)0x0) {
              uVar14 = (ulong)bStack_60;
              puVar17 = &uStack_5f;
            }
            else {
              uVar14 = CONCAT71(uStack_5f,bStack_60);
              puVar17 = puStack_58;
              if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7d140;
            }
            if (uVar14 < 0x17) {
              uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
              if (uVar14 != 0) goto LAB_104a7d0ac;
            }
            else {
              uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
              if ((uVar14 | 7) != 0x17) {
                uVar10 = uVar14 | 7;
              }
              pplVar5 = (long **)(uVar10 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
              plStack_80 = (long *)pplVar5;
              uStack_78 = uVar14;
LAB_104a7d0ac:
              plVar7 = (long *)pplVar5;
              _memmove(pplVar5,puVar17,uVar14);
              pplVar18 = pplVar5;
            }
            *(undefined1 *)((long)pplVar18 + uVar14) = 0;
            puVar13 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              plVar7 = (long *)*puVar13;
              __ZdlPv(plVar7);
            }
            puVar13[2] = uStack_70;
            puVar13[1] = uStack_78;
            *puVar13 = plStack_80;
            plVar19 = (long *)param_4[1];
            uVar14 = plVar19[1];
            plVar8 = (long *)*plVar19;
            if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
              uVar14 = (ulong)*(byte *)((long)plVar19 + 0x17);
              plVar8 = plVar19;
            }
            *param_1 = (long)plVar8;
            param_1[1] = uVar14;
            uVar11 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar11;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return plVar7;
          }
          ___stack_chk_fail();
LAB_104a7d140:
          func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
          (*pcVar3)();
        }
        pplVar5 = &plStack_80;
        pplVar18 = &plStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)*param_4 >> 5 & 1) == 0) {
          uVar11 = 0;
          *(undefined1 *)param_1 = 0;
          plVar7 = param_4;
        }
        else {
          plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x19c);
          func_0x000100619644(&plStack_68,plVar7);
          if (plStack_68 == (long *)0x0) {
            uVar14 = (ulong)bStack_60;
            puVar17 = &uStack_5f;
          }
          else {
            uVar14 = CONCAT71(uStack_5f,bStack_60);
            puVar17 = puStack_58;
            if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7cfb0;
          }
          if (uVar14 < 0x17) {
            uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
            if (uVar14 != 0) goto LAB_104a7cf1c;
          }
          else {
            uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
            if ((uVar14 | 7) != 0x17) {
              uVar10 = uVar14 | 7;
            }
            pplVar5 = (long **)(uVar10 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
            plStack_80 = (long *)pplVar5;
            uStack_78 = uVar14;
LAB_104a7cf1c:
            plVar7 = (long *)pplVar5;
            _memmove(pplVar5,puVar17,uVar14);
            pplVar18 = pplVar5;
          }
          *(undefined1 *)((long)pplVar18 + uVar14) = 0;
          puVar13 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            plVar7 = (long *)*puVar13;
            __ZdlPv(plVar7);
          }
          puVar13[2] = uStack_70;
          puVar13[1] = uStack_78;
          *puVar13 = plStack_80;
          plVar19 = (long *)param_4[1];
          uVar14 = plVar19[1];
          plVar8 = (long *)*plVar19;
          if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
            uVar14 = (ulong)*(byte *)((long)plVar19 + 0x17);
            plVar8 = plVar19;
          }
          *param_1 = (long)plVar8;
          param_1[1] = uVar14;
          uVar11 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar11;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return plVar7;
        }
        ___stack_chk_fail();
LAB_104a7cfb0:
        func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cfbc);
        (*pcVar3)();
      }
      pplVar5 = &plStack_80;
      pplVar18 = &plStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)*param_4 >> 4 & 1) == 0) {
        uVar11 = 0;
        *(undefined1 *)param_1 = 0;
        plVar7 = param_4;
      }
      else {
        plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x1a0);
        FUN_104adf034(&plStack_68,plVar7);
        if (plStack_68 == (long *)0x0) {
          uVar14 = (ulong)bStack_60;
          puVar17 = &uStack_5f;
        }
        else {
          uVar14 = CONCAT71(uStack_5f,bStack_60);
          puVar17 = puStack_58;
          if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7ce04;
        }
        if (uVar14 < 0x17) {
          uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
          if (uVar14 != 0) goto LAB_104a7cd70;
        }
        else {
          uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
          if ((uVar14 | 7) != 0x17) {
            uVar10 = uVar14 | 7;
          }
          pplVar5 = (long **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          plStack_80 = (long *)pplVar5;
          uStack_78 = uVar14;
LAB_104a7cd70:
          plVar7 = (long *)pplVar5;
          _memmove(pplVar5,puVar17,uVar14);
          pplVar18 = pplVar5;
        }
        *(undefined1 *)((long)pplVar18 + uVar14) = 0;
        puVar16 = (ulong *)param_4[1];
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          plVar7 = (long *)*puVar16;
          __ZdlPv(plVar7);
        }
        puVar16[2] = uStack_70;
        puVar16[1] = uStack_78;
        *puVar16 = (ulong)plStack_80;
        plVar19 = (long *)param_4[1];
        uVar14 = plVar19[1];
        plVar8 = (long *)*plVar19;
        if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
          uVar14 = (ulong)*(byte *)((long)plVar19 + 0x17);
          plVar8 = plVar19;
        }
        *param_1 = (long)plVar8;
        param_1[1] = uVar14;
        uVar11 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar11;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return plVar7;
      }
      ___stack_chk_fail();
LAB_104a7ce04:
      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ce10);
      (*pcVar3)();
    }
    pplVar5 = &plStack_80;
    pplVar18 = &plStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)*param_4 >> 3 & 1) == 0) {
      uVar11 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_104a7a584(&plStack_68,*(undefined4 *)((byte *)*param_4 + 0x1a4));
      if (plStack_68 == (long *)0x0) {
        uVar14 = (ulong)bStack_60;
        puVar17 = &uStack_5f;
      }
      else {
        uVar14 = CONCAT71(uStack_5f,bStack_60);
        puVar17 = puStack_58;
        if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7cc38;
      }
      if (uVar14 < 0x17) {
        uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
        if (uVar14 != 0) goto LAB_104a7cb74;
      }
      else {
        uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
        if ((uVar14 | 7) != 0x17) {
          uVar10 = uVar14 | 7;
        }
        pplVar5 = (long **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        plStack_80 = (long *)pplVar5;
        uStack_78 = uVar14;
LAB_104a7cb74:
        _memmove(pplVar5,puVar17,uVar14);
        pplVar18 = pplVar5;
      }
      *(undefined1 *)((long)pplVar18 + uVar14) = 0;
      puVar13 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        __ZdlPv(*puVar13);
      }
      puVar13[2] = uStack_70;
      puVar13[1] = uStack_78;
      *puVar13 = plStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar20 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar20 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar8 = (long *)param_4[1];
      uVar14 = plVar8[1];
      plVar7 = (long *)*plVar8;
      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)plVar8 + 0x17);
        plVar7 = plVar8;
      }
      *param_1 = (long)plVar7;
      param_1[1] = uVar14;
      uVar11 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7cc38:
    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cc44);
    (*pcVar3)();
  }
  pplVar5 = &plStack_80;
  pplVar18 = &plStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_4 >> 2 & 1) == 0) {
    uVar11 = 0;
    *(undefined1 *)param_1 = 0;
    plVar7 = param_4;
  }
  else {
    plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x1a8);
    FUN_104adf0a8(&plStack_68,plVar7);
    if (plStack_68 == (long *)0x0) {
      uVar14 = (ulong)bStack_60;
      puVar17 = &uStack_5f;
    }
    else {
      uVar14 = CONCAT71(uStack_5f,bStack_60);
      puVar17 = puStack_58;
      if (0x7ffffffffffffff7 < uVar14) goto LAB_104a7ca64;
    }
    if (uVar14 < 0x17) {
      uStack_70 = CONCAT17((char)uVar14,(undefined7)uStack_70);
      if (uVar14 != 0) goto LAB_104a7c9d0;
    }
    else {
      uVar10 = (uVar14 & 0x7ffffffffffffff8) + 8;
      if ((uVar14 | 7) != 0x17) {
        uVar10 = uVar14 | 7;
      }
      pplVar5 = (long **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      plStack_80 = (long *)pplVar5;
      uStack_78 = uVar14;
LAB_104a7c9d0:
      plVar7 = (long *)pplVar5;
      _memmove(pplVar5,puVar17,uVar14);
      pplVar18 = pplVar5;
    }
    *(undefined1 *)((long)pplVar18 + uVar14) = 0;
    puVar16 = (ulong *)param_4[1];
    if (*(char *)((long)puVar16 + 0x17) < '\0') {
      plVar7 = (long *)*puVar16;
      __ZdlPv(plVar7);
    }
    puVar16[2] = uStack_70;
    puVar16[1] = uStack_78;
    *puVar16 = (ulong)plStack_80;
    plVar19 = (long *)param_4[1];
    uVar14 = plVar19[1];
    plVar8 = (long *)*plVar19;
    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
      uVar14 = (ulong)*(byte *)((long)plVar19 + 0x17);
      plVar8 = plVar19;
    }
    *param_1 = (long)plVar8;
    param_1[1] = uVar14;
    uVar11 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
LAB_104a7ca64:
  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ca70);
  (*pcVar3)();
}



/* Entry: 104a7c908; end: 104a7ca73;  */

void FUN_104a7c908(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_2 >> 2 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104adf0a8(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a8));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_104a7ca64;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_104a7c9d0;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_104a7c9d0:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ca64:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7ca70);
  (*pcVar2)();
}



/* Entry: 104a7ca74; end: 104a7caab;  */

long * FUN_104a7ca74(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long **pplVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar14;
  undefined1 *unaff_x23;
  long **pplVar15;
  long *plVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar19;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x7) ||
     ((int)*param_2 != 0x6174733a || *(int *)((long)param_2 + 3) != 0x73757461)) {
    if ((param_3 != (undefined1 *)0x7) ||
       ((int)*param_2 != 0x6863733a || *(int *)((long)param_2 + 3) != 0x656d6568)) {
      if ((param_3 != (undefined1 *)0xc) ||
         (*param_2 != 0x2d746e65746e6f63 || (int)param_2[1] != 0x65707974)) {
        if ((param_3 != (undefined1 *)0x2) || ((short)*param_2 != 0x6574)) {
          if ((param_3 != (undefined1 *)0xd) ||
             (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65))
          {
            if ((param_3 != (undefined1 *)0x1e) ||
               (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
                param_2[2] != 0x722d676e69646f63) ||
                *(long *)((long)param_2 + 0x16) != 0x747365757165722d)) {
              if ((param_3 != (undefined1 *)0x14) ||
                 ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
                  (int)param_2[2] != 0x676e6964)) {
                if ((param_3 != (undefined1 *)0xb) ||
                   (*param_2 != 0x6174732d63707267 ||
                    *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
                  if ((param_3 != (undefined1 *)0xc) ||
                     (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
                    if ((param_3 == (undefined1 *)0x1a) &&
                       (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                        param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
                      pplVar5 = &plStack_80;
                      pplVar15 = &plStack_80;
                      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                        if (plStack_68 == (long *)0x0) {
                          uVar13 = (ulong)bStack_60;
                          puVar14 = &uStack_5f;
                        }
                        else {
                          uVar13 = CONCAT71(uStack_5f,bStack_60);
                          puVar14 = puStack_58;
                          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
                        }
                        if (uVar13 < 0x17) {
                          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                          if (uVar13 != 0) goto LAB_104a7dcf4;
                        }
                        else {
                          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                          if ((uVar13 | 7) != 0x17) {
                            uVar11 = uVar13 | 7;
                          }
                          pplVar5 = (long **)(uVar11 + 1);
                          __Znwm();
                          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                          plStack_80 = (long *)pplVar5;
                          uStack_78 = uVar13;
LAB_104a7dcf4:
                          _memmove(pplVar5,puVar14,uVar13);
                          pplVar15 = pplVar5;
                        }
                        *(undefined1 *)((long)pplVar15 + uVar13) = 0;
                        puVar12 = (undefined8 *)param_4[1];
                        if (*(char *)((long)puVar12 + 0x17) < '\0') {
                          __ZdlPv(*puVar12);
                        }
                        puVar12[2] = uStack_70;
                        puVar12[1] = uStack_78;
                        *puVar12 = plStack_80;
                        uStack_70 = uStack_70 & 0xffffffffffffff;
                        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                        if ((long *)0x1 < plStack_68) {
                          do {
                            lVar17 = *plStack_68;
                            cVar1 = '\x01';
                            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                            if (bVar2) {
                              *plStack_68 = lVar17 + -1;
                              cVar1 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar1 != '\0');
                          if (lVar17 + -1 == 0) {
                            (*(code *)plStack_68[1])();
                          }
                        }
                        plVar9 = (long *)param_4[1];
                        uVar13 = plVar9[1];
                        plVar7 = (long *)*plVar9;
                        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                          plVar7 = plVar9;
                        }
                        *param_1 = (long)plVar7;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                        param_4 = plStack_68;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                        return param_4;
                      }
                      ___stack_chk_fail();
LAB_104a7ddb8:
                      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
                      (*pcVar3)();
                    }
                    if ((param_3 != (undefined1 *)0x16) ||
                       ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                        *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
                      if ((param_3 == (undefined1 *)0xa) &&
                         (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 1) >> 6 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0x150) == 0) {
                            lVar19 = lVar17 + 0x159;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0x158);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0x158);
                            lVar19 = *(long *)(lVar17 + 0x160);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0xc) &&
                         (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                        lVar17 = *param_4;
                        if (*(char *)(lVar17 + 1) < '\0') {
                          if (*(long *)(lVar17 + 0x130) == 0) {
                            lVar19 = lVar17 + 0x139;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0x138);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0x138);
                            lVar19 = *(long *)(lVar17 + 0x140);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        else {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 2) & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0x110) == 0) {
                            lVar19 = lVar17 + 0x119;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0x118);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0x118);
                            lVar19 = *(long *)(lVar17 + 0x120);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0x19) &&
                         (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                          param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 2) >> 1 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0xf0) == 0) {
                            lVar19 = lVar17 + 0xf9;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0xf8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0xf8);
                            lVar19 = *(long *)(lVar17 + 0x100);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0x15) &&
                         ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                          *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 2) >> 2 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0xd0) == 0) {
                            lVar19 = lVar17 + 0xd9;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0xd8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0xd8);
                            lVar19 = *(long *)(lVar17 + 0xe0);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0xe) &&
                         (*param_2 == 0x6172742d63707267 &&
                          *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 2) >> 3 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0xb0) == 0) {
                            lVar19 = lVar17 + 0xb9;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0xb8);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0xb8);
                            lVar19 = *(long *)(lVar17 + 0xc0);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0xd) &&
                         (*param_2 == 0x6761742d63707267 &&
                          *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                        lVar17 = *param_4;
                        if ((*(byte *)(lVar17 + 2) >> 4 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          if (*(long *)(lVar17 + 0x90) == 0) {
                            lVar19 = lVar17 + 0x99;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0x98);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0x98);
                            lVar19 = *(long *)(lVar17 + 0xa0);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      if ((param_3 == (undefined1 *)0x13) &&
                         ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                          *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                        unaff_x29 = &stack0xfffffffffffffff0;
                        if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                          *(undefined1 *)param_1 = 0;
                          *(undefined1 *)(param_1 + 2) = 0;
                          return param_4;
                        }
                        unaff_x30 = FUN_104a7e44c;
                        plVar7 = param_4;
                        _abort();
                        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                        param_2 = param_4;
                        param_4 = plVar7;
                        param_1 = extraout_x8;
                      }
                      if ((param_3 == (undefined1 *)0xb) &&
                         (*param_2 == 0x2d74736f632d626c &&
                          *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                        *(code **)((long)register0x00000008 + -8) = unaff_x30;
                        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                        *(undefined8 *)((long)register0x00000008 + -0x48) =
                             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                        lVar17 = *param_4;
                        unaff_x19 = param_4;
                        plVar7 = param_4;
                        if ((*(byte *)(lVar17 + 2) >> 6 & 1) == 0) {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        else {
                          puVar12 = (undefined8 *)param_4[1];
                          if (*(char *)((long)puVar12 + 0x17) < '\0') {
                            *(undefined1 *)*puVar12 = 0;
                            puVar12[1] = 0;
                          }
                          else {
                            *(undefined1 *)puVar12 = 0;
                            *(undefined1 *)((long)puVar12 + 0x17) = 0;
                          }
                          uVar13 = *(ulong *)(lVar17 + 0x60);
                          unaff_x21 = (undefined8 *)(lVar17 + 0x68);
                          if ((uVar13 & 1) != 0) {
                            unaff_x21 = (undefined8 *)*unaff_x21;
                          }
                          if (1 < uVar13) {
                            unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                            unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                            do {
                              lVar17 = param_4[1];
                              if (*(char *)(lVar17 + 0x17) < '\0') {
                                if (*(long *)(lVar17 + 8) != 0) goto LAB_104a7e548;
                              }
                              else if (*(char *)(lVar17 + 0x17) != '\0') {
LAB_104a7e548:
                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                          (lVar17,0x2c);
                              }
                              FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),
                                            unaff_x21);
                              uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                              param_3 = unaff_x23;
                              if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                                uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                                param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                              }
                              plVar7 = (long *)(param_3 + uVar13);
                              FUN_104a7e67c(param_4[1]);
                              unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                              if ((long *)0x1 < unaff_x19) {
                                do {
                                  lVar17 = *unaff_x19;
                                  cVar1 = '\x01';
                                  bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                  if (bVar2) {
                                    *unaff_x19 = lVar17 + -1;
                                    cVar1 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar1 != '\0');
                                if (lVar17 + -1 == 0) {
                                  (*(code *)unaff_x19[1])();
                                }
                              }
                              unaff_x21 = unaff_x21 + 4;
                            } while (unaff_x21 != unaff_x22);
                          }
                          plVar16 = (long *)param_4[1];
                          uVar13 = plVar16[1];
                          plVar9 = (long *)*plVar16;
                          if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                            uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                            plVar9 = plVar16;
                          }
                          *param_1 = (long)plVar9;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                          unaff_x20 = param_4;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                            *(long *)((long)register0x00000008 + -0x48)) {
                          return unaff_x19;
                        }
                        ___stack_chk_fail();
                        param_4 = plVar7;
                        if ((int)param_3 != 0) {
                          FUN_104bd46a0();
                          func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                          param_4 = plVar7;
                        }
                        unaff_x30 = FUN_104a7e63c;
                        param_2 = unaff_x19;
                        __Unwind_Resume();
                        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                        param_1 = extraout_x8_00;
                      }
                      if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                        lVar17 = *param_4;
                        if (*(char *)(lVar17 + 2) < '\0') {
                          if (*(long *)(lVar17 + 0x40) == 0) {
                            lVar19 = lVar17 + 0x49;
                            uVar13 = (ulong)*(byte *)(lVar17 + 0x48);
                          }
                          else {
                            uVar13 = *(ulong *)(lVar17 + 0x48);
                            lVar19 = *(long *)(lVar17 + 0x50);
                          }
                          *param_1 = lVar19;
                          param_1[1] = uVar13;
                          uVar8 = 1;
                        }
                        else {
                          uVar8 = 0;
                          *(undefined1 *)param_1 = 0;
                        }
                        *(undefined1 *)(param_1 + 2) = uVar8;
                        return param_4;
                      }
                      lVar17 = *param_4;
                      plVar9 = (long *)param_4[1];
                      plVar7 = (long *)(lVar17 + 0x1f0);
                      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                      *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                      *(code **)((long)register0x00000008 + -8) = unaff_x30;
                      *(undefined8 *)((long)register0x00000008 + -0x70) =
                           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                      *(undefined1 *)param_1 = 0;
                      *(undefined1 *)(param_1 + 2) = 0;
                      plVar16 = *(long **)(lVar17 + 0x1f8);
                      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
                        lVar17 = 0;
                        bVar2 = false;
                        plVar18 = (long *)*param_1;
                        uVar13 = param_1[1];
                        do {
                          if (plVar16[lVar17 * 8 + 2] == 0) {
                            plVar7 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x19);
                            puVar10 = (undefined1 *)(ulong)*(byte *)(plVar16 + lVar17 * 8 + 3);
                          }
                          else {
                            puVar10 = (undefined1 *)plVar16[lVar17 * 8 + 3];
                            plVar7 = (long *)plVar16[lVar17 * 8 + 4];
                          }
                          if ((puVar10 == param_3) &&
                             (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                            if (bVar2) {
                              *(long **)((long)register0x00000008 + -0xa0) = plVar18;
                              *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                              *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                              *(undefined8 *)((long)register0x00000008 + -200) = 1;
                              if (plVar16[lVar17 * 8 + 6] == 0) {
                                lVar19 = (long)plVar16 + lVar17 * 0x40 + 0x39;
                                uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                              }
                              else {
                                uVar13 = plVar16[lVar17 * 8 + 7];
                                lVar19 = plVar16[lVar17 * 8 + 8];
                              }
                              *(long *)((long)register0x00000008 + -0x100) = lVar19;
                              *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                              plVar7 = (long *)((long)register0x00000008 + -0xa0);
                              func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),
                                                  plVar7,(undefined1 *)
                                                         ((long)register0x00000008 + -0xd0),
                                                  (undefined1 *)((long)register0x00000008 + -0x100))
                              ;
                              if (*(char *)((long)plVar9 + 0x17) < '\0') {
                                plVar7 = (long *)*plVar9;
                                __ZdlPv();
                              }
                              uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                              plVar9[2] = uVar11;
                              lVar19 = *(long *)((long)register0x00000008 + -0x118);
                              plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                              *plVar9 = lVar19;
                              uVar13 = plVar9[1];
                              plVar18 = (long *)*plVar9;
                              if (-1 < (long)uVar11) {
                                uVar13 = uVar11 >> 0x38;
                                plVar18 = plVar9;
                              }
                              *param_1 = (long)plVar18;
                              param_1[1] = uVar13;
                            }
                            else {
                              if (plVar16[lVar17 * 8 + 6] == 0) {
                                plVar18 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x39);
                                uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                              }
                              else {
                                uVar13 = plVar16[lVar17 * 8 + 7];
                                plVar18 = (long *)plVar16[lVar17 * 8 + 8];
                              }
                              *param_1 = (long)plVar18;
                              param_1[1] = uVar13;
                              bVar2 = true;
                              *(undefined1 *)(param_1 + 2) = 1;
                            }
                          }
                          lVar17 = lVar17 + 1;
                          do {
                            if (lVar17 != plVar16[1]) goto LAB_104adee4c;
                            lVar17 = 0;
                            plVar16 = (long *)*plVar16;
                          } while (plVar16 != (long *)0x0);
                          lVar17 = 0;
LAB_104adee4c:
                        } while ((plVar16 != (long *)0x0) || (lVar17 != 0));
                      }
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                          *(long *)((long)register0x00000008 + -0x70)) {
                        ___stack_chk_fail();
                        iVar4 = (int)plVar7;
                        __Unwind_Resume();
                        plVar7 = (long *)"";
                        if (iVar4 != 1) {
                          plVar7 = (long *)"<discarded-invalid-value>";
                        }
                        plVar9 = (long *)"application/grpc";
                        if (iVar4 != 0) {
                          plVar9 = plVar7;
                        }
                        return plVar9;
                      }
                      return plVar7;
                    }
                    pplVar5 = &plStack_80;
                    pplVar15 = &plStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
                      if (plStack_68 == (long *)0x0) {
                        uVar13 = (ulong)bStack_60;
                        puVar14 = &uStack_5f;
                      }
                      else {
                        uVar13 = CONCAT71(uStack_5f,bStack_60);
                        puVar14 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
                      }
                      if (uVar13 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                        if (uVar13 != 0) goto LAB_104a7df14;
                      }
                      else {
                        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                        if ((uVar13 | 7) != 0x17) {
                          uVar11 = uVar13 | 7;
                        }
                        pplVar5 = (long **)(uVar11 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                        plStack_80 = (long *)pplVar5;
                        uStack_78 = uVar13;
LAB_104a7df14:
                        _memmove(pplVar5,puVar14,uVar13);
                        pplVar15 = pplVar5;
                      }
                      *(undefined1 *)((long)pplVar15 + uVar13) = 0;
                      puVar12 = (undefined8 *)param_4[1];
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        __ZdlPv(*puVar12);
                      }
                      puVar12[2] = uStack_70;
                      puVar12[1] = uStack_78;
                      *puVar12 = plStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                      if ((long *)0x1 < plStack_68) {
                        do {
                          lVar17 = *plStack_68;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                          if (bVar2) {
                            *plStack_68 = lVar17 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (lVar17 + -1 == 0) {
                          (*(code *)plStack_68[1])();
                        }
                      }
                      plVar9 = (long *)param_4[1];
                      uVar13 = plVar9[1];
                      plVar7 = (long *)*plVar9;
                      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                        plVar7 = plVar9;
                      }
                      *param_1 = (long)plVar7;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                      param_4 = plStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_104a7dfd8:
                    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
                    (*pcVar3)();
                  }
                  pplVar5 = &plStack_80;
                  pplVar15 = &plStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
                    if (plStack_68 == (long *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar14 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar14 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_104a7dac8;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      pplVar5 = (long **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      plStack_80 = (long *)pplVar5;
                      uStack_78 = uVar13;
LAB_104a7dac8:
                      _memmove(pplVar5,puVar14,uVar13);
                      pplVar15 = pplVar5;
                    }
                    *(undefined1 *)((long)pplVar15 + uVar13) = 0;
                    puVar12 = (undefined8 *)param_4[1];
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = plStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                    if ((long *)0x1 < plStack_68) {
                      do {
                        lVar17 = *plStack_68;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                        if (bVar2) {
                          *plStack_68 = lVar17 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar17 + -1 == 0) {
                        (*(code *)plStack_68[1])();
                      }
                    }
                    plVar9 = (long *)param_4[1];
                    uVar13 = plVar9[1];
                    plVar7 = (long *)*plVar9;
                    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                      plVar7 = plVar9;
                    }
                    *param_1 = (long)plVar7;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                    param_4 = plStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_104a7db8c:
                  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
                  (*pcVar3)();
                }
                pplVar5 = &plStack_80;
                pplVar15 = &plStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
                  if (plStack_68 == (long *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar14 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar14 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_104a7d8c4;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    pplVar5 = (long **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    plStack_80 = (long *)pplVar5;
                    uStack_78 = uVar13;
LAB_104a7d8c4:
                    _memmove(pplVar5,puVar14,uVar13);
                    pplVar15 = pplVar5;
                  }
                  *(undefined1 *)((long)pplVar15 + uVar13) = 0;
                  puVar12 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = plStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                  if ((long *)0x1 < plStack_68) {
                    do {
                      lVar17 = *plStack_68;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                      if (bVar2) {
                        *plStack_68 = lVar17 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar17 + -1 == 0) {
                      (*(code *)plStack_68[1])();
                    }
                  }
                  plVar9 = (long *)param_4[1];
                  uVar13 = plVar9[1];
                  plVar7 = (long *)*plVar9;
                  if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                    plVar7 = plVar9;
                  }
                  *param_1 = (long)plVar7;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                  param_4 = plStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_104a7d988:
                func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
                (*pcVar3)();
              }
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
                func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
                if (plStack_68 == (long *)0x0) {
                  plVar7 = (long *)(ulong)bStack_60;
                  puVar14 = &uStack_5f;
                }
                else {
                  plVar7 = (long *)CONCAT71(uStack_5f,bStack_60);
                  puVar14 = puStack_58;
                  if ((long *)0x7ffffffffffffff7 < plVar7) goto LAB_104a7d77c;
                }
                if (plVar7 < (long *)0x17) {
                  uStack_78 = CONCAT17((char)plVar7,(undefined7)uStack_78);
                  pppppuVar6 = &ppppuStack_88;
                  if (plVar7 != (long *)0x0) goto LAB_104a7d6b8;
                }
                else {
                  uVar13 = ((ulong)plVar7 & 0x7ffffffffffffff8) + 8;
                  if (((ulong)plVar7 | 7) != 0x17) {
                    uVar13 = (ulong)plVar7 | 7;
                  }
                  pppppuVar6 = (undefined8 *****)(uVar13 + 1);
                  __Znwm();
                  uStack_78 = uVar13 + 1 | 0x8000000000000000;
                  ppppuStack_88 = pppppuVar6;
                  plStack_80 = plVar7;
LAB_104a7d6b8:
                  _memmove(pppppuVar6,puVar14,plVar7);
                }
                *(undefined1 *)((long)pppppuVar6 + (long)plVar7) = 0;
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_78;
                puVar12[1] = plStack_80;
                *puVar12 = ppppuStack_88;
                uStack_78 = uStack_78 & 0xffffffffffffff;
                ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar17 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar17 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar17 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar9 = (long *)param_4[1];
                uVar13 = plVar9[1];
                plVar7 = (long *)*plVar9;
                if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                  plVar7 = plVar9;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar13;
                uVar8 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7d77c:
              func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
              (*pcVar3)();
            }
            pplVar5 = &plStack_80;
            pplVar15 = &plStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
              if (plStack_68 == (long *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar14 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar14 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_104a7d498;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                pplVar5 = (long **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                plStack_80 = (long *)pplVar5;
                uStack_78 = uVar13;
LAB_104a7d498:
                _memmove(pplVar5,puVar14,uVar13);
                pplVar15 = pplVar5;
              }
              *(undefined1 *)((long)pplVar15 + uVar13) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = plStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar17 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar17 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7d55c:
            func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
            (*pcVar3)();
          }
          pplVar5 = &plStack_80;
          pplVar15 = &plStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if (*(char *)*param_4 < '\0') {
            FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar14 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar14 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d324;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7d260;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              pplVar5 = (long **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              plStack_80 = (long *)pplVar5;
              uStack_78 = uVar13;
LAB_104a7d260:
              _memmove(pplVar5,puVar14,uVar13);
              pplVar15 = pplVar5;
            }
            *(undefined1 *)((long)pplVar15 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = plStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar17 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar17 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar17 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          else {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7d324:
          func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
          (*pcVar3)();
        }
        pplVar5 = &plStack_80;
        pplVar15 = &plStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)*param_4 >> 6 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
          plVar7 = param_4;
        }
        else {
          plVar7 = (long *)(ulong)((byte *)*param_4)[0x198];
          func_0x000100619828(&plStack_68,plVar7);
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar14 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar14 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d140;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7d0ac;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            pplVar5 = (long **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            plStack_80 = (long *)pplVar5;
            uStack_78 = uVar13;
LAB_104a7d0ac:
            plVar7 = (long *)pplVar5;
            _memmove(pplVar5,puVar14,uVar13);
            pplVar15 = pplVar5;
          }
          *(undefined1 *)((long)pplVar15 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            plVar7 = (long *)*puVar12;
            __ZdlPv(plVar7);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = plStack_80;
          plVar16 = (long *)param_4[1];
          uVar13 = plVar16[1];
          plVar9 = (long *)*plVar16;
          if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
            plVar9 = plVar16;
          }
          *param_1 = (long)plVar9;
          param_1[1] = uVar13;
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return plVar7;
        }
        ___stack_chk_fail();
LAB_104a7d140:
        func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
        (*pcVar3)();
      }
      pplVar5 = &plStack_80;
      pplVar15 = &plStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)*param_4 >> 5 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
        plVar7 = param_4;
      }
      else {
        plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x19c);
        func_0x000100619644(&plStack_68,plVar7);
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar14 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar14 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7cfb0;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7cf1c;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          pplVar5 = (long **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          plStack_80 = (long *)pplVar5;
          uStack_78 = uVar13;
LAB_104a7cf1c:
          plVar7 = (long *)pplVar5;
          _memmove(pplVar5,puVar14,uVar13);
          pplVar15 = pplVar5;
        }
        *(undefined1 *)((long)pplVar15 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          plVar7 = (long *)*puVar12;
          __ZdlPv(plVar7);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = plStack_80;
        plVar16 = (long *)param_4[1];
        uVar13 = plVar16[1];
        plVar9 = (long *)*plVar16;
        if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
          plVar9 = plVar16;
        }
        *param_1 = (long)plVar9;
        param_1[1] = uVar13;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return plVar7;
      }
      ___stack_chk_fail();
LAB_104a7cfb0:
      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cfbc);
      (*pcVar3)();
    }
    pplVar5 = &plStack_80;
    pplVar15 = &plStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)*param_4 >> 4 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
      plVar7 = param_4;
    }
    else {
      plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x1a0);
      FUN_104adf034(&plStack_68,plVar7);
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar14 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar14 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ce04;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7cd70;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        pplVar5 = (long **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        plStack_80 = (long *)pplVar5;
        uStack_78 = uVar13;
LAB_104a7cd70:
        plVar7 = (long *)pplVar5;
        _memmove(pplVar5,puVar14,uVar13);
        pplVar15 = pplVar5;
      }
      *(undefined1 *)((long)pplVar15 + uVar13) = 0;
      puVar12 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        plVar7 = (long *)*puVar12;
        __ZdlPv(plVar7);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = plStack_80;
      plVar16 = (long *)param_4[1];
      uVar13 = plVar16[1];
      plVar9 = (long *)*plVar16;
      if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
        plVar9 = plVar16;
      }
      *param_1 = (long)plVar9;
      param_1[1] = uVar13;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar7;
    }
    ___stack_chk_fail();
LAB_104a7ce04:
    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ce10);
    (*pcVar3)();
  }
  pplVar5 = &plStack_80;
  pplVar15 = &plStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_4 >> 3 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined4 *)((byte *)*param_4 + 0x1a4));
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar14 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar14 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7cc38;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7cb74;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      pplVar5 = (long **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      plStack_80 = (long *)pplVar5;
      uStack_78 = uVar13;
LAB_104a7cb74:
      _memmove(pplVar5,puVar14,uVar13);
      pplVar15 = pplVar5;
    }
    *(undefined1 *)((long)pplVar15 + uVar13) = 0;
    puVar12 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = plStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar17 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar9 = (long *)param_4[1];
    uVar13 = plVar9[1];
    plVar7 = (long *)*plVar9;
    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
      plVar7 = plVar9;
    }
    *param_1 = (long)plVar7;
    param_1[1] = uVar13;
    uVar8 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7cc38:
  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cc44);
  (*pcVar3)();
}



/* Entry: 104a7caac; end: 104a7cc6f;  */

void FUN_104a7caac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_2 >> 3 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a4));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7cc38;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7cb74;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7cb74:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7cc38:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7cc44);
  (*pcVar4)();
}



/* Entry: 104a7cc70; end: 104a7cca7;  */

long * FUN_104a7cc70(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long **pplVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  undefined1 *unaff_x23;
  long **pplVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x7) ||
     ((int)*param_2 != 0x6863733a || *(int *)((long)param_2 + 3) != 0x656d6568)) {
    if ((param_3 != (undefined1 *)0xc) ||
       (*param_2 != 0x2d746e65746e6f63 || (int)param_2[1] != 0x65707974)) {
      if ((param_3 != (undefined1 *)0x2) || ((short)*param_2 != 0x6574)) {
        if ((param_3 != (undefined1 *)0xd) ||
           (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65)) {
          if ((param_3 != (undefined1 *)0x1e) ||
             (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
              param_2[2] != 0x722d676e69646f63) ||
              *(long *)((long)param_2 + 0x16) != 0x747365757165722d)) {
            if ((param_3 != (undefined1 *)0x14) ||
               ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
                (int)param_2[2] != 0x676e6964)) {
              if ((param_3 != (undefined1 *)0xb) ||
                 (*param_2 != 0x6174732d63707267 ||
                  *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
                if ((param_3 != (undefined1 *)0xc) ||
                   (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
                  if ((param_3 == (undefined1 *)0x1a) &&
                     (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                      param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
                    pplVar5 = &plStack_80;
                    pplVar16 = &plStack_80;
                    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                      if (plStack_68 == (long *)0x0) {
                        uVar13 = (ulong)bStack_60;
                        puVar15 = &uStack_5f;
                      }
                      else {
                        uVar13 = CONCAT71(uStack_5f,bStack_60);
                        puVar15 = puStack_58;
                        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
                      }
                      if (uVar13 < 0x17) {
                        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                        if (uVar13 != 0) goto LAB_104a7dcf4;
                      }
                      else {
                        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                        if ((uVar13 | 7) != 0x17) {
                          uVar11 = uVar13 | 7;
                        }
                        pplVar5 = (long **)(uVar11 + 1);
                        __Znwm();
                        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                        plStack_80 = (long *)pplVar5;
                        uStack_78 = uVar13;
LAB_104a7dcf4:
                        _memmove(pplVar5,puVar15,uVar13);
                        pplVar16 = pplVar5;
                      }
                      *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                      puVar12 = (undefined8 *)param_4[1];
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        __ZdlPv(*puVar12);
                      }
                      puVar12[2] = uStack_70;
                      puVar12[1] = uStack_78;
                      *puVar12 = plStack_80;
                      uStack_70 = uStack_70 & 0xffffffffffffff;
                      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                      if ((long *)0x1 < plStack_68) {
                        do {
                          lVar18 = *plStack_68;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                          if (bVar2) {
                            *plStack_68 = lVar18 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (lVar18 + -1 == 0) {
                          (*(code *)plStack_68[1])();
                        }
                      }
                      plVar9 = (long *)param_4[1];
                      uVar13 = plVar9[1];
                      plVar7 = (long *)*plVar9;
                      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                        plVar7 = plVar9;
                      }
                      *param_1 = (long)plVar7;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                      param_4 = plStack_68;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                      return param_4;
                    }
                    ___stack_chk_fail();
LAB_104a7ddb8:
                    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
                    (*pcVar3)();
                  }
                  if ((param_3 != (undefined1 *)0x16) ||
                     ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                      *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
                    if ((param_3 == (undefined1 *)0xa) &&
                       (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x150) == 0) {
                          lVar20 = lVar18 + 0x159;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x158);
                          lVar20 = *(long *)(lVar18 + 0x160);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0xc) &&
                       (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                      lVar18 = *param_4;
                      if (*(char *)(lVar18 + 1) < '\0') {
                        if (*(long *)(lVar18 + 0x130) == 0) {
                          lVar20 = lVar18 + 0x139;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x138);
                          lVar20 = *(long *)(lVar18 + 0x140);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      else {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x110) == 0) {
                          lVar20 = lVar18 + 0x119;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x118);
                          lVar20 = *(long *)(lVar18 + 0x120);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0x19) &&
                       (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                        param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xf0) == 0) {
                          lVar20 = lVar18 + 0xf9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xf8);
                          lVar20 = *(long *)(lVar18 + 0x100);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0x15) &&
                       ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                        *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xd0) == 0) {
                          lVar20 = lVar18 + 0xd9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xd8);
                          lVar20 = *(long *)(lVar18 + 0xe0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0xe) &&
                       (*param_2 == 0x6172742d63707267 &&
                        *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0xb0) == 0) {
                          lVar20 = lVar18 + 0xb9;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0xb8);
                          lVar20 = *(long *)(lVar18 + 0xc0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0xd) &&
                       (*param_2 == 0x6761742d63707267 &&
                        *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                      lVar18 = *param_4;
                      if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        if (*(long *)(lVar18 + 0x90) == 0) {
                          lVar20 = lVar18 + 0x99;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x98);
                          lVar20 = *(long *)(lVar18 + 0xa0);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    if ((param_3 == (undefined1 *)0x13) &&
                       ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                        *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                      unaff_x29 = &stack0xfffffffffffffff0;
                      if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                        *(undefined1 *)param_1 = 0;
                        *(undefined1 *)(param_1 + 2) = 0;
                        return param_4;
                      }
                      unaff_x30 = FUN_104a7e44c;
                      plVar7 = param_4;
                      _abort();
                      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                      param_2 = param_4;
                      param_4 = plVar7;
                      param_1 = extraout_x8;
                    }
                    if ((param_3 == (undefined1 *)0xb) &&
                       (*param_2 == 0x2d74736f632d626c &&
                        *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                      *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                      *(code **)((long)register0x00000008 + -8) = unaff_x30;
                      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                      *(undefined8 *)((long)register0x00000008 + -0x48) =
                           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                      lVar18 = *param_4;
                      unaff_x19 = param_4;
                      plVar7 = param_4;
                      if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      else {
                        puVar12 = (undefined8 *)param_4[1];
                        if (*(char *)((long)puVar12 + 0x17) < '\0') {
                          *(undefined1 *)*puVar12 = 0;
                          puVar12[1] = 0;
                        }
                        else {
                          *(undefined1 *)puVar12 = 0;
                          *(undefined1 *)((long)puVar12 + 0x17) = 0;
                        }
                        uVar13 = *(ulong *)(lVar18 + 0x60);
                        unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                        if ((uVar13 & 1) != 0) {
                          unaff_x21 = (undefined8 *)*unaff_x21;
                        }
                        if (1 < uVar13) {
                          unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                          do {
                            lVar18 = param_4[1];
                            if (*(char *)(lVar18 + 0x17) < '\0') {
                              if (*(long *)(lVar18 + 8) != 0) goto LAB_104a7e548;
                            }
                            else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_104a7e548:
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                        (lVar18,0x2c);
                            }
                            FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21
                                         );
                            uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                            param_3 = unaff_x23;
                            if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                              uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                              param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                            }
                            plVar7 = (long *)(param_3 + uVar13);
                            FUN_104a7e67c(param_4[1]);
                            unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                            if ((long *)0x1 < unaff_x19) {
                              do {
                                lVar18 = *unaff_x19;
                                cVar1 = '\x01';
                                bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                                if (bVar2) {
                                  *unaff_x19 = lVar18 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (lVar18 + -1 == 0) {
                                (*(code *)unaff_x19[1])();
                              }
                            }
                            unaff_x21 = unaff_x21 + 4;
                          } while (unaff_x21 != unaff_x22);
                        }
                        plVar17 = (long *)param_4[1];
                        uVar13 = plVar17[1];
                        plVar9 = (long *)*plVar17;
                        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                          plVar9 = plVar17;
                        }
                        *param_1 = (long)plVar9;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                        unaff_x20 = param_4;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                          *(long *)((long)register0x00000008 + -0x48)) {
                        return unaff_x19;
                      }
                      ___stack_chk_fail();
                      param_4 = plVar7;
                      if ((int)param_3 != 0) {
                        FUN_104bd46a0();
                        func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                        param_4 = plVar7;
                      }
                      unaff_x30 = FUN_104a7e63c;
                      param_2 = unaff_x19;
                      __Unwind_Resume();
                      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                      param_1 = extraout_x8_00;
                    }
                    if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                      lVar18 = *param_4;
                      if (*(char *)(lVar18 + 2) < '\0') {
                        if (*(long *)(lVar18 + 0x40) == 0) {
                          lVar20 = lVar18 + 0x49;
                          uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                        }
                        else {
                          uVar13 = *(ulong *)(lVar18 + 0x48);
                          lVar20 = *(long *)(lVar18 + 0x50);
                        }
                        *param_1 = lVar20;
                        param_1[1] = uVar13;
                        uVar8 = 1;
                      }
                      else {
                        uVar8 = 0;
                        *(undefined1 *)param_1 = 0;
                      }
                      *(undefined1 *)(param_1 + 2) = uVar8;
                      return param_4;
                    }
                    lVar18 = *param_4;
                    plVar9 = (long *)param_4[1];
                    plVar7 = (long *)(lVar18 + 0x1f0);
                    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                    *(code **)((long)register0x00000008 + -8) = unaff_x30;
                    *(undefined8 *)((long)register0x00000008 + -0x70) =
                         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                    *(undefined1 *)param_1 = 0;
                    *(undefined1 *)(param_1 + 2) = 0;
                    plVar17 = *(long **)(lVar18 + 0x1f8);
                    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                      lVar18 = 0;
                      bVar2 = false;
                      plVar19 = (long *)*param_1;
                      uVar13 = param_1[1];
                      do {
                        if (plVar17[lVar18 * 8 + 2] == 0) {
                          plVar7 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                          puVar10 = (undefined1 *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                        }
                        else {
                          puVar10 = (undefined1 *)plVar17[lVar18 * 8 + 3];
                          plVar7 = (long *)plVar17[lVar18 * 8 + 4];
                        }
                        if ((puVar10 == param_3) &&
                           (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                          if (bVar2) {
                            *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                            *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                            *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                            *(undefined8 *)((long)register0x00000008 + -200) = 1;
                            if (plVar17[lVar18 * 8 + 6] == 0) {
                              lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                              uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                            }
                            else {
                              uVar13 = plVar17[lVar18 * 8 + 7];
                              lVar20 = plVar17[lVar18 * 8 + 8];
                            }
                            *(long *)((long)register0x00000008 + -0x100) = lVar20;
                            *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                            plVar7 = (long *)((long)register0x00000008 + -0xa0);
                            func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),
                                                plVar7,(undefined1 *)
                                                       ((long)register0x00000008 + -0xd0),
                                                (undefined1 *)((long)register0x00000008 + -0x100));
                            if (*(char *)((long)plVar9 + 0x17) < '\0') {
                              plVar7 = (long *)*plVar9;
                              __ZdlPv();
                            }
                            uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                            plVar9[2] = uVar11;
                            lVar20 = *(long *)((long)register0x00000008 + -0x118);
                            plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                            *plVar9 = lVar20;
                            uVar13 = plVar9[1];
                            plVar19 = (long *)*plVar9;
                            if (-1 < (long)uVar11) {
                              uVar13 = uVar11 >> 0x38;
                              plVar19 = plVar9;
                            }
                            *param_1 = (long)plVar19;
                            param_1[1] = uVar13;
                          }
                          else {
                            if (plVar17[lVar18 * 8 + 6] == 0) {
                              plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                              uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                            }
                            else {
                              uVar13 = plVar17[lVar18 * 8 + 7];
                              plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                            }
                            *param_1 = (long)plVar19;
                            param_1[1] = uVar13;
                            bVar2 = true;
                            *(undefined1 *)(param_1 + 2) = 1;
                          }
                        }
                        lVar18 = lVar18 + 1;
                        do {
                          if (lVar18 != plVar17[1]) goto LAB_104adee4c;
                          lVar18 = 0;
                          plVar17 = (long *)*plVar17;
                        } while (plVar17 != (long *)0x0);
                        lVar18 = 0;
LAB_104adee4c:
                      } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                    }
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                        *(long *)((long)register0x00000008 + -0x70)) {
                      ___stack_chk_fail();
                      iVar4 = (int)plVar7;
                      __Unwind_Resume();
                      plVar7 = (long *)"";
                      if (iVar4 != 1) {
                        plVar7 = (long *)"<discarded-invalid-value>";
                      }
                      plVar9 = (long *)"application/grpc";
                      if (iVar4 != 0) {
                        plVar9 = plVar7;
                      }
                      return plVar9;
                    }
                    return plVar7;
                  }
                  pplVar5 = &plStack_80;
                  pplVar16 = &plStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
                    if (plStack_68 == (long *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar15 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar15 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_104a7df14;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      pplVar5 = (long **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      plStack_80 = (long *)pplVar5;
                      uStack_78 = uVar13;
LAB_104a7df14:
                      _memmove(pplVar5,puVar15,uVar13);
                      pplVar16 = pplVar5;
                    }
                    *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                    puVar12 = (undefined8 *)param_4[1];
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = plStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                    if ((long *)0x1 < plStack_68) {
                      do {
                        lVar18 = *plStack_68;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                        if (bVar2) {
                          *plStack_68 = lVar18 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar18 + -1 == 0) {
                        (*(code *)plStack_68[1])();
                      }
                    }
                    plVar9 = (long *)param_4[1];
                    uVar13 = plVar9[1];
                    plVar7 = (long *)*plVar9;
                    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                      plVar7 = plVar9;
                    }
                    *param_1 = (long)plVar7;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                    param_4 = plStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_104a7dfd8:
                  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
                  (*pcVar3)();
                }
                pplVar5 = &plStack_80;
                pplVar16 = &plStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
                  if (plStack_68 == (long *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_104a7dac8;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    pplVar5 = (long **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    plStack_80 = (long *)pplVar5;
                    uStack_78 = uVar13;
LAB_104a7dac8:
                    _memmove(pplVar5,puVar15,uVar13);
                    pplVar16 = pplVar5;
                  }
                  *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                  puVar12 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = plStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                  if ((long *)0x1 < plStack_68) {
                    do {
                      lVar18 = *plStack_68;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                      if (bVar2) {
                        *plStack_68 = lVar18 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar18 + -1 == 0) {
                      (*(code *)plStack_68[1])();
                    }
                  }
                  plVar9 = (long *)param_4[1];
                  uVar13 = plVar9[1];
                  plVar7 = (long *)*plVar9;
                  if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                    plVar7 = plVar9;
                  }
                  *param_1 = (long)plVar7;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                  param_4 = plStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_104a7db8c:
                func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
                (*pcVar3)();
              }
              pplVar5 = &plStack_80;
              pplVar16 = &plStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
                if (plStack_68 == (long *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_104a7d8c4;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  pplVar5 = (long **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  plStack_80 = (long *)pplVar5;
                  uStack_78 = uVar13;
LAB_104a7d8c4:
                  _memmove(pplVar5,puVar15,uVar13);
                  pplVar16 = pplVar5;
                }
                *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = plStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar18 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar18 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar18 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar9 = (long *)param_4[1];
                uVar13 = plVar9[1];
                plVar7 = (long *)*plVar9;
                if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                  plVar7 = plVar9;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar13;
                uVar8 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7d988:
              func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
              (*pcVar3)();
            }
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
              func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
              if (plStack_68 == (long *)0x0) {
                plVar7 = (long *)(ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                plVar7 = (long *)CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if ((long *)0x7ffffffffffffff7 < plVar7) goto LAB_104a7d77c;
              }
              if (plVar7 < (long *)0x17) {
                uStack_78 = CONCAT17((char)plVar7,(undefined7)uStack_78);
                pppppuVar6 = &ppppuStack_88;
                if (plVar7 != (long *)0x0) goto LAB_104a7d6b8;
              }
              else {
                uVar13 = ((ulong)plVar7 & 0x7ffffffffffffff8) + 8;
                if (((ulong)plVar7 | 7) != 0x17) {
                  uVar13 = (ulong)plVar7 | 7;
                }
                pppppuVar6 = (undefined8 *****)(uVar13 + 1);
                __Znwm();
                uStack_78 = uVar13 + 1 | 0x8000000000000000;
                ppppuStack_88 = pppppuVar6;
                plStack_80 = plVar7;
LAB_104a7d6b8:
                _memmove(pppppuVar6,puVar15,plVar7);
              }
              *(undefined1 *)((long)pppppuVar6 + (long)plVar7) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_78;
              puVar12[1] = plStack_80;
              *puVar12 = ppppuStack_88;
              uStack_78 = uStack_78 & 0xffffffffffffff;
              ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar18 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar18 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar18 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7d77c:
            func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
            (*pcVar3)();
          }
          pplVar5 = &plStack_80;
          pplVar16 = &plStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7d498;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              pplVar5 = (long **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              plStack_80 = (long *)pplVar5;
              uStack_78 = uVar13;
LAB_104a7d498:
              _memmove(pplVar5,puVar15,uVar13);
              pplVar16 = pplVar5;
            }
            *(undefined1 *)((long)pplVar16 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = plStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar18 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar18 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar18 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7d55c:
          func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
          (*pcVar3)();
        }
        pplVar5 = &plStack_80;
        pplVar16 = &plStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if (*(char *)*param_4 < '\0') {
          FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d324;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7d260;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            pplVar5 = (long **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            plStack_80 = (long *)pplVar5;
            uStack_78 = uVar13;
LAB_104a7d260:
            _memmove(pplVar5,puVar15,uVar13);
            pplVar16 = pplVar5;
          }
          *(undefined1 *)((long)pplVar16 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = plStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar18 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar18 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar18 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        else {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7d324:
        func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
        (*pcVar3)();
      }
      pplVar5 = &plStack_80;
      pplVar16 = &plStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)*param_4 >> 6 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
        plVar7 = param_4;
      }
      else {
        plVar7 = (long *)(ulong)((byte *)*param_4)[0x198];
        func_0x000100619828(&plStack_68,plVar7);
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d140;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7d0ac;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          pplVar5 = (long **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          plStack_80 = (long *)pplVar5;
          uStack_78 = uVar13;
LAB_104a7d0ac:
          plVar7 = (long *)pplVar5;
          _memmove(pplVar5,puVar15,uVar13);
          pplVar16 = pplVar5;
        }
        *(undefined1 *)((long)pplVar16 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          plVar7 = (long *)*puVar12;
          __ZdlPv(plVar7);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = plStack_80;
        plVar17 = (long *)param_4[1];
        uVar13 = plVar17[1];
        plVar9 = (long *)*plVar17;
        if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
          plVar9 = plVar17;
        }
        *param_1 = (long)plVar9;
        param_1[1] = uVar13;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return plVar7;
      }
      ___stack_chk_fail();
LAB_104a7d140:
      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
      (*pcVar3)();
    }
    pplVar5 = &plStack_80;
    pplVar16 = &plStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)*param_4 >> 5 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
      plVar7 = param_4;
    }
    else {
      plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x19c);
      func_0x000100619644(&plStack_68,plVar7);
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7cfb0;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7cf1c;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        pplVar5 = (long **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        plStack_80 = (long *)pplVar5;
        uStack_78 = uVar13;
LAB_104a7cf1c:
        plVar7 = (long *)pplVar5;
        _memmove(pplVar5,puVar15,uVar13);
        pplVar16 = pplVar5;
      }
      *(undefined1 *)((long)pplVar16 + uVar13) = 0;
      puVar14 = (ulong *)param_4[1];
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        plVar7 = (long *)*puVar14;
        __ZdlPv(plVar7);
      }
      puVar14[2] = uStack_70;
      puVar14[1] = uStack_78;
      *puVar14 = (ulong)plStack_80;
      plVar17 = (long *)param_4[1];
      uVar13 = plVar17[1];
      plVar9 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar9 = plVar17;
      }
      *param_1 = (long)plVar9;
      param_1[1] = uVar13;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar7;
    }
    ___stack_chk_fail();
LAB_104a7cfb0:
    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cfbc);
    (*pcVar3)();
  }
  pplVar5 = &plStack_80;
  pplVar16 = &plStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_4 >> 4 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
    plVar7 = param_4;
  }
  else {
    plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x1a0);
    FUN_104adf034(&plStack_68,plVar7);
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ce04;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7cd70;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      pplVar5 = (long **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      plStack_80 = (long *)pplVar5;
      uStack_78 = uVar13;
LAB_104a7cd70:
      plVar7 = (long *)pplVar5;
      _memmove(pplVar5,puVar15,uVar13);
      pplVar16 = pplVar5;
    }
    *(undefined1 *)((long)pplVar16 + uVar13) = 0;
    puVar14 = (ulong *)param_4[1];
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      plVar7 = (long *)*puVar14;
      __ZdlPv(plVar7);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)plStack_80;
    plVar17 = (long *)param_4[1];
    uVar13 = plVar17[1];
    plVar9 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar9 = plVar17;
    }
    *param_1 = (long)plVar9;
    param_1[1] = uVar13;
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
LAB_104a7ce04:
  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ce10);
  (*pcVar3)();
}



/* Entry: 104a7cca8; end: 104a7ce13;  */

void FUN_104a7cca8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_2 >> 4 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104adf034(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x1a0));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_104a7ce04;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_104a7cd70;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_104a7cd70:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ce04:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7ce10);
  (*pcVar2)();
}



/* Entry: 104a7ce14; end: 104a7ce53;  */

long * FUN_104a7ce14(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long **pplVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  undefined1 *unaff_x23;
  long **pplVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0xc) ||
     (*param_2 != 0x2d746e65746e6f63 || (int)param_2[1] != 0x65707974)) {
    if ((param_3 != (undefined1 *)0x2) || ((short)*param_2 != 0x6574)) {
      if ((param_3 != (undefined1 *)0xd) ||
         (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65)) {
        if ((param_3 != (undefined1 *)0x1e) ||
           (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
            param_2[2] != 0x722d676e69646f63) ||
            *(long *)((long)param_2 + 0x16) != 0x747365757165722d)) {
          if ((param_3 != (undefined1 *)0x14) ||
             ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
              (int)param_2[2] != 0x676e6964)) {
            if ((param_3 != (undefined1 *)0xb) ||
               (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63
               )) {
              if ((param_3 != (undefined1 *)0xc) ||
                 (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
                if ((param_3 == (undefined1 *)0x1a) &&
                   (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                    param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
                  pplVar5 = &plStack_80;
                  pplVar16 = &plStack_80;
                  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                    if (plStack_68 == (long *)0x0) {
                      uVar13 = (ulong)bStack_60;
                      puVar15 = &uStack_5f;
                    }
                    else {
                      uVar13 = CONCAT71(uStack_5f,bStack_60);
                      puVar15 = puStack_58;
                      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
                    }
                    if (uVar13 < 0x17) {
                      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                      if (uVar13 != 0) goto LAB_104a7dcf4;
                    }
                    else {
                      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                      if ((uVar13 | 7) != 0x17) {
                        uVar11 = uVar13 | 7;
                      }
                      pplVar5 = (long **)(uVar11 + 1);
                      __Znwm();
                      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                      plStack_80 = (long *)pplVar5;
                      uStack_78 = uVar13;
LAB_104a7dcf4:
                      _memmove(pplVar5,puVar15,uVar13);
                      pplVar16 = pplVar5;
                    }
                    *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                    puVar12 = (undefined8 *)param_4[1];
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      __ZdlPv(*puVar12);
                    }
                    puVar12[2] = uStack_70;
                    puVar12[1] = uStack_78;
                    *puVar12 = plStack_80;
                    uStack_70 = uStack_70 & 0xffffffffffffff;
                    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                    if ((long *)0x1 < plStack_68) {
                      do {
                        lVar18 = *plStack_68;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                        if (bVar2) {
                          *plStack_68 = lVar18 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar18 + -1 == 0) {
                        (*(code *)plStack_68[1])();
                      }
                    }
                    plVar9 = (long *)param_4[1];
                    uVar13 = plVar9[1];
                    plVar7 = (long *)*plVar9;
                    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                      plVar7 = plVar9;
                    }
                    *param_1 = (long)plVar7;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                    param_4 = plStack_68;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    return param_4;
                  }
                  ___stack_chk_fail();
LAB_104a7ddb8:
                  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
                  (*pcVar3)();
                }
                if ((param_3 != (undefined1 *)0x16) ||
                   ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                    *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
                  if ((param_3 == (undefined1 *)0xa) &&
                     (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x150) == 0) {
                        lVar20 = lVar18 + 0x159;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x158);
                        lVar20 = *(long *)(lVar18 + 0x160);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0xc) &&
                     (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                    lVar18 = *param_4;
                    if (*(char *)(lVar18 + 1) < '\0') {
                      if (*(long *)(lVar18 + 0x130) == 0) {
                        lVar20 = lVar18 + 0x139;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x138);
                        lVar20 = *(long *)(lVar18 + 0x140);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    else {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x110) == 0) {
                        lVar20 = lVar18 + 0x119;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x118);
                        lVar20 = *(long *)(lVar18 + 0x120);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0x19) &&
                     (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                      param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xf0) == 0) {
                        lVar20 = lVar18 + 0xf9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xf8);
                        lVar20 = *(long *)(lVar18 + 0x100);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0x15) &&
                     ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xd0) == 0) {
                        lVar20 = lVar18 + 0xd9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xd8);
                        lVar20 = *(long *)(lVar18 + 0xe0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0xe) &&
                     (*param_2 == 0x6172742d63707267 &&
                      *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0xb0) == 0) {
                        lVar20 = lVar18 + 0xb9;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0xb8);
                        lVar20 = *(long *)(lVar18 + 0xc0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0xd) &&
                     (*param_2 == 0x6761742d63707267 &&
                      *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                    lVar18 = *param_4;
                    if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      if (*(long *)(lVar18 + 0x90) == 0) {
                        lVar20 = lVar18 + 0x99;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x98);
                        lVar20 = *(long *)(lVar18 + 0xa0);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  if ((param_3 == (undefined1 *)0x13) &&
                     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                    unaff_x29 = &stack0xfffffffffffffff0;
                    if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                      *(undefined1 *)param_1 = 0;
                      *(undefined1 *)(param_1 + 2) = 0;
                      return param_4;
                    }
                    unaff_x30 = FUN_104a7e44c;
                    plVar7 = param_4;
                    _abort();
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                    param_2 = param_4;
                    param_4 = plVar7;
                    param_1 = extraout_x8;
                  }
                  if ((param_3 == (undefined1 *)0xb) &&
                     (*param_2 == 0x2d74736f632d626c &&
                      *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                    *(code **)((long)register0x00000008 + -8) = unaff_x30;
                    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                    *(undefined8 *)((long)register0x00000008 + -0x48) =
                         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                    lVar18 = *param_4;
                    unaff_x19 = param_4;
                    plVar7 = param_4;
                    if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    else {
                      puVar12 = (undefined8 *)param_4[1];
                      if (*(char *)((long)puVar12 + 0x17) < '\0') {
                        *(undefined1 *)*puVar12 = 0;
                        puVar12[1] = 0;
                      }
                      else {
                        *(undefined1 *)puVar12 = 0;
                        *(undefined1 *)((long)puVar12 + 0x17) = 0;
                      }
                      uVar13 = *(ulong *)(lVar18 + 0x60);
                      unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                      if ((uVar13 & 1) != 0) {
                        unaff_x21 = (undefined8 *)*unaff_x21;
                      }
                      if (1 < uVar13) {
                        unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                        do {
                          lVar18 = param_4[1];
                          if (*(char *)(lVar18 + 0x17) < '\0') {
                            if (*(long *)(lVar18 + 8) != 0) goto LAB_104a7e548;
                          }
                          else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_104a7e548:
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                      (lVar18,0x2c);
                          }
                          FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                          uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                          param_3 = unaff_x23;
                          if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                            uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                            param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                          }
                          plVar7 = (long *)(param_3 + uVar13);
                          FUN_104a7e67c(param_4[1]);
                          unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                          if ((long *)0x1 < unaff_x19) {
                            do {
                              lVar18 = *unaff_x19;
                              cVar1 = '\x01';
                              bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                              if (bVar2) {
                                *unaff_x19 = lVar18 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (lVar18 + -1 == 0) {
                              (*(code *)unaff_x19[1])();
                            }
                          }
                          unaff_x21 = unaff_x21 + 4;
                        } while (unaff_x21 != unaff_x22);
                      }
                      plVar17 = (long *)param_4[1];
                      uVar13 = plVar17[1];
                      plVar9 = (long *)*plVar17;
                      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                        plVar9 = plVar17;
                      }
                      *param_1 = (long)plVar9;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                      unaff_x20 = param_4;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                        *(long *)((long)register0x00000008 + -0x48)) {
                      return unaff_x19;
                    }
                    ___stack_chk_fail();
                    param_4 = plVar7;
                    if ((int)param_3 != 0) {
                      FUN_104bd46a0();
                      func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                      param_4 = plVar7;
                    }
                    unaff_x30 = FUN_104a7e63c;
                    param_2 = unaff_x19;
                    __Unwind_Resume();
                    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                    param_1 = extraout_x8_00;
                  }
                  if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                    lVar18 = *param_4;
                    if (*(char *)(lVar18 + 2) < '\0') {
                      if (*(long *)(lVar18 + 0x40) == 0) {
                        lVar20 = lVar18 + 0x49;
                        uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                      }
                      else {
                        uVar13 = *(ulong *)(lVar18 + 0x48);
                        lVar20 = *(long *)(lVar18 + 0x50);
                      }
                      *param_1 = lVar20;
                      param_1[1] = uVar13;
                      uVar8 = 1;
                    }
                    else {
                      uVar8 = 0;
                      *(undefined1 *)param_1 = 0;
                    }
                    *(undefined1 *)(param_1 + 2) = uVar8;
                    return param_4;
                  }
                  lVar18 = *param_4;
                  plVar9 = (long *)param_4[1];
                  plVar7 = (long *)(lVar18 + 0x1f0);
                  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                  *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                  *(code **)((long)register0x00000008 + -8) = unaff_x30;
                  *(undefined8 *)((long)register0x00000008 + -0x70) =
                       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                  *(undefined1 *)param_1 = 0;
                  *(undefined1 *)(param_1 + 2) = 0;
                  plVar17 = *(long **)(lVar18 + 0x1f8);
                  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                    lVar18 = 0;
                    bVar2 = false;
                    plVar19 = (long *)*param_1;
                    uVar13 = param_1[1];
                    do {
                      if (plVar17[lVar18 * 8 + 2] == 0) {
                        plVar7 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                        puVar10 = (undefined1 *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                      }
                      else {
                        puVar10 = (undefined1 *)plVar17[lVar18 * 8 + 3];
                        plVar7 = (long *)plVar17[lVar18 * 8 + 4];
                      }
                      if ((puVar10 == param_3) &&
                         (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                        if (bVar2) {
                          *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                          *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                          *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                          *(undefined8 *)((long)register0x00000008 + -200) = 1;
                          if (plVar17[lVar18 * 8 + 6] == 0) {
                            lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                            uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                          }
                          else {
                            uVar13 = plVar17[lVar18 * 8 + 7];
                            lVar20 = plVar17[lVar18 * 8 + 8];
                          }
                          *(long *)((long)register0x00000008 + -0x100) = lVar20;
                          *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                          plVar7 = (long *)((long)register0x00000008 + -0xa0);
                          func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),
                                              plVar7,(undefined1 *)
                                                     ((long)register0x00000008 + -0xd0),
                                              (undefined1 *)((long)register0x00000008 + -0x100));
                          if (*(char *)((long)plVar9 + 0x17) < '\0') {
                            plVar7 = (long *)*plVar9;
                            __ZdlPv();
                          }
                          uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                          plVar9[2] = uVar11;
                          lVar20 = *(long *)((long)register0x00000008 + -0x118);
                          plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                          *plVar9 = lVar20;
                          uVar13 = plVar9[1];
                          plVar19 = (long *)*plVar9;
                          if (-1 < (long)uVar11) {
                            uVar13 = uVar11 >> 0x38;
                            plVar19 = plVar9;
                          }
                          *param_1 = (long)plVar19;
                          param_1[1] = uVar13;
                        }
                        else {
                          if (plVar17[lVar18 * 8 + 6] == 0) {
                            plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                            uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                          }
                          else {
                            uVar13 = plVar17[lVar18 * 8 + 7];
                            plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                          }
                          *param_1 = (long)plVar19;
                          param_1[1] = uVar13;
                          bVar2 = true;
                          *(undefined1 *)(param_1 + 2) = 1;
                        }
                      }
                      lVar18 = lVar18 + 1;
                      do {
                        if (lVar18 != plVar17[1]) goto LAB_104adee4c;
                        lVar18 = 0;
                        plVar17 = (long *)*plVar17;
                      } while (plVar17 != (long *)0x0);
                      lVar18 = 0;
LAB_104adee4c:
                    } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                      *(long *)((long)register0x00000008 + -0x70)) {
                    ___stack_chk_fail();
                    iVar4 = (int)plVar7;
                    __Unwind_Resume();
                    plVar7 = (long *)"";
                    if (iVar4 != 1) {
                      plVar7 = (long *)"<discarded-invalid-value>";
                    }
                    plVar9 = (long *)"application/grpc";
                    if (iVar4 != 0) {
                      plVar9 = plVar7;
                    }
                    return plVar9;
                  }
                  return plVar7;
                }
                pplVar5 = &plStack_80;
                pplVar16 = &plStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
                  if (plStack_68 == (long *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_104a7df14;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    pplVar5 = (long **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    plStack_80 = (long *)pplVar5;
                    uStack_78 = uVar13;
LAB_104a7df14:
                    _memmove(pplVar5,puVar15,uVar13);
                    pplVar16 = pplVar5;
                  }
                  *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                  puVar12 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = plStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                  if ((long *)0x1 < plStack_68) {
                    do {
                      lVar18 = *plStack_68;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                      if (bVar2) {
                        *plStack_68 = lVar18 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar18 + -1 == 0) {
                      (*(code *)plStack_68[1])();
                    }
                  }
                  plVar9 = (long *)param_4[1];
                  uVar13 = plVar9[1];
                  plVar7 = (long *)*plVar9;
                  if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                    plVar7 = plVar9;
                  }
                  *param_1 = (long)plVar7;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                  param_4 = plStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_104a7dfd8:
                func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
                (*pcVar3)();
              }
              pplVar5 = &plStack_80;
              pplVar16 = &plStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
                if (plStack_68 == (long *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_104a7dac8;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  pplVar5 = (long **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  plStack_80 = (long *)pplVar5;
                  uStack_78 = uVar13;
LAB_104a7dac8:
                  _memmove(pplVar5,puVar15,uVar13);
                  pplVar16 = pplVar5;
                }
                *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = plStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar18 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar18 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar18 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar9 = (long *)param_4[1];
                uVar13 = plVar9[1];
                plVar7 = (long *)*plVar9;
                if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                  plVar7 = plVar9;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar13;
                uVar8 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7db8c:
              func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
              (*pcVar3)();
            }
            pplVar5 = &plStack_80;
            pplVar16 = &plStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
              if (plStack_68 == (long *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_104a7d8c4;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                pplVar5 = (long **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                plStack_80 = (long *)pplVar5;
                uStack_78 = uVar13;
LAB_104a7d8c4:
                _memmove(pplVar5,puVar15,uVar13);
                pplVar16 = pplVar5;
              }
              *(undefined1 *)((long)pplVar16 + uVar13) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = plStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar18 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar18 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar18 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7d988:
            func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
            (*pcVar3)();
          }
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
            func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
            if (plStack_68 == (long *)0x0) {
              plVar7 = (long *)(ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              plVar7 = (long *)CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if ((long *)0x7ffffffffffffff7 < plVar7) goto LAB_104a7d77c;
            }
            if (plVar7 < (long *)0x17) {
              uStack_78 = CONCAT17((char)plVar7,(undefined7)uStack_78);
              pppppuVar6 = &ppppuStack_88;
              if (plVar7 != (long *)0x0) goto LAB_104a7d6b8;
            }
            else {
              uVar13 = ((ulong)plVar7 & 0x7ffffffffffffff8) + 8;
              if (((ulong)plVar7 | 7) != 0x17) {
                uVar13 = (ulong)plVar7 | 7;
              }
              pppppuVar6 = (undefined8 *****)(uVar13 + 1);
              __Znwm();
              uStack_78 = uVar13 + 1 | 0x8000000000000000;
              ppppuStack_88 = pppppuVar6;
              plStack_80 = plVar7;
LAB_104a7d6b8:
              _memmove(pppppuVar6,puVar15,plVar7);
            }
            *(undefined1 *)((long)pppppuVar6 + (long)plVar7) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_78;
            puVar12[1] = plStack_80;
            *puVar12 = ppppuStack_88;
            uStack_78 = uStack_78 & 0xffffffffffffff;
            ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar18 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar18 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar18 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7d77c:
          func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
          (*pcVar3)();
        }
        pplVar5 = &plStack_80;
        pplVar16 = &plStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7d498;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            pplVar5 = (long **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            plStack_80 = (long *)pplVar5;
            uStack_78 = uVar13;
LAB_104a7d498:
            _memmove(pplVar5,puVar15,uVar13);
            pplVar16 = pplVar5;
          }
          *(undefined1 *)((long)pplVar16 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = plStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar18 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar18 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar18 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7d55c:
        func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
        (*pcVar3)();
      }
      pplVar5 = &plStack_80;
      pplVar16 = &plStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (*(char *)*param_4 < '\0') {
        FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d324;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7d260;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          pplVar5 = (long **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          plStack_80 = (long *)pplVar5;
          uStack_78 = uVar13;
LAB_104a7d260:
          _memmove(pplVar5,puVar15,uVar13);
          pplVar16 = pplVar5;
        }
        *(undefined1 *)((long)pplVar16 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = plStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar18 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar18 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar18 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar9 = (long *)param_4[1];
        uVar13 = plVar9[1];
        plVar7 = (long *)*plVar9;
        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
          plVar7 = plVar9;
        }
        *param_1 = (long)plVar7;
        param_1[1] = uVar13;
        uVar8 = 1;
        param_4 = plStack_68;
      }
      else {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7d324:
      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
      (*pcVar3)();
    }
    pplVar5 = &plStack_80;
    pplVar16 = &plStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)*param_4 >> 6 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
      plVar7 = param_4;
    }
    else {
      plVar7 = (long *)(ulong)((byte *)*param_4)[0x198];
      func_0x000100619828(&plStack_68,plVar7);
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d140;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7d0ac;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        pplVar5 = (long **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        plStack_80 = (long *)pplVar5;
        uStack_78 = uVar13;
LAB_104a7d0ac:
        plVar7 = (long *)pplVar5;
        _memmove(pplVar5,puVar15,uVar13);
        pplVar16 = pplVar5;
      }
      *(undefined1 *)((long)pplVar16 + uVar13) = 0;
      puVar14 = (ulong *)param_4[1];
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        plVar7 = (long *)*puVar14;
        __ZdlPv(plVar7);
      }
      puVar14[2] = uStack_70;
      puVar14[1] = uStack_78;
      *puVar14 = (ulong)plStack_80;
      plVar17 = (long *)param_4[1];
      uVar13 = plVar17[1];
      plVar9 = (long *)*plVar17;
      if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
        plVar9 = plVar17;
      }
      *param_1 = (long)plVar9;
      param_1[1] = uVar13;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar7;
    }
    ___stack_chk_fail();
LAB_104a7d140:
    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
    (*pcVar3)();
  }
  pplVar5 = &plStack_80;
  pplVar16 = &plStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_4 >> 5 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
    plVar7 = param_4;
  }
  else {
    plVar7 = (long *)(ulong)*(uint *)((byte *)*param_4 + 0x19c);
    func_0x000100619644(&plStack_68,plVar7);
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7cfb0;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7cf1c;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      pplVar5 = (long **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      plStack_80 = (long *)pplVar5;
      uStack_78 = uVar13;
LAB_104a7cf1c:
      plVar7 = (long *)pplVar5;
      _memmove(pplVar5,puVar15,uVar13);
      pplVar16 = pplVar5;
    }
    *(undefined1 *)((long)pplVar16 + uVar13) = 0;
    puVar14 = (ulong *)param_4[1];
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      plVar7 = (long *)*puVar14;
      __ZdlPv(plVar7);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)plStack_80;
    plVar17 = (long *)param_4[1];
    uVar13 = plVar17[1];
    plVar9 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar9 = plVar17;
    }
    *param_1 = (long)plVar9;
    param_1[1] = uVar13;
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
LAB_104a7cfb0:
  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7cfbc);
  (*pcVar3)();
}



/* Entry: 104a7ce54; end: 104a7cfbf;  */

void FUN_104a7ce54(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_2 >> 5 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x000100619644(&lStack_68,*(undefined4 *)((byte *)*param_2 + 0x19c));
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_104a7cfb0;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_104a7cf1c;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_104a7cf1c:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7cfb0:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7cfbc);
  (*pcVar2)();
}



/* Entry: 104a7cfc0; end: 104a7cfe3;  */

long * FUN_104a7cfc0(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long **pplVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar14;
  undefined8 *unaff_x22;
  undefined7 *puVar15;
  undefined1 *unaff_x23;
  long **pplVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar20;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x2) || ((short)*param_2 != 0x6574)) {
    if ((param_3 != (undefined1 *)0xd) ||
       (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65)) {
      if ((param_3 != (undefined1 *)0x1e) ||
         (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
          param_2[2] != 0x722d676e69646f63) || *(long *)((long)param_2 + 0x16) != 0x747365757165722d
         )) {
        if ((param_3 != (undefined1 *)0x14) ||
           ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
            (int)param_2[2] != 0x676e6964)) {
          if ((param_3 != (undefined1 *)0xb) ||
             (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63))
          {
            if ((param_3 != (undefined1 *)0xc) ||
               (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
              if ((param_3 == (undefined1 *)0x1a) &&
                 (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                  param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
                pplVar5 = &plStack_80;
                pplVar16 = &plStack_80;
                lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                  if (plStack_68 == (long *)0x0) {
                    uVar13 = (ulong)bStack_60;
                    puVar15 = &uStack_5f;
                  }
                  else {
                    uVar13 = CONCAT71(uStack_5f,bStack_60);
                    puVar15 = puStack_58;
                    if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
                  }
                  if (uVar13 < 0x17) {
                    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                    if (uVar13 != 0) goto LAB_104a7dcf4;
                  }
                  else {
                    uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                    if ((uVar13 | 7) != 0x17) {
                      uVar11 = uVar13 | 7;
                    }
                    pplVar5 = (long **)(uVar11 + 1);
                    __Znwm();
                    uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                    plStack_80 = (long *)pplVar5;
                    uStack_78 = uVar13;
LAB_104a7dcf4:
                    _memmove(pplVar5,puVar15,uVar13);
                    pplVar16 = pplVar5;
                  }
                  *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                  puVar12 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    __ZdlPv(*puVar12);
                  }
                  puVar12[2] = uStack_70;
                  puVar12[1] = uStack_78;
                  *puVar12 = plStack_80;
                  uStack_70 = uStack_70 & 0xffffffffffffff;
                  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                  if ((long *)0x1 < plStack_68) {
                    do {
                      lVar18 = *plStack_68;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                      if (bVar2) {
                        *plStack_68 = lVar18 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar18 + -1 == 0) {
                      (*(code *)plStack_68[1])();
                    }
                  }
                  plVar9 = (long *)param_4[1];
                  uVar13 = plVar9[1];
                  plVar7 = (long *)*plVar9;
                  if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                    plVar7 = plVar9;
                  }
                  *param_1 = (long)plVar7;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                  param_4 = plStack_68;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  return param_4;
                }
                ___stack_chk_fail();
LAB_104a7ddb8:
                func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
                (*pcVar3)();
              }
              if ((param_3 != (undefined1 *)0x16) ||
                 ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                  *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
                if ((param_3 == (undefined1 *)0xa) &&
                   (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 1) >> 6 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x150) == 0) {
                      lVar20 = lVar18 + 0x159;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x158);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x158);
                      lVar20 = *(long *)(lVar18 + 0x160);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0xc) &&
                   (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                  lVar18 = *param_4;
                  if (*(char *)(lVar18 + 1) < '\0') {
                    if (*(long *)(lVar18 + 0x130) == 0) {
                      lVar20 = lVar18 + 0x139;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x138);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x138);
                      lVar20 = *(long *)(lVar18 + 0x140);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 2) & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x110) == 0) {
                      lVar20 = lVar18 + 0x119;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x118);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x118);
                      lVar20 = *(long *)(lVar18 + 0x120);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0x19) &&
                   (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                    param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 2) >> 1 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xf0) == 0) {
                      lVar20 = lVar18 + 0xf9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xf8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xf8);
                      lVar20 = *(long *)(lVar18 + 0x100);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0x15) &&
                   ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                    *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 2) >> 2 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xd0) == 0) {
                      lVar20 = lVar18 + 0xd9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xd8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xd8);
                      lVar20 = *(long *)(lVar18 + 0xe0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0xe) &&
                   (*param_2 == 0x6172742d63707267 &&
                    *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 2) >> 3 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0xb0) == 0) {
                      lVar20 = lVar18 + 0xb9;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0xb8);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0xb8);
                      lVar20 = *(long *)(lVar18 + 0xc0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0xd) &&
                   (*param_2 == 0x6761742d63707267 &&
                    *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                  lVar18 = *param_4;
                  if ((*(byte *)(lVar18 + 2) >> 4 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    if (*(long *)(lVar18 + 0x90) == 0) {
                      lVar20 = lVar18 + 0x99;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x98);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x98);
                      lVar20 = *(long *)(lVar18 + 0xa0);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                if ((param_3 == (undefined1 *)0x13) &&
                   ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                    *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                  unaff_x29 = &stack0xfffffffffffffff0;
                  if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                    *(undefined1 *)param_1 = 0;
                    *(undefined1 *)(param_1 + 2) = 0;
                    return param_4;
                  }
                  unaff_x30 = FUN_104a7e44c;
                  plVar7 = param_4;
                  _abort();
                  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                  param_2 = param_4;
                  param_4 = plVar7;
                  param_1 = extraout_x8;
                }
                if ((param_3 == (undefined1 *)0xb) &&
                   (*param_2 == 0x2d74736f632d626c &&
                    *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                  *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                  *(code **)((long)register0x00000008 + -8) = unaff_x30;
                  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                  *(undefined8 *)((long)register0x00000008 + -0x48) =
                       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                  lVar18 = *param_4;
                  unaff_x19 = param_4;
                  plVar7 = param_4;
                  if ((*(byte *)(lVar18 + 2) >> 6 & 1) == 0) {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  else {
                    puVar12 = (undefined8 *)param_4[1];
                    if (*(char *)((long)puVar12 + 0x17) < '\0') {
                      *(undefined1 *)*puVar12 = 0;
                      puVar12[1] = 0;
                    }
                    else {
                      *(undefined1 *)puVar12 = 0;
                      *(undefined1 *)((long)puVar12 + 0x17) = 0;
                    }
                    uVar13 = *(ulong *)(lVar18 + 0x60);
                    unaff_x21 = (undefined8 *)(lVar18 + 0x68);
                    if ((uVar13 & 1) != 0) {
                      unaff_x21 = (undefined8 *)*unaff_x21;
                    }
                    if (1 < uVar13) {
                      unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                      do {
                        lVar18 = param_4[1];
                        if (*(char *)(lVar18 + 0x17) < '\0') {
                          if (*(long *)(lVar18 + 8) != 0) goto LAB_104a7e548;
                        }
                        else if (*(char *)(lVar18 + 0x17) != '\0') {
LAB_104a7e548:
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (lVar18,0x2c);
                        }
                        FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                        uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                        param_3 = unaff_x23;
                        if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                          uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                          param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                        }
                        plVar7 = (long *)(param_3 + uVar13);
                        FUN_104a7e67c(param_4[1]);
                        unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                        if ((long *)0x1 < unaff_x19) {
                          do {
                            lVar18 = *unaff_x19;
                            cVar1 = '\x01';
                            bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                            if (bVar2) {
                              *unaff_x19 = lVar18 + -1;
                              cVar1 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar1 != '\0');
                          if (lVar18 + -1 == 0) {
                            (*(code *)unaff_x19[1])();
                          }
                        }
                        unaff_x21 = unaff_x21 + 4;
                      } while (unaff_x21 != unaff_x22);
                    }
                    plVar17 = (long *)param_4[1];
                    uVar13 = plVar17[1];
                    plVar9 = (long *)*plVar17;
                    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
                      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
                      plVar9 = plVar17;
                    }
                    *param_1 = (long)plVar9;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                    unaff_x20 = param_4;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                      *(long *)((long)register0x00000008 + -0x48)) {
                    return unaff_x19;
                  }
                  ___stack_chk_fail();
                  param_4 = plVar7;
                  if ((int)param_3 != 0) {
                    FUN_104bd46a0();
                    func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                    param_4 = plVar7;
                  }
                  unaff_x30 = FUN_104a7e63c;
                  param_2 = unaff_x19;
                  __Unwind_Resume();
                  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                  param_1 = extraout_x8_00;
                }
                if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                  lVar18 = *param_4;
                  if (*(char *)(lVar18 + 2) < '\0') {
                    if (*(long *)(lVar18 + 0x40) == 0) {
                      lVar20 = lVar18 + 0x49;
                      uVar13 = (ulong)*(byte *)(lVar18 + 0x48);
                    }
                    else {
                      uVar13 = *(ulong *)(lVar18 + 0x48);
                      lVar20 = *(long *)(lVar18 + 0x50);
                    }
                    *param_1 = lVar20;
                    param_1[1] = uVar13;
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = 0;
                    *(undefined1 *)param_1 = 0;
                  }
                  *(undefined1 *)(param_1 + 2) = uVar8;
                  return param_4;
                }
                lVar18 = *param_4;
                plVar9 = (long *)param_4[1];
                plVar7 = (long *)(lVar18 + 0x1f0);
                *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
                *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
                *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(code **)((long)register0x00000008 + -8) = unaff_x30;
                *(undefined8 *)((long)register0x00000008 + -0x70) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                plVar17 = *(long **)(lVar18 + 0x1f8);
                if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                  lVar18 = 0;
                  bVar2 = false;
                  plVar19 = (long *)*param_1;
                  uVar13 = param_1[1];
                  do {
                    if (plVar17[lVar18 * 8 + 2] == 0) {
                      plVar7 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x19);
                      puVar10 = (undefined1 *)(ulong)*(byte *)(plVar17 + lVar18 * 8 + 3);
                    }
                    else {
                      puVar10 = (undefined1 *)plVar17[lVar18 * 8 + 3];
                      plVar7 = (long *)plVar17[lVar18 * 8 + 4];
                    }
                    if ((puVar10 == param_3) && (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0))
                    {
                      if (bVar2) {
                        *(long **)((long)register0x00000008 + -0xa0) = plVar19;
                        *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                        *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                        *(undefined8 *)((long)register0x00000008 + -200) = 1;
                        if (plVar17[lVar18 * 8 + 6] == 0) {
                          lVar20 = (long)plVar17 + lVar18 * 0x40 + 0x39;
                          uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                        }
                        else {
                          uVar13 = plVar17[lVar18 * 8 + 7];
                          lVar20 = plVar17[lVar18 * 8 + 8];
                        }
                        *(long *)((long)register0x00000008 + -0x100) = lVar20;
                        *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                        plVar7 = (long *)((long)register0x00000008 + -0xa0);
                        func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar7
                                            ,(undefined1 *)((long)register0x00000008 + -0xd0),
                                            (undefined1 *)((long)register0x00000008 + -0x100));
                        if (*(char *)((long)plVar9 + 0x17) < '\0') {
                          plVar7 = (long *)*plVar9;
                          __ZdlPv();
                        }
                        uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                        plVar9[2] = uVar11;
                        lVar20 = *(long *)((long)register0x00000008 + -0x118);
                        plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                        *plVar9 = lVar20;
                        uVar13 = plVar9[1];
                        plVar19 = (long *)*plVar9;
                        if (-1 < (long)uVar11) {
                          uVar13 = uVar11 >> 0x38;
                          plVar19 = plVar9;
                        }
                        *param_1 = (long)plVar19;
                        param_1[1] = uVar13;
                      }
                      else {
                        if (plVar17[lVar18 * 8 + 6] == 0) {
                          plVar19 = (long *)((long)plVar17 + lVar18 * 0x40 + 0x39);
                          uVar13 = (ulong)*(byte *)(plVar17 + lVar18 * 8 + 7);
                        }
                        else {
                          uVar13 = plVar17[lVar18 * 8 + 7];
                          plVar19 = (long *)plVar17[lVar18 * 8 + 8];
                        }
                        *param_1 = (long)plVar19;
                        param_1[1] = uVar13;
                        bVar2 = true;
                        *(undefined1 *)(param_1 + 2) = 1;
                      }
                    }
                    lVar18 = lVar18 + 1;
                    do {
                      if (lVar18 != plVar17[1]) goto LAB_104adee4c;
                      lVar18 = 0;
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != (long *)0x0);
                    lVar18 = 0;
LAB_104adee4c:
                  } while ((plVar17 != (long *)0x0) || (lVar18 != 0));
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                    *(long *)((long)register0x00000008 + -0x70)) {
                  ___stack_chk_fail();
                  iVar4 = (int)plVar7;
                  __Unwind_Resume();
                  plVar7 = (long *)"";
                  if (iVar4 != 1) {
                    plVar7 = (long *)"<discarded-invalid-value>";
                  }
                  plVar9 = (long *)"application/grpc";
                  if (iVar4 != 0) {
                    plVar9 = plVar7;
                  }
                  return plVar9;
                }
                return plVar7;
              }
              pplVar5 = &plStack_80;
              pplVar16 = &plStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
                if (plStack_68 == (long *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar15 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar15 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_104a7df14;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  pplVar5 = (long **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  plStack_80 = (long *)pplVar5;
                  uStack_78 = uVar13;
LAB_104a7df14:
                  _memmove(pplVar5,puVar15,uVar13);
                  pplVar16 = pplVar5;
                }
                *(undefined1 *)((long)pplVar16 + uVar13) = 0;
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = plStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar18 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar18 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar18 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar9 = (long *)param_4[1];
                uVar13 = plVar9[1];
                plVar7 = (long *)*plVar9;
                if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                  plVar7 = plVar9;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar13;
                uVar8 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7dfd8:
              func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
              (*pcVar3)();
            }
            pplVar5 = &plStack_80;
            pplVar16 = &plStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
              if (plStack_68 == (long *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar15 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar15 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_104a7dac8;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                pplVar5 = (long **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                plStack_80 = (long *)pplVar5;
                uStack_78 = uVar13;
LAB_104a7dac8:
                _memmove(pplVar5,puVar15,uVar13);
                pplVar16 = pplVar5;
              }
              *(undefined1 *)((long)pplVar16 + uVar13) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = plStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar18 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar18 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar18 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7db8c:
            func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
            (*pcVar3)();
          }
          pplVar5 = &plStack_80;
          pplVar16 = &plStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar15 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar15 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7d8c4;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              pplVar5 = (long **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              plStack_80 = (long *)pplVar5;
              uStack_78 = uVar13;
LAB_104a7d8c4:
              _memmove(pplVar5,puVar15,uVar13);
              pplVar16 = pplVar5;
            }
            *(undefined1 *)((long)pplVar16 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = plStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar18 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar18 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar18 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7d988:
          func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
          (*pcVar3)();
        }
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
          func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
          if (plStack_68 == (long *)0x0) {
            plVar7 = (long *)(ulong)bStack_60;
            puVar15 = &uStack_5f;
          }
          else {
            plVar7 = (long *)CONCAT71(uStack_5f,bStack_60);
            puVar15 = puStack_58;
            if ((long *)0x7ffffffffffffff7 < plVar7) goto LAB_104a7d77c;
          }
          if (plVar7 < (long *)0x17) {
            uStack_78 = CONCAT17((char)plVar7,(undefined7)uStack_78);
            pppppuVar6 = &ppppuStack_88;
            if (plVar7 != (long *)0x0) goto LAB_104a7d6b8;
          }
          else {
            uVar13 = ((ulong)plVar7 & 0x7ffffffffffffff8) + 8;
            if (((ulong)plVar7 | 7) != 0x17) {
              uVar13 = (ulong)plVar7 | 7;
            }
            pppppuVar6 = (undefined8 *****)(uVar13 + 1);
            __Znwm();
            uStack_78 = uVar13 + 1 | 0x8000000000000000;
            ppppuStack_88 = pppppuVar6;
            plStack_80 = plVar7;
LAB_104a7d6b8:
            _memmove(pppppuVar6,puVar15,plVar7);
          }
          *(undefined1 *)((long)pppppuVar6 + (long)plVar7) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_78;
          puVar12[1] = plStack_80;
          *puVar12 = ppppuStack_88;
          uStack_78 = uStack_78 & 0xffffffffffffff;
          ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar18 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar18 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar18 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7d77c:
        func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
        (*pcVar3)();
      }
      pplVar5 = &plStack_80;
      pplVar16 = &plStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar15 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar15 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7d498;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          pplVar5 = (long **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          plStack_80 = (long *)pplVar5;
          uStack_78 = uVar13;
LAB_104a7d498:
          _memmove(pplVar5,puVar15,uVar13);
          pplVar16 = pplVar5;
        }
        *(undefined1 *)((long)pplVar16 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = plStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar18 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar18 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar18 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar9 = (long *)param_4[1];
        uVar13 = plVar9[1];
        plVar7 = (long *)*plVar9;
        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
          plVar7 = plVar9;
        }
        *param_1 = (long)plVar7;
        param_1[1] = uVar13;
        uVar8 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7d55c:
      func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
      (*pcVar3)();
    }
    pplVar5 = &plStack_80;
    pplVar16 = &plStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (*(char *)*param_4 < '\0') {
      FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar15 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar15 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d324;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7d260;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        pplVar5 = (long **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        plStack_80 = (long *)pplVar5;
        uStack_78 = uVar13;
LAB_104a7d260:
        _memmove(pplVar5,puVar15,uVar13);
        pplVar16 = pplVar5;
      }
      *(undefined1 *)((long)pplVar16 + uVar13) = 0;
      puVar12 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = plStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar18 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar18 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar9 = (long *)param_4[1];
      uVar13 = plVar9[1];
      plVar7 = (long *)*plVar9;
      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
        plVar7 = plVar9;
      }
      *param_1 = (long)plVar7;
      param_1[1] = uVar13;
      uVar8 = 1;
      param_4 = plStack_68;
    }
    else {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7d324:
    func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
    (*pcVar3)();
  }
  pplVar5 = &plStack_80;
  pplVar16 = &plStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_4 >> 6 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
    plVar7 = param_4;
  }
  else {
    plVar7 = (long *)(ulong)((byte *)*param_4)[0x198];
    func_0x000100619828(&plStack_68,plVar7);
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar15 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar15 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d140;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7d0ac;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      pplVar5 = (long **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      plStack_80 = (long *)pplVar5;
      uStack_78 = uVar13;
LAB_104a7d0ac:
      plVar7 = (long *)pplVar5;
      _memmove(pplVar5,puVar15,uVar13);
      pplVar16 = pplVar5;
    }
    *(undefined1 *)((long)pplVar16 + uVar13) = 0;
    puVar14 = (ulong *)param_4[1];
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      plVar7 = (long *)*puVar14;
      __ZdlPv(plVar7);
    }
    puVar14[2] = uStack_70;
    puVar14[1] = uStack_78;
    *puVar14 = (ulong)plStack_80;
    plVar17 = (long *)param_4[1];
    uVar13 = plVar17[1];
    plVar9 = (long *)*plVar17;
    if (-1 < (char)*(byte *)((long)plVar17 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar17 + 0x17);
      plVar9 = plVar17;
    }
    *param_1 = (long)plVar9;
    param_1[1] = uVar13;
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
LAB_104a7d140:
  func_0x000104a6fa5c(&plStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
  (*pcVar3)();
}



/* Entry: 104a7cfe4; end: 104a7d14f;  */

void FUN_104a7cfe4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined7 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar3 = &puStack_80;
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)*param_2 >> 6 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x000100619828(&lStack_68,((byte *)*param_2)[0x198]);
    if (lStack_68 == 0) {
      uVar6 = (ulong)bStack_60;
      puVar8 = &uStack_5f;
    }
    else {
      uVar6 = CONCAT71(uStack_5f,bStack_60);
      puVar8 = puStack_58;
      if (0x7ffffffffffffff7 < uVar6) goto LAB_104a7d140;
    }
    if (uVar6 < 0x17) {
      uStack_70 = CONCAT17((char)uVar6,(undefined7)uStack_70);
      if (uVar6 != 0) goto LAB_104a7d0ac;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = uVar6 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = uVar6;
LAB_104a7d0ac:
      _memmove(ppuVar3,puVar8,uVar6);
      ppuVar9 = ppuVar3;
    }
    *(undefined1 *)((long)ppuVar9 + uVar6) = 0;
    puVar7 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      __ZdlPv(*puVar7);
    }
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = puStack_80;
    puVar5 = (undefined8 *)param_2[1];
    uVar6 = puVar5[1];
    puVar7 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar7 = puVar5;
    }
    *param_1 = puVar7;
    param_1[1] = uVar6;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7d140:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a7d14c);
  (*pcVar2)();
}



/* Entry: 104a7d150; end: 104a7d197;  */

long * FUN_104a7d150(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar14;
  undefined1 *unaff_x23;
  undefined1 **ppuVar15;
  long *plVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar19;
  undefined8 ****ppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0xd) ||
     (*param_2 != 0x636e652d63707267 || *(long *)((long)param_2 + 5) != 0x676e69646f636e65)) {
    if ((param_3 != (undefined1 *)0x1e) ||
       (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
        param_2[2] != 0x722d676e69646f63) || *(long *)((long)param_2 + 0x16) != 0x747365757165722d))
    {
      if ((param_3 != (undefined1 *)0x14) ||
         ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
          (int)param_2[2] != 0x676e6964)) {
        if ((param_3 != (undefined1 *)0xb) ||
           (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
          if ((param_3 != (undefined1 *)0xc) ||
             (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
            if ((param_3 == (undefined1 *)0x1a) &&
               (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
                param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
              ppuVar5 = &puStack_80;
              ppuVar15 = &puStack_80;
              lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
              if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
                if (plStack_68 == (long *)0x0) {
                  uVar13 = (ulong)bStack_60;
                  puVar14 = &uStack_5f;
                }
                else {
                  uVar13 = CONCAT71(uStack_5f,bStack_60);
                  puVar14 = puStack_58;
                  if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
                }
                if (uVar13 < 0x17) {
                  uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                  if (uVar13 != 0) goto LAB_104a7dcf4;
                }
                else {
                  uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                  if ((uVar13 | 7) != 0x17) {
                    uVar11 = uVar13 | 7;
                  }
                  ppuVar5 = (undefined1 **)(uVar11 + 1);
                  __Znwm();
                  uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                  puStack_80 = (undefined1 *)ppuVar5;
                  uStack_78 = uVar13;
LAB_104a7dcf4:
                  _memmove(ppuVar5,puVar14,uVar13);
                  ppuVar15 = ppuVar5;
                }
                *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  __ZdlPv(*puVar12);
                }
                puVar12[2] = uStack_70;
                puVar12[1] = uStack_78;
                *puVar12 = puStack_80;
                uStack_70 = uStack_70 & 0xffffffffffffff;
                puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
                if ((long *)0x1 < plStack_68) {
                  do {
                    lVar17 = *plStack_68;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                    if (bVar2) {
                      *plStack_68 = lVar17 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar17 + -1 == 0) {
                    (*(code *)plStack_68[1])();
                  }
                }
                plVar9 = (long *)param_4[1];
                uVar13 = plVar9[1];
                plVar7 = (long *)*plVar9;
                if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                  plVar7 = plVar9;
                }
                *param_1 = (long)plVar7;
                param_1[1] = uVar13;
                uVar8 = 1;
                param_4 = plStack_68;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return param_4;
              }
              ___stack_chk_fail();
LAB_104a7ddb8:
              func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
              (*pcVar3)();
            }
            if ((param_3 != (undefined1 *)0x16) ||
               ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
                *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
              if ((param_3 == (undefined1 *)0xa) &&
                 (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 1) >> 6 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0x150) == 0) {
                    lVar19 = lVar17 + 0x159;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0x158);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0x158);
                    lVar19 = *(long *)(lVar17 + 0x160);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0xc) &&
                 (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
                lVar17 = *param_4;
                if (*(char *)(lVar17 + 1) < '\0') {
                  if (*(long *)(lVar17 + 0x130) == 0) {
                    lVar19 = lVar17 + 0x139;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0x138);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0x138);
                    lVar19 = *(long *)(lVar17 + 0x140);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                else {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 2) & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0x110) == 0) {
                    lVar19 = lVar17 + 0x119;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0x118);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0x118);
                    lVar19 = *(long *)(lVar17 + 0x120);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0x19) &&
                 (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                  param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 2) >> 1 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0xf0) == 0) {
                    lVar19 = lVar17 + 0xf9;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0xf8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0xf8);
                    lVar19 = *(long *)(lVar17 + 0x100);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0x15) &&
                 ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                  *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 2) >> 2 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0xd0) == 0) {
                    lVar19 = lVar17 + 0xd9;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0xd8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0xd8);
                    lVar19 = *(long *)(lVar17 + 0xe0);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0xe) &&
                 (*param_2 == 0x6172742d63707267 &&
                  *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 2) >> 3 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0xb0) == 0) {
                    lVar19 = lVar17 + 0xb9;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0xb8);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0xb8);
                    lVar19 = *(long *)(lVar17 + 0xc0);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0xd) &&
                 (*param_2 == 0x6761742d63707267 &&
                  *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
                lVar17 = *param_4;
                if ((*(byte *)(lVar17 + 2) >> 4 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  if (*(long *)(lVar17 + 0x90) == 0) {
                    lVar19 = lVar17 + 0x99;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0x98);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0x98);
                    lVar19 = *(long *)(lVar17 + 0xa0);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              if ((param_3 == (undefined1 *)0x13) &&
                 ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                  *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
                unaff_x29 = &stack0xfffffffffffffff0;
                if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                  *(undefined1 *)param_1 = 0;
                  *(undefined1 *)(param_1 + 2) = 0;
                  return param_4;
                }
                unaff_x30 = FUN_104a7e44c;
                plVar7 = param_4;
                _abort();
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                param_2 = param_4;
                param_4 = plVar7;
                param_1 = extraout_x8;
              }
              if ((param_3 == (undefined1 *)0xb) &&
                 (*param_2 == 0x2d74736f632d626c &&
                  *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
                *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(code **)((long)register0x00000008 + -8) = unaff_x30;
                unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                lVar17 = *param_4;
                unaff_x19 = param_4;
                plVar7 = param_4;
                if ((*(byte *)(lVar17 + 2) >> 6 & 1) == 0) {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                else {
                  puVar12 = (undefined8 *)param_4[1];
                  if (*(char *)((long)puVar12 + 0x17) < '\0') {
                    *(undefined1 *)*puVar12 = 0;
                    puVar12[1] = 0;
                  }
                  else {
                    *(undefined1 *)puVar12 = 0;
                    *(undefined1 *)((long)puVar12 + 0x17) = 0;
                  }
                  uVar13 = *(ulong *)(lVar17 + 0x60);
                  unaff_x21 = (undefined8 *)(lVar17 + 0x68);
                  if ((uVar13 & 1) != 0) {
                    unaff_x21 = (undefined8 *)*unaff_x21;
                  }
                  if (1 < uVar13) {
                    unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                    do {
                      lVar17 = param_4[1];
                      if (*(char *)(lVar17 + 0x17) < '\0') {
                        if (*(long *)(lVar17 + 8) != 0) goto LAB_104a7e548;
                      }
                      else if (*(char *)(lVar17 + 0x17) != '\0') {
LAB_104a7e548:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (lVar17,0x2c);
                      }
                      FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                      uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                      param_3 = unaff_x23;
                      if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                        uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                        param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                      }
                      plVar7 = (long *)(param_3 + uVar13);
                      FUN_104a7e67c(param_4[1]);
                      unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                      if ((long *)0x1 < unaff_x19) {
                        do {
                          lVar17 = *unaff_x19;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                          if (bVar2) {
                            *unaff_x19 = lVar17 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (lVar17 + -1 == 0) {
                          (*(code *)unaff_x19[1])();
                        }
                      }
                      unaff_x21 = unaff_x21 + 4;
                    } while (unaff_x21 != unaff_x22);
                  }
                  plVar16 = (long *)param_4[1];
                  uVar13 = plVar16[1];
                  plVar9 = (long *)*plVar16;
                  if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                    uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                    plVar9 = plVar16;
                  }
                  *param_1 = (long)plVar9;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                  unaff_x20 = param_4;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                    *(long *)((long)register0x00000008 + -0x48)) {
                  return unaff_x19;
                }
                ___stack_chk_fail();
                param_4 = plVar7;
                if ((int)param_3 != 0) {
                  FUN_104bd46a0();
                  func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                  param_4 = plVar7;
                }
                unaff_x30 = FUN_104a7e63c;
                param_2 = unaff_x19;
                __Unwind_Resume();
                register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
                param_1 = extraout_x8_00;
              }
              if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
                lVar17 = *param_4;
                if (*(char *)(lVar17 + 2) < '\0') {
                  if (*(long *)(lVar17 + 0x40) == 0) {
                    lVar19 = lVar17 + 0x49;
                    uVar13 = (ulong)*(byte *)(lVar17 + 0x48);
                  }
                  else {
                    uVar13 = *(ulong *)(lVar17 + 0x48);
                    lVar19 = *(long *)(lVar17 + 0x50);
                  }
                  *param_1 = lVar19;
                  param_1[1] = uVar13;
                  uVar8 = 1;
                }
                else {
                  uVar8 = 0;
                  *(undefined1 *)param_1 = 0;
                }
                *(undefined1 *)(param_1 + 2) = uVar8;
                return param_4;
              }
              lVar17 = *param_4;
              plVar9 = (long *)param_4[1];
              plVar7 = (long *)(lVar17 + 0x1f0);
              *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
              *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
              *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
              *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              *(undefined8 *)((long)register0x00000008 + -0x70) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
              plVar16 = *(long **)(lVar17 + 0x1f8);
              if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
                lVar17 = 0;
                bVar2 = false;
                plVar18 = (long *)*param_1;
                uVar13 = param_1[1];
                do {
                  if (plVar16[lVar17 * 8 + 2] == 0) {
                    plVar7 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x19);
                    puVar10 = (undefined1 *)(ulong)*(byte *)(plVar16 + lVar17 * 8 + 3);
                  }
                  else {
                    puVar10 = (undefined1 *)plVar16[lVar17 * 8 + 3];
                    plVar7 = (long *)plVar16[lVar17 * 8 + 4];
                  }
                  if ((puVar10 == param_3) && (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                    if (bVar2) {
                      *(long **)((long)register0x00000008 + -0xa0) = plVar18;
                      *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                      *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                      *(undefined8 *)((long)register0x00000008 + -200) = 1;
                      if (plVar16[lVar17 * 8 + 6] == 0) {
                        lVar19 = (long)plVar16 + lVar17 * 0x40 + 0x39;
                        uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                      }
                      else {
                        uVar13 = plVar16[lVar17 * 8 + 7];
                        lVar19 = plVar16[lVar17 * 8 + 8];
                      }
                      *(long *)((long)register0x00000008 + -0x100) = lVar19;
                      *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                      plVar7 = (long *)((long)register0x00000008 + -0xa0);
                      func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar7,
                                          (undefined1 *)((long)register0x00000008 + -0xd0),
                                          (undefined1 *)((long)register0x00000008 + -0x100));
                      if (*(char *)((long)plVar9 + 0x17) < '\0') {
                        plVar7 = (long *)*plVar9;
                        __ZdlPv();
                      }
                      uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                      plVar9[2] = uVar11;
                      lVar19 = *(long *)((long)register0x00000008 + -0x118);
                      plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                      *plVar9 = lVar19;
                      uVar13 = plVar9[1];
                      plVar18 = (long *)*plVar9;
                      if (-1 < (long)uVar11) {
                        uVar13 = uVar11 >> 0x38;
                        plVar18 = plVar9;
                      }
                      *param_1 = (long)plVar18;
                      param_1[1] = uVar13;
                    }
                    else {
                      if (plVar16[lVar17 * 8 + 6] == 0) {
                        plVar18 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x39);
                        uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                      }
                      else {
                        uVar13 = plVar16[lVar17 * 8 + 7];
                        plVar18 = (long *)plVar16[lVar17 * 8 + 8];
                      }
                      *param_1 = (long)plVar18;
                      param_1[1] = uVar13;
                      bVar2 = true;
                      *(undefined1 *)(param_1 + 2) = 1;
                    }
                  }
                  lVar17 = lVar17 + 1;
                  do {
                    if (lVar17 != plVar16[1]) goto LAB_104adee4c;
                    lVar17 = 0;
                    plVar16 = (long *)*plVar16;
                  } while (plVar16 != (long *)0x0);
                  lVar17 = 0;
LAB_104adee4c:
                } while ((plVar16 != (long *)0x0) || (lVar17 != 0));
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                  *(long *)((long)register0x00000008 + -0x70)) {
                ___stack_chk_fail();
                iVar4 = (int)plVar7;
                __Unwind_Resume();
                plVar7 = (long *)"";
                if (iVar4 != 1) {
                  plVar7 = (long *)"<discarded-invalid-value>";
                }
                plVar9 = (long *)"application/grpc";
                if (iVar4 != 0) {
                  plVar9 = plVar7;
                }
                return plVar9;
              }
              return plVar7;
            }
            ppuVar5 = &puStack_80;
            ppuVar15 = &puStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
              if (plStack_68 == (long *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar14 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar14 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_104a7df14;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppuVar5 = (undefined1 **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                puStack_80 = (undefined1 *)ppuVar5;
                uStack_78 = uVar13;
LAB_104a7df14:
                _memmove(ppuVar5,puVar14,uVar13);
                ppuVar15 = ppuVar5;
              }
              *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = puStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar17 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar17 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7dfd8:
            func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
            (*pcVar3)();
          }
          ppuVar5 = &puStack_80;
          ppuVar15 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar14 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar14 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7dac8;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar5 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar5;
              uStack_78 = uVar13;
LAB_104a7dac8:
              _memmove(ppuVar5,puVar14,uVar13);
              ppuVar15 = ppuVar5;
            }
            *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar17 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar17 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar17 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7db8c:
          func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
          (*pcVar3)();
        }
        ppuVar5 = &puStack_80;
        ppuVar15 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar14 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar14 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7d8c4;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar5 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar5;
            uStack_78 = uVar13;
LAB_104a7d8c4:
            _memmove(ppuVar5,puVar14,uVar13);
            ppuVar15 = ppuVar5;
          }
          *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar17 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar17 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7d988:
        func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
        (*pcVar3)();
      }
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
        func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
        if (plStack_68 == (long *)0x0) {
          puVar10 = (undefined1 *)(ulong)bStack_60;
          puVar14 = &uStack_5f;
        }
        else {
          puVar10 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
          puVar14 = puStack_58;
          if ((undefined1 *)0x7ffffffffffffff7 < puVar10) goto LAB_104a7d77c;
        }
        if (puVar10 < (undefined1 *)0x17) {
          uStack_78 = CONCAT17((char)puVar10,(undefined7)uStack_78);
          pppppuVar6 = &ppppuStack_88;
          if (puVar10 != (undefined1 *)0x0) goto LAB_104a7d6b8;
        }
        else {
          uVar13 = ((ulong)puVar10 & 0x7ffffffffffffff8) + 8;
          if (((ulong)puVar10 | 7) != 0x17) {
            uVar13 = (ulong)puVar10 | 7;
          }
          pppppuVar6 = (undefined8 *****)(uVar13 + 1);
          __Znwm();
          uStack_78 = uVar13 + 1 | 0x8000000000000000;
          ppppuStack_88 = pppppuVar6;
          puStack_80 = puVar10;
LAB_104a7d6b8:
          _memmove(pppppuVar6,puVar14,puVar10);
        }
        *(undefined1 *)((long)pppppuVar6 + (long)puVar10) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_78;
        puVar12[1] = puStack_80;
        *puVar12 = ppppuStack_88;
        uStack_78 = uStack_78 & 0xffffffffffffff;
        ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar17 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar9 = (long *)param_4[1];
        uVar13 = plVar9[1];
        plVar7 = (long *)*plVar9;
        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
          plVar7 = plVar9;
        }
        *param_1 = (long)plVar7;
        param_1[1] = uVar13;
        uVar8 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7d77c:
      func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
      (*pcVar3)();
    }
    ppuVar5 = &puStack_80;
    ppuVar15 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar14 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar14 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7d498;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppuVar5 = (undefined1 **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar5;
        uStack_78 = uVar13;
LAB_104a7d498:
        _memmove(ppuVar5,puVar14,uVar13);
        ppuVar15 = ppuVar5;
      }
      *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
      puVar12 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar17 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar17 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar17 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar9 = (long *)param_4[1];
      uVar13 = plVar9[1];
      plVar7 = (long *)*plVar9;
      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
        plVar7 = plVar9;
      }
      *param_1 = (long)plVar7;
      param_1[1] = uVar13;
      uVar8 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7d55c:
    func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
    (*pcVar3)();
  }
  ppuVar5 = &puStack_80;
  ppuVar15 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)*param_4 < '\0') {
    FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_4 + 0x194));
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar14 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar14 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d324;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7d260;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar13;
LAB_104a7d260:
      _memmove(ppuVar5,puVar14,uVar13);
      ppuVar15 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
    puVar12 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar17 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar9 = (long *)param_4[1];
    uVar13 = plVar9[1];
    plVar7 = (long *)*plVar9;
    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
      plVar7 = plVar9;
    }
    *param_1 = (long)plVar7;
    param_1[1] = uVar13;
    uVar8 = 1;
    param_4 = plStack_68;
  }
  else {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7d324:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d330);
  (*pcVar3)();
}



/* Entry: 104a7d198; end: 104a7d35b;  */

void FUN_104a7d198(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)*param_2 < '\0') {
    FUN_104a7ac74(&plStack_68,*(undefined4 *)((char *)*param_2 + 0x194));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7d324;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7d260;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7d260:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7d324:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7d330);
  (*pcVar4)();
}



/* Entry: 104a7d35c; end: 104a7d3cf;  */

long * FUN_104a7d35c(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  undefined8 *****pppppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar14;
  undefined1 *unaff_x23;
  undefined1 **ppuVar15;
  long *plVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar19;
  undefined8 ****ppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x1e) ||
     (((*param_2 != 0x746e692d63707267 || param_2[1] != 0x6e652d6c616e7265) ||
      param_2[2] != 0x722d676e69646f63) || *(long *)((long)param_2 + 0x16) != 0x747365757165722d)) {
    if ((param_3 != (undefined1 *)0x14) ||
       ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
        (int)param_2[2] != 0x676e6964)) {
      if ((param_3 != (undefined1 *)0xb) ||
         (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
        if ((param_3 != (undefined1 *)0xc) ||
           (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
          if ((param_3 == (undefined1 *)0x1a) &&
             (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
              param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
            ppuVar5 = &puStack_80;
            ppuVar15 = &puStack_80;
            lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
            if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
              if (plStack_68 == (long *)0x0) {
                uVar13 = (ulong)bStack_60;
                puVar14 = &uStack_5f;
              }
              else {
                uVar13 = CONCAT71(uStack_5f,bStack_60);
                puVar14 = puStack_58;
                if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
              }
              if (uVar13 < 0x17) {
                uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
                if (uVar13 != 0) goto LAB_104a7dcf4;
              }
              else {
                uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
                if ((uVar13 | 7) != 0x17) {
                  uVar11 = uVar13 | 7;
                }
                ppuVar5 = (undefined1 **)(uVar11 + 1);
                __Znwm();
                uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
                puStack_80 = (undefined1 *)ppuVar5;
                uStack_78 = uVar13;
LAB_104a7dcf4:
                _memmove(ppuVar5,puVar14,uVar13);
                ppuVar15 = ppuVar5;
              }
              *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                __ZdlPv(*puVar12);
              }
              puVar12[2] = uStack_70;
              puVar12[1] = uStack_78;
              *puVar12 = puStack_80;
              uStack_70 = uStack_70 & 0xffffffffffffff;
              puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
              if ((long *)0x1 < plStack_68) {
                do {
                  lVar17 = *plStack_68;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                  if (bVar2) {
                    *plStack_68 = lVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar17 + -1 == 0) {
                  (*(code *)plStack_68[1])();
                }
              }
              plVar9 = (long *)param_4[1];
              uVar13 = plVar9[1];
              plVar7 = (long *)*plVar9;
              if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
                plVar7 = plVar9;
              }
              *param_1 = (long)plVar7;
              param_1[1] = uVar13;
              uVar8 = 1;
              param_4 = plStack_68;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return param_4;
            }
            ___stack_chk_fail();
LAB_104a7ddb8:
            func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
            (*pcVar3)();
          }
          if ((param_3 != (undefined1 *)0x16) ||
             ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
              *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
            if ((param_3 == (undefined1 *)0xa) &&
               (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 1) >> 6 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0x150) == 0) {
                  lVar19 = lVar17 + 0x159;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0x158);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0x158);
                  lVar19 = *(long *)(lVar17 + 0x160);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0xc) &&
               (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
              lVar17 = *param_4;
              if (*(char *)(lVar17 + 1) < '\0') {
                if (*(long *)(lVar17 + 0x130) == 0) {
                  lVar19 = lVar17 + 0x139;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0x138);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0x138);
                  lVar19 = *(long *)(lVar17 + 0x140);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              else {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 2) & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0x110) == 0) {
                  lVar19 = lVar17 + 0x119;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0x118);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0x118);
                  lVar19 = *(long *)(lVar17 + 0x120);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0x19) &&
               (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
                param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 2) >> 1 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0xf0) == 0) {
                  lVar19 = lVar17 + 0xf9;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0xf8);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0xf8);
                  lVar19 = *(long *)(lVar17 + 0x100);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0x15) &&
               ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
                *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 2) >> 2 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0xd0) == 0) {
                  lVar19 = lVar17 + 0xd9;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0xd8);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0xd8);
                  lVar19 = *(long *)(lVar17 + 0xe0);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0xe) &&
               (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172
               )) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 2) >> 3 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0xb0) == 0) {
                  lVar19 = lVar17 + 0xb9;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0xb8);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0xb8);
                  lVar19 = *(long *)(lVar17 + 0xc0);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0xd) &&
               (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174
               )) {
              lVar17 = *param_4;
              if ((*(byte *)(lVar17 + 2) >> 4 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                if (*(long *)(lVar17 + 0x90) == 0) {
                  lVar19 = lVar17 + 0x99;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0x98);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0x98);
                  lVar19 = *(long *)(lVar17 + 0xa0);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            if ((param_3 == (undefined1 *)0x13) &&
               ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
                *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
              unaff_x29 = &stack0xfffffffffffffff0;
              if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                return param_4;
              }
              unaff_x30 = FUN_104a7e44c;
              plVar7 = param_4;
              _abort();
              register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
              param_2 = param_4;
              param_4 = plVar7;
              param_1 = extraout_x8;
            }
            if ((param_3 == (undefined1 *)0xb) &&
               (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63
               )) {
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -0x48) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar17 = *param_4;
              unaff_x19 = param_4;
              plVar7 = param_4;
              if ((*(byte *)(lVar17 + 2) >> 6 & 1) == 0) {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              else {
                puVar12 = (undefined8 *)param_4[1];
                if (*(char *)((long)puVar12 + 0x17) < '\0') {
                  *(undefined1 *)*puVar12 = 0;
                  puVar12[1] = 0;
                }
                else {
                  *(undefined1 *)puVar12 = 0;
                  *(undefined1 *)((long)puVar12 + 0x17) = 0;
                }
                uVar13 = *(ulong *)(lVar17 + 0x60);
                unaff_x21 = (undefined8 *)(lVar17 + 0x68);
                if ((uVar13 & 1) != 0) {
                  unaff_x21 = (undefined8 *)*unaff_x21;
                }
                if (1 < uVar13) {
                  unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                  unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                  do {
                    lVar17 = param_4[1];
                    if (*(char *)(lVar17 + 0x17) < '\0') {
                      if (*(long *)(lVar17 + 8) != 0) goto LAB_104a7e548;
                    }
                    else if (*(char *)(lVar17 + 0x17) != '\0') {
LAB_104a7e548:
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                (lVar17,0x2c);
                    }
                    FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                    uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                    param_3 = unaff_x23;
                    if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                      uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                      param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                    }
                    plVar7 = (long *)(param_3 + uVar13);
                    FUN_104a7e67c(param_4[1]);
                    unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                    if ((long *)0x1 < unaff_x19) {
                      do {
                        lVar17 = *unaff_x19;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                        if (bVar2) {
                          *unaff_x19 = lVar17 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar17 + -1 == 0) {
                        (*(code *)unaff_x19[1])();
                      }
                    }
                    unaff_x21 = unaff_x21 + 4;
                  } while (unaff_x21 != unaff_x22);
                }
                plVar16 = (long *)param_4[1];
                uVar13 = plVar16[1];
                plVar9 = (long *)*plVar16;
                if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                  uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                  plVar9 = plVar16;
                }
                *param_1 = (long)plVar9;
                param_1[1] = uVar13;
                uVar8 = 1;
                unaff_x20 = param_4;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                  *(long *)((long)register0x00000008 + -0x48)) {
                return unaff_x19;
              }
              ___stack_chk_fail();
              param_4 = plVar7;
              if ((int)param_3 != 0) {
                FUN_104bd46a0();
                func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
                param_4 = plVar7;
              }
              unaff_x30 = FUN_104a7e63c;
              param_2 = unaff_x19;
              __Unwind_Resume();
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
              param_1 = extraout_x8_00;
            }
            if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
              lVar17 = *param_4;
              if (*(char *)(lVar17 + 2) < '\0') {
                if (*(long *)(lVar17 + 0x40) == 0) {
                  lVar19 = lVar17 + 0x49;
                  uVar13 = (ulong)*(byte *)(lVar17 + 0x48);
                }
                else {
                  uVar13 = *(ulong *)(lVar17 + 0x48);
                  lVar19 = *(long *)(lVar17 + 0x50);
                }
                *param_1 = lVar19;
                param_1[1] = uVar13;
                uVar8 = 1;
              }
              else {
                uVar8 = 0;
                *(undefined1 *)param_1 = 0;
              }
              *(undefined1 *)(param_1 + 2) = uVar8;
              return param_4;
            }
            lVar17 = *param_4;
            plVar9 = (long *)param_4[1];
            plVar7 = (long *)(lVar17 + 0x1f0);
            *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
            *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
            *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(code **)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            plVar16 = *(long **)(lVar17 + 0x1f8);
            if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
              lVar17 = 0;
              bVar2 = false;
              plVar18 = (long *)*param_1;
              uVar13 = param_1[1];
              do {
                if (plVar16[lVar17 * 8 + 2] == 0) {
                  plVar7 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x19);
                  puVar10 = (undefined1 *)(ulong)*(byte *)(plVar16 + lVar17 * 8 + 3);
                }
                else {
                  puVar10 = (undefined1 *)plVar16[lVar17 * 8 + 3];
                  plVar7 = (long *)plVar16[lVar17 * 8 + 4];
                }
                if ((puVar10 == param_3) && (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                  if (bVar2) {
                    *(long **)((long)register0x00000008 + -0xa0) = plVar18;
                    *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                    *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                    *(undefined8 *)((long)register0x00000008 + -200) = 1;
                    if (plVar16[lVar17 * 8 + 6] == 0) {
                      lVar19 = (long)plVar16 + lVar17 * 0x40 + 0x39;
                      uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                    }
                    else {
                      uVar13 = plVar16[lVar17 * 8 + 7];
                      lVar19 = plVar16[lVar17 * 8 + 8];
                    }
                    *(long *)((long)register0x00000008 + -0x100) = lVar19;
                    *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                    plVar7 = (long *)((long)register0x00000008 + -0xa0);
                    func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar7,
                                        (undefined1 *)((long)register0x00000008 + -0xd0),
                                        (undefined1 *)((long)register0x00000008 + -0x100));
                    if (*(char *)((long)plVar9 + 0x17) < '\0') {
                      plVar7 = (long *)*plVar9;
                      __ZdlPv();
                    }
                    uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                    plVar9[2] = uVar11;
                    lVar19 = *(long *)((long)register0x00000008 + -0x118);
                    plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                    *plVar9 = lVar19;
                    uVar13 = plVar9[1];
                    plVar18 = (long *)*plVar9;
                    if (-1 < (long)uVar11) {
                      uVar13 = uVar11 >> 0x38;
                      plVar18 = plVar9;
                    }
                    *param_1 = (long)plVar18;
                    param_1[1] = uVar13;
                  }
                  else {
                    if (plVar16[lVar17 * 8 + 6] == 0) {
                      plVar18 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x39);
                      uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                    }
                    else {
                      uVar13 = plVar16[lVar17 * 8 + 7];
                      plVar18 = (long *)plVar16[lVar17 * 8 + 8];
                    }
                    *param_1 = (long)plVar18;
                    param_1[1] = uVar13;
                    bVar2 = true;
                    *(undefined1 *)(param_1 + 2) = 1;
                  }
                }
                lVar17 = lVar17 + 1;
                do {
                  if (lVar17 != plVar16[1]) goto LAB_104adee4c;
                  lVar17 = 0;
                  plVar16 = (long *)*plVar16;
                } while (plVar16 != (long *)0x0);
                lVar17 = 0;
LAB_104adee4c:
              } while ((plVar16 != (long *)0x0) || (lVar17 != 0));
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                *(long *)((long)register0x00000008 + -0x70)) {
              ___stack_chk_fail();
              iVar4 = (int)plVar7;
              __Unwind_Resume();
              plVar7 = (long *)"";
              if (iVar4 != 1) {
                plVar7 = (long *)"<discarded-invalid-value>";
              }
              plVar9 = (long *)"application/grpc";
              if (iVar4 != 0) {
                plVar9 = plVar7;
              }
              return plVar9;
            }
            return plVar7;
          }
          ppuVar5 = &puStack_80;
          ppuVar15 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar14 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar14 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7df14;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar5 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar5;
              uStack_78 = uVar13;
LAB_104a7df14:
              _memmove(ppuVar5,puVar14,uVar13);
              ppuVar15 = ppuVar5;
            }
            *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar17 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar17 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar17 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7dfd8:
          func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
          (*pcVar3)();
        }
        ppuVar5 = &puStack_80;
        ppuVar15 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar14 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar14 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7dac8;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar5 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar5;
            uStack_78 = uVar13;
LAB_104a7dac8:
            _memmove(ppuVar5,puVar14,uVar13);
            ppuVar15 = ppuVar5;
          }
          *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar17 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar17 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7db8c:
        func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
        (*pcVar3)();
      }
      ppuVar5 = &puStack_80;
      ppuVar15 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar14 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar14 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7d8c4;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppuVar5 = (undefined1 **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar5;
          uStack_78 = uVar13;
LAB_104a7d8c4:
          _memmove(ppuVar5,puVar14,uVar13);
          ppuVar15 = ppuVar5;
        }
        *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar17 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar9 = (long *)param_4[1];
        uVar13 = plVar9[1];
        plVar7 = (long *)*plVar9;
        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
          plVar7 = plVar9;
        }
        *param_1 = (long)plVar7;
        param_1[1] = uVar13;
        uVar8 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7d988:
      func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
      (*pcVar3)();
    }
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
      func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
      if (plStack_68 == (long *)0x0) {
        puVar10 = (undefined1 *)(ulong)bStack_60;
        puVar14 = &uStack_5f;
      }
      else {
        puVar10 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
        puVar14 = puStack_58;
        if ((undefined1 *)0x7ffffffffffffff7 < puVar10) goto LAB_104a7d77c;
      }
      if (puVar10 < (undefined1 *)0x17) {
        uStack_78 = CONCAT17((char)puVar10,(undefined7)uStack_78);
        pppppuVar6 = &ppppuStack_88;
        if (puVar10 != (undefined1 *)0x0) goto LAB_104a7d6b8;
      }
      else {
        uVar13 = ((ulong)puVar10 & 0x7ffffffffffffff8) + 8;
        if (((ulong)puVar10 | 7) != 0x17) {
          uVar13 = (ulong)puVar10 | 7;
        }
        pppppuVar6 = (undefined8 *****)(uVar13 + 1);
        __Znwm();
        uStack_78 = uVar13 + 1 | 0x8000000000000000;
        ppppuStack_88 = pppppuVar6;
        puStack_80 = puVar10;
LAB_104a7d6b8:
        _memmove(pppppuVar6,puVar14,puVar10);
      }
      *(undefined1 *)((long)pppppuVar6 + (long)puVar10) = 0;
      puVar12 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_78;
      puVar12[1] = puStack_80;
      *puVar12 = ppppuStack_88;
      uStack_78 = uStack_78 & 0xffffffffffffff;
      ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar17 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar17 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar17 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar9 = (long *)param_4[1];
      uVar13 = plVar9[1];
      plVar7 = (long *)*plVar9;
      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
        plVar7 = plVar9;
      }
      *param_1 = (long)plVar7;
      param_1[1] = uVar13;
      uVar8 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7d77c:
    func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
    (*pcVar3)();
  }
  ppuVar5 = &puStack_80;
  ppuVar15 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_4 + 400));
    if (plStack_68 == (long *)0x0) {
      uVar13 = (ulong)bStack_60;
      puVar14 = &uStack_5f;
    }
    else {
      uVar13 = CONCAT71(uStack_5f,bStack_60);
      puVar14 = puStack_58;
      if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d55c;
    }
    if (uVar13 < 0x17) {
      uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
      if (uVar13 != 0) goto LAB_104a7d498;
    }
    else {
      uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar11 = uVar13 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar11 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar13;
LAB_104a7d498:
      _memmove(ppuVar5,puVar14,uVar13);
      ppuVar15 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
    puVar12 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_70;
    puVar12[1] = uStack_78;
    *puVar12 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar17 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar9 = (long *)param_4[1];
    uVar13 = plVar9[1];
    plVar7 = (long *)*plVar9;
    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
      plVar7 = plVar9;
    }
    *param_1 = (long)plVar7;
    param_1[1] = uVar13;
    uVar8 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7d55c:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d568);
  (*pcVar3)();
}



/* Entry: 104a7d3d0; end: 104a7d593;  */

void FUN_104a7d3d0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7ac74(&plStack_68,*(undefined4 *)(*param_2 + 400));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7d55c;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7d498;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7d498:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7d55c:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7d568);
  (*pcVar4)();
}



/* Entry: 104a7d594; end: 104a7d5e7;  */

long * FUN_104a7d594(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *****pppppuVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar14;
  undefined1 *unaff_x23;
  undefined1 **ppuVar15;
  long *plVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar19;
  undefined8 ****ppppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x14) ||
     ((*param_2 != 0x6363612d63707267 || param_2[1] != 0x6f636e652d747065) ||
      (int)param_2[2] != 0x676e6964)) {
    if ((param_3 != (undefined1 *)0xb) ||
       (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
      if ((param_3 != (undefined1 *)0xc) ||
         (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
        if ((param_3 == (undefined1 *)0x1a) &&
           (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
            param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
          ppuVar6 = &puStack_80;
          ppuVar15 = &puStack_80;
          lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
          if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
            uVar8 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
            if (plStack_68 == (long *)0x0) {
              uVar13 = (ulong)bStack_60;
              puVar14 = &uStack_5f;
            }
            else {
              uVar13 = CONCAT71(uStack_5f,bStack_60);
              puVar14 = puStack_58;
              if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7ddb8;
            }
            if (uVar13 < 0x17) {
              uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
              if (uVar13 != 0) goto LAB_104a7dcf4;
            }
            else {
              uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
              if ((uVar13 | 7) != 0x17) {
                uVar11 = uVar13 | 7;
              }
              ppuVar6 = (undefined1 **)(uVar11 + 1);
              __Znwm();
              uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
              puStack_80 = (undefined1 *)ppuVar6;
              uStack_78 = uVar13;
LAB_104a7dcf4:
              _memmove(ppuVar6,puVar14,uVar13);
              ppuVar15 = ppuVar6;
            }
            *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
            puVar12 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            puVar12[2] = uStack_70;
            puVar12[1] = uStack_78;
            *puVar12 = puStack_80;
            uStack_70 = uStack_70 & 0xffffffffffffff;
            puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
            if ((long *)0x1 < plStack_68) {
              do {
                lVar17 = *plStack_68;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
                if (bVar2) {
                  *plStack_68 = lVar17 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar17 + -1 == 0) {
                (*(code *)plStack_68[1])();
              }
            }
            plVar9 = (long *)param_4[1];
            uVar13 = plVar9[1];
            plVar7 = (long *)*plVar9;
            if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
              plVar7 = plVar9;
            }
            *param_1 = (long)plVar7;
            param_1[1] = uVar13;
            uVar8 = 1;
            param_4 = plStack_68;
          }
          *(undefined1 *)(param_1 + 2) = uVar8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return param_4;
          }
          ___stack_chk_fail();
LAB_104a7ddb8:
          func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
          (*pcVar3)();
        }
        if ((param_3 != (undefined1 *)0x16) ||
           ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
            *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
          if ((param_3 == (undefined1 *)0xa) &&
             (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 1) >> 6 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0x150) == 0) {
                lVar19 = lVar17 + 0x159;
                uVar13 = (ulong)*(byte *)(lVar17 + 0x158);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x158);
                lVar19 = *(long *)(lVar17 + 0x160);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0xc) &&
             (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
            lVar17 = *param_4;
            if (*(char *)(lVar17 + 1) < '\0') {
              if (*(long *)(lVar17 + 0x130) == 0) {
                lVar19 = lVar17 + 0x139;
                uVar13 = (ulong)*(byte *)(lVar17 + 0x138);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x138);
                lVar19 = *(long *)(lVar17 + 0x140);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            else {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 2) & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0x110) == 0) {
                lVar19 = lVar17 + 0x119;
                uVar13 = (ulong)*(byte *)(lVar17 + 0x118);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x118);
                lVar19 = *(long *)(lVar17 + 0x120);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0x19) &&
             (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
              param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 2) >> 1 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0xf0) == 0) {
                lVar19 = lVar17 + 0xf9;
                uVar13 = (ulong)*(byte *)(lVar17 + 0xf8);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0xf8);
                lVar19 = *(long *)(lVar17 + 0x100);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0x15) &&
             ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
              *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 2) >> 2 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0xd0) == 0) {
                lVar19 = lVar17 + 0xd9;
                uVar13 = (ulong)*(byte *)(lVar17 + 0xd8);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0xd8);
                lVar19 = *(long *)(lVar17 + 0xe0);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0xe) &&
             (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172))
          {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 2) >> 3 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0xb0) == 0) {
                lVar19 = lVar17 + 0xb9;
                uVar13 = (ulong)*(byte *)(lVar17 + 0xb8);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0xb8);
                lVar19 = *(long *)(lVar17 + 0xc0);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0xd) &&
             (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174))
          {
            lVar17 = *param_4;
            if ((*(byte *)(lVar17 + 2) >> 4 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              if (*(long *)(lVar17 + 0x90) == 0) {
                lVar19 = lVar17 + 0x99;
                uVar13 = (ulong)*(byte *)(lVar17 + 0x98);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x98);
                lVar19 = *(long *)(lVar17 + 0xa0);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          if ((param_3 == (undefined1 *)0x13) &&
             ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
              *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
            unaff_x29 = &stack0xfffffffffffffff0;
            if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
              return param_4;
            }
            unaff_x30 = FUN_104a7e44c;
            plVar7 = param_4;
            _abort();
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
            param_2 = param_4;
            param_4 = plVar7;
            param_1 = extraout_x8;
          }
          if ((param_3 == (undefined1 *)0xb) &&
             (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63))
          {
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
            *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(code **)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            lVar17 = *param_4;
            unaff_x19 = param_4;
            plVar7 = param_4;
            if ((*(byte *)(lVar17 + 2) >> 6 & 1) == 0) {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              puVar12 = (undefined8 *)param_4[1];
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                *(undefined1 *)*puVar12 = 0;
                puVar12[1] = 0;
              }
              else {
                *(undefined1 *)puVar12 = 0;
                *(undefined1 *)((long)puVar12 + 0x17) = 0;
              }
              uVar13 = *(ulong *)(lVar17 + 0x60);
              unaff_x21 = (undefined8 *)(lVar17 + 0x68);
              if ((uVar13 & 1) != 0) {
                unaff_x21 = (undefined8 *)*unaff_x21;
              }
              if (1 < uVar13) {
                unaff_x22 = unaff_x21 + (uVar13 >> 1) * 4;
                unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
                do {
                  lVar17 = param_4[1];
                  if (*(char *)(lVar17 + 0x17) < '\0') {
                    if (*(long *)(lVar17 + 8) != 0) goto LAB_104a7e548;
                  }
                  else if (*(char *)(lVar17 + 0x17) != '\0') {
LAB_104a7e548:
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (lVar17,0x2c);
                  }
                  FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                  uVar13 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                  param_3 = unaff_x23;
                  if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                    uVar13 = *(ulong *)((long)register0x00000008 + -0x60);
                    param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                  }
                  plVar7 = (long *)(param_3 + uVar13);
                  FUN_104a7e67c(param_4[1]);
                  unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                  if ((long *)0x1 < unaff_x19) {
                    do {
                      lVar17 = *unaff_x19;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                      if (bVar2) {
                        *unaff_x19 = lVar17 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (lVar17 + -1 == 0) {
                      (*(code *)unaff_x19[1])();
                    }
                  }
                  unaff_x21 = unaff_x21 + 4;
                } while (unaff_x21 != unaff_x22);
              }
              plVar16 = (long *)param_4[1];
              uVar13 = plVar16[1];
              plVar9 = (long *)*plVar16;
              if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
                uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
                plVar9 = plVar16;
              }
              *param_1 = (long)plVar9;
              param_1[1] = uVar13;
              uVar8 = 1;
              unaff_x20 = param_4;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x48)) {
              return unaff_x19;
            }
            ___stack_chk_fail();
            param_4 = plVar7;
            if ((int)param_3 != 0) {
              FUN_104bd46a0();
              func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
              param_4 = plVar7;
            }
            unaff_x30 = FUN_104a7e63c;
            param_2 = unaff_x19;
            __Unwind_Resume();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
            param_1 = extraout_x8_00;
          }
          if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
            lVar17 = *param_4;
            if (*(char *)(lVar17 + 2) < '\0') {
              if (*(long *)(lVar17 + 0x40) == 0) {
                lVar19 = lVar17 + 0x49;
                uVar13 = (ulong)*(byte *)(lVar17 + 0x48);
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x48);
                lVar19 = *(long *)(lVar17 + 0x50);
              }
              *param_1 = lVar19;
              param_1[1] = uVar13;
              uVar8 = 1;
            }
            else {
              uVar8 = 0;
              *(undefined1 *)param_1 = 0;
            }
            *(undefined1 *)(param_1 + 2) = uVar8;
            return param_4;
          }
          lVar17 = *param_4;
          plVar9 = (long *)param_4[1];
          plVar7 = (long *)(lVar17 + 0x1f0);
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          plVar16 = *(long **)(lVar17 + 0x1f8);
          if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
            lVar17 = 0;
            bVar2 = false;
            plVar18 = (long *)*param_1;
            uVar13 = param_1[1];
            do {
              if (plVar16[lVar17 * 8 + 2] == 0) {
                plVar7 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x19);
                puVar10 = (undefined1 *)(ulong)*(byte *)(plVar16 + lVar17 * 8 + 3);
              }
              else {
                puVar10 = (undefined1 *)plVar16[lVar17 * 8 + 3];
                plVar7 = (long *)plVar16[lVar17 * 8 + 4];
              }
              if ((puVar10 == param_3) && (_memcmp(plVar7,param_2,param_3), (int)plVar7 == 0)) {
                if (bVar2) {
                  *(long **)((long)register0x00000008 + -0xa0) = plVar18;
                  *(ulong *)((long)register0x00000008 + -0x98) = uVar13;
                  *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                  *(undefined8 *)((long)register0x00000008 + -200) = 1;
                  if (plVar16[lVar17 * 8 + 6] == 0) {
                    lVar19 = (long)plVar16 + lVar17 * 0x40 + 0x39;
                    uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                  }
                  else {
                    uVar13 = plVar16[lVar17 * 8 + 7];
                    lVar19 = plVar16[lVar17 * 8 + 8];
                  }
                  *(long *)((long)register0x00000008 + -0x100) = lVar19;
                  *(ulong *)((long)register0x00000008 + -0xf8) = uVar13;
                  plVar7 = (long *)((long)register0x00000008 + -0xa0);
                  func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar7,
                                      (undefined1 *)((long)register0x00000008 + -0xd0),
                                      (undefined1 *)((long)register0x00000008 + -0x100));
                  if (*(char *)((long)plVar9 + 0x17) < '\0') {
                    plVar7 = (long *)*plVar9;
                    __ZdlPv();
                  }
                  uVar11 = *(ulong *)((long)register0x00000008 + -0x108);
                  plVar9[2] = uVar11;
                  lVar19 = *(long *)((long)register0x00000008 + -0x118);
                  plVar9[1] = *(long *)((long)register0x00000008 + -0x110);
                  *plVar9 = lVar19;
                  uVar13 = plVar9[1];
                  plVar18 = (long *)*plVar9;
                  if (-1 < (long)uVar11) {
                    uVar13 = uVar11 >> 0x38;
                    plVar18 = plVar9;
                  }
                  *param_1 = (long)plVar18;
                  param_1[1] = uVar13;
                }
                else {
                  if (plVar16[lVar17 * 8 + 6] == 0) {
                    plVar18 = (long *)((long)plVar16 + lVar17 * 0x40 + 0x39);
                    uVar13 = (ulong)*(byte *)(plVar16 + lVar17 * 8 + 7);
                  }
                  else {
                    uVar13 = plVar16[lVar17 * 8 + 7];
                    plVar18 = (long *)plVar16[lVar17 * 8 + 8];
                  }
                  *param_1 = (long)plVar18;
                  param_1[1] = uVar13;
                  bVar2 = true;
                  *(undefined1 *)(param_1 + 2) = 1;
                }
              }
              lVar17 = lVar17 + 1;
              do {
                if (lVar17 != plVar16[1]) goto LAB_104adee4c;
                lVar17 = 0;
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
              lVar17 = 0;
LAB_104adee4c:
            } while ((plVar16 != (long *)0x0) || (lVar17 != 0));
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x70)) {
            ___stack_chk_fail();
            iVar4 = (int)plVar7;
            __Unwind_Resume();
            plVar7 = (long *)"";
            if (iVar4 != 1) {
              plVar7 = (long *)"<discarded-invalid-value>";
            }
            plVar9 = (long *)"application/grpc";
            if (iVar4 != 0) {
              plVar9 = plVar7;
            }
            return plVar9;
          }
          return plVar7;
        }
        ppuVar6 = &puStack_80;
        ppuVar15 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
          uVar8 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
          if (plStack_68 == (long *)0x0) {
            uVar13 = (ulong)bStack_60;
            puVar14 = &uStack_5f;
          }
          else {
            uVar13 = CONCAT71(uStack_5f,bStack_60);
            puVar14 = puStack_58;
            if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7dfd8;
          }
          if (uVar13 < 0x17) {
            uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
            if (uVar13 != 0) goto LAB_104a7df14;
          }
          else {
            uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar11 = uVar13 | 7;
            }
            ppuVar6 = (undefined1 **)(uVar11 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar6;
            uStack_78 = uVar13;
LAB_104a7df14:
            _memmove(ppuVar6,puVar14,uVar13);
            ppuVar15 = ppuVar6;
          }
          *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
          puVar12 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar12[2] = uStack_70;
          puVar12[1] = uStack_78;
          *puVar12 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar17 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar17 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar9 = (long *)param_4[1];
          uVar13 = plVar9[1];
          plVar7 = (long *)*plVar9;
          if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
            plVar7 = plVar9;
          }
          *param_1 = (long)plVar7;
          param_1[1] = uVar13;
          uVar8 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7dfd8:
        func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
        (*pcVar3)();
      }
      ppuVar6 = &puStack_80;
      ppuVar15 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
        if (plStack_68 == (long *)0x0) {
          uVar13 = (ulong)bStack_60;
          puVar14 = &uStack_5f;
        }
        else {
          uVar13 = CONCAT71(uStack_5f,bStack_60);
          puVar14 = puStack_58;
          if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7db8c;
        }
        if (uVar13 < 0x17) {
          uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
          if (uVar13 != 0) goto LAB_104a7dac8;
        }
        else {
          uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
          if ((uVar13 | 7) != 0x17) {
            uVar11 = uVar13 | 7;
          }
          ppuVar6 = (undefined1 **)(uVar11 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar6;
          uStack_78 = uVar13;
LAB_104a7dac8:
          _memmove(ppuVar6,puVar14,uVar13);
          ppuVar15 = ppuVar6;
        }
        *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
        puVar12 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar12 + 0x17) < '\0') {
          __ZdlPv(*puVar12);
        }
        puVar12[2] = uStack_70;
        puVar12[1] = uStack_78;
        *puVar12 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar17 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar9 = (long *)param_4[1];
        uVar13 = plVar9[1];
        plVar7 = (long *)*plVar9;
        if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
          plVar7 = plVar9;
        }
        *param_1 = (long)plVar7;
        param_1[1] = uVar13;
        uVar8 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7db8c:
      func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
      (*pcVar3)();
    }
    ppuVar6 = &puStack_80;
    ppuVar15 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
      if (plStack_68 == (long *)0x0) {
        uVar13 = (ulong)bStack_60;
        puVar14 = &uStack_5f;
      }
      else {
        uVar13 = CONCAT71(uStack_5f,bStack_60);
        puVar14 = puStack_58;
        if (0x7ffffffffffffff7 < uVar13) goto LAB_104a7d988;
      }
      if (uVar13 < 0x17) {
        uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
        if (uVar13 != 0) goto LAB_104a7d8c4;
      }
      else {
        uVar11 = (uVar13 & 0x7ffffffffffffff8) + 8;
        if ((uVar13 | 7) != 0x17) {
          uVar11 = uVar13 | 7;
        }
        ppuVar6 = (undefined1 **)(uVar11 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar11 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar6;
        uStack_78 = uVar13;
LAB_104a7d8c4:
        _memmove(ppuVar6,puVar14,uVar13);
        ppuVar15 = ppuVar6;
      }
      *(undefined1 *)((long)ppuVar15 + uVar13) = 0;
      puVar12 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_70;
      puVar12[1] = uStack_78;
      *puVar12 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar17 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar17 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar17 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar9 = (long *)param_4[1];
      uVar13 = plVar9[1];
      plVar7 = (long *)*plVar9;
      if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
        plVar7 = plVar9;
      }
      *param_1 = (long)plVar7;
      param_1[1] = uVar13;
      uVar8 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7d988:
    func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
    (*pcVar3)();
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) >> 1 & 1) == 0) {
    uVar8 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_70 = CONCAT17(*(undefined1 *)(*param_4 + 0x18c),(undefined7)uStack_70);
    func_0x00010061b500(&plStack_68,(long)&uStack_70 + 7);
    if (plStack_68 == (long *)0x0) {
      puVar10 = (undefined1 *)(ulong)bStack_60;
      puVar14 = &uStack_5f;
    }
    else {
      puVar10 = (undefined1 *)CONCAT71(uStack_5f,bStack_60);
      puVar14 = puStack_58;
      if ((undefined1 *)0x7ffffffffffffff7 < puVar10) goto LAB_104a7d77c;
    }
    if (puVar10 < (undefined1 *)0x17) {
      uStack_78 = CONCAT17((char)puVar10,(undefined7)uStack_78);
      pppppuVar5 = &ppppuStack_88;
      if (puVar10 != (undefined1 *)0x0) goto LAB_104a7d6b8;
    }
    else {
      uVar13 = ((ulong)puVar10 & 0x7ffffffffffffff8) + 8;
      if (((ulong)puVar10 | 7) != 0x17) {
        uVar13 = (ulong)puVar10 | 7;
      }
      pppppuVar5 = (undefined8 *****)(uVar13 + 1);
      __Znwm();
      uStack_78 = uVar13 + 1 | 0x8000000000000000;
      ppppuStack_88 = pppppuVar5;
      puStack_80 = puVar10;
LAB_104a7d6b8:
      _memmove(pppppuVar5,puVar14,puVar10);
    }
    *(undefined1 *)((long)pppppuVar5 + (long)puVar10) = 0;
    puVar12 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    puVar12[2] = uStack_78;
    puVar12[1] = puStack_80;
    *puVar12 = ppppuStack_88;
    uStack_78 = uStack_78 & 0xffffffffffffff;
    ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar17 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar9 = (long *)param_4[1];
    uVar13 = plVar9[1];
    plVar7 = (long *)*plVar9;
    if (-1 < (char)*(byte *)((long)plVar9 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar9 + 0x17);
      plVar7 = plVar9;
    }
    *param_1 = (long)plVar7;
    param_1[1] = uVar13;
    uVar8 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7d77c:
  func_0x000104a6fa5c(&ppppuStack_88);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d788);
  (*pcVar3)();
}



/* Entry: 104a7d5e8; end: 104a7d7b3;  */

void FUN_104a7d5e8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) >> 1 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_69 = *(undefined1 *)(*param_2 + 0x18c);
    func_0x00010061b500(&plStack_68,&uStack_69);
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7d77c;
    }
    if (uVar9 < 0x17) {
      uStack_78 = CONCAT17((char)uVar9,(undefined7)uStack_78);
      pppuVar5 = &ppuStack_88;
      if (uVar9 != 0) goto LAB_104a7d6b8;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      pppuVar5 = (undefined8 ***)(uVar1 + 1);
      __Znwm();
      uStack_78 = uVar1 + 1 | 0x8000000000000000;
      ppuStack_88 = pppuVar5;
      uStack_80 = uVar9;
LAB_104a7d6b8:
      _memmove(pppuVar5,puVar11,uVar9);
    }
    *(undefined1 *)((long)pppuVar5 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_78;
    puVar10[1] = uStack_80;
    *puVar10 = ppuStack_88;
    uStack_78 = uStack_78 & 0xffffffffffffff;
    ppuStack_88 = (undefined8 **)((ulong)ppuStack_88 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7d77c:
  func_0x000104a6fa5c(&ppuStack_88);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7d788);
  (*pcVar4)();
}



/* Entry: 104a7d7b4; end: 104a7d7fb;  */

long * FUN_104a7d7b4(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  undefined1 *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0xb) ||
     (*param_2 != 0x6174732d63707267 || *(long *)((long)param_2 + 3) != 0x7375746174732d63)) {
    if ((param_3 != (undefined1 *)0xc) ||
       (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
      if ((param_3 == (undefined1 *)0x1a) &&
         (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
          param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
        ppuVar5 = &puStack_80;
        ppuVar14 = &puStack_80;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
          if (plStack_68 == (long *)0x0) {
            uVar12 = (ulong)bStack_60;
            puVar13 = &uStack_5f;
          }
          else {
            uVar12 = CONCAT71(uStack_5f,bStack_60);
            puVar13 = puStack_58;
            if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7ddb8;
          }
          if (uVar12 < 0x17) {
            uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
            if (uVar12 != 0) goto LAB_104a7dcf4;
          }
          else {
            uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
            if ((uVar12 | 7) != 0x17) {
              uVar10 = uVar12 | 7;
            }
            ppuVar5 = (undefined1 **)(uVar10 + 1);
            __Znwm();
            uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
            puStack_80 = (undefined1 *)ppuVar5;
            uStack_78 = uVar12;
LAB_104a7dcf4:
            _memmove(ppuVar5,puVar13,uVar12);
            ppuVar14 = ppuVar5;
          }
          *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
          puVar11 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
          }
          puVar11[2] = uStack_70;
          puVar11[1] = uStack_78;
          *puVar11 = puStack_80;
          uStack_70 = uStack_70 & 0xffffffffffffff;
          puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
          if ((long *)0x1 < plStack_68) {
            do {
              lVar16 = *plStack_68;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar2) {
                *plStack_68 = lVar16 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar16 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          plVar8 = (long *)param_4[1];
          uVar12 = plVar8[1];
          plVar6 = (long *)*plVar8;
          if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
            uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
            plVar6 = plVar8;
          }
          *param_1 = (long)plVar6;
          param_1[1] = uVar12;
          uVar7 = 1;
          param_4 = plStack_68;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_4;
        }
        ___stack_chk_fail();
LAB_104a7ddb8:
        func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
        (*pcVar3)();
      }
      if ((param_3 != (undefined1 *)0x16) ||
         ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
          *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
        if ((param_3 == (undefined1 *)0xa) &&
           (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x150) == 0) {
              lVar18 = lVar16 + 0x159;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x158);
              lVar18 = *(long *)(lVar16 + 0x160);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0xc) &&
           (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
          lVar16 = *param_4;
          if (*(char *)(lVar16 + 1) < '\0') {
            if (*(long *)(lVar16 + 0x130) == 0) {
              lVar18 = lVar16 + 0x139;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x138);
              lVar18 = *(long *)(lVar16 + 0x140);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 2) & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x110) == 0) {
              lVar18 = lVar16 + 0x119;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x118);
              lVar18 = *(long *)(lVar16 + 0x120);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0x19) &&
           (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
            param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xf0) == 0) {
              lVar18 = lVar16 + 0xf9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xf8);
              lVar18 = *(long *)(lVar16 + 0x100);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0x15) &&
           ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
            *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xd0) == 0) {
              lVar18 = lVar16 + 0xd9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xd8);
              lVar18 = *(long *)(lVar16 + 0xe0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0xe) &&
           (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0xb0) == 0) {
              lVar18 = lVar16 + 0xb9;
              uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0xb8);
              lVar18 = *(long *)(lVar16 + 0xc0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0xd) &&
           (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
          lVar16 = *param_4;
          if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            if (*(long *)(lVar16 + 0x90) == 0) {
              lVar18 = lVar16 + 0x99;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x98);
              lVar18 = *(long *)(lVar16 + 0xa0);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        if ((param_3 == (undefined1 *)0x13) &&
           ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
            *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
          unaff_x29 = &stack0xfffffffffffffff0;
          if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            return param_4;
          }
          unaff_x30 = FUN_104a7e44c;
          plVar6 = param_4;
          _abort();
          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
          param_2 = param_4;
          param_4 = plVar6;
          param_1 = extraout_x8;
        }
        if ((param_3 == (undefined1 *)0xb) &&
           (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -0x48) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar16 = *param_4;
          unaff_x19 = param_4;
          plVar6 = param_4;
          if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          else {
            puVar11 = (undefined8 *)param_4[1];
            if (*(char *)((long)puVar11 + 0x17) < '\0') {
              *(undefined1 *)*puVar11 = 0;
              puVar11[1] = 0;
            }
            else {
              *(undefined1 *)puVar11 = 0;
              *(undefined1 *)((long)puVar11 + 0x17) = 0;
            }
            uVar12 = *(ulong *)(lVar16 + 0x60);
            unaff_x21 = (undefined8 *)(lVar16 + 0x68);
            if ((uVar12 & 1) != 0) {
              unaff_x21 = (undefined8 *)*unaff_x21;
            }
            if (1 < uVar12) {
              unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
              unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
              do {
                lVar16 = param_4[1];
                if (*(char *)(lVar16 + 0x17) < '\0') {
                  if (*(long *)(lVar16 + 8) != 0) goto LAB_104a7e548;
                }
                else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_104a7e548:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (lVar16,0x2c);
                }
                FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
                uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
                param_3 = unaff_x23;
                if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                  uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
                  param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
                }
                plVar6 = (long *)(param_3 + uVar12);
                FUN_104a7e67c(param_4[1]);
                unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
                if ((long *)0x1 < unaff_x19) {
                  do {
                    lVar16 = *unaff_x19;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                    if (bVar2) {
                      *unaff_x19 = lVar16 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar16 + -1 == 0) {
                    (*(code *)unaff_x19[1])();
                  }
                }
                unaff_x21 = unaff_x21 + 4;
              } while (unaff_x21 != unaff_x22);
            }
            plVar15 = (long *)param_4[1];
            uVar12 = plVar15[1];
            plVar8 = (long *)*plVar15;
            if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
              uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
              plVar8 = plVar15;
            }
            *param_1 = (long)plVar8;
            param_1[1] = uVar12;
            uVar7 = 1;
            unaff_x20 = param_4;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x48)) {
            return unaff_x19;
          }
          ___stack_chk_fail();
          param_4 = plVar6;
          if ((int)param_3 != 0) {
            FUN_104bd46a0();
            func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
            param_4 = plVar6;
          }
          unaff_x30 = FUN_104a7e63c;
          param_2 = unaff_x19;
          __Unwind_Resume();
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
          param_1 = extraout_x8_00;
        }
        if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
          lVar16 = *param_4;
          if (*(char *)(lVar16 + 2) < '\0') {
            if (*(long *)(lVar16 + 0x40) == 0) {
              lVar18 = lVar16 + 0x49;
              uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
            }
            else {
              uVar12 = *(ulong *)(lVar16 + 0x48);
              lVar18 = *(long *)(lVar16 + 0x50);
            }
            *param_1 = lVar18;
            param_1[1] = uVar12;
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
            *(undefined1 *)param_1 = 0;
          }
          *(undefined1 *)(param_1 + 2) = uVar7;
          return param_4;
        }
        lVar16 = *param_4;
        plVar8 = (long *)param_4[1];
        plVar6 = (long *)(lVar16 + 0x1f0);
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        plVar15 = *(long **)(lVar16 + 0x1f8);
        if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
          lVar16 = 0;
          bVar2 = false;
          plVar17 = (long *)*param_1;
          uVar12 = param_1[1];
          do {
            if (plVar15[lVar16 * 8 + 2] == 0) {
              plVar6 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x19);
              puVar9 = (undefined1 *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
            }
            else {
              puVar9 = (undefined1 *)plVar15[lVar16 * 8 + 3];
              plVar6 = (long *)plVar15[lVar16 * 8 + 4];
            }
            if ((puVar9 == param_3) && (_memcmp(plVar6,param_2,param_3), (int)plVar6 == 0)) {
              if (bVar2) {
                *(long **)((long)register0x00000008 + -0xa0) = plVar17;
                *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
                *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
                *(undefined8 *)((long)register0x00000008 + -200) = 1;
                if (plVar15[lVar16 * 8 + 6] == 0) {
                  lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
                  uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                }
                else {
                  uVar12 = plVar15[lVar16 * 8 + 7];
                  lVar18 = plVar15[lVar16 * 8 + 8];
                }
                *(long *)((long)register0x00000008 + -0x100) = lVar18;
                *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
                plVar6 = (long *)((long)register0x00000008 + -0xa0);
                func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar6,
                                    (undefined1 *)((long)register0x00000008 + -0xd0),
                                    (undefined1 *)((long)register0x00000008 + -0x100));
                if (*(char *)((long)plVar8 + 0x17) < '\0') {
                  plVar6 = (long *)*plVar8;
                  __ZdlPv();
                }
                uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
                plVar8[2] = uVar10;
                lVar18 = *(long *)((long)register0x00000008 + -0x118);
                plVar8[1] = *(long *)((long)register0x00000008 + -0x110);
                *plVar8 = lVar18;
                uVar12 = plVar8[1];
                plVar17 = (long *)*plVar8;
                if (-1 < (long)uVar10) {
                  uVar12 = uVar10 >> 0x38;
                  plVar17 = plVar8;
                }
                *param_1 = (long)plVar17;
                param_1[1] = uVar12;
              }
              else {
                if (plVar15[lVar16 * 8 + 6] == 0) {
                  plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
                  uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
                }
                else {
                  uVar12 = plVar15[lVar16 * 8 + 7];
                  plVar17 = (long *)plVar15[lVar16 * 8 + 8];
                }
                *param_1 = (long)plVar17;
                param_1[1] = uVar12;
                bVar2 = true;
                *(undefined1 *)(param_1 + 2) = 1;
              }
            }
            lVar16 = lVar16 + 1;
            do {
              if (lVar16 != plVar15[1]) goto LAB_104adee4c;
              lVar16 = 0;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
            lVar16 = 0;
LAB_104adee4c:
          } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)
           ) {
          ___stack_chk_fail();
          iVar4 = (int)plVar6;
          __Unwind_Resume();
          plVar6 = (long *)"";
          if (iVar4 != 1) {
            plVar6 = (long *)"<discarded-invalid-value>";
          }
          plVar8 = (long *)"application/grpc";
          if (iVar4 != 0) {
            plVar8 = plVar6;
          }
          return plVar8;
        }
        return plVar6;
      }
      ppuVar5 = &puStack_80;
      ppuVar14 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
        if (plStack_68 == (long *)0x0) {
          uVar12 = (ulong)bStack_60;
          puVar13 = &uStack_5f;
        }
        else {
          uVar12 = CONCAT71(uStack_5f,bStack_60);
          puVar13 = puStack_58;
          if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7dfd8;
        }
        if (uVar12 < 0x17) {
          uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
          if (uVar12 != 0) goto LAB_104a7df14;
        }
        else {
          uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
          if ((uVar12 | 7) != 0x17) {
            uVar10 = uVar12 | 7;
          }
          ppuVar5 = (undefined1 **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar5;
          uStack_78 = uVar12;
LAB_104a7df14:
          _memmove(ppuVar5,puVar13,uVar12);
          ppuVar14 = ppuVar5;
        }
        *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
        puVar11 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = uStack_70;
        puVar11[1] = uStack_78;
        *puVar11 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar16 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar16 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar16 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar8 = (long *)param_4[1];
        uVar12 = plVar8[1];
        plVar6 = (long *)*plVar8;
        if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
          plVar6 = plVar8;
        }
        *param_1 = (long)plVar6;
        param_1[1] = uVar12;
        uVar7 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7dfd8:
      func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
      (*pcVar3)();
    }
    ppuVar5 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
      if (plStack_68 == (long *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7db8c;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_104a7dac8;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar5 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar5;
        uStack_78 = uVar12;
LAB_104a7dac8:
        _memmove(ppuVar5,puVar13,uVar12);
        ppuVar14 = ppuVar5;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar16 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar8 = (long *)param_4[1];
      uVar12 = plVar8[1];
      plVar6 = (long *)*plVar8;
      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
        plVar6 = plVar8;
      }
      *param_1 = (long)plVar6;
      param_1[1] = uVar12;
      uVar7 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7db8c:
    func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
    (*pcVar3)();
  }
  ppuVar5 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) >> 2 & 1) == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,(long)*(int *)(*param_4 + 0x188));
    if (plStack_68 == (long *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7d988;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_104a7d8c4;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar12;
LAB_104a7d8c4:
      _memmove(ppuVar5,puVar13,uVar12);
      ppuVar14 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar16 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar8 = (long *)param_4[1];
    uVar12 = plVar8[1];
    plVar6 = (long *)*plVar8;
    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
      plVar6 = plVar8;
    }
    *param_1 = (long)plVar6;
    param_1[1] = uVar12;
    uVar7 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7d988:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7d994);
  (*pcVar3)();
}



/* Entry: 104a7d7fc; end: 104a7d9bf;  */

void FUN_104a7d7fc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) >> 2 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,(long)*(int *)(*param_2 + 0x188));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7d988;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7d8c4;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7d8c4:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7d988:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7d994);
  (*pcVar4)();
}



/* Entry: 104a7d9c0; end: 104a7d9ff;  */

long * FUN_104a7d9c0(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  undefined1 *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0xc) ||
     (*param_2 != 0x6d69742d63707267 || (int)param_2[1] != 0x74756f65)) {
    if ((param_3 == (undefined1 *)0x1a) &&
       (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
        param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
      ppuVar5 = &puStack_80;
      ppuVar14 = &puStack_80;
      lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
        if (plStack_68 == (long *)0x0) {
          uVar12 = (ulong)bStack_60;
          puVar13 = &uStack_5f;
        }
        else {
          uVar12 = CONCAT71(uStack_5f,bStack_60);
          puVar13 = puStack_58;
          if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7ddb8;
        }
        if (uVar12 < 0x17) {
          uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
          if (uVar12 != 0) goto LAB_104a7dcf4;
        }
        else {
          uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
          if ((uVar12 | 7) != 0x17) {
            uVar10 = uVar12 | 7;
          }
          ppuVar5 = (undefined1 **)(uVar10 + 1);
          __Znwm();
          uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
          puStack_80 = (undefined1 *)ppuVar5;
          uStack_78 = uVar12;
LAB_104a7dcf4:
          _memmove(ppuVar5,puVar13,uVar12);
          ppuVar14 = ppuVar5;
        }
        *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
        puVar11 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = uStack_70;
        puVar11[1] = uStack_78;
        *puVar11 = puStack_80;
        uStack_70 = uStack_70 & 0xffffffffffffff;
        puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
        if ((long *)0x1 < plStack_68) {
          do {
            lVar16 = *plStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
            if (bVar2) {
              *plStack_68 = lVar16 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar16 + -1 == 0) {
            (*(code *)plStack_68[1])();
          }
        }
        plVar8 = (long *)param_4[1];
        uVar12 = plVar8[1];
        plVar6 = (long *)*plVar8;
        if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
          plVar6 = plVar8;
        }
        *param_1 = (long)plVar6;
        param_1[1] = uVar12;
        uVar7 = 1;
        param_4 = plStack_68;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_4;
      }
      ___stack_chk_fail();
LAB_104a7ddb8:
      func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
      (*pcVar3)();
    }
    if ((param_3 != (undefined1 *)0x16) ||
       ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
        *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
      if ((param_3 == (undefined1 *)0xa) &&
         (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x150) == 0) {
            lVar18 = lVar16 + 0x159;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x158);
            lVar18 = *(long *)(lVar16 + 0x160);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0xc) &&
         (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
        lVar16 = *param_4;
        if (*(char *)(lVar16 + 1) < '\0') {
          if (*(long *)(lVar16 + 0x130) == 0) {
            lVar18 = lVar16 + 0x139;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x138);
            lVar18 = *(long *)(lVar16 + 0x140);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 2) & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x110) == 0) {
            lVar18 = lVar16 + 0x119;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x118);
            lVar18 = *(long *)(lVar16 + 0x120);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0x19) &&
         (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
          param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xf0) == 0) {
            lVar18 = lVar16 + 0xf9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xf8);
            lVar18 = *(long *)(lVar16 + 0x100);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0x15) &&
         ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
          *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xd0) == 0) {
            lVar18 = lVar16 + 0xd9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xd8);
            lVar18 = *(long *)(lVar16 + 0xe0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0xe) &&
         (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0xb0) == 0) {
            lVar18 = lVar16 + 0xb9;
            uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0xb8);
            lVar18 = *(long *)(lVar16 + 0xc0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0xd) &&
         (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
        lVar16 = *param_4;
        if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          if (*(long *)(lVar16 + 0x90) == 0) {
            lVar18 = lVar16 + 0x99;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x98);
            lVar18 = *(long *)(lVar16 + 0xa0);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      if ((param_3 == (undefined1 *)0x13) &&
         ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
          *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
        unaff_x29 = &stack0xfffffffffffffff0;
        if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          return param_4;
        }
        unaff_x30 = FUN_104a7e44c;
        plVar6 = param_4;
        _abort();
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
        param_2 = param_4;
        param_4 = plVar6;
        param_1 = extraout_x8;
      }
      if ((param_3 == (undefined1 *)0xb) &&
         (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar16 = *param_4;
        unaff_x19 = param_4;
        plVar6 = param_4;
        if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        else {
          puVar11 = (undefined8 *)param_4[1];
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            *(undefined1 *)*puVar11 = 0;
            puVar11[1] = 0;
          }
          else {
            *(undefined1 *)puVar11 = 0;
            *(undefined1 *)((long)puVar11 + 0x17) = 0;
          }
          uVar12 = *(ulong *)(lVar16 + 0x60);
          unaff_x21 = (undefined8 *)(lVar16 + 0x68);
          if ((uVar12 & 1) != 0) {
            unaff_x21 = (undefined8 *)*unaff_x21;
          }
          if (1 < uVar12) {
            unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
            unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
            do {
              lVar16 = param_4[1];
              if (*(char *)(lVar16 + 0x17) < '\0') {
                if (*(long *)(lVar16 + 8) != 0) goto LAB_104a7e548;
              }
              else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_104a7e548:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (lVar16,0x2c);
              }
              FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
              uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
              param_3 = unaff_x23;
              if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
                param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
              }
              plVar6 = (long *)(param_3 + uVar12);
              FUN_104a7e67c(param_4[1]);
              unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
              if ((long *)0x1 < unaff_x19) {
                do {
                  lVar16 = *unaff_x19;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                  if (bVar2) {
                    *unaff_x19 = lVar16 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar16 + -1 == 0) {
                  (*(code *)unaff_x19[1])();
                }
              }
              unaff_x21 = unaff_x21 + 4;
            } while (unaff_x21 != unaff_x22);
          }
          plVar15 = (long *)param_4[1];
          uVar12 = plVar15[1];
          plVar8 = (long *)*plVar15;
          if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
            uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
            plVar8 = plVar15;
          }
          *param_1 = (long)plVar8;
          param_1[1] = uVar12;
          uVar7 = 1;
          unaff_x20 = param_4;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)
           ) {
          return unaff_x19;
        }
        ___stack_chk_fail();
        param_4 = plVar6;
        if ((int)param_3 != 0) {
          FUN_104bd46a0();
          func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
          param_4 = plVar6;
        }
        unaff_x30 = FUN_104a7e63c;
        param_2 = unaff_x19;
        __Unwind_Resume();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        param_1 = extraout_x8_00;
      }
      if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
        lVar16 = *param_4;
        if (*(char *)(lVar16 + 2) < '\0') {
          if (*(long *)(lVar16 + 0x40) == 0) {
            lVar18 = lVar16 + 0x49;
            uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
          }
          else {
            uVar12 = *(ulong *)(lVar16 + 0x48);
            lVar18 = *(long *)(lVar16 + 0x50);
          }
          *param_1 = lVar18;
          param_1[1] = uVar12;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 2) = uVar7;
        return param_4;
      }
      lVar16 = *param_4;
      plVar8 = (long *)param_4[1];
      plVar6 = (long *)(lVar16 + 0x1f0);
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      plVar15 = *(long **)(lVar16 + 0x1f8);
      if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
        lVar16 = 0;
        bVar2 = false;
        plVar17 = (long *)*param_1;
        uVar12 = param_1[1];
        do {
          if (plVar15[lVar16 * 8 + 2] == 0) {
            plVar6 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x19);
            puVar9 = (undefined1 *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
          }
          else {
            puVar9 = (undefined1 *)plVar15[lVar16 * 8 + 3];
            plVar6 = (long *)plVar15[lVar16 * 8 + 4];
          }
          if ((puVar9 == param_3) && (_memcmp(plVar6,param_2,param_3), (int)plVar6 == 0)) {
            if (bVar2) {
              *(long **)((long)register0x00000008 + -0xa0) = plVar17;
              *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
              *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
              *(undefined8 *)((long)register0x00000008 + -200) = 1;
              if (plVar15[lVar16 * 8 + 6] == 0) {
                lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
                uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
              }
              else {
                uVar12 = plVar15[lVar16 * 8 + 7];
                lVar18 = plVar15[lVar16 * 8 + 8];
              }
              *(long *)((long)register0x00000008 + -0x100) = lVar18;
              *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
              plVar6 = (long *)((long)register0x00000008 + -0xa0);
              func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar6,
                                  (undefined1 *)((long)register0x00000008 + -0xd0),
                                  (undefined1 *)((long)register0x00000008 + -0x100));
              if (*(char *)((long)plVar8 + 0x17) < '\0') {
                plVar6 = (long *)*plVar8;
                __ZdlPv();
              }
              uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
              plVar8[2] = uVar10;
              lVar18 = *(long *)((long)register0x00000008 + -0x118);
              plVar8[1] = *(long *)((long)register0x00000008 + -0x110);
              *plVar8 = lVar18;
              uVar12 = plVar8[1];
              plVar17 = (long *)*plVar8;
              if (-1 < (long)uVar10) {
                uVar12 = uVar10 >> 0x38;
                plVar17 = plVar8;
              }
              *param_1 = (long)plVar17;
              param_1[1] = uVar12;
            }
            else {
              if (plVar15[lVar16 * 8 + 6] == 0) {
                plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
                uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
              }
              else {
                uVar12 = plVar15[lVar16 * 8 + 7];
                plVar17 = (long *)plVar15[lVar16 * 8 + 8];
              }
              *param_1 = (long)plVar17;
              param_1[1] = uVar12;
              bVar2 = true;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          lVar16 = lVar16 + 1;
          do {
            if (lVar16 != plVar15[1]) goto LAB_104adee4c;
            lVar16 = 0;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
          lVar16 = 0;
LAB_104adee4c:
        } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70))
      {
        ___stack_chk_fail();
        iVar4 = (int)plVar6;
        __Unwind_Resume();
        plVar6 = (long *)"";
        if (iVar4 != 1) {
          plVar6 = (long *)"<discarded-invalid-value>";
        }
        plVar8 = (long *)"application/grpc";
        if (iVar4 != 0) {
          plVar8 = plVar6;
        }
        return plVar8;
      }
      return plVar6;
    }
    ppuVar5 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
      if (plStack_68 == (long *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7dfd8;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_104a7df14;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar5 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar5;
        uStack_78 = uVar12;
LAB_104a7df14:
        _memmove(ppuVar5,puVar13,uVar12);
        ppuVar14 = ppuVar5;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar16 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar8 = (long *)param_4[1];
      uVar12 = plVar8[1];
      plVar6 = (long *)*plVar8;
      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
        plVar6 = plVar8;
      }
      *param_1 = (long)plVar6;
      param_1[1] = uVar12;
      uVar7 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7dfd8:
    func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
    (*pcVar3)();
  }
  ppuVar5 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) >> 3 & 1) == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_4 + 0x180));
    if (plStack_68 == (long *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7db8c;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_104a7dac8;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar12;
LAB_104a7dac8:
      _memmove(ppuVar5,puVar13,uVar12);
      ppuVar14 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar16 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar8 = (long *)param_4[1];
    uVar12 = plVar8[1];
    plVar6 = (long *)*plVar8;
    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
      plVar6 = plVar8;
    }
    *param_1 = (long)plVar6;
    param_1[1] = uVar12;
    uVar7 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7db8c:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7db98);
  (*pcVar3)();
}



/* Entry: 104a7da00; end: 104a7dbc3;  */

void FUN_104a7da00(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) >> 3 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x00010061b528(&plStack_68,*(undefined8 *)(*param_2 + 0x180));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7db8c;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7dac8;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7dac8:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7db8c:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7db98);
  (*pcVar4)();
}



/* Entry: 104a7dbc4; end: 104a7dc2b;  */

long * FUN_104a7dbc4(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  undefined1 *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 == (undefined1 *)0x1a) &&
     (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
      param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
    ppuVar5 = &puStack_80;
    ppuVar14 = &puStack_80;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(*param_4 + 1) >> 4 & 1) == 0) {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_4 + 0x178));
      if (plStack_68 == (long *)0x0) {
        uVar12 = (ulong)bStack_60;
        puVar13 = &uStack_5f;
      }
      else {
        uVar12 = CONCAT71(uStack_5f,bStack_60);
        puVar13 = puStack_58;
        if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7ddb8;
      }
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
        if (uVar12 != 0) goto LAB_104a7dcf4;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        if ((uVar12 | 7) != 0x17) {
          uVar10 = uVar12 | 7;
        }
        ppuVar5 = (undefined1 **)(uVar10 + 1);
        __Znwm();
        uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
        puStack_80 = (undefined1 *)ppuVar5;
        uStack_78 = uVar12;
LAB_104a7dcf4:
        _memmove(ppuVar5,puVar13,uVar12);
        ppuVar14 = ppuVar5;
      }
      *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
      puVar11 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[2] = uStack_70;
      puVar11[1] = uStack_78;
      *puVar11 = puStack_80;
      uStack_70 = uStack_70 & 0xffffffffffffff;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
      if ((long *)0x1 < plStack_68) {
        do {
          lVar16 = *plStack_68;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
          if (bVar2) {
            *plStack_68 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_68[1])();
        }
      }
      plVar8 = (long *)param_4[1];
      uVar12 = plVar8[1];
      plVar6 = (long *)*plVar8;
      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
        plVar6 = plVar8;
      }
      *param_1 = (long)plVar6;
      param_1[1] = uVar12;
      uVar7 = 1;
      param_4 = plStack_68;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_4;
    }
    ___stack_chk_fail();
LAB_104a7ddb8:
    func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
    (*pcVar3)();
  }
  if ((param_3 != (undefined1 *)0x16) ||
     ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
      *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
    if ((param_3 == (undefined1 *)0xa) &&
       (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x150) == 0) {
          lVar18 = lVar16 + 0x159;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x158);
          lVar18 = *(long *)(lVar16 + 0x160);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xc) &&
       (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
      lVar16 = *param_4;
      if (*(char *)(lVar16 + 1) < '\0') {
        if (*(long *)(lVar16 + 0x130) == 0) {
          lVar18 = lVar16 + 0x139;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x138);
          lVar18 = *(long *)(lVar16 + 0x140);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x110) == 0) {
          lVar18 = lVar16 + 0x119;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x118);
          lVar18 = *(long *)(lVar16 + 0x120);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x19) &&
       (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
        param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xf0) == 0) {
          lVar18 = lVar16 + 0xf9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xf8);
          lVar18 = *(long *)(lVar16 + 0x100);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x15) &&
       ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
        *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xd0) == 0) {
          lVar18 = lVar16 + 0xd9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xd8);
          lVar18 = *(long *)(lVar16 + 0xe0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xe) &&
       (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xb0) == 0) {
          lVar18 = lVar16 + 0xb9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xb8);
          lVar18 = *(long *)(lVar16 + 0xc0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xd) &&
       (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x90) == 0) {
          lVar18 = lVar16 + 0x99;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x98);
          lVar18 = *(long *)(lVar16 + 0xa0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x13) &&
       ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
        *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
      unaff_x29 = &stack0xfffffffffffffff0;
      if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        return param_4;
      }
      unaff_x30 = FUN_104a7e44c;
      plVar6 = param_4;
      _abort();
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      param_2 = param_4;
      param_4 = plVar6;
      param_1 = extraout_x8;
    }
    if ((param_3 == (undefined1 *)0xb) &&
       (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *param_4;
      unaff_x19 = param_4;
      plVar6 = param_4;
      if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        puVar11 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          *(undefined1 *)*puVar11 = 0;
          puVar11[1] = 0;
        }
        else {
          *(undefined1 *)puVar11 = 0;
          *(undefined1 *)((long)puVar11 + 0x17) = 0;
        }
        uVar12 = *(ulong *)(lVar16 + 0x60);
        unaff_x21 = (undefined8 *)(lVar16 + 0x68);
        if ((uVar12 & 1) != 0) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        if (1 < uVar12) {
          unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
          do {
            lVar16 = param_4[1];
            if (*(char *)(lVar16 + 0x17) < '\0') {
              if (*(long *)(lVar16 + 8) != 0) goto LAB_104a7e548;
            }
            else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_104a7e548:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (lVar16,0x2c);
            }
            FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
            uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
            param_3 = unaff_x23;
            if (*(long *)((long)register0x00000008 + -0x68) != 0) {
              uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
              param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
            }
            plVar6 = (long *)(param_3 + uVar12);
            FUN_104a7e67c(param_4[1]);
            unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
            if ((long *)0x1 < unaff_x19) {
              do {
                lVar16 = *unaff_x19;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                if (bVar2) {
                  *unaff_x19 = lVar16 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar16 + -1 == 0) {
                (*(code *)unaff_x19[1])();
              }
            }
            unaff_x21 = unaff_x21 + 4;
          } while (unaff_x21 != unaff_x22);
        }
        plVar15 = (long *)param_4[1];
        uVar12 = plVar15[1];
        plVar8 = (long *)*plVar15;
        if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
          plVar8 = plVar15;
        }
        *param_1 = (long)plVar8;
        param_1[1] = uVar12;
        uVar7 = 1;
        unaff_x20 = param_4;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        return unaff_x19;
      }
      ___stack_chk_fail();
      param_4 = plVar6;
      if ((int)param_3 != 0) {
        FUN_104bd46a0();
        func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
        param_4 = plVar6;
      }
      unaff_x30 = FUN_104a7e63c;
      param_2 = unaff_x19;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
      param_1 = extraout_x8_00;
    }
    if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
      lVar16 = *param_4;
      if (*(char *)(lVar16 + 2) < '\0') {
        if (*(long *)(lVar16 + 0x40) == 0) {
          lVar18 = lVar16 + 0x49;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x48);
          lVar18 = *(long *)(lVar16 + 0x50);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    lVar16 = *param_4;
    plVar8 = (long *)param_4[1];
    plVar6 = (long *)(lVar16 + 0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    plVar15 = *(long **)(lVar16 + 0x1f8);
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      lVar16 = 0;
      bVar2 = false;
      plVar17 = (long *)*param_1;
      uVar12 = param_1[1];
      do {
        if (plVar15[lVar16 * 8 + 2] == 0) {
          plVar6 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x19);
          puVar9 = (undefined1 *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
        }
        else {
          puVar9 = (undefined1 *)plVar15[lVar16 * 8 + 3];
          plVar6 = (long *)plVar15[lVar16 * 8 + 4];
        }
        if ((puVar9 == param_3) && (_memcmp(plVar6,param_2,param_3), (int)plVar6 == 0)) {
          if (bVar2) {
            *(long **)((long)register0x00000008 + -0xa0) = plVar17;
            *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
            *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
            *(undefined8 *)((long)register0x00000008 + -200) = 1;
            if (plVar15[lVar16 * 8 + 6] == 0) {
              lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              lVar18 = plVar15[lVar16 * 8 + 8];
            }
            *(long *)((long)register0x00000008 + -0x100) = lVar18;
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
            plVar6 = (long *)((long)register0x00000008 + -0xa0);
            func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar6,
                                (undefined1 *)((long)register0x00000008 + -0xd0),
                                (undefined1 *)((long)register0x00000008 + -0x100));
            if (*(char *)((long)plVar8 + 0x17) < '\0') {
              plVar6 = (long *)*plVar8;
              __ZdlPv();
            }
            uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
            plVar8[2] = uVar10;
            lVar18 = *(long *)((long)register0x00000008 + -0x118);
            plVar8[1] = *(long *)((long)register0x00000008 + -0x110);
            *plVar8 = lVar18;
            uVar12 = plVar8[1];
            plVar17 = (long *)*plVar8;
            if (-1 < (long)uVar10) {
              uVar12 = uVar10 >> 0x38;
              plVar17 = plVar8;
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
          }
          else {
            if (plVar15[lVar16 * 8 + 6] == 0) {
              plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              plVar17 = (long *)plVar15[lVar16 * 8 + 8];
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
            bVar2 = true;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        lVar16 = lVar16 + 1;
        do {
          if (lVar16 != plVar15[1]) goto LAB_104adee4c;
          lVar16 = 0;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        lVar16 = 0;
LAB_104adee4c:
      } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)) {
      ___stack_chk_fail();
      iVar4 = (int)plVar6;
      __Unwind_Resume();
      plVar6 = (long *)"";
      if (iVar4 != 1) {
        plVar6 = (long *)"<discarded-invalid-value>";
      }
      plVar8 = (long *)"application/grpc";
      if (iVar4 != 0) {
        plVar8 = plVar6;
      }
      return plVar8;
    }
    return plVar6;
  }
  ppuVar5 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
    if (plStack_68 == (long *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7dfd8;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_104a7df14;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar12;
LAB_104a7df14:
      _memmove(ppuVar5,puVar13,uVar12);
      ppuVar14 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar16 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar8 = (long *)param_4[1];
    uVar12 = plVar8[1];
    plVar6 = (long *)*plVar8;
    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
      plVar6 = plVar8;
    }
    *param_1 = (long)plVar6;
    param_1[1] = uVar12;
    uVar7 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7dfd8:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
  (*pcVar3)();
}



/* Entry: 104a7dc2c; end: 104a7ddef;  */

void FUN_104a7dc2c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) >> 4 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined4 *)(*param_2 + 0x178));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7ddb8;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7dcf4;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7dcf4:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7ddb8:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7ddc4);
  (*pcVar4)();
}



/* Entry: 104a7ddf0; end: 104a7de4b;  */

long * FUN_104a7ddf0(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined7 *puVar13;
  undefined1 *unaff_x23;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar18;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  if ((param_3 != (undefined1 *)0x16) ||
     ((*param_2 != 0x7465722d63707267 || param_2[1] != 0x62687375702d7972) ||
      *(long *)((long)param_2 + 0xe) != 0x736d2d6b63616268)) {
    if ((param_3 == (undefined1 *)0xa) &&
       (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 1) >> 6 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x150) == 0) {
          lVar18 = lVar16 + 0x159;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x158);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x158);
          lVar18 = *(long *)(lVar16 + 0x160);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xc) &&
       (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
      lVar16 = *param_4;
      if (*(char *)(lVar16 + 1) < '\0') {
        if (*(long *)(lVar16 + 0x130) == 0) {
          lVar18 = lVar16 + 0x139;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x138);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x138);
          lVar18 = *(long *)(lVar16 + 0x140);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x110) == 0) {
          lVar18 = lVar16 + 0x119;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x118);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x118);
          lVar18 = *(long *)(lVar16 + 0x120);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x19) &&
       (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
        param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 1 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xf0) == 0) {
          lVar18 = lVar16 + 0xf9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xf8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xf8);
          lVar18 = *(long *)(lVar16 + 0x100);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x15) &&
       ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
        *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 2 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xd0) == 0) {
          lVar18 = lVar16 + 0xd9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xd8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xd8);
          lVar18 = *(long *)(lVar16 + 0xe0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xe) &&
       (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 3 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0xb0) == 0) {
          lVar18 = lVar16 + 0xb9;
          uVar12 = (ulong)*(byte *)(lVar16 + 0xb8);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0xb8);
          lVar18 = *(long *)(lVar16 + 0xc0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0xd) &&
       (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
      lVar16 = *param_4;
      if ((*(byte *)(lVar16 + 2) >> 4 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        if (*(long *)(lVar16 + 0x90) == 0) {
          lVar18 = lVar16 + 0x99;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x98);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x98);
          lVar18 = *(long *)(lVar16 + 0xa0);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    if ((param_3 == (undefined1 *)0x13) &&
       ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
        *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
      unaff_x29 = &stack0xfffffffffffffff0;
      if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        return param_4;
      }
      unaff_x30 = FUN_104a7e44c;
      plVar6 = param_4;
      _abort();
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      param_2 = param_4;
      param_4 = plVar6;
      param_1 = extraout_x8;
    }
    if ((param_3 == (undefined1 *)0xb) &&
       (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *param_4;
      unaff_x19 = param_4;
      plVar6 = param_4;
      if ((*(byte *)(lVar16 + 2) >> 6 & 1) == 0) {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        puVar11 = (undefined8 *)param_4[1];
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          *(undefined1 *)*puVar11 = 0;
          puVar11[1] = 0;
        }
        else {
          *(undefined1 *)puVar11 = 0;
          *(undefined1 *)((long)puVar11 + 0x17) = 0;
        }
        uVar12 = *(ulong *)(lVar16 + 0x60);
        unaff_x21 = (undefined8 *)(lVar16 + 0x68);
        if ((uVar12 & 1) != 0) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        if (1 < uVar12) {
          unaff_x22 = unaff_x21 + (uVar12 >> 1) * 4;
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
          do {
            lVar16 = param_4[1];
            if (*(char *)(lVar16 + 0x17) < '\0') {
              if (*(long *)(lVar16 + 8) != 0) goto LAB_104a7e548;
            }
            else if (*(char *)(lVar16 + 0x17) != '\0') {
LAB_104a7e548:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (lVar16,0x2c);
            }
            FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
            uVar12 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
            param_3 = unaff_x23;
            if (*(long *)((long)register0x00000008 + -0x68) != 0) {
              uVar12 = *(ulong *)((long)register0x00000008 + -0x60);
              param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
            }
            plVar6 = (long *)(param_3 + uVar12);
            FUN_104a7e67c(param_4[1]);
            unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
            if ((long *)0x1 < unaff_x19) {
              do {
                lVar16 = *unaff_x19;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
                if (bVar2) {
                  *unaff_x19 = lVar16 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar16 + -1 == 0) {
                (*(code *)unaff_x19[1])();
              }
            }
            unaff_x21 = unaff_x21 + 4;
          } while (unaff_x21 != unaff_x22);
        }
        plVar15 = (long *)param_4[1];
        uVar12 = plVar15[1];
        plVar8 = (long *)*plVar15;
        if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar15 + 0x17);
          plVar8 = plVar15;
        }
        *param_1 = (long)plVar8;
        param_1[1] = uVar12;
        uVar7 = 1;
        unaff_x20 = param_4;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        return unaff_x19;
      }
      ___stack_chk_fail();
      param_4 = plVar6;
      if ((int)param_3 != 0) {
        FUN_104bd46a0();
        func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
        param_4 = plVar6;
      }
      unaff_x30 = FUN_104a7e63c;
      param_2 = unaff_x19;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
      param_1 = extraout_x8_00;
    }
    if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
      lVar16 = *param_4;
      if (*(char *)(lVar16 + 2) < '\0') {
        if (*(long *)(lVar16 + 0x40) == 0) {
          lVar18 = lVar16 + 0x49;
          uVar12 = (ulong)*(byte *)(lVar16 + 0x48);
        }
        else {
          uVar12 = *(ulong *)(lVar16 + 0x48);
          lVar18 = *(long *)(lVar16 + 0x50);
        }
        *param_1 = lVar18;
        param_1[1] = uVar12;
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar7;
      return param_4;
    }
    lVar16 = *param_4;
    plVar8 = (long *)param_4[1];
    plVar6 = (long *)(lVar16 + 0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    plVar15 = *(long **)(lVar16 + 0x1f8);
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      lVar16 = 0;
      bVar2 = false;
      plVar17 = (long *)*param_1;
      uVar12 = param_1[1];
      do {
        if (plVar15[lVar16 * 8 + 2] == 0) {
          plVar6 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x19);
          puVar9 = (undefined1 *)(ulong)*(byte *)(plVar15 + lVar16 * 8 + 3);
        }
        else {
          puVar9 = (undefined1 *)plVar15[lVar16 * 8 + 3];
          plVar6 = (long *)plVar15[lVar16 * 8 + 4];
        }
        if ((puVar9 == param_3) && (_memcmp(plVar6,param_2,param_3), (int)plVar6 == 0)) {
          if (bVar2) {
            *(long **)((long)register0x00000008 + -0xa0) = plVar17;
            *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
            *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
            *(undefined8 *)((long)register0x00000008 + -200) = 1;
            if (plVar15[lVar16 * 8 + 6] == 0) {
              lVar18 = (long)plVar15 + lVar16 * 0x40 + 0x39;
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              lVar18 = plVar15[lVar16 * 8 + 8];
            }
            *(long *)((long)register0x00000008 + -0x100) = lVar18;
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
            plVar6 = (long *)((long)register0x00000008 + -0xa0);
            func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar6,
                                (undefined1 *)((long)register0x00000008 + -0xd0),
                                (undefined1 *)((long)register0x00000008 + -0x100));
            if (*(char *)((long)plVar8 + 0x17) < '\0') {
              plVar6 = (long *)*plVar8;
              __ZdlPv();
            }
            uVar10 = *(ulong *)((long)register0x00000008 + -0x108);
            plVar8[2] = uVar10;
            lVar18 = *(long *)((long)register0x00000008 + -0x118);
            plVar8[1] = *(long *)((long)register0x00000008 + -0x110);
            *plVar8 = lVar18;
            uVar12 = plVar8[1];
            plVar17 = (long *)*plVar8;
            if (-1 < (long)uVar10) {
              uVar12 = uVar10 >> 0x38;
              plVar17 = plVar8;
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
          }
          else {
            if (plVar15[lVar16 * 8 + 6] == 0) {
              plVar17 = (long *)((long)plVar15 + lVar16 * 0x40 + 0x39);
              uVar12 = (ulong)*(byte *)(plVar15 + lVar16 * 8 + 7);
            }
            else {
              uVar12 = plVar15[lVar16 * 8 + 7];
              plVar17 = (long *)plVar15[lVar16 * 8 + 8];
            }
            *param_1 = (long)plVar17;
            param_1[1] = uVar12;
            bVar2 = true;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        lVar16 = lVar16 + 1;
        do {
          if (lVar16 != plVar15[1]) goto LAB_104adee4c;
          lVar16 = 0;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        lVar16 = 0;
LAB_104adee4c:
      } while ((plVar15 != (long *)0x0) || (lVar16 != 0));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)) {
      ___stack_chk_fail();
      iVar4 = (int)plVar6;
      __Unwind_Resume();
      plVar6 = (long *)"";
      if (iVar4 != 1) {
        plVar6 = (long *)"<discarded-invalid-value>";
      }
      plVar8 = (long *)"application/grpc";
      if (iVar4 != 0) {
        plVar8 = plVar6;
      }
      return plVar8;
    }
    return plVar6;
  }
  ppuVar5 = &puStack_80;
  ppuVar14 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_4 + 1) >> 5 & 1) == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_4 + 0x170));
    if (plStack_68 == (long *)0x0) {
      uVar12 = (ulong)bStack_60;
      puVar13 = &uStack_5f;
    }
    else {
      uVar12 = CONCAT71(uStack_5f,bStack_60);
      puVar13 = puStack_58;
      if (0x7ffffffffffffff7 < uVar12) goto LAB_104a7dfd8;
    }
    if (uVar12 < 0x17) {
      uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
      if (uVar12 != 0) goto LAB_104a7df14;
    }
    else {
      uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar10 = uVar12 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar10 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar10 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar12;
LAB_104a7df14:
      _memmove(ppuVar5,puVar13,uVar12);
      ppuVar14 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar14 + uVar12) = 0;
    puVar11 = (undefined8 *)param_4[1];
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    puVar11[2] = uStack_70;
    puVar11[1] = uStack_78;
    *puVar11 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar16 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    plVar8 = (long *)param_4[1];
    uVar12 = plVar8[1];
    plVar6 = (long *)*plVar8;
    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar8 + 0x17);
      plVar6 = plVar8;
    }
    *param_1 = (long)plVar6;
    param_1[1] = uVar12;
    uVar7 = 1;
    param_4 = plStack_68;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
LAB_104a7dfd8:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
  (*pcVar3)();
}



/* Entry: 104a7de4c; end: 104a7e00f;  */

void FUN_104a7de4c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined7 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined7 *puStack_58;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar12 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 1) >> 5 & 1) == 0) {
    uVar6 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_104a7a584(&plStack_68,*(undefined8 *)(*param_2 + 0x170));
    if (plStack_68 == (long *)0x0) {
      uVar9 = (ulong)bStack_60;
      puVar11 = &uStack_5f;
    }
    else {
      uVar9 = CONCAT71(uStack_5f,bStack_60);
      puVar11 = puStack_58;
      if (0x7ffffffffffffff7 < uVar9) goto LAB_104a7dfd8;
    }
    if (uVar9 < 0x17) {
      uStack_70 = CONCAT17((char)uVar9,(undefined7)uStack_70);
      if (uVar9 != 0) goto LAB_104a7df14;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      ppuVar5 = (undefined1 **)(uVar1 + 1);
      __Znwm();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar5;
      uStack_78 = uVar9;
LAB_104a7df14:
      _memmove(ppuVar5,puVar11,uVar9);
      ppuVar12 = ppuVar5;
    }
    *(undefined1 *)((long)ppuVar12 + uVar9) = 0;
    puVar10 = (undefined8 *)param_2[1];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      __ZdlPv(*puVar10);
    }
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = puStack_80;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffffffffff00);
    if ((long *)0x1 < plStack_68) {
      do {
        lVar7 = *plStack_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar3) {
          *plStack_68 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    uVar9 = puVar8[1];
    puVar10 = (undefined8 *)*puVar8;
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
      puVar10 = puVar8;
    }
    *param_1 = puVar10;
    param_1[1] = uVar9;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a7dfd8:
  func_0x000104a6fa5c(&puStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a7dfe4);
  (*pcVar4)();
}



/* Entry: 104a7e010; end: 104a7e423;  */

long * FUN_104a7e010(long *param_1,long *param_2,undefined1 *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  long *plVar11;
  undefined8 unaff_x24;
  long lVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar14;
  
  if ((param_3 == (undefined1 *)0xa) &&
     (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 1) >> 6 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x150) == 0) {
        lVar14 = lVar12 + 0x159;
        uVar10 = (ulong)*(byte *)(lVar12 + 0x158);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x158);
        lVar14 = *(long *)(lVar12 + 0x160);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0xc) &&
     (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
    lVar12 = *param_4;
    if (*(char *)(lVar12 + 1) < '\0') {
      if (*(long *)(lVar12 + 0x130) == 0) {
        lVar14 = lVar12 + 0x139;
        uVar10 = (ulong)*(byte *)(lVar12 + 0x138);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x138);
        lVar14 = *(long *)(lVar12 + 0x140);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0x4) && ((int)*param_2 == 0x74736f68)) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 2) & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x110) == 0) {
        lVar14 = lVar12 + 0x119;
        uVar10 = (ulong)*(byte *)(lVar12 + 0x118);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x118);
        lVar14 = *(long *)(lVar12 + 0x120);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0x19) &&
     (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
      param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 2) >> 1 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0xf0) == 0) {
        lVar14 = lVar12 + 0xf9;
        uVar10 = (ulong)*(byte *)(lVar12 + 0xf8);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0xf8);
        lVar14 = *(long *)(lVar12 + 0x100);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0x15) &&
     ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 2) >> 2 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0xd0) == 0) {
        lVar14 = lVar12 + 0xd9;
        uVar10 = (ulong)*(byte *)(lVar12 + 0xd8);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0xd8);
        lVar14 = *(long *)(lVar12 + 0xe0);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0xe) &&
     (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 2) >> 3 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0xb0) == 0) {
        lVar14 = lVar12 + 0xb9;
        uVar10 = (ulong)*(byte *)(lVar12 + 0xb8);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0xb8);
        lVar14 = *(long *)(lVar12 + 0xc0);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0xd) &&
     (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
    lVar12 = *param_4;
    if ((*(byte *)(lVar12 + 2) >> 4 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x90) == 0) {
        lVar14 = lVar12 + 0x99;
        uVar10 = (ulong)*(byte *)(lVar12 + 0x98);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x98);
        lVar14 = *(long *)(lVar12 + 0xa0);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  if ((param_3 == (undefined1 *)0x13) &&
     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    if ((*(byte *)(*param_4 + 2) >> 5 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      return param_4;
    }
    unaff_x30 = FUN_104a7e44c;
    plVar5 = param_4;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_4;
    param_4 = plVar5;
    param_1 = extraout_x8;
  }
  if ((param_3 == (undefined1 *)0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = *param_4;
    unaff_x19 = param_4;
    plVar5 = param_4;
    if ((*(byte *)(lVar12 + 2) >> 6 & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      puVar9 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        *(undefined1 *)*puVar9 = 0;
        puVar9[1] = 0;
      }
      else {
        *(undefined1 *)puVar9 = 0;
        *(undefined1 *)((long)puVar9 + 0x17) = 0;
      }
      uVar10 = *(ulong *)(lVar12 + 0x60);
      unaff_x21 = (undefined8 *)(lVar12 + 0x68);
      if ((uVar10 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      if (1 < uVar10) {
        unaff_x22 = unaff_x21 + (uVar10 >> 1) * 4;
        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x5f);
        do {
          lVar12 = param_4[1];
          if (*(char *)(lVar12 + 0x17) < '\0') {
            if (*(long *)(lVar12 + 8) != 0) goto LAB_104a7e548;
          }
          else if (*(char *)(lVar12 + 0x17) != '\0') {
LAB_104a7e548:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar12,0x2c);
          }
          FUN_104adf18c((undefined1 *)((long)register0x00000008 + -0x68),unaff_x21);
          uVar10 = *(ulong *)((long)register0x00000008 + -0x60) & 0xff;
          param_3 = unaff_x23;
          if (*(long *)((long)register0x00000008 + -0x68) != 0) {
            uVar10 = *(ulong *)((long)register0x00000008 + -0x60);
            param_3 = *(undefined1 **)((long)register0x00000008 + -0x58);
          }
          plVar5 = (long *)(param_3 + uVar10);
          FUN_104a7e67c(param_4[1]);
          unaff_x19 = *(long **)((long)register0x00000008 + -0x68);
          if ((long *)0x1 < unaff_x19) {
            do {
              lVar12 = *unaff_x19;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
              if (bVar3) {
                *unaff_x19 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 + -1 == 0) {
              (*(code *)unaff_x19[1])();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar11 = (long *)param_4[1];
      uVar10 = plVar11[1];
      plVar1 = (long *)*plVar11;
      if (-1 < (char)*(byte *)((long)plVar11 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)plVar11 + 0x17);
        plVar1 = plVar11;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar10;
      uVar8 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = plVar5;
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90((undefined1 *)((long)register0x00000008 + -0x68));
      param_4 = plVar5;
    }
    unaff_x30 = FUN_104a7e63c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_1 = extraout_x8_00;
  }
  if ((param_3 == (undefined1 *)0x8) && (*param_2 == 0x6e656b6f742d626c)) {
    lVar12 = *param_4;
    if (*(char *)(lVar12 + 2) < '\0') {
      if (*(long *)(lVar12 + 0x40) == 0) {
        lVar14 = lVar12 + 0x49;
        uVar10 = (ulong)*(byte *)(lVar12 + 0x48);
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x48);
        lVar14 = *(long *)(lVar12 + 0x50);
      }
      *param_1 = lVar14;
      param_1[1] = uVar10;
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar8;
    return param_4;
  }
  lVar12 = *param_4;
  plVar1 = (long *)param_4[1];
  plVar5 = (long *)(lVar12 + 0x1f0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar11 = *(long **)(lVar12 + 0x1f8);
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    lVar12 = 0;
    bVar3 = false;
    plVar13 = (long *)*param_1;
    uVar10 = param_1[1];
    do {
      if (plVar11[lVar12 * 8 + 2] == 0) {
        plVar5 = (long *)((long)plVar11 + lVar12 * 0x40 + 0x19);
        puVar6 = (undefined1 *)(ulong)*(byte *)(plVar11 + lVar12 * 8 + 3);
      }
      else {
        puVar6 = (undefined1 *)plVar11[lVar12 * 8 + 3];
        plVar5 = (long *)plVar11[lVar12 * 8 + 4];
      }
      if ((puVar6 == param_3) && (_memcmp(plVar5,param_2,param_3), (int)plVar5 == 0)) {
        if (bVar3) {
          *(long **)((long)register0x00000008 + -0xa0) = plVar13;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar10;
          *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
          *(undefined8 *)((long)register0x00000008 + -200) = 1;
          if (plVar11[lVar12 * 8 + 6] == 0) {
            lVar14 = (long)plVar11 + lVar12 * 0x40 + 0x39;
            uVar10 = (ulong)*(byte *)(plVar11 + lVar12 * 8 + 7);
          }
          else {
            uVar10 = plVar11[lVar12 * 8 + 7];
            lVar14 = plVar11[lVar12 * 8 + 8];
          }
          *(long *)((long)register0x00000008 + -0x100) = lVar14;
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar10;
          plVar5 = (long *)((long)register0x00000008 + -0xa0);
          func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar5,
                              (undefined1 *)((long)register0x00000008 + -0xd0),
                              (undefined1 *)((long)register0x00000008 + -0x100));
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            plVar5 = (long *)*plVar1;
            __ZdlPv();
          }
          uVar7 = *(ulong *)((long)register0x00000008 + -0x108);
          plVar1[2] = uVar7;
          lVar14 = *(long *)((long)register0x00000008 + -0x118);
          plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
          *plVar1 = lVar14;
          uVar10 = plVar1[1];
          plVar13 = (long *)*plVar1;
          if (-1 < (long)uVar7) {
            uVar10 = uVar7 >> 0x38;
            plVar13 = plVar1;
          }
          *param_1 = (long)plVar13;
          param_1[1] = uVar10;
        }
        else {
          if (plVar11[lVar12 * 8 + 6] == 0) {
            plVar13 = (long *)((long)plVar11 + lVar12 * 0x40 + 0x39);
            uVar10 = (ulong)*(byte *)(plVar11 + lVar12 * 8 + 7);
          }
          else {
            uVar10 = plVar11[lVar12 * 8 + 7];
            plVar13 = (long *)plVar11[lVar12 * 8 + 8];
          }
          *param_1 = (long)plVar13;
          param_1[1] = uVar10;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar12 = lVar12 + 1;
      do {
        if (lVar12 != plVar11[1]) goto LAB_104adee4c;
        lVar12 = 0;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      lVar12 = 0;
LAB_104adee4c:
    } while ((plVar11 != (long *)0x0) || (lVar12 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)) {
    ___stack_chk_fail();
    iVar4 = (int)plVar5;
    __Unwind_Resume();
    plVar5 = (long *)"";
    if (iVar4 != 1) {
      plVar5 = (long *)"<discarded-invalid-value>";
    }
    plVar1 = (long *)"application/grpc";
    if (iVar4 != 0) {
      plVar1 = plVar5;
    }
    return plVar1;
  }
  return plVar5;
}



/* Entry: 104a7e424; end: 104a7e44b;  */

long * FUN_104a7e424(undefined1 *param_1,long *param_2,ulong param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined1 uVar7;
  long *extraout_x8;
  long *plVar8;
  long *extraout_x8_00;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long *plVar12;
  undefined8 unaff_x24;
  long lVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar14;
  undefined1 **ppuVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((*(byte *)(*param_2 + 2) >> 5 & 1) == 0) {
    *param_1 = 0;
    param_1[0x10] = 0;
    return param_2;
  }
  pcVar16 = FUN_104a7e44c;
  _abort();
  puVar3 = &stack0xfffffffffffffff0;
  plVar6 = extraout_x8;
  ppuVar15 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((param_3 == 0xb) &&
     (puVar3 = &stack0xfffffffffffffff0, ppuVar15 = (undefined1 **)&stack0xfffffffffffffff0,
     *param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    pcStack_18 = FUN_104a7e44c;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *param_4;
    unaff_x19 = param_4;
    plVar6 = param_4;
    if ((*(byte *)(lVar13 + 2) >> 6 & 1) == 0) {
      uVar7 = 0;
      *(undefined1 *)extraout_x8 = 0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      puVar10 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        *(undefined1 *)*puVar10 = 0;
        puVar10[1] = 0;
      }
      else {
        *(undefined1 *)puVar10 = 0;
        *(undefined1 *)((long)puVar10 + 0x17) = 0;
      }
      uVar11 = *(ulong *)(lVar13 + 0x60);
      unaff_x21 = (undefined8 *)(lVar13 + 0x68);
      if ((uVar11 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      puStack_20 = &stack0xfffffffffffffff0;
      if (1 < uVar11) {
        unaff_x22 = unaff_x21 + (uVar11 >> 1) * 4;
        unaff_x23 = (long)&uStack_70 + 1;
        puStack_20 = &stack0xfffffffffffffff0;
        do {
          lVar13 = param_4[1];
          if (*(char *)(lVar13 + 0x17) < '\0') {
            if (*(long *)(lVar13 + 8) != 0) goto LAB_104a7e548;
          }
          else if (*(char *)(lVar13 + 0x17) != '\0') {
LAB_104a7e548:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar13,0x2c);
          }
          FUN_104adf18c(&plStack_78,unaff_x21);
          uVar11 = uStack_70 & 0xff;
          param_3 = unaff_x23;
          if (plStack_78 != (long *)0x0) {
            uVar11 = uStack_70;
            param_3 = uStack_68;
          }
          plVar6 = (long *)(param_3 + uVar11);
          FUN_104a7e67c(param_4[1]);
          unaff_x19 = plStack_78;
          if ((long *)0x1 < plStack_78) {
            do {
              lVar13 = *plStack_78;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plStack_78,0x10);
              if (bVar2) {
                *plStack_78 = lVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar13 + -1 == 0) {
              (*(code *)plStack_78[1])();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar8 = (long *)param_4[1];
      uVar11 = plVar8[1];
      plVar5 = (long *)*plVar8;
      if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
        uVar11 = (ulong)*(byte *)((long)plVar8 + 0x17);
        plVar5 = plVar8;
      }
      *extraout_x8 = (long)plVar5;
      extraout_x8[1] = uVar11;
      uVar7 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = plVar6;
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_78);
      param_4 = plVar6;
    }
    pcVar16 = FUN_104a7e63c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    puVar3 = auStack_80;
    plVar6 = extraout_x8_00;
    ppuVar15 = &puStack_20;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    lVar13 = *param_4;
    if (*(char *)(lVar13 + 2) < '\0') {
      if (*(long *)(lVar13 + 0x40) == 0) {
        lVar17 = lVar13 + 0x49;
        uVar11 = (ulong)*(byte *)(lVar13 + 0x48);
      }
      else {
        uVar11 = *(ulong *)(lVar13 + 0x48);
        lVar17 = *(long *)(lVar13 + 0x50);
      }
      *plVar6 = lVar17;
      plVar6[1] = uVar11;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      *(undefined1 *)plVar6 = 0;
    }
    *(undefined1 *)(plVar6 + 2) = uVar7;
    return param_4;
  }
  lVar13 = *param_4;
  plVar8 = (long *)param_4[1];
  plVar5 = (long *)(lVar13 + 0x1f0);
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(ulong *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar15;
  *(code **)(puVar3 + -8) = pcVar16;
  *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)plVar6 = 0;
  *(undefined1 *)(plVar6 + 2) = 0;
  plVar12 = *(long **)(lVar13 + 0x1f8);
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    lVar13 = 0;
    bVar2 = false;
    plVar14 = (long *)*plVar6;
    uVar11 = plVar6[1];
    do {
      if (plVar12[lVar13 * 8 + 2] == 0) {
        plVar5 = (long *)((long)plVar12 + lVar13 * 0x40 + 0x19);
        uVar9 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 3);
      }
      else {
        uVar9 = plVar12[lVar13 * 8 + 3];
        plVar5 = (long *)plVar12[lVar13 * 8 + 4];
      }
      if ((uVar9 == param_3) && (_memcmp(plVar5,param_2,param_3), (int)plVar5 == 0)) {
        if (bVar2) {
          *(long **)(puVar3 + -0xa0) = plVar14;
          *(ulong *)(puVar3 + -0x98) = uVar11;
          *(undefined **)(puVar3 + -0xd0) = &DAT_10f68e8ee;
          *(undefined8 *)(puVar3 + -200) = 1;
          if (plVar12[lVar13 * 8 + 6] == 0) {
            lVar17 = (long)plVar12 + lVar13 * 0x40 + 0x39;
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            lVar17 = plVar12[lVar13 * 8 + 8];
          }
          *(long *)(puVar3 + -0x100) = lVar17;
          *(ulong *)(puVar3 + -0xf8) = uVar11;
          plVar5 = (long *)(puVar3 + -0xa0);
          func_0x000100066c24(puVar3 + -0x118,plVar5,puVar3 + -0xd0,puVar3 + -0x100);
          if (*(char *)((long)plVar8 + 0x17) < '\0') {
            plVar5 = (long *)*plVar8;
            __ZdlPv();
          }
          uVar9 = *(ulong *)(puVar3 + -0x108);
          plVar8[2] = uVar9;
          lVar17 = *(long *)(puVar3 + -0x118);
          plVar8[1] = *(long *)(puVar3 + -0x110);
          *plVar8 = lVar17;
          uVar11 = plVar8[1];
          plVar14 = (long *)*plVar8;
          if (-1 < (long)uVar9) {
            uVar11 = uVar9 >> 0x38;
            plVar14 = plVar8;
          }
          *plVar6 = (long)plVar14;
          plVar6[1] = uVar11;
        }
        else {
          if (plVar12[lVar13 * 8 + 6] == 0) {
            plVar14 = (long *)((long)plVar12 + lVar13 * 0x40 + 0x39);
            uVar11 = (ulong)*(byte *)(plVar12 + lVar13 * 8 + 7);
          }
          else {
            uVar11 = plVar12[lVar13 * 8 + 7];
            plVar14 = (long *)plVar12[lVar13 * 8 + 8];
          }
          *plVar6 = (long)plVar14;
          plVar6[1] = uVar11;
          bVar2 = true;
          *(undefined1 *)(plVar6 + 2) = 1;
        }
      }
      lVar13 = lVar13 + 1;
      do {
        if (lVar13 != plVar12[1]) goto LAB_104adee4c;
        lVar13 = 0;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
      lVar13 = 0;
LAB_104adee4c:
    } while ((plVar12 != (long *)0x0) || (lVar13 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar3 + -0x70)) {
    ___stack_chk_fail();
    iVar4 = (int)plVar5;
    __Unwind_Resume();
    plVar6 = (long *)"";
    if (iVar4 != 1) {
      plVar6 = (long *)"<discarded-invalid-value>";
    }
    plVar5 = (long *)"application/grpc";
    if (iVar4 != 0) {
      plVar5 = plVar6;
    }
    return plVar5;
  }
  return plVar5;
}



/* Entry: 104a7e44c; end: 104a7e493;  */

long * FUN_104a7e44c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined1 uVar6;
  long *extraout_x8;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long *plVar10;
  undefined8 unaff_x24;
  long lVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar12;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar13;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_48;
  
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = *param_4;
    unaff_x19 = param_4;
    plVar5 = param_4;
    if ((*(byte *)(lVar11 + 2) >> 6 & 1) == 0) {
      uVar6 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      puVar8 = (undefined8 *)param_4[1];
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        *(undefined1 *)*puVar8 = 0;
        puVar8[1] = 0;
      }
      else {
        *(undefined1 *)puVar8 = 0;
        *(undefined1 *)((long)puVar8 + 0x17) = 0;
      }
      uVar9 = *(ulong *)(lVar11 + 0x60);
      unaff_x21 = (undefined8 *)(lVar11 + 0x68);
      if ((uVar9 & 1) != 0) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      if (1 < uVar9) {
        unaff_x22 = unaff_x21 + (uVar9 >> 1) * 4;
        unaff_x23 = (long)&uStack_60 + 1;
        do {
          lVar11 = param_4[1];
          if (*(char *)(lVar11 + 0x17) < '\0') {
            if (*(long *)(lVar11 + 8) != 0) goto LAB_104a7e548;
          }
          else if (*(char *)(lVar11 + 0x17) != '\0') {
LAB_104a7e548:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (lVar11,0x2c);
          }
          FUN_104adf18c(&plStack_68,unaff_x21);
          uVar9 = uStack_60 & 0xff;
          param_3 = unaff_x23;
          if (plStack_68 != (long *)0x0) {
            uVar9 = uStack_60;
            param_3 = uStack_58;
          }
          plVar5 = (long *)(param_3 + uVar9);
          FUN_104a7e67c(param_4[1]);
          unaff_x19 = plStack_68;
          if ((long *)0x1 < plStack_68) {
            do {
              lVar11 = *plStack_68;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
              if (bVar3) {
                *plStack_68 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plStack_68[1])();
            }
          }
          unaff_x21 = unaff_x21 + 4;
        } while (unaff_x21 != unaff_x22);
      }
      plVar10 = (long *)param_4[1];
      uVar9 = plVar10[1];
      plVar1 = (long *)*plVar10;
      if (-1 < (char)*(byte *)((long)plVar10 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)plVar10 + 0x17);
        plVar1 = plVar10;
      }
      *param_1 = (long)plVar1;
      param_1[1] = uVar9;
      uVar6 = 1;
      unaff_x20 = param_4;
    }
    *(undefined1 *)(param_1 + 2) = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_4 = plVar5;
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_68);
      param_4 = plVar5;
    }
    unaff_x30 = FUN_104a7e63c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    param_1 = extraout_x8;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    lVar11 = *param_4;
    if (*(char *)(lVar11 + 2) < '\0') {
      if (*(long *)(lVar11 + 0x40) == 0) {
        lVar13 = lVar11 + 0x49;
        uVar9 = (ulong)*(byte *)(lVar11 + 0x48);
      }
      else {
        uVar9 = *(ulong *)(lVar11 + 0x48);
        lVar13 = *(long *)(lVar11 + 0x50);
      }
      *param_1 = lVar13;
      param_1[1] = uVar9;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar6;
    return param_4;
  }
  lVar11 = *param_4;
  plVar1 = (long *)param_4[1];
  plVar5 = (long *)(lVar11 + 0x1f0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar10 = *(long **)(lVar11 + 0x1f8);
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    lVar11 = 0;
    bVar3 = false;
    plVar12 = (long *)*param_1;
    uVar9 = param_1[1];
    do {
      if (plVar10[lVar11 * 8 + 2] == 0) {
        plVar5 = (long *)((long)plVar10 + lVar11 * 0x40 + 0x19);
        uVar7 = (ulong)*(byte *)(plVar10 + lVar11 * 8 + 3);
      }
      else {
        uVar7 = plVar10[lVar11 * 8 + 3];
        plVar5 = (long *)plVar10[lVar11 * 8 + 4];
      }
      if ((uVar7 == param_3) && (_memcmp(plVar5,param_2,param_3), (int)plVar5 == 0)) {
        if (bVar3) {
          *(long **)((long)register0x00000008 + -0xa0) = plVar12;
          *(ulong *)((long)register0x00000008 + -0x98) = uVar9;
          *(undefined **)((long)register0x00000008 + -0xd0) = &DAT_10f68e8ee;
          *(undefined8 *)((long)register0x00000008 + -200) = 1;
          if (plVar10[lVar11 * 8 + 6] == 0) {
            lVar13 = (long)plVar10 + lVar11 * 0x40 + 0x39;
            uVar9 = (ulong)*(byte *)(plVar10 + lVar11 * 8 + 7);
          }
          else {
            uVar9 = plVar10[lVar11 * 8 + 7];
            lVar13 = plVar10[lVar11 * 8 + 8];
          }
          *(long *)((long)register0x00000008 + -0x100) = lVar13;
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar9;
          plVar5 = (long *)((long)register0x00000008 + -0xa0);
          func_0x000100066c24((undefined1 *)((long)register0x00000008 + -0x118),plVar5,
                              (undefined1 *)((long)register0x00000008 + -0xd0),
                              (undefined1 *)((long)register0x00000008 + -0x100));
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            plVar5 = (long *)*plVar1;
            __ZdlPv();
          }
          uVar7 = *(ulong *)((long)register0x00000008 + -0x108);
          plVar1[2] = uVar7;
          lVar13 = *(long *)((long)register0x00000008 + -0x118);
          plVar1[1] = *(long *)((long)register0x00000008 + -0x110);
          *plVar1 = lVar13;
          uVar9 = plVar1[1];
          plVar12 = (long *)*plVar1;
          if (-1 < (long)uVar7) {
            uVar9 = uVar7 >> 0x38;
            plVar12 = plVar1;
          }
          *param_1 = (long)plVar12;
          param_1[1] = uVar9;
        }
        else {
          if (plVar10[lVar11 * 8 + 6] == 0) {
            plVar12 = (long *)((long)plVar10 + lVar11 * 0x40 + 0x39);
            uVar9 = (ulong)*(byte *)(plVar10 + lVar11 * 8 + 7);
          }
          else {
            uVar9 = plVar10[lVar11 * 8 + 7];
            plVar12 = (long *)plVar10[lVar11 * 8 + 8];
          }
          *param_1 = (long)plVar12;
          param_1[1] = uVar9;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar11 = lVar11 + 1;
      do {
        if (lVar11 != plVar10[1]) goto LAB_104adee4c;
        lVar11 = 0;
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
      lVar11 = 0;
LAB_104adee4c:
    } while ((plVar10 != (long *)0x0) || (lVar11 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)) {
    ___stack_chk_fail();
    iVar4 = (int)plVar5;
    __Unwind_Resume();
    plVar5 = (long *)"";
    if (iVar4 != 1) {
      plVar5 = (long *)"<discarded-invalid-value>";
    }
    plVar1 = (long *)"application/grpc";
    if (iVar4 != 0) {
      plVar1 = plVar5;
    }
    return plVar1;
  }
  return plVar5;
}



/* Entry: 104a7e494; end: 104a7e63b;  */

long ** FUN_104a7e494(undefined8 *param_1,long **param_2,ulong param_3,long **param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 uVar7;
  long *plVar8;
  long *extraout_x8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined *puStack_140;
  undefined8 uStack_138;
  long *plStack_110;
  ulong uStack_108;
  long lStack_e0;
  long **pplStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = *param_2;
  pplVar5 = param_2;
  if ((*(byte *)((long)plVar8 + 2) >> 6 & 1) == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    plVar10 = param_2[1];
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      *(undefined1 *)*plVar10 = 0;
      plVar10[1] = 0;
    }
    else {
      *(undefined1 *)plVar10 = 0;
      *(undefined1 *)((long)plVar10 + 0x17) = 0;
    }
    uVar12 = plVar8[0xc];
    plVar8 = plVar8 + 0xd;
    if ((uVar12 & 1) != 0) {
      plVar8 = (long *)*plVar8;
    }
    if (1 < uVar12) {
      plVar10 = plVar8 + (uVar12 >> 1) * 4;
      do {
        plVar4 = param_2[1];
        if (*(char *)((long)plVar4 + 0x17) < '\0') {
          if (plVar4[1] != 0) goto LAB_104a7e548;
        }
        else if (*(char *)((long)plVar4 + 0x17) != '\0') {
LAB_104a7e548:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar4,0x2c);
        }
        FUN_104adf18c(&pplStack_68,plVar8);
        uVar12 = uStack_60 & 0xff;
        param_3 = (long)&uStack_60 + 1;
        if (pplStack_68 != (long **)0x0) {
          uVar12 = uStack_60;
          param_3 = uStack_58;
        }
        param_4 = (long **)(param_3 + uVar12);
        FUN_104a7e67c(param_2[1]);
        pplVar5 = pplStack_68;
        if ((long **)0x1 < pplStack_68) {
          do {
            plVar4 = *pplStack_68;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pplStack_68,0x10);
            if (bVar2) {
              *pplStack_68 = (long *)((long)plVar4 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long *)((long)plVar4 + -1) == (long *)0x0) {
            (*(code *)pplStack_68[1])();
          }
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != plVar10);
    }
    plVar10 = param_2[1];
    uVar12 = plVar10[1];
    plVar8 = (long *)*plVar10;
    if (-1 < (char)*(byte *)((long)plVar10 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)plVar10 + 0x17);
      plVar8 = plVar10;
    }
    *param_1 = plVar8;
    param_1[1] = uVar12;
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar5;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&pplStack_68);
  }
  __Unwind_Resume();
  if ((param_3 == 8) && (*pplVar5 == (long *)0x6e656b6f742d626c)) {
    plVar8 = *param_4;
    if (*(char *)((long)plVar8 + 2) < '\0') {
      if (plVar8[8] == 0) {
        lVar11 = (long)plVar8 + 0x49;
        uVar12 = (ulong)*(byte *)(plVar8 + 9);
      }
      else {
        uVar12 = plVar8[9];
        lVar11 = plVar8[10];
      }
      *extraout_x8 = lVar11;
      extraout_x8[1] = uVar12;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar7;
    return param_4;
  }
  plVar8 = *param_4;
  plVar10 = param_4[1];
  pplVar6 = (long **)(plVar8 + 0x3e);
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 2) = 0;
  plVar8 = (long *)plVar8[0x3f];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    lVar11 = 0;
    bVar2 = false;
    plVar4 = (long *)*extraout_x8;
    uVar12 = extraout_x8[1];
    do {
      if (plVar8[lVar11 * 8 + 2] == 0) {
        pplVar6 = (long **)((long)plVar8 + lVar11 * 0x40 + 0x19);
        uVar9 = (ulong)*(byte *)(plVar8 + lVar11 * 8 + 3);
      }
      else {
        uVar9 = plVar8[lVar11 * 8 + 3];
        pplVar6 = (long **)plVar8[lVar11 * 8 + 4];
      }
      if ((uVar9 == param_3) && (_memcmp(pplVar6,pplVar5,param_3), (int)pplVar6 == 0)) {
        if (bVar2) {
          puStack_140 = &DAT_10f68e8ee;
          uStack_138 = 1;
          if (plVar8[lVar11 * 8 + 6] == 0) {
            lStack_170 = (long)plVar8 + lVar11 * 0x40 + 0x39;
            uStack_168 = (ulong)*(byte *)(plVar8 + lVar11 * 8 + 7);
          }
          else {
            uStack_168 = plVar8[lVar11 * 8 + 7];
            lStack_170 = plVar8[lVar11 * 8 + 8];
          }
          pplVar6 = &plStack_110;
          plStack_110 = plVar4;
          uStack_108 = uVar12;
          func_0x000100066c24(&lStack_188,pplVar6,&puStack_140,&lStack_170);
          if (*(char *)((long)plVar10 + 0x17) < '\0') {
            pplVar6 = (long **)*plVar10;
            __ZdlPv();
          }
          plVar10[2] = uStack_178;
          plVar10[1] = lStack_180;
          *plVar10 = lStack_188;
          uVar12 = plVar10[1];
          plVar4 = (long *)*plVar10;
          if (-1 < (long)uStack_178) {
            uVar12 = uStack_178 >> 0x38;
            plVar4 = plVar10;
          }
          *extraout_x8 = (long)plVar4;
          extraout_x8[1] = uVar12;
        }
        else {
          if (plVar8[lVar11 * 8 + 6] == 0) {
            plVar4 = (long *)((long)plVar8 + lVar11 * 0x40 + 0x39);
            uVar12 = (ulong)*(byte *)(plVar8 + lVar11 * 8 + 7);
          }
          else {
            uVar12 = plVar8[lVar11 * 8 + 7];
            plVar4 = (long *)plVar8[lVar11 * 8 + 8];
          }
          *extraout_x8 = (long)plVar4;
          extraout_x8[1] = uVar12;
          bVar2 = true;
          *(undefined1 *)(extraout_x8 + 2) = 1;
        }
      }
      lVar11 = lVar11 + 1;
      do {
        if (lVar11 != plVar8[1]) goto LAB_104adee4c;
        lVar11 = 0;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      lVar11 = 0;
LAB_104adee4c:
    } while ((plVar8 != (long *)0x0) || (lVar11 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return pplVar6;
  }
  ___stack_chk_fail();
  iVar3 = (int)pplVar6;
  __Unwind_Resume();
  pplVar5 = (long **)"";
  if (iVar3 != 1) {
    pplVar5 = (long **)"<discarded-invalid-value>";
  }
  pplVar6 = (long **)"application/grpc";
  if (iVar3 != 0) {
    pplVar6 = pplVar5;
  }
  return pplVar6;
}



/* Entry: 104a7e63c; end: 104a7e67b;  */

long ** FUN_104a7e63c(long *param_1,long *param_2,ulong param_3,long **param_4)

{
  long **pplVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long **pplVar5;
  ulong uVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    plVar8 = *param_4;
    if (*(char *)((long)plVar8 + 2) < '\0') {
      if (plVar8[8] == 0) {
        lVar9 = (long)plVar8 + 0x49;
        uVar10 = (ulong)*(byte *)(plVar8 + 9);
      }
      else {
        uVar10 = plVar8[9];
        lVar9 = plVar8[10];
      }
      *param_1 = lVar9;
      param_1[1] = uVar10;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar7;
    return param_4;
  }
  plVar8 = *param_4;
  plVar2 = param_4[1];
  pplVar5 = (long **)(plVar8 + 0x3e);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar8 = (long *)plVar8[0x3f];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    lVar9 = 0;
    bVar3 = false;
    plVar11 = (long *)*param_1;
    uVar10 = param_1[1];
    do {
      if (plVar8[lVar9 * 8 + 2] == 0) {
        pplVar5 = (long **)((long)plVar8 + lVar9 * 0x40 + 0x19);
        uVar6 = (ulong)*(byte *)(plVar8 + lVar9 * 8 + 3);
      }
      else {
        uVar6 = plVar8[lVar9 * 8 + 3];
        pplVar5 = (long **)plVar8[lVar9 * 8 + 4];
      }
      if ((uVar6 == param_3) && (_memcmp(pplVar5,param_2,param_3), (int)pplVar5 == 0)) {
        if (bVar3) {
          puStack_d0 = &DAT_10f68e8ee;
          uStack_c8 = 1;
          if (plVar8[lVar9 * 8 + 6] == 0) {
            lStack_100 = (long)plVar8 + lVar9 * 0x40 + 0x39;
            uStack_f8 = (ulong)*(byte *)(plVar8 + lVar9 * 8 + 7);
          }
          else {
            uStack_f8 = plVar8[lVar9 * 8 + 7];
            lStack_100 = plVar8[lVar9 * 8 + 8];
          }
          pplVar5 = &plStack_a0;
          plStack_a0 = plVar11;
          uStack_98 = uVar10;
          func_0x000100066c24(&lStack_118,pplVar5,&puStack_d0,&lStack_100);
          if (*(char *)((long)plVar2 + 0x17) < '\0') {
            pplVar5 = (long **)*plVar2;
            __ZdlPv();
          }
          plVar2[2] = uStack_108;
          plVar2[1] = lStack_110;
          *plVar2 = lStack_118;
          uVar10 = plVar2[1];
          plVar11 = (long *)*plVar2;
          if (-1 < (long)uStack_108) {
            uVar10 = uStack_108 >> 0x38;
            plVar11 = plVar2;
          }
          *param_1 = (long)plVar11;
          param_1[1] = uVar10;
        }
        else {
          if (plVar8[lVar9 * 8 + 6] == 0) {
            plVar11 = (long *)((long)plVar8 + lVar9 * 0x40 + 0x39);
            uVar10 = (ulong)*(byte *)(plVar8 + lVar9 * 8 + 7);
          }
          else {
            uVar10 = plVar8[lVar9 * 8 + 7];
            plVar11 = (long *)plVar8[lVar9 * 8 + 8];
          }
          *param_1 = (long)plVar11;
          param_1[1] = uVar10;
          bVar3 = true;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      lVar9 = lVar9 + 1;
      do {
        if (lVar9 != plVar8[1]) goto LAB_104adee4c;
        lVar9 = 0;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      lVar9 = 0;
LAB_104adee4c:
    } while ((plVar8 != (long *)0x0) || (lVar9 != 0));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    iVar4 = (int)pplVar5;
    __Unwind_Resume();
    pplVar5 = (long **)"";
    if (iVar4 != 1) {
      pplVar5 = (long **)"<discarded-invalid-value>";
    }
    pplVar1 = (long **)"application/grpc";
    if (iVar4 != 0) {
      pplVar1 = pplVar5;
    }
    return pplVar1;
  }
  return pplVar5;
}



/* Entry: 104a7e67c; end: 104a7e7ef;  */

undefined8 * FUN_104a7e67c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar6 = (uint)(char)bVar1;
  uVar2 = (long)param_3 - (long)param_2;
  if ((char)bVar1 < '\0') {
    if (uVar2 == 0) {
      return param_1;
    }
    uVar8 = param_1[1];
    lVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    puVar7 = (undefined8 *)*param_1;
    uVar6 = (uint)(byte)((ulong)param_1[2] >> 0x38);
  }
  else {
    if (uVar2 == 0) {
      return param_1;
    }
    uVar8 = (ulong)bVar1;
    lVar5 = 0x16;
    puVar7 = param_1;
  }
  if ((param_2 < puVar7) || ((undefined8 *)((long)puVar7 + uVar8 + 1) <= param_2)) {
    if (lVar5 - uVar8 < uVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar5,(uVar8 - lVar5) + uVar2,uVar8,uVar8,0,0);
      param_1[1] = uVar8;
      uVar6 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    puVar7 = param_1;
    if ((uVar6 >> 7 & 1) != 0) {
      puVar7 = (undefined8 *)*param_1;
    }
    puVar4 = (undefined1 *)((long)puVar7 + uVar8);
    for (; param_3 != param_2; param_2 = (undefined8 *)((long)param_2 + 1)) {
      *puVar4 = *(undefined1 *)param_2;
      puVar4 = puVar4 + 1;
    }
    *puVar4 = 0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar2 + uVar8;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)(uVar2 + uVar8) & 0x7f;
    }
  }
  else {
    FUN_104a7e7f0(&pppuStack_58,param_2,param_3,uVar2);
    ppppuVar3 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar3 = &pppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar3,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 104a7e7f0; end: 104a7e893;  */

void FUN_104a7e7f0(long *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long *plVar1;
  long *extraout_x8;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      plVar1 = param_1;
    }
    else {
      uVar5 = (param_4 & 0xfffffffffffffff8) + 8;
      if ((param_4 | 7) != 0x17) {
        uVar5 = param_4 | 7;
      }
      plVar1 = (long *)(uVar5 + 1);
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = uVar5 + 1 | 0x8000000000000000;
      *param_1 = (long)plVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)plVar1 = *param_2;
      plVar1 = (long *)((long)plVar1 + 1);
    }
    *(undefined1 *)plVar1 = 0;
    return;
  }
  func_0x000104a6fa5c();
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 2) < '\0') {
    if (*(long *)(lVar4 + 0x40) == 0) {
      lVar3 = lVar4 + 0x49;
      uVar5 = (ulong)*(byte *)(lVar4 + 0x48);
    }
    else {
      uVar5 = *(ulong *)(lVar4 + 0x48);
      lVar3 = *(long *)(lVar4 + 0x50);
    }
    *extraout_x8 = lVar3;
    extraout_x8[1] = uVar5;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(undefined1 *)extraout_x8 = 0;
  }
  *(undefined1 *)(extraout_x8 + 2) = uVar2;
  return;
}



/* Entry: 104a7e894; end: 104a7e8e3;  */

void FUN_104a7e894(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  if (*(char *)(lVar3 + 2) < '\0') {
    if (*(long *)(lVar3 + 0x40) == 0) {
      lVar2 = lVar3 + 0x49;
      uVar4 = (ulong)*(byte *)(lVar3 + 0x48);
    }
    else {
      uVar4 = *(ulong *)(lVar3 + 0x48);
      lVar2 = *(long *)(lVar3 + 0x50);
    }
    *param_1 = lVar2;
    param_1[1] = uVar4;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 104a7e8e4; end: 104a7e963;  */

void FUN_104a7e8e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(param_1 + 8);
  if (((*(long *)(lVar3 + 0xe0) == 0) && (lVar2 = *(long *)(lVar3 + 0x188), lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 2) >> 1 & 1) != 0)) {
    uStack_28 = *(undefined8 *)(lVar3 + 0x40);
    ppuStack_30 = &PTR_FUN_1107c12d8;
    if (*(long *)(lVar2 + 0xf0) == 0) {
      lVar3 = lVar2 + 0xf9;
      uVar1 = (ulong)*(byte *)(lVar2 + 0xf8);
    }
    else {
      uVar1 = *(ulong *)(lVar2 + 0xf8);
      lVar3 = *(long *)(lVar2 + 0x100);
    }
    FUN_104a73c68(lVar3,uVar1,&ppuStack_30);
    *(long *)(*(long *)(param_1 + 8) + 0xe0) = lVar3;
  }
  return;
}



/* Entry: 104a7e964; end: 104a7e9ab;  */

void FUN_104a7e964(void)

{
  return;
}



/* Entry: 104a7e9ac; end: 104a7ea0f;  */

void FUN_104a7e9ac(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x0001004bbee0(param_1,0x40);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  auVar5 = NEON_fmov(0xbff0000000000000,8);
  param_1[1] = auVar5._8_8_;
  *param_1 = auVar5._0_8_;
  param_1[3] = 0;
  param_1[2] = (ulong)(param_1 + 3);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = (ulong)(param_1 + 6);
  return;
}



/* Entry: 104a7ea10; end: 104a7eb67;  */

void FUN_104a7ea10(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uStack_38;
  
  lVar7 = *param_1;
  lVar5 = *(long *)(lVar7 + 0x10) + 0xe0;
  func_0x000100460448(lVar5);
  if ((*(long **)(lVar7 + 0xd0) == param_1) && (*param_2 != 0)) {
    (**(code **)(**(long **)(lVar7 + 0x70) + 0x18))();
    if (*(char *)(lVar7 + 200) != '\0') {
      func_0x0001008db344(*(undefined8 *)(lVar7 + 0x10),lVar7 + 0xb8,*(undefined8 *)(lVar7 + 0x60));
      *(undefined1 *)(lVar7 + 200) = 0;
      *(undefined8 *)(lVar7 + 0xd0) = 0;
    }
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar8;
    FUN_104a76d10(lVar7,&uStack_38,FUN_104a7eb68);
    if ((uVar8 & 1) != 0) {
      func_0x00010084dad0(uVar8);
    }
  }
  func_0x000100466b80(lVar5);
  plVar4 = *(long **)(lVar7 + 0x48);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000100836ca4();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a7eb68; end: 104a7ebb7;  */

bool FUN_104a7eb68(ulong *param_1)

{
  return 1 < *param_1;
}



/* Entry: 104a7ebb8; end: 104a7ec73;  */

undefined1  [16] FUN_104a7ebb8(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_104a7ec5c;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_104a7ec20;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_104a7ec20:
  plVar1 = (long *)0x30;
  __Znwm();
  plVar1[4] = *(long *)*param_4;
  plVar1[5] = 0;
  FUN_104a7ec74(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_104a7ec5c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 104a7ec74; end: 104a7ecc7;  */

void FUN_104a7ec74(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104a7ecc8; end: 104a7eccf;  */

void FUN_104a7ecc8(void)

{
  return;
}



/* Entry: 104a7ecd0; end: 104a7ed03;  */

void FUN_104a7ecd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c1380;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a7ed04; end: 104a7ed27;  */

void FUN_104a7ed04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c1380;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a7ed28; end: 104a7ed63;  */

long FUN_104a7ed28(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c13e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a7ed64; end: 104a7ed6f;  */

undefined ** FUN_104a7ed64(void)

{
  return &PTR_DAT_1107c13e0;
}



/* Entry: 104a7ed70; end: 104a7ee3f;  */

undefined8 FUN_104a7ed70(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x000104a7edd0();
  plVar4 = *(long **)(param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 104a7ee40; end: 104a7f1cb;  */

void FUN_104a7ee40(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  plVar4 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_104a7ee60:
    plVar4 = (long *)plVar6[1];
    if (plVar4 == (long *)0x0) {
      bVar2 = true;
      goto LAB_104a7ee80;
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_104a7ee60;
    }
  }
  bVar2 = false;
  plVar4[2] = plVar6[2];
LAB_104a7ee80:
  puVar8 = (undefined8 *)plVar6[2];
  plVar3 = (long *)*puVar8;
  if (plVar3 == plVar6) {
    *puVar8 = plVar4;
    if (plVar6 == param_1) {
      plVar3 = (long *)0x0;
      param_1 = plVar4;
    }
    else {
      plVar3 = (long *)puVar8[1];
    }
  }
  else {
    puVar8[1] = plVar4;
  }
  lVar9 = plVar6[3];
  plVar7 = param_1;
  if (plVar6 != param_2) {
    lVar10 = param_2[2];
    plVar6[2] = lVar10;
    *(long **)(lVar10 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar6;
    lVar10 = *param_2;
    lVar1 = param_2[1];
    *(long **)(lVar10 + 0x10) = plVar6;
    *plVar6 = lVar10;
    plVar6[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar7 = plVar6;
    if (param_1 != param_2) {
      plVar7 = param_1;
    }
  }
  if (((char)lVar9 != '\0') && (plVar7 != (long *)0x0)) {
    if (bVar2) {
      while( true ) {
        plVar4 = (long *)plVar3[2];
        plVar6 = plVar7;
        if ((long *)*plVar4 == plVar3) break;
        if ((char)plVar3[3] == '\0') {
          *(undefined1 *)(plVar3 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[1];
          lVar9 = *plVar6;
          plVar4[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar4;
          }
          plVar6[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar6;
          *plVar6 = (long)plVar4;
          plVar4[2] = (long)plVar6;
          plVar6 = plVar3;
          if (plVar7 != (long *)*plVar3) {
            plVar6 = plVar7;
          }
          plVar3 = (long *)((long *)*plVar3)[1];
        }
        plVar4 = (long *)*plVar3;
        if ((plVar4 != (long *)0x0) && ((char)plVar4[3] == '\0')) {
          plVar7 = (long *)plVar3[1];
          if (plVar7 != (long *)0x0) goto LAB_104a7f074;
LAB_104a7f07c:
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar9 = plVar4[1];
          *plVar3 = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar3;
          }
          plVar4[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar4;
          plVar4[1] = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar5 = plVar4;
          plVar7 = plVar3;
LAB_104a7f0c8:
          plVar6 = (long *)plVar5[2];
          *(char *)(plVar5 + 3) = (char)plVar6[3];
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar7 + 3) = 1;
          plVar4 = (long *)plVar6[1];
          lVar9 = *plVar4;
          plVar6[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar6;
          }
          plVar4[2] = plVar6[2];
          ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
          *plVar4 = (long)plVar6;
LAB_104a7f1bc:
          plVar6[2] = (long)plVar4;
          return;
        }
        plVar7 = (long *)plVar3[1];
        if ((plVar7 != (long *)0x0) && ((char)plVar7[3] == '\0')) {
LAB_104a7f074:
          plVar5 = plVar3;
          if ((char)plVar7[3] != '\0') goto LAB_104a7f07c;
          goto LAB_104a7f0c8;
        }
        *(undefined1 *)(plVar3 + 3) = 0;
        plVar3 = (long *)plVar3[2];
        plVar4 = plVar6;
        if ((plVar3 == plVar6) || (plVar4 = plVar3, (char)plVar3[3] == '\0')) goto LAB_104a7f060;
LAB_104a7f038:
        plVar3 = (long *)((undefined8 *)plVar3[2])[*(long **)plVar3[2] == plVar3];
        plVar7 = plVar6;
      }
      if ((char)plVar3[3] == '\0') {
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar9 = plVar3[1];
        *plVar4 = lVar9;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 0x10) = plVar4;
        }
        plVar3[2] = plVar4[2];
        ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar3;
        plVar3[1] = (long)plVar4;
        plVar4[2] = (long)plVar3;
        plVar6 = plVar3;
        if (plVar7 != plVar4) {
          plVar6 = plVar7;
        }
        plVar3 = (long *)*plVar4;
      }
      plVar7 = (long *)*plVar3;
      plVar4 = plVar3;
      if ((plVar7 == (long *)0x0) || ((char)plVar7[3] != '\0')) {
        plVar5 = (long *)plVar3[1];
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] != '\0')) {
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar3 = (long *)plVar3[2];
          plVar4 = plVar3;
          if ((char)plVar3[3] != '\0' && plVar3 != plVar6) goto LAB_104a7f038;
LAB_104a7f060:
          *(undefined1 *)(plVar4 + 3) = 1;
          return;
        }
        if ((plVar7 == (long *)0x0) || ((char)plVar7[3] != '\0')) {
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar9 = *plVar5;
          plVar3[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar3;
          }
          plVar5[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar4 = plVar5;
          plVar7 = plVar3;
        }
      }
      plVar6 = (long *)plVar4[2];
      *(char *)(plVar4 + 3) = (char)plVar6[3];
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      plVar4 = (long *)*plVar6;
      lVar9 = plVar4[1];
      *plVar6 = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x10) = plVar6;
      }
      plVar4[2] = plVar6[2];
      ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
      plVar4[1] = (long)plVar6;
      goto LAB_104a7f1bc;
    }
    *(undefined1 *)(plVar4 + 3) = 1;
  }
  return;
}



/* Entry: 104a7f1cc; end: 104a7f1ff;  */

void FUN_104a7f1cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c1400;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a7f200; end: 104a7f22b;  */

void FUN_104a7f200(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c1400;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a7f22c; end: 104a7f267;  */

long FUN_104a7f22c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1460);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


