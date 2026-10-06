/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100744dc4; end: 100744e33;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long * FUN_100744dc4(undefined8 *param_1,long *param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  long in_stack_ffffffffffffffd8;
  
  if ((param_3 == 7) && ((int)*param_2 == 0x6174733a && *(int *)((long)param_2 + 3) == 0x73757461))
  {
    plVar5 = param_4;
    FUN_100745064();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_10074582c();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 7) && ((int)*param_2 == 0x6863733a && *(int *)((long)param_2 + 3) == 0x656d6568))
  {
    plVar5 = param_4;
    FUN_100744e34();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100744f54();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x2d746e65746e6f63 && (int)param_2[1] == 0x65707974)) {
    plVar5 = param_4;
    FUN_100746544();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100746644();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 2) && ((short)*param_2 == 0x6574)) {
    plVar5 = param_4;
    func_0x000104aa30c8();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3184();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(char *)(param_1 + 1) = (char)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x636e652d63707267 && *(long *)((long)param_2 + 5) == 0x676e69646f636e65)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa34e0();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x746e692d63707267 && param_2[1] == 0x6e652d6c616e7265) &&
      param_2[2] == 0x722d676e69646f63) && *(long *)((long)param_2 + 0x16) == 0x747365757165722d)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa37a4();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6363612d63707267 && param_2[1] == 0x6f636e652d747065) &&
      (int)param_2[2] == 0x676e6964)) {
    plVar5 = param_4;
    func_0x000104aa38c0();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3998();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar11 = (long *)0x1;
    __Znwm();
    *(char *)plVar11 = (char)plVar5;
    param_1[1] = plVar11;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x6174732d63707267 && *(long *)((long)param_2 + 3) == 0x7375746174732d63)) {
    plVar5 = param_4;
    func_0x000104aa3cc4();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3d80();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x6d69742d63707267 && (int)param_2[1] == 0x74756f65)) {
    plVar5 = param_4;
    func_0x000104aa4050();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa410c();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1a) &&
     (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
      param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
    plVar5 = param_4;
    FUN_100745064();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa4414();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x16) &&
     ((*param_2 == 0x7465722d63707267 && param_2[1] == 0x62687375702d7972) &&
      *(long *)((long)param_2 + 0xe) == 0x736d2d6b63616268)) {
    plVar5 = param_4;
    func_0x000104aa4520();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa45dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 10) && (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_100746894();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar3 = 0x130a5d70;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *)0x1130a5d30;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar3 = 0x130a5db8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *)0x1130a5d78;
  }
  if ((param_3 == 4) && ((int)*param_2 == 0x74736f68)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_10074676c();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar3 = 0x130a5e00;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *)0x1130a5dc0;
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
      param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar3 = 0x130a5e48;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *)0x1130a5e08;
  }
  if ((param_3 == 0x15) &&
     ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar3 = 0x130a5e90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *)0x1130a5e50;
  }
  if ((param_3 == 0xe) &&
     (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar3 = 0x130a5ed8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *)0x1130a5e98;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar3 = 0x130a5f20;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *)0x1130a5ee0;
  }
  if ((param_3 == 0x13) &&
     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    plVar5 = param_4;
    func_0x000104aa5090();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa50dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    plVar5 = param_4;
    func_0x000104aa5360(&lStack_40);
    lVar9 = param_4[6];
    func_0x000104aa5414();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar5 = (long *)0x20;
    __Znwm();
    *plVar5 = lStack_40;
    plVar5[2] = in_stack_ffffffffffffffd0;
    plVar5[1] = lStack_38;
    plVar5[3] = in_stack_ffffffffffffffd8;
    param_1[1] = plVar5;
    return plVar5;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar3 = 0x130a5ff8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *)0x1130a5fb8;
  }
  pplVar7 = &plStack_70;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&plStack_48,param_2,param_3);
  lStack_68 = param_4[1];
  plStack_70 = (long *)*param_4;
  pcStack_58 = (code *)param_4[3];
  puStack_60 = (undefined1 *)param_4[2];
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  pplVar6 = &plStack_48;
  FUN_1007462d4(param_1);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar10 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar5 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar10 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar5 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return plVar5;
  }
  func_0x000107c60e78();
  if ((int)pplVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_70);
    FUN_1004b6d90(&plStack_48);
  }
  func_0x000107c60bd8();
  plVar11 = *pplVar6;
  if (plVar11 == (long *)0x0) {
    plVar15 = (long *)((long)pplVar6 + 9);
    plVar14 = (long *)(ulong)*(byte *)(pplVar6 + 1);
  }
  else {
    plVar14 = pplVar6[1];
    plVar15 = pplVar6[2];
  }
  if (plVar14 < (long *)0x4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(*(int *)((long)plVar14 + (long)plVar15 + -4) == 0x6e69622d);
  }
  *plVar5 = (long)(&UNK_1107c4388 + uVar13 * 0x40);
  if (plVar11 == (long *)0x0) {
    uVar8 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar8 = (uint)pplVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar12 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar12 = (uint)pplVar7[1];
  }
  *(uint *)(plVar5 + 5) = uVar12 + uVar8 + 0x20;
  puVar4 = (undefined8 *)0x40;
  func_0x000107c60e20();
  plVar11 = *pplVar6;
  plVar14 = pplVar6[3];
  plVar15 = pplVar6[2];
  puVar4[1] = pplVar6[1];
  *puVar4 = plVar11;
  puVar4[3] = plVar14;
  puVar4[2] = plVar15;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  lVar9 = (long)*pplVar7;
  lVar16 = (long)pplVar7[3];
  lVar10 = (long)pplVar7[2];
  puVar4[5] = pplVar7[1];
  puVar4[4] = lVar9;
  puVar4[7] = lVar16;
  puVar4[6] = lVar10;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  plVar5[1] = (long)puVar4;
  return plVar5;
}



/* Entry: 100744e34; end: 100744f0f;  */

long * FUN_100744e34(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  plStack_40 = (long *)param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = uStack_48 & 0xff;
  plVar3 = (long *)((ulong)&plStack_50 | 9);
  if (plStack_50 != (long *)0x0) {
    uVar6 = uStack_48;
    plVar3 = plStack_40;
  }
  FUN_1005612f0(plVar3,uVar6,param_1[4],param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    if (iVar5 != 0) {
      func_0x000104bd46a0();
      FUN_1004b6d90(&plStack_50);
    }
    func_0x000107c60bd8();
    plVar3 = plVar4;
    FUN_100744e34();
    lVar7 = plVar4[6];
    plVar4 = plVar3;
    FUN_100744f54();
    *extraout_x8 = plVar4;
    *(int *)(extraout_x8 + 5) = (int)lVar7;
    *(int *)(extraout_x8 + 1) = (int)plVar3;
    return plVar4;
  }
  return plVar3;
}



/* Entry: 100744f10; end: 100744f53;  */

void FUN_100744f10(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_100744e34();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_100744f54();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 100744f54; end: 100744fe3;  */

undefined8 FUN_100744f54(void)

{
  int iVar1;
  
  if ((bRam00000001130a5aa0 & 1) == 0) {
    iVar1 = 0x130a5aa0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5a60 = 0;
      pcRam00000001130a5a68 = FUN_100744a04;
      puRam00000001130a5a70 = &UNK_104aa2da8;
      puRam00000001130a5a78 = &UNK_104aa2cc4;
      puRam00000001130a5a80 = &UNK_104aa2dc8;
      puRam00000001130a5a88 = &DAT_10f760239;
      uRam00000001130a5a90 = 7;
      uRam00000001130a5a98 = 0;
      func_0x000107c60e4c(0x1130a5aa0);
    }
  }
  return 0x1130a5a60;
}



/* Entry: 100744fe4; end: 100745063;  */

undefined4 FUN_100744fe4(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  FUN_100745164(uVar1,uVar2,&uStack_34,10);
  if ((uVar1 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,param_1);
    uStack_34 = 0;
  }
  return uStack_34;
}



/* Entry: 100745064; end: 10074511f;  */

long * FUN_100745064(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar7 = param_1[4];
  FUN_100744fe4(&plStack_50,uVar7,param_1[5]);
  iVar6 = (int)uVar7;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  plVar5 = plVar4;
  FUN_100745064();
  lVar8 = plVar4[6];
  plVar4 = plVar5;
  FUN_10074582c();
  *extraout_x8 = plVar4;
  *(int *)(extraout_x8 + 5) = (int)lVar8;
  *(int *)(extraout_x8 + 1) = (int)plVar5;
  return plVar4;
}



/* Entry: 100745120; end: 100745163;  */

void FUN_100745120(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_100745064();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_10074582c();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 100745164; end: 10074534f;  */

undefined8 FUN_100745164(byte *param_1,long param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = param_1;
  if (0 < param_2) {
    do {
      if (((byte)(&UNK_10e52ca36)[*pbVar6] >> 3 & 1) == 0) break;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while (((byte)(&UNK_10e52ca36)[(param_1 + lVar5)[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar6;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (pbVar6 = pbVar6 + 1, param_1 + lVar5 <= pbVar6)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar6) + 1)) && (*pbVar6 == 0x30)) &&
       ((pbVar6[1] | 0x20) == 0x78)) goto LAB_10074526c;
  }
  else {
    if (param_4 != 0) {
      if (0x22 < param_4 - 2) {
        return 0;
      }
      goto LAB_1007452c4;
    }
    if ((long)(param_1 + (param_2 - (long)pbVar6) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar6) == (byte *)0x0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0x30) {
          pbVar6 = pbVar6 + 1;
        }
        param_4 = 8;
        if (bVar1 != 0x30) {
          param_4 = 10;
        }
      }
      goto LAB_1007452c4;
    }
    if (*pbVar6 != 0x30) {
      param_4 = 10;
      goto LAB_1007452c4;
    }
    if ((pbVar6[1] | 0x20) != 0x78) {
      param_4 = 8;
      pbVar6 = pbVar6 + 1;
      goto LAB_1007452c4;
    }
LAB_10074526c:
    pbVar6 = pbVar6 + 2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
  }
  param_4 = 0x10;
LAB_1007452c4:
  if (bVar2 == 0x2d) {
    return 0;
  }
  if ((long)(param_1 + lVar5) - (long)pbVar6 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      pbVar7 = pbVar6 + 1;
      cVar3 = (&UNK_10e5302b8)[*pbVar6];
      if (param_4 <= (uint)(int)cVar3) {
        uVar4 = 0;
        goto LAB_100745348;
      }
      if (*(uint *)(&UNK_10e530730 + (ulong)param_4 * 4) < uVar8) {
LAB_100745338:
        uVar4 = 0;
        uVar8 = 0xffffffff;
        goto LAB_100745348;
      }
      if (CARRY4((int)cVar3,uVar8 * param_4)) goto LAB_100745338;
      uVar8 = uVar8 * param_4 + (int)cVar3;
      pbVar6 = pbVar7;
    } while (pbVar7 < param_1 + lVar5);
  }
  uVar4 = 1;
LAB_100745348:
  *param_3 = uVar8;
  return uVar4;
}



/* Entry: 100745350; end: 100745413; -[SCLensFeedUpdateStrategy initWithTimeProvider:clientTtlInSeconds:feedContextProvider:] */

undefined1 *
FUN_100745350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_38 = PTR_PTR_1127016e0;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c4223c(param_5);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100745414; end: 100745453; +[SCLensCustomNamespace namespaceNames] */

void FUN_100745414(void)

{
  if (lRam0000000113036c30 != -1) {
    func_0x000107c61568(0x113036c30,FUN_100745454);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138127c8);
  return;
}



/* Entry: 100745454; end: 100745553;  */

void FUN_100745454(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x112d38dc0;
  FUN_1000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000018;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f1d3720;
  *(undefined **)(lVar1 + 0x38) = puVar2;
  *(undefined8 *)(lVar1 + 0x40) = 0xd000000000000021;
  *(undefined8 *)(lVar1 + 0x48) = 0x800000010f1d3740;
  *(undefined **)(lVar1 + 0x78) = puVar2;
  *(undefined **)(lVar1 + 0x58) = puVar2;
  *(undefined8 *)(lVar1 + 0x60) = 0xd00000000000001c;
  *(undefined8 *)(lVar1 + 0x68) = 0x800000010f1d3770;
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c610f8();
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar1);
  func_0x000107c45788();
  func_0x000107c61170(lVar3);
  puRam00000001138127c8 = puVar2;
  return;
}



/* Entry: 100745554; end: 1007457d3; -[SCMixerNamespaceServiceFactory initWithMetadataStoreProvider:memoryMetadataStoreProvider:feedMetadataStoreProvider:updater:inMemoryUpdater:updateStrategy:feedUpdateStrategy:customNamespaceNames:lensDataConfig:performer:namespaceDataPerformer:] */

undefined8 *
FUN_100745554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_112701638;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007457d4; end: 10074582b;  */

/* WARNING: Possible PIC construction at 0x0001007457e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007457f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100745808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100745818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010074580c) */
/* WARNING: Removing unreachable block (ram,0x0001007457fc) */
/* WARNING: Removing unreachable block (ram,0x0001007457ec) */
/* WARNING: Removing unreachable block (ram,0x00010074581c) */

void FUN_1007457d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 10074582c; end: 1007458bb;  */

undefined8 FUN_10074582c(void)

{
  int iVar1;
  
  if ((bRam00000001130a5a58 & 1) == 0) {
    iVar1 = 0x130a5a58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5a18 = 0;
      pcRam00000001130a5a20 = FUN_100744a04;
      puRam00000001130a5a28 = &UNK_104aa2b80;
      puRam00000001130a5a30 = &UNK_104aa2ac4;
      puRam00000001130a5a38 = &UNK_104aa2ba0;
      puRam00000001130a5a40 = &DAT_10f743e21;
      uRam00000001130a5a48 = 7;
      uRam00000001130a5a50 = 0;
      func_0x000107c60e4c(0x1130a5a58);
    }
  }
  return 0x1130a5a18;
}



/* Entry: 1007458bc; end: 10074590f;  */

void FUN_1007458bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c4cfdc(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126de668;
  func_0x000107c610f4(PTR_PTR_1126de668);
  func_0x000107c4782c();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100745910; end: 10074591b; -[SCMixerNamespaceServiceFactory mixerServiceForServiceType:] */

void FUN_100745910(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cf190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mixerServiceForServiceType_updat_112611678,param_3,
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10074591c; end: 10074599f; -[SCMixerNamespaceServiceFactory mixerServiceForServiceType:updateStrategy:snapSource:] */

void FUN_10074591c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3c490(param_1,param_2,param_3,param_5);
  func_0x000107c61180();
  func_0x000107c4cfd4(param_1,param_2,uVar1,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1007459a0; end: 100745c2b; -[SCMixerNamespaceServiceFactory _scheduleNamespacesForServiceType:snapSource:] */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long ** FUN_1007459a0(long *param_1,long param_2,long **param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long **pplVar5;
  long **pplVar6;
  long ***ppplVar7;
  uint uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long **pplVar12;
  uint uVar13;
  ulong uVar14;
  long **pplVar15;
  long **unaff_x20;
  long **pplVar16;
  long lVar17;
  long *plStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long **pplStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *in_stack_ffffffffffffff40;
  long *plStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch(param_3) {
  case (long **)0x0:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    puVar4 = PTR_PTR_1126b6868;
    plStack_48 = param_1;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_48;
    unaff_x20 = (long **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar4;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    goto code_r0x000100745bf0;
  case (long **)0x1:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_50;
    plStack_50 = param_1;
    break;
  case (long **)0x2:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47928();
    param_3 = &plStack_58;
    plStack_58 = param_1;
    break;
  case (long **)0x3:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47928();
    param_3 = &plStack_60;
    plStack_60 = param_1;
    break;
  case (long **)0x4:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_68;
    plStack_68 = param_1;
    break;
  case (long **)0x5:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_70;
    plStack_70 = param_1;
    break;
  case (long **)0x6:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_78;
    plStack_78 = param_1;
    break;
  case (long **)0x7:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_80;
    plStack_80 = param_1;
    break;
  case (long **)0x8:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_88;
    plStack_88 = param_1;
    break;
  case (long **)0x9:
    param_1 = (long *)PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47924();
    param_3 = &plStack_90;
    plStack_90 = param_1;
    break;
  default:
    goto LAB_100745bf8;
  }
  unaff_x20 = (long **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
code_r0x000100745bf0:
  func_0x000107c61170();
LAB_100745bf8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
    return unaff_x20;
  }
  func_0x000107c60e78();
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((param_2 == 0xc) && (*param_1 == 0x2d746e65746e6f63 && (int)param_1[1] == 0x65707974)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    FUN_100746544();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    FUN_100746644();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(int *)(extraout_x8 + 1) = (int)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 2) && ((short)*param_1 == 0x6574)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa30c8();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa3184();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(char *)(extraout_x8 + 1) = (char)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0xd) &&
     (*param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa3424();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa34e0();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(int *)(extraout_x8 + 1) = (int)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0x1e) &&
     (((*param_1 == 0x746e692d63707267 && param_1[1] == 0x6e652d6c616e7265) &&
      param_1[2] == 0x722d676e69646f63) && *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa3424();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa37a4();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(int *)(extraout_x8 + 1) = (int)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0x14) &&
     ((*param_1 == 0x6363612d63707267 && param_1[1] == 0x6f636e652d747065) &&
      (int)param_1[2] == 0x676e6964)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa38c0();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa3998();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    pplVar5 = (long **)0x1;
    __Znwm();
    *(char *)pplVar5 = (char)pplVar6;
    extraout_x8[1] = pplVar5;
    return pplVar5;
  }
  if ((param_2 == 0xb) &&
     (*param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa3cc4();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa3d80();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(int *)(extraout_x8 + 1) = (int)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0xc) && (*param_1 == 0x6d69742d63707267 && (int)param_1[1] == 0x74756f65)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa4050();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa410c();
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *extraout_x8 = pplVar5;
    extraout_x8[1] = pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0x1a) &&
     (((*param_1 == 0x6572702d63707267 && param_1[1] == 0x70722d73756f6976) &&
      param_1[2] == 0x706d657474612d63) && (short)param_1[3] == 0x7374)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    FUN_100745064();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa4414();
    *extraout_x8 = pplVar5;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *(int *)(extraout_x8 + 1) = (int)pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0x16) &&
     ((*param_1 == 0x7465722d63707267 && param_1[1] == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa4520();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa45dc();
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *extraout_x8 = pplVar5;
    extraout_x8[1] = pplVar6;
    return pplVar5;
  }
  if ((param_2 == 10) && (*param_1 == 0x6567612d72657375 && (short)param_1[1] == 0x746e)) {
    pcStack_98 = FUN_100745c2c;
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = param_3;
    FUN_10074482c(&pplStack_d8);
    plVar11 = param_3[6];
    FUN_100746894();
    *extraout_x8 = pplVar6;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    extraout_x8[2] = plStack_d0;
    extraout_x8[1] = pplStack_d8;
    extraout_x8[4] = in_stack_ffffffffffffff40;
    extraout_x8[3] = plStack_c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return pplVar6;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pplStack_d8);
    func_0x000107c60bd8(pplVar6);
    pcStack_e8 = FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar3 = 0x130a5d70;
      ppuStack_f0 = &puStack_a0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long **)0x1130a5d30;
  }
  if ((param_2 == 0xc) && (*param_1 == 0x73656d2d63707267 && (int)param_1[1] == 0x65676173)) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar3 = 0x130a5db8;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long **)0x1130a5d78;
  }
  if ((param_2 == 4) && ((int)*param_1 == 0x74736f68)) {
    pcStack_98 = FUN_100745c2c;
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = param_3;
    FUN_10074482c(&pplStack_d8);
    plVar11 = param_3[6];
    FUN_10074676c();
    *extraout_x8 = pplVar6;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    extraout_x8[2] = plStack_d0;
    extraout_x8[1] = pplStack_d8;
    extraout_x8[4] = in_stack_ffffffffffffff40;
    extraout_x8[3] = plStack_c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return pplVar6;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&pplStack_d8);
    func_0x000107c60bd8(pplVar6);
    pcStack_e8 = FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar3 = 0x130a5e00;
      ppuStack_f0 = &puStack_a0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long **)0x1130a5dc0;
  }
  if ((param_2 == 0x19) &&
     (((*param_1 == 0x746e696f70646e65 && param_1[1] == 0x656d2d64616f6c2d) &&
      param_1[2] == 0x69622d7363697274) && (char)param_1[3] == 'n')) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar3 = 0x130a5e48;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long **)0x1130a5e08;
  }
  if ((param_2 == 0x15) &&
     ((*param_1 == 0x7265732d63707267 && param_1[1] == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar3 = 0x130a5e90;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long **)0x1130a5e50;
  }
  if ((param_2 == 0xe) &&
     (*param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172)) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar3 = 0x130a5ed8;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long **)0x1130a5e98;
  }
  if ((param_2 == 0xd) &&
     (*param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174)) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar3 = 0x130a5f20;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long **)0x1130a5ee0;
  }
  if ((param_2 == 0x13) &&
     ((*param_1 == 0x635f626c63707267 && param_1[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa5090();
    plVar11 = param_3[6];
    pplVar5 = pplVar6;
    func_0x000104aa50dc();
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    *extraout_x8 = pplVar5;
    extraout_x8[1] = pplVar6;
    return pplVar5;
  }
  if ((param_2 == 0xb) &&
     (*param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63)) {
    pcStack_98 = FUN_100745c2c;
    pplVar6 = param_3;
    func_0x000104aa5360(&plStack_d0);
    plVar11 = param_3[6];
    func_0x000104aa5414();
    *extraout_x8 = pplVar6;
    *(int *)(extraout_x8 + 5) = (int)plVar11;
    pplVar6 = (long **)0x20;
    __Znwm();
    *pplVar6 = plStack_d0;
    pplVar6[2] = in_stack_ffffffffffffff40;
    pplVar6[1] = plStack_c8;
    pplVar6[3] = plStack_b8;
    extraout_x8[1] = pplVar6;
    return pplVar6;
  }
  if ((param_2 == 8) && (*param_1 == 0x6e656b6f742d626c)) {
    pcStack_98 = FUN_100745c2c;
    FUN_10074482c(&pplStack_d8);
    pcStack_e8 = (code *)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar3 = 0x130a5ff8;
      ppuStack_f0 = &puStack_a0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long **)0x1130a5fb8;
  }
  pplVar6 = &plStack_100;
  pcStack_98 = FUN_100745c2c;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&pplStack_d8,param_1,param_2);
  plStack_f8 = param_3[1];
  plStack_100 = *param_3;
  pcStack_e8 = (code *)param_3[3];
  ppuStack_f0 = (undefined1 **)param_3[2];
  param_3[1] = (long *)0x0;
  *param_3 = (long *)0x0;
  param_3[3] = (long *)0x0;
  param_3[2] = (long *)0x0;
  ppplVar7 = &pplStack_d8;
  FUN_1007462d4(extraout_x8);
  if ((long *)0x1 < plStack_100) {
    do {
      lVar10 = *plStack_100;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar2) {
        *plStack_100 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  pplVar5 = pplStack_d8;
  if ((long **)0x1 < pplStack_d8) {
    do {
      plVar11 = *pplStack_d8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pplStack_d8,0x10);
      if (bVar2) {
        *pplStack_d8 = (long *)((long)plVar11 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long *)((long)plVar11 + -1) == (long *)0x0) {
      (*(code *)pplStack_d8[1])();
      pplVar5 = pplStack_d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return pplVar5;
  }
  func_0x000107c60e78();
  if ((int)ppplVar7 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_100);
    FUN_1004b6d90(&pplStack_d8);
  }
  func_0x000107c60bd8();
  pplVar12 = *ppplVar7;
  if (pplVar12 == (long **)0x0) {
    pplVar16 = (long **)((long)ppplVar7 + 9);
    pplVar15 = (long **)(ulong)*(byte *)(ppplVar7 + 1);
  }
  else {
    pplVar15 = ppplVar7[1];
    pplVar16 = ppplVar7[2];
  }
  if (pplVar15 < (long **)0x4) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)(*(int *)((long)pplVar15 + (long)pplVar16 + -4) == 0x6e69622d);
  }
  *pplVar5 = (long *)(&UNK_1107c4388 + uVar14 * 0x40);
  if (pplVar12 == (long **)0x0) {
    uVar8 = (uint)*(byte *)(ppplVar7 + 1);
  }
  else {
    uVar8 = (uint)ppplVar7[1];
  }
  if (*pplVar6 == (long *)0x0) {
    uVar13 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar13 = (uint)pplVar6[1];
  }
  *(uint *)(pplVar5 + 5) = uVar13 + uVar8 + 0x20;
  plVar11 = (long *)0x40;
  func_0x000107c60e20();
  pplVar12 = *ppplVar7;
  pplVar15 = ppplVar7[3];
  pplVar16 = ppplVar7[2];
  plVar11[1] = (long)ppplVar7[1];
  *plVar11 = (long)pplVar12;
  plVar11[3] = (long)pplVar15;
  plVar11[2] = (long)pplVar16;
  ppplVar7[1] = (long **)0x0;
  *ppplVar7 = (long **)0x0;
  ppplVar7[3] = (long **)0x0;
  ppplVar7[2] = (long **)0x0;
  lVar9 = (long)*pplVar6;
  lVar17 = (long)pplVar6[3];
  lVar10 = (long)pplVar6[2];
  plVar11[5] = (long)pplVar6[1];
  plVar11[4] = lVar9;
  plVar11[7] = lVar17;
  plVar11[6] = lVar10;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  pplVar5[1] = plVar11;
  return pplVar5;
}



