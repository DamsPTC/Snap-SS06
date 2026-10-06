/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00399080; end: 003990db;  */

segment_command *
FUN_00399080(undefined8 *param_1,long *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  segment_command *psVar4;
  qword *pqVar5;
  segment_command **ppsVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  segment_command *psVar11;
  uint uVar12;
  ulong uVar13;
  segment_command *psVar14;
  qword qVar15;
  segment_command *psVar16;
  long lVar17;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  segment_command *psStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  qword in_stack_ffffffffffffffd8;
  
  if ((param_3 == 0x13) &&
     ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    psVar4 = param_4;
    FUN_00399244();
    qVar15 = param_4->filesize;
    psVar11 = psVar4;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar11;
    param_1[1] = psVar4;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    psVar4 = param_4;
    FUN_00399554(&lStack_40);
    qVar15 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar4;
    *(int *)(param_1 + 5) = (int)qVar15;
    psVar4 = &segment_command_00000020;
    __Znwm();
    psVar4->cmd = (undefined4)lStack_40;
    psVar4->cmdsize = lStack_40._4_4_;
    *(undefined8 *)(psVar4->segname + 8) = in_stack_ffffffffffffffd0;
    *(undefined8 *)psVar4->segname = uStack_38;
    psVar4->vmaddr = in_stack_ffffffffffffffd8;
    param_1[1] = psVar4;
    return psVar4;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar4 = param_4;
    FUN_003955d0(&psStack_48);
    qVar15 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar4;
    *(int *)(param_1 + 5) = (int)qVar15;
    param_1[2] = lStack_40;
    param_1[1] = psStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
      return psVar4;
    }
    ___stack_chk_fail();
    FUN_0034b418(&psStack_48);
    __Unwind_Resume(psVar4);
    pcStack_58 = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  pplVar7 = &plStack_70;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(&psStack_48,param_2,param_3);
  uStack_68 = *(undefined8 *)param_4->segname;
  plStack_70 = *(long **)param_4;
  pcStack_58 = (code *)param_4->vmaddr;
  puStack_60 = *(undefined1 **)(param_4->segname + 8);
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  ppsVar6 = &psStack_48;
  FUN_00399d0c(param_1);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
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
  psVar4 = psStack_48;
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psStack_48) {
    do {
      lVar10 = *(long *)psStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psStack_48,0x10);
      if (bVar2) {
        *(long *)psStack_48 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)psStack_48->segname)();
      psVar4 = psStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    return psVar4;
  }
  ___stack_chk_fail();
  if ((int)ppsVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&psStack_48);
  }
  __Unwind_Resume();
  psVar11 = *ppsVar6;
  if (psVar11 == (segment_command *)0x0) {
    psVar16 = (segment_command *)((long)ppsVar6 + 9);
    psVar14 = (segment_command *)(ulong)*(byte *)(ppsVar6 + 1);
  }
  else {
    psVar14 = ppsVar6[1];
    psVar16 = ppsVar6[2];
  }
  if (psVar14 < (segment_command *)0x4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(*(int *)(psVar16->segname + (long)(psVar14->segname + -0x14)) == 0x6e69622d);
  }
  *(undefined **)psVar4 = &UNK_009dee20 + uVar13 * 0x40;
  if (psVar11 == (segment_command *)0x0) {
    uVar8 = (uint)*(byte *)(ppsVar6 + 1);
  }
  else {
    uVar8 = (uint)ppsVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar12 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar12 = (uint)pplVar7[1];
  }
  *(uint *)&psVar4->fileoff = uVar12 + uVar8 + 0x20;
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  psVar11 = *ppsVar6;
  psVar14 = ppsVar6[3];
  psVar16 = ppsVar6[2];
  pqVar5[1] = (qword)ppsVar6[1];
  *pqVar5 = (qword)psVar11;
  pqVar5[3] = (qword)psVar14;
  pqVar5[2] = (qword)psVar16;
  ppsVar6[1] = (segment_command *)0x0;
  *ppsVar6 = (segment_command *)0x0;
  ppsVar6[3] = (segment_command *)0x0;
  ppsVar6[2] = (segment_command *)0x0;
  lVar9 = (long)*pplVar7;
  lVar17 = (long)pplVar7[3];
  lVar10 = (long)pplVar7[2];
  pqVar5[5] = (qword)pplVar7[1];
  pqVar5[4] = lVar9;
  pqVar5[7] = lVar17;
  pqVar5[6] = lVar10;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  *(qword **)psVar4->segname = pqVar5;
  return psVar4;
}



/* Entry: 003990dc; end: 0039916f;  */

undefined8 FUN_003990dc(void)

{
  int iVar1;
  
  if ((bRam0000000000afabb8 & 1) == 0) {
    iVar1 = 0xafabb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afab78 = 1;
      uRam0000000000afab80 = 0x3ff2b8;
      pcRam0000000000afab88 = FUN_00399170;
      pcRam0000000000afab90 = FUN_00395710;
      uRam0000000000afab98 = 0x399198;
      pcRam0000000000afaba0 = "grpc-tags-bin";
      uRam0000000000afaba8 = 0xd;
      uRam0000000000afabb0 = 0;
      ___cxa_guard_release(0xafabb8);
    }
  }
  return 0xafab78;
}



/* Entry: 00399170; end: 003991bb;  */

undefined1  [16] FUN_00399170(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x24;
  *param_2 = uVar2 | 0x100000;
  if ((uVar2 >> 0x14 & 1) == 0) {
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  uStack_60 = *(undefined8 *)(param_2 + 0x26);
  uStack_50 = *(undefined8 *)(param_2 + 0x2a);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x26) = uVar11;
  *(undefined8 *)(param_2 + 0x2a) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_00395a64(pplVar10);
  FUN_0035d0e4(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 003991bc; end: 003991fb;  */

void FUN_003991bc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00399244();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00399290();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 003991fc; end: 00399243;  */

segment_command *
FUN_003991fc(undefined8 *param_1,long *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  segment_command *psVar4;
  qword *pqVar5;
  segment_command **ppsVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  segment_command *psVar10;
  uint uVar11;
  ulong uVar12;
  segment_command *psVar13;
  qword qVar14;
  segment_command *psVar15;
  long lVar16;
  long lVar17;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  segment_command *psStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  qword qStack_28;
  
  if ((param_3 == 0xb) &&
     (*param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63)) {
    psVar4 = param_4;
    FUN_00399554(&lStack_40);
    qVar14 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar4;
    *(int *)(param_1 + 5) = (int)qVar14;
    psVar4 = &segment_command_00000020;
    __Znwm();
    psVar4->cmd = (undefined4)lStack_40;
    psVar4->cmdsize = lStack_40._4_4_;
    *(undefined8 *)(psVar4->segname + 8) = uStack_30;
    *(undefined8 *)psVar4->segname = uStack_38;
    psVar4->vmaddr = qStack_28;
    param_1[1] = psVar4;
    return psVar4;
  }
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    qStack_28 = *(qword *)PTR____stack_chk_guard_00999f88;
    psVar4 = param_4;
    FUN_003955d0(&psStack_48);
    qVar14 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar4;
    *(int *)(param_1 + 5) = (int)qVar14;
    param_1[2] = lStack_40;
    param_1[1] = psStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == qStack_28) {
      return psVar4;
    }
    ___stack_chk_fail();
    FUN_0034b418(&psStack_48);
    __Unwind_Resume(psVar4);
    pcStack_58 = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  pplVar7 = &plStack_70;
  qStack_28 = *(qword *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(&psStack_48,param_2,param_3);
  uStack_68 = *(undefined8 *)param_4->segname;
  plStack_70 = *(long **)param_4;
  pcStack_58 = (code *)param_4->vmaddr;
  puStack_60 = *(undefined1 **)(param_4->segname + 8);
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  ppsVar6 = &psStack_48;
  FUN_00399d0c(param_1);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar9 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  psVar4 = psStack_48;
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psStack_48) {
    do {
      lVar9 = *(long *)psStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psStack_48,0x10);
      if (bVar2) {
        *(long *)psStack_48 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)psStack_48->segname)();
      psVar4 = psStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == qStack_28) {
    return psVar4;
  }
  ___stack_chk_fail();
  if ((int)ppsVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&psStack_48);
  }
  __Unwind_Resume();
  psVar10 = *ppsVar6;
  if (psVar10 == (segment_command *)0x0) {
    psVar15 = (segment_command *)((long)ppsVar6 + 9);
    psVar13 = (segment_command *)(ulong)*(byte *)(ppsVar6 + 1);
  }
  else {
    psVar13 = ppsVar6[1];
    psVar15 = ppsVar6[2];
  }
  if (psVar13 < (segment_command *)0x4) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(*(int *)(psVar15->segname + (long)(psVar13->segname + -0x14)) == 0x6e69622d);
  }
  *(undefined **)psVar4 = &UNK_009dee20 + uVar12 * 0x40;
  if (psVar10 == (segment_command *)0x0) {
    uVar8 = (uint)*(byte *)(ppsVar6 + 1);
  }
  else {
    uVar8 = (uint)ppsVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar11 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar11 = (uint)pplVar7[1];
  }
  *(uint *)&psVar4->fileoff = uVar11 + uVar8 + 0x20;
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  psVar10 = *ppsVar6;
  psVar13 = ppsVar6[3];
  psVar15 = ppsVar6[2];
  pqVar5[1] = (qword)ppsVar6[1];
  *pqVar5 = (qword)psVar10;
  pqVar5[3] = (qword)psVar13;
  pqVar5[2] = (qword)psVar15;
  ppsVar6[1] = (segment_command *)0x0;
  *ppsVar6 = (segment_command *)0x0;
  ppsVar6[3] = (segment_command *)0x0;
  ppsVar6[2] = (segment_command *)0x0;
  lVar9 = (long)*pplVar7;
  lVar17 = (long)pplVar7[3];
  lVar16 = (long)pplVar7[2];
  pqVar5[5] = (qword)pplVar7[1];
  pqVar5[4] = lVar9;
  pqVar5[7] = lVar17;
  pqVar5[6] = lVar16;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  *(qword **)psVar4->segname = pqVar5;
  return psVar4;
}



/* Entry: 00399244; end: 0039928f;  */

undefined8 FUN_00399244(undefined8 *param_1)

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
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
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



/* Entry: 00399290; end: 0039931f;  */

undefined8 FUN_00399290(void)

{
  int iVar1;
  
  if ((bRam0000000000afac00 & 1) == 0) {
    iVar1 = 0xafac00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afabc0 = 0;
      uRam0000000000afabc8 = 0x3ff2e4;
      pcRam0000000000afabd0 = FUN_00399378;
      pcRam0000000000afabd8 = FUN_00399320;
      uRam0000000000afabe0 = 0x399398;
      pcRam0000000000afabe8 = "grpclb_client_stats";
      uRam0000000000afabf0 = 0x13;
      uRam0000000000afabf8 = 0;
      ___cxa_guard_release(0xafac00);
    }
  }
  return 0xafabc0;
}



/* Entry: 00399320; end: 00399377;  */

void FUN_00399320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
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
  *(undefined8 *)(param_4 + 8) = 0;
  return;
}



/* Entry: 00399378; end: 003993bb;  */

void FUN_00399378(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x200000;
  *(undefined8 *)(param_2 + 0x22) = uVar1;
  return;
}



/* Entry: 003993bc; end: 00399487;  */

void FUN_003993bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00399488; end: 00399493;  */

char * FUN_00399488(void)

{
  return "<internal-lb-stats>";
}



/* Entry: 00399494; end: 00399513;  */

void FUN_00399494(long *param_1,long param_2)

{
  long lVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  qword qStack_28;
  
  lVar1 = param_2;
  FUN_00399554(&uStack_40);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_00399608();
  *param_1 = lVar1;
  *(int *)(param_1 + 5) = (int)uVar3;
  psVar2 = &segment_command_00000020;
  __Znwm();
  psVar2->cmd = (undefined4)uStack_40;
  psVar2->cmdsize = uStack_40._4_4_;
  *(undefined8 *)(psVar2->segname + 8) = uStack_30;
  *(undefined8 *)psVar2->segname = uStack_38;
  psVar2->vmaddr = qStack_28;
  param_1[1] = (long)psVar2;
  return;
}



/* Entry: 00399514; end: 00399553;  */

long * FUN_00399514(undefined8 *param_1,long *param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  qword *pqVar5;
  long **pplVar6;
  long **pplVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 8) && (*param_2 == 0x6e656b6f742d626c)) {
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    plVar4 = param_4;
    FUN_003955d0(&plStack_48);
    lVar9 = param_4[6];
    FUN_00399b24();
    *param_1 = plVar4;
    *(int *)(param_1 + 5) = (int)lVar9;
    param_1[2] = uStack_40;
    param_1[1] = plStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return plVar4;
    }
    ___stack_chk_fail();
    FUN_0034b418(&plStack_48);
    __Unwind_Resume(plVar4);
    pcStack_58 = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      puStack_60 = &stack0xfffffffffffffff0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (long *)0xafac50;
  }
  pplVar7 = &plStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(&plStack_48,param_2,param_3);
  lStack_68 = param_4[1];
  plStack_70 = (long *)*param_4;
  pcStack_58 = (code *)param_4[3];
  puStack_60 = (undefined1 *)param_4[2];
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  pplVar6 = &plStack_48;
  FUN_00399d0c(param_1);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar9 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar4 = plStack_48;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
    do {
      lVar9 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar4 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&plStack_48);
  }
  __Unwind_Resume();
  plVar10 = *pplVar6;
  if (plVar10 == (long *)0x0) {
    plVar14 = (long *)((long)pplVar6 + 9);
    plVar13 = (long *)(ulong)*(byte *)(pplVar6 + 1);
  }
  else {
    plVar13 = pplVar6[1];
    plVar14 = pplVar6[2];
  }
  if (plVar13 < (long *)0x4) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(*(int *)((long)plVar13 + (long)plVar14 + -4) == 0x6e69622d);
  }
  *plVar4 = (long)(&UNK_009dee20 + uVar12 * 0x40);
  if (plVar10 == (long *)0x0) {
    uVar8 = (uint)*(byte *)(pplVar6 + 1);
  }
  else {
    uVar8 = (uint)pplVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar11 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar11 = (uint)pplVar7[1];
  }
  *(uint *)(plVar4 + 5) = uVar11 + uVar8 + 0x20;
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  plVar10 = *pplVar6;
  plVar13 = pplVar6[3];
  plVar14 = pplVar6[2];
  pqVar5[1] = (qword)pplVar6[1];
  *pqVar5 = (qword)plVar10;
  pqVar5[3] = (qword)plVar13;
  pqVar5[2] = (qword)plVar14;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  lVar9 = (long)*pplVar7;
  lVar16 = (long)pplVar7[3];
  lVar15 = (long)pplVar7[2];
  pqVar5[5] = (qword)pplVar7[1];
  pqVar5[4] = lVar9;
  pqVar5[7] = lVar16;
  pqVar5[6] = lVar15;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  plVar4[1] = (long)pqVar5;
  return plVar4;
}



/* Entry: 00399554; end: 00399607;  */

long * FUN_00399554(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar5 = param_1[4];
  FUN_003ff024(&plStack_50,uVar5,param_1[5]);
  iVar4 = (int)uVar5;
  plVar3 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x0040cf10(plVar3);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar3);
  if ((bRam0000000000afac48 & 1) == 0) {
    iVar4 = 0xafac48;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam0000000000afac08 = 1;
      pcRam0000000000afac10 = FUN_0039969c;
      pcRam0000000000afac18 = FUN_003996dc;
      pcRam0000000000afac20 = FUN_003997f8;
      pcRam0000000000afac28 = FUN_00399910;
      pcRam0000000000afac30 = "lb-cost-bin";
      uRam0000000000afac38 = 0xb;
      uRam0000000000afac40 = 0;
      ___cxa_guard_release(0xafac48);
    }
  }
  return (long *)0xafac08;
}



/* Entry: 00399608; end: 0039969b;  */

undefined8 FUN_00399608(void)

{
  int iVar1;
  
  if ((bRam0000000000afac48 & 1) == 0) {
    iVar1 = 0xafac48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afac08 = 1;
      pcRam0000000000afac10 = FUN_0039969c;
      pcRam0000000000afac18 = FUN_003996dc;
      pcRam0000000000afac20 = FUN_003997f8;
      pcRam0000000000afac28 = FUN_00399910;
      pcRam0000000000afac30 = "lb-cost-bin";
      uRam0000000000afac38 = 0xb;
      uRam0000000000afac40 = 0;
      ___cxa_guard_release(0xafac48);
    }
  }
  return 0xafac08;
}



/* Entry: 0039969c; end: 003996db;  */

void FUN_0039969c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 003996dc; end: 00399703;  */

void FUN_003996dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_00399704(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 00399704; end: 003997f7;  */

void FUN_00399704(undefined8 param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = (undefined8 *)*param_2;
  uVar4 = *puVar2;
  if (*(char *)((long)puVar2 + 0x1f) < '\0') {
    FUN_002971d4(&uStack_58,puVar2[1],puVar2[2]);
  }
  else {
    uStack_50 = puVar2[2];
    uStack_58 = puVar2[1];
    lStack_48 = puVar2[3];
  }
  uStack_30 = uStack_50;
  uStack_38 = uStack_58;
  lStack_28 = lStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uVar1 = *param_3;
  puVar3 = param_3 + 0x18;
  *param_3 = uVar1 | 0x400000;
  if ((uVar1 >> 0x16 & 1) == 0) {
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
  }
  uStack_40 = uVar4;
  FUN_0034dbcc(puVar3,&uStack_40);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 003997f8; end: 0039990f;  */

void FUN_003997f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 0x20;
  __Znwm();
  uStack_68 = param_1[1];
  plStack_70 = (long *)*param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003ff024(uVar4,&plStack_70,param_2,param_3);
  *(undefined8 *)(param_4 + 8) = uVar4;
  plVar5 = plStack_70;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
    do {
      lVar6 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    while ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10(plVar5);
    FUN_00399a58(auStack_100,plVar5);
    FUN_003fef74(&ppuStack_e0,auStack_100);
    pppuVar3 = (undefined8 ***)ppuStack_e0;
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      pppuVar3 = &ppuStack_e0;
    }
    FUN_0035d0e4(&ppuStack_c8,pppuVar3,uStack_d8);
    pppuVar3 = (undefined8 ***)ppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      pppuVar3 = &ppuStack_c8;
    }
    FUN_003ff220(extraout_x8,"lb-cost-bin",0xb,pppuVar3,uStack_c0);
    if ((char)bStack_b1 < '\0') {
      __ZdlPv(ppuStack_c8);
    }
    if ((char)bStack_c9 < '\0') {
      __ZdlPv(ppuStack_e0);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(uStack_f8);
    }
    return;
  }
  return;
}



/* Entry: 00399910; end: 00399933;  */

void FUN_00399910(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  char cStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_00399a58(auStack_90,param_2);
  FUN_003fef74(&ppuStack_70,auStack_90);
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    pppuVar1 = &ppuStack_70;
  }
  FUN_0035d0e4(&ppuStack_58,pppuVar1,uStack_68);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,"lb-cost-bin",0xb,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  return;
}



/* Entry: 00399934; end: 00399a57;  */

void FUN_00399934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  char cStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)(auStack_90,param_4);
  (*param_6)(&ppuStack_70,auStack_90);
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    pppuVar1 = &ppuStack_70;
  }
  FUN_0035d0e4(&ppuStack_58,pppuVar1,uStack_68);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  return;
}



/* Entry: 00399a58; end: 00399a8b;  */

void FUN_00399a58(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)*param_2;
  puVar3 = param_1 + 1;
  *param_1 = *puVar4;
  if (-1 < *(char *)((long)puVar4 + 0x1f)) {
    uVar6 = puVar4[2];
    uVar5 = puVar4[1];
    param_1[3] = puVar4[3];
    param_1[2] = uVar6;
    *puVar3 = uVar5;
    return;
  }
  uVar5 = puVar4[2];
  if (uVar5 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)uVar5;
  }
  else {
    if (0x7ffffffffffffff7 < uVar5) {
      FUN_0026329c(puVar3,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(undefined *)0x2972c4)();
      return;
    }
    uVar1 = 0x19;
    if ((uVar5 | 7) != 0x17) {
      uVar1 = (uVar5 | 7) + 1;
    }
    uVar2 = uVar1;
    __Znwm();
    param_1[2] = uVar5;
    param_1[3] = uVar1 | 0x8000000000000000;
    *puVar3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_0099a400)();
  return;
}



/* Entry: 00399a8c; end: 00399b23;  */

long FUN_00399a8c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = param_2;
  FUN_003955d0(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_00399b24();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  FUN_0034b418(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam0000000000afac90 & 1) == 0) {
    iVar1 = 0xafac90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afac50 = 0;
      uRam0000000000afac58 = 0x3ff2b8;
      pcRam0000000000afac60 = FUN_00399bb4;
      pcRam0000000000afac68 = FUN_00395710;
      uRam0000000000afac70 = 0x399bdc;
      pcRam0000000000afac78 = "lb-token";
      uRam0000000000afac80 = 8;
      uRam0000000000afac88 = 0;
      ___cxa_guard_release(0xafac90);
    }
  }
  return 0xafac50;
}



/* Entry: 00399b24; end: 00399bb3;  */

undefined8 FUN_00399b24(void)

{
  int iVar1;
  
  if ((bRam0000000000afac90 & 1) == 0) {
    iVar1 = 0xafac90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afac50 = 0;
      uRam0000000000afac58 = 0x3ff2b8;
      pcRam0000000000afac60 = FUN_00399bb4;
      pcRam0000000000afac68 = FUN_00395710;
      uRam0000000000afac70 = 0x399bdc;
      pcRam0000000000afac78 = "lb-token";
      uRam0000000000afac80 = 8;
      uRam0000000000afac88 = 0;
      ___cxa_guard_release(0xafac90);
    }
  }
  return 0xafac50;
}



/* Entry: 00399bb4; end: 00399bff;  */

undefined1  [16] FUN_00399bb4(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x10;
  *param_2 = uVar2 | 0x800000;
  if ((uVar2 >> 0x17 & 1) == 0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x14);
  uStack_60 = *(undefined8 *)(param_2 + 0x12);
  uStack_50 = *(undefined8 *)(param_2 + 0x16);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  *(undefined8 *)(param_2 + 0x12) = uVar11;
  *(undefined8 *)(param_2 + 0x16) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_00395a64(pplVar10);
  FUN_0035d0e4(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 00399c00; end: 00399d0b;  */

long * FUN_00399c00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  qword *pqVar4;
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
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(aplStack_48,param_3,param_4);
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  pplVar5 = aplStack_48;
  FUN_00399d0c(param_1);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
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
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
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
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  if ((int)pplVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_70);
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
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
  *plVar3 = (long)(&UNK_009dee20 + uVar11 * 0x40);
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
  pqVar4 = &segment_command_00000020.vmsize;
  __Znwm();
  plVar9 = *pplVar5;
  plVar12 = pplVar5[3];
  plVar13 = pplVar5[2];
  pqVar4[1] = (qword)pplVar5[1];
  *pqVar4 = (qword)plVar9;
  pqVar4[3] = (qword)plVar12;
  pqVar4[2] = (qword)plVar13;
  pplVar5[1] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)0x0;
  lVar8 = (long)*pplVar6;
  lVar15 = (long)pplVar6[3];
  lVar14 = (long)pplVar6[2];
  pqVar4[5] = (qword)pplVar6[1];
  pqVar4[4] = lVar8;
  pqVar4[7] = lVar15;
  pqVar4[6] = lVar14;
  pplVar6[1] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  plVar3[1] = (long)pqVar4;
  return plVar3;
}



