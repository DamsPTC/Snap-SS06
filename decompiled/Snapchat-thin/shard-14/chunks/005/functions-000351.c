/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b31c85c; end: 10b31c86f;  */

void FUN_10b31c85c(void)

{
  FUN_10b31c4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b31c870; end: 10b31c987;  */

undefined8 * FUN_10b31c870(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar3 = &uStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_60 = &uStack_b8;
  puStack_48 = &uStack_68;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0xaaaaaaaaaaaaaa00;
  uStack_68 = 0xaaaaaaaaaaaaaa01;
  plVar5 = (long *)*param_2;
  *param_2 = 0;
  iVar1 = (int)param_1 + 0x28;
  plStack_108 = param_1;
  puStack_58 = puStack_60;
  puStack_50 = puStack_60;
  puStack_40 = puStack_60;
  _pthread_mutex_trylock();
  if (iVar1 != 0) {
    func_0x00010b329e58(param_1 + 5);
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0xd);
  plVar2 = plVar5;
  (**(code **)(*plVar5 + 0x10))(plVar5,uVar4);
  func_0x00010b31a65c(param_1 + 0xe,plVar5,plVar2,uVar4);
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_120);
  _pthread_mutex_unlock(param_1 + 5);
  if (plVar5 != (long *)0x0) {
    _pthread_mutex_unlock(plVar5 + 4);
  }
  func_0x000107c2cde4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)*(undefined1 **)((long)puVar3 + 0xb8);
}



/* Entry: 10b31c988; end: 10b31c98f;  */

undefined8 FUN_10b31c988(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b31c990; end: 10b31cb67;  */

void FUN_10b31c990(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  iVar4 = (int)param_1 + 0x28;
  _pthread_mutex_trylock();
  if (iVar4 != 0) {
    func_0x00010b329e58(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined1 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x181) = 1;
  if (&plStack_58 != (long **)(param_1 + 0x118)) {
    func_0x000107c2cd8c(&plStack_58,*(long *)(param_1 + 0x118),*(long *)(param_1 + 0x120),
                        *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3);
  }
  _pthread_mutex_unlock(param_1 + 0x28);
  plVar8 = plStack_50;
  plVar7 = plStack_58;
  while (plVar7 != plVar8) {
    lVar9 = *plVar7;
    *(undefined1 *)(lVar9 + 0xc0) = 1;
    func_0x000107c2d00c(lVar9 + 0x68);
    iVar4 = (int)lVar9 + 0x18;
    _pthread_mutex_trylock();
    if (iVar4 == 0) {
      lVar6 = *(long *)(lVar9 + 0x58);
    }
    else {
      func_0x00010b329e58(lVar9 + 0x18);
      lVar6 = *(long *)(lVar9 + 0x58);
    }
    if (lVar6 == 0) {
      _pthread_mutex_unlock(lVar9 + 0x18);
      plVar7 = plVar7 + 1;
    }
    else {
      *(undefined8 *)(lVar9 + 0x58) = 0;
      _pthread_mutex_unlock(lVar9 + 0x18);
      func_0x00010b32a1a4(lVar6);
      plVar7 = plVar7 + 1;
    }
  }
  iVar4 = (int)param_1 + 0x28;
  _pthread_mutex_trylock();
  if (iVar4 != 0) {
    func_0x00010b329e58(param_1 + 0x28);
  }
  plVar7 = *(long **)(param_1 + 0x118);
  plVar8 = *(long **)(param_1 + 0x120);
  while (plVar8 != plVar7) {
    plVar8 = plVar8 + -1;
    plVar5 = (long *)*plVar8;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  *(long **)(param_1 + 0x120) = plVar7;
  _pthread_mutex_unlock(param_1 + 0x28);
  plVar8 = plStack_58;
  plVar7 = plStack_50;
  if (plStack_58 != (long *)0x0) {
    while (plVar7 != plVar8) {
      plVar7 = plVar7 + -1;
      plVar5 = (long *)*plVar7;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
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
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    }
    plStack_50 = plVar8;
    __ZdlPv(plStack_58);
  }
  return;
}



/* Entry: 10b31cb68; end: 10b31cbc3;  */

void FUN_10b31cb68(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  iVar1 = (int)lVar2 + 0x28;
  _pthread_mutex_trylock();
  if (iVar1 != 0) {
    func_0x00010b329e58(lVar2 + 0x28);
  }
  *(long *)(*(long *)(param_1 + 0x30) + 0x188) = *(long *)(*(long *)(param_1 + 0x30) + 0x188) + 1;
  if (*(long *)(*(long *)(param_1 + 0x30) + 400) != 0) {
    _pthread_cond_signal();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar2 + 0x28);
  return;
}



/* Entry: 10b31cbc4; end: 10b31cd17;  */

void FUN_10b31cbc4(undefined1 *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = *(long *)(param_1 + 0x30);
    puVar5 = param_1;
    if (((*(byte *)(unaff_x20 + 0xe5) & 1) == 0) && ((bRam000000011383c630 & 1) == 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(long *)((long)register0x00000008 + -0x108) = unaff_x20;
      puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0x48) =
           (undefined1 *)((long)register0x00000008 + -0x68);
      *(undefined1 **)((long)register0x00000008 + -0x40) = puVar5;
      *(undefined1 *)((long)register0x00000008 + -0x68) = 1;
      *(undefined1 **)((long)register0x00000008 + -0x60) = puVar5;
      *(undefined1 **)((long)register0x00000008 + -0x58) = puVar5;
      *(undefined1 **)((long)register0x00000008 + -0x50) = puVar5;
      iVar3 = (int)unaff_x20 + 0x28;
      _pthread_mutex_trylock();
      if (iVar3 == 0) {
        bVar2 = param_1[0x40];
      }
      else {
        func_0x00010b329e58(unaff_x20 + 0x28);
        bVar2 = param_1[0x40];
      }
      if ((bVar2 & 1) == 0) {
        *(int *)(*(long *)(param_1 + 0x30) + 0x158) =
             *(int *)(*(long *)(param_1 + 0x30) + 0x158) + -1;
        param_1[0x40] = 1;
        lVar6 = *(long *)(param_1 + 0x30);
        uVar1 = *(long *)(lVar6 + 0x138) + 1;
        *(ulong *)(lVar6 + 0x138) = uVar1;
        if ((*(long *)(lVar6 + 0x70) == *(long *)(lVar6 + 0x78)) ||
           (*(ulong *)(lVar6 + 0x148) < uVar1)) {
          *(undefined2 *)(lVar6 + 0xa8) = 0;
        }
        else {
          *(undefined2 *)(lVar6 + 0xa8) = *(undefined2 *)(*(long *)(lVar6 + 0x70) + 0x10);
        }
        (**(code **)(**(long **)(param_1 + 0x30) + 0x40))
                  (*(long **)(param_1 + 0x30),(undefined1 *)((long)register0x00000008 + -0x120));
      }
      _pthread_mutex_unlock(unaff_x20 + 0x28);
      func_0x000107c2cde4();
      puVar5 = puVar4;
      unaff_x19 = param_1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10b31cd18;
    ___stack_chk_fail();
    param_1 = puVar5 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
  }
  return;
}



/* Entry: 10b31cd18; end: 10b31ce0f;  */

void FUN_10b31cd18(undefined1 *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar6 = param_1 + -8;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = *(long *)(param_1 + 0x28);
    puVar5 = puVar6;
    if (((*(byte *)(unaff_x20 + 0xe5) & 1) == 0) && ((bRam000000011383c630 & 1) == 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(long *)((long)register0x00000008 + -0x108) = unaff_x20;
      puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0x48) =
           (undefined1 *)((long)register0x00000008 + -0x68);
      *(undefined1 **)((long)register0x00000008 + -0x40) = puVar5;
      *(undefined1 *)((long)register0x00000008 + -0x68) = 1;
      *(undefined1 **)((long)register0x00000008 + -0x60) = puVar5;
      *(undefined1 **)((long)register0x00000008 + -0x58) = puVar5;
      *(undefined1 **)((long)register0x00000008 + -0x50) = puVar5;
      iVar3 = (int)unaff_x20 + 0x28;
      _pthread_mutex_trylock();
      if (iVar3 == 0) {
        bVar2 = param_1[0x38];
      }
      else {
        func_0x00010b329e58(unaff_x20 + 0x28);
        bVar2 = param_1[0x38];
      }
      if ((bVar2 & 1) == 0) {
        *(int *)(*(long *)(param_1 + 0x28) + 0x158) =
             *(int *)(*(long *)(param_1 + 0x28) + 0x158) + -1;
        param_1[0x38] = 1;
        lVar7 = *(long *)(param_1 + 0x28);
        uVar1 = *(long *)(lVar7 + 0x138) + 1;
        *(ulong *)(lVar7 + 0x138) = uVar1;
        if ((*(long *)(lVar7 + 0x70) == *(long *)(lVar7 + 0x78)) ||
           (*(ulong *)(lVar7 + 0x148) < uVar1)) {
          *(undefined2 *)(lVar7 + 0xa8) = 0;
        }
        else {
          *(undefined2 *)(lVar7 + 0xa8) = *(undefined2 *)(*(long *)(lVar7 + 0x70) + 0x10);
        }
        (**(code **)(**(long **)(param_1 + 0x28) + 0x40))
                  (*(long **)(param_1 + 0x28),(undefined1 *)((long)register0x00000008 + -0x120));
      }
      _pthread_mutex_unlock(unaff_x20 + 0x28);
      func_0x000107c2cde4();
      puVar5 = puVar4;
      unaff_x19 = puVar6;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10b31cd18;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
    param_1 = puVar5;
  }
  return;
}



/* Entry: 10b31ce10; end: 10b31cf5b;  */

void FUN_10b31ce10(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  plVar7 = &lStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_70 = &uStack_c8;
  puStack_58 = &uStack_78;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xaaaaaaaaaaaaaa00;
  uStack_78 = 0xaaaaaaaaaaaaaa01;
  iVar6 = (int)param_1 + 0x28;
  plStack_118 = param_1;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_50 = puStack_70;
  _pthread_mutex_trylock();
  if (iVar6 == 0) {
    lVar10 = param_1[0x27];
  }
  else {
    func_0x00010b329e58(param_1 + 5);
    lVar10 = param_1[0x27];
  }
  if ((lVar10 != 0) && ((*(byte *)(param_1 + 0x33) & 1) == 0)) {
    plVar11 = (long *)param_1[0x24];
    for (plVar8 = (long *)param_1[0x23]; plVar8 != plVar11; plVar8 = plVar8 + 1) {
      lVar10 = *(long *)(*plVar8 + 0x98);
      if ((*(char *)(lVar10 + 0x22) == '\x01') && (*(char *)(lVar10 + 0x23) == '\0')) {
        *(undefined1 *)(lVar10 + 0x42) = 1;
        func_0x00010b31cd20();
      }
    }
    (**(code **)(*param_1 + 0x40))(param_1,&lStack_130);
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  _pthread_mutex_unlock(param_1 + 5);
  func_0x000107c2cde4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_260;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  puStack_1a0 = &uStack_1f8;
  puStack_188 = &uStack_1a8;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_200 = 0xaaaaaaaaaaaaaa00;
  uStack_1a8 = 0xaaaaaaaaaaaaaa01;
  plVar8 = plVar7 + 5;
  plStack_248 = plVar7;
  puStack_198 = puStack_1a0;
  puStack_190 = puStack_1a0;
  puStack_180 = puStack_1a0;
  _pthread_mutex_trylock();
  if ((int)plVar8 != 0) {
    plVar8 = plVar7 + 5;
    func_0x00010b329e58();
  }
  *(undefined1 *)(plVar7 + 0x30) = 0;
  puVar2 = (undefined8 *)plVar7[0x24];
  for (puVar13 = (undefined8 *)plVar7[0x23]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
    plVar11 = (long *)*puVar13;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = (long *)plVar11[0x13];
    if ((plVar12[5] != 0) &&
       (func_0x000107c2d028(), *(long *)(plVar12[6] + 0xe8) <= (long)plVar8 - plVar12[5])) {
      func_0x00010b31cd20();
      plVar8 = plVar12;
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x18))();
        plVar8 = plVar11;
      }
    }
  }
  (**(code **)(*plVar7 + 0x40))(plVar7,&uStack_260);
  _pthread_mutex_unlock(plVar7 + 5);
  func_0x000107c2cde4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  *puVar9 = &PTR_FUN_110cd5f58;
  puVar9[1] = &PTR_FUN_110cd5fc8;
  if (puVar9[7] != 0) {
    piVar1 = (int *)(puVar9[7] + 8);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      if ((*(byte *)(puVar9[7] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31d138);
        (*pcVar5)();
      }
      func_0x000107c2d00c(puVar9[7] + 0x18);
    }
  }
  return;
}



/* Entry: 10b31cf5c; end: 10b31d0cf;  */

void FUN_10b31cf5c(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  puVar8 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_70 = &uStack_c8;
  puStack_58 = &uStack_78;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xaaaaaaaaaaaaaa00;
  uStack_78 = 0xaaaaaaaaaaaaaa01;
  plVar7 = param_1 + 5;
  plStack_118 = param_1;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_50 = puStack_70;
  _pthread_mutex_trylock();
  if ((int)plVar7 != 0) {
    plVar7 = param_1 + 5;
    func_0x00010b329e58();
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  puVar2 = (undefined8 *)param_1[0x24];
  for (puVar11 = (undefined8 *)param_1[0x23]; puVar11 != puVar2; puVar11 = puVar11 + 1) {
    plVar9 = (long *)*puVar11;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)plVar9[0x13];
    if (plVar10[5] != 0) {
      func_0x000107c2d028();
      if (*(long *)(plVar10[6] + 0xe8) <= (long)plVar7 - plVar10[5]) {
        func_0x00010b31cd20();
        plVar7 = plVar10;
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        iVar5 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x18))();
        plVar7 = plVar9;
      }
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_130);
  _pthread_mutex_unlock(param_1 + 5);
  func_0x000107c2cde4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  *puVar8 = &PTR_FUN_110cd5f58;
  puVar8[1] = &PTR_FUN_110cd5fc8;
  if (puVar8[7] != 0) {
    piVar1 = (int *)(puVar8[7] + 8);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      if ((*(byte *)(puVar8[7] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10b31d138);
        (*pcVar6)();
      }
      func_0x000107c2d00c(puVar8[7] + 0x18);
    }
  }
  return;
}



/* Entry: 10b31d0d0; end: 10b31d19f;  */

undefined8 * FUN_10b31d0d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  
  *param_1 = &PTR_FUN_110cd5f58;
  param_1[1] = &PTR_FUN_110cd5fc8;
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 8);
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
      if ((*(byte *)(param_1[7] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31d138);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[7] + 0x18);
    }
  }
  return param_1;
}



/* Entry: 10b31d1a0; end: 10b31d1eb;  */

void FUN_10b31d1a0(undefined8 *param_1)

{
  int *piVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  code *pcVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined4 uStack_174;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined **appuStack_f0 [6];
  undefined8 uStack_c0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  long lStack_38;
  
  param_1[-1] = &PTR_FUN_110cd5f58;
  *param_1 = &PTR_FUN_110cd5fc8;
  if (param_1[6] == 0) {
    return;
  }
  piVar1 = (int *)(param_1[6] + 8);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 != 0) {
    return;
  }
  if ((*(byte *)(param_1[6] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10b31d1ec);
    (*pcVar8)();
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_174 = 0;
  uStack_17c = 0;
  ppuStack_188 = (undefined **)0x800000013;
  uStack_180 = *(undefined4 *)(param_1[6] + 0x30);
  pppuVar10 = &ppuStack_188;
  func_0x000107c6107c(pppuVar10,0x11,0x18,0,0,0,0);
  iVar9 = (int)pppuVar10;
  if ((iVar9 != 0) && (iVar9 != 0x10000004)) {
    ppuStack_170 = &PTR_FUN_110cd4a10;
    uStack_168 = 3;
    uStack_c0 = 0;
    ppuStack_160 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
    appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
    func_0x000107c60dd0(appuStack_f0,&ppuStack_158);
    uStack_60 = 0xffffffff;
    uStack_68 = 0;
    appuStack_f0[0] = &PTR_DAT_11088d708;
    ppuStack_158 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    ppuStack_160 = &PTR_SUB_11088d6e0;
    func_0x000107c60dac(auStack_150);
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    ppuStack_158 = &PTR_DAT_11088d7b0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 0x10;
    pppuVar10 = &ppuStack_158;
    func_0x00010014d39c();
    puStack_50 = &UNK_10f7457d8;
    uStack_48 = 0x57;
    func_0x000107c60e5c();
    uStack_44 = *(undefined4 *)pppuVar10;
    func_0x000107c60e5c();
    *(undefined4 *)pppuVar10 = 0;
    func_0x00010014d66c(&ppuStack_170,&UNK_10f7457d8,0x57);
    ppuStack_170 = &PTR_DAT_110cd6578;
    iStack_40 = iVar9;
    func_0x00010014d9fc(&ppuStack_160,&UNK_10f745841,0x3d);
    func_0x00010014d9fc();
    func_0x00010014d9fc();
    pppuVar10 = &ppuStack_170;
    func_0x000107c2cfe8();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010012bedc();
  func_0x00010012caf0();
  ppuStack_1d0 = (undefined **)0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  ppppppuStack_1d8 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  pppuVar2 = (undefined ***)*pppuVar10;
  ppuVar7 = pppuVar10[1];
  if (-1 < (char)*(byte *)((long)pppuVar10 + 0x17)) {
    pppuVar2 = pppuVar10;
    ppuVar7 = (undefined **)(ulong)*(byte *)((long)pppuVar10 + 0x17);
  }
  ppuVar3 = ppuVar7;
  if ((undefined **)0x3e < ppuVar7) {
    ppuVar3 = (undefined **)0x3f;
  }
  if (ppuVar7 < (undefined **)0x17) {
    uStack_1c8 = CONCAT17((char)ppuVar3,0xaaaaaaaaaaaaaa);
    pppppppuVar11 = &ppppppuStack_1d8;
    if (ppuVar7 == (undefined **)0x0) goto code_r0x00010012ca80;
  }
  else {
    pppppppuVar4 = (undefined8 *******)0x19;
    if (((ulong)ppuVar3 | 7) != 0x17) {
      pppppppuVar4 = (undefined8 *******)(((ulong)ppuVar3 | 7) + 1);
    }
    pppppppuVar11 = pppppppuVar4;
    func_0x000107c60e20();
    uStack_1c8 = (ulong)pppppppuVar4 | 0x8000000000000000;
    ppppppuStack_1d8 = pppppppuVar11;
    ppuStack_1d0 = ppuVar3;
  }
  func_0x000107c610b8(pppppppuVar11,pppuVar2,ppuVar3);
code_r0x00010012ca80:
  *(undefined1 *)((long)pppppppuVar11 + (long)ppuVar3) = 0;
  pppppppuVar4 = (undefined8 *******)ppppppuStack_1d8;
  if (-1 < (long)uStack_1c8) {
    pppppppuVar4 = &ppppppuStack_1d8;
  }
  func_0x000107c61298(pppppppuVar4);
  if ((long)uStack_1c8 < 0) {
    func_0x000107c60e14(ppppppuStack_1d8);
    return;
  }
  return;
}



/* Entry: 10b31d1ec; end: 10b31d25b;  */

void FUN_10b31d1ec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  
  param_1[-1] = &PTR_FUN_110cd5f58;
  *param_1 = &PTR_FUN_110cd5fc8;
  if (param_1[6] != 0) {
    piVar1 = (int *)(param_1[6] + 8);
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
      if ((*(byte *)(param_1[6] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31d25c);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[6] + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10b31d25c; end: 10b31d283;  */

void FUN_10b31d25c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b31d274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b31d284; end: 10b320303;  */

undefined8 * FUN_10b31d284(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110cd6000;
  param_1[1] = &PTR_DAT_110cd60c8;
  param_1[2] = &PTR_DAT_110cd6108;
  param_1[3] = &PTR_DAT_110cd6130;
  plVar6 = (long *)param_1[0x51];
  param_1[0x51] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[0x52];
  param_1[0x52] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (*(char *)(param_1 + 0x57) == '\x01') {
    param_1[0x5a] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x2dc) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31d5e0);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x5b) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x5b) = 0;
    }
    piVar7 = (int *)param_1[0x59];
    if (piVar7 != (int *)0x0) {
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x57) = 0;
  }
  func_0x000107c2d008(param_1 + 0x58,0,1);
  *(undefined1 *)(param_1 + 0x57) = 1;
  if (*(char *)(param_1 + 0x5d) == '\x01') {
    if (param_1[0x5f] != 0) {
      piVar7 = (int *)(param_1[0x5f] + 8);
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x5f] + 0x10) & 1) == 0) goto LAB_10b31d5e4;
        func_0x000107c2d00c(param_1[0x5f] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x5d) = 0;
    if ((*(byte *)(param_1 + 0x57) & 1) == 0) goto LAB_10b31d5e4;
  }
  uStack_38 = 0x7fffffffffffffff;
  func_0x000107c2d01c(param_1 + 0x58,&uStack_38);
  if (*(char *)(param_1 + 0x5d) == '\x01') {
    if (param_1[0x5f] != 0) {
      piVar7 = (int *)(param_1[0x5f] + 8);
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x5f] + 0x10) & 1) == 0) goto LAB_10b31d5e4;
        func_0x000107c2d00c(param_1[0x5f] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x5d) = 0;
  }
  if (*(char *)(param_1 + 0x57) == '\x01') {
    param_1[0x5a] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x2dc) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31d5ec);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x5b) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x5b) = 0;
    }
    piVar7 = (int *)param_1[0x59];
    if (piVar7 != (int *)0x0) {
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x57) = 0;
  }
  plVar6 = (long *)param_1[0x52];
  param_1[0x52] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[0x51];
  param_1[0x51] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  uRam000000011383ad28 = 0;
  plVar6 = (long *)param_1[0x44];
  if (plVar6 != (long *)0x0) {
    plVar9 = (long *)param_1[0x45];
    plVar8 = plVar6;
    if (plVar9 != plVar6) {
      do {
        plVar9 = plVar9 + -1;
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            iVar2 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      } while (plVar9 != plVar6);
      plVar8 = (long *)param_1[0x44];
    }
    param_1[0x45] = plVar6;
    __ZdlPv(plVar8);
  }
  _pthread_mutex_destroy(param_1 + 0x3c);
  if (param_1[0x39] != 0) {
    piVar7 = (int *)(param_1[0x39] + 8);
    do {
      iVar2 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      if ((*(byte *)(param_1[0x39] + 0x10) & 1) == 0) {
LAB_10b31d5e4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31d5e8);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[0x39] + 0x18);
    }
  }
  func_0x00010b317878(param_1 + 0x35);
  plVar6 = (long *)param_1[0x34];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      iVar2 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  _pthread_mutex_destroy(param_1 + 0x2c);
  piVar7 = (int *)param_1[0x2a];
  if (piVar7 != (int *)0x0) {
    do {
      iVar2 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar7 + 4))();
    }
  }
  func_0x00010b320978(param_1 + 5);
  plVar6 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  param_1[3] = &PTR_DAT_110cd5ce8;
  uRam000000011383ad30 = 0;
  return param_1;
}



/* Entry: 10b320304; end: 10b3203d3;  */

int FUN_10b320304(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if ((param_1 != (ushort *)0x0) && (0 < (int)param_2)) {
    uVar1 = param_2 & 3;
    if (3 < param_2) {
      uVar3 = (param_2 >> 2) + 1;
      do {
        param_2 = ((uint)*(byte *)((long)param_1 + 3) << 0x13 | (uint)(byte)param_1[1] << 0xb) ^
                  (*param_1 + param_2) * 0x10000 ^ *param_1 + param_2;
        param_1 = param_1 + 2;
        param_2 = param_2 + (param_2 >> 0xb);
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
    if (uVar1 < 2) {
      if (uVar1 != 0) {
        param_2 = param_2 + (int)(char)*param_1;
        param_2 = param_2 ^ param_2 * 0x400;
        param_2 = param_2 + (param_2 >> 1);
      }
    }
    else if (uVar1 == 2) {
      param_2 = *param_1 + param_2 ^ (*param_1 + param_2) * 0x800;
      param_2 = param_2 + (param_2 >> 0x11);
    }
    else {
      param_2 = (int)(char)param_1[1] << 0x12 ^ (*param_1 + param_2) * 0x10000 ^ *param_1 + param_2;
      param_2 = param_2 + (param_2 >> 0xb);
    }
    param_2 = param_2 ^ param_2 << 3;
    param_2 = param_2 + (param_2 >> 5);
    param_2 = param_2 ^ param_2 * 0x10;
    param_2 = param_2 + (param_2 >> 0x11);
    param_2 = param_2 ^ param_2 * 0x2000000;
    iVar2 = param_2 + (param_2 >> 6);
  }
  return iVar2;
}



/* Entry: 10b3203d4; end: 10b325007;  */

char * FUN_10b3203d4(char *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((bRam000000011383ad68 & 1) == 0) {
    iVar5 = 0x1383ad68;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam000000011383ad60 = 0xffffffff;
      func_0x000107c2ce58(0x11383ad60,0);
      ___cxa_guard_release(0x11383ad68);
    }
  }
  uVar6 = uRam000000011336f908;
  _pthread_getspecific();
  lVar4 = lRam000000011383ad58;
  if ((uVar6 & 0xfffffffffffffffc) != 0) {
    puVar1 = (undefined8 *)((uVar6 & 0xfffffffffffffffc) + (long)(int)uRam000000011383ad60 * 0x10);
    if (((*(int *)(puVar1 + 1) == uRam000000011383ad60._4_4_) && (*param_1 == '\x01')) &&
       (puVar7 = (ulong *)*puVar1, puVar7 != (ulong *)0x0)) {
      if (((long)*puVar7 < 0) && ((*(byte *)(lRam000000011383ad58 + 0x178) & 1) != 0)) {
        iVar5 = (int)lRam000000011383ad58 + 0x138;
        _pthread_mutex_trylock();
        if (iVar5 != 0) {
          func_0x00010b329e58(lVar4 + 0x138);
        }
        _pthread_mutex_unlock(lVar4 + 0x138);
      }
      if ((int)puVar7[3] == 1) {
        uVar6 = puVar7[1];
        if (uVar6 != 0) {
          uVar8 = *puVar7;
          (**(code **)(uVar6 + 8))();
          *puVar7 = uVar6 | uVar8 & 0xff00000000000000;
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar3) {
            *puVar7 = *puVar7 & 0xbfffffffffffffff;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else if (param_1[0x10] == '\x01') {
        uVar6 = puVar7[1];
        if (uVar6 != 0) {
          uVar8 = *puVar7;
          (**(code **)(uVar6 + 8))();
          *puVar7 = uVar6 | uVar8 & 0xff00000000000000;
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar3) {
            *puVar7 = *puVar7 | 0x4000000000000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar8 = *(ulong *)(param_1 + 8);
      uVar6 = puVar7[1];
      if (uVar6 != 0) {
        uVar9 = *puVar7;
        (**(code **)(uVar6 + 8))();
        *puVar7 = uVar6 | uVar9 & 0xff00000000000000;
      }
      *puVar7 = *puVar7 & 0x4000000000000000 | uVar8 & 0xffffffffffffff;
      *(int *)(puVar7 + 3) = (int)puVar7[3] + -1;
    }
  }
  return param_1;
}



/* Entry: 10b325008; end: 10b325773;  */

/* WARNING: Removing unreachable block (ram,0x00010b3252ec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b325008(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *******pppppppuVar3;
  short *psVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  char *pcVar20;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [4];
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((iRam00000001137f51a8 == 0) &&
     (lVar17 = param_1, _backtrace_symbols(param_1,param_2), lVar17 != 0)) {
    if (param_2 != 0) {
      lVar12 = 0;
      do {
        uStack_98 = 0xaaaaaaaaaaaaaaaa;
        uStack_90 = 0xaaaaaaaaaaaaaaaa;
        pppppppuStack_a0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
        uVar18 = *(ulong *)(lVar17 + lVar12 * 8);
        uVar11 = uVar18;
        _strlen();
        if (0x7ffffffffffffff7 < uVar11) goto LAB_10b325768;
        if (uVar11 < 0x17) {
          uStack_90 = CONCAT17((char)uVar11,(undefined7)uStack_90);
          pppppppuVar3 = &pppppppuStack_a0;
          if (uVar11 != 0) goto LAB_10b325318;
          uVar18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
          pppppppuStack_a0._0_1_ = 0;
          uVar11 = 0;
        }
        else {
          pppppppuVar10 = (undefined8 *******)0x19;
          if ((uVar11 | 7) != 0x17) {
            pppppppuVar10 = (undefined8 *******)((uVar11 | 7) + 1);
          }
          pppppppuVar3 = pppppppuVar10;
          __Znwm();
          uStack_90 = (ulong)pppppppuVar10 | 0x8000000000000000;
          pppppppuStack_a0 = pppppppuVar3;
          uStack_98 = uVar11;
LAB_10b325318:
          _memmove(pppppppuVar3,uVar18,uVar11);
          uVar18 = 0;
          *(undefined1 *)((long)pppppppuVar3 + uVar11) = 0;
          uVar11 = (ulong)uStack_90._7_1_;
          uVar15 = uVar11;
          if ((long)uVar11 < 0) goto LAB_10b325358;
        }
LAB_10b325338:
        uVar15 = uVar11;
        if (uVar18 < uVar11) {
          pppppppuVar10 = &pppppppuStack_a0;
          lVar9 = uVar11 - uVar18;
          if (1 < lVar9) {
            do {
              psVar4 = (short *)((long)pppppppuVar10 + uVar18);
              while( true ) {
                _memchr(psVar4,0x5f,lVar9 + -1);
                uVar16 = uStack_98;
                pppppppuVar3 = pppppppuStack_a0;
                if (psVar4 == (short *)0x0) goto LAB_10b3256d8;
                if (*psVar4 == 0x5a5f) break;
                psVar4 = (short *)((long)psVar4 + 1);
                lVar9 = (long)((long)pppppppuVar10 + uVar11) - (long)psVar4;
                if (lVar9 < 2) goto LAB_10b3256d8;
              }
              if ((psVar4 == (short *)((long)pppppppuVar10 + uVar11)) ||
                 (uVar18 = (long)psVar4 - (long)pppppppuVar10, uVar18 == 0xffffffffffffffff)) break;
              iVar14 = (int)uVar15;
              uVar11 = uStack_98;
              pppppppuVar10 = pppppppuStack_a0;
              if (-1 < iVar14) {
                uVar11 = uVar15;
                pppppppuVar10 = &pppppppuStack_a0;
              }
              if (uVar18 < uVar11) {
                pcVar20 = (char *)((long)pppppppuVar10 + uVar18);
                do {
                  puVar5 = &UNK_10e57485d;
                  _memchr(&UNK_10e57485d,(long)*pcVar20,0x3f);
                  if (puVar5 == (undefined *)0x0) {
                    if ((long)pcVar20 - (long)pppppppuVar10 != -1) {
                      uVar11 = ((long)pcVar20 - (long)pppppppuVar10) - uVar18;
                      if (iVar14 < 0) goto LAB_10b325458;
                      goto LAB_10b325444;
                    }
                    break;
                  }
                  pcVar20 = pcVar20 + 1;
                } while (pcVar20 != (char *)((long)pppppppuVar10 + uVar11));
              }
              if (iVar14 < 0) {
                uVar11 = uVar16 - uVar18;
LAB_10b325458:
                uStack_70 = 0xaaaaaaaaaaaaaaaa;
                _auStack_78 = 0xaaaaaaaaaaaaaaaa;
                uStack_80 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
                if (uVar16 < uVar18) goto LAB_10b32576c;
              }
              else {
                uVar11 = uVar15 - uVar18;
LAB_10b325444:
                uStack_70 = 0xaaaaaaaaaaaaaaaa;
                _auStack_78 = 0xaaaaaaaaaaaaaaaa;
                uStack_80 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
                if (uVar15 < uVar18) goto LAB_10b32576c;
                pppppppuVar3 = &pppppppuStack_a0;
                uVar16 = uVar15;
              }
              uStack_70 = 0xaaaaaaaaaaaaaaaa;
              _auStack_78 = 0xaaaaaaaaaaaaaaaa;
              uStack_80 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
              uVar15 = uVar16 - uVar18;
              if (uVar11 <= uVar16 - uVar18) {
                uVar15 = uVar11;
              }
              if (0x7ffffffffffffff7 < uVar15) goto LAB_10b325768;
              if (uVar15 < 0x17) {
                uStack_70 = CONCAT17((char)uVar15,0xaaaaaaaaaaaaaa);
                puVar19 = &uStack_80;
                if (uVar15 != 0) goto LAB_10b3254c0;
              }
              else {
                puVar6 = (undefined8 *)0x19;
                if ((uVar15 | 7) != 0x17) {
                  puVar6 = (undefined8 *)((uVar15 | 7) + 1);
                }
                puVar19 = puVar6;
                __Znwm();
                uStack_70 = (ulong)puVar6 | 0x8000000000000000;
                uStack_80 = puVar19;
                _auStack_78 = uVar15;
LAB_10b3254c0:
                _memmove(puVar19,(long)pppppppuVar3 + uVar18,uVar15);
              }
              *(undefined1 *)((long)puVar19 + uVar15) = 0;
              iStack_84 = 0;
              puVar6 = uStack_80;
              if (-1 < (long)uStack_70) {
                puVar6 = &uStack_80;
              }
              ___cxa_demangle(puVar6,0,0,&iStack_84);
              if (iStack_84 == 0) {
                uVar15 = uStack_98;
                if (-1 < (long)uStack_90) {
                  uVar15 = uStack_90 >> 0x38;
                }
                if (uVar15 < uVar18) goto LAB_10b325770;
                puVar19 = puVar6;
                if (uVar11 == 0xffffffffffffffff) {
                  if ((long)uStack_90 < 0) {
                    uStack_98 = uVar18;
                    *(undefined1 *)((long)pppppppuStack_a0 + uVar18) = 0;
                    _strlen();
                    goto joined_r0x00010b3256ac;
                  }
                  uStack_90 = CONCAT17((char)uVar18,(undefined7)uStack_90) & 0x7fffffffffffffff;
                  *(undefined1 *)((long)&pppppppuStack_a0 + uVar18) = 0;
                  _strlen();
                  uVar11 = (ulong)uStack_90._7_1_;
                  if (-1 < (long)uVar11) goto LAB_10b325580;
LAB_10b325604:
                  if (uStack_98 < uVar18) goto LAB_10b325770;
                  lVar9 = (uStack_90 & 0x7fffffffffffffff) - 1;
                  uVar15 = uStack_98;
                  if ((undefined8 *)(lVar9 - uStack_98) < puVar19) goto LAB_10b32559c;
LAB_10b325628:
                  if (puVar19 != (undefined8 *)0x0) {
                    pppppppuVar10 = pppppppuStack_a0;
                    if (-1 < (int)uVar11) {
                      pppppppuVar10 = &pppppppuStack_a0;
                    }
                    puVar7 = puVar6;
                    if (uVar15 - uVar18 != 0) {
                      puVar8 = (undefined8 *)((long)pppppppuVar10 + uVar18);
                      puVar7 = puVar19;
                      if ((undefined8 *)((long)pppppppuVar10 + uVar15) <= puVar6 || puVar6 < puVar8)
                      {
                        puVar7 = (undefined8 *)0x0;
                      }
                      puVar7 = (undefined8 *)((long)puVar6 + (long)puVar7);
                      _memmove((long)puVar8 + (long)puVar19,puVar8,uVar15 - uVar18);
                    }
                    _memmove((long)pppppppuVar10 + uVar18,puVar7,puVar19);
                    uVar15 = uVar15 + (long)puVar19;
                    uVar11 = uVar15;
                    if (-1 < (long)uStack_90) {
                      uStack_90 = CONCAT17((char)uVar15,(undefined7)uStack_90) & 0x7fffffffffffffff;
                      uVar11 = uStack_98;
                    }
                    uStack_98 = uVar11;
                    *(undefined1 *)((long)pppppppuVar10 + uVar15) = 0;
                  }
                }
                else {
                  func_0x000107c28074(&pppppppuStack_a0,uVar18,uVar11);
                  _strlen();
joined_r0x00010b3256ac:
                  uVar11 = (ulong)uStack_90._7_1_;
                  if ((long)uVar11 < 0) goto LAB_10b325604;
LAB_10b325580:
                  if (uVar11 < uVar18) goto LAB_10b325770;
                  lVar9 = 0x16;
                  uVar15 = uVar11;
                  if (puVar19 <= (undefined8 *)(0x16 - uVar11)) goto LAB_10b325628;
LAB_10b32559c:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                            (&pppppppuStack_a0,lVar9,(long)puVar19 + (uVar15 - lVar9),uVar15,uVar18,
                             0,puVar19,puVar6);
                }
                puVar19 = puVar6;
                _strlen();
              }
              else {
                puVar19 = (undefined8 *)0x2;
              }
              if (puVar6 != (undefined8 *)0x0) {
                _free(puVar6);
              }
              if ((long)uStack_70 < 0) {
                __ZdlPv(uStack_80);
              }
              else {
              }
              uVar11 = (ulong)uStack_90._7_1_;
              uVar18 = (long)puVar19 + uVar18;
              uVar15 = uVar11;
              if (-1 < (long)uVar11) goto LAB_10b325338;
LAB_10b325358:
              if ((uStack_98 <= uVar18) ||
                 (lVar9 = uStack_98 - uVar18, uVar11 = uStack_98, pppppppuVar10 = pppppppuStack_a0,
                 lVar9 < 2)) break;
            } while( true );
          }
        }
LAB_10b3256d8:
        cVar13 = (char)uVar15;
        if (param_3 != 0) {
          (**(code **)*param_4)(param_4,param_3);
          cVar13 = uStack_90._7_1_;
        }
        pppppppuVar10 = pppppppuStack_a0;
        if (-1 < cVar13) {
          pppppppuVar10 = &pppppppuStack_a0;
        }
        (**(code **)*param_4)(param_4,pppppppuVar10);
        (**(code **)*param_4)(param_4,&DAT_10f68f57e);
        if ((long)uStack_90 < 0) {
          __ZdlPv(pppppppuStack_a0);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != param_2);
    }
    _free(lVar17);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar17 = 0;
      do {
        (**(code **)*param_4)(param_4,&UNK_10f47a8fa);
        uVar11 = *(ulong *)(param_1 + lVar17 * 8);
        uStack_80 = (undefined8 *)0x0;
        _auStack_78 = 0;
        uStack_70 = uStack_70 & 0xffffffffffffff00;
        (**(code **)*param_4)(param_4,&DAT_10f519110);
        uVar2 = _auStack_78;
        uStack_80 = (undefined8 *)
                    CONCAT17((&UNK_10f416238)[uVar11 >> 0x1c & 0xf],
                             CONCAT16((&UNK_10f416238)[uVar11 >> 0x18 & 0xf],
                                      CONCAT15((&UNK_10f416238)[uVar11 >> 0x14 & 0xf],
                                               CONCAT14((&UNK_10f416238)[uVar11 >> 0x10 & 0xf],
                                                        CONCAT13((&UNK_10f416238)
                                                                 [uVar11 >> 0xc & 0xf],
                                                                 CONCAT12((&UNK_10f416238)
                                                                          [uVar11 >> 8 & 0xf],
                                                                          CONCAT11((&UNK_10f416238)
                                                                                   [uVar11 >> 4 &
                                                                                    0xf],(&
                                                  UNK_10f416238)[uVar11 & 0xf])))))));
        auStack_78[1] = (&UNK_10f416238)[uVar11 >> 0x24 & 0xf];
        auStack_78[0] = (&UNK_10f416238)[uVar11 >> 0x20 & 0xf];
        auStack_78[2] = (&UNK_10f416238)[uVar11 >> 0x28 & 0xf];
        _uStack_74 = SUB84(uVar2,4);
        auStack_78[3] = (&UNK_10f416238)[uVar11 >> 0x2c & 0xf];
        puVar6 = (undefined8 *)(auStack_78 + 3);
        puVar19 = (undefined8 *)(auStack_78 + 4);
        if (uVar11 >> 0x30 != 0) {
          _uStack_73 = SUB83(uVar2,5);
          _auStack_78 = CONCAT14((&UNK_10f416238)[uVar11 >> 0x30 & 0xf],auStack_78);
          puVar6 = (undefined8 *)(auStack_78 + 4);
          puVar19 = (undefined8 *)(auStack_78 + 5);
          if (uVar11 >> 0x34 != 0) {
            _uStack_72 = SUB82(uVar2,6);
            _auStack_78 = CONCAT15((&UNK_10f416238)[uVar11 >> 0x34 & 0xf],_auStack_78);
            puVar6 = (undefined8 *)(auStack_78 + 5);
            puVar19 = (undefined8 *)(auStack_78 + 6);
            if (uVar11 >> 0x38 != 0) {
              uStack_71 = SUB81(uVar2,7);
              _auStack_78 = CONCAT16((&UNK_10f416238)[uVar11 >> 0x38 & 0xf],_auStack_78);
              puVar6 = (undefined8 *)(auStack_78 + 6);
              puVar19 = (undefined8 *)(auStack_78 + 7);
              if (uVar11 >> 0x3c != 0) {
                _auStack_78 = CONCAT17((&UNK_10f416238)[uVar11 >> 0x3c],_auStack_78);
                puVar6 = (undefined8 *)(auStack_78 + 7);
                puVar19 = &uStack_70;
              }
            }
          }
        }
        *(undefined1 *)puVar19 = 0;
        puVar19 = &uStack_80;
        do {
          puVar8 = (undefined8 *)((long)puVar19 + 1);
          uVar1 = *(undefined1 *)puVar6;
          puVar7 = (undefined8 *)((long)puVar6 + -1);
          *(undefined1 *)puVar6 = *(undefined1 *)puVar19;
          *(undefined1 *)puVar19 = uVar1;
          puVar6 = puVar7;
          puVar19 = puVar8;
        } while (puVar8 < puVar7);
        (**(code **)*param_4)(param_4,&uStack_80);
        (**(code **)*param_4)(param_4,&UNK_10f63a482);
        lVar17 = lVar17 + 1;
      } while (lVar17 != param_2);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10b325768:
  FUN_10b2ecf74();
LAB_10b32576c:
  func_0x00010b2ed138();
LAB_10b325770:
  func_0x000104c03f14();
  return;
}



/* Entry: 10b325774; end: 10b325777;  */

void FUN_10b325774(void)

{
  return;
}



/* Entry: 10b325778; end: 10b3257ab;  */

long * FUN_10b325778(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar5 = *(long **)(param_1 + 8);
  lVar4 = param_2;
  _strlen(param_2);
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c60cd0(&uStack_68,plVar5);
  if ((char)uStack_68 == '\x01') {
    lVar1 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
    lVar6 = *(long *)(lVar1 + 0x28);
    lVar2 = param_2 + lVar4;
    if ((*(uint *)(lVar1 + 8) & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    iVar7 = *(int *)(lVar1 + 0x90);
    if (iVar7 == -1) {
      func_0x000107c60c08(&lStack_58,lVar1);
      plVar3 = &lStack_58;
      func_0x000107c60c00(plVar3,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar3 + 0x38))();
      iVar7 = (int)plVar3;
      func_0x000107c60db0(&lStack_58);
      *(int *)(lVar1 + 0x90) = iVar7;
    }
    func_0x0001001545ec(lVar6,param_2,lVar2,param_2 + lVar4,lVar1,(int)(char)iVar7);
    if (lVar6 == 0) {
      lVar4 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
      func_0x000107c60dd4(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  func_0x000107c60cd4(&uStack_68);
  return plVar5;
}



/* Entry: 10b3257ac; end: 10b3257af;  */

void FUN_10b3257ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b3257b0; end: 10b32587b;  */

long * FUN_10b3257b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((bRam000000011383c658 & 1) == 0) {
    iVar4 = 0x1383c658;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam000000011383c650 = 0xffffffff;
      func_0x000107c2ce58(0x11383c650,0);
      ___cxa_guard_release(0x11383c658);
    }
  }
  uVar5 = uRam000000011336f908;
  _pthread_getspecific();
  uVar5 = uVar5 & 0xfffffffffffffffc;
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + (long)(int)uRam000000011383c650 * 0x10) = 0;
    *(undefined4 *)(uVar5 + (long)(int)uRam000000011383c650 * 0x10 + 8) = uRam000000011383c650._4_4_
    ;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return param_1;
}



/* Entry: 10b32587c; end: 10b3258ab;  */

void FUN_10b32587c(void)

{
  FUN_10b3258ac();
  return;
}



/* Entry: 10b3258ac; end: 10b325c1f;  */

undefined8 *
FUN_10b3258ac(undefined8 *param_1,undefined8 *param_2,int param_3,undefined4 param_4,
             undefined8 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_180;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [32];
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 9,*param_2,param_2[1]);
    *(char *)(param_1 + 0xc) = (char)param_3;
    *(undefined4 *)((long)param_1 + 100) = param_4;
    if (-1 < *(char *)((long)param_5 + 0x17)) goto LAB_10b32593c;
LAB_10b32596c:
    func_0x000107c3192c(param_1 + 0xd,*param_5,param_5[1]);
  }
  else {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    param_1[0xb] = param_2[2];
    param_1[10] = uVar12;
    param_1[9] = uVar11;
    *(char *)(param_1 + 0xc) = (char)param_3;
    *(undefined4 *)((long)param_1 + 100) = param_4;
    if (*(char *)((long)param_5 + 0x17) < '\0') goto LAB_10b32596c;
LAB_10b32593c:
    uVar12 = param_5[1];
    uVar11 = *param_5;
    param_1[0xf] = param_5[2];
    param_1[0xe] = uVar12;
    param_1[0xd] = uVar11;
  }
  plVar7 = param_1 + 0x12;
  param_1[0x13] = 0;
  *plVar7 = 0;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)((long)param_1 + 0x84) = param_7;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if ((param_3 == 0) || ((*(byte *)((long)param_1 + 100) >> 4 & 1) != 0)) {
    uVar9 = 0;
    uVar8 = 0;
LAB_10b325aa8:
    uVar10 = param_1[0x13];
    uVar6 = (uVar8 - uVar9) + 1;
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = uVar10 - 1;
    }
    if (uVar5 < uVar6) {
LAB_10b325ac4:
      uVar5 = uVar5 + (uVar5 >> 2);
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      if (uVar6 < 4) {
        uVar6 = 3;
      }
      uVar10 = uVar6 + 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      if (SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b325bec);
        (*pcVar2)();
      }
      lVar3 = uVar10 * 0x18;
      _malloc();
      FUN_10b326c18(plVar7,uVar9,uVar8,lVar3,uVar10,param_1 + 0x14,param_1 + 0x15);
      _free(param_1[0x12]);
      param_1[0x12] = lVar3;
      param_1[0x13] = uVar10;
      uVar8 = param_1[0x15];
    }
  }
  else {
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_128 = 0xaaaaaaaaaaaaaaaa;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    uStack_118 = 0xaaaaaaaaaaaaaaaa;
    uStack_120 = 0xaaaaaaaaaaaaaaaa;
    uStack_148 = 0xaaaaaaaaaaaaaaaa;
    uStack_150 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_168 = 0xaaaaaaaaaaaaaaaa;
    uStack_170 = 0xaaaaaaaaaaaaaaaa;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    uStack_160 = 0xaaaaaaaaaaaaaaaa;
    uStack_178 = 0xaaaaaaaaaaaaaaaa;
    uStack_180 = 0xaaaaaaaaaaaaaaaa;
    puVar4 = (undefined8 *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puVar4 = param_2;
    }
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_78 = 0xaaaaaaaaaaaaaaaa;
    uStack_80 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaaaaaaaaaa;
    uStack_a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c2cb24(auStack_e8,&UNK_10f7454bc,&UNK_10f74542c,0x251);
    func_0x000107c2ce28(&uStack_c0,auStack_e8,0,0);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      puStack_c8 = auStack_e8;
      func_0x00010b32059c(&UNK_10f74523a,&puStack_c8);
    }
    _stat(puVar4,&uStack_180);
    func_0x000107c2ce2c(&uStack_c0);
    if ((int)puVar4 < 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
    }
    func_0x00010787b488(param_1 + 3,(ulong)&uStack_180 | 8,(ulong)&uStack_180 | 8);
    uVar9 = param_1[0x14];
    uVar8 = param_1[0x15];
    if (uVar9 <= uVar8) goto LAB_10b325aa8;
    uVar10 = param_1[0x13];
    uVar6 = (uVar8 - uVar9) + uVar10 + 1;
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = uVar10 - 1;
    }
    if (uVar5 < uVar6) goto LAB_10b325ac4;
  }
  if (uVar10 < uVar8) goto LAB_10b325c08;
  puVar4 = (undefined8 *)(*plVar7 + uVar8 * 0x18);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*param_2,param_2[1]);
    uVar8 = param_1[0x15];
    uVar9 = param_1[0x13];
    uVar6 = uVar9 - 1;
    if (uVar8 == uVar6) goto LAB_10b325b70;
LAB_10b325b94:
    param_1[0x15] = uVar8 + 1;
    if (uVar8 == 0xffffffffffffffff) goto LAB_10b325ba0;
  }
  else {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar12;
    *puVar4 = uVar11;
    uVar8 = param_1[0x15];
    uVar9 = param_1[0x13];
    uVar6 = uVar9 - 1;
    if (uVar8 != uVar6) goto LAB_10b325b94;
LAB_10b325b70:
    param_1[0x15] = 0;
LAB_10b325ba0:
    uVar8 = uVar6;
  }
  if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b325c18);
    (*pcVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b325c08:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10b325c0c);
  (*pcVar2)();
}



/* Entry: 10b325c20; end: 10b325cff;  */

/* WARNING: Removing unreachable block (ram,0x00010b325cb0) */

long * FUN_10b325c20(long *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_10b326aa0(param_1 + 0x12,param_1[0x14],param_1[0x15]);
  _free(param_1[0x12]);
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    plVar2 = (long *)param_1[5];
  }
  else {
    plVar2 = (long *)param_1[5];
  }
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = param_1[3];
  param_1[3] = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar5 = param_1[1];
    lVar4 = lVar3;
    if (lVar5 != lVar3) {
      do {
        lVar5 = lVar5 + -0xa8;
      } while (lVar5 != lVar3);
      lVar4 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return param_1;
}



/* Entry: 10b325d00; end: 10b326a9f;  */

/* WARNING: Removing unreachable block (ram,0x00010b326014) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b325d00(undefined8 *param_1,long *param_2)

{
  long *******ppppppplVar1;
  long *plVar2;
  long *plVar3;
  long *******ppppppplVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  uint *puVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long *******ppppppplVar28;
  long lVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  ulong uVar32;
  long ******pppppplVar33;
  long ******pppppplVar34;
  long ******pppppplVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long ******pppppplVar39;
  long *******ppppppplStack_208;
  long ******pppppplStack_200;
  long ******pppppplStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long *******ppppppplStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long *******ppppppplStack_148;
  ulong uStack_140;
  undefined7 uStack_138;
  char cStack_131;
  long *******ppppppplStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *******ppppppplStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_108 = 0xaaaaaaaaaaaaaaaa;
  uStack_110 = 0xaaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_100 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  uStack_120 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&uStack_1f0,&DAT_10f377952,&UNK_10f7453fc,0x8a);
  func_0x000107c2ce28(&uStack_120,&uStack_1f0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    ppppppplStack_d0 = (long *******)&uStack_1f0;
    func_0x00010b32059c(&UNK_10f74523a,&ppppppplStack_d0);
  }
  uVar23 = param_2[8] + 1;
  param_2[8] = uVar23;
  lVar29 = *param_2;
  if ((ulong)((param_2[1] - lVar29 >> 3) * -0x30c30c30c30c30c3) <= uVar23) {
    plVar3 = param_2 + 9;
    do {
      uVar23 = param_2[0x15];
      if (param_2[0x14] == uVar23) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_10b326968;
      }
      uVar22 = param_2[0x13];
      if (uVar23 != 0) {
        uVar22 = uVar23;
      }
      if ((ulong)param_2[0x13] < uVar22 - 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a68);
        (*pcVar10)();
      }
      plVar21 = (long *)(param_2[0x12] + (uVar22 - 1) * 0x18);
      if (plVar3 == plVar21) {
LAB_10b325eac:
        FUN_10b2f1300(&uStack_1f0,plVar3);
        cVar18 = *(char *)((long)param_2 + 0x5f);
      }
      else {
        bVar5 = *(byte *)((long)plVar21 + 0x17);
        if (*(char *)((long)param_2 + 0x5f) < '\0') {
          uVar23 = plVar21[1];
          plVar14 = (long *)*plVar21;
          if (-1 < (char)bVar5) {
            uVar23 = (ulong)bVar5;
            plVar14 = plVar21;
          }
          func_0x000107c27ba0(plVar3,plVar14,uVar23);
          goto LAB_10b325eac;
        }
        if ((char)bVar5 < '\0') {
          func_0x000107c27ba4(plVar3,*plVar21,plVar21[1]);
          FUN_10b2f1300(&uStack_1f0,plVar3);
          cVar18 = *(char *)((long)param_2 + 0x5f);
        }
        else {
          lVar24 = plVar21[1];
          lVar29 = *plVar21;
          param_2[0xb] = plVar21[2];
          param_2[10] = lVar24;
          *plVar3 = lVar29;
          FUN_10b2f1300(&uStack_1f0,plVar3);
          cVar18 = *(char *)((long)param_2 + 0x5f);
        }
      }
      if (cVar18 < '\0') {
        __ZdlPv(*plVar3);
      }
      param_2[10] = lStack_1e8;
      *plVar3 = (long)uStack_1f0;
      param_2[0xb] = lStack_1e0;
      uVar22 = param_2[0x13];
      uVar23 = uVar22;
      if (param_2[0x15] != 0) {
        uVar23 = param_2[0x15];
      }
      uVar25 = uVar23 - 1;
      param_2[0x15] = uVar25;
      if (uVar22 < uVar25) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a74);
        (*pcVar10)();
      }
      if (uVar22 < uVar23) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a80);
        (*pcVar10)();
      }
      if (uVar23 == 0x8000000000000000) goto LAB_10b326a58;
      puVar26 = (undefined8 *)(param_2[0x12] + uVar25 * 0x18);
      if (*(char *)((long)puVar26 + 0x17) < '\0') {
        __ZdlPv(*puVar26);
        uVar22 = param_2[0x13];
        uVar23 = 0;
        if (uVar22 != 0) {
          uVar23 = uVar22 - 1;
        }
      }
      else {
        uVar23 = 0;
        if (uVar22 != 0) {
          uVar23 = uVar22 - 1;
        }
      }
      if (3 < uVar23) {
        uVar25 = param_2[0x14];
        uVar32 = param_2[0x15];
        if (uVar25 <= uVar32) {
          uVar22 = 0;
        }
        uVar22 = (uVar22 - uVar25) + uVar32;
        if (uVar22 <= uVar23 - uVar22) {
          uVar22 = uVar22 + (uVar22 >> 2);
          if (uVar22 < 4) {
            uVar22 = 3;
          }
          if (uVar22 < uVar23) {
            uVar22 = uVar22 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            if (SUB168(auVar8 * ZEXT816(0x18),8) != 0) {
LAB_10b326a60:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10b326a64);
              (*pcVar10)();
            }
            lVar29 = uVar22 * 0x18;
            _malloc();
            FUN_10b326c18(param_2 + 0x12,uVar25,uVar32,lVar29,uVar22,param_2 + 0x14,param_2 + 0x15);
            _free(param_2[0x12]);
            param_2[0x12] = lVar29;
            param_2[0x13] = uVar22;
          }
        }
      }
      if (*(char *)((long)param_2 + 0x5f) < '\0') {
        plVar21 = (long *)*plVar3;
        _opendir();
      }
      else {
        plVar21 = plVar3;
        _opendir();
      }
      if (plVar21 != (long *)0x0) {
        for (lVar29 = param_2[1]; lVar29 != *param_2; lVar29 = lVar29 + -0xa8) {
        }
        param_2[1] = *param_2;
        param_2[8] = 0;
        plVar14 = plVar21;
        ___error();
        *(undefined4 *)plVar14 = 0;
        plVar14 = plVar21;
        _readdir();
joined_r0x00010b326038:
        if (plVar14 != (long *)0x0) {
          do {
            uStack_150 = 0;
            lStack_168 = 0;
            lStack_170 = 0;
            uStack_158 = 0;
            ppppppplStack_160 = (long *******)0x0;
            lStack_178 = 0;
            lStack_180 = 0;
            lStack_198 = 0;
            lStack_1a0 = 0;
            lStack_188 = 0;
            lStack_190 = 0;
            lStack_1b8 = 0;
            lStack_1c0 = 0;
            lStack_1a8 = 0;
            lStack_1b0 = 0;
            lStack_1d8 = 0;
            lStack_1e0 = 0;
            lStack_1c8 = 0;
            lStack_1d0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = (long ******)0x0;
            uVar23 = (long)plVar14 + 0x15;
            _strlen();
            if (0x7ffffffffffffff7 < uVar23) {
              FUN_10b2ecf74();
              goto LAB_10b326a48;
            }
            if (uVar23 < 0x17) {
              uStack_c0 = CONCAT17((char)uVar23,(undefined7)uStack_c0);
              ppppppplVar16 = (long *******)&ppppppplStack_d0;
              if (uVar23 != 0) goto LAB_10b32612c;
            }
            else {
              ppppppplVar15 = (long *******)0x19;
              if ((uVar23 | 7) != 0x17) {
                ppppppplVar15 = (long *******)((uVar23 | 7) + 1);
              }
              ppppppplVar16 = ppppppplVar15;
              __Znwm();
              uStack_c0 = (ulong)ppppppplVar15 | 0x8000000000000000;
              ppppppplStack_d0 = ppppppplVar16;
              uStack_c8 = uVar23;
LAB_10b32612c:
              _memmove(ppppppplVar16,(long)plVar14 + 0x15,uVar23);
            }
            *(undefined1 *)((long)ppppppplVar16 + uVar23) = 0;
            uVar32 = uStack_c0;
            uVar25 = uStack_c8;
            ppppppplVar16 = ppppppplStack_d0;
            uVar22 = uStack_c0 >> 0x38;
            uVar23 = uStack_c8;
            ppppppplVar15 = ppppppplStack_d0;
            if (-1 < (long)uStack_c0) {
              uVar23 = uVar22;
              ppppppplVar15 = (long *******)&ppppppplStack_d0;
            }
            ppppppplVar31 = ppppppplVar15;
            _memchr(ppppppplVar15,0,uVar23);
            uVar23 = (long)ppppppplVar31 - (long)ppppppplVar15;
            if (ppppppplVar31 != (long *******)0x0 && uVar23 != 0xffffffffffffffff) {
              if ((long)uVar32 < 0) {
                uVar22 = uVar23;
                if (uVar23 <= uVar25) goto LAB_10b3261c0;
              }
              else if (uVar23 <= uVar22) {
                uStack_c0 = CONCAT17((char)uVar23,(undefined7)uStack_c0);
                ppppppplVar16 = (long *******)&ppppppplStack_d0;
                uVar22 = uStack_c8;
LAB_10b3261c0:
                uStack_c8 = uVar22;
                *(undefined1 *)((long)ppppppplVar16 + uVar23) = 0;
                goto LAB_10b3261c4;
              }
LAB_10b326a48:
              func_0x000104c03f14();
LAB_10b326a4c:
              func_0x00010bdb3638();
LAB_10b326a50:
              func_0x00010b2ed0ac();
              goto LAB_10b326a54;
            }
LAB_10b3261c4:
            if ((long)uStack_150 < 0) {
              __ZdlPv(ppppppplStack_160);
            }
            uStack_158 = uStack_c8;
            ppppppplStack_160 = ppppppplStack_d0;
            uStack_150 = uStack_c0;
            uStack_c8 = 0xaaaaaaaaaaaaaaaa;
            uStack_c0 = 0xaaaaaaaaaaaaaaaa;
            ppppppplStack_d0 = (long *******)0xaaaaaaaaaaaaaaaa;
            ppppppplVar15 = (long *******)&ppppppplStack_160;
            func_0x000107c2cab8(&ppppppplStack_148);
            if (cStack_131 < '\0') {
              ppppppplVar15 = (long *******)&ppppppplStack_d0;
              func_0x000107c3192c(ppppppplVar15,ppppppplStack_148,uStack_140);
              if (cStack_131 < '\0') {
                ppppppplVar15 = ppppppplStack_148;
                __ZdlPv();
                cVar18 = uStack_c0._7_1_;
                if (-1 < (long)uStack_c0) goto LAB_10b326258;
                goto LAB_10b326218;
              }
              cVar18 = uStack_c0._7_1_;
              if ((long)uStack_c0 < 0) goto LAB_10b326218;
LAB_10b326258:
              if (cVar18 == '\x02') {
                if ((short)ppppppplStack_d0 != 0x2e2e) goto LAB_10b32630c;
                uVar19 = *(uint *)((long)param_2 + 100);
                goto joined_r0x00010b326294;
              }
              if (cVar18 == '\x01') {
                cVar18 = (char)ppppppplStack_d0;
                goto joined_r0x00010b326270;
              }
LAB_10b32630c:
              cVar18 = *(char *)((long)param_2 + 0x7f);
joined_r0x00010b3262c8:
              if (cVar18 < '\0') {
                if (param_2[0xe] != 0) {
                  ppppppplVar15 = (long *******)param_2[0xd];
                  goto LAB_10b32631c;
                }
LAB_10b326358:
                bVar11 = true;
              }
              else {
                ppppppplVar15 = (long *******)(param_2 + 0xd);
                if (cVar18 == '\0') goto LAB_10b326358;
LAB_10b32631c:
                ppppppplVar16 = ppppppplStack_160;
                if (-1 < (long)uStack_150) {
                  ppppppplVar16 = (long *******)&ppppppplStack_160;
                }
                _fnmatch(ppppppplVar15,ppppppplVar16,1);
                iVar13 = (int)ppppppplVar15;
                bVar11 = iVar13 == 0;
                if ((((int)param_2[0x10] == 0) && (iVar13 != 0)) ||
                   (((*(byte *)(param_2 + 0xc) & 1) == 0 && (iVar13 != 0)))) goto LAB_10b326094;
              }
              pppppplStack_200 = (long ******)0xaaaaaaaaaaaaaaaa;
              pppppplStack_1f8 = (long ******)0xaaaaaaaaaaaaaaaa;
              ppppppplStack_208 = (long *******)0xaaaaaaaaaaaaaaaa;
              ppppppplVar15 = ppppppplStack_160;
              if (-1 < (long)uStack_150._7_1_) {
                ppppppplVar15 = (long *******)&ppppppplStack_160;
              }
              uVar23 = uStack_158;
              if (-1 < (long)uStack_150) {
                uVar23 = (long)uStack_150._7_1_;
              }
              func_0x000107c2cabc(&ppppppplStack_208,plVar3,ppppppplVar15,uVar23);
              ppppppplVar16 = ppppppplStack_208;
              if (-1 < (long)pppppplStack_1f8) {
                ppppppplVar16 = (long *******)&ppppppplStack_208;
              }
              if ((*(byte *)((long)param_2 + 100) >> 4 & 1) == 0) {
                uStack_98 = 0xaaaaaaaaaaaaaaaa;
                uStack_a0 = 0xaaaaaaaaaaaaaaaa;
                uStack_88 = 0xaaaaaaaaaaaaaaaa;
                uStack_90 = 0xaaaaaaaaaaaaaaaa;
                uStack_b8 = 0xaaaaaaaaaaaaaaaa;
                uStack_c0 = 0xaaaaaaaaaaaaaaaa;
                uStack_a8 = 0xaaaaaaaaaaaaaaaa;
                uStack_b0 = 0xaaaaaaaaaaaaaaaa;
                uStack_c8 = 0xaaaaaaaaaaaaaaaa;
                ppppppplStack_d0 = (long *******)0xaaaaaaaaaaaaaaaa;
                func_0x000107c2cb24(&ppppppplStack_148,&UNK_10f7454bc,&UNK_10f74542c,0x251);
                func_0x000107c2ce28(&ppppppplStack_d0,&ppppppplStack_148,0,0);
                if ((bRam000000011336f9a8 & 0x19) != 0) {
                  ppppppplStack_128 = (long *******)&ppppppplStack_148;
                  func_0x00010b32059c(&UNK_10f74523a,&ppppppplStack_128);
                }
                _stat(ppppppplVar16,&uStack_1f0);
                ppppppplVar15 = (long *******)&ppppppplStack_d0;
                func_0x000107c2ce2c();
                if ((int)ppppppplVar16 < 0) goto LAB_10b3264ec;
LAB_10b326410:
                bVar12 = (uStack_1f0._4_2_ & 0xf000) == 0x4000;
                if (((char)param_2[0xc] == '\x01') && ((uStack_1f0._4_2_ & 0xf000) == 0x4000)) {
                  if ((*(byte *)((long)param_2 + 100) >> 4 & 1) == 0) {
                    ppppppplVar15 = (long *******)(param_2 + 3);
                    plVar14 = &lStack_1e8;
                    func_0x00010787b488(ppppppplVar15,plVar14,&lStack_1e8);
                    if (((ulong)plVar14 & 1) != 0) goto LAB_10b326454;
                  }
                  else {
LAB_10b326454:
                    uVar23 = param_2[0x14];
                    uVar22 = param_2[0x15];
                    if (uVar22 < uVar23) {
                      uVar32 = param_2[0x13];
                      uVar25 = (uVar22 - uVar23) + uVar32 + 1;
                      uVar27 = 0;
                      if (uVar32 != 0) {
                        uVar27 = uVar32 - 1;
                      }
                      if (uVar27 < uVar25) {
LAB_10b326528:
                        uVar27 = uVar27 + (uVar27 >> 2);
                        if (uVar25 <= uVar27) {
                          uVar25 = uVar27;
                        }
                        if (uVar25 < 4) {
                          uVar25 = 3;
                        }
                        uVar32 = uVar25 + 1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar32;
                        if (SUB168(auVar9 * ZEXT816(0x18),8) != 0) goto LAB_10b326a60;
                        lVar29 = uVar32 * 0x18;
                        _malloc();
                        FUN_10b326c18(param_2 + 0x12,uVar23,uVar22,lVar29,uVar32,param_2 + 0x14,
                                      param_2 + 0x15);
                        _free(param_2[0x12]);
                        param_2[0x12] = lVar29;
                        param_2[0x13] = uVar32;
                        uVar22 = param_2[0x15];
                      }
                    }
                    else {
                      uVar32 = param_2[0x13];
                      uVar25 = (uVar22 - uVar23) + 1;
                      uVar27 = 0;
                      if (uVar32 != 0) {
                        uVar27 = uVar32 - 1;
                      }
                      if (uVar27 < uVar25) goto LAB_10b326528;
                    }
                    if (uVar32 < uVar22) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a8c);
                      (*pcVar10)();
                    }
                    ppppppplVar15 = (long *******)(param_2[0x12] + uVar22 * 0x18);
                    if ((long)pppppplStack_1f8 < 0) {
                      func_0x000107c3192c(ppppppplVar15,ppppppplStack_208,pppppplStack_200);
                      uVar23 = param_2[0x15];
                      uVar22 = param_2[0x13];
                      uVar25 = uVar22 - 1;
                      if (uVar23 == uVar25) goto LAB_10b3265d4;
LAB_10b3265f8:
                      param_2[0x15] = uVar23 + 1;
                      if (uVar23 == 0xffffffffffffffff) goto LAB_10b326604;
                    }
                    else {
                      ppppppplVar15[2] = pppppplStack_1f8;
                      ppppppplVar15[1] = pppppplStack_200;
                      *ppppppplVar15 = (long ******)ppppppplStack_208;
                      uVar23 = param_2[0x15];
                      uVar22 = param_2[0x13];
                      uVar25 = uVar22 - 1;
                      if (uVar23 != uVar25) goto LAB_10b3265f8;
LAB_10b3265d4:
                      param_2[0x15] = 0;
LAB_10b326604:
                      uVar23 = uVar25;
                    }
                    if (uVar22 < uVar23) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a98);
                      (*pcVar10)();
                    }
                  }
                  bVar12 = true;
                }
              }
              else {
                uStack_98 = 0xaaaaaaaaaaaaaaaa;
                uStack_a0 = 0xaaaaaaaaaaaaaaaa;
                uStack_88 = 0xaaaaaaaaaaaaaaaa;
                uStack_90 = 0xaaaaaaaaaaaaaaaa;
                uStack_b8 = 0xaaaaaaaaaaaaaaaa;
                uStack_c0 = 0xaaaaaaaaaaaaaaaa;
                uStack_a8 = 0xaaaaaaaaaaaaaaaa;
                uStack_b0 = 0xaaaaaaaaaaaaaaaa;
                uStack_c8 = 0xaaaaaaaaaaaaaaaa;
                ppppppplStack_d0 = (long *******)0xaaaaaaaaaaaaaaaa;
                func_0x000107c2cb24(&ppppppplStack_148,&UNK_10f7454c7,&UNK_10f74542c,0x259);
                func_0x000107c2ce28(&ppppppplStack_d0,&ppppppplStack_148,0,0);
                if ((bRam000000011336f9a8 & 0x19) != 0) {
                  ppppppplStack_128 = (long *******)&ppppppplStack_148;
                  func_0x00010b32059c(&UNK_10f74523a,&ppppppplStack_128);
                }
                _lstat(ppppppplVar16,&uStack_1f0);
                ppppppplVar15 = (long *******)&ppppppplStack_d0;
                func_0x000107c2ce2c();
                if (-1 < (int)ppppppplVar16) goto LAB_10b326410;
LAB_10b3264ec:
                bVar12 = false;
                lStack_178 = 0;
                lStack_180 = 0;
                lStack_168 = 0;
                lStack_170 = 0;
                lStack_198 = 0;
                lStack_1a0 = 0;
                lStack_188 = 0;
                lStack_190 = 0;
                lStack_1b8 = 0;
                lStack_1c0 = 0;
                lStack_1a8 = 0;
                lStack_1b0 = 0;
                lStack_1d8 = 0;
                lStack_1e0 = 0;
                lStack_1c8 = 0;
                lStack_1d0 = 0;
                lStack_1e8 = 0;
                uStack_1f0 = (long ******)0x0;
              }
              if (bVar11) {
                uVar19 = 1;
                if (bVar12) {
                  uVar19 = 2;
                }
                if ((*(uint *)((long)param_2 + 100) & uVar19) != 0) {
                  plVar14 = (long *)param_2[1];
                  if (plVar14 < (long *)param_2[2]) {
                    plVar14[1] = lStack_1e8;
                    *plVar14 = (long)uStack_1f0;
                    plVar14[7] = lStack_1b8;
                    plVar14[6] = lStack_1c0;
                    plVar14[9] = lStack_1a8;
                    plVar14[8] = lStack_1b0;
                    plVar14[3] = lStack_1d8;
                    plVar14[2] = lStack_1e0;
                    plVar14[5] = lStack_1c8;
                    plVar14[4] = lStack_1d0;
                    plVar14[0xf] = lStack_178;
                    plVar14[0xe] = lStack_180;
                    plVar14[0x11] = lStack_168;
                    plVar14[0x10] = lStack_170;
                    plVar14[0xb] = lStack_198;
                    plVar14[10] = lStack_1a0;
                    plVar14[0xd] = lStack_188;
                    plVar14[0xc] = lStack_190;
                    if ((long)uStack_150 < 0) {
                      ppppppplVar15 = (long *******)(plVar14 + 0x12);
                      func_0x000107c3192c(ppppppplVar15,ppppppplStack_160,uStack_158);
                    }
                    else {
                      plVar14[0x14] = uStack_150;
                      plVar14[0x13] = uStack_158;
                      plVar14[0x12] = (long)ppppppplStack_160;
                    }
                    plVar14 = plVar14 + 0x15;
                  }
                  else {
                    lVar29 = *param_2;
                    uVar23 = ((long)plVar14 - lVar29 >> 3) * -0x30c30c30c30c30c3 + 1;
                    if (0x186186186186186 < uVar23) goto LAB_10b326a4c;
                    lVar24 = param_2[2] - lVar29 >> 3;
                    uVar22 = lVar24 * -0x6186186186186186;
                    if (uVar22 < uVar23 || uVar22 - uVar23 == 0) {
                      uVar22 = uVar23;
                    }
                    if (0xc30c30c30c30c2 < (ulong)(lVar24 * -0x30c30c30c30c30c3)) {
                      uVar22 = 0x186186186186186;
                    }
                    if (uVar22 == 0) {
                      ppppppplVar16 = (long *******)0x0;
                    }
                    else {
                      if (0x186186186186186 < uVar22) goto LAB_10b326a50;
                      ppppppplVar16 = (long *******)(uVar22 * 0xa8);
                      __Znwm();
                    }
                    plVar2 = (long *)((long)ppppppplVar16 + ((long)plVar14 - lVar29));
                    plVar2[1] = lStack_1e8;
                    *plVar2 = (long)uStack_1f0;
                    plVar2[7] = lStack_1b8;
                    plVar2[6] = lStack_1c0;
                    plVar2[9] = lStack_1a8;
                    plVar2[8] = lStack_1b0;
                    plVar2[3] = lStack_1d8;
                    plVar2[2] = lStack_1e0;
                    plVar2[5] = lStack_1c8;
                    plVar2[4] = lStack_1d0;
                    plVar2[0xf] = lStack_178;
                    plVar2[0xe] = lStack_180;
                    plVar2[0x11] = lStack_168;
                    plVar2[0x10] = lStack_170;
                    plVar2[0xb] = lStack_198;
                    plVar2[10] = lStack_1a0;
                    plVar2[0xd] = lStack_188;
                    plVar2[0xc] = lStack_190;
                    if ((long)uStack_150 < 0) {
                      ppppppplVar15 = (long *******)(plVar2 + 0x12);
                      func_0x000107c3192c(ppppppplVar15,ppppppplStack_160,uStack_158);
                      ppppppplVar31 = (long *******)*param_2;
                      ppppppplVar4 = (long *******)param_2[1];
                      lVar24 = (long)ppppppplVar4 - (long)ppppppplVar31;
                      lVar7 = (long)ppppppplVar4 - (long)ppppppplVar31;
                    }
                    else {
                      plVar2[0x14] = uStack_150;
                      plVar2[0x13] = uStack_158;
                      plVar2[0x12] = (long)ppppppplStack_160;
                      ppppppplVar31 = (long *******)*param_2;
                      ppppppplVar4 = (long *******)param_2[1];
                      lVar24 = (long)ppppppplVar4 - (long)ppppppplVar31;
                      lVar7 = (long)ppppppplVar4 - (long)ppppppplVar31;
                      ppppppplVar15 = ppppppplVar16;
                    }
                    if (lVar7 != 0) {
                      ppppppplVar28 =
                           (long *******)
                           ((long)ppppppplVar16 +
                           (long)plVar14 + ((lVar7 >> 3) * -8 - lVar29) + 0x90);
                      ppppppplVar30 = ppppppplVar31 + 0x12;
                      do {
                        while( true ) {
                          pppppplVar33 = ppppppplVar30[-0x12];
                          ppppppplVar28[-0x11] = ppppppplVar30[-0x11];
                          ppppppplVar28[-0x12] = pppppplVar33;
                          pppppplVar34 = ppppppplVar30[-0xf];
                          pppppplVar33 = ppppppplVar30[-0x10];
                          pppppplVar36 = ppppppplVar30[-0xd];
                          pppppplVar35 = ppppppplVar30[-0xe];
                          pppppplVar37 = ppppppplVar30[-0xc];
                          pppppplVar39 = ppppppplVar30[-9];
                          pppppplVar38 = ppppppplVar30[-10];
                          ppppppplVar28[-0xb] = ppppppplVar30[-0xb];
                          ppppppplVar28[-0xc] = pppppplVar37;
                          ppppppplVar28[-9] = pppppplVar39;
                          ppppppplVar28[-10] = pppppplVar38;
                          ppppppplVar28[-0xf] = pppppplVar34;
                          ppppppplVar28[-0x10] = pppppplVar33;
                          ppppppplVar28[-0xd] = pppppplVar36;
                          ppppppplVar28[-0xe] = pppppplVar35;
                          pppppplVar34 = ppppppplVar30[-7];
                          pppppplVar33 = ppppppplVar30[-8];
                          pppppplVar36 = ppppppplVar30[-5];
                          pppppplVar35 = ppppppplVar30[-6];
                          pppppplVar37 = ppppppplVar30[-4];
                          pppppplVar39 = ppppppplVar30[-1];
                          pppppplVar38 = ppppppplVar30[-2];
                          ppppppplVar28[-3] = ppppppplVar30[-3];
                          ppppppplVar28[-4] = pppppplVar37;
                          ppppppplVar28[-1] = pppppplVar39;
                          ppppppplVar28[-2] = pppppplVar38;
                          ppppppplVar28[-7] = pppppplVar34;
                          ppppppplVar28[-8] = pppppplVar33;
                          ppppppplVar28[-5] = pppppplVar36;
                          ppppppplVar28[-6] = pppppplVar35;
                          if (*(char *)((long)ppppppplVar30 + 0x17) < '\0') break;
                          pppppplVar34 = ppppppplVar30[1];
                          pppppplVar33 = *ppppppplVar30;
                          ppppppplVar28[2] = ppppppplVar30[2];
                          ppppppplVar28[1] = pppppplVar34;
                          *ppppppplVar28 = pppppplVar33;
                          ppppppplVar1 = ppppppplVar30 + 3;
                          ppppppplVar28 = ppppppplVar28 + 0x15;
                          ppppppplVar30 = ppppppplVar30 + 0x15;
                          if (ppppppplVar1 == ppppppplVar4) goto LAB_10b32681c;
                        }
                        ppppppplVar15 = ppppppplVar28;
                        func_0x000107c3192c(ppppppplVar28,*ppppppplVar30,ppppppplVar30[1]);
                        ppppppplVar28 = ppppppplVar28 + 0x15;
                        ppppppplVar1 = ppppppplVar30 + 3;
                        ppppppplVar30 = ppppppplVar30 + 0x15;
                      } while (ppppppplVar1 != ppppppplVar4);
LAB_10b32681c:
                      do {
                        if (*(char *)((long)ppppppplVar31 + 0xa7) < '\0') {
                          ppppppplVar15 = (long *******)ppppppplVar31[0x12];
                          __ZdlPv();
                        }
                        ppppppplVar31 = ppppppplVar31 + 0x15;
                      } while (ppppppplVar31 != ppppppplVar4);
                      ppppppplVar31 = (long *******)*param_2;
                    }
                    plVar14 = plVar2 + 0x15;
                    *param_2 = (long)plVar2 - lVar24;
                    param_2[1] = (long)plVar14;
                    param_2[2] = (long)(ppppppplVar16 + uVar22 * 0x15);
                    if (ppppppplVar31 != (long *******)0x0) {
                      __ZdlPv();
                      ppppppplVar15 = ppppppplVar31;
                    }
                  }
                  param_2[1] = (long)plVar14;
                }
              }
              if ((long)pppppplStack_1f8 < 0) {
                ppppppplVar15 = ppppppplStack_208;
                __ZdlPv();
              }
            }
            else {
              uStack_c8 = uStack_140;
              ppppppplStack_d0 = ppppppplStack_148;
              uStack_c0 = CONCAT17(cStack_131,uStack_138);
              cVar18 = cStack_131;
              if (-1 < cStack_131) goto LAB_10b326258;
LAB_10b326218:
              ppppppplVar15 = ppppppplStack_d0;
              if (uStack_c8 == 1) {
                cVar18 = *(char *)ppppppplStack_d0;
                __ZdlPv();
joined_r0x00010b326270:
                if (cVar18 != '.') goto LAB_10b32630c;
              }
              else {
                if ((uStack_c8 != 2) || (*(short *)ppppppplStack_d0 != 0x2e2e)) {
                  __ZdlPv();
                  cVar18 = *(char *)((long)param_2 + 0x7f);
                  goto joined_r0x00010b3262c8;
                }
                uVar19 = *(uint *)((long)param_2 + 100);
                __ZdlPv();
joined_r0x00010b326294:
                if ((uVar19 >> 2 & 1) != 0) goto LAB_10b32630c;
              }
            }
LAB_10b326094:
            if (-1 < (long)uStack_150) goto code_r0x00010b32609c;
            ppppppplVar15 = ppppppplStack_160;
            __ZdlPv();
            ___error();
            *(undefined4 *)ppppppplVar15 = 0;
            plVar14 = plVar21;
            _readdir();
            if (plVar14 == (long *)0x0) break;
          } while( true );
        }
        puVar17 = (uint *)0x0;
        ___error();
        uVar19 = *puVar17;
        _closedir(plVar21);
        if ((uVar19 != 0) && (*(int *)((long)param_2 + 0x84) != 0)) {
          if (uVar19 < 0x1f) {
            uVar6 = uVar19 - 1;
            goto joined_r0x00010b3269c0;
          }
          goto LAB_10b326a10;
        }
        if ((int)param_2[0x10] == 0) {
          if (*(char *)((long)param_2 + 0x7f) < '\0') {
            *(undefined1 *)param_2[0xd] = 0;
            param_2[0xe] = 0;
          }
          else {
            *(undefined1 *)(param_2 + 0xd) = 0;
            *(undefined1 *)((long)param_2 + 0x7f) = 0;
          }
        }
        goto LAB_10b325df4;
      }
      puVar17 = (uint *)0x0;
      ___error();
      if ((*puVar17 != 0) && (*(int *)((long)param_2 + 0x84) != 0)) {
        ___error();
        uVar19 = *puVar17;
        uVar6 = uVar19 - 1;
        if (uVar6 < 0x1e) {
joined_r0x00010b3269c0:
          if ((0x2ad99813U >> (ulong)(uVar6 & 0x1f) & 1) == 0) goto LAB_10b326a10;
          uVar20 = *(undefined4 *)(&UNK_10e5748a0 + (ulong)uVar6 * 4);
        }
        else {
LAB_10b326a10:
          func_0x000107c2cbcc(&UNK_10f745488,uVar19);
          uVar20 = 0xffffffff;
        }
        *(undefined4 *)(param_2 + 0x11) = uVar20;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        goto LAB_10b326968;
      }
LAB_10b325df4:
      uVar23 = param_2[8];
      lVar29 = *param_2;
    } while ((ulong)((param_2[1] - lVar29 >> 3) * -0x30c30c30c30c30c3) <= uVar23);
  }
  lVar29 = lVar29 + uVar23 * 0xa8;
  cVar18 = *(char *)(lVar29 + 0xa7);
  plVar3 = (long *)*(long *)(lVar29 + 0x90);
  if (-1 < (long)cVar18) {
    plVar3 = (long *)(lVar29 + 0x90);
  }
  lVar29 = *(long *)(lVar29 + 0x98);
  if (-1 < cVar18) {
    lVar29 = (long)cVar18;
  }
  func_0x000107c2cabc(param_1,param_2 + 9,plVar3,lVar29);
LAB_10b326968:
  func_0x000107c2ce2c(&uStack_120);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
LAB_10b326a54:
  ___stack_chk_fail();
LAB_10b326a58:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(0,0x10b326a5c);
  (*pcVar10)();
code_r0x00010b32609c:
  ___error();
  *(undefined4 *)ppppppplVar15 = 0;
  plVar14 = plVar21;
  _readdir();
  goto joined_r0x00010b326038;
}



/* Entry: 10b326aa0; end: 10b326c17;  */

void FUN_10b326aa0(long *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 != param_2) {
    uVar2 = param_1[1];
    if (param_2 < param_3) {
      if (uVar2 < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326bc8);
        (*pcVar1)();
      }
      if (uVar2 < param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326bd4);
        (*pcVar1)();
      }
      if ((long)param_3 < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326be0);
        (*pcVar1)();
      }
      puVar4 = (undefined8 *)(*param_1 + param_2 * 0x18);
      lVar3 = param_2 * -0x18 + param_3 * 0x18;
      do {
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          __ZdlPv(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    else {
      if (uVar2 < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326bec);
        (*pcVar1)();
      }
      if ((long)uVar2 < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326bf8);
        (*pcVar1)();
      }
      puVar4 = (undefined8 *)*param_1;
      if (uVar2 != param_2) {
        puVar4 = puVar4 + param_2 * 3;
        lVar3 = param_2 * -0x18 + uVar2 * 0x18;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
        puVar4 = (undefined8 *)*param_1;
        param_2 = param_1[1];
      }
      if (param_2 < param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326c04);
        (*pcVar1)();
      }
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x10b326c10);
        (*pcVar1)();
      }
      if (param_3 != 0) {
        lVar3 = param_3 * 0x18;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
      }
    }
  }
  return;
}



/* Entry: 10b326c18; end: 10b326e2f;  */

void FUN_10b326c18(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong param_5,
                  undefined8 *param_6,long *param_7)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_1[1];
  *param_6 = 0;
  if (param_2 > param_3 || param_3 - param_2 == 0) {
    if (param_2 <= param_3) {
      *param_7 = 0;
      return;
    }
    uVar8 = param_1[1];
    if (uVar8 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326de0);
      (*pcVar2)();
    }
    if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326dec);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)*param_1;
    puVar5 = puVar4 + param_2 * 3;
    puVar3 = puVar4 + uVar7 * 3;
    if (param_4 < puVar3) {
      if ((puVar3 < puVar5) || (CARRY8((ulong)param_4,(long)puVar3 - (long)puVar5)))
      goto LAB_10b326dd8;
      if (puVar5 < (undefined8 *)((long)param_4 + ((long)puVar3 - (long)puVar5))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326e1c);
        (*pcVar2)();
      }
    }
    uVar1 = uVar7 - param_2;
    if (uVar1 != 0) {
      lVar6 = uVar7 * 0x18 + param_2 * -0x18;
      puVar4 = param_4;
      do {
        uVar10 = puVar5[1];
        uVar9 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar10;
        *puVar4 = uVar9;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        lVar6 = lVar6 + -0x18;
        puVar5 = puVar5 + 3;
        puVar4 = puVar4 + 3;
      } while (lVar6 != 0);
      puVar4 = (undefined8 *)*param_1;
      uVar8 = param_1[1];
    }
    if (uVar8 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326df8);
      (*pcVar2)();
    }
    if (param_5 < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326e04);
      (*pcVar2)();
    }
    puVar5 = puVar4 + param_3 * 3;
    param_4 = param_4 + uVar1 * 3;
    if (param_4 < puVar5) {
      if ((puVar5 < puVar4) || (CARRY8((ulong)param_4,(long)puVar5 - (long)puVar4)))
      goto LAB_10b326dd8;
      if (puVar4 < (undefined8 *)((long)param_4 + ((long)puVar5 - (long)puVar4))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326e28);
        (*pcVar2)();
      }
    }
    if (param_3 != 0) {
      lVar6 = param_3 * 0x18;
      do {
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        param_4[2] = puVar4[2];
        param_4[1] = uVar10;
        *param_4 = uVar9;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        lVar6 = lVar6 + -0x18;
        puVar4 = puVar4 + 3;
        param_4 = param_4 + 3;
      } while (lVar6 != 0);
    }
    *param_7 = uVar1 + param_3;
    return;
  }
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326dc8);
    (*pcVar2)();
  }
  if ((ulong)param_1[1] < param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326dd4);
    (*pcVar2)();
  }
  puVar4 = (undefined8 *)(*param_1 + param_2 * 0x18);
  puVar5 = (undefined8 *)(*param_1 + param_3 * 0x18);
  if (param_4 < puVar5) {
    if ((puVar5 < puVar4) || (CARRY8((ulong)param_4,(long)puVar5 - (long)puVar4))) {
LAB_10b326dd8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b326ddc);
      (*pcVar2)();
    }
    if (puVar4 < (undefined8 *)((long)param_4 + ((long)puVar5 - (long)puVar4))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b326e10);
      (*pcVar2)();
    }
  }
  lVar6 = param_3 * 0x18 + param_2 * -0x18;
  do {
    uVar10 = puVar4[1];
    uVar9 = *puVar4;
    param_4[2] = puVar4[2];
    param_4[1] = uVar10;
    *param_4 = uVar9;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    lVar6 = lVar6 + -0x18;
    param_4 = param_4 + 3;
    puVar4 = puVar4 + 3;
  } while (lVar6 != 0);
  *param_7 = param_3 - param_2;
  return;
}



/* Entry: 10b326e30; end: 10b3278c7;  */

/* WARNING: Possible PIC construction at 0x00010b3271b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b3271bc) */
/* WARNING: Removing unreachable block (ram,0x00010b327b80) */
/* WARNING: Removing unreachable block (ram,0x00010b327bdc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ba4) */
/* WARNING: Removing unreachable block (ram,0x00010b327be8) */
/* WARNING: Removing unreachable block (ram,0x00010b327c80) */
/* WARNING: Removing unreachable block (ram,0x00010b327eec) */
/* WARNING: Removing unreachable block (ram,0x00010b327c88) */
/* WARNING: Removing unreachable block (ram,0x00010b327ccc) */
/* WARNING: Removing unreachable block (ram,0x00010b327e20) */
/* WARNING: Removing unreachable block (ram,0x00010b327d08) */
/* WARNING: Removing unreachable block (ram,0x00010b327d24) */
/* WARNING: Removing unreachable block (ram,0x00010b327e38) */
/* WARNING: Removing unreachable block (ram,0x00010b327e4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e58) */
/* WARNING: Removing unreachable block (ram,0x00010b327e78) */
/* WARNING: Removing unreachable block (ram,0x00010b327e64) */
/* WARNING: Removing unreachable block (ram,0x00010b327e7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d30) */
/* WARNING: Removing unreachable block (ram,0x00010b327d38) */
/* WARNING: Removing unreachable block (ram,0x00010b327d3c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d58) */
/* WARNING: Removing unreachable block (ram,0x00010b327d60) */
/* WARNING: Removing unreachable block (ram,0x00010b327d6c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d80) */
/* WARNING: Removing unreachable block (ram,0x00010b327dc8) */
/* WARNING: Removing unreachable block (ram,0x00010b3281f8) */
/* WARNING: Removing unreachable block (ram,0x00010b327dd0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ea0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ddc) */
/* WARNING: Removing unreachable block (ram,0x00010b327df8) */
/* WARNING: Removing unreachable block (ram,0x00010b327eb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ed0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ec0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ecc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ee0) */
/* WARNING: Removing unreachable block (ram,0x00010b327e08) */
/* WARNING: Removing unreachable block (ram,0x00010b327e1c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e94) */
/* WARNING: Removing unreachable block (ram,0x00010b327ca4) */
/* WARNING: Removing unreachable block (ram,0x00010b327cc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef4) */
/* WARNING: Removing unreachable block (ram,0x00010b327f08) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef8) */
/* WARNING: Removing unreachable block (ram,0x00010b327f04) */
/* WARNING: Removing unreachable block (ram,0x00010b327f30) */
/* WARNING: Removing unreachable block (ram,0x00010b327f60) */
/* WARNING: Removing unreachable block (ram,0x00010b327f6c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281ec) */
/* WARNING: Removing unreachable block (ram,0x00010b327f7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f94) */
/* WARNING: Removing unreachable block (ram,0x00010b3281bc) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fe0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ff0) */
/* WARNING: Removing unreachable block (ram,0x00010b328004) */
/* WARNING: Removing unreachable block (ram,0x00010b328008) */
/* WARNING: Removing unreachable block (ram,0x00010b32801c) */
/* WARNING: Removing unreachable block (ram,0x00010b328028) */
/* WARNING: Removing unreachable block (ram,0x00010b328040) */
/* WARNING: Removing unreachable block (ram,0x00010b328048) */
/* WARNING: Removing unreachable block (ram,0x00010b32802c) */
/* WARNING: Removing unreachable block (ram,0x00010b328034) */
/* WARNING: Removing unreachable block (ram,0x00010b32804c) */
/* WARNING: Removing unreachable block (ram,0x00010b328050) */
/* WARNING: Removing unreachable block (ram,0x00010b32805c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281d4) */
/* WARNING: Removing unreachable block (ram,0x00010b328070) */
/* WARNING: Removing unreachable block (ram,0x00010b3281e0) */
/* WARNING: Removing unreachable block (ram,0x00010b328078) */
/* WARNING: Removing unreachable block (ram,0x00010b328080) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280b0) */
/* WARNING: Removing unreachable block (ram,0x00010b328090) */
/* WARNING: Removing unreachable block (ram,0x00010b328094) */
/* WARNING: Removing unreachable block (ram,0x00010b3280bc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280c4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280dc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280e8) */
/* WARNING: Removing unreachable block (ram,0x00010b3280f4) */
/* WARNING: Removing unreachable block (ram,0x00010b3281b8) */
/* WARNING: Removing unreachable block (ram,0x00010b328104) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a0) */
/* WARNING: Removing unreachable block (ram,0x00010b328144) */
/* WARNING: Removing unreachable block (ram,0x00010b328150) */
/* WARNING: Removing unreachable block (ram,0x00010b328178) */
/* WARNING: Removing unreachable block (ram,0x00010b328184) */
/* WARNING: Removing unreachable block (ram,0x00010b32815c) */
/* WARNING: Removing unreachable block (ram,0x00010b328174) */
/* WARNING: Removing unreachable block (ram,0x00010b327f48) */
/* WARNING: Removing unreachable block (ram,0x00010b327f50) */
/* WARNING: Removing unreachable block (ram,0x00010b327f1c) */

long * FUN_10b326e30(long param_1,int param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *****pppppuVar24;
  ulong unaff_x24;
  ulong uVar25;
  undefined8 uVar26;
  long *aplStack_dc0 [26];
  undefined1 *apuStack_cf0 [4];
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  undefined1 *puStack_ac8;
  undefined1 auStack_ac0 [1024];
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_668;
  undefined8 ****ppppuStack_660;
  undefined1 *puStack_658;
  undefined8 *puStack_650;
  long *plStack_648;
  undefined8 ****ppppuStack_640;
  code *pcStack_638;
  long *plStack_628;
  int *piStack_620;
  long *plStack_618;
  undefined8 ****ppppuStack_610;
  undefined8 uStack_608;
  int aiStack_5f8 [8];
  int *piStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_578;
  ulong uStack_570;
  undefined8 ****ppppuStack_568;
  undefined8 ****ppppuStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  ulong uStack_530;
  long lStack_528;
  ulong uStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  long lStack_4f8;
  undefined8 ***pppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4b8 [32];
  undefined1 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_438;
  undefined8 ****ppppuStack_430;
  int *piStack_428;
  int *piStack_420;
  long *plStack_418;
  undefined8 ****ppppuStack_410;
  undefined8 uStack_408;
  undefined1 auStack_3f8 [32];
  undefined1 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_378;
  undefined8 ****ppppuStack_370;
  undefined8 *puStack_368;
  long lStack_360;
  long *plStack_358;
  undefined1 ****ppppuStack_350;
  undefined8 uStack_348;
  undefined8 ***apppuStack_338 [4];
  undefined8 ****ppppuStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  ulong uStack_2b0;
  long *plStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined8 *puStack_298;
  long lStack_290;
  long *plStack_288;
  undefined1 ***pppuStack_280;
  undefined8 uStack_278;
  long alStack_268 [4];
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined1 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined1 **appuStack_188 [4];
  undefined8 **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(auStack_b8,&UNK_10f74544b,&UNK_10f74542c,0xd0);
  func_0x000107c2ce28(&uStack_90,auStack_b8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_98 = auStack_b8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_98);
  }
  plVar8 = (long *)(ulong)*(uint *)(param_1 + 8);
  _lseek();
  puVar9 = &uStack_90;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar8;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x10b326f20;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  uStack_120 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c2cb24(appuStack_188,&UNK_10f745455,&UNK_10f74542c,0xf7);
  pppuVar14 = (undefined8 ***)appuStack_188;
  lVar18 = 0;
  plVar8 = (long *)0x0;
  func_0x000107c2ce28(&uStack_160);
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    if (param_2 < 0) goto LAB_10b32702c;
LAB_10b326fb0:
    unaff_x24 = 0;
    do {
      while( true ) {
        piVar10 = (int *)(ulong)*(uint *)(puVar9 + 1);
        pppuVar14 = (undefined8 ***)(param_3 + unaff_x24);
        lVar18 = (long)(param_2 - (int)unaff_x24);
        _read();
        if (piVar10 != (int *)0xffffffffffffffff) break;
        ___error();
        if (*piVar10 != 4) {
          piVar10 = (int *)0xffffffff;
          goto LAB_10b327008;
        }
      }
    } while ((0 < (int)piVar10) &&
            (uVar6 = (int)unaff_x24 + (int)piVar10, unaff_x24 = (ulong)uVar6, (int)uVar6 < param_2))
    ;
LAB_10b327008:
    uVar6 = (uint)piVar10;
    if ((uint)unaff_x24 != 0) {
      uVar6 = (uint)unaff_x24;
    }
    plVar22 = (long *)(ulong)uVar6;
  }
  else {
    pppuVar14 = &ppuStack_168;
    ppuStack_168 = appuStack_188;
    func_0x00010b32059c(&UNK_10f74523a);
    if (-1 < param_2) goto LAB_10b326fb0;
LAB_10b32702c:
    plVar22 = (long *)0xffffffff;
  }
  puVar9 = &uStack_160;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return plVar22;
  }
  ___stack_chk_fail();
  uStack_198 = 0x10b327070;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_208 = 0xaaaaaaaaaaaaaaaa;
  uStack_210 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_228 = 0xaaaaaaaaaaaaaaaa;
  uStack_230 = 0xaaaaaaaaaaaaaaaa;
  uStack_218 = 0xaaaaaaaaaaaaaaaa;
  uStack_220 = 0xaaaaaaaaaaaaaaaa;
  uStack_238 = 0xaaaaaaaaaaaaaaaa;
  uStack_240 = 0xaaaaaaaaaaaaaaaa;
  plVar22 = alStack_268;
  ppuStack_1a0 = &puStack_d0;
  func_0x000107c2cb24(alStack_268,&UNK_10f745466,&UNK_10f74542c,0x11d);
  plVar19 = (long *)0x0;
  func_0x000107c2ce28(&uStack_240,alStack_268,0,0);
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    uVar6 = *(uint *)(puVar9 + 1);
    lVar15 = 3;
    _fcntl();
    if ((uVar6 >> 3 & 1) != 0) goto LAB_10b3271ac;
LAB_10b327114:
    iVar7 = (int)plVar8;
    if (iVar7 < 0) {
      plVar23 = (long *)0xffffffff;
    }
    else {
      unaff_x24 = 0;
      do {
        plVar22 = (long *)(long)(iVar7 - (int)unaff_x24);
        while( true ) {
          piVar10 = (int *)(ulong)*(uint *)(puVar9 + 1);
          lVar15 = lVar18 + unaff_x24;
          plVar19 = plVar22;
          _pwrite();
          if (piVar10 != (int *)0xffffffffffffffff) break;
          ___error();
          if (*piVar10 != 4) {
            piVar10 = (int *)0xffffffff;
            goto LAB_10b327174;
          }
        }
      } while ((0 < (int)piVar10) &&
              (uVar6 = (int)unaff_x24 + (int)piVar10, unaff_x24 = (ulong)uVar6, (int)uVar6 < iVar7))
      ;
LAB_10b327174:
      uVar6 = (uint)piVar10;
      if ((uint)unaff_x24 != 0) {
        uVar6 = (uint)unaff_x24;
      }
      plVar23 = (long *)(ulong)uVar6;
    }
    puVar11 = &uStack_240;
    func_0x000107c2ce2c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return plVar23;
    }
    uVar26 = 0x10b327204;
    ___stack_chk_fail();
    plVar8 = plVar19;
    plStack_288 = plVar23;
  }
  else {
    plStack_248 = plVar22;
    func_0x00010b32059c(&UNK_10f74523a,&plStack_248);
    uVar6 = *(uint *)(puVar9 + 1);
    lVar15 = 3;
    _fcntl();
    if ((uVar6 >> 3 & 1) == 0) goto LAB_10b327114;
LAB_10b3271ac:
    uVar26 = 0x10b3271bc;
    puVar11 = puVar9;
    lVar15 = lVar18;
    plStack_288 = plVar8;
  }
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_2e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_2c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_2d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_2f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_300 = 0xaaaaaaaaaaaaaaaa;
  uStack_2e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_2f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_308 = 0xaaaaaaaaaaaaaaaa;
  uStack_310 = 0xaaaaaaaaaaaaaaaa;
  pppppuVar24 = (undefined8 *****)apppuStack_338;
  uStack_2b0 = unaff_x24;
  plStack_2a8 = plVar22;
  pppuStack_2a0 = (undefined1 ***)pppuVar14;
  puStack_298 = puVar9;
  lStack_290 = lVar18;
  pppuStack_280 = &ppuStack_1a0;
  uStack_278 = uVar26;
  func_0x000107c2cb24(apppuStack_338,&UNK_10f74546c,&UNK_10f74542c,0x140);
  pppppuVar16 = (undefined8 *****)apppuStack_338;
  func_0x000107c2ce28(&uStack_310,pppppuVar16,0,0);
  iVar7 = (int)plVar8;
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    if (iVar7 < 0) goto LAB_10b327310;
LAB_10b327294:
    uVar25 = 0;
    do {
      pppppuVar24 = (undefined8 *****)(lVar15 + uVar25);
      while( true ) {
        piVar10 = (int *)(ulong)*(uint *)(puVar11 + 1);
        pppppuVar16 = pppppuVar24;
        _write(piVar10,pppppuVar24,(long)(iVar7 - (int)uVar25));
        if (piVar10 != (int *)0xffffffffffffffff) break;
        ___error();
        if (*piVar10 != 4) {
          piVar10 = (int *)0xffffffff;
          goto LAB_10b3272ec;
        }
      }
    } while ((0 < (int)piVar10) &&
            (uVar6 = (int)uVar25 + (int)piVar10, uVar25 = (ulong)uVar6, (int)uVar6 < iVar7));
LAB_10b3272ec:
    uVar6 = (uint)piVar10;
    if ((uint)uVar25 != 0) {
      uVar6 = (uint)uVar25;
    }
    plVar8 = (long *)(ulong)uVar6;
  }
  else {
    pppppuVar16 = &ppppuStack_318;
    ppppuStack_318 = pppppuVar24;
    func_0x00010b32059c(&UNK_10f74523a);
    if (-1 < iVar7) goto LAB_10b327294;
LAB_10b327310:
    plVar8 = (long *)0xffffffff;
  }
  puVar9 = &uStack_310;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return plVar8;
  }
  ___stack_chk_fail();
  uStack_348 = 0x10b327354;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_398 = 0xaaaaaaaaaaaaaaaa;
  uStack_3a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_388 = 0xaaaaaaaaaaaaaaaa;
  uStack_390 = 0xaaaaaaaaaaaaaaaa;
  uStack_3b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_3c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_3a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_3b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_3c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_3d0 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_370 = pppppuVar24;
  puStack_368 = puVar11;
  lStack_360 = lVar15;
  plStack_358 = plVar8;
  ppppuStack_350 = &pppuStack_280;
  func_0x000107c2cb24(auStack_3f8,&UNK_10f74547e,&UNK_10f74542c,0x16c);
  func_0x000107c2ce28(&uStack_3d0,auStack_3f8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_3d8 = auStack_3f8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_3d8);
  }
  uVar6 = *(uint *)(puVar9 + 1);
  do {
    piVar10 = (int *)(ulong)uVar6;
    pppppuVar17 = pppppuVar16;
    _ftruncate();
    if ((int)piVar10 != -1) break;
    piVar12 = piVar10;
    ___error();
  } while (*piVar12 == 4);
  plVar8 = (long *)(ulong)((int)piVar10 == 0);
  puVar9 = &uStack_3d0;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return plVar8;
  }
  ___stack_chk_fail();
  uStack_408 = 0x10b327460;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d0 = 0xaaaaaaaaaaaaaaaa;
  lStack_4f8 = -0x5555555555555556;
  uStack_500 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e8 = 0xaaaaaaaaaaaaaaaa;
  pppuStack_4f0 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
  lStack_518 = -0x5555555555555556;
  uStack_520 = 0xaaaaaaaaaaaaaaaa;
  uStack_508 = 0xaaaaaaaaaaaaaaaa;
  uStack_510 = 0xaaaaaaaaaaaaaaaa;
  uStack_538 = 0xaaaaaaaaaaaaaaaa;
  uStack_540 = 0xaaaaaaaaaaaaaaaa;
  lStack_528 = -0x5555555555555556;
  uStack_530 = 0xaaaaaaaaaaaaaaaa;
  uStack_548 = 0xaaaaaaaaaaaaaaaa;
  uStack_550 = 0xaaaaaaaaaaaaaaaa;
  uVar25 = (ulong)*(uint *)(puVar9 + 1);
  uStack_458 = 0xaaaaaaaaaaaaaaaa;
  uStack_460 = 0xaaaaaaaaaaaaaaaa;
  uStack_448 = 0xaaaaaaaaaaaaaaaa;
  uStack_450 = 0xaaaaaaaaaaaaaaaa;
  uStack_478 = 0xaaaaaaaaaaaaaaaa;
  uStack_480 = 0xaaaaaaaaaaaaaaaa;
  uStack_468 = 0xaaaaaaaaaaaaaaaa;
  uStack_470 = 0xaaaaaaaaaaaaaaaa;
  uStack_488 = 0xaaaaaaaaaaaaaaaa;
  uStack_490 = 0xaaaaaaaaaaaaaaaa;
  ppppuStack_430 = pppppuVar24;
  piStack_428 = piVar10;
  piStack_420 = (int *)(ulong)uVar6;
  plStack_418 = plVar8;
  ppppuStack_410 = &ppppuStack_350;
  func_0x000107c2cb24(auStack_4b8,&UNK_10f7454c1,&UNK_10f74542c,0x255);
  func_0x000107c2ce28(&uStack_490,auStack_4b8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_498 = auStack_4b8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_498);
  }
  _fstat(uVar25,&uStack_550);
  func_0x000107c2ce2c(&uStack_490);
  if ((int)uVar25 == 0) {
    *(bool *)(pppppuVar17 + 1) = (uStack_550._4_2_ & 0xf000) == 0x4000;
    *(bool *)((long)pppppuVar17 + 9) = (uStack_550._4_2_ & 0xf000) == 0xa000;
    *pppppuVar17 = (undefined8 ****)pppuStack_4f0;
    uVar20 = uStack_520;
    if ((uStack_520 != 0) && (uStack_520 != 0x7fffffffffffffff)) {
      uVar3 = (long)uStack_520 >> 0x3f ^ 0x7fffffffffffffff;
      if (SUB168(SEXT816((long)uStack_520) * SEXT816(1000000),8) ==
          (long)(uStack_520 * 1000000) >> 0x3f) {
        uVar3 = uStack_520 * 1000000;
      }
      uVar20 = uVar3;
      if (1 < uVar3 + 0x8000000000000001) {
        uVar20 = 0x7fffffffffffffff;
        if (!SCARRY8(uVar3,0x295e9648864000)) {
          uVar20 = uVar3 + 0x295e9648864000;
        }
      }
    }
    ppppuVar1 = (undefined8 ****)(uVar20 + lStack_518 / 1000);
    ppppuVar2 = (undefined8 ****)((long)ppppuVar1 >> 0x3f ^ 0x8000000000000000);
    if (!SCARRY8(uVar20,lStack_518 / 1000)) {
      ppppuVar2 = ppppuVar1;
    }
    pppppuVar17[2] = ppppuVar2;
    uVar20 = uStack_530;
    if ((uStack_530 != 0) && (uStack_530 != 0x7fffffffffffffff)) {
      uVar3 = (long)uStack_530 >> 0x3f ^ 0x7fffffffffffffff;
      if (SUB168(SEXT816((long)uStack_530) * SEXT816(1000000),8) ==
          (long)(uStack_530 * 1000000) >> 0x3f) {
        uVar3 = uStack_530 * 1000000;
      }
      uVar20 = uVar3;
      if (1 < uVar3 + 0x8000000000000001) {
        uVar20 = 0x7fffffffffffffff;
        if (!SCARRY8(uVar3,0x295e9648864000)) {
          uVar20 = uVar3 + 0x295e9648864000;
        }
      }
    }
    ppppuVar1 = (undefined8 ****)(uVar20 + lStack_528 / 1000);
    ppppuVar2 = (undefined8 ****)((long)ppppuVar1 >> 0x3f ^ 0x8000000000000000);
    if (!SCARRY8(uVar20,lStack_528 / 1000)) {
      ppppuVar2 = ppppuVar1;
    }
    uVar20 = (long)uStack_500 >> 0x3f ^ 0x7fffffffffffffff;
    if (SUB168(SEXT816((long)uStack_500) * SEXT816(1000000),8) ==
        (long)(uStack_500 * 1000000) >> 0x3f) {
      uVar20 = uStack_500 * 1000000;
    }
    uVar3 = 0x7fffffffffffffff;
    if (!SCARRY8(uVar20,0x295e9648864000)) {
      uVar3 = uVar20 + 0x295e9648864000;
    }
    if (1 < uVar20 + 0x8000000000000001) {
      uVar20 = uVar3;
    }
    uVar3 = uStack_500;
    if (uStack_500 != 0x7fffffffffffffff) {
      uVar3 = uVar20;
    }
    uVar20 = uStack_500;
    if (uStack_500 != 0) {
      uVar20 = uVar3;
    }
    ppppuVar1 = (undefined8 ****)(uVar20 + lStack_4f8 / 1000);
    ppppuVar4 = (undefined8 ****)((long)ppppuVar1 >> 0x3f ^ 0x8000000000000000);
    if (!SCARRY8(uVar20,lStack_4f8 / 1000)) {
      ppppuVar4 = ppppuVar1;
    }
    pppppuVar17[3] = ppppuVar2;
    pppppuVar17[4] = ppppuVar4;
  }
  plVar8 = (long *)(ulong)((int)uVar25 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return plVar8;
  }
  ___stack_chk_fail();
  uStack_558 = 0x10b3276ec;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_598 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_588 = 0xaaaaaaaaaaaaaaaa;
  uStack_590 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5d0 = 0xaaaaaaaaaaaaaaaa;
  piVar10 = aiStack_5f8;
  uStack_570 = uVar25;
  ppppuStack_568 = pppppuVar17;
  ppppuStack_560 = &ppppuStack_410;
  func_0x000107c2cb24(aiStack_5f8,&UNK_10f7454b6,&UNK_10f74542c,0x224);
  func_0x000107c2ce28(&uStack_5d0,aiStack_5f8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    piStack_5d8 = piVar10;
    func_0x00010b32059c(&UNK_10f74523a,&piStack_5d8);
  }
  do {
    piVar12 = (int *)(ulong)*(uint *)(plVar8 + 1);
    plVar22 = (long *)0x33;
    _fcntl();
    if ((int)piVar12 != -1) {
      if ((int)piVar12 == 0) {
        plVar8 = (long *)0x1;
        goto LAB_10b3277c8;
      }
      break;
    }
    ___error();
  } while (*piVar12 == 4);
  do {
    piVar10 = (int *)(ulong)*(uint *)(plVar8 + 1);
    _fsync();
    if ((int)piVar10 != -1) break;
    piVar12 = piVar10;
    ___error();
  } while (*piVar12 == 4);
  plVar8 = (long *)(ulong)((int)piVar10 == 0);
LAB_10b3277c8:
  puVar9 = &uStack_5d0;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return plVar8;
  }
  ___stack_chk_fail();
  uStack_608 = 0x10b327818;
  uVar6 = *(uint *)(puVar9 + 1);
  plVar19 = (long *)(ulong)uVar6;
  uVar21 = (uint)plVar22;
  if (uVar6 == 0xffffffff) {
LAB_10b327874:
    *(uint *)(puVar9 + 1) = uVar21;
    return plVar19;
  }
  piStack_620 = piVar10;
  plStack_618 = plVar8;
  ppppuStack_610 = &ppppuStack_560;
  if (uVar6 != uVar21) {
    _close();
    if (((int)plVar19 != 0) &&
       ((((int)plVar19 != -1 || (___error(), (int)*plVar19 != 4)) &&
        (___error(), (int)*plVar19 == 9)))) {
      func_0x00010b2ed86c(&plStack_628,&UNK_10f74421b,0x2b);
      plVar19 = (long *)0x0;
      if (plStack_628 != (long *)0x0) {
        (**(code **)(*plStack_628 + 8))();
        *(uint *)(puVar9 + 1) = uVar21;
        return plStack_628;
      }
    }
    goto LAB_10b327874;
  }
  plVar8 = plVar22;
  _abort();
  pcStack_638 = FUN_10b3278c8;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_688 = 0xaaaaaaaaaaaaaaaa;
  uStack_690 = 0xaaaaaaaaaaaaaaaa;
  uStack_678 = 0xaaaaaaaaaaaaaaaa;
  uStack_680 = 0xaaaaaaaaaaaaaaaa;
  uStack_6a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_6b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_698 = 0xaaaaaaaaaaaaaaaa;
  uStack_6a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_6b8 = 0xaaaaaaaaaaaaaaaa;
  lStack_6c0 = -0x5555555555555556;
  ppppuStack_660 = pppppuVar24;
  puStack_658 = auStack_4b8;
  puStack_650 = puVar9;
  plStack_648 = plVar22;
  ppppuStack_640 = &ppppuStack_610;
  func_0x000107c2cb24(auStack_ac0,&UNK_10f7454cd,&UNK_10f7454e2,0x14f);
  func_0x000107c2ce28(&lStack_6c0,auStack_ac0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_ac8 = auStack_ac0;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_ac8);
  }
  _memset(auStack_ac0,0xaa,0x400);
  plVar22 = (long *)*plVar8;
  if (-1 < *(char *)((long)plVar8 + 0x17)) {
    plVar22 = plVar8;
  }
  _realpath_DARWIN_EXTSN(plVar22,auStack_ac0);
  if (plVar22 == (long *)0x0) {
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[2] = 0;
  }
  else {
    puVar13 = auStack_ac0;
    _strlen(puVar13);
    func_0x000107c2caa4(plVar19,auStack_ac0,puVar13);
  }
  plVar8 = &lStack_6c0;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return plVar8;
  }
  ___stack_chk_fail();
  lStack_b40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b58 = 0xaaaaaaaaaaaaaaaa;
  uStack_b60 = 0xaaaaaaaaaaaaaaaa;
  uStack_b48 = 0xaaaaaaaaaaaaaaaa;
  uStack_b50 = 0xaaaaaaaaaaaaaaaa;
  uStack_b78 = 0xaaaaaaaaaaaaaaaa;
  uStack_b80 = 0xaaaaaaaaaaaaaaaa;
  uStack_b68 = 0xaaaaaaaaaaaaaaaa;
  uStack_b70 = 0xaaaaaaaaaaaaaaaa;
  uStack_b88 = 0xaaaaaaaaaaaaaaaa;
  uStack_b90 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&lStack_c40,&UNK_10f7455aa,&UNK_10f7454e2,0x117);
  func_0x000107c2ce28(&uStack_b90,&lStack_c40,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    aplStack_dc0[0] = &lStack_c40;
    func_0x00010b32059c(&UNK_10f74523a,aplStack_dc0);
  }
  plVar22 = (long *)*plVar8;
  if (-1 < *(char *)((long)plVar8 + 0x17)) {
    plVar22 = plVar8;
  }
  uStack_c58 = 0xaaaaaaaaaaaaaaaa;
  uStack_c60 = 0xaaaaaaaaaaaaaaaa;
  uStack_c48 = 0xaaaaaaaaaaaaaaaa;
  uStack_c50 = 0xaaaaaaaaaaaaaaaa;
  uStack_c78 = 0xaaaaaaaaaaaaaaaa;
  uStack_c80 = 0xaaaaaaaaaaaaaaaa;
  uStack_c68 = 0xaaaaaaaaaaaaaaaa;
  uStack_c70 = 0xaaaaaaaaaaaaaaaa;
  uStack_c98 = 0xaaaaaaaaaaaaaaaa;
  uStack_ca0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c88 = 0xaaaaaaaaaaaaaaaa;
  uStack_c90 = 0xaaaaaaaaaaaaaaaa;
  uStack_cb8 = 0xaaaaaaaaaaaaaaaa;
  uStack_cc0 = 0xaaaaaaaaaaaaaaaa;
  uStack_ca8 = 0xaaaaaaaaaaaaaaaa;
  uStack_cb0 = 0xaaaaaaaaaaaaaaaa;
  uStack_cc8 = 0xaaaaaaaaaaaaaaaa;
  uStack_cd0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c08 = 0xaaaaaaaaaaaaaaaa;
  uStack_c10 = 0xaaaaaaaaaaaaaaaa;
  uStack_bf8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c00 = 0xaaaaaaaaaaaaaaaa;
  uStack_c28 = 0xaaaaaaaaaaaaaaaa;
  uStack_c30 = 0xaaaaaaaaaaaaaaaa;
  uStack_c18 = 0xaaaaaaaaaaaaaaaa;
  uStack_c20 = 0xaaaaaaaaaaaaaaaa;
  uStack_c38 = 0xaaaaaaaaaaaaaaaa;
  lStack_c40 = -0x5555555555555556;
  func_0x000107c2cb24(aplStack_dc0,&UNK_10f7454c7,&UNK_10f74542c,0x259);
  func_0x000107c2ce28(&lStack_c40,aplStack_dc0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    apuStack_cf0[0] = (undefined1 *)aplStack_dc0;
    func_0x00010b32059c(&UNK_10f74523a,apuStack_cf0);
  }
  plVar19 = plVar22;
  _lstat(plVar22,&uStack_cd0);
  plVar8 = &lStack_c40;
  func_0x000107c2ce2c();
  if ((int)plVar19 == 0) {
    if ((uStack_cd0._4_2_ & 0xf000) == 0x4000) {
      _rmdir();
      iVar7 = (int)plVar22;
      plVar8 = plVar22;
    }
    else {
      _unlink();
      iVar7 = (int)plVar22;
      plVar8 = plVar22;
    }
    if (iVar7 == 0) {
      plVar8 = (long *)0x1;
      goto LAB_10b327b28;
    }
  }
  ___error();
  plVar8 = (long *)(ulong)((int)*plVar8 == 2);
LAB_10b327b28:
  func_0x000107c2ce2c(&uStack_b90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b40) {
    ___stack_chk_fail();
    func_0x000104c03f14();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x10b3281cc);
    (*pcVar5)();
  }
  return plVar8;
}



/* Entry: 10b3278c8; end: 10b3279ef;  */

/* WARNING: Removing unreachable block (ram,0x00010b327b80) */
/* WARNING: Removing unreachable block (ram,0x00010b327bdc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ba4) */
/* WARNING: Removing unreachable block (ram,0x00010b327be8) */
/* WARNING: Removing unreachable block (ram,0x00010b327c80) */
/* WARNING: Removing unreachable block (ram,0x00010b327eec) */
/* WARNING: Removing unreachable block (ram,0x00010b327c88) */
/* WARNING: Removing unreachable block (ram,0x00010b327ccc) */
/* WARNING: Removing unreachable block (ram,0x00010b327e20) */
/* WARNING: Removing unreachable block (ram,0x00010b327d08) */
/* WARNING: Removing unreachable block (ram,0x00010b327d24) */
/* WARNING: Removing unreachable block (ram,0x00010b327e38) */
/* WARNING: Removing unreachable block (ram,0x00010b327e4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e58) */
/* WARNING: Removing unreachable block (ram,0x00010b327e78) */
/* WARNING: Removing unreachable block (ram,0x00010b327e64) */
/* WARNING: Removing unreachable block (ram,0x00010b327e7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d30) */
/* WARNING: Removing unreachable block (ram,0x00010b327d38) */
/* WARNING: Removing unreachable block (ram,0x00010b327d3c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d58) */
/* WARNING: Removing unreachable block (ram,0x00010b327d60) */
/* WARNING: Removing unreachable block (ram,0x00010b327d6c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d80) */
/* WARNING: Removing unreachable block (ram,0x00010b327dc8) */
/* WARNING: Removing unreachable block (ram,0x00010b3281f8) */
/* WARNING: Removing unreachable block (ram,0x00010b327dd0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ea0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ddc) */
/* WARNING: Removing unreachable block (ram,0x00010b327df8) */
/* WARNING: Removing unreachable block (ram,0x00010b327eb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ed0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ec0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ecc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ee0) */
/* WARNING: Removing unreachable block (ram,0x00010b327e08) */
/* WARNING: Removing unreachable block (ram,0x00010b327e1c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e94) */
/* WARNING: Removing unreachable block (ram,0x00010b327ca4) */
/* WARNING: Removing unreachable block (ram,0x00010b327cc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef4) */
/* WARNING: Removing unreachable block (ram,0x00010b327f08) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef8) */
/* WARNING: Removing unreachable block (ram,0x00010b327f04) */
/* WARNING: Removing unreachable block (ram,0x00010b327f30) */
/* WARNING: Removing unreachable block (ram,0x00010b327f60) */
/* WARNING: Removing unreachable block (ram,0x00010b327f6c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281ec) */
/* WARNING: Removing unreachable block (ram,0x00010b327f7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f94) */
/* WARNING: Removing unreachable block (ram,0x00010b3281bc) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fe0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ff0) */
/* WARNING: Removing unreachable block (ram,0x00010b328004) */
/* WARNING: Removing unreachable block (ram,0x00010b328008) */
/* WARNING: Removing unreachable block (ram,0x00010b32801c) */
/* WARNING: Removing unreachable block (ram,0x00010b328028) */
/* WARNING: Removing unreachable block (ram,0x00010b328040) */
/* WARNING: Removing unreachable block (ram,0x00010b328048) */
/* WARNING: Removing unreachable block (ram,0x00010b32802c) */
/* WARNING: Removing unreachable block (ram,0x00010b328034) */
/* WARNING: Removing unreachable block (ram,0x00010b32804c) */
/* WARNING: Removing unreachable block (ram,0x00010b328050) */
/* WARNING: Removing unreachable block (ram,0x00010b32805c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281d4) */
/* WARNING: Removing unreachable block (ram,0x00010b328070) */
/* WARNING: Removing unreachable block (ram,0x00010b3281e0) */
/* WARNING: Removing unreachable block (ram,0x00010b328078) */
/* WARNING: Removing unreachable block (ram,0x00010b328080) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280b0) */
/* WARNING: Removing unreachable block (ram,0x00010b328090) */
/* WARNING: Removing unreachable block (ram,0x00010b328094) */
/* WARNING: Removing unreachable block (ram,0x00010b3280bc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280c4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280dc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280e8) */
/* WARNING: Removing unreachable block (ram,0x00010b3280f4) */
/* WARNING: Removing unreachable block (ram,0x00010b3281b8) */
/* WARNING: Removing unreachable block (ram,0x00010b328104) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a0) */
/* WARNING: Removing unreachable block (ram,0x00010b328144) */
/* WARNING: Removing unreachable block (ram,0x00010b328150) */
/* WARNING: Removing unreachable block (ram,0x00010b328178) */
/* WARNING: Removing unreachable block (ram,0x00010b328184) */
/* WARNING: Removing unreachable block (ram,0x00010b32815c) */
/* WARNING: Removing unreachable block (ram,0x00010b328174) */
/* WARNING: Removing unreachable block (ram,0x00010b327f48) */
/* WARNING: Removing unreachable block (ram,0x00010b327f50) */
/* WARNING: Removing unreachable block (ram,0x00010b327f1c) */

long * FUN_10b3278c8(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *aplStack_790 [26];
  undefined1 *apuStack_6c0 [4];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined1 *puStack_498;
  undefined1 auStack_490 [1024];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  lStack_90 = -0x5555555555555556;
  func_0x000107c2cb24(auStack_490,&UNK_10f7454cd,&UNK_10f7454e2,0x14f);
  func_0x000107c2ce28(&lStack_90,auStack_490,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_498 = auStack_490;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_498);
  }
  _memset(auStack_490,0xaa,0x400);
  plVar6 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar6 = param_2;
  }
  _realpath_DARWIN_EXTSN(plVar6,auStack_490);
  if (plVar6 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    puVar3 = auStack_490;
    _strlen(puVar3);
    func_0x000107c2caa4(param_1,auStack_490,puVar3);
  }
  plVar6 = &lStack_90;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  lStack_510 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_528 = 0xaaaaaaaaaaaaaaaa;
  uStack_530 = 0xaaaaaaaaaaaaaaaa;
  uStack_518 = 0xaaaaaaaaaaaaaaaa;
  uStack_520 = 0xaaaaaaaaaaaaaaaa;
  uStack_548 = 0xaaaaaaaaaaaaaaaa;
  uStack_550 = 0xaaaaaaaaaaaaaaaa;
  uStack_538 = 0xaaaaaaaaaaaaaaaa;
  uStack_540 = 0xaaaaaaaaaaaaaaaa;
  uStack_558 = 0xaaaaaaaaaaaaaaaa;
  uStack_560 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&lStack_610,&UNK_10f7455aa,&UNK_10f7454e2,0x117);
  func_0x000107c2ce28(&uStack_560,&lStack_610,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    aplStack_790[0] = &lStack_610;
    func_0x00010b32059c(&UNK_10f74523a,aplStack_790);
  }
  plVar5 = (long *)*plVar6;
  if (-1 < *(char *)((long)plVar6 + 0x17)) {
    plVar5 = plVar6;
  }
  uStack_628 = 0xaaaaaaaaaaaaaaaa;
  uStack_630 = 0xaaaaaaaaaaaaaaaa;
  uStack_618 = 0xaaaaaaaaaaaaaaaa;
  uStack_620 = 0xaaaaaaaaaaaaaaaa;
  uStack_648 = 0xaaaaaaaaaaaaaaaa;
  uStack_650 = 0xaaaaaaaaaaaaaaaa;
  uStack_638 = 0xaaaaaaaaaaaaaaaa;
  uStack_640 = 0xaaaaaaaaaaaaaaaa;
  uStack_668 = 0xaaaaaaaaaaaaaaaa;
  uStack_670 = 0xaaaaaaaaaaaaaaaa;
  uStack_658 = 0xaaaaaaaaaaaaaaaa;
  uStack_660 = 0xaaaaaaaaaaaaaaaa;
  uStack_688 = 0xaaaaaaaaaaaaaaaa;
  uStack_690 = 0xaaaaaaaaaaaaaaaa;
  uStack_678 = 0xaaaaaaaaaaaaaaaa;
  uStack_680 = 0xaaaaaaaaaaaaaaaa;
  uStack_698 = 0xaaaaaaaaaaaaaaaa;
  uStack_6a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_600 = 0xaaaaaaaaaaaaaaaa;
  uStack_5e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_608 = 0xaaaaaaaaaaaaaaaa;
  lStack_610 = -0x5555555555555556;
  func_0x000107c2cb24(aplStack_790,&UNK_10f7454c7,&UNK_10f74542c,0x259);
  func_0x000107c2ce28(&lStack_610,aplStack_790,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    apuStack_6c0[0] = (undefined1 *)aplStack_790;
    func_0x00010b32059c(&UNK_10f74523a,apuStack_6c0);
  }
  plVar4 = plVar5;
  _lstat(plVar5,&uStack_6a0);
  plVar6 = &lStack_610;
  func_0x000107c2ce2c();
  if ((int)plVar4 == 0) {
    if ((uStack_6a0._4_2_ & 0xf000) == 0x4000) {
      _rmdir();
      iVar2 = (int)plVar5;
      plVar6 = plVar5;
    }
    else {
      _unlink();
      iVar2 = (int)plVar5;
      plVar6 = plVar5;
    }
    if (iVar2 == 0) {
      plVar6 = (long *)0x1;
      goto LAB_10b327b28;
    }
  }
  ___error();
  plVar6 = (long *)(ulong)((int)*plVar6 == 2);
LAB_10b327b28:
  func_0x000107c2ce2c(&uStack_560);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_510) {
    ___stack_chk_fail();
    func_0x000104c03f14();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x10b3281cc);
    (*pcVar1)();
  }
  return plVar6;
}



/* Entry: 10b3279f0; end: 10b3279f7;  */

/* WARNING: Removing unreachable block (ram,0x00010b327b80) */
/* WARNING: Removing unreachable block (ram,0x00010b327bdc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ba4) */
/* WARNING: Removing unreachable block (ram,0x00010b327be8) */
/* WARNING: Removing unreachable block (ram,0x00010b327c80) */
/* WARNING: Removing unreachable block (ram,0x00010b327eec) */
/* WARNING: Removing unreachable block (ram,0x00010b327c88) */
/* WARNING: Removing unreachable block (ram,0x00010b327ccc) */
/* WARNING: Removing unreachable block (ram,0x00010b327e20) */
/* WARNING: Removing unreachable block (ram,0x00010b327d08) */
/* WARNING: Removing unreachable block (ram,0x00010b327d24) */
/* WARNING: Removing unreachable block (ram,0x00010b327e38) */
/* WARNING: Removing unreachable block (ram,0x00010b327e4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e58) */
/* WARNING: Removing unreachable block (ram,0x00010b327e78) */
/* WARNING: Removing unreachable block (ram,0x00010b327e64) */
/* WARNING: Removing unreachable block (ram,0x00010b327e7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d30) */
/* WARNING: Removing unreachable block (ram,0x00010b327d38) */
/* WARNING: Removing unreachable block (ram,0x00010b327d3c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d4c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d58) */
/* WARNING: Removing unreachable block (ram,0x00010b327d60) */
/* WARNING: Removing unreachable block (ram,0x00010b327d6c) */
/* WARNING: Removing unreachable block (ram,0x00010b327d80) */
/* WARNING: Removing unreachable block (ram,0x00010b327dc8) */
/* WARNING: Removing unreachable block (ram,0x00010b3281f8) */
/* WARNING: Removing unreachable block (ram,0x00010b327dd0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ea0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ddc) */
/* WARNING: Removing unreachable block (ram,0x00010b327df8) */
/* WARNING: Removing unreachable block (ram,0x00010b327eb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ed0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ec0) */
/* WARNING: Removing unreachable block (ram,0x00010b327ecc) */
/* WARNING: Removing unreachable block (ram,0x00010b327ee0) */
/* WARNING: Removing unreachable block (ram,0x00010b327e08) */
/* WARNING: Removing unreachable block (ram,0x00010b327e1c) */
/* WARNING: Removing unreachable block (ram,0x00010b327e94) */
/* WARNING: Removing unreachable block (ram,0x00010b327ca4) */
/* WARNING: Removing unreachable block (ram,0x00010b327cc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef4) */
/* WARNING: Removing unreachable block (ram,0x00010b327f08) */
/* WARNING: Removing unreachable block (ram,0x00010b327ef8) */
/* WARNING: Removing unreachable block (ram,0x00010b327f04) */
/* WARNING: Removing unreachable block (ram,0x00010b327f30) */
/* WARNING: Removing unreachable block (ram,0x00010b327f60) */
/* WARNING: Removing unreachable block (ram,0x00010b327f6c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281ec) */
/* WARNING: Removing unreachable block (ram,0x00010b327f7c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b327f94) */
/* WARNING: Removing unreachable block (ram,0x00010b3281bc) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fc4) */
/* WARNING: Removing unreachable block (ram,0x00010b327fa8) */
/* WARNING: Removing unreachable block (ram,0x00010b327fe0) */
/* WARNING: Removing unreachable block (ram,0x00010b327fb4) */
/* WARNING: Removing unreachable block (ram,0x00010b327ff0) */
/* WARNING: Removing unreachable block (ram,0x00010b328004) */
/* WARNING: Removing unreachable block (ram,0x00010b328008) */
/* WARNING: Removing unreachable block (ram,0x00010b32801c) */
/* WARNING: Removing unreachable block (ram,0x00010b328028) */
/* WARNING: Removing unreachable block (ram,0x00010b328040) */
/* WARNING: Removing unreachable block (ram,0x00010b328048) */
/* WARNING: Removing unreachable block (ram,0x00010b32802c) */
/* WARNING: Removing unreachable block (ram,0x00010b328034) */
/* WARNING: Removing unreachable block (ram,0x00010b32804c) */
/* WARNING: Removing unreachable block (ram,0x00010b328050) */
/* WARNING: Removing unreachable block (ram,0x00010b32805c) */
/* WARNING: Removing unreachable block (ram,0x00010b3281d4) */
/* WARNING: Removing unreachable block (ram,0x00010b328070) */
/* WARNING: Removing unreachable block (ram,0x00010b3281e0) */
/* WARNING: Removing unreachable block (ram,0x00010b328078) */
/* WARNING: Removing unreachable block (ram,0x00010b328080) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280b0) */
/* WARNING: Removing unreachable block (ram,0x00010b328090) */
/* WARNING: Removing unreachable block (ram,0x00010b328094) */
/* WARNING: Removing unreachable block (ram,0x00010b3280bc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280c4) */
/* WARNING: Removing unreachable block (ram,0x00010b3280dc) */
/* WARNING: Removing unreachable block (ram,0x00010b3280e8) */
/* WARNING: Removing unreachable block (ram,0x00010b3280f4) */
/* WARNING: Removing unreachable block (ram,0x00010b3281b8) */
/* WARNING: Removing unreachable block (ram,0x00010b328104) */
/* WARNING: Removing unreachable block (ram,0x00010b3280a0) */
/* WARNING: Removing unreachable block (ram,0x00010b328144) */
/* WARNING: Removing unreachable block (ram,0x00010b328150) */
/* WARNING: Removing unreachable block (ram,0x00010b328178) */
/* WARNING: Removing unreachable block (ram,0x00010b328184) */
/* WARNING: Removing unreachable block (ram,0x00010b32815c) */
/* WARNING: Removing unreachable block (ram,0x00010b328174) */
/* WARNING: Removing unreachable block (ram,0x00010b327f48) */
/* WARNING: Removing unreachable block (ram,0x00010b327f50) */
/* WARNING: Removing unreachable block (ram,0x00010b327f1c) */

bool FUN_10b3279f0(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *aplStack_2f0 [26];
  undefined1 *apuStack_220 [4];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&lStack_170,&UNK_10f7455aa,&UNK_10f7454e2,0x117);
  func_0x000107c2ce28(&uStack_c0,&lStack_170,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    aplStack_2f0[0] = &lStack_170;
    func_0x00010b32059c(&UNK_10f74523a,aplStack_2f0);
  }
  plVar6 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar6 = param_1;
  }
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  lStack_170 = -0x5555555555555556;
  func_0x000107c2cb24(aplStack_2f0,&UNK_10f7454c7,&UNK_10f74542c,0x259);
  func_0x000107c2ce28(&lStack_170,aplStack_2f0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    apuStack_220[0] = (undefined1 *)aplStack_2f0;
    func_0x00010b32059c(&UNK_10f74523a,apuStack_220);
  }
  plVar4 = plVar6;
  _lstat(plVar6,&uStack_200);
  plVar5 = &lStack_170;
  func_0x000107c2ce2c();
  if ((int)plVar4 == 0) {
    if ((uStack_200._4_2_ & 0xf000) == 0x4000) {
      _rmdir();
      iVar3 = (int)plVar6;
      plVar5 = plVar6;
    }
    else {
      _unlink();
      iVar3 = (int)plVar6;
      plVar5 = plVar6;
    }
    if (iVar3 == 0) {
      bVar2 = true;
      goto LAB_10b327b28;
    }
  }
  ___error();
  bVar2 = (int)*plVar5 == 2;
LAB_10b327b28:
  func_0x000107c2ce2c(&uStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000104c03f14();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x10b3281cc);
    (*pcVar1)();
  }
  return bVar2;
}



/* Entry: 10b3279f8; end: 10b328203;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10b3279f8(int ******param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int *****pppppiVar8;
  int *****pppppiVar9;
  ulong uVar10;
  int *****pppppiVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  long *plVar18;
  int ******ppppppiVar19;
  long *plVar20;
  int *******pppppppiVar21;
  int *******pppppppiVar22;
  ulong uVar23;
  int *****pppppiVar24;
  ulong uVar25;
  ulong uVar26;
  ushort uVar27;
  ulong uVar28;
  int *******pppppppiVar29;
  undefined8 uStack_2f0;
  int *****pppppiStack_2e8;
  undefined8 uStack_2e0;
  int *****pppppiStack_2d8;
  int *****pppppiStack_2d0;
  int *****pppppiStack_2c8;
  int *****pppppiStack_2c0;
  int *****pppppiStack_2b8;
  int *****pppppiStack_2b0;
  int *****pppppiStack_2a8;
  int *****pppppiStack_2a0;
  int *****pppppiStack_298;
  int *****pppppiStack_290;
  int *****pppppiStack_288;
  int *****pppppiStack_280;
  int *****pppppiStack_278;
  int *****pppppiStack_270;
  int *****pppppiStack_268;
  int *****pppppiStack_260;
  int *****pppppiStack_258;
  int *****pppppiStack_250;
  int *******pppppppiStack_240;
  int *****pppppiStack_238;
  undefined8 uStack_230;
  long *plStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int ******ppppppiStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&ppppppiStack_170,&UNK_10f7455aa,&UNK_10f7454e2,0x117);
  func_0x000107c2ce28(&uStack_c0,&ppppppiStack_170,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    uStack_2f0 = &ppppppiStack_170;
    func_0x00010b32059c(&UNK_10f74523a,&uStack_2f0);
  }
  ppppppiVar19 = (int ******)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    ppppppiVar19 = param_1;
  }
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  lStack_130 = -0x5555555555555556;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_170 = (int ******)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&uStack_2f0,&UNK_10f7454c7,&UNK_10f74542c,0x259);
  func_0x000107c2ce28(&ppppppiStack_170,&uStack_2f0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    plStack_220 = &uStack_2f0;
    func_0x00010b32059c(&UNK_10f74523a,&plStack_220);
  }
  ppppppiVar16 = ppppppiVar19;
  _lstat(ppppppiVar19,&uStack_200);
  ppppppiVar17 = (int ******)&ppppppiStack_170;
  func_0x000107c2ce2c();
  if ((int)ppppppiVar16 == 0) {
    if ((uStack_200._4_2_ & 0xf000) == 0x4000) {
      if ((param_2 & 1) != 0) {
        plVar18 = (long *)0x60;
        _malloc();
        uStack_210 = 0;
        uStack_218 = 4;
        plStack_220 = plVar18;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(plVar18,*param_1,param_1[1]);
        }
        else {
          pppppiVar24 = *param_1;
          plVar18[1] = (long)param_1[1];
          *plVar18 = (long)pppppiVar24;
          plVar18[2] = (long)param_1[2];
        }
        uVar26 = 1;
        uStack_208 = 1;
        uStack_e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_128 = 0xaaaaaaaaaaaaaaaa;
        lStack_130 = -0x5555555555555556;
        uStack_118 = 0xaaaaaaaaaaaaaaaa;
        uStack_120 = 0xaaaaaaaaaaaaaaaa;
        uStack_108 = 0xaaaaaaaaaaaaaaaa;
        uStack_110 = 0xaaaaaaaaaaaaaaaa;
        uStack_f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_100 = 0xaaaaaaaaaaaaaaaa;
        uStack_168 = 0xaaaaaaaaaaaaaaaa;
        ppppppiStack_170 = (int ******)0xaaaaaaaaaaaaaaaa;
        uStack_158 = 0xaaaaaaaaaaaaaaaa;
        uStack_160 = 0xaaaaaaaaaaaaaaaa;
        uStack_148 = 0xaaaaaaaaaaaaaaaa;
        uStack_150 = 0xaaaaaaaaaaaaaaaa;
        uStack_138 = 0xaaaaaaaaffffffff;
        uStack_140 = 0xaaaaaaaaaaaaaaaa;
        uStack_2f0 = (int *******)0x0;
        pppppiStack_2e8 = (int *****)0x0;
        uStack_2e0 = (int *****)0x0;
        FUN_10b3258ac(&ppppppiStack_170,param_1,1,0x13,&uStack_2f0,0,0);
        pppppiStack_238 = (int *****)0xaaaaaaaaaaaaaaaa;
        uStack_230 = (int *****)0xaaaaaaaaaaaaaaaa;
        pppppppiStack_240 = (int *******)0xaaaaaaaaaaaaaaaa;
        FUN_10b325d00(&pppppppiStack_240,&ppppppiStack_170);
        pppppiVar24 = pppppiStack_238;
        if (-1 < (long)uStack_230) {
          pppppiVar24 = (int *****)(ulong)uStack_230._7_1_;
        }
        if (pppppiVar24 == (int *****)0x0) {
          uVar25 = 4;
          bVar13 = true;
          bVar5 = uStack_230._7_1_;
        }
        else {
          uVar26 = 1;
          uVar25 = 4;
          uVar28 = 4;
          bVar13 = true;
          do {
            ppppppiVar19 = ppppppiStack_170 + lStack_130 * 0x15;
            pppppiStack_2e8 = ppppppiVar19[1];
            pppppppiVar29 = (int *******)*ppppppiVar19;
            pppppiStack_2b8 = ppppppiVar19[7];
            pppppiStack_2c0 = ppppppiVar19[6];
            pppppiStack_2a8 = ppppppiVar19[9];
            pppppiStack_2b0 = ppppppiVar19[8];
            pppppiStack_2d8 = ppppppiVar19[3];
            uStack_2e0 = ppppppiVar19[2];
            pppppiStack_2c8 = ppppppiVar19[5];
            pppppiStack_2d0 = ppppppiVar19[4];
            pppppiStack_278 = ppppppiVar19[0xf];
            pppppiStack_280 = ppppppiVar19[0xe];
            pppppiStack_268 = ppppppiVar19[0x11];
            pppppiStack_270 = ppppppiVar19[0x10];
            pppppiStack_298 = ppppppiVar19[0xb];
            pppppiStack_2a0 = ppppppiVar19[10];
            pppppiStack_288 = ppppppiVar19[0xd];
            pppppiStack_290 = ppppppiVar19[0xc];
            if (*(char *)((long)ppppppiVar19 + 0xa7) < '\0') {
              uStack_2f0 = pppppppiVar29;
              func_0x000107c3192c(&pppppiStack_260,ppppppiVar19[0x12],ppppppiVar19[0x13]);
              pppppppiVar29 = uStack_2f0;
              uVar27 = uStack_2f0._4_2_;
              if (-1 < (long)pppppiStack_250) goto LAB_10b327d24;
LAB_10b327e38:
              uStack_2f0 = pppppppiVar29;
              __ZdlPv(pppppiStack_260);
              if ((uVar27 & 0xf000) == 0x4000) goto LAB_10b327d30;
LAB_10b327e4c:
              pppppppiVar29 = pppppppiStack_240;
              if (-1 < (long)uStack_230) {
                pppppppiVar29 = (int *******)&pppppppiStack_240;
              }
              _unlink();
              if ((int)pppppppiVar29 == 0) {
                bVar14 = true;
              }
              else {
                ___error();
                bVar14 = *(int *)pppppppiVar29 == 2;
              }
              bVar13 = (bool)(bVar13 & bVar14);
              FUN_10b325d00(&uStack_2f0,&ppppppiStack_170);
            }
            else {
              pppppiStack_258 = ppppppiVar19[0x13];
              pppppiStack_260 = ppppppiVar19[0x12];
              pppppiStack_250 = ppppppiVar19[0x14];
              uStack_2f0._4_2_ = (ushort)((ulong)pppppppiVar29 >> 0x20);
              uVar27 = uStack_2f0._4_2_;
              if ((long)pppppiStack_250 < 0) goto LAB_10b327e38;
LAB_10b327d24:
              uStack_2f0 = pppppppiVar29;
              if ((uVar27 & 0xf000) != 0x4000) goto LAB_10b327e4c;
LAB_10b327d30:
              uVar10 = uStack_210;
              uVar2 = uVar25;
              uVar3 = uVar25;
              if (uStack_210 <= uVar26) {
                uVar2 = 0;
                uVar3 = uVar28;
              }
              uVar2 = (uVar26 - uStack_210) + uVar2 + 1;
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar3 - 1;
              }
              uVar23 = uVar26;
              uVar28 = uVar3;
              if (uVar1 < uVar2) {
                uVar1 = uVar1 + (uVar1 >> 2);
                if (uVar2 <= uVar1) {
                  uVar2 = uVar1;
                }
                if (uVar2 < 4) {
                  uVar2 = 3;
                }
                uVar25 = uVar2 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar25;
                if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) goto LAB_10b3281b8;
                plVar18 = (long *)(uVar25 * 0x18);
                _malloc();
                FUN_10b329684(&plStack_220,uVar10,uVar26,plVar18,uVar25,&uStack_210,&uStack_208);
                _free(plStack_220);
                uVar23 = uStack_208;
                uVar28 = uVar25;
                plStack_220 = plVar18;
                uStack_218 = uVar25;
              }
              if (uVar28 < uVar23) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281fc);
                (*pcVar12)();
              }
              plVar20 = plVar18 + uVar23 * 3;
              if ((long)uStack_230 < 0) {
                func_0x000107c3192c(plVar20,pppppppiStack_240,pppppiStack_238);
                if (uVar23 == uVar28 - 1) goto LAB_10b327df8;
LAB_10b327eb4:
                uStack_208 = uVar23 + 1;
                uVar26 = uStack_208;
                if (uVar23 == 0xffffffffffffffff) {
                  uVar26 = 0;
                  uVar23 = uVar28 - 1;
                }
              }
              else {
                plVar20[2] = (long)uStack_230;
                plVar20[1] = (long)pppppiStack_238;
                *plVar20 = (long)pppppppiStack_240;
                if (uVar23 != uVar28 - 1) goto LAB_10b327eb4;
LAB_10b327df8:
                uVar23 = uVar28 - 1;
                uStack_208 = 0;
                uVar26 = uStack_208;
              }
              if (uVar28 < uVar23) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(0,0x10b327ee4);
                (*pcVar12)();
              }
              FUN_10b325d00(&uStack_2f0,&ppppppiStack_170);
            }
            if ((long)uStack_230 < 0) {
              __ZdlPv(pppppppiStack_240);
            }
            uStack_230 = uStack_2e0;
            pppppiStack_238 = pppppiStack_2e8;
            pppppppiStack_240 = uStack_2f0;
            pppppiVar24 = pppppiStack_2e8;
            if (-1 < (long)uStack_2e0) {
              pppppiVar24 = (int *****)((ulong)uStack_2e0 >> 0x38);
            }
            bVar5 = (byte)((ulong)uStack_2e0 >> 0x38);
          } while (pppppiVar24 != (int *****)0x0);
        }
        if ((char)bVar5 < '\0') {
          __ZdlPv(pppppppiStack_240);
        }
        if (uStack_210 != uVar26) {
          do {
            pppppiStack_2e8 = (int *****)0xaaaaaaaaaaaaaaaa;
            uStack_2e0 = (int *****)0xaaaaaaaaaaaaaaaa;
            uStack_2f0 = (int *******)0xaaaaaaaaaaaaaaaa;
            uVar28 = uVar25;
            if (uVar26 != 0) {
              uVar28 = uVar26;
            }
            if (uVar25 < uVar28 - 1) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281f0);
              (*pcVar12)();
            }
            plVar18 = plVar18 + (uVar28 - 1) * 3;
            cVar4 = *(char *)((long)plVar18 + 0x17);
            plVar20 = (long *)*plVar18;
            if (-1 < (long)cVar4) {
              plVar20 = plVar18;
            }
            pppppiVar24 = (int *****)plVar18[1];
            if (-1 < cVar4) {
              pppppiVar24 = (int *****)(long)cVar4;
            }
            if ((int *****)0x7ffffffffffffff7 < pppppiVar24) {
              FUN_10b2ecf74();
              goto LAB_10b3281c0;
            }
            if (pppppiVar24 < (int *****)0x17) {
              uStack_2e0 = (int *****)CONCAT17((char)pppppiVar24,0xaaaaaaaaaaaaaa);
              pppppppiVar21 = (int *******)&uStack_2f0;
              pppppppiVar29 = (int *******)&uStack_2f0;
              if (pppppiVar24 != (int *****)0x0) goto LAB_10b327fe0;
            }
            else {
              pppppppiVar29 = (int *******)0x19;
              if (((ulong)pppppiVar24 | 7) != 0x17) {
                pppppppiVar29 = (int *******)(((ulong)pppppiVar24 | 7) + 1);
              }
              pppppppiVar21 = pppppppiVar29;
              __Znwm();
              uStack_2e0 = (int *****)((ulong)pppppppiVar29 | 0x8000000000000000);
              uStack_2f0 = pppppppiVar21;
              pppppiStack_2e8 = pppppiVar24;
LAB_10b327fe0:
              _memmove(pppppppiVar21,plVar20,pppppiVar24);
              pppppppiVar29 = pppppppiVar21;
            }
            *(undefined1 *)((long)pppppppiVar29 + (long)pppppiVar24) = 0;
            pppppiVar9 = uStack_2e0;
            pppppiVar8 = pppppiStack_2e8;
            pppppppiVar21 = uStack_2f0;
            pppppiVar11 = (int *****)((ulong)uStack_2e0 >> 0x38);
            pppppiVar24 = pppppiStack_2e8;
            pppppppiVar29 = uStack_2f0;
            if (-1 < (long)uStack_2e0) {
              pppppiVar24 = pppppiVar11;
              pppppppiVar29 = (int *******)&uStack_2f0;
            }
            pppppppiVar22 = pppppppiVar29;
            _memchr(pppppppiVar29,0,pppppiVar24);
            if ((pppppppiVar22 != (int *******)0x0) &&
               (pppppiVar24 = (int *****)((long)pppppppiVar22 - (long)pppppppiVar29),
               pppppiVar24 != (int *****)0xffffffffffffffff)) {
              if ((long)pppppiVar9 < 0) {
                pppppiVar11 = pppppiVar24;
                if (pppppiVar8 < pppppiVar24) goto LAB_10b3281c4;
              }
              else {
                if (pppppiVar11 < pppppiVar24) goto LAB_10b3281c4;
                uStack_2e0 = (int *****)CONCAT17((char)pppppiVar24,(undefined7)uStack_2e0);
                pppppppiVar21 = (int *******)&uStack_2f0;
                pppppiVar11 = pppppiStack_2e8;
              }
              pppppiStack_2e8 = pppppiVar11;
              *(undefined1 *)((long)pppppppiVar21 + (long)pppppiVar24) = 0;
            }
            uVar25 = uStack_218;
            plVar18 = plStack_220;
            uVar26 = uStack_218;
            if (uStack_208 != 0) {
              uVar26 = uStack_208;
            }
            uVar28 = uVar26 - 1;
            uStack_208 = uVar28;
            if (uStack_218 < uVar28) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281d8);
              (*pcVar12)();
            }
            if (uStack_218 < uVar26) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281e4);
              (*pcVar12)();
            }
            if (uVar26 == 0x8000000000000000) goto LAB_10b3281c8;
            if (*(char *)((long)(plStack_220 + uVar28 * 3) + 0x17) < '\0') {
              __ZdlPv(plStack_220[uVar28 * 3]);
              uVar26 = 0;
              uVar2 = uStack_210;
              if (uVar25 != 0) {
                uVar26 = uVar25 - 1;
              }
            }
            else {
              uVar26 = 0;
              uVar2 = uStack_210;
              if (uStack_218 != 0) {
                uVar26 = uStack_218 - 1;
              }
            }
            uStack_210 = uVar2;
            if (3 < uVar26) {
              uVar3 = uVar25;
              if (uVar2 <= uVar28) {
                uVar3 = 0;
              }
              uVar3 = (uVar3 - uVar2) + uVar28;
              if (uVar3 <= uVar26 - uVar3) {
                uVar3 = uVar3 + (uVar3 >> 2);
                if (uVar3 < 4) {
                  uVar3 = 3;
                }
                if (uVar3 < uVar26) {
                  uVar25 = uVar3 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar25;
                  if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
LAB_10b3281b8:
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10b3281bc);
                    (*pcVar12)();
                  }
                  plVar18 = (long *)(uVar25 * 0x18);
                  _malloc();
                  FUN_10b329684(&plStack_220,uVar2,uVar28,plVar18,uVar25,&uStack_210,&uStack_208);
                  _free(plStack_220);
                  plStack_220 = plVar18;
                  uStack_218 = uVar25;
                }
              }
            }
            pppppppiVar29 = uStack_2f0;
            if (-1 < (long)uStack_2e0) {
              pppppppiVar29 = (int *******)&uStack_2f0;
            }
            _rmdir();
            if ((int)pppppppiVar29 == 0) {
              bVar14 = true;
            }
            else {
              ___error();
              bVar14 = *(int *)pppppppiVar29 == 2;
            }
            if ((long)uStack_2e0 < 0) {
              __ZdlPv(uStack_2f0);
            }
            bVar13 = (bool)(bVar13 & bVar14);
            uVar26 = uStack_208;
          } while (uStack_210 != uStack_208);
        }
        FUN_10b325c20(&ppppppiStack_170);
        _free(plVar18);
        goto LAB_10b327b28;
      }
      _rmdir();
      iVar15 = (int)ppppppiVar19;
      ppppppiVar17 = ppppppiVar19;
    }
    else {
      _unlink();
      iVar15 = (int)ppppppiVar19;
      ppppppiVar17 = ppppppiVar19;
    }
    if (iVar15 == 0) {
      bVar13 = true;
      goto LAB_10b327b28;
    }
  }
  ___error();
  bVar13 = *(int *)ppppppiVar17 == 2;
LAB_10b327b28:
  func_0x000107c2ce2c(&uStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar13;
  }
LAB_10b3281c0:
  ___stack_chk_fail();
LAB_10b3281c4:
  func_0x000104c03f14();
LAB_10b3281c8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281cc);
  (*pcVar12)();
}



/* Entry: 10b328204; end: 10b32820b;  */

/* WARNING: Removing unreachable block (ram,0x00010b327bc8) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_10b328204(int ******param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int *****pppppiVar8;
  int *****pppppiVar9;
  ulong uVar10;
  int *****pppppiVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  int ******ppppppiVar15;
  int ******ppppppiVar16;
  long *plVar17;
  int ******ppppppiVar18;
  long *plVar19;
  int *******pppppppiVar20;
  int *******pppppppiVar21;
  ulong uVar22;
  int *****pppppiVar23;
  ulong uVar24;
  ulong uVar25;
  ushort uVar26;
  ulong uVar27;
  int *******pppppppiVar28;
  undefined8 uStack_2f0;
  int *****pppppiStack_2e8;
  undefined8 uStack_2e0;
  int *****pppppiStack_2d8;
  int *****pppppiStack_2d0;
  int *****pppppiStack_2c8;
  int *****pppppiStack_2c0;
  int *****pppppiStack_2b8;
  int *****pppppiStack_2b0;
  int *****pppppiStack_2a8;
  int *****pppppiStack_2a0;
  int *****pppppiStack_298;
  int *****pppppiStack_290;
  int *****pppppiStack_288;
  int *****pppppiStack_280;
  int *****pppppiStack_278;
  int *****pppppiStack_270;
  int *****pppppiStack_268;
  int *****pppppiStack_260;
  int *****pppppiStack_258;
  int *****pppppiStack_250;
  int *******pppppppiStack_240;
  int *****pppppiStack_238;
  undefined8 uStack_230;
  long *plStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int ******ppppppiStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&ppppppiStack_170,&UNK_10f7455aa,&UNK_10f7454e2,0x117);
  func_0x000107c2ce28(&uStack_c0,&ppppppiStack_170,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    uStack_2f0 = &ppppppiStack_170;
    func_0x00010b32059c(&UNK_10f74523a,&uStack_2f0);
  }
  ppppppiVar18 = (int ******)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    ppppppiVar18 = param_1;
  }
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  lStack_130 = -0x5555555555555556;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_170 = (int ******)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&uStack_2f0,&UNK_10f7454c7,&UNK_10f74542c,0x259);
  func_0x000107c2ce28(&ppppppiStack_170,&uStack_2f0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    plStack_220 = &uStack_2f0;
    func_0x00010b32059c(&UNK_10f74523a,&plStack_220);
  }
  ppppppiVar15 = ppppppiVar18;
  _lstat(ppppppiVar18,&uStack_200);
  ppppppiVar16 = (int ******)&ppppppiStack_170;
  func_0x000107c2ce2c();
  if ((int)ppppppiVar15 == 0) {
    if ((uStack_200._4_2_ & 0xf000) == 0x4000) {
      plVar17 = (long *)0x60;
      _malloc();
      uStack_210 = 0;
      uStack_218 = 4;
      plStack_220 = plVar17;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar17,*param_1,param_1[1]);
      }
      else {
        pppppiVar23 = *param_1;
        plVar17[1] = (long)param_1[1];
        *plVar17 = (long)pppppiVar23;
        plVar17[2] = (long)param_1[2];
      }
      uVar25 = 1;
      uStack_208 = 1;
      uStack_e8 = 0xaaaaaaaaaaaaaaaa;
      uStack_f0 = 0xaaaaaaaaaaaaaaaa;
      uStack_d8 = 0xaaaaaaaaaaaaaaaa;
      uStack_e0 = 0xaaaaaaaaaaaaaaaa;
      uStack_c8 = 0xaaaaaaaaaaaaaaaa;
      uStack_d0 = 0xaaaaaaaaaaaaaaaa;
      uStack_128 = 0xaaaaaaaaaaaaaaaa;
      lStack_130 = -0x5555555555555556;
      uStack_118 = 0xaaaaaaaaaaaaaaaa;
      uStack_120 = 0xaaaaaaaaaaaaaaaa;
      uStack_108 = 0xaaaaaaaaaaaaaaaa;
      uStack_110 = 0xaaaaaaaaaaaaaaaa;
      uStack_f8 = 0xaaaaaaaaaaaaaaaa;
      uStack_100 = 0xaaaaaaaaaaaaaaaa;
      uStack_168 = 0xaaaaaaaaaaaaaaaa;
      ppppppiStack_170 = (int ******)0xaaaaaaaaaaaaaaaa;
      uStack_158 = 0xaaaaaaaaaaaaaaaa;
      uStack_160 = 0xaaaaaaaaaaaaaaaa;
      uStack_148 = 0xaaaaaaaaaaaaaaaa;
      uStack_150 = 0xaaaaaaaaaaaaaaaa;
      uStack_138 = 0xaaaaaaaaffffffff;
      uStack_140 = 0xaaaaaaaaaaaaaaaa;
      uStack_2f0 = (int *******)0x0;
      pppppiStack_2e8 = (int *****)0x0;
      uStack_2e0 = (int *****)0x0;
      FUN_10b3258ac(&ppppppiStack_170,param_1,1,0x13,&uStack_2f0,0,0);
      pppppiStack_238 = (int *****)0xaaaaaaaaaaaaaaaa;
      uStack_230 = (int *****)0xaaaaaaaaaaaaaaaa;
      pppppppiStack_240 = (int *******)0xaaaaaaaaaaaaaaaa;
      FUN_10b325d00(&pppppppiStack_240,&ppppppiStack_170);
      pppppiVar23 = pppppiStack_238;
      if (-1 < (long)uStack_230) {
        pppppiVar23 = (int *****)(ulong)uStack_230._7_1_;
      }
      if (pppppiVar23 == (int *****)0x0) {
        uVar24 = 4;
        bVar13 = true;
        bVar5 = uStack_230._7_1_;
      }
      else {
        uVar25 = 1;
        uVar24 = 4;
        uVar27 = 4;
        bVar13 = true;
        do {
          ppppppiVar18 = ppppppiStack_170 + lStack_130 * 0x15;
          pppppiStack_2e8 = ppppppiVar18[1];
          pppppppiVar28 = (int *******)*ppppppiVar18;
          pppppiStack_2b8 = ppppppiVar18[7];
          pppppiStack_2c0 = ppppppiVar18[6];
          pppppiStack_2a8 = ppppppiVar18[9];
          pppppiStack_2b0 = ppppppiVar18[8];
          pppppiStack_2d8 = ppppppiVar18[3];
          uStack_2e0 = ppppppiVar18[2];
          pppppiStack_2c8 = ppppppiVar18[5];
          pppppiStack_2d0 = ppppppiVar18[4];
          pppppiStack_278 = ppppppiVar18[0xf];
          pppppiStack_280 = ppppppiVar18[0xe];
          pppppiStack_268 = ppppppiVar18[0x11];
          pppppiStack_270 = ppppppiVar18[0x10];
          pppppiStack_298 = ppppppiVar18[0xb];
          pppppiStack_2a0 = ppppppiVar18[10];
          pppppiStack_288 = ppppppiVar18[0xd];
          pppppiStack_290 = ppppppiVar18[0xc];
          if (*(char *)((long)ppppppiVar18 + 0xa7) < '\0') {
            uStack_2f0 = pppppppiVar28;
            func_0x000107c3192c(&pppppiStack_260,ppppppiVar18[0x12],ppppppiVar18[0x13]);
            pppppppiVar28 = uStack_2f0;
            uVar26 = uStack_2f0._4_2_;
            if (-1 < (long)pppppiStack_250) goto LAB_10b327d24;
LAB_10b327e38:
            uStack_2f0 = pppppppiVar28;
            __ZdlPv(pppppiStack_260);
            if ((uVar26 & 0xf000) == 0x4000) goto LAB_10b327d30;
LAB_10b327e4c:
            pppppppiVar28 = pppppppiStack_240;
            if (-1 < (long)uStack_230) {
              pppppppiVar28 = (int *******)&pppppppiStack_240;
            }
            _unlink();
            if ((int)pppppppiVar28 == 0) {
              bVar14 = true;
            }
            else {
              ___error();
              bVar14 = *(int *)pppppppiVar28 == 2;
            }
            bVar13 = (bool)(bVar13 & bVar14);
            FUN_10b325d00(&uStack_2f0,&ppppppiStack_170);
          }
          else {
            pppppiStack_258 = ppppppiVar18[0x13];
            pppppiStack_260 = ppppppiVar18[0x12];
            pppppiStack_250 = ppppppiVar18[0x14];
            uStack_2f0._4_2_ = (ushort)((ulong)pppppppiVar28 >> 0x20);
            uVar26 = uStack_2f0._4_2_;
            if ((long)pppppiStack_250 < 0) goto LAB_10b327e38;
LAB_10b327d24:
            uStack_2f0 = pppppppiVar28;
            if ((uVar26 & 0xf000) != 0x4000) goto LAB_10b327e4c;
LAB_10b327d30:
            uVar10 = uStack_210;
            uVar2 = uVar24;
            uVar3 = uVar24;
            if (uStack_210 <= uVar25) {
              uVar2 = 0;
              uVar3 = uVar27;
            }
            uVar2 = (uVar25 - uStack_210) + uVar2 + 1;
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar3 - 1;
            }
            uVar22 = uVar25;
            uVar27 = uVar3;
            if (uVar1 < uVar2) {
              uVar1 = uVar1 + (uVar1 >> 2);
              if (uVar2 <= uVar1) {
                uVar2 = uVar1;
              }
              if (uVar2 < 4) {
                uVar2 = 3;
              }
              uVar24 = uVar2 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar24;
              if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) goto LAB_10b3281b8;
              plVar17 = (long *)(uVar24 * 0x18);
              _malloc();
              FUN_10b329684(&plStack_220,uVar10,uVar25,plVar17,uVar24,&uStack_210,&uStack_208);
              _free(plStack_220);
              uVar22 = uStack_208;
              uVar27 = uVar24;
              plStack_220 = plVar17;
              uStack_218 = uVar24;
            }
            if (uVar27 < uVar22) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281fc);
              (*pcVar12)();
            }
            plVar19 = plVar17 + uVar22 * 3;
            if ((long)uStack_230 < 0) {
              func_0x000107c3192c(plVar19,pppppppiStack_240,pppppiStack_238);
              if (uVar22 == uVar27 - 1) goto LAB_10b327df8;
LAB_10b327eb4:
              uStack_208 = uVar22 + 1;
              uVar25 = uStack_208;
              if (uVar22 == 0xffffffffffffffff) {
                uVar25 = 0;
                uVar22 = uVar27 - 1;
              }
            }
            else {
              plVar19[2] = (long)uStack_230;
              plVar19[1] = (long)pppppiStack_238;
              *plVar19 = (long)pppppppiStack_240;
              if (uVar22 != uVar27 - 1) goto LAB_10b327eb4;
LAB_10b327df8:
              uVar22 = uVar27 - 1;
              uStack_208 = 0;
              uVar25 = uStack_208;
            }
            if (uVar27 < uVar22) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0,0x10b327ee4);
              (*pcVar12)();
            }
            FUN_10b325d00(&uStack_2f0,&ppppppiStack_170);
          }
          if ((long)uStack_230 < 0) {
            __ZdlPv(pppppppiStack_240);
          }
          uStack_230 = uStack_2e0;
          pppppiStack_238 = pppppiStack_2e8;
          pppppppiStack_240 = uStack_2f0;
          pppppiVar23 = pppppiStack_2e8;
          if (-1 < (long)uStack_2e0) {
            pppppiVar23 = (int *****)((ulong)uStack_2e0 >> 0x38);
          }
          bVar5 = (byte)((ulong)uStack_2e0 >> 0x38);
        } while (pppppiVar23 != (int *****)0x0);
      }
      if ((char)bVar5 < '\0') {
        __ZdlPv(pppppppiStack_240);
      }
      if (uStack_210 != uVar25) {
        do {
          pppppiStack_2e8 = (int *****)0xaaaaaaaaaaaaaaaa;
          uStack_2e0 = (int *****)0xaaaaaaaaaaaaaaaa;
          uStack_2f0 = (int *******)0xaaaaaaaaaaaaaaaa;
          uVar27 = uVar24;
          if (uVar25 != 0) {
            uVar27 = uVar25;
          }
          if (uVar24 < uVar27 - 1) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281f0);
            (*pcVar12)();
          }
          plVar17 = plVar17 + (uVar27 - 1) * 3;
          cVar4 = *(char *)((long)plVar17 + 0x17);
          plVar19 = (long *)*plVar17;
          if (-1 < (long)cVar4) {
            plVar19 = plVar17;
          }
          pppppiVar23 = (int *****)plVar17[1];
          if (-1 < cVar4) {
            pppppiVar23 = (int *****)(long)cVar4;
          }
          if ((int *****)0x7ffffffffffffff7 < pppppiVar23) {
            FUN_10b2ecf74();
            goto LAB_10b3281c0;
          }
          if (pppppiVar23 < (int *****)0x17) {
            uStack_2e0 = (int *****)CONCAT17((char)pppppiVar23,0xaaaaaaaaaaaaaa);
            pppppppiVar20 = (int *******)&uStack_2f0;
            pppppppiVar28 = (int *******)&uStack_2f0;
            if (pppppiVar23 != (int *****)0x0) goto LAB_10b327fe0;
          }
          else {
            pppppppiVar28 = (int *******)0x19;
            if (((ulong)pppppiVar23 | 7) != 0x17) {
              pppppppiVar28 = (int *******)(((ulong)pppppiVar23 | 7) + 1);
            }
            pppppppiVar20 = pppppppiVar28;
            __Znwm();
            uStack_2e0 = (int *****)((ulong)pppppppiVar28 | 0x8000000000000000);
            uStack_2f0 = pppppppiVar20;
            pppppiStack_2e8 = pppppiVar23;
LAB_10b327fe0:
            _memmove(pppppppiVar20,plVar19,pppppiVar23);
            pppppppiVar28 = pppppppiVar20;
          }
          *(undefined1 *)((long)pppppppiVar28 + (long)pppppiVar23) = 0;
          pppppiVar9 = uStack_2e0;
          pppppiVar8 = pppppiStack_2e8;
          pppppppiVar20 = uStack_2f0;
          pppppiVar11 = (int *****)((ulong)uStack_2e0 >> 0x38);
          pppppiVar23 = pppppiStack_2e8;
          pppppppiVar28 = uStack_2f0;
          if (-1 < (long)uStack_2e0) {
            pppppiVar23 = pppppiVar11;
            pppppppiVar28 = (int *******)&uStack_2f0;
          }
          pppppppiVar21 = pppppppiVar28;
          _memchr(pppppppiVar28,0,pppppiVar23);
          if ((pppppppiVar21 != (int *******)0x0) &&
             (pppppiVar23 = (int *****)((long)pppppppiVar21 - (long)pppppppiVar28),
             pppppiVar23 != (int *****)0xffffffffffffffff)) {
            if ((long)pppppiVar9 < 0) {
              pppppiVar11 = pppppiVar23;
              if (pppppiVar8 < pppppiVar23) goto LAB_10b3281c4;
            }
            else {
              if (pppppiVar11 < pppppiVar23) goto LAB_10b3281c4;
              uStack_2e0 = (int *****)CONCAT17((char)pppppiVar23,(undefined7)uStack_2e0);
              pppppppiVar20 = (int *******)&uStack_2f0;
              pppppiVar11 = pppppiStack_2e8;
            }
            pppppiStack_2e8 = pppppiVar11;
            *(undefined1 *)((long)pppppppiVar20 + (long)pppppiVar23) = 0;
          }
          uVar24 = uStack_218;
          plVar17 = plStack_220;
          uVar25 = uStack_218;
          if (uStack_208 != 0) {
            uVar25 = uStack_208;
          }
          uVar27 = uVar25 - 1;
          uStack_208 = uVar27;
          if (uStack_218 < uVar27) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281d8);
            (*pcVar12)();
          }
          if (uStack_218 < uVar25) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281e4);
            (*pcVar12)();
          }
          if (uVar25 == 0x8000000000000000) goto LAB_10b3281c8;
          if (*(char *)((long)(plStack_220 + uVar27 * 3) + 0x17) < '\0') {
            __ZdlPv(plStack_220[uVar27 * 3]);
            uVar25 = 0;
            uVar2 = uStack_210;
            if (uVar24 != 0) {
              uVar25 = uVar24 - 1;
            }
          }
          else {
            uVar25 = 0;
            uVar2 = uStack_210;
            if (uStack_218 != 0) {
              uVar25 = uStack_218 - 1;
            }
          }
          uStack_210 = uVar2;
          if (3 < uVar25) {
            uVar3 = uVar24;
            if (uVar2 <= uVar27) {
              uVar3 = 0;
            }
            uVar3 = (uVar3 - uVar2) + uVar27;
            if (uVar3 <= uVar25 - uVar3) {
              uVar3 = uVar3 + (uVar3 >> 2);
              if (uVar3 < 4) {
                uVar3 = 3;
              }
              if (uVar3 < uVar25) {
                uVar24 = uVar3 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar24;
                if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
LAB_10b3281b8:
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10b3281bc);
                  (*pcVar12)();
                }
                plVar17 = (long *)(uVar24 * 0x18);
                _malloc();
                FUN_10b329684(&plStack_220,uVar2,uVar27,plVar17,uVar24,&uStack_210,&uStack_208);
                _free(plStack_220);
                plStack_220 = plVar17;
                uStack_218 = uVar24;
              }
            }
          }
          pppppppiVar28 = uStack_2f0;
          if (-1 < (long)uStack_2e0) {
            pppppppiVar28 = (int *******)&uStack_2f0;
          }
          _rmdir();
          if ((int)pppppppiVar28 == 0) {
            bVar14 = true;
          }
          else {
            ___error();
            bVar14 = *(int *)pppppppiVar28 == 2;
          }
          if ((long)uStack_2e0 < 0) {
            __ZdlPv(uStack_2f0);
          }
          bVar13 = (bool)(bVar13 & bVar14);
          uVar25 = uStack_208;
        } while (uStack_210 != uStack_208);
      }
      FUN_10b325c20(&ppppppiStack_170);
      _free(plVar17);
      goto LAB_10b327b28;
    }
    _unlink();
    ppppppiVar16 = ppppppiVar18;
    if ((int)ppppppiVar18 == 0) {
      bVar13 = true;
      goto LAB_10b327b28;
    }
  }
  ___error();
  bVar13 = *(int *)ppppppiVar16 == 2;
LAB_10b327b28:
  func_0x000107c2ce2c(&uStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar13;
  }
LAB_10b3281c0:
  ___stack_chk_fail();
LAB_10b3281c4:
  func_0x000104c03f14();
LAB_10b3281c8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(0,0x10b3281cc);
  (*pcVar12)();
}



/* Entry: 10b32820c; end: 10b328367;  */

/* WARNING: Type propagation algorithm not settling */

int ******* FUN_10b32820c(uint *param_1,long *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined *******pppppppuVar2;
  undefined *******pppppppuVar3;
  char cVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  code *pcVar7;
  uint *puVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  int *******pppppppiVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 *extraout_x8;
  int *******pppppppiVar19;
  undefined8 *extraout_x8_00;
  int *******pppppppiVar20;
  int iVar21;
  undefined ********ppppppppuVar22;
  int *******pppppppiVar23;
  undefined ********ppppppppuVar24;
  int *******pppppppiVar25;
  undefined *******unaff_x24;
  undefined ********unaff_x25;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 *puStack_688;
  int ******ppppppiStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_628;
  int *******pppppppiStack_620;
  undefined ********ppppppppuStack_618;
  undefined ********ppppppppuStack_610;
  undefined1 ***pppuStack_600;
  code *pcStack_5f8;
  int *******pppppppiStack_5f0;
  int *******pppppppiStack_5e8;
  undefined8 uStack_5e0;
  int *******pppppppiStack_5d8;
  int *******pppppppiStack_5d0;
  undefined8 uStack_5c8;
  int ******ppppppiStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *******pppppppuStack_568;
  undefined *******pppppppuStack_560;
  undefined *******pppppppuStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined *puStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined ********ppppppppuStack_518;
  undefined *******pppppppuStack_510;
  undefined ********ppppppppuStack_508;
  undefined8 uStack_500;
  undefined ********ppppppppuStack_4f8;
  long *plStack_4f0;
  int *******pppppppiStack_4e8;
  undefined1 **ppuStack_4e0;
  code *pcStack_4d8;
  ulong uStack_4d0;
  uint uStack_4c4;
  int *******pppppppiStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined ********ppppppppuStack_4a0;
  undefined *******pppppppuStack_498;
  undefined *******pppppppuStack_490;
  undefined ********ppppppppuStack_480;
  undefined *******pppppppuStack_478;
  undefined *******pppppppuStack_470;
  undefined8 uStack_460;
  undefined *******pppppppuStack_458;
  undefined *******pppppppuStack_450;
  undefined *******pppppppuStack_448;
  undefined *******pppppppuStack_440;
  undefined *******pppppppuStack_438;
  undefined *******pppppppuStack_430;
  undefined *******pppppppuStack_428;
  undefined *******pppppppuStack_420;
  undefined *******pppppppuStack_418;
  undefined *******pppppppuStack_410;
  undefined *******pppppppuStack_408;
  undefined *******pppppppuStack_400;
  undefined *******pppppppuStack_3f8;
  undefined *******pppppppuStack_3f0;
  undefined *******pppppppuStack_3e8;
  undefined *******pppppppuStack_3e0;
  undefined *******pppppppuStack_3d8;
  undefined ********ppppppppuStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined ********ppppppppuStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [32];
  undefined1 *puStack_378;
  undefined *******pppppppuStack_370;
  uint5 uStack_368;
  undefined3 uStack_363;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined ********ppppppppuStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *******pppppppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *******pppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined *******pppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined *******pppppppuStack_208;
  undefined *******pppppppuStack_200;
  undefined *******pppppppuStack_1f8;
  undefined *******pppppppuStack_1f0;
  undefined *******pppppppuStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined *******pppppppuStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined *******pppppppuStack_1c8;
  undefined *******pppppppuStack_1c0;
  undefined *******pppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined *******pppppppuStack_1a0;
  undefined *******pppppppuStack_198;
  undefined *******pppppppuStack_190;
  undefined *******pppppppuStack_180;
  uint5 uStack_178;
  undefined3 uStack_173;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 *puStack_98;
  undefined *******pppppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  pppppppuStack_90 = (undefined *******)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(auStack_b8,&UNK_10f745506,&UNK_10f7454e2,0x161);
  uVar15 = 0;
  uVar16 = 0;
  func_0x000107c2ce28(&pppppppuStack_90,auStack_b8);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_98 = auStack_b8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_98);
  }
  puVar8 = *(uint **)param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar8 = param_1;
  }
  plVar13 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar13 = param_2;
  }
  _rename();
  iVar21 = (int)puVar8;
  if ((param_3 != (undefined4 *)0x0) && (iVar21 != 0)) {
    ___error();
    plVar13 = (long *)(ulong)*puVar8;
    uVar17 = *puVar8 - 1;
    if ((uVar17 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
      uVar18 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar17 * 4);
    }
    else {
      func_0x000107c2cbcc(&UNK_10f745488);
      uVar18 = 0xffffffff;
    }
    *param_3 = uVar18;
  }
  ppppppppuVar9 = &pppppppuStack_90;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (int *******)(ulong)(iVar21 == 0);
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b328368;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_248 = 0xaaaaaaaaaaaaaaaa;
  uStack_250 = 0xaaaaaaaaaaaaaaaa;
  uStack_238 = 0xaaaaaaaaaaaaaaaa;
  uStack_240 = 0xaaaaaaaaaaaaaaaa;
  uStack_268 = 0xaaaaaaaaaaaaaaaa;
  uStack_270 = 0xaaaaaaaaaaaaaaaa;
  uStack_258 = 0xaaaaaaaaaaaaaaaa;
  uStack_260 = 0xaaaaaaaaaaaaaaaa;
  uStack_278 = 0xaaaaaaaaaaaaaaaa;
  pppppppuStack_280 = (undefined *******)0xaaaaaaaaaaaaaaaa;
  ppppppppuVar24 = (undefined ********)&ppppppppuStack_330;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c2cb24(&ppppppppuStack_330,&UNK_10f7455b7,&UNK_10f7454e2,0x8a);
  ppppppppuVar22 = (undefined ********)&ppppppppuStack_330;
  func_0x000107c2ce28(&pppppppuStack_280,ppppppppuVar22,0,0);
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    if (-1 < *(char *)((long)ppppppppuVar9 + 0x17)) goto LAB_10b328438;
LAB_10b328408:
    if (ppppppppuVar9[1] < (undefined *******)0x400) goto LAB_10b328438;
    pppppppiVar20 = (int *******)0x0;
  }
  else {
    ppppppppuVar22 = (undefined ********)&uStack_230;
    uStack_230 = ppppppppuVar24;
    func_0x00010b32059c(&UNK_10f74523a);
    if (*(char *)((long)ppppppppuVar9 + 0x17) < '\0') goto LAB_10b328408;
LAB_10b328438:
    uStack_3a8 = -0x5555555555555556;
    uStack_3a0 = -0x5555555555555556;
    ppppppppuStack_3b0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
    if (*(char *)((long)plVar13 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppppppuStack_3b0,*plVar13,plVar13[1]);
    }
    else {
      uStack_3a8 = plVar13[1];
      ppppppppuStack_3b0 = (undefined ********)*plVar13;
      uStack_3a0 = plVar13[2];
    }
    uStack_2f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_300 = 0xaaaaaaaaaaaaaaaa;
    uStack_2e8 = 0xaaaaaaaaaaaaaaaa;
    lStack_2f0 = -0x5555555555555556;
    uStack_318 = 0xaaaaaaaaaaaaaaaa;
    uStack_320 = 0xaaaaaaaaaaaaaaaa;
    uStack_308 = 0xaaaaaaaaaaaaaaaa;
    uStack_310 = 0xaaaaaaaaaaaaaaaa;
    uStack_328 = 0xaaaaaaaaaaaaaaaa;
    ppppppppuStack_330 = (undefined ********)0xaaaaaaaaaaaaaaaa;
    func_0x000107c2cb24(&uStack_230,&UNK_10f745512,&UNK_10f7454e2,0x1ae);
    func_0x000107c2ce28(&ppppppppuStack_330,&uStack_230,0,0);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      uStack_460 = (undefined ********)&uStack_230;
      func_0x00010b32059c(&UNK_10f74523a,&uStack_460);
    }
    ppppppppuVar24 = ppppppppuStack_3b0;
    if (-1 < (long)uStack_3a0) {
      ppppppppuVar24 = (undefined ********)&ppppppppuStack_3b0;
    }
    _access(ppppppppuVar24,0);
    func_0x000107c2ce2c(&ppppppppuStack_330);
    if ((int)ppppppppuVar24 == 0) {
      ppppppppuVar22 = (undefined ********)&ppppppppuStack_3b0;
      FUN_10b3278c8(&ppppppppuStack_330);
      if ((long)uStack_3a0 < 0) {
        __ZdlPv(ppppppppuStack_3b0);
      }
      uVar17 = (uint)(char)(uStack_320 >> 0x38);
      uStack_3a0 = uStack_320;
      ppppppppuStack_3b0 = ppppppppuStack_330;
      uStack_3a8 = uStack_328;
      uVar12 = uStack_328;
      if (-1 < (int)uVar17) {
        uVar12 = uStack_320 >> 0x38;
      }
joined_r0x00010b328674:
      if (uVar12 != 0) goto LAB_10b32854c;
LAB_10b328678:
      pppppppiVar20 = (int *******)0x0;
      if ((uVar17 >> 7 & 1) == 0) goto LAB_10b3285f0;
    }
    else {
      func_0x000107c2cab4(&uStack_230,&ppppppppuStack_3b0);
      ppppppppuVar22 = (undefined ********)&uStack_230;
      FUN_10b3278c8(&ppppppppuStack_330);
      if ((long)uStack_3a0 < 0) {
        __ZdlPv(ppppppppuStack_3b0);
      }
      uVar12 = uStack_320;
      uStack_3a8 = uStack_328;
      ppppppppuStack_3b0 = ppppppppuStack_330;
      uStack_3a0 = uStack_320;
      uStack_320 = uStack_320 & 0xffffffffffffff;
      ppppppppuStack_330 = (undefined ********)((ulong)ppppppppuStack_330 & 0xffffffffffffff00);
      if ((long)pppppppuStack_220 < 0) {
        __ZdlPv(uStack_230);
        uVar17 = (uint)(char)uStack_3a0._7_1_;
        uVar12 = uStack_3a8;
        if (-1 < (int)uVar17) {
          uVar12 = (ulong)uStack_3a0._7_1_;
        }
        goto joined_r0x00010b328674;
      }
      uStack_3a0._7_1_ = (byte)(uVar12 >> 0x38);
      uVar17 = (uint)(char)uStack_3a0._7_1_;
      uVar1 = uStack_328;
      if (-1 < (int)uVar17) {
        uVar1 = (ulong)uStack_3a0._7_1_;
      }
      uStack_3a0 = uVar12;
      if (uVar1 == 0) goto LAB_10b328678;
LAB_10b32854c:
      uStack_3c0 = 0xaaaaaaaaaaaaaaaa;
      uStack_3b8 = 0xaaaaaaaaaaaaaaaa;
      ppppppppuStack_3c8 = (undefined ********)0xaaaaaaaaaaaaaaaa;
      ppppppppuVar22 = ppppppppuVar9;
      FUN_10b3278c8(&ppppppppuStack_3c8);
      uVar12 = uStack_3c0;
      if (-1 < (long)uStack_3b8) {
        uVar12 = uStack_3b8 >> 0x38;
      }
      if (uVar12 == 0) {
LAB_10b3285d4:
        pppppppiVar20 = (int *******)0x0;
      }
      else {
        uVar1 = uStack_3a8;
        if (-1 < (long)uStack_3a0) {
          uVar1 = uStack_3a0 >> 0x38;
        }
        if (uVar1 == uVar12) {
          ppppppppuVar22 = ppppppppuStack_3b0;
          if (-1 < (long)uStack_3a0) {
            ppppppppuVar22 = (undefined ********)&ppppppppuStack_3b0;
          }
          iVar21 = (int)ppppppppuVar22;
          ppppppppuVar22 = ppppppppuStack_3c8;
          if (-1 < (long)uStack_3b8) {
            ppppppppuVar22 = (undefined ********)&ppppppppuStack_3c8;
          }
          _memcmp();
          if (iVar21 == 0) goto LAB_10b3285d4;
        }
        ppppppppuVar10 = (undefined ********)&ppppppppuStack_3c8;
        ppppppppuVar22 = (undefined ********)&ppppppppuStack_3b0;
        FUN_10b2efc40(ppppppppuVar10,ppppppppuVar22,0);
        if (((ulong)ppppppppuVar10 & 1) != 0) goto LAB_10b3285d4;
        uVar18 = 0x13;
        if ((int)uVar15 == 0) {
          uVar18 = 0x11;
        }
        uStack_2a8 = 0xaaaaaaaaaaaaaaaa;
        uStack_2b0 = 0xaaaaaaaaaaaaaaaa;
        uStack_298 = 0xaaaaaaaaaaaaaaaa;
        uStack_2a0 = 0xaaaaaaaaaaaaaaaa;
        uStack_288 = 0xaaaaaaaaaaaaaaaa;
        uStack_290 = 0xaaaaaaaaaaaaaaaa;
        uStack_2e8 = 0xaaaaaaaaaaaaaaaa;
        lStack_2f0 = -0x5555555555555556;
        uStack_2d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_2e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_2c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_2d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_2b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_2c0 = 0xaaaaaaaaaaaaaaaa;
        uStack_328 = 0xaaaaaaaaaaaaaaaa;
        ppppppppuStack_330 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        uStack_318 = 0xaaaaaaaaaaaaaaaa;
        uStack_320 = 0xaaaaaaaaaaaaaaaa;
        uStack_308 = 0xaaaaaaaaaaaaaaaa;
        uStack_310 = 0xaaaaaaaaaaaaaaaa;
        uStack_2f8 = 0xaaaaaaaaffffffff;
        uStack_300 = 0xaaaaaaaaaaaaaaaa;
        pppppppuStack_228 = (undefined *******)0x0;
        uStack_230 = (undefined ********)0x0;
        pppppppuStack_220 = (undefined *******)0x0;
        FUN_10b3258ac(&ppppppppuStack_330,ppppppppuVar9,uVar15,uVar18,&uStack_230,0,0);
        pppppppuStack_3e8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3f0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3d8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3e0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_408 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_410 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3f8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_400 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_428 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_430 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_418 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_420 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_448 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_450 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_438 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_440 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_458 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        uStack_460 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_478 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_470 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        ppppppppuStack_480 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        if (*(char *)((long)ppppppppuVar9 + 0x17) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_480,*ppppppppuVar9,ppppppppuVar9[1]);
          ppppppppuVar24 = (undefined ********)*ppppppppuVar9;
          if (-1 < *(char *)((long)ppppppppuVar9 + 0x17)) {
            ppppppppuVar24 = ppppppppuVar9;
          }
        }
        else {
          pppppppuStack_478 = ppppppppuVar9[1];
          ppppppppuStack_480 = (undefined ********)*ppppppppuVar9;
          pppppppuStack_470 = ppppppppuVar9[2];
          ppppppppuVar24 = ppppppppuVar9;
        }
        pppppppuStack_1f8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_200 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_1e8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_1f0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_218 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_220 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_208 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_210 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_228 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        uStack_230 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        unaff_x24 = (undefined *******)&pppppppuStack_180;
        func_0x000107c2cb24(&pppppppuStack_180,&UNK_10f7454bc,&UNK_10f74542c,0x251);
        func_0x000107c2ce28(&uStack_230,&pppppppuStack_180,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          pppppppuStack_370 = unaff_x24;
          func_0x00010b32059c(&UNK_10f74523a,&pppppppuStack_370);
        }
        ppppppppuVar22 = (undefined ********)&uStack_460;
        _stat();
        func_0x000107c2ce2c(&uStack_230);
        if ((int)ppppppppuVar24 < 0) {
          pppppppiVar20 = (int *******)0x0;
        }
        else {
          pppppppuStack_498 = (undefined *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_490 = (undefined *******)0xaaaaaaaaaaaaaaaa;
          ppppppppuStack_4a0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
          if (*(char *)((long)ppppppppuVar9 + 0x17) < '\0') {
            func_0x000107c3192c(&ppppppppuStack_4a0,*ppppppppuVar9,ppppppppuVar9[1]);
          }
          else {
            pppppppuStack_498 = ppppppppuVar9[1];
            ppppppppuStack_4a0 = (undefined ********)*ppppppppuVar9;
            pppppppuStack_490 = ppppppppuVar9[2];
          }
          if (((int)uVar15 != 0) && (plVar11 = plVar13, func_0x000107c2cfa8(), (int)plVar11 != 0)) {
            func_0x000107c2cab4(&uStack_230,ppppppppuVar9);
            if ((long)pppppppuStack_490 < 0) {
              __ZdlPv(ppppppppuStack_4a0);
            }
            pppppppuStack_498 = pppppppuStack_228;
            ppppppppuStack_4a0 = uStack_230;
            pppppppuStack_490 = pppppppuStack_220;
          }
          uStack_4c4 = 0xa01;
          if ((int)uVar16 == 0) {
            uStack_4c4 = 0x605;
          }
          unaff_x24 = (undefined *******)&uStack_230;
          uVar15 = 0xaaaaaaaaaaaaaaaa;
          ppppppppuVar9 = (undefined ********)&ppppppppuStack_4a0;
          ppppppppuVar24 = (undefined ********)0xa8;
LAB_10b328894:
          lStack_4b8 = -0x5555555555555556;
          lStack_4b0 = -0x5555555555555556;
          pppppppiStack_4c0 = (int *******)0xaaaaaaaaaaaaaaaa;
          if (*(char *)((long)plVar13 + 0x17) < '\0') {
            func_0x000107c3192c(&pppppppiStack_4c0,*plVar13,plVar13[1]);
          }
          else {
            lStack_4b8 = plVar13[1];
            pppppppiStack_4c0 = (int *******)*plVar13;
            lStack_4b0 = plVar13[2];
          }
          pppppppuVar3 = pppppppuStack_498;
          if (-1 < (long)pppppppuStack_490) {
            pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_490 >> 0x38);
          }
          pppppppuVar2 = pppppppuStack_478;
          if (-1 < (long)pppppppuStack_470) {
            pppppppuVar2 = (undefined *******)((ulong)pppppppuStack_470 >> 0x38);
          }
          if (pppppppuVar3 != pppppppuVar2) {
LAB_10b328914:
            ppppppppuVar10 = (undefined ********)&ppppppppuStack_4a0;
            ppppppppuVar22 = (undefined ********)&ppppppppuStack_480;
            FUN_10b2efc40(ppppppppuVar10,ppppppppuVar22,&pppppppiStack_4c0);
            if ((int)ppppppppuVar10 != 0) goto LAB_10b328928;
LAB_10b328c28:
            if (lStack_4b0 < 0) {
              __ZdlPv(pppppppiStack_4c0);
            }
            pppppppiVar20 = (int *******)0x0;
            goto LAB_10b328c3c;
          }
          ppppppppuVar22 = ppppppppuStack_4a0;
          if (-1 < (long)pppppppuStack_490) {
            ppppppppuVar22 = ppppppppuVar9;
          }
          iVar21 = (int)ppppppppuVar22;
          ppppppppuVar22 = ppppppppuStack_480;
          if (-1 < (long)pppppppuStack_470) {
            ppppppppuVar22 = (undefined ********)&ppppppppuStack_480;
          }
          _memcmp();
          if (iVar21 != 0) goto LAB_10b328914;
LAB_10b328928:
          uVar17 = uStack_460._4_2_ & 0xf000;
          if (uVar17 == 0x8000) {
            uStack_340 = 0xaaaaaaaaaaaaaaaa;
            uStack_358 = 0xaaaaaaaaaaaaaaaa;
            uStack_360 = 0xaaaaaaaaaaaaaaaa;
            uStack_348 = 0xaaaaaaaaaaaaaaaa;
            uStack_350 = 0xaaaaaaaaaaaaaaaa;
            _uStack_368 = 0xaaaaaaaaaaaaaaaa;
            pppppppuStack_370 = (undefined *******)0xaaaaaaaaaaaaaaaa;
            ppppppppuVar10 = ppppppppuStack_480;
            if (-1 < (long)pppppppuStack_470) {
              ppppppppuVar10 = (undefined ********)&ppppppppuStack_480;
            }
            ppppppppuVar22 = (undefined ********)0x4;
            _open();
            pppppppuStack_370 = (undefined *******)&PTR_FUN_110cd4978;
            uStack_368 = (uint5)(uint)ppppppppuVar10;
            uStack_358 = 0;
            uStack_350 = 0;
            uStack_360 = 0;
            uStack_348 = uStack_348 & 0xffffffff;
            uStack_340 = uStack_340 & 0xffffffffffff0000;
            if ((uint)ppppppppuVar10 != 0xffffffff) {
              pppppppuStack_1b8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1c0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1a8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1b0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1d8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1e0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1c8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1d0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1f8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_200 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1e8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_1f0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_218 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_220 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_208 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_210 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_228 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              uStack_230 = (undefined ********)0xaaaaaaaaaaaaaaaa;
              uStack_148 = 0xaaaaaaaaaaaaaaaa;
              uStack_150 = 0xaaaaaaaaaaaaaaaa;
              uStack_138 = 0xaaaaaaaaaaaaaaaa;
              uStack_140 = 0xaaaaaaaaaaaaaaaa;
              uStack_168 = 0xaaaaaaaaaaaaaaaa;
              uStack_170 = 0xaaaaaaaaaaaaaaaa;
              uStack_158 = 0xaaaaaaaaaaaaaaaa;
              uStack_160 = 0xaaaaaaaaaaaaaaaa;
              _uStack_178 = 0xaaaaaaaaaaaaaaaa;
              pppppppuStack_180 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              func_0x000107c2cb24(auStack_398,&UNK_10f7454c1,&UNK_10f74542c,0x255);
              func_0x000107c2ce28(&pppppppuStack_180,auStack_398,0,0);
              if ((bRam000000011336f9a8 & 0x19) != 0) {
                puStack_378 = auStack_398;
                func_0x00010b32059c(&UNK_10f74523a,&puStack_378);
              }
              ppppppppuVar22 = (undefined ********)&uStack_230;
              _fstat();
              func_0x000107c2ce2c(&pppppppuStack_180);
              unaff_x25 = ppppppppuVar10;
              if (-1 < (int)ppppppppuVar10) {
                if (-0x7001 < (short)uStack_230._4_2_) {
LAB_10b328bbc:
                  func_0x000107c2ca9c(&pppppppuStack_370);
                  goto joined_r0x00010b328bc8;
                }
                uStack_4d0 = (ulong)(uStack_230._4_2_ & 0x7f | 0x180);
                uStack_150 = 0xaaaaaaaaaaaaaaaa;
                uStack_168 = 0xaaaaaaaaaaaaaaaa;
                uStack_170 = 0xaaaaaaaaaaaaaaaa;
                uStack_158 = 0xaaaaaaaaaaaaaaaa;
                uStack_160 = 0xaaaaaaaaaaaaaaaa;
                _uStack_178 = 0xaaaaaaaaaaaaaaaa;
                pppppppuStack_180 = (undefined *******)0xaaaaaaaaaaaaaaaa;
                pppppppiVar20 = pppppppiStack_4c0;
                if (-1 < lStack_4b0) {
                  pppppppiVar20 = (int *******)&pppppppiStack_4c0;
                }
                uVar17 = (uint)pppppppiVar20;
                ppppppppuVar22 = (undefined ********)(ulong)uStack_4c4;
                _open();
                pppppppuStack_180 = (undefined *******)&PTR_FUN_110cd4978;
                uStack_178 = (uint5)uVar17;
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_170 = 0;
                uStack_158 = uStack_158 & 0xffffffff;
                uStack_150 = uStack_150 & 0xffffffffffff0000;
                if (uVar17 != 0xffffffff) {
                  uVar12 = 0;
                  ppppppppuVar22 = &pppppppuStack_180;
                  FUN_10b2f151c();
                  if ((uVar12 & 1) != 0) {
                    func_0x000107c2ca9c(&pppppppuStack_180);
                    goto LAB_10b328bbc;
                  }
                }
                func_0x000107c2ca9c(&pppppppuStack_180);
              }
            }
            func_0x000107c2ca9c(&pppppppuStack_370);
            goto LAB_10b328c28;
          }
          if (uVar17 == 0x4000) {
            pppppppiVar20 = pppppppiStack_4c0;
            if (-1 < lStack_4b0) {
              pppppppiVar20 = (int *******)&pppppppiStack_4c0;
            }
            ppppppppuVar22 = (undefined ********)(ulong)(uStack_460._4_2_ & 0x3ff | 0x1c0);
            _mkdir();
            if (((int)pppppppiVar20 != 0) &&
               ((___error(), (uVar16 & 1) != 0 || (*(int *)pppppppiVar20 != 0x11))))
            goto LAB_10b328c28;
          }
joined_r0x00010b328bc8:
          if (lStack_4b0 < 0) {
            __ZdlPv(pppppppiStack_4c0);
            FUN_10b325d00(&uStack_230,&ppppppppuStack_330);
          }
          else {
            FUN_10b325d00(&uStack_230,&ppppppppuStack_330);
          }
          if ((long)pppppppuStack_470 < 0) {
            __ZdlPv(ppppppppuStack_480);
          }
          pppppppuStack_470 = pppppppuStack_220;
          pppppppuStack_478 = pppppppuStack_228;
          ppppppppuStack_480 = uStack_230;
          pppppppuVar3 = pppppppuStack_228;
          if (-1 < (long)pppppppuStack_220) {
            pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_220 >> 0x38);
          }
          if (pppppppuVar3 != (undefined *******)0x0) {
            ppppppppuVar22 = ppppppppuStack_330 + lStack_2f0 * 0x15;
            pppppppuStack_228 = ppppppppuVar22[1];
            uStack_230 = (undefined ********)*ppppppppuVar22;
            pppppppuStack_1f8 = ppppppppuVar22[7];
            pppppppuStack_200 = ppppppppuVar22[6];
            pppppppuStack_1e8 = ppppppppuVar22[9];
            pppppppuStack_1f0 = ppppppppuVar22[8];
            pppppppuStack_218 = ppppppppuVar22[3];
            pppppppuStack_220 = ppppppppuVar22[2];
            pppppppuStack_208 = ppppppppuVar22[5];
            pppppppuStack_210 = ppppppppuVar22[4];
            pppppppuStack_1b8 = ppppppppuVar22[0xf];
            pppppppuStack_1c0 = ppppppppuVar22[0xe];
            pppppppuStack_1a8 = ppppppppuVar22[0x11];
            pppppppuStack_1b0 = ppppppppuVar22[0x10];
            pppppppuStack_1d8 = ppppppppuVar22[0xb];
            pppppppuStack_1e0 = ppppppppuVar22[10];
            pppppppuStack_1c8 = ppppppppuVar22[0xd];
            pppppppuStack_1d0 = ppppppppuVar22[0xc];
            if (*(char *)((long)ppppppppuVar22 + 0xa7) < '\0') {
              func_0x000107c3192c(&pppppppuStack_1a0,ppppppppuVar22[0x12],ppppppppuVar22[0x13]);
            }
            else {
              pppppppuStack_198 = ppppppppuVar22[0x13];
              pppppppuStack_1a0 = ppppppppuVar22[0x12];
              pppppppuStack_190 = ppppppppuVar22[0x14];
            }
            pppppppuStack_3f8 = pppppppuStack_1c8;
            pppppppuStack_400 = pppppppuStack_1d0;
            pppppppuStack_3e8 = pppppppuStack_1b8;
            pppppppuStack_3f0 = pppppppuStack_1c0;
            pppppppuStack_3d8 = pppppppuStack_1a8;
            pppppppuStack_3e0 = pppppppuStack_1b0;
            pppppppuStack_438 = pppppppuStack_208;
            pppppppuStack_440 = pppppppuStack_210;
            pppppppuStack_428 = pppppppuStack_1f8;
            pppppppuStack_430 = pppppppuStack_200;
            pppppppuStack_418 = pppppppuStack_1e8;
            pppppppuStack_420 = pppppppuStack_1f0;
            pppppppuStack_408 = pppppppuStack_1d8;
            pppppppuStack_410 = pppppppuStack_1e0;
            pppppppuStack_458 = pppppppuStack_228;
            uStack_460 = uStack_230;
            pppppppuStack_448 = pppppppuStack_218;
            pppppppuStack_450 = pppppppuStack_220;
            if ((long)pppppppuStack_190 < 0) {
              __ZdlPv(pppppppuStack_1a0);
            }
            goto LAB_10b328894;
          }
          pppppppiVar20 = (int *******)0x1;
LAB_10b328c3c:
          if ((long)pppppppuStack_490 < 0) {
            __ZdlPv(ppppppppuStack_4a0);
          }
        }
        if ((long)pppppppuStack_470 < 0) {
          __ZdlPv(ppppppppuStack_480);
        }
        FUN_10b325c20(&ppppppppuStack_330);
      }
      if ((long)uStack_3b8 < 0) {
        __ZdlPv(ppppppppuStack_3c8);
      }
      if (-1 < (long)uStack_3a0) goto LAB_10b3285f0;
    }
    __ZdlPv(ppppppppuStack_3b0);
  }
LAB_10b3285f0:
  ppppppppuVar10 = &pppppppuStack_280;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return pppppppiVar20;
  }
  ___stack_chk_fail();
  uStack_520 = 0x11336f000;
  pcStack_4d8 = FUN_10b328cb4;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_588 = 0xaaaaaaaaaaaaaaaa;
  uStack_590 = 0xaaaaaaaaaaaaaaaa;
  uStack_578 = 0xaaaaaaaaaaaaaaaa;
  uStack_580 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_598 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b8 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_5c0 = (int ******)0xaaaaaaaaaaaaaaaa;
  ppppppppuStack_518 = unaff_x25;
  pppppppuStack_510 = unaff_x24;
  ppppppppuStack_508 = ppppppppuVar24;
  uStack_500 = uVar15;
  ppppppppuStack_4f8 = ppppppppuVar9;
  plStack_4f0 = plVar13;
  pppppppiStack_4e8 = pppppppiVar20;
  ppuStack_4e0 = &puStack_d0;
  func_0x000107c2cb24(&pppppppuStack_568,&UNK_10f74552d,&UNK_10f7454e2,0x1d8);
  func_0x000107c2ce28(&ppppppiStack_5c0,&pppppppuStack_568,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pppppppiStack_5d8 = (int *******)&pppppppuStack_568;
    func_0x00010b32059c(&UNK_10f74523a,&pppppppiStack_5d8);
  }
  pppppppuStack_568 = (undefined *******)&UNK_10f745552;
  pppppppuStack_560 = (undefined *******)0x1;
  pppppppuStack_558 = (undefined *******)&UNK_10f7456b9;
  uStack_550 = 0x15;
  puStack_548 = &UNK_10f745552;
  uStack_540 = 1;
  puStack_538 = &UNK_10f745574;
  uStack_530 = 6;
  pppppppiStack_5d8 = (int *******)0x0;
  pppppppiStack_5d0 = (int *******)0x0;
  uStack_5c8 = 0;
  pppppppiVar20 = (int *******)&pppppppiStack_5d8;
  pppppppiVar14 = (int *******)0x4;
  func_0x000107c2cc20(pppppppiVar20,4,&pppppppuStack_568);
  uStack_5e0 = uStack_5c8;
  uVar16 = uStack_5e0;
  pppppppiStack_5e8 = pppppppiStack_5d0;
  pppppppiStack_5f0 = pppppppiStack_5d8;
  uStack_5e0._7_1_ = (char)(uStack_5c8 >> 0x38);
  pppppppiVar25 = pppppppiStack_5d8;
  if (-1 < (long)uStack_5e0._7_1_) {
    pppppppiVar25 = (int *******)&pppppppiStack_5f0;
  }
  pppppppiVar23 = pppppppiStack_5d0;
  if (-1 < (long)uStack_5c8) {
    pppppppiVar23 = (int *******)(long)uStack_5e0._7_1_;
  }
  uStack_5e0 = uVar16;
  if (pppppppiVar23 < (int *******)0x7ffffffffffffff8) {
    if (pppppppiVar23 < (int *******)0x17) {
      uStack_5c8 = CONCAT17((char)pppppppiVar23,(undefined7)uStack_5c8);
      pppppppiVar14 = (int *******)&pppppppiStack_5d8;
      if (pppppppiVar23 != (int *******)0x0) goto LAB_10b328e08;
    }
    else {
      pppppppiVar20 = (int *******)0x19;
      if (((ulong)pppppppiVar23 | 7) != 0x17) {
        pppppppiVar20 = (int *******)(((ulong)pppppppiVar23 | 7) + 1);
      }
      pppppppiVar14 = pppppppiVar20;
      __Znwm();
      uStack_5c8 = (ulong)pppppppiVar20 | 0x8000000000000000;
      pppppppiStack_5d8 = pppppppiVar14;
      pppppppiStack_5d0 = pppppppiVar23;
LAB_10b328e08:
      _memmove(pppppppiVar14,pppppppiVar25,pppppppiVar23);
    }
    *(undefined1 *)((long)pppppppiVar14 + (long)pppppppiVar23) = 0;
    uVar16 = uStack_5c8;
    pppppppiVar5 = pppppppiStack_5d0;
    pppppppiVar25 = pppppppiStack_5d8;
    pppppppiVar6 = (int *******)(uStack_5c8 >> 0x38);
    pppppppiVar19 = pppppppiStack_5d0;
    pppppppiVar23 = pppppppiStack_5d8;
    if (-1 < (long)uStack_5c8) {
      pppppppiVar19 = pppppppiVar6;
      pppppppiVar23 = (int *******)&pppppppiStack_5d8;
    }
    pppppppiVar14 = (int *******)0x0;
    pppppppiVar20 = pppppppiVar23;
    _memchr(pppppppiVar23,0,pppppppiVar19);
    if ((pppppppiVar20 != (int *******)0x0) &&
       (pppppppiVar19 = (int *******)((long)pppppppiVar20 - (long)pppppppiVar23),
       pppppppiVar19 != (int *******)0xffffffffffffffff)) {
      if ((long)uVar16 < 0) {
        pppppppiVar6 = pppppppiVar19;
        if (pppppppiVar5 < pppppppiVar19) goto LAB_10b328f98;
      }
      else {
        if (pppppppiVar6 < pppppppiVar19) goto LAB_10b328f98;
        uStack_5c8 = CONCAT17((char)pppppppiVar19,(undefined7)uStack_5c8);
        pppppppiVar25 = (int *******)&pppppppiStack_5d8;
        pppppppiVar6 = pppppppiStack_5d0;
      }
      pppppppiStack_5d0 = pppppppiVar6;
      *(undefined1 *)((long)pppppppiVar25 + (long)pppppppiVar19) = 0;
    }
    if ((long)uStack_5e0 < 0) {
      __ZdlPv(pppppppiStack_5f0);
    }
    pppppppiVar14 = pppppppiStack_5d8;
    if (-1 < (long)uStack_5c8._7_1_) {
      pppppppiVar14 = (int *******)&pppppppiStack_5d8;
    }
    pppppppiVar20 = pppppppiStack_5d0;
    if (-1 < (long)uStack_5c8) {
      pppppppiVar20 = (int *******)(long)uStack_5c8._7_1_;
    }
    func_0x000107c2cabc(&pppppppuStack_568,ppppppppuVar10,pppppppiVar14,pppppppiVar20);
    if (*(char *)((long)ppppppppuVar22 + 0x17) < '\0') {
      __ZdlPv(*ppppppppuVar22);
    }
    ppppppppuVar22[1] = pppppppuStack_560;
    *ppppppppuVar22 = pppppppuStack_568;
    ppppppppuVar22[2] = pppppppuStack_558;
    pppppppuStack_558 = (undefined *******)((ulong)pppppppuStack_558 & 0xffffffffffffff);
    pppppppuStack_568 = (undefined *******)((ulong)pppppppuStack_568 & 0xffffffffffffff00);
    if ((long)uStack_5c8 < 0) {
      __ZdlPv(pppppppiStack_5d8);
      cVar4 = *(char *)((long)ppppppppuVar22 + 0x17);
    }
    else {
      cVar4 = *(char *)((long)ppppppppuVar22 + 0x17);
    }
    if (cVar4 < '\0') {
      ppppppppuVar22 = (undefined ********)*ppppppppuVar22;
    }
    do {
      ppppppppuVar10 = ppppppppuVar22;
      _mkstemp();
      if ((int)ppppppppuVar10 != -1) break;
      ppppppppuVar9 = ppppppppuVar10;
      ___error();
    } while (*(int *)ppppppppuVar9 == 4);
    *extraout_x8 = &PTR_FUN_110cd4978;
    *(int *)(extraout_x8 + 1) = (int)ppppppppuVar10;
    *(undefined1 *)((long)extraout_x8 + 0xc) = 0;
    pppppppiVar20 = &ppppppiStack_5c0;
    func_0x000107c2ce2c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return pppppppiVar20;
    }
  }
  else {
    FUN_10b2ecf74();
  }
  ___stack_chk_fail();
LAB_10b328f98:
  func_0x000104c03f14();
  pcStack_5f8 = FUN_10b328f9c;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_648 = 0xaaaaaaaaaaaaaaaa;
  uStack_650 = 0xaaaaaaaaaaaaaaaa;
  uStack_638 = 0xaaaaaaaaaaaaaaaa;
  uStack_640 = 0xaaaaaaaaaaaaaaaa;
  uStack_668 = 0xaaaaaaaaaaaaaaaa;
  uStack_670 = 0xaaaaaaaaaaaaaaaa;
  uStack_658 = 0xaaaaaaaaaaaaaaaa;
  uStack_660 = 0xaaaaaaaaaaaaaaaa;
  uStack_678 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_680 = (int ******)0xaaaaaaaaaaaaaaaa;
  pppppppiStack_620 = pppppppiVar23;
  ppppppppuStack_618 = ppppppppuVar10;
  ppppppppuStack_610 = ppppppppuVar22;
  pppuStack_600 = &ppuStack_4e0;
  func_0x000107c2cb24(&uStack_6a8,&UNK_10f745554,&UNK_10f7454e2,0x26a);
  func_0x000107c2ce28(&ppppppiStack_680,&uStack_6a8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_688 = &uStack_6a8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_688);
  }
  uStack_6a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_6a0 = 0xaaaaaaaaaaaaaaaa;
  FUN_10b328cb4(&uStack_6a8,pppppppiVar20,pppppppiVar14);
  if ((int)uStack_6a0 == -1) {
    ___error();
    uVar17 = *(int *)pppppppiVar20 - 1;
    if ((uVar17 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
      uVar18 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar17 * 4);
      iVar21 = -1;
    }
    else {
      func_0x000107c2cbcc(&UNK_10f745488);
      iVar21 = -1;
      uVar18 = 0xffffffff;
    }
  }
  else {
    uVar18 = 0;
    iVar21 = (int)uStack_6a0;
  }
  *extraout_x8_00 = &PTR_FUN_110cd4978;
  *(int *)(extraout_x8_00 + 1) = iVar21;
  *(undefined1 *)((long)extraout_x8_00 + 0xc) = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[2] = 0;
  *(undefined4 *)((long)extraout_x8_00 + 0x2c) = uVar18;
  *(undefined2 *)(extraout_x8_00 + 6) = 0;
  if (uStack_6a0._4_1_ != '\x01') {
    pppppppiVar20 = &ppppppiStack_680;
    func_0x000107c2ce2c(pppppppiVar20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return pppppppiVar20;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0,0x10b329120);
  (*pcVar7)();
}



/* Entry: 10b328368; end: 10b328cb3;  */

/* WARNING: Type propagation algorithm not settling */

int ******* FUN_10b328368(undefined ********param_1,long *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined *******pppppppuVar2;
  undefined *******pppppppuVar3;
  char cVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  code *pcVar7;
  undefined ********ppppppppuVar8;
  long *plVar9;
  ulong uVar10;
  int *******pppppppiVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *extraout_x8;
  int *******pppppppiVar15;
  undefined8 *extraout_x8_00;
  int *******pppppppiVar16;
  undefined ********ppppppppuVar17;
  int *******pppppppiVar18;
  undefined ********ppppppppuVar19;
  int *******pppppppiVar20;
  undefined *******unaff_x24;
  undefined ********unaff_x25;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 *puStack_5c8;
  int ******ppppppiStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_568;
  int *******pppppppiStack_560;
  undefined ********ppppppppuStack_558;
  undefined ********ppppppppuStack_550;
  undefined1 **ppuStack_540;
  code *pcStack_538;
  int *******pppppppiStack_530;
  int *******pppppppiStack_528;
  undefined8 uStack_520;
  int *******pppppppiStack_518;
  int *******pppppppiStack_510;
  undefined8 uStack_508;
  int ******ppppppiStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *******pppppppuStack_4a8;
  undefined *******pppppppuStack_4a0;
  undefined *******pppppppuStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined ********ppppppppuStack_458;
  undefined *******pppppppuStack_450;
  undefined ********ppppppppuStack_448;
  undefined8 uStack_440;
  undefined ********ppppppppuStack_438;
  long *plStack_430;
  int *******pppppppiStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  ulong uStack_410;
  uint uStack_404;
  int *******pppppppiStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined ********ppppppppuStack_3e0;
  undefined *******pppppppuStack_3d8;
  undefined *******pppppppuStack_3d0;
  undefined ********ppppppppuStack_3c0;
  undefined *******pppppppuStack_3b8;
  undefined *******pppppppuStack_3b0;
  undefined8 uStack_3a0;
  undefined *******pppppppuStack_398;
  undefined *******pppppppuStack_390;
  undefined *******pppppppuStack_388;
  undefined *******pppppppuStack_380;
  undefined *******pppppppuStack_378;
  undefined *******pppppppuStack_370;
  undefined *******pppppppuStack_368;
  undefined *******pppppppuStack_360;
  undefined *******pppppppuStack_358;
  undefined *******pppppppuStack_350;
  undefined *******pppppppuStack_348;
  undefined *******pppppppuStack_340;
  undefined *******pppppppuStack_338;
  undefined *******pppppppuStack_330;
  undefined *******pppppppuStack_328;
  undefined *******pppppppuStack_320;
  undefined *******pppppppuStack_318;
  undefined ********ppppppppuStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined ********ppppppppuStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [32];
  undefined1 *puStack_2b8;
  undefined *******pppppppuStack_2b0;
  uint5 uStack_2a8;
  undefined3 uStack_2a3;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined ********ppppppppuStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *******pppppppuStack_168;
  undefined *******pppppppuStack_160;
  undefined *******pppppppuStack_158;
  undefined *******pppppppuStack_150;
  undefined *******pppppppuStack_148;
  undefined *******pppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined *******pppppppuStack_120;
  undefined *******pppppppuStack_118;
  undefined *******pppppppuStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined *******pppppppuStack_f0;
  undefined *******pppppppuStack_e8;
  undefined *******pppppppuStack_e0;
  undefined *******pppppppuStack_d8;
  undefined *******pppppppuStack_d0;
  undefined *******pppppppuStack_c0;
  uint5 uStack_b8;
  undefined3 uStack_b3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  pppppppuStack_1c0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
  ppppppppuVar19 = (undefined ********)&ppppppppuStack_270;
  func_0x000107c2cb24(&ppppppppuStack_270,&UNK_10f7455b7,&UNK_10f7454e2,0x8a);
  ppppppppuVar17 = (undefined ********)&ppppppppuStack_270;
  func_0x000107c2ce28(&pppppppuStack_1c0,ppppppppuVar17,0,0);
  if ((bRam000000011336f9a8 & 0x19) == 0) {
    if (-1 < *(char *)((long)param_1 + 0x17)) goto LAB_10b328438;
LAB_10b328408:
    if (param_1[1] < (undefined *******)0x400) goto LAB_10b328438;
    pppppppiVar16 = (int *******)0x0;
  }
  else {
    ppppppppuVar17 = (undefined ********)&uStack_170;
    uStack_170 = ppppppppuVar19;
    func_0x00010b32059c(&UNK_10f74523a);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_10b328408;
LAB_10b328438:
    uStack_2e8 = -0x5555555555555556;
    uStack_2e0 = -0x5555555555555556;
    ppppppppuStack_2f0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppppppuStack_2f0,*param_2,param_2[1]);
    }
    else {
      uStack_2e8 = param_2[1];
      ppppppppuStack_2f0 = (undefined ********)*param_2;
      uStack_2e0 = param_2[2];
    }
    uStack_238 = 0xaaaaaaaaaaaaaaaa;
    uStack_240 = 0xaaaaaaaaaaaaaaaa;
    uStack_228 = 0xaaaaaaaaaaaaaaaa;
    lStack_230 = -0x5555555555555556;
    uStack_258 = 0xaaaaaaaaaaaaaaaa;
    uStack_260 = 0xaaaaaaaaaaaaaaaa;
    uStack_248 = 0xaaaaaaaaaaaaaaaa;
    uStack_250 = 0xaaaaaaaaaaaaaaaa;
    uStack_268 = 0xaaaaaaaaaaaaaaaa;
    ppppppppuStack_270 = (undefined ********)0xaaaaaaaaaaaaaaaa;
    func_0x000107c2cb24(&uStack_170,&UNK_10f745512,&UNK_10f7454e2,0x1ae);
    func_0x000107c2ce28(&ppppppppuStack_270,&uStack_170,0,0);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      uStack_3a0 = (undefined ********)&uStack_170;
      func_0x00010b32059c(&UNK_10f74523a,&uStack_3a0);
    }
    ppppppppuVar19 = ppppppppuStack_2f0;
    if (-1 < (long)uStack_2e0) {
      ppppppppuVar19 = (undefined ********)&ppppppppuStack_2f0;
    }
    _access(ppppppppuVar19,0);
    func_0x000107c2ce2c(&ppppppppuStack_270);
    if ((int)ppppppppuVar19 == 0) {
      ppppppppuVar17 = (undefined ********)&ppppppppuStack_2f0;
      FUN_10b3278c8(&ppppppppuStack_270);
      if ((long)uStack_2e0 < 0) {
        __ZdlPv(ppppppppuStack_2f0);
      }
      uVar12 = (uint)(char)(uStack_260 >> 0x38);
      uStack_2e0 = uStack_260;
      ppppppppuStack_2f0 = ppppppppuStack_270;
      uStack_2e8 = uStack_268;
      uVar10 = uStack_268;
      if (-1 < (int)uVar12) {
        uVar10 = uStack_260 >> 0x38;
      }
joined_r0x00010b328674:
      if (uVar10 != 0) goto LAB_10b32854c;
LAB_10b328678:
      pppppppiVar16 = (int *******)0x0;
      if ((uVar12 >> 7 & 1) == 0) goto LAB_10b3285f0;
    }
    else {
      func_0x000107c2cab4(&uStack_170,&ppppppppuStack_2f0);
      ppppppppuVar17 = (undefined ********)&uStack_170;
      FUN_10b3278c8(&ppppppppuStack_270);
      if ((long)uStack_2e0 < 0) {
        __ZdlPv(ppppppppuStack_2f0);
      }
      uVar10 = uStack_260;
      uStack_2e8 = uStack_268;
      ppppppppuStack_2f0 = ppppppppuStack_270;
      uStack_2e0 = uStack_260;
      uStack_260 = uStack_260 & 0xffffffffffffff;
      ppppppppuStack_270 = (undefined ********)((ulong)ppppppppuStack_270 & 0xffffffffffffff00);
      if ((long)pppppppuStack_160 < 0) {
        __ZdlPv(uStack_170);
        uVar12 = (uint)(char)uStack_2e0._7_1_;
        uVar10 = uStack_2e8;
        if (-1 < (int)uVar12) {
          uVar10 = (ulong)uStack_2e0._7_1_;
        }
        goto joined_r0x00010b328674;
      }
      uStack_2e0._7_1_ = (byte)(uVar10 >> 0x38);
      uVar12 = (uint)(char)uStack_2e0._7_1_;
      uVar1 = uStack_268;
      if (-1 < (int)uVar12) {
        uVar1 = (ulong)uStack_2e0._7_1_;
      }
      uStack_2e0 = uVar10;
      if (uVar1 == 0) goto LAB_10b328678;
LAB_10b32854c:
      uStack_300 = 0xaaaaaaaaaaaaaaaa;
      uStack_2f8 = 0xaaaaaaaaaaaaaaaa;
      ppppppppuStack_308 = (undefined ********)0xaaaaaaaaaaaaaaaa;
      ppppppppuVar17 = param_1;
      FUN_10b3278c8(&ppppppppuStack_308);
      uVar10 = uStack_300;
      if (-1 < (long)uStack_2f8) {
        uVar10 = uStack_2f8 >> 0x38;
      }
      if (uVar10 == 0) {
LAB_10b3285d4:
        pppppppiVar16 = (int *******)0x0;
      }
      else {
        uVar1 = uStack_2e8;
        if (-1 < (long)uStack_2e0) {
          uVar1 = uStack_2e0 >> 0x38;
        }
        if (uVar1 == uVar10) {
          ppppppppuVar17 = ppppppppuStack_2f0;
          if (-1 < (long)uStack_2e0) {
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_2f0;
          }
          iVar14 = (int)ppppppppuVar17;
          ppppppppuVar17 = ppppppppuStack_308;
          if (-1 < (long)uStack_2f8) {
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_308;
          }
          _memcmp();
          if (iVar14 == 0) goto LAB_10b3285d4;
        }
        ppppppppuVar8 = (undefined ********)&ppppppppuStack_308;
        ppppppppuVar17 = (undefined ********)&ppppppppuStack_2f0;
        FUN_10b2efc40(ppppppppuVar8,ppppppppuVar17,0);
        if (((ulong)ppppppppuVar8 & 1) != 0) goto LAB_10b3285d4;
        uVar13 = 0x13;
        if ((int)param_3 == 0) {
          uVar13 = 0x11;
        }
        uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_228 = 0xaaaaaaaaaaaaaaaa;
        lStack_230 = -0x5555555555555556;
        uStack_218 = 0xaaaaaaaaaaaaaaaa;
        uStack_220 = 0xaaaaaaaaaaaaaaaa;
        uStack_208 = 0xaaaaaaaaaaaaaaaa;
        uStack_210 = 0xaaaaaaaaaaaaaaaa;
        uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_200 = 0xaaaaaaaaaaaaaaaa;
        uStack_268 = 0xaaaaaaaaaaaaaaaa;
        ppppppppuStack_270 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        uStack_258 = 0xaaaaaaaaaaaaaaaa;
        uStack_260 = 0xaaaaaaaaaaaaaaaa;
        uStack_248 = 0xaaaaaaaaaaaaaaaa;
        uStack_250 = 0xaaaaaaaaaaaaaaaa;
        uStack_238 = 0xaaaaaaaaffffffff;
        uStack_240 = 0xaaaaaaaaaaaaaaaa;
        pppppppuStack_168 = (undefined *******)0x0;
        uStack_170 = (undefined ********)0x0;
        pppppppuStack_160 = (undefined *******)0x0;
        FUN_10b3258ac(&ppppppppuStack_270,param_1,param_3,uVar13,&uStack_170,0,0);
        pppppppuStack_328 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_330 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_318 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_320 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_348 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_350 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_338 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_340 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_368 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_370 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_358 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_360 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_388 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_390 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_378 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_380 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_398 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        uStack_3a0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3b8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_3b0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        ppppppppuStack_3c0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_3c0,*param_1,param_1[1]);
          ppppppppuVar19 = (undefined ********)*param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            ppppppppuVar19 = param_1;
          }
        }
        else {
          pppppppuStack_3b8 = param_1[1];
          ppppppppuStack_3c0 = (undefined ********)*param_1;
          pppppppuStack_3b0 = param_1[2];
          ppppppppuVar19 = param_1;
        }
        pppppppuStack_138 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_140 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_128 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_130 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_158 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_160 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_148 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_150 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_168 = (undefined *******)0xaaaaaaaaaaaaaaaa;
        uStack_170 = (undefined ********)0xaaaaaaaaaaaaaaaa;
        unaff_x24 = (undefined *******)&pppppppuStack_c0;
        func_0x000107c2cb24(&pppppppuStack_c0,&UNK_10f7454bc,&UNK_10f74542c,0x251);
        func_0x000107c2ce28(&uStack_170,&pppppppuStack_c0,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          pppppppuStack_2b0 = unaff_x24;
          func_0x00010b32059c(&UNK_10f74523a,&pppppppuStack_2b0);
        }
        ppppppppuVar17 = (undefined ********)&uStack_3a0;
        _stat();
        func_0x000107c2ce2c(&uStack_170);
        if ((int)ppppppppuVar19 < 0) {
          pppppppiVar16 = (int *******)0x0;
        }
        else {
          pppppppuStack_3d8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_3d0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
          ppppppppuStack_3e0 = (undefined ********)0xaaaaaaaaaaaaaaaa;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            func_0x000107c3192c(&ppppppppuStack_3e0,*param_1,param_1[1]);
          }
          else {
            pppppppuStack_3d8 = param_1[1];
            ppppppppuStack_3e0 = (undefined ********)*param_1;
            pppppppuStack_3d0 = param_1[2];
          }
          if (((int)param_3 != 0) && (plVar9 = param_2, func_0x000107c2cfa8(), (int)plVar9 != 0)) {
            func_0x000107c2cab4(&uStack_170,param_1);
            if ((long)pppppppuStack_3d0 < 0) {
              __ZdlPv(ppppppppuStack_3e0);
            }
            pppppppuStack_3d8 = pppppppuStack_168;
            ppppppppuStack_3e0 = uStack_170;
            pppppppuStack_3d0 = pppppppuStack_160;
          }
          uStack_404 = 0xa01;
          if (param_4 == 0) {
            uStack_404 = 0x605;
          }
          unaff_x24 = (undefined *******)&uStack_170;
          param_3 = 0xaaaaaaaaaaaaaaaa;
          param_1 = (undefined ********)&ppppppppuStack_3e0;
          ppppppppuVar19 = (undefined ********)0xa8;
LAB_10b328894:
          lStack_3f8 = -0x5555555555555556;
          lStack_3f0 = -0x5555555555555556;
          pppppppiStack_400 = (int *******)0xaaaaaaaaaaaaaaaa;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&pppppppiStack_400,*param_2,param_2[1]);
          }
          else {
            lStack_3f8 = param_2[1];
            pppppppiStack_400 = (int *******)*param_2;
            lStack_3f0 = param_2[2];
          }
          pppppppuVar3 = pppppppuStack_3d8;
          if (-1 < (long)pppppppuStack_3d0) {
            pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_3d0 >> 0x38);
          }
          pppppppuVar2 = pppppppuStack_3b8;
          if (-1 < (long)pppppppuStack_3b0) {
            pppppppuVar2 = (undefined *******)((ulong)pppppppuStack_3b0 >> 0x38);
          }
          if (pppppppuVar3 != pppppppuVar2) {
LAB_10b328914:
            ppppppppuVar8 = (undefined ********)&ppppppppuStack_3e0;
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_3c0;
            FUN_10b2efc40(ppppppppuVar8,ppppppppuVar17,&pppppppiStack_400);
            if ((int)ppppppppuVar8 != 0) goto LAB_10b328928;
LAB_10b328c28:
            if (lStack_3f0 < 0) {
              __ZdlPv(pppppppiStack_400);
            }
            pppppppiVar16 = (int *******)0x0;
            goto LAB_10b328c3c;
          }
          ppppppppuVar17 = ppppppppuStack_3e0;
          if (-1 < (long)pppppppuStack_3d0) {
            ppppppppuVar17 = param_1;
          }
          iVar14 = (int)ppppppppuVar17;
          ppppppppuVar17 = ppppppppuStack_3c0;
          if (-1 < (long)pppppppuStack_3b0) {
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_3c0;
          }
          _memcmp();
          if (iVar14 != 0) goto LAB_10b328914;
LAB_10b328928:
          uVar12 = uStack_3a0._4_2_ & 0xf000;
          if (uVar12 == 0x8000) {
            uStack_280 = 0xaaaaaaaaaaaaaaaa;
            uStack_298 = 0xaaaaaaaaaaaaaaaa;
            uStack_2a0 = 0xaaaaaaaaaaaaaaaa;
            uStack_288 = 0xaaaaaaaaaaaaaaaa;
            uStack_290 = 0xaaaaaaaaaaaaaaaa;
            _uStack_2a8 = 0xaaaaaaaaaaaaaaaa;
            pppppppuStack_2b0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
            ppppppppuVar8 = ppppppppuStack_3c0;
            if (-1 < (long)pppppppuStack_3b0) {
              ppppppppuVar8 = (undefined ********)&ppppppppuStack_3c0;
            }
            ppppppppuVar17 = (undefined ********)0x4;
            _open();
            pppppppuStack_2b0 = (undefined *******)&PTR_FUN_110cd4978;
            uStack_2a8 = (uint5)(uint)ppppppppuVar8;
            uStack_298 = 0;
            uStack_290 = 0;
            uStack_2a0 = 0;
            uStack_288 = uStack_288 & 0xffffffff;
            uStack_280 = uStack_280 & 0xffffffffffff0000;
            if ((uint)ppppppppuVar8 != 0xffffffff) {
              pppppppuStack_f8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_100 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_e8 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_f0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_118 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_120 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_108 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_110 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_138 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_140 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_128 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_130 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_158 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_160 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_148 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_150 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_168 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              uStack_170 = (undefined ********)0xaaaaaaaaaaaaaaaa;
              uStack_88 = 0xaaaaaaaaaaaaaaaa;
              uStack_90 = 0xaaaaaaaaaaaaaaaa;
              uStack_78 = 0xaaaaaaaaaaaaaaaa;
              uStack_80 = 0xaaaaaaaaaaaaaaaa;
              uStack_a8 = 0xaaaaaaaaaaaaaaaa;
              uStack_b0 = 0xaaaaaaaaaaaaaaaa;
              uStack_98 = 0xaaaaaaaaaaaaaaaa;
              uStack_a0 = 0xaaaaaaaaaaaaaaaa;
              _uStack_b8 = 0xaaaaaaaaaaaaaaaa;
              pppppppuStack_c0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
              func_0x000107c2cb24(auStack_2d8,&UNK_10f7454c1,&UNK_10f74542c,0x255);
              func_0x000107c2ce28(&pppppppuStack_c0,auStack_2d8,0,0);
              if ((bRam000000011336f9a8 & 0x19) != 0) {
                puStack_2b8 = auStack_2d8;
                func_0x00010b32059c(&UNK_10f74523a,&puStack_2b8);
              }
              ppppppppuVar17 = (undefined ********)&uStack_170;
              _fstat();
              func_0x000107c2ce2c(&pppppppuStack_c0);
              unaff_x25 = ppppppppuVar8;
              if (-1 < (int)ppppppppuVar8) {
                if (-0x7001 < (short)uStack_170._4_2_) {
LAB_10b328bbc:
                  func_0x000107c2ca9c(&pppppppuStack_2b0);
                  goto joined_r0x00010b328bc8;
                }
                uStack_410 = (ulong)(uStack_170._4_2_ & 0x7f | 0x180);
                uStack_90 = 0xaaaaaaaaaaaaaaaa;
                uStack_a8 = 0xaaaaaaaaaaaaaaaa;
                uStack_b0 = 0xaaaaaaaaaaaaaaaa;
                uStack_98 = 0xaaaaaaaaaaaaaaaa;
                uStack_a0 = 0xaaaaaaaaaaaaaaaa;
                _uStack_b8 = 0xaaaaaaaaaaaaaaaa;
                pppppppuStack_c0 = (undefined *******)0xaaaaaaaaaaaaaaaa;
                pppppppiVar16 = pppppppiStack_400;
                if (-1 < lStack_3f0) {
                  pppppppiVar16 = (int *******)&pppppppiStack_400;
                }
                uVar12 = (uint)pppppppiVar16;
                ppppppppuVar17 = (undefined ********)(ulong)uStack_404;
                _open();
                pppppppuStack_c0 = (undefined *******)&PTR_FUN_110cd4978;
                uStack_b8 = (uint5)uVar12;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b0 = 0;
                uStack_98 = uStack_98 & 0xffffffff;
                uStack_90 = uStack_90 & 0xffffffffffff0000;
                if (uVar12 != 0xffffffff) {
                  uVar10 = 0;
                  ppppppppuVar17 = &pppppppuStack_c0;
                  FUN_10b2f151c();
                  if ((uVar10 & 1) != 0) {
                    func_0x000107c2ca9c(&pppppppuStack_c0);
                    goto LAB_10b328bbc;
                  }
                }
                func_0x000107c2ca9c(&pppppppuStack_c0);
              }
            }
            func_0x000107c2ca9c(&pppppppuStack_2b0);
            goto LAB_10b328c28;
          }
          if (uVar12 == 0x4000) {
            pppppppiVar16 = pppppppiStack_400;
            if (-1 < lStack_3f0) {
              pppppppiVar16 = (int *******)&pppppppiStack_400;
            }
            ppppppppuVar17 = (undefined ********)(ulong)(uStack_3a0._4_2_ & 0x3ff | 0x1c0);
            _mkdir();
            if (((int)pppppppiVar16 != 0) &&
               ((___error(), (param_4 & 1) != 0 || (*(int *)pppppppiVar16 != 0x11))))
            goto LAB_10b328c28;
          }
joined_r0x00010b328bc8:
          if (lStack_3f0 < 0) {
            __ZdlPv(pppppppiStack_400);
            FUN_10b325d00(&uStack_170,&ppppppppuStack_270);
          }
          else {
            FUN_10b325d00(&uStack_170,&ppppppppuStack_270);
          }
          if ((long)pppppppuStack_3b0 < 0) {
            __ZdlPv(ppppppppuStack_3c0);
          }
          pppppppuStack_3b0 = pppppppuStack_160;
          pppppppuStack_3b8 = pppppppuStack_168;
          ppppppppuStack_3c0 = uStack_170;
          pppppppuVar3 = pppppppuStack_168;
          if (-1 < (long)pppppppuStack_160) {
            pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_160 >> 0x38);
          }
          if (pppppppuVar3 != (undefined *******)0x0) {
            ppppppppuVar17 = ppppppppuStack_270 + lStack_230 * 0x15;
            pppppppuStack_168 = ppppppppuVar17[1];
            uStack_170 = (undefined ********)*ppppppppuVar17;
            pppppppuStack_138 = ppppppppuVar17[7];
            pppppppuStack_140 = ppppppppuVar17[6];
            pppppppuStack_128 = ppppppppuVar17[9];
            pppppppuStack_130 = ppppppppuVar17[8];
            pppppppuStack_158 = ppppppppuVar17[3];
            pppppppuStack_160 = ppppppppuVar17[2];
            pppppppuStack_148 = ppppppppuVar17[5];
            pppppppuStack_150 = ppppppppuVar17[4];
            pppppppuStack_f8 = ppppppppuVar17[0xf];
            pppppppuStack_100 = ppppppppuVar17[0xe];
            pppppppuStack_e8 = ppppppppuVar17[0x11];
            pppppppuStack_f0 = ppppppppuVar17[0x10];
            pppppppuStack_118 = ppppppppuVar17[0xb];
            pppppppuStack_120 = ppppppppuVar17[10];
            pppppppuStack_108 = ppppppppuVar17[0xd];
            pppppppuStack_110 = ppppppppuVar17[0xc];
            if (*(char *)((long)ppppppppuVar17 + 0xa7) < '\0') {
              func_0x000107c3192c(&pppppppuStack_e0,ppppppppuVar17[0x12],ppppppppuVar17[0x13]);
            }
            else {
              pppppppuStack_d8 = ppppppppuVar17[0x13];
              pppppppuStack_e0 = ppppppppuVar17[0x12];
              pppppppuStack_d0 = ppppppppuVar17[0x14];
            }
            pppppppuStack_338 = pppppppuStack_108;
            pppppppuStack_340 = pppppppuStack_110;
            pppppppuStack_328 = pppppppuStack_f8;
            pppppppuStack_330 = pppppppuStack_100;
            pppppppuStack_318 = pppppppuStack_e8;
            pppppppuStack_320 = pppppppuStack_f0;
            pppppppuStack_378 = pppppppuStack_148;
            pppppppuStack_380 = pppppppuStack_150;
            pppppppuStack_368 = pppppppuStack_138;
            pppppppuStack_370 = pppppppuStack_140;
            pppppppuStack_358 = pppppppuStack_128;
            pppppppuStack_360 = pppppppuStack_130;
            pppppppuStack_348 = pppppppuStack_118;
            pppppppuStack_350 = pppppppuStack_120;
            pppppppuStack_398 = pppppppuStack_168;
            uStack_3a0 = uStack_170;
            pppppppuStack_388 = pppppppuStack_158;
            pppppppuStack_390 = pppppppuStack_160;
            if ((long)pppppppuStack_d0 < 0) {
              __ZdlPv(pppppppuStack_e0);
            }
            goto LAB_10b328894;
          }
          pppppppiVar16 = (int *******)0x1;
LAB_10b328c3c:
          if ((long)pppppppuStack_3d0 < 0) {
            __ZdlPv(ppppppppuStack_3e0);
          }
        }
        if ((long)pppppppuStack_3b0 < 0) {
          __ZdlPv(ppppppppuStack_3c0);
        }
        FUN_10b325c20(&ppppppppuStack_270);
      }
      if ((long)uStack_2f8 < 0) {
        __ZdlPv(ppppppppuStack_308);
      }
      if (-1 < (long)uStack_2e0) goto LAB_10b3285f0;
    }
    __ZdlPv(ppppppppuStack_2f0);
  }
LAB_10b3285f0:
  ppppppppuVar8 = &pppppppuStack_1c0;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppiVar16;
  }
  ___stack_chk_fail();
  uStack_460 = 0x11336f000;
  pcStack_418 = FUN_10b328cb4;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4f8 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_500 = (int ******)0xaaaaaaaaaaaaaaaa;
  ppppppppuStack_458 = unaff_x25;
  pppppppuStack_450 = unaff_x24;
  ppppppppuStack_448 = ppppppppuVar19;
  uStack_440 = param_3;
  ppppppppuStack_438 = param_1;
  plStack_430 = param_2;
  pppppppiStack_428 = pppppppiVar16;
  puStack_420 = &stack0xfffffffffffffff0;
  func_0x000107c2cb24(&pppppppuStack_4a8,&UNK_10f74552d,&UNK_10f7454e2,0x1d8);
  func_0x000107c2ce28(&ppppppiStack_500,&pppppppuStack_4a8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pppppppiStack_518 = (int *******)&pppppppuStack_4a8;
    func_0x00010b32059c(&UNK_10f74523a,&pppppppiStack_518);
  }
  pppppppuStack_4a8 = (undefined *******)&UNK_10f745552;
  pppppppuStack_4a0 = (undefined *******)0x1;
  pppppppuStack_498 = (undefined *******)&UNK_10f7456b9;
  uStack_490 = 0x15;
  puStack_488 = &UNK_10f745552;
  uStack_480 = 1;
  puStack_478 = &UNK_10f745574;
  uStack_470 = 6;
  pppppppiStack_518 = (int *******)0x0;
  pppppppiStack_510 = (int *******)0x0;
  uStack_508 = 0;
  pppppppiVar16 = (int *******)&pppppppiStack_518;
  pppppppiVar11 = (int *******)0x4;
  func_0x000107c2cc20(pppppppiVar16,4,&pppppppuStack_4a8);
  uStack_520 = uStack_508;
  uVar10 = uStack_520;
  pppppppiStack_528 = pppppppiStack_510;
  pppppppiStack_530 = pppppppiStack_518;
  uStack_520._7_1_ = (char)(uStack_508 >> 0x38);
  pppppppiVar20 = pppppppiStack_518;
  if (-1 < (long)uStack_520._7_1_) {
    pppppppiVar20 = (int *******)&pppppppiStack_530;
  }
  pppppppiVar18 = pppppppiStack_510;
  if (-1 < (long)uStack_508) {
    pppppppiVar18 = (int *******)(long)uStack_520._7_1_;
  }
  uStack_520 = uVar10;
  if (pppppppiVar18 < (int *******)0x7ffffffffffffff8) {
    if (pppppppiVar18 < (int *******)0x17) {
      uStack_508 = CONCAT17((char)pppppppiVar18,(undefined7)uStack_508);
      pppppppiVar11 = (int *******)&pppppppiStack_518;
      if (pppppppiVar18 != (int *******)0x0) goto LAB_10b328e08;
    }
    else {
      pppppppiVar16 = (int *******)0x19;
      if (((ulong)pppppppiVar18 | 7) != 0x17) {
        pppppppiVar16 = (int *******)(((ulong)pppppppiVar18 | 7) + 1);
      }
      pppppppiVar11 = pppppppiVar16;
      __Znwm();
      uStack_508 = (ulong)pppppppiVar16 | 0x8000000000000000;
      pppppppiStack_518 = pppppppiVar11;
      pppppppiStack_510 = pppppppiVar18;
LAB_10b328e08:
      _memmove(pppppppiVar11,pppppppiVar20,pppppppiVar18);
    }
    *(undefined1 *)((long)pppppppiVar11 + (long)pppppppiVar18) = 0;
    uVar10 = uStack_508;
    pppppppiVar5 = pppppppiStack_510;
    pppppppiVar20 = pppppppiStack_518;
    pppppppiVar6 = (int *******)(uStack_508 >> 0x38);
    pppppppiVar15 = pppppppiStack_510;
    pppppppiVar18 = pppppppiStack_518;
    if (-1 < (long)uStack_508) {
      pppppppiVar15 = pppppppiVar6;
      pppppppiVar18 = (int *******)&pppppppiStack_518;
    }
    pppppppiVar11 = (int *******)0x0;
    pppppppiVar16 = pppppppiVar18;
    _memchr(pppppppiVar18,0,pppppppiVar15);
    if ((pppppppiVar16 != (int *******)0x0) &&
       (pppppppiVar15 = (int *******)((long)pppppppiVar16 - (long)pppppppiVar18),
       pppppppiVar15 != (int *******)0xffffffffffffffff)) {
      if ((long)uVar10 < 0) {
        pppppppiVar6 = pppppppiVar15;
        if (pppppppiVar5 < pppppppiVar15) goto LAB_10b328f98;
      }
      else {
        if (pppppppiVar6 < pppppppiVar15) goto LAB_10b328f98;
        uStack_508 = CONCAT17((char)pppppppiVar15,(undefined7)uStack_508);
        pppppppiVar20 = (int *******)&pppppppiStack_518;
        pppppppiVar6 = pppppppiStack_510;
      }
      pppppppiStack_510 = pppppppiVar6;
      *(undefined1 *)((long)pppppppiVar20 + (long)pppppppiVar15) = 0;
    }
    if ((long)uStack_520 < 0) {
      __ZdlPv(pppppppiStack_530);
    }
    pppppppiVar11 = pppppppiStack_518;
    if (-1 < (long)uStack_508._7_1_) {
      pppppppiVar11 = (int *******)&pppppppiStack_518;
    }
    pppppppiVar16 = pppppppiStack_510;
    if (-1 < (long)uStack_508) {
      pppppppiVar16 = (int *******)(long)uStack_508._7_1_;
    }
    func_0x000107c2cabc(&pppppppuStack_4a8,ppppppppuVar8,pppppppiVar11,pppppppiVar16);
    if (*(char *)((long)ppppppppuVar17 + 0x17) < '\0') {
      __ZdlPv(*ppppppppuVar17);
    }
    ppppppppuVar17[1] = pppppppuStack_4a0;
    *ppppppppuVar17 = pppppppuStack_4a8;
    ppppppppuVar17[2] = pppppppuStack_498;
    pppppppuStack_498 = (undefined *******)((ulong)pppppppuStack_498 & 0xffffffffffffff);
    pppppppuStack_4a8 = (undefined *******)((ulong)pppppppuStack_4a8 & 0xffffffffffffff00);
    if ((long)uStack_508 < 0) {
      __ZdlPv(pppppppiStack_518);
      cVar4 = *(char *)((long)ppppppppuVar17 + 0x17);
    }
    else {
      cVar4 = *(char *)((long)ppppppppuVar17 + 0x17);
    }
    if (cVar4 < '\0') {
      ppppppppuVar17 = (undefined ********)*ppppppppuVar17;
    }
    do {
      ppppppppuVar8 = ppppppppuVar17;
      _mkstemp();
      if ((int)ppppppppuVar8 != -1) break;
      ppppppppuVar19 = ppppppppuVar8;
      ___error();
    } while (*(int *)ppppppppuVar19 == 4);
    *extraout_x8 = &PTR_FUN_110cd4978;
    *(int *)(extraout_x8 + 1) = (int)ppppppppuVar8;
    *(undefined1 *)((long)extraout_x8 + 0xc) = 0;
    pppppppiVar16 = &ppppppiStack_500;
    func_0x000107c2ce2c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
      return pppppppiVar16;
    }
  }
  else {
    FUN_10b2ecf74();
  }
  ___stack_chk_fail();
LAB_10b328f98:
  func_0x000104c03f14();
  pcStack_538 = FUN_10b328f9c;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_588 = 0xaaaaaaaaaaaaaaaa;
  uStack_590 = 0xaaaaaaaaaaaaaaaa;
  uStack_578 = 0xaaaaaaaaaaaaaaaa;
  uStack_580 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_598 = 0xaaaaaaaaaaaaaaaa;
  uStack_5a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_5b8 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_5c0 = (int ******)0xaaaaaaaaaaaaaaaa;
  pppppppiStack_560 = pppppppiVar18;
  ppppppppuStack_558 = ppppppppuVar8;
  ppppppppuStack_550 = ppppppppuVar17;
  ppuStack_540 = &puStack_420;
  func_0x000107c2cb24(&uStack_5e8,&UNK_10f745554,&UNK_10f7454e2,0x26a);
  func_0x000107c2ce28(&ppppppiStack_5c0,&uStack_5e8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_5c8 = &uStack_5e8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_5c8);
  }
  uStack_5e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_5e0 = 0xaaaaaaaaaaaaaaaa;
  FUN_10b328cb4(&uStack_5e8,pppppppiVar16,pppppppiVar11);
  if ((int)uStack_5e0 == -1) {
    ___error();
    uVar12 = *(int *)pppppppiVar16 - 1;
    if ((uVar12 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
      uVar13 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar12 * 4);
      iVar14 = -1;
    }
    else {
      func_0x000107c2cbcc(&UNK_10f745488);
      iVar14 = -1;
      uVar13 = 0xffffffff;
    }
  }
  else {
    uVar13 = 0;
    iVar14 = (int)uStack_5e0;
  }
  *extraout_x8_00 = &PTR_FUN_110cd4978;
  *(int *)(extraout_x8_00 + 1) = iVar14;
  *(undefined1 *)((long)extraout_x8_00 + 0xc) = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[2] = 0;
  *(undefined4 *)((long)extraout_x8_00 + 0x2c) = uVar13;
  *(undefined2 *)(extraout_x8_00 + 6) = 0;
  if (uStack_5e0._4_1_ != '\x01') {
    pppppppiVar16 = &ppppppiStack_5c0;
    func_0x000107c2ce2c(pppppppiVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return pppppppiVar16;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0,0x10b329120);
  (*pcVar7)();
}



/* Entry: 10b328cb4; end: 10b328f9b;  */

void FUN_10b328cb4(undefined8 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  int ***pppiVar4;
  int ****ppppiVar5;
  code *pcVar6;
  int ****ppppiVar7;
  int *piVar8;
  int ****ppppiVar9;
  int iVar10;
  int ****ppppiVar11;
  undefined8 *extraout_x8;
  undefined4 uVar12;
  int ****ppppiVar13;
  int ****ppppiVar14;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  int ***pppiStack_150;
  int *piStack_148;
  int *piStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  int ***pppiStack_120;
  int ***pppiStack_118;
  undefined8 uStack_110;
  int ***pppiStack_108;
  int ***pppiStack_100;
  undefined8 uStack_f8;
  int **ppiStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int *piStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  ppiStack_f0 = (int **)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&piStack_98,&UNK_10f74552d,&UNK_10f7454e2,0x1d8);
  func_0x000107c2ce28(&ppiStack_f0,&piStack_98,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pppiStack_108 = (int ***)&piStack_98;
    func_0x00010b32059c(&UNK_10f74523a,&pppiStack_108);
  }
  piStack_98 = (int *)&UNK_10f745552;
  uStack_90 = 1;
  puStack_88 = &UNK_10f7456b9;
  uStack_80 = 0x15;
  puStack_78 = &UNK_10f745552;
  uStack_70 = 1;
  puStack_68 = &UNK_10f745574;
  uStack_60 = 6;
  pppiStack_108 = (int ***)0x0;
  pppiStack_100 = (int ***)0x0;
  uStack_f8 = 0;
  ppppiVar7 = &pppiStack_108;
  ppppiVar9 = (int ****)0x4;
  func_0x000107c2cc20(ppppiVar7,4,&piStack_98);
  uStack_110 = uStack_f8;
  uVar3 = uStack_110;
  pppiStack_118 = pppiStack_100;
  pppiStack_120 = pppiStack_108;
  uStack_110._7_1_ = (char)(uStack_f8 >> 0x38);
  ppppiVar14 = (int ****)pppiStack_108;
  if (-1 < (long)uStack_110._7_1_) {
    ppppiVar14 = &pppiStack_120;
  }
  ppppiVar13 = (int ****)pppiStack_100;
  if (-1 < (long)uStack_f8) {
    ppppiVar13 = (int ****)(long)uStack_110._7_1_;
  }
  uStack_110 = uVar3;
  if (ppppiVar13 < (int ****)0x7ffffffffffffff8) {
    if (ppppiVar13 < (int ****)0x17) {
      uStack_f8 = CONCAT17((char)ppppiVar13,(undefined7)uStack_f8);
      ppppiVar9 = &pppiStack_108;
      if (ppppiVar13 != (int ****)0x0) goto LAB_10b328e08;
    }
    else {
      ppppiVar7 = (int ****)0x19;
      if (((ulong)ppppiVar13 | 7) != 0x17) {
        ppppiVar7 = (int ****)(((ulong)ppppiVar13 | 7) + 1);
      }
      ppppiVar9 = ppppiVar7;
      __Znwm();
      uStack_f8 = (ulong)ppppiVar7 | 0x8000000000000000;
      pppiStack_108 = (int ***)ppppiVar9;
      pppiStack_100 = (int ***)ppppiVar13;
LAB_10b328e08:
      _memmove(ppppiVar9,ppppiVar14,ppppiVar13);
    }
    *(undefined1 *)((long)ppppiVar9 + (long)ppppiVar13) = 0;
    uVar3 = uStack_f8;
    pppiVar4 = pppiStack_100;
    ppppiVar14 = (int ****)pppiStack_108;
    ppppiVar5 = (int ****)(uStack_f8 >> 0x38);
    ppppiVar11 = (int ****)pppiStack_100;
    ppppiVar13 = (int ****)pppiStack_108;
    if (-1 < (long)uStack_f8) {
      ppppiVar11 = ppppiVar5;
      ppppiVar13 = &pppiStack_108;
    }
    ppppiVar9 = (int ****)0x0;
    ppppiVar7 = ppppiVar13;
    _memchr(ppppiVar13,0,ppppiVar11);
    if ((ppppiVar7 != (int ****)0x0) &&
       (ppppiVar11 = (int ****)((long)ppppiVar7 - (long)ppppiVar13),
       ppppiVar11 != (int ****)0xffffffffffffffff)) {
      if ((long)uVar3 < 0) {
        ppppiVar5 = ppppiVar11;
        if (pppiVar4 < ppppiVar11) goto LAB_10b328f98;
      }
      else {
        if (ppppiVar5 < ppppiVar11) goto LAB_10b328f98;
        uStack_f8 = CONCAT17((char)ppppiVar11,(undefined7)uStack_f8);
        ppppiVar14 = &pppiStack_108;
        ppppiVar5 = (int ****)pppiStack_100;
      }
      pppiStack_100 = (int ***)ppppiVar5;
      *(undefined1 *)((long)ppppiVar14 + (long)ppppiVar11) = 0;
    }
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppiStack_120);
    }
    ppppiVar9 = (int ****)pppiStack_108;
    if (-1 < (long)uStack_f8._7_1_) {
      ppppiVar9 = &pppiStack_108;
    }
    ppppiVar7 = (int ****)pppiStack_100;
    if (-1 < (long)uStack_f8) {
      ppppiVar7 = (int ****)(long)uStack_f8._7_1_;
    }
    func_0x000107c2cabc(&piStack_98,param_2,ppppiVar9,ppppiVar7);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __ZdlPv(*(undefined8 *)param_3);
    }
    *(undefined8 *)(param_3 + 2) = uStack_90;
    *(int **)param_3 = piStack_98;
    *(undefined **)(param_3 + 4) = puStack_88;
    puStack_88 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff);
    piStack_98 = (int *)((ulong)piStack_98 & 0xffffffffffffff00);
    if ((long)uStack_f8 < 0) {
      __ZdlPv(pppiStack_108);
      cVar1 = *(char *)((long)param_3 + 0x17);
    }
    else {
      cVar1 = *(char *)((long)param_3 + 0x17);
    }
    if (cVar1 < '\0') {
      param_3 = *(int **)param_3;
    }
    do {
      param_2 = param_3;
      _mkstemp();
      if ((int)param_2 != -1) break;
      piVar8 = param_2;
      ___error();
    } while (*piVar8 == 4);
    *param_1 = &PTR_FUN_110cd4978;
    *(int *)(param_1 + 1) = (int)param_2;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    ppppiVar7 = (int ****)&ppiStack_f0;
    func_0x000107c2ce2c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
    FUN_10b2ecf74();
  }
  ___stack_chk_fail();
LAB_10b328f98:
  func_0x000104c03f14();
  pcStack_128 = FUN_10b328f9c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  uStack_170 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  pppiStack_150 = (int ***)ppppiVar13;
  piStack_148 = param_2;
  piStack_140 = param_3;
  puStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c2cb24(&uStack_1d8,&UNK_10f745554,&UNK_10f7454e2,0x26a);
  func_0x000107c2ce28(&uStack_1b0,&uStack_1d8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_1b8 = &uStack_1d8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_1b8);
  }
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  FUN_10b328cb4(&uStack_1d8,ppppiVar7,ppppiVar9);
  if ((int)uStack_1d0 == -1) {
    ___error();
    uVar2 = *(int *)ppppiVar7 - 1;
    if ((uVar2 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uVar12 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar2 * 4);
      iVar10 = -1;
    }
    else {
      func_0x000107c2cbcc(&UNK_10f745488);
      iVar10 = -1;
      uVar12 = 0xffffffff;
    }
  }
  else {
    uVar12 = 0;
    iVar10 = (int)uStack_1d0;
  }
  *extraout_x8 = &PTR_FUN_110cd4978;
  *(int *)(extraout_x8 + 1) = iVar10;
  *(undefined1 *)((long)extraout_x8 + 0xc) = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)((long)extraout_x8 + 0x2c) = uVar12;
  *(undefined2 *)(extraout_x8 + 6) = 0;
  if (uStack_1d0._4_1_ != '\x01') {
    func_0x000107c2ce2c(&uStack_1b0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0,0x10b329120);
  (*pcVar6)();
}



/* Entry: 10b328f9c; end: 10b3293bf;  */

void FUN_10b328f9c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(&uStack_b8,&UNK_10f745554,&UNK_10f7454e2,0x26a);
  func_0x000107c2ce28(&uStack_90,&uStack_b8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_98 = &uStack_b8;
    func_0x00010b32059c(&UNK_10f74523a,&puStack_98);
  }
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  FUN_10b328cb4(&uStack_b8,param_2,param_3);
  if ((int)uStack_b0 == -1) {
    ___error();
    uVar1 = *param_2 - 1;
    if ((uVar1 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar4 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar1 * 4);
      iVar3 = -1;
    }
    else {
      func_0x000107c2cbcc(&UNK_10f745488);
      iVar3 = -1;
      uVar4 = 0xffffffff;
    }
  }
  else {
    uVar4 = 0;
    iVar3 = (int)uStack_b0;
  }
  *param_1 = &PTR_FUN_110cd4978;
  *(int *)(param_1 + 1) = iVar3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar4;
  *(undefined2 *)(param_1 + 6) = 0;
  if (uStack_b0._4_1_ != '\x01') {
    func_0x000107c2ce2c(&uStack_90);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329120);
  (*pcVar2)();
}



/* Entry: 10b3293c0; end: 10b329683;  */

long * FUN_10b3293c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                    ,undefined8 *param_6,long *param_7)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *aplStack_1b8 [4];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [21];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_100[7] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[6] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[9] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[8] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[3] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[2] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[5] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[4] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[1] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[0] = -0x5555555555555556;
  func_0x000107c2cb24(&uStack_250,&UNK_10f74559f,&UNK_10f7454e2,0x4ad);
  func_0x000107c2ce28(alStack_100,&uStack_250,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    uStack_190 = &uStack_250;
    func_0x00010b32059c(&UNK_10f74523a,&uStack_190);
  }
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_218 = 0xaaaaaaaaaaaaaaaa;
  uStack_220 = 0xaaaaaaaaaaaaaaaa;
  uStack_208 = 0xaaaaaaaaaaaaaaaa;
  uStack_210 = 0xaaaaaaaaaaaaaaaa;
  uStack_238 = 0xaaaaaaaaaaaaaaaa;
  uStack_240 = 0xaaaaaaaaaaaaaaaa;
  uStack_228 = 0xaaaaaaaaaaaaaaaa;
  uStack_230 = 0xaaaaaaaaaaaaaaaa;
  uStack_248 = 0xaaaaaaaaaaaaaaaa;
  uStack_250 = 0xaaaaaaaaaaaaaaaa;
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar5 = param_2;
  }
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  uStack_170 = 0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(alStack_100 + 10,&UNK_10f7454bc,&UNK_10f74542c,0x251);
  plVar6 = (long *)0x0;
  puVar7 = (undefined8 *)0x0;
  func_0x000107c2ce28(&uStack_190,alStack_100 + 10);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    aplStack_1b8[0] = alStack_100 + 10;
    func_0x00010b32059c(&UNK_10f74523a,aplStack_1b8);
  }
  _stat(plVar5,&uStack_250);
  func_0x000107c2ce2c(&uStack_190);
  if ((int)plVar5 == 0) {
    uStack_118 = 0xaaaaaaaaaaaaaaaa;
    uStack_120 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_128 = 0xaaaaaaaaaaaaaaaa;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    uStack_160 = 0xaaaaaaaaaaaaaaaa;
    uStack_148 = 0xaaaaaaaaaaaaaaaa;
    uStack_150 = 0xaaaaaaaaaaaaaaaa;
    uStack_178 = 0xaaaaaaaaaaaaaaaa;
    uStack_180 = 0xaaaaaaaaaaaaaaaa;
    uStack_168 = 0xaaaaaaaaaaaaaaaa;
    uStack_170 = 0xaaaaaaaaaaaaaaaa;
    uStack_188 = 0xaaaaaaaaaaaaaaaa;
    uStack_190 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
    plVar5 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar5 = param_1;
    }
    iVar3 = (int)plVar5;
    alStack_100[0x11] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x10] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x13] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x12] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xd] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xc] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xf] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xe] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xb] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[10] = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c2cb24(aplStack_1b8,&UNK_10f7454bc,&UNK_10f74542c,0x251);
    plVar6 = (long *)0x0;
    puVar7 = (undefined8 *)0x0;
    func_0x000107c2ce28(alStack_100 + 10,aplStack_1b8);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      pplStack_198 = aplStack_1b8;
      func_0x00010b32059c(&UNK_10f74523a,&pplStack_198);
    }
    plVar5 = &uStack_190;
    _stat();
    func_0x000107c2ce2c(alStack_100 + 10);
    if ((iVar3 == 0) &&
       (((uStack_250._4_2_ & 0xf000) == 0x4000) != ((uStack_190._4_2_ & 0xf000) != 0x4000)))
    goto LAB_10b3294dc;
LAB_10b3295ec:
    plVar13 = (long *)0x0;
  }
  else {
LAB_10b3294dc:
    plVar5 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar5 = param_1;
    }
    iVar3 = (int)plVar5;
    plVar5 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar5 = param_2;
    }
    _rename();
    if (iVar3 == 0) {
      plVar13 = (long *)0x1;
    }
    else {
      plVar6 = (long *)0x1;
      puVar7 = (undefined8 *)0x0;
      plVar13 = param_1;
      FUN_10b328368();
      plVar5 = param_2;
      if ((int)plVar13 == 0) goto LAB_10b3295ec;
      plVar13 = (long *)0x1;
      plVar5 = (long *)0x1;
      FUN_10b3279f8(param_1);
    }
  }
  plVar4 = alStack_100;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar13;
  }
  ___stack_chk_fail();
  plVar13 = (long *)plVar4[1];
  *param_6 = 0;
  if (plVar5 <= plVar6 && (long)plVar6 - (long)plVar5 != 0) {
    if ((long *)plVar4[1] < plVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329834);
      (*pcVar2)();
    }
    if ((long *)plVar4[1] < plVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329840);
      (*pcVar2)();
    }
    puVar9 = (undefined8 *)(*plVar4 + (long)plVar5 * 0x18);
    puVar10 = (undefined8 *)(*plVar4 + (long)plVar6 * 0x18);
    if (puVar7 < puVar10) {
      if ((puVar10 < puVar9) || (CARRY8((ulong)puVar7,(long)puVar10 - (long)puVar9))) {
LAB_10b329844:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b329848);
        (*pcVar2)();
      }
      if (puVar9 < (undefined8 *)((long)puVar7 + ((long)puVar10 - (long)puVar9))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32987c);
        (*pcVar2)();
      }
    }
    lVar11 = (long)plVar6 * 0x18 + (long)plVar5 * -0x18;
    do {
      uVar15 = puVar9[1];
      uVar14 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar15;
      *puVar7 = uVar14;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      lVar11 = lVar11 + -0x18;
      puVar7 = puVar7 + 3;
      puVar9 = puVar9 + 3;
    } while (lVar11 != 0);
    *param_7 = (long)plVar6 - (long)plVar5;
    return plVar4;
  }
  if (plVar5 <= plVar6) {
    *param_7 = 0;
    return plVar4;
  }
  plVar12 = (long *)plVar4[1];
  if (plVar12 < plVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32984c);
    (*pcVar2)();
  }
  if (plVar12 < plVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329858);
    (*pcVar2)();
  }
  puVar9 = (undefined8 *)*plVar4;
  puVar10 = puVar9 + (long)plVar5 * 3;
  puVar8 = puVar9 + (long)plVar13 * 3;
  if (puVar7 < puVar8) {
    if ((puVar8 < puVar10) || (CARRY8((ulong)puVar7,(long)puVar8 - (long)puVar10)))
    goto LAB_10b329844;
    if (puVar10 < (undefined8 *)((long)puVar7 + ((long)puVar8 - (long)puVar10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329888);
      (*pcVar2)();
    }
  }
  uVar1 = (long)plVar13 - (long)plVar5;
  if (uVar1 != 0) {
    lVar11 = (long)plVar13 * 0x18 + (long)plVar5 * -0x18;
    puVar9 = puVar7;
    do {
      uVar15 = puVar10[1];
      uVar14 = *puVar10;
      puVar9[2] = puVar10[2];
      puVar9[1] = uVar15;
      *puVar9 = uVar14;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      lVar11 = lVar11 + -0x18;
      puVar10 = puVar10 + 3;
      puVar9 = puVar9 + 3;
    } while (lVar11 != 0);
    puVar9 = (undefined8 *)*plVar4;
    plVar12 = (long *)plVar4[1];
  }
  if (plVar12 < plVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329864);
    (*pcVar2)();
  }
  if (param_5 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329870);
    (*pcVar2)();
  }
  puVar10 = puVar9 + (long)plVar6 * 3;
  puVar7 = puVar7 + uVar1 * 3;
  if (puVar7 < puVar10) {
    if ((puVar10 < puVar9) || (CARRY8((ulong)puVar7,(long)puVar10 - (long)puVar9)))
    goto LAB_10b329844;
    if (puVar9 < (undefined8 *)((long)puVar7 + ((long)puVar10 - (long)puVar9))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329894);
      (*pcVar2)();
    }
  }
  if (plVar6 != (long *)0x0) {
    lVar11 = (long)plVar6 * 0x18;
    do {
      uVar15 = puVar9[1];
      uVar14 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar15;
      *puVar7 = uVar14;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      lVar11 = lVar11 + -0x18;
      puVar9 = puVar9 + 3;
      puVar7 = puVar7 + 3;
    } while (lVar11 != 0);
  }
  *param_7 = uVar1 + (long)plVar6;
  return plVar4;
}



/* Entry: 10b329684; end: 10b32989b;  */

void FUN_10b329684(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong param_5,
                  undefined8 *param_6,long *param_7)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_1[1];
  *param_6 = 0;
  if (param_2 > param_3 || param_3 - param_2 == 0) {
    if (param_2 <= param_3) {
      *param_7 = 0;
      return;
    }
    uVar8 = param_1[1];
    if (uVar8 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32984c);
      (*pcVar2)();
    }
    if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329858);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)*param_1;
    puVar5 = puVar4 + param_2 * 3;
    puVar3 = puVar4 + uVar7 * 3;
    if (param_4 < puVar3) {
      if ((puVar3 < puVar5) || (CARRY8((ulong)param_4,(long)puVar3 - (long)puVar5)))
      goto LAB_10b329844;
      if (puVar5 < (undefined8 *)((long)param_4 + ((long)puVar3 - (long)puVar5))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329888);
        (*pcVar2)();
      }
    }
    uVar1 = uVar7 - param_2;
    if (uVar1 != 0) {
      lVar6 = uVar7 * 0x18 + param_2 * -0x18;
      puVar4 = param_4;
      do {
        uVar10 = puVar5[1];
        uVar9 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar10;
        *puVar4 = uVar9;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        lVar6 = lVar6 + -0x18;
        puVar5 = puVar5 + 3;
        puVar4 = puVar4 + 3;
      } while (lVar6 != 0);
      puVar4 = (undefined8 *)*param_1;
      uVar8 = param_1[1];
    }
    if (uVar8 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329864);
      (*pcVar2)();
    }
    if (param_5 < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329870);
      (*pcVar2)();
    }
    puVar5 = puVar4 + param_3 * 3;
    param_4 = param_4 + uVar1 * 3;
    if (param_4 < puVar5) {
      if ((puVar5 < puVar4) || (CARRY8((ulong)param_4,(long)puVar5 - (long)puVar4)))
      goto LAB_10b329844;
      if (puVar4 < (undefined8 *)((long)param_4 + ((long)puVar5 - (long)puVar4))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329894);
        (*pcVar2)();
      }
    }
    if (param_3 != 0) {
      lVar6 = param_3 * 0x18;
      do {
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        param_4[2] = puVar4[2];
        param_4[1] = uVar10;
        *param_4 = uVar9;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        lVar6 = lVar6 + -0x18;
        puVar4 = puVar4 + 3;
        param_4 = param_4 + 3;
      } while (lVar6 != 0);
    }
    *param_7 = uVar1 + param_3;
    return;
  }
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329834);
    (*pcVar2)();
  }
  if ((ulong)param_1[1] < param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329840);
    (*pcVar2)();
  }
  puVar4 = (undefined8 *)(*param_1 + param_2 * 0x18);
  puVar5 = (undefined8 *)(*param_1 + param_3 * 0x18);
  if (param_4 < puVar5) {
    if ((puVar5 < puVar4) || (CARRY8((ulong)param_4,(long)puVar5 - (long)puVar4))) {
LAB_10b329844:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b329848);
      (*pcVar2)();
    }
    if (puVar4 < (undefined8 *)((long)param_4 + ((long)puVar5 - (long)puVar4))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32987c);
      (*pcVar2)();
    }
  }
  lVar6 = param_3 * 0x18 + param_2 * -0x18;
  do {
    uVar10 = puVar4[1];
    uVar9 = *puVar4;
    param_4[2] = puVar4[2];
    param_4[1] = uVar10;
    *param_4 = uVar9;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    lVar6 = lVar6 + -0x18;
    param_4 = param_4 + 3;
    puVar4 = puVar4 + 3;
  } while (lVar6 != 0);
  *param_7 = param_3 - param_2;
  return;
}



/* Entry: 10b32989c; end: 10b32a2bb;  */

void FUN_10b32989c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  int *piVar9;
  ulong auStack_150 [33];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_150[0x1d] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x1c] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x1f] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x1e] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x19] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x18] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x1b] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x1a] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x15] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x14] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x17] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x16] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x11] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x10] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x13] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0x12] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0xd] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0xc] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0xf] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0xe] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[9] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[8] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0xb] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[10] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[5] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[4] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[7] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[6] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[1] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[0] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[3] = 0xaaaaaaaaaaaaaaaa;
  auStack_150[2] = 0xaaaaaaaaaaaaaaaa;
  puVar8 = param_2;
  ___error();
  uVar1 = *puVar8;
  puVar8 = auStack_150;
  _strerror_r(param_2,puVar8,0x100);
  if ((int)param_2 == 0) {
    auStack_150[0x1f] = auStack_150[0x1f] & 0xffffffffffffff;
  }
  else {
    ___error();
    param_2 = auStack_150;
    puVar8 = (ulong *)0x100;
    _snprintf(param_2,0x100,&UNK_10f7455c7);
  }
  ___error();
  *(int *)param_2 = (int)uVar1;
  puVar4 = auStack_150;
  _strlen();
  if ((ulong *)0x7ffffffffffffff7 < puVar4) {
    FUN_10b2ecf74();
    goto LAB_10b3299e4;
  }
  if (puVar4 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar4;
    puVar6 = puVar4;
    puVar5 = param_1;
    if (puVar4 != (ulong *)0x0) goto LAB_10b32999c;
  }
  else {
    puVar8 = (ulong *)0x19;
    if (((ulong)puVar4 | 7) != 0x17) {
      puVar8 = (ulong *)(((ulong)puVar4 | 7) + 1);
    }
    puVar5 = puVar8;
    __Znwm();
    param_1[1] = (ulong)puVar4;
    param_1[2] = (ulong)puVar8 | 0x8000000000000000;
    *param_1 = (ulong)puVar5;
LAB_10b32999c:
    puVar8 = auStack_150;
    puVar6 = puVar5;
    _memcpy(puVar5,puVar8,puVar4);
    param_1 = puVar5;
  }
  *(undefined1 *)((long)param_1 + (long)puVar4) = 0;
  puVar4 = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10b3299e4:
  ___stack_chk_fail();
  if ((bRam000000011383c668 & 1) == 0) {
    iVar3 = 0x1383c668;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c35cc4();
      ___cxa_guard_release(0x11383c668);
    }
  }
  piVar9 = (int *)(ulong)uRam000000011383c660;
  puVar5 = (ulong *)0x0;
  while (puVar6 = puVar5, puVar6 <= puVar8 && (long)puVar8 - (long)puVar6 != 0) {
    while (piVar7 = piVar9, _read(piVar9,(long)puVar4 + (long)puVar6,(long)puVar8 - (long)puVar6),
          piVar7 == (int *)0xffffffffffffffff) {
      ___error();
      if (*piVar7 != 4) goto LAB_10b329a64;
    }
    puVar5 = (ulong *)((long)piVar7 + (long)puVar6);
    if ((long)piVar7 < 1) break;
  }
LAB_10b329a64:
  if (puVar8 == puVar6) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329aa8);
  (*pcVar2)();
}



/* Entry: 10b32a2bc; end: 10b32a343;  */

void FUN_10b32a2bc(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  (**(code **)(piVar4 + 2))(piVar4);
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b32a304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b32a344; end: 10b32a43f;  */

int * FUN_10b32a344(int *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = (int *)0x48;
  __Znwm();
  uVar7 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  *piVar4 = 0;
  piVar4[1] = (int)uVar7;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  _pthread_mutexattr_init(&uStack_48);
  _pthread_mutexattr_setprotocol(&uStack_48,1);
  _pthread_mutex_init(piVar4 + 2,&uStack_48);
  _pthread_mutexattr_destroy(&uStack_48);
  if (piVar4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(int **)param_1 = piVar4;
  FUN_10b32a440();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10b32a5e8(param_1);
  __Unwind_Resume();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  if (puVar5 == (undefined *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar3 = (int)piVar4 + 8;
    _pthread_mutex_trylock();
    if (iVar3 != 0) {
      func_0x00010b329e58(piVar4 + 2);
    }
    if (param_3 != 0) {
      func_0x00010b32c134(param_2,param_3);
    }
    if (piVar4 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010bf17d20();
    piVar4[1] = (int)puVar5;
    if (piVar4 != (int *)0x0) {
      do {
        iVar3 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 + -1 == 0) {
        _pthread_mutex_destroy(piVar4 + 2);
        __ZdlPv(piVar4);
      }
    }
    piVar6 = piVar4 + 2;
    _pthread_mutex_unlock(piVar6);
  }
  if (piVar4 != (int *)0x0) {
    do {
      iVar3 = *piVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      _pthread_mutex_destroy(piVar4 + 2);
      __ZdlPv(piVar4);
      return piVar4;
    }
  }
  return piVar6;
}



/* Entry: 10b32a440; end: 10b32a5e7;  */

void FUN_10b32a440(int *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  if (puVar4 != (undefined *)0x0) {
    iVar3 = (int)param_1 + 8;
    _pthread_mutex_trylock();
    if (iVar3 != 0) {
      func_0x00010b329e58(param_1 + 2);
    }
    if (param_3 != 0) {
      func_0x00010b32c134(param_2,param_3);
    }
    if (param_1 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = *param_1 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010bf17d20();
    param_1[1] = (int)puVar4;
    if (param_1 != (int *)0x0) {
      do {
        iVar3 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 + -1 == 0) {
        _pthread_mutex_destroy(param_1 + 2);
        __ZdlPv(param_1);
      }
    }
    _pthread_mutex_unlock(param_1 + 2);
  }
  if (param_1 != (int *)0x0) {
    do {
      iVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      _pthread_mutex_destroy(param_1 + 2);
      __ZdlPv(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b32a5e8; end: 10b32a633;  */

undefined8 * FUN_10b32a5e8(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _pthread_mutex_destroy(piVar4 + 2);
      __ZdlPv(piVar4);
    }
  }
  return param_1;
}



/* Entry: 10b32a634; end: 10b32a727;  */

void FUN_10b32a634(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_1 + 8;
  _pthread_mutex_trylock();
  if (iVar3 == 0) {
    uVar4 = *(ulong *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (uVar4 != (uint)param_1[1]) {
LAB_10b32a69c:
      param_1[1] = (int)uVar4;
      _pthread_mutex_unlock(param_1 + 2);
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x00010bf94260();
      goto LAB_10b32a6bc;
    }
  }
  else {
    func_0x00010b329e58(param_1 + 2);
    uVar4 = *(ulong *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (uVar4 != (uint)param_1[1]) goto LAB_10b32a69c;
  }
  _pthread_mutex_unlock(param_1 + 2);
LAB_10b32a6bc:
  if (param_1 != (int *)0x0) {
    do {
      iVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      _pthread_mutex_destroy(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b32a728; end: 10b32a743;  */

void FUN_10b32a728(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  iVar3 = (int)piVar4 + 8;
  _pthread_mutex_trylock();
  if (iVar3 == 0) {
    uVar5 = *(ulong *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (uVar5 != (uint)piVar4[1]) {
LAB_10b32a69c:
      piVar4[1] = (int)uVar5;
      _pthread_mutex_unlock(piVar4 + 2);
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x00010bf94260();
      goto LAB_10b32a6bc;
    }
  }
  else {
    func_0x00010b329e58(piVar4 + 2);
    uVar5 = *(ulong *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (uVar5 != (uint)piVar4[1]) goto LAB_10b32a69c;
  }
  _pthread_mutex_unlock(piVar4 + 2);
LAB_10b32a6bc:
  if (piVar4 != (int *)0x0) {
    do {
      iVar3 = *piVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      _pthread_mutex_destroy(piVar4 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b32a744; end: 10b32a8db;  */

void FUN_10b32a744(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  piVar3 = *(int **)(param_2 + 0x28);
  *(int **)(param_1 + 0x28) = piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 10b32a8dc; end: 10b32a97b;  */

undefined8 * FUN_10b32a8dc(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110cd64c0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1[0x13] + 4) = 1;
  piVar4 = (int *)param_1[0x13];
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      __ZdlPv();
    }
  }
  *param_1 = &PTR_FUN_110cd66a8;
  _CFRunLoopRemoveSource
            (param_1[1],param_1[0x11],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  _CFRelease(param_1[0x11]);
  *param_1 = &PTR_DAT_110cd65b8;
  func_0x000107c2cff8(param_1,0);
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar5 = param_1[5];
  param_1[5] = 0;
  if (lVar5 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar5 = param_1[4];
  param_1[4] = 0;
  if (lVar5 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar5 = param_1[3];
  param_1[3] = 0;
  if (lVar5 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar5 = param_1[2];
  param_1[2] = 0;
  if (lVar5 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32a97c; end: 10b32aa1f;  */

void FUN_10b32a97c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  *param_1 = &PTR_FUN_110cd64c0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1[0x13] + 4) = 1;
  piVar4 = (int *)param_1[0x13];
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      __ZdlPv();
    }
  }
  *param_1 = &PTR_FUN_110cd66a8;
  _CFRunLoopRemoveSource
            (param_1[1],param_1[0x11],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  _CFRelease(param_1[0x11]);
  FUN_10b32b5b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b32aa20; end: 10b32aa7b;  */

void FUN_10b32aa20(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110cd6538;
  if (*(char *)(param_1 + 2) != '\x01') {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      _CFFileDescriptorInvalidate(lVar2);
      _CFRelease(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b32aa74);
  (*pcVar1)();
}



/* Entry: 10b32aa7c; end: 10b32ac8f;  */

undefined8 **** FUN_10b32aa7c(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  byte abStack_b0 [16];
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_b0[0] = 0xaa;
  abStack_b0[1] = 0xaa;
  abStack_b0[2] = 0xaa;
  abStack_b0[3] = 0xaa;
  abStack_b0[4] = 0xaa;
  abStack_b0[5] = 0xaa;
  abStack_b0[6] = 0xaa;
  abStack_b0[7] = 0xaa;
  abStack_b0[8] = 0xaa;
  abStack_b0[9] = 0xaa;
  abStack_b0[10] = 0xaa;
  abStack_b0[0xb] = 0xaa;
  abStack_b0[0xc] = 0xaa;
  abStack_b0[0xd] = 0xaa;
  abStack_b0[0xe] = 0xaa;
  abStack_b0[0xf] = 0xaa;
  ppppuVar3 = (undefined8 ****)param_2[1];
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_98 = 0x1032547698badcfe;
  pppuStack_a0 = (undefined8 ***)0xefcdab8967452301;
  func_0x000107c2b4a0(&pppuStack_a0,*param_2,ppppuVar3);
  func_0x000107c2b4a4(abStack_b0,&pppuStack_a0);
  ppppuVar2 = (undefined8 ****)0x28;
  __Znwm();
  lVar5 = 0;
  lVar6 = 0;
  uStack_90 = -0x7fffffffffffffd8;
  lStack_98 = 0x20;
  ppppuVar2[1] = (undefined8 ***)0x0;
  *ppppuVar2 = (undefined8 ***)0x0;
  ppppuVar2[3] = (undefined8 ***)0x0;
  ppppuVar2[2] = (undefined8 ***)0x0;
  *(undefined1 *)(ppppuVar2 + 4) = 0;
  pppuStack_a0 = ppppuVar2;
  do {
    bVar1 = abStack_b0[lVar6];
    ppppuVar2 = (undefined8 ****)pppuStack_a0;
    if (-1 < uStack_90) {
      ppppuVar2 = &pppuStack_a0;
    }
    *(undefined *)((long)ppppuVar2 + lVar5) = (&UNK_10f7446d4)[bVar1 >> 4];
    ppppuVar2 = (undefined8 ****)pppuStack_a0;
    if (-1 < uStack_90) {
      ppppuVar2 = &pppuStack_a0;
    }
    *(undefined *)((long)ppppuVar2 + lVar5 + 1) = (&UNK_10f7446d4)[(ulong)bVar1 & 0xf];
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 2;
  } while (lVar6 != 0x10);
  ppppuVar2 = (undefined8 ****)pppuStack_a0;
  if (-1 < (long)uStack_90._7_1_) {
    ppppuVar2 = &pppuStack_a0;
  }
  lVar6 = lStack_98;
  if (-1 < uStack_90) {
    lVar6 = (long)uStack_90._7_1_;
  }
  func_0x000107c2cc68(param_1,ppppuVar2,lVar6);
  if (uStack_90 < 0) {
    ppppuVar2 = (undefined8 ****)pppuStack_a0;
    __ZdlPv(pppuStack_a0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppuVar2;
  }
  ___stack_chk_fail();
  uVar4 = 0;
  uStack_b8 = 0x10b32abd0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_138 = 0x1032547698badcfe;
  uStack_140 = 0xefcdab8967452301;
  uStack_130 = 0xc3d2e1f0;
  pppuStack_d0 = &pppuStack_a0;
  uStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000107c2b4f0(&uStack_140,ppppuVar2,lVar6);
  func_0x000107c2b4f4(ppppuVar3);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____gxx_personality_v0_110346c08)();
    return ppppuVar3;
  }
  return (undefined8 ****)0x5;
}



/* Entry: 10b32ac90; end: 10b32acff;  */

/* WARNING: Removing unreachable block (ram,0x00010b32acd4) */

long * FUN_10b32ac90(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b32ad00; end: 10b32adb3;  */

long FUN_10b32ad00(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = 0;
  if (lVar1 != 0) {
    _CFGetTypeID();
    lVar2 = lVar1;
    _CFArrayGetTypeID();
    lVar3 = *param_1;
    if (lVar1 != lVar2) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



/* Entry: 10b32adb4; end: 10b32b003;  */

undefined8 FUN_10b32adb4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  lVar3 = param_2;
  _CFErrorCopyDescription();
  lVar4 = param_2;
  _CFErrorCopyUserInfo();
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar4;
    _CFDictionaryGetValue(lVar4,*(undefined8 *)PTR__kCFErrorDescriptionKey_11034abc8);
  }
  uVar5 = param_1;
  func_0x000107c2ca60(param_1,&UNK_10f67ec68,6);
  lVar6 = param_2;
  _CFErrorGetCode(param_2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(uVar5,lVar6);
  func_0x000107c2ca60();
  _CFErrorGetDomain(param_2);
  func_0x000107c35cc8(&ppppuStack_58);
  uVar1 = uStack_50;
  pppppuVar2 = (undefined8 *****)ppppuStack_58;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
    pppppuVar2 = &ppppuStack_58;
  }
  func_0x000107c2ca60(uVar5,pppppuVar2,uVar1);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppppuStack_58);
  }
  func_0x000107c2ca60();
  func_0x000107c35cc8(&ppppuStack_58,lVar3);
  uVar1 = uStack_50;
  pppppuVar2 = (undefined8 *****)ppppuStack_58;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
    pppppuVar2 = &ppppuStack_58;
  }
  func_0x000107c2ca60(uVar5,pppppuVar2,uVar1);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppppuStack_58);
  }
  if (lVar7 != 0) {
    uVar5 = param_1;
    func_0x000107c2ca60(param_1,&DAT_10f68e8ec,1);
    func_0x000107c35cc8(&ppppuStack_58,lVar7);
    pppppuVar2 = (undefined8 *****)ppppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppppuVar2 = &ppppuStack_58;
    }
    func_0x000107c2ca60(uVar5,pppppuVar2,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppppuStack_58);
    }
    func_0x000107c2ca60();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return param_1;
}



/* Entry: 10b32b004; end: 10b32b127;  */

undefined8 *
FUN_10b32b004(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 1) = param_4;
  *param_1 = &PTR_FUN_110cd4a10;
  param_1[0x16] = 0;
  param_1[2] = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
  puVar2 = param_1 + 0x10;
  *puVar2 = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
  __ZNSt3__18ios_base4initEPv(puVar2,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *puVar2 = &PTR_DAT_11088d708;
  puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  param_1[2] = &PTR_SUB_11088d6e0;
  param_1[3] = puVar1;
  __ZNSt3__16localeC1Ev(param_1 + 4);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = &PTR_DAT_11088d7b0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x10;
  puVar2 = param_1 + 3;
  func_0x000107c2ca8c();
  param_1[0x24] = param_2;
  *(int *)(param_1 + 0x25) = (int)param_3;
  ___error();
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)puVar2;
  ___error();
  *(undefined4 *)puVar2 = 0;
  func_0x000107c2cb2c(param_1,param_2,param_3);
  *param_1 = &PTR_FUN_110cd6558;
  *(undefined4 *)(param_1 + 0x26) = param_5;
  return param_1;
}



/* Entry: 10b32b128; end: 10b32b17f;  */

/* WARNING: Removing unreachable block (ram,0x000100155a20) */

undefined8 * FUN_10b32b128(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  dword dVar9;
  bool bVar10;
  ulong *puVar11;
  code *pcVar12;
  mach_header *pmVar13;
  mach_header *pmVar14;
  long *plVar15;
  mach_header *pmVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  mach_header *pmVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auStack_538 [24];
  mach_header *pmStack_520;
  mach_header *pmStack_518;
  mach_header mStack_510;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined1 uStack_111;
  undefined4 uStack_110;
  ushort uStack_10c;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  *param_1 = &PTR_FUN_110cd6558;
  func_0x000107c2ca60(param_1 + 2,&UNK_10f7456e1,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_1 + 2;
  lVar18 = *plVar19;
  *param_1 = &PTR_FUN_110cd4a10;
  if ((*(byte *)((long)plVar19 + *(long *)(lVar18 + -0x18) + 0x20) & 5) == 0) {
    plVar15 = *(long **)((long)plVar19 + *(long *)(lVar18 + -0x18) + 0x28);
    (**(code **)(*plVar15 + 0x20))(&mStack_510,plVar15,0,1,0x10);
    lVar18 = *plVar19;
    lVar24 = lStack_490;
  }
  else {
    lVar24 = -1;
  }
  func_0x000107c60c08(&mStack_510,(long)plVar19 + *(long *)(lVar18 + -0x18));
  pmVar13 = &mStack_510;
  func_0x000107c60c00(pmVar13,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*(long *)pmVar13 + 0x38))();
  func_0x000107c60db0(&mStack_510);
  func_0x000107c60cc4(plVar19,pmVar13);
  func_0x000107c60cc8(plVar19);
  auStack_538._8_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._16_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  func_0x0001001548e4(auStack_538,param_1 + 3);
  uStack_498 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_488 = 0xaaaaaaaaaaaaaaaa;
  lStack_490 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e0 = 0xaaaaaaaaaaaaaaaa;
  mStack_510.cpusubtype = 0xaaaaaaaa;
  mStack_510.filetype = 0xaaaaaaaa;
  mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  mStack_510.flags = 0xaaaaaaaa;
  mStack_510.reserved = 0xaaaaaaaa;
  mStack_510.ncmds = 0xaaaaaaaa;
  mStack_510.sizeofcmds = 0xaaaaaaaa;
  pmVar13 = *(mach_header **)PTR____stderrp_11034bdc8;
  func_0x000107c60fc0();
  func_0x000107c60fe4();
  if ((int)pmVar13 == -1) {
code_r0x0001001555f4:
    func_0x000107c60760();
    if (pmVar13 == (mach_header *)0x0) {
code_r0x000100155638:
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaa00;
      pmVar14 = (mach_header *)PTR___os_log_default_11034be80;
    }
    else {
      func_0x000107c6075c();
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
      if (pmVar13 == (mach_header *)0x0) goto code_r0x000100155638;
      func_0x000100155c20(&mStack_510);
      pmVar14 = (mach_header *)PTR___os_log_default_11034be80;
      if ((long)mStack_510._16_8_ < 0) {
        if ((mStack_510._8_8_ != 0) &&
           (pmVar13 = (mach_header *)mStack_510._0_8_,
           (mach_header *)mStack_510._0_8_ != (mach_header *)0x0)) {
code_r0x000100155664:
          func_0x000107c611d0(pmVar13,&UNK_10f7443ae);
          pmVar14 = pmVar13;
        }
      }
      else if (mStack_510.sizeofcmds._3_1_ != '\0') {
        pmVar13 = &mStack_510;
        goto code_r0x000100155664;
      }
    }
    puVar2 = PTR___os_log_default_11034be80;
    uVar5 = *(uint *)(param_1 + 1);
    uVar21 = 0x11100001 >> (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar21 = uVar5 >> 0x1e & 2;
    }
    pmVar13 = pmVar14;
    func_0x000107c611d4(pmVar14,uVar21 & 0xff);
    if ((int)pmVar13 != 0) {
      pmVar13 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar13 = (mach_header *)auStack_538;
      }
      uStack_110 = 0x8220102;
      uStack_10c = (ushort)pmVar13;
      uStack_10a = (undefined2)((ulong)pmVar13 >> 0x10);
      uStack_108._0_4_ = (undefined4)((ulong)pmVar13 >> 0x20);
      pmVar13 = &MACH_HEADER;
      func_0x000107c60ea4(0x100000000,pmVar14,uVar21 & 0xff,"%{public}s",&uStack_110,0xc);
    }
    if (pmVar14 != (mach_header *)puVar2) {
      func_0x000107c611dc();
      pmVar13 = pmVar14;
    }
    if ((long)mStack_510._16_8_ < 0) {
      pmVar13 = (mach_header *)mStack_510._0_8_;
      func_0x000107c60e14();
    }
  }
  else if (((ushort)mStack_510.cputype & 0xf000) == 0x2000) {
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaaaaaaaaaa;
    uStack_a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_d8 = 0xaaaaaaaaaaaaaaaa;
    uStack_e0 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaaaaaaaa;
    uStack_f0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_108._0_4_ = 0xaaaaaaaa;
    uStack_108._4_4_ = 0xaaaaaaaa;
    uStack_110 = 0xaaaaaaaa;
    uStack_10c = 0xaaaa;
    uStack_10a = 0xaaaa;
    pmVar13 = (mach_header *)&UNK_10f517886;
    func_0x000107c613b8(&UNK_10f517886,&uStack_110);
    if (((int)pmVar13 != -1) && ((uStack_10c & 0xf000) == 0x2000)) {
      if (mStack_510.flags != (dword)uStack_f8) goto code_r0x000100155718;
    }
    goto code_r0x0001001555f4;
  }
code_r0x000100155718:
  uVar3 = auStack_538._8_8_;
  pmVar14 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar3 = (ulong)auStack_538._16_8_ >> 0x38;
    pmVar14 = (mach_header *)auStack_538;
  }
  if (uVar3 != 0) {
    uVar22 = 0;
    do {
      while( true ) {
        pmVar13 = (mach_header *)0x2;
        func_0x000107c616d4(2,(undefined *)((long)&pmVar14->magic + uVar22),uVar3 - uVar22);
        if (pmVar13 != (mach_header *)0xffffffffffffffff) break;
        func_0x000107c60e5c();
        if (pmVar13->magic != 4) goto code_r0x000100155780;
      }
    } while ((-1 < (int)pmVar13) &&
            (uVar22 = ((ulong)pmVar13 & 0x7fffffff) + uVar22, uVar22 < uVar3));
  }
code_r0x000100155780:
  puVar11 = puRam000000011383a990;
  if (*(int *)(param_1 + 1) != 3) goto code_r0x0001001559d4;
  if (puRam000000011383a990 == (ulong *)0x0) goto code_r0x000100155894;
  pmVar13 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538[0x17]) {
    pmVar13 = (mach_header *)auStack_538;
  }
  uVar3 = auStack_538._8_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar3 = (long)auStack_538[0x17];
  }
  uVar23 = *puRam000000011383a990;
  lVar18 = uVar3 + 1;
  uVar22 = uVar23;
  func_0x000107c2cbd4(uVar23,lVar18,0x4cf434fa);
  plVar15 = *(long **)(uVar23 + 0x30);
  uVar21 = (uint)uVar22;
  if (uVar21 == 0) {
    if (plVar15 == (long *)0x0) goto code_r0x000100155894;
    lVar17 = 0;
code_r0x0001001557fc:
    (**(code **)(*plVar15 + 0x30))(plVar15,lVar17);
  }
  else {
    lVar17 = lVar18;
    if (plVar15 != (long *)0x0) goto code_r0x0001001557fc;
  }
  if (0x3f < uVar21 && (uVar22 & 7) == 0) {
    uVar23 = *puVar11;
    uVar5 = (int)lVar18 + 0x10;
    uVar6 = *(uint *)(uVar23 + 0x14);
    if ((((uVar5 + uVar21 <= uVar6) &&
         (puVar1 = (uint *)(*(long *)(uVar23 + 8) + (uVar22 & 0xffffffff)), puVar1[1] == 0xc8799269)
         ) && (uVar5 <= *puVar1)) && ((*puVar1 + uVar21 <= uVar6 && (puVar1[2] == 0x4cf434fa)))) {
      func_0x000107c610b4(puVar1 + 4,pmVar13,uVar3);
      func_0x000107c2cbd8(*puVar11,uVar22);
    }
  }
code_r0x000100155894:
  func_0x000107c610bc(&mStack_510,0xaa,0x400);
  lVar18 = 0;
  pmVar13 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    pmVar13 = (mach_header *)auStack_538;
  }
  do {
    cVar8 = *(char *)((long)&pmVar13->magic + lVar18);
    *(char *)((long)&mStack_510.magic + lVar18) = cVar8;
    if (cVar8 == '\0') goto code_r0x0001001558dc;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x400);
  uStack_111 = 0;
code_r0x0001001558dc:
  pmVar13 = &mStack_510;
  func_0x000100123990();
  pmVar14 = (mach_header *)0x1137f5070;
  if ((bRam00000001137f5070 & 1) == 0) goto code_r0x000100155a9c;
  do {
    if (uRam00000001137f5088 == uRam00000001137f5090) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(0,0x100155af8);
      (*pcVar12)();
    }
    if ((pmVar14->magic & 1) == 0) {
      pmVar20 = (mach_header *)0x1137f5070;
      pmVar13 = pmVar20;
      func_0x000107c60e48();
      if ((int)pmVar13 != 0) {
        uRam00000001137f5090 = 0;
        uRam00000001137f5088 = 0;
        uRam00000001137f5080 = 0;
        lRam00000001137f5078 = 0;
        func_0x000107c60e4c();
        pmVar13 = pmVar20;
      }
    }
    uVar3 = uRam00000001137f5080;
    if (uRam00000001137f5090 != 0) {
      uVar3 = uRam00000001137f5090;
    }
    if (uRam00000001137f5080 < uVar3 - 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b04);
      (*pcVar12)();
    }
    pmVar20 = *(mach_header **)(lRam00000001137f5078 + (uVar3 - 1) * 8);
    if (pmVar20 != (mach_header *)0x0) {
      do {
        dVar9 = pmVar20->magic;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pmVar20,0x10);
        if (bVar10) {
          pmVar20->magic = dVar9 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)dVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b10);
        (*pcVar12)();
      }
      pmVar13 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar13 = (mach_header *)auStack_538;
      }
      pmVar14 = (mach_header *)((long)&pmVar13->magic + lVar24);
      if (pmVar14 == (mach_header *)0x0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b1c);
        (*pcVar12)();
      }
      uVar4 = param_1[0x24];
      puVar2 = (undefined *)((long)&pmVar13->magic + param_1[0x23]);
      uVar7 = *(undefined4 *)(param_1 + 0x25);
      lVar24 = lVar24 - param_1[0x23];
      pmVar16 = pmVar14;
      func_0x000107c613d0();
      uStack_110 = SUB84(puVar2,0);
      uStack_10c = (ushort)((ulong)puVar2 >> 0x20);
      uStack_10a = (undefined2)((ulong)puVar2 >> 0x30);
      pmVar13 = pmVar20;
      pmStack_520 = pmVar14;
      pmStack_518 = pmVar16;
      uStack_108 = lVar24;
      (**(code **)&pmVar20->cpusubtype)(pmVar20,uVar4,uVar7,&uStack_110,&pmStack_520);
      do {
        dVar9 = pmVar20->magic - 1;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pmVar20,0x10);
        if (bVar10) {
          pmVar20->magic = dVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (dVar9 == 0) {
        (**(code **)&pmVar20->ncmds)();
        pmVar13 = pmVar20;
      }
    }
code_r0x0001001559d4:
    if ((long)auStack_538._16_8_ < 0) {
      pmVar13 = (mach_header *)auStack_538._0_8_;
      func_0x000107c60e14();
    }
    dVar9 = *(dword *)((long)param_1 + 300);
    func_0x000107c60e5c();
    pmVar13->magic = dVar9;
    param_1[0x10] = &PTR_DAT_11088d708;
    param_1[2] = &PTR_SUB_11088d6e0;
    param_1[3] = &PTR_DAT_11088d7b0;
    param_1[3] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
    func_0x000107c60db0(param_1 + 4);
    func_0x000107c60cdc(plVar19,&PTR_PTR_11088d720);
    func_0x000107c60dd8(param_1 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_1;
    }
    func_0x000107c60e78();
code_r0x000100155a9c:
    pmVar20 = (mach_header *)0x1137f5070;
    pmVar13 = pmVar20;
    func_0x000107c60e48();
    if ((int)pmVar13 != 0) {
      uRam00000001137f5090 = 0;
      uRam00000001137f5088 = 0;
      uRam00000001137f5080 = 0;
      lRam00000001137f5078 = 0;
      func_0x000107c60e4c();
      pmVar13 = pmVar20;
    }
  } while( true );
}



/* Entry: 10b32b180; end: 10b32b1db;  */

void FUN_10b32b180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd6558;
  func_0x000107c2ca60(param_1 + 2,&UNK_10f7456e1,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x000107c2cb34(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b32b1dc; end: 10b32b49f;  */

void FUN_10b32b1dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  puVar3 = param_1 + 2;
  *param_1 = &PTR_DAT_110cd6578;
  func_0x000107c2ca60(puVar3,&UNK_10f7456e4,2);
  uVar4 = (ulong)*(uint *)(param_1 + 0x26);
  _mach_error_string(uVar4);
  uVar5 = uVar4;
  _strlen();
  func_0x000107c2ca60(puVar3,uVar4,uVar5);
  puVar1 = &UNK_10f7456e7;
  if (0xff < *(uint *)(param_1 + 0x26)) {
    puVar1 = &UNK_10f7456ed;
  }
  func_0x000107c2cc94(&ppuStack_48,puVar1);
  pppuVar2 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar2 = &ppuStack_48;
  }
  func_0x000107c2ca60(puVar3,pppuVar2,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  func_0x000107c2cb34(param_1);
  return;
}



/* Entry: 10b32b4a0; end: 10b32b4cf;  */

void FUN_10b32b4a0(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  (**(code **)(*param_1 + 0x50))();
  if (iVar1 != 0) {
    *(undefined1 *)((long)param_1 + 0x84) = 0;
  }
  return;
}



/* Entry: 10b32b4d0; end: 10b32b4d3;  */

void FUN_10b32b4d0(void)

{
  return;
}



/* Entry: 10b32b4d4; end: 10b32b573;  */

void FUN_10b32b4d4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10b32b6a0;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  func_0x000107c2cfd8(&puStack_38);
  return;
}



/* Entry: 10b32b574; end: 10b32b5af;  */

long * FUN_10b32b574(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b5b0; end: 10b32b69f;  */

undefined8 * FUN_10b32b5b0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110cd65b8;
  func_0x000107c2cff8(param_1,0);
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b6a0; end: 10b32b72b;  */

void FUN_10b32b6a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3[0xd] == 0) {
    *(undefined1 *)((long)plVar3 + 0x86) = 1;
  }
  else if (*(char *)((long)plVar3 + 0x84) == '\x01') {
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x58))(plVar3);
    plVar2 = (long *)plVar3[0xd];
    (**(code **)(*plVar2 + 0x18))();
    if ((int)plVar2 != 0) {
      _CFRunLoopSourceSignal(plVar3[8]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf89730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(plVar1,PTR_s_drain_1125bff70);
    return;
  }
  return;
}



/* Entry: 10b32b72c; end: 10b32b88f;  */

long * FUN_10b32b72c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)param_1[4];
  if ((plVar3[0xd] != 0) && (*(char *)((long)plVar3 + 0x84) == '\x01')) {
    unaff_x20 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    lStack_38 = -0x5555555555555556;
    uStack_30 = 0xaaaaaaaaaaaaaaaa;
    lStack_40 = -0x5555555555555556;
    (**(code **)(*(long *)plVar3[0xd] + 0x10))(&lStack_40);
    if (lStack_40 != 0x7fffffffffffffff) {
      if (lStack_40 == 0) {
        _CFRunLoopSourceSignal(plVar3[7]);
        func_0x00010bf89720(unaff_x20);
        param_1 = (long *)plVar3[8];
        _CFRunLoopSourceSignal();
        goto LAB_10b32b838;
      }
      func_0x000107c2cff4(plVar3,lStack_40 - lStack_38);
    }
    param_1 = unaff_x20;
    func_0x00010bf89720();
    if (plVar3[0xd] == 0) {
      *(undefined1 *)((long)plVar3 + 0x86) = 1;
    }
    else if (*(char *)((long)plVar3 + 0x84) == '\x01') {
      unaff_x20 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      plVar2 = (long *)plVar3[0xd];
      (**(code **)(*plVar2 + 0x18))();
      if ((int)plVar2 != 0) {
        _CFRunLoopSourceSignal(plVar3[8]);
      }
      param_1 = unaff_x20;
      func_0x00010bf89720();
    }
  }
LAB_10b32b838:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bf89720(unaff_x20);
  __Unwind_Resume();
  __Unwind_Resume();
  func_0x00010bf89720(unaff_x20);
  __Unwind_Resume();
  *param_1 = (long)&PTR_DAT_110cd65b8;
  func_0x000107c2cff8();
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b890; end: 10b32b893;  */

undefined8 * FUN_10b32b890(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110cd65b8;
  func_0x000107c2cff8(param_1,0);
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b894; end: 10b32b8a7;  */

void FUN_10b32b894(void)

{
  FUN_10b32b5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b32b8a8; end: 10b32b8f7;  */

bool FUN_10b32b8a8(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar1 == iVar2) {
    _CFRunLoopStop(*(undefined8 *)(param_1 + 8));
    return iVar1 == iVar2;
  }
  *(undefined1 *)(param_1 + 0x87) = 1;
  return iVar1 == iVar2;
}



/* Entry: 10b32b8f8; end: 10b32b8fb;  */

void FUN_10b32b8f8(void)

{
  return;
}



/* Entry: 10b32b8fc; end: 10b32b95b;  */

undefined8 * FUN_10b32b8fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110cd66a8;
  _CFRunLoopRemoveSource
            (param_1[1],param_1[0x11],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  _CFRelease(param_1[0x11]);
  *param_1 = &PTR_DAT_110cd65b8;
  func_0x000107c2cff8(param_1,0);
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b95c; end: 10b32b9bf;  */

void FUN_10b32b95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd66a8;
  _CFRunLoopRemoveSource
            (param_1[1],param_1[0x11],*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  _CFRelease(param_1[0x11]);
  FUN_10b32b5b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b32b9c0; end: 10b32b9ef;  */

undefined8 FUN_10b32b9c0(long param_1)

{
  _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0x88));
  _CFRunLoopWakeUp(*(undefined8 *)(param_1 + 8));
  return 1;
}



/* Entry: 10b32b9f0; end: 10b32b9f3;  */

undefined8 * FUN_10b32b9f0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110cd65b8;
  func_0x000107c2cff8(param_1,0);
  _CFRelease(param_1[0xc]);
  _CFRelease(param_1[0xb]);
  _CFRelease(param_1[10]);
  _CFRelease(param_1[9]);
  _CFRelease(param_1[8]);
  _CFRelease(param_1[7]);
  _CFRelease(param_1[6]);
  _CFRelease(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_10b32bac0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32b9f4; end: 10b32ba07;  */

void FUN_10b32b9f4(void)

{
  FUN_10b32b5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b32ba08; end: 10b32ba13;  */

void FUN_10b32ba08(void)

{
  return;
}



/* Entry: 10b32ba14; end: 10b32babf;  */

void FUN_10b32ba14(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x30;
  __Znwm();
  func_0x000107c2cc0c();
  *(ulong *)(param_1 + 0x88) = uVar2;
  func_0x000107c2cc10();
  if ((uVar2 & 1) != 0) {
    *(long *)(param_1 + 0x68) = param_2;
    if (param_2 != 0) {
      if (*(char *)(param_1 + 0x85) == '\x01') {
        _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0x38));
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
      if (*(char *)(param_1 + 0x86) == '\x01') {
        _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0x40));
        *(undefined1 *)(param_1 + 0x86) = 0;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b32ba8c);
  (*pcVar1)();
}



/* Entry: 10b32bac0; end: 10b32be5f;  */

long * FUN_10b32bac0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*param_1 + 8);
  uVar2 = *(undefined8 *)(*param_1 + 0x60);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveObserver(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x58);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveObserver(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x50);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveObserver(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x48);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveSource(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveSource(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x38);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveSource(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      ___cxa_guard_release(0x1137f51b0,uVar2);
    }
  }
  _CFRunLoopRemoveTimer(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  return param_1;
}



/* Entry: 10b32be60; end: 10b32c05f;  */

void FUN_10b32be60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  if (param_3 == 0) {
LAB_10b32bf18:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CFStringCreateWithBytesNoCopy
            (lVar2,param_2,param_3,0x8000100,0,*(undefined8 *)PTR__kCFAllocatorNull_11034ab80);
  if (lVar2 == 0) goto LAB_10b32bf18;
  lVar3 = lVar2;
  _CFStringGetLength();
  if (lVar3 != 0) {
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    lVar7 = 0;
    lVar4 = lVar2;
    _CFStringGetBytes(lVar2,0,lVar3,0x1c000100,0,0,0,0,&uStack_58);
    uVar1 = uStack_58;
    if (lVar4 != 0 && uStack_58 != 0) {
      uVar9 = uStack_58 >> 2;
      if (uVar9 == 0x3fffffffffffffff) {
        func_0x00010bdb364c();
LAB_10b32c024:
        func_0x00010b3069c0();
LAB_10b32c028:
        func_0x00010b2ed0ac();
        if (unaff_x21 != 0) {
          __ZdlPv(unaff_x21);
          _CFRelease(lVar2);
          __Unwind_Resume();
        }
        _CFRelease(lVar2);
        __Unwind_Resume(lVar4);
        if (lVar7 == 0) {
          _CFRetain(&PTR____CFConstantStringClassReference_110daafd8);
          *extraout_x8 = &PTR____CFConstantStringClassReference_110daafd8;
          return;
        }
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        _CFStringCreateWithBytes(uVar6,lVar4,lVar7,0x8000100,0);
        *extraout_x8 = uVar6;
        return;
      }
      uVar8 = uStack_58 & 0xfffffffffffffffc;
      unaff_x21 = uVar8 + 4;
      __Znwm();
      _bzero();
      lVar7 = 0;
      lVar4 = lVar2;
      _CFStringGetBytes(lVar2,0,lVar3,0x1c000100,0,0,unaff_x21,uVar1,0);
      if (lVar4 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        *(undefined4 *)(unaff_x21 + uVar9 * 4) = 0;
        if (0xffffffffffffffdf < uVar1) goto LAB_10b32c024;
        if (uVar1 < 0x14) {
          *(char *)((long)param_1 + 0x17) = (char)uVar9;
          puVar5 = param_1;
          if (3 < uVar1) goto LAB_10b32bfdc;
        }
        else {
          uVar1 = 7;
          if ((uVar9 | 1) != 5) {
            uVar1 = (uVar9 | 1) + 1;
          }
          if (uVar1 >> 0x3e != 0) goto LAB_10b32c028;
          puVar5 = (undefined8 *)(uVar1 << 2);
          __Znwm();
          param_1[1] = uVar9;
          param_1[2] = uVar1 | 0x8000000000000000;
          *param_1 = puVar5;
LAB_10b32bfdc:
          _memcpy(puVar5,unaff_x21,uVar8);
          param_1 = puVar5;
        }
        *(undefined4 *)((long)param_1 + uVar9 * 4) = 0;
      }
      if (unaff_x21 != 0) {
        __ZdlPv(unaff_x21);
      }
      goto LAB_10b32bffc;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_10b32bffc:
  _CFRelease(lVar2);
  return;
}



/* Entry: 10b32c060; end: 10b32c193;  */

void FUN_10b32c060(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFStringCreateWithBytes(uVar1,param_2,param_3,0x8000100,0);
    *param_1 = uVar1;
    return;
  }
  _CFRetain(&PTR____CFConstantStringClassReference_110daafd8,0,0);
  *param_1 = &PTR____CFConstantStringClassReference_110daafd8;
  return;
}



/* Entry: 10b32c194; end: 10b32c323;  */

/* WARNING: Possible PIC construction at 0x0001001266b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100126814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001266b4) */
/* WARNING: Removing unreachable block (ram,0x0001001266cc) */
/* WARNING: Removing unreachable block (ram,0x0001001266d0) */
/* WARNING: Removing unreachable block (ram,0x000100126700) */
/* WARNING: Removing unreachable block (ram,0x000100126710) */
/* WARNING: Removing unreachable block (ram,0x000100126744) */
/* WARNING: Removing unreachable block (ram,0x000100126734) */
/* WARNING: Removing unreachable block (ram,0x000100126758) */
/* WARNING: Removing unreachable block (ram,0x000100126778) */
/* WARNING: Removing unreachable block (ram,0x000100126788) */
/* WARNING: Removing unreachable block (ram,0x0001001267a4) */
/* WARNING: Removing unreachable block (ram,0x000100126738) */
/* WARNING: Removing unreachable block (ram,0x0001001267a8) */
/* WARNING: Removing unreachable block (ram,0x0001001266d8) */
/* WARNING: Removing unreachable block (ram,0x0001001266e0) */
/* WARNING: Removing unreachable block (ram,0x0001001267ac) */
/* WARNING: Removing unreachable block (ram,0x0001001267c0) */
/* WARNING: Removing unreachable block (ram,0x0001001267dc) */
/* WARNING: Removing unreachable block (ram,0x000100126874) */
/* WARNING: Removing unreachable block (ram,0x0001001268d0) */
/* WARNING: Removing unreachable block (ram,0x000100126930) */
/* WARNING: Removing unreachable block (ram,0x000100126938) */
/* WARNING: Removing unreachable block (ram,0x00010012687c) */
/* WARNING: Removing unreachable block (ram,0x000100126888) */
/* WARNING: Removing unreachable block (ram,0x000100126890) */
/* WARNING: Removing unreachable block (ram,0x000100126898) */
/* WARNING: Removing unreachable block (ram,0x0001001269bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268a0) */
/* WARNING: Removing unreachable block (ram,0x0001001268bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268c4) */
/* WARNING: Removing unreachable block (ram,0x0001001268cc) */
/* WARNING: Removing unreachable block (ram,0x000100126940) */
/* WARNING: Removing unreachable block (ram,0x000100126944) */
/* WARNING: Removing unreachable block (ram,0x00010012694c) */
/* WARNING: Removing unreachable block (ram,0x000100126958) */
/* WARNING: Removing unreachable block (ram,0x0001001267ec) */
/* WARNING: Removing unreachable block (ram,0x0001001267fc) */
/* WARNING: Removing unreachable block (ram,0x000100126808) */
/* WARNING: Removing unreachable block (ram,0x000100126818) */
/* WARNING: Removing unreachable block (ram,0x00010012695c) */
/* WARNING: Removing unreachable block (ram,0x000100126824) */
/* WARNING: Removing unreachable block (ram,0x000100126974) */
/* WARNING: Removing unreachable block (ram,0x000100126834) */
/* WARNING: Removing unreachable block (ram,0x000100126998) */
/* WARNING: Removing unreachable block (ram,0x000100126858) */
/* WARNING: Removing unreachable block (ram,0x0001001264c4) */
/* WARNING: Removing unreachable block (ram,0x000100126510) */
/* WARNING: Removing unreachable block (ram,0x000100126514) */
/* WARNING: Removing unreachable block (ram,0x000100126518) */

void FUN_10b32c194(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 **ppuVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *unaff_x20;
  undefined1 *puVar10;
  undefined *unaff_x24;
  ulong uVar11;
  undefined1 **ppuVar12;
  code *pcVar13;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 **ppuStack_60;
  undefined1 *puStack_58;
  
  uVar7 = param_2;
  _CFStringGetLength();
  if (uVar7 == 0) {
LAB_10b32c27c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  ppuStack_60 = &puStack_58;
  puStack_58 = (undefined1 *)0xaaaaaaaaaaaaaaaa;
  uVar6 = param_2;
  _CFStringGetBytes(param_2,0,uVar7,0x14000100,0,0,0,0);
  puVar10 = puStack_58;
  if ((uVar6 == 0) || (puStack_58 == (undefined1 *)0x0)) goto LAB_10b32c27c;
  uVar11 = (ulong)puStack_58 >> 1;
  if ((long)(uVar11 + 1) < 0) {
    FUN_10b32c324();
LAB_10b32c304:
    func_0x00010b30250c();
LAB_10b32c308:
    func_0x00010b2ed0ac();
    if (unaff_x20 != (undefined *)0x0) {
      __ZdlPv(unaff_x20);
    }
    uVar11 = uVar6;
    __Unwind_Resume();
    ppuVar12 = &puStack_70;
    pcStack_68 = FUN_10b32c324;
    pcVar13 = FUN_10b32c330;
    puStack_70 = &stack0xfffffffffffffff0;
    _abort();
    uVar1 = *(undefined4 *)(*(long *)(uVar11 + 8) + 0x10);
    ppuVar2 = &puStack_70;
    while( true ) {
      *(ulong *)((long)ppuVar2 + -0x30) = param_2;
      *(undefined1 **)((long)ppuVar2 + -0x28) = puVar10;
      *(undefined **)((long)ppuVar2 + -0x20) = unaff_x20;
      *(ulong *)((long)ppuVar2 + -0x18) = uVar6;
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar12;
      *(code **)((long)ppuVar2 + -8) = pcVar13;
      puVar9 = (undefined *)((long)ppuVar2 + -0x170);
      *(undefined8 *)((long)ppuVar2 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)((long)ppuVar2 + -0x188) = 0;
      *(undefined8 *)((long)ppuVar2 + -400) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x178) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x180) = 0;
      *(undefined4 *)((long)ppuVar2 + -0x184) = uVar1;
      puVar4 = (undefined1 *)((long)ppuVar2 + -400);
      unaff_x20 = (undefined *)0x102;
      func_0x000107c6107c(puVar4,0x102,0,0x20,uVar1,0,0);
      iVar3 = (int)puVar4;
      if ((iVar3 != 0) && (iVar3 != 0x10004003)) {
        *(undefined ***)((long)ppuVar2 + -0x170) = &PTR_FUN_110cd4a10;
        *(undefined4 *)((long)ppuVar2 + -0x168) = 3;
        *(undefined8 *)((long)ppuVar2 + -0xc0) = 0;
        *(undefined ***)((long)ppuVar2 + -0x160) =
             &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
        *(undefined ***)((long)ppuVar2 + -0xf0) =
             &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
        func_0x000107c60dd0((undefined1 *)((long)ppuVar2 + -0xf0),
                            (undefined1 *)((long)ppuVar2 + -0x158));
        *(undefined4 *)((long)ppuVar2 + -0x60) = 0xffffffff;
        *(undefined8 *)((long)ppuVar2 + -0x68) = 0;
        *(undefined ***)((long)ppuVar2 + -0xf0) = &PTR_DAT_11088d708;
        *(undefined ***)((long)ppuVar2 + -0x160) = &PTR_SUB_11088d6e0;
        *(undefined **)((long)ppuVar2 + -0x158) =
             PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
        func_0x000107c60dac((undefined1 *)((long)ppuVar2 + -0x150));
        *(undefined8 *)((long)ppuVar2 + -0x120) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x128) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x130) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x138) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x140) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x148) = 0;
        *(undefined ***)((long)ppuVar2 + -0x158) = &PTR_DAT_11088d7b0;
        *(undefined8 *)((long)ppuVar2 + -0x110) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x118) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x100) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x108) = 0;
        *(undefined4 *)((long)ppuVar2 + -0xf8) = 0x10;
        puVar5 = (undefined4 *)((long)ppuVar2 + -0x158);
        func_0x00010014d39c();
        *(undefined **)((long)ppuVar2 + -0x50) = &UNK_10f7457d8;
        *(undefined4 *)((long)ppuVar2 + -0x48) = 0x161;
        func_0x000107c60e5c();
        *(undefined4 *)((long)ppuVar2 + -0x44) = *puVar5;
        func_0x000107c60e5c();
        *puVar5 = 0;
        func_0x00010014d66c((undefined1 *)((long)ppuVar2 + -0x170),&UNK_10f7457d8,0x161);
        *(undefined ***)((long)ppuVar2 + -0x170) = &PTR_DAT_110cd6578;
        *(int *)((long)ppuVar2 + -0x40) = iVar3;
        func_0x00010014d9fc((undefined1 *)((long)ppuVar2 + -0x160),&UNK_10f745892,0x26);
        func_0x00010014d9fc();
        unaff_x20 = &UNK_10f74587f;
        puVar10 = (undefined1 *)((long)ppuVar2 + -0x170);
        puVar9 = &UNK_10f7457d8;
        func_0x00010014d9fc();
        func_0x000107c2cfe8((undefined1 *)((long)ppuVar2 + -0x170));
      }
      uVar6 = (ulong)(iVar3 == 0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar2 + -0x38)) break;
      func_0x000107c60e78();
      *(undefined **)((long)ppuVar2 + -0x1e0) = unaff_x24;
      *(ulong *)((long)ppuVar2 + -0x1d8) = uVar7;
      *(ulong *)((long)ppuVar2 + -0x1d0) = param_2;
      *(undefined1 **)((long)ppuVar2 + -0x1c8) = puVar10;
      *(undefined **)((long)ppuVar2 + -0x1c0) = puVar9;
      *(undefined1 **)((long)ppuVar2 + -0x1b8) = puVar4;
      *(undefined1 **)((long)ppuVar2 + -0x1b0) = (undefined1 *)((long)ppuVar2 + -0x10);
      *(undefined **)((long)ppuVar2 + -0x1a8) = &UNK_100126684;
      ppuVar12 = (undefined1 **)((long)ppuVar2 + -0x1b0);
      uVar1 = *(undefined4 *)(*(long *)(uVar6 + 0xa8) + 0x10);
      pcVar13 = (code *)&UNK_1001266b4;
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x210);
    }
    return;
  }
  unaff_x24 = (undefined *)((uVar11 + 1) * 2);
  unaff_x20 = unaff_x24;
  __Znwm();
  _bzero();
  ppuStack_60 = (undefined1 **)0x0;
  uVar6 = param_2;
  _CFStringGetBytes(param_2,0,uVar7,0x14000100,0,0,unaff_x20,puVar10);
  if (uVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto joined_r0x00010b32c290;
  }
  *(undefined2 *)(unaff_x20 + uVar11 * 2) = 0;
  if ((undefined1 *)0xffffffffffffffef < puVar10) goto LAB_10b32c304;
  if (puVar10 < (undefined1 *)0x16) {
    *(char *)((long)param_1 + 0x17) = (char)uVar11;
    puVar8 = param_1;
    if ((undefined1 *)0x1 < puVar10) goto LAB_10b32c2c4;
  }
  else {
    param_2 = 0xd;
    if ((uVar11 | 3) != 0xb) {
      param_2 = (uVar11 | 3) + 1;
    }
    if ((long)param_2 < 0) goto LAB_10b32c308;
    puVar8 = (undefined8 *)(param_2 << 1);
    __Znwm();
    param_1[1] = uVar11;
    param_1[2] = param_2 | 0x8000000000000000;
    *param_1 = puVar8;
LAB_10b32c2c4:
    _memcpy(puVar8,unaff_x20,(ulong)puVar10 & 0xfffffffffffffffe);
    param_1 = puVar8;
  }
  *(undefined2 *)((long)param_1 + uVar11 * 2) = 0;
joined_r0x00010b32c290:
  if (unaff_x20 == (undefined *)0x0) {
    return;
  }
  __ZdlPv(unaff_x20);
  return;
}



/* Entry: 10b32c324; end: 10b32c32f;  */

/* WARNING: Possible PIC construction at 0x0001001266b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100126814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001266b4) */
/* WARNING: Removing unreachable block (ram,0x0001001266cc) */
/* WARNING: Removing unreachable block (ram,0x0001001266d0) */
/* WARNING: Removing unreachable block (ram,0x000100126700) */
/* WARNING: Removing unreachable block (ram,0x000100126710) */
/* WARNING: Removing unreachable block (ram,0x000100126744) */
/* WARNING: Removing unreachable block (ram,0x000100126734) */
/* WARNING: Removing unreachable block (ram,0x000100126758) */
/* WARNING: Removing unreachable block (ram,0x000100126778) */
/* WARNING: Removing unreachable block (ram,0x000100126788) */
/* WARNING: Removing unreachable block (ram,0x0001001267a4) */
/* WARNING: Removing unreachable block (ram,0x000100126738) */
/* WARNING: Removing unreachable block (ram,0x0001001267a8) */
/* WARNING: Removing unreachable block (ram,0x0001001266d8) */
/* WARNING: Removing unreachable block (ram,0x0001001266e0) */
/* WARNING: Removing unreachable block (ram,0x0001001267ac) */
/* WARNING: Removing unreachable block (ram,0x0001001267c0) */
/* WARNING: Removing unreachable block (ram,0x0001001267dc) */
/* WARNING: Removing unreachable block (ram,0x000100126874) */
/* WARNING: Removing unreachable block (ram,0x0001001268d0) */
/* WARNING: Removing unreachable block (ram,0x000100126930) */
/* WARNING: Removing unreachable block (ram,0x000100126938) */
/* WARNING: Removing unreachable block (ram,0x00010012687c) */
/* WARNING: Removing unreachable block (ram,0x000100126888) */
/* WARNING: Removing unreachable block (ram,0x000100126890) */
/* WARNING: Removing unreachable block (ram,0x000100126898) */
/* WARNING: Removing unreachable block (ram,0x0001001269bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268a0) */
/* WARNING: Removing unreachable block (ram,0x0001001268bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268c4) */
/* WARNING: Removing unreachable block (ram,0x0001001268cc) */
/* WARNING: Removing unreachable block (ram,0x000100126940) */
/* WARNING: Removing unreachable block (ram,0x000100126944) */
/* WARNING: Removing unreachable block (ram,0x00010012694c) */
/* WARNING: Removing unreachable block (ram,0x000100126958) */
/* WARNING: Removing unreachable block (ram,0x0001001267ec) */
/* WARNING: Removing unreachable block (ram,0x0001001267fc) */
/* WARNING: Removing unreachable block (ram,0x000100126808) */
/* WARNING: Removing unreachable block (ram,0x000100126818) */
/* WARNING: Removing unreachable block (ram,0x00010012695c) */
/* WARNING: Removing unreachable block (ram,0x000100126824) */
/* WARNING: Removing unreachable block (ram,0x000100126974) */
/* WARNING: Removing unreachable block (ram,0x000100126834) */
/* WARNING: Removing unreachable block (ram,0x000100126998) */
/* WARNING: Removing unreachable block (ram,0x000100126858) */
/* WARNING: Removing unreachable block (ram,0x0001001264c4) */
/* WARNING: Removing unreachable block (ram,0x000100126510) */
/* WARNING: Removing unreachable block (ram,0x000100126514) */
/* WARNING: Removing unreachable block (ram,0x000100126518) */

void FUN_10b32c324(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  ulong unaff_x19;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar7;
  
  puVar4 = &stack0xfffffffffffffff0;
  pcVar7 = FUN_10b32c330;
  _abort();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
  puVar2 = &stack0xfffffffffffffff0;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined **)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(code **)(puVar2 + -8) = pcVar7;
    puVar6 = puVar2 + -0x170;
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar2 + -0x188) = 0;
    *(undefined8 *)(puVar2 + -400) = 0;
    *(undefined8 *)(puVar2 + -0x178) = 0;
    *(undefined8 *)(puVar2 + -0x180) = 0;
    *(undefined4 *)(puVar2 + -0x184) = uVar1;
    puVar4 = puVar2 + -400;
    unaff_x20 = (undefined *)0x102;
    func_0x000107c6107c(puVar4,0x102,0,0x20,uVar1,0,0);
    iVar3 = (int)puVar4;
    if ((iVar3 != 0) && (iVar3 != 0x10004003)) {
      *(undefined ***)(puVar2 + -0x170) = &PTR_FUN_110cd4a10;
      *(undefined4 *)(puVar2 + -0x168) = 3;
      *(undefined8 *)(puVar2 + -0xc0) = 0;
      *(undefined ***)(puVar2 + -0x160) =
           &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
      *(undefined ***)(puVar2 + -0xf0) =
           &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
      func_0x000107c60dd0(puVar2 + -0xf0,puVar2 + -0x158);
      *(undefined4 *)(puVar2 + -0x60) = 0xffffffff;
      *(undefined8 *)(puVar2 + -0x68) = 0;
      *(undefined ***)(puVar2 + -0xf0) = &PTR_DAT_11088d708;
      *(undefined ***)(puVar2 + -0x160) = &PTR_SUB_11088d6e0;
      *(undefined **)(puVar2 + -0x158) =
           PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
      func_0x000107c60dac(puVar2 + -0x150);
      *(undefined8 *)(puVar2 + -0x120) = 0;
      *(undefined8 *)(puVar2 + -0x128) = 0;
      *(undefined8 *)(puVar2 + -0x130) = 0;
      *(undefined8 *)(puVar2 + -0x138) = 0;
      *(undefined8 *)(puVar2 + -0x140) = 0;
      *(undefined8 *)(puVar2 + -0x148) = 0;
      *(undefined ***)(puVar2 + -0x158) = &PTR_DAT_11088d7b0;
      *(undefined8 *)(puVar2 + -0x110) = 0;
      *(undefined8 *)(puVar2 + -0x118) = 0;
      *(undefined8 *)(puVar2 + -0x100) = 0;
      *(undefined8 *)(puVar2 + -0x108) = 0;
      *(undefined4 *)(puVar2 + -0xf8) = 0x10;
      puVar5 = (undefined4 *)(puVar2 + -0x158);
      func_0x00010014d39c();
      *(undefined **)(puVar2 + -0x50) = &UNK_10f7457d8;
      *(undefined4 *)(puVar2 + -0x48) = 0x161;
      func_0x000107c60e5c();
      *(undefined4 *)(puVar2 + -0x44) = *puVar5;
      func_0x000107c60e5c();
      *puVar5 = 0;
      func_0x00010014d66c(puVar2 + -0x170,&UNK_10f7457d8,0x161);
      *(undefined ***)(puVar2 + -0x170) = &PTR_DAT_110cd6578;
      *(int *)(puVar2 + -0x40) = iVar3;
      func_0x00010014d9fc(puVar2 + -0x160,&UNK_10f745892,0x26);
      func_0x00010014d9fc();
      unaff_x20 = &UNK_10f74587f;
      unaff_x21 = puVar2 + -0x170;
      puVar6 = &UNK_10f7457d8;
      func_0x00010014d9fc();
      func_0x000107c2cfe8(puVar2 + -0x170);
    }
    unaff_x19 = (ulong)(iVar3 == 0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x38)) break;
    func_0x000107c60e78();
    *(undefined8 *)(puVar2 + -0x1e0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x1d8) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x1d0) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x1c8) = unaff_x21;
    *(undefined **)(puVar2 + -0x1c0) = puVar6;
    *(undefined1 **)(puVar2 + -0x1b8) = puVar4;
    *(undefined1 **)(puVar2 + -0x1b0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x1a8) = &UNK_100126684;
    puVar4 = puVar2 + -0x1b0;
    uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0xa8) + 0x10);
    pcVar7 = (code *)&UNK_1001266b4;
    puVar2 = puVar2 + -0x210;
  }
  return;
}



/* Entry: 10b32c330; end: 10b32c3eb;  */

/* WARNING: Possible PIC construction at 0x0001001266b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100126814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001266b4) */
/* WARNING: Removing unreachable block (ram,0x0001001266cc) */
/* WARNING: Removing unreachable block (ram,0x0001001266d0) */
/* WARNING: Removing unreachable block (ram,0x000100126700) */
/* WARNING: Removing unreachable block (ram,0x000100126710) */
/* WARNING: Removing unreachable block (ram,0x000100126744) */
/* WARNING: Removing unreachable block (ram,0x000100126734) */
/* WARNING: Removing unreachable block (ram,0x000100126758) */
/* WARNING: Removing unreachable block (ram,0x000100126778) */
/* WARNING: Removing unreachable block (ram,0x000100126788) */
/* WARNING: Removing unreachable block (ram,0x0001001267a4) */
/* WARNING: Removing unreachable block (ram,0x000100126738) */
/* WARNING: Removing unreachable block (ram,0x0001001267a8) */
/* WARNING: Removing unreachable block (ram,0x0001001266d8) */
/* WARNING: Removing unreachable block (ram,0x0001001266e0) */
/* WARNING: Removing unreachable block (ram,0x0001001267ac) */
/* WARNING: Removing unreachable block (ram,0x0001001267c0) */
/* WARNING: Removing unreachable block (ram,0x0001001267dc) */
/* WARNING: Removing unreachable block (ram,0x000100126874) */
/* WARNING: Removing unreachable block (ram,0x0001001268d0) */
/* WARNING: Removing unreachable block (ram,0x000100126930) */
/* WARNING: Removing unreachable block (ram,0x000100126938) */
/* WARNING: Removing unreachable block (ram,0x00010012687c) */
/* WARNING: Removing unreachable block (ram,0x000100126888) */
/* WARNING: Removing unreachable block (ram,0x000100126890) */
/* WARNING: Removing unreachable block (ram,0x000100126898) */
/* WARNING: Removing unreachable block (ram,0x0001001269bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268a0) */
/* WARNING: Removing unreachable block (ram,0x0001001268bc) */
/* WARNING: Removing unreachable block (ram,0x0001001268c4) */
/* WARNING: Removing unreachable block (ram,0x0001001268cc) */
/* WARNING: Removing unreachable block (ram,0x000100126940) */
/* WARNING: Removing unreachable block (ram,0x000100126944) */
/* WARNING: Removing unreachable block (ram,0x00010012694c) */
/* WARNING: Removing unreachable block (ram,0x000100126958) */
/* WARNING: Removing unreachable block (ram,0x0001001267ec) */
/* WARNING: Removing unreachable block (ram,0x0001001267fc) */
/* WARNING: Removing unreachable block (ram,0x000100126808) */
/* WARNING: Removing unreachable block (ram,0x000100126818) */
/* WARNING: Removing unreachable block (ram,0x00010012695c) */
/* WARNING: Removing unreachable block (ram,0x000100126824) */
/* WARNING: Removing unreachable block (ram,0x000100126974) */
/* WARNING: Removing unreachable block (ram,0x000100126834) */
/* WARNING: Removing unreachable block (ram,0x000100126998) */
/* WARNING: Removing unreachable block (ram,0x000100126858) */
/* WARNING: Removing unreachable block (ram,0x0001001264c4) */
/* WARNING: Removing unreachable block (ram,0x000100126510) */
/* WARNING: Removing unreachable block (ram,0x000100126514) */
/* WARNING: Removing unreachable block (ram,0x000100126518) */

void FUN_10b32c330(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  ulong unaff_x19;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined **)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar6 = puVar2 + -0x170;
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar2 + -0x188) = 0;
    *(undefined8 *)(puVar2 + -400) = 0;
    *(undefined8 *)(puVar2 + -0x178) = 0;
    *(undefined8 *)(puVar2 + -0x180) = 0;
    *(undefined4 *)(puVar2 + -0x184) = uVar1;
    puVar4 = puVar2 + -400;
    unaff_x20 = (undefined *)0x102;
    func_0x000107c6107c(puVar4,0x102,0,0x20,uVar1,0,0);
    iVar3 = (int)puVar4;
    if ((iVar3 != 0) && (iVar3 != 0x10004003)) {
      *(undefined ***)(puVar2 + -0x170) = &PTR_FUN_110cd4a10;
      *(undefined4 *)(puVar2 + -0x168) = 3;
      *(undefined8 *)(puVar2 + -0xc0) = 0;
      *(undefined ***)(puVar2 + -0x160) =
           &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
      *(undefined ***)(puVar2 + -0xf0) =
           &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
      func_0x000107c60dd0(puVar2 + -0xf0,puVar2 + -0x158);
      *(undefined4 *)(puVar2 + -0x60) = 0xffffffff;
      *(undefined8 *)(puVar2 + -0x68) = 0;
      *(undefined ***)(puVar2 + -0xf0) = &PTR_DAT_11088d708;
      *(undefined ***)(puVar2 + -0x160) = &PTR_SUB_11088d6e0;
      *(undefined **)(puVar2 + -0x158) =
           PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
      func_0x000107c60dac(puVar2 + -0x150);
      *(undefined8 *)(puVar2 + -0x120) = 0;
      *(undefined8 *)(puVar2 + -0x128) = 0;
      *(undefined8 *)(puVar2 + -0x130) = 0;
      *(undefined8 *)(puVar2 + -0x138) = 0;
      *(undefined8 *)(puVar2 + -0x140) = 0;
      *(undefined8 *)(puVar2 + -0x148) = 0;
      *(undefined ***)(puVar2 + -0x158) = &PTR_DAT_11088d7b0;
      *(undefined8 *)(puVar2 + -0x110) = 0;
      *(undefined8 *)(puVar2 + -0x118) = 0;
      *(undefined8 *)(puVar2 + -0x100) = 0;
      *(undefined8 *)(puVar2 + -0x108) = 0;
      *(undefined4 *)(puVar2 + -0xf8) = 0x10;
      puVar5 = (undefined4 *)(puVar2 + -0x158);
      func_0x00010014d39c();
      *(undefined **)(puVar2 + -0x50) = &UNK_10f7457d8;
      *(undefined4 *)(puVar2 + -0x48) = 0x161;
      func_0x000107c60e5c();
      *(undefined4 *)(puVar2 + -0x44) = *puVar5;
      func_0x000107c60e5c();
      *puVar5 = 0;
      func_0x00010014d66c(puVar2 + -0x170,&UNK_10f7457d8,0x161);
      *(undefined ***)(puVar2 + -0x170) = &PTR_DAT_110cd6578;
      *(int *)(puVar2 + -0x40) = iVar3;
      func_0x00010014d9fc(puVar2 + -0x160,&UNK_10f745892,0x26);
      func_0x00010014d9fc();
      unaff_x20 = &UNK_10f74587f;
      unaff_x21 = puVar2 + -0x170;
      puVar6 = &UNK_10f7457d8;
      func_0x00010014d9fc();
      func_0x000107c2cfe8(puVar2 + -0x170);
    }
    unaff_x19 = (ulong)(iVar3 == 0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x38)) break;
    func_0x000107c60e78();
    *(undefined8 *)(puVar2 + -0x1e0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x1d8) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x1d0) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x1c8) = unaff_x21;
    *(undefined **)(puVar2 + -0x1c0) = puVar6;
    *(undefined1 **)(puVar2 + -0x1b8) = puVar4;
    *(undefined1 **)(puVar2 + -0x1b0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x1a8) = &UNK_100126684;
    unaff_x29 = puVar2 + -0x1b0;
    uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0xa8) + 0x10);
    unaff_x30 = &UNK_1001266b4;
    puVar2 = puVar2 + -0x210;
  }
  return;
}



/* Entry: 10b32c3ec; end: 10b32c3f3;  */

undefined8 FUN_10b32c3ec(void)

{
  return 0;
}



/* Entry: 10b32c3f4; end: 10b32cea7;  */

undefined8 * FUN_10b32c3f4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_110cd67b8;
  param_1[1] = 0;
  if (plVar3 != (long *)0x0) {
    plVar1 = (long *)plVar3[2];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        __ZdlPv(plVar1[2]);
      }
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    __ZdlPv(plVar3);
  }
  return param_1;
}



/* Entry: 10b32cea8; end: 10b32d39b;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10b32cea8(long *******param_1,long *******param_2)

{
  long ******pppppplVar1;
  long *******ppppppplVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *plVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  long *******ppppppplVar17;
  long *******unaff_x20;
  undefined *puVar18;
  undefined *unaff_x21;
  long *******unaff_x22;
  long *******unaff_x23;
  undefined **ppuVar19;
  long *******unaff_x24;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long *plStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined *puStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long *******ppppppplStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  cVar5 = *(char *)((long)param_1 + 0x17);
  ppppppplVar9 = (long *******)*param_1;
  if (-1 < (long)cVar5) {
    ppppppplVar9 = param_1;
  }
  pppppplVar21 = param_1[1];
  if (-1 < cVar5) {
    pppppplVar21 = (long ******)(long)cVar5;
  }
  ppppppplVar8 = param_1;
  if (pppppplVar21 < (long ******)0x7) {
    ppppppplStack_78 = (long *******)0x0;
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    if (pppppplVar21 == (long ******)0x0) {
      puVar12 = (undefined *)0x0;
      goto LAB_10b32d290;
    }
  }
  else {
    if (*(int *)ppppppplVar9 == 0x626f6c67 && *(int *)((long)ppppppplVar9 + 3) == 0x2f6c6162) {
      lVar14 = (long)pppppplVar21 - 7;
      if (lVar14 != 0) {
        pbVar16 = (byte *)((long)ppppppplVar9 + 7);
        do {
          if ((9 < (*pbVar16 - 0x30 & 0xff)) &&
             (uVar6 = *pbVar16 - 0x41,
             0x25 < uVar6 || (1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)) {
            return (long *******)0x0;
          }
          lVar14 = lVar14 + -1;
          pbVar16 = pbVar16 + 1;
        } while (lVar14 != 0);
      }
      return (long *******)0x1;
    }
    if (pppppplVar21 < (long ******)0xe) {
      ppppppplStack_78 = (long *******)0x0;
      uStack_68 = 0;
    }
    else {
      if (*ppppppplVar9 == (long ******)0x6d5f646572616873 &&
          *(long *)((long)ppppppplVar9 + 6) == 0x2f79726f6d656d5f) {
        lVar14 = (long)pppppplVar21 - 0xe;
        if (lVar14 == 0) {
          return (long *******)0x1;
        }
        pbVar16 = (byte *)((long)ppppppplVar9 + 0xe);
        while( true ) {
          if ((9 < (*pbVar16 - 0x30 & 0xff)) &&
             (uVar6 = *pbVar16 - 0x41,
             0x25 < uVar6 || (1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)) break;
          lVar14 = lVar14 + -1;
          pbVar16 = pbVar16 + 1;
          if (lVar14 == 0) {
            return (long *******)0x1;
          }
        }
        return (long *******)0x0;
      }
      ppppppplStack_78 = (long *******)0x0;
      puStack_70 = (undefined *)0x0;
      uStack_68 = 0;
      if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
LAB_10b32d398:
        func_0x000104bd47d4();
        pcStack_88 = FUN_10b32d39c;
        ppppppplVar9 = ppppppplVar8;
        ppppppplStack_c0 = unaff_x24;
        ppppppplStack_b8 = unaff_x23;
        ppppppplStack_b0 = unaff_x22;
        puStack_a8 = unaff_x21;
        ppppppplStack_a0 = unaff_x20;
        ppppppplStack_98 = param_1;
        puStack_90 = &stack0xfffffffffffffff0;
        FUN_10b32d530();
        plVar10 = (long *)0x50;
        __Znwm();
        uVar3 = *(undefined4 *)(ppppppplVar8 + 8);
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(plVar10,*param_2,param_2[1]);
        }
        else {
          pppppplVar21 = *param_2;
          plVar10[1] = (long)param_2[1];
          *plVar10 = (long)pppppplVar21;
          plVar10[2] = (long)param_2[2];
        }
        plVar10[3] = (long)ppppppplVar9;
        *(undefined4 *)(plVar10 + 4) = uVar3;
        *(undefined4 *)((long)plVar10 + 0x24) = 0;
        *(undefined1 *)(plVar10 + 5) = 0;
        plVar10[8] = 0;
        plVar10[9] = 0;
        plVar10[7] = 0;
        plStack_c8 = plVar10;
        FUN_10b32d458(ppppppplVar8,&plStack_c8);
        if (plStack_c8 != (long *)0x0) {
          func_0x00010b32c5cc();
          __ZdlPv();
        }
        return ppppppplVar8;
      }
      if ((long ******)0x16 < pppppplVar21) {
        unaff_x20 = (long *******)0x19;
        if (((ulong)pppppplVar21 | 7) != 0x17) {
          unaff_x20 = (long *******)(((ulong)pppppplVar21 | 7) + 1);
        }
        ppppppplVar8 = unaff_x20;
        __Znwm();
        *(undefined1 *)ppppppplVar8 = ppppppplStack_78._0_1_;
        uStack_68 = (ulong)unaff_x20 | 0x8000000000000000;
        ppppppplStack_78 = ppppppplVar8;
      }
    }
  }
  puVar12 = PTR___DefaultRuneLocale_11034bcf8;
  puStack_70 = (undefined *)0x0;
  pppppplVar20 = (long ******)0x0;
  bVar11 = false;
  do {
    ppppppplVar9 = ppppppplStack_78;
    cVar5 = *(char *)((long)param_1 + 0x17);
    ppppppplVar17 = (long *******)*param_1;
    if (bVar11) {
      ppppppplVar2 = ppppppplVar17;
      if (-1 < cVar5) {
        ppppppplVar2 = param_1;
      }
      if (((long)*(char *)((long)ppppppplVar2 + (long)pppppplVar20) < 0) ||
         ((*(uint *)(puVar12 + (long)*(char *)((long)ppppppplVar2 + (long)pppppplVar20) * 4 + 0x3c)
           >> 0x10 & 1) == 0)) goto LAB_10b32d084;
      bVar11 = true;
    }
    else {
LAB_10b32d084:
      pppppplVar1 = (long ******)((long)pppppplVar20 + 1);
      if (pppppplVar1 < pppppplVar21) {
        ppppppplVar2 = ppppppplVar17;
        if (-1 < cVar5) {
          ppppppplVar2 = param_1;
        }
        if ((*(char *)((long)ppppppplVar2 + (long)pppppplVar20) == '0') &&
           (*(char *)((long)ppppppplVar2 + (long)pppppplVar1) == 'x')) {
          puVar18 = (undefined *)(long)(char)uStack_68._7_1_;
          if ((long)puVar18 < 0) {
            param_2 = (long *******)((uStack_68 & 0x7fffffffffffffff) - 1);
            uVar15 = (long)param_2 - (long)puStack_70;
            puVar18 = puStack_70;
          }
          else {
            param_2 = (long *******)0x16;
            uVar15 = 0x16 - (long)puVar18;
          }
          pppppplVar20 = pppppplVar1;
          if (uVar15 < 3) {
            ppppppplVar8 = (long *******)&ppppppplStack_78;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                      (ppppppplVar8,param_2,puVar18 + (3 - (long)param_2),puVar18,puVar18,0,3,
                       &UNK_10f746bb5);
            bVar11 = true;
          }
          else {
            if (-1 < (long)uStack_68) {
              ppppppplVar9 = (long *******)&ppppppplStack_78;
            }
            *(undefined1 *)((undefined2 *)((long)ppppppplVar9 + (long)puVar18) + 1) = 0x3f;
            *(undefined2 *)((long)ppppppplVar9 + (long)puVar18) = 0x7830;
            puVar18 = puVar18 + 3;
            puVar13 = puVar18;
            if (-1 < (long)uStack_68) {
              uStack_68 = CONCAT17((char)puVar18,(undefined7)uStack_68) & 0x7fffffffffffffff;
              puVar13 = puStack_70;
            }
            puStack_70 = puVar13;
            *(undefined1 *)((long)ppppppplVar9 + (long)puVar18) = 0;
            bVar11 = true;
          }
          goto LAB_10b32d050;
        }
      }
      if (-1 < cVar5) {
        ppppppplVar17 = param_1;
      }
      uVar4 = *(undefined1 *)((long)ppppppplVar17 + (long)pppppplVar20);
      if ((long)uStack_68 < 0) {
        puVar13 = (undefined *)((uStack_68 & 0x7fffffffffffffff) - 1);
        puVar18 = puStack_70;
        if (puStack_70 == puVar13) {
          unaff_x21 = puStack_70;
          if ((uStack_68 & 0x7fffffffffffffff) != 0x7ffffffffffffff7) {
            if (puVar13 < (undefined *)0x3ffffffffffffff3) {
              uVar15 = (long)puVar13 * 2 | 7;
              ppppppplVar8 = (long *******)0x19;
              if (uVar15 != 0x17) {
                ppppppplVar8 = (long *******)(uVar15 + 1);
              }
              ppppppplVar17 = (long *******)0x17;
              if ((undefined *)0xb < puVar13) {
                ppppppplVar17 = ppppppplVar8;
              }
              puVar18 = (undefined *)0x0;
              if (puVar13 != (undefined *)0x0) {
                puVar18 = puVar13;
              }
              unaff_x23 = (long *******)0x17;
              if (puVar13 != (undefined *)0x0) {
                unaff_x23 = ppppppplVar17;
              }
              unaff_x20 = (long *******)(ulong)(puVar18 == (undefined *)0x16);
              ppppppplVar8 = unaff_x23;
              __Znwm();
            }
            else {
              unaff_x20 = (long *******)0x0;
              unaff_x23 = (long *******)0x7ffffffffffffff7;
              ppppppplVar8 = unaff_x23;
              __Znwm();
              puVar18 = puVar13;
            }
            ppppppplVar17 = ppppppplVar8;
            if (puVar18 != (undefined *)0x0) goto LAB_10b32d13c;
            goto LAB_10b32d14c;
          }
          goto LAB_10b32d398;
        }
LAB_10b32d1f4:
        puStack_70 = puVar18 + 1;
        unaff_x24 = ppppppplStack_78;
      }
      else {
        if (uStack_68._7_1_ == 0x16) {
          ppppppplVar9 = (long *******)&ppppppplStack_78;
          puVar18 = (undefined *)0x16;
          unaff_x23 = (long *******)0x30;
          unaff_x20 = (long *******)0x1;
          ppppppplVar17 = (long *******)0x30;
          __Znwm();
LAB_10b32d13c:
          ppppppplVar8 = ppppppplVar17;
          param_2 = ppppppplVar9;
          _memmove(ppppppplVar17,ppppppplVar9,puVar18);
LAB_10b32d14c:
          if ((int)unaff_x20 == 0) {
            ppppppplVar8 = ppppppplVar9;
            __ZdlPv();
          }
          uStack_68 = (ulong)unaff_x23 | 0x8000000000000000;
          unaff_x22 = ppppppplVar9;
          ppppppplStack_78 = ppppppplVar17;
          goto LAB_10b32d1f4;
        }
        puVar18 = (undefined *)(ulong)uStack_68._7_1_;
        uStack_68 = CONCAT17(uStack_68._7_1_ + 1,(undefined7)uStack_68) & 0x7fffffffffffffff;
        unaff_x24 = (long *******)&ppppppplStack_78;
      }
      bVar11 = false;
      *(undefined *)((long)unaff_x24 + (long)puVar18) = uVar4;
      ((undefined *)((long)unaff_x24 + (long)puVar18))[1] = 0;
    }
LAB_10b32d050:
    pppppplVar20 = (long ******)((long)pppppplVar20 + 1);
  } while (pppppplVar20 < pppppplVar21);
  puVar12 = (undefined *)(uStack_68 >> 0x38);
LAB_10b32d290:
  puVar13 = puStack_70;
  ppppppplVar9 = ppppppplStack_78;
  puVar18 = &DAT_10f746f3d;
  ppuVar19 = &PTR_DAT_110cd6998;
  do {
    puVar7 = puVar18;
    _strlen();
    if ((uint)puVar12 >> 7 == 0) {
      if (puVar7 == puVar12) {
        ppppppplVar8 = (long *******)&ppppppplStack_78;
LAB_10b32d2a8:
        _memcmp(ppppppplVar8,puVar18);
        if ((int)ppppppplVar8 == 0) {
          ppppppplVar8 = (long *******)0x1;
          goto joined_r0x00010b32d304;
        }
      }
    }
    else if (puVar7 == puVar13) {
      ppppppplVar8 = ppppppplVar9;
      if (puVar13 != (undefined *)0xffffffffffffffff) goto LAB_10b32d2a8;
      func_0x00010b2ed138();
      break;
    }
    puVar18 = *ppuVar19;
    ppuVar19 = ppuVar19 + 1;
  } while (puVar18 != (undefined *)0x0);
  ppppppplVar8 = (long *******)0x0;
joined_r0x00010b32d304:
  if ((uint)puVar12 >> 7 != 0) {
    __ZdlPv(ppppppplVar9);
  }
  return ppppppplVar8;
}



/* Entry: 10b32d39c; end: 10b32d457;  */

long FUN_10b32d39c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puStack_48;
  
  lVar2 = param_1;
  FUN_10b32d530();
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar3,*param_2,param_2[1]);
  }
  else {
    uVar4 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    puVar3[2] = param_2[2];
  }
  puVar3[3] = lVar2;
  *(undefined4 *)(puVar3 + 4) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x24) = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[7] = 0;
  puStack_48 = puVar3;
  FUN_10b32d458(param_1,&puStack_48);
  if (puStack_48 != (undefined8 *)0x0) {
    func_0x00010b32c5cc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32d458; end: 10b32d52f;  */

long FUN_10b32d458(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = *param_2;
    FUN_10b32cea8();
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        return *(long *)(param_1 + 0x50);
      }
      lStack_38 = 0x9aaaaaaaaaaaaaa;
      uStack_48 = 0x6564726163736964;
      uStack_40 = 0xaaaaaaaaaaaa0064;
      lVar3 = param_1;
      FUN_10b32d530(param_1,&uStack_48);
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      if (lStack_38 < 0) {
        func_0x000107c3192c(puVar4,uStack_48,uStack_40);
      }
      else {
        puVar4[1] = uStack_40;
        *puVar4 = uStack_48;
        puVar4[2] = lStack_38;
      }
      puVar4[3] = lVar3;
      *(undefined4 *)(puVar4 + 4) = uVar1;
      *(undefined4 *)((long)puVar4 + 0x24) = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[7] = 0;
      lVar3 = *(long *)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar4;
      if (lVar3 != 0) {
        func_0x00010b32c5cc();
        __ZdlPv();
      }
      if (-1 < lStack_38) {
        return *(long *)(param_1 + 0x50);
      }
      __ZdlPv(uStack_48);
      return *(long *)(param_1 + 0x50);
    }
  }
  puVar4 = (undefined8 *)*param_2;
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar4,puVar4[1]);
    puVar4 = (undefined8 *)*param_2;
  }
  else {
    lStack_38 = puVar4[1];
    uStack_40 = *puVar4;
    in_stack_ffffffffffffffd0 = puVar4[2];
  }
  *param_2 = 0;
  param_1 = param_1 + 0x10;
  FUN_10b32d7ac(param_1,&uStack_40,&uStack_40);
  if (puVar4 != (undefined8 *)0x0) {
    func_0x00010b32c5cc();
    __ZdlPv();
  }
  if (-1 < in_stack_ffffffffffffffd0) {
    return *(long *)(param_1 + 0x38);
  }
  __ZdlPv(uStack_40);
  return *(long *)(param_1 + 0x38);
}



/* Entry: 10b32d530; end: 10b32d7ab;  */

undefined8 **** FUN_10b32d530(void)

{
  undefined4 uVar1;
  undefined8 ***pppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 ****appppuStack_e8 [2];
  char cStack_d1;
  undefined8 ****ppppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2cc94(appppuStack_e8,&UNK_10f74538c);
  func_0x000107c2cc94(&ppppuStack_d0,&UNK_10f7489bd);
  pppuStack_b8 = (undefined8 ****)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pppppuVar3 = (undefined8 *****)ppppuStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    pppppuVar3 = &ppppuStack_d0;
  }
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_98 = 0x1032547698badcfe;
  uStack_a0 = 0xefcdab8967452301;
  uStack_90 = 0xc3d2e1f0;
  func_0x000107c2b4f0(&uStack_a0,pppppuVar3,uStack_c8);
  pppppuVar3 = (undefined8 *****)&pppuStack_b8;
  func_0x000107c2b4f4(pppppuVar3,&uStack_a0);
  pppuVar2 = pppuStack_b8;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  pppppuVar4 = (undefined8 *****)appppuStack_e8[0];
  if ((char)bStack_b9 < '\0') {
    __ZdlPv();
    pppppuVar3 = (undefined8 *****)ppppuStack_d0;
    pppppuVar4 = (undefined8 *****)appppuStack_e8[0];
  }
  if (cStack_d1 < '\0') {
    __ZdlPv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) goto LAB_10b32d69c;
  }
  else {
    pppppuVar4 = pppppuVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
LAB_10b32d69c:
      ___stack_chk_fail();
      if (pppppuVar4[10] != (undefined8 ****)0x0) {
        return pppppuVar4[10];
      }
      ppuStack_138 = (undefined8 ***)0x9aaaaaaaaaaaaaa;
      ppuStack_148 = (undefined8 ***)0x6564726163736964;
      ppuStack_140 = (undefined8 ***)0xaaaaaaaaaaaa0064;
      pppppuVar3 = pppppuVar4;
      FUN_10b32d530(pppppuVar4,&ppuStack_148);
      ppppuVar5 = (undefined8 ****)0x50;
      __Znwm();
      uVar1 = *(undefined4 *)(pppppuVar4 + 8);
      if ((long)ppuStack_138 < 0) {
        func_0x000107c3192c(ppppuVar5,ppuStack_148,ppuStack_140);
      }
      else {
        ppppuVar5[1] = (undefined8 ***)ppuStack_140;
        *ppppuVar5 = (undefined8 ***)ppuStack_148;
        ppppuVar5[2] = (undefined8 ***)ppuStack_138;
      }
      ppppuVar5[3] = pppppuVar3;
      *(undefined4 *)(ppppuVar5 + 4) = uVar1;
      *(undefined4 *)((long)ppppuVar5 + 0x24) = 0;
      *(undefined1 *)(ppppuVar5 + 5) = 0;
      ppppuVar5[8] = (undefined8 ***)0x0;
      ppppuVar5[9] = (undefined8 ***)0x0;
      ppppuVar5[7] = (undefined8 ***)0x0;
      ppppuVar6 = pppppuVar4[10];
      pppppuVar4[10] = ppppuVar5;
      if (ppppuVar6 != (undefined8 ****)0x0) {
        func_0x00010b32c5cc();
        __ZdlPv();
      }
      if (-1 < (long)ppuStack_138) {
        return pppppuVar4[10];
      }
      __ZdlPv(ppuStack_148);
      return pppppuVar4[10];
    }
  }
  return (undefined8 ****)pppuVar2;
}



/* Entry: 10b32d7ac; end: 10b32d91b;  */

undefined1  [16] FUN_10b32d7ac(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  plVar12 = param_1 + 1;
  plVar11 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar11 != (long *)0x0) {
    uVar6 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      while( true ) {
        plVar12 = plVar11;
        plVar11 = (long *)plVar12[4];
        uVar7 = plVar12[5];
        if (-1 < (char)*(byte *)((long)plVar12 + 0x37)) {
          plVar11 = plVar12 + 4;
          uVar7 = (ulong)*(byte *)((long)plVar12 + 0x37);
        }
        uVar2 = uVar7;
        if (uVar6 <= uVar7) {
          uVar2 = uVar6;
        }
        puVar8 = puVar1;
        _memcmp(puVar1,plVar11,uVar2);
        bVar5 = uVar6 < uVar7;
        if ((int)puVar8 != 0) {
          bVar5 = (int)puVar8 < 0;
        }
        if (bVar5) break;
        _memcmp(plVar11,puVar1,uVar2);
        bVar5 = uVar7 < uVar6;
        if ((int)plVar11 != 0) {
          bVar5 = (int)plVar11 < 0;
        }
        if (!bVar5) {
          uVar10 = 0;
          goto LAB_10b32d900;
        }
        plVar11 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_10b32d894;
        }
      }
      plVar11 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_10b32d894:
  plVar9 = (long *)0x40;
  __Znwm();
  lVar15 = param_3[1];
  lVar14 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar3 = param_3[2];
  lVar4 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar9[5] = lVar15;
  plVar9[4] = lVar14;
  plVar9[6] = lVar3;
  plVar9[7] = lVar4;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar11 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar11 = (long *)*plVar13;
  }
  func_0x000107c2ca68(param_1[1],plVar11);
  param_1[2] = param_1[2] + 1;
  uVar10 = 1;
  plVar12 = plVar9;
LAB_10b32d900:
  auVar16._8_8_ = uVar10;
  auVar16._0_8_ = plVar12;
  return auVar16;
}



/* Entry: 10b32d91c; end: 10b32dfa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b32d91c(double *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *******pppppppcVar2;
  char *pcVar3;
  long lVar4;
  char ******ppppppcVar5;
  char ******ppppppcVar6;
  ulong uVar7;
  undefined *puVar8;
  char *******pppppppcVar9;
  char ******ppppppcVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  double dVar15;
  char *******pppppppcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  char *******pppppppcStack_60;
  char ******ppppppcStack_58;
  ulong uStack_50;
  
  if (5 < param_2) {
    if (param_2 - 6U < 2) {
      ppppppcVar6 = (char ******)"NULL";
      if ((char ******)*param_1 != (char ******)0x0) {
        ppppppcVar6 = (char ******)*param_1;
      }
      if (param_3 != 0) {
        ppppppcVar5 = ppppppcVar6;
        _strlen();
        pppppppcStack_60 = (char *******)ppppppcVar6;
        ppppppcStack_58 = ppppppcVar5;
        func_0x00010b2f73ac(&pppppppcStack_60,1,param_4);
        return;
      }
      ppppppcVar5 = ppppppcVar6;
      _strlen();
      lVar12 = (long)*(char *)((long)param_4 + 0x17);
      if (lVar12 < 0) {
        lVar12 = param_4[1];
        lVar4 = (param_4[2] & 0x7fffffffffffffff) - 1;
        ppppppcVar10 = (char ******)(lVar4 - lVar12);
      }
      else {
        lVar4 = 0x16;
        ppppppcVar10 = (char ******)(0x16 - lVar12);
      }
      if (ppppppcVar5 <= ppppppcVar10) {
        if (ppppppcVar5 == (char ******)0x0) {
          return;
        }
        puVar14 = param_4;
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          puVar14 = (undefined8 *)*param_4;
        }
        _memmove((long)puVar14 + lVar12,ppppppcVar6,ppppppcVar5);
        pcVar3 = (char *)((long)ppppppcVar5 + lVar12);
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          param_4[1] = pcVar3;
        }
        else {
          *(byte *)((long)param_4 + 0x17) = (byte)pcVar3 & 0x7f;
        }
        *(char *)((long)puVar14 + (long)pcVar3) = '\0';
        return;
      }
      pcVar3 = (char *)((long)ppppppcVar5 + (lVar12 - lVar4));
    }
    else {
      if (param_2 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010b32da4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_4);
        return;
      }
      if (param_2 != 9) {
        return;
      }
      lVar12 = (long)(char)*(byte *)((long)param_4 + 0x17);
      if (lVar12 < 0) {
        lVar12 = param_4[1];
        lVar4 = (param_4[2] & 0x7fffffffffffffff) - 1;
        if (0x20 < (ulong)(lVar4 - lVar12)) {
          puVar14 = (undefined8 *)*param_4;
          goto LAB_10b32ddbc;
        }
      }
      else {
        puVar14 = param_4;
        if (0x16 < *(byte *)((long)param_4 + 0x17)) {
LAB_10b32ddbc:
          puVar1 = (undefined8 *)((long)puVar14 + lVar12);
          puVar1[1] = 0x7263282064657472;
          *puVar1 = 0x6f707075736e5522;
          puVar1[3] = 0x2936373135323231;
          puVar1[2] = 0x2f6d6f632e677562;
          *(undefined1 *)(puVar1 + 4) = 0x22;
          lVar12 = lVar12 + 0x21;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            param_4[1] = lVar12;
          }
          else {
            *(byte *)((long)param_4 + 0x17) = (byte)lVar12 & 0x7f;
          }
          *(undefined1 *)((long)puVar14 + lVar12) = 0;
          return;
        }
        lVar4 = 0x16;
      }
      ppppppcVar6 = (char ******)&UNK_10f7489cc;
      pcVar3 = (char *)((lVar12 - lVar4) + 0x21);
      ppppppcVar5 = (char ******)0x21;
    }
code_r0x00010bdbccfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc_110346268
    )(param_4,lVar4,pcVar3,lVar12,lVar12,0,ppppppcVar5,ppppppcVar6);
    return;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      ppppppcVar6 = (char ******)"true";
      if (*(char *)param_1 == '\0') {
        ppppppcVar6 = (char ******)&DAT_10f6842c6;
      }
      ppppppcVar5 = (char ******)0x4;
      if (*(char *)param_1 == '\0') {
        ppppppcVar5 = (char ******)0x5;
      }
      lVar12 = (long)*(char *)((long)param_4 + 0x17);
      if (lVar12 < 0) {
        lVar12 = param_4[1];
        lVar4 = (param_4[2] & 0x7fffffffffffffff) - 1;
        if (ppppppcVar5 <= (char ******)(lVar4 - lVar12)) {
          puVar14 = (undefined8 *)*param_4;
          goto LAB_10b32de14;
        }
      }
      else {
        lVar4 = 0x16;
        puVar14 = param_4;
        if (ppppppcVar5 <= (char ******)(0x16 - lVar12)) {
LAB_10b32de14:
          _memcpy((long)puVar14 + lVar12,ppppppcVar6,ppppppcVar5);
          pcVar3 = (char *)((long)ppppppcVar5 + lVar12);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            param_4[1] = pcVar3;
          }
          else {
            *(byte *)((long)param_4 + 0x17) = (byte)pcVar3 & 0x7f;
          }
          *(char *)((long)puVar14 + (long)pcVar3) = '\0';
          return;
        }
      }
      pcVar3 = (char *)((long)ppppppcVar5 + (lVar12 - lVar4));
      goto code_r0x00010bdbccfc;
    }
    if (param_2 != 2) {
      return;
    }
    pcVar3 = "%llu";
LAB_10b32dabc:
    func_0x00010b307fd0(param_4,pcVar3);
    return;
  }
  if (param_2 == 3) {
    pcVar3 = "%lld";
    goto LAB_10b32dabc;
  }
  if (param_2 != 4) {
    if (param_2 != 5) {
      return;
    }
    pcVar3 = "\"0x%llx\"";
    if (param_3 == 0) {
      pcVar3 = "0x%llx";
    }
    goto LAB_10b32dabc;
  }
  dVar15 = *param_1;
  pppppppcStack_60 = (char *******)0x0;
  ppppppcStack_58 = (char ******)0x0;
  uStack_50 = 0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    if (NAN(dVar15)) {
      puVar8 = &DAT_10f517642;
      puVar11 = &UNK_10f7489ee;
    }
    else if (0.0 <= dVar15) {
      puVar8 = &DAT_10f5882ce;
      puVar11 = &UNK_10f748a00;
    }
    else {
      puVar8 = &DAT_10f5882c4;
      puVar11 = &UNK_10f7489f4;
    }
    if (param_3 == 0) {
      puVar11 = puVar8;
    }
    func_0x000107c2c4dc(&pppppppcStack_60,puVar11);
    goto LAB_10b32dd50;
  }
  func_0x00010b3053a4(&pppppppcStack_78);
  if ((long)uStack_50 < 0) {
    __ZdlPv(pppppppcStack_60);
  }
  ppppppcStack_58 = (char ******)uStack_70;
  pppppppcStack_60 = pppppppcStack_78;
  uStack_50 = uStack_68;
  uVar13 = uStack_68 >> 0x38;
  uVar7 = uStack_70;
  pppppppcVar9 = pppppppcStack_78;
  if (-1 < (long)uStack_68) {
    uVar7 = uVar13;
    pppppppcVar9 = (char *******)&pppppppcStack_60;
  }
  pppppppcVar2 = pppppppcVar9;
  _memchr(pppppppcVar9,0x2e,uVar7);
  if ((((pppppppcVar2 == (char *******)0x0) || ((long)pppppppcVar2 - (long)pppppppcVar9 == -1)) &&
      ((pppppppcVar2 = pppppppcVar9, _memchr(pppppppcVar9,0x65,uVar7),
       pppppppcVar2 == (char *******)0x0 || ((long)pppppppcVar2 - (long)pppppppcVar9 == -1)))) &&
     ((pppppppcVar2 = pppppppcVar9, _memchr(pppppppcVar9,0x45,uVar7),
      pppppppcVar2 == (char *******)0x0 || ((long)pppppppcVar2 - (long)pppppppcVar9 == -1)))) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppcStack_60,&DAT_10f36c659,2);
    uVar13 = uStack_50 >> 0x38;
  }
  if ((uint)uVar13 >> 7 == 0) {
    if ((char)pppppppcStack_60 != '.') {
      if (((uint)uVar13 < 2) || ((char)pppppppcStack_60 != '-')) goto LAB_10b32dd50;
      pppppppcVar9 = (char *******)&pppppppcStack_60;
LAB_10b32df60:
      if (*(char *)((long)pppppppcVar9 + 1) == '.') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&pppppppcStack_60,1,&DAT_10f62b058,1);
      }
      goto LAB_10b32dd50;
    }
    uVar7 = 0x16;
    ppppppcVar6 = (char ******)uVar13;
  }
  else {
    if (*(char *)pppppppcStack_60 != '.') {
      if ((*(char *)pppppppcStack_60 != '-') ||
         (pppppppcVar9 = pppppppcStack_60, ppppppcStack_58 < 2)) goto LAB_10b32dd50;
      goto LAB_10b32df60;
    }
    uVar7 = (uStack_50 & 0x7fffffffffffffff) - 1;
    ppppppcVar6 = ppppppcStack_58;
  }
  if ((char ******)uVar7 == ppppppcVar6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (&pppppppcStack_60,ppppppcVar6,1,ppppppcVar6,0,0,1,&DAT_10f62b058);
  }
  else {
    pppppppcVar9 = pppppppcStack_60;
    if (-1 < (char)uVar13) {
      pppppppcVar9 = (char *******)&pppppppcStack_60;
    }
    pcVar3 = "0";
    if (ppppppcVar6 != (char ******)0x0) {
      if (pppppppcVar9 < &UNK_10f62b059 && "0" < (char *)((long)pppppppcVar9 + (long)ppppppcVar6)) {
        pcVar3 = "";
      }
      pppppppcVar2 = pppppppcStack_60;
      if (-1 < (char)uVar13) {
        pppppppcVar2 = (char *******)&pppppppcStack_60;
      }
      _memmove((char *)((long)pppppppcVar2 + 1),pppppppcVar9,ppppppcVar6);
    }
    *(char *)pppppppcVar9 = *pcVar3;
    uVar7 = (long)ppppppcVar6 + 1;
    if ((long)uStack_50 < 0) {
      ppppppcStack_58 = (char ******)uVar7;
      *(char *)((long)pppppppcVar9 + uVar7) = '\0';
    }
    else {
      uStack_50 = CONCAT17((char)uVar7,(undefined7)uStack_50) & 0x7fffffffffffffff;
      *(char *)((long)pppppppcVar9 + uVar7) = '\0';
    }
  }
LAB_10b32dd50:
  func_0x00010b307fd0(param_4,"%s");
  if (-1 < (long)uStack_50) {
    return;
  }
  __ZdlPv(pppppppcStack_60);
  return;
}



/* Entry: 10b32dfa8; end: 10b32e42b;  */

byte * FUN_10b32dfa8(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      uVar5 = 0;
      do {
        bVar1 = param_1[uVar5 + 1];
        if (bVar1 == 8) {
          if (*(long **)(param_1 + uVar5 * 8 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + uVar5 * 8 + 0x18) + 8))();
            bVar1 = param_1[uVar5 + 1];
            goto LAB_10b32e03c;
          }
        }
        else {
LAB_10b32e03c:
          if ((bVar1 == 9) &&
             (puVar4 = *(undefined8 **)(param_1 + uVar5 * 8 + 0x18), puVar4 != (undefined8 *)0x0)) {
            if (puVar4[0x17] != 0) {
              plVar6 = (long *)puVar4[0x16];
              plVar3 = *(long **)(puVar4[0x15] + 8);
              *(long **)(*plVar6 + 8) = plVar3;
              *plVar3 = *plVar6;
              puVar4[0x17] = 0;
              while (plVar6 != puVar4 + 0x15) {
                plVar6 = (long *)plVar6[1];
                __ZdlPv();
              }
            }
            *puVar4 = &PTR_DAT_110cd71d0;
            lVar2 = puVar4[7];
            puVar4[7] = 0;
            if (lVar2 != 0) {
              __ZdaPv();
            }
            plVar6 = (long *)puVar4[4];
            if (plVar6 != (long *)0x0) {
              plVar7 = (long *)puVar4[5];
              plVar3 = plVar6;
              if (plVar7 != plVar6) {
                do {
                  plVar7 = plVar7 + -3;
                  lVar2 = *plVar7;
                  *plVar7 = 0;
                  if (lVar2 != 0) {
                    __ZdaPv();
                  }
                } while (plVar7 != plVar6);
                plVar3 = (long *)puVar4[4];
              }
              puVar4[5] = plVar6;
              __ZdlPv(plVar3);
            }
            __ZdlPv(puVar4);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_1);
    }
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 8) = uVar9;
    *(undefined8 *)param_1 = uVar8;
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10b32e42c; end: 10b32feab;  */

long FUN_10b32e42c(long param_1)

{
  long lVar1;
  
  FUN_10b331384(param_1 + 0x2578);
  FUN_10b331384(param_1 + 0x24e0);
  FUN_10b331384(param_1 + 0x2448);
  FUN_10b331384(param_1 + 0x23b0);
  FUN_10b331384(param_1 + 0x2318);
  FUN_10b331384(param_1 + 0x2280);
  FUN_10b331384(param_1 + 0x21e8);
  FUN_10b331384(param_1 + 0x2150);
  FUN_10b331384(param_1 + 0x20b8);
  FUN_10b331384(param_1 + 0x2020);
  FUN_10b331384(param_1 + 0x1f88);
  FUN_10b331384(param_1 + 0x1ef0);
  FUN_10b331384(param_1 + 0x1e58);
  FUN_10b331384(param_1 + 0x1dc0);
  FUN_10b331384(param_1 + 0x1d28);
  FUN_10b331384(param_1 + 0x1c90);
  FUN_10b331384(param_1 + 0x1bf8);
  FUN_10b331384(param_1 + 0x1b60);
  FUN_10b331384(param_1 + 0x1ac8);
  FUN_10b331384(param_1 + 0x1a30);
  FUN_10b331384(param_1 + 0x1998);
  FUN_10b331384(param_1 + 0x1900);
  FUN_10b331384(param_1 + 0x1868);
  FUN_10b331384(param_1 + 0x17d0);
  FUN_10b331384(param_1 + 0x1738);
  FUN_10b331384(param_1 + 0x16a0);
  FUN_10b331384(param_1 + 0x1608);
  FUN_10b331384(param_1 + 0x1570);
  FUN_10b331384(param_1 + 0x14d8);
  FUN_10b331384(param_1 + 0x1440);
  FUN_10b331384(param_1 + 0x13a8);
  FUN_10b331384(param_1 + 0x1310);
  FUN_10b331384(param_1 + 0x1278);
  FUN_10b331384(param_1 + 0x11e0);
  FUN_10b331384(param_1 + 0x1148);
  FUN_10b331384(param_1 + 0x10b0);
  FUN_10b331384(param_1 + 0x1018);
  FUN_10b331384(param_1 + 0xf80);
  FUN_10b331384(param_1 + 0xee8);
  FUN_10b331384(param_1 + 0xe50);
  FUN_10b331384(param_1 + 0xdb8);
  FUN_10b331384(param_1 + 0xd20);
  FUN_10b331384(param_1 + 0xc88);
  FUN_10b331384(param_1 + 0xbf0);
  FUN_10b331384(param_1 + 0xb58);
  FUN_10b331384(param_1 + 0xac0);
  FUN_10b331384(param_1 + 0xa28);
  FUN_10b331384(param_1 + 0x990);
  FUN_10b331384(param_1 + 0x8f8);
  FUN_10b331384(param_1 + 0x860);
  FUN_10b331384(param_1 + 0x7c8);
  FUN_10b331384(param_1 + 0x730);
  FUN_10b331384(param_1 + 0x698);
  FUN_10b331384(param_1 + 0x600);
  FUN_10b331384(param_1 + 0x568);
  FUN_10b331384(param_1 + 0x4d0);
  FUN_10b331384(param_1 + 0x438);
  FUN_10b331384(param_1 + 0x3a0);
  FUN_10b331384(param_1 + 0x308);
  FUN_10b331384(param_1 + 0x270);
  FUN_10b331384(param_1 + 0x1d8);
  FUN_10b331384(param_1 + 0x140);
  FUN_10b331384(param_1 + 0xa8);
  FUN_10b331384(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b32feac; end: 10b330337;  */

undefined8 FUN_10b32feac(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
LAB_10b32ff78:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x10b32ff7c);
    (*pcVar3)();
  }
  lVar4 = param_2;
  _strlen(param_2);
  puVar5 = (ulong *)(param_1 + 0x60);
  func_0x00010b324100(puVar5,param_2,lVar4);
  uVar6 = 0;
  if (puVar5 != (ulong *)0x0) {
    if ((puVar5[3] & 0xff) != 7) {
      return 0;
    }
    if (puVar5[3] != 7) {
LAB_10b32ff74:
      func_0x00010b32474c();
      goto LAB_10b32ff78;
    }
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0,0x10b32ff88);
      (*pcVar3)();
    }
    for (; uVar1 != uVar2; uVar1 = uVar1 + 0x20) {
      if ((*(ulong *)(uVar1 + 0x18) & 0xff) == 4) {
        if (*(ulong *)(uVar1 + 0x18) != 4) {
          func_0x00010b324728();
          goto LAB_10b32ff74;
        }
        func_0x000107c2827c(param_3,uVar1,uVar1);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 10b330338; end: 10b330373;  */

void FUN_10b330338(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10b330338(*param_1);
    FUN_10b330338(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b330374; end: 10b3305eb;  */

/* WARNING: Removing unreachable block (ram,0x00010b330678) */
/* WARNING: Removing unreachable block (ram,0x00010b330630) */
/* WARNING: Removing unreachable block (ram,0x00010b3306c0) */

ulong * FUN_10b330374(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong *puVar6;
  undefined8 ***pppuVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar14 = param_1[1] - *param_1;
  uVar12 = (lVar14 >> 5) + 1;
  if (uVar12 >> 0x3b == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 4;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar10 = 0x7ffffffffffffff;
    }
    puVar8 = param_1;
    if (uVar10 == 0) {
      puVar6 = (ulong *)0x0;
    }
    else {
      if (uVar10 >> 0x3b != 0) goto LAB_10b3305e8;
      puVar6 = (ulong *)(uVar10 << 5);
      __Znwm();
      puVar8 = puVar6;
    }
    cVar5 = *(char *)((long)param_2 + 0x17);
    puVar3 = (undefined8 *)*param_2;
    if (-1 < (long)cVar5) {
      puVar3 = param_2;
    }
    uVar12 = param_2[1];
    if (-1 < cVar5) {
      uVar12 = (long)cVar5;
    }
    if (uVar12 < 0x7ffffffffffffff8) {
      puVar8 = (ulong *)((long)puVar6 + lVar14);
      if (uVar12 < 0x17) {
        uStack_58 = CONCAT17((char)uVar12,(undefined7)uStack_58);
        pppuVar7 = &ppuStack_68;
        if (uVar12 == 0) goto LAB_10b33046c;
      }
      else {
        pppuVar13 = (undefined8 ***)0x19;
        if ((uVar12 | 7) != 0x17) {
          pppuVar13 = (undefined8 ***)((uVar12 | 7) + 1);
        }
        pppuVar7 = pppuVar13;
        __Znwm();
        uStack_58 = (ulong)pppuVar13 | 0x8000000000000000;
        ppuStack_68 = pppuVar7;
        uStack_60 = uVar12;
      }
      _memmove(pppuVar7,puVar3,uVar12);
LAB_10b33046c:
      *(undefined1 *)((long)pppuVar7 + uVar12) = 0;
      puVar8[1] = uStack_60;
      *puVar8 = (ulong)ppuStack_68;
      puVar8[2] = uStack_58;
      puVar8[3] = 4;
      pppuVar13 = (undefined8 ***)*param_1;
      pppuVar7 = (undefined8 ***)param_1[1];
      uVar12 = (long)puVar8 + ((long)pppuVar13 - (long)pppuVar7);
      if ((long)pppuVar13 - (long)pppuVar7 != 0) {
        lVar14 = 0;
        do {
          puVar3 = (undefined8 *)((long)pppuVar13 + lVar14);
          puVar4 = (undefined8 *)(uVar12 + lVar14);
          puVar4[3] = 0xffffffffffffffff;
          lVar11 = puVar3[3];
          if (lVar11 < 4) {
            if (lVar11 == 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            }
            else if (lVar11 == 2) {
              *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
            }
            else if (lVar11 == 3) {
              *puVar4 = *puVar3;
            }
          }
          else if (lVar11 < 6) {
            if (lVar11 == 4) {
              uVar16 = puVar3[1];
              uVar15 = *puVar3;
              puVar4[2] = puVar3[2];
              puVar4[1] = uVar16;
              *puVar4 = uVar15;
              puVar3[1] = 0;
              puVar3[2] = 0;
              *puVar3 = 0;
            }
            else if (lVar11 == 5) goto LAB_10b3304b8;
          }
          else if ((lVar11 == 6) || (lVar11 == 7)) {
LAB_10b3304b8:
            puVar1 = (undefined8 *)(uVar12 + lVar14);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar2 = (undefined8 *)((long)pppuVar13 + lVar14);
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1[2] = puVar2[2];
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
          }
          puVar4[3] = puVar3[3];
          lVar14 = lVar14 + 0x20;
        } while ((undefined8 ***)((long)pppuVar13 + lVar14) != pppuVar7);
        do {
          ppuStack_68 = pppuVar13;
          func_0x000107c2cf54(&ppuStack_68,pppuVar13[3]);
          pppuVar13 = pppuVar13 + 4;
        } while (pppuVar13 != pppuVar7);
        pppuVar13 = (undefined8 ***)*param_1;
      }
      *param_1 = uVar12;
      param_1[1] = (ulong)(puVar8 + 4);
      param_1[2] = (ulong)(puVar6 + uVar10 * 4);
      if (pppuVar13 != (undefined8 ***)0x0) {
        __ZdlPv(pppuVar13);
      }
      return puVar8 + 4;
    }
  }
  else {
    func_0x00010b2f52f4();
    puVar8 = param_1;
  }
  FUN_10b2ecf74();
LAB_10b3305e8:
  func_0x00010b2ed0ac();
  uVar12 = puVar8[6];
  if (uVar12 != 0) {
    uVar9 = puVar8[7];
    uVar10 = uVar12;
    if (uVar9 != uVar12) {
      do {
        uVar9 = uVar9 - 0x18;
      } while (uVar9 != uVar12);
      uVar10 = puVar8[6];
    }
    puVar8[7] = uVar12;
    __ZdlPv(uVar10);
  }
  uVar12 = puVar8[3];
  if (uVar12 != 0) {
    uVar9 = puVar8[4];
    uVar10 = uVar12;
    if (uVar9 != uVar12) {
      do {
        uVar9 = uVar9 - 0x18;
      } while (uVar9 != uVar12);
      uVar10 = puVar8[3];
    }
    puVar8[4] = uVar12;
    __ZdlPv(uVar10);
  }
  uVar12 = *puVar8;
  if (uVar12 != 0) {
    uVar9 = puVar8[1];
    uVar10 = uVar12;
    if (uVar9 != uVar12) {
      do {
        uVar9 = uVar9 - 0x18;
      } while (uVar9 != uVar12);
      uVar10 = *puVar8;
    }
    puVar8[1] = uVar12;
    __ZdlPv(uVar10);
  }
  return puVar8;
}



/* Entry: 10b3305ec; end: 10b3306eb;  */

/* WARNING: Removing unreachable block (ram,0x00010b330678) */
/* WARNING: Removing unreachable block (ram,0x00010b330630) */
/* WARNING: Removing unreachable block (ram,0x00010b3306c0) */

long * FUN_10b3305ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    lVar3 = param_1[7];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[6];
    }
    param_1[7] = lVar2;
    __ZdlPv(lVar1);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    lVar3 = param_1[4];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[3];
    }
    param_1[4] = lVar2;
    __ZdlPv(lVar1);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b3306ec; end: 10b330957;  */

long *** FUN_10b3306ec(long ****param_1,long ****param_2)

{
  bool bVar1;
  ulong uVar2;
  long **pplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  char cVar6;
  int iVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  uint uVar14;
  uint uVar15;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long lStack_a0;
  undefined2 uStack_98;
  undefined6 uStack_96;
  char cStack_81;
  long ***ppplStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_68._0_4_ = 0;
  uVar11 = 0;
  uVar14 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_b8 = *param_2;
  lStack_a0 = (long)ppplStack_b8 + (long)param_2[1];
  uStack_78 = 0;
  uStack_70 = 0;
  ppplStack_80 = (long ***)0x0;
  uStack_98 = 0x2c;
  cStack_81 = '\x01';
  uStack_68 = 0xaaaaaa0100000000;
  uStack_60 = 0xaaaaaaaa00000000;
  ppplStack_b0 = ppplStack_b8;
  ppplStack_a8 = ppplStack_b8;
  do {
    uVar2 = uStack_78;
    if (-1 < (char)uVar11) {
      uVar2 = uVar11;
    }
    pppplVar8 = &ppplStack_b8;
    iVar7 = (int)pppplVar8;
    if (uVar2 == 0 && (int)uStack_68 == 0) {
      func_0x00010b330a40();
      pppplVar10 = param_2;
      if (((ulong)pppplVar8 & 1) == 0) goto LAB_10b3307e8;
    }
    else {
      func_0x00010b330ce8();
      pppplVar10 = param_2;
      if (iVar7 == 0) {
LAB_10b3307e8:
        ppplStack_a8 = ppplStack_b8;
        uVar15 = 0;
        goto LAB_10b33080c;
      }
    }
    pppplVar13 = (long ****)ppplStack_b0;
    param_2 = (long ****)((long)ppplStack_a8 - (long)ppplStack_b0);
    ppplStack_c8 = ppplStack_b0;
    pppplVar10 = &ppplStack_c8;
    pppplVar8 = param_1;
    ppplStack_c0 = (long ***)param_2;
    FUN_10b330958();
    if ((int)pppplVar8 != 0) break;
    FUN_10b3049fc(pppplVar13,param_2,&UNK_10f748a0b,0x15);
    uVar14 = (uint)pppplVar13 ^ 1 | uVar14;
    uVar11 = uStack_70 >> 0x38;
  } while( true );
  ppplVar12 = (long ***)0x1;
  goto LAB_10b3308dc;
  while( true ) {
    ppplVar4 = ppplStack_b0;
    ppplVar12 = param_1[6];
    ppplVar5 = param_1[7];
    if (ppplVar12 != ppplVar5) {
      pppplVar13 = (long ****)((long)ppplStack_a8 - (long)ppplStack_b0);
      do {
        cVar6 = *(char *)((long)ppplVar12 + 0x17);
        ppplVar9 = (long ***)*ppplVar12;
        if (-1 < (long)cVar6) {
          ppplVar9 = ppplVar12;
        }
        pplVar3 = ppplVar12[1];
        if (-1 < cVar6) {
          pplVar3 = (long **)(long)cVar6;
        }
        pppplVar8 = (long ****)ppplVar4;
        pppplVar10 = pppplVar13;
        FUN_10b3049fc(ppplVar4,pppplVar13,ppplVar9,pplVar3);
        if (((ulong)pppplVar8 & 1) != 0) {
          uVar15 = 1;
          goto LAB_10b33080c;
        }
        pppplVar8 = (long ****)ppplVar4;
        pppplVar10 = pppplVar13;
        FUN_10b3049fc(ppplVar4,pppplVar13,&UNK_10f748a0b,0x15);
        uVar15 = (uint)pppplVar8 & uVar15;
        ppplVar12 = ppplVar12 + 3;
      } while (ppplVar12 != ppplVar5);
    }
    bVar1 = uVar15 == 0;
    uVar15 = 1;
    if (bVar1) break;
LAB_10b33080c:
    uVar11 = uStack_78;
    if (-1 < (long)uStack_70) {
      uVar11 = uStack_70 >> 0x38;
    }
    pppplVar8 = &ppplStack_b8;
    if (uVar11 == 0 && (int)uStack_68 == 0) {
      func_0x00010b330a40();
      if (((ulong)pppplVar8 & 1) == 0) goto LAB_10b3308c0;
    }
    else {
      func_0x00010b330ce8();
      if ((int)pppplVar8 == 0) goto LAB_10b3308c0;
    }
  }
  uVar15 = 0;
LAB_10b3308c0:
  ppplVar12 = (long ***)0x0;
  if ((uVar15 == 0) && (((uVar14 ^ 1) & 1) == 0)) {
    ppplVar12 = (long ***)(ulong)(*param_1 == param_1[1]);
  }
LAB_10b3308dc:
  if ((long)uStack_70 < 0) {
    pppplVar8 = (long ****)ppplStack_80;
    __ZdlPv();
  }
  if (cStack_81 < '\0') {
    pppplVar8 = (long ****)CONCAT62(uStack_96,uStack_98);
    __ZdlPv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_10b330954;
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
LAB_10b330954:
    ___stack_chk_fail();
    ppplVar12 = pppplVar8[3];
    ppplVar5 = pppplVar8[4];
    while( true ) {
      if (ppplVar12 == ppplVar5) {
        ppplVar12 = *pppplVar10;
        FUN_10b3049fc(ppplVar12,pppplVar10[1],&UNK_10f748a0b,0x15);
        if (((ulong)ppplVar12 & 1) == 0) {
          ppplVar12 = *pppplVar8;
          ppplVar5 = pppplVar8[1];
          if (ppplVar12 == ppplVar5) {
            return (long ***)0x0;
          }
          do {
            ppplVar9 = *pppplVar10;
            cVar6 = *(char *)((long)ppplVar12 + 0x17);
            ppplVar4 = (long ***)*ppplVar12;
            if (-1 < (long)cVar6) {
              ppplVar4 = ppplVar12;
            }
            pplVar3 = ppplVar12[1];
            if (-1 < cVar6) {
              pplVar3 = (long **)(long)cVar6;
            }
            FUN_10b3049fc(ppplVar9,pppplVar10[1],ppplVar4,pplVar3);
          } while ((((ulong)ppplVar9 & 1) == 0) &&
                  (ppplVar12 = ppplVar12 + 3, ppplVar12 != ppplVar5));
        }
        else {
          ppplVar9 = (long ***)0x0;
        }
        return ppplVar9;
      }
      ppplVar9 = *pppplVar10;
      cVar6 = *(char *)((long)ppplVar12 + 0x17);
      ppplVar4 = (long ***)*ppplVar12;
      if (-1 < (long)cVar6) {
        ppplVar4 = ppplVar12;
      }
      pplVar3 = ppplVar12[1];
      if (-1 < cVar6) {
        pplVar3 = (long **)(long)cVar6;
      }
      FUN_10b3049fc(ppplVar9,pppplVar10[1],ppplVar4,pplVar3);
      if (((ulong)ppplVar9 & 1) != 0) break;
      ppplVar12 = ppplVar12 + 3;
    }
    return (long ***)0x1;
  }
  return ppplVar12;
}



/* Entry: 10b330958; end: 10b330a3f;  */

ulong FUN_10b330958(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)param_1[3];
  puVar3 = (undefined8 *)param_1[4];
  while( true ) {
    if (puVar6 == puVar3) {
      uVar5 = *param_2;
      FUN_10b3049fc(uVar5,param_2[1],&UNK_10f748a0b,0x15);
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)param_1[1];
        if (puVar6 == puVar3) {
          return 0;
        }
        do {
          uVar5 = *param_2;
          cVar4 = *(char *)((long)puVar6 + 0x17);
          puVar1 = (undefined8 *)*puVar6;
          if (-1 < (long)cVar4) {
            puVar1 = puVar6;
          }
          lVar2 = puVar6[1];
          if (-1 < cVar4) {
            lVar2 = (long)cVar4;
          }
          FUN_10b3049fc(uVar5,param_2[1],puVar1,lVar2);
        } while (((uVar5 & 1) == 0) && (puVar6 = puVar6 + 3, puVar6 != puVar3));
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
    uVar5 = *param_2;
    cVar4 = *(char *)((long)puVar6 + 0x17);
    puVar1 = (undefined8 *)*puVar6;
    if (-1 < (long)cVar4) {
      puVar1 = puVar6;
    }
    lVar2 = puVar6[1];
    if (-1 < cVar4) {
      lVar2 = (long)cVar4;
    }
    FUN_10b3049fc(uVar5,param_2[1],puVar1,lVar2);
    if ((uVar5 & 1) != 0) break;
    puVar6 = puVar6 + 3;
  }
  return 1;
}



/* Entry: 10b330a40; end: 10b331377;  */

undefined8 FUN_10b330a40(long param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  pbVar12 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  *(byte **)(param_1 + 8) = pbVar12;
  if (pbVar12 != pbVar3) {
    lVar1 = param_1 + 0x20;
    cVar6 = *(char *)(param_1 + 0x37);
    lVar11 = (long)cVar6;
    if (lVar11 < 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      do {
        pbVar2 = pbVar12 + 1;
        *(byte **)(param_1 + 0x10) = pbVar2;
        bVar5 = *pbVar12;
        lVar10 = lVar9;
        _memchr(lVar9,(long)(char)bVar5,uVar4);
        if ((lVar10 == 0 || lVar10 - lVar9 == -1) &&
           ((bVar8 = *(int *)(param_1 + 0x58) == 1, !bVar8 ||
            (0x20 < bVar5 || (1L << ((ulong)(uint)bVar5 & 0x3f) & 0x100003600U) == 0)))) {
LAB_10b330b70:
          pbVar12 = pbVar12 + 1;
          if (pbVar12 != pbVar3) {
            if (cVar6 < '\0') {
              lVar1 = *(long *)(param_1 + 0x20);
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              if (bVar8) {
                do {
                  bVar5 = *pbVar12;
                  lVar11 = lVar1;
                  _memchr(lVar1,(long)(char)bVar5,uVar4);
                  if (lVar11 != 0 && lVar11 - lVar1 != -1) {
                    return 1;
                  }
                  uVar7 = bVar5 - 9;
                  if ((uVar7 < 0x18) && ((0x80001bU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
                    return 1;
                  }
                  pbVar12 = pbVar12 + 1;
                  *(byte **)(param_1 + 0x10) = pbVar12;
                } while (pbVar12 != pbVar3);
              }
              else {
                do {
                  lVar11 = lVar1;
                  _memchr(lVar1,(long)(char)*pbVar12,uVar4);
                  if (lVar11 != 0 && lVar11 - lVar1 != -1) {
                    return 1;
                  }
                  pbVar12 = pbVar12 + 1;
                  *(byte **)(param_1 + 0x10) = pbVar12;
                } while (pbVar12 != pbVar3);
              }
            }
            else if (bVar8) {
              do {
                bVar5 = *pbVar12;
                lVar9 = lVar1;
                _memchr(lVar1,(long)(char)bVar5,lVar11);
                if (lVar9 != 0 && lVar9 - lVar1 != -1) {
                  return 1;
                }
                uVar7 = bVar5 - 9;
                if ((uVar7 < 0x18) && ((0x80001bU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
                  return 1;
                }
                pbVar12 = pbVar12 + 1;
                *(byte **)(param_1 + 0x10) = pbVar12;
              } while (pbVar12 != pbVar3);
            }
            else {
              do {
                lVar9 = lVar1;
                _memchr(lVar1,(long)(char)*pbVar12,lVar11);
                if (lVar9 != 0 && lVar9 - lVar1 != -1) {
                  return 1;
                }
                pbVar12 = pbVar12 + 1;
                *(byte **)(param_1 + 0x10) = pbVar12;
              } while (pbVar12 != pbVar3);
            }
          }
          return 1;
        }
        *(byte **)(param_1 + 8) = pbVar2;
        pbVar12 = pbVar2;
      } while (pbVar2 != pbVar3);
    }
    else {
      do {
        pbVar2 = pbVar12 + 1;
        *(byte **)(param_1 + 0x10) = pbVar2;
        bVar5 = *pbVar12;
        lVar9 = lVar1;
        _memchr(lVar1,(long)(char)bVar5,lVar11);
        if ((lVar9 == 0 || lVar9 - lVar1 == -1) &&
           ((bVar8 = *(int *)(param_1 + 0x58) == 1, !bVar8 ||
            (0x20 < bVar5 || (1L << ((ulong)(uint)bVar5 & 0x3f) & 0x100003600U) == 0))))
        goto LAB_10b330b70;
        *(byte **)(param_1 + 8) = pbVar2;
        pbVar12 = pbVar2;
      } while (pbVar2 != pbVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  return 0;
}



/* Entry: 10b331378; end: 10b33137b;  */

void FUN_10b331378(void)

{
  return;
}



/* Entry: 10b33137c; end: 10b331383;  */

undefined8 FUN_10b33137c(void)

{
  return 0;
}