/* Entry: 100745c2c; end: 1007461c7;  */

/* WARNING: Possible PIC construction at 0x000104aa58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa4aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104aa48e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa4aa8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ae8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4b00) */
/* WARNING: Removing unreachable block (ram,0x000104aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c20) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c60) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c78) */
/* WARNING: Removing unreachable block (ram,0x000104aa4c50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4d98) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dd8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4df0) */
/* WARNING: Removing unreachable block (ram,0x000104aa4dc8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f10) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f50) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f68) */
/* WARNING: Removing unreachable block (ram,0x000104aa4f40) */
/* WARNING: Removing unreachable block (ram,0x000104aa58d0) */
/* WARNING: Removing unreachable block (ram,0x000104aa5910) */
/* WARNING: Removing unreachable block (ram,0x000104aa5928) */
/* WARNING: Removing unreachable block (ram,0x000104aa5900) */
/* WARNING: Removing unreachable block (ram,0x000104aa48e8) */
/* WARNING: Removing unreachable block (ram,0x000104aa4928) */
/* WARNING: Removing unreachable block (ram,0x000104aa4940) */
/* WARNING: Removing unreachable block (ram,0x000104aa4918) */

long * FUN_100745c2c(undefined8 *param_1,long *param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  long in_stack_ffffffffffffffd8;
  
  if ((param_3 == 0xc) && (*param_2 == 0x2d746e65746e6f63 && (int)param_2[1] == 0x65707974)) {
    plVar5 = param_4;
    FUN_100746544();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    FUN_100746644();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 2) && ((short)*param_2 == 0x6574)) {
    plVar5 = param_4;
    func_0x000104aa30c8();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3184();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(char *)(param_1 + 1) = (char)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x636e652d63707267 && *(long *)((long)param_2 + 5) == 0x676e69646f636e65)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa34e0();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x746e692d63707267 && param_2[1] == 0x6e652d6c616e7265) &&
      param_2[2] == 0x722d676e69646f63) && *(long *)((long)param_2 + 0x16) == 0x747365757165722d)) {
    plVar5 = param_4;
    func_0x000104aa3424();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa37a4();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6363612d63707267 && param_2[1] == 0x6f636e652d747065) &&
      (int)param_2[2] == 0x676e6964)) {
    plVar5 = param_4;
    func_0x000104aa38c0();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3998();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar11 = (long *)0x1;
    __Znwm();
    *(char *)plVar11 = (char)plVar5;
    param_1[1] = plVar11;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x6174732d63707267 && *(long *)((long)param_2 + 3) == 0x7375746174732d63)) {
    plVar5 = param_4;
    func_0x000104aa3cc4();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa3d80();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x6d69742d63707267 && (int)param_2[1] == 0x74756f65)) {
    plVar5 = param_4;
    func_0x000104aa4050();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa410c();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0x1a) &&
     (((*param_2 == 0x6572702d63707267 && param_2[1] == 0x70722d73756f6976) &&
      param_2[2] == 0x706d657474612d63) && (short)param_2[3] == 0x7374)) {
    plVar5 = param_4;
    FUN_100745064();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa4414();
    *param_1 = plVar11;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(int *)(param_1 + 1) = (int)plVar5;
    return plVar11;
  }
  if ((param_3 == 0x16) &&
     ((*param_2 == 0x7465722d63707267 && param_2[1] == 0x62687375702d7972) &&
      *(long *)((long)param_2 + 0xe) == 0x736d2d6b63616268)) {
    plVar5 = param_4;
    func_0x000104aa4520();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa45dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 10) && (*param_2 == 0x6567612d72657375 && (short)param_2[1] == 0x746e)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_100746894();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_100746894;
    if ((bRam00000001130a5d70 & 1) == 0) {
      iVar3 = 0x130a5d70;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5d30 = 0;
        puRam00000001130a5d38 = &UNK_104adf4cc;
        puRam00000001130a5d40 = &UNK_104aa4864;
        puRam00000001130a5d48 = &UNK_104aa2538;
        puRam00000001130a5d50 = &UNK_104aa488c;
        puRam00000001130a5d58 = &DAT_10f740723;
        uRam00000001130a5d60 = 10;
        uRam00000001130a5d68 = 0;
        func_0x000107c60e4c(0x1130a5d70);
      }
    }
    return (long *)0x1130a5d30;
  }
  if ((param_3 == 0xc) && (*param_2 == 0x73656d2d63707267 && (int)param_2[1] == 0x65676173)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa48e8;
    if ((bRam00000001130a5db8 & 1) == 0) {
      iVar3 = 0x130a5db8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5d78 = 0;
        puRam00000001130a5d80 = &UNK_104adf4cc;
        puRam00000001130a5d88 = &UNK_104aa49d8;
        puRam00000001130a5d90 = &UNK_104aa2538;
        puRam00000001130a5d98 = &UNK_104aa4a00;
        puRam00000001130a5da0 = &UNK_10f67192f;
        uRam00000001130a5da8 = 0xc;
        uRam00000001130a5db0 = 0;
        ___cxa_guard_release(0x1130a5db8);
      }
    }
    return (long *)0x1130a5d78;
  }
  if ((param_3 == 4) && ((int)*param_2 == 0x74736f68)) {
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = param_4;
    FUN_10074482c(&plStack_48);
    lVar10 = param_4[6];
    FUN_10074676c();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar10;
    param_1[2] = lStack_40;
    param_1[1] = plStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = lStack_38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return plVar5;
    }
    func_0x000107c60e78();
    FUN_1004b6d90(&plStack_48);
    func_0x000107c60bd8(plVar5);
    pcStack_58 = FUN_10074676c;
    if ((bRam00000001130a5e00 & 1) == 0) {
      iVar3 = 0x130a5e00;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000107c60e48();
      if (iVar3 != 0) {
        uRam00000001130a5dc0 = 0;
        puRam00000001130a5dc8 = &UNK_104adf4cc;
        puRam00000001130a5dd0 = &UNK_104aa4a24;
        puRam00000001130a5dd8 = &UNK_104aa2538;
        puRam00000001130a5de0 = &UNK_104aa4a4c;
        puRam00000001130a5de8 = &DAT_10f2df4ca;
        uRam00000001130a5df0 = 4;
        uRam00000001130a5df8 = 0;
        func_0x000107c60e4c(0x1130a5e00);
      }
    }
    return (long *)0x1130a5dc0;
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x746e696f70646e65 && param_2[1] == 0x656d2d64616f6c2d) &&
      param_2[2] == 0x69622d7363697274) && (char)param_2[3] == 'n')) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4aa8;
    if ((bRam00000001130a5e48 & 1) == 0) {
      iVar3 = 0x130a5e48;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e08 = 1;
        puRam00000001130a5e10 = &UNK_104adf4cc;
        puRam00000001130a5e18 = &UNK_104aa4b9c;
        puRam00000001130a5e20 = &UNK_104aa2538;
        puRam00000001130a5e28 = &UNK_104aa4bc4;
        pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
        uRam00000001130a5e38 = 0x19;
        uRam00000001130a5e40 = 0;
        ___cxa_guard_release(0x1130a5e48);
      }
    }
    return (long *)0x1130a5e08;
  }
  if ((param_3 == 0x15) &&
     ((*param_2 == 0x7265732d63707267 && param_2[1] == 0x746174732d726576) &&
      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4c20;
    if ((bRam00000001130a5e90 & 1) == 0) {
      iVar3 = 0x130a5e90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e50 = 1;
        puRam00000001130a5e58 = &UNK_104adf4cc;
        puRam00000001130a5e60 = &UNK_104aa4d14;
        puRam00000001130a5e68 = &UNK_104aa2538;
        puRam00000001130a5e70 = &UNK_104aa4d3c;
        pcRam00000001130a5e78 = "grpc-server-stats-bin";
        uRam00000001130a5e80 = 0x15;
        uRam00000001130a5e88 = 0;
        ___cxa_guard_release(0x1130a5e90);
      }
    }
    return (long *)0x1130a5e50;
  }
  if ((param_3 == 0xe) &&
     (*param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4d98;
    if ((bRam00000001130a5ed8 & 1) == 0) {
      iVar3 = 0x130a5ed8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5e98 = 1;
        puRam00000001130a5ea0 = &UNK_104adf4cc;
        puRam00000001130a5ea8 = &UNK_104aa4e8c;
        puRam00000001130a5eb0 = &UNK_104aa2538;
        puRam00000001130a5eb8 = &UNK_104aa4eb4;
        pcRam00000001130a5ec0 = "grpc-trace-bin";
        uRam00000001130a5ec8 = 0xe;
        uRam00000001130a5ed0 = 0;
        ___cxa_guard_release(0x1130a5ed8);
      }
    }
    return (long *)0x1130a5e98;
  }
  if ((param_3 == 0xd) &&
     (*param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa4f10;
    if ((bRam00000001130a5f20 & 1) == 0) {
      iVar3 = 0x130a5f20;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5ee0 = 1;
        puRam00000001130a5ee8 = &UNK_104adf4cc;
        puRam00000001130a5ef0 = &UNK_104aa5004;
        puRam00000001130a5ef8 = &UNK_104aa2538;
        puRam00000001130a5f00 = &UNK_104aa502c;
        pcRam00000001130a5f08 = "grpc-tags-bin";
        uRam00000001130a5f10 = 0xd;
        uRam00000001130a5f18 = 0;
        ___cxa_guard_release(0x1130a5f20);
      }
    }
    return (long *)0x1130a5ee0;
  }
  if ((param_3 == 0x13) &&
     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    plVar5 = param_4;
    func_0x000104aa5090();
    lVar9 = param_4[6];
    plVar11 = plVar5;
    func_0x000104aa50dc();
    *(int *)(param_1 + 5) = (int)lVar9;
    *param_1 = plVar11;
    param_1[1] = plVar5;
    return plVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    plVar5 = param_4;
    func_0x000104aa5360(&lStack_40);
    lVar9 = param_4[6];
    func_0x000104aa5414();
    *param_1 = plVar5;
    *(int *)(param_1 + 5) = (int)lVar9;
    plVar5 = (long *)0x20;
    __Znwm();
    *plVar5 = lStack_40;
    plVar5[2] = in_stack_ffffffffffffffd0;
    plVar5[1] = lStack_38;
    plVar5[3] = in_stack_ffffffffffffffd8;
    param_1[1] = plVar5;
    return plVar5;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    FUN_10074482c(&plStack_48);
    pcStack_58 = (code *)&UNK_104aa58d0;
    if ((bRam00000001130a5ff8 & 1) == 0) {
      iVar3 = 0x130a5ff8;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam00000001130a5fb8 = 0;
        puRam00000001130a5fc0 = &UNK_104adf4cc;
        puRam00000001130a5fc8 = &UNK_104aa59c0;
        puRam00000001130a5fd0 = &UNK_104aa2538;
        puRam00000001130a5fd8 = &UNK_104aa59e8;
        pcRam00000001130a5fe0 = "lb-token";
        uRam00000001130a5fe8 = 8;
        uRam00000001130a5ff0 = 0;
        ___cxa_guard_release(0x1130a5ff8);
      }
    }
    return (long *)0x1130a5fb8;
  }
  pplVar7 = &plStack_70;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(&plStack_48,param_2,param_3);
  lStack_68 = param_4[1];
  plStack_70 = (long *)*param_4;
  pcStack_58 = (code *)param_4[3];
  puStack_60 = (undefined1 *)param_4[2];
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  pplVar6 = &plStack_48;
  FUN_1007462d4(param_1);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar10 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar5 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar10 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar5 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return plVar5;
  }
  func_0x000107c60e78();
  if ((int)pplVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_70);
    FUN_1004b6d90(&plStack_48);
  }
  func_0x000107c60bd8();
  plVar11 = *pplVar6;
  if (plVar11 == (long *)0x0) {
    plVar15 = (long *)((long)pplVar6 + 9);
    plVar14 = (long *)(ulong)*(byte *)(pplVar6 + 1);
  }
  else {
    plVar14 = pplVar6[1];
    plVar15 = pplVar6[2];
  }
  if (plVar14 < (long *)0x4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(*(int *)((long)plVar14 + (long)plVar15 + -4) == 0x6e69622d);
  }
  *plVar5 = (long)(&UNK_1107c4388 + uVar13 * 0x40);
  if (plVar11 == (long *)0x0) {
    uVar8 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar8 = (uint)pplVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar12 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar12 = (uint)pplVar7[1];
  }
  *(uint *)(plVar5 + 5) = uVar12 + uVar8 + 0x20;
  puVar4 = (undefined8 *)0x40;
  func_0x000107c60e20();
  plVar11 = *pplVar6;
  plVar14 = pplVar6[3];
  plVar15 = pplVar6[2];
  puVar4[1] = pplVar6[1];
  *puVar4 = plVar11;
  puVar4[3] = plVar14;
  puVar4[2] = plVar15;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  lVar9 = (long)*pplVar7;
  lVar16 = (long)pplVar7[3];
  lVar10 = (long)pplVar7[2];
  puVar4[5] = pplVar7[1];
  puVar4[4] = lVar9;
  puVar4[7] = lVar16;
  puVar4[6] = lVar10;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  plVar5[1] = (long)puVar4;
  return plVar5;
}



/* Entry: 1007461c8; end: 1007462d3;  */

long * FUN_1007461c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_48 [4];
  long lStack_28;
  
  pplVar6 = &plStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004b6808(aplStack_48,param_3,param_4);
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  pplVar5 = aplStack_48;
  FUN_1007462d4(param_1);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar8 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar3 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar8 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar3 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  func_0x000107c60e78();
  if ((int)pplVar5 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_70);
    FUN_1004b6d90(aplStack_48);
  }
  func_0x000107c60bd8();
  plVar9 = *pplVar5;
  if (plVar9 == (long *)0x0) {
    plVar13 = (long *)((long)pplVar5 + 9);
    plVar12 = (long *)(ulong)*(byte *)(pplVar5 + 1);
  }
  else {
    plVar12 = pplVar5[1];
    plVar13 = pplVar5[2];
  }
  if (plVar12 < (long *)0x4) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)(*(int *)((long)plVar12 + (long)plVar13 + -4) == 0x6e69622d);
  }
  *plVar3 = (long)(&UNK_1107c4388 + uVar11 * 0x40);
  if (plVar9 == (long *)0x0) {
    uVar7 = (uint)*(byte *)(pplVar5 + 1);
  }
  else {
    uVar7 = (uint)pplVar5[1];
  }
  if (*pplVar6 == (long *)0x0) {
    uVar10 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar10 = (uint)pplVar6[1];
  }
  *(uint *)(plVar3 + 5) = uVar10 + uVar7 + 0x20;
  puVar4 = (undefined8 *)0x40;
  func_0x000107c60e20();
  plVar9 = *pplVar5;
  plVar12 = pplVar5[3];
  plVar13 = pplVar5[2];
  puVar4[1] = pplVar5[1];
  *puVar4 = plVar9;
  puVar4[3] = plVar12;
  puVar4[2] = plVar13;
  pplVar5[1] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)0x0;
  lVar8 = (long)*pplVar6;
  lVar15 = (long)pplVar6[3];
  lVar14 = (long)pplVar6[2];
  puVar4[5] = pplVar6[1];
  puVar4[4] = lVar8;
  puVar4[7] = lVar15;
  puVar4[6] = lVar14;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  plVar3[1] = (long)puVar4;
  return plVar3;
}



/* Entry: 1007462d4; end: 1007463ab;  */

undefined8 * FUN_1007462d4(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar6 = (long)param_2 + 9;
    uVar5 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar5 = param_2[1];
    lVar6 = param_2[2];
  }
  if (uVar5 < 4) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(*(int *)(uVar5 + lVar6 + -4) == 0x6e69622d);
  }
  *param_1 = &UNK_1107c4388 + uVar5 * 0x40;
  if (lVar3 == 0) {
    uVar2 = (uint)*(byte *)(param_2 + 1);
  }
  else {
    uVar2 = (uint)param_2[1];
  }
  if (*param_3 == 0) {
    uVar4 = (uint)*(byte *)(param_3 + 1);
  }
  else {
    uVar4 = (uint)param_3[1];
  }
  *(uint *)(param_1 + 5) = uVar4 + uVar2 + 0x20;
  plVar1 = (long *)0x40;
  func_0x000107c60e20();
  lVar3 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  plVar1[1] = param_2[1];
  *plVar1 = lVar3;
  plVar1[3] = lVar7;
  plVar1[2] = lVar6;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar3 = *param_3;
  lVar7 = param_3[3];
  lVar6 = param_3[2];
  plVar1[5] = param_3[1];
  plVar1[4] = lVar3;
  plVar1[7] = lVar7;
  plVar1[6] = lVar6;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_1[1] = plVar1;
  return param_1;
}



/* Entry: 1007463ac; end: 1007463fb; -[SCLensScheduleNamespace initWithNamespaceType:] */

undefined8 FUN_1007463ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6868;
  func_0x000107c3bf6c(PTR_PTR_1126b6868);
  func_0x000107c61180();
  func_0x000107c47914(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1007463fc; end: 100746447; +[SCLensScheduleNamespace _namespaceIdWithNamespaceType:] */

void FUN_1007463fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_3 - 1U < 0xd) {
    ppuVar1 = (undefined **)(&PTR_PTR_110d5b0c8)[param_3 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_110d5b130;
  }
  puVar2 = *ppuVar1;
  func_0x000107c61174(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100746448; end: 100746543;  */

undefined8 FUN_100746448(long *param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    plVar1 = (long *)((long)param_1 + 9);
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    plVar1 = (long *)param_1[2];
  }
  if (uVar2 == 0x10) {
    if (*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) {
      return 0;
    }
  }
  else if (uVar2 < 0x11) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else {
    if ((*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) && (char)plVar1[2] == ';'
       ) {
      return 0;
    }
    if ((*plVar1 == 0x746163696c707061 && plVar1[1] == 0x637072672f6e6f69) && (char)plVar1[2] == '+'
       ) {
      return 0;
    }
  }
  (*param_3)(param_2,"invalid value",0xd);
  return 2;
}



/* Entry: 100746544; end: 1007465ff;  */

long * FUN_100746544(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar7 = param_1[4];
  FUN_100746448(&plStack_50,uVar7,param_1[5]);
  iVar6 = (int)uVar7;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  func_0x000107c60e78();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_50);
  }
  func_0x000107c60bd8();
  plVar5 = plVar4;
  FUN_100746544();
  lVar8 = plVar4[6];
  plVar4 = plVar5;
  FUN_100746644();
  *extraout_x8 = plVar4;
  *(int *)(extraout_x8 + 5) = (int)lVar8;
  *(int *)(extraout_x8 + 1) = (int)plVar5;
  return plVar4;
}



/* Entry: 100746600; end: 100746643;  */

void FUN_100746600(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_100746544();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_100746644();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 100746644; end: 1007466d3;  */

undefined8 FUN_100746644(void)

{
  int iVar1;
  
  if ((bRam00000001130a5ae8 & 1) == 0) {
    iVar1 = 0x130a5ae8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5aa8 = 0;
      pcRam00000001130a5ab0 = FUN_100744a04;
      puRam00000001130a5ab8 = &UNK_104aa2f74;
      puRam00000001130a5ac0 = &UNK_104aa2eb8;
      puRam00000001130a5ac8 = &UNK_104aa2f94;
      pcRam00000001130a5ad0 = "content-type";
      uRam00000001130a5ad8 = 0xc;
      uRam00000001130a5ae0 = 0;
      func_0x000107c60e4c(0x1130a5ae8);
    }
  }
  return 0x1130a5aa8;
}