/* Entry: 00399d0c; end: 00399de3;  */

undefined8 * FUN_00399d0c(undefined8 *param_1,qword *param_2,long *param_3)

{
  qword *pqVar1;
  uint uVar2;
  qword qVar3;
  uint uVar4;
  ulong uVar5;
  qword qVar6;
  qword qVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  qVar3 = *param_2;
  if (qVar3 == 0) {
    qVar7 = (long)param_2 + 9;
    qVar6 = (qword)(byte)param_2[1];
  }
  else {
    qVar6 = param_2[1];
    qVar7 = param_2[2];
  }
  if (qVar6 < 4) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(*(int *)(qVar6 + qVar7 + -4) == 0x6e69622d);
  }
  *param_1 = &UNK_009dee20 + uVar5 * 0x40;
  if (qVar3 == 0) {
    uVar2 = (uint)(byte)param_2[1];
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
  pqVar1 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar3 = *param_2;
  qVar6 = param_2[3];
  qVar7 = param_2[2];
  pqVar1[1] = param_2[1];
  *pqVar1 = qVar3;
  pqVar1[3] = qVar6;
  pqVar1[2] = qVar7;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar8 = *param_3;
  lVar10 = param_3[3];
  lVar9 = param_3[2];
  pqVar1[5] = param_3[1];
  pqVar1[4] = lVar8;
  pqVar1[7] = lVar10;
  pqVar1[6] = lVar9;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_1[1] = pqVar1;
  return param_1;
}



/* Entry: 00399de4; end: 00399e1f;  */

void FUN_00399de4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_0034b418(lVar1 + 0x20);
    FUN_0034b418(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00399e20; end: 00399f2b;  */

undefined1  [16] FUN_00399e20(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  qword *pqVar3;
  long lVar4;
  char **ppcVar5;
  ulong uVar6;
  long **pplVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  qword qVar13;
  qword qVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_138;
  ulong uStack_130;
  char *pcStack_108;
  undefined8 uStack_100;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  pplVar7 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = (long *)*param_1;
  if (*param_1 == 0) {
    lVar4 = (long)param_1 + 9;
    uVar6 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar6 = param_1[1];
    lVar4 = param_1[2];
  }
  plVar10 = (long *)param_1[4];
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_48 = param_1[5];
  plStack_50 = (long *)param_1[4];
  lStack_38 = param_1[7];
  lStack_40 = param_1[6];
  FUN_003fe220(param_2 + 0x1f0,lVar4,uVar6);
  plVar10 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
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
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar17._8_8_ = lVar4;
    auVar17._0_8_ = plVar10;
    return auVar17;
  }
  ___stack_chk_fail();
  if ((int)lVar4 == 0) {
    __Unwind_Resume(plVar10);
  }
  func_0x0040cf10();
  pcStack_58 = FUN_00399f2c;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar3 = &segment_command_00000020.vmsize;
  puStack_60 = &stack0xfffffffffffffff0;
  __Znwm();
  puVar9 = *(undefined8 **)((long)pplVar7 + 8);
  plVar11 = (long *)*puVar9;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar11 = (long *)*puVar9;
  }
  uVar12 = puVar9[3];
  qVar14 = puVar9[2];
  qVar13 = puVar9[1];
  *pqVar3 = (qword)plVar11;
  pqVar3[2] = qVar14;
  pqVar3[1] = qVar13;
  pqVar3[3] = uVar12;
  lVar8 = *plVar10;
  lVar16 = plVar10[3];
  lVar15 = plVar10[2];
  pqVar3[5] = plVar10[1];
  pqVar3[4] = lVar8;
  pqVar3[7] = lVar16;
  pqVar3[6] = lVar15;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(qword **)((long)pplVar7 + 8) = pqVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    auVar18._8_8_ = lVar4;
    auVar18._0_8_ = pqVar3;
    return auVar18;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_00399fd4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar10 = (long *)*pqVar3;
  if (*plVar10 == 0) {
    lStack_d8 = (long)plVar10 + 9;
    uStack_d0 = (ulong)*(byte *)(plVar10 + 1);
  }
  else {
    uStack_d0 = plVar10[1];
    lStack_d8 = plVar10[2];
  }
  pcStack_108 = ": ";
  uStack_100 = 2;
  if (plVar10[4] == 0) {
    lStack_138 = (long)plVar10 + 0x29;
    uStack_130 = (ulong)*(byte *)(plVar10 + 5);
  }
  else {
    uStack_130 = plVar10[5];
    lStack_138 = plVar10[6];
  }
  plVar10 = &lStack_d8;
  ppcVar5 = &pcStack_108;
  ppuStack_a0 = &puStack_60;
  FUN_00575ddc(plVar10,ppcVar5,&lStack_138);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
    auVar19._8_8_ = ppcVar5;
    auVar19._0_8_ = plVar10;
    return auVar19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar10 = (long *)*plVar10;
  if (*plVar10 != 0) {
    auVar20._8_8_ = plVar10[1];
    auVar20._0_8_ = plVar10[2];
    return auVar20;
  }
  auVar21[8] = (char)plVar10[1];
  auVar21._0_8_ = (long)plVar10 + 9;
  auVar21._9_7_ = 0;
  return auVar21;
}



/* Entry: 00399f2c; end: 00399fd3;  */

undefined1  [16]
FUN_00399f2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  qword *pqVar3;
  char **ppcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  qword qVar8;
  qword qVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lStack_e8;
  ulong uStack_e0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_88;
  ulong uStack_80;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar3 = &segment_command_00000020.vmsize;
  __Znwm();
  puVar5 = *(undefined8 **)(param_4 + 8);
  plVar6 = (long *)*puVar5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = (long *)*puVar5;
  }
  uVar7 = puVar5[3];
  qVar9 = puVar5[2];
  qVar8 = puVar5[1];
  *pqVar3 = (qword)plVar6;
  pqVar3[2] = qVar9;
  pqVar3[1] = qVar8;
  pqVar3[3] = uVar7;
  uVar7 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  pqVar3[5] = param_1[1];
  pqVar3[4] = uVar7;
  pqVar3[7] = uVar11;
  pqVar3[6] = uVar10;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(qword **)(param_4 + 8) = pqVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = pqVar3;
    return auVar12;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_00399fd4;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)*pqVar3;
  if (*plVar6 == 0) {
    lStack_88 = (long)plVar6 + 9;
    uStack_80 = (ulong)*(byte *)(plVar6 + 1);
  }
  else {
    uStack_80 = plVar6[1];
    lStack_88 = plVar6[2];
  }
  pcStack_b8 = ": ";
  uStack_b0 = 2;
  if (plVar6[4] == 0) {
    lStack_e8 = (long)plVar6 + 0x29;
    uStack_e0 = (ulong)*(byte *)(plVar6 + 5);
  }
  else {
    uStack_e0 = plVar6[5];
    lStack_e8 = plVar6[6];
  }
  plVar6 = &lStack_88;
  ppcVar4 = &pcStack_b8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00575ddc(plVar6,ppcVar4,&lStack_e8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    auVar13._8_8_ = ppcVar4;
    auVar13._0_8_ = plVar6;
    return auVar13;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar6 = (long *)*plVar6;
  if (*plVar6 != 0) {
    auVar14._8_8_ = plVar6[1];
    auVar14._0_8_ = plVar6[2];
    return auVar14;
  }
  auVar15[8] = (char)plVar6[1];
  auVar15._0_8_ = (long)plVar6 + 9;
  auVar15._9_7_ = 0;
  return auVar15;
}



/* Entry: 00399fd4; end: 0039a077;  */

undefined1  [16] FUN_00399fd4(long *param_1)

{
  char **ppcVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_a8;
  ulong uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  ulong uStack_40;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = (long *)*param_1;
  if (*param_1 == 0) {
    lStack_48 = (long)param_1 + 9;
    uStack_40 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uStack_40 = param_1[1];
    lStack_48 = param_1[2];
  }
  pcStack_78 = ": ";
  uStack_70 = 2;
  if (param_1[4] == 0) {
    lStack_a8 = (long)param_1 + 0x29;
    uStack_a0 = (ulong)*(byte *)(param_1 + 5);
  }
  else {
    uStack_a0 = param_1[5];
    lStack_a8 = param_1[6];
  }
  plVar2 = &lStack_48;
  ppcVar1 = &pcStack_78;
  FUN_00575ddc(plVar2,ppcVar1,&lStack_a8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    auVar3._8_8_ = ppcVar1;
    auVar3._0_8_ = plVar2;
    return auVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar2 = (long *)*plVar2;
  if (*plVar2 != 0) {
    auVar4._8_8_ = plVar2[1];
    auVar4._0_8_ = plVar2[2];
    return auVar4;
  }
  auVar5[8] = (char)plVar2[1];
  auVar5._0_8_ = (long)plVar2 + 9;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 0039a078; end: 0039a097;  */

undefined1  [16] FUN_0039a078(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    auVar1._8_8_ = param_1[1];
    auVar1._0_8_ = param_1[2];
    return auVar1;
  }
  auVar2[8] = (char)param_1[1];
  auVar2._0_8_ = (long)param_1 + 9;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 0039a098; end: 0039a0bf;  */

void FUN_0039a098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_0039a0c0(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 0039a0c0; end: 0039a0ef;  */

void FUN_0039a0c0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char *pcVar1;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  uStack_78 = *param_2;
  uStack_70 = param_2[1];
  uStack_58 = *param_1;
  uStack_50 = param_1[1];
  uStack_30 = param_3[1] & 0xff;
  lStack_38 = (long)param_3 + 9;
  if (*param_3 != 0) {
    uStack_30 = param_3[1];
    lStack_38 = param_3[2];
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  FUN_00575fc4(apcStack_a0,&pcStack_88,6);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar1 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (cStack_89 < '\0') {
      __ZdlPv(apcStack_a0[0]);
    }
    __Unwind_Resume(pcVar1);
    return;
  }
  return;
}



/* Entry: 0039a0f0; end: 0039a1ef;  */

void FUN_0039a0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_38 = param_5;
  uStack_30 = param_6;
  FUN_00575fc4(apcStack_a0,&pcStack_88,6);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar1 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(apcStack_a0[0]);
  }
  __Unwind_Resume(pcVar1);
  return;
}



/* Entry: 0039a1f0; end: 0039a207;  */

void FUN_0039a1f0(void)

{
  return;
}



/* Entry: 0039a208; end: 0039a30b;  */

void FUN_0039a208(long *param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar4;
  uint uVar5;
  ulong *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  char cStack_30;
  long lStack_28;
  long *plVar3;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (ulong *)*param_1;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  cStack_30 = (char)param_3[6] != '\0';
  if ((bool)cStack_30) {
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
    uStack_58 = param_3[1];
    uStack_40 = param_3[4];
    uStack_48 = param_3[3];
    uStack_38 = (undefined4)param_3[5];
    *param_3 = (ulong)&UNK_009deea0;
  }
  param_2 = param_2 & 0xffffffff;
  FUN_0039a3dc(puVar1,param_1,param_2,&uStack_60);
  if (cStack_30 != '\0') {
    puVar1 = &uStack_58;
    (**(code **)(uStack_60 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_1 == 0) {
    __Unwind_Resume(puVar1);
  }
  func_0x0040cf10();
  *(undefined4 *)(extraout_x8 + 5) = 0;
  uVar6 = *puVar1;
  *extraout_x8 = uVar6;
  uVar7 = puVar1[1];
  extraout_x8[2] = puVar1[2];
  extraout_x8[1] = uVar7;
  uVar7 = puVar1[3];
  extraout_x8[4] = puVar1[4];
  extraout_x8[3] = uVar7;
  if (*(code **)(uVar6 + 0x38) == (code *)0x0) {
    iVar2 = (int)*(undefined8 *)(uVar6 + 0x30);
  }
  else {
    plVar3 = param_1;
    (**(code **)(uVar6 + 0x38))(puVar1 + 1);
    iVar2 = (int)plVar3;
  }
  if (*param_1 == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  *(uint *)(extraout_x8 + 5) = iVar2 + uVar5 + 0x20;
  (**(code **)(*puVar1 + 0x18))(param_1,param_2,puVar4,extraout_x8);
  return;
}



/* Entry: 0039a30c; end: 0039a3db;  */

void FUN_0039a30c(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 5) = 0;
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar5;
  lVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar5;
  if (*(code **)(lVar4 + 0x38) == (code *)0x0) {
    iVar1 = (int)*(undefined8 *)(lVar4 + 0x30);
  }
  else {
    plVar2 = param_3;
    (**(code **)(lVar4 + 0x38))(param_2 + 1);
    iVar1 = (int)plVar2;
  }
  if (*param_3 == 0) {
    uVar3 = (uint)*(byte *)(param_3 + 1);
  }
  else {
    uVar3 = (uint)param_3[1];
  }
  *(uint *)(param_1 + 5) = iVar1 + uVar3 + 0x20;
  (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5,param_1);
  return;
}



/* Entry: 0039a3dc; end: 0039a4c3;  */

void FUN_0039a3dc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_2 + 0x20) != 0) || (*(char *)(param_2 + 0x28) != '\0')) goto LAB_0039a454;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_0039a4c4(&uStack_48,&uStack_40);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (uStack_48 == uVar1) {
LAB_0039a444:
    if ((uVar1 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *(ulong *)(param_2 + 0x20) = uStack_48;
    uStack_48 = 0x36;
    if ((uVar1 & 1) != 0) {
      FUN_0055293c();
      uVar1 = uStack_48;
      goto LAB_0039a444;
    }
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
LAB_0039a454:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_5 + 6) != '\0') {
    *param_1 = *param_5;
    uVar2 = param_5[1];
    param_1[2] = param_5[2];
    param_1[1] = uVar2;
    uVar2 = param_5[3];
    param_1[4] = param_5[4];
    param_1[3] = uVar2;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 5);
    *param_5 = &UNK_009deea0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 0039a4c4; end: 0039a5b7;  */

void FUN_0039a4c4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  lVar1 = *param_2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_003b646c(&uStack_48,2,"Invalid HPACK index received",0x1c,&uStack_49,&uStack_68);
  FUN_003be104(&uStack_40,&uStack_48,5,(int)param_2[1]);
  FUN_003be104(param_1,&uStack_40,6,*(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14));
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = &uStack_68;
  FUN_0033d548(&puStack_38);
  return;
}



/* Entry: 0039a5b8; end: 0039a5df;  */

void FUN_0039a5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_0039a5e0(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 0039a5e0; end: 0039a64b;  */

void FUN_0039a5e0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  lVar5 = *(long *)*param_1;
  if (*(code **)(lVar5 + 0x38) == (code *)0x0) {
    plVar4 = *(long **)(lVar5 + 0x28);
    param_2 = *(undefined8 **)(lVar5 + 0x30);
  }
  else {
    plVar4 = (long *)*param_1 + 1;
    (**(code **)(lVar5 + 0x38))();
  }
  lStack_38 = (long)param_3 + 9;
  if (*param_3 != 0) {
    lStack_38 = param_3[2];
  }
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  plStack_58 = plVar4;
  puStack_50 = param_2;
  FUN_00575fc4(apcStack_a0,&pcStack_88,6);
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar3 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    if (cStack_89 < '\0') {
      __ZdlPv(apcStack_a0[0]);
    }
    __Unwind_Resume(pcVar3);
    return;
  }
  return;
}



/* Entry: 0039a64c; end: 0039a72b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0039a64c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_003b646c(auStack_60,2,"More than two max table size changes in a single frame",0x36,&uStack_39
               ,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  FUN_0033d548(&puStack_38);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_0039a6e0;
    FUN_0055293c();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a6e0:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 0039a72c; end: 0039a773;  */

void FUN_0039a72c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x28) == '\0')) {
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) {
        piVar4 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar3 = *param_2;
      }
      *(ulong *)(param_1 + 0x20) = uVar3;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 0039a774; end: 0039a80f;  */

undefined8 FUN_0039a774(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_3;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_3;
  }
  uStack_28 = param_2;
  FUN_0039a810(&uStack_30,&uStack_28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uStack_30 != uVar1) {
    *(ulong *)(param_1 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_0039a7dc;
    FUN_0055293c();
    uVar1 = uStack_30;
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a7dc:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_3;
}



/* Entry: 0039a810; end: 0039a923;  */

undefined8 **** FUN_0039a810(undefined8 param_1,uint *param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  undefined8 **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  undefined8 ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_48 = (undefined8 **)(ulong)*param_2;
  uStack_40 = 0x5606ec;
  uStack_38 = (ulong)(byte)param_2[1];
  uStack_30 = 0x560664;
  FUN_0056189c(&pppuStack_60,
               "integer overflow in hpack integer decoding: have 0x%08x, got byte 0x%02x on byte 5",
               0x52,&ppuStack_48,2);
  uVar5 = uStack_58;
  ppppuVar4 = (undefined8 ****)pppuStack_60;
  if (-1 < (char)bStack_49) {
    uVar5 = (ulong)bStack_49;
    ppppuVar4 = &pppuStack_60;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = (undefined8 *)0x0;
  ppppuVar6 = (undefined8 ****)&uStack_61;
  FUN_003b646c(param_1,2,ppppuVar4,uVar5,ppppuVar6,&puStack_80);
  ppppuVar1 = (undefined8 ****)&ppuStack_48;
  ppuStack_48 = &puStack_80;
  FUN_0033d548();
  if ((char)bStack_49 < '\0') {
    ppppuVar1 = (undefined8 ****)pppuStack_60;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  ppuStack_48 = &puStack_80;
  FUN_0033d548(&ppuStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(pppuStack_60);
  }
  ppppuVar2 = ppppuVar1;
  __Unwind_Resume();
  pcStack_88 = FUN_0039a924;
  if (ppppuVar2[4] != (undefined8 ***)0x0) {
    return ppppuVar6;
  }
  if (*(char *)(ppppuVar2 + 5) != '\0') {
    return ppppuVar6;
  }
  pppuStack_b0 = ppppuVar4;
  uStack_a8 = uVar5;
  puStack_a0 = (undefined1 *)&puStack_80;
  pppuStack_98 = ppppuVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_0039a9c0(&ppuStack_b8,&pppuStack_b0);
  pppuVar3 = ppppuVar2[4];
  if ((undefined8 ***)ppuStack_b8 != pppuVar3) {
    ppppuVar2[4] = (undefined8 ***)ppuStack_b8;
    ppuStack_b8 = (undefined8 ***)0x36;
    if (((ulong)pppuVar3 & 1) == 0) goto LAB_0039a98c;
    FUN_0055293c();
    pppuVar3 = (undefined8 ***)ppuStack_b8;
  }
  if (((ulong)pppuVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a98c:
  ppppuVar2[1] = ppppuVar2[2];
  return ppppuVar6;
}



/* Entry: 0039a924; end: 0039a9bf;  */

undefined8 FUN_0039a924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_4;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_4;
  }
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_0039a9c0(&uStack_38,&uStack_30);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uStack_38 != uVar1) {
    *(ulong *)(param_1 + 0x20) = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_0039a98c;
    FUN_0055293c();
    uVar1 = uStack_38;
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a98c:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_4;
}



/* Entry: 0039a9c0; end: 0039aab3;  */

void FUN_0039a9c0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  lVar1 = *param_2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_003b646c(&uStack_48,2,"Invalid HPACK index received",0x1c,&uStack_49,&uStack_68);
  FUN_003be104(&uStack_40,&uStack_48,5,(int)param_2[1]);
  FUN_003be104(param_1,&uStack_40,6,*(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14));
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = &uStack_68;
  FUN_0033d548(&puStack_38);
  return;
}



/* Entry: 0039aab4; end: 0039ac9b;  */

ulong * FUN_0039aab4(ulong *param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  
  puVar1 = param_2;
  if (0 < param_5) {
    puVar5 = (ulong *)param_1[1];
    if ((long)(param_1[2] - (long)puVar5) < param_5) {
      puVar10 = (ulong *)*param_1;
      puVar1 = (ulong *)((long)puVar5 + (param_5 - (long)puVar10));
      if ((long)puVar1 < 0) {
        FUN_003945d4();
        puVar1 = param_1;
        if (param_4 != 0) {
          FUN_0039ad14();
          puVar5 = (ulong *)param_1[1];
          param_3 = param_3 - (long)param_2;
          if (param_3 != 0) {
            puVar1 = puVar5;
            _memmove(puVar5,param_2,param_3);
          }
          param_1[1] = (long)puVar5 + param_3;
        }
        return puVar1;
      }
      lVar9 = (long)param_2 - (long)puVar10;
      uVar2 = param_1[2] - (long)puVar10;
      puVar3 = (ulong *)(uVar2 * 2);
      if (puVar3 < puVar1 || (long)puVar3 - (long)puVar1 == 0) {
        puVar3 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar2) {
        puVar3 = (ulong *)0x7fffffffffffffff;
      }
      if (puVar3 == (ulong *)0x0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        puVar8 = puVar3;
        __Znwm();
      }
      puVar1 = (ulong *)((long)puVar8 + lVar9);
      _memcpy(puVar1,param_3,param_5);
      puVar7 = puVar1;
      if (puVar10 != param_2) {
        do {
          *(undefined1 *)((long)puVar8 + lVar9 + -1) = *(undefined1 *)((long)puVar10 + lVar9 + -1);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = (ulong *)param_1[1];
        puVar7 = puVar8;
      }
      if (puVar5 != param_2) {
        _memmove((undefined1 *)((long)puVar1 + param_5),param_2,(long)puVar5 - (long)param_2);
      }
      uVar2 = *param_1;
      *param_1 = (ulong)puVar7;
      param_1[1] = (ulong)((undefined1 *)((long)puVar1 + param_5) + ((long)puVar5 - (long)param_2));
      param_1[2] = (ulong)((long)puVar8 + (long)puVar3);
      if (uVar2 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar9 = (long)puVar5 - (long)param_2;
      if (lVar9 < param_5) {
        lVar6 = param_3 + lVar9;
        param_4 = param_4 - lVar6;
        if (param_4 != 0) {
          _memmove(puVar5,lVar6,param_4);
        }
        param_1[1] = (ulong)((long)puVar5 + param_4);
        puVar10 = (ulong *)((long)puVar5 + param_4);
        if (lVar9 < 1) {
          return param_2;
        }
      }
      else {
        lVar6 = param_3 + param_5;
        puVar10 = puVar5;
      }
      puVar3 = puVar10;
      if ((ulong *)((long)puVar10 - param_5) < puVar5) {
        puVar4 = (undefined1 *)((long)puVar5 + (param_5 - (long)puVar10));
        puVar5 = (ulong *)((long)puVar10 - param_5);
        puVar8 = puVar10;
        do {
          puVar3 = (ulong *)((long)puVar8 + 1);
          *(char *)puVar8 = (char)*puVar5;
          puVar4 = puVar4 + -1;
          puVar5 = (ulong *)((long)puVar5 + 1);
          puVar8 = puVar3;
        } while (puVar4 != (undefined1 *)0x0);
      }
      param_1[1] = (ulong)puVar3;
      if (puVar10 != (ulong *)((long)param_2 + param_5)) {
        _memmove((ulong *)((long)param_2 + param_5),param_2);
      }
      if (lVar6 - param_3 != 0) {
        _memmove(param_2,param_3,lVar6 - param_3);
      }
    }
  }
  return puVar1;
}



/* Entry: 0039ac9c; end: 0039ad13;  */

void FUN_0039ac9c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_0039ad14(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 0039ad14; end: 0039ad53;  */

uint * FUN_0039ad14(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (-1 < (long)param_2) {
    puVar5 = param_2;
    __Znwm();
    *(uint **)param_1 = puVar5;
    *(uint **)(param_1 + 2) = puVar5;
    *(long *)(param_1 + 4) = (long)puVar5 + (long)param_2;
    return puVar5;
  }
  puVar5 = param_1;
  FUN_003945d4();
  ppuVar4 = &puStack_30;
  ppuVar13 = &puStack_30;
  pcStack_28 = FUN_0039ad54;
  uVar7 = puVar5[1];
  uVar2 = puVar5[2];
  puStack_30 = &stack0xfffffffffffffff0;
  if (uVar7 < uVar2) {
    lVar9 = *(long *)(puVar5 + 4);
    if ((ulong)uVar2 <= (ulong)((*(long *)(puVar5 + 6) - lVar9 >> 4) * -0x5555555555555555)) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (*puVar5 + uVar7) / uVar2;
      }
      puVar8 = (undefined8 *)(lVar9 + (ulong)((*puVar5 + uVar7) - uVar3 * uVar2) * 0x30);
      *puVar8 = *(undefined8 *)param_2;
      uVar16 = *(undefined8 *)(param_2 + 4);
      uVar15 = *(undefined8 *)(param_2 + 2);
      uVar17 = *(undefined8 *)(param_2 + 6);
      puVar8[4] = *(undefined8 *)(param_2 + 8);
      puVar8[3] = uVar17;
      puVar8[2] = uVar16;
      puVar8[1] = uVar15;
      *(uint *)(puVar8 + 5) = param_2[10];
      *(undefined **)param_2 = &UNK_009deea0;
      puVar5[1] = puVar5[1] + 1;
      return puVar5;
    }
    puVar5[1] = uVar7 + 1;
    ppuVar4 = (undefined1 **)&stack0xffffffffffffffe0;
    pcVar14 = FUN_0039ad54;
    puVar5 = puVar5 + 4;
    ppuVar13 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    pcVar14 = FUN_0039adfc;
    func_0x00773164();
  }
  *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
  *(uint **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar13;
  *(code **)((long)ppuVar4 + -8) = pcVar14;
  puVar6 = puVar5 + 4;
  puVar8 = *(undefined8 **)(puVar5 + 2);
  if (puVar8 < *(undefined8 **)puVar6) {
    *puVar8 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 2);
    uVar17 = *(undefined8 *)(param_2 + 6);
    puVar8[4] = *(undefined8 *)(param_2 + 8);
    puVar8[3] = uVar17;
    puVar8[2] = uVar16;
    puVar8[1] = uVar15;
    *(uint *)(puVar8 + 5) = param_2[10];
    *(undefined **)param_2 = &UNK_009deea0;
    puVar8 = puVar8 + 6;
    *(undefined8 **)(puVar5 + 2) = puVar8;
  }
  else {
    lVar9 = (long)puVar8 - *(long *)puVar5 >> 4;
    uVar1 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_0039ba2c();
      uVar7 = (uint)param_2;
      FUN_0039bbac((undefined1 *)((long)ppuVar4 + -0x58));
      __Unwind_Resume();
      *(undefined1 **)((long)ppuVar4 + -0x70) = (undefined1 *)((long)ppuVar4 + -0x10);
      *(code **)((long)ppuVar4 + -0x68) = FUN_0039af50;
      if (puVar5[1] != 0) {
        uVar7 = *puVar5;
        uVar2 = puVar5[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar7 / uVar2;
        }
        *puVar5 = uVar7 + 1;
        puVar5[1] = puVar5[1] - 1;
        puVar8 = (undefined8 *)(*(long *)(puVar5 + 4) + (ulong)(uVar7 - uVar3 * uVar2) * 0x30);
        *extraout_x8 = *puVar8;
        uVar15 = puVar8[1];
        extraout_x8[2] = puVar8[2];
        extraout_x8[1] = uVar15;
        uVar15 = puVar8[3];
        extraout_x8[4] = puVar8[4];
        extraout_x8[3] = uVar15;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(puVar8 + 5);
        *puVar8 = &UNK_009deea0;
        return puVar5;
      }
      func_0x0077319c();
      if (uVar7 < puVar5[1]) {
        uVar7 = puVar5[1] + ~uVar7 + *puVar5;
        uVar2 = puVar5[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar7 / uVar2;
        }
        return (uint *)(*(long *)(puVar5 + 4) + (ulong)(uVar7 - uVar3 * uVar2) * 0x30);
      }
      return (uint *)0x0;
    }
    lVar11 = (long)*(undefined8 **)puVar6 - *(long *)puVar5 >> 4;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
      uVar12 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0x555555555555555;
    }
    *(uint **)((long)ppuVar4 + -0x38) = puVar6;
    FUN_0039ba40();
    puVar10 = puVar6 + lVar9 * 4;
    *(uint **)((long)ppuVar4 + -0x58) = puVar6;
    *(uint **)((long)ppuVar4 + -0x50) = puVar10;
    *(uint **)((long)ppuVar4 + -0x40) = puVar6 + uVar12 * 0xc;
    *(undefined8 *)puVar10 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 2);
    uVar17 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar10 + 6) = uVar17;
    *(undefined8 *)(puVar10 + 4) = uVar16;
    *(undefined8 *)(puVar10 + 2) = uVar15;
    puVar10[10] = param_2[10];
    *(undefined **)param_2 = &UNK_009deea0;
    *(uint **)((long)ppuVar4 + -0x48) = puVar10 + 0xc;
    FUN_0039b9b8(puVar5,(undefined1 *)((long)ppuVar4 + -0x58));
    puVar8 = *(undefined8 **)(puVar5 + 2);
    puVar6 = (uint *)((long)ppuVar4 + -0x58);
    FUN_0039bbac(puVar6);
  }
  *(undefined8 **)(puVar5 + 2) = puVar8;
  return puVar6;
}



/* Entry: 0039ad54; end: 0039adfb;  */

uint * FUN_0039ad54(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  code *unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar4 = &stack0xfffffffffffffff0;
  puVar12 = &stack0xfffffffffffffff0;
  uVar6 = param_1[1];
  uVar2 = param_1[2];
  if (uVar6 < uVar2) {
    lVar8 = *(long *)(param_1 + 4);
    if ((ulong)uVar2 <= (ulong)((*(long *)(param_1 + 6) - lVar8 >> 4) * -0x5555555555555555)) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (*param_1 + uVar6) / uVar2;
      }
      puVar7 = (undefined8 *)(lVar8 + (ulong)((*param_1 + uVar6) - uVar3 * uVar2) * 0x30);
      *puVar7 = *param_2;
      uVar14 = param_2[2];
      uVar13 = param_2[1];
      uVar15 = param_2[3];
      puVar7[4] = param_2[4];
      puVar7[3] = uVar15;
      puVar7[2] = uVar14;
      puVar7[1] = uVar13;
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_2 + 5);
      *param_2 = &UNK_009deea0;
      param_1[1] = param_1[1] + 1;
      return param_1;
    }
    param_1[1] = uVar6 + 1;
    puVar4 = (undefined1 *)register0x00000008;
    param_1 = param_1 + 4;
    puVar12 = unaff_x29;
  }
  else {
    unaff_x30 = FUN_0039adfc;
    func_0x00773164();
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(code **)(puVar4 + -8) = unaff_x30;
  puVar5 = param_1 + 4;
  puVar7 = *(undefined8 **)(param_1 + 2);
  if (puVar7 < *(undefined8 **)puVar5) {
    *puVar7 = *param_2;
    uVar14 = param_2[2];
    uVar13 = param_2[1];
    uVar15 = param_2[3];
    puVar7[4] = param_2[4];
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
    puVar7[1] = uVar13;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_2 + 5);
    *param_2 = &UNK_009deea0;
    puVar7 = puVar7 + 6;
    *(undefined8 **)(param_1 + 2) = puVar7;
  }
  else {
    lVar8 = (long)puVar7 - *(long *)param_1 >> 4;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_0039ba2c();
      uVar6 = (uint)param_2;
      FUN_0039bbac(puVar4 + -0x58);
      __Unwind_Resume();
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
      *(code **)(puVar4 + -0x68) = FUN_0039af50;
      if (param_1[1] != 0) {
        uVar6 = *param_1;
        uVar2 = param_1[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        *param_1 = uVar6 + 1;
        param_1[1] = param_1[1] - 1;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)(uVar6 - uVar3 * uVar2) * 0x30);
        *extraout_x8 = *puVar7;
        uVar13 = puVar7[1];
        extraout_x8[2] = puVar7[2];
        extraout_x8[1] = uVar13;
        uVar13 = puVar7[3];
        extraout_x8[4] = puVar7[4];
        extraout_x8[3] = uVar13;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(puVar7 + 5);
        *puVar7 = &UNK_009deea0;
        return param_1;
      }
      func_0x0077319c();
      if (uVar6 < param_1[1]) {
        uVar6 = param_1[1] + ~uVar6 + *param_1;
        uVar2 = param_1[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        return (uint *)(*(long *)(param_1 + 4) + (ulong)(uVar6 - uVar3 * uVar2) * 0x30);
      }
      return (uint *)0x0;
    }
    lVar10 = (long)*(undefined8 **)puVar5 - *(long *)param_1 >> 4;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    *(uint **)(puVar4 + -0x38) = puVar5;
    FUN_0039ba40();
    puVar9 = puVar5 + lVar8 * 4;
    *(uint **)(puVar4 + -0x58) = puVar5;
    *(uint **)(puVar4 + -0x50) = puVar9;
    *(uint **)(puVar4 + -0x40) = puVar5 + uVar11 * 0xc;
    *(undefined8 *)puVar9 = *param_2;
    uVar14 = param_2[2];
    uVar13 = param_2[1];
    uVar15 = param_2[3];
    *(undefined8 *)(puVar9 + 8) = param_2[4];
    *(undefined8 *)(puVar9 + 6) = uVar15;
    *(undefined8 *)(puVar9 + 4) = uVar14;
    *(undefined8 *)(puVar9 + 2) = uVar13;
    puVar9[10] = *(uint *)(param_2 + 5);
    *param_2 = &UNK_009deea0;
    *(uint **)(puVar4 + -0x48) = puVar9 + 0xc;
    FUN_0039b9b8(param_1,puVar4 + -0x58);
    puVar7 = *(undefined8 **)(param_1 + 2);
    puVar5 = (uint *)(puVar4 + -0x58);
    FUN_0039bbac(puVar5);
  }
  *(undefined8 **)(param_1 + 2) = puVar7;
  return puVar5;
}



/* Entry: 0039adfc; end: 0039af4f;  */

uint ***** FUN_0039adfc(uint *****param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *****pppppuVar4;
  uint uVar5;
  undefined8 *extraout_x8;
  uint ****ppppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint ***pppuVar10;
  uint ***pppuVar11;
  uint ****ppppuVar12;
  uint ***pppuVar13;
  uint ****ppppuVar14;
  uint ****ppppuStack_58;
  uint ****ppppuStack_50;
  uint ****ppppuStack_48;
  uint ****ppppuStack_40;
  uint ****ppppuStack_38;
  
  pppppuVar4 = param_1 + 2;
  ppppuVar6 = param_1[1];
  if (ppppuVar6 < *pppppuVar4) {
    *ppppuVar6 = (uint ***)*param_2;
    pppuVar11 = (uint ***)param_2[2];
    pppuVar10 = (uint ***)param_2[1];
    pppuVar13 = (uint ***)param_2[3];
    ppppuVar6[4] = (uint ***)param_2[4];
    ppppuVar6[3] = pppuVar13;
    ppppuVar6[2] = pppuVar11;
    ppppuVar6[1] = pppuVar10;
    *(undefined4 *)(ppppuVar6 + 5) = *(undefined4 *)(param_2 + 5);
    *param_2 = &UNK_009deea0;
    ppppuVar6 = ppppuVar6 + 6;
    param_1[1] = ppppuVar6;
  }
  else {
    lVar7 = (long)ppppuVar6 - (long)*param_1 >> 4;
    uVar1 = lVar7 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_0039ba2c();
      uVar5 = (uint)param_2;
      FUN_0039bbac(&ppppuStack_58);
      __Unwind_Resume();
      if (*(uint *)((long)param_1 + 4) != 0) {
        uVar5 = *(uint *)param_1;
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        *(uint *)param_1 = uVar5 + 1;
        *(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) - 1;
        ppppuVar6 = param_1[2] + (ulong)(uVar5 - uVar3 * uVar2) * 6;
        *extraout_x8 = *ppppuVar6;
        pppuVar10 = ppppuVar6[1];
        extraout_x8[2] = ppppuVar6[2];
        extraout_x8[1] = pppuVar10;
        pppuVar10 = ppppuVar6[3];
        extraout_x8[4] = ppppuVar6[4];
        extraout_x8[3] = pppuVar10;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(ppppuVar6 + 5);
        *ppppuVar6 = (uint ***)&UNK_009deea0;
        return param_1;
      }
      func_0x0077319c();
      if (uVar5 < *(uint *)((long)param_1 + 4)) {
        uVar5 = *(uint *)((long)param_1 + 4) + ~uVar5 + *(uint *)param_1;
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        return (uint *****)(param_1[2] + (ulong)(uVar5 - uVar3 * uVar2) * 6);
      }
      return (uint *****)0x0;
    }
    lVar8 = (long)*pppppuVar4 - (long)*param_1 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    ppppuStack_38 = (uint ****)pppppuVar4;
    FUN_0039ba40();
    ppppuStack_50 = (uint ****)(pppppuVar4 + lVar7 * 2);
    ppppuStack_40 = (uint ****)(pppppuVar4 + uVar9 * 6);
    *ppppuStack_50 = (uint ***)*param_2;
    ppppuVar12 = (uint ****)param_2[2];
    ppppuVar6 = (uint ****)param_2[1];
    ppppuVar14 = (uint ****)param_2[3];
    ppppuStack_50[4] = (uint ***)param_2[4];
    ppppuStack_50[3] = (uint ***)ppppuVar14;
    ppppuStack_50[2] = (uint ***)ppppuVar12;
    ppppuStack_50[1] = (uint ***)ppppuVar6;
    *(uint *)(ppppuStack_50 + 5) = *(uint *)(param_2 + 5);
    *param_2 = &UNK_009deea0;
    ppppuStack_48 = ppppuStack_50 + 6;
    ppppuStack_58 = (uint ****)pppppuVar4;
    FUN_0039b9b8(param_1,&ppppuStack_58);
    ppppuVar6 = param_1[1];
    pppppuVar4 = &ppppuStack_58;
    FUN_0039bbac(pppppuVar4);
  }
  param_1[1] = ppppuVar6;
  return pppppuVar4;
}



/* Entry: 0039af50; end: 0039afbf;  */

uint * FUN_0039af50(undefined8 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2[1] != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *param_2 = uVar1 + 1;
    param_2[1] = param_2[1] - 1;
    puVar4 = (undefined8 *)(*(long *)(param_2 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30);
    *param_1 = *puVar4;
    uVar5 = puVar4[1];
    param_1[2] = puVar4[2];
    param_1[1] = uVar5;
    uVar5 = puVar4[3];
    param_1[4] = puVar4[4];
    param_1[3] = uVar5;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar4 + 5);
    *puVar4 = &UNK_009deea0;
    return param_2;
  }
  func_0x0077319c();
  if (param_3 < param_2[1]) {
    uVar1 = param_2[1] + ~param_3 + *param_2;
    uVar2 = param_2[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    return (uint *)(*(long *)(param_2 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30);
  }
  return (uint *)0x0;
}



/* Entry: 0039afc0; end: 0039afff;  */

long FUN_0039afc0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < (uint)param_1[1]) {
    uVar1 = param_1[1] + ~param_2 + *param_1;
    uVar2 = param_1[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    return *(long *)(param_1 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30;
  }
  return 0;
}



/* Entry: 0039b000; end: 0039b0ef;  */

void FUN_0039b000(uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (param_1[2] != param_2) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_0039b0f0(&uStack_50,param_1[1]);
    if (param_1[1] != 0) {
      uVar4 = 0;
      do {
        uVar2 = (*(long *)(param_1 + 6) - *(long *)(param_1 + 4) >> 4) * -0x5555555555555555;
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = (uVar4 + *param_1) / uVar2;
        }
        FUN_0039adfc(&uStack_50,*(long *)(param_1 + 4) + ((uVar4 + *param_1) - uVar1 * uVar2) * 0x30
                    );
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_1[1]);
    }
    *param_1 = 0;
    uVar6 = *(undefined8 *)(param_1 + 6);
    uVar5 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 6) = uStack_48;
    *(undefined8 *)(param_1 + 4) = uStack_50;
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uStack_40;
    uStack_50 = uVar5;
    uStack_48 = uVar6;
    uStack_40 = uVar3;
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_0039bc24(&puStack_38);
  }
  return;
}



/* Entry: 0039b0f0; end: 0039b19f;  */

long *** FUN_0039b0f0(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = param_1 + 2;
  pplVar2 = *param_1;
  if ((ulong)(((long)*ppplVar1 - (long)pplVar2 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_0039ba2c();
      FUN_0039bbac(&pplStack_48);
      __Unwind_Resume();
      *param_1 = (long **)0x100000000000;
      *(undefined4 *)(param_1 + 1) = 0x1000;
      param_1[2] = (long **)0x0;
      *(undefined4 *)(param_1 + 3) = 0x80;
      param_1[4] = (long **)0x0;
      param_1[5] = (long **)0x0;
      param_1[6] = (long **)0x0;
      ppplVar1 = param_1;
      FUN_0039b214();
      param_1[7] = (long **)ppplVar1;
      return param_1;
    }
    pplVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_0039ba40();
    lStack_40 = (long)ppplVar1 + ((long)pplVar3 - (long)pplVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2 * 6);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_0039b9b8(param_1,&pplStack_48);
    ppplVar1 = &pplStack_48;
    FUN_0039bbac(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 0039b1a0; end: 0039b213;  */

undefined8 * FUN_0039b1a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0x100000000000;
  *(undefined4 *)(param_1 + 1) = 0x1000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1;
  FUN_0039b214();
  param_1[7] = puVar1;
  return param_1;
}



/* Entry: 0039b214; end: 0039b29f;  */

undefined8 FUN_0039b214(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000000b5e780 & 1) == 0) {
    iVar1 = 0xb5e780;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0xb70;
      __Znwm();
      FUN_0039b77c();
      uRam0000000000b5e778 = uVar2;
      ___cxa_guard_release(0xb5e780);
    }
  }
  return uRam0000000000b5e778;
}



/* Entry: 0039b2a0; end: 0039b2a3;  */

undefined8 * FUN_0039b2a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0x100000000000;
  *(undefined4 *)(param_1 + 1) = 0x1000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1;
  FUN_0039b214();
  param_1[7] = puVar1;
  return param_1;
}



/* Entry: 0039b2a4; end: 0039b2db;  */

long FUN_0039b2a4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x20;
  FUN_0039bc24(&lStack_28);
  return param_1;
}



/* Entry: 0039b2dc; end: 0039b3cf;  */

void FUN_0039b2dc(uint *param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  long lStack_58;
  uint auStack_50 [8];
  uint uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0039af50(&lStack_58,param_1 + 4);
  if (*param_1 < uStack_30) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser_table.cc"
                 ,0x58,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x39b38c);
    (*pcVar1)();
  }
  *param_1 = *param_1 - uStack_30;
  puVar2 = auStack_50;
  (**(code **)(lStack_58 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume(puVar2);
    }
    func_0x0040cf10();
    if (puVar2[1] != param_2) {
      while (param_2 < *puVar2) {
        FUN_0039b2dc(puVar2);
      }
      puVar2[1] = param_2;
    }
    return;
  }
  return;
}



/* Entry: 0039b3d0; end: 0039b417;  */

void FUN_0039b3d0(uint *param_1,uint param_2)

{
  if (param_1[1] != param_2) {
    while (param_2 < *param_1) {
      FUN_0039b2dc(param_1);
    }
    param_1[1] = param_2;
  }
  return;
}



/* Entry: 0039b418; end: 0039b587;  */

uint ***** FUN_0039b418(undefined8 *param_1,uint *****param_2,uint *****param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint *****pppppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint *****pppppuVar9;
  uint uVar10;
  int iVar11;
  uint *****pppppuVar12;
  undefined8 in_x7;
  uint uVar13;
  undefined8 *extraout_x8;
  long lVar14;
  undefined8 extraout_x8_00;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint uVar17;
  uint *****unaff_x20;
  undefined1 ****ppppuStack_250;
  code *pcStack_248;
  undefined1 uStack_239;
  uint ****ppppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_218;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  uint ***pppuStack_1c8;
  uint ***pppuStack_1c0;
  uint ***pppuStack_1b8;
  uint ***pppuStack_1b0;
  uint ***pppuStack_1a8;
  uint uStack_1a0;
  long lStack_198;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  uint ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_131;
  uint ****ppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  uint ***pppuStack_118;
  uint ***pppuStack_110;
  uint ***pppuStack_108;
  uint ***pppuStack_100;
  uint ***pppuStack_f8;
  uint uStack_f0;
  uint ****ppppuStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  uint ****ppppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  uint ****ppppuStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = (uint)param_3;
  pppppuVar12 = param_3;
  if (*(uint *)(param_2 + 1) != uVar10) {
    if (*(uint *)((long)param_2 + 4) < uVar10) {
      ppppuStack_58 = (uint ****)((ulong)param_3 & 0xffffffff);
      uStack_50 = 0x5606ec;
      uStack_40 = 0x5606ec;
      uStack_48 = (ulong)*(uint *)((long)param_2 + 4);
      FUN_0056189c(&ppppuStack_70,"Attempt to make hpack table %d bytes when max is %d bytes",0x39,
                   &ppppuStack_58,2);
      pppppuVar12 = (uint *****)ppppuStack_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        pppppuVar12 = &ppppuStack_70;
      }
      uStack_88 = 0;
      uStack_80 = 0;
      pppuStack_90 = (uint ***)0x0;
      FUN_003b646c(param_1,2,pppppuVar12,uStack_68,&uStack_71,&pppuStack_90);
      param_2 = &ppppuStack_58;
      ppppuStack_58 = &pppuStack_90;
      FUN_0033d548();
      unaff_x20 = (uint *****)&pppuStack_90;
      if ((char)bStack_59 < '\0') {
        param_2 = (uint *****)ppppuStack_70;
        __ZdlPv();
        unaff_x20 = (uint *****)&pppuStack_90;
      }
      goto LAB_0039b528;
    }
    while (uVar10 < *(uint *)param_2) {
      FUN_0039b2dc(param_2);
    }
    *(uint *)(param_2 + 1) = uVar10;
    uVar10 = uVar10 + 0x1f >> 5;
    if (uVar10 < 0x81) {
      uVar10 = 0x80;
    }
    pppppuVar12 = (uint *****)(ulong)uVar10;
    param_2 = param_2 + 2;
    FUN_0039b000();
    unaff_x20 = param_3;
  }
  *param_1 = 0;