/* Entry: 1007466d4; end: 10074676b;  */

long FUN_1007466d4(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  FUN_10074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_10074676c();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&lStack_48);
  func_0x000107c60bd8(lVar2);
  if ((bRam00000001130a5e00 & 1) == 0) {
    iVar1 = 0x130a5e00;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5dc0 = 0;
      puRam00000001130a5dc8 = &UNK_104adf4cc;
      puRam00000001130a5dd0 = &UNK_104aa4a24;
      puRam00000001130a5dd8 = &UNK_104aa2538;
      puRam00000001130a5de0 = &UNK_104aa4a4c;
      puRam00000001130a5de8 = &DAT_10f2df4ca;
      uRam00000001130a5df0 = 4;
      uRam00000001130a5df8 = 0;
      func_0x000107c60e4c(0x1130a5e00);
    }
  }
  return 0x1130a5dc0;
}



/* Entry: 10074676c; end: 1007467fb;  */

undefined8 FUN_10074676c(void)

{
  int iVar1;
  
  if ((bRam00000001130a5e00 & 1) == 0) {
    iVar1 = 0x130a5e00;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5dc0 = 0;
      puRam00000001130a5dc8 = &UNK_104adf4cc;
      puRam00000001130a5dd0 = &UNK_104aa4a24;
      puRam00000001130a5dd8 = &UNK_104aa2538;
      puRam00000001130a5de0 = &UNK_104aa4a4c;
      puRam00000001130a5de8 = &DAT_10f2df4ca;
      uRam00000001130a5df0 = 4;
      uRam00000001130a5df8 = 0;
      func_0x000107c60e4c(0x1130a5e00);
    }
  }
  return 0x1130a5dc0;
}



/* Entry: 1007467fc; end: 100746893;  */

long FUN_1007467fc(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  FUN_10074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_100746894();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  func_0x000107c60e78();
  FUN_1004b6d90(&lStack_48);
  func_0x000107c60bd8(lVar2);
  if ((bRam00000001130a5d70 & 1) == 0) {
    iVar1 = 0x130a5d70;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5d30 = 0;
      puRam00000001130a5d38 = &UNK_104adf4cc;
      puRam00000001130a5d40 = &UNK_104aa4864;
      puRam00000001130a5d48 = &UNK_104aa2538;
      puRam00000001130a5d50 = &UNK_104aa488c;
      puRam00000001130a5d58 = &DAT_10f740723;
      uRam00000001130a5d60 = 10;
      uRam00000001130a5d68 = 0;
      func_0x000107c60e4c(0x1130a5d70);
    }
  }
  return 0x1130a5d30;
}



/* Entry: 100746894; end: 100746923;  */

undefined8 FUN_100746894(void)

{
  int iVar1;
  
  if ((bRam00000001130a5d70 & 1) == 0) {
    iVar1 = 0x130a5d70;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001130a5d30 = 0;
      puRam00000001130a5d38 = &UNK_104adf4cc;
      puRam00000001130a5d40 = &UNK_104aa4864;
      puRam00000001130a5d48 = &UNK_104aa2538;
      puRam00000001130a5d50 = &UNK_104aa488c;
      puRam00000001130a5d58 = &DAT_10f740723;
      uRam00000001130a5d60 = 10;
      uRam00000001130a5d68 = 0;
      func_0x000107c60e4c(0x1130a5d70);
    }
  }
  return 0x1130a5d30;
}



/* Entry: 100746924; end: 100746927;  */

undefined8 *
FUN_100746924(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *param_1 = param_4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  FUN_100746928(param_1 + 3);
  uVar2 = 0x4010000000000000;
  uStack_58 = 0x4020000000000000;
  uStack_60 = 0x4010000000000000;
  uStack_50 = 0;
  FUN_100746a78(param_1);
  puVar1 = param_1 + 0xc;
  uStack_38 = 0x4039000000000000;
  uStack_40 = 0xbff0000000000000;
  uStack_30 = 0x4024000000000000;
  uStack_48 = uVar2;
  FUN_100746b40(puVar1,&uStack_60);
  func_0x000100460dc4();
  uVar2 = *puVar1;
  FUN_1004671a4();
  param_1[0x17] = uVar2;
  param_1[0x19] = 0xffff;
  param_1[0x18] = 0xffff;
  param_1[0x1b] = 0xffff;
  param_1[0x1a] = 0x4000;
  *(undefined4 *)(param_1 + 0x1c) = 0xffff;
  return param_1;
}



/* Entry: 100746928; end: 100746a13;  */

undefined4 * FUN_100746928(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x10000;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = 0;
  uVar2 = param_2;
  FUN_100746a14();
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = 100;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* Entry: 100746a14; end: 100746a77;  */

undefined1  [16] FUN_100746a14(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1 << 0x20;
  return auVar1 << 0x40;
}



/* Entry: 100746a78; end: 100746b3f;  */

double FUN_100746a78(undefined8 *param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(long *)*param_1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(*(long *)*param_1 + 0x18);
    func_0x000100746a20();
  }
  dVar3 = (double)(long)param_1[5];
  func_0x000107c6105c();
  dVar3 = dVar3 + 1.0;
  bVar1 = false;
  if ((dVar2 < 0.1) && (bVar1 = false, !NAN(dVar3))) {
    bVar1 = dVar3 < 22.0;
  }
  if (bVar1) {
    dVar3 = (dVar2 * (dVar3 + -22.0)) / 0.1 + 22.0;
  }
  else if (0.8 < dVar2) {
    dVar2 = (dVar2 + -0.8) / 0.09999999999999998;
    dVar4 = 1.0 - dVar2;
    if (1.0 <= dVar2) {
      dVar4 = 0.0;
    }
    dVar3 = dVar4 * dVar3;
  }
  return dVar3;
}



/* Entry: 100746b40; end: 100746b6b;  */

void FUN_100746b40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2[3];
  param_1[3] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[10] = param_2[6];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 100746b6c; end: 100746bd7;  */

void FUN_100746b6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 << 2;
  FUN_100460200();
  *param_1 = lVar1;
  lVar1 = param_2 << 3;
  FUN_100460200();
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}



/* Entry: 100746bd8; end: 100746bdf;  */

void FUN_100746bd8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 100746be0; end: 100746c83;  */

void FUN_100746be0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = (param_2 & 0xffffffff) * 0x20;
  uVar2 = *(uint *)(&UNK_1107c4828 + lVar1);
  if (param_3 <= *(uint *)(&UNK_1107c4828 + lVar1)) {
    uVar2 = param_3;
  }
  uVar3 = *(uint *)(&UNK_1107c4824 + lVar1);
  if (*(uint *)(&UNK_1107c4824 + lVar1) <= param_3) {
    uVar3 = uVar2;
  }
  if (uVar3 != param_3) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                  ,0x435,1,"Requested parameter %s clamped from %d to %d");
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  if (uVar3 != *(uint *)(lVar1 + 0x790)) {
    *(uint *)(lVar1 + 0x790) = uVar3;
    *(undefined1 *)(param_1 + 0x76c) = 1;
  }
  return;
}



/* Entry: 100746c84; end: 100746cb7;  */

void FUN_100746c84(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100746c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 100746cb8; end: 100746d5b;  */

void FUN_100746cb8(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  uVar2 = (uint)param_2 >> 8;
  if ((uVar2 & 0xff) == 0) {
    FUN_1004d4e28(param_4,puVar3,uVar1,param_4,param_3);
  }
  else {
    func_0x000107c2b9a0(param_4,puVar3,uVar1,param_2 >> 0x20,param_3,uVar2 & 1);
  }
  return;
}



/* Entry: 100746d5c; end: 100746dbb;  */

void FUN_100746d5c(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_10047fdf4(param_2,"grpc.internal.channelz_security");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 100746dbc; end: 100746f43;  */

void FUN_100746dbc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar4 = 0xc0;
  func_0x000107c60e20();
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  lStack_50 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100033dac(&uStack_80,*param_3,param_3[1]);
  }
  else {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    lStack_70 = param_3[2];
  }
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  lStack_90 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plStack_a8 = (long *)*param_5;
  *param_5 = 0;
  FUN_100746f44(uVar4,&uStack_60,&uStack_80,&uStack_a0,&plStack_a8);
  *param_1 = uVar4;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 8))();
    }
  }
  if (lStack_90 < 0) {
    func_0x000107c60e14(uStack_a0);
  }
  if (lStack_70 < 0) {
    func_0x000107c60e14(uStack_80);
  }
  if (lStack_50 < 0) {
    func_0x000107c60e14(uStack_60);
  }
  return;
}



/* Entry: 100746f44; end: 100746f47;  */

undefined8 *
FUN_100746f44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_10047dcc4(param_1,4,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c4b28;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0x16] = param_3[2];
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0x17] = 0;
  param_1[0x17] = *param_5;
  *param_5 = 0;
  return param_1;
}



/* Entry: 100746f48; end: 100747037;  */

undefined8 *
FUN_100746f48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_10047dcc4(param_1,4,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  *param_1 = &PTR_DAT_1107c4b28;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0x16] = param_3[2];
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0x17] = 0;
  param_1[0x17] = *param_5;
  *param_5 = 0;
  return param_1;
}



/* Entry: 100747038; end: 100747213;  */

undefined1  [16] FUN_100747038(double param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar5 = 0;
    uVar3 = 0;
    uVar8 = 0;
    lVar7 = 0;
    lVar6 = *(long *)(param_2 + 200);
  }
  else {
    FUN_100746a78(param_2);
    FUN_100747214(param_2);
    func_0x000107c60fa8();
    if (plRam0000000113815be0 != (long *)0x0) {
      param_1 = (double)*(long *)(param_2 + 200);
      (**(code **)(*plRam0000000113815be0 + 0x10))();
    }
    dVar11 = 1073741824.0;
    if (param_1 <= 1073741824.0) {
      dVar11 = param_1;
    }
    dVar9 = 128.0;
    if (128.0 <= param_1) {
      dVar9 = dVar11;
    }
    uVar5 = (uint)dVar9;
    lVar4 = (long)(int)uVar5;
    lVar6 = *(long *)(param_2 + 200);
    if (lVar4 == lVar6) {
      uVar5 = 0;
      lVar7 = 0;
      lVar6 = lVar4;
    }
    else {
      lVar7 = SUB168(SEXT816(lVar6) * SEXT816(-0x6666666666666667),8);
      if ((lVar7 >> 1) - (lVar7 >> 0x3f) < lVar4 - lVar6 && lVar4 - lVar6 < lVar6 / 5) {
        uVar5 = 0;
        lVar7 = 0;
      }
      else {
        *(long *)(param_2 + 200) = lVar4;
        lVar7 = 2;
        lVar6 = lVar4;
      }
    }
    dVar9 = *(double *)(param_2 + 0x50);
    dVar11 = 2147483647.0;
    if (dVar9 <= 2147483647.0) {
      dVar11 = dVar9;
    }
    dVar10 = 0.0;
    if (0.0 <= dVar9) {
      dVar10 = dVar11;
    }
    uVar2 = (int)dVar10 / 1000;
    if ((int)dVar10 / 1000 <= (int)(uint)lVar6) {
      uVar2 = (uint)lVar6;
    }
    if (0xfffffe < (int)uVar2) {
      uVar2 = 0xffffff;
    }
    if ((int)uVar2 < 0x4001) {
      uVar2 = 0x4000;
    }
    uVar3 = (ulong)uVar2;
    uVar8 = *(ulong *)(param_2 + 0xd0);
    if (uVar3 == uVar8) {
      uVar3 = 0;
      uVar8 = 0;
    }
    else {
      lVar4 = SUB168(SEXT816((long)uVar8) * SEXT816(-0x6666666666666667),8);
      if ((lVar4 >> 1) - (lVar4 >> 0x3f) < (long)(uVar3 - uVar8) &&
          (long)(uVar3 - uVar8) < (long)uVar8 / 5) {
        uVar3 = 0;
        uVar8 = 0;
      }
      else {
        *(ulong *)(param_2 + 0xd0) = uVar3;
        uVar8 = 0x2000000;
      }
    }
  }
  uVar1 = lVar6 + *(long *)(param_2 + 8);
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  auVar12._0_8_ =
       uVar8 | (ulong)uVar5 << 0x20 | lVar7 << 0x10 |
       (ulong)(*(long *)(param_2 + 0xd8) < (long)(uVar1 >> 1 & 0x7fffffff)) << 8;
  auVar12._8_8_ = uVar3;
  return auVar12;
}



/* Entry: 100747214; end: 1007472e7;  */

double FUN_100747214(double param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar1 = param_2;
  func_0x000100460dc4();
  uVar2 = *puVar1;
  FUN_1004671a4();
  uVar3 = param_2[0x17];
  if (uVar2 == 0x7fffffffffffffff || uVar3 == 0x8000000000000001) {
LAB_100747254:
    dVar4 = 9.223372036854776e+18;
    goto LAB_100747274;
  }
  if (uVar2 == 0x8000000000000000 || uVar3 == 0x8000000000000000) {
LAB_10074726c:
    dVar4 = -9.223372036854776e+18;
  }
  else {
    if ((long)uVar2 < 1) {
      if ((long)-uVar3 < (long)(-0x8000000000000000 - uVar2)) goto LAB_10074726c;
    }
    else if ((long)(uVar2 ^ 0x7fffffffffffffff) < (long)-uVar3) goto LAB_100747254;
    dVar4 = (double)(long)(uVar2 - uVar3);
  }
LAB_100747274:
  param_1 = param_1 - (double)param_2[0xe];
  param_2[0x17] = uVar2;
  dVar5 = 0.1;
  if (dVar4 / 1000.0 <= 0.1) {
    dVar5 = dVar4 / 1000.0;
  }
  if (0.0 < dVar5) {
    dVar6 = (double)param_2[0xc];
    dVar7 = (double)param_2[0xd] + (dVar6 + param_1) * dVar5 * 0.5;
    dVar9 = (double)param_2[0x16];
    dVar4 = dVar9;
    if (dVar7 <= dVar9) {
      dVar4 = dVar7;
    }
    dVar8 = -dVar9;
    if (-dVar9 <= dVar7) {
      dVar8 = dVar4;
    }
    dVar6 = (double)param_2[0x11] * dVar8 + param_1 * (double)param_2[0x10] +
            ((param_1 - dVar6) / dVar5) * (double)param_2[0x12];
    dVar5 = (double)param_2[0xe] + ((double)param_2[0xf] + dVar6) * dVar5 * 0.5;
    dVar4 = (double)param_2[0x15];
    if (dVar5 <= (double)param_2[0x15]) {
      dVar4 = dVar5;
    }
    param_2[0xc] = (ulong)param_1;
    param_2[0xd] = (ulong)dVar8;
    dVar7 = (double)param_2[0x14];
    if ((double)param_2[0x14] <= dVar5) {
      dVar7 = dVar4;
    }
    param_2[0xe] = (ulong)dVar7;
    param_2[0xf] = (ulong)dVar6;
    return dVar7;
  }
  return (double)param_2[0xe];
}



/* Entry: 1007472e8; end: 10074736f;  */

double FUN_1007472e8(double param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 < param_2) {
    dVar2 = param_3[1] + (*param_3 + param_1) * param_2 * 0.5;
    dVar3 = param_3[10];
    dVar4 = dVar3;
    if (dVar2 <= dVar3) {
      dVar4 = dVar2;
    }
    dVar1 = -dVar3;
    if (-dVar3 <= dVar2) {
      dVar1 = dVar4;
    }
    dVar3 = param_3[5] * dVar1 + param_1 * param_3[4] +
            ((param_1 - *param_3) / param_2) * param_3[6];
    dVar2 = param_3[2] + (param_3[3] + dVar3) * param_2 * 0.5;
    dVar4 = param_3[9];
    if (dVar2 <= param_3[9]) {
      dVar4 = dVar2;
    }
    *param_3 = param_1;
    param_3[1] = dVar1;
    dVar1 = param_3[8];
    if (param_3[8] <= dVar2) {
      dVar1 = dVar4;
    }
    param_3[2] = dVar1;
    param_3[3] = dVar3;
    return dVar1;
  }
  return param_3[2];
}



/* Entry: 100747370; end: 100747473;  */