LAB_0039b528:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  ppppuStack_58 = (uint ****)unaff_x20;
  FUN_0033d548(&ppppuStack_58);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppppuStack_70);
  }
  __Unwind_Resume();
  pcStack_98 = FUN_0039b588;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *(uint *)(param_2 + 1);
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(uint *)((long)param_2 + 4) < uVar10) {
    uStack_e0 = 0x5606ec;
    uStack_d0 = 0x5606ec;
    ppppuStack_e8 = (uint ****)(ulong)*(uint *)((long)param_2 + 4);
    uStack_d8 = (ulong)uVar10;
    FUN_0056189c(&ppppuStack_130,
                 "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)"
                 ,0x52,&ppppuStack_e8,2);
    pppppuVar12 = (uint *****)ppppuStack_130;
    if (-1 < (char)bStack_119) {
      uStack_128 = (ulong)bStack_119;
      pppppuVar12 = &ppppuStack_130;
    }
    uStack_148 = 0;
    uStack_140 = 0;
    pppuStack_150 = (uint ***)0x0;
    FUN_003b646c(extraout_x8,2,pppppuVar12,uStack_128,&uStack_131,&pppuStack_150);
    pppppuVar5 = &ppppuStack_e8;
    ppppuStack_e8 = &pppuStack_150;
    FUN_0033d548();
    pppppuVar9 = (uint *****)&pppuStack_150;
    if ((char)bStack_119 < '\0') {
      pppppuVar5 = (uint *****)ppppuStack_130;
      __ZdlPv();
      pppppuVar9 = (uint *****)&pppuStack_150;
    }
  }
  else {
    uVar13 = *(uint *)(pppppuVar12 + 5);
    pppppuVar5 = param_2;
    if (uVar10 < uVar13) {
      while (pppppuVar9 = param_2, *(uint *)((long)param_2 + 0x14) != 0) {
        pppppuVar5 = param_2;
        FUN_0039b2dc();
      }
    }
    else {
      uVar17 = *(uint *)param_2;
      if ((ulong)uVar10 - (ulong)uVar17 < (ulong)uVar13) {
        do {
          FUN_0039b2dc(param_2);
          uVar13 = *(uint *)(pppppuVar12 + 5);
          uVar17 = *(uint *)param_2;
        } while ((ulong)*(uint *)(param_2 + 1) - (ulong)uVar17 < (ulong)uVar13);
      }
      pppppuVar9 = param_2 + 2;
      *(uint *)param_2 = uVar17 + uVar13;
      pppuStack_118 = (uint ***)*pppppuVar12;
      pppppuVar5 = (uint *****)&pppuStack_110;
      pppuStack_108 = (uint ***)pppppuVar12[2];
      pppuStack_110 = (uint ***)pppppuVar12[1];
      pppuStack_f8 = (uint ***)pppppuVar12[4];
      pppuStack_100 = (uint ***)pppppuVar12[3];
      *pppppuVar12 = (uint ****)&UNK_009deea0;
      pppppuVar12 = (uint *****)&pppuStack_118;
      uStack_f0 = uVar13;
      FUN_0039ad54(pppppuVar9);
      (*(code *)pppuStack_118[1])();
    }
    *extraout_x8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar12 != 0) {
    func_0x0040cf10();
    ppppuStack_e8 = (uint ****)pppppuVar9;
    FUN_0033d548(&ppppuStack_e8);
    if ((char)bStack_119 < '\0') {
      __ZdlPv(ppppuStack_130);
    }
  }
  __Unwind_Resume();
  pcStack_158 = FUN_0039b77c;
  lVar14 = 0;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    *(undefined8 *)((long)pppppuVar5 + lVar14) = &UNK_009deea0;
    *(undefined4 *)((undefined8 *)((long)pppppuVar5 + lVar14) + 5) = 0;
    lVar14 = lVar14 + 0x30;
  } while (lVar14 != 0xb70);
  lVar14 = 0;
  pppppuVar9 = pppppuVar5;
  ppuStack_160 = &puStack_a0;
  do {
    FUN_0039b89c(&pppuStack_1c8,lVar14);
    *pppppuVar9 = (uint ****)pppuStack_1c8;
    pppppuVar9[2] = (uint ****)pppuStack_1b8;
    pppppuVar9[1] = (uint ****)pppuStack_1c0;
    pppppuVar9[4] = (uint ****)pppuStack_1a8;
    pppppuVar9[3] = (uint ****)pppuStack_1b0;
    *(uint *)(pppppuVar9 + 5) = uStack_1a0;
    pppuStack_1c8 = (uint ***)&UNK_009deea0;
    ppppuVar15 = &pppuStack_1c0;
    func_0x003ff2e4();
    iVar11 = (int)pppppuVar12;
    lVar14 = lVar14 + 1;
    pppppuVar9 = pppppuVar9 + 6;
  } while (lVar14 != 0x3d);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  if (iVar11 == 0) {
    __Unwind_Resume(ppppuVar15);
  }
  func_0x0040cf10();
  pcStack_1d8 = FUN_0039b89c;
  lStack_218 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined8 *)(&PTR_s__authority_009deee0)[(long)ppppuVar15 * 2];
  puVar2 = (&PTR_s__009deee8)[(long)ppppuVar15 * 2];
  puVar6 = puVar1;
  pppuStack_1e0 = &ppuStack_160;
  _strlen();
  puVar7 = puVar2;
  _strlen();
  ppppuStack_238 = (uint ****)((long)&MACH_HEADER.magic + 1);
  puVar8 = puVar1;
  puStack_230 = puVar7;
  puStack_228 = puVar2;
  _strlen(puVar1);
  FUN_00394054(extraout_x8_00,puVar1,puVar6,&ppppuStack_238,(int)puVar7 + (int)puVar8 + 0x20,
               &uStack_239,FUN_0039b9ac);
  pppppuVar12 = (uint *****)ppppuStack_238;
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < ppppuStack_238) {
    do {
      ppppuVar15 = (uint ****)*ppppuStack_238;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuStack_238,0x10);
      if (bVar4) {
        *ppppuStack_238 = (uint ***)((long)ppppuVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint ****)((long)ppppuVar15 + -1) == (uint ****)0x0) {
      (*(code *)ppppuStack_238[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_218) {
    ___stack_chk_fail();
    if ((int)puVar6 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&ppppuStack_238);
    }
    pppppuVar9 = pppppuVar12;
    __Unwind_Resume();
    pcStack_248 = FUN_0039b9ac;
    ppppuStack_250 = &pppuStack_1e0;
    _abort();
    pppppuVar5 = pppppuVar9 + 2;
    ppppuVar15 = pppppuVar9[1];
    func_0x0039ba84(pppppuVar5,ppppuVar15,ppppuVar15,*pppppuVar9,*pppppuVar9,puVar6[1],puVar6[1],
                    in_x7,puVar1,pppppuVar12,&ppppuStack_250,FUN_0039b9b8);
    puVar6[1] = ppppuVar15;
    ppppuVar16 = *pppppuVar9;
    *pppppuVar9 = ppppuVar15;
    puVar6[1] = ppppuVar16;
    ppppuVar15 = pppppuVar9[1];
    pppppuVar9[1] = (uint ****)puVar6[2];
    puVar6[2] = ppppuVar15;
    ppppuVar15 = pppppuVar9[2];
    pppppuVar9[2] = (uint ****)puVar6[3];
    puVar6[3] = ppppuVar15;
    *puVar6 = puVar6[1];
    return pppppuVar5;
  }
  return pppppuVar12;
}



/* Entry: 0039b588; end: 0039b77b;  */

uint ***** FUN_0039b588(undefined8 *param_1,uint *****param_2,uint *****param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  uint *****pppppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  int iVar12;
  undefined8 in_x7;
  uint uVar13;
  long lVar14;
  undefined8 extraout_x8;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint uVar17;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined1 uStack_1a9;
  uint ****ppppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  uint ***pppuStack_138;
  uint ***pppuStack_130;
  uint ***pppuStack_128;
  uint ***pppuStack_120;
  uint ***pppuStack_118;
  uint uStack_110;
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a1;
  uint ****ppppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  uint ***pppuStack_88;
  uint ***pppuStack_80;
  uint ***pppuStack_78;
  uint ***pppuStack_70;
  uint ***pppuStack_68;
  uint uStack_60;
  uint ****ppppuStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(uint *)(param_2 + 1);
  if (*(uint *)((long)param_2 + 4) < uVar1) {
    uStack_50 = 0x5606ec;
    uStack_40 = 0x5606ec;
    ppppuStack_58 = (uint ****)(ulong)*(uint *)((long)param_2 + 4);
    uStack_48 = (ulong)uVar1;
    FUN_0056189c(&ppppuStack_a0,
                 "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)"
                 ,0x52,&ppppuStack_58,2);
    param_3 = (uint *****)ppppuStack_a0;
    if (-1 < (char)bStack_89) {
      uStack_98 = (ulong)bStack_89;
      param_3 = &ppppuStack_a0;
    }
    uStack_b8 = 0;
    uStack_b0 = 0;
    pppuStack_c0 = (uint ***)0x0;
    FUN_003b646c(param_1,2,param_3,uStack_98,&uStack_a1,&pppuStack_c0);
    pppppuVar6 = &ppppuStack_58;
    ppppuStack_58 = &pppuStack_c0;
    FUN_0033d548();
    pppppuVar11 = (uint *****)&pppuStack_c0;
    if ((char)bStack_89 < '\0') {
      pppppuVar6 = (uint *****)ppppuStack_a0;
      __ZdlPv();
      pppppuVar11 = (uint *****)&pppuStack_c0;
    }
  }
  else {
    uVar13 = *(uint *)(param_3 + 5);
    pppppuVar6 = param_2;
    if (uVar1 < uVar13) {
      while (pppppuVar11 = param_2, *(uint *)((long)param_2 + 0x14) != 0) {
        pppppuVar6 = param_2;
        FUN_0039b2dc();
      }
    }
    else {
      uVar17 = *(uint *)param_2;
      if ((ulong)uVar1 - (ulong)uVar17 < (ulong)uVar13) {
        do {
          FUN_0039b2dc(param_2);
          uVar13 = *(uint *)(param_3 + 5);
          uVar17 = *(uint *)param_2;
        } while ((ulong)*(uint *)(param_2 + 1) - (ulong)uVar17 < (ulong)uVar13);
      }
      pppppuVar11 = param_2 + 2;
      *(uint *)param_2 = uVar17 + uVar13;
      pppuStack_88 = (uint ***)*param_3;
      pppppuVar6 = (uint *****)&pppuStack_80;
      pppuStack_78 = (uint ***)param_3[2];
      pppuStack_80 = (uint ***)param_3[1];
      pppuStack_68 = (uint ***)param_3[4];
      pppuStack_70 = (uint ***)param_3[3];
      *param_3 = (uint ****)&UNK_009deea0;
      param_3 = (uint *****)&pppuStack_88;
      uStack_60 = uVar13;
      FUN_0039ad54(pppppuVar11);
      (*(code *)pppuStack_88[1])();
    }
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppppuVar6;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    ppppuStack_58 = (uint ****)pppppuVar11;
    FUN_0033d548(&ppppuStack_58);
    if ((char)bStack_89 < '\0') {
      __ZdlPv(ppppuStack_a0);
    }
  }
  __Unwind_Resume();
  pcStack_c8 = FUN_0039b77c;
  lVar14 = 0;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    *(undefined8 *)((long)pppppuVar6 + lVar14) = &UNK_009deea0;
    *(undefined4 *)((undefined8 *)((long)pppppuVar6 + lVar14) + 5) = 0;
    lVar14 = lVar14 + 0x30;
  } while (lVar14 != 0xb70);
  lVar14 = 0;
  pppppuVar11 = pppppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  do {
    FUN_0039b89c(&pppuStack_138,lVar14);
    *pppppuVar11 = (uint ****)pppuStack_138;
    pppppuVar11[2] = (uint ****)pppuStack_128;
    pppppuVar11[1] = (uint ****)pppuStack_130;
    pppppuVar11[4] = (uint ****)pppuStack_118;
    pppppuVar11[3] = (uint ****)pppuStack_120;
    *(uint *)(pppppuVar11 + 5) = uStack_110;
    pppuStack_138 = (uint ***)&UNK_009deea0;
    ppppuVar15 = &pppuStack_130;
    func_0x003ff2e4();
    iVar12 = (int)param_3;
    lVar14 = lVar14 + 1;
    pppppuVar11 = pppppuVar11 + 6;
  } while (lVar14 != 0x3d);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return pppppuVar6;
  }
  ___stack_chk_fail();
  if (iVar12 == 0) {
    __Unwind_Resume(ppppuVar15);
  }
  func_0x0040cf10();
  pcStack_148 = FUN_0039b89c;
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = (undefined8 *)(&PTR_s__authority_009deee0)[(long)ppppuVar15 * 2];
  puVar3 = (&PTR_s__009deee8)[(long)ppppuVar15 * 2];
  puVar7 = puVar2;
  ppuStack_150 = &puStack_d0;
  _strlen();
  puVar8 = puVar3;
  _strlen();
  ppppuStack_1a8 = (uint ****)((long)&MACH_HEADER.magic + 1);
  puVar9 = puVar2;
  puStack_1a0 = puVar8;
  puStack_198 = puVar3;
  _strlen(puVar2);
  FUN_00394054(extraout_x8,puVar2,puVar7,&ppppuStack_1a8,(int)puVar8 + (int)puVar9 + 0x20,
               &uStack_1a9,FUN_0039b9ac);
  pppppuVar6 = (uint *****)ppppuStack_1a8;
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < ppppuStack_1a8) {
    do {
      ppppuVar15 = (uint ****)*ppppuStack_1a8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppuStack_1a8,0x10);
      if (bVar5) {
        *ppppuStack_1a8 = (uint ***)((long)ppppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uint ****)((long)ppppuVar15 + -1) == (uint ****)0x0) {
      (*(code *)ppppuStack_1a8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_188) {
    ___stack_chk_fail();
    if ((int)puVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&ppppuStack_1a8);
    }
    pppppuVar10 = pppppuVar6;
    __Unwind_Resume();
    pcStack_1b8 = FUN_0039b9ac;
    pppuStack_1c0 = &ppuStack_150;
    _abort();
    pppppuVar11 = pppppuVar10 + 2;
    ppppuVar15 = pppppuVar10[1];
    func_0x0039ba84(pppppuVar11,ppppuVar15,ppppuVar15,*pppppuVar10,*pppppuVar10,puVar7[1],puVar7[1],
                    in_x7,puVar2,pppppuVar6,&pppuStack_1c0,FUN_0039b9b8);
    puVar7[1] = ppppuVar15;
    ppppuVar16 = *pppppuVar10;
    *pppppuVar10 = ppppuVar15;
    puVar7[1] = ppppuVar16;
    ppppuVar15 = pppppuVar10[1];
    pppppuVar10[1] = (uint ****)puVar7[2];
    puVar7[2] = ppppuVar15;
    ppppuVar15 = pppppuVar10[2];
    pppppuVar10[2] = (uint ****)puVar7[3];
    puVar7[3] = ppppuVar15;
    *puVar7 = puVar7[1];
    return pppppuVar11;
  }
  return pppppuVar6;
}



/* Entry: 0039b77c; end: 0039b89b;  */

long * FUN_0039b77c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined8 in_x7;
  long lVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 uStack_e9;
  long *plStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lVar12 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    *(undefined8 *)((long)param_1 + lVar12) = &UNK_009deea0;
    *(undefined4 *)((undefined8 *)((long)param_1 + lVar12) + 5) = 0;
    lVar12 = lVar12 + 0x30;
  } while (lVar12 != 0xb70);
  lVar12 = 0;
  plVar9 = param_1;
  do {
    FUN_0039b89c(&puStack_78,lVar12);
    *plVar9 = (long)puStack_78;
    plVar9[2] = lStack_68;
    plVar9[1] = lStack_70;
    plVar9[4] = lStack_58;
    plVar9[3] = lStack_60;
    *(undefined4 *)(plVar9 + 5) = uStack_50;
    puStack_78 = &UNK_009deea0;
    plVar5 = &lStack_70;
    func_0x003ff2e4();
    iVar11 = (int)param_2;
    lVar12 = lVar12 + 1;
    plVar9 = plVar9 + 6;
  } while (lVar12 != 0x3d);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar11 == 0) {
    __Unwind_Resume(plVar5);
  }
  func_0x0040cf10();
  pcStack_88 = FUN_0039b89c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined8 *)(&PTR_s__authority_009deee0)[(long)plVar5 * 2];
  puVar2 = (&PTR_s__009deee8)[(long)plVar5 * 2];
  puVar6 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _strlen();
  puVar7 = puVar2;
  _strlen();
  plStack_e8 = (long *)((long)&MACH_HEADER.magic + 1);
  puVar8 = puVar1;
  puStack_e0 = puVar7;
  puStack_d8 = puVar2;
  _strlen(puVar1);
  FUN_00394054(extraout_x8,puVar1,puVar6,&plStack_e8,(int)puVar7 + (int)puVar8 + 0x20,&uStack_e9,
               FUN_0039b9ac);
  plVar9 = plStack_e8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
    do {
      lVar12 = *plStack_e8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
      if (bVar4) {
        *plStack_e8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_e8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return plVar9;
  }
  ___stack_chk_fail();
  if ((int)puVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_e8);
  }
  plVar10 = plVar9;
  __Unwind_Resume();
  pcStack_f8 = FUN_0039b9ac;
  ppuStack_100 = &puStack_90;
  _abort();
  plVar5 = plVar10 + 2;
  lVar12 = plVar10[1];
  func_0x0039ba84(plVar5,lVar12,lVar12,*plVar10,*plVar10,puVar6[1],puVar6[1],in_x7,puVar1,plVar9,
                  &ppuStack_100,FUN_0039b9b8);
  puVar6[1] = lVar12;
  lVar13 = *plVar10;
  *plVar10 = lVar12;
  puVar6[1] = lVar13;
  lVar12 = plVar10[1];
  plVar10[1] = puVar6[2];
  puVar6[2] = lVar12;
  lVar12 = plVar10[2];
  plVar10[2] = puVar6[3];
  puVar6[3] = lVar12;
  *puVar6 = puVar6[1];
  return plVar5;
}



/* Entry: 0039b89c; end: 0039b9ab;  */

void FUN_0039b89c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 in_x7;
  long lVar10;
  long lVar11;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 uStack_69;
  long *plStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined8 *)(&PTR_s__authority_009deee0)[param_2 * 2];
  puVar2 = (&PTR_s__009deee8)[param_2 * 2];
  puVar5 = puVar1;
  _strlen();
  puVar6 = puVar2;
  _strlen();
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  puVar7 = puVar1;
  puStack_60 = puVar6;
  puStack_58 = puVar2;
  _strlen(puVar1);
  FUN_00394054(param_1,puVar1,puVar5,&plStack_68,(int)puVar6 + (int)puVar7 + 0x20,&uStack_69,
               FUN_0039b9ac);
  plVar8 = plStack_68;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar10 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_68);
  }
  plVar9 = plVar8;
  __Unwind_Resume();
  pcStack_78 = FUN_0039b9ac;
  puStack_80 = &stack0xfffffffffffffff0;
  _abort();
  lVar10 = plVar9[1];
  func_0x0039ba84(plVar9 + 2,lVar10,lVar10,*plVar9,*plVar9,puVar5[1],puVar5[1],in_x7,puVar1,plVar8,
                  &puStack_80,FUN_0039b9b8);
  puVar5[1] = lVar10;
  lVar11 = *plVar9;
  *plVar9 = lVar10;
  puVar5[1] = lVar11;
  lVar10 = plVar9[1];
  plVar9[1] = puVar5[2];
  puVar5[2] = lVar10;
  lVar10 = plVar9[2];
  plVar9[2] = puVar5[3];
  puVar5[3] = lVar10;
  *puVar5 = puVar5[1];
  return;
}



/* Entry: 0039b9ac; end: 0039b9b7;  */

void FUN_0039b9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _abort();
  uVar2 = param_1[1];
  func_0x0039ba84(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0039b9b8; end: 0039ba2b;  */

void FUN_0039b9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x0039ba84(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0039ba2c; end: 0039ba3f;  */

undefined1  [16]
FUN_0039ba2c(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar4 = param_7;
  while (param_3 != param_5) {
    puVar3 = param_3 + -6;
    puStack_58[-6] = *puVar3;
    uVar6 = param_3[-4];
    uVar5 = param_3[-5];
    uVar7 = param_3[-3];
    puStack_58[-2] = param_3[-2];
    puStack_58[-3] = uVar7;
    puStack_58[-4] = uVar6;
    puStack_58[-5] = uVar5;
    *(undefined4 *)(puStack_58 + -1) = *(undefined4 *)(param_3 + -1);
    *puVar3 = &UNK_009deea0;
    puVar4 = puVar4 + -6;
    param_3 = puVar3;
    puStack_58 = puStack_58 + -6;
  }
  uStack_78 = 1;
  pcStack_90 = pcVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_0039bb30(&pcStack_90);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_6;
  return auVar9;
}



/* Entry: 0039ba40; end: 0039bb2f;  */

undefined1  [16]
FUN_0039ba40(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  FUN_00349558();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    puVar2 = param_3 + -6;
    puStack_48[-6] = *puVar2;
    uVar5 = param_3[-4];
    uVar4 = param_3[-5];
    uVar6 = param_3[-3];
    puStack_48[-2] = param_3[-2];
    puStack_48[-3] = uVar6;
    puStack_48[-4] = uVar5;
    puStack_48[-5] = uVar4;
    *(undefined4 *)(puStack_48 + -1) = *(undefined4 *)(param_3 + -1);
    *puVar2 = &UNK_009deea0;
    puVar3 = puVar3 + -6;
    param_3 = puVar2;
    puStack_48 = puStack_48 + -6;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_0039bb30(&uStack_80);
  auVar8._8_8_ = puVar3;
  auVar8._0_8_ = param_6;
  return auVar8;
}



/* Entry: 0039bb30; end: 0039bb63;  */

long FUN_0039bb30(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0039bb64(param_1);
  }
  return param_1;
}



/* Entry: 0039bb64; end: 0039bbab;  */

void FUN_0039bb64(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 8);
  for (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8); plVar1 != plVar2; plVar1 = plVar1 + 6) {
    (**(code **)(*plVar1 + 8))(plVar1 + 1);
  }
  return;
}



/* Entry: 0039bbac; end: 0039bbdb;  */

long * FUN_0039bbac(long *param_1)

{
  FUN_0039bbdc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0039bbdc; end: 0039bc23;  */

void FUN_0039bbdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != lVar3) {
    lVar2 = *(long *)(lVar1 + -0x30);
    *(long **)(param_1 + 0x10) = (long *)(lVar1 + -0x30);
    (**(code **)(lVar2 + 8))(lVar1 + -0x28);
  }
  return;
}



/* Entry: 0039bc24; end: 0039bc63;  */

void FUN_0039bc24(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_0039bc64();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 0039bc64; end: 0039bcaf;  */

void FUN_0039bc64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  while (plVar2 != plVar1) {
    (**(code **)(plVar2[-6] + 8))(plVar2 + -5);
    plVar2 = plVar2 + -6;
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 0039bcb0; end: 0039bcf3;  */

bool FUN_0039bcb0(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - 1 & 0xff;
  uVar2 = uVar1 + 4;
  if (param_1 - 1 >> 8 != 0xfe) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  if (uVar2 < 7) {
    return *(ushort *)(&UNK_007f8ce8 + (ulong)uVar2 * 2) == param_1;
  }
  return false;
}



/* Entry: 0039bcf4; end: 0039caaf;  */

/* WARNING: Removing unreachable block (ram,0x0039c214) */
/* WARNING: Removing unreachable block (ram,0x0039be90) */
/* WARNING: Removing unreachable block (ram,0x0039c100) */
/* WARNING: Removing unreachable block (ram,0x0039be94) */

void FUN_0039bcf4(char *param_1,char *param_2,char *param_3,char *param_4)

{
  qword *pqVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  char *pcVar9;
  char **ppcVar10;
  char *pcVar11;
  undefined4 uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong *extraout_x8;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  char *unaff_x20;
  long lVar18;
  char *unaff_x22;
  byte *unaff_x24;
  long *unaff_x27;
  qword *unaff_x28;
  qword *pqVar19;
  long lVar20;
  long lVar21;
  ulong uStack_270;
  undefined1 auStack_268 [8];
  char *pcStack_260;
  ulong uStack_258;
  char *pcStack_250;
  char *pcStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  char *pcStack_230;
  long alStack_228 [3];
  char *pcStack_210;
  long alStack_208 [3];
  char *pcStack_1f0;
  long alStack_1e8 [3];
  long alStack_1d0 [3];
  long alStack_1b8 [3];
  long alStack_1a0 [3];
  char *pcStack_188;
  char *pcStack_180;
  byte bStack_171;
  undefined1 uStack_169;
  char *pcStack_168;
  long alStack_160 [4];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [40];
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  code *pcStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char acStack_98 [7];
  byte bStack_91;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar1 = (qword *)(param_3 + 9);
  if (*(long *)param_3 != 0) {
    pqVar1 = *(qword **)(param_3 + 0x10);
  }
  uVar2 = *(ulong *)(param_3 + 8) & 0xff;
  if (*(long *)param_3 != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
  }
  pcStack_1f0 = (char *)0x0;
  if (uVar2 != 0) {
    unaff_x27 = alStack_160;
    unaff_x24 = (byte *)((long)pqVar1 + uVar2);
    uVar16 = *(uint *)(param_2 + 0xa98);
    uVar13 = (ulong)uVar16;
    unaff_x22 = param_3;
    unaff_x28 = pqVar1;
    if (0x17 < uVar16) {
      pqVar19 = pqVar1;
      switch(uVar16) {
      case 0x18:
        goto LAB_0039bf50;
      case 0x19:
        uVar16 = *(uint *)(param_2 + 0xaa4);
        pqVar19 = pqVar1;
        goto code_r0x0039bf64;
      case 0x1a:
        uVar16 = *(uint *)(param_2 + 0xaa4);
        pqVar19 = pqVar1;
        goto code_r0x0039bf78;
      case 0x1b:
        goto code_r0x0039bf8c;
      case 0x1c:
        goto code_r0x0039bf9c;
      case 0x1d:
        goto code_r0x0039bfac;
      case 0x1e:
        uVar16 = *(uint *)(param_2 + 0xaa8);
        pqVar19 = pqVar1;
        goto code_r0x0039bfc4;
      case 0x1f:
        uVar16 = *(uint *)(param_2 + 0xaa8);
        pqVar19 = pqVar1;
        goto code_r0x0039bfd8;
      case 0x20:
        uVar16 = *(uint *)(param_2 + 0xaa8);
        goto code_r0x0039bfec;
      case 0x21:
        uVar16 = *(uint *)(param_2 + 0xaa4);
        goto code_r0x0039c374;
      default:
        func_0x00338df0("return GRPC_ERROR_NONE",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/parsing.cc"
                        ,0x114);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x39bee0);
        (*pcVar7)();
      }
    }
    pqVar19 = (qword *)((long)pqVar1 + (0x18 - uVar13));
    uVar17 = uVar2;
    do {
      if ((int)uVar13 == 0x18) goto LAB_0039bf50;
      bVar3 = (byte)*unaff_x28;
      if ((uint)bVar3 != (int)"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar13]) {
        pcStack_f8 = (char *)(ulong)(byte)"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar13];
        uVar16 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          uVar16 = 0x20;
        }
        uStack_d8 = (ulong)uVar16;
        pcStack_f0 = (char *)FUN_0056061c;
        uStack_e0 = 0x5606ac;
        pcStack_d0 = FUN_0056061c;
        uStack_c0 = 0x5606ac;
        uStack_b0 = 0x5606ec;
        pcStack_e8 = pcStack_f8;
        uStack_c8 = (ulong)bVar3;
        uStack_b8 = uVar13;
        FUN_0056189c(&pcStack_a8,
                     "Connect string mismatch: expected \'%c\' (%d) got \'%c\' (%d) at byte %d",0x44
                     ,&pcStack_f8,5);
        param_4 = pcStack_a0;
        param_3 = pcStack_a8;
        if (-1 < (char)bStack_91) {
          param_4 = (char *)(ulong)bStack_91;
          param_3 = (char *)&pcStack_a8;
        }
        alStack_208[1] = 0;
        alStack_208[2] = 0;
        alStack_208[0] = 0;
        param_2 = (char *)alStack_208;
        FUN_003b646c(param_1,2,param_3,param_4,&pcStack_188,alStack_208);
        pcStack_f8 = param_2;
        FUN_0033d548(&pcStack_f8);
        goto LAB_0039bef8;
      }
      unaff_x28 = (qword *)((long)unaff_x28 + 1);
      uVar16 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar16;
      *(uint *)(param_2 + 0xa98) = uVar16;
      uVar17 = uVar17 - 1;
      unaff_x20 = param_2;
    } while (uVar17 != 0);
  }
LAB_0039bef4:
  param_2 = unaff_x20;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
LAB_0039bef8:
  do {
    param_1 = pcStack_1f0;
    if (((ulong)pcStack_1f0 & 1) != 0) {
      FUN_0055293c();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_3 == 0) {
      pcVar9 = param_1;
      __Unwind_Resume();
      iVar8 = (int)&uStack_270;
      pcStack_238 = FUN_0039cab0;
      lVar18 = *(long *)(pcVar9 + 0xab8);
      pcStack_260 = unaff_x22;
      uStack_258 = uVar2;
      pcStack_250 = param_2;
      pcStack_248 = param_1;
      puStack_240 = &stack0xfffffffffffffff0;
      (**(code **)(pcVar9 + 0xac0))(*(undefined8 *)(pcVar9 + 0xab0),pcVar9,lVar18,param_3,param_4);
      uStack_270 = *extraout_x8;
      if (uStack_270 != 0) {
        if ((uStack_270 & 1) != 0) {
          piVar15 = (int *)(uStack_270 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = *piVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_003be1d0(&uStack_270,2,auStack_268);
        FUN_0033c494(&uStack_270);
        if (iVar8 != 0) {
          if (*(code **)(pcVar9 + 0xac0) == FUN_00392fc8) {
            pcVar9[0x8d8] = '\0';
            pcVar9[0x8d9] = '\0';
            pcVar9[0x8da] = '\0';
            pcVar9[0x8db] = '\0';
            pcVar9[0x8dc] = '\0';
            pcVar9[0x8dd] = '\0';
            pcVar9[0x8de] = '\0';
            pcVar9[0x8df] = '\0';
          }
          else {
            pcVar9[0xac0] = 'X';
            pcVar9[0xac1] = -0x34;
            pcVar9[0xac2] = '9';
            pcVar9[0xac3] = '\0';
            pcVar9[0xac4] = '\0';
            pcVar9[0xac5] = '\0';
            pcVar9[0xac6] = '\0';
            pcVar9[0xac7] = '\0';
          }
          if (lVar18 != 0) {
            FUN_003450b4(lVar18 + 0x6d8,extraout_x8);
            FUN_0038d784(pcVar9,*(undefined4 *)(pcVar9 + 0xaa8),1,lVar18 + 0x150);
          }
        }
      }
      return;
    }
    func_0x0040cf10(param_1);
    pqVar19 = unaff_x28;
LAB_0039bf50:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    uVar16 = (uint)(byte)*pqVar19 << 0x10;
    *(uint *)(param_2 + 0xaa4) = uVar16;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x19;
      goto LAB_0039c4b4;
    }
code_r0x0039bf64:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    uVar16 = uVar16 | (uint)(byte)*pqVar19 << 8;
    *(uint *)(param_2 + 0xaa4) = uVar16;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1a;
      goto LAB_0039c4b4;
    }
code_r0x0039bf78:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    *(uint *)(param_2 + 0xaa4) = uVar16 | (byte)*pqVar19;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1b;
      goto LAB_0039c4b4;
    }
code_r0x0039bf8c:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    param_2[0xa9c] = (byte)*pqVar19;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1c;
      goto LAB_0039c4b4;
    }
code_r0x0039bf9c:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    param_2[0xa9d] = (byte)*pqVar19;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1d;
      goto LAB_0039c4b4;
    }
code_r0x0039bfac:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    uVar16 = ((byte)*pqVar19 & 0x7f) << 0x18;
    *(uint *)(param_2 + 0xaa8) = uVar16;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1e;
      goto LAB_0039c4b4;
    }
code_r0x0039bfc4:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    uVar16 = uVar16 | (uint)(byte)*pqVar19 << 0x10;
    *(uint *)(param_2 + 0xaa8) = uVar16;
    pqVar19 = unaff_x28;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x1f;
      goto LAB_0039c4b4;
    }
code_r0x0039bfd8:
    unaff_x28 = (qword *)((long)pqVar19 + 1);
    uVar16 = uVar16 | (uint)(byte)*pqVar19 << 8;
    *(uint *)(param_2 + 0xaa8) = uVar16;
    if (unaff_x28 == (qword *)unaff_x24) {
      uVar12 = 0x20;
      goto LAB_0039c4b4;
    }
code_r0x0039bfec:
    uVar16 = uVar16 | (byte)*unaff_x28;
    param_3 = (char *)(ulong)uVar16;
    *(uint *)(param_2 + 0xaa8) = uVar16;
    param_2[0xa98] = '!';
    param_2[0xa99] = '\0';
    param_2[0xa9a] = '\0';
    param_2[0xa9b] = '\0';
    bVar3 = param_2[0xa9c];
    pcVar9 = (char *)(ulong)bVar3;
    if (param_2[0xa9f] != '\0') {
      if (bVar3 == 4) {
        param_2[0xa9f] = '\0';
        pcVar9 = "\f";
        if (*(int *)(param_2 + 0xaa0) != 0) goto LAB_0039c198;
code_r0x0039c024:
        if (uVar16 == 0) {
          pcVar9 = param_2 + 0x950;
          param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa4);
          param_4 = (char *)(ulong)(byte)param_2[0xa9d];
          FUN_0038de14(&pcStack_a8,pcVar9,param_3,param_4,param_2 + 0x774);
          if (pcStack_a8 == (char *)0x0) {
            if ((param_2[0xa9d] & 1U) != 0) {
              *(undefined8 *)(param_2 + 2000) = *(undefined8 *)(param_2 + 0x7b4);
              *(undefined8 *)(param_2 + 0x7c8) = *(undefined8 *)(param_2 + 0x7ac);
              *(undefined8 *)(param_2 + 0x7dc) = *(undefined8 *)(param_2 + 0x7c0);
              *(undefined8 *)(param_2 + 0x7d4) = *(undefined8 *)(param_2 + 0x7b8);
              param_3 = (char *)(ulong)*(uint *)(param_2 + 0x7c8);
              FUN_0039b3d0(param_2 + 0x910);
              *(undefined4 *)(param_2 + 0xa88) = *(undefined4 *)(param_2 + 0x7d4);
              param_2[0x76d] = '\0';
              *(code **)(param_2 + 0xac0) = FUN_0038df48;
              *(char **)(param_2 + 0xab0) = pcVar9;
              pcStack_210 = (char *)0x0;
              pcVar9 = pcStack_210;
              if (((ulong)pcStack_a8 & 1) != 0) {
                FUN_0055293c();
                pcVar9 = pcStack_210;
              }
              goto code_r0x0039c350;
            }
            *(code **)(param_2 + 0xac0) = FUN_0038df48;
            *(char **)(param_2 + 0xab0) = pcVar9;
          }
          pcStack_210 = pcStack_a8;
          pcVar9 = pcStack_a8;
        }
        else {
          pcStack_f0 = (char *)0x0;
          pcStack_e8 = (char *)0x0;
          pcStack_f8 = (char *)0x0;
          param_3 = "Settings frame received for grpc_chttp2_stream";
          param_4 = segment_command_00000020.segname + 6;
          FUN_003b646c(&pcStack_210,2,"Settings frame received for grpc_chttp2_stream",0x2e,
                       &pcStack_188,&pcStack_f8);
          ppcVar10 = &pcStack_a8;
          pcStack_a8 = (char *)&pcStack_f8;
code_r0x0039c05c:
          FUN_0033d548(ppcVar10);
          pcVar9 = pcStack_210;
        }
      }
      else {
        pcStack_f8 = "Expected SETTINGS frame as the first frame, got frame type ";
        pcStack_f0 = (char *)((long)&segment_command_00000020.vmaddr + 3);
        func_0x00574ac0(pcVar9,acStack_98);
        pcStack_a0 = pcVar9 + -(long)acStack_98;
        pcStack_a8 = acStack_98;
        FUN_00575d30(&pcStack_188,&pcStack_f8,&pcStack_a8);
        param_4 = pcStack_180;
        param_3 = pcStack_188;
        if (-1 < (char)bStack_171) {
          param_4 = (char *)(ulong)bStack_171;
          param_3 = (char *)&pcStack_188;
        }
        alStack_1a0[1] = 0;
        alStack_1a0[2] = 0;
        alStack_1a0[0] = 0;
        FUN_003b646c(&pcStack_210,2,param_3,param_4,&uStack_169,alStack_1e8 + 9);
        pcStack_168 = (char *)(alStack_1e8 + 9);
        FUN_0033d548(&pcStack_168);
        pcVar9 = pcStack_210;
        if ((char)bStack_171 < '\0') {
          __ZdlPv(pcStack_188);
          pcVar9 = pcStack_210;
        }
      }
      goto code_r0x0039c350;
    }
    param_2[0xa9f] = '\0';
    uVar6 = *(uint *)(param_2 + 0xaa0);
    if (uVar6 != 0) {
      if (bVar3 == 9) {
        pcVar11 = (char *)((long)&MACH_HEADER.magic + 1);
        if (uVar6 == uVar16) goto LAB_0039c2f8;
        pcStack_f0 = (char *)0x5606ec;
        uStack_e0 = 0x5606ec;
        pcStack_f8 = (char *)(ulong)uVar6;
        pcStack_e8 = param_3;
        FUN_0056189c(&pcStack_a8,
                     "Expected CONTINUATION frame for grpc_chttp2_stream %08x, got grpc_chttp2_stream %08x"
                     ,0x54,&pcStack_f8,2);
        param_4 = pcStack_a0;
        param_3 = pcStack_a8;
        if (-1 < (char)bStack_91) {
          param_4 = (char *)(ulong)bStack_91;
          param_3 = (char *)&pcStack_a8;
        }
        alStack_1d0[1] = 0;
        alStack_1d0[2] = 0;
        alStack_1d0[0] = 0;
        FUN_003b646c(&pcStack_210,2,param_3,param_4,&pcStack_188,alStack_1e8 + 3);
        pcStack_f8 = (char *)(alStack_1e8 + 3);
        FUN_0033d548(&pcStack_f8);
        pcVar9 = pcStack_210;
      }
      else {
LAB_0039c198:
        pcStack_a0 = (char *)0x560664;
        pcStack_a8 = pcVar9;
        FUN_0056189c(&pcStack_f8,"Expected CONTINUATION frame, got frame type %02x",0x30,&pcStack_a8
                     ,1);
        param_4 = pcStack_f0;
        param_3 = pcStack_f8;
        if (-1 < (long)pcStack_e8) {
          param_4 = (char *)((ulong)pcStack_e8 >> 0x38);
          param_3 = (char *)&pcStack_f8;
        }
        alStack_1b8[1] = 0;
        alStack_1b8[2] = 0;
        alStack_1b8[0] = 0;
        FUN_003b646c(&pcStack_210,2,param_3,param_4,&pcStack_188,alStack_1e8 + 6);
        pcStack_a8 = (char *)(alStack_1e8 + 6);
        FUN_0033d548(&pcStack_a8);
        pcVar9 = pcStack_210;
      }
      goto code_r0x0039c350;
    }
    pcVar11 = (char *)0x0;
    switch(pcVar9) {
    case (char *)0x0:
      if (param_2[0xad0] != '\0') {
        param_2[0xad0] = '\0';
        pcVar9 = param_2 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
          if (bVar5) {
            *(long *)pcVar9 = *(long *)pcVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00387c10(param_2);
        param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa8);
      }
      *(ulong *)(param_2 + 0x9c8) = *(long *)(param_2 + 0x9c8) + (ulong)*(uint *)(param_2 + 0xaa4);
      pcVar9 = param_2 + 0xf8;
      func_0x0039d3ec(pcVar9,param_3);
      pcStack_188 = (char *)0x0;
      pcStack_a0 = (char *)((ulong)pcStack_a0 & 0xffffffff00000000);
      pcStack_a8 = (char *)0x0;
      if (pcVar9 == (char *)0x0) {
        pcStack_f8 = param_2 + 0x9a8;
        FUN_0038bf28(&pcStack_168,&pcStack_f8,*(undefined4 *)(param_2 + 0xaa4),&uStack_169,
                     FUN_0039cf74);
        pcVar11 = pcStack_f8;
        if (pcStack_168 != (char *)0x0) {
          pcStack_188 = pcStack_168;
        }
        pcStack_230 = pcStack_168;
        pcStack_f8 = (char *)0x0;
        uVar12 = 0;
        FUN_0038c048(pcVar11,0,0);
      }
      else {
        pcStack_f8 = *(char **)(pcVar9 + 0x6f8);
        pcStack_f0 = pcVar9 + 0x6f8;
        FUN_0038befc(&pcStack_168,&pcStack_f8,*(undefined4 *)(param_2 + 0xaa4));
        pcVar11 = pcStack_f0;
        pcVar14 = pcStack_f8;
        if (pcStack_168 != (char *)0x0) {
          pcStack_188 = pcStack_168;
        }
        pcStack_230 = pcStack_168;
        pcStack_f8 = (char *)0x0;
        uVar13 = 0;
        FUN_0038c048(pcVar14,0,0);
        FUN_0038c488(pcVar11,pcVar14,uVar13 & 0xffffffff);
        uVar12 = SUB84(pcVar14,0);
      }
      pcStack_a0 = (char *)CONCAT44(pcStack_a0._4_4_,uVar12);
      pcStack_a8 = pcVar11;
      FUN_0038a000(&pcStack_f8);
      param_3 = param_2;
      param_4 = pcVar9;
      func_0x00383b10(&pcStack_a8);
      if (pcStack_230 == (char *)0x0) {
        if (pcVar9 == (char *)0x0) {
code_r0x0039c878:
          param_2[0xac0] = 'X';
          param_2[0xac1] = -0x34;
          param_2[0xac2] = '9';
          param_2[0xac3] = '\0';
          param_2[0xac4] = '\0';
          param_2[0xac5] = '\0';
          param_2[0xac6] = '\0';
          param_2[0xac7] = '\0';
        }
        else {
          *(ulong *)(pcVar9 + 0x6e8) = *(long *)(pcVar9 + 0x6e8) + (ulong)*(uint *)(param_2 + 0xaa4)
          ;
          *(long *)(pcVar9 + 0x138) = *(long *)(pcVar9 + 0x138) + 9;
          if (pcVar9[0x169] != '\0') goto code_r0x0039c878;
          param_3 = (char *)(ulong)*(uint *)(pcVar9 + 0x9c);
          param_4 = pcVar9;
          FUN_0038c684(&pcStack_f8,param_2[0xa9d]);
          pcVar11 = pcStack_f8;
          pcVar14 = pcStack_f8;
          if (pcStack_f8 != (char *)0x0) goto code_r0x0039c7c4;
          *(char **)(param_2 + 0xab8) = pcVar9;
          *(code **)(param_2 + 0xac0) = FUN_0038cbe8;
          param_2[0xab0] = '\0';
          param_2[0xab1] = '\0';
          param_2[0xab2] = '\0';
          param_2[0xab3] = '\0';
          param_2[0xab4] = '\0';
          param_2[0xab5] = '\0';
          param_2[0xab6] = '\0';
          param_2[0xab7] = '\0';
          param_2[0x838] = '\0';
          param_2[0x839] = '\0';
          param_2[0x83a] = '\0';
          param_2[0x83b] = '\0';
          param_2[0x83c] = '\0';
          param_2[0x83d] = '\0';
          param_2[0x83e] = '\0';
          param_2[0x83f] = -0x80;
        }
        pcStack_210 = (char *)0x0;
        pcVar9 = pcStack_210;
      }
      else {
        pcVar11 = pcStack_230;
        pcVar14 = pcStack_188;
        if (pcVar9 == (char *)0x0) {
          pcStack_f8 = pcStack_230;
          uVar13 = (ulong)pcStack_230 & 1;
          if (((ulong)pcStack_230 & 1) != 0) {
            pcVar9 = pcStack_230 + -1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
              if (bVar5) {
                *(int *)pcVar9 = *(int *)pcVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_003fbec4(&pcStack_210,&pcStack_f8);
          if (((ulong)pcStack_f8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
code_r0x0039c7c4:
          pcStack_188 = pcVar14;
          uVar13 = (ulong)pcVar11 & 1;
          pcStack_168 = pcVar11;
          if (((ulong)pcVar11 & 1) != 0) {
            pcVar14 = pcVar11 + -1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
              if (bVar5) {
                *(int *)pcVar14 = *(int *)pcVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pcStack_230 = pcVar11;
          FUN_003fbec4(&pcStack_f8,&pcStack_168);
          FUN_003870a0(param_2,pcVar9,1,0,&pcStack_f8);
          if (((ulong)pcStack_f8 & 1) != 0) {
            FUN_0055293c();
          }
          if (((ulong)pcStack_168 & 1) != 0) {
            FUN_0055293c();
          }
          param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa8);
          param_4 = (char *)((long)&MACH_HEADER.magic + 1);
          FUN_0038d784(param_2,param_3,1,pcVar9 + 0x150);
          param_2[0xac0] = 'X';
          param_2[0xac1] = -0x34;
          param_2[0xac2] = '9';
          param_2[0xac3] = '\0';
          param_2[0xac4] = '\0';
          param_2[0xac5] = '\0';
          param_2[0xac6] = '\0';
          param_2[0xac7] = '\0';
          pcStack_210 = (char *)0x0;
        }
        pcVar9 = pcStack_210;
        if (uVar13 != 0) {
          FUN_0055293c(pcStack_230);
          pcVar9 = pcStack_210;
        }
      }
      break;
    case (char *)0x1:
LAB_0039c2f8:
      param_3 = pcVar11;
      FUN_0039cc60(&pcStack_210,param_2);
      pcVar9 = pcStack_210;
      break;
    default:
      param_2[0xac0] = 'X';
      param_2[0xac1] = -0x34;
      param_2[0xac2] = '9';
      param_2[0xac3] = '\0';
      param_2[0xac4] = '\0';
      param_2[0xac5] = '\0';
      param_2[0xac6] = '\0';
      param_2[0xac7] = '\0';
      goto LAB_0039c354;
    case (char *)0x3:
      param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa4);
      param_4 = (char *)(ulong)(byte)param_2[0xa9d];
      FUN_0038d800(&pcStack_f8,param_2 + 0x950);
      if (pcStack_f8 == (char *)0x0) {
        param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa8);
        pcVar9 = param_2 + 0xf8;
        func_0x0039d3ec();
        *(char **)(param_2 + 0xab8) = pcVar9;
        if (pcVar9 == (char *)0x0) {
          param_2[0xac0] = 'X';
          param_2[0xac1] = -0x34;
          param_2[0xac2] = '9';
          param_2[0xac3] = '\0';
          param_2[0xac4] = '\0';
          param_2[0xac5] = '\0';
          param_2[0xac6] = '\0';
          param_2[0xac7] = '\0';
        }
        else {
          *(long *)(pcVar9 + 0x138) = *(long *)(pcVar9 + 0x138) + 9;
          *(code **)(param_2 + 0xac0) = FUN_0038d928;
          *(char **)(param_2 + 0xab0) = param_2 + 0x950;
        }
        pcStack_210 = (char *)0x0;
      }
      else {
        pcStack_210 = pcStack_f8;
        pcStack_f8 = segment_command_00000020.segname + 0xe;
      }
      pcVar9 = pcStack_210;
      if (((ulong)pcStack_f8 & 1) != 0) {
        FUN_0055293c();
        pcVar9 = pcStack_210;
      }
      break;
    case "\f":
      goto code_r0x0039c024;
    case "":
      pcVar11 = param_2 + 0x950;
      param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa4);
      param_4 = (char *)(ulong)(byte)param_2[0xa9d];
      FUN_0038d38c(&pcStack_f8,pcVar11);
      pcVar9 = pcStack_f8;
      if (pcStack_f8 == (char *)0x0) {
        pcVar7 = FUN_0038d4c4;
code_r0x0039c67c:
        *(code **)(param_2 + 0xac0) = pcVar7;
        *(char **)(param_2 + 0xab0) = pcVar11;
        pcVar9 = pcStack_f8;
      }
      break;
    case "\x01":
      pcVar11 = param_2 + 0x988;
      param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa4);
      param_4 = (char *)(ulong)(byte)param_2[0xa9d];
      FUN_0038cd70(&pcStack_f8,pcVar11);
      pcVar9 = pcStack_f8;
      if (pcStack_f8 == (char *)0x0) {
        pcVar7 = FUN_0038ceb4;
        goto code_r0x0039c67c;
      }
      break;
    case "":
      param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa4);
      param_4 = (char *)(ulong)(byte)param_2[0xa9d];
      FUN_0038e3ec(&pcStack_f8,param_2 + 0x950);
      if (pcStack_f8 == (char *)0x0) {
        param_3 = (char *)(ulong)*(uint *)(param_2 + 0xaa8);
        if (*(uint *)(param_2 + 0xaa8) == 0) {
code_r0x0039c70c:
          *(code **)(param_2 + 0xac0) = FUN_0038e51c;
          *(char **)(param_2 + 0xab0) = param_2 + 0x950;
        }
        else {
          pcVar9 = param_2 + 0xf8;
          func_0x0039d3ec();
          *(char **)(param_2 + 0xab8) = pcVar9;
          if (pcVar9 != (char *)0x0) {
            *(long *)(pcVar9 + 0x138) = *(long *)(pcVar9 + 0x138) + 9;
            goto code_r0x0039c70c;
          }
          param_2[0xac0] = 'X';
          param_2[0xac1] = -0x34;
          param_2[0xac2] = '9';
          param_2[0xac3] = '\0';
          param_2[0xac4] = '\0';
          param_2[0xac5] = '\0';
          param_2[0xac6] = '\0';
          param_2[0xac7] = '\0';
        }
        pcStack_210 = (char *)0x0;
      }
      else {
        pcStack_210 = pcStack_f8;
        pcStack_f8 = segment_command_00000020.segname + 0xe;
      }
      pcVar9 = pcStack_210;
      if (((ulong)pcStack_f8 & 1) != 0) {
        FUN_0055293c();
        pcVar9 = pcStack_210;
      }
      break;
    case "":
      alStack_1e8[1] = 0;
      alStack_1e8[2] = 0;
      alStack_1e8[0] = 0;
      param_3 = "Unexpected CONTINUATION frame";
      param_4 = (char *)((long)&MACH_HEADER.reserved + 1);
      FUN_003b646c(&pcStack_210,2,"Unexpected CONTINUATION frame",0x1d,&pcStack_a8,alStack_1e8);
      ppcVar10 = &pcStack_f8;
      pcStack_f8 = (char *)alStack_1e8;
      goto code_r0x0039c05c;
    }