void FUN_100747370(char *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  if (*param_1 == '\x02') {
LAB_1007473ac:
    if (((*(int *)(param_3 + 0x9c) != 0) && (*(long *)(param_2 + 0x98) == 0)) &&
       (lVar6 = param_2, FUN_1008df064(param_2,param_3), (int)lVar6 != 0)) {
      plVar7 = *(long **)(param_3 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else if (*param_1 == '\x01') {
    FUN_1007474b0(param_2,10);
    goto LAB_1007473ac;
  }
  if (param_1[1] == '\x01') {
    FUN_1007474b0(param_2,0xb);
  }
  if (param_1[2] != '\x02') {
    if (param_1[2] != '\x01') goto LAB_100747428;
    FUN_1007474b0(param_2,0xc);
  }
  FUN_100746be0(param_2,3,*(undefined4 *)(param_1 + 4));
LAB_100747428:
  if (param_1[3] != '\x02') {
    if (param_1[3] != '\x01') {
      return;
    }
    FUN_1007474b0(param_2,0xc);
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = 0xffffff;
  if (uVar3 < 0x1000000) {
    uVar1 = uVar3;
  }
  uVar2 = 0x4000;
  if (0x3fff < uVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != uVar3) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                  ,0x435,1,"Requested parameter %s clamped from %d to %d");
  }
  if (uVar2 != *(uint *)(param_2 + 0x7a0)) {
    *(uint *)(param_2 + 0x7a0) = uVar2;
    *(undefined1 *)(param_2 + 0x76c) = 1;
  }
  return;
}



/* Entry: 100747474; end: 1007474af;  */

char * FUN_100747474(uint param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcStack_38;
  
  if (param_1 < 0x16) {
    return (&PTR_s_INITIAL_WRITE_1107c4298)[(int)param_1];
  }
  pcVar4 = "return \"unknown\"";
  pcVar5 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
  ;
  func_0x000104a6e964("return \"unknown\"",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0xc16);
  if (*(int *)(pcVar4 + 0x90) == 1) {
    FUN_100747474(pcVar5);
    pcVar4[0x90] = '\x02';
    pcVar4[0x91] = '\0';
    pcVar4[0x92] = '\0';
    pcVar4[0x93] = '\0';
    pcVar4 = pcVar5;
  }
  else if (*(int *)(pcVar4 + 0x90) == 0) {
    FUN_100747474(pcVar5);
    pcVar4[0x90] = '\x01';
    pcVar4[0x91] = '\0';
    pcVar4[0x92] = '\0';
    pcVar4[0x93] = '\0';
    plVar1 = (long *)(pcVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(code **)(pcVar4 + 0x128) = FUN_100749ff0;
    *(char **)(pcVar4 + 0x130) = pcVar4;
    pcVar4[0x138] = '\0';
    pcVar4[0x139] = '\0';
    pcVar4[0x13a] = '\0';
    pcVar4[0x13b] = '\0';
    pcVar4[0x13c] = '\0';
    pcVar4[0x13d] = '\0';
    pcVar4[0x13e] = '\0';
    pcVar4[0x13f] = '\0';
    pcStack_38 = (char *)0x0;
    FUN_100747564(*(undefined8 *)(pcVar4 + 0x78),pcVar4 + 0x120,&pcStack_38);
    pcVar4 = pcStack_38;
    if (((ulong)pcStack_38 & 1) != 0) {
      FUN_10084dad0();
      pcVar4 = pcStack_38;
    }
  }
  return pcVar4;
}



/* Entry: 1007474b0; end: 100747563;  */

void FUN_1007474b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0x90) == 1) {
    FUN_100747474(param_2);
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    FUN_100747474(param_2);
    *(undefined4 *)(param_1 + 0x90) = 1;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(code **)(param_1 + 0x128) = FUN_100749ff0;
    *(long *)(param_1 + 0x130) = param_1;
    *(undefined8 *)(param_1 + 0x138) = 0;
    uStack_28 = 0;
    FUN_100747564(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return;
}



/* Entry: 100747564; end: 1007475cf;  */

void FUN_100747564(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_3;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_1007475d0(param_1,param_2,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_10084dad0(uVar4);
  }
  return;
}



/* Entry: 1007475d0; end: 10074775b;  */

void FUN_1007475d0(long *param_1,undefined8 *param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x10;
  ulong uVar9;
  long *plVar10;
  ulong uStack_88;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if (param_1 == (long *)0x0) {
    func_0x000107c2c348();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    FUN_1004bdf74(&uStack_38);
    FUN_1004bdf74(&uStack_48);
    func_0x000107c60bd8();
    uVar9 = *param_3;
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6 = (ulong *)(param_1 + 0xc);
    do {
      uVar8 = *puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = uVar8 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar8 == 1) {
      plVar10 = param_1;
      func_0x000100460dc4();
      param_1[0xb] = *plVar10;
      FUN_1007478ac(param_1);
    }
    else {
      if ((param_1[0xb] != 0) &&
         (plVar10 = param_1, func_0x000100460dc4(), uVar8 = extraout_x8, extraout_x10 != *plVar10))
      {
        param_1[0xb] = 0;
      }
      if ((uVar8 & 1) == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                      ,0x96,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100747880);
        (*pcVar4)();
      }
    }
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6 = &uStack_88;
    uStack_88 = uVar9;
    FUN_1004bd890();
    param_2[3] = puVar6;
    if ((uStack_88 & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1004bc388(param_1 + 1,param_2);
    if ((uVar9 & 1) != 0) {
      FUN_10084dad0(uVar9);
    }
    return;
  }
  plVar10 = param_1;
  func_0x000100460dc4();
  if (*(long **)(*plVar10 + 0x18) != param_1) {
    param_2[3] = param_1;
    puVar5 = (undefined8 *)0x30;
    FUN_100460200();
    *puVar5 = FUN_1007483f8;
    puVar5[1] = param_2;
    puVar5[3] = FUN_1004be1e0;
    puVar5[4] = puVar5;
    puVar5[5] = 0;
    uVar9 = *param_3;
    if ((uVar9 & 1) != 0) {
      piVar7 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar9;
    FUN_10074775c(param_1,puVar5 + 2,&uStack_40);
    if ((uVar9 & 1) == 0) {
      return;
    }
    FUN_10084dad0(uVar9);
    return;
  }
  plVar10 = param_1 + 0xe;
  if (*plVar10 == 0) {
    plVar1 = param_1 + 0xc;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar9 = *param_3;
  uStack_48 = uVar9;
  if ((uVar9 & 1) == 0) {
    if (param_2 != (undefined8 *)0x0) goto LAB_1007476d4;
  }
  else {
    piVar7 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2 == (undefined8 *)0x0) goto LAB_100747708;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_1007476d4:
    puVar6 = &uStack_38;
    uStack_38 = uVar9;
    FUN_1004bd890();
    param_2[3] = puVar6;
    if ((uStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    *param_2 = 0;
    if (*plVar10 != 0) {
      plVar10 = (long *)param_1[0xf];
    }
    *plVar10 = (long)param_2;
    param_1[0xf] = (long)param_2;
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
LAB_100747708:
  FUN_10084dad0(uVar9);
  return;
}



/* Entry: 10074775c; end: 1007478ab;  */

void FUN_10074775c(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x10;
  ulong uStack_38;
  
  uVar6 = *param_3;
  if ((uVar6 & 1) != 0) {
    piVar7 = (int *)(uVar6 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar5 = (ulong *)(param_1 + 0xc);
  do {
    uVar8 = *puVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar2) {
      *puVar5 = uVar8 + 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar8 == 1) {
    plVar4 = param_1;
    func_0x000100460dc4();
    param_1[0xb] = *plVar4;
    FUN_1007478ac(param_1);
  }
  else {
    if ((param_1[0xb] != 0) &&
       (plVar4 = param_1, func_0x000100460dc4(), uVar8 = extraout_x8, extraout_x10 != *plVar4)) {
      param_1[0xb] = 0;
    }
    if ((uVar8 & 1) == 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                    ,0x96,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100747880);
      (*pcVar3)();
    }
  }
  if ((uVar6 & 1) != 0) {
    piVar7 = (int *)(uVar6 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar5 = &uStack_38;
  uStack_38 = uVar6;
  FUN_1004bd890();
  *(ulong **)(param_2 + 0x18) = puVar5;
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  FUN_1004bc388(param_1 + 1,param_2);
  if ((uVar6 & 1) != 0) {
    FUN_10084dad0(uVar6);
  }
  return;
}



/* Entry: 1007478ac; end: 100747907;  */

void FUN_1007478ac(long *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x10;
  
  *param_1 = 0;
  func_0x000100460dc4(param_1);
  func_0x000100460dc4();
  if (extraout_x10 == 0) {
    *(undefined8 *)(*param_1 + 0x20) = extraout_x8;
    func_0x000100460dc4();
    puVar2 = (undefined8 *)(*param_1 + 0x18);
    uVar1 = extraout_x8_01;
  }
  else {
    **(undefined8 **)(*param_1 + 0x20) = extraout_x8;
    func_0x000100460dc4();
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    uVar1 = extraout_x8_00;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 100747908; end: 100747ad3;  */

void FUN_100747908(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plStack_58;
  
  if (*(char *)(param_1 + 0xb50) == '\0') {
    *(undefined1 *)(param_1 + 0xb50) = 1;
    plVar5 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(param_1 + 0x30);
    FUN_100460448(lVar8 + 0x40);
    if (*(char *)(lVar8 + 0x80) != '\0') {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                    ,0x13a,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100747a6c);
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar8 + 0x18);
    plVar5 = (long *)0x18;
    func_0x000107c60e20();
    uVar1 = *(undefined8 *)(lVar9 + 0x30);
    lVar7 = *(long *)(lVar9 + 0x38);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = plVar5 + 1;
    *plVar10 = 1;
    *plVar5 = (long)&PTR_SUB_1107c5d60;
    puVar6 = (undefined8 *)0x20;
    func_0x000107c60e20();
    *puVar6 = &PTR_DAT_1107c41c8;
    puVar6[1] = uVar1;
    puVar6[2] = lVar7;
    puVar6[3] = param_1;
    plVar5[2] = (long)puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar5;
    FUN_1004bc2ec(lVar9 + 0x30,&plStack_58);
    if (plStack_58 != (long *)0x0) {
      plVar10 = plStack_58 + 1;
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
    FUN_1004bc3ac(lVar8 + 0x90,plVar5);
    func_0x000100466b80(lVar8 + 0x40);
  }
  return;
}



/* Entry: 100747ad4; end: 100747afb;  */

void FUN_100747ad4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(long *)(param_2 + 0xce8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0xce8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 0xce8);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 100747afc; end: 100747bab;  */

void FUN_100747afc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_38;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 != 0) {
    FUN_100614830(param_2,param_1 + 0x1a0);
    FUN_100460314(param_2);
  }
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x88) = param_4;
  *(code **)(param_1 + 0x188) = FUN_1007484bc;
  *(long *)(param_1 + 400) = param_1;
  *(undefined8 *)(param_1 + 0x198) = 0;
  uStack_38 = 0;
  FUN_10074775c(*(undefined8 *)(param_1 + 0x78),param_1 + 0x180,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100747bac; end: 100747c47;  */

void FUN_100747bac(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar7 = param_1 + 1;
  uVar5 = *param_1;
  puVar8 = puVar7;
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)*puVar7;
  }
  if (1 < uVar5) {
    uVar5 = uVar5 >> 1;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        plVar4 = (long *)puVar8[uVar5];
        if (plVar4 != (long *)0x0) break;
LAB_100747c08:
        if (uVar5 == 0) goto LAB_100747c20;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 != 0) goto LAB_100747c08;
      (**(code **)(*plVar4 + 8))();
    } while (uVar5 != 0);
LAB_100747c20:
    uVar5 = *param_1;
  }
  if ((uVar5 & 1) != 0) {
    func_0x000107c60e14(*puVar7);
  }
  *param_1 = 0;
  return;
}



/* Entry: 100747c48; end: 100747c9f;  */

undefined8 * FUN_100747c48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c7510;
  FUN_100747bac(param_1 + 0xb);
  FUN_1007483a4(param_1 + 0xb);
  FUN_1005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 100747ca0; end: 100747cb3;  */

void FUN_100747ca0(void)

{
  FUN_100747c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100747cb4; end: 100747cc7;  */

void FUN_100747cb4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100747cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 100747cc8; end: 100747dd3;  */

undefined8 * FUN_100747cc8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_1107c6a70;
  FUN_100747cb4(param_1[2]);
  FUN_1007417bc(param_1[0x45]);
  if (param_1[0xd] != 0) {
    func_0x000104aba638();
  }
  if (param_1[0xe] != 0) {
    FUN_10061ce28();
    FUN_100460314(param_1[0xe]);
  }
  FUN_100460314(param_1[0x12]);
  FUN_10061ce28(param_1 + 0x13);
  FUN_100748074(param_1 + 0x44,&uStack_21,&DAT_10f311751,0);
  plVar4 = (long *)param_1[3];
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
  param_1[3] = 0;
  FUN_1007402ac(param_1 + 0x44);
  FUN_1005a5f48(param_1 + 4);
  plVar4 = (long *)param_1[3];
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
  return param_1;
}



/* Entry: 100747dd4; end: 100747de7;  */

void FUN_100747dd4(void)

{
  FUN_100747cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100747de8; end: 100747e73;  */

void FUN_100747de8(long param_1)

{
  FUN_1006fd5c8(*(undefined8 *)(param_1 + 0x10));
  func_0x0001004d2e54(*(undefined8 *)(param_1 + 0x18));
  FUN_100460314(*(undefined8 *)(param_1 + 0x28));
  func_0x000100747e28(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 100747e74; end: 100747e7b; -[SCMixerNamespaceServiceFactory mixerServiceForNamespaces:updateStrategy:] */

void FUN_100747e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cf130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mixerServiceForNamespaces_update_112611660,param_3,param_4,1);
  return;
}



/* Entry: 100747e7c; end: 100748073; -[SCMixerNamespaceServiceFactory mixerServiceForNamespaces:updateStrategy:throttlingEligible:] */

void FUN_100747e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126de458;
  func_0x000107c3cdb0(PTR_PTR_1126de458,param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  func_0x000107c61180();
  puVar8 = puVar1;
  func_0x000107c40808();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61174(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c61174(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c61174(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c61174(uVar7);
    puVar8 = PTR_PTR_1126ae720;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10074b208;
    puStack_b0 = &UNK_110c8e768;
    uStack_a8 = uVar2;
    func_0x000107c61174(puVar1);
    puStack_a0 = puVar1;
    uStack_98 = uVar3;
    uStack_90 = uVar4;
    func_0x000107c61174(param_4);
    uStack_88 = param_4;
    uStack_80 = uVar7;
    uStack_78 = uVar5;
    uStack_70 = uVar6;
    uStack_68 = param_5;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar2);
    func_0x000107c3e4fc(puVar8,param_2,&puStack_c8);
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uStack_78);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uStack_88);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(puStack_a0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100748074; end: 1007480bf;  */

void FUN_100748074(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
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
      func_0x000104acd900();
      func_0x000107c60e14();
    }
  }
  *param_1 = param_4;
  return;
}



/* Entry: 1007480c0; end: 100748153; +[SCMixerNamespaceServiceFactory _verifiedScheduleNamespaces:customNamespaces:] */

void FUN_1007480c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1007492f8;
  puStack_30 = &UNK_110c8e3a0;
  uStack_28 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c43518(param_3,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100748154; end: 1007481cb;  */

undefined8 * FUN_100748154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c75a0;
  if (param_1[0xb] != 0) {
    func_0x000104aba638();
  }
  if (param_1[0xc] != 0) {
    FUN_10061ce28();
    FUN_100460314(param_1[0xc]);
  }
  FUN_10061ce28(param_1 + 0xf);
  FUN_1007481e0(param_1 + 0x3c);
  FUN_1007481e4(param_1 + 0x242);
  FUN_1005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 1007481cc; end: 1007481df;  */

void FUN_1007481cc(void)

{
  FUN_100748154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1007481e0; end: 1007481e3;  */

void FUN_1007481e0(void)

{
  return;
}



/* Entry: 1007481e4; end: 100748317;  */

void FUN_1007481e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  FUN_100460314(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_100460314(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1));
      FUN_100460314(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 + 8));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100748318; end: 10074837b;  */

undefined8 * FUN_100748318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c7660;
  if (param_1[0xb] != 0) {
    func_0x000104aba638();
  }
  if (param_1[0xc] != 0) {
    FUN_10061ce28();
    FUN_100460314(param_1[0xc]);
  }
  FUN_100748390(param_1[0xe]);
  FUN_1005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 10074837c; end: 10074838f;  */

void FUN_10074837c(void)

{
  FUN_100748318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100748390; end: 1007483a3;  */

void FUN_100748390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010074839c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c18 + 8))();
  return;
}



/* Entry: 1007483a4; end: 1007483d7;  */

long * FUN_1007483a4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104addee8(param_1);
  }
  return param_1;
}



/* Entry: 1007483d8; end: 1007483f7;  */

void FUN_1007483d8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1004920d0(param_1,&uStack_11);
  return;
}



/* Entry: 1007483f8; end: 100748473;  */

void FUN_1007483f8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_1007475d0(uVar3,param_1,&uStack_28);
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0(uVar5);
  }
  return;
}



/* Entry: 100748474; end: 1007484bb;  */

void FUN_100748474(long *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000100460dc4();
  func_0x000100460dc4(**(undefined8 **)(*param_1 + 0x18));
  *(undefined8 *)(*param_1 + 0x18) = extraout_x8;
  func_0x000100460dc4();
  if (*(long *)(*param_1 + 0x18) == 0) {
    func_0x000100460dc4();
    *(undefined8 *)(*param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1007484bc; end: 100748d77;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1007484bc(long param_1,ulong *param_2,ulong param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong *puVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uStack_11b8;
  int *piStack_11b0;
  long lStack_11a8;
  undefined1 **ppuStack_11a0;
  code *pcStack_1198;
  ulong uStack_1188;
  ulong *puStack_1180;
  ulong uStack_1178;
  undefined1 *puStack_1170;
  code *pcStack_1168;
  ulong uStack_1160;
  ulong uStack_1158;
  ulong uStack_1150;
  ulong uStack_1148;
  ulong uStack_1140;
  ulong uStack_1138;
  ulong uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined1 uStack_1111;
  ulong uStack_1110;
  ulong uStack_1108;
  ulong uStack_1100;
  ulong uStack_10f8;
  int aiStack_10f0 [2];
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined4 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  ulong *puStack_10b8;
  ulong auStack_10b0 [521];
  long lStack_68;
  
  puVar8 = &uStack_1160;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1138 = *param_2;
  if ((uStack_1138 & 1) != 0) {
    piVar9 = (int *)(uStack_1138 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcVar7 = (char *)param_2;
  uVar11 = uStack_1138;
  if (uStack_1138 != 0) {
    param_4 = aiStack_10f0;
    func_0x000104aba878(&uStack_1140,2,"Endpoint read failed",0x14,param_4,1,&uStack_1138);
    param_3 = (ulong)*(uint *)(param_1 + 0x90);
    pcVar7 = (char *)0xc;
    func_0x000104abaa50(auStack_10b0 + 3,&uStack_1140);
    uVar11 = uStack_1138;
    if (auStack_10b0[3] == uStack_1138) {
LAB_100748580:
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      uStack_1138 = auStack_10b0[3];
      auStack_10b0[3] = 0x36;
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0();
        uVar11 = auStack_10b0[3];
        goto LAB_100748580;
      }
    }
    uVar11 = uStack_1138;
    if ((uStack_1140 & 1) != 0) {
      FUN_10084dad0();
      uVar11 = uStack_1138;
    }
  }
  uStack_1138 = 0x36;
  uVar12 = *param_2;
  if (uVar12 != 0x36) {
    *param_2 = 0x36;
    uStack_1138 = uVar12;
  }
  if (uVar11 != 0x36) {
    *param_2 = uVar11;
  }
  plVar14 = (long *)(param_1 + 0x98);
  if (*plVar14 == 0) {
    if ((uVar11 & 1) != 0) {
      piVar9 = (int *)(uVar11 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_10b0[1] = 0;
    auStack_10b0[2] = 0;
    auStack_10b0[0] = uVar11;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      lVar13 = 0;
      uVar11 = 0;
      puVar4 = auStack_10b0 + 1;
      do {
        auStack_10b0[3] = 0;
        if (auStack_10b0[1] != 0) {
          pcVar7 = (char *)(auStack_10b0 + 3);
          iVar3 = (int)puVar4;
          func_0x000107c2b9bc();
          if ((auStack_10b0[3] & 1) != 0) {
            FUN_10084dad0();
          }
          if (iVar3 == 0) break;
        }
        pcVar7 = (char *)(*(long *)(param_1 + 0x1a8) + lVar13);
        FUN_1008d7e10(auStack_10b0 + 3,param_1);
        uVar12 = auStack_10b0[1];
        if (auStack_10b0[3] == auStack_10b0[1]) {
LAB_100748678:
          if ((uVar12 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
          auStack_10b0[1] = auStack_10b0[3];
          auStack_10b0[3] = 0x36;
          if ((uVar12 & 1) != 0) {
            FUN_10084dad0();
            uVar12 = auStack_10b0[3];
            goto LAB_100748678;
          }
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x20;
      } while (uVar11 < *(ulong *)(param_1 + 0x1b0));
      auStack_10b0[3] = 0;
      if (auStack_10b0[1] != 0) {
        pcVar7 = (char *)(auStack_10b0 + 3);
        func_0x000107c2b9bc();
        if ((auStack_10b0[3] & 1) != 0) {
          FUN_10084dad0();
        }
        if (((ulong)puVar4 & 1) == 0) {
          uStack_1148 = 0;
          aiStack_10f0[0] = 0;
          uStack_10e0 = 0;
          uStack_10d8 = 0;
          uStack_10e8 = 0;
          uStack_10d0 = 0;
          uStack_10c8 = 0;
          uStack_10c0 = 0;
          FUN_1004dc5a0(auStack_10b0 + 3,0,aiStack_10f0);
          uStack_10f8 = 0;
          if (*(long *)(param_1 + 0x1b0) == 0) {
LAB_100748768:
            func_0x000104aba0a0(&uStack_1130,auStack_10b0 + 3);
            uVar11 = uStack_10f8;
            if (uStack_1130 != uStack_10f8) {
              uStack_10f8 = uStack_1130;
              uStack_1130 = 0x36;
              if ((uVar11 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            puStack_10b8 = (ulong *)0x0;
            if (uStack_10f8 == 0) {
              iVar3 = 1;
            }
            else {
              puVar4 = &uStack_10f8;
              func_0x000107c2b9bc(puVar4,&puStack_10b8);
              iVar3 = (int)puVar4;
              if (((ulong)puStack_10b8 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            if ((uStack_1130 & 1) != 0) {
              FUN_10084dad0();
            }
            if (iVar3 != 0) {
              uStack_1128 = 0;
              uStack_1120 = 0;
              uStack_1130 = 0;
              func_0x000104ab5920(&uStack_1110,2,"Trying to connect an http1.x server",0x23,
                                  &uStack_1111,&uStack_1130);
              func_0x000104abaa50(&uStack_1108,&uStack_1110,0xb,(long)aiStack_10f0[0]);
              iVar3 = aiStack_10f0[0];
              func_0x000104adf590(aiStack_10f0[0]);
              func_0x000104abaa50(&uStack_1100,&uStack_1108,3,(long)iVar3);
              if (uStack_1100 != 0) {
                uStack_1148 = uStack_1100;
                uStack_1100 = 0x36;
              }
              if ((uStack_1108 & 1) != 0) {
                FUN_10084dad0();
              }
              if ((uStack_1110 & 1) != 0) {
                FUN_10084dad0();
              }
              puStack_10b8 = &uStack_1130;
              func_0x000100482b64(&puStack_10b8);
            }
          }
          else {
            lVar13 = 0;
            uVar11 = 0;
            do {
              func_0x000104ab8f08(&uStack_1130,auStack_10b0 + 3,*(long *)(param_1 + 0x1a8) + lVar13,
                                  0);
              uVar12 = uStack_10f8;
              if (uStack_1130 == uStack_10f8) {
LAB_10074873c:
                if ((uVar12 & 1) != 0) {
                  FUN_10084dad0();
                }
              }
              else {
                uStack_10f8 = uStack_1130;
                uStack_1130 = 0x36;
                if ((uVar12 & 1) != 0) {
                  FUN_10084dad0();
                  uVar12 = uStack_1130;
                  goto LAB_10074873c;
                }
              }
              uVar11 = uVar11 + 1;
              if (*(ulong *)(param_1 + 0x1b0) <= uVar11) {
                if (uStack_10f8 == 0) goto LAB_100748768;
                break;
              }
              lVar13 = lVar13 + 0x20;
            } while (uStack_10f8 == 0);
          }
          FUN_1007481e0(auStack_10b0 + 3);
          FUN_1007481e4(aiStack_10f0);
          if ((uStack_10f8 & 1) != 0) {
            FUN_10084dad0();
          }
          uVar11 = auStack_10b0[2];
          if (uStack_1148 == auStack_10b0[2]) {
LAB_1007488b8:
            if ((uVar11 & 1) != 0) {
              FUN_10084dad0();
            }
          }
          else {
            auStack_10b0[2] = uStack_1148;
            uStack_1148 = 0x36;
            if ((uVar11 & 1) != 0) {
              FUN_10084dad0();
              uVar11 = uStack_1148;
              goto LAB_1007488b8;
            }
          }
          pcVar7 = "Failed parsing HTTP/2";
          param_4 = aiStack_10f0;
          param_3 = 0x15;
          func_0x000104aba878(auStack_10b0 + 3,2);
          uVar11 = *param_2;
          if (auStack_10b0[3] != uVar11) {
            *param_2 = auStack_10b0[3];
            auStack_10b0[3] = 0x36;
            if ((uVar11 & 1) == 0) goto LAB_100748914;
            FUN_10084dad0();
            uVar11 = auStack_10b0[3];
          }
          if ((uVar11 & 1) != 0) {
            FUN_10084dad0();
          }
        }
      }
    }
LAB_100748914:
    if (*(long *)(param_1 + 0xa90) != 0) {
      if (0 < *(long *)(param_1 + 0xa90)) {
        while( true ) {
          pcVar7 = (char *)(auStack_10b0 + 3);
          lVar13 = param_1;
          FUN_1008d9648();
          uVar11 = auStack_10b0[3];
          if ((int)lVar13 == 0) break;
          if ((*plVar14 == 0) &&
             (lVar13 = param_1, FUN_1008df064(param_1,auStack_10b0[3]), (int)lVar13 != 0)) {
            plVar10 = *(long **)(uVar11 + 0x10);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *plVar10 = *plVar10 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_1007474b0(param_1,0xe);
        }
      }
      *(undefined8 *)(param_1 + 0xa90) = 0;
    }
    lVar13 = 0x10;
    do {
      if ((*(ulong *)((long)auStack_10b0 + lVar13) & 1) != 0) {
        FUN_10084dad0();
      }
      lVar13 = lVar13 + -8;
    } while (lVar13 != -8);
    uVar11 = *param_2;
  }
  if (uVar11 == 0) {
    if (*plVar14 != 0) {
      pcVar7 = "Transport closed";
      param_4 = aiStack_10f0;
      param_3 = 0x10;
      func_0x000104aba878(auStack_10b0 + 3,2);
      uVar11 = auStack_10b0[3];
      uVar12 = *param_2;
      if (auStack_10b0[3] == uVar12) {
LAB_1007489f4:
        if ((uVar12 & 1) != 0) {
          FUN_10084dad0();
        }
        uVar11 = *param_2;
      }
      else {
        *param_2 = auStack_10b0[3];
        auStack_10b0[3] = 0x36;
        if ((uVar12 & 1) != 0) {
          FUN_10084dad0();
          uVar12 = auStack_10b0[3];
          goto LAB_1007489f4;
        }
      }
      if (uVar11 != 0) goto LAB_100748a04;
      if (*plVar14 != 0) {
        bVar2 = false;
        goto LAB_100748ae0;
      }
    }
    if (*(int *)(param_1 + 0xcdc) == 0) {
      FUN_1005a5960(param_1 + 0xc58);
    }
    bVar2 = true;
    goto LAB_100748ae0;
  }
LAB_100748a04:
  uVar12 = *(ulong *)(param_1 + 0x760);
  if (uVar12 != 0) {
    if ((uVar11 & 1) != 0) {
      piVar9 = (int *)(uVar11 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar12 = *(ulong *)(param_1 + 0x760);
    }
    if ((uVar12 & 1) != 0) {
      piVar9 = (int *)(uVar12 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_1158 = uVar12;
    uStack_1150 = uVar11;
    FUN_1008306c4(auStack_10b0 + 3,&uStack_1150,&uStack_1158);
    uVar11 = *param_2;
    if (auStack_10b0[3] == uVar11) {
LAB_100748a80:
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_2 = auStack_10b0[3];
      auStack_10b0[3] = 0x36;
      if ((uVar11 & 1) != 0) {
        FUN_10084dad0();
        uVar11 = auStack_10b0[3];
        goto LAB_100748a80;
      }
    }
    if ((uStack_1158 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_1150 & 1) != 0) {
      FUN_10084dad0();
    }
    uVar11 = *param_2;
  }
  if ((uVar11 & 1) != 0) {
    piVar9 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_1160 = uVar11;
  func_0x000104a98258(param_1);
  if ((uStack_1160 & 1) != 0) {
    FUN_10084dad0();
  }
  bVar2 = false;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  pcVar7 = (char *)puVar8;
LAB_100748ae0:
  puVar8 = (ulong *)(param_1 + 0x1a0);
  FUN_1005a7050(puVar8);
  if (bVar2) {
    if (*(uint *)(param_1 + 0xcf4) >> 4 < 0x271) {
      param_4 = (int *)(ulong)(*(long *)(param_1 + 0x760) != 0);
      param_3 = param_1 + 0x180;
      *(code **)(param_1 + 0x188) = FUN_1008d7d84;
      *(long *)(param_1 + 400) = param_1;
      *(undefined8 *)(param_1 + 0x198) = 0;
      pcVar7 = (char *)puVar8;
      FUN_1005a7dc4(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      *(undefined1 *)(param_1 + 0xcf8) = 1;
    }
  }
  else {
    plVar14 = (long *)(param_1 + 8);
    do {
      lVar13 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      func_0x000104a96f9c(param_1);
      func_0x000107c60e14();
    }
  }
  uVar11 = uStack_1138;
  if ((uStack_1138 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    if ((int)pcVar7 != 0) {
      func_0x000104bd46a0();
      lVar13 = 0x10;
      do {
        FUN_1004bdf74((long)auStack_10b0 + lVar13);
        lVar13 = lVar13 + -8;
      } while (lVar13 != -8);
      FUN_1004bdf74(&uStack_1138);
      puVar8 = (ulong *)0xfffffffffffffff8;
    }
    uVar12 = uVar11;
    func_0x000107c60bd8();
    pcStack_1168 = FUN_100748d78;
    *(ulong *)(uVar12 + 0xe0) = param_3;
    *(char **)(uVar12 + 0x110) = pcVar7;
    puStack_1180 = puVar8;
    uStack_1178 = uVar11;
    puStack_1170 = &stack0xfffffffffffffff0;
    FUN_1005a7050(pcVar7);
    func_0x0001004811f0(uVar12 + 0x628);
    if (*(long *)(uVar12 + 0x250) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined8 **)(uVar12 + 8))
                (*(undefined8 **)(uVar12 + 8),uVar12 + 0x118,uVar12 + 0xf0,param_4,
                 *(undefined4 *)(uVar12 + 0x4fc));
      return;
    }
    lVar13 = uVar12 + 0x240;
    puVar8 = (ulong *)(uVar12 + 0x118);
    FUN_1006148f8();
    if (*(long *)(uVar12 + 0x250) != 0) {
      func_0x000107c2c3dc();
      func_0x000104bd46a0();
      FUN_1004bdf74(&uStack_1188);
      lVar5 = lVar13;
      func_0x000107c60bd8();
      pcStack_1198 = FUN_100748e30;
      uVar6 = *(undefined8 *)(lVar5 + 0x78);
      *(code **)(lVar5 + 0xbe0) = FUN_100748ec0;
      *(long *)(lVar5 + 0xbe8) = lVar5;
      *(undefined8 *)(lVar5 + 0xbf0) = 0;
      uStack_11b8 = *puVar8;
      if ((uStack_11b8 & 1) != 0) {
        piVar9 = (int *)(uStack_11b8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      piStack_11b0 = param_4;
      lStack_11a8 = lVar13;
      ppuStack_11a0 = &puStack_1170;
      FUN_10074775c(uVar6,lVar5 + 0xbd8,&uStack_11b8);
      if ((uStack_11b8 & 1) != 0) {
        FUN_10084dad0();
      }
      return;
    }
    uStack_1188 = 0;
    FUN_1008d753c(uVar12,&uStack_1188);
    if ((uStack_1188 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  return;
}



/* Entry: 100748d78; end: 100748e2f;  */

void FUN_100748d78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  ulong uStack_28;
  
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0x110) = param_2;
  FUN_1005a7050(param_2);
  func_0x0001004811f0(param_1 + 0x628);
  if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),param_1 + 0x118,param_1 + 0xf0,param_4,
               *(undefined4 *)(param_1 + 0x4fc));
    return;
  }
  lVar3 = param_1 + 0x240;
  puVar6 = (ulong *)(param_1 + 0x118);
  FUN_1006148f8();
  if (*(long *)(param_1 + 0x250) == 0) {
    uStack_28 = 0;
    FUN_1008d753c(param_1,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  func_0x000107c2c3dc();
  func_0x000104bd46a0();
  FUN_1004bdf74(&uStack_28);
  lVar4 = lVar3;
  func_0x000107c60bd8();
  pcStack_38 = FUN_100748e30;
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  *(code **)(lVar4 + 0xbe0) = FUN_100748ec0;
  *(long *)(lVar4 + 0xbe8) = lVar4;
  *(undefined8 *)(lVar4 + 0xbf0) = 0;
  uStack_58 = *puVar6;
  if ((uStack_58 & 1) != 0) {
    piVar7 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = param_4;
  lStack_48 = lVar3;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10074775c(uVar5,lVar4 + 0xbd8,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100748e30; end: 100748ebf;  */

void FUN_100748e30(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xbe0) = FUN_100748ec0;
  *(long *)(param_1 + 0xbe8) = param_1;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10074775c(uVar3,param_1 + 0xbd8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100748ec0; end: 1007492eb;  */

void FUN_100748ec0(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  if (*(int *)((long)param_1 + 0xcdc) != 0) {
    func_0x000107c2c284();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    FUN_1004bdf74(&puStack_38);
    FUN_1004bdf74(&uStack_48);
    func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x0001007492f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 0x10))();
    return;
  }
  if ((*(char *)((long)param_1 + 0x94) != '\0') || (param_1[0x13] != 0)) {
    *(undefined4 *)((long)param_1 + 0xcdc) = 2;
    goto LAB_100748ef8;
  }
  if (*param_2 == 0) {
    if ((char)param_1[0x19b] == '\0') {
      puVar9 = param_1 + 0x1f;
      FUN_1008ded94();
      if (puVar9 == (ulong *)0x0) {
        puVar1 = param_1 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        param_1[0x17c] = (ulong)FUN_100748e30;
        param_1[0x17d] = (ulong)param_1;
        param_1[0x17e] = 0;
        func_0x000100460dc4();
        uVar8 = *puVar9;
        FUN_1004671a4(uVar8);
        func_0x000104a9a768();
        goto LAB_10074926c;
      }
    }
    *(undefined4 *)((long)param_1 + 0xcdc) = 1;
    puVar9 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = *puVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000104ac82d4(param_1 + 0x192);
    puStack_38 = (ulong *)param_1[0x13];
    if (puStack_38 == (ulong *)0x0) {
      if (param_1[0x102] == 0) {
        param_1[0x180] = (ulong)&UNK_104a9aad0;
        param_1[0x181] = (ulong)param_1;
        param_1[0x182] = 0;
        uStack_40 = 0;
        puStack_38 = (ulong *)0x0;
        ppuVar5 = &puStack_38;
        FUN_1004bd890();
        param_1[0x182] = (ulong)ppuVar5;
        if (((ulong)puStack_38 & 1) != 0) {
          FUN_10084dad0();
        }
        puVar9 = param_1 + 0xfe;
        puVar1 = param_1 + 0x17f;
        *puVar1 = 0;
        if (*puVar9 != 0) {
          puVar9 = (ulong *)param_1[0xff];
        }
        *puVar9 = (ulong)puVar1;
        param_1[0xff] = (ulong)puVar1;
        param_1[0x184] = (ulong)&UNK_104a9aa40;
        param_1[0x185] = (ulong)param_1;
        param_1[0x186] = 0;
        uStack_48 = 0;
        puStack_38 = (ulong *)0x0;
        ppuVar5 = &puStack_38;
        FUN_1004bd890();
        param_1[0x186] = (ulong)ppuVar5;
        if (((ulong)puStack_38 & 1) != 0) {
          FUN_10084dad0();
        }
        puVar9 = param_1 + 0x100;
        puVar1 = param_1 + 0x183;
        *puVar1 = 0;
        if (*puVar9 != 0) {
          puVar9 = (ulong *)param_1[0x101];
        }
        *puVar9 = (ulong)puVar1;
        param_1[0x101] = (ulong)puVar1;
      }
      else {
        param_1[0x180] = (ulong)&UNK_104a9a7c4;
        param_1[0x181] = (ulong)param_1;
        param_1[0x182] = 0;
        uStack_40 = 0;
        FUN_10074775c(param_1[0xf],param_1 + 0x17f,&uStack_40);
        if ((uStack_40 & 1) != 0) {
          FUN_10084dad0();
        }
        param_1[0x184] = (ulong)&UNK_104a9aa40;
        param_1[0x185] = (ulong)param_1;
        param_1[0x186] = 0;
        uStack_48 = 0;
        puStack_38 = (ulong *)0x0;
        ppuVar5 = &puStack_38;
        FUN_1004bd890();
        param_1[0x186] = (ulong)ppuVar5;
        if (((ulong)puStack_38 & 1) != 0) {
          FUN_10084dad0();
        }
        puVar9 = param_1 + 0x102;
        puVar1 = param_1 + 0x183;
        *puVar1 = 0;
        if (*puVar9 != 0) {
          puVar9 = (ulong *)param_1[0x103];
        }
        *puVar9 = (ulong)puVar1;
        param_1[0x103] = (ulong)puVar1;
      }
    }
    else {
      uVar8 = param_1[0xf];
      param_1[0x180] = (ulong)&UNK_104a9a7c4;
      param_1[0x181] = (ulong)param_1;
      param_1[0x182] = 0;
      if (((ulong)puStack_38 & 1) != 0) {
        piVar7 = (int *)((long)puStack_38 + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10074775c(uVar8,param_1 + 0x17f,&puStack_38);
      if (((ulong)puStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
      uVar8 = param_1[0xf];
      param_1[0x184] = (ulong)&UNK_104a9a8ac;
      param_1[0x185] = (ulong)param_1;
      param_1[0x186] = 0;
      uStack_40 = param_1[0x13];
      if ((uStack_40 & 1) != 0) {
        piVar7 = (int *)(uStack_40 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10074775c(uVar8,param_1 + 0x183,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    FUN_1007474b0(param_1,0x12);
    goto LAB_100748ef8;
  }
  puStack_38 = (ulong *)0x4;
  puVar9 = param_1;
  if (*param_2 != 4) {
    func_0x000107c2b9bc(param_2,&puStack_38);
    puVar9 = puStack_38;
    if (((ulong)puStack_38 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((int)param_2 == 0) goto LAB_100748ef8;
  }
  puVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x17c] = (ulong)FUN_100748e30;
  param_1[0x17d] = (ulong)param_1;
  param_1[0x17e] = 0;
  func_0x000100460dc4();
  uVar4 = *puVar9;
  FUN_1004671a4();
  uVar6 = param_1[0x199];
  uVar8 = 0x7fffffffffffffff;
  if ((uVar4 != 0x7fffffffffffffff && uVar6 != 0x7fffffffffffffff) &&
     (uVar8 = 0x8000000000000000, uVar4 != 0x8000000000000000 && uVar6 != 0x8000000000000000)) {
    if ((long)uVar4 < 1) {
      if ((long)(-0x8000000000000000 - uVar4) <= (long)uVar6) goto LAB_100749268;
    }
    else if ((long)(uVar4 ^ 0x7fffffffffffffff) < (long)uVar6) {
      uVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_100749268:
      uVar8 = uVar6 + uVar4;
    }
  }
LAB_10074926c:
  func_0x000100480ee4(param_1 + 0x18b,uVar8,param_1 + 0x17b);
LAB_100748ef8:
  puVar9 = param_1 + 1;
  do {
    uVar8 = *puVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar3) {
      *puVar9 = uVar8 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar8 - 1 == 0) {
    func_0x000104a96f9c(param_1);
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1007492ec; end: 1007492f7;  */

void FUN_1007492ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001007492f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1007492f8; end: 100749343;  */

uint FUN_1007492f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4d420(param_2);
  func_0x000107c61180();
  func_0x000107c40404(uVar1);
  func_0x000107c61170(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 100749344; end: 10074934b; -[SCLensScheduleNamespace namespaceId] */

undefined8 FUN_100749344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10074934c; end: 1007494f3;  */

ulong ***** FUN_10074934c(long *param_1,long param_2,long param_3,uint param_4,ulong *****param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  ulong ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *****pppppuVar10;
  ulong *****pppppuVar11;
  undefined4 uVar12;
  undefined8 ****ppppuVar13;
  ulong ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  long lVar18;
  uint uVar19;
  ulong *****pppppuVar20;
  ushort *puVar21;
  undefined8 ***pppuVar22;
  undefined8 **ppuVar23;
  ulong uVar24;
  ulong ****ppppuVar25;
  ulong *****pppppuVar26;
  ulong ****ppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  ulong ****ppppuVar30;
  undefined8 ****ppppuVar31;
  uint5 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint5 uVar35;
  uint5 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 ****ppppuStack_1d8;
  undefined8 ****ppppuStack_158;
  undefined8 uStack_150;
  int iStack_148;
  int iStack_144;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  ulong uStack_138;
  ulong ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  ulong ****ppppuStack_120;
  undefined1 uStack_118;
  uint uStack_114;
  undefined1 uStack_110;
  uint uStack_10c;
  undefined1 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong ****ppppuStack_f0;
  long lStack_e0;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (ulong *****)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    pppppuVar20 = (ulong *****)0x0;
    do {
      iVar9 = iVar9 + ((uint)(*(int *)(param_3 + (long)pppppuVar20 * 4) !=
                             *(int *)(param_2 + (long)pppppuVar20 * 4)) |
                      param_4 >> (ulong)((uint)pppppuVar20 & 0x1f) & 1);
      pppppuVar20 = (ulong *****)((long)pppppuVar20 + 1);
    } while (param_5 != pppppuVar20);
    iVar9 = iVar9 * 6;
  }
  pppppuVar20 = (ulong *****)(ulong)(iVar9 + 9);
  func_0x0001005a7e6c(&lStack_68);
  param_1[1] = lStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = lStack_58;
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  *puVar2 = (char)((uint)iVar9 >> 0x10);
  puVar2[1] = (char)((uint)iVar9 >> 8);
  puVar2[2] = (char)iVar9;
  *(undefined2 *)(puVar2 + 3) = 4;
  puVar21 = (ushort *)(puVar2 + 9);
  *(undefined4 *)(puVar2 + 5) = 0;
  if (param_5 != (ulong *****)0x0) {
    pppppuVar26 = (ulong *****)0x0;
    do {
      if ((*(int *)(param_3 + (long)pppppuVar26 * 4) != *(int *)(param_2 + (long)pppppuVar26 * 4))
         || ((param_4 >> (ulong)((uint)pppppuVar26 & 0x1f) & 1) != 0)) {
        *puVar21 = *(ushort *)(&UNK_10dd55478 + (long)pppppuVar26 * 2) >> 8 |
                   *(ushort *)(&UNK_10dd55478 + (long)pppppuVar26 * 2) << 8;
        puVar1 = (undefined4 *)(param_3 + (long)pppppuVar26 * 4);
        *(undefined1 *)(puVar21 + 1) = *(undefined1 *)((long)puVar1 + 3);
        *(char *)((long)puVar21 + 3) = (char)*(undefined2 *)((long)puVar1 + 2);
        *(char *)(puVar21 + 2) = (char)((uint)*puVar1 >> 8);
        *(char *)((long)puVar21 + 5) = (char)*puVar1;
        puVar21 = puVar21 + 3;
        *(undefined4 *)(param_2 + (long)pppppuVar26 * 4) = *puVar1;
      }
      pppppuVar26 = (ulong *****)((long)pppppuVar26 + 1);
    } while (param_5 != pppppuVar26);
  }
  puVar2 = (undefined1 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
  }
  uVar24 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar24 = param_1[1];
  }
  if (puVar21 == (ushort *)(puVar2 + uVar24)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pppppuVar20;
    }
  }
  else {
    func_0x000107c2c2b8();
  }
  func_0x000107c60e78();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0;
  iStack_148 = 0;
  iStack_144 = 0;
  uStack_140 = 0;
  uStack_13f = 0;
  uStack_13e = 0;
  ppppuStack_158 = pppppuVar20;
  if ((*(char *)((long)pppppuVar20 + 0x76c) != '\0') &&
     (*(char *)((long)pppppuVar20 + 0x76d) == '\0')) {
    FUN_10074934c(&ppppuStack_130,(long)pppppuVar20 + 0x7ac,pppppuVar20 + 0xf2,
                  *(undefined4 *)(pppppuVar20 + 0xee),7);
    FUN_1005a70c4(pppppuVar20 + 0x62,&ppppuStack_130);
    *(undefined4 *)(ppppuStack_158 + 0xee) = 0;
    *(undefined2 *)((long)ppppuStack_158 + 0x76c) = 0x100;
  }
  if ((ulong ****)ppppuStack_158[0x116] != (ulong ****)0x0) {
    param_5 = (ulong *****)0x0;
    do {
      ppppuVar13 = ppppuStack_158;
      func_0x000104a9cf48(&ppppuStack_130,1,ppppuStack_158[0x118][(long)param_5]);
      FUN_1005a70c4(ppppuVar13 + 0x62,&ppppuStack_130);
      param_5 = (ulong *****)((long)param_5 + 1);
    } while (param_5 < ppppuStack_158[0x116]);
  }
  ppppuStack_158[0x116] = (ulong ****)0x0;
  FUN_100614830(ppppuStack_158 + 0xc6,ppppuStack_158 + 0x62);
  *(undefined4 *)((long)ppppuStack_158 + 0xcf4) = 0;
  if ((ulong ****)ppppuStack_158[200] != (ulong ****)0x0) {
    func_0x000107c2c2e0();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100749f9c);
    (*pcVar6)();
  }
  FUN_10074a218(ppppuStack_158 + 0x87,*(undefined4 *)((long)ppppuStack_158 + 0x774));
  if ((0 < (long)pppppuVar20[0x14d]) &&
     (pppppuVar26 = (ulong *****)ppppuStack_158, FUN_10074a250(ppppuStack_158,&ppppuStack_130),
     (int)pppppuVar26 != 0)) {
    do {
      if (((ulong ****)ppppuStack_158[0x13] == (ulong ****)0x0) &&
         (pppppuVar26 = (ulong *****)ppppuStack_158, FUN_1008df064(ppppuStack_158,ppppuStack_130),
         (int)pppppuVar26 != 0)) {
        ppppuVar13 = (undefined8 ****)ppppuStack_130[2];
        pppuVar17 = *ppppuVar13;
        do {
          while( true ) {
            if (pppuVar17 == (undefined8 ***)0x0) {
              func_0x000104aa7920(ppppuStack_158,ppppuStack_130);
              goto LAB_10074967c;
            }
            pppuVar22 = *ppppuVar13;
            if (pppuVar22 == pppuVar17) break;
            ClearExclusiveLocal();
            pppuVar17 = pppuVar22;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
          if (bVar5) {
            *ppppuVar13 = (undefined8 ***)((long)pppuVar17 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
          pppuVar17 = pppuVar22;
        } while (cVar4 != '\0');
      }
LAB_10074967c:
      pppppuVar26 = (ulong *****)ppppuStack_158;
      FUN_10074a250(ppppuStack_158,&ppppuStack_130);
    } while (((ulong)pppppuVar26 & 1) != 0);
  }
  if (ppppuStack_158[0x66] < (ulong ****)0x100001) {
    do {
      pppppuVar26 = (ulong *****)ppppuStack_158;
      func_0x00010074a2e0(ppppuStack_158,&ppppuStack_130);
      ppppuVar25 = ppppuStack_130;
      ppppuVar13 = ppppuStack_158;
      iVar9 = 0;
      if ((undefined8 *****)ppppuStack_130 != (undefined8 *****)0x0) {
        iVar9 = (int)pppppuVar26;
      }
      if (iVar9 != 1) goto LAB_100749ce8;
      bVar5 = false;
      param_5 = (ulong *****)0x0;
      ppppuStack_128 = ppppuStack_158;
      ppppuStack_120 = ppppuStack_130;
      uStack_118 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
      uStack_110 = 0;
      uStack_10c = uStack_10c & 0xffffff00;
      uStack_108 = 0;
      ppppuVar14 = pppppuVar20[0x66];
      pppppuVar10 = &ppppuStack_158;
      if (*(char *)(ppppuStack_130 + 0xde) == '\0') {
        ppppuVar15 = (undefined8 ****)ppppuStack_130[0x14];
        if (ppppuVar15 == (undefined8 ****)0x0) {
          bVar5 = false;
          param_5 = (ulong *****)0x0;
        }
        else {
          ppppuVar28 = ppppuVar15;
          if (((*(char *)(ppppuStack_158 + 0xc5) == '\0') &&
              ((undefined8 ****)ppppuStack_130[0xe9] == (undefined8 ****)0x0)) &&
             ((undefined8 ****)ppppuStack_130[0x16] != (undefined8 ****)0x0)) {
            uVar19 = *(uint *)ppppuVar15;
            auVar33._4_4_ = uVar19;
            auVar33._0_4_ = uVar19;
            auVar33._8_4_ = uVar19;
            auVar33._12_4_ = uVar19;
            auVar37._8_8_ = 0xfffffffcfffffffd;
            auVar37._0_8_ = 0xfffffffeffffffff;
            auVar37 = NEON_ushl(auVar33,auVar37,4);
            uVar35 = CONCAT14(auVar37[4],(uint)(auVar37[0] & 1)) & 0x1ffffffff;
            auVar34._8_8_ = 0xffffffeffffffff0;
            auVar34._0_8_ = 0xfffffff1fffffff2;
            auVar38._8_8_ = 0xfffffff6fffffff7;
            auVar38._0_8_ = 0xfffffff8fffffff9;
            auVar38 = NEON_ushl(auVar33,auVar38,4);
            uVar36 = CONCAT14(auVar38[4],(uint)(auVar38[0] & 1)) & 0x1ffffffff;
            auVar34 = NEON_ushl(auVar33,auVar34,4);
            uVar32 = CONCAT14(auVar34[4],(uint)(auVar34[0] & 1)) & 0x1ffffffff;
            lVar18 = (ulong)((int)uVar32 + (uint)(byte)(uVar32 >> 0x20) +
                             (uint)(auVar34[8] & 1) + (uint)(auVar34[0xc] & 1) +
                             (uVar19 >> 0x12 & 1) + (uVar19 >> 0x13 & 1) + (uVar19 >> 0x14 & 1)) +
                     ((ulong)(uVar19 >> 0x15) & 1) +
                     (ulong)((int)uVar36 + (uint)(byte)(uVar36 >> 0x20) +
                             (uint)(auVar38[8] & 1) + (uint)(auVar38[0xc] & 1) + (uVar19 >> 0xb & 1)
                            + (uVar19 >> 0xc & 1) + (uVar19 >> 0xd & 1)) +
                     (ulong)((int)uVar35 + (uint)(byte)(uVar35 >> 0x20) +
                             (uint)(auVar37[8] & 1) + (uint)(auVar37[0xc] & 1) + (uVar19 & 1) +
                            (uVar19 >> 5 & 1) + (uVar19 >> 6 & 1));
            if (((uVar19 >> 0x16 & 1) != 0) && ((undefined8 ***)0x1 < ppppuVar15[0xc])) {
              lVar18 = lVar18 + ((long)ppppuVar15[0xc] * 0x10 - 0x20U >> 5) + 1;
            }
            pppuVar17 = ppppuVar15[0x3f];
            if ((pppuVar17 != (undefined8 ***)0x0) && (pppuVar17[1] == (undefined8 **)0x0)) {
              pppuVar17 = (undefined8 ***)0x0;
            }
LAB_100749c48:
            ppuVar23 = (undefined8 **)0x0;
            while( true ) {
              while (pppuVar17 != (undefined8 ***)0x0) {
                ppuVar23 = (undefined8 **)((long)ppuVar23 + 1);
                while (ppuVar23 == pppuVar17[1]) {
                  ppuVar23 = (undefined8 **)0x0;
                  pppuVar17 = (undefined8 ***)*pppuVar17;
                  if (pppuVar17 == (undefined8 ***)0x0) goto LAB_100749c48;
                }
              }
              if (ppuVar23 == (undefined8 **)0x0) break;
              pppuVar17 = (undefined8 ***)0x0;
              ppuVar23 = (undefined8 **)((long)ppuVar23 + 1);
            }
            ppppuStack_130 = (ulong ****)&ppppuStack_158;
            FUN_1006195d4();
            ppppuVar28 = (undefined8 ****)ppppuVar25[0x14];
            pppppuVar10 = (undefined8 *****)ppppuStack_130;
            if ((undefined8 ****)(lVar18 + ((ulong)(uVar19 >> 0x17) & 1)) != ppppuVar15)
            goto LAB_1007498ac;
            if ((*(uint *)ppppuVar28 >> 3 & 1) == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulong)*(uint *)((long)ppppuVar28 + 0x1a4) | 0x100000000;
            }
            uStack_114 = (uint)uVar24;
            param_5 = (ulong *****)(uVar24 >> 0x20);
            uStack_110 = (undefined1)(uVar24 >> 0x20);
            bVar5 = (*(uint *)ppppuVar28 >> 5 & 1) != 0;
            uStack_108 = bVar5;
            if (bVar5) {
              uStack_10c = *(uint *)((long)ppppuVar28 + 0x19c);
            }
            else {
              uStack_10c = 0;
            }
          }
          else {
LAB_1007498ac:
            ppppuStack_130 = (ulong ****)pppppuVar10;
            uVar24 = uStack_100;
            uStack_100._0_5_ = (uint5)*(uint *)((long)ppppuVar25 + 0x9c);
            uStack_100._6_2_ = SUB82(uVar24,6);
            uStack_100._0_6_ = CONCAT15(*(int *)((long)ppppuVar13 + 0x78c) != 0,(uint5)uStack_100);
            uStack_f8 = (ulong)*(uint *)((long)ppppuVar13 + 0x784);
            ppppuStack_f0 = ppppuVar25 + 0x2a;
            FUN_1008df430(ppppuVar13 + 0x87,&uStack_100,ppppuVar28,ppppuVar13 + 0x62);
            FUN_10074a3ec(ppppuVar13);
            bVar5 = false;
            param_5 = (ulong *****)0x0;
            uStack_150 = CONCAT44(uStack_150._4_4_ + 1,(int)uStack_150);
          }
          ppppuVar25[0x14] = (ulong ***)0x0;
          *(undefined1 *)(ppppuVar25 + 0xde) = 1;
          uStack_13e = 1;
          uStack_100 = 0;
          FUN_1008df0bc(ppppuVar13,ppppuVar25,ppppuVar25 + 0x15,&uStack_100,
                        "send_initial_metadata_finished");
          pppppuVar10 = (undefined8 *****)ppppuStack_130;
          if ((uStack_100 & 1) != 0) {
            FUN_10084dad0();
            pppppuVar10 = (undefined8 *****)ppppuStack_130;
          }
        }
      }
      ppppuStack_130 = (ulong ****)pppppuVar10;
      if (*(char *)((long)ppppuVar25 + 0x169) == '\0') {
        pppppuVar10 = (undefined8 *****)(ppppuVar25 + 0xdf);
        FUN_1008e1a30();
        if ((int)pppppuVar10 != 0) {
          FUN_10074a344(&uStack_100,*(undefined4 *)((long)ppppuVar25 + 0x9c),pppppuVar10,
                        ppppuVar25 + 0x2a);
          FUN_1005a70c4(ppppuVar13 + 0x62,&uStack_100);
          FUN_10074a3ec(ppppuVar13);
          uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150 + 1);
        }
      }
      if (*(char *)(ppppuVar25 + 0xde) == '\0') {
        bVar7 = false;
      }
      else {
        ppppuVar15 = (undefined8 ****)ppppuVar25[0xe9];
        if (ppppuVar15 == (undefined8 ****)0x0) {
LAB_1007499fc:
          bVar7 = false;
        }
        else {
          ppppuVar27 = (ulong ****)
                       (ulong)((uint)((long)ppppuVar25[0xe1] + (ulong)*(uint *)(ppppuVar13 + 0xf0))
                              & ((uint)((long)((long)ppppuVar25[0xe1] +
                                              (ulong)*(uint *)(ppppuVar13 + 0xf0)) >> 0x3f) ^
                                0xffffffff));
          ppppuVar30 = (ulong ****)ppppuVar13[0x14d];
          ppppuVar3 = ppppuVar30;
          if ((long)ppppuVar27 <= (long)ppppuVar30) {
            ppppuVar3 = ppppuVar27;
          }
          uVar19 = *(uint *)((long)ppppuVar13 + 0x784);
          if ((uint)ppppuVar3 <= *(uint *)((long)ppppuVar13 + 0x784)) {
            uVar19 = (uint)ppppuVar3;
          }
          if (uVar19 == 0) {
            if ((long)ppppuVar30 < 1) {
              func_0x000104aa7a14(ppppuVar13,ppppuVar25);
            }
            else if (ppppuVar27 == (ulong ****)0x0) {
              func_0x000104aa7a54(ppppuVar13,ppppuVar25);
            }
            goto LAB_1007499fc;
          }
          ppppuVar31 = (undefined8 ****)ppppuVar25[0xdf];
          ppppuVar28 = (undefined8 ****)ppppuVar25[0x10d];
          do {
            if ((((undefined8 ****)(ulong)uVar19 < ppppuVar15) ||
                (ppppuVar29 = (undefined8 ****)ppppuVar25[0x16], ppppuVar29 == (undefined8 ****)0x0)
                ) || (*(int *)ppppuVar29 != 0)) {
              bVar7 = false;
            }
            else if (ppppuVar29[0x3f] == (undefined8 ***)0x0) {
              bVar7 = true;
            }
            else {
              bVar7 = ppppuVar29[0x3f][1] == (undefined8 **)0x0;
            }
            ppppuVar29 = ppppuVar15;
            if ((undefined8 ****)(ulong)uVar19 <= ppppuVar15) {
              ppppuVar29 = (undefined8 ****)(ulong)uVar19;
            }
            func_0x000104a9c3f4(*(undefined4 *)((long)ppppuVar25 + 0x9c),ppppuVar25 + 0xe5,
                                ppppuVar29,bVar7,ppppuVar25 + 0x2a,ppppuVar13 + 0x62);
            ppppuVar31[0x18] = (undefined8 ***)((long)ppppuVar31[0x18] - (long)ppppuVar29);
            ppppuVar16 = (undefined8 ****)ppppuVar25[0xe1];
            ppppuVar25[0xe1] = (ulong ***)((long)ppppuVar16 - (long)ppppuVar29);
            ppppuVar25[0x10d] = (ulong ***)((long)ppppuVar25[0x10d] + (long)ppppuVar29);
            ppppuVar15 = (undefined8 ****)ppppuVar25[0xe9];
            if (ppppuVar15 == (undefined8 ****)0x0) break;
            lVar18 = (long)((long)ppppuVar16 - (long)ppppuVar29) +
                     (ulong)*(uint *)(ppppuVar13 + 0xf0);
            ppppuVar27 = (ulong ****)(ulong)((uint)lVar18 & ((uint)(lVar18 >> 0x3f) ^ 0xffffffff));
            ppppuVar3 = (ulong ****)ppppuVar13[0x14d];
            if ((long)ppppuVar27 <= (long)ppppuVar13[0x14d]) {
              ppppuVar3 = ppppuVar27;
            }
            uVar19 = *(uint *)((long)ppppuVar13 + 0x784);
            if ((uint)ppppuVar3 <= *(uint *)((long)ppppuVar13 + 0x784)) {
              uVar19 = (uint)ppppuVar3;
            }
          } while (uVar19 != 0);
          FUN_10074a3ec(ppppuVar13);
          if (bVar7 != false) {
            func_0x000104aa89c4(&ppppuStack_130);
          }
          uStack_100 = 0;
          pppppuVar26 = (ulong *****)ppppuVar13;
          func_0x000104aa7c78(ppppuVar13,ppppuVar25,(long)ppppuVar25[0x10d] - (long)ppppuVar28,
                              ppppuVar25 + 0x10a,ppppuVar25 + 0x1b,&uStack_100);
          if ((int)pppppuVar26 != 0) {
            uStack_13e = 1;
          }
          uStack_118 = 1;
          if ((undefined8 ****)ppppuVar25[0xe9] != (undefined8 ****)0x0) {
            func_0x000104a9737c(ppppuVar25);
            FUN_1008df064(ppppuVar13,ppppuVar25);
          }
          iStack_144 = iStack_144 + 1;
          bVar7 = true;
        }
        uVar24 = uStack_100;
        if (((*(char *)(ppppuVar25 + 0xde) != '\0') &&
            (ppppuVar15 = (undefined8 ****)ppppuVar25[0x16], ppppuVar15 != (undefined8 ****)0x0)) &&
           ((undefined8 ****)ppppuVar25[0xe9] == (undefined8 ****)0x0)) {
          uVar19 = *(uint *)ppppuVar15;
          if ((uVar19 == 0) &&
             ((ppppuVar15[0x3f] == (undefined8 ***)0x0 ||
              (ppppuVar15[0x3f][1] == (undefined8 **)0x0)))) {
            func_0x000104a9c3f4(*(undefined4 *)((long)ppppuVar25 + 0x9c),ppppuVar25 + 0xe5,0,1,
                                ppppuVar25 + 0x2a,ppppuVar13 + 0x62);
          }
          else {
            if ((int)param_5 != 0) {
              uVar19 = uVar19 | 8;
              *(uint *)ppppuVar15 = uVar19;
              *(uint *)((long)ppppuVar15 + 0x1a4) = uStack_114;
            }
            if (bVar5) {
              *(uint *)ppppuVar15 = uVar19 | 0x20;
              *(uint *)((long)ppppuVar15 + 0x19c) = uStack_10c;
            }
            uStack_100._0_5_ = CONCAT14(1,*(undefined4 *)((long)ppppuVar25 + 0x9c));
            uStack_100._6_2_ = SUB82(uVar24,6);
            uStack_100._0_6_ = CONCAT15(*(int *)((long)ppppuVar13 + 0x78c) != 0,(uint5)uStack_100);
            uStack_f8 = (ulong)*(uint *)((long)ppppuVar13 + 0x784);
            ppppuStack_f0 = ppppuVar25 + 0x2a;
            FUN_1008df430(ppppuVar13 + 0x87,&uStack_100,ppppuVar15,ppppuVar13 + 0x62);
          }
          iStack_148 = iStack_148 + 1;
          FUN_10074a3ec(ppppuVar13);
          func_0x000104aa89c4(&ppppuStack_130);
          uStack_13e = 1;
          uStack_138 = 0;
          FUN_1008df0bc(ppppuVar13,ppppuVar25,ppppuVar25 + 0x18,&uStack_138,
                        "send_trailing_metadata_finished");
          if ((uStack_138 & 1) != 0) {
            FUN_10084dad0();
          }
        }
      }
      lVar18 = (long)pppppuVar20[0x66] - (long)ppppuVar14;
      if ((ppppuVar14 <= pppppuVar20[0x66] && lVar18 != 0) &&
         (ppppuVar25[0x10f] = (ulong ***)(lVar18 + (long)ppppuVar25[0x10f]),
         *(char *)(ppppuVar25 + 0x10e) != '\0')) {
        iVar9 = (int)pppppuVar20[2];
        func_0x000104aba650();
        if (iVar9 != 0) {
          func_0x000104a9bf14(pppppuVar20 + 0x19c,ppppuVar25);
        }
      }
      if ((!bVar7) ||
         (pppppuVar26 = pppppuVar20, func_0x000104aa79cc(pppppuVar20,ppppuVar25),
         ((ulong)pppppuVar26 & 1) == 0)) {
        FUN_1008e1b6c(ppppuVar25);
      }
    } while (ppppuStack_158[0x66] < (ulong ****)0x100001);
  }
  uStack_13f = 1;
LAB_100749ce8:
  pppppuVar26 = (ulong *****)(ppppuStack_158 + 0x135);
  func_0x00010074a2e8(pppppuVar26,(ulong ****)ppppuStack_158[100] != (ulong ****)0x0);
  ppppuVar13 = ppppuStack_158;
  pppppuVar11 = pppppuVar26;
  if ((int)pppppuVar26 != 0) {
    uStack_100 = 0;
    uStack_f8 = 0;
    ppppuStack_f0 = (ulong ****)0x0;
    FUN_10074a344(&ppppuStack_130,0,pppppuVar26,&uStack_100);
    pppppuVar11 = &ppppuStack_130;
    FUN_1005a70c4(ppppuVar13 + 0x62);
    pppppuVar26 = (ulong *****)ppppuStack_158;
    FUN_10074a3ec();
  }
  if (((pppppuVar20[0x100] == (ulong ****)0x0) || (pppppuVar20[0x102] != (ulong ****)0x0)) ||
     ((*(char *)(pppppuVar20 + 0xc5) != '\0' &&
      ((*(int *)(pppppuVar20 + 0x108) == 0 && (*(int *)(pppppuVar20 + 0x105) != 0))))))
  goto LAB_100749f34;
  func_0x000100460dc4();
  *(undefined1 *)((long)*pppppuVar26 + 0x34) = 0;
  func_0x000100460dc4();
  param_5 = (ulong *****)*pppppuVar26;
  FUN_1004671a4();
  pppppuVar26 = param_5;
  if (*(char *)(pppppuVar20 + 0xc5) == '\0') {
    if (*(int *)(pppppuVar20 + 0xed) == 1) {
      lVar18 = 0;
    }
    else {
      ppppuVar25 = pppppuVar20[0x199];
      if (ppppuVar25 == (ulong ****)0x8000000000000000) {
        lVar18 = -0x8000000000000000;
      }
      else if (ppppuVar25 == (ulong ****)0x7fffffffffffffff) {
        lVar18 = 20000;
      }
      else {
        if ((long)ppppuVar25 < 0) {
          ppppuVar25 = (ulong ****)((long)ppppuVar25 + 1);
        }
        lVar18 = (long)ppppuVar25 >> 1;
      }
    }
  }
  else {
    if (*(char *)(pppppuVar20 + 0x19b) == '\0') {
      pppppuVar26 = pppppuVar20 + 0x1f;
      FUN_1008ded94();
      if (pppppuVar26 == (ulong *****)0x0) {
        lVar18 = 7200000;
        goto LAB_100749e08;
      }
    }
    lVar18 = 1000;
  }
LAB_100749e08:
  ppppuVar25 = pppppuVar20[0x107];
  pppppuVar11 = (ulong *****)0x7fffffffffffffff;
  if (ppppuVar25 == (ulong ****)0x7fffffffffffffff) {
LAB_100749e18:
    if ((long)param_5 < (long)pppppuVar11) {
      if (*(char *)(pppppuVar20 + 0x110) == '\0') {
        *(undefined1 *)(pppppuVar20 + 0x110) = 1;
        pppppuVar26 = pppppuVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
          if (bVar5) {
            *pppppuVar26 = (ulong ****)((long)*pppppuVar26 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuVar20[0x113] = (ulong ****)&UNK_104a97bf0;
        pppppuVar20[0x114] = (ulong ****)pppppuVar20;
        pppppuVar20[0x115] = (ulong ****)0x0;
        pppppuVar26 = pppppuVar20 + 0x109;
        func_0x000100480ee4(pppppuVar26,pppppuVar11,pppppuVar20 + 0x112);
      }
      goto LAB_100749f34;
    }
  }
  else if ((lVar18 != -0x8000000000000000) && (ppppuVar25 != (ulong ****)0x8000000000000000)) {
    if ((long)ppppuVar25 < 1) {
      if (lVar18 < -0x8000000000000000 - (long)ppppuVar25) goto LAB_100749ea0;
    }
    else if ((long)((ulong)ppppuVar25 ^ 0x7fffffffffffffff) < lVar18) goto LAB_100749e18;
    pppppuVar11 = (ulong *****)((long)ppppuVar25 + lVar18);
    goto LAB_100749e18;
  }
LAB_100749ea0:
  pppppuVar20[0x107] = (ulong ****)param_5;
  pppppuVar20[0x104] = pppppuVar20[0x111];
  pppppuVar20[0x111] = (ulong ****)((long)pppppuVar20[0x111] + 1);
  FUN_10076f2bc(&ppppuStack_130,pppppuVar20 + 0xfe);
  if (pppppuVar20[0x100] != (ulong ****)0x0) {
    if (pppppuVar20[0x102] == (ulong ****)0x0) {
      pppppuVar20[0x103] = pppppuVar20[0x101];
      pppppuVar20[0x102] = pppppuVar20[0x100];
    }
    else {
      *pppppuVar20[0x103] = (ulong ***)pppppuVar20[0x100];
      pppppuVar20[0x103] = pppppuVar20[0x101];
    }
    pppppuVar20[0x100] = (ulong ****)0x0;
    pppppuVar20[0x101] = (ulong ****)0x0;
  }
  func_0x000104a9cf48(&ppppuStack_130,0,pppppuVar20[0x104]);
  pppppuVar26 = pppppuVar20 + 0x62;
  pppppuVar11 = &ppppuStack_130;
  FUN_1005a70c4();
  *(uint *)(pppppuVar20 + 0x108) =
       *(int *)(pppppuVar20 + 0x108) - (uint)(*(int *)(pppppuVar20 + 0x108) != 0);
LAB_100749f34:
  iVar9 = (int)pppppuVar11;
  uStack_140 = (ulong ****)ppppuStack_158[100] != (ulong ****)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return (ulong *****)(ulong)CONCAT12(uStack_13e,CONCAT11(uStack_13f,uStack_140));
  }
  func_0x000107c60e78();
  if (iVar9 != 0) {
    func_0x000104bd46a0();
  }
  pppppuVar20 = pppppuVar26;
  func_0x000107c60bd8();
  if (*(int *)(pppppuVar20 + 0x12) == 0) {
    func_0x000107c2c278();
    pppppuVar20 = pppppuVar26;
    while( true ) {
      func_0x000107c2c27c();
LAB_10074a13c:
      iVar9 = 0x136a1e10;
      func_0x000107c60e48();
      if (iVar9 != 0) {
        uVar8 = 0x30;
        FUN_100460464();
        *(undefined1 *)((long)param_5 + 0xe0b) = uVar8;
        func_0x000107c60e4c(0x1136a1e10);
      }
LAB_10074a088:
      ppppuVar25 = pppppuVar20[0x19c];
      pppppuVar20[0x19c] = (ulong ****)0x0;
      if (*(char *)((long)param_5 + 0xe0b) == '\0') {
        iVar9 = 0x7fffffff;
      }
      else {
        iVar9 = *(int *)((long)pppppuVar20 + 0x784) << 1;
      }
      pppppuVar20[0x2d] = (ulong ****)FUN_10076efec;
      pppppuVar20[0x2e] = (ulong ****)pppppuVar20;
      pppppuVar20[0x2f] = (ulong ****)0x0;
      func_0x0001005a7358(pppppuVar20[2],pppppuVar20 + 0x62,pppppuVar20 + 0x2c,ppppuVar25,iVar9);
      pppppuVar11 = (ulong *****)ppppuStack_1d8;
      if (((ulong)ppppuStack_1d8 & 1) != 0) {
        FUN_10084dad0();
      }
      if (*(char *)(pppppuVar20 + 0x19f) == '\0') break;
      if (*(int *)((long)pppppuVar20 + 0xcf4) == 0) {
        *(undefined1 *)(pppppuVar20 + 0x19f) = 0;
        pppppuVar20[0x31] = (ulong ****)FUN_1008d7d84;
        pppppuVar20[0x32] = (ulong ****)pppppuVar20;
        pppppuVar20[0x33] = (ulong ****)0x0;
        pppppuVar26 = (ulong *****)pppppuVar20[2];
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**pppppuVar26)
                  (pppppuVar26,pppppuVar20 + 0x34,pppppuVar20 + 0x30,
                   pppppuVar20[0xec] != (ulong ****)0x0,1);
        return pppppuVar26;
      }
    }
  }
  else {
    if ((pppppuVar20[0x13] == (ulong ****)0x0) &&
       (pppppuVar26 = pppppuVar20, FUN_1007494f4(), ((ulong)pppppuVar26 & 1) != 0)) {
      uVar12 = 1;
      if (((ulong)pppppuVar26 & 0x100) != 0) {
        uVar12 = 2;
      }
      FUN_10074a40c(pppppuVar20,uVar12);
      ppppuStack_1d8 = (ulong *****)0x0;
      param_5 = (ulong *****)0x1136a1000;
      if ((bRam00000001136a1e10 & 1) == 0) goto LAB_10074a13c;
      goto LAB_10074a088;
    }
    pppppuVar11 = pppppuVar20;
    FUN_10074a40c(pppppuVar20,0);
    pppppuVar26 = pppppuVar20 + 1;
    do {
      ppppuVar25 = *pppppuVar26;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
      if (bVar5) {
        *pppppuVar26 = (ulong ****)((long)ppppuVar25 - 1U);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((ulong ****)((long)ppppuVar25 - 1U) == (ulong ****)0x0) {
      func_0x000104a96f9c(pppppuVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return pppppuVar20;
    }
  }
  return pppppuVar11;
}



/* Entry: 1007494f4; end: 100749fef;  */

ulong ***** FUN_1007494f4(ulong *****param_1)

{
  ulong ****ppppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  undefined4 uVar12;
  undefined8 ****ppppuVar13;
  ulong ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  long lVar18;
  uint uVar19;
  undefined8 ***pppuVar20;
  undefined8 **ppuVar21;
  ulong uVar22;
  ulong ****ppppuVar23;
  ulong ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****ppppuVar26;
  ulong ****ppppuVar27;
  undefined8 ****ppppuVar28;
  ulong *****unaff_x20;
  uint5 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint5 uVar32;
  uint5 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  int iStack_d4;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  ulong uStack_c8;
  ulong ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  ulong ****ppppuStack_b0;
  undefined1 uStack_a8;
  uint uStack_a4;
  undefined1 uStack_a0;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong ****ppppuStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = 0;
  iStack_d8 = 0;
  iStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_ce = 0;
  ppppuStack_e8 = param_1;
  if ((*(char *)((long)param_1 + 0x76c) != '\0') && (*(char *)((long)param_1 + 0x76d) == '\0')) {
    FUN_10074934c(&ppppuStack_c0,(long)param_1 + 0x7ac,param_1 + 0xf2,
                  *(undefined4 *)(param_1 + 0xee),7);
    FUN_1005a70c4(param_1 + 0x62,&ppppuStack_c0);
    *(undefined4 *)(ppppuStack_e8 + 0xee) = 0;
    *(undefined2 *)((long)ppppuStack_e8 + 0x76c) = 0x100;
  }
  if ((ulong ****)ppppuStack_e8[0x116] != (ulong ****)0x0) {
    unaff_x20 = (ulong *****)0x0;
    do {
      ppppuVar13 = ppppuStack_e8;
      func_0x000104a9cf48(&ppppuStack_c0,1,ppppuStack_e8[0x118][(long)unaff_x20]);
      FUN_1005a70c4(ppppuVar13 + 0x62,&ppppuStack_c0);
      unaff_x20 = (ulong *****)((long)unaff_x20 + 1);
    } while (unaff_x20 < ppppuStack_e8[0x116]);
  }
  ppppuStack_e8[0x116] = (ulong ****)0x0;
  FUN_100614830(ppppuStack_e8 + 0xc6,ppppuStack_e8 + 0x62);
  *(undefined4 *)((long)ppppuStack_e8 + 0xcf4) = 0;
  if ((ulong ****)ppppuStack_e8[200] != (ulong ****)0x0) {
    func_0x000107c2c2e0();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100749f9c);
    (*pcVar4)();
  }
  FUN_10074a218(ppppuStack_e8 + 0x87,*(undefined4 *)((long)ppppuStack_e8 + 0x774));
  if ((0 < (long)param_1[0x14d]) &&
     (pppppuVar10 = (ulong *****)ppppuStack_e8, FUN_10074a250(ppppuStack_e8,&ppppuStack_c0),
     (int)pppppuVar10 != 0)) {
    do {
      if (((ulong ****)ppppuStack_e8[0x13] == (ulong ****)0x0) &&
         (pppppuVar10 = (ulong *****)ppppuStack_e8, FUN_1008df064(ppppuStack_e8,ppppuStack_c0),
         (int)pppppuVar10 != 0)) {
        ppppuVar13 = (undefined8 ****)ppppuStack_c0[2];
        pppuVar17 = *ppppuVar13;
        do {
          while( true ) {
            if (pppuVar17 == (undefined8 ***)0x0) {
              func_0x000104aa7920(ppppuStack_e8,ppppuStack_c0);
              goto LAB_10074967c;
            }
            pppuVar20 = *ppppuVar13;
            if (pppuVar20 == pppuVar17) break;
            ClearExclusiveLocal();
            pppuVar17 = pppuVar20;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
          if (bVar3) {
            *ppppuVar13 = (undefined8 ***)((long)pppuVar17 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
          pppuVar17 = pppuVar20;
        } while (cVar2 != '\0');
      }
LAB_10074967c:
      pppppuVar10 = (ulong *****)ppppuStack_e8;
      FUN_10074a250(ppppuStack_e8,&ppppuStack_c0);
    } while (((ulong)pppppuVar10 & 1) != 0);
  }
  if (ppppuStack_e8[0x66] < (ulong ****)0x100001) {
    do {
      pppppuVar10 = (ulong *****)ppppuStack_e8;
      func_0x00010074a2e0(ppppuStack_e8,&ppppuStack_c0);
      ppppuVar23 = ppppuStack_c0;
      ppppuVar13 = ppppuStack_e8;
      iVar7 = 0;
      if ((undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0) {
        iVar7 = (int)pppppuVar10;
      }
      if (iVar7 != 1) goto LAB_100749ce8;
      bVar3 = false;
      unaff_x20 = (ulong *****)0x0;
      ppppuStack_b8 = ppppuStack_e8;
      ppppuStack_b0 = ppppuStack_c0;
      uStack_a8 = 0;
      uStack_a4 = uStack_a4 & 0xffffff00;
      uStack_a0 = 0;
      uStack_9c = uStack_9c & 0xffffff00;
      uStack_98 = 0;
      ppppuVar14 = param_1[0x66];
      pppppuVar8 = &ppppuStack_e8;
      if (*(char *)(ppppuStack_c0 + 0xde) == '\0') {
        ppppuVar15 = (undefined8 ****)ppppuStack_c0[0x14];
        if (ppppuVar15 == (undefined8 ****)0x0) {
          bVar3 = false;
          unaff_x20 = (ulong *****)0x0;
        }
        else {
          ppppuVar25 = ppppuVar15;
          if (((*(char *)(ppppuStack_e8 + 0xc5) == '\0') &&
              ((undefined8 ****)ppppuStack_c0[0xe9] == (undefined8 ****)0x0)) &&
             ((undefined8 ****)ppppuStack_c0[0x16] != (undefined8 ****)0x0)) {
            uVar19 = *(uint *)ppppuVar15;
            auVar30._4_4_ = uVar19;
            auVar30._0_4_ = uVar19;
            auVar30._8_4_ = uVar19;
            auVar30._12_4_ = uVar19;
            auVar34._8_8_ = 0xfffffffcfffffffd;
            auVar34._0_8_ = 0xfffffffeffffffff;
            auVar34 = NEON_ushl(auVar30,auVar34,4);
            uVar32 = CONCAT14(auVar34[4],(uint)(auVar34[0] & 1)) & 0x1ffffffff;
            auVar31._8_8_ = 0xffffffeffffffff0;
            auVar31._0_8_ = 0xfffffff1fffffff2;
            auVar35._8_8_ = 0xfffffff6fffffff7;
            auVar35._0_8_ = 0xfffffff8fffffff9;
            auVar35 = NEON_ushl(auVar30,auVar35,4);
            uVar33 = CONCAT14(auVar35[4],(uint)(auVar35[0] & 1)) & 0x1ffffffff;
            auVar31 = NEON_ushl(auVar30,auVar31,4);
            uVar29 = CONCAT14(auVar31[4],(uint)(auVar31[0] & 1)) & 0x1ffffffff;
            lVar18 = (ulong)((int)uVar29 + (uint)(byte)(uVar29 >> 0x20) +
                             (uint)(auVar31[8] & 1) + (uint)(auVar31[0xc] & 1) +
                             (uVar19 >> 0x12 & 1) + (uVar19 >> 0x13 & 1) + (uVar19 >> 0x14 & 1)) +
                     ((ulong)(uVar19 >> 0x15) & 1) +
                     (ulong)((int)uVar33 + (uint)(byte)(uVar33 >> 0x20) +
                             (uint)(auVar35[8] & 1) + (uint)(auVar35[0xc] & 1) + (uVar19 >> 0xb & 1)
                            + (uVar19 >> 0xc & 1) + (uVar19 >> 0xd & 1)) +
                     (ulong)((int)uVar32 + (uint)(byte)(uVar32 >> 0x20) +
                             (uint)(auVar34[8] & 1) + (uint)(auVar34[0xc] & 1) + (uVar19 & 1) +
                            (uVar19 >> 5 & 1) + (uVar19 >> 6 & 1));
            if (((uVar19 >> 0x16 & 1) != 0) && ((undefined8 ***)0x1 < ppppuVar15[0xc])) {
              lVar18 = lVar18 + ((long)ppppuVar15[0xc] * 0x10 - 0x20U >> 5) + 1;
            }
            pppuVar17 = ppppuVar15[0x3f];
            if ((pppuVar17 != (undefined8 ***)0x0) && (pppuVar17[1] == (undefined8 **)0x0)) {
              pppuVar17 = (undefined8 ***)0x0;
            }
LAB_100749c48:
            ppuVar21 = (undefined8 **)0x0;
            while( true ) {
              while (pppuVar17 != (undefined8 ***)0x0) {
                ppuVar21 = (undefined8 **)((long)ppuVar21 + 1);
                while (ppuVar21 == pppuVar17[1]) {
                  ppuVar21 = (undefined8 **)0x0;
                  pppuVar17 = (undefined8 ***)*pppuVar17;
                  if (pppuVar17 == (undefined8 ***)0x0) goto LAB_100749c48;
                }
              }
              if (ppuVar21 == (undefined8 **)0x0) break;
              pppuVar17 = (undefined8 ***)0x0;
              ppuVar21 = (undefined8 **)((long)ppuVar21 + 1);
            }
            ppppuStack_c0 = (ulong ****)&ppppuStack_e8;
            FUN_1006195d4();
            ppppuVar25 = (undefined8 ****)ppppuVar23[0x14];
            pppppuVar8 = (undefined8 *****)ppppuStack_c0;
            if ((undefined8 ****)(lVar18 + ((ulong)(uVar19 >> 0x17) & 1)) != ppppuVar15)
            goto LAB_1007498ac;
            if ((*(uint *)ppppuVar25 >> 3 & 1) == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(uint *)((long)ppppuVar25 + 0x1a4) | 0x100000000;
            }
            uStack_a4 = (uint)uVar22;
            unaff_x20 = (ulong *****)(uVar22 >> 0x20);
            uStack_a0 = (undefined1)(uVar22 >> 0x20);
            bVar3 = (*(uint *)ppppuVar25 >> 5 & 1) != 0;
            uStack_98 = bVar3;
            if (bVar3) {
              uStack_9c = *(uint *)((long)ppppuVar25 + 0x19c);
            }
            else {
              uStack_9c = 0;
            }
          }
          else {
LAB_1007498ac:
            ppppuStack_c0 = (ulong ****)pppppuVar8;
            uVar22 = uStack_90;
            uStack_90._0_5_ = (uint5)*(uint *)((long)ppppuVar23 + 0x9c);
            uStack_90._6_2_ = SUB82(uVar22,6);
            uStack_90._0_6_ = CONCAT15(*(int *)((long)ppppuVar13 + 0x78c) != 0,(uint5)uStack_90);
            uStack_88 = (ulong)*(uint *)((long)ppppuVar13 + 0x784);
            ppppuStack_80 = ppppuVar23 + 0x2a;
            FUN_1008df430(ppppuVar13 + 0x87,&uStack_90,ppppuVar25,ppppuVar13 + 0x62);
            FUN_10074a3ec(ppppuVar13);
            bVar3 = false;
            unaff_x20 = (ulong *****)0x0;
            uStack_e0 = CONCAT44(uStack_e0._4_4_ + 1,(int)uStack_e0);
          }
          ppppuVar23[0x14] = (ulong ***)0x0;
          *(undefined1 *)(ppppuVar23 + 0xde) = 1;
          uStack_ce = 1;
          uStack_90 = 0;
          FUN_1008df0bc(ppppuVar13,ppppuVar23,ppppuVar23 + 0x15,&uStack_90,
                        "send_initial_metadata_finished");
          pppppuVar8 = (undefined8 *****)ppppuStack_c0;
          if ((uStack_90 & 1) != 0) {
            FUN_10084dad0();
            pppppuVar8 = (undefined8 *****)ppppuStack_c0;
          }
        }
      }
      ppppuStack_c0 = (ulong ****)pppppuVar8;
      if (*(char *)((long)ppppuVar23 + 0x169) == '\0') {
        pppppuVar8 = (undefined8 *****)(ppppuVar23 + 0xdf);
        FUN_1008e1a30();
        if ((int)pppppuVar8 != 0) {
          FUN_10074a344(&uStack_90,*(undefined4 *)((long)ppppuVar23 + 0x9c),pppppuVar8,
                        ppppuVar23 + 0x2a);
          FUN_1005a70c4(ppppuVar13 + 0x62,&uStack_90);
          FUN_10074a3ec(ppppuVar13);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
        }
      }
      if (*(char *)(ppppuVar23 + 0xde) == '\0') {
        bVar5 = false;
      }
      else {
        ppppuVar15 = (undefined8 ****)ppppuVar23[0xe9];
        if (ppppuVar15 == (undefined8 ****)0x0) {
LAB_1007499fc:
          bVar5 = false;
        }
        else {
          ppppuVar24 = (ulong ****)
                       (ulong)((uint)((long)ppppuVar23[0xe1] + (ulong)*(uint *)(ppppuVar13 + 0xf0))
                              & ((uint)((long)((long)ppppuVar23[0xe1] +
                                              (ulong)*(uint *)(ppppuVar13 + 0xf0)) >> 0x3f) ^
                                0xffffffff));
          ppppuVar27 = (ulong ****)ppppuVar13[0x14d];
          ppppuVar1 = ppppuVar27;
          if ((long)ppppuVar24 <= (long)ppppuVar27) {
            ppppuVar1 = ppppuVar24;
          }
          uVar19 = *(uint *)((long)ppppuVar13 + 0x784);
          if ((uint)ppppuVar1 <= *(uint *)((long)ppppuVar13 + 0x784)) {
            uVar19 = (uint)ppppuVar1;
          }
          if (uVar19 == 0) {
            if ((long)ppppuVar27 < 1) {
              func_0x000104aa7a14(ppppuVar13,ppppuVar23);
            }
            else if (ppppuVar24 == (ulong ****)0x0) {
              func_0x000104aa7a54(ppppuVar13,ppppuVar23);
            }
            goto LAB_1007499fc;
          }
          ppppuVar28 = (undefined8 ****)ppppuVar23[0xdf];
          ppppuVar25 = (undefined8 ****)ppppuVar23[0x10d];
          do {
            if ((((undefined8 ****)(ulong)uVar19 < ppppuVar15) ||
                (ppppuVar26 = (undefined8 ****)ppppuVar23[0x16], ppppuVar26 == (undefined8 ****)0x0)
                ) || (*(int *)ppppuVar26 != 0)) {
              bVar5 = false;
            }
            else if (ppppuVar26[0x3f] == (undefined8 ***)0x0) {
              bVar5 = true;
            }
            else {
              bVar5 = ppppuVar26[0x3f][1] == (undefined8 **)0x0;
            }
            ppppuVar26 = ppppuVar15;
            if ((undefined8 ****)(ulong)uVar19 <= ppppuVar15) {
              ppppuVar26 = (undefined8 ****)(ulong)uVar19;
            }
            func_0x000104a9c3f4(*(undefined4 *)((long)ppppuVar23 + 0x9c),ppppuVar23 + 0xe5,
                                ppppuVar26,bVar5,ppppuVar23 + 0x2a,ppppuVar13 + 0x62);
            ppppuVar28[0x18] = (undefined8 ***)((long)ppppuVar28[0x18] - (long)ppppuVar26);
            ppppuVar16 = (undefined8 ****)ppppuVar23[0xe1];
            ppppuVar23[0xe1] = (ulong ***)((long)ppppuVar16 - (long)ppppuVar26);
            ppppuVar23[0x10d] = (ulong ***)((long)ppppuVar23[0x10d] + (long)ppppuVar26);
            ppppuVar15 = (undefined8 ****)ppppuVar23[0xe9];
            if (ppppuVar15 == (undefined8 ****)0x0) break;
            lVar18 = (long)((long)ppppuVar16 - (long)ppppuVar26) +
                     (ulong)*(uint *)(ppppuVar13 + 0xf0);
            ppppuVar24 = (ulong ****)(ulong)((uint)lVar18 & ((uint)(lVar18 >> 0x3f) ^ 0xffffffff));
            ppppuVar1 = (ulong ****)ppppuVar13[0x14d];
            if ((long)ppppuVar24 <= (long)ppppuVar13[0x14d]) {
              ppppuVar1 = ppppuVar24;
            }
            uVar19 = *(uint *)((long)ppppuVar13 + 0x784);
            if ((uint)ppppuVar1 <= *(uint *)((long)ppppuVar13 + 0x784)) {
              uVar19 = (uint)ppppuVar1;
            }
          } while (uVar19 != 0);
          FUN_10074a3ec(ppppuVar13);
          if (bVar5 != false) {
            func_0x000104aa89c4(&ppppuStack_c0);
          }
          uStack_90 = 0;
          pppppuVar10 = (ulong *****)ppppuVar13;
          func_0x000104aa7c78(ppppuVar13,ppppuVar23,(long)ppppuVar23[0x10d] - (long)ppppuVar25,
                              ppppuVar23 + 0x10a,ppppuVar23 + 0x1b,&uStack_90);
          if ((int)pppppuVar10 != 0) {
            uStack_ce = 1;
          }
          uStack_a8 = 1;
          if ((undefined8 ****)ppppuVar23[0xe9] != (undefined8 ****)0x0) {
            func_0x000104a9737c(ppppuVar23);
            FUN_1008df064(ppppuVar13,ppppuVar23);
          }
          iStack_d4 = iStack_d4 + 1;
          bVar5 = true;
        }
        uVar22 = uStack_90;
        if (((*(char *)(ppppuVar23 + 0xde) != '\0') &&
            (ppppuVar15 = (undefined8 ****)ppppuVar23[0x16], ppppuVar15 != (undefined8 ****)0x0)) &&
           ((undefined8 ****)ppppuVar23[0xe9] == (undefined8 ****)0x0)) {
          uVar19 = *(uint *)ppppuVar15;
          if ((uVar19 == 0) &&
             ((ppppuVar15[0x3f] == (undefined8 ***)0x0 ||
              (ppppuVar15[0x3f][1] == (undefined8 **)0x0)))) {
            func_0x000104a9c3f4(*(undefined4 *)((long)ppppuVar23 + 0x9c),ppppuVar23 + 0xe5,0,1,
                                ppppuVar23 + 0x2a,ppppuVar13 + 0x62);
          }
          else {
            if ((int)unaff_x20 != 0) {
              uVar19 = uVar19 | 8;
              *(uint *)ppppuVar15 = uVar19;
              *(uint *)((long)ppppuVar15 + 0x1a4) = uStack_a4;
            }
            if (bVar3) {
              *(uint *)ppppuVar15 = uVar19 | 0x20;
              *(uint *)((long)ppppuVar15 + 0x19c) = uStack_9c;
            }
            uStack_90._0_5_ = CONCAT14(1,*(undefined4 *)((long)ppppuVar23 + 0x9c));
            uStack_90._6_2_ = SUB82(uVar22,6);
            uStack_90._0_6_ = CONCAT15(*(int *)((long)ppppuVar13 + 0x78c) != 0,(uint5)uStack_90);
            uStack_88 = (ulong)*(uint *)((long)ppppuVar13 + 0x784);
            ppppuStack_80 = ppppuVar23 + 0x2a;
            FUN_1008df430(ppppuVar13 + 0x87,&uStack_90,ppppuVar15,ppppuVar13 + 0x62);
          }
          iStack_d8 = iStack_d8 + 1;
          FUN_10074a3ec(ppppuVar13);
          func_0x000104aa89c4(&ppppuStack_c0);
          uStack_ce = 1;
          uStack_c8 = 0;
          FUN_1008df0bc(ppppuVar13,ppppuVar23,ppppuVar23 + 0x18,&uStack_c8,
                        "send_trailing_metadata_finished");
          if ((uStack_c8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
      }
      lVar18 = (long)param_1[0x66] - (long)ppppuVar14;
      if ((ppppuVar14 <= param_1[0x66] && lVar18 != 0) &&
         (ppppuVar23[0x10f] = (ulong ***)(lVar18 + (long)ppppuVar23[0x10f]),
         *(char *)(ppppuVar23 + 0x10e) != '\0')) {
        iVar7 = (int)param_1[2];
        func_0x000104aba650();
        if (iVar7 != 0) {
          func_0x000104a9bf14(param_1 + 0x19c,ppppuVar23);
        }
      }
      if ((!bVar5) ||
         (pppppuVar10 = param_1, func_0x000104aa79cc(param_1,ppppuVar23),
         ((ulong)pppppuVar10 & 1) == 0)) {
        FUN_1008e1b6c(ppppuVar23);
      }
    } while (ppppuStack_e8[0x66] < (ulong ****)0x100001);
  }
  uStack_cf = 1;
LAB_100749ce8:
  pppppuVar10 = (ulong *****)(ppppuStack_e8 + 0x135);
  func_0x00010074a2e8(pppppuVar10,(ulong ****)ppppuStack_e8[100] != (ulong ****)0x0);
  ppppuVar13 = ppppuStack_e8;
  pppppuVar11 = pppppuVar10;
  if ((int)pppppuVar10 != 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    ppppuStack_80 = (ulong ****)0x0;
    FUN_10074a344(&ppppuStack_c0,0,pppppuVar10,&uStack_90);
    pppppuVar11 = &ppppuStack_c0;
    FUN_1005a70c4(ppppuVar13 + 0x62);
    pppppuVar10 = (ulong *****)ppppuStack_e8;
    FUN_10074a3ec();
  }
  if (((param_1[0x100] == (ulong ****)0x0) || (param_1[0x102] != (ulong ****)0x0)) ||
     ((*(char *)(param_1 + 0xc5) != '\0' &&
      ((*(int *)(param_1 + 0x108) == 0 && (*(int *)(param_1 + 0x105) != 0)))))) goto LAB_100749f34;
  func_0x000100460dc4();
  *(undefined1 *)((long)*pppppuVar10 + 0x34) = 0;
  func_0x000100460dc4();
  unaff_x20 = (ulong *****)*pppppuVar10;
  FUN_1004671a4();
  pppppuVar10 = unaff_x20;
  if (*(char *)(param_1 + 0xc5) == '\0') {
    if (*(int *)(param_1 + 0xed) == 1) {
      lVar18 = 0;
    }
    else {
      ppppuVar23 = param_1[0x199];
      if (ppppuVar23 == (ulong ****)0x8000000000000000) {
        lVar18 = -0x8000000000000000;
      }
      else if (ppppuVar23 == (ulong ****)0x7fffffffffffffff) {
        lVar18 = 20000;
      }
      else {
        if ((long)ppppuVar23 < 0) {
          ppppuVar23 = (ulong ****)((long)ppppuVar23 + 1);
        }
        lVar18 = (long)ppppuVar23 >> 1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x19b) == '\0') {
      pppppuVar10 = param_1 + 0x1f;
      FUN_1008ded94();
      if (pppppuVar10 == (ulong *****)0x0) {
        lVar18 = 7200000;
        goto LAB_100749e08;
      }
    }
    lVar18 = 1000;
  }
LAB_100749e08:
  ppppuVar23 = param_1[0x107];
  pppppuVar11 = (ulong *****)0x7fffffffffffffff;
  if (ppppuVar23 == (ulong ****)0x7fffffffffffffff) {
LAB_100749e18:
    if ((long)unaff_x20 < (long)pppppuVar11) {
      if (*(char *)(param_1 + 0x110) == '\0') {
        *(undefined1 *)(param_1 + 0x110) = 1;
        pppppuVar10 = param_1 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
          if (bVar3) {
            *pppppuVar10 = (ulong ****)((long)*pppppuVar10 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        param_1[0x113] = (ulong ****)&UNK_104a97bf0;
        param_1[0x114] = (ulong ****)param_1;
        param_1[0x115] = (ulong ****)0x0;
        pppppuVar10 = param_1 + 0x109;
        func_0x000100480ee4(pppppuVar10,pppppuVar11,param_1 + 0x112);
      }
      goto LAB_100749f34;
    }
  }
  else if ((lVar18 != -0x8000000000000000) && (ppppuVar23 != (ulong ****)0x8000000000000000)) {
    if ((long)ppppuVar23 < 1) {
      if (lVar18 < -0x8000000000000000 - (long)ppppuVar23) goto LAB_100749ea0;
    }
    else if ((long)((ulong)ppppuVar23 ^ 0x7fffffffffffffff) < lVar18) goto LAB_100749e18;
    pppppuVar11 = (ulong *****)((long)ppppuVar23 + lVar18);
    goto LAB_100749e18;
  }
LAB_100749ea0:
  param_1[0x107] = (ulong ****)unaff_x20;
  param_1[0x104] = param_1[0x111];
  param_1[0x111] = (ulong ****)((long)param_1[0x111] + 1);
  FUN_10076f2bc(&ppppuStack_c0,param_1 + 0xfe);
  if (param_1[0x100] != (ulong ****)0x0) {
    if (param_1[0x102] == (ulong ****)0x0) {
      param_1[0x103] = param_1[0x101];
      param_1[0x102] = param_1[0x100];
    }
    else {
      *param_1[0x103] = (ulong ***)param_1[0x100];
      param_1[0x103] = param_1[0x101];
    }
    param_1[0x100] = (ulong ****)0x0;
    param_1[0x101] = (ulong ****)0x0;
  }
  func_0x000104a9cf48(&ppppuStack_c0,0,param_1[0x104]);
  pppppuVar10 = param_1 + 0x62;
  pppppuVar11 = &ppppuStack_c0;
  FUN_1005a70c4();
  *(uint *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) - (uint)(*(int *)(param_1 + 0x108) != 0);
LAB_100749f34:
  iVar7 = (int)pppppuVar11;
  uStack_d0 = (ulong ****)ppppuStack_e8[100] != (ulong ****)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (ulong *****)(ulong)CONCAT12(uStack_ce,CONCAT11(uStack_cf,uStack_d0));
  }
  func_0x000107c60e78();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
  }
  pppppuVar11 = pppppuVar10;
  func_0x000107c60bd8();
  if (*(int *)(pppppuVar11 + 0x12) == 0) {
    func_0x000107c2c278();
    pppppuVar11 = pppppuVar10;
    while( true ) {
      func_0x000107c2c27c();
LAB_10074a13c:
      iVar7 = 0x136a1e10;
      func_0x000107c60e48();
      if (iVar7 != 0) {
        uVar6 = 0x30;
        FUN_100460464();
        *(undefined1 *)((long)unaff_x20 + 0xe0b) = uVar6;
        func_0x000107c60e4c(0x1136a1e10);
      }
LAB_10074a088:
      ppppuVar23 = pppppuVar11[0x19c];
      pppppuVar11[0x19c] = (ulong ****)0x0;
      if (*(char *)((long)unaff_x20 + 0xe0b) == '\0') {
        iVar7 = 0x7fffffff;
      }
      else {
        iVar7 = *(int *)((long)pppppuVar11 + 0x784) << 1;
      }
      pppppuVar11[0x2d] = (ulong ****)FUN_10076efec;
      pppppuVar11[0x2e] = (ulong ****)pppppuVar11;
      pppppuVar11[0x2f] = (ulong ****)0x0;
      func_0x0001005a7358(pppppuVar11[2],pppppuVar11 + 0x62,pppppuVar11 + 0x2c,ppppuVar23,iVar7);
      pppppuVar9 = (ulong *****)ppppuStack_168;
      if (((ulong)ppppuStack_168 & 1) != 0) {
        FUN_10084dad0();
      }
      if (*(char *)(pppppuVar11 + 0x19f) == '\0') break;
      if (*(int *)((long)pppppuVar11 + 0xcf4) == 0) {
        *(undefined1 *)(pppppuVar11 + 0x19f) = 0;
        pppppuVar11[0x31] = (ulong ****)FUN_1008d7d84;
        pppppuVar11[0x32] = (ulong ****)pppppuVar11;
        pppppuVar11[0x33] = (ulong ****)0x0;
        pppppuVar10 = (ulong *****)pppppuVar11[2];
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**pppppuVar10)
                  (pppppuVar10,pppppuVar11 + 0x34,pppppuVar11 + 0x30,
                   pppppuVar11[0xec] != (ulong ****)0x0,1);
        return pppppuVar10;
      }
    }
  }
  else {
    if ((pppppuVar11[0x13] == (ulong ****)0x0) &&
       (pppppuVar10 = pppppuVar11, FUN_1007494f4(), ((ulong)pppppuVar10 & 1) != 0)) {
      uVar12 = 1;
      if (((ulong)pppppuVar10 & 0x100) != 0) {
        uVar12 = 2;
      }
      FUN_10074a40c(pppppuVar11,uVar12);
      ppppuStack_168 = (ulong *****)0x0;
      unaff_x20 = (ulong *****)0x1136a1000;
      if ((bRam00000001136a1e10 & 1) == 0) goto LAB_10074a13c;
      goto LAB_10074a088;
    }
    pppppuVar9 = pppppuVar11;
    FUN_10074a40c(pppppuVar11,0);
    pppppuVar10 = pppppuVar11 + 1;
    do {
      ppppuVar23 = *pppppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
      if (bVar3) {
        *pppppuVar10 = (ulong ****)((long)ppppuVar23 - 1U);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((ulong ****)((long)ppppuVar23 - 1U) == (ulong ****)0x0) {
      func_0x000104a96f9c(pppppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return pppppuVar11;
    }
  }
  return pppppuVar9;
}



/* Entry: 100749ff0; end: 10074a197;  */

void FUN_100749ff0(ulong param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong unaff_x19;
  long unaff_x20;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    func_0x000107c2c278();
    param_1 = unaff_x19;
    goto LAB_10074a138;
  }
  if ((*(long *)(param_1 + 0x98) == 0) && (uVar5 = param_1, FUN_1007494f4(), (uVar5 & 1) != 0)) {
    uVar8 = 1;
    if ((uVar5 & 0x100) != 0) {
      uVar8 = 2;
    }
    FUN_10074a40c(param_1,uVar8);
    uStack_28 = 0;
    unaff_x20 = 0x1136a1000;
    if ((bRam00000001136a1e10 & 1) == 0) goto LAB_10074a13c;
    while( true ) {
      uVar6 = *(undefined8 *)(param_1 + 0xce0);
      *(undefined8 *)(param_1 + 0xce0) = 0;
      if (*(char *)(unaff_x20 + 0xe0b) == '\0') {
        iVar7 = 0x7fffffff;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x784) << 1;
      }
      *(code **)(param_1 + 0x168) = FUN_10076efec;
      *(ulong *)(param_1 + 0x170) = param_1;
      *(undefined8 *)(param_1 + 0x178) = 0;
      func_0x0001005a7358(*(undefined8 *)(param_1 + 0x10),param_1 + 0x310,param_1 + 0x160,uVar6,
                          iVar7);
      if ((uStack_28 & 1) != 0) {
        FUN_10084dad0();
      }
      if (*(char *)(param_1 + 0xcf8) == '\0') break;
      if (*(int *)(param_1 + 0xcf4) == 0) {
        *(undefined1 *)(param_1 + 0xcf8) = 0;
        *(code **)(param_1 + 0x188) = FUN_1008d7d84;
        *(ulong *)(param_1 + 400) = param_1;
        *(undefined8 *)(param_1 + 0x198) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001005a7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)**(undefined8 **)(param_1 + 0x10))
                  (*(undefined8 **)(param_1 + 0x10),param_1 + 0x1a0,param_1 + 0x180,
                   *(long *)(param_1 + 0x760) != 0,1);
        return;
      }
LAB_10074a138:
      func_0x000107c2c27c();
LAB_10074a13c:
      iVar7 = 0x136a1e10;
      func_0x000107c60e48();
      if (iVar7 != 0) {
        uVar4 = 0x30;
        FUN_100460464();
        *(undefined1 *)(unaff_x20 + 0xe0b) = uVar4;
        func_0x000107c60e4c(0x1136a1e10);
      }
    }
  }
  else {
    FUN_10074a40c(param_1,0);
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      func_0x000104a96f9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10074a198; end: 10074a217;  */

bool FUN_10074a198(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    while (param_2 < *(uint *)(param_1 + 0xc)) {
      func_0x000104a9f374(param_1);
    }
    *(uint *)(param_1 + 4) = param_2;
    uVar2 = (ulong)(param_2 + 0x1f >> 5);
    if (*(ulong *)(param_1 + 0x10) >> 1 < uVar2) {
      uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      func_0x000104a9f3dc(param_1,uVar3);
    }
  }
  return uVar1 != param_2;
}



/* Entry: 10074a218; end: 10074a24f;  */

void FUN_10074a218(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1 + 2;
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  FUN_10074a198(puVar2,uVar1);
  if ((int)puVar2 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 10074a250; end: 10074a257;  */

bool FUN_10074a250(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar4;
  
  lVar5 = 2;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    puVar4 = puVar3 + -0x10;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    plVar7 = (long *)(param_1 + lVar5 * 0x10 + 0xa8);
    lVar6 = *plVar7;
    if (lVar6 == 0) {
LAB_10074a2c8:
      *param_2 = lVar6;
      return lVar6 != 0;
    }
    pbVar1 = (byte *)(lVar6 + 0x98);
    if (((uint)*pbVar1 & 1 << lVar5) != 0) {
      lVar8 = *(long *)(lVar6 + lVar5 * 0x10 + 0x48);
      puVar2 = (undefined8 *)(param_1 + lVar5 * 0x10 + 0xb0);
      if (lVar8 != 0) {
        puVar2 = (undefined8 *)(lVar8 + lVar5 * 0x10 + 0x50);
      }
      *puVar2 = 0;
      *plVar7 = lVar8;
      *pbVar1 = *pbVar1 & ((byte)(1 << lVar5) ^ 0xff);
      goto LAB_10074a2c8;
    }
    unaff_x30 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    lVar5 = 0;
    puVar3 = puVar3 + -0x10;
    unaff_x29 = puVar4;
  } while( true );
}



/* Entry: 10074a258; end: 10074a2df;  */

bool FUN_10074a258(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar6 = (long *)(param_1 + (ulong)param_3 * 0x10 + 0xa8);
    lVar5 = *plVar6;
    if (lVar5 == 0) {
LAB_10074a2c8:
      *param_2 = lVar5;
      return lVar5 != 0;
    }
    lVar1 = lVar5 + 0x98;
    uVar7 = (ulong)(long)(int)param_3 >> 3;
    uVar3 = 1 << (ulong)(param_3 & 7);
    if ((*(byte *)(lVar1 + uVar7) & uVar3) != 0) {
      uVar8 = (ulong)param_3;
      lVar9 = *(long *)(lVar5 + uVar8 * 0x10 + 0x48);
      puVar2 = (undefined8 *)(param_1 + uVar8 * 0x10 + 0xb0);
      if (lVar9 != 0) {
        puVar2 = (undefined8 *)(lVar9 + uVar8 * 0x10 + 0x50);
      }
      *puVar2 = 0;
      *plVar6 = lVar9;
      *(byte *)(lVar1 + uVar7) = *(byte *)(lVar1 + uVar7) & ((byte)uVar3 ^ 0xff);
      goto LAB_10074a2c8;
    }
    unaff_x30 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    param_3 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar4;
  } while( true );
}



/* Entry: 10074a2e0; end: 10074a343;  */

bool FUN_10074a2e0(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar4 = *(long *)(param_1 + 0xa8);
    if (lVar4 == 0) {
LAB_10074a2c8:
      *param_2 = lVar4;
      return lVar4 != 0;
    }
    pbVar1 = (byte *)(lVar4 + 0x98);
    if ((*pbVar1 & 1) != 0) {
      lVar5 = *(long *)(lVar4 + 0x48);
      puVar2 = (undefined8 *)(param_1 + 0xb0);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0x50);
      }
      *puVar2 = 0;
      *(long *)(param_1 + 0xa8) = lVar5;
      *pbVar1 = *pbVar1 & 0xfe;
      goto LAB_10074a2c8;
    }
    unaff_x30 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar3;
  } while( true );
}



/* Entry: 10074a344; end: 10074a3eb;  */

void FUN_10074a344(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0xd;
  func_0x0001005a7e6c();
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 0xd;
  if ((int)param_3 != 0) {
    puVar1 = (undefined4 *)((long)param_1 + 9);
    if (*param_1 != 0) {
      puVar1 = (undefined4 *)param_1[2];
    }
    *puVar1 = 0x8040000;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar1 + 3) = (char)param_3;
    return;
  }
  func_0x000107c2c2bc();
  if (*(char *)(lVar2 + 0x628) == '\0') {
    *(undefined8 *)(lVar2 + 0x8c8) = 0x8000000000000000;
    *(undefined4 *)(lVar2 + 0x8d0) = 0;
  }
  *(undefined4 *)(lVar2 + 0x840) = *(undefined4 *)(lVar2 + 0x828);
  return;
}



/* Entry: 10074a3ec; end: 10074a40b;  */

void FUN_10074a3ec(long param_1)

{
  if (*(char *)(param_1 + 0x628) == '\0') {
    *(undefined8 *)(param_1 + 0x8c8) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 0x8d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x828);
  return;
}



/* Entry: 10074a40c; end: 10074a507;  */

void FUN_10074a40c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong auStack_38 [3];
  
  *(int *)(param_1 + 0x90) = param_2;
  if (param_2 != 0) {
    return;
  }
  FUN_10076f2bc(auStack_38 + 2,param_1 + 0xb40);
  uVar5 = *(ulong *)(param_1 + 0xb38);
  if (uVar5 == 0) {
    return;
  }
  uVar3 = uVar5;
  auStack_38[2] = uVar5;
  if ((uVar5 & 1) == 0) {
LAB_10074a478:
    *(undefined8 *)(param_1 + 0xb38) = 0;
    auStack_38[1] = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uVar5 & 1) == 0) goto LAB_10074a4b0;
  }
  else {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *(ulong *)(param_1 + 0xb38);
    if (*(ulong *)(param_1 + 0xb38) != 0) goto LAB_10074a478;
  }
  piVar4 = (int *)(uVar5 - 1);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_10074a4b0:
  auStack_38[0] = uVar5;
  func_0x000104a98258(param_1,auStack_38);
  if ((auStack_38[0] & 1) != 0) {
    FUN_10084dad0();
  }
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0(uVar5);
  }
  return;
}



/* Entry: 10074a508; end: 10074a933;  */

undefined8 **
FUN_10074a508(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1 + 0xa0;
  FUN_100460448(lVar10);
  if (*(long *)(param_1 + 0x388) == 0) {
    lStack_b8 = param_1 + 0x391;
    uVar9 = (ulong)*(byte *)(param_1 + 0x390);
  }
  else {
    lStack_b8 = *(long *)(param_1 + 0x398);
    uVar9 = *(ulong *)(param_1 + 0x390);
  }
  lStack_c0 = lStack_b8 + uVar9;
  lVar1 = param_1 + 0x3a8;
  FUN_1005a7050(lVar1);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar9 = *(ulong *)(param_2 + 0x10);
    uStack_118 = param_5;
    uStack_110 = param_4;
    puStack_108 = param_3;
    lStack_100 = lVar10;
    if (uVar9 != 0) {
      uVar12 = 0;
      lVar10 = (long)&uStack_88 + 1;
      lStack_120 = lVar10;
      do {
        puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + uVar12 * 0x20);
        uStack_88 = puVar6[1];
        puStack_90 = (undefined8 *)*puVar6;
        uStack_78 = puVar6[3];
        lStack_80 = puVar6[2];
        uVar11 = uStack_88 & 0xff;
        if (puStack_90 != (undefined8 *)0x0) {
          uVar11 = uStack_88;
        }
        if (uVar11 != 0) {
          if (puStack_90 != (undefined8 *)0x0) {
            lVar10 = lStack_80;
          }
          do {
            lVar8 = lStack_b8;
            lVar14 = lStack_c0;
            lStack_c8 = lStack_c0 - lStack_b8;
            uStack_d0 = uVar11;
            FUN_100460448(param_1 + 0x20);
            uVar13 = *(undefined8 *)(param_1 + 0x10);
            FUN_10074ab54(uVar13,lVar10,&uStack_d0,lVar8,&lStack_c8);
            func_0x000100466b80(param_1 + 0x20);
            uVar9 = uStack_d0;
            if ((int)uVar13 != 0) {
              uVar2 = uVar13;
              func_0x000104ae1b68();
              uStack_130 = uVar2;
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                            ,0x1bf,2,"Encryption error: %s");
              param_3 = puStack_108;
              lVar10 = lStack_100;
              param_5 = uStack_118;
              param_4 = uStack_110;
              goto LAB_10074a79c;
            }
            lStack_b8 = lVar8 + lStack_c8;
            if (lStack_b8 == lVar14) {
              func_0x000104ad1cd0(param_1,&lStack_b8,&lStack_c0);
            }
            uVar11 = uVar11 - uVar9;
            lVar10 = lVar10 + uVar9;
          } while (uVar11 != 0);
          uVar9 = *(ulong *)(param_2 + 0x10);
          lVar10 = lStack_120;
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < uVar9);
    }
    do {
      lVar14 = lStack_b8;
      lVar10 = lStack_c0;
      lStack_c8 = lStack_c0 - lStack_b8;
      FUN_100460448(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      FUN_10074af60(uVar13,lVar14,&lStack_c8,&puStack_90);
      func_0x000100466b80(param_1 + 0x20);
      if ((int)uVar13 != 0) break;
      lStack_b8 = lVar14 + lStack_c8;
      if (lStack_b8 == lVar10) {
        func_0x000104ad1cd0(param_1,&lStack_b8,&lStack_c0);
      }
      lVar14 = lStack_b8;
    } while (puStack_90 != (undefined8 *)0x0);
    lVar10 = lStack_100;
    param_3 = puStack_108;
    param_4 = uStack_110;
    param_5 = uStack_118;
    if (*(long *)(param_1 + 0x388) == 0) {
      lVar8 = param_1 + 0x391;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x398);
    }
    if (lVar14 != lVar8) {
      FUN_100727068(auStack_b0,(long *)(param_1 + 0x388),lVar14 - lVar8);
      FUN_1005a70c4(lVar1,auStack_b0);
    }
  }
  else {
    uVar13 = 0;
    lVar14 = param_1 + 0x500;
    while( true ) {
      if (*(ulong *)(param_2 + 0x20) <= (ulong)(long)(int)param_5 || (int)uVar13 != 0) break;
      func_0x000104ad7c94(param_2,(long)(int)param_5,lVar14);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      func_0x000104ae1c18(uVar13,lVar14,lVar1);
    }
    if ((int)uVar13 == 0) {
      if (*(ulong *)(param_2 + 0x20) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        func_0x000104ae1c18(uVar13,param_2,lVar1);
      }
    }
    FUN_1005a7050(lVar14);
  }
LAB_10074a79c:
  func_0x000100466b80(lVar10);
  if ((int)uVar13 == 0) {
    ppuVar3 = *(undefined8 ***)(param_1 + 8);
    func_0x0001005a7358(ppuVar3,lVar1,param_3,param_4,param_5);
  }
  else {
    FUN_1005a7050(lVar1);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    func_0x000104ab5920(&uStack_e0,2,"Wrap failed",0xb,&lStack_c0,&uStack_f8);
    func_0x000104ad56e4(&uStack_d8,&uStack_e0,uVar13);
    puVar7 = &uStack_d8;
    FUN_1004bd7e8(&lStack_b8,param_3);
    param_3 = puVar7;
    if ((uStack_d8 & 1) != 0) {
      FUN_10084dad0();
      param_3 = puVar7;
    }
    if ((uStack_e0 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_90 = &uStack_f8;
    ppuVar3 = &puStack_90;
    func_0x000100482b64();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar3;
  }
  func_0x000107c60e78();
  func_0x000100466b80(lStack_100);
  func_0x000107c60bd8(ppuVar3);
  ppuVar4 = ppuVar3;
  func_0x000104bd46a0();
  pppuVar5 = &ppuStack_160;
  pcStack_138 = FUN_10074a934;
  lStack_150 = lVar10;
  ppuStack_148 = ppuVar3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_3);
  puStack_158 = PTR_PTR_112701640;
  ppuStack_160 = ppuVar4;
  func_0x000107c61154(&ppuStack_160,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined8 ***)0x0) {
    func_0x000107c61174(param_3);
    puVar6 = pppuVar5[1];
    pppuVar5[1] = (undefined8 **)param_3;
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(param_3);
  return pppuVar5;
}



/* Entry: 10074a934; end: 10074a9a7; -[SCMixerScheduleNamespaceServiceAdapter initWithMixerService:] */

undefined1 * FUN_10074a934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701640;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}