code_r0x0039c350:
    if (pcVar9 != (char *)0x0) goto LAB_0039c4f4;
LAB_0039c354:
    uVar16 = *(uint *)(param_2 + 0xaa4);
    if (uVar16 == 0) {
      FUN_003ec024(&pcStack_f8);
      param_3 = (char *)&pcStack_f8;
      param_4 = (char *)((long)&MACH_HEADER.magic + 1);
      FUN_0039cab0(&pcStack_a8,param_2);
      pcVar11 = pcStack_a8;
      pcVar9 = (char *)0x0;
      if (pcStack_a8 != (char *)0x0) {
        pcStack_1f0 = pcStack_a8;
        pcStack_a8 = segment_command_00000020.segname + 0xe;
        pcVar9 = pcVar11;
      }
      if (pcVar9 == (char *)0x0) break;
      goto LAB_0039c4f4;
    }
    if (*(uint *)(param_2 + 0x7d8) < uVar16) {
      pcStack_a8 = "Frame size %d is larger than max frame size %d";
      pcStack_a0 = segment_command_00000020.segname + 6;
      FUN_0039cbb8(&pcStack_f8,&pcStack_a8,param_2 + 0xaa4,param_2 + 0x7d8);
      param_4 = pcStack_f0;
      param_3 = pcStack_f8;
      if (-1 < (long)pcStack_e8) {
        param_4 = (char *)((ulong)pcStack_e8 >> 0x38);
        param_3 = (char *)&pcStack_f8;
      }
      alStack_228[1] = 0;
      alStack_228[2] = 0;
      alStack_228[0] = 0;
      param_2 = (char *)alStack_228;
      FUN_003b646c(param_1,2,param_3,param_4,alStack_1e8 + 9,alStack_228);
      pcStack_188 = param_2;
      FUN_0033d548(&pcStack_188);
      goto LAB_0039bef8;
    }
    unaff_x28 = (qword *)((long)unaff_x28 + 1);
    unaff_x20 = param_2;
    if (unaff_x28 == (qword *)unaff_x24) goto LAB_0039bef4;
code_r0x0039c374:
    uVar6 = (int)unaff_x24 - (int)unaff_x28;
    unaff_x20 = param_2;
    if (uVar16 != uVar6) {
      if (uVar6 <= uVar16) {
        lVar18 = *(long *)unaff_x22;
        lVar21 = *(long *)(unaff_x22 + 0x18);
        lVar20 = *(long *)(unaff_x22 + 0x10);
        unaff_x27[1] = *(long *)(unaff_x22 + 8);
        *unaff_x27 = lVar18;
        unaff_x27[3] = lVar21;
        unaff_x27[2] = lVar20;
        FUN_003ec404(&pcStack_f8,alStack_160,(long)unaff_x28 - (long)pqVar1,uVar2);
        param_3 = (char *)&pcStack_f8;
        param_4 = (char *)0x0;
        FUN_0039cab0(&pcStack_a8,param_2);
        pcVar9 = pcStack_a8;
        if (pcStack_a8 == (char *)0x0) {
          *(uint *)(param_2 + 0xaa4) = *(int *)(param_2 + 0xaa4) - uVar6;
          goto LAB_0039bef4;
        }
        goto LAB_0039c4f4;
      }
      lVar18 = *(long *)unaff_x22;
      lVar21 = *(long *)(unaff_x22 + 0x18);
      lVar20 = *(long *)(unaff_x22 + 0x10);
      unaff_x27[5] = *(long *)(unaff_x22 + 8);
      unaff_x27[4] = lVar18;
      unaff_x27[7] = lVar21;
      unaff_x27[6] = lVar20;
      FUN_003ec404(&pcStack_f8,auStack_140,(long)unaff_x28 - (long)pqVar1,
                   ((long)unaff_x28 - (long)pqVar1) + (ulong)uVar16);
      param_3 = (char *)&pcStack_f8;
      param_4 = (char *)((long)&MACH_HEADER.magic + 1);
      FUN_0039cab0(&pcStack_a8,param_2);
      pcVar9 = pcStack_a8;
      if (pcStack_a8 != (char *)0x0) goto LAB_0039c4f4;
      param_2[0xab8] = '\0';
      param_2[0xab9] = '\0';
      param_2[0xaba] = '\0';
      param_2[0xabb] = '\0';
      param_2[0xabc] = '\0';
      param_2[0xabd] = '\0';
      param_2[0xabe] = '\0';
      param_2[0xabf] = '\0';
      pqVar19 = (qword *)((long)unaff_x28 + (ulong)*(uint *)(param_2 + 0xaa4));
      goto LAB_0039bf50;
    }
    lVar18 = *(long *)unaff_x22;
    lVar21 = *(long *)(unaff_x22 + 0x18);
    lVar20 = *(long *)(unaff_x22 + 0x10);
    unaff_x27[9] = *(long *)(unaff_x22 + 8);
    unaff_x27[8] = lVar18;
    unaff_x27[0xb] = lVar21;
    unaff_x27[10] = lVar20;
    FUN_003ec404(&pcStack_f8,auStack_120,(long)unaff_x28 - (long)pqVar1,uVar2);
    param_3 = (char *)&pcStack_f8;
    param_4 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_0039cab0(&pcStack_a8,param_2);
    pcVar9 = pcStack_a8;
    if (pcStack_a8 == (char *)0x0) {
      param_2[0xa98] = '\x18';
      param_2[0xa99] = '\0';
      param_2[0xa9a] = '\0';
      param_2[0xa9b] = '\0';
      param_2[0xab8] = '\0';
      param_2[0xab9] = '\0';
      param_2[0xaba] = '\0';
      param_2[0xabb] = '\0';
      param_2[0xabc] = '\0';
      param_2[0xabd] = '\0';
      param_2[0xabe] = '\0';
      param_2[0xabf] = '\0';
      goto LAB_0039bef4;
    }
    pcStack_a8 = segment_command_00000020.segname + 0xe;
LAB_0039c4f4:
    *(char **)param_1 = pcVar9;
    pcStack_1f0 = segment_command_00000020.segname + 0xe;
  } while( true );
  param_2[0xab8] = '\0';
  param_2[0xab9] = '\0';
  param_2[0xaba] = '\0';
  param_2[0xabb] = '\0';
  param_2[0xabc] = '\0';
  param_2[0xabd] = '\0';
  param_2[0xabe] = '\0';
  param_2[0xabf] = '\0';
  unaff_x28 = (qword *)((long)unaff_x28 + 1);
  pqVar19 = unaff_x28;
  if (unaff_x28 == (qword *)unaff_x24) {
    uVar12 = 0x18;
LAB_0039c4b4:
    *(undefined4 *)(param_2 + 0xa98) = uVar12;
    unaff_x20 = param_2;
    goto LAB_0039bef4;
  }
  goto LAB_0039bf50;
}



/* Entry: 0039cab0; end: 0039cbb7;  */

void FUN_0039cab0(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  
  iVar3 = (int)&uStack_40;
  lVar5 = *(long *)(param_2 + 0xab8);
  (**(code **)(param_2 + 0xac0))(*(undefined8 *)(param_2 + 0xab0),param_2,lVar5,param_3,param_4);
  uStack_40 = *param_1;
  if (uStack_40 != 0) {
    if ((uStack_40 & 1) != 0) {
      piVar4 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be1d0(&uStack_40,2,auStack_38);
    FUN_0033c494(&uStack_40);
    if (iVar3 != 0) {
      if (*(code **)(param_2 + 0xac0) == FUN_00392fc8) {
        *(undefined8 *)(param_2 + 0x8d8) = 0;
      }
      else {
        *(undefined8 *)(param_2 + 0xac0) = 0x39cc58;
      }
      if (lVar5 != 0) {
        FUN_003450b4(lVar5 + 0x6d8,param_1);
        FUN_0038d784(param_2,*(undefined4 *)(param_2 + 0xaa8),1,lVar5 + 0x150);
      }
    }
  }
  return;
}



/* Entry: 0039cbb8; end: 0039cc2b;  */

void FUN_0039cbb8(long *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  ulong auStack_38 [3];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = *param_1;
  auStack_38[0] = (ulong)*param_2;
  auStack_38[1] = 0x5606ec;
  auStack_38[2] = (ulong)*param_3;
  uStack_20 = 0x5606ec;
  FUN_0056189c(lVar1,param_1[1],auStack_38,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (*(code **)(lVar1 + 0xac0) != FUN_00392fc8) {
    *(undefined8 *)(lVar1 + 0xac0) = 0x39cc58;
    return;
  }
  *(undefined8 *)(lVar1 + 0x8d8) = 0;
  return;
}



/* Entry: 0039cc2c; end: 0039cc5f;  */

void FUN_0039cc2c(long param_1)

{
  if (*(code **)(param_1 + 0xac0) != FUN_00392fc8) {
    *(undefined8 *)(param_1 + 0xac0) = 0x39cc58;
    return;
  }
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  return;
}



/* Entry: 0039cc60; end: 0039ceff;  */

void FUN_0039cc60(undefined8 *param_1,ulong param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  
  puVar9 = &uStack_90;
  bVar1 = *(byte *)(param_2 + 0xa9d);
  if ((bVar1 >> 2 & 1) == 0) {
    uVar7 = *(undefined4 *)(param_2 + 0xaa8);
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(param_2 + 0xaa0) = uVar7;
  if (param_3 == 0) {
    *(byte *)(param_2 + 0xa9e) = bVar1 & 1;
    bVar10 = bVar1 >> 5 & 1;
  }
  else {
    bVar10 = 0;
  }
  *(undefined8 *)(param_2 + 0x838) = 0x8000000000000000;
  uVar8 = param_2 + 0xf8;
  uVar4 = uVar8;
  func_0x0039d3ec(uVar8,*(undefined4 *)(param_2 + 0xaa8));
  if (uVar4 == 0) {
    if ((((param_3 != 0) || (*(char *)(param_2 + 0x628) != '\0')) ||
        (*(uint *)(param_2 + 0xaa8) <= *(uint *)(param_2 + 0x7e8))) ||
       ((*(uint *)(param_2 + 0xaa8) & 1) == 0)) goto FUN_0039cf00;
    func_0x0039d43c();
    if (*(uint *)(param_2 + 2000) <= uVar8) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      puVar9 = &uStack_78;
      FUN_003b646c(param_1,2,"Max stream count exceeded",0x19,&uStack_59,&uStack_78);
      goto LAB_0039ce9c;
    }
    if (*(int *)(param_2 + 0x768) == 3) goto FUN_0039cf00;
    *(undefined4 *)(param_2 + 0x7e8) = *(undefined4 *)(param_2 + 0xaa8);
    uVar4 = param_2;
    FUN_003844d8();
    *(ulong *)(param_2 + 0xab8) = uVar4;
    if (uVar4 == 0) goto FUN_0039cf00;
    if (*(long *)(param_2 + 0xce8) != 0) {
      func_0x003a9f10();
    }
  }
  else {
    *(ulong *)(param_2 + 0xab8) = uVar4;
  }
  *(long *)(uVar4 + 0x138) = *(long *)(uVar4 + 0x138) + 9;
  if (*(char *)(uVar4 + 0x169) != '\0') {
    *(undefined8 *)(param_2 + 0xab8) = 0;
FUN_0039cf00:
    *(code **)(param_2 + 0xac0) = FUN_00392fc8;
    *(ulong *)(param_2 + 0xab0) = param_2 + 0x8d8;
    uVar7 = 0;
    if ((*(int *)(param_2 + 0xaa0) != 0) && (uVar7 = 1, *(char *)(param_2 + 0xa9e) != '\0')) {
      uVar7 = 2;
    }
    func_0x003926e0(param_2 + 0x8d8,0,*(undefined4 *)(param_2 + 0x7dc),uVar7,bVar10,
                    (ulong)*(uint *)(param_2 + 0xaa8) | (ulong)*(byte *)(param_2 + 0x628) << 0x28 |
                    0x200000000);
    *param_1 = 0;
    return;
  }
  *(code **)(param_2 + 0xac0) = FUN_00392fc8;
  *(ulong *)(param_2 + 0xab0) = param_2 + 0x8d8;
  cVar2 = *(char *)(param_2 + 0xa9e);
  if (cVar2 != '\0') {
    *(undefined1 *)(uVar4 + 0x16d) = 1;
  }
  cVar3 = *(char *)(uVar4 + 0x6e0);
  if (cVar3 == '\x02') {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/parsing.cc"
                 ,0x238,2,"too many header frames received");
    goto FUN_0039cf00;
  }
  if (cVar3 == '\x01') {
    if (cVar2 == '\0') {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      FUN_003b646c(param_1,2,"Trailing metadata frame received without an end-o-stream",0x38,
                   &uStack_59,&uStack_90);
LAB_0039ce9c:
      puStack_58 = puVar9;
      FUN_0033d548(&puStack_58);
      return;
    }
  }
  else {
    if (cVar3 != '\0') {
      lVar5 = 0;
      uVar8 = 0x200000000;
      goto LAB_0039ce20;
    }
    if ((cVar2 == '\0') || (*(char *)(param_2 + 0x628) == '\0')) {
      uVar8 = 0;
      lVar5 = uVar4 + 400;
      goto LAB_0039ce20;
    }
    if (*(undefined1 **)(uVar4 + 0xf8) != (undefined1 *)0x0) {
      **(undefined1 **)(uVar4 + 0xf8) = 1;
    }
  }
  lVar5 = uVar4 + 0x398;
  uVar8 = 0x100000000;
LAB_0039ce20:
  uVar6 = 1;
  if (cVar2 != '\0') {
    uVar6 = 2;
  }
  FUN_003926dc(param_2 + 0x8d8,lVar5,*(undefined4 *)(param_2 + 0x7dc),
               uVar6 & (int)((uint)bVar1 << 0x1d) >> 0x1f,bVar10,
               uVar8 | (ulong)*(byte *)(param_2 + 0x628) << 0x28 | (ulong)*(uint *)(param_2 + 0xaa8)
              );
  *param_1 = 0;
  return;
}



/* Entry: 0039cf00; end: 0039cf73;  */

void FUN_0039cf00(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(code **)(param_2 + 0xac0) = FUN_00392fc8;
  *(long *)(param_2 + 0xab0) = param_2 + 0x8d8;
  uVar1 = 0;
  if ((*(int *)(param_2 + 0xaa0) != 0) && (uVar1 = 1, *(char *)(param_2 + 0xa9e) != '\0')) {
    uVar1 = 2;
  }
  FUN_003926dc(param_2 + 0x8d8,0,*(undefined4 *)(param_2 + 0x7dc),uVar1,param_3,
               (ulong)*(uint *)(param_2 + 0xaa8) | (ulong)*(byte *)(param_2 + 0x628) << 0x28 |
               0x200000000);
  *param_1 = 0;
  return;
}



/* Entry: 0039cf74; end: 0039cf7b;  */

void FUN_0039cf74(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 0039cf7c; end: 0039cfd3;  */

bool FUN_0039cf7c(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)((long)param_2 + 0x9c) != 0) {
    bVar4 = *(byte *)(param_2 + 0x13);
    if ((bVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0xb0);
      param_2[9] = 0;
      param_2[10] = lVar5;
      plVar3 = (long *)(param_1 + 0xa8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0x48);
      }
      *plVar3 = (long)param_2;
      *(long **)(param_1 + 0xb0) = param_2;
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 1;
    }
    return (bVar4 & 1) == 0;
  }
  func_0x007731d4();
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    pbVar1 = (byte *)(lVar5 + 0x98);
    if ((*pbVar1 & 1) == 0) {
      func_0x00773208();
      bVar4 = *(byte *)(param_2 + 0x13);
      if ((bVar4 & 1) != 0) {
        *(byte *)(param_2 + 0x13) = bVar4 & 0xfe;
        plVar3 = param_2 + 9;
        lVar5 = param_2[10];
        if (lVar5 == 0) {
          if (*(long **)(param_1 + 0xa8) != param_2) {
            func_0x0077323c();
            bVar4 = *(byte *)(param_2 + 0x13);
            if ((bVar4 >> 1 & 1) == 0) {
              lVar5 = *(long *)(param_1 + 0xc0);
              param_2[0xb] = 0;
              param_2[0xc] = lVar5;
              plVar3 = (long *)(param_1 + 0xb8);
              if (lVar5 != 0) {
                plVar3 = (long *)(lVar5 + 0x58);
              }
              *plVar3 = (long)param_2;
              *(long **)(param_1 + 0xc0) = param_2;
              *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 2;
            }
            return (bVar4 & 2) == 0;
          }
          lVar6 = *plVar3;
          *(long *)(param_1 + 0xa8) = lVar6;
        }
        else {
          *(long *)(lVar5 + 0x48) = *plVar3;
          lVar6 = *plVar3;
        }
        plVar3 = (long *)(param_1 + 0xb0);
        if (lVar6 != 0) {
          plVar3 = (long *)(lVar6 + 0x50);
        }
        *plVar3 = lVar5;
      }
      return (bVar4 & 1) != 0;
    }
    lVar6 = *(long *)(lVar5 + 0x48);
    puVar2 = (undefined8 *)(param_1 + 0xb0);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0x50);
    }
    *puVar2 = 0;
    *(long *)(param_1 + 0xa8) = lVar6;
    *pbVar1 = *pbVar1 & 0xfe;
  }
  *param_2 = lVar5;
  return lVar5 != 0;
}



/* Entry: 0039cfd4; end: 0039cfdb;  */

bool FUN_0039cfd4(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    pbVar1 = (byte *)(lVar5 + 0x98);
    if ((*pbVar1 & 1) == 0) {
      func_0x00773208();
      bVar4 = *(byte *)(param_2 + 0x13);
      if ((bVar4 & 1) != 0) {
        *(byte *)(param_2 + 0x13) = bVar4 & 0xfe;
        plVar3 = param_2 + 9;
        lVar5 = param_2[10];
        if (lVar5 == 0) {
          if (*(long **)(param_1 + 0xa8) != param_2) {
            func_0x0077323c();
            bVar4 = *(byte *)(param_2 + 0x13);
            if ((bVar4 >> 1 & 1) == 0) {
              lVar5 = *(long *)(param_1 + 0xc0);
              param_2[0xb] = 0;
              param_2[0xc] = lVar5;
              plVar3 = (long *)(param_1 + 0xb8);
              if (lVar5 != 0) {
                plVar3 = (long *)(lVar5 + 0x58);
              }
              *plVar3 = (long)param_2;
              *(long **)(param_1 + 0xc0) = param_2;
              *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 2;
            }
            return (bVar4 & 2) == 0;
          }
          lVar6 = *plVar3;
          *(long *)(param_1 + 0xa8) = lVar6;
        }
        else {
          *(long *)(lVar5 + 0x48) = *plVar3;
          lVar6 = *plVar3;
        }
        plVar3 = (long *)(param_1 + 0xb0);
        if (lVar6 != 0) {
          plVar3 = (long *)(lVar6 + 0x50);
        }
        *plVar3 = lVar5;
      }
      return (bVar4 & 1) != 0;
    }
    lVar6 = *(long *)(lVar5 + 0x48);
    puVar2 = (undefined8 *)(param_1 + 0xb0);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0x50);
    }
    *puVar2 = 0;
    *(long *)(param_1 + 0xa8) = lVar6;
    *pbVar1 = *pbVar1 & 0xfe;
  }
  *param_2 = lVar5;
  return lVar5 != 0;
}



/* Entry: 0039cfdc; end: 0039d063;  */

bool FUN_0039cfdc(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar5 = (long *)(param_1 + (ulong)param_3 * 0x10 + 0xa8);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    lVar7 = lVar4 + 0x98;
    uVar6 = (ulong)(long)(int)param_3 >> 3;
    uVar3 = 1 << (ulong)(param_3 & 7);
    if ((*(byte *)(lVar7 + uVar6) & uVar3) == 0) {
      func_0x00773208();
      bVar2 = *(byte *)(param_2 + 0x13);
      if ((bVar2 & 1) != 0) {
        *(byte *)(param_2 + 0x13) = bVar2 & 0xfe;
        plVar5 = param_2 + 9;
        lVar4 = param_2[10];
        if (lVar4 == 0) {
          if (*(long **)(param_1 + 0xa8) != param_2) {
            func_0x0077323c();
            bVar2 = *(byte *)(param_2 + 0x13);
            if ((bVar2 >> 1 & 1) == 0) {
              lVar4 = *(long *)(param_1 + 0xc0);
              param_2[0xb] = 0;
              param_2[0xc] = lVar4;
              plVar5 = (long *)(param_1 + 0xb8);
              if (lVar4 != 0) {
                plVar5 = (long *)(lVar4 + 0x58);
              }
              *plVar5 = (long)param_2;
              *(long **)(param_1 + 0xc0) = param_2;
              *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 2;
            }
            return (bVar2 & 2) == 0;
          }
          lVar7 = *plVar5;
          *(long *)(param_1 + 0xa8) = lVar7;
        }
        else {
          *(long *)(lVar4 + 0x48) = *plVar5;
          lVar7 = *plVar5;
        }
        plVar5 = (long *)(param_1 + 0xb0);
        if (lVar7 != 0) {
          plVar5 = (long *)(lVar7 + 0x50);
        }
        *plVar5 = lVar4;
      }
      return (bVar2 & 1) != 0;
    }
    uVar8 = (ulong)param_3;
    lVar9 = *(long *)(lVar4 + uVar8 * 0x10 + 0x48);
    puVar1 = (undefined8 *)(param_1 + uVar8 * 0x10 + 0xb0);
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + uVar8 * 0x10 + 0x50);
    }
    *puVar1 = 0;
    *plVar5 = lVar9;
    *(byte *)(lVar7 + uVar6) = *(byte *)(lVar7 + uVar6) & ((byte)uVar3 ^ 0xff);
  }
  *param_2 = lVar4;
  return lVar4 != 0;
}



/* Entry: 0039d064; end: 0039d06b;  */

bool FUN_0039d064(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_2 + 0x98);
  if ((bVar2 & 1) != 0) {
    *(byte *)(param_2 + 0x98) = bVar2 & 0xfe;
    plVar1 = (long *)(param_2 + 0x48);
    lVar3 = *(long *)(param_2 + 0x50);
    if (lVar3 == 0) {
      if (*(long *)(param_1 + 0xa8) != param_2) {
        func_0x0077323c();
        bVar2 = *(byte *)(param_2 + 0x98);
        if ((bVar2 >> 1 & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0xc0);
          *(undefined8 *)(param_2 + 0x58) = 0;
          *(long *)(param_2 + 0x60) = lVar3;
          plVar1 = (long *)(param_1 + 0xb8);
          if (lVar3 != 0) {
            plVar1 = (long *)(lVar3 + 0x58);
          }
          *plVar1 = param_2;
          *(long *)(param_1 + 0xc0) = param_2;
          *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 2;
        }
        return (bVar2 & 2) == 0;
      }
      lVar4 = *plVar1;
      *(long *)(param_1 + 0xa8) = lVar4;
    }
    else {
      *(long *)(lVar3 + 0x48) = *plVar1;
      lVar4 = *plVar1;
    }
    plVar1 = (long *)(param_1 + 0xb0);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x50);
    }
    *plVar1 = lVar3;
  }
  return (bVar2 & 1) != 0;
}



/* Entry: 0039d06c; end: 0039d10f;  */

bool FUN_0039d06c(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  bVar3 = *(byte *)(param_2 + 0x98 + ((ulong)(long)(int)param_3 >> 3));
  uVar4 = 1 << (ulong)(param_3 & 7);
  uVar2 = bVar3 & uVar4;
  if (uVar2 != 0) {
    *(byte *)(param_2 + 0x98 + ((ulong)(long)(int)param_3 >> 3)) = bVar3 & ((byte)uVar4 ^ 0xff);
    uVar5 = (ulong)param_3;
    lVar6 = param_2 + (ulong)param_3 * 0x10;
    plVar1 = (long *)(lVar6 + 0x48);
    lVar6 = *(long *)(lVar6 + 0x50);
    if (lVar6 == 0) {
      plVar8 = (long *)(param_1 + uVar5 * 0x10 + 0xa8);
      if (*plVar8 != param_2) {
        func_0x0077323c();
        bVar3 = *(byte *)(param_2 + 0x98);
        if ((bVar3 >> 1 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0xc0);
          *(undefined8 *)(param_2 + 0x58) = 0;
          *(long *)(param_2 + 0x60) = lVar6;
          plVar1 = (long *)(param_1 + 0xb8);
          if (lVar6 != 0) {
            plVar1 = (long *)(lVar6 + 0x58);
          }
          *plVar1 = param_2;
          *(long *)(param_1 + 0xc0) = param_2;
          *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 2;
        }
        return (bVar3 & 2) == 0;
      }
      lVar7 = *plVar1;
      *plVar8 = lVar7;
    }
    else {
      *(long *)(lVar6 + uVar5 * 0x10 + 0x48) = *plVar1;
      lVar7 = *plVar1;
    }
    plVar1 = (long *)(param_1 + uVar5 * 0x10 + 0xb0);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + uVar5 * 0x10 + 0x50);
    }
    *plVar1 = lVar6;
  }
  return uVar2 != 0;
}



/* Entry: 0039d110; end: 0039d237;  */

bool FUN_0039d110(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_2 + 0x98);
  if ((bVar2 >> 1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(long *)(param_2 + 0x60) = lVar3;
    plVar1 = (long *)(param_1 + 0xb8);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x58);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0xc0) = param_2;
    *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 2;
  }
  return (bVar2 & 2) == 0;
}



/* Entry: 0039d238; end: 0039d29b;  */

void FUN_0039d238(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 << 2;
  FUN_00338c74();
  *param_1 = lVar1;
  lVar1 = param_2 << 3;
  FUN_00338c74();
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}



/* Entry: 0039d29c; end: 0039d38b;  */

long * FUN_0039d29c(long *param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  
  plVar8 = (long *)param_1[1];
  uVar7 = param_1[2];
  puVar12 = (undefined4 *)*param_1;
  if ((uVar7 != 0) && (param_2 <= (uint)puVar12[uVar7 - 1])) {
    func_0x00773270();
    lVar10 = 0;
    lVar9 = param_1[2];
    lVar11 = lVar9;
    do {
      while( true ) {
        lVar3 = lVar10 + ((ulong)(lVar11 - lVar10) >> 1);
        uVar4 = *(uint *)(*param_1 + lVar3 * 4);
        if (param_2 <= uVar4) break;
        lVar10 = lVar3 + 1;
      }
      lVar11 = lVar3;
    } while (param_2 < uVar4);
    plVar8 = *(long **)(param_1[1] + lVar3 * 8);
    *(undefined8 *)(param_1[1] + lVar3 * 8) = 0;
    lVar10 = param_1[3];
    param_1[3] = lVar10 + 1;
    if (lVar10 + 1 == lVar9) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    return plVar8;
  }
  plVar6 = param_1;
  if (uVar7 == param_1[4]) {
    if (uVar7 >> 2 < (ulong)param_1[3]) {
      plVar2 = plVar8;
      uVar5 = uVar7;
      puVar1 = puVar12;
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        lVar10 = *plVar2;
        if (lVar10 != 0) {
          puVar12[uVar7] = *puVar1;
          plVar8[uVar7] = lVar10;
          uVar7 = uVar7 + 1;
        }
        puVar1 = puVar1 + 1;
        plVar2 = plVar2 + 1;
      }
      param_1[3] = 0;
    }
    else {
      param_1[4] = uVar7 << 1;
      FUN_00338cbc(puVar12,uVar7 << 3);
      *param_1 = (long)puVar12;
      FUN_00338cbc(plVar8,uVar7 << 4);
      param_1[1] = (long)plVar8;
      plVar6 = plVar8;
    }
  }
  puVar12[uVar7] = param_2;
  plVar8[uVar7] = param_3;
  param_1[2] = uVar7 + 1;
  return plVar6;
}



/* Entry: 0039d38c; end: 0039d447;  */

undefined8 FUN_0039d38c(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  lVar5 = param_1[2];
  lVar6 = lVar5;
  do {
    while( true ) {
      lVar1 = lVar3 + ((ulong)(lVar6 - lVar3) >> 1);
      uVar2 = *(uint *)(*param_1 + lVar1 * 4);
      if (param_2 <= uVar2) break;
      lVar3 = lVar1 + 1;
    }
    lVar6 = lVar1;
  } while (param_2 < uVar2);
  uVar4 = *(undefined8 *)(param_1[1] + lVar1 * 8);
  *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
  lVar3 = param_1[3];
  param_1[3] = lVar3 + 1;
  if (lVar3 + 1 == lVar5) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return uVar4;
}



/* Entry: 0039d448; end: 0039d4e7;  */

long * FUN_0039d448(long *param_1,code *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[2];
  if (lVar9 == param_1[3]) {
    plVar3 = (long *)0x0;
  }
  else {
    if (param_1[3] != 0) {
      if (lVar9 == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
LAB_0039d4e4:
        func_0x007732a8();
        uVar4 = param_1[2];
        plVar3 = param_1;
        if (uVar4 != 0) {
          uVar6 = 0;
          do {
            if (*(long *)(param_1[1] + uVar6 * 8) != 0) {
              plVar3 = param_3;
              (*param_2)(param_3,*(undefined4 *)(*param_1 + uVar6 * 4));
              uVar4 = param_1[2];
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
        return plVar3;
      }
      lVar5 = 0;
      puVar1 = (undefined4 *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar3 = plVar2;
      puVar7 = puVar1;
      do {
        lVar8 = *plVar3;
        if (lVar8 != 0) {
          puVar1[lVar5] = *puVar7;
          plVar2[lVar5] = lVar8;
          lVar5 = lVar5 + 1;
        }
        puVar7 = puVar7 + 1;
        plVar3 = plVar3 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      param_1[2] = lVar5;
      param_1[3] = 0;
      if (lVar5 == 0) goto LAB_0039d4e4;
    }
    lVar9 = param_1[1];
    plVar3 = param_1;
    _rand();
    uVar6 = param_1[2];
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (ulong)(long)(int)plVar3 / uVar6;
    }
    plVar3 = *(long **)(lVar9 + ((long)(int)plVar3 - uVar4 * uVar6) * 8);
  }
  return plVar3;
}



/* Entry: 0039d4e8; end: 0039d54b;  */

void FUN_0039d4e8(long *param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
        (*param_2)(param_3,*(undefined4 *)(*param_1 + uVar2 * 4));
        uVar1 = param_1[2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 0039d54c; end: 0039d5ef;  */

undefined4 FUN_0039d54c(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 6;
  }
  uVar2 = (uint)param_1;
  uVar1 = 4;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 3;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 0039d5f0; end: 0039e0eb;  */

ulong ***** FUN_0039d5f0(ulong *****param_1)

{
  ulong ****ppppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong *****pppppuVar6;
  undefined8 *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined *puVar15;
  int *piVar16;
  uint uVar17;
  undefined8 ***pppuVar18;
  undefined8 **ppuVar19;
  ulong uVar20;
  ulong ****ppppuVar21;
  ulong ****ppppuVar22;
  undefined8 ****ppppuVar23;
  ulong ****ppppuVar24;
  undefined8 ****ppppuVar25;
  ulong *****unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  uint5 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint5 uVar29;
  uint5 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ****ppppuStack_108;
  ulong ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ****ppppuStack_f0;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_e0 = 0;
  iStack_d8 = 0;
  iStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_ce = 0;
  ppppuStack_f0 = param_1;
  ppppuStack_e8 = param_1;
  if ((*(char *)((long)param_1 + 0x76c) != '\0') && (*(char *)((long)param_1 + 0x76d) == '\0')) {
    FUN_0038dc20(&ppppuStack_c0,(long)param_1 + 0x7ac,param_1 + 0xf2,*(undefined4 *)(param_1 + 0xee)
                 ,7);
    FUN_003ecb34(ppppuStack_f0 + 0x62,&ppppuStack_c0);
    *(undefined4 *)(ppppuStack_e8 + 0xee) = 0;
    *(undefined2 *)((long)ppppuStack_e8 + 0x76c) = 0x100;
  }
  if ((ulong ****)ppppuStack_e8[0x116] != (ulong ****)0x0) {
    unaff_x20 = (ulong *****)0x0;
    do {
      ppppuVar11 = ppppuStack_e8;
      FUN_0038d2ec(&ppppuStack_c0,1,ppppuStack_e8[0x118][(long)unaff_x20]);
      FUN_003ecb34(ppppuVar11 + 0x62,&ppppuStack_c0);
      unaff_x20 = (ulong *****)((long)unaff_x20 + 1);
    } while (unaff_x20 < ppppuStack_e8[0x116]);
  }
  ppppuStack_e8[0x116] = (ulong ****)0x0;
  FUN_003ed300(ppppuStack_e8 + 0xc6,ppppuStack_e8 + 0x62);
  *(undefined4 *)((long)ppppuStack_e8 + 0xcf4) = 0;
  if ((ulong ****)ppppuStack_e8[200] != (ulong ****)0x0) {
    func_0x007732e0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x39e098);
    (*pcVar3)();
  }
  func_0x00391af0(ppppuStack_e8 + 0x87,*(undefined4 *)((long)ppppuStack_e8 + 0x774));
  if ((0 < (long)ppppuStack_f0[0x14d]) &&
     (pppppuVar6 = (ulong *****)ppppuStack_e8, func_0x0039d1d8(ppppuStack_e8,&ppppuStack_c0),
     (int)pppppuVar6 != 0)) {
    do {
      if (((ulong ****)ppppuStack_e8[0x13] == (ulong ****)0x0) &&
         (pppppuVar6 = (ulong *****)ppppuStack_e8, FUN_0039cf7c(ppppuStack_e8,ppppuStack_c0),
         (int)pppppuVar6 != 0)) {
        ppppuVar11 = (undefined8 ****)ppppuStack_c0[2];
        pppuVar14 = *ppppuVar11;
        do {
          while( true ) {
            if (pppuVar14 == (undefined8 ***)0x0) {
              FUN_0039d064(ppppuStack_e8,ppppuStack_c0);
              goto LAB_0039d778;
            }
            pppuVar18 = *ppppuVar11;
            if (pppuVar18 == pppuVar14) break;
            ClearExclusiveLocal();
            pppuVar14 = pppuVar18;
          }
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar11,0x10);
          if (bVar4) {
            *ppppuVar11 = (undefined8 ***)((long)pppuVar14 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
          pppuVar14 = pppuVar18;
        } while (cVar2 != '\0');
      }
LAB_0039d778:
      pppppuVar6 = (ulong *****)ppppuStack_e8;
      func_0x0039d1d8(ppppuStack_e8,&ppppuStack_c0);
    } while (((ulong)pppppuVar6 & 1) != 0);
  }
  if (ppppuStack_e8[0x66] < (ulong ****)0x100001) {
    ppppuStack_108 = ppppuStack_f0 + 0x19c;
    uStack_118 = 0xfffffffcfffffffd;
    uStack_120 = 0xfffffffeffffffff;
    uStack_128 = 0xfffffff6fffffff7;
    uStack_130 = 0xfffffff8fffffff9;
    uStack_138 = 0xffffffeffffffff0;
    uStack_140 = 0xfffffff1fffffff2;
    do {
      pppppuVar6 = (ulong *****)ppppuStack_e8;
      FUN_0039cfd4(ppppuStack_e8,&ppppuStack_c0);
      ppppuVar21 = ppppuStack_c0;
      ppppuVar11 = ppppuStack_e8;
      iVar5 = 0;
      if ((undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0) {
        iVar5 = (int)pppppuVar6;
      }
      if (iVar5 != 1) goto LAB_0039dde4;
      unaff_x21 = 0;
      unaff_x20 = (ulong *****)0x0;
      ppppuStack_b8 = ppppuStack_e8;
      ppppuStack_b0 = ppppuStack_c0;
      uStack_a8 = 0;
      uStack_a4 = uStack_a4 & 0xffffff00;
      uStack_a0 = 0;
      uStack_9c = uStack_9c & 0xffffff00;
      uStack_98 = 0;
      pppuStack_f8 = ppppuStack_f0[0x66];
      pppppuVar7 = &ppppuStack_e8;
      if (*(char *)(ppppuStack_c0 + 0xde) == '\0') {
        ppppuVar12 = (undefined8 ****)ppppuStack_c0[0x14];
        if (ppppuVar12 == (undefined8 ****)0x0) {
          unaff_x21 = 0;
          unaff_x20 = (ulong *****)0x0;
        }
        else {
          ppppuVar25 = ppppuVar12;
          if (((*(char *)(ppppuStack_e8 + 0xc5) == '\0') &&
              ((undefined8 ****)ppppuStack_c0[0xe9] == (undefined8 ****)0x0)) &&
             ((undefined8 ****)ppppuStack_c0[0x16] != (undefined8 ****)0x0)) {
            uVar17 = *(uint *)ppppuVar12;
            auVar27._4_4_ = uVar17;
            auVar27._0_4_ = uVar17;
            auVar27._8_4_ = uVar17;
            auVar27._12_4_ = uVar17;
            auVar31._8_8_ = uStack_118;
            auVar31._0_8_ = uStack_120;
            auVar31 = NEON_ushl(auVar27,auVar31,4);
            uVar29 = CONCAT14(auVar31[4],(uint)(auVar31[0] & 1)) & 0x1ffffffff;
            auVar28._8_8_ = uStack_138;
            auVar28._0_8_ = uStack_140;
            auVar32._8_8_ = uStack_128;
            auVar32._0_8_ = uStack_130;
            auVar32 = NEON_ushl(auVar27,auVar32,4);
            uVar30 = CONCAT14(auVar32[4],(uint)(auVar32[0] & 1)) & 0x1ffffffff;
            auVar28 = NEON_ushl(auVar27,auVar28,4);
            uVar26 = CONCAT14(auVar28[4],(uint)(auVar28[0] & 1)) & 0x1ffffffff;
            lVar10 = (ulong)((int)uVar26 + (uint)(byte)(uVar26 >> 0x20) +
                             (uint)(auVar28[8] & 1) + (uint)(auVar28[0xc] & 1) +
                             (uVar17 >> 0x12 & 1) + (uVar17 >> 0x13 & 1) + (uVar17 >> 0x14 & 1)) +
                     ((ulong)(uVar17 >> 0x15) & 1) +
                     (ulong)((int)uVar30 + (uint)(byte)(uVar30 >> 0x20) +
                             (uint)(auVar32[8] & 1) + (uint)(auVar32[0xc] & 1) + (uVar17 >> 0xb & 1)
                            + (uVar17 >> 0xc & 1) + (uVar17 >> 0xd & 1)) +
                     (ulong)((int)uVar29 + (uint)(byte)(uVar29 >> 0x20) +
                             (uint)(auVar31[8] & 1) + (uint)(auVar31[0xc] & 1) + (uVar17 & 1) +
                            (uVar17 >> 5 & 1) + (uVar17 >> 6 & 1));
            if (((uVar17 >> 0x16 & 1) != 0) && ((undefined8 ***)0x1 < ppppuVar12[0xc])) {
              lVar10 = lVar10 + ((long)ppppuVar12[0xc] * 0x10 - 0x20U >> 5) + 1;
            }
            pppuVar14 = ppppuVar12[0x3f];
            if ((pppuVar14 != (undefined8 ***)0x0) && (pppuVar14[1] == (undefined8 **)0x0)) {
              pppuVar14 = (undefined8 ***)0x0;
            }
LAB_0039dd44:
            ppuVar19 = (undefined8 **)0x0;
            while( true ) {
              while (pppuVar14 != (undefined8 ***)0x0) {
                ppuVar19 = (undefined8 **)((long)ppuVar19 + 1);
                while (ppuVar19 == pppuVar14[1]) {
                  ppuVar19 = (undefined8 **)0x0;
                  pppuVar14 = (undefined8 ***)*pppuVar14;
                  if (pppuVar14 == (undefined8 ***)0x0) goto LAB_0039dd44;
                }
              }
              if (ppuVar19 == (undefined8 **)0x0) break;
              pppuVar14 = (undefined8 ***)0x0;
              ppuVar19 = (undefined8 **)((long)ppuVar19 + 1);
            }
            ppppuStack_c0 = (ulong ****)&ppppuStack_e8;
            FUN_0039e378();
            ppppuVar25 = (undefined8 ****)ppppuVar21[0x14];
            pppppuVar7 = (undefined8 *****)ppppuStack_c0;
            if ((undefined8 ****)(lVar10 + ((ulong)(uVar17 >> 0x17) & 1)) != ppppuVar12)
            goto LAB_0039d9a8;
            if ((*(uint *)ppppuVar25 >> 3 & 1) == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulong)*(uint *)((long)ppppuVar25 + 0x1a4) | 0x100000000;
            }
            uStack_a4 = (uint)uVar20;
            unaff_x20 = (ulong *****)(uVar20 >> 0x20);
            uStack_a0 = (undefined1)(uVar20 >> 0x20);
            if ((*(uint *)ppppuVar25 >> 5 & 1) == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulong)*(uint *)((long)ppppuVar25 + 0x19c) | 0x100000000;
            }
            uStack_9c = (uint)uVar20;
            unaff_x21 = uVar20 >> 0x20;
            uStack_98 = (undefined1)(uVar20 >> 0x20);
          }
          else {
LAB_0039d9a8:
            ppppuStack_c0 = (ulong ****)pppppuVar7;
            uVar20 = uStack_90;
            uStack_90._0_5_ = (uint5)*(uint *)((long)ppppuVar21 + 0x9c);
            uStack_90._6_2_ = SUB82(uVar20,6);
            uStack_90._0_6_ = CONCAT15(*(int *)((long)ppppuVar11 + 0x78c) != 0,(uint5)uStack_90);
            uStack_88 = (ulong)*(uint *)((long)ppppuVar11 + 0x784);
            ppppuStack_80 = ppppuVar21 + 0x2a;
            FUN_0039e318(ppppuVar11 + 0x87,&uStack_90,ppppuVar25,ppppuVar11 + 0x62);
            FUN_00385e88(ppppuVar11);
            unaff_x21 = 0;
            unaff_x20 = (ulong *****)0x0;
            uStack_e0 = CONCAT44(uStack_e0._4_4_ + 1,(int)uStack_e0);
          }
          ppppuVar21[0x14] = (ulong ***)0x0;
          *(undefined1 *)(ppppuVar21 + 0xde) = 1;
          uStack_ce = 1;
          uStack_90 = 0;
          FUN_00384d78(ppppuVar11,ppppuVar21,ppppuVar21 + 0x15,&uStack_90,
                       "send_initial_metadata_finished");
          pppppuVar7 = (undefined8 *****)ppppuStack_c0;
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
            pppppuVar7 = (undefined8 *****)ppppuStack_c0;
          }
        }
      }
      ppppuStack_c0 = (ulong ****)pppppuVar7;
      if (*(char *)((long)ppppuVar21 + 0x169) == '\0') {
        pppppuVar7 = (undefined8 *****)(ppppuVar21 + 0xdf);
        FUN_0038c338();
        if ((int)pppppuVar7 != 0) {
          FUN_0038e344(&uStack_90,*(undefined4 *)((long)ppppuVar21 + 0x9c),pppppuVar7,
                       ppppuVar21 + 0x2a);
          FUN_003ecb34(ppppuVar11 + 0x62,&uStack_90);
          FUN_00385e88(ppppuVar11);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
        }
      }
      if (*(char *)(ppppuVar21 + 0xde) == '\0') {
        unaff_x22 = 0;
      }
      else {
        ppppuVar12 = (undefined8 ****)ppppuVar21[0xe9];
        if (ppppuVar12 == (undefined8 ****)0x0) {
LAB_0039daf8:
          unaff_x22 = 0;
        }
        else {
          ppppuVar22 = (ulong ****)
                       (ulong)((uint)((long)ppppuVar21[0xe1] + (ulong)*(uint *)(ppppuVar11 + 0xf0))
                              & ((uint)((long)((long)ppppuVar21[0xe1] +
                                              (ulong)*(uint *)(ppppuVar11 + 0xf0)) >> 0x3f) ^
                                0xffffffff));
          ppppuVar24 = (ulong ****)ppppuVar11[0x14d];
          ppppuVar1 = ppppuVar24;
          if ((long)ppppuVar22 <= (long)ppppuVar24) {
            ppppuVar1 = ppppuVar22;
          }
          uVar17 = *(uint *)((long)ppppuVar11 + 0x784);
          if ((uint)ppppuVar1 <= *(uint *)((long)ppppuVar11 + 0x784)) {
            uVar17 = (uint)ppppuVar1;
          }
          if (uVar17 == 0) {
            if ((long)ppppuVar24 < 1) {
              func_0x0039d1a0(ppppuVar11,ppppuVar21);
            }
            else if (ppppuVar22 == (ulong ****)0x0) {
              func_0x0039d1e8(ppppuVar11,ppppuVar21);
            }
            goto LAB_0039daf8;
          }
          ppppuVar25 = (undefined8 ****)ppppuVar21[0xdf];
          pppuStack_100 = ppppuVar21[0x10d];
          do {
            if ((((undefined8 ****)(ulong)uVar17 < ppppuVar12) ||
                (ppppuVar23 = (undefined8 ****)ppppuVar21[0x16], ppppuVar23 == (undefined8 ****)0x0)
                ) || (*(int *)ppppuVar23 != 0)) {
              bVar4 = false;
            }
            else if (ppppuVar23[0x3f] == (undefined8 ***)0x0) {
              bVar4 = true;
            }
            else {
              bVar4 = ppppuVar23[0x3f][1] == (undefined8 **)0x0;
            }
            ppppuVar23 = ppppuVar12;
            if ((undefined8 ****)(ulong)uVar17 <= ppppuVar12) {
              ppppuVar23 = (undefined8 ****)(ulong)uVar17;
            }
            FUN_0038c790(*(undefined4 *)((long)ppppuVar21 + 0x9c),ppppuVar21 + 0xe5,ppppuVar23,bVar4
                         ,ppppuVar21 + 0x2a,ppppuVar11 + 0x62);
            ppppuVar25[0x18] = (undefined8 ***)((long)ppppuVar25[0x18] - (long)ppppuVar23);
            ppppuVar13 = (undefined8 ****)ppppuVar21[0xe1];
            ppppuVar21[0xe1] = (ulong ***)((long)ppppuVar13 - (long)ppppuVar23);
            ppppuVar21[0x10d] = (ulong ***)((long)ppppuVar21[0x10d] + (long)ppppuVar23);
            ppppuVar12 = (undefined8 ****)ppppuVar21[0xe9];
            if (ppppuVar12 == (undefined8 ****)0x0) break;
            lVar10 = (long)((long)ppppuVar13 - (long)ppppuVar23) +
                     (ulong)*(uint *)(ppppuVar11 + 0xf0);
            ppppuVar22 = (ulong ****)(ulong)((uint)lVar10 & ((uint)(lVar10 >> 0x3f) ^ 0xffffffff));
            ppppuVar1 = (ulong ****)ppppuVar11[0x14d];
            if ((long)ppppuVar22 <= (long)ppppuVar11[0x14d]) {
              ppppuVar1 = ppppuVar22;
            }
            uVar17 = *(uint *)((long)ppppuVar11 + 0x784);
            if ((uint)ppppuVar1 <= *(uint *)((long)ppppuVar11 + 0x784)) {
              uVar17 = (uint)ppppuVar1;
            }
          } while (uVar17 != 0);
          FUN_00385e88(ppppuVar11);
          if (bVar4 != false) {
            FUN_0039f2e0(&ppppuStack_c0);
          }
          uStack_90 = 0;
          pppppuVar6 = (ulong *****)ppppuVar11;
          FUN_0039e1cc(ppppuVar11,ppppuVar21,(long)ppppuVar21[0x10d] - (long)pppuStack_100,
                       ppppuVar21 + 0x10a,ppppuVar21 + 0x1b,&uStack_90);
          if ((int)pppppuVar6 != 0) {
            uStack_ce = 1;
          }
          uStack_a8 = 1;
          if ((undefined8 ****)ppppuVar21[0xe9] != (undefined8 ****)0x0) {
            func_0x00383e94(ppppuVar21);
            FUN_0039cf7c(ppppuVar11,ppppuVar21);
          }
          iStack_d4 = iStack_d4 + 1;
          unaff_x22 = 1;
        }
        uVar20 = uStack_90;
        if (((*(char *)(ppppuVar21 + 0xde) != '\0') &&
            (ppppuVar12 = (undefined8 ****)ppppuVar21[0x16], ppppuVar12 != (undefined8 ****)0x0)) &&
           ((undefined8 ****)ppppuVar21[0xe9] == (undefined8 ****)0x0)) {
          uVar17 = *(uint *)ppppuVar12;
          if ((uVar17 == 0) &&
             ((ppppuVar12[0x3f] == (undefined8 ***)0x0 ||
              (ppppuVar12[0x3f][1] == (undefined8 **)0x0)))) {
            FUN_0038c790(*(undefined4 *)((long)ppppuVar21 + 0x9c),ppppuVar21 + 0xe5,0,1,
                         ppppuVar21 + 0x2a,ppppuVar11 + 0x62);
          }
          else {
            if ((int)unaff_x20 != 0) {
              uVar17 = uVar17 | 8;
              *(uint *)ppppuVar12 = uVar17;
              *(uint *)((long)ppppuVar12 + 0x1a4) = uStack_a4;
            }
            if ((int)unaff_x21 != 0) {
              *(uint *)ppppuVar12 = uVar17 | 0x20;
              *(uint *)((long)ppppuVar12 + 0x19c) = uStack_9c;
            }
            uStack_90._0_5_ = CONCAT14(1,*(undefined4 *)((long)ppppuVar21 + 0x9c));
            uStack_90._6_2_ = SUB82(uVar20,6);
            uStack_90._0_6_ = CONCAT15(*(int *)((long)ppppuVar11 + 0x78c) != 0,(uint5)uStack_90);
            uStack_88 = (ulong)*(uint *)((long)ppppuVar11 + 0x784);
            ppppuStack_80 = ppppuVar21 + 0x2a;
            FUN_0039e318(ppppuVar11 + 0x87,&uStack_90,ppppuVar12,ppppuVar11 + 0x62);
          }
          iStack_d8 = iStack_d8 + 1;
          FUN_00385e88(ppppuVar11);
          FUN_0039f2e0(&ppppuStack_c0);
          uStack_ce = 1;
          uStack_c8 = 0;
          FUN_00384d78(ppppuVar11,ppppuVar21,ppppuVar21 + 0x18,&uStack_c8,
                       "send_trailing_metadata_finished");
          if ((uStack_c8 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      lVar10 = (long)ppppuStack_f0[0x66] - (long)pppuStack_f8;
      if ((pppuStack_f8 <= ppppuStack_f0[0x66] && lVar10 != 0) &&
         (ppppuVar21[0x10f] = (ulong ***)(lVar10 + (long)ppppuVar21[0x10f]),
         *(char *)(ppppuVar21 + 0x10e) != '\0')) {
        iVar5 = (int)ppppuStack_f0[2];
        func_0x003bcf84();
        if (iVar5 != 0) {
          FUN_0038bbf0(ppppuStack_108,ppppuVar21);
        }
      }
      if (((int)unaff_x22 == 0) ||
         (pppppuVar6 = (ulong *****)ppppuStack_f0, func_0x0039d110(ppppuStack_f0,ppppuVar21),
         ((ulong)pppppuVar6 & 1) == 0)) {
        func_0x00383eac(ppppuVar21);
      }
    } while (ppppuStack_e8[0x66] < (ulong ****)0x100001);
  }
  uStack_cf = 1;
LAB_0039dde4:
  pppppuVar6 = (ulong *****)(ppppuStack_e8 + 0x135);
  FUN_0038be88(pppppuVar6,(ulong ****)ppppuStack_e8[100] != (ulong ****)0x0);
  ppppuVar11 = ppppuStack_e8;
  pppppuVar9 = pppppuVar6;
  if ((int)pppppuVar6 != 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    ppppuStack_80 = (ulong ****)0x0;
    FUN_0038e344(&ppppuStack_c0,0,pppppuVar6,&uStack_90);
    pppppuVar9 = &ppppuStack_c0;
    FUN_003ecb34(ppppuVar11 + 0x62);
    pppppuVar6 = (ulong *****)ppppuStack_e8;
    FUN_00385e88();
  }
  if ((((ulong ****)ppppuStack_f0[0x100] == (ulong ****)0x0) ||
      ((ulong ****)ppppuStack_f0[0x102] != (ulong ****)0x0)) ||
     ((*(char *)(ppppuStack_f0 + 0xc5) != '\0' &&
      ((*(int *)(ppppuStack_f0 + 0x108) == 0 && (*(int *)(ppppuStack_f0 + 0x105) != 0))))))
  goto LAB_0039e030;
  func_0x003c1f6c();
  *(undefined1 *)((long)*pppppuVar6 + 0x34) = 0;
  func_0x003c1f6c();
  unaff_x20 = (ulong *****)*pppppuVar6;
  FUN_003c1e28();
  pppppuVar6 = unaff_x20;
  if (*(char *)(ppppuStack_f0 + 0xc5) == '\0') {
    if (*(int *)(ppppuStack_f0 + 0xed) == 1) {
      puVar15 = (undefined *)0x0;
    }
    else {
      ppppuVar21 = (ulong ****)ppppuStack_f0[0x199];
      if (ppppuVar21 == (ulong ****)0x8000000000000000) {
        puVar15 = (undefined *)0x8000000000000000;
      }
      else if (ppppuVar21 == (ulong ****)0x7fffffffffffffff) {
        puVar15 = &UNK_00004e20;
      }
      else {
        if ((long)ppppuVar21 < 0) {
          ppppuVar21 = (ulong ****)((long)ppppuVar21 + 1);
        }
        puVar15 = (undefined *)((long)ppppuVar21 >> 1);
      }
    }
  }
  else {
    if (*(char *)(ppppuStack_f0 + 0x19b) == '\0') {
      pppppuVar6 = (ulong *****)(ppppuStack_f0 + 0x1f);
      func_0x0039d43c();
      if (pppppuVar6 == (ulong *****)0x0) {
        puVar15 = (undefined *)0x6ddd00;
        goto LAB_0039df04;
      }
    }
    puVar15 = (undefined *)0x3e8;
  }
LAB_0039df04:
  ppppuVar21 = (ulong ****)ppppuStack_f0[0x107];
  pppppuVar9 = (ulong *****)0x7fffffffffffffff;
  if (ppppuVar21 == (ulong ****)0x7fffffffffffffff) {
LAB_0039df14:
    if ((long)unaff_x20 < (long)pppppuVar9) {
      if (*(char *)(ppppuStack_f0 + 0x110) == '\0') {
        *(undefined1 *)(ppppuStack_f0 + 0x110) = 1;
        pppppuVar6 = (ulong *****)(ppppuStack_f0 + 1);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
          if (bVar4) {
            *pppppuVar6 = (ulong ****)((long)*pppppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppppuStack_f0[0x113] = (undefined8 ***)FUN_003850ec;
        ppppuStack_f0[0x114] = ppppuStack_f0;
        ppppuStack_f0[0x115] = (ulong ****)0x0;
        pppppuVar6 = (ulong *****)(ppppuStack_f0 + 0x109);
        func_0x003cf010(pppppuVar6,pppppuVar9,ppppuStack_f0 + 0x112);
      }
      goto LAB_0039e030;
    }
  }
  else if ((puVar15 != (undefined *)0x8000000000000000) &&
          (ppppuVar21 != (ulong ****)0x8000000000000000)) {
    if ((long)ppppuVar21 < 1) {
      if ((long)puVar15 < -0x8000000000000000 - (long)ppppuVar21) goto LAB_0039df9c;
    }
    else if ((long)((ulong)ppppuVar21 ^ 0x7fffffffffffffff) < (long)puVar15) goto LAB_0039df14;
    pppppuVar9 = (ulong *****)((long)ppppuVar21 + (long)puVar15);
    goto LAB_0039df14;
  }
LAB_0039df9c:
  ppppuStack_f0[0x107] = unaff_x20;
  ppppuStack_f0[0x104] = ppppuStack_f0[0x111];
  ppppuStack_f0[0x111] = (ulong ****)((long)ppppuStack_f0[0x111] + 1);
  func_0x003c1f14(&ppppuStack_c0,ppppuStack_f0 + 0xfe);
  if ((ulong ****)ppppuStack_f0[0x100] != (ulong ****)0x0) {
    if ((ulong ****)ppppuStack_f0[0x102] == (ulong ****)0x0) {
      ppppuStack_f0[0x103] = ppppuStack_f0[0x101];
      ppppuStack_f0[0x102] = ppppuStack_f0[0x100];
    }
    else {
      *ppppuStack_f0[0x103] = ppppuStack_f0[0x100];
      ppppuStack_f0[0x103] = ppppuStack_f0[0x101];
    }
    ppppuStack_f0[0x100] = (ulong ****)0x0;
    ppppuStack_f0[0x101] = (ulong ****)0x0;
  }
  FUN_0038d2ec(&ppppuStack_c0,0,ppppuStack_f0[0x104]);
  pppppuVar6 = (ulong *****)(ppppuStack_f0 + 0x62);
  pppppuVar9 = &ppppuStack_c0;
  FUN_003ecb34();
  *(uint *)(ppppuStack_f0 + 0x108) =
       *(int *)(ppppuStack_f0 + 0x108) - (uint)(*(int *)(ppppuStack_f0 + 0x108) != 0);
LAB_0039e030:
  uStack_d0 = (ulong ****)ppppuStack_e8[100] != (ulong ****)0x0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    if ((int)pppppuVar9 != 0) {
      func_0x0040cf10();
    }
    pppppuVar8 = pppppuVar6;
    __Unwind_Resume();
    pcStack_148 = FUN_0039e0ec;
    uStack_170 = unaff_x22;
    uStack_168 = unaff_x21;
    ppppuStack_160 = unaff_x20;
    ppppuStack_158 = pppppuVar6;
    puStack_150 = &stack0xfffffffffffffff0;
    if (pppppuVar8[0x19d] != (ulong ****)0x0) {
      func_0x003a9f48(pppppuVar8[0x19d],*(undefined4 *)(pppppuVar8 + 0x19e));
    }
    *(undefined4 *)(pppppuVar8 + 0x19e) = 0;
    pppppuVar6 = pppppuVar8;
    func_0x0039d150(pppppuVar8,&lStack_178);
    if ((int)pppppuVar6 != 0) {
      do {
        lVar10 = *(long *)(lStack_178 + 0x868);
        if (lVar10 != 0) {
          ppppuVar21 = *pppppuVar9;
          if (((ulong)ppppuVar21 & 1) != 0) {
            piVar16 = (int *)((long)ppppuVar21 + -1);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar4) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pppuStack_180 = ppppuVar21;
          FUN_0039e1cc(pppppuVar8,lStack_178,lVar10,lStack_178 + 0x858,lStack_178 + 0xd0,
                       &pppuStack_180);
          if (((ulong)ppppuVar21 & 1) != 0) {
            FUN_0055293c(ppppuVar21);
          }
          *(undefined8 *)(lStack_178 + 0x868) = 0;
        }
        func_0x00383eac(lStack_178);
        pppppuVar6 = pppppuVar8;
        func_0x0039d150(pppppuVar8,&lStack_178);
      } while (((ulong)pppppuVar6 & 1) != 0);
    }
    pppppuVar8 = pppppuVar8 + 0x62;
    func_0x003ecf8c(pppppuVar8);
    return pppppuVar8;
  }
  return (ulong *****)(ulong)CONCAT12(uStack_ce,CONCAT11(uStack_cf,uStack_d0));
}



/* Entry: 0039e0ec; end: 0039e1cb;  */

void FUN_0039e0ec(ulong param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0xce8) != 0) {
    func_0x003a9f48(*(long *)(param_1 + 0xce8),*(undefined4 *)(param_1 + 0xcf0));
  }
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  uVar5 = param_1;
  func_0x0039d150(param_1,&lStack_38);
  if ((int)uVar5 != 0) {
    do {
      lVar3 = *(long *)(lStack_38 + 0x868);
      if (lVar3 != 0) {
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
        uStack_40 = uVar5;
        FUN_0039e1cc(param_1,lStack_38,lVar3,lStack_38 + 0x858,lStack_38 + 0xd0,&uStack_40);
        if ((uVar5 & 1) != 0) {
          FUN_0055293c(uVar5);
        }
        *(undefined8 *)(lStack_38 + 0x868) = 0;
      }
      func_0x00383eac(lStack_38);
      uVar5 = param_1;
      func_0x0039d150(param_1,&lStack_38);
    } while ((uVar5 & 1) != 0);
  }
  func_0x003ecf8c(param_1 + 0x310);
  return;
}



/* Entry: 0039e1cc; end: 0039e317;  */

undefined8
FUN_0039e1cc(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,ulong *param_6
            )

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uStack_58;
  
  plVar6 = (long *)*param_4;
  *param_4 = 0;
  *param_5 = *param_5 + param_3;
  if (plVar6 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      while (plVar7 = (long *)plVar6[2], *plVar6 <= *param_5) {
        uVar5 = *param_6;
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
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_58 = uVar5;
        FUN_00384d78(param_1,param_2,plVar6 + 1,&uStack_58,"finish_write_cb");
        if ((uStack_58 & 1) != 0) {
          FUN_0055293c();
        }
        plVar6[2] = *(long *)(param_1 + 0xac8);
        *(long **)(param_1 + 0xac8) = plVar6;
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
        }
        uVar3 = 1;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return 1;
        }
      }
      plVar6[2] = *param_4;
      *param_4 = (long)plVar6;
      plVar6 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return uVar3;
}


