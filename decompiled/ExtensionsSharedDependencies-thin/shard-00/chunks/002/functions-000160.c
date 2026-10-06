/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003ec120; end: 003ec14b;  */

ulong FUN_003ec120(ulong *param_1)

{
  if (*param_1 < 2) {
    return 0;
  }
  return param_1[1];
}



/* Entry: 003ec14c; end: 003ec17b;  */

void FUN_003ec14c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen();
  *param_1 = 1;
  param_1[1] = uVar1;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}



/* Entry: 003ec17c; end: 003ec1db;  */

void FUN_003ec17c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 qword param_5)

{
  segment_command *psVar1;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  psVar1->cmd = 1;
  psVar1->cmdsize = 0;
  *(code **)psVar1->segname = FUN_003ec934;
  *(undefined8 *)(psVar1->segname + 8) = param_4;
  psVar1->vmaddr = param_5;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = psVar1;
  return;
}



/* Entry: 003ec1dc; end: 003ec31b;  */

void FUN_003ec1dc(undefined8 *param_1,qword param_2,undefined8 param_3,undefined8 param_4)

{
  segment_command *psVar1;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  psVar1->cmd = 1;
  psVar1->cmdsize = 0;
  *(code **)psVar1->segname = FUN_003ec934;
  *(undefined8 *)(psVar1->segname + 8) = param_4;
  psVar1->vmaddr = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = psVar1;
  return;
}



/* Entry: 003ec31c; end: 003ec403;  */

void FUN_003ec31c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = param_2;
  _strlen();
  if (uVar3 != 0) {
    if (uVar3 < 0x18) {
      puVar2 = (undefined8 *)0x0;
      *(char *)(param_1 + 1) = (char)uVar3;
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      puVar2 = (undefined8 *)(uVar3 + 0x10);
      __Znam();
      *puVar2 = 1;
      puVar2[1] = FUN_003ec9ec;
      puVar4 = puVar2 + 2;
      param_1[1] = uVar3;
      param_1[2] = puVar4;
    }
    *param_1 = puVar2;
    puVar1 = (undefined8 *)((long)param_1 + 9);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(puVar1,param_2,uVar3);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003ec404; end: 003ec47b;  */

void FUN_003ec404(long *param_1,long *param_2,long *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *extraout_x8;
  long *plVar10;
  long *extraout_x8_00;
  long *plVar11;
  long *extraout_x8_01;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x20;
  undefined1 **ppuVar16;
  code *pcVar17;
  long alStack_a0 [7];
  long lStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar9 = (long)param_4 - (long)param_3;
  if (param_4 < param_3) {
    func_0x00775224();
LAB_003ec474:
    func_0x0077528c();
  }
  else {
    lVar14 = *param_2;
    if (lVar14 != 0) {
      if (param_4 <= (long *)param_2[1]) {
        lVar13 = param_2[2];
        param_1[1] = uVar9;
        param_1[2] = lVar13 + (long)param_3;
        *param_1 = lVar14;
        return;
      }
      goto LAB_003ec474;
    }
    if (param_4 <= (long *)(ulong)*(byte *)(param_2 + 1)) {
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)uVar9;
      lVar14 = (long)param_2 + (long)param_3 + 9;
      goto code_r0x0077a850;
    }
  }
  func_0x00775258();
  plVar5 = alStack_a0 + 4;
  pcStack_18 = FUN_003ec47c;
  ppuVar16 = &puStack_20;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = uVar9 - (long)param_3;
  if (uVar8 < 0x18) {
    *extraout_x8 = 0;
    *(char *)(extraout_x8 + 1) = (char)uVar8;
    if (*param_2 == 0) {
      lVar14 = (long)param_2 + 9;
    }
    else {
      lVar14 = param_2[2];
    }
    plVar5 = param_2;
    uVar9 = uVar8;
    puStack_20 = &stack0xfffffffffffffff0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      lVar14 = lVar14 + (long)param_3;
      puStack_20 = &stack0xfffffffffffffff0;
      param_1 = extraout_x8;
code_r0x0077a850:
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)((long)param_1 + 9,lVar14);
      return;
    }
  }
  else {
    alStack_a0[5] = param_2[1];
    alStack_a0[4] = *param_2;
    lStack_68 = param_2[3];
    alStack_a0[6] = param_2[2];
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_003ec404(&lStack_58);
    extraout_x8[1] = lStack_50;
    *extraout_x8 = lStack_58;
    extraout_x8[3] = lStack_40;
    extraout_x8[2] = lStack_48;
    plVar10 = (long *)*extraout_x8;
    if (plVar10 != (long *)((long)&MACH_HEADER.magic + 1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  }
  pcVar17 = (code *)0x3ec568;
  ___stack_chk_fail();
  plVar10 = alStack_a0 + 4;
  plVar11 = extraout_x8_00;
  plVar15 = extraout_x8;
  do {
    plVar7 = param_3;
    plVar6 = plVar5;
    *(long **)((long)plVar10 + -0x20) = unaff_x20;
    *(long **)((long)plVar10 + -0x18) = plVar15;
    *(undefined1 ***)((long)plVar10 + -0x10) = ppuVar16;
    *(code **)((long)plVar10 + -8) = pcVar17;
    ppuVar16 = (undefined1 **)((long)plVar10 + -0x10);
    plVar15 = (long *)*plVar6;
    if (plVar15 == (long *)((long)&MACH_HEADER.magic + 1)) {
      lVar14 = plVar6[1];
      plVar11[2] = plVar6[2] + (long)plVar7;
      *plVar11 = 1;
      plVar11[1] = lVar14 - (long)plVar7;
LAB_003ec668:
      plVar6[1] = (long)plVar7;
      return;
    }
    plVar5 = plVar6;
    param_3 = plVar7;
    if (plVar15 == (long *)0x0) {
      bVar1 = *(byte *)(plVar6 + 1);
      if (plVar7 <= (long *)(ulong)bVar1) {
        *plVar11 = 0;
        uVar4 = (uint)bVar1 - (int)plVar7;
        *(char *)(plVar11 + 1) = (char)uVar4;
        _memcpy((long)plVar11 + 9,(long)plVar6 + (long)plVar7 + 9,uVar4 & 0xff);
        *(char *)(plVar6 + 1) = (char)plVar7;
        return;
      }
      func_0x007752f4();
    }
    else {
      uVar8 = plVar6[1] - (long)plVar7;
      if (plVar7 <= (long *)plVar6[1]) {
        iVar12 = (int)uVar9;
        if ((iVar12 != 1) && (uVar8 < 0x17)) {
          *plVar11 = 0;
          *(char *)(plVar11 + 1) = (char)uVar8;
          _memcpy((long)plVar11 + 9,plVar6[2] + (long)plVar7);
          goto LAB_003ec668;
        }
        if (iVar12 == 3) {
          *plVar11 = (long)plVar15;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = *plVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          plVar5 = plVar11;
          if (iVar12 != 2) {
            if (iVar12 != 1) goto LAB_003ec65c;
            *plVar11 = (long)plVar15;
            plVar5 = plVar6;
          }
          *plVar5 = 1;
        }
LAB_003ec65c:
        lVar14 = plVar6[2];
        plVar11[1] = uVar8;
        plVar11[2] = lVar14 + (long)plVar7;
        goto LAB_003ec668;
      }
    }
    pcVar17 = FUN_003ec680;
    func_0x007752c0();
    uVar9 = 3;
    plVar10 = (long *)((long)plVar10 + -0x20);
    plVar11 = extraout_x8_01;
    plVar15 = plVar7;
    unaff_x20 = plVar6;
  } while( true );
}



/* Entry: 003ec47c; end: 003ec67f;  */

void FUN_003ec47c(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *extraout_x8;
  long *plVar12;
  long *extraout_x8_00;
  int iVar13;
  long *plVar14;
  long *unaff_x20;
  code *pcVar15;
  long alStack_90 [7];
  long lStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 *puVar6;
  
  plVar7 = alStack_90 + 4;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = param_4 - (long)param_3;
  if (uVar10 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)uVar10;
    if (*param_2 == 0) {
      lVar11 = (long)param_2 + 9;
    }
    else {
      lVar11 = param_2[2];
    }
    plVar7 = param_2;
    param_4 = uVar10;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)((long)param_1 + 9,lVar11 + (long)param_3);
      return;
    }
  }
  else {
    alStack_90[5] = param_2[1];
    alStack_90[4] = *param_2;
    lStack_58 = param_2[3];
    alStack_90[6] = param_2[2];
    FUN_003ec404(&uStack_48);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    plVar14 = (long *)*param_1;
    if (plVar14 != (long *)((long)&MACH_HEADER.magic + 1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return;
    }
  }
  pcVar15 = (code *)0x3ec568;
  ___stack_chk_fail();
  plVar14 = alStack_90 + 4;
  plVar12 = extraout_x8;
  puVar5 = (undefined1 *)register0x00000008;
  do {
    puVar9 = param_3;
    plVar8 = plVar7;
    puVar6 = (undefined1 *)plVar14;
    *(long **)(puVar6 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar6 + -0x18) = param_1;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(code **)(puVar6 + -8) = pcVar15;
    plVar14 = (long *)*plVar8;
    if (plVar14 == (long *)((long)&MACH_HEADER.magic + 1)) {
      lVar11 = plVar8[1];
      plVar12[2] = plVar8[2] + (long)puVar9;
      *plVar12 = 1;
      plVar12[1] = lVar11 - (long)puVar9;
LAB_003ec668:
      plVar8[1] = (long)puVar9;
      return;
    }
    plVar7 = plVar8;
    param_3 = puVar9;
    if (plVar14 == (long *)0x0) {
      bVar1 = *(byte *)(plVar8 + 1);
      if (puVar9 <= (undefined8 *)(ulong)bVar1) {
        *plVar12 = 0;
        uVar4 = (uint)bVar1 - (int)puVar9;
        *(char *)(plVar12 + 1) = (char)uVar4;
        _memcpy((long)plVar12 + 9,(long)plVar8 + (long)puVar9 + 9,uVar4 & 0xff);
        *(char *)(plVar8 + 1) = (char)puVar9;
        return;
      }
      func_0x007752f4();
    }
    else {
      uVar10 = plVar8[1] - (long)puVar9;
      if (puVar9 <= (undefined8 *)plVar8[1]) {
        iVar13 = (int)param_4;
        if ((iVar13 != 1) && (uVar10 < 0x17)) {
          *plVar12 = 0;
          *(char *)(plVar12 + 1) = (char)uVar10;
          _memcpy((long)plVar12 + 9,plVar8[2] + (long)puVar9);
          goto LAB_003ec668;
        }
        if (iVar13 == 3) {
          *plVar12 = (long)plVar14;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          plVar7 = plVar12;
          if (iVar13 != 2) {
            if (iVar13 != 1) goto LAB_003ec65c;
            *plVar12 = (long)plVar14;
            plVar7 = plVar8;
          }
          *plVar7 = 1;
        }
LAB_003ec65c:
        lVar11 = plVar8[2];
        plVar12[1] = uVar10;
        plVar12[2] = lVar11 + (long)puVar9;
        goto LAB_003ec668;
      }
    }
    pcVar15 = FUN_003ec680;
    func_0x007752c0();
    param_4 = 3;
    plVar14 = (long *)(puVar6 + -0x20);
    plVar12 = extraout_x8_00;
    param_1 = puVar9;
    unaff_x20 = plVar8;
    puVar5 = puVar6;
  } while( true );
}



/* Entry: 003ec680; end: 003ec687;  */

/* WARNING: Removing unreachable block (ram,0x003ec620) */
/* WARNING: Removing unreachable block (ram,0x003ec62c) */
/* WARNING: Removing unreachable block (ram,0x003ec634) */
/* WARNING: Removing unreachable block (ram,0x003ec63c) */

void FUN_003ec680(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long *plVar9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar7 = param_3;
    puVar6 = param_2;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar9 = (long *)*puVar6;
    if (plVar9 == (long *)((long)&MACH_HEADER.magic + 1)) {
      lVar8 = puVar6[1];
      param_1[2] = puVar6[2] + uVar7;
      *param_1 = 1;
      param_1[1] = lVar8 - uVar7;
LAB_003ec668:
      puVar6[1] = uVar7;
      return;
    }
    param_2 = puVar6;
    param_3 = uVar7;
    if (plVar9 == (long *)0x0) {
      bVar1 = *(byte *)(puVar6 + 1);
      if (uVar7 <= bVar1) {
        *param_1 = 0;
        uVar4 = (uint)bVar1 - (int)uVar7;
        *(char *)(param_1 + 1) = (char)uVar4;
        _memcpy((long)param_1 + 9,(long)puVar6 + uVar7 + 9,uVar4 & 0xff);
        *(char *)(puVar6 + 1) = (char)uVar7;
        return;
      }
      func_0x007752f4();
    }
    else {
      uVar5 = puVar6[1] - uVar7;
      if (uVar7 <= (ulong)puVar6[1]) {
        if (uVar5 < 0x17) {
          *param_1 = 0;
          *(char *)(param_1 + 1) = (char)uVar5;
          _memcpy((long)param_1 + 9,puVar6[2] + uVar7);
        }
        else {
          *param_1 = plVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar8 = puVar6[2];
          param_1[1] = uVar5;
          param_1[2] = lVar8 + uVar7;
        }
        goto LAB_003ec668;
      }
    }
    unaff_x30 = FUN_003ec680;
    func_0x007752c0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = uVar7;
    unaff_x20 = puVar6;
  } while( true );
}



/* Entry: 003ec688; end: 003ec787;  */

long * FUN_003ec688(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  plVar9 = (long *)*param_2;
  if (plVar9 == (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (param_3 <= (long *)(ulong)bVar1) {
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)param_3;
      plVar9 = (long *)((long)param_2 + 9);
      _memcpy((long)param_1 + 9,plVar9,param_3);
      uVar4 = (uint)bVar1 - (int)param_3;
      *(char *)(param_2 + 1) = (char)uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_0099a400)
                (plVar9,(undefined1 *)((long)plVar9 + (long)param_3),uVar4 & 0xff);
      return plVar9;
    }
    func_0x00775328();
LAB_003ec780:
    func_0x0077535c();
  }
  else {
    plVar8 = (long *)param_2[1];
    if (param_3 < (long *)((long)&MACH_HEADER.sizeofcmds + 3)) {
      if (param_3 <= plVar8) {
        *param_1 = 0;
        *(char *)(param_1 + 1) = (char)param_3;
        plVar9 = (long *)((long)param_1 + 9);
        lVar12 = param_2[2];
        _memcpy(plVar9,lVar12,param_3);
        param_2[1] = (long)plVar8 - (long)param_3;
        param_2[2] = (long)(lVar12 + (long)param_3);
        return plVar9;
      }
      goto LAB_003ec780;
    }
    if (param_3 <= plVar8) {
      *param_1 = plVar9;
      if (plVar9 != (long *)((long)&MACH_HEADER.magic + 1)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = (long *)param_2[1];
      }
      lVar12 = param_2[2];
      param_1[1] = param_3;
      param_1[2] = lVar12;
      param_2[1] = (long)plVar8 - (long)param_3;
      param_2[2] = (long)(lVar12 + (long)param_3);
      return param_2;
    }
  }
  func_0x00775390();
  lVar12 = *param_2;
  if (lVar12 == 0) {
    uVar6 = (ulong)*(byte *)(param_2 + 1);
    uVar10 = uVar6;
  }
  else {
    uVar6 = param_2[1];
    uVar10 = (ulong)((uint)uVar6 & 0xff);
  }
  if (*param_3 == 0) {
    uVar11 = (ulong)*(byte *)(param_3 + 1);
  }
  else {
    uVar11 = param_3[1];
  }
  if (uVar6 != uVar11) {
    return (long *)0x0;
  }
  if (lVar12 == 0) {
    if ((int)uVar10 == 0) goto LAB_003ec824;
    lVar7 = (long)param_2 + 9;
  }
  else {
    if (param_2[1] == 0) {
LAB_003ec824:
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    uVar10 = (ulong)((uint)param_2[1] & 0xff);
    lVar7 = param_2[2];
  }
  if (*param_3 == 0) {
    puVar5 = (undefined1 *)((long)param_3 + 9);
  }
  else {
    puVar5 = (undefined1 *)param_3[2];
  }
  if (lVar12 != 0) {
    uVar10 = param_2[1];
  }
  _memcmp(lVar7,puVar5,uVar10);
  return (long *)(ulong)((int)lVar7 == 0);
}



/* Entry: 003ec788; end: 003ec82f;  */

bool FUN_003ec788(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar2 = (ulong)*(byte *)(param_1 + 1);
    uVar5 = uVar2;
  }
  else {
    uVar2 = param_1[1];
    uVar5 = (ulong)((uint)uVar2 & 0xff);
  }
  if (*param_2 == 0) {
    uVar6 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar6 = param_2[1];
  }
  if (uVar2 == uVar6) {
    if (lVar4 == 0) {
      if ((int)uVar5 == 0) {
        return true;
      }
      lVar3 = (long)param_1 + 9;
    }
    else {
      if (param_1[1] == 0) {
        return true;
      }
      uVar5 = (ulong)((uint)param_1[1] & 0xff);
      lVar3 = param_1[2];
    }
    if (*param_2 == 0) {
      lVar1 = (long)param_2 + 9;
    }
    else {
      lVar1 = param_2[2];
    }
    if (lVar4 != 0) {
      uVar5 = param_1[1];
    }
    _memcmp(lVar3,lVar1,uVar5);
    return (int)lVar3 == 0;
  }
  return false;
}



/* Entry: 003ec830; end: 003ec897;  */

ulong FUN_003ec830(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2;
  _strlen();
  if (*param_1 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 1) - (int)uVar2;
    if (uVar1 != 0) goto LAB_003ec878;
    uVar3 = (long)param_1 + 9;
  }
  else {
    uVar1 = (int)param_1[1] - (int)uVar2;
    if (uVar1 != 0) {
LAB_003ec878:
      return (ulong)uVar1;
    }
    uVar3 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcmp_0099a3f0)(uVar3,param_2);
  return uVar3;
}



/* Entry: 003ec898; end: 003ec933;  */

void FUN_003ec898(long *param_1,long *param_2)

{
  long *plVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    lStack_38 = param_1[1];
    lStack_40 = *param_1;
    lStack_28 = param_1[3];
    lStack_30 = param_1[2];
    lStack_58 = param_2[1];
    lStack_60 = *param_2;
    lStack_48 = param_2[3];
    lStack_50 = param_2[2];
    plVar1 = &lStack_40;
    FUN_003ec788(plVar1,&lStack_60);
  }
  else if (param_1[1] == param_2[1]) {
    plVar1 = (long *)(ulong)(param_1[2] == param_2[2]);
  }
  else {
    plVar1 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (plVar1 != (long *)0x0) {
    (*(code *)plVar1[2])(plVar1[3]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 003ec934; end: 003ec96f;  */

void FUN_003ec934(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003ec970; end: 003ec9b3;  */

void FUN_003ec970(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003ec9b4; end: 003ec9eb;  */

void FUN_003ec9b4(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003ec9ec; end: 003eca27;  */

void FUN_003ec9ec(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_0099c618)();
    return;
  }
  return;
}



/* Entry: 003eca28; end: 003ecad7;  */

void FUN_003eca28(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [72];
  
  plVar3 = param_1;
  func_0x003c1f6c();
  if (*plVar3 == 0) {
    FUN_003413d4(auStack_68);
    param_1 = (long *)*param_1;
    if ((long *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar4 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)param_1[1])();
      }
    }
    FUN_00341470(auStack_68);
  }
  else {
    param_1 = (long *)*param_1;
    if ((long *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar4 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003eca78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[1])();
        return;
      }
    }
  }
  return;
}



/* Entry: 003ecad8; end: 003ecb33;  */

long * FUN_003ecad8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  UNRECOVERED_JUMPTABLE = (code *)&uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_003ecb34();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = param_1[2];
  if (lVar12 == 0) {
    lVar11 = *(long *)UNRECOVERED_JUMPTABLE;
    goto LAB_003ecbc4;
  }
  lVar8 = param_1[1];
  lVar9 = lVar12 + -1;
  plVar6 = (long *)(lVar8 + lVar9 * 0x20);
  lVar11 = *(long *)UNRECOVERED_JUMPTABLE;
  if (lVar11 == 0 || lVar8 == 0) {
    if (lVar11 == 0) {
      if (*plVar6 == 0) {
        pbVar14 = (byte *)(lVar8 + lVar9 * 0x20 + 8);
        uVar7 = (ulong)*pbVar14;
        if (uVar7 < 0x17) {
          if ((uint)(byte)UNRECOVERED_JUMPTABLE[8] + (uint)*pbVar14 < 0x18) {
            plVar6 = (long *)((long)plVar6 + uVar7 + 9);
            pcVar4 = UNRECOVERED_JUMPTABLE + 9;
            _memcpy();
            *pbVar14 = (char)UNRECOVERED_JUMPTABLE[8] + *pbVar14;
          }
          else {
            lVar11 = 0x17 - uVar7;
            _memcpy((long)plVar6 + uVar7 + 9,UNRECOVERED_JUMPTABLE + 9,lVar11);
            *pbVar14 = 0x17;
            FUN_003ed09c(param_1);
            puVar1 = (undefined8 *)(param_1[1] + lVar12 * 0x20);
            param_1[2] = lVar12 + 1;
            *puVar1 = 0;
            *(char *)(puVar1 + 1) = (char)UNRECOVERED_JUMPTABLE[8] - (char)lVar11;
            plVar6 = (long *)((long)puVar1 + 9);
            pcVar4 = UNRECOVERED_JUMPTABLE + 9 + lVar11;
            _memcpy(plVar6,pcVar4,(ulong)(byte)UNRECOVERED_JUMPTABLE[8] - lVar11);
          }
LAB_003ecd78:
          param_1[4] = param_1[4] + (ulong)(byte)UNRECOVERED_JUMPTABLE[8];
          UNRECOVERED_JUMPTABLE = pcVar4;
          goto LAB_003ecc14;
        }
      }
      lVar11 = 0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
LAB_003ecbcc:
    uVar13 = *(ulong *)(UNRECOVERED_JUMPTABLE + 8);
    lVar9 = *(long *)(UNRECOVERED_JUMPTABLE + 0x18);
    lVar8 = *(long *)(UNRECOVERED_JUMPTABLE + 0x10);
    plVar6 = param_1;
    FUN_003ed09c();
    plVar10 = (long *)(param_1[1] + lVar12 * 0x20);
    *plVar10 = lVar11;
    plVar10[1] = uVar13;
    plVar10[3] = lVar9;
    plVar10[2] = lVar8;
    uVar7 = uVar13 & 0xff;
    if (!bVar3) {
      uVar7 = uVar13;
    }
    param_1[4] = param_1[4] + uVar7;
    param_1[2] = lVar12 + 1;
  }
  else {
    if (lVar11 != *plVar6) {
LAB_003ecbc4:
      bVar3 = lVar11 == 0;
      goto LAB_003ecbcc;
    }
    lVar8 = lVar8 + lVar9 * 0x20;
    plVar6 = (long *)(lVar8 + 8);
    lVar9 = *plVar6;
    if (*(long *)(UNRECOVERED_JUMPTABLE + 0x10) != *(long *)(lVar8 + 0x10) + lVar9)
    goto LAB_003ecbc4;
    *plVar6 = lVar9 + *(long *)(UNRECOVERED_JUMPTABLE + 8);
    plVar6 = *(long **)UNRECOVERED_JUMPTABLE;
    pcVar4 = UNRECOVERED_JUMPTABLE;
    if (plVar6 == (long *)0x0) goto LAB_003ecd78;
    param_1[4] = param_1[4] + *(long *)(UNRECOVERED_JUMPTABLE + 8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
      do {
        lVar12 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)plVar6[1];
        if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x003ecd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return plVar6;
        }
        goto LAB_003ecd8c;
      }
    }
  }
LAB_003ecc14:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return plVar6;
  }
LAB_003ecd8c:
  ___stack_chk_fail();
  plVar10 = (long *)plVar6[2];
  FUN_003ed09c();
  puVar1 = (undefined8 *)(plVar6[1] + (long)plVar10 * 0x20);
  uVar15 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
  uVar17 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
  uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
  puVar1[1] = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  if (*(long *)UNRECOVERED_JUMPTABLE == 0) {
    uVar7 = (ulong)(byte)UNRECOVERED_JUMPTABLE[8];
  }
  else {
    uVar7 = *(ulong *)(UNRECOVERED_JUMPTABLE + 8);
  }
  plVar6[4] = plVar6[4] + uVar7;
  plVar6[2] = (long)plVar10 + 1;
  return plVar10;
}



/* Entry: 003ecb34; end: 003ecd8f;  */

long * FUN_003ecb34(long *param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = param_1[2];
  if (lVar12 == 0) {
    lVar11 = *(long *)UNRECOVERED_JUMPTABLE;
    goto LAB_003ecbc4;
  }
  lVar8 = param_1[1];
  lVar9 = lVar12 + -1;
  plVar6 = (long *)(lVar8 + lVar9 * 0x20);
  lVar11 = *(long *)UNRECOVERED_JUMPTABLE;
  if (lVar11 == 0 || lVar8 == 0) {
    if (lVar11 == 0) {
      if (*plVar6 == 0) {
        pbVar14 = (byte *)(lVar8 + lVar9 * 0x20 + 8);
        uVar7 = (ulong)*pbVar14;
        if (uVar7 < 0x17) {
          if ((uint)(byte)UNRECOVERED_JUMPTABLE[8] + (uint)*pbVar14 < 0x18) {
            plVar6 = (long *)((long)plVar6 + uVar7 + 9);
            pcVar4 = UNRECOVERED_JUMPTABLE + 9;
            _memcpy();
            *pbVar14 = (char)UNRECOVERED_JUMPTABLE[8] + *pbVar14;
          }
          else {
            lVar11 = 0x17 - uVar7;
            _memcpy((long)plVar6 + uVar7 + 9,UNRECOVERED_JUMPTABLE + 9,lVar11);
            *pbVar14 = 0x17;
            FUN_003ed09c(param_1);
            puVar1 = (undefined8 *)(param_1[1] + lVar12 * 0x20);
            param_1[2] = lVar12 + 1;
            *puVar1 = 0;
            *(char *)(puVar1 + 1) = (char)UNRECOVERED_JUMPTABLE[8] - (char)lVar11;
            plVar6 = (long *)((long)puVar1 + 9);
            pcVar4 = UNRECOVERED_JUMPTABLE + 9 + lVar11;
            _memcpy(plVar6,pcVar4,(ulong)(byte)UNRECOVERED_JUMPTABLE[8] - lVar11);
          }
LAB_003ecd78:
          param_1[4] = param_1[4] + (ulong)(byte)UNRECOVERED_JUMPTABLE[8];
          UNRECOVERED_JUMPTABLE = pcVar4;
          goto LAB_003ecc14;
        }
      }
      lVar11 = 0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
LAB_003ecbcc:
    uVar13 = *(ulong *)(UNRECOVERED_JUMPTABLE + 8);
    lVar9 = *(long *)(UNRECOVERED_JUMPTABLE + 0x18);
    lVar8 = *(long *)(UNRECOVERED_JUMPTABLE + 0x10);
    plVar6 = param_1;
    FUN_003ed09c();
    plVar10 = (long *)(param_1[1] + lVar12 * 0x20);
    *plVar10 = lVar11;
    plVar10[1] = uVar13;
    plVar10[3] = lVar9;
    plVar10[2] = lVar8;
    uVar7 = uVar13 & 0xff;
    if (!bVar3) {
      uVar7 = uVar13;
    }
    param_1[4] = param_1[4] + uVar7;
    param_1[2] = lVar12 + 1;
  }
  else {
    if (lVar11 != *plVar6) {
LAB_003ecbc4:
      bVar3 = lVar11 == 0;
      goto LAB_003ecbcc;
    }
    lVar8 = lVar8 + lVar9 * 0x20;
    plVar6 = (long *)(lVar8 + 8);
    lVar9 = *plVar6;
    if (*(long *)(UNRECOVERED_JUMPTABLE + 0x10) != *(long *)(lVar8 + 0x10) + lVar9)
    goto LAB_003ecbc4;
    *plVar6 = lVar9 + *(long *)(UNRECOVERED_JUMPTABLE + 8);
    plVar6 = *(long **)UNRECOVERED_JUMPTABLE;
    pcVar4 = UNRECOVERED_JUMPTABLE;
    if (plVar6 == (long *)0x0) goto LAB_003ecd78;
    param_1[4] = param_1[4] + *(long *)(UNRECOVERED_JUMPTABLE + 8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
      do {
        lVar12 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)plVar6[1];
        if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x003ecd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return plVar6;
        }
        goto LAB_003ecd8c;
      }
    }
  }
LAB_003ecc14:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return plVar6;
  }
LAB_003ecd8c:
  ___stack_chk_fail();
  plVar10 = (long *)plVar6[2];
  FUN_003ed09c();
  puVar1 = (undefined8 *)(plVar6[1] + (long)plVar10 * 0x20);
  uVar15 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
  uVar17 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
  uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
  puVar1[1] = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
  *puVar1 = uVar15;
  puVar1[3] = uVar17;
  puVar1[2] = uVar16;
  if (*(long *)UNRECOVERED_JUMPTABLE == 0) {
    uVar7 = (ulong)(byte)UNRECOVERED_JUMPTABLE[8];
  }
  else {
    uVar7 = *(ulong *)(UNRECOVERED_JUMPTABLE + 8);
  }
  plVar6[4] = plVar6[4] + uVar7;
  plVar6[2] = (long)plVar10 + 1;
  return plVar10;
}



/* Entry: 003ecd90; end: 003ecdfb;  */

long FUN_003ecd90(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  FUN_003ed09c();
  plVar1 = (long *)(*(long *)(param_1 + 8) + lVar3 * 0x20);
  lVar4 = *param_2;
  lVar6 = param_2[3];
  lVar5 = param_2[2];
  plVar1[1] = param_2[1];
  *plVar1 = lVar4;
  plVar1[3] = lVar6;
  plVar1[2] = lVar5;
  if (*param_2 == 0) {
    uVar2 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar2 = param_2[1];
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar2;
  *(long *)(param_1 + 0x10) = lVar3 + 1;
  return lVar3;
}



/* Entry: 003ecdfc; end: 003ece47;  */

void FUN_003ecdfc(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    lVar4 = *plVar3;
    lVar6 = plVar3[3];
    lVar5 = plVar3[2];
    param_1[1] = plVar3[1];
    *param_1 = lVar4;
    param_1[3] = lVar6;
    param_1[2] = lVar5;
    *(long **)(param_2 + 8) = plVar3 + 4;
    *(long *)(param_2 + 0x10) = lVar2 + -1;
    uVar1 = param_1[1] & 0xff;
    if (*param_1 != 0) {
      uVar1 = param_1[1];
    }
    *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar1;
    return;
  }
  func_0x007753c4();
  lVar2 = *(long *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar2 + -0x20;
  lVar4 = *param_3;
  lVar6 = param_3[3];
  lVar5 = param_3[2];
  *(long *)(lVar2 + -0x18) = param_3[1];
  *(long *)(lVar2 + -0x20) = lVar4;
  *(long *)(lVar2 + -8) = lVar6;
  *(long *)(lVar2 + -0x10) = lVar5;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  if (*param_3 == 0) {
    uVar1 = (ulong)*(byte *)(param_3 + 1);
  }
  else {
    uVar1 = param_3[1];
  }
  *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + uVar1;
  return;
}



/* Entry: 003ece48; end: 003ece8b;  */

void FUN_003ece48(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1 + -0x20;
  lVar3 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  *(long *)(lVar1 + -0x18) = param_2[1];
  *(long *)(lVar1 + -0x20) = lVar3;
  *(long *)(lVar1 + -8) = lVar5;
  *(long *)(lVar1 + -0x10) = lVar4;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (*param_2 == 0) {
    uVar2 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar2 = param_2[1];
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar2;
  return;
}



/* Entry: 003ece8c; end: 003ecf37;  */

void FUN_003ece8c(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,*(undefined8 *)(param_2 + 0x20));
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_2 + 8);
      if (*(long *)(lVar3 + lVar4) == 0) {
        lVar1 = lVar3 + lVar4 + 9;
        uVar2 = (ulong)*(byte *)(lVar3 + lVar4 + 8);
      }
      else {
        uVar2 = *(ulong *)(lVar3 + lVar4 + 8);
        lVar1 = *(long *)(lVar3 + lVar4 + 0x10);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,lVar1,uVar2);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar5 < *(ulong *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 003ecf38; end: 003ecf53;  */

void FUN_003ecf38(long *param_1)

{
  param_1[4] = 0;
  param_1[3] = 8;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 5);
  param_1[1] = (long)(param_1 + 5);
  return;
}



/* Entry: 003ecf54; end: 003ed09b;  */

void FUN_003ecf54(long *param_1)

{
  long *plVar1;
  
  func_0x003ecf8c();
  plVar1 = param_1 + 5;
  if ((long *)*param_1 != plVar1) {
    FUN_00338cb8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 003ed09c; end: 003ed0d3;  */

void FUN_003ed09c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1[2] == 0) {
    param_1[1] = *param_1;
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 5;
  if (param_1[2] + lVar1 != param_1[3]) {
    return;
  }
  if (lVar1 == 0) {
    uVar2 = (ulong)(param_1[3] * 3) >> 1;
    param_1[3] = uVar2;
    plVar3 = (long *)*param_1;
    lVar1 = uVar2 << 5;
    if (plVar3 == param_1 + 5) {
      FUN_00338c74();
      *param_1 = lVar1;
      _memcpy();
      plVar3 = (long *)*param_1;
    }
    else {
      FUN_00338cbc();
      *param_1 = (long)plVar3;
    }
    param_1[1] = (long)plVar3;
  }
  else {
    _memmove(*param_1,param_1[1],param_1[2] << 5);
    param_1[1] = *param_1;
  }
  return;
}



/* Entry: 003ed0d4; end: 003ed153;  */

void FUN_003ed0d4(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    lVar2 = param_1;
    FUN_003ecb34(param_1,&uStack_60);
    param_2 = param_2 + 4;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x10) + -1;
    *(long *)(lVar2 + 0x10) = lVar3;
    plVar1 = (long *)(*(long *)(lVar2 + 8) + lVar3 * 0x20);
    puVar4 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar5 = (ulong)(byte)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    *(ulong *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - uVar5;
  }
  return;
}



/* Entry: 003ed154; end: 003ed18f;  */

void FUN_003ed154(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_1 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar4;
  }
  return;
}



/* Entry: 003ed190; end: 003ed2ff;  */

void FUN_003ed190(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 unaff_x19;
  long *plVar13;
  undefined8 unaff_x20;
  long *plVar14;
  long *plVar15;
  undefined8 unaff_x21;
  long *plVar16;
  ulong uVar17;
  undefined8 unaff_x22;
  long *plVar18;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar19;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar20;
  undefined8 unaff_x30;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  
code_r0x003ed190:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar20 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  plVar16 = (long *)*param_1;
  unaff_x24 = (long *)(param_1[1] - (long)plVar16 >> 5);
  plVar8 = (long *)*param_2;
  unaff_x25 = (long *)(param_2[1] - (long)plVar8 >> 5);
  unaff_x26 = (long *)(param_2[2] + (long)unaff_x25);
  plVar15 = param_1 + 5;
  plVar4 = param_2 + 5;
  if (plVar16 == plVar15) {
    lVar11 = param_1[2];
    if (plVar8 == plVar4) {
      param_3 = (long *)((lVar11 + (long)unaff_x24) * 0x20);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x168),plVar16,param_3);
      _memcpy(plVar16,plVar8,(long)unaff_x26 * 0x20);
      plVar4 = (long *)*param_2;
      plVar15 = (long *)((long)register0x00000008 + -0x168);
      unaff_x23 = param_3;
    }
    else {
      *param_1 = (long)plVar8;
      *param_2 = (long)plVar4;
      param_3 = (long *)((lVar11 + (long)unaff_x24) * 0x20);
      plVar15 = plVar16;
    }
  }
  else {
    if (plVar8 != plVar4) {
      *param_1 = (long)plVar8;
      *param_2 = (long)plVar16;
      plVar15 = param_2;
      goto LAB_003ed27c;
    }
    *param_2 = (long)plVar16;
    *param_1 = (long)plVar15;
    param_3 = (long *)((long)unaff_x26 * 0x20);
    plVar4 = plVar15;
    plVar15 = plVar8;
  }
  _memcpy();
LAB_003ed27c:
  param_1[1] = *param_1 + (long)unaff_x25 * 0x20;
  param_2[1] = *param_2 + (long)unaff_x24 * 0x20;
  lVar11 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = lVar11;
  lVar11 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar11;
  lVar11 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = lVar11;
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x68)) {
    return;
  }
  pcVar21 = FUN_003ed300;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
code_r0x003ed300:
  *(long **)((long)register0x00000008 + -0x30) = plVar8;
  *(long **)((long)register0x00000008 + -0x28) = plVar16;
  *(long **)((long)register0x00000008 + -0x20) = param_1;
  *(long **)((long)register0x00000008 + -0x18) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar20;
  *(code **)((long)register0x00000008 + -8) = pcVar21;
  *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  plVar16 = (long *)plVar4[2];
  plVar5 = plVar4;
  plVar7 = plVar15;
  if (plVar16 == (long *)0x0) {
LAB_003ed364:
    plVar4 = plVar5;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
  }
  else {
    param_1 = plVar15;
    param_2 = plVar4;
    if (plVar15[2] != 0) {
      plVar9 = (long *)plVar4[1];
      do {
        plVar8 = plVar9 + 4;
        lVar11 = *plVar9;
        lVar24 = plVar9[3];
        lVar19 = plVar9[2];
        *(long *)((long)register0x00000008 + -0x58) = plVar9[1];
        *(long *)((long)register0x00000008 + -0x60) = lVar11;
        *(long *)((long)register0x00000008 + -0x48) = lVar24;
        *(long *)((long)register0x00000008 + -0x50) = lVar19;
        plVar5 = plVar15;
        plVar7 = (long *)((long)register0x00000008 + -0x60);
        FUN_003ecb34();
        plVar16 = (long *)((long)plVar16 + -1);
        plVar9 = plVar8;
      } while (plVar16 != (long *)0x0);
      plVar4[2] = 0;
      plVar4[4] = 0;
      plVar16 = (long *)0x0;
      goto LAB_003ed364;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38))
    goto code_r0x003ed3a8;
  }
  plVar15 = param_3;
  ___stack_chk_fail();
  plVar5 = (long *)((long)register0x00000008 + -0x170);
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
  *(long *)((long)register0x00000008 + -0xb8) = unaff_x27;
  *(long **)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(long **)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(long **)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x98) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x90) = plVar8;
  *(long **)((long)register0x00000008 + -0x88) = plVar16;
  *(long **)((long)register0x00000008 + -0x80) = param_1;
  *(long **)((long)register0x00000008 + -0x78) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x68) = FUN_003ed3c8;
  *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar11 = plVar4[4] - (long)plVar7;
  if ((long *)plVar4[4] < plVar7) {
    func_0x007753f8();
    plVar6 = plVar4;
    plVar9 = plVar7;
    plVar10 = plVar15;
LAB_003ed598:
    func_0x00775494();
LAB_003ed59c:
    func_0x00775460();
LAB_003ed5a0:
    func_0x0077542c();
    plVar4 = param_2;
    plVar15 = param_1;
    plVar7 = plVar16;
LAB_003ed5a4:
    func_0x007754c8();
    plVar13 = plVar4;
    plVar14 = plVar15;
LAB_003ed5a8:
    plVar15 = plVar10;
    plVar4 = plVar6;
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x1d0) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x1c8) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x1c0) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x1b8) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x1b0) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x1a8) = lVar11;
    *(long **)((long)register0x00000008 + -0x1a0) = plVar8;
    *(long **)((long)register0x00000008 + -0x198) = plVar7;
    *(long **)((long)register0x00000008 + -400) = plVar14;
    *(long **)((long)register0x00000008 + -0x188) = plVar13;
    *(undefined1 **)((long)register0x00000008 + -0x180) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3ed5ac;
    *(undefined8 *)((long)register0x00000008 + -0x1d8) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar16 = (long *)(plVar4[4] - (long)plVar9);
    if ((long *)plVar4[4] < plVar9) {
      func_0x007754fc();
      plVar6 = plVar4;
      plVar5 = plVar9;
      plVar10 = plVar15;
      goto LAB_003ed7b8;
    }
    plVar5 = plVar9;
    plVar6 = plVar4;
    plVar10 = plVar15;
    if (plVar16 != (long *)0x0) {
      unaff_x24 = (long *)plVar15[4];
      plVar18 = plVar9;
      if (plVar4[2] != 0) goto LAB_003ed648;
      goto LAB_003ed758;
    }
    plVar9 = plVar7;
    plVar18 = plVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -0x1d8))
    goto LAB_003ed7c8;
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0x180);
    pcVar21 = *(code **)((long)register0x00000008 + -0x178);
    param_1 = *(long **)((long)register0x00000008 + -400);
    param_2 = *(long **)((long)register0x00000008 + -0x188);
    plVar8 = *(long **)((long)register0x00000008 + -0x1a0);
    plVar16 = *(long **)((long)register0x00000008 + -0x198);
    unaff_x24 = *(long **)((long)register0x00000008 + -0x1b0);
    unaff_x23 = *(long **)((long)register0x00000008 + -0x1a8);
    unaff_x26 = *(long **)((long)register0x00000008 + -0x1c0);
    unaff_x25 = *(long **)((long)register0x00000008 + -0x1b8);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
    unaff_x27 = *(long *)((long)register0x00000008 + -0x1c8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
    param_3 = plVar15;
  }
  else {
    plVar9 = plVar7;
    plVar6 = plVar4;
    plVar10 = plVar15;
    plVar13 = plVar4;
    plVar14 = plVar15;
    if (lVar11 != 0) {
      unaff_x24 = (long *)plVar15[4];
      if (plVar4[2] != 0) {
        unaff_x25 = (long *)((long)register0x00000008 + -0xe8);
        plVar8 = plVar7;
        do {
          FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0xe8),plVar4);
          plVar16 = (long *)((ulong)*(long **)((long)register0x00000008 + -0xe0) & 0xff);
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            plVar16 = *(long **)((long)register0x00000008 + -0xe0);
          }
          unaff_x26 = (long *)((long)plVar8 - (long)plVar16);
          if (plVar8 < plVar16 || unaff_x26 == (long *)0x0) {
            if (unaff_x26 == (long *)0x0) {
              plVar5 = (long *)((long)register0x00000008 + -0x130);
            }
            else {
              plVar6 = (long *)((long)register0x00000008 + -0xe8);
              plVar10 = (long *)((long)&MACH_HEADER.magic + 3);
              plVar9 = plVar8;
              func_0x003ec568((undefined1 *)((long)register0x00000008 + -0x150));
              lVar19 = plVar4[1];
              plVar4[1] = lVar19 + -0x20;
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x150);
              uVar25 = *(undefined8 *)((long)register0x00000008 + -0x138);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x140);
              *(undefined8 *)(lVar19 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x148);
              *(undefined8 *)(lVar19 + -0x20) = uVar22;
              *(undefined8 *)(lVar19 + -8) = uVar25;
              *(undefined8 *)(lVar19 + -0x10) = uVar23;
              plVar4[2] = plVar4[2] + 1;
              uVar1 = *(ulong *)((long)register0x00000008 + -0x148) & 0xff;
              if (*(long *)((long)register0x00000008 + -0x150) != 0) {
                uVar1 = *(ulong *)((long)register0x00000008 + -0x148);
              }
              plVar4[4] = uVar1 + plVar4[4];
              plVar16 = (long *)((ulong)*(long **)((long)register0x00000008 + -0xe0) & 0xff);
              if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
                plVar16 = *(long **)((long)register0x00000008 + -0xe0);
              }
              if (plVar16 != plVar8) goto LAB_003ed5a4;
            }
            lVar19 = *unaff_x25;
            lVar26 = *(long *)((long)register0x00000008 + -0xd0);
            lVar24 = *(long *)((long)register0x00000008 + -0xd8);
            plVar5[1] = *(long *)((long)register0x00000008 + -0xe0);
            *plVar5 = lVar19;
            plVar5[3] = lVar26;
            plVar5[2] = lVar24;
            plVar6 = plVar15;
            FUN_003ecb34();
            plVar9 = plVar5;
            break;
          }
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(long *)((long)register0x00000008 + -0x110) = *unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0xf8) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0x100) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          plVar9 = (long *)((long)register0x00000008 + -0x110);
          plVar6 = plVar15;
          FUN_003ecb34();
          plVar8 = unaff_x26;
        } while (plVar4[2] != 0);
      }
      param_2 = plVar4;
      param_1 = plVar15;
      plVar16 = plVar7;
      if (plVar15[4] != (long)unaff_x24 + (long)plVar7) goto LAB_003ed598;
      if (plVar4[4] != lVar11) goto LAB_003ed59c;
      if (plVar4[2] != 0) {
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -200))
        {
          return;
        }
        goto LAB_003ed5a8;
      }
      goto LAB_003ed5a0;
    }
    plVar7 = plVar16;
    if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -200))
    goto LAB_003ed5a8;
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0x70);
    pcVar21 = *(code **)((long)register0x00000008 + -0x68);
    param_1 = *(long **)((long)register0x00000008 + -0x80);
    param_2 = *(long **)((long)register0x00000008 + -0x78);
    plVar8 = *(long **)((long)register0x00000008 + -0x90);
    plVar16 = *(long **)((long)register0x00000008 + -0x88);
    unaff_x24 = *(long **)((long)register0x00000008 + -0xa0);
    unaff_x23 = *(long **)((long)register0x00000008 + -0x98);
    unaff_x26 = *(long **)((long)register0x00000008 + -0xb0);
    unaff_x25 = *(long **)((long)register0x00000008 + -0xa8);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x27 = *(long *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_3 = plVar15;
  }
  goto code_r0x003ed300;
code_r0x003ed3a8:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
  param_1 = plVar4;
  param_2 = plVar15;
  goto code_r0x003ed190;
code_r0x003edb04:
  if (plVar10 == (long *)0x0) {
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar19 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (*(code *)plVar4[1])();
        plVar7 = plVar4;
      }
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x458) =
         *(undefined8 *)((long)register0x00000008 + -0x3f8);
    *(undefined8 *)((long)register0x00000008 + -0x460) =
         *(undefined8 *)((long)register0x00000008 + -0x400);
    lVar19 = plVar10[2];
    plVar7 = plVar10;
    FUN_003ed09c();
    puVar12 = (undefined8 *)(plVar10[1] + lVar19 * 0x20);
    *puVar12 = plVar4;
    puVar12[1] = plVar16;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x460);
    puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x458);
    puVar12[2] = uVar22;
    plVar15 = (long *)((ulong)plVar16 & 0xff);
    if (!bVar3) {
      plVar15 = plVar16;
    }
    plVar10[4] = plVar10[4] + (long)plVar15;
    plVar10[2] = lVar19 + 1;
  }
  plVar8[2] = lVar11;
  lVar11 = lVar11 + -1;
  puVar12 = (undefined8 *)(plVar8[1] + lVar11 * 0x20);
  uVar25 = *puVar12;
  uVar23 = puVar12[3];
  uVar22 = puVar12[2];
  *(undefined8 *)((long)register0x00000008 + -0x408) = puVar12[1];
  *(undefined8 *)((long)register0x00000008 + -0x410) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x3f8) = uVar23;
  *(undefined8 *)((long)register0x00000008 + -0x400) = uVar22;
  plVar4 = *(long **)((long)register0x00000008 + -0x410);
  plVar16 = *(long **)((long)register0x00000008 + -0x408);
  bVar3 = plVar4 == (long *)0x0;
  plVar15 = (long *)((ulong)plVar16 & 0xff);
  if (!bVar3) {
    plVar15 = plVar16;
  }
  if (plVar5 < plVar15) goto LAB_003edbb0;
  goto LAB_003edafc;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x220) =
         *(undefined8 *)((long)register0x00000008 + -0x1f8);
    *(undefined8 *)((long)register0x00000008 + -0x208) =
         *(undefined8 *)((long)register0x00000008 + -0x1e0);
    *(undefined8 *)((long)register0x00000008 + -0x210) =
         *(undefined8 *)((long)register0x00000008 + -0x1e8);
    plVar5 = (long *)((long)register0x00000008 + -0x220);
    FUN_003ecb34();
    plVar18 = unaff_x25;
    plVar8 = unaff_x25;
    if (plVar4[2] == 0) break;
LAB_003ed648:
    FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x1f8),plVar4);
    plVar8 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x1f0) & 0xff);
    if (*(long *)((long)register0x00000008 + -0x1f8) != 0) {
      plVar8 = *(long **)((long)register0x00000008 + -0x1f0);
    }
    unaff_x25 = (long *)((long)plVar18 - (long)plVar8);
    plVar6 = plVar15;
    if (plVar18 < plVar8 || unaff_x25 == (long *)0x0) {
      plVar8 = plVar18;
      if (unaff_x25 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x238) =
             *(undefined8 *)((long)register0x00000008 + -0x1f0);
        *(undefined8 *)((long)register0x00000008 + -0x240) =
             *(undefined8 *)((long)register0x00000008 + -0x1f8);
        *(undefined8 *)((long)register0x00000008 + -0x228) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x230) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        plVar5 = (long *)((long)register0x00000008 + -0x240);
        FUN_003ecb34();
      }
      else {
        plVar6 = (long *)((long)register0x00000008 + -0x1f8);
        plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
        plVar5 = plVar18;
        func_0x003ec568((undefined1 *)((long)register0x00000008 + -0x240));
        lVar11 = plVar4[1];
        plVar4[1] = lVar11 + -0x20;
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x240);
        uVar25 = *(undefined8 *)((long)register0x00000008 + -0x228);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x230);
        *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x238);
        *(undefined8 *)(lVar11 + -0x20) = uVar22;
        *(undefined8 *)(lVar11 + -8) = uVar25;
        *(undefined8 *)(lVar11 + -0x10) = uVar23;
        plVar4[2] = plVar4[2] + 1;
        uVar1 = *(ulong *)((long)register0x00000008 + -0x238) & 0xff;
        if (*(long *)((long)register0x00000008 + -0x240) != 0) {
          uVar1 = *(ulong *)((long)register0x00000008 + -0x238);
        }
        plVar4[4] = uVar1 + plVar4[4];
        unaff_x25 = *(long **)((long)register0x00000008 + -0x1f8);
        unaff_x26 = *(long **)((long)register0x00000008 + -0x1f0);
        plVar7 = (long *)((ulong)unaff_x26 & 0xff);
        if (unaff_x25 != (long *)0x0) {
          plVar7 = unaff_x26;
        }
        if (plVar7 != plVar18) goto LAB_003ed7c4;
        *(undefined8 *)((long)register0x00000008 + -0x248) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x250) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        unaff_x27 = plVar15[2];
        plVar6 = plVar15;
        FUN_003ed09c();
        puVar12 = (undefined8 *)(plVar15[1] + unaff_x27 * 0x20);
        *puVar12 = unaff_x25;
        puVar12[1] = unaff_x26;
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x250);
        puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x248);
        puVar12[2] = uVar22;
        plVar15[4] = plVar15[4] + (long)plVar18;
        plVar15[2] = unaff_x27 + 1;
      }
      break;
    }
  }
LAB_003ed758:
  plVar13 = plVar4;
  plVar14 = plVar15;
  plVar7 = plVar9;
  if (plVar15[4] == (long)unaff_x24 + (long)plVar9) {
    if ((long *)plVar4[4] != plVar16) goto LAB_003ed7bc;
    plVar18 = plVar8;
    if (plVar4[2] != 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1d8))
      {
        return;
      }
      goto LAB_003ed7c8;
    }
  }
  else {
LAB_003ed7b8:
    func_0x00775598();
LAB_003ed7bc:
    func_0x00775564();
    plVar18 = plVar8;
  }
  func_0x00775530();
  plVar4 = plVar13;
  plVar15 = plVar14;
  plVar9 = plVar7;
LAB_003ed7c4:
  func_0x007755cc();
LAB_003ed7c8:
  ___stack_chk_fail();
  plVar8 = (long *)((long)register0x00000008 + -0x300);
  *(long **)((long)register0x00000008 + -0x290) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x288) = plVar16;
  *(long **)((long)register0x00000008 + -0x280) = plVar18;
  *(long **)((long)register0x00000008 + -0x278) = plVar9;
  *(long **)((long)register0x00000008 + -0x270) = plVar15;
  *(long **)((long)register0x00000008 + -0x268) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x260) =
       (undefined1 *)((long)register0x00000008 + -0x180);
  *(code **)((long)register0x00000008 + -600) = FUN_003ed7cc;
  *(undefined8 *)((long)register0x00000008 + -0x298) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar6[4] < plVar5) {
    func_0x00775600();
  }
  else {
    plVar7 = plVar6;
    plVar18 = plVar5;
    if (plVar5 != (long *)0x0) {
      unaff_x24 = (long *)((long)register0x00000008 + -0x2af);
      plVar15 = plVar10;
      do {
        plVar16 = plVar18;
        FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x2b8),plVar6);
        lVar11 = *(long *)((long)register0x00000008 + -0x2b8);
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x2b0) & 0xff);
        if (lVar11 != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x2b0);
        }
        plVar4 = plVar6;
        plVar10 = plVar9;
        if (plVar16 < plVar9) {
          plVar5 = unaff_x24;
          if (lVar11 != 0) {
            plVar5 = *(long **)((long)register0x00000008 + -0x2a8);
          }
          _memcpy(plVar15,plVar5,plVar16);
          *(undefined8 *)((long)register0x00000008 + -0x2f8) =
               *(undefined8 *)((long)register0x00000008 + -0x2b0);
          *(undefined8 *)((long)register0x00000008 + -0x300) =
               *(undefined8 *)((long)register0x00000008 + -0x2b8);
          *(undefined8 *)((long)register0x00000008 + -0x2e8) =
               *(undefined8 *)((long)register0x00000008 + -0x2a0);
          *(undefined8 *)((long)register0x00000008 + -0x2f0) =
               *(undefined8 *)((long)register0x00000008 + -0x2a8);
          plVar5 = plVar16;
          FUN_003ec404((undefined1 *)((long)register0x00000008 + -0x2d8));
          lVar11 = plVar6[1];
          plVar6[1] = lVar11 + -0x20;
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x2c8);
          uVar25 = *(undefined8 *)((long)register0x00000008 + -0x2d8);
          *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x2d0);
          *(undefined8 *)(lVar11 + -0x20) = uVar25;
          *(undefined8 *)(lVar11 + -8) = uVar23;
          *(undefined8 *)(lVar11 + -0x10) = uVar22;
          plVar6[2] = plVar6[2] + 1;
          uVar1 = *(ulong *)((long)register0x00000008 + -0x2d0) & 0xff;
          if (*(long *)((long)register0x00000008 + -0x2d8) != 0) {
            uVar1 = *(ulong *)((long)register0x00000008 + -0x2d0);
          }
          plVar6[4] = uVar1 + plVar6[4];
          plVar7 = plVar8;
          plVar18 = plVar16;
          break;
        }
        plVar5 = unaff_x24;
        if (lVar11 != 0) {
          plVar5 = *(long **)((long)register0x00000008 + -0x2a8);
        }
        plVar18 = (long *)((long)plVar16 - (long)plVar9);
        if (plVar18 == (long *)0x0) {
          plVar10 = plVar16;
          _memcpy(plVar15);
          plVar7 = *(long **)((long)register0x00000008 + -0x2b8);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar11 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          break;
        }
        _memcpy(plVar15);
        plVar7 = *(long **)((long)register0x00000008 + -0x2b8);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
          do {
            lVar11 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plVar7[1])();
          }
        }
        plVar15 = (long *)((long)plVar15 + (long)plVar9);
      } while (plVar18 != (long *)0x0);
    }
    plVar6 = plVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x298)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x350) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x348) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x340) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x338) = plVar16;
  *(long **)((long)register0x00000008 + -0x330) = plVar18;
  *(long **)((long)register0x00000008 + -0x328) = plVar9;
  *(long **)((long)register0x00000008 + -800) = plVar15;
  *(long **)((long)register0x00000008 + -0x318) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x310) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(code **)((long)register0x00000008 + -0x308) = FUN_003ed97c;
  *(undefined8 *)((long)register0x00000008 + -0x358) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar6[4] < plVar5) {
    func_0x00775634();
    plVar8 = plVar6;
  }
  else {
    plVar8 = plVar6;
    if (plVar6[2] != 0) {
      plVar18 = (long *)0x0;
      plVar16 = (long *)0x0;
      unaff_x24 = (long *)((long)register0x00000008 + -0x377);
      plVar15 = plVar5;
      plVar4 = plVar10;
      do {
        puVar12 = (undefined8 *)(plVar6[1] + (long)plVar18);
        uVar22 = *puVar12;
        uVar25 = puVar12[3];
        uVar23 = puVar12[2];
        *(undefined8 *)((long)register0x00000008 + -0x378) = puVar12[1];
        *(undefined8 *)((long)register0x00000008 + -0x380) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x368) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x370) = uVar23;
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x378) & 0xff);
        if (*(long *)((long)register0x00000008 + -0x380) != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x378);
        }
        plVar5 = unaff_x24;
        if (*(long *)((long)register0x00000008 + -0x380) != 0) {
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
        }
        unaff_x25 = (long *)((long)plVar15 - (long)plVar9);
        plVar8 = plVar4;
        if (plVar15 < plVar9 || unaff_x25 == (long *)0x0) {
          _memcpy();
          plVar10 = plVar15;
          break;
        }
        _memcpy(plVar4,plVar5,plVar9);
        plVar4 = (long *)((long)plVar4 + (long)plVar9);
        plVar16 = (long *)((long)plVar16 + 1);
        plVar18 = plVar18 + 4;
        plVar10 = unaff_x25;
        plVar15 = unaff_x25;
      } while (plVar16 < (long *)plVar6[2]);
    }
    plVar15 = plVar6;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x358)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3e0) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x3d8) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x3d0) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x3c8) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x3c0) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x3b8) = plVar16;
  *(long **)((long)register0x00000008 + -0x3b0) = plVar18;
  *(long **)((long)register0x00000008 + -0x3a8) = plVar9;
  *(long **)((long)register0x00000008 + -0x3a0) = plVar15;
  *(long **)((long)register0x00000008 + -0x398) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x390) =
       (undefined1 *)((long)register0x00000008 + -0x310);
  *(code **)((long)register0x00000008 + -0x388) = FUN_003eda78;
  *(undefined8 *)((long)register0x00000008 + -1000) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  if ((long *)plVar8[4] < plVar5) {
    func_0x00775668();
  }
  else {
    plVar8[4] = plVar8[4] - (long)plVar5;
    lVar11 = plVar8[2] + -1;
    puVar12 = (undefined8 *)(plVar8[1] + lVar11 * 0x20);
    uVar25 = *puVar12;
    uVar23 = puVar12[3];
    uVar22 = puVar12[2];
    *(undefined8 *)((long)register0x00000008 + -0x408) = puVar12[1];
    *(undefined8 *)((long)register0x00000008 + -0x410) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x3f8) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x400) = uVar22;
    plVar4 = *(long **)((long)register0x00000008 + -0x410);
    plVar16 = *(long **)((long)register0x00000008 + -0x408);
    bVar3 = plVar4 == (long *)0x0;
    plVar15 = (long *)((ulong)plVar16 & 0xff);
    if (!bVar3) {
      plVar15 = plVar16;
    }
    if (plVar15 <= plVar5) {
      plVar7 = plVar8;
LAB_003edafc:
      plVar5 = (long *)((long)plVar5 - (long)plVar15);
      if (plVar5 != (long *)0x0) goto code_r0x003edb04;
      if (plVar10 == (long *)0x0) {
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
          do {
            lVar19 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar19 + -1 == 0) {
            (*(code *)plVar4[1])();
            plVar7 = plVar4;
          }
        }
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x448) =
             *(undefined8 *)((long)register0x00000008 + -0x3f8);
        *(undefined8 *)((long)register0x00000008 + -0x450) =
             *(undefined8 *)((long)register0x00000008 + -0x400);
        lVar19 = plVar10[2];
        plVar7 = plVar10;
        FUN_003ed09c();
        puVar12 = (undefined8 *)(plVar10[1] + lVar19 * 0x20);
        *puVar12 = plVar4;
        puVar12[1] = plVar16;
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x450);
        puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x448);
        puVar12[2] = uVar22;
        plVar15 = (long *)((ulong)plVar16 & 0xff);
        if (!bVar3) {
          plVar15 = plVar16;
        }
        plVar10[4] = plVar10[4] + (long)plVar15;
        plVar10[2] = lVar19 + 1;
      }
      plVar8[2] = lVar11;
      plVar15 = plVar8;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    plVar7 = (long *)((long)register0x00000008 + -0x410);
    FUN_003ec688((undefined1 *)((long)register0x00000008 + -0x430),plVar7,
                 (long)plVar15 - (long)plVar5);
    puVar12 = (undefined8 *)(plVar8[1] + lVar11 * 0x20);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x430);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x418);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x420);
    puVar12[1] = *(undefined8 *)((long)register0x00000008 + -0x428);
    *puVar12 = uVar22;
    puVar12[3] = uVar25;
    puVar12[2] = uVar23;
    plVar15 = *(long **)((long)register0x00000008 + -0x410);
    if (plVar10 == (long *)0x0) {
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
        do {
          lVar11 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          plVar7 = plVar15;
          (*(code *)plVar15[1])();
        }
      }
    }
    else {
      uVar17 = *(ulong *)((long)register0x00000008 + -0x408);
      *(undefined8 *)((long)register0x00000008 + -0x438) =
           *(undefined8 *)((long)register0x00000008 + -0x3f8);
      *(undefined8 *)((long)register0x00000008 + -0x440) =
           *(undefined8 *)((long)register0x00000008 + -0x400);
      lVar11 = plVar10[2];
      plVar7 = plVar10;
      FUN_003ed09c();
      puVar12 = (undefined8 *)(plVar10[1] + lVar11 * 0x20);
      *puVar12 = plVar15;
      puVar12[1] = uVar17;
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x440);
      puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x438);
      puVar12[2] = uVar22;
      uVar1 = uVar17 & 0xff;
      if (plVar15 != (long *)0x0) {
        uVar1 = uVar17;
      }
      plVar10[4] = plVar10[4] + uVar1;
      plVar10[2] = lVar11 + 1;
    }
LAB_003edcd0:
    plVar8 = plVar7;
    plVar4 = plVar10;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -1000)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x480) = plVar15;
  *(long **)((long)register0x00000008 + -0x478) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x470) =
       (undefined1 *)((long)register0x00000008 + -0x390);
  *(code **)((long)register0x00000008 + -0x468) = FUN_003edd10;
  puVar12 = (undefined8 *)plVar8[1];
  plVar15 = (long *)*puVar12;
  if (plVar15 == (long *)0x0) {
    plVar8[4] = plVar8[4] - (ulong)*(byte *)(puVar12 + 1);
  }
  else {
    plVar8[4] = plVar8[4] - puVar12[1];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
      do {
        lVar11 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plVar15[1])();
      }
    }
  }
  lVar11 = plVar8[2];
  plVar8[1] = plVar8[1] + 0x20;
  plVar8[2] = lVar11 + -1;
  if (lVar11 + -1 == 0) {
    plVar8[1] = *plVar8;
  }
  return;
}



/* Entry: 003ed300; end: 003ed3c7;  */

void FUN_003ed300(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long *plVar14;
  ulong uVar15;
  long *unaff_x22;
  long *plVar16;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar17;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  
code_r0x003ed300:
  do {
    plVar8 = param_2;
    plVar6 = param_1;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    plVar14 = (long *)plVar6[2];
    plVar5 = plVar6;
    plVar9 = plVar8;
    if (plVar14 == (long *)0x0) {
LAB_003ed364:
      plVar6 = plVar5;
      plVar8 = plVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
        return;
      }
    }
    else {
      unaff_x19 = plVar6;
      unaff_x20 = plVar8;
      if (plVar8[2] != 0) {
        plVar7 = (long *)plVar6[1];
        do {
          unaff_x22 = plVar7 + 4;
          lVar11 = *plVar7;
          lVar20 = plVar7[3];
          lVar17 = plVar7[2];
          *(long *)((long)register0x00000008 + -0x58) = plVar7[1];
          *(long *)((long)register0x00000008 + -0x60) = lVar11;
          *(long *)((long)register0x00000008 + -0x48) = lVar20;
          *(long *)((long)register0x00000008 + -0x50) = lVar17;
          plVar5 = plVar8;
          plVar9 = (long *)((long)register0x00000008 + -0x60);
          FUN_003ecb34();
          plVar14 = (long *)((long)plVar14 + -1);
          plVar7 = unaff_x22;
        } while (plVar14 != (long *)0x0);
        plVar6[2] = 0;
        plVar6[4] = 0;
        plVar14 = (long *)0x0;
        goto LAB_003ed364;
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)PTR____stack_chk_guard_00999f88;
        unaff_x21 = (long *)*plVar6;
        unaff_x24 = (long *)(plVar6[1] - (long)unaff_x21 >> 5);
        unaff_x22 = (long *)*plVar8;
        unaff_x25 = (long *)(plVar8[1] - (long)unaff_x22 >> 5);
        unaff_x26 = (long *)(plVar8[2] + (long)unaff_x25);
        plVar14 = plVar6 + 5;
        param_1 = plVar8 + 5;
        if (unaff_x21 == plVar14) {
          lVar11 = plVar6[2];
          if (unaff_x22 == param_1) {
            param_3 = (long *)((lVar11 + (long)unaff_x24) * 0x20);
            _memcpy((undefined1 *)((long)register0x00000008 + -0x168),unaff_x21,param_3);
            _memcpy(unaff_x21,unaff_x22,(long)unaff_x26 * 0x20);
            param_1 = (long *)*plVar8;
            param_2 = (long *)((long)register0x00000008 + -0x168);
            unaff_x23 = param_3;
          }
          else {
            *plVar6 = (long)unaff_x22;
            *plVar8 = (long)param_1;
            param_3 = (long *)((lVar11 + (long)unaff_x24) * 0x20);
            param_2 = unaff_x21;
          }
LAB_003ed278:
          _memcpy();
        }
        else {
          if (unaff_x22 == param_1) {
            *plVar8 = (long)unaff_x21;
            *plVar6 = (long)plVar14;
            param_3 = (long *)((long)unaff_x26 * 0x20);
            param_1 = plVar14;
            param_2 = unaff_x22;
            goto LAB_003ed278;
          }
          *plVar6 = (long)unaff_x22;
          *plVar8 = (long)unaff_x21;
          param_2 = plVar8;
        }
        plVar6[1] = *plVar6 + (long)unaff_x25 * 0x20;
        plVar8[1] = *plVar8 + (long)unaff_x24 * 0x20;
        lVar11 = plVar6[2];
        plVar6[2] = plVar8[2];
        plVar8[2] = lVar11;
        lVar11 = plVar6[3];
        plVar6[3] = plVar8[3];
        plVar8[3] = lVar11;
        lVar11 = plVar6[4];
        plVar6[4] = plVar8[4];
        plVar8[4] = lVar11;
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x68))
        {
          return;
        }
        unaff_x30 = FUN_003ed300;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
        unaff_x19 = plVar8;
        unaff_x20 = plVar6;
        goto code_r0x003ed300;
      }
    }
    ___stack_chk_fail();
    plVar5 = (long *)((long)register0x00000008 + -0x170);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
    *(long *)((long)register0x00000008 + -0xb8) = unaff_x27;
    *(long **)((long)register0x00000008 + -0xb0) = unaff_x26;
    *(long **)((long)register0x00000008 + -0xa8) = unaff_x25;
    *(long **)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x90) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x88) = plVar14;
    *(long **)((long)register0x00000008 + -0x80) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x78) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_003ed3c8;
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    lVar11 = plVar6[4] - (long)plVar8;
    if ((long *)plVar6[4] < plVar8) {
      func_0x007753f8();
      param_1 = plVar6;
      plVar9 = plVar8;
      plVar7 = param_3;
LAB_003ed598:
      func_0x00775494();
LAB_003ed59c:
      func_0x00775460();
LAB_003ed5a0:
      func_0x0077542c();
      plVar6 = unaff_x19;
      param_3 = unaff_x20;
      plVar8 = plVar14;
LAB_003ed5a4:
      func_0x007754c8();
      plVar13 = param_3;
LAB_003ed5a8:
      param_3 = plVar7;
      ___stack_chk_fail();
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = unaff_x28;
      *(long *)((long)register0x00000008 + -0x1c8) = unaff_x27;
      *(long **)((long)register0x00000008 + -0x1c0) = unaff_x26;
      *(long **)((long)register0x00000008 + -0x1b8) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x1b0) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x1a8) = lVar11;
      *(long **)((long)register0x00000008 + -0x1a0) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x198) = plVar8;
      *(long **)((long)register0x00000008 + -400) = plVar13;
      *(long **)((long)register0x00000008 + -0x188) = plVar6;
      *(undefined1 **)((long)register0x00000008 + -0x180) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3ed5ac;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) =
           *(undefined8 *)PTR____stack_chk_guard_00999f88;
      plVar14 = (long *)(param_1[4] - (long)plVar9);
      if ((long *)param_1[4] < plVar9) {
        func_0x007754fc();
        plVar7 = param_1;
        plVar5 = plVar9;
        plVar10 = param_3;
        goto LAB_003ed7b8;
      }
      plVar5 = plVar9;
      plVar7 = param_1;
      plVar10 = param_3;
      if (plVar14 != (long *)0x0) {
        unaff_x24 = (long *)param_3[4];
        plVar16 = plVar9;
        if (param_1[2] != 0) goto LAB_003ed648;
        goto LAB_003ed758;
      }
      plVar9 = plVar8;
      plVar16 = unaff_x22;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1d8))
      {
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x180);
        unaff_x30 = *(code **)((long)register0x00000008 + -0x178);
        puVar12 = (undefined8 *)((long)register0x00000008 + -400);
        puVar2 = (undefined8 *)((long)register0x00000008 + -0x188);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x1a0);
        unaff_x21 = *(long **)((long)register0x00000008 + -0x198);
        unaff_x24 = *(long **)((long)register0x00000008 + -0x1b0);
        unaff_x23 = *(long **)((long)register0x00000008 + -0x1a8);
        unaff_x26 = *(long **)((long)register0x00000008 + -0x1c0);
        unaff_x25 = *(long **)((long)register0x00000008 + -0x1b8);
        unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
        unaff_x27 = *(long *)((long)register0x00000008 + -0x1c8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
        param_2 = param_3;
        unaff_x19 = (long *)*puVar2;
        unaff_x20 = (long *)*puVar12;
        goto code_r0x003ed300;
      }
      goto LAB_003ed7c8;
    }
    plVar9 = plVar8;
    param_1 = plVar6;
    plVar7 = param_3;
    plVar13 = param_3;
    if (lVar11 != 0) {
      unaff_x24 = (long *)param_3[4];
      if (plVar6[2] != 0) {
        unaff_x25 = (long *)((long)register0x00000008 + -0xe8);
        unaff_x22 = plVar8;
        do {
          FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0xe8),plVar6);
          plVar14 = (long *)((ulong)*(long **)((long)register0x00000008 + -0xe0) & 0xff);
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            plVar14 = *(long **)((long)register0x00000008 + -0xe0);
          }
          unaff_x26 = (long *)((long)unaff_x22 - (long)plVar14);
          if (unaff_x22 < plVar14 || unaff_x26 == (long *)0x0) {
            if (unaff_x26 == (long *)0x0) {
              plVar5 = (long *)((long)register0x00000008 + -0x130);
            }
            else {
              param_1 = (long *)((long)register0x00000008 + -0xe8);
              plVar7 = (long *)((long)&MACH_HEADER.magic + 3);
              plVar9 = unaff_x22;
              func_0x003ec568((undefined1 *)((long)register0x00000008 + -0x150));
              lVar17 = plVar6[1];
              plVar6[1] = lVar17 + -0x20;
              uVar18 = *(undefined8 *)((long)register0x00000008 + -0x150);
              uVar21 = *(undefined8 *)((long)register0x00000008 + -0x138);
              uVar19 = *(undefined8 *)((long)register0x00000008 + -0x140);
              *(undefined8 *)(lVar17 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x148);
              *(undefined8 *)(lVar17 + -0x20) = uVar18;
              *(undefined8 *)(lVar17 + -8) = uVar21;
              *(undefined8 *)(lVar17 + -0x10) = uVar19;
              plVar6[2] = plVar6[2] + 1;
              uVar1 = *(ulong *)((long)register0x00000008 + -0x148) & 0xff;
              if (*(long *)((long)register0x00000008 + -0x150) != 0) {
                uVar1 = *(ulong *)((long)register0x00000008 + -0x148);
              }
              plVar6[4] = uVar1 + plVar6[4];
              plVar14 = (long *)((ulong)*(long **)((long)register0x00000008 + -0xe0) & 0xff);
              if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
                plVar14 = *(long **)((long)register0x00000008 + -0xe0);
              }
              if (plVar14 != unaff_x22) goto LAB_003ed5a4;
            }
            lVar17 = *unaff_x25;
            lVar22 = *(long *)((long)register0x00000008 + -0xd0);
            lVar20 = *(long *)((long)register0x00000008 + -0xd8);
            plVar5[1] = *(long *)((long)register0x00000008 + -0xe0);
            *plVar5 = lVar17;
            plVar5[3] = lVar22;
            plVar5[2] = lVar20;
            param_1 = param_3;
            FUN_003ecb34();
            plVar9 = plVar5;
            break;
          }
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(long *)((long)register0x00000008 + -0x110) = *unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0xf8) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0x100) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          plVar9 = (long *)((long)register0x00000008 + -0x110);
          param_1 = param_3;
          FUN_003ecb34();
          unaff_x22 = unaff_x26;
        } while (plVar6[2] != 0);
      }
      unaff_x19 = plVar6;
      unaff_x20 = param_3;
      plVar14 = plVar8;
      if (param_3[4] != (long)unaff_x24 + (long)plVar8) goto LAB_003ed598;
      if (plVar6[4] != lVar11) goto LAB_003ed59c;
      if (plVar6[2] != 0) {
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -200))
        {
          return;
        }
        goto LAB_003ed5a8;
      }
      goto LAB_003ed5a0;
    }
    plVar8 = plVar14;
    if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -200))
    goto LAB_003ed5a8;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x70);
    unaff_x30 = *(code **)((long)register0x00000008 + -0x68);
    puVar12 = (undefined8 *)((long)register0x00000008 + -0x80);
    puVar2 = (undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    unaff_x24 = *(long **)((long)register0x00000008 + -0xa0);
    unaff_x23 = *(long **)((long)register0x00000008 + -0x98);
    unaff_x26 = *(long **)((long)register0x00000008 + -0xb0);
    unaff_x25 = *(long **)((long)register0x00000008 + -0xa8);
    unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x27 = *(long *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = param_3;
    unaff_x19 = (long *)*puVar2;
    unaff_x20 = (long *)*puVar12;
  } while( true );
code_r0x003edb04:
  if (plVar10 == (long *)0x0) {
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
      do {
        lVar17 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plVar9[1])();
        plVar7 = plVar9;
      }
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x458) =
         *(undefined8 *)((long)register0x00000008 + -0x3f8);
    *(undefined8 *)((long)register0x00000008 + -0x460) =
         *(undefined8 *)((long)register0x00000008 + -0x400);
    lVar17 = plVar10[2];
    plVar7 = plVar10;
    FUN_003ed09c();
    puVar12 = (undefined8 *)(plVar10[1] + lVar17 * 0x20);
    *puVar12 = plVar9;
    puVar12[1] = plVar8;
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x460);
    puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x458);
    puVar12[2] = uVar18;
    plVar14 = (long *)((ulong)plVar8 & 0xff);
    if (!bVar4) {
      plVar14 = plVar8;
    }
    plVar10[4] = plVar10[4] + (long)plVar14;
    plVar10[2] = lVar17 + 1;
  }
  plVar6[2] = lVar11;
  lVar11 = lVar11 + -1;
  puVar12 = (undefined8 *)(plVar6[1] + lVar11 * 0x20);
  uVar21 = *puVar12;
  uVar19 = puVar12[3];
  uVar18 = puVar12[2];
  *(undefined8 *)((long)register0x00000008 + -0x408) = puVar12[1];
  *(undefined8 *)((long)register0x00000008 + -0x410) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x3f8) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0x400) = uVar18;
  plVar9 = *(long **)((long)register0x00000008 + -0x410);
  plVar8 = *(long **)((long)register0x00000008 + -0x408);
  bVar4 = plVar9 == (long *)0x0;
  plVar14 = (long *)((ulong)plVar8 & 0xff);
  if (!bVar4) {
    plVar14 = plVar8;
  }
  if (plVar5 < plVar14) goto LAB_003edbb0;
  goto LAB_003edafc;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x220) =
         *(undefined8 *)((long)register0x00000008 + -0x1f8);
    *(undefined8 *)((long)register0x00000008 + -0x208) =
         *(undefined8 *)((long)register0x00000008 + -0x1e0);
    *(undefined8 *)((long)register0x00000008 + -0x210) =
         *(undefined8 *)((long)register0x00000008 + -0x1e8);
    plVar5 = (long *)((long)register0x00000008 + -0x220);
    FUN_003ecb34();
    plVar16 = unaff_x25;
    unaff_x22 = unaff_x25;
    if (param_1[2] == 0) break;
LAB_003ed648:
    FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x1f8),param_1);
    plVar5 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x1f0) & 0xff);
    if (*(long *)((long)register0x00000008 + -0x1f8) != 0) {
      plVar5 = *(long **)((long)register0x00000008 + -0x1f0);
    }
    unaff_x25 = (long *)((long)plVar16 - (long)plVar5);
    plVar7 = param_3;
    if (plVar16 < plVar5 || unaff_x25 == (long *)0x0) {
      unaff_x22 = plVar16;
      if (unaff_x25 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x238) =
             *(undefined8 *)((long)register0x00000008 + -0x1f0);
        *(undefined8 *)((long)register0x00000008 + -0x240) =
             *(undefined8 *)((long)register0x00000008 + -0x1f8);
        *(undefined8 *)((long)register0x00000008 + -0x228) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x230) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        plVar5 = (long *)((long)register0x00000008 + -0x240);
        FUN_003ecb34();
      }
      else {
        plVar7 = (long *)((long)register0x00000008 + -0x1f8);
        plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
        plVar5 = plVar16;
        func_0x003ec568((undefined1 *)((long)register0x00000008 + -0x240));
        lVar11 = param_1[1];
        param_1[1] = lVar11 + -0x20;
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x240);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x228);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x230);
        *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x238);
        *(undefined8 *)(lVar11 + -0x20) = uVar18;
        *(undefined8 *)(lVar11 + -8) = uVar21;
        *(undefined8 *)(lVar11 + -0x10) = uVar19;
        param_1[2] = param_1[2] + 1;
        uVar1 = *(ulong *)((long)register0x00000008 + -0x238) & 0xff;
        if (*(long *)((long)register0x00000008 + -0x240) != 0) {
          uVar1 = *(ulong *)((long)register0x00000008 + -0x238);
        }
        param_1[4] = uVar1 + param_1[4];
        unaff_x25 = *(long **)((long)register0x00000008 + -0x1f8);
        unaff_x26 = *(long **)((long)register0x00000008 + -0x1f0);
        plVar6 = (long *)((ulong)unaff_x26 & 0xff);
        if (unaff_x25 != (long *)0x0) {
          plVar6 = unaff_x26;
        }
        if (plVar6 != plVar16) goto LAB_003ed7c4;
        *(undefined8 *)((long)register0x00000008 + -0x248) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x250) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        unaff_x27 = param_3[2];
        plVar7 = param_3;
        FUN_003ed09c();
        puVar12 = (undefined8 *)(param_3[1] + unaff_x27 * 0x20);
        *puVar12 = unaff_x25;
        puVar12[1] = unaff_x26;
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x250);
        puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x248);
        puVar12[2] = uVar18;
        param_3[4] = param_3[4] + (long)plVar16;
        param_3[2] = unaff_x27 + 1;
      }
      break;
    }
  }
LAB_003ed758:
  plVar6 = param_1;
  plVar13 = param_3;
  plVar8 = plVar9;
  if (param_3[4] == (long)unaff_x24 + (long)plVar9) {
    if ((long *)param_1[4] != plVar14) goto LAB_003ed7bc;
    plVar16 = unaff_x22;
    if (param_1[2] != 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1d8))
      {
        return;
      }
      goto LAB_003ed7c8;
    }
  }
  else {
LAB_003ed7b8:
    func_0x00775598();
LAB_003ed7bc:
    func_0x00775564();
    plVar16 = unaff_x22;
  }
  func_0x00775530();
  param_1 = plVar6;
  param_3 = plVar13;
  plVar9 = plVar8;
LAB_003ed7c4:
  func_0x007755cc();
LAB_003ed7c8:
  ___stack_chk_fail();
  plVar6 = (long *)((long)register0x00000008 + -0x300);
  *(long **)((long)register0x00000008 + -0x290) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x288) = plVar14;
  *(long **)((long)register0x00000008 + -0x280) = plVar16;
  *(long **)((long)register0x00000008 + -0x278) = plVar9;
  *(long **)((long)register0x00000008 + -0x270) = param_3;
  *(long **)((long)register0x00000008 + -0x268) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x260) =
       (undefined1 *)((long)register0x00000008 + -0x180);
  *(code **)((long)register0x00000008 + -600) = FUN_003ed7cc;
  *(undefined8 *)((long)register0x00000008 + -0x298) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar7[4] < plVar5) {
    func_0x00775600();
  }
  else {
    plVar8 = plVar7;
    plVar16 = plVar5;
    if (plVar5 != (long *)0x0) {
      unaff_x24 = (long *)((long)register0x00000008 + -0x2af);
      param_3 = plVar10;
      do {
        plVar14 = plVar16;
        FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x2b8),plVar7);
        lVar11 = *(long *)((long)register0x00000008 + -0x2b8);
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x2b0) & 0xff);
        if (lVar11 != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x2b0);
        }
        param_1 = plVar7;
        plVar10 = plVar9;
        if (plVar14 < plVar9) {
          plVar5 = unaff_x24;
          if (lVar11 != 0) {
            plVar5 = *(long **)((long)register0x00000008 + -0x2a8);
          }
          _memcpy(param_3,plVar5,plVar14);
          *(undefined8 *)((long)register0x00000008 + -0x2f8) =
               *(undefined8 *)((long)register0x00000008 + -0x2b0);
          *(undefined8 *)((long)register0x00000008 + -0x300) =
               *(undefined8 *)((long)register0x00000008 + -0x2b8);
          *(undefined8 *)((long)register0x00000008 + -0x2e8) =
               *(undefined8 *)((long)register0x00000008 + -0x2a0);
          *(undefined8 *)((long)register0x00000008 + -0x2f0) =
               *(undefined8 *)((long)register0x00000008 + -0x2a8);
          plVar5 = plVar14;
          FUN_003ec404((undefined1 *)((long)register0x00000008 + -0x2d8));
          lVar11 = plVar7[1];
          plVar7[1] = lVar11 + -0x20;
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x2c8);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x2d8);
          *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x2d0);
          *(undefined8 *)(lVar11 + -0x20) = uVar21;
          *(undefined8 *)(lVar11 + -8) = uVar19;
          *(undefined8 *)(lVar11 + -0x10) = uVar18;
          plVar7[2] = plVar7[2] + 1;
          uVar1 = *(ulong *)((long)register0x00000008 + -0x2d0) & 0xff;
          if (*(long *)((long)register0x00000008 + -0x2d8) != 0) {
            uVar1 = *(ulong *)((long)register0x00000008 + -0x2d0);
          }
          plVar7[4] = uVar1 + plVar7[4];
          plVar8 = plVar6;
          plVar16 = plVar14;
          break;
        }
        plVar5 = unaff_x24;
        if (lVar11 != 0) {
          plVar5 = *(long **)((long)register0x00000008 + -0x2a8);
        }
        plVar16 = (long *)((long)plVar14 - (long)plVar9);
        if (plVar16 == (long *)0x0) {
          plVar10 = plVar14;
          _memcpy(param_3);
          plVar8 = *(long **)((long)register0x00000008 + -0x2b8);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
            do {
              lVar11 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar8[1])();
            }
          }
          break;
        }
        _memcpy(param_3);
        plVar8 = *(long **)((long)register0x00000008 + -0x2b8);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
          do {
            lVar11 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plVar8[1])();
          }
        }
        param_3 = (long *)((long)param_3 + (long)plVar9);
      } while (plVar16 != (long *)0x0);
    }
    plVar7 = plVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x298)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x350) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x348) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x340) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x338) = plVar14;
  *(long **)((long)register0x00000008 + -0x330) = plVar16;
  *(long **)((long)register0x00000008 + -0x328) = plVar9;
  *(long **)((long)register0x00000008 + -800) = param_3;
  *(long **)((long)register0x00000008 + -0x318) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x310) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(code **)((long)register0x00000008 + -0x308) = FUN_003ed97c;
  *(undefined8 *)((long)register0x00000008 + -0x358) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar7[4] < plVar5) {
    func_0x00775634();
    plVar6 = plVar7;
  }
  else {
    plVar6 = plVar7;
    if (plVar7[2] != 0) {
      plVar16 = (long *)0x0;
      plVar14 = (long *)0x0;
      unaff_x24 = (long *)((long)register0x00000008 + -0x377);
      plVar8 = plVar5;
      param_1 = plVar10;
      do {
        puVar12 = (undefined8 *)(plVar7[1] + (long)plVar16);
        uVar18 = *puVar12;
        uVar21 = puVar12[3];
        uVar19 = puVar12[2];
        *(undefined8 *)((long)register0x00000008 + -0x378) = puVar12[1];
        *(undefined8 *)((long)register0x00000008 + -0x380) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0x368) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x370) = uVar19;
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x378) & 0xff);
        if (*(long *)((long)register0x00000008 + -0x380) != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x378);
        }
        plVar5 = unaff_x24;
        if (*(long *)((long)register0x00000008 + -0x380) != 0) {
          plVar5 = *(long **)((long)register0x00000008 + -0x370);
        }
        unaff_x25 = (long *)((long)plVar8 - (long)plVar9);
        plVar6 = param_1;
        if (plVar8 < plVar9 || unaff_x25 == (long *)0x0) {
          _memcpy();
          plVar10 = plVar8;
          break;
        }
        _memcpy(param_1,plVar5,plVar9);
        param_1 = (long *)((long)param_1 + (long)plVar9);
        plVar14 = (long *)((long)plVar14 + 1);
        plVar16 = plVar16 + 4;
        plVar10 = unaff_x25;
        plVar8 = unaff_x25;
      } while (plVar14 < (long *)plVar7[2]);
    }
    param_3 = plVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x358)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3e0) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x3d8) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x3d0) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x3c8) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x3c0) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x3b8) = plVar14;
  *(long **)((long)register0x00000008 + -0x3b0) = plVar16;
  *(long **)((long)register0x00000008 + -0x3a8) = plVar9;
  *(long **)((long)register0x00000008 + -0x3a0) = param_3;
  *(long **)((long)register0x00000008 + -0x398) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x390) =
       (undefined1 *)((long)register0x00000008 + -0x310);
  *(code **)((long)register0x00000008 + -0x388) = FUN_003eda78;
  *(undefined8 *)((long)register0x00000008 + -1000) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  if ((long *)plVar6[4] < plVar5) {
    func_0x00775668();
  }
  else {
    plVar6[4] = plVar6[4] - (long)plVar5;
    lVar11 = plVar6[2] + -1;
    puVar12 = (undefined8 *)(plVar6[1] + lVar11 * 0x20);
    uVar21 = *puVar12;
    uVar19 = puVar12[3];
    uVar18 = puVar12[2];
    *(undefined8 *)((long)register0x00000008 + -0x408) = puVar12[1];
    *(undefined8 *)((long)register0x00000008 + -0x410) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x3f8) = uVar19;
    *(undefined8 *)((long)register0x00000008 + -0x400) = uVar18;
    plVar9 = *(long **)((long)register0x00000008 + -0x410);
    plVar8 = *(long **)((long)register0x00000008 + -0x408);
    bVar4 = plVar9 == (long *)0x0;
    plVar14 = (long *)((ulong)plVar8 & 0xff);
    if (!bVar4) {
      plVar14 = plVar8;
    }
    if (plVar14 <= plVar5) {
      plVar7 = plVar6;
LAB_003edafc:
      plVar5 = (long *)((long)plVar5 - (long)plVar14);
      if (plVar5 != (long *)0x0) goto code_r0x003edb04;
      if (plVar10 == (long *)0x0) {
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
          do {
            lVar17 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)plVar9[1])();
            plVar7 = plVar9;
          }
        }
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -0x448) =
             *(undefined8 *)((long)register0x00000008 + -0x3f8);
        *(undefined8 *)((long)register0x00000008 + -0x450) =
             *(undefined8 *)((long)register0x00000008 + -0x400);
        lVar17 = plVar10[2];
        plVar7 = plVar10;
        FUN_003ed09c();
        puVar12 = (undefined8 *)(plVar10[1] + lVar17 * 0x20);
        *puVar12 = plVar9;
        puVar12[1] = plVar8;
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x450);
        puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x448);
        puVar12[2] = uVar18;
        plVar14 = (long *)((ulong)plVar8 & 0xff);
        if (!bVar4) {
          plVar14 = plVar8;
        }
        plVar10[4] = plVar10[4] + (long)plVar14;
        plVar10[2] = lVar17 + 1;
      }
      plVar6[2] = lVar11;
      param_3 = plVar6;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    plVar7 = (long *)((long)register0x00000008 + -0x410);
    FUN_003ec688((undefined1 *)((long)register0x00000008 + -0x430),plVar7,
                 (long)plVar14 - (long)plVar5);
    puVar12 = (undefined8 *)(plVar6[1] + lVar11 * 0x20);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x430);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x418);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x420);
    puVar12[1] = *(undefined8 *)((long)register0x00000008 + -0x428);
    *puVar12 = uVar18;
    puVar12[3] = uVar21;
    puVar12[2] = uVar19;
    param_3 = *(long **)((long)register0x00000008 + -0x410);
    if (plVar10 == (long *)0x0) {
      if ((long *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar11 = *param_3;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar4) {
            *param_3 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          plVar7 = param_3;
          (*(code *)param_3[1])();
        }
      }
    }
    else {
      uVar15 = *(ulong *)((long)register0x00000008 + -0x408);
      *(undefined8 *)((long)register0x00000008 + -0x438) =
           *(undefined8 *)((long)register0x00000008 + -0x3f8);
      *(undefined8 *)((long)register0x00000008 + -0x440) =
           *(undefined8 *)((long)register0x00000008 + -0x400);
      lVar11 = plVar10[2];
      plVar7 = plVar10;
      FUN_003ed09c();
      puVar12 = (undefined8 *)(plVar10[1] + lVar11 * 0x20);
      *puVar12 = param_3;
      puVar12[1] = uVar15;
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x440);
      puVar12[3] = *(undefined8 *)((long)register0x00000008 + -0x438);
      puVar12[2] = uVar18;
      uVar1 = uVar15 & 0xff;
      if (param_3 != (long *)0x0) {
        uVar1 = uVar15;
      }
      plVar10[4] = plVar10[4] + uVar1;
      plVar10[2] = lVar11 + 1;
    }
LAB_003edcd0:
    plVar6 = plVar7;
    param_1 = plVar10;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -1000)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x480) = param_3;
  *(long **)((long)register0x00000008 + -0x478) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x470) =
       (undefined1 *)((long)register0x00000008 + -0x390);
  *(code **)((long)register0x00000008 + -0x468) = FUN_003edd10;
  puVar12 = (undefined8 *)plVar6[1];
  plVar14 = (long *)*puVar12;
  if (plVar14 == (long *)0x0) {
    plVar6[4] = plVar6[4] - (ulong)*(byte *)(puVar12 + 1);
  }
  else {
    plVar6[4] = plVar6[4] - puVar12[1];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plVar14[1])();
      }
    }
  }
  lVar11 = plVar6[2];
  plVar6[1] = plVar6[1] + 0x20;
  plVar6[2] = lVar11 + -1;
  if (lVar11 + -1 == 0) {
    plVar6[1] = *plVar6;
  }
  return;
}



/* Entry: 003ed3c8; end: 003ed7cb;  */

void FUN_003ed3c8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar14;
  long *unaff_x22;
  long *plVar15;
  long *unaff_x23;
  long *plVar16;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar17;
  undefined8 unaff_x28;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  code *pcVar19;
  code *unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  
  do {
    plVar16 = (long *)((long)register0x00000008 + -0x110);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    lVar12 = param_1[4] - (long)param_2;
    if ((long *)param_1[4] < param_2) {
      func_0x007753f8();
      plVar5 = param_1;
      plVar9 = param_2;
      plVar10 = param_3;
LAB_003ed598:
      func_0x00775494();
LAB_003ed59c:
      func_0x00775460();
LAB_003ed5a0:
      func_0x0077542c();
      param_1 = unaff_x19;
      param_3 = unaff_x20;
      param_2 = unaff_x21;
LAB_003ed5a4:
      func_0x007754c8();
      plVar8 = param_3;
LAB_003ed5a8:
      param_3 = plVar10;
      ___stack_chk_fail();
      *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_x28;
      *(long *)((long)register0x00000008 + -0x168) = unaff_x27;
      *(long **)((long)register0x00000008 + -0x160) = unaff_x26;
      *(long **)((long)register0x00000008 + -0x158) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x150) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x148) = lVar12;
      *(long **)((long)register0x00000008 + -0x140) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x138) = param_2;
      *(long **)((long)register0x00000008 + -0x130) = plVar8;
      *(long **)((long)register0x00000008 + -0x128) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x120) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3ed5ac;
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)PTR____stack_chk_guard_00999f88;
      plVar16 = (long *)(plVar5[4] - (long)plVar9);
      if ((long *)plVar5[4] < plVar9) {
        func_0x007754fc();
        plVar6 = plVar5;
        plVar10 = plVar9;
        plVar11 = param_3;
        goto LAB_003ed7b8;
      }
      plVar10 = plVar9;
      plVar6 = plVar5;
      plVar11 = param_3;
      if (plVar16 != (long *)0x0) {
        unaff_x24 = (long *)param_3[4];
        plVar15 = plVar9;
        if (plVar5[2] != 0) goto LAB_003ed648;
        goto LAB_003ed758;
      }
      plVar9 = param_2;
      plVar15 = unaff_x22;
      if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -0x178))
      goto LAB_003ed7c8;
      puVar18 = *(undefined1 **)((long)register0x00000008 + -0x120);
      pcVar19 = *(code **)((long)register0x00000008 + -0x118);
      unaff_x20 = *(long **)((long)register0x00000008 + -0x130);
      unaff_x19 = *(long **)((long)register0x00000008 + -0x128);
      unaff_x22 = *(long **)((long)register0x00000008 + -0x140);
      plVar9 = *(long **)((long)register0x00000008 + -0x138);
      unaff_x24 = *(long **)((long)register0x00000008 + -0x150);
      unaff_x23 = *(long **)((long)register0x00000008 + -0x148);
      unaff_x26 = *(long **)((long)register0x00000008 + -0x160);
      unaff_x25 = *(long **)((long)register0x00000008 + -0x158);
      unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x170);
      unaff_x27 = *(long *)((long)register0x00000008 + -0x168);
      plVar16 = param_3;
    }
    else {
      plVar9 = param_2;
      plVar5 = param_1;
      plVar10 = param_3;
      plVar8 = param_3;
      if (lVar12 != 0) {
        unaff_x24 = (long *)param_3[4];
        if (param_1[2] != 0) {
          unaff_x25 = (long *)((long)register0x00000008 + -0x88);
          unaff_x22 = param_2;
          do {
            FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x88),param_1);
            plVar5 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x80) & 0xff);
            if (*(long *)((long)register0x00000008 + -0x88) != 0) {
              plVar5 = *(long **)((long)register0x00000008 + -0x80);
            }
            unaff_x26 = (long *)((long)unaff_x22 - (long)plVar5);
            if (unaff_x22 < plVar5 || unaff_x26 == (long *)0x0) {
              if (unaff_x26 == (long *)0x0) {
                plVar16 = (long *)((long)register0x00000008 + -0xd0);
              }
              else {
                plVar5 = (long *)((long)register0x00000008 + -0x88);
                plVar10 = (long *)((long)&MACH_HEADER.magic + 3);
                plVar9 = unaff_x22;
                func_0x003ec568((undefined1 *)((long)register0x00000008 + -0xf0));
                lVar17 = param_1[1];
                param_1[1] = lVar17 + -0x20;
                uVar20 = *(undefined8 *)((long)register0x00000008 + -0xf0);
                uVar23 = *(undefined8 *)((long)register0x00000008 + -0xd8);
                uVar21 = *(undefined8 *)((long)register0x00000008 + -0xe0);
                *(undefined8 *)(lVar17 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0xe8);
                *(undefined8 *)(lVar17 + -0x20) = uVar20;
                *(undefined8 *)(lVar17 + -8) = uVar23;
                *(undefined8 *)(lVar17 + -0x10) = uVar21;
                param_1[2] = param_1[2] + 1;
                uVar1 = *(ulong *)((long)register0x00000008 + -0xe8) & 0xff;
                if (*(long *)((long)register0x00000008 + -0xf0) != 0) {
                  uVar1 = *(ulong *)((long)register0x00000008 + -0xe8);
                }
                param_1[4] = uVar1 + param_1[4];
                plVar6 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x80) & 0xff);
                if (*(long *)((long)register0x00000008 + -0x88) != 0) {
                  plVar6 = *(long **)((long)register0x00000008 + -0x80);
                }
                if (plVar6 != unaff_x22) goto LAB_003ed5a4;
              }
              lVar17 = *unaff_x25;
              lVar24 = *(long *)((long)register0x00000008 + -0x70);
              lVar22 = *(long *)((long)register0x00000008 + -0x78);
              plVar16[1] = *(long *)((long)register0x00000008 + -0x80);
              *plVar16 = lVar17;
              plVar16[3] = lVar24;
              plVar16[2] = lVar22;
              plVar5 = param_3;
              FUN_003ecb34();
              plVar9 = plVar16;
              break;
            }
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0x80);
            *(long *)((long)register0x00000008 + -0xb0) = *unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x70);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            plVar9 = (long *)((long)register0x00000008 + -0xb0);
            plVar5 = param_3;
            FUN_003ecb34();
            unaff_x22 = unaff_x26;
          } while (param_1[2] != 0);
        }
        unaff_x19 = param_1;
        unaff_x20 = param_3;
        unaff_x21 = param_2;
        if (param_3[4] != (long)unaff_x24 + (long)param_2) goto LAB_003ed598;
        if (param_1[4] != lVar12) goto LAB_003ed59c;
        if (param_1[2] != 0) {
          if (*(long *)PTR____stack_chk_guard_00999f88 ==
              *(long *)((long)register0x00000008 + -0x68)) {
            return;
          }
          goto LAB_003ed5a8;
        }
        goto LAB_003ed5a0;
      }
      param_2 = unaff_x21;
      if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -0x68))
      goto LAB_003ed5a8;
      puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
      pcVar19 = *(code **)((long)register0x00000008 + -8);
      unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
      plVar9 = *(long **)((long)register0x00000008 + -0x28);
      unaff_x24 = *(long **)((long)register0x00000008 + -0x40);
      unaff_x23 = *(long **)((long)register0x00000008 + -0x38);
      unaff_x26 = *(long **)((long)register0x00000008 + -0x50);
      unaff_x25 = *(long **)((long)register0x00000008 + -0x48);
      unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x60);
      unaff_x27 = *(long *)((long)register0x00000008 + -0x58);
      puVar3 = (undefined1 *)register0x00000008;
      plVar16 = param_3;
      unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
      unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
    }
    while( true ) {
      param_2 = plVar16;
      param_1 = plVar5;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x60);
      *(long **)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = plVar9;
      *(long **)(puVar3 + -0x20) = unaff_x20;
      *(long **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar18;
      *(code **)(puVar3 + -8) = pcVar19;
      unaff_x29 = puVar3 + -0x10;
      *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      unaff_x21 = (long *)param_1[2];
      plVar16 = param_1;
      plVar5 = param_2;
      if (unaff_x21 == (long *)0x0) goto LAB_003ed364;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      if (param_2[2] != 0) break;
      if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)(puVar3 + -0x38)) goto LAB_003ed3c4;
      *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
      *(long *)(puVar3 + -0x58) = unaff_x27;
      *(long **)(puVar3 + -0x50) = unaff_x26;
      *(long **)(puVar3 + -0x48) = unaff_x25;
      *(long **)(puVar3 + -0x40) = unaff_x24;
      *(long **)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
      *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
      *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      puVar18 = puVar3 + -0x10;
      *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      plVar9 = (long *)*param_1;
      unaff_x24 = (long *)(param_1[1] - (long)plVar9 >> 5);
      unaff_x22 = (long *)*param_2;
      unaff_x25 = (long *)(param_2[1] - (long)unaff_x22 >> 5);
      unaff_x26 = (long *)(param_2[2] + (long)unaff_x25);
      plVar16 = param_1 + 5;
      plVar5 = param_2 + 5;
      if (plVar9 == plVar16) {
        lVar12 = param_1[2];
        if (unaff_x22 == plVar5) {
          param_3 = (long *)((lVar12 + (long)unaff_x24) * 0x20);
          _memcpy(puVar3 + -0x168,plVar9,param_3);
          _memcpy(plVar9,unaff_x22,(long)unaff_x26 * 0x20);
          plVar5 = (long *)*param_2;
          plVar16 = (long *)(puVar3 + -0x168);
          unaff_x23 = param_3;
        }
        else {
          *param_1 = (long)unaff_x22;
          *param_2 = (long)plVar5;
          param_3 = (long *)((lVar12 + (long)unaff_x24) * 0x20);
          plVar16 = plVar9;
        }
LAB_003ed278:
        _memcpy();
      }
      else {
        if (unaff_x22 == plVar5) {
          *param_2 = (long)plVar9;
          *param_1 = (long)plVar16;
          param_3 = (long *)((long)unaff_x26 * 0x20);
          plVar5 = plVar16;
          plVar16 = unaff_x22;
          goto LAB_003ed278;
        }
        *param_1 = (long)unaff_x22;
        *param_2 = (long)plVar9;
        plVar16 = param_2;
      }
      param_1[1] = *param_1 + (long)unaff_x25 * 0x20;
      param_2[1] = *param_2 + (long)unaff_x24 * 0x20;
      lVar12 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = lVar12;
      lVar12 = param_1[3];
      param_1[3] = param_2[3];
      param_2[3] = lVar12;
      lVar12 = param_1[4];
      param_1[4] = param_2[4];
      param_2[4] = lVar12;
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x68)) {
        return;
      }
      pcVar19 = FUN_003ed300;
      ___stack_chk_fail();
      puVar3 = puVar3 + -0x170;
      unaff_x19 = param_2;
      unaff_x20 = param_1;
    }
    plVar9 = (long *)param_1[1];
    do {
      unaff_x22 = plVar9 + 4;
      lVar12 = *plVar9;
      lVar22 = plVar9[3];
      lVar17 = plVar9[2];
      *(long *)(puVar3 + -0x58) = plVar9[1];
      *(long *)(puVar3 + -0x60) = lVar12;
      *(long *)(puVar3 + -0x48) = lVar22;
      *(long *)(puVar3 + -0x50) = lVar17;
      plVar16 = param_2;
      plVar5 = (long *)(puVar3 + -0x60);
      FUN_003ecb34();
      unaff_x21 = (long *)((long)unaff_x21 + -1);
      plVar9 = unaff_x22;
    } while (unaff_x21 != (long *)0x0);
    param_1[2] = 0;
    param_1[4] = 0;
    unaff_x21 = (long *)0x0;
LAB_003ed364:
    param_1 = plVar16;
    param_2 = plVar5;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x38)) {
      return;
    }
LAB_003ed3c4:
    unaff_x30 = FUN_003ed3c8;
    ___stack_chk_fail();
  } while( true );
code_r0x003edb04:
  if (plVar11 == (long *)0x0) {
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
      do {
        lVar17 = *plVar5;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plVar5[1])();
        plVar6 = plVar5;
      }
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x3f8) =
         *(undefined8 *)((long)register0x00000008 + -0x398);
    *(undefined8 *)((long)register0x00000008 + -0x400) =
         *(undefined8 *)((long)register0x00000008 + -0x3a0);
    lVar17 = plVar11[2];
    plVar6 = plVar11;
    FUN_003ed09c();
    puVar13 = (undefined8 *)(plVar11[1] + lVar17 * 0x20);
    *puVar13 = plVar5;
    puVar13[1] = plVar9;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x400);
    puVar13[3] = *(undefined8 *)((long)register0x00000008 + -0x3f8);
    puVar13[2] = uVar20;
    plVar16 = (long *)((ulong)plVar9 & 0xff);
    if (!bVar4) {
      plVar16 = plVar9;
    }
    plVar11[4] = plVar11[4] + (long)plVar16;
    plVar11[2] = lVar17 + 1;
  }
  plVar8[2] = lVar12;
  lVar12 = lVar12 + -1;
  puVar13 = (undefined8 *)(plVar8[1] + lVar12 * 0x20);
  uVar23 = *puVar13;
  uVar21 = puVar13[3];
  uVar20 = puVar13[2];
  *(undefined8 *)((long)register0x00000008 + -0x3a8) = puVar13[1];
  *(undefined8 *)((long)register0x00000008 + -0x3b0) = uVar23;
  *(undefined8 *)((long)register0x00000008 + -0x398) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x3a0) = uVar20;
  plVar5 = *(long **)((long)register0x00000008 + -0x3b0);
  plVar9 = *(long **)((long)register0x00000008 + -0x3a8);
  bVar4 = plVar5 == (long *)0x0;
  plVar16 = (long *)((ulong)plVar9 & 0xff);
  if (!bVar4) {
    plVar16 = plVar9;
  }
  if (plVar10 < plVar16) goto LAB_003edbb0;
  goto LAB_003edafc;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x1b8) =
         *(undefined8 *)((long)register0x00000008 + -400);
    *(undefined8 *)((long)register0x00000008 + -0x1c0) =
         *(undefined8 *)((long)register0x00000008 + -0x198);
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)((long)register0x00000008 + -0x180);
    *(undefined8 *)((long)register0x00000008 + -0x1b0) =
         *(undefined8 *)((long)register0x00000008 + -0x188);
    plVar10 = (long *)((long)register0x00000008 + -0x1c0);
    FUN_003ecb34();
    plVar15 = unaff_x25;
    unaff_x22 = unaff_x25;
    if (plVar5[2] == 0) break;
LAB_003ed648:
    FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -0x198),plVar5);
    plVar10 = (long *)((ulong)*(long **)((long)register0x00000008 + -400) & 0xff);
    if (*(long *)((long)register0x00000008 + -0x198) != 0) {
      plVar10 = *(long **)((long)register0x00000008 + -400);
    }
    unaff_x25 = (long *)((long)plVar15 - (long)plVar10);
    plVar6 = param_3;
    if (plVar15 < plVar10 || unaff_x25 == (long *)0x0) {
      unaff_x22 = plVar15;
      if (unaff_x25 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x1d8) =
             *(undefined8 *)((long)register0x00000008 + -400);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) =
             *(undefined8 *)((long)register0x00000008 + -0x198);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x188);
        plVar10 = (long *)((long)register0x00000008 + -0x1e0);
        FUN_003ecb34();
      }
      else {
        plVar6 = (long *)((long)register0x00000008 + -0x198);
        plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
        plVar10 = plVar15;
        func_0x003ec568((undefined1 *)((long)register0x00000008 + -0x1e0));
        lVar12 = plVar5[1];
        plVar5[1] = lVar12 + -0x20;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x1c8);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)(lVar12 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)(lVar12 + -0x20) = uVar20;
        *(undefined8 *)(lVar12 + -8) = uVar23;
        *(undefined8 *)(lVar12 + -0x10) = uVar21;
        plVar5[2] = plVar5[2] + 1;
        uVar1 = *(ulong *)((long)register0x00000008 + -0x1d8) & 0xff;
        if (*(long *)((long)register0x00000008 + -0x1e0) != 0) {
          uVar1 = *(ulong *)((long)register0x00000008 + -0x1d8);
        }
        plVar5[4] = uVar1 + plVar5[4];
        unaff_x25 = *(long **)((long)register0x00000008 + -0x198);
        unaff_x26 = *(long **)((long)register0x00000008 + -400);
        plVar8 = (long *)((ulong)unaff_x26 & 0xff);
        if (unaff_x25 != (long *)0x0) {
          plVar8 = unaff_x26;
        }
        if (plVar8 != plVar15) goto LAB_003ed7c4;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) =
             *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -0x188);
        unaff_x27 = param_3[2];
        plVar6 = param_3;
        FUN_003ed09c();
        puVar13 = (undefined8 *)(param_3[1] + unaff_x27 * 0x20);
        *puVar13 = unaff_x25;
        puVar13[1] = unaff_x26;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
        puVar13[3] = *(undefined8 *)((long)register0x00000008 + -0x1e8);
        puVar13[2] = uVar20;
        param_3[4] = param_3[4] + (long)plVar15;
        param_3[2] = unaff_x27 + 1;
      }
      break;
    }
  }
LAB_003ed758:
  param_1 = plVar5;
  plVar8 = param_3;
  param_2 = plVar9;
  if (param_3[4] == (long)unaff_x24 + (long)plVar9) {
    if ((long *)plVar5[4] != plVar16) goto LAB_003ed7bc;
    plVar15 = unaff_x22;
    if (plVar5[2] != 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x178))
      {
        return;
      }
      goto LAB_003ed7c8;
    }
  }
  else {
LAB_003ed7b8:
    func_0x00775598();
LAB_003ed7bc:
    func_0x00775564();
    plVar15 = unaff_x22;
  }
  func_0x00775530();
  plVar5 = param_1;
  param_3 = plVar8;
  plVar9 = param_2;
LAB_003ed7c4:
  func_0x007755cc();
LAB_003ed7c8:
  ___stack_chk_fail();
  plVar8 = (long *)((long)register0x00000008 + -0x2a0);
  *(long **)((long)register0x00000008 + -0x230) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x228) = plVar16;
  *(long **)((long)register0x00000008 + -0x220) = plVar15;
  *(long **)((long)register0x00000008 + -0x218) = plVar9;
  *(long **)((long)register0x00000008 + -0x210) = param_3;
  *(long **)((long)register0x00000008 + -0x208) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x200) =
       (undefined1 *)((long)register0x00000008 + -0x120);
  *(code **)((long)register0x00000008 + -0x1f8) = FUN_003ed7cc;
  *(undefined8 *)((long)register0x00000008 + -0x238) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar6[4] < plVar10) {
    func_0x00775600();
  }
  else {
    plVar7 = plVar6;
    plVar15 = plVar10;
    if (plVar10 != (long *)0x0) {
      unaff_x24 = (long *)((long)register0x00000008 + -0x24f);
      param_3 = plVar11;
      do {
        plVar16 = plVar15;
        FUN_003ecdfc((undefined1 *)((long)register0x00000008 + -600),plVar6);
        lVar12 = *(long *)((long)register0x00000008 + -600);
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x250) & 0xff);
        if (lVar12 != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x250);
        }
        plVar5 = plVar6;
        plVar11 = plVar9;
        if (plVar16 < plVar9) {
          plVar10 = unaff_x24;
          if (lVar12 != 0) {
            plVar10 = *(long **)((long)register0x00000008 + -0x248);
          }
          _memcpy(param_3,plVar10,plVar16);
          *(undefined8 *)((long)register0x00000008 + -0x298) =
               *(undefined8 *)((long)register0x00000008 + -0x250);
          *(undefined8 *)((long)register0x00000008 + -0x2a0) =
               *(undefined8 *)((long)register0x00000008 + -600);
          *(undefined8 *)((long)register0x00000008 + -0x288) =
               *(undefined8 *)((long)register0x00000008 + -0x240);
          *(undefined8 *)((long)register0x00000008 + -0x290) =
               *(undefined8 *)((long)register0x00000008 + -0x248);
          plVar10 = plVar16;
          FUN_003ec404((undefined1 *)((long)register0x00000008 + -0x278));
          lVar12 = plVar6[1];
          plVar6[1] = lVar12 + -0x20;
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x260);
          uVar20 = *(undefined8 *)((long)register0x00000008 + -0x268);
          uVar23 = *(undefined8 *)((long)register0x00000008 + -0x278);
          *(undefined8 *)(lVar12 + -0x18) = *(undefined8 *)((long)register0x00000008 + -0x270);
          *(undefined8 *)(lVar12 + -0x20) = uVar23;
          *(undefined8 *)(lVar12 + -8) = uVar21;
          *(undefined8 *)(lVar12 + -0x10) = uVar20;
          plVar6[2] = plVar6[2] + 1;
          uVar1 = *(ulong *)((long)register0x00000008 + -0x270) & 0xff;
          if (*(long *)((long)register0x00000008 + -0x278) != 0) {
            uVar1 = *(ulong *)((long)register0x00000008 + -0x270);
          }
          plVar6[4] = uVar1 + plVar6[4];
          plVar7 = plVar8;
          plVar15 = plVar16;
          break;
        }
        plVar10 = unaff_x24;
        if (lVar12 != 0) {
          plVar10 = *(long **)((long)register0x00000008 + -0x248);
        }
        plVar15 = (long *)((long)plVar16 - (long)plVar9);
        if (plVar15 == (long *)0x0) {
          plVar11 = plVar16;
          _memcpy(param_3);
          plVar7 = *(long **)((long)register0x00000008 + -600);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar12 = *plVar7;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          break;
        }
        _memcpy(param_3);
        plVar7 = *(long **)((long)register0x00000008 + -600);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
          do {
            lVar12 = *plVar7;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plVar7[1])();
          }
        }
        param_3 = (long *)((long)param_3 + (long)plVar9);
      } while (plVar15 != (long *)0x0);
    }
    plVar6 = plVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x238)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x2f0) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x2e8) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x2e0) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x2d8) = plVar16;
  *(long **)((long)register0x00000008 + -0x2d0) = plVar15;
  *(long **)((long)register0x00000008 + -0x2c8) = plVar9;
  *(long **)((long)register0x00000008 + -0x2c0) = param_3;
  *(long **)((long)register0x00000008 + -0x2b8) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2b0) =
       (undefined1 *)((long)register0x00000008 + -0x200);
  *(code **)((long)register0x00000008 + -0x2a8) = FUN_003ed97c;
  *(undefined8 *)((long)register0x00000008 + -0x2f8) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar6[4] < plVar10) {
    func_0x00775634();
    plVar8 = plVar6;
  }
  else {
    plVar8 = plVar6;
    if (plVar6[2] != 0) {
      plVar15 = (long *)0x0;
      plVar16 = (long *)0x0;
      unaff_x24 = (long *)((long)register0x00000008 + -0x317);
      plVar7 = plVar10;
      plVar5 = plVar11;
      do {
        puVar13 = (undefined8 *)(plVar6[1] + (long)plVar15);
        uVar20 = *puVar13;
        uVar23 = puVar13[3];
        uVar21 = puVar13[2];
        *(undefined8 *)((long)register0x00000008 + -0x318) = puVar13[1];
        *(undefined8 *)((long)register0x00000008 + -800) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x308) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x310) = uVar21;
        plVar9 = (long *)((ulong)*(long **)((long)register0x00000008 + -0x318) & 0xff);
        if (*(long *)((long)register0x00000008 + -800) != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x318);
        }
        plVar10 = unaff_x24;
        if (*(long *)((long)register0x00000008 + -800) != 0) {
          plVar10 = *(long **)((long)register0x00000008 + -0x310);
        }
        unaff_x25 = (long *)((long)plVar7 - (long)plVar9);
        plVar8 = plVar5;
        if (plVar7 < plVar9 || unaff_x25 == (long *)0x0) {
          _memcpy();
          plVar11 = plVar7;
          break;
        }
        _memcpy(plVar5,plVar10,plVar9);
        plVar5 = (long *)((long)plVar5 + (long)plVar9);
        plVar16 = (long *)((long)plVar16 + 1);
        plVar15 = plVar15 + 4;
        plVar11 = unaff_x25;
        plVar7 = unaff_x25;
      } while (plVar16 < (long *)plVar6[2]);
    }
    param_3 = plVar6;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x2f8)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x380) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x378) = unaff_x27;
  *(long **)((long)register0x00000008 + -0x370) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x368) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x360) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x358) = plVar16;
  *(long **)((long)register0x00000008 + -0x350) = plVar15;
  *(long **)((long)register0x00000008 + -0x348) = plVar9;
  *(long **)((long)register0x00000008 + -0x340) = param_3;
  *(long **)((long)register0x00000008 + -0x338) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x330) =
       (undefined1 *)((long)register0x00000008 + -0x2b0);
  *(code **)((long)register0x00000008 + -0x328) = FUN_003eda78;
  *(undefined8 *)((long)register0x00000008 + -0x388) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((long *)plVar8[4] < plVar10) {
    func_0x00775668();
  }
  else {
    plVar8[4] = plVar8[4] - (long)plVar10;
    lVar12 = plVar8[2] + -1;
    puVar13 = (undefined8 *)(plVar8[1] + lVar12 * 0x20);
    uVar23 = *puVar13;
    uVar21 = puVar13[3];
    uVar20 = puVar13[2];
    *(undefined8 *)((long)register0x00000008 + -0x3a8) = puVar13[1];
    *(undefined8 *)((long)register0x00000008 + -0x3b0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x398) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x3a0) = uVar20;
    plVar5 = *(long **)((long)register0x00000008 + -0x3b0);
    plVar9 = *(long **)((long)register0x00000008 + -0x3a8);
    bVar4 = plVar5 == (long *)0x0;
    plVar16 = (long *)((ulong)plVar9 & 0xff);
    if (!bVar4) {
      plVar16 = plVar9;
    }
    if (plVar16 <= plVar10) {
      plVar6 = plVar8;
LAB_003edafc:
      plVar10 = (long *)((long)plVar10 - (long)plVar16);
      if (plVar10 != (long *)0x0) goto code_r0x003edb04;
      if (plVar11 == (long *)0x0) {
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
          do {
            lVar17 = *plVar5;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar17 + -1 == 0) {
            (*(code *)plVar5[1])();
            plVar6 = plVar5;
          }
        }
      }
      else {
        *(undefined8 *)((long)register0x00000008 + -1000) =
             *(undefined8 *)((long)register0x00000008 + -0x398);
        *(undefined8 *)((long)register0x00000008 + -0x3f0) =
             *(undefined8 *)((long)register0x00000008 + -0x3a0);
        lVar17 = plVar11[2];
        plVar6 = plVar11;
        FUN_003ed09c();
        puVar13 = (undefined8 *)(plVar11[1] + lVar17 * 0x20);
        *puVar13 = plVar5;
        puVar13[1] = plVar9;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x3f0);
        puVar13[3] = *(undefined8 *)((long)register0x00000008 + -1000);
        puVar13[2] = uVar20;
        plVar16 = (long *)((ulong)plVar9 & 0xff);
        if (!bVar4) {
          plVar16 = plVar9;
        }
        plVar11[4] = plVar11[4] + (long)plVar16;
        plVar11[2] = lVar17 + 1;
      }
      plVar8[2] = lVar12;
      param_3 = plVar8;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    plVar6 = (long *)((long)register0x00000008 + -0x3b0);
    FUN_003ec688((undefined1 *)((long)register0x00000008 + -0x3d0),plVar6,
                 (long)plVar16 - (long)plVar10);
    puVar13 = (undefined8 *)(plVar8[1] + lVar12 * 0x20);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x3d0);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x3b8);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x3c0);
    puVar13[1] = *(undefined8 *)((long)register0x00000008 + -0x3c8);
    *puVar13 = uVar20;
    puVar13[3] = uVar23;
    puVar13[2] = uVar21;
    param_3 = *(long **)((long)register0x00000008 + -0x3b0);
    if (plVar11 == (long *)0x0) {
      if ((long *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar12 = *param_3;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar4) {
            *param_3 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          plVar6 = param_3;
          (*(code *)param_3[1])();
        }
      }
    }
    else {
      uVar14 = *(ulong *)((long)register0x00000008 + -0x3a8);
      *(undefined8 *)((long)register0x00000008 + -0x3d8) =
           *(undefined8 *)((long)register0x00000008 + -0x398);
      *(undefined8 *)((long)register0x00000008 + -0x3e0) =
           *(undefined8 *)((long)register0x00000008 + -0x3a0);
      lVar12 = plVar11[2];
      plVar6 = plVar11;
      FUN_003ed09c();
      puVar13 = (undefined8 *)(plVar11[1] + lVar12 * 0x20);
      *puVar13 = param_3;
      puVar13[1] = uVar14;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x3e0);
      puVar13[3] = *(undefined8 *)((long)register0x00000008 + -0x3d8);
      puVar13[2] = uVar20;
      uVar1 = uVar14 & 0xff;
      if (param_3 != (long *)0x0) {
        uVar1 = uVar14;
      }
      plVar11[4] = plVar11[4] + uVar1;
      plVar11[2] = lVar12 + 1;
    }
LAB_003edcd0:
    plVar8 = plVar6;
    plVar5 = plVar11;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x388)) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x420) = param_3;
  *(long **)((long)register0x00000008 + -0x418) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x410) =
       (undefined1 *)((long)register0x00000008 + -0x330);
  *(code **)((long)register0x00000008 + -0x408) = FUN_003edd10;
  puVar13 = (undefined8 *)plVar8[1];
  plVar16 = (long *)*puVar13;
  if (plVar16 == (long *)0x0) {
    plVar8[4] = plVar8[4] - (ulong)*(byte *)(puVar13 + 1);
  }
  else {
    plVar8[4] = plVar8[4] - puVar13[1];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar16) {
      do {
        lVar12 = *plVar16;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plVar16[1])();
      }
    }
  }
  lVar12 = plVar8[2];
  plVar8[1] = plVar8[1] + 0x20;
  plVar8[2] = lVar12 + -1;
  if (lVar12 + -1 == 0) {
    plVar8[1] = *plVar8;
  }
  return;
}



/* Entry: 003ed7cc; end: 003ed97b;  */

void FUN_003ed7cc(long ****param_1,long ****param_2,long ****param_3)

{
  long ***ppplVar1;
  char cVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  long *plVar5;
  bool bVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long **pplVar9;
  long ****pppplVar10;
  undefined1 auVar11 [8];
  long ****pppplVar12;
  long ***ppplVar13;
  long *plVar14;
  long lVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_198;
  undefined1 auStack_128 [8];
  long ***ppplStack_120;
  long lStack_118;
  long lStack_108;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long ***ppplStack_68;
  undefined1 auStack_60 [8];
  long ***ppplStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  pppplVar8 = &ppplStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775600();
  }
  else {
    pppplVar7 = param_1;
    if (param_2 != (long ****)0x0) {
      pppplVar12 = param_3;
      pppplVar10 = param_2;
      do {
        FUN_003ecdfc(&ppplStack_68,param_1);
        auVar11 = (undefined1  [8])((ulong)auStack_60 & 0xff);
        if ((long ****)ppplStack_68 != (long ****)0x0) {
          auVar11 = auStack_60;
        }
        if (pppplVar10 < (ulong)auVar11) {
          pppplVar7 = (long ****)(auStack_60 + 1);
          if ((long ****)ppplStack_68 != (long ****)0x0) {
            pppplVar7 = (long ****)ppplStack_58;
          }
          _memcpy(pppplVar12,pppplVar7,pppplVar10);
          ppplStack_a8 = (long ***)auStack_60;
          ppplStack_b0 = ppplStack_68;
          uStack_98 = uStack_50;
          ppplStack_a0 = ppplStack_58;
          FUN_003ec404(&plStack_88);
          ppplVar13 = param_1[1];
          param_1[1] = ppplVar13 + -4;
          ppplVar13[-3] = (long **)plStack_80;
          ppplVar13[-4] = (long **)plStack_88;
          ppplVar13[-1] = (long **)plStack_70;
          ppplVar13[-2] = (long **)plStack_78;
          param_1[2] = (long ***)((long)param_1[2] + 1);
          pplVar9 = (long **)((ulong)plStack_80 & 0xff);
          if ((long **)plStack_88 != (long **)0x0) {
            pplVar9 = (long **)plStack_80;
          }
          param_1[4] = (long ***)((long)pplVar9 + (long)param_1[4]);
          pppplVar7 = pppplVar8;
          param_2 = pppplVar10;
          param_3 = (long ****)auVar11;
          break;
        }
        param_2 = (long ****)(auStack_60 + 1);
        if ((long ****)ppplStack_68 != (long ****)0x0) {
          param_2 = (long ****)ppplStack_58;
        }
        pppplVar3 = (long ****)((long)pppplVar10 - (long)auVar11);
        if (pppplVar3 == (long ****)0x0) {
          _memcpy(pppplVar12);
          pppplVar7 = (long ****)ppplStack_68;
          param_3 = pppplVar10;
          if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_68) {
            do {
              ppplVar13 = (long ***)*ppplStack_68;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppplStack_68,0x10);
              if (bVar6) {
                *ppplStack_68 = (long **)((long)ppplVar13 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            pppplVar7 = (long ****)ppplStack_68;
            if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
              (*(code *)ppplStack_68[1])();
              pppplVar7 = (long ****)ppplStack_68;
              param_3 = pppplVar10;
            }
          }
          break;
        }
        param_3 = (long ****)auVar11;
        _memcpy(pppplVar12);
        pppplVar7 = (long ****)ppplStack_68;
        if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_68) {
          do {
            ppplVar13 = (long ***)*ppplStack_68;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppplStack_68,0x10);
            if (bVar6) {
              *ppplStack_68 = (long **)((long)ppplVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
            (*(code *)ppplStack_68[1])();
          }
        }
        pppplVar12 = (long ****)((long)pppplVar12 + (long)auVar11);
        pppplVar10 = pppplVar3;
      } while (pppplVar3 != (long ****)0x0);
    }
    param_1 = pppplVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775634();
  }
  else {
    pppplVar8 = param_1;
    if (param_1[2] != (long ***)0x0) {
      lVar15 = 0;
      ppplVar13 = (long ***)0x0;
      pppplVar12 = param_2;
      pppplVar7 = param_3;
      do {
        plVar14 = (long *)((long)param_1[1] + lVar15);
        auStack_128 = (undefined1  [8])plVar14[1];
        lStack_118 = plVar14[3];
        ppplStack_120 = (long ***)plVar14[2];
        param_2 = (long ****)(auStack_128 + 1);
        pppplVar10 = (long ****)((ulong)auStack_128 & 0xff);
        if (*plVar14 != 0) {
          param_2 = (long ****)ppplStack_120;
          pppplVar10 = (long ****)auStack_128;
        }
        param_3 = (long ****)((long)pppplVar12 - (long)pppplVar10);
        if (pppplVar12 < pppplVar10 || param_3 == (long ****)0x0) {
          _memcpy();
          pppplVar8 = pppplVar7;
          param_3 = pppplVar12;
          break;
        }
        pppplVar8 = pppplVar7;
        _memcpy(pppplVar7,param_2,pppplVar10);
        pppplVar7 = (long ****)((long)pppplVar7 + (long)pppplVar10);
        ppplVar13 = (long ***)((long)ppplVar13 + 1);
        lVar15 = lVar15 + 0x20;
        pppplVar12 = param_3;
      } while (ppplVar13 < param_1[2]);
    }
    param_1 = pppplVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return;
    }
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775668();
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)param_2);
    ppplVar16 = (long ***)((long)param_1[2] + -1);
    ppplVar13 = param_1[1] + (long)ppplVar16 * 4;
    ppplStack_1b8 = (long ***)ppplVar13[1];
    ppplStack_1c0 = (long ***)*ppplVar13;
    plStack_1a8 = (long *)ppplVar13[3];
    plStack_1b0 = (long *)ppplVar13[2];
    bVar6 = (long ****)ppplStack_1c0 == (long ****)0x0;
    pppplVar8 = (long ****)((ulong)ppplStack_1b8 & 0xff);
    if (!bVar6) {
      pppplVar8 = (long ****)ppplStack_1b8;
    }
    pppplVar7 = param_1;
    if (pppplVar8 <= param_2) {
LAB_003edafc:
      plVar5 = plStack_1a8;
      plVar14 = plStack_1b0;
      ppplVar4 = ppplStack_1b8;
      ppplVar13 = ppplStack_1c0;
      param_2 = (long ****)((long)param_2 - (long)pppplVar8);
      if (param_2 != (long ****)0x0) goto code_r0x003edb04;
      if (param_3 == (long ****)0x0) {
        if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_1c0) {
          do {
            ppplVar13 = (long ***)*ppplStack_1c0;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppplStack_1c0,0x10);
            if (bVar6) {
              *ppplStack_1c0 = (long **)((long)ppplVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
            pppplVar7 = (long ****)ppplStack_1c0;
            (*(code *)ppplStack_1c0[1])();
          }
        }
      }
      else {
        ppplVar17 = param_3[2];
        pppplVar7 = param_3;
        FUN_003ed09c();
        ppplVar1 = param_3[1] + (long)ppplVar17 * 4;
        *ppplVar1 = (long **)ppplVar13;
        ppplVar1[1] = (long **)ppplVar4;
        ppplVar1[3] = (long **)plVar5;
        ppplVar1[2] = (long **)plVar14;
        pppplVar8 = (long ****)((ulong)ppplVar4 & 0xff);
        if (!bVar6) {
          pppplVar8 = (long ****)ppplVar4;
        }
        param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar8);
        param_3[2] = (long ***)((long)ppplVar17 + 1);
      }
      param_1[2] = ppplVar16;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    pppplVar7 = &ppplStack_1c0;
    FUN_003ec688(&plStack_1e0,pppplVar7,(long)pppplVar8 - (long)param_2);
    plVar5 = plStack_1a8;
    plVar14 = plStack_1b0;
    ppplVar1 = ppplStack_1b8;
    ppplVar4 = ppplStack_1c0;
    ppplVar13 = param_1[1] + (long)ppplVar16 * 4;
    ppplVar13[1] = (long **)plStack_1d8;
    *ppplVar13 = (long **)plStack_1e0;
    ppplVar13[3] = (long **)plStack_1c8;
    ppplVar13[2] = (long **)plStack_1d0;
    if (param_3 == (long ****)0x0) {
      if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_1c0) {
        do {
          ppplVar13 = (long ***)*ppplStack_1c0;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppplStack_1c0,0x10);
          if (bVar6) {
            *ppplStack_1c0 = (long **)((long)ppplVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
          pppplVar7 = (long ****)ppplStack_1c0;
          (*(code *)ppplStack_1c0[1])();
        }
      }
    }
    else {
      ppplVar16 = param_3[2];
      pppplVar7 = param_3;
      FUN_003ed09c();
      ppplVar13 = param_3[1] + (long)ppplVar16 * 4;
      *ppplVar13 = (long **)ppplVar4;
      ppplVar13[1] = (long **)ppplVar1;
      ppplVar13[3] = (long **)plVar5;
      ppplVar13[2] = (long **)plVar14;
      pppplVar8 = (long ****)((ulong)ppplVar1 & 0xff);
      if ((long ****)ppplVar4 != (long ****)0x0) {
        pppplVar8 = (long ****)ppplVar1;
      }
      param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar8);
      param_3[2] = (long ***)((long)ppplVar16 + 1);
    }
LAB_003edcd0:
    param_1 = pppplVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
      return;
    }
  }
  ___stack_chk_fail();
  ppplVar13 = param_1[1];
  pplVar9 = *ppplVar13;
  if (pplVar9 == (long **)0x0) {
    param_1[4] = (long ***)((long)param_1[4] - (ulong)*(byte *)(ppplVar13 + 1));
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)ppplVar13[1]);
    if ((long **)((long)&MACH_HEADER.magic + 1) < pplVar9) {
      do {
        plVar14 = *pplVar9;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar6) {
          *pplVar9 = (long *)((long)plVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long *)((long)plVar14 + -1) == (long *)0x0) {
        (*(code *)pplVar9[1])();
      }
    }
  }
  ppplVar13 = param_1[2];
  param_1[1] = param_1[1] + 4;
  param_1[2] = (long ***)((long)ppplVar13 + -1);
  if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
    param_1[1] = *param_1;
  }
  return;
code_r0x003edb04:
  if (param_3 == (long ****)0x0) {
    if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_1c0) {
      do {
        ppplVar13 = (long ***)*ppplStack_1c0;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppplStack_1c0,0x10);
        if (bVar6) {
          *ppplStack_1c0 = (long **)((long)ppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
        (*(code *)ppplStack_1c0[1])();
        pppplVar7 = (long ****)ppplStack_1c0;
      }
    }
  }
  else {
    ppplVar17 = param_3[2];
    pppplVar7 = param_3;
    FUN_003ed09c();
    ppplVar1 = param_3[1] + (long)ppplVar17 * 4;
    *ppplVar1 = (long **)ppplVar13;
    ppplVar1[1] = (long **)ppplVar4;
    ppplVar1[3] = (long **)plVar5;
    ppplVar1[2] = (long **)plVar14;
    pppplVar8 = (long ****)((ulong)ppplVar4 & 0xff);
    if (!bVar6) {
      pppplVar8 = (long ****)ppplVar4;
    }
    param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar8);
    param_3[2] = (long ***)((long)ppplVar17 + 1);
  }
  param_1[2] = ppplVar16;
  ppplVar16 = (long ***)((long)ppplVar16 + -1);
  ppplVar13 = param_1[1] + (long)ppplVar16 * 4;
  ppplStack_1b8 = (long ***)ppplVar13[1];
  ppplStack_1c0 = (long ***)*ppplVar13;
  plStack_1a8 = (long *)ppplVar13[3];
  plStack_1b0 = (long *)ppplVar13[2];
  bVar6 = (long ****)ppplStack_1c0 == (long ****)0x0;
  pppplVar8 = (long ****)((ulong)ppplStack_1b8 & 0xff);
  if (!bVar6) {
    pppplVar8 = (long ****)ppplStack_1b8;
  }
  if (param_2 < pppplVar8) goto LAB_003edbb0;
  goto LAB_003edafc;
}



/* Entry: 003ed97c; end: 003eda77;  */

void FUN_003ed97c(long ****param_1,long ****param_2,long ****param_3)

{
  long ***ppplVar1;
  char cVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  long *plVar5;
  bool bVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long **pplVar9;
  long ****pppplVar10;
  long *plVar11;
  long lVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_e8;
  undefined1 auStack_78 [8];
  long ***ppplStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775634();
  }
  else {
    pppplVar7 = param_1;
    if (param_1[2] != (long ***)0x0) {
      lVar12 = 0;
      ppplVar13 = (long ***)0x0;
      pppplVar10 = param_2;
      pppplVar8 = param_3;
      do {
        plVar11 = (long *)((long)param_1[1] + lVar12);
        auStack_78 = (undefined1  [8])plVar11[1];
        lStack_68 = plVar11[3];
        ppplStack_70 = (long ***)plVar11[2];
        param_2 = (long ****)(auStack_78 + 1);
        pppplVar3 = (long ****)((ulong)auStack_78 & 0xff);
        if (*plVar11 != 0) {
          param_2 = (long ****)ppplStack_70;
          pppplVar3 = (long ****)auStack_78;
        }
        param_3 = (long ****)((long)pppplVar10 - (long)pppplVar3);
        if (pppplVar10 < pppplVar3 || param_3 == (long ****)0x0) {
          _memcpy();
          pppplVar7 = pppplVar8;
          param_3 = pppplVar10;
          break;
        }
        pppplVar7 = pppplVar8;
        _memcpy(pppplVar8,param_2,pppplVar3);
        pppplVar8 = (long ****)((long)pppplVar8 + (long)pppplVar3);
        ppplVar13 = (long ***)((long)ppplVar13 + 1);
        lVar12 = lVar12 + 0x20;
        pppplVar10 = param_3;
      } while (ppplVar13 < param_1[2]);
    }
    param_1 = pppplVar7;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775668();
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)param_2);
    ppplVar14 = (long ***)((long)param_1[2] + -1);
    ppplVar13 = param_1[1] + (long)ppplVar14 * 4;
    ppplStack_108 = (long ***)ppplVar13[1];
    ppplStack_110 = (long ***)*ppplVar13;
    plStack_f8 = (long *)ppplVar13[3];
    plStack_100 = (long *)ppplVar13[2];
    bVar6 = (long ****)ppplStack_110 == (long ****)0x0;
    pppplVar7 = (long ****)((ulong)ppplStack_108 & 0xff);
    if (!bVar6) {
      pppplVar7 = (long ****)ppplStack_108;
    }
    pppplVar8 = param_1;
    if (pppplVar7 <= param_2) {
LAB_003edafc:
      plVar5 = plStack_f8;
      plVar11 = plStack_100;
      ppplVar4 = ppplStack_108;
      ppplVar13 = ppplStack_110;
      param_2 = (long ****)((long)param_2 - (long)pppplVar7);
      if (param_2 != (long ****)0x0) goto code_r0x003edb04;
      if (param_3 == (long ****)0x0) {
        if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_110) {
          do {
            ppplVar13 = (long ***)*ppplStack_110;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppplStack_110,0x10);
            if (bVar6) {
              *ppplStack_110 = (long **)((long)ppplVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
            pppplVar8 = (long ****)ppplStack_110;
            (*(code *)ppplStack_110[1])();
          }
        }
      }
      else {
        ppplVar15 = param_3[2];
        pppplVar8 = param_3;
        FUN_003ed09c();
        ppplVar1 = param_3[1] + (long)ppplVar15 * 4;
        *ppplVar1 = (long **)ppplVar13;
        ppplVar1[1] = (long **)ppplVar4;
        ppplVar1[3] = (long **)plVar5;
        ppplVar1[2] = (long **)plVar11;
        pppplVar7 = (long ****)((ulong)ppplVar4 & 0xff);
        if (!bVar6) {
          pppplVar7 = (long ****)ppplVar4;
        }
        param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar7);
        param_3[2] = (long ***)((long)ppplVar15 + 1);
      }
      param_1[2] = ppplVar14;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    pppplVar8 = &ppplStack_110;
    FUN_003ec688(&plStack_130,pppplVar8,(long)pppplVar7 - (long)param_2);
    plVar5 = plStack_f8;
    plVar11 = plStack_100;
    ppplVar1 = ppplStack_108;
    ppplVar4 = ppplStack_110;
    ppplVar13 = param_1[1] + (long)ppplVar14 * 4;
    ppplVar13[1] = (long **)plStack_128;
    *ppplVar13 = (long **)plStack_130;
    ppplVar13[3] = (long **)plStack_118;
    ppplVar13[2] = (long **)plStack_120;
    if (param_3 == (long ****)0x0) {
      if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_110) {
        do {
          ppplVar13 = (long ***)*ppplStack_110;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppplStack_110,0x10);
          if (bVar6) {
            *ppplStack_110 = (long **)((long)ppplVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
          pppplVar8 = (long ****)ppplStack_110;
          (*(code *)ppplStack_110[1])();
        }
      }
    }
    else {
      ppplVar14 = param_3[2];
      pppplVar8 = param_3;
      FUN_003ed09c();
      ppplVar13 = param_3[1] + (long)ppplVar14 * 4;
      *ppplVar13 = (long **)ppplVar4;
      ppplVar13[1] = (long **)ppplVar1;
      ppplVar13[3] = (long **)plVar5;
      ppplVar13[2] = (long **)plVar11;
      pppplVar7 = (long ****)((ulong)ppplVar1 & 0xff);
      if ((long ****)ppplVar4 != (long ****)0x0) {
        pppplVar7 = (long ****)ppplVar1;
      }
      param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar7);
      param_3[2] = (long ***)((long)ppplVar14 + 1);
    }
LAB_003edcd0:
    param_1 = pppplVar8;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
      return;
    }
  }
  ___stack_chk_fail();
  ppplVar13 = param_1[1];
  pplVar9 = *ppplVar13;
  if (pplVar9 == (long **)0x0) {
    param_1[4] = (long ***)((long)param_1[4] - (ulong)*(byte *)(ppplVar13 + 1));
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)ppplVar13[1]);
    if ((long **)((long)&MACH_HEADER.magic + 1) < pplVar9) {
      do {
        plVar11 = *pplVar9;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar6) {
          *pplVar9 = (long *)((long)plVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long *)((long)plVar11 + -1) == (long *)0x0) {
        (*(code *)pplVar9[1])();
      }
    }
  }
  ppplVar13 = param_1[2];
  param_1[1] = param_1[1] + 4;
  param_1[2] = (long ***)((long)ppplVar13 + -1);
  if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
    param_1[1] = *param_1;
  }
  return;
code_r0x003edb04:
  if (param_3 == (long ****)0x0) {
    if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_110) {
      do {
        ppplVar13 = (long ***)*ppplStack_110;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppplStack_110,0x10);
        if (bVar6) {
          *ppplStack_110 = (long **)((long)ppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
        (*(code *)ppplStack_110[1])();
        pppplVar8 = (long ****)ppplStack_110;
      }
    }
  }
  else {
    ppplVar15 = param_3[2];
    pppplVar8 = param_3;
    FUN_003ed09c();
    ppplVar1 = param_3[1] + (long)ppplVar15 * 4;
    *ppplVar1 = (long **)ppplVar13;
    ppplVar1[1] = (long **)ppplVar4;
    ppplVar1[3] = (long **)plVar5;
    ppplVar1[2] = (long **)plVar11;
    pppplVar7 = (long ****)((ulong)ppplVar4 & 0xff);
    if (!bVar6) {
      pppplVar7 = (long ****)ppplVar4;
    }
    param_3[4] = (long ***)((long)param_3[4] + (long)pppplVar7);
    param_3[2] = (long ***)((long)ppplVar15 + 1);
  }
  param_1[2] = ppplVar14;
  ppplVar14 = (long ***)((long)ppplVar14 + -1);
  ppplVar13 = param_1[1] + (long)ppplVar14 * 4;
  ppplStack_108 = (long ***)ppplVar13[1];
  ppplStack_110 = (long ***)*ppplVar13;
  plStack_f8 = (long *)ppplVar13[3];
  plStack_100 = (long *)ppplVar13[2];
  bVar6 = (long ****)ppplStack_110 == (long ****)0x0;
  pppplVar7 = (long ****)((ulong)ppplStack_108 & 0xff);
  if (!bVar6) {
    pppplVar7 = (long ****)ppplStack_108;
  }
  if (param_2 < pppplVar7) goto LAB_003edbb0;
  goto LAB_003edafc;
}



/* Entry: 003eda78; end: 003edd0f;  */

void FUN_003eda78(long ****param_1,long ***param_2,long ****param_3)

{
  char cVar1;
  long ***ppplVar2;
  long *plVar3;
  bool bVar4;
  long ****pppplVar5;
  long **pplVar6;
  long ***ppplVar7;
  long *plVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long ***ppplStack_90;
  long **pplStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[4] < param_2) {
    func_0x00775668();
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)param_2);
    ppplVar9 = (long ***)((long)param_1[2] + -1);
    ppplVar7 = param_1[1] + (long)ppplVar9 * 4;
    pplStack_88 = ppplVar7[1];
    ppplStack_90 = (long ***)*ppplVar7;
    plStack_78 = (long *)ppplVar7[3];
    plStack_80 = (long *)ppplVar7[2];
    bVar4 = (long ****)ppplStack_90 == (long ****)0x0;
    ppplVar7 = (long ***)((ulong)pplStack_88 & 0xff);
    if (!bVar4) {
      ppplVar7 = (long ***)pplStack_88;
    }
    pppplVar5 = param_1;
    if (ppplVar7 <= param_2) {
LAB_003edafc:
      plVar3 = plStack_78;
      plVar8 = plStack_80;
      pplVar6 = pplStack_88;
      ppplVar2 = ppplStack_90;
      param_2 = (long ***)((long)param_2 - (long)ppplVar7);
      if (param_2 != (long ***)0x0) goto code_r0x003edb04;
      if (param_3 == (long ****)0x0) {
        if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_90) {
          do {
            ppplVar7 = (long ***)*ppplStack_90;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppplStack_90,0x10);
            if (bVar4) {
              *ppplStack_90 = (long **)((long)ppplVar7 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long ***)((long)ppplVar7 + -1) == (long ***)0x0) {
            pppplVar5 = (long ****)ppplStack_90;
            (*(code *)ppplStack_90[1])();
          }
        }
      }
      else {
        ppplVar10 = param_3[2];
        pppplVar5 = param_3;
        FUN_003ed09c();
        ppplVar7 = param_3[1] + (long)ppplVar10 * 4;
        *ppplVar7 = (long **)ppplVar2;
        ppplVar7[1] = pplVar6;
        ppplVar7[3] = (long **)plVar3;
        ppplVar7[2] = (long **)plVar8;
        ppplVar7 = (long ***)((ulong)pplVar6 & 0xff);
        if (!bVar4) {
          ppplVar7 = (long ***)pplVar6;
        }
        param_3[4] = (long ***)((long)param_3[4] + (long)ppplVar7);
        param_3[2] = (long ***)((long)ppplVar10 + 1);
      }
      param_1[2] = ppplVar9;
      goto LAB_003edcd0;
    }
LAB_003edbb0:
    pppplVar5 = &ppplStack_90;
    FUN_003ec688(&plStack_b0,pppplVar5,(long)ppplVar7 - (long)param_2);
    plVar3 = plStack_78;
    plVar8 = plStack_80;
    pplVar6 = pplStack_88;
    ppplVar2 = ppplStack_90;
    ppplVar7 = param_1[1] + (long)ppplVar9 * 4;
    ppplVar7[1] = (long **)plStack_a8;
    *ppplVar7 = (long **)plStack_b0;
    ppplVar7[3] = (long **)plStack_98;
    ppplVar7[2] = (long **)plStack_a0;
    if (param_3 == (long ****)0x0) {
      if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_90) {
        do {
          ppplVar7 = (long ***)*ppplStack_90;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppplStack_90,0x10);
          if (bVar4) {
            *ppplStack_90 = (long **)((long)ppplVar7 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ***)((long)ppplVar7 + -1) == (long ***)0x0) {
          pppplVar5 = (long ****)ppplStack_90;
          (*(code *)ppplStack_90[1])();
        }
      }
    }
    else {
      ppplVar9 = param_3[2];
      pppplVar5 = param_3;
      FUN_003ed09c();
      ppplVar7 = param_3[1] + (long)ppplVar9 * 4;
      *ppplVar7 = (long **)ppplVar2;
      ppplVar7[1] = pplVar6;
      ppplVar7[3] = (long **)plVar3;
      ppplVar7[2] = (long **)plVar8;
      ppplVar7 = (long ***)((ulong)pplVar6 & 0xff);
      if ((long ****)ppplVar2 != (long ****)0x0) {
        ppplVar7 = (long ***)pplVar6;
      }
      param_3[4] = (long ***)((long)param_3[4] + (long)ppplVar7);
      param_3[2] = (long ***)((long)ppplVar9 + 1);
    }
LAB_003edcd0:
    param_1 = pppplVar5;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
  ppplVar7 = param_1[1];
  pplVar6 = *ppplVar7;
  if (pplVar6 == (long **)0x0) {
    param_1[4] = (long ***)((long)param_1[4] - (ulong)*(byte *)(ppplVar7 + 1));
  }
  else {
    param_1[4] = (long ***)((long)param_1[4] - (long)ppplVar7[1]);
    if ((long **)((long)&MACH_HEADER.magic + 1) < pplVar6) {
      do {
        plVar8 = *pplVar6;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar6,0x10);
        if (bVar4) {
          *pplVar6 = (long *)((long)plVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((long *)((long)plVar8 + -1) == (long *)0x0) {
        (*(code *)pplVar6[1])();
      }
    }
  }
  ppplVar7 = param_1[2];
  param_1[1] = param_1[1] + 4;
  param_1[2] = (long ***)((long)ppplVar7 + -1);
  if ((long ***)((long)ppplVar7 + -1) == (long ***)0x0) {
    param_1[1] = *param_1;
  }
  return;
code_r0x003edb04:
  if (param_3 == (long ****)0x0) {
    if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_90) {
      do {
        ppplVar7 = (long ***)*ppplStack_90;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppplStack_90,0x10);
        if (bVar4) {
          *ppplStack_90 = (long **)((long)ppplVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((long ***)((long)ppplVar7 + -1) == (long ***)0x0) {
        (*(code *)ppplStack_90[1])();
        pppplVar5 = (long ****)ppplStack_90;
      }
    }
  }
  else {
    ppplVar10 = param_3[2];
    pppplVar5 = param_3;
    FUN_003ed09c();
    ppplVar7 = param_3[1] + (long)ppplVar10 * 4;
    *ppplVar7 = (long **)ppplVar2;
    ppplVar7[1] = pplVar6;
    ppplVar7[3] = (long **)plVar3;
    ppplVar7[2] = (long **)plVar8;
    ppplVar7 = (long ***)((ulong)pplVar6 & 0xff);
    if (!bVar4) {
      ppplVar7 = (long ***)pplVar6;
    }
    param_3[4] = (long ***)((long)param_3[4] + (long)ppplVar7);
    param_3[2] = (long ***)((long)ppplVar10 + 1);
  }
  param_1[2] = ppplVar9;
  ppplVar9 = (long ***)((long)ppplVar9 + -1);
  ppplVar7 = param_1[1] + (long)ppplVar9 * 4;
  pplStack_88 = ppplVar7[1];
  ppplStack_90 = (long ***)*ppplVar7;
  plStack_78 = (long *)ppplVar7[3];
  plStack_80 = (long *)ppplVar7[2];
  bVar4 = (long ****)ppplStack_90 == (long ****)0x0;
  ppplVar7 = (long ***)((ulong)pplStack_88 & 0xff);
  if (!bVar4) {
    ppplVar7 = (long ***)pplStack_88;
  }
  if (param_2 < ppplVar7) goto LAB_003edbb0;
  goto LAB_003edafc;
}



/* Entry: 003edd10; end: 003edd9b;  */

void FUN_003edd10(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  plVar3 = (long *)*puVar4;
  if (plVar3 == (long *)0x0) {
    param_1[4] = param_1[4] - (ulong)*(byte *)(puVar4 + 1);
  }
  else {
    param_1[4] = param_1[4] - puVar4[1];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  lVar5 = param_1[2];
  param_1[1] = param_1[1] + 0x20;
  param_1[2] = lVar5 + -1;
  if (lVar5 + -1 == 0) {
    param_1[1] = *param_1;
  }
  return;
}



/* Entry: 003edd9c; end: 003ede37;  */

void FUN_003edd9c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_3 == 0) {
    uVar2 = (ulong)(param_1[3] * 3) >> 1;
    param_1[3] = uVar2;
    plVar3 = (long *)*param_1;
    lVar1 = uVar2 << 5;
    if (plVar3 == param_1 + 5) {
      FUN_00338c74();
      *param_1 = lVar1;
      _memcpy();
      plVar3 = (long *)*param_1;
    }
    else {
      FUN_00338cbc();
      *param_1 = (long)plVar3;
    }
    param_1[1] = (long)plVar3;
  }
  else {
    _memmove(*param_1,param_1[1],param_1[2] << 5);
    param_1[1] = *param_1;
  }
  return;
}



/* Entry: 003ede38; end: 003ede3f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003ede38(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003ede40; end: 003ede8f;  */

void FUN_003ede40(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
  FUN_003ecf54(param_1);
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003ede90; end: 003ededf;  */

void FUN_003ede90(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
  func_0x003ecf8c(param_1);
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003edee0; end: 003edf03;  */

void FUN_003edee0(int param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  iRam0000000000b65d90 = param_1 * 1000;
  return;
}



/* Entry: 003edf04; end: 003ee19f;  */

void FUN_003edf04(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **appuStack_d8 [3];
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_FUN_009de508;
  pcStack_50 = FUN_003ac418;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_58;
LAB_003edf7c:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_003edf7c;
  }
  ppuStack_78 = &PTR_FUN_009de508;
  pcStack_70 = FUN_003ac418;
  pppuStack_60 = &ppuStack_78;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_78;
LAB_003edfc8:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_003edfc8;
  }
  ppuStack_98 = &PTR_FUN_009de508;
  pcStack_90 = FUN_003ac418;
  pppuStack_80 = &ppuStack_98;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_98;
LAB_003ee014:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_003ee014;
  }
  appuStack_b8[0] = &PTR_FUN_009e1720;
  pppuStack_a0 = appuStack_b8;
  FUN_003f517c(param_1,2,&UNK_00002710,appuStack_b8);
  if (pppuStack_a0 == appuStack_b8) {
    lVar3 = 4;
    pppuVar1 = appuStack_b8;
LAB_003ee068:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_a0;
    goto LAB_003ee068;
  }
  appuStack_d8[0] = &PTR_DAT_009e17a0;
  pppuStack_c0 = appuStack_d8;
  FUN_003f517c(param_1,4,0x7fffffff,appuStack_d8);
  if (pppuStack_c0 == appuStack_d8) {
    lVar3 = 4;
    pppuVar1 = appuStack_d8;
LAB_003ee0bc:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_c0;
    if (pppuStack_c0 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_003ee0bc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_c0 == appuStack_d8) {
    lVar3 = 4;
    pppuVar2 = appuStack_d8;
  }
  else {
    if (pppuStack_c0 == (undefined ***)0x0) goto LAB_003ee198;
    lVar3 = 5;
    pppuVar2 = pppuStack_c0;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_003ee198:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 003ee1a0; end: 003ee1a7;  */

void FUN_003ee1a0(void)

{
  return;
}



/* Entry: 003ee1a8; end: 003ee1cb;  */

void FUN_003ee1a8(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e1720;
  return;
}



/* Entry: 003ee1cc; end: 003ee1e3;  */

void FUN_003ee1cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009e1720;
  return;
}



/* Entry: 003ee1e4; end: 003ee207;  */

undefined8 FUN_003ee1e4(undefined8 param_1,undefined8 *param_2)

{
  FUN_003a6e14(*param_2,&PTR_DAT_009e1cd0);
  return 1;
}



/* Entry: 003ee208; end: 003ee243;  */

long FUN_003ee208(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e1780);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003ee244; end: 003ee257;  */

undefined ** FUN_003ee244(void)

{
  return &PTR_DAT_009e1780;
}



/* Entry: 003ee258; end: 003ee27b;  */

void FUN_003ee258(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009e17a0;
  return;
}



/* Entry: 003ee27c; end: 003ee293;  */

void FUN_003ee27c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_009e17a0;
  return;
}



/* Entry: 003ee294; end: 003ee2b7;  */

undefined8 FUN_003ee294(undefined8 param_1,undefined8 *param_2)

{
  FUN_003a6bac(*param_2,&PTR_DAT_009e1e38);
  return 1;
}



/* Entry: 003ee2b8; end: 003ee2f3;  */

long FUN_003ee2b8(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e1800);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003ee2f4; end: 003ee307;  */

undefined ** FUN_003ee2f4(void)

{
  return &PTR_DAT_009e1800;
}



/* Entry: 003ee308; end: 003ee3db;  */

dword * FUN_003ee308(long param_1,long param_2,dword param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  dword *pdVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  dword *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    lVar8 = param_2;
    lVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x21 = &section_00000108.reloff;
    FUN_00338c74();
    unaff_x21[2] = 0;
    unaff_x21[4] = param_3;
    unaff_x22 = (long)(unaff_x21 + 6);
    lVar5 = unaff_x22;
    FUN_003ecf38();
    if (lVar8 != 0) {
      unaff_x23 = 0;
      do {
        puVar1 = (undefined8 *)(lVar4 + unaff_x23 * 0x20);
        plVar9 = (long *)*puVar1;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar10 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        *(undefined8 *)((long)register0x00000008 + -0x68) = puVar1[1];
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar11;
        lVar5 = unaff_x22;
        FUN_003ecb34(unaff_x22,(undefined1 *)((long)register0x00000008 + -0x70));
        unaff_x23 = unaff_x23 + 1;
      } while (unaff_x23 != lVar8);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_003ee3dc;
    if (*(int *)(lVar5 + 8) != 0) {
      pcVar6 = "return nullptr";
      func_0x00338df0("return nullptr",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                      ,0x4e);
      *(long *)((long)register0x00000008 + -0xa0) = lVar4;
      *(long *)((long)register0x00000008 + -0x98) = lVar8;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(code **)((long)register0x00000008 + -0x88) = FUN_003ee418;
      pdVar7 = (dword *)0x0;
      if (pcVar6 != (char *)0x0) {
        FUN_003413d4((undefined1 *)((long)register0x00000008 + -0xe8));
        if (*(int *)(pcVar6 + 8) == 0) {
          FUN_003ecf54(pcVar6 + 0x18);
        }
        FUN_00338cb8(pcVar6);
        pdVar7 = (dword *)((long)register0x00000008 + -0xe8);
        FUN_00341470(pdVar7);
      }
      return pdVar7;
    }
    param_3 = *(dword *)(lVar5 + 0x10);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_1 = *(long *)(lVar5 + 0x20);
    param_2 = *(long *)(lVar5 + 0x28);
    unaff_x19 = lVar8;
    unaff_x20 = lVar4;
  }
  return unaff_x21;
}



/* Entry: 003ee3dc; end: 003ee417;  */

dword * FUN_003ee3dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  dword dVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  dword *pdVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  dword *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(int *)(param_1 + 8) != 0) {
      pcVar7 = "return nullptr";
      func_0x00338df0("return nullptr",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                      ,0x4e);
      *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x18) = FUN_003ee418;
      pdVar8 = (dword *)0x0;
      if (pcVar7 != (char *)0x0) {
        FUN_003413d4((undefined1 *)((long)register0x00000008 + -0x78));
        if (*(int *)(pcVar7 + 8) == 0) {
          FUN_003ecf54(pcVar7 + 0x18);
        }
        FUN_00338cb8(pcVar7);
        pdVar8 = (dword *)((long)register0x00000008 + -0x78);
        FUN_00341470(pdVar8);
      }
      return pdVar8;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    dVar4 = *(dword *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x21 = &section_00000108.reloff;
    FUN_00338c74();
    unaff_x21[2] = 0;
    unaff_x21[4] = dVar4;
    unaff_x22 = (long)(unaff_x21 + 6);
    param_1 = unaff_x22;
    FUN_003ecf38();
    if (lVar3 != 0) {
      unaff_x23 = 0;
      do {
        puVar1 = (undefined8 *)(lVar2 + unaff_x23 * 0x20);
        plVar9 = (long *)*puVar1;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar10 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        *(undefined8 *)((long)register0x00000008 + -0x68) = puVar1[1];
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar11;
        param_1 = unaff_x22;
        FUN_003ecb34(unaff_x22,(undefined1 *)((long)register0x00000008 + -0x70));
        unaff_x23 = unaff_x23 + 1;
      } while (unaff_x23 != lVar3);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48))
    break;
    unaff_x30 = FUN_003ee3dc;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = lVar3;
    unaff_x20 = lVar2;
  }
  return unaff_x21;
}



/* Entry: 003ee418; end: 003ee47b;  */

void FUN_003ee418(long param_1)

{
  undefined1 auStack_68 [72];
  
  if (param_1 != 0) {
    FUN_003413d4(auStack_68);
    if (*(int *)(param_1 + 8) == 0) {
      FUN_003ecf54(param_1 + 0x18);
    }
    FUN_00338cb8(param_1);
    FUN_00341470(auStack_68);
  }
  return;
}



/* Entry: 003ee47c; end: 003ee4af;  */

undefined8 FUN_003ee47c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  pcVar1 = "return 0";
  pcVar2 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc";
  func_0x00338df0("return 0",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                  ,0x61);
  *(char **)pcVar1 = pcVar2;
  if (*(int *)(pcVar2 + 8) == 0) {
    *(char **)(pcVar1 + 8) = pcVar2;
    pcVar1[0x10] = '\0';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
  }
  return 1;
}



/* Entry: 003ee4b0; end: 003ee583;  */

undefined8 FUN_003ee4b0(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}



/* Entry: 003ee584; end: 003ee5e7;  */

void FUN_003ee584(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    FUN_003ee5e8();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        func_0x00339d70();
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 003ee5e8; end: 003ee653;  */

ulong * FUN_003ee5e8(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x003d6048(param_1,0x50);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_00339d50(param_1);
  param_1[8] = 0;
  return param_1;
}



/* Entry: 003ee654; end: 003ee783;  */

/* WARNING: Removing unreachable block (ram,0x00552a38) */
/* WARNING: Removing unreachable block (ram,0x00552aa8) */

long * FUN_003ee654(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar4 = (ulong *)param_2[1];
  do {
    uVar9 = *puVar4;
    uVar1 = uVar9 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar1) {
    func_0x003d6048(puVar4,0x20);
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar9 + 0x30);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = (ulong)param_3;
  param_2[3] = (long)puVar4;
  pcVar7 = "child";
  plVar5 = param_3;
  (**(code **)(*param_3 + 0x60))();
  if ((char)param_2[5] == '\0') {
    func_0x0077569c();
  }
  else if ((char)param_3[5] == '\0') {
    uVar12 = (uint)param_4;
    if ((param_4 & 1) != 0) {
      lVar10 = param_3[4];
      if (param_2[4] <= param_3[4]) {
        lVar10 = param_2[4];
      }
      param_2[4] = lVar10;
    }
    if ((uVar12 >> 2 & 1) == 0) {
      if ((uVar12 >> 1 & 1) == 0) {
LAB_003ee75c:
        if ((uVar12 >> 3 & 1) != 0) {
          *(undefined1 *)((long)param_2 + 0x29) = 1;
        }
        *param_1 = 0;
        return plVar5;
      }
      pcVar7 = "Census context propagation requested without Census tracing propagation";
    }
    else {
      if ((uVar12 >> 1 & 1) != 0) {
        (**(code **)(*param_3 + 8))(param_3,1);
        plVar5 = param_2;
        (**(code **)*param_2)(param_2,1,param_3,0);
        goto LAB_003ee75c;
      }
      pcVar7 = "Census tracing propagation requested without Census context propagation";
    }
    *param_1 = 8;
    pcVar8 = segment_command_00000020.segname;
    __Znwm();
    plStack_48 = (long *)0x0;
    pcVar8[0] = '\x01';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8[4] = '\x02';
    pcVar8[5] = '\0';
    pcVar8[6] = '\0';
    pcVar8[7] = '\0';
    lVar10 = 0x48;
    __Znwm();
    *(qword *)(pcVar8 + 0x10) = 0x47;
    *(qword *)(pcVar8 + 0x18) = 0x8000000000000048;
    *(long *)(pcVar8 + 8) = lVar10;
    _memmove(lVar10,pcVar7,0x47);
    *(undefined1 *)(lVar10 + 0x47) = 0;
    *(qword *)(pcVar8 + 0x20) = 0;
    *param_1 = (long)(pcVar8 + 1);
    return param_1;
  }
  func_0x007756d0();
  lVar13 = plVar5[3];
  plVar6 = (long *)pcVar7;
  plStack_60 = param_3;
  uStack_58 = param_4;
  plStack_50 = param_2;
  plStack_48 = param_1;
  FUN_003ee584();
  func_0x00339d8c();
  lVar10 = plVar6[8];
  if (lVar10 == 0) {
    plVar6[8] = (long)plVar5;
    *(long **)(lVar13 + 0x10) = plVar5;
    puVar4 = (ulong *)(lVar13 + 8);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar10 + 0x18) + 0x10);
    *(long *)(lVar13 + 8) = lVar10;
    *(long *)(lVar13 + 0x10) = lVar11;
    *(long **)(*(long *)(lVar11 + 0x18) + 8) = plVar5;
    puVar4 = (ulong *)(*(long *)(*(long *)(lVar13 + 8) + 0x18) + 0x10);
  }
  *puVar4 = (ulong)plVar5;
  (**(code **)(*(long *)pcVar7 + 0x10))();
  if ((int)pcVar7 != 0) {
    uStack_68 = 4;
    (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(plVar6);
  return plVar6;
}



/* Entry: 003ee784; end: 003ee877;  */

void FUN_003ee784(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uStack_38;
  
  lVar5 = param_1[3];
  plVar1 = param_2;
  FUN_003ee584();
  func_0x00339d8c();
  lVar2 = plVar1[8];
  if (lVar2 == 0) {
    plVar1[8] = (long)param_1;
    *(long **)(lVar5 + 0x10) = param_1;
    plVar3 = (long *)(lVar5 + 8);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10);
    *(long *)(lVar5 + 8) = lVar2;
    *(long *)(lVar5 + 0x10) = lVar4;
    *(long **)(*(long *)(lVar4 + 0x18) + 8) = param_1;
    plVar3 = (long *)(*(long *)(*(long *)(lVar5 + 8) + 0x18) + 0x10);
  }
  *plVar3 = (long)param_1;
  (**(code **)(*param_2 + 0x10))();
  if ((int)param_2 != 0) {
    uStack_38 = 4;
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(plVar1);
  return;
}



/* Entry: 003ee878; end: 003eec0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003ee878(ulong *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  char *pcVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  ulong uStack_150;
  ulong auStack_148 [4];
  undefined1 uStack_121;
  ulong uStack_120;
  char *pcStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  char *pcStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar14 = *param_2;
  *param_1 = 0;
  lVar11 = *(long *)(lVar14 + 0xc0);
  lVar4 = (*(ulong *)(lVar14 + 0x28) & 0xffffffffffffff00) + 0x200;
  lVar7 = *(long *)(lVar11 + 0x38) + 0xdd0;
  FUN_003d5fa8(lVar4,lVar7,lVar14 + 0x98);
  FUN_003f1f08(lVar7,lVar4,param_2);
  *param_3 = lVar7;
  FUN_003ec024(&puStack_80);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    *(undefined8 *)(lVar7 + 0xda0) = 0;
    *(long *)(lVar7 + 0xda8) = param_2[1];
  }
  else {
    *(undefined8 *)(lVar7 + 0xda0) = 0;
    *(undefined8 *)(lVar7 + 0xda8) = 0;
    *(undefined8 *)(lVar7 + 0xdb0) = 0;
    plVar9 = (long *)param_2[7];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_78 = param_2[8];
    puStack_80 = (ulong *)param_2[7];
    lStack_68 = param_2[10];
    lStack_70 = param_2[9];
    FUN_0034b9f8(lVar7 + 0x1a8);
    if ((char)param_2[0x10] != '\0') {
      FUN_0034bbe0(lVar7 + 0x1a8,param_2 + 0xc);
    }
  }
  puVar13 = (ulong *)param_2[2];
  if (puVar13 != (ulong *)0x0) {
    FUN_003ee654(&uStack_90,lVar7,puVar13,(int)param_2[3]);
    FUN_003fbec4(&uStack_88,&uStack_90);
    FUN_003eec0c(param_1,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  lStack_c8 = param_2[6];
  lStack_c0 = lVar7 + 0xa38;
  ppuStack_b8 = &puStack_80;
  uStack_b0 = *(undefined8 *)(lVar7 + 0xb8);
  uStack_a8 = *(undefined8 *)(lVar7 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar7 + 8);
  lStack_98 = lVar7 + 0x38;
  lStack_d0 = lVar7 + 0xdd0;
  FUN_003a6824(&uStack_d8,lVar11,1,FUN_003eedb0,lVar7,&lStack_d0);
  puVar8 = &uStack_d8;
  FUN_003eec0c(param_1);
  if ((uStack_d8 & 1) != 0) {
    FUN_0055293c();
  }
  if (puVar13 != (ulong *)0x0) {
    FUN_003ee784(lVar7);
    puVar8 = puVar13;
  }
  uVar12 = *param_1;
  if (uVar12 != 0) {
    if ((uVar12 & 1) != 0) {
      piVar10 = (int *)(uVar12 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar8 = &uStack_e0;
    uStack_e0 = uVar12;
    FUN_003eef4c(lVar7);
    if ((uVar12 & 1) != 0) {
      FUN_0055293c(uVar12);
    }
  }
  if (param_2[4] != 0) {
    if (param_2[5] != 0) {
      pcStack_f0 = 
      "args->pollset_set_alternative == nullptr && \"Only one of \'cq\' and \'pollset_set_alternative\' should be \" \"non-nullptr.\""
      ;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                   ,0x250,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3eeb84);
      (*pcVar3)();
    }
    FUN_003f6cd4();
    lVar4 = param_2[4];
    FUN_003f7014();
    func_0x003c3d30();
    *(long *)(lVar7 + 0xa0) = lVar4;
    *(int *)(lVar7 + 0xa8) = (int)puVar8;
  }
  lVar4 = param_2[5];
  if (lVar4 != 0) {
    func_0x003c3d28();
    *(long *)(lVar7 + 0xa0) = lVar4;
    *(int *)(lVar7 + 0xa8) = (int)puVar8;
  }
  puVar13 = (ulong *)(lVar7 + 0xa0);
  puVar5 = puVar13;
  func_0x003c3d70();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_003a6958(lVar7 + 0xdd0);
    puVar8 = puVar13;
  }
  if (*(char *)(lVar7 + 0x28) == '\0') {
    if ((*(long *)(lVar7 + 0xda8) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar7 + 0xda8) + 0x18), lVar4 != 0)) {
      FUN_003a8624(lVar4 + 0x38);
    }
  }
  else if (*(long *)(lVar14 + 0x90) != 0) {
    FUN_003a8624(*(long *)(lVar14 + 0x90) + 0x50);
  }
  puVar13 = puStack_80;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_80) {
    do {
      uVar12 = *puStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_80,0x10);
      if (bVar2) {
        *puStack_80 = uVar12 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar12 - 1 == 0) {
      (*(code *)puStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(param_1);
  puVar5 = puVar13;
  __Unwind_Resume();
  pcStack_f8 = FUN_003eec0c;
  if (*puVar8 == 0) {
    return;
  }
  auStack_148[0] = *puVar5;
  puStack_110 = puVar13;
  puStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  if (auStack_148[0] == 0) {
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    auStack_148[1] = 0;
    FUN_003b646c(&uStack_120,2,"Call creation failed",0x14,&uStack_121,auStack_148 + 1);
    uVar12 = *puVar5;
    if (uStack_120 == uVar12) {
LAB_003eec84:
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *puVar5 = uStack_120;
      uStack_120 = 0x36;
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
        uVar12 = uStack_120;
        goto LAB_003eec84;
      }
    }
    pcStack_118 = (char *)(auStack_148 + 1);
    FUN_0033d548(&pcStack_118);
    auStack_148[0] = *puVar5;
  }
  if ((auStack_148[0] & 1) != 0) {
    piVar10 = (int *)(auStack_148[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_150 = *puVar8;
  if ((uStack_150 & 1) != 0) {
    piVar10 = (int *)(uStack_150 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&pcStack_118,auStack_148,&uStack_150);
  pcVar6 = (char *)*puVar5;
  if (pcStack_118 != pcVar6) {
    *puVar5 = (ulong)pcStack_118;
    pcStack_118 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar6 & 1) == 0) goto LAB_003eed1c;
    FUN_0055293c();
    pcVar6 = pcStack_118;
  }
  if (((ulong)pcVar6 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003eed1c:
  if ((uStack_150 & 1) != 0) {
    FUN_0055293c();
  }
  if ((auStack_148[0] & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003eec0c; end: 003eeda7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003eec0c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  int *piVar5;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  char *pcStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  auStack_58[0] = *param_1;
  if (auStack_58[0] == 0) {
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_003b646c(&uStack_30,2,"Call creation failed",0x14,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_003eec84:
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_1 = uStack_30;
      uStack_30 = 0x36;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
        uVar3 = uStack_30;
        goto LAB_003eec84;
      }
    }
    pcStack_28 = (char *)(auStack_58 + 1);
    FUN_0033d548(&pcStack_28);
    auStack_58[0] = *param_1;
  }
  if ((auStack_58[0] & 1) != 0) {
    piVar5 = (int *)(auStack_58[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = *param_2;
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&pcStack_28,auStack_58,&uStack_60);
  pcVar4 = (char *)*param_1;
  if (pcStack_28 != pcVar4) {
    *param_1 = (ulong)pcStack_28;
    pcStack_28 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar4 & 1) == 0) goto LAB_003eed1c;
    FUN_0055293c();
    pcVar4 = pcStack_28;
  }
  if (((ulong)pcVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003eed1c:
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  if ((auStack_58[0] & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003eeda8; end: 003eedaf;  */

long FUN_003eeda8(long param_1)

{
  return param_1 + 0xdd0;
}



/* Entry: 003eedb0; end: 003eef4b;  */

void FUN_003eedb0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  FUN_00366e68(param_2 + 0x5b8);
  FUN_00367130(param_2 + 0x7a8);
  FUN_00366e68(param_2 + 0x7c0);
  FUN_00367130(param_2 + 0x9b0);
  FUN_0036b714(param_2 + 0xbb0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x00339d70();
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    FUN_003f6d30();
  }
  plVar1 = (long *)(param_2 + 0xdc0);
  do {
    while (*plVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)(param_2 + 0xdb8);
  if ((uVar7 & 1) == 0) {
    *plVar1 = 0;
  }
  else {
    piVar6 = (int *)(uVar7 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar1 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = uVar7;
  uStack_28 = uVar7;
  FUN_003fb7d8(&uStack_30,*(undefined8 *)(param_2 + 0x20),param_2 + 0xa20,0,0,param_2 + 0xa28);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_38 = 0;
  puVar5 = &uStack_38;
  FUN_003ef174(param_2 + 0xdb8);
  uVar4 = uStack_38;
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_0033a6ec();
  FUN_0033a774(param_1,*(undefined8 *)(param_2 + 0xb8));
  *(ulong *)(param_2 + 0xa10) = uVar4;
  *(ulong **)(param_2 + 0xa18) = puVar5;
  *(code **)(param_2 + 0xd88) = FUN_003ef0ec;
  *(long *)(param_2 + 0xd90) = param_2;
  *(undefined8 *)(param_2 + 0xd98) = 0;
  FUN_003a69ac(param_2 + 0xdd0,param_2 + 0x9e0,param_2 + 0xd80);
  if ((uVar7 & 1) != 0) {
    FUN_0055293c(uVar7);
  }
  return;
}



/* Entry: 003eef4c; end: 003ef07f;  */

void FUN_003eef4c(qword param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_38;
  
  plVar1 = (long *)(param_1 + 0xd78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(param_1 + 0xdd0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar7 = (int *)(uStack_38 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003bbb7c(param_1 + 0x38,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  pqVar4 = &segment_command_00000020.fileoff;
  __Znwm();
  lVar5 = (long)(pqVar4 + 5);
  *pqVar4 = param_1;
  pqVar4[6] = (qword)FUN_003ef4c4;
  pqVar4[7] = (qword)pqVar4;
  pqVar4[8] = 0;
  FUN_00400bf0();
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 0x40;
  lVar8 = *(long *)(lVar5 + 8);
  uVar6 = *(ulong *)(lVar8 + 0x98);
  uVar9 = *param_2;
  if (uVar9 != uVar6) {
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
      uVar9 = *param_2;
    }
    *(ulong *)(lVar8 + 0x98) = uVar9;
    if ((uVar6 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_003ef434(param_1,lVar5,pqVar4 + 1);
  return;
}



/* Entry: 003ef080; end: 003ef0eb;  */

void FUN_003ef080(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 == 0) {
    func_0x00775704();
    lVar7 = param_1;
  }
  else {
    lVar7 = param_1 + 0xa0;
    lVar5 = param_2;
    func_0x003c3d54();
    uVar4 = (undefined4)lVar5;
    if (lVar7 == 0) {
      *(long *)(param_1 + 0x98) = param_2;
      FUN_003f6cd4(param_2);
      FUN_003f7014();
      func_0x003c3d30();
      *(long *)(param_1 + 0xa0) = param_2;
      *(undefined4 *)(param_1 + 0xa8) = uVar4;
      lVar7 = *(long *)(param_1 + 0xdf8);
      if (lVar7 != 0) {
        plVar6 = (long *)(param_1 + 0xe00);
        do {
          (**(code **)(*plVar6 + 0x28))(plVar6,param_1 + 0xa0);
          lVar7 = lVar7 + -1;
          plVar6 = plVar6 + 3;
        } while (lVar7 != 0);
      }
      return;
    }
  }
  func_0x00775738();
  plVar6 = *(long **)(lVar7 + 0xb0);
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  uVar8 = *(undefined8 *)(lVar7 + 8);
  FUN_003f2168();
  FUN_003d6000(uVar8);
  FUN_003f3670(plVar6,uVar8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003ef158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 003ef0ec; end: 003ef173;  */

void FUN_003ef0ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_003f2168();
  FUN_003d6000(uVar6);
  FUN_003f3670(plVar5,uVar6);
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
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003ef158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 003ef174; end: 003ef1eb;  */

void FUN_003ef174(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = param_1 + 1;
  do {
    while (*puVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = *param_1;
  uVar5 = *param_2;
  if (uVar5 != uVar4) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = *param_2;
    }
    *param_1 = uVar5;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
  }
  *puVar1 = 0;
  return;
}



/* Entry: 003ef1ec; end: 003ef28f;  */

void FUN_003ef1ec(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(*plVar3 + 0x10);
    func_0x00339d8c(lVar2);
    if (*(long *)(lVar2 + 0x40) == param_1) {
      lVar1 = 0;
      if (plVar3[1] != param_1) {
        lVar1 = plVar3[1];
      }
      *(long *)(lVar2 + 0x40) = lVar1;
    }
    lVar1 = plVar3[2];
    *(long *)(*(long *)(lVar1 + 0x18) + 8) = plVar3[1];
    *(long *)(*(long *)(plVar3[1] + 0x18) + 0x10) = lVar1;
    func_0x00339da8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x003ef278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar3 + 0x68))((long *)*plVar3,"child");
    return;
  }
  return;
}



/* Entry: 003ef290; end: 003ef3d3;  */

void FUN_003ef290(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 0x30);
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
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_00341380(&uStack_38,0);
    FUN_003413d4(auStack_80);
    FUN_003ef1ec(param_1);
    if (*(char *)(param_1 + 0xc0) != '\0') {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                   ,0x2be,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3ef394);
      (*pcVar4)();
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
    if (*(long *)(param_1 + 200) == 0) {
      uStack_88 = 4;
      FUN_003eef4c(param_1,&uStack_88);
      FUN_0033c494(&uStack_88);
    }
    else {
      FUN_003bba54(param_1 + 0x38,0);
    }
    plVar1 = (long *)(param_1 + 0xdd0);
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
      FUN_004005ec();
    }
    FUN_00341470(auStack_80);
    FUN_003414dc(&uStack_38);
  }
  return;
}



/* Entry: 003ef3d4; end: 003ef3f3;  */

void FUN_003ef3d4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar3 = (long *)(param_1 + 0xdd0);
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
    FUN_003c3188();
    if ((((ulong)plVar3 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(param_1 + 0xdd8,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,param_1 + 0xdd8,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003ef3f4; end: 003ef433;  */

char * FUN_003ef3f4(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x9d8);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0xb0);
    FUN_003f36bc();
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    pcVar1 = "unknown";
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    _strlen();
    pcVar1 = pcVar1 + 1;
    FUN_00338c74(pcVar1);
    _memcpy();
  }
  return pcVar1;
}



/* Entry: 003ef434; end: 003ef4ab;  */

void FUN_003ef434(long param_1,long param_2,long param_3)

{
  ulong uStack_28;
  
  *(long *)(param_2 + 0x18) = param_1;
  *(code **)(param_3 + 8) = FUN_003f2270;
  *(long *)(param_3 + 0x10) = param_2;
  *(undefined8 *)(param_3 + 0x18) = 0;
  uStack_28 = 0;
  FUN_003bb88c(param_1 + 0x38,param_3,&uStack_28,"executing batch");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ef4ac; end: 003ef4c3;  */

void FUN_003ef4ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0xdd0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003ef4c4; end: 003ef51b;  */

void FUN_003ef4c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_003bb974(*param_1 + 0x38,"on_complete for cancel_stream op");
  plVar1 = (long *)(*param_1 + 0xdd0);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003ef51c; end: 003ef64f;  */

void FUN_003ef51c(long *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  uVar1 = param_3;
  _strlen(param_3);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  FUN_003b646c(&uStack_50,2,param_3,uVar1,&uStack_51,&uStack_70);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_003be254(&uStack_48,&uStack_50,5,param_3,uVar1);
  FUN_003be104(&uStack_40,&uStack_48,3,(long)param_2);
  (**(code **)(*param_1 + 0x18))(param_1,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = (undefined1 *)&uStack_70;
  FUN_0033d548(&puStack_38);
  return;
}



/* Entry: 003ef650; end: 003ef8d7;  */

/* WARNING: Possible PIC construction at 0x003ef768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003ef780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003ef76c) */
/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_003ef650(ulong *******param_1,ulong *******param_2,ulong ******param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  ulong ******ppppppuVar10;
  ulong *****pppppuVar11;
  ulong ******ppppppuVar12;
  ulong uVar13;
  ulong *****pppppuVar14;
  ulong *******unaff_x19;
  ulong ****ppppuVar15;
  ulong *******unaff_x20;
  char *unaff_x21;
  char cVar16;
  undefined8 unaff_x22;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar18;
  int iVar19;
  ulong *******pppppppuVar20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong ******ppppppuVar21;
  ulong ******ppppppuVar22;
  ulong ******ppppppuVar23;
  ulong *****pppppuVar24;
  ulong *****pppppuVar25;
  undefined4 uStack_288;
  char cStack_281;
  undefined8 uStack_280;
  ulong *******pppppppuStack_278;
  ulong ******ppppppuStack_270;
  ulong *******pppppppuStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  ulong ******appppppuStack_248 [13];
  ulong *****pppppuStack_1e0;
  ulong *****pppppuStack_1d8;
  ulong *****pppppuStack_1c0;
  ulong *****pppppuStack_1b8;
  ulong *****pppppuStack_1b0;
  ulong *****pppppuStack_1a8;
  long lStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_140;
  ulong *****pppppuStack_138;
  ulong *****pppppuStack_130;
  ulong *****pppppuStack_128;
  ulong ******ppppppuStack_120;
  ulong ******ppppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong ******ppppppuStack_68;
  ulong *******pppppppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong *****pppppuStack_48;
  ulong *****pppppuStack_40;
  ulong *****pppppuStack_38;
  ulong *****pppppuStack_30;
  long lStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuVar4 = param_2;
  if (*(char *)(param_1 + 5) == '\0') {
    if (*param_2 == (ulong ******)0x0) {
      uVar7 = *(byte *)((long)param_1 + 0xd74) ^ 1;
    }
    else {
      uVar7 = 1;
    }
    *(uint *)param_1[0x1b4] = uVar7;
    pppppuVar11 = param_1[0x1b5][3];
    if (pppppuVar11 != (ulong *****)0x0) {
      if (*(int *)param_1[0x1b4] == 0) {
        pppppppuVar5 = param_1 + 0x1b8;
        do {
          while (*pppppppuVar5 != (ulong ******)0x0) {
            ClearExclusiveLocal();
          }
          cVar16 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
          if (bVar3) {
            *pppppppuVar5 = (ulong ******)0x1;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        param_1[0x1b8] = (ulong ******)0x0;
        if (param_1[0x1b7] == (ulong ******)0x0) {
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
            pppppuVar11 = pppppuVar11 + 7;
            goto SUB_003a86dc;
          }
          goto LAB_003ef870;
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
        pppppuVar11 = pppppuVar11 + 7;
        goto SUB_003a8684;
      }
      goto LAB_003ef870;
    }
  }
  else {
    pppppppuStack_60 = (ulong *******)0x0;
    uStack_58 = 0;
    lStack_50 = 0;
    ppppppuStack_68 = *param_2;
    if (((ulong)ppppppuStack_68 & 1) != 0) {
      piVar9 = (int *)((long)ppppppuStack_68 + -1);
      do {
        cVar16 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
    }
    param_3 = param_1[0x1b4];
    pppppppuVar4 = (ulong *******)&pppppppuStack_60;
    FUN_003fb7d8(&ppppppuStack_68,param_1[4],param_3,pppppppuVar4,0,param_1[0x1b6]);
    param_4 = (int)pppppppuVar4;
    if (((ulong)ppppppuStack_68 & 1) != 0) {
      FUN_0055293c();
    }
    uStack_78 = uStack_58;
    ppppppuStack_80 = (ulong ******)pppppppuStack_60;
    lStack_70 = lStack_50;
    pppppppuStack_60 = (ulong *******)0x0;
    uStack_58 = 0;
    lStack_50 = 0;
    func_0x003ec34c(&pppppuStack_48,&ppppppuStack_80);
    ppppppuVar10 = param_1[0x1b5];
    ppppppuVar10[1] = pppppuStack_40;
    *ppppppuVar10 = pppppuStack_48;
    ppppppuVar10[3] = pppppuStack_30;
    ppppppuVar10[2] = pppppuStack_38;
    if (lStack_70 < 0) {
      __ZdlPv(ppppppuStack_80);
    }
    pppppppuStack_88 = (ulong *******)*param_2;
    if (((ulong)pppppppuStack_88 & 1) != 0) {
      piVar9 = (int *)((long)pppppppuStack_88 + -1);
      do {
        cVar16 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
    }
    pppppppuVar4 = (ulong *******)&pppppppuStack_88;
    FUN_003ef174(param_1 + 0x1b7);
    pppppppuVar5 = pppppppuStack_88;
    if (((ulong)pppppppuStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    if (param_1[0x16][0x12] != (ulong *****)0x0) {
      pppppuVar11 = param_1[0x16][0x12] + 10;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x29 = puVar1;
      if (*(int *)param_1[0x1b4] == 0) {
        unaff_x30 = 0x3ef784;
        register0x00000008 = (BADSPACEBASE *)auStack_90;
SUB_003a86dc:
        *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        pppppuVar14 = pppppuVar11;
        func_0x003c1f6c();
        ppppuVar15 = *pppppuVar14;
        uVar7 = *(uint *)(ppppuVar15 + 6);
        pppppppuVar4 = (ulong *******)(ulong)uVar7;
        if (uVar7 == 0xffffffff) {
          FUN_00338dc8();
          *(int *)(ppppuVar15 + 6) = (int)pppppppuVar4;
        }
        ppppuVar15 = *pppppuVar11 + ((ulong)pppppppuVar4 & 0xffffffff) * 8 + 1;
        do {
          cVar16 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
          if (bVar3) {
            *ppppuVar15 = (ulong ***)((long)*ppppuVar15 + 1);
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        return pppppppuVar4;
      }
      unaff_x30 = 0x3ef76c;
      register0x00000008 = (BADSPACEBASE *)auStack_90;
SUB_003a8684:
      *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      pppppuVar14 = pppppuVar11;
      func_0x003c1f6c();
      ppppuVar15 = *pppppuVar14;
      uVar7 = *(uint *)(ppppuVar15 + 6);
      pppppppuVar4 = (ulong *******)(ulong)uVar7;
      if (uVar7 == 0xffffffff) {
        FUN_00338dc8();
        *(int *)(ppppuVar15 + 6) = (int)pppppppuVar4;
      }
      ppppuVar15 = *pppppuVar11 + ((ulong)pppppppuVar4 & 0xffffffff) * 8 + 2;
      do {
        cVar16 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
        if (bVar3) {
          *ppppuVar15 = (ulong ***)((long)*ppppuVar15 + 1);
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      return pppppppuVar4;
    }
    param_1 = pppppppuVar5;
    if (lStack_50 < 0) {
      param_1 = pppppppuStack_60;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
LAB_003ef870:
  ___stack_chk_fail();
  if (((int)pppppppuVar4 != 0) && (func_0x0040cf10(), lStack_50 < 0)) {
    __ZdlPv(pppppppuStack_60);
  }
  __Unwind_Resume();
  pcStack_98 = FUN_003ef8d8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = 0x3b0;
  if (param_4 == 0) {
    lVar2 = 0x1a8;
  }
  ppppppuVar10 = param_3;
  pppppppuVar5 = pppppppuVar4;
  puStack_a0 = puVar1;
  if (pppppppuVar4 == (ulong *******)0x0) {
    pppppppuVar17 = (ulong *******)((long)&MACH_HEADER.magic + 1);
    pppppppuVar4 = param_2;
  }
  else {
    pppppppuVar17 = (ulong *******)0x0;
    pppppppuVar20 = (ulong *******)0x0;
    unaff_x21 = (char *)((long)param_1 + lVar2);
    unaff_x22 = 0x60;
    do {
      pppppppuVar18 = (ulong *******)(param_3 + (long)pppppppuVar20 * 0xc);
      FUN_003fa920(&pppppppuStack_150,pppppppuVar18);
      if (pppppppuStack_150 == (ulong *******)0x0) {
        iVar19 = 1;
      }
      else {
        pppppppuStack_148 = pppppppuStack_150;
        if (((ulong)pppppppuStack_150 & 1) != 0) {
          piVar9 = (int *)((long)pppppppuStack_150 + -1);
          do {
            cVar16 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
        }
        pppppppuVar5 = (ulong *******)&pppppppuStack_148;
        iVar19 = 0x8cc79f;
        ppppppuVar10 = (ulong ******)
                       "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
        ;
        FUN_003be608();
        if (((ulong)pppppppuStack_148 & 1) != 0) {
          FUN_0055293c();
        }
      }
      param_1 = pppppppuStack_150;
      if (((ulong)pppppppuStack_150 & 1) != 0) {
        FUN_0055293c();
      }
      if (iVar19 == 0) break;
      param_1 = pppppppuVar18;
      func_0x003fac10();
      if ((int)param_1 == 0) {
        func_0x003fabfc(&pppppppuStack_158,param_3 + (long)pppppppuVar20 * 0xc + 4);
        if (pppppppuStack_158 == (ulong *******)0x0) {
          iVar19 = 1;
        }
        else {
          pppppppuStack_148 = pppppppuStack_158;
          if (((ulong)pppppppuStack_158 & 1) != 0) {
            piVar9 = (int *)((long)pppppppuStack_158 + -1);
            do {
              cVar16 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
          }
          pppppppuVar5 = (ulong *******)&pppppppuStack_148;
          iVar19 = 0x8cc79f;
          ppppppuVar10 = (ulong ******)
                         "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
          ;
          FUN_003be608();
          if (((ulong)pppppppuStack_148 & 1) != 0) {
            FUN_0055293c();
          }
        }
        param_1 = pppppppuStack_158;
        if (((ulong)pppppppuStack_158 & 1) != 0) {
          FUN_0055293c();
        }
        if (iVar19 == 0) break;
      }
      ppppppuVar12 = param_3 + (long)pppppppuVar20 * 0xc + 4;
      if ((*ppppppuVar12 != (ulong *****)0x0) &&
         ((ulong *****)0xfffffffe < param_3[(long)pppppppuVar20 * 0xc + 5])) break;
      ppppppuStack_118 = pppppppuVar18[1];
      ppppppuStack_120 = *pppppppuVar18;
      ppppppuStack_108 = pppppppuVar18[3];
      ppppppuStack_110 = pppppppuVar18[2];
      param_1 = &ppppppuStack_120;
      pppppppuVar5 = (ulong *******)&DAT_0090f273;
      FUN_003ec830();
      if ((int)param_1 != 0) {
        pppppppuVar5 = (ulong *******)((long)pppppppuVar18 + 9);
        if (*pppppppuVar18 != (ulong ******)0x0) {
          pppppppuVar5 = (ulong *******)pppppppuVar18[2];
        }
        ppppppuVar10 = (ulong ******)((ulong)pppppppuVar18[1] & 0xff);
        if (*pppppppuVar18 != (ulong ******)0x0) {
          ppppppuVar10 = pppppppuVar18[1];
        }
        pppppuVar11 = *ppppppuVar12;
        if ((ulong *****)((long)&MACH_HEADER.magic + 1) < pppppuVar11) {
          do {
            cVar16 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
            if (bVar3) {
              *pppppuVar11 = (ulong ****)((long)*pppppuVar11 + 1);
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
        }
        pppppuStack_138 = param_3[(long)pppppppuVar20 * 0xc + 5];
        pppppppuStack_140 = (ulong *******)*ppppppuVar12;
        pppppuStack_128 = param_3[(long)pppppppuVar20 * 0xc + 7];
        pppppuStack_130 = param_3[(long)pppppppuVar20 * 0xc + 6];
        pppppppuStack_148 = pppppppuVar18;
        FUN_0034b65c(unaff_x21,pppppppuVar5,ppppppuVar10,&pppppppuStack_140,&pppppppuStack_148,
                     FUN_003f25a8);
        param_1 = pppppppuStack_140;
        if ((ulong *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_140) {
          do {
            ppppppuVar12 = *pppppppuStack_140;
            cVar16 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppppuStack_140,0x10);
            if (bVar3) {
              *pppppppuStack_140 = (ulong ******)((long)ppppppuVar12 + -1);
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if ((ulong ******)((long)ppppppuVar12 + -1) == (ulong ******)0x0) {
            (*(code *)pppppppuStack_140[1])();
          }
        }
      }
      pppppppuVar20 = (ulong *******)((long)pppppppuVar20 + 1);
      pppppppuVar17 = (ulong *******)(ulong)(pppppppuVar4 <= pppppppuVar20);
    } while (pppppppuVar20 != pppppppuVar4);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    return pppppppuVar17;
  }
  ___stack_chk_fail();
  if ((int)pppppppuVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pppppppuStack_140);
  }
  pppppppuVar20 = param_1;
  __Unwind_Resume();
  pcStack_168 = FUN_003efbb4;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppuVar17 = pppppppuVar5;
  pcVar6 = (char *)pppppppuVar5;
  uStack_190 = unaff_x22;
  pcStack_188 = unaff_x21;
  pppppppuStack_180 = pppppppuVar4;
  pppppppuStack_178 = param_1;
  ppuStack_170 = &puStack_a0;
  FUN_0039e378();
  if (((pppppppuVar17 != (ulong *******)0x0) &&
      ((*(char *)(pppppppuVar20 + 5) != '\0' || (((ulong)ppppppuVar10 & 1) == 0)))) &&
     (((int)ppppppuVar10 == 0 || (pppppppuVar20[0x13a] != (ulong ******)0x0)))) {
    ppppppuVar10 = pppppppuVar20[((ulong)ppppppuVar10 & 0xffffffff) + 0x139];
    pppppuVar11 = *ppppppuVar10;
    pppppppuVar17 = pppppppuVar5;
    FUN_0039e378();
    pppppppuVar20 = (ulong *******)ppppppuVar10[1];
    if (pppppppuVar20 < (ulong *******)((long)pppppppuVar17 + (long)pppppuVar11)) {
      pppppppuVar4 = pppppppuVar5;
      FUN_0039e378();
      pppppppuVar17 = (ulong *******)ppppppuVar10[2];
      pppppuVar11 = (ulong *****)((long)pppppppuVar4 + (long)pppppppuVar20);
      if ((ulong *****)((long)pppppppuVar4 + (long)pppppppuVar20) <=
          (ulong *****)((ulong)((long)ppppppuVar10[1] * 3) >> 1)) {
        pppppuVar11 = (ulong *****)((ulong)((long)ppppppuVar10[1] * 3) >> 1);
      }
      ppppppuVar10[1] = pppppuVar11;
      pcVar6 = (char *)((long)pppppuVar11 * 0x60);
      FUN_00338cbc();
      ppppppuVar10[2] = (ulong *****)pppppppuVar17;
    }
    uVar7 = *(uint *)pppppppuVar5;
    appppppuStack_248[0] = ppppppuVar10;
    if ((uVar7 >> 0xc & 1) != 0) {
      pcVar6 = "grpc-previous-rpc-attempts";
      pppppppuVar17 = appppppuStack_248;
      FUN_003f26e0(pppppppuVar17,"grpc-previous-rpc-attempts",0x1a,*(uint *)(pppppppuVar5 + 0x2f));
      uVar7 = *(uint *)pppppppuVar5;
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      pcVar6 = "grpc-retry-pushback-ms";
      pppppppuVar17 = appppppuStack_248;
      FUN_003f26e0(pppppppuVar17,"grpc-retry-pushback-ms",0x16,pppppppuVar5[0x2e]);
      uVar7 = *(uint *)pppppppuVar5;
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      ppppppuVar23 = pppppppuVar5[0x2b];
      ppppppuVar22 = pppppppuVar5[0x2a];
      ppppppuVar21 = pppppppuVar5[0x2d];
      ppppppuVar12 = pppppppuVar5[0x2c];
      pppppuVar11 = *ppppppuVar10;
      *ppppppuVar10 = (ulong *****)((long)pppppuVar11 + 1);
      pppppuVar11 = ppppppuVar10[2] + (long)pppppuVar11 * 0xc;
      *pppppuVar11 = (ulong ****)0x1;
      pppppuVar11[1] = (ulong ****)0xa;
      pppppuVar11[2] = (ulong ****)"user-agent";
      pppppuVar11[5] = (ulong ****)ppppppuVar23;
      pppppuVar11[4] = (ulong ****)ppppppuVar22;
      pppppuVar11[7] = (ulong ****)ppppppuVar21;
      pppppuVar11[6] = (ulong ****)ppppppuVar12;
      uVar7 = *(uint *)pppppppuVar5;
    }
    if ((uVar7 >> 0x10 & 1) != 0) {
      ppppppuVar23 = pppppppuVar5[0x23];
      ppppppuVar22 = pppppppuVar5[0x22];
      ppppppuVar21 = pppppppuVar5[0x25];
      ppppppuVar12 = pppppppuVar5[0x24];
      pppppuVar11 = *ppppppuVar10;
      *ppppppuVar10 = (ulong *****)((long)pppppuVar11 + 1);
      pppppuVar11 = ppppppuVar10[2] + (long)pppppuVar11 * 0xc;
      *pppppuVar11 = (ulong ****)0x1;
      pppppuVar11[1] = (ulong ****)0x4;
      pppppuVar11[2] = (ulong ****)"host";
      pppppuVar11[5] = (ulong ****)ppppppuVar23;
      pppppuVar11[4] = (ulong ****)ppppppuVar22;
      pppppuVar11[7] = (ulong ****)ppppppuVar21;
      pppppuVar11[6] = (ulong ****)ppppppuVar12;
      uVar7 = *(uint *)pppppppuVar5;
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      ppppppuVar23 = pppppppuVar5[9];
      ppppppuVar22 = pppppppuVar5[8];
      ppppppuVar21 = pppppppuVar5[0xb];
      ppppppuVar12 = pppppppuVar5[10];
      pppppuVar11 = *ppppppuVar10;
      *ppppppuVar10 = (ulong *****)((long)pppppuVar11 + 1);
      pppppuVar11 = ppppppuVar10[2] + (long)pppppuVar11 * 0xc;
      *pppppuVar11 = (ulong ****)0x1;
      pppppuVar11[1] = (ulong ****)0x8;
      pppppuVar11[2] = (ulong ****)"lb-token";
      pppppuVar11[5] = (ulong ****)ppppppuVar23;
      pppppuVar11[4] = (ulong ****)ppppppuVar22;
      pppppuVar11[7] = (ulong ****)ppppppuVar21;
      pppppuVar11[6] = (ulong ****)ppppppuVar12;
    }
    ppppppuVar12 = pppppppuVar5[0x3f];
    if ((ppppppuVar12 != (ulong ******)0x0) && (ppppppuVar12[1] != (ulong *****)0x0)) {
      pppppuVar11 = (ulong *****)0x0;
      do {
        pppppuStack_1b8 = ppppppuVar12[(long)pppppuVar11 * 8 + 3];
        pppppuStack_1c0 = ppppppuVar12[(long)pppppuVar11 * 8 + 2];
        pppppuStack_1a8 = ppppppuVar12[(long)pppppuVar11 * 8 + 5];
        pppppuStack_1b0 = ppppppuVar12[(long)pppppuVar11 * 8 + 4];
        pppppuStack_1d8 = ppppppuVar12[(long)pppppuVar11 * 8 + 7];
        pppppuStack_1e0 = ppppppuVar12[(long)pppppuVar11 * 8 + 6];
        pppppuVar25 = ppppppuVar12[(long)pppppuVar11 * 8 + 9];
        pppppuVar24 = ppppppuVar12[(long)pppppuVar11 * 8 + 8];
        pppppuVar14 = *ppppppuVar10;
        *ppppppuVar10 = (ulong *****)((long)pppppuVar14 + 1);
        pppppuVar14 = ppppppuVar10[2] + (long)pppppuVar14 * 0xc;
        pppppuVar14[1] = (ulong ****)pppppuStack_1b8;
        *pppppuVar14 = (ulong ****)pppppuStack_1c0;
        pppppuVar14[3] = (ulong ****)pppppuStack_1a8;
        pppppuVar14[2] = (ulong ****)pppppuStack_1b0;
        pppppuVar14[5] = (ulong ****)pppppuStack_1d8;
        pppppuVar14[4] = (ulong ****)pppppuStack_1e0;
        pppppuVar14[7] = (ulong ****)pppppuVar25;
        pppppuVar14[6] = (ulong ****)pppppuVar24;
        pppppuVar11 = (ulong *****)((long)pppppuVar11 + 1);
        do {
          if (pppppuVar11 != ppppppuVar12[1]) goto LAB_003efd58;
          pppppuVar11 = (ulong *****)0x0;
          ppppppuVar12 = (ulong ******)*ppppppuVar12;
        } while (ppppppuVar12 != (ulong ******)0x0);
        pppppuVar11 = (ulong *****)0x0;
LAB_003efd58:
      } while ((ppppppuVar12 != (ulong ******)0x0) || (pppppuVar11 != (ulong *****)0x0));
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_198) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_258 = FUN_003efe18;
    uVar7 = *(uint *)pcVar6;
    if ((uVar7 >> 7 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar7 = uVar7 & 0xffffff7f;
      *(uint *)pcVar6 = uVar7;
      uVar13 = (ulong)*(uint *)((long)pcVar6 + 0x194) | 0x100000000;
    }
    cVar16 = '\0';
    uVar8 = 0;
    if ((uVar13 & 0x100000000) != 0) {
      uVar8 = (uint)uVar13;
    }
    *(uint *)(pppppppuVar17 + 0x146) = uVar8;
    if ((uVar7 >> 9 & 1) != 0) {
      cVar16 = *(char *)((long)pcVar6 + 0x18c);
      *(uint *)pcVar6 = uVar7 & 0xfffffdff;
    }
    uStack_288 = 0;
    uStack_280 = unaff_x22;
    pppppppuStack_278 = pppppppuVar20;
    ppppppuStack_270 = ppppppuVar10;
    pppppppuStack_268 = pppppppuVar5;
    pppuStack_260 = &ppuStack_170;
    FUN_003b08cc(&cStack_281,&uStack_288,1);
    if ((uVar7 & 0x200) != 0) {
      cStack_281 = cVar16;
    }
    *(char *)((long)pppppppuVar17 + 0xa34) = cStack_281;
    FUN_003efbb4(pppppppuVar17,pcVar6,0);
    return pppppppuVar17;
  }
  return pppppppuVar17;
}



/* Entry: 003ef8d8; end: 003efbb3;  */

long ** FUN_003ef8d8(long *param_1,long **param_2,long *param_3,int param_4)

{
  bool bVar1;
  long **pplVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long **unaff_x20;
  long *plVar12;
  uint uVar13;
  char *unaff_x21;
  long *plVar14;
  char cVar15;
  undefined8 unaff_x22;
  long **pplVar16;
  int iVar17;
  long **pplVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined4 uStack_1f8;
  char cStack_1f1;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long **pplStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  long *aplStack_1b8 [13];
  long lStack_150;
  long lStack_148;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  long **pplStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = 0x3b0;
  if (param_4 == 0) {
    lVar7 = 0x1a8;
  }
  plVar12 = param_3;
  pplVar2 = param_2;
  if (param_2 == (long **)0x0) {
    pplVar16 = (long **)((long)&MACH_HEADER.magic + 1);
    param_2 = unaff_x20;
  }
  else {
    pplVar16 = (long **)0x0;
    pplVar18 = (long **)0x0;
    unaff_x21 = (char *)((long)param_1 + lVar7);
    unaff_x22 = 0x60;
    do {
      plVar14 = param_3 + (long)pplVar18 * 0xc;
      FUN_003fa920(&plStack_c0,plVar14);
      if (plStack_c0 == (long *)0x0) {
        iVar17 = 1;
      }
      else {
        plStack_b8 = plStack_c0;
        if (((ulong)plStack_c0 & 1) != 0) {
          piVar5 = (int *)((long)plStack_c0 + -1);
          do {
            cVar15 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar1) {
              *piVar5 = *piVar5 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        pplVar2 = &plStack_b8;
        iVar17 = 0x8cc79f;
        plVar12 = (long *)
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
        ;
        FUN_003be608();
        if (((ulong)plStack_b8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      param_1 = plStack_c0;
      if (((ulong)plStack_c0 & 1) != 0) {
        FUN_0055293c();
      }
      if (iVar17 == 0) break;
      param_1 = plVar14;
      func_0x003fac10();
      if ((int)param_1 == 0) {
        func_0x003fabfc(&plStack_c8,param_3 + (long)pplVar18 * 0xc + 4);
        if (plStack_c8 == (long *)0x0) {
          iVar17 = 1;
        }
        else {
          plStack_b8 = plStack_c8;
          if (((ulong)plStack_c8 & 1) != 0) {
            piVar5 = (int *)((long)plStack_c8 + -1);
            do {
              cVar15 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar1) {
                *piVar5 = *piVar5 + 1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
          pplVar2 = &plStack_b8;
          iVar17 = 0x8cc79f;
          plVar12 = (long *)
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
          ;
          FUN_003be608();
          if (((ulong)plStack_b8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        param_1 = plStack_c8;
        if (((ulong)plStack_c8 & 1) != 0) {
          FUN_0055293c();
        }
        if (iVar17 == 0) break;
      }
      plVar9 = param_3 + (long)pplVar18 * 0xc + 4;
      if ((*plVar9 != 0) && (0xfffffffe < (ulong)param_3[(long)pplVar18 * 0xc + 5])) break;
      lStack_88 = plVar14[1];
      lStack_90 = *plVar14;
      lStack_78 = plVar14[3];
      lStack_80 = plVar14[2];
      param_1 = &lStack_90;
      pplVar2 = (long **)&DAT_0090f273;
      FUN_003ec830();
      if ((int)param_1 != 0) {
        pplVar2 = (long **)((long)plVar14 + 9);
        if (*plVar14 != 0) {
          pplVar2 = (long **)plVar14[2];
        }
        plVar12 = (long *)((ulong)plVar14[1] & 0xff);
        if (*plVar14 != 0) {
          plVar12 = (long *)plVar14[1];
        }
        plVar6 = (long *)*plVar9;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
          do {
            cVar15 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar1) {
              *plVar6 = *plVar6 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        lStack_a8 = param_3[(long)pplVar18 * 0xc + 5];
        plStack_b0 = (long *)*plVar9;
        lStack_98 = param_3[(long)pplVar18 * 0xc + 7];
        lStack_a0 = param_3[(long)pplVar18 * 0xc + 6];
        plStack_b8 = plVar14;
        FUN_0034b65c(unaff_x21,pplVar2,plVar12,&plStack_b0,&plStack_b8,FUN_003f25a8);
        param_1 = plStack_b0;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
          do {
            lVar7 = *plStack_b0;
            cVar15 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
            if (bVar1) {
              *plStack_b0 = lVar7 + -1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)plStack_b0[1])();
          }
        }
      }
      pplVar18 = (long **)((long)pplVar18 + 1);
      pplVar16 = (long **)(ulong)(param_2 <= pplVar18);
    } while (pplVar18 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pplVar16;
  }
  ___stack_chk_fail();
  if ((int)pplVar2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_b0);
  }
  plVar14 = param_1;
  __Unwind_Resume();
  pcStack_d8 = FUN_003efbb4;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  pplVar16 = pplVar2;
  pcVar3 = (char *)pplVar2;
  uStack_100 = unaff_x22;
  pcStack_f8 = unaff_x21;
  pplStack_f0 = param_2;
  plStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_0039e378();
  if (((pplVar16 != (long **)0x0) && (((char)plVar14[5] != '\0' || (((ulong)plVar12 & 1) == 0)))) &&
     (((int)plVar12 == 0 || (plVar14[0x13a] != 0)))) {
    plVar12 = (long *)plVar14[((ulong)plVar12 & 0xffffffff) + 0x139];
    lVar7 = *plVar12;
    pplVar16 = pplVar2;
    FUN_0039e378();
    plVar14 = (long *)plVar12[1];
    if (plVar14 < (long *)((long)pplVar16 + lVar7)) {
      pplVar18 = pplVar2;
      FUN_0039e378();
      pplVar16 = (long **)plVar12[2];
      pcVar3 = (char *)((long)pplVar18 + (long)plVar14);
      if ((char *)((long)pplVar18 + (long)plVar14) <= (char *)((ulong)(plVar12[1] * 3) >> 1)) {
        pcVar3 = (char *)((ulong)(plVar12[1] * 3) >> 1);
      }
      plVar12[1] = (long)pcVar3;
      pcVar3 = (char *)((long)pcVar3 * 0x60);
      FUN_00338cbc();
      plVar12[2] = (long)pplVar16;
    }
    uVar13 = *(uint *)pplVar2;
    aplStack_1b8[0] = plVar12;
    if ((uVar13 >> 0xc & 1) != 0) {
      pcVar3 = "grpc-previous-rpc-attempts";
      pplVar16 = aplStack_1b8;
      FUN_003f26e0(pplVar16,"grpc-previous-rpc-attempts",0x1a,*(uint *)(pplVar2 + 0x2f));
      uVar13 = *(uint *)pplVar2;
    }
    if ((uVar13 >> 0xd & 1) != 0) {
      pcVar3 = "grpc-retry-pushback-ms";
      pplVar16 = aplStack_1b8;
      FUN_003f26e0(pplVar16,"grpc-retry-pushback-ms",0x16,pplVar2[0x2e]);
      uVar13 = *(uint *)pplVar2;
    }
    if ((uVar13 >> 0xe & 1) != 0) {
      plVar20 = pplVar2[0x2b];
      plVar19 = pplVar2[0x2a];
      plVar6 = pplVar2[0x2d];
      plVar9 = pplVar2[0x2c];
      lVar7 = *plVar12;
      *plVar12 = lVar7 + 1;
      puVar8 = (undefined8 *)(plVar12[2] + lVar7 * 0x60);
      *puVar8 = 1;
      puVar8[1] = 10;
      puVar8[2] = "user-agent";
      puVar8[5] = plVar20;
      puVar8[4] = plVar19;
      puVar8[7] = plVar6;
      puVar8[6] = plVar9;
      uVar13 = *(uint *)pplVar2;
    }
    if ((uVar13 >> 0x10 & 1) != 0) {
      plVar20 = pplVar2[0x23];
      plVar19 = pplVar2[0x22];
      plVar6 = pplVar2[0x25];
      plVar9 = pplVar2[0x24];
      lVar7 = *plVar12;
      *plVar12 = lVar7 + 1;
      puVar8 = (undefined8 *)(plVar12[2] + lVar7 * 0x60);
      *puVar8 = 1;
      puVar8[1] = 4;
      puVar8[2] = "host";
      puVar8[5] = plVar20;
      puVar8[4] = plVar19;
      puVar8[7] = plVar6;
      puVar8[6] = plVar9;
      uVar13 = *(uint *)pplVar2;
    }
    if ((uVar13 >> 0x17 & 1) != 0) {
      plVar20 = pplVar2[9];
      plVar19 = pplVar2[8];
      plVar6 = pplVar2[0xb];
      plVar9 = pplVar2[10];
      lVar7 = *plVar12;
      *plVar12 = lVar7 + 1;
      puVar8 = (undefined8 *)(plVar12[2] + lVar7 * 0x60);
      *puVar8 = 1;
      puVar8[1] = 8;
      puVar8[2] = "lb-token";
      puVar8[5] = plVar20;
      puVar8[4] = plVar19;
      puVar8[7] = plVar6;
      puVar8[6] = plVar9;
    }
    plVar9 = pplVar2[0x3f];
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      lVar7 = 0;
      do {
        lStack_128 = plVar9[lVar7 * 8 + 3];
        lStack_130 = plVar9[lVar7 * 8 + 2];
        lStack_118 = plVar9[lVar7 * 8 + 5];
        lStack_120 = plVar9[lVar7 * 8 + 4];
        lStack_148 = plVar9[lVar7 * 8 + 7];
        lStack_150 = plVar9[lVar7 * 8 + 6];
        lVar22 = plVar9[lVar7 * 8 + 9];
        lVar21 = plVar9[lVar7 * 8 + 8];
        lVar11 = *plVar12;
        *plVar12 = lVar11 + 1;
        plVar6 = (long *)(plVar12[2] + lVar11 * 0x60);
        plVar6[1] = lStack_128;
        *plVar6 = lStack_130;
        plVar6[3] = lStack_118;
        plVar6[2] = lStack_120;
        plVar6[5] = lStack_148;
        plVar6[4] = lStack_150;
        plVar6[7] = lVar22;
        plVar6[6] = lVar21;
        lVar7 = lVar7 + 1;
        do {
          if (lVar7 != plVar9[1]) goto LAB_003efd58;
          lVar7 = 0;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
        lVar7 = 0;
LAB_003efd58:
      } while ((plVar9 != (long *)0x0) || (lVar7 != 0));
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_108) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_1c8 = FUN_003efe18;
    uVar13 = *(uint *)pcVar3;
    if ((uVar13 >> 7 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar13 = uVar13 & 0xffffff7f;
      *(uint *)pcVar3 = uVar13;
      uVar10 = (ulong)*(uint *)((long)pcVar3 + 0x194) | 0x100000000;
    }
    cVar15 = '\0';
    uVar4 = 0;
    if ((uVar10 & 0x100000000) != 0) {
      uVar4 = (uint)uVar10;
    }
    *(uint *)(pplVar16 + 0x146) = uVar4;
    if ((uVar13 >> 9 & 1) != 0) {
      cVar15 = *(char *)((long)pcVar3 + 0x18c);
      *(uint *)pcVar3 = uVar13 & 0xfffffdff;
    }
    uStack_1f8 = 0;
    uStack_1f0 = unaff_x22;
    plStack_1e8 = plVar14;
    plStack_1e0 = plVar12;
    pplStack_1d8 = pplVar2;
    ppuStack_1d0 = &puStack_e0;
    FUN_003b08cc(&cStack_1f1,&uStack_1f8,1);
    if ((uVar13 & 0x200) != 0) {
      cStack_1f1 = cVar15;
    }
    *(char *)((long)pplVar16 + 0xa34) = cStack_1f1;
    FUN_003efbb4(pplVar16,pcVar3,0);
    return pplVar16;
  }
  return pplVar16;
}



/* Entry: 003efbb4; end: 003efe17;  */

void FUN_003efbb4(long param_1,long **param_2,uint param_3)

{
  long **pplVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  char cVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined4 uStack_128;
  char cStack_121;
  long *aplStack_e8 [13];
  long lStack_80;
  long lStack_78;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pplVar1 = param_2;
  pcVar2 = (char *)param_2;
  FUN_0039e378();
  if (((pplVar1 != (long **)0x0) && ((*(char *)(param_1 + 0x28) != '\0' || ((param_3 & 1) == 0))))
     && ((param_3 == 0 || (*(long *)(param_1 + 0x9d0) != 0)))) {
    plVar9 = *(long **)(param_1 + (ulong)param_3 * 8 + 0x9c8);
    lVar11 = *plVar9;
    pplVar1 = param_2;
    FUN_0039e378();
    pcVar12 = (char *)plVar9[1];
    if (pcVar12 < (char *)((long)pplVar1 + lVar11)) {
      pplVar1 = param_2;
      FUN_0039e378();
      pcVar12 = (char *)((long)pplVar1 + (long)pcVar12);
      pplVar1 = (long **)plVar9[2];
      if (pcVar12 <= (char *)((ulong)(plVar9[1] * 3) >> 1)) {
        pcVar12 = (char *)((ulong)(plVar9[1] * 3) >> 1);
      }
      plVar9[1] = (long)pcVar12;
      pcVar2 = (char *)((long)pcVar12 * 0x60);
      FUN_00338cbc();
      plVar9[2] = (long)pplVar1;
    }
    uVar10 = *(uint *)param_2;
    aplStack_e8[0] = plVar9;
    if ((uVar10 >> 0xc & 1) != 0) {
      pcVar2 = "grpc-previous-rpc-attempts";
      pplVar1 = aplStack_e8;
      FUN_003f26e0(pplVar1,"grpc-previous-rpc-attempts",0x1a,*(uint *)(param_2 + 0x2f));
      uVar10 = *(uint *)param_2;
    }
    if ((uVar10 >> 0xd & 1) != 0) {
      pcVar2 = "grpc-retry-pushback-ms";
      pplVar1 = aplStack_e8;
      FUN_003f26e0(pplVar1,"grpc-retry-pushback-ms",0x16,param_2[0x2e]);
      uVar10 = *(uint *)param_2;
    }
    if ((uVar10 >> 0xe & 1) != 0) {
      plVar15 = param_2[0x2b];
      plVar14 = param_2[0x2a];
      plVar7 = param_2[0x2d];
      plVar5 = param_2[0x2c];
      lVar11 = *plVar9;
      *plVar9 = lVar11 + 1;
      puVar4 = (undefined8 *)(plVar9[2] + lVar11 * 0x60);
      *puVar4 = 1;
      puVar4[1] = 10;
      puVar4[2] = "user-agent";
      puVar4[5] = plVar15;
      puVar4[4] = plVar14;
      puVar4[7] = plVar7;
      puVar4[6] = plVar5;
      uVar10 = *(uint *)param_2;
    }
    if ((uVar10 >> 0x10 & 1) != 0) {
      plVar15 = param_2[0x23];
      plVar14 = param_2[0x22];
      plVar7 = param_2[0x25];
      plVar5 = param_2[0x24];
      lVar11 = *plVar9;
      *plVar9 = lVar11 + 1;
      puVar4 = (undefined8 *)(plVar9[2] + lVar11 * 0x60);
      *puVar4 = 1;
      puVar4[1] = 4;
      puVar4[2] = "host";
      puVar4[5] = plVar15;
      puVar4[4] = plVar14;
      puVar4[7] = plVar7;
      puVar4[6] = plVar5;
      uVar10 = *(uint *)param_2;
    }
    if ((uVar10 >> 0x17 & 1) != 0) {
      plVar15 = param_2[9];
      plVar14 = param_2[8];
      plVar7 = param_2[0xb];
      plVar5 = param_2[10];
      lVar11 = *plVar9;
      *plVar9 = lVar11 + 1;
      puVar4 = (undefined8 *)(plVar9[2] + lVar11 * 0x60);
      *puVar4 = 1;
      puVar4[1] = 8;
      puVar4[2] = "lb-token";
      puVar4[5] = plVar15;
      puVar4[4] = plVar14;
      puVar4[7] = plVar7;
      puVar4[6] = plVar5;
    }
    plVar5 = param_2[0x3f];
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      lVar11 = 0;
      do {
        lStack_58 = plVar5[lVar11 * 8 + 3];
        lStack_60 = plVar5[lVar11 * 8 + 2];
        lStack_48 = plVar5[lVar11 * 8 + 5];
        lStack_50 = plVar5[lVar11 * 8 + 4];
        lStack_78 = plVar5[lVar11 * 8 + 7];
        lStack_80 = plVar5[lVar11 * 8 + 6];
        lVar17 = plVar5[lVar11 * 8 + 9];
        lVar16 = plVar5[lVar11 * 8 + 8];
        lVar8 = *plVar9;
        *plVar9 = lVar8 + 1;
        plVar7 = (long *)(plVar9[2] + lVar8 * 0x60);
        plVar7[1] = lStack_58;
        *plVar7 = lStack_60;
        plVar7[3] = lStack_48;
        plVar7[2] = lStack_50;
        plVar7[5] = lStack_78;
        plVar7[4] = lStack_80;
        plVar7[7] = lVar17;
        plVar7[6] = lVar16;
        lVar11 = lVar11 + 1;
        do {
          if (lVar11 != plVar5[1]) goto LAB_003efd58;
          lVar11 = 0;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        lVar11 = 0;
LAB_003efd58:
      } while ((plVar5 != (long *)0x0) || (lVar11 != 0));
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar10 = *(uint *)pcVar2;
    if ((uVar10 >> 7 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar10 = uVar10 & 0xffffff7f;
      *(uint *)pcVar2 = uVar10;
      uVar6 = (ulong)*(uint *)((long)pcVar2 + 0x194) | 0x100000000;
    }
    cVar13 = '\0';
    uVar3 = 0;
    if ((uVar6 & 0x100000000) != 0) {
      uVar3 = (uint)uVar6;
    }
    *(uint *)(pplVar1 + 0x146) = uVar3;
    if ((uVar10 >> 9 & 1) != 0) {
      cVar13 = *(char *)((long)pcVar2 + 0x18c);
      *(uint *)pcVar2 = uVar10 & 0xfffffdff;
    }
    uStack_128 = 0;
    FUN_003b08cc(&cStack_121,&uStack_128,1);
    if ((uVar10 & 0x200) != 0) {
      cStack_121 = cVar13;
    }
    *(char *)((long)pplVar1 + 0xa34) = cStack_121;
    FUN_003efbb4(pplVar1,pcVar2,0);
    return;
  }
  return;
}



/* Entry: 003efe18; end: 003efebb;  */

void FUN_003efe18(long param_1,uint *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  uVar3 = *param_2;
  if ((uVar3 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = uVar3 & 0xffffff7f;
    *param_2 = uVar3;
    uVar2 = (ulong)param_2[0x65] | 0x100000000;
  }
  uVar4 = 0;
  uVar1 = 0;
  if ((uVar2 & 0x100000000) != 0) {
    uVar1 = (undefined4)uVar2;
  }
  *(undefined4 *)(param_1 + 0xa30) = uVar1;
  if ((uVar3 >> 9 & 1) != 0) {
    uVar4 = (undefined1)param_2[99];
    *param_2 = uVar3 & 0xfffffdff;
  }
  uStack_38 = 0;
  FUN_003b08cc(&uStack_31,&uStack_38,1);
  if ((uVar3 & 0x200) != 0) {
    uStack_31 = uVar4;
  }
  *(undefined1 *)(param_1 + 0xa34) = uStack_31;
  FUN_003efbb4(param_1,param_2,0);
  return;
}



/* Entry: 003efebc; end: 003f043f;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_003efebc(char *param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  ulong uStack_218;
  uint7 uStack_1bf;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f1;
  undefined8 *******pppppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  ulong uStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  long *plStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *param_3;
  if (uVar13 != 0) {
    if ((uVar13 & 1) != 0) {
      piVar7 = (int *)(uVar13 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_c0 = uVar13;
    FUN_003ef650(param_1,&uStack_c0);
    if ((uVar13 & 1) != 0) {
      FUN_0055293c(uVar13);
    }
    goto LAB_003f02c4;
  }
  uVar1 = *param_2;
  if ((uVar1 >> 10 & 1) == 0) {
    if (param_1[0x28] == '\0') {
      uStack_130 = 0;
      FUN_003ef650(param_1,&uStack_130);
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                   ,0x3d7,0,"Received trailing metadata with no error and no status");
      uStack_150 = 0;
      uStack_148 = 0;
      lStack_158 = 0;
      FUN_003b646c(&uStack_140,2,"No status received",0x12,&pcStack_b0,&lStack_158);
      FUN_003be104(&uStack_138,&uStack_140,3,2);
      FUN_003ef650(param_1,&uStack_138);
      if ((uStack_138 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_140 & 1) != 0) {
        FUN_0055293c();
      }
      plStack_80 = &lStack_158;
      FUN_0033d548(&plStack_80);
    }
    goto LAB_003f02c4;
  }
  uVar2 = param_2[0x62];
  uVar6 = uVar1 & 0xfffffbff;
  *param_2 = uVar6;
  pcStack_c8 = (char *)0x0;
  if (uVar2 == 0) {
    if ((uVar1 >> 0xf & 1) != 0) {
      pcVar12 = (char *)0x0;
      goto LAB_003f0148;
    }
    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
LAB_003f0138:
    cStack_60 = '\0';
    pcStack_128 = (char *)0x0;
LAB_003f0250:
    bVar4 = true;
  }
  else {
    pcVar11 = param_1;
    FUN_003ef3f4();
    plStack_80 = (long *)0x8cc7b1;
    uStack_78 = 0x19;
    if (pcVar11 == (char *)0x0) {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = pcVar11;
      _strlen();
    }
    pcStack_b0 = pcVar11;
    pcStack_a8 = pcVar12;
    FUN_00575d30(&pppppppuStack_f0,&plStack_80,&pcStack_b0);
    pppppppuVar5 = pppppppuStack_f0;
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
      pppppppuVar5 = &pppppppuStack_f0;
    }
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    FUN_003b646c(&uStack_d8,2,pppppppuVar5,uStack_e8,&uStack_f1,&uStack_110);
    FUN_003be104(&pcStack_d0,&uStack_d8,3,(long)(int)uVar2);
    pcVar12 = pcStack_d0;
    if (pcStack_d0 != (char *)0x0) {
      pcStack_d0 = segment_command_00000020.segname + 0xe;
      pcStack_c8 = pcVar12;
    }
    if ((uStack_d8 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_b8 = &uStack_110;
    FUN_0033d548(&puStack_b8);
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(pppppppuStack_f0);
    }
    FUN_00338cb8(pcVar11);
    uVar6 = *param_2;
    if ((uVar6 >> 0xf & 1) == 0) {
      plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
      cStack_60 = '\0';
      if (pcVar12 == (char *)0x0) goto LAB_003f0138;
      pcStack_120 = pcVar12;
      if (((ulong)pcVar12 & 1) != 0) {
        pcVar11 = pcVar12 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(int *)pcVar11 = *(int *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003be254(&pcStack_b0,&pcStack_120,5,"",0);
      pcVar11 = pcStack_b0;
      pcVar15 = pcVar12;
      if (pcStack_b0 == pcVar12) {
LAB_003f0230:
        pcVar11 = pcVar15;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c(pcVar12);
        }
      }
      else {
        pcStack_c8 = pcStack_b0;
        pcStack_b0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c(pcVar12);
          pcVar12 = pcStack_b0;
          pcVar15 = pcVar11;
          goto LAB_003f0230;
        }
      }
      if (((ulong)pcStack_120 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
LAB_003f0148:
      uStack_78 = *(ulong *)(param_2 + 0x4e);
      plStack_80 = *(long **)(param_2 + 0x4c);
      uStack_68 = *(undefined8 *)(param_2 + 0x52);
      uStack_70 = *(ulong *)(param_2 + 0x50);
      param_2[0x4e] = 0;
      param_2[0x4f] = 0;
      param_2[0x4c] = 0;
      param_2[0x4d] = 0;
      param_2[0x52] = 0;
      param_2[0x53] = 0;
      param_2[0x50] = 0;
      param_2[0x51] = 0;
      *param_2 = uVar6 & 0xffff7fff;
      FUN_0034b418(param_2 + 0x4c);
      cStack_60 = '\x01';
      if (((ulong)pcVar12 & 1) != 0) {
        pcVar11 = pcVar12 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(int *)pcVar11 = *(int *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar13 = uStack_78 & 0xff;
      uVar9 = (ulong)&plStack_80 | 9;
      if (plStack_80 != (long *)0x0) {
        uVar13 = uStack_78;
        uVar9 = uStack_70;
      }
      pcStack_118 = pcVar12;
      FUN_003be254(&pcStack_b0,&pcStack_118,5,uVar9,uVar13);
      pcVar11 = pcStack_b0;
      pcVar15 = pcVar12;
      if (pcStack_b0 == pcVar12) {
joined_r0x003f01f8:
        pcVar11 = pcVar15;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c(pcVar12);
        }
      }
      else {
        pcStack_c8 = pcStack_b0;
        pcStack_b0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c(pcVar12);
          pcVar15 = pcVar11;
          pcVar12 = pcStack_b0;
          goto joined_r0x003f01f8;
        }
      }
      if (((ulong)pcStack_118 & 1) != 0) {
        FUN_0055293c();
      }
    }
    pcStack_128 = pcVar11;
    if (((ulong)pcVar11 & 1) == 0) goto LAB_003f0250;
    pcVar11 = pcVar11 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar4) {
        *(int *)pcVar11 = *(int *)pcVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
  }
  pcVar12 = pcStack_128;
  FUN_003ef650(param_1,&pcStack_128);
  if (!bVar4) {
    FUN_0055293c(pcVar12);
  }
  if ((cStack_60 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80)) {
    do {
      lVar8 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (((ulong)pcStack_c8 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003f02c4:
  FUN_003efbb4(param_1,param_2,1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_b0);
  FUN_0033c494(&pcStack_120);
  if (cStack_60 != '\0') {
    FUN_0034b418(&plStack_80);
  }
  FUN_0033c494(&pcStack_c8);
  __Unwind_Resume();
  if (*param_2 < 8) {
    lVar8 = *(long *)(&UNK_007fb2d0 + (long)(int)*param_2 * 8);
    pcVar12 = *(char **)(param_1 + (lVar8 + 0x1a) * 8);
    if (pcVar12 == (char *)0x0) {
      pcVar12 = *(char **)(param_1 + 8);
      do {
        uVar9 = *(ulong *)pcVar12;
        uVar13 = uVar9 + 0xd0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar4) {
          *(ulong *)pcVar12 = uVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(ulong *)(pcVar12 + 0x10) < uVar13) {
        func_0x003d6048(pcVar12,0xd0);
      }
      else {
        pcVar12 = pcVar12 + uVar9 + 0x30;
      }
      *(ulong *)(pcVar12 + 0xc0) = 0;
      *(ulong *)(pcVar12 + 0xa8) = 0;
      *(ulong *)(pcVar12 + 0xa0) = 0;
      *(ulong *)(pcVar12 + 0xb8) = 0;
      *(ulong *)(pcVar12 + 0xb0) = 0;
      *(ulong *)(pcVar12 + 0x88) = 0;
      *(ulong *)(pcVar12 + 0x80) = 0;
      *(ulong *)(pcVar12 + 0x98) = 0;
      *(ulong *)(pcVar12 + 0x90) = 0;
      *(ulong *)(pcVar12 + 0x68) = 0;
      *(ulong *)(pcVar12 + 0x60) = 0;
      *(ulong *)(pcVar12 + 0x78) = 0;
      *(ulong *)(pcVar12 + 0x70) = 0;
      *(ulong *)(pcVar12 + 0x48) = 0;
      *(ulong *)(pcVar12 + 0x40) = 0;
      *(ulong *)(pcVar12 + 0x58) = 0;
      *(ulong *)(pcVar12 + 0x50) = 0;
      *(ulong *)(pcVar12 + 0x28) = 0;
      *(ulong *)(pcVar12 + 0x20) = 0;
      *(ulong *)(pcVar12 + 0x38) = 0;
      *(ulong *)(pcVar12 + 0x30) = 0;
      *(ulong *)(pcVar12 + 8) = 0;
      *(ulong *)pcVar12 = 0;
      *(ulong *)(pcVar12 + 0x18) = 0;
      *(ulong *)(pcVar12 + 0x10) = 0;
      *(char **)(param_1 + (lVar8 + 0x1a) * 8) = pcVar12;
    }
    else {
      if (*(ulong *)pcVar12 != 0) {
        return (char *)0x0;
      }
      FUN_003f2240(pcVar12 + 0xb8);
      *(ulong *)(pcVar12 + 0x10) = 0;
      *(ulong *)(pcVar12 + 8) = 0;
      *(ulong *)(pcVar12 + 0x20) = 0;
      *(ulong *)(pcVar12 + 0x18) = (ulong)uStack_1bf << 8;
      *(ulong *)(pcVar12 + 0x30) = 0;
      *(ulong *)(pcVar12 + 0x28) = 0;
      *(ulong *)(pcVar12 + 0x40) = 0;
      *(ulong *)(pcVar12 + 0x38) = 0;
      *(ulong *)(pcVar12 + 0xb8) = 0;
      *(ulong *)(pcVar12 + 0xc0) = 0;
    }
    *(char **)pcVar12 = param_1;
    *(char **)(pcVar12 + 0x10) = param_1 + 0x100;
    return pcVar12;
  }
  pcVar12 = "return 123456789";
  func_0x00338df0("return 123456789",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                  ,0x401);
  pcVar11 = *(char **)(pcVar12 + 0x10);
  if (pcVar11 != (char *)0x0) {
    func_0x00339d8c(pcVar11);
    plVar10 = *(long **)(pcVar11 + 0x40);
    plVar14 = plVar10;
    if (plVar10 != (long *)0x0) {
      do {
        plVar16 = *(long **)(plVar14[3] + 8);
        if (*(char *)((long)plVar14 + 0x29) != '\0') {
          (**(code **)(*plVar14 + 0x60))(plVar14,"propagate_cancel");
          uStack_218 = 4;
          (**(code **)(*plVar14 + 0x18))(plVar14,&uStack_218);
          if ((uStack_218 & 1) != 0) {
            FUN_0055293c();
          }
          (**(code **)(*plVar14 + 0x68))(plVar14,"propagate_cancel");
          plVar10 = *(long **)(pcVar11 + 0x40);
        }
        plVar14 = plVar16;
      } while (plVar16 != plVar10);
    }
    func_0x00339da8(pcVar11);
    pcVar12 = pcVar11;
  }
  return pcVar12;
}



/* Entry: 003f0440; end: 003f0563;  */

ulong * FUN_003f0440(ulong param_1,uint *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uStack_b8;
  uint7 uStack_5f;
  
  if (7 < *param_2) {
    pcVar4 = "return 123456789";
    func_0x00338df0("return 123456789",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x401);
    puVar7 = *(ulong **)((long)pcVar4 + 0x10);
    if (puVar7 != (ulong *)0x0) {
      func_0x00339d8c(puVar7);
      plVar6 = (long *)puVar7[8];
      plVar9 = plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          plVar10 = *(long **)(plVar9[3] + 8);
          if (*(char *)((long)plVar9 + 0x29) != '\0') {
            (**(code **)(*plVar9 + 0x60))(plVar9,"propagate_cancel");
            uStack_b8 = 4;
            (**(code **)(*plVar9 + 0x18))(plVar9,&uStack_b8);
            if ((uStack_b8 & 1) != 0) {
              FUN_0055293c();
            }
            (**(code **)(*plVar9 + 0x68))(plVar9,"propagate_cancel");
            plVar6 = (long *)puVar7[8];
          }
          plVar9 = plVar10;
        } while (plVar10 != plVar6);
      }
      func_0x00339da8(puVar7);
      pcVar4 = (char *)puVar7;
    }
    return (ulong *)pcVar4;
  }
  puVar8 = (undefined8 *)(param_1 + *(long *)(&UNK_007fb2d0 + (long)(int)*param_2 * 8) * 8 + 0xd0);
  puVar7 = (ulong *)*puVar8;
  if (puVar7 == (ulong *)0x0) {
    puVar7 = *(ulong **)(param_1 + 8);
    do {
      uVar5 = *puVar7;
      uVar1 = uVar5 + 0xd0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *puVar7 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7[2] < uVar1) {
      func_0x003d6048(puVar7,0xd0);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar5 + 0x30);
    }
    puVar7[0x18] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    *puVar8 = puVar7;
  }
  else {
    if (*puVar7 != 0) {
      return (ulong *)0x0;
    }
    FUN_003f2240(puVar7 + 0x17);
    puVar7[2] = 0;
    puVar7[1] = 0;
    puVar7[4] = 0;
    puVar7[3] = (ulong)uStack_5f << 8;
    puVar7[6] = 0;
    puVar7[5] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
  }
  *puVar7 = param_1;
  puVar7[2] = param_1 + 0x100;
  return puVar7;
}



/* Entry: 003f0564; end: 003f0663;  */

void FUN_003f0564(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    func_0x00339d8c(lVar2);
    plVar1 = *(long **)(lVar2 + 0x40);
    plVar3 = plVar1;
    if (plVar1 != (long *)0x0) {
      do {
        plVar4 = *(long **)(plVar3[3] + 8);
        if (*(char *)((long)plVar3 + 0x29) != '\0') {
          (**(code **)(*plVar3 + 0x60))(plVar3,"propagate_cancel");
          uStack_48 = 4;
          (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_48);
          if ((uStack_48 & 1) != 0) {
            FUN_0055293c();
          }
          (**(code **)(*plVar3 + 0x68))(plVar3,"propagate_cancel");
          plVar1 = *(long **)(lVar2 + 0x40);
        }
        plVar3 = plVar4;
      } while (plVar4 != plVar1);
    }
    func_0x00339da8(lVar2);
  }
  return;
}



/* Entry: 003f0664; end: 003f096f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003f0664(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  char *pcStack_38;
  
  plVar6 = param_1 + 0x18;
  lVar8 = *param_1;
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
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
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_00366e68(lVar8 + 0x1a8);
    FUN_00367130(lVar8 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      FUN_003b646c(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,&uStack_59,
                   auStack_80 + 1);
      FUN_003be56c(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      pcStack_38 = (char *)(auStack_80 + 1);
      FUN_0033d548(&pcStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(lVar8 + 0xc3) = 0;
    FUN_003ede90(lVar8 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00366e68(lVar8 + 0x3b0);
    FUN_00367130(lVar8 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar8 + 0xce8) != 0)) {
      FUN_003ee418();
      **(undefined8 **)(lVar8 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 200) = 1;
    FUN_003f0564(lVar8);
    if (uVar9 != 0) {
      uStack_40 = 0;
      pcStack_38 = segment_command_00000020.segname + 0xe;
      if ((uVar9 & 1) != 0) {
        FUN_0055293c(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_003ef174(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)param_1[10] == '\0') {
    uVar4 = *(undefined8 *)(lVar8 + 0x98);
    lVar8 = param_1[9];
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
    uStack_90 = uVar9;
    FUN_003f6eb0(uVar4,lVar8,&uStack_90,FUN_003f22a8,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_1 = 0;
    lVar5 = param_1[9];
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
    uStack_88 = uVar9;
    FUN_00342584(&pcStack_38,lVar5,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    plVar6 = (long *)(lVar8 + 0xdd0);
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_004005ec();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f0970; end: 003f0a4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003f0970(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  char *pcStack_38;
  
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 0xcd8) == '\0') {
    **(undefined8 **)(lVar8 + 0xce8) = 0;
    *(undefined1 *)(lVar8 + 0xc6) = 0;
    plVar6 = param_1 + 0x16;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(int *)(lVar8 + 0xd70) = *(int *)(lVar8 + 0xce0);
    if ((*(int *)(lVar8 + 0xce0) < 0) && (*(int *)(lVar8 + 0xa30) != 0)) {
      uVar4 = 0;
      FUN_003ee308(0,0);
    }
    else {
      uVar4 = 0;
      func_0x003ee300(0,0);
    }
    **(undefined8 **)(lVar8 + 0xce8) = uVar4;
    FUN_003ed300(lVar8 + 0xbb0,**(long **)(lVar8 + 0xce8) + 0x18);
    *(undefined1 *)(lVar8 + 0xc6) = 0;
    FUN_0036b714(lVar8 + 0xbb0);
    plVar6 = param_1 + 0x16;
    do {
      lVar8 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 != 0) {
    return;
  }
  plVar6 = param_1 + 0x18;
  lVar8 = *param_1;
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
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
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_00366e68(lVar8 + 0x1a8);
    FUN_00367130(lVar8 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      FUN_003b646c(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,&uStack_59,
                   auStack_80 + 1);
      FUN_003be56c(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      pcStack_38 = (char *)(auStack_80 + 1);
      FUN_0033d548(&pcStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(lVar8 + 0xc3) = 0;
    FUN_003ede90(lVar8 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00366e68(lVar8 + 0x3b0);
    FUN_00367130(lVar8 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar8 + 0xce8) != 0)) {
      FUN_003ee418();
      **(undefined8 **)(lVar8 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 200) = 1;
    FUN_003f0564(lVar8);
    if (uVar9 != 0) {
      uStack_40 = 0;
      pcStack_38 = segment_command_00000020.segname + 0xe;
      if ((uVar9 & 1) != 0) {
        FUN_0055293c(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_003ef174(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)param_1[10] == '\0') {
    uVar4 = *(undefined8 *)(lVar8 + 0x98);
    lVar8 = param_1[9];
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
    uStack_90 = uVar9;
    FUN_003f6eb0(uVar4,lVar8,&uStack_90,FUN_003f22a8,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_1 = 0;
    lVar5 = param_1[9];
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
    uStack_88 = uVar9;
    FUN_00342584(&pcStack_38,lVar5,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    plVar6 = (long *)(lVar8 + 0xdd0);
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_004005ec();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f0a4c; end: 003f0b8b;  */

void FUN_003f0a4c(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar5 = *param_1;
  if (*param_2 != 0) {
    FUN_0036b714(lVar5 + 0xbb0);
    plVar1 = param_1 + 0x18;
    do {
      while (*plVar1 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[0x18] = 0;
    if (param_1[0x17] == 0) {
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar4 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar3) {
            *piVar4 = *piVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003ef174(param_1 + 0x17,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar6;
    FUN_003eef4c(lVar5,&uStack_40);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
    if (*param_2 != 0) goto LAB_003f0b48;
  }
  if (*(char *)(lVar5 + 0xcd8) != '\0') {
    plVar1 = (long *)(lVar5 + 0xdc8);
    while (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
LAB_003f0b48:
  FUN_003f0970(param_1);
  return;
}



/* Entry: 003f0b8c; end: 003f0ca3;  */

void FUN_003f0b8c(long ****param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long ****pppplVar2;
  undefined1 *puVar3;
  long ***ppplVar4;
  undefined1 uStack_81;
  long ***ppplStack_80;
  long ***ppplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long ***ppplStack_60;
  long ***appplStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_40 = 0;
  FUN_003b05f0(param_2,&uStack_40);
  uStack_38 = uStack_40;
  uStack_30 = 0x560e98;
  FUN_0056189c(appplStack_58,"Compression algorithm \'%s\' is disabled.",0x27,&uStack_38,1);
  ppplStack_60 = appplStack_58[0];
  if (-1 < cStack_41) {
    ppplStack_60 = (long ***)appplStack_58;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x49f,2,"%s");
  pppplVar2 = (long ****)appplStack_58[0];
  if (-1 < cStack_41) {
    pppplVar2 = appplStack_58;
  }
  FUN_003ef51c(param_1,0xc,pppplVar2);
  if (cStack_41 < '\0') {
    param_1 = (long ****)appplStack_58[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_41 < '\0') {
    __ZdlPv(appplStack_58[0]);
  }
  pppplVar2 = param_1;
  __Unwind_Resume();
  pcStack_68 = FUN_003f0ca4;
  ppplVar4 = *pppplVar2;
  uStack_81 = (undefined1)*(undefined4 *)((long)ppplVar4[0x16] + 0x14);
  uVar1 = *(undefined4 *)(ppplVar4 + 0x146);
  ppplStack_80 = (long ***)appplStack_58;
  ppplStack_78 = (long ***)param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_003b0884();
  puVar3 = &uStack_81;
  func_0x003b090c(puVar3,uVar1);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_003f0b8c(ppplVar4,uVar1);
  }
  func_0x003b090c((long)ppplVar4 + 0xa34,uVar1);
  return;
}



/* Entry: 003f0ca4; end: 003f0d07;  */

void FUN_003f0ca4(long *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uStack_21;
  
  lVar3 = *param_1;
  uStack_21 = (undefined1)*(undefined4 *)(*(long *)(lVar3 + 0xb0) + 0x14);
  uVar1 = *(undefined4 *)(lVar3 + 0xa30);
  FUN_003b0884();
  puVar2 = &uStack_21;
  func_0x003b090c(puVar2,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_003f0b8c(lVar3,uVar1);
  }
  func_0x003b090c(lVar3 + 0xa34,uVar1);
  return;
}



/* Entry: 003f0d08; end: 003f0f1b;  */

void FUN_003f0d08(long *param_1,ulong *param_2)

{
  long *plVar1;
  qword *pqVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  qword qVar8;
  ulong uVar9;
  ulong uStack_50;
  undefined1 uStack_41;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar7 = *param_1;
  FUN_003bb974(lVar7 + 0x38,"recv_initial_metadata_ready");
  if (*param_2 == 0) {
    FUN_003efe18(lVar7,lVar7 + 0x5b8);
    FUN_003f0ca4(param_1);
    if (((*(byte *)(lVar7 + 0x5b9) >> 3 & 1) != 0) && (*(char *)(lVar7 + 0x28) == '\0')) {
      *(undefined8 *)(*param_1 + 0x20) = *(undefined8 *)(lVar7 + 0x738);
    }
  }
  else {
    plVar1 = param_1 + 0x18;
    do {
      while (*plVar1 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1[0x18] = 0;
    if (param_1[0x17] == 0) {
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar6 = (int *)(uStack_38 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = *piVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003ef174(param_1 + 0x17,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar9 = *param_2;
    if ((uVar9 & 1) != 0) {
      piVar6 = (int *)(uVar9 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = uVar9;
    FUN_003eef4c(lVar7,&uStack_40);
    if ((uVar9 & 1) != 0) {
      FUN_0055293c(uVar9);
    }
  }
  pqVar2 = (qword *)(lVar7 + 0xdc8);
  while (qVar8 = *pqVar2, qVar8 == 0) {
    while (*pqVar2 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pqVar2,0x10);
      if (bVar4) {
        *pqVar2 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_003f0ea8;
    }
    ClearExclusiveLocal();
  }
  if (qVar8 == 1) {
    FUN_00775784();
  }
  else {
    pcVar5 = segment_command_00000020.segname + 8;
    FUN_00338c74();
    *(code **)pcVar5 = FUN_003f22c8;
    *(qword *)(pcVar5 + 8) = qVar8;
    *(code **)(pcVar5 + 0x18) = FUN_0033df34;
    *(char **)(pcVar5 + 0x20) = pcVar5;
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    uStack_50 = *param_2;
    if ((uStack_50 & 1) != 0) {
      piVar6 = (int *)(uStack_50 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00342584(&uStack_41,pcVar5 + 0x10,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003f0ea8:
    plVar1 = param_1 + 0x16;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 != 0) {
      return;
    }
  }
  FUN_003f0664(param_1);
  return;
}



/* Entry: 003f0f1c; end: 003f0fd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003f0f1c(long *param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  char *pcStack_38;
  
  FUN_003bb974(*param_1 + 0x38,"recv_trailing_metadata_ready");
  lVar5 = *param_1;
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    piVar8 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003efebc(lVar5,lVar5 + 0x7c0,&stack0xffffffffffffffd8);
  if ((uVar9 & 1) != 0) {
    FUN_0055293c(uVar9);
  }
  plVar7 = param_1 + 0x16;
  do {
    lVar5 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
  plVar7 = param_1 + 0x18;
  lVar5 = *param_1;
  do {
    while (*plVar7 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = param_1[0x17];
  if ((uVar9 & 1) != 0) {
    piVar8 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x18] = 0;
  bVar1 = *(byte *)(param_1 + 3);
  uStack_40 = uVar9;
  if ((bVar1 & 1) != 0) {
    FUN_00366e68(lVar5 + 0x1a8);
    FUN_00367130(lVar5 + 0x398);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(char *)(param_1[2] + 0x34) != '\0' && uVar9 == 0) {
      uStack_50 = 0;
      auStack_80[2] = 0;
      auStack_80[3] = 0;
      auStack_80[1] = 0;
      FUN_003b646c(&uStack_58,2,"Attempt to send message after stream was closed.",0x30,&uStack_59,
                   auStack_80 + 1);
      FUN_003be56c(&uStack_48,&uStack_50,&uStack_58);
      uVar9 = uStack_48;
      if (uStack_48 != 0) {
        uStack_48 = 0x36;
        uStack_40 = uVar9;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      pcStack_38 = (char *)(auStack_80 + 1);
      FUN_0033d548(&pcStack_38);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(lVar5 + 0xc3) = 0;
    FUN_003ede90(lVar5 + 0xa88);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00366e68(lVar5 + 0x3b0);
    FUN_00367130(lVar5 + 0x5a0);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((*(byte *)(param_1 + 3) >> 4 & 1) != 0)) &&
       (**(long **)(lVar5 + 0xce8) != 0)) {
      FUN_003ee418();
      **(undefined8 **)(lVar5 + 0xce8) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar5 + 200) = 1;
    FUN_003f0564(lVar5);
    if (uVar9 != 0) {
      uStack_40 = 0;
      pcStack_38 = segment_command_00000020.segname + 0xe;
      if ((uVar9 & 1) != 0) {
        FUN_0055293c(uVar9);
      }
    }
    uVar9 = 0;
  }
  auStack_80[0] = 0;
  FUN_003ef174(param_1 + 0x17,auStack_80);
  if ((auStack_80[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)param_1[10] == '\0') {
    uVar4 = *(undefined8 *)(lVar5 + 0x98);
    lVar5 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar8 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = uVar9;
    FUN_003f6eb0(uVar4,lVar5,&uStack_90,FUN_003f22a8,param_1,param_1 + 9,0);
    if ((uStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_1 = 0;
    lVar6 = param_1[9];
    if ((uVar9 & 1) != 0) {
      piVar8 = (int *)(uVar9 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_88 = uVar9;
    FUN_00342584(&pcStack_38,lVar6,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    plVar7 = (long *)(lVar5 + 0xdd0);
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      FUN_004005ec();
    }
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f0fd8; end: 003f110b;  */

void FUN_003f0fd8(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar6 = param_1 + 0x18;
  FUN_003bb974(*param_1 + 0x38,"on_complete");
  do {
    while (*plVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[0x18] = 0;
  if (param_1[0x17] == 0) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003ef174(param_1 + 0x17,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uVar5 = *param_2;
  if (uVar5 != 0) {
    lVar3 = *param_1;
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
    FUN_003eef4c(lVar3,&uStack_40);
    if ((uVar5 & 1) != 0) {
      FUN_0055293c(uVar5);
    }
  }
  plVar6 = param_1 + 0x16;
  do {
    lVar3 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    FUN_003f0664(param_1);
  }
  return;
}



/* Entry: 003f110c; end: 003f1adf;  */

dword * FUN_003f110c(dword *param_1,dword *param_2,dword **param_3,dword *param_4,byte param_5)

{
  long *plVar1;
  dword *pdVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  dword *pdVar9;
  ulong uVar10;
  dword *pdVar11;
  dword *pdVar12;
  dword **ppdVar13;
  uint uVar14;
  code *pcVar15;
  dword *pdVar16;
  undefined8 *puVar17;
  char *pcVar18;
  long *plVar19;
  long lVar20;
  dword **ppdVar21;
  dword *pdVar22;
  int iVar23;
  dword *pdVar24;
  int iVar25;
  dword *pdStack_128;
  dword *pdStack_120;
  dword adStack_118 [6];
  ulong uStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  dword *pdStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  dword *pdStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar8 = (code *)param_4;
  if (param_3 == (dword **)0x0) {
LAB_003f189c:
    if ((param_5 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x26);
      func_0x003f6ea4(uVar10,param_4);
      if ((uVar10 & 1) == 0) {
        func_0x007757b8();
LAB_003f1a14:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x3f1a18);
        (*pcVar8)();
      }
      lVar20 = *(long *)(param_1 + 0x26);
      pdStack_e8 = (dword *)0x0;
      FUN_00338c74(0x28);
      pcVar8 = FUN_003f233c;
      ppdVar13 = &pdStack_e8;
      FUN_003f6eb0(lVar20);
      param_1 = pdStack_e8;
      if (((ulong)pdStack_e8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pdStack_f0 = (dword *)0x0;
      ppdVar13 = &pdStack_f0;
      FUN_00342584(&pdStack_a0);
      param_1 = pdStack_f0;
      if (((ulong)pdStack_f0 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  else {
    uVar14 = 0;
    pdVar9 = param_2;
    ppdVar21 = param_3;
    do {
      uVar5 = 1 << (ulong)(*pdVar9 & 0x1f);
      pdVar11 = param_1;
      pdVar12 = param_2;
      ppdVar13 = param_3;
      if ((uVar5 & uVar14) != 0) goto LAB_003f18c4;
      uVar14 = uVar5 | uVar14;
      ppdVar21 = (dword **)((long)ppdVar21 + -1);
      pdVar9 = pdVar9 + 0x14;
    } while (ppdVar21 != (dword **)0x0);
    if (param_3 == (dword **)0x0) goto LAB_003f189c;
    pdVar9 = param_1;
    FUN_003f0440();
    pdVar11 = pdVar9;
    if (pdVar9 == (dword *)0x0) {
LAB_003f18c4:
      param_4 = pdVar12;
      pdVar22 = &MACH_HEADER.cpusubtype;
      goto LAB_003f1920;
    }
    ppdVar21 = (dword **)0x0;
    iVar23 = 0;
    iVar25 = 0;
    *(dword **)(pdVar9 + 0x12) = param_4;
    pdVar22 = pdVar9 + 2;
    *(byte *)(pdVar9 + 0x14) = param_5;
    plVar1 = (long *)(param_1 + 0xec);
    pdVar2 = param_1 + 0x2a2;
    plVar3 = (long *)(param_1 + 0x6a);
    do {
      if (*(long *)(param_2 + (long)ppdVar21 * 0x14 + 2) != 0) {
        pdVar22 = (dword *)((long)&MACH_HEADER.magic + 1);
        goto LAB_003f1990;
      }
      switch(param_2[(long)ppdVar21 * 0x14]) {
      case 0:
        pdVar24 = param_2 + (long)ppdVar21 * 0x14 + 1;
        if ((*pdVar24 & 0xfffffe5b) != 0) {
code_r0x003f1964:
          pdVar22 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
          goto LAB_003f1990;
        }
        if (*(char *)((long)param_1 + 0xc2) != '\0') goto code_r0x003f196c;
        if (*(code *)(param_2 + (long)ppdVar21 * 0x14 + 8) == (code)0x0) {
          if (*(int *)(*(long *)(param_1 + 0x2c) + 0x18) != 0) {
            pdVar16 = (dword *)(*(long *)(param_1 + 0x2c) + 0x1c);
            goto code_r0x003f15e8;
          }
        }
        else {
          pdVar16 = param_2 + (long)ppdVar21 * 0x14 + 9;
code_r0x003f15e8:
          if ((char)*(long *)(param_1 + 10) == '\0') {
            pdVar12 = (dword *)(ulong)*pdVar16;
            pdVar11 = param_1 + 0x28d;
            FUN_003b06e8();
            param_1[0x6a] = param_1[0x6a] | 0x100;
            param_1[0xce] = (int)pdVar11;
          }
        }
        if (*(ulong *)(param_2 + (long)ppdVar21 * 0x14 + 4) >> 0x1f == 0) {
          *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 1;
          *(undefined1 *)((long)param_1 + 0xc2) = 1;
          pdVar12 = *(dword **)(param_2 + (long)ppdVar21 * 0x14 + 4);
          ppdVar13 = *(dword ***)(param_2 + (long)ppdVar21 * 0x14 + 6);
          pcVar8 = (code *)0x0;
          pdVar11 = param_1;
          FUN_003ef8d8();
          if ((int)pdVar11 != 0) {
            uVar14 = param_1[0x6a];
            param_1[0x6a] = uVar14 & 0xffffffbf;
            if ((char)*(long *)(param_1 + 10) == '\0') {
              *(long **)(param_1 + 0x40) = plVar3;
              param_1[0x42] = *pdVar24;
              goto code_r0x003f16b0;
            }
            if (*(long *)(param_1 + 8) != 0x7fffffffffffffff) {
              param_1[0x6a] = uVar14 & 0xffffffbf | 0x800;
              *(long *)(param_1 + 0xca) = *(long *)(param_1 + 8);
            }
            *(long **)(param_1 + 0x40) = plVar3;
            param_1[0x42] = *pdVar24;
            *(dword **)(param_1 + 0x44) = param_1 + 0x276;
code_r0x003f181c:
            iVar23 = 1;
            break;
          }
        }
        goto code_r0x003f1974;
      case 1:
        uVar14 = param_2[(long)ppdVar21 * 0x14 + 1];
        if ((uVar14 & 0x3ffffff8) != 0) goto code_r0x003f1964;
        lVar20 = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 4);
        if (lVar20 == 0) {
          pdVar22 = (dword *)((long)&MACH_HEADER.cpusubtype + 3);
          goto LAB_003f1990;
        }
        if (*(char *)((long)param_1 + 0xc3) != '\0') goto code_r0x003f196c;
        uVar5 = uVar14 | 0x80000000;
        if (*(int *)(lVar20 + 0x10) < 1) {
          uVar5 = uVar14;
        }
        *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 4;
        *(undefined1 *)((long)param_1 + 0xc3) = 1;
        FUN_003ede90(pdVar2);
        pdVar11 = (dword *)(*(long *)(param_2 + (long)ppdVar21 * 0x14 + 4) + 0x18);
        pdVar12 = pdVar2;
        FUN_003ed300();
        param_1[0x4c] = uVar5;
        *(dword **)(param_1 + 0x4a) = pdVar2;
code_r0x003f16b0:
        iVar23 = 1;
        break;
      case 2:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if ((char)*(long *)(param_1 + 10) == '\0') {
code_r0x003f1984:
          pdVar22 = (dword *)((long)&MACH_HEADER.magic + 2);
          goto LAB_003f1990;
        }
        if (*(char *)(param_1 + 0x31) != '\0') goto code_r0x003f196c;
        *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 2;
        iVar23 = 1;
        *(undefined1 *)(param_1 + 0x31) = 1;
        *(long **)(param_1 + 0x46) = plVar1;
        break;
      case 3:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if ((char)*(long *)(param_1 + 10) != '\0') {
code_r0x003f197c:
          pdVar22 = (dword *)((long)&MACH_HEADER.magic + 3);
          goto LAB_003f1990;
        }
        if (*(char *)(param_1 + 0x31) != '\0') goto code_r0x003f196c;
        if (*(ulong *)(param_2 + (long)ppdVar21 * 0x14 + 4) >> 0x1f == 0) {
          *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 2;
          *(undefined1 *)(param_1 + 0x31) = 1;
          pdVar12 = *(dword **)(param_2 + (long)ppdVar21 * 0x14 + 4);
          ppdVar13 = *(dword ***)(param_2 + (long)ppdVar21 * 0x14 + 6);
          pcVar8 = (code *)((long)&MACH_HEADER.magic + 1);
          pdVar11 = param_1;
          FUN_003ef8d8();
          if ((int)pdVar11 == 0) goto code_r0x003f1974;
          if (param_2[(long)ppdVar21 * 0x14 + 8] == 0) {
            pdStack_f8 = (dword *)0x0;
          }
          else {
            adStack_118[0] = 0;
            adStack_118[1] = 0;
            adStack_118[2] = 0;
            adStack_118[3] = 0;
            adStack_118[4] = 0;
            adStack_118[5] = 0;
            pcVar8 = (code *)&pdStack_c0;
            FUN_003b646c(adStack_118 + 6,2,"Server returned error",0x15,pcVar8,adStack_118);
            ppdVar13 = (dword **)(long)(int)param_2[(long)ppdVar21 * 0x14 + 8];
            FUN_003be104(&pdStack_f8,adStack_118 + 6,3);
            if ((uStack_100 & 1) != 0) {
              FUN_0055293c();
            }
            pdStack_a0 = adStack_118;
            FUN_0033d548(&pdStack_a0);
          }
          puVar17 = *(undefined8 **)(param_2 + (long)ppdVar21 * 0x14 + 10);
          if (puVar17 != (undefined8 *)0x0) {
            uStack_d8 = puVar17[1];
            uStack_e0 = *puVar17;
            uStack_c8 = puVar17[3];
            uStack_d0 = puVar17[2];
            FUN_003ec030(&pdStack_c0,&uStack_e0);
            uStack_98 = uStack_b8;
            pdStack_a0 = pdStack_c0;
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            FUN_0034ce60(plVar1,&pdStack_a0);
            if ((long *)((long)&MACH_HEADER.magic + 1) < pdStack_a0) {
              do {
                lVar20 = *(long *)pdStack_a0;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pdStack_a0,0x10);
                if (bVar7) {
                  *(long *)pdStack_a0 = lVar20 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar20 + -1 == 0) {
                (**(code **)(pdStack_a0 + 2))();
              }
            }
            if (pdStack_f8 != (dword *)0x0) {
              pdStack_120 = pdStack_f8;
              if (((ulong)pdStack_f8 & 1) != 0) {
                pcVar18 = (char *)((long)pdStack_f8 + -1);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
                  if (bVar7) {
                    *(int *)pcVar18 = *(int *)pcVar18 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              plVar19 = *(long **)(param_2 + (long)ppdVar21 * 0x14 + 10);
              ppdVar13 = (dword **)((long)plVar19 + 9);
              if (*plVar19 != 0) {
                ppdVar13 = (dword **)plVar19[2];
              }
              pcVar8 = (code *)((ulong)plVar19[1] & 0xff);
              if (*plVar19 != 0) {
                pcVar8 = (code *)plVar19[1];
              }
              FUN_003be254(&pdStack_a0,&pdStack_120,5);
              pdVar12 = pdStack_f8;
              if (pdStack_a0 == pdStack_f8) {
code_r0x003f17a0:
                if (((ulong)pdVar12 & 1) != 0) {
                  FUN_0055293c();
                }
              }
              else {
                pdStack_f8 = pdStack_a0;
                pdStack_a0 = (dword *)(segment_command_00000020.segname + 0xe);
                if (((ulong)pdVar12 & 1) != 0) {
                  FUN_0055293c();
                  pdVar12 = pdStack_a0;
                  goto code_r0x003f17a0;
                }
              }
              if (((ulong)pdStack_120 & 1) != 0) {
                FUN_0055293c();
              }
            }
          }
          pdStack_128 = pdStack_f8;
          if (((ulong)pdStack_f8 & 1) != 0) {
            pcVar18 = (char *)((long)pdStack_f8 + -1);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
              if (bVar7) {
                *(int *)pcVar18 = *(int *)pcVar18 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          pdVar12 = (dword *)&pdStack_128;
          FUN_003ef174(param_1 + 0x36e);
          if (((ulong)pdStack_128 & 1) != 0) {
            FUN_0055293c();
          }
          param_1[0x14e] = param_2[(long)ppdVar21 * 0x14 + 8];
          param_1[0xec] = param_1[0xec] & 0xffffffbf | 0x400;
          *(long **)(param_1 + 0x46) = plVar1;
          *(dword **)(param_1 + 0x48) = param_1 + 0x35d;
          pdVar11 = pdStack_f8;
          if (((ulong)pdStack_f8 & 1) != 0) {
            FUN_0055293c();
          }
          goto code_r0x003f181c;
        }
code_r0x003f1974:
        pdVar22 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
        goto LAB_003f1990;
      case 4:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if (*(char *)((long)param_1 + 0xc5) != '\0') goto code_r0x003f196c;
        *(undefined1 *)((long)param_1 + 0xc5) = 1;
        *(long *)(param_1 + 0x272) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 4);
        *(code **)(param_1 + 0x34e) = FUN_003f2344;
        *(dword **)(param_1 + 0x350) = pdVar9;
        *(long *)(param_1 + 0x352) = 0;
        *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 8;
        *(dword **)(param_1 + 0x4e) = param_1 + 0x16e;
        *(dword **)(param_1 + 0x52) = param_1 + 0x34c;
        if ((char)*(long *)(param_1 + 10) == '\0') {
          *(dword **)(param_1 + 0x56) = param_1 + 0x276;
        }
        else {
          *(long *)(param_1 + 0x54) = (long)param_1 + 0xc1;
        }
code_r0x003f15c4:
        iVar25 = iVar25 + 1;
        break;
      case 5:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if (*(char *)((long)param_1 + 0xc6) == '\0') {
          *(undefined1 *)((long)param_1 + 0xc6) = 1;
          *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 0x10;
          pdVar11 = param_1 + 0x2ec;
          FUN_0036b714();
          *(long *)(param_1 + 0x33a) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 4);
          param_1[0x338] = 0;
          *(dword **)(param_1 + 0x58) = param_1 + 0x2ec;
          *(code **)(param_1 + 0x346) = FUN_003f23b8;
          *(dword **)(param_1 + 0x348) = pdVar9;
          *(long *)(param_1 + 0x34a) = 0;
          *(dword **)(param_1 + 0x5a) = param_1 + 0x338;
          *(dword **)(param_1 + 0x5c) = param_1 + 0x339;
          *(dword **)(param_1 + 0x5e) = param_1 + 0x344;
          goto code_r0x003f15c4;
        }
        goto code_r0x003f196c;
      case 6:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if ((char)*(long *)(param_1 + 10) == '\0') goto code_r0x003f1984;
        if (*(char *)((long)param_1 + 199) == '\0') {
          *(undefined1 *)((long)param_1 + 199) = 1;
          *(long *)(param_1 + 0x274) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 4);
          *(long *)(param_1 + 0x368) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 6);
          *(long *)(param_1 + 0x36a) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 8);
          *(long *)(param_1 + 0x36c) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 10);
          *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 0x20;
          *(dword **)(param_1 + 0x60) = param_1 + 0x1f0;
          *(dword **)(param_1 + 0x62) = param_1 + 0x278;
          pcVar15 = FUN_003f244c;
code_r0x003f15b0:
          *(code **)(param_1 + 0x356) = pcVar15;
          *(dword **)(param_1 + 0x358) = pdVar9;
          *(long *)(param_1 + 0x35a) = 0;
          *(dword **)(param_1 + 100) = param_1 + 0x354;
          goto code_r0x003f15c4;
        }
        goto code_r0x003f196c;
      case 7:
        if (param_2[(long)ppdVar21 * 0x14 + 1] != 0) goto code_r0x003f1964;
        if ((char)*(long *)(param_1 + 10) != '\0') goto code_r0x003f197c;
        if (*(char *)((long)param_1 + 199) == '\0') {
          *(undefined1 *)((long)param_1 + 199) = 1;
          *(long *)(param_1 + 0x368) = *(long *)(param_2 + (long)ppdVar21 * 0x14 + 4);
          *(byte *)(pdVar9 + 6) = *(byte *)(pdVar9 + 6) | 0x20;
          *(dword **)(param_1 + 0x60) = param_1 + 0x1f0;
          *(dword **)(param_1 + 0x62) = param_1 + 0x278;
          pcVar15 = FUN_003f24c0;
          goto code_r0x003f15b0;
        }
code_r0x003f196c:
        pdVar22 = &MACH_HEADER.cpusubtype;
LAB_003f1990:
        bVar4 = *(byte *)(pdVar9 + 6);
        param_4 = pdVar12;
        if ((bVar4 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0xc2) = 0;
          FUN_00366e68(plVar3);
          pdVar11 = param_1 + 0xe6;
          FUN_00367130();
          bVar4 = *(byte *)(pdVar9 + 6);
          param_4 = pdVar12;
        }
        if ((bVar4 >> 2 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0xc3) = 0;
          bVar4 = *(byte *)(pdVar9 + 6);
        }
        if ((bVar4 >> 1 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x31) = 0;
          FUN_00366e68(plVar1);
          pdVar11 = param_1 + 0x168;
          FUN_00367130();
          bVar4 = *(byte *)(pdVar9 + 6);
        }
        if ((bVar4 >> 3 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0xc5) = 0;
          bVar4 = *(byte *)(pdVar9 + 6);
        }
        if ((bVar4 >> 4 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0xc6) = 0;
          bVar4 = *(byte *)(pdVar9 + 6);
        }
        if ((bVar4 >> 5 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 199) = 0;
        }
        goto LAB_003f1920;
      }
      ppdVar21 = (dword **)((long)ppdVar21 + 1);
    } while (ppdVar21 != param_3);
    plVar1 = (long *)(param_1 + 0x374);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((param_5 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x26);
      FUN_003f6ea0(uVar10,param_4);
      if ((uVar10 & 1) == 0) {
        func_0x007757ec();
        goto LAB_003f1a14;
      }
    }
    *(long *)(pdVar9 + 0x2c) = (long)(iVar25 + iVar23);
    if (iVar23 != 0) {
      *(code **)(pdVar9 + 0x26) = FUN_003f2534;
      *(dword **)(pdVar9 + 0x28) = pdVar9;
      *(long *)(pdVar9 + 0x2a) = 0;
      *(dword **)(pdVar9 + 2) = pdVar9 + 0x24;
    }
    ppdVar13 = (dword **)(pdVar9 + 0x1c);
    FUN_003ef434();
    param_4 = pdVar22;
  }
  pdVar22 = (dword *)0x0;
  pdVar11 = param_1;
LAB_003f1920:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_78) {
    ___stack_chk_fail();
    FUN_0033c494(&pdStack_a0);
    FUN_0033c494(&pdStack_120);
    FUN_0033c494(&pdStack_f8);
    __Unwind_Resume();
    uVar10 = (ulong)param_4 & 0xffffffff;
    pdVar12 = pdVar11 + (uVar10 * 2 + 0x147) * 2;
    pdVar22 = pdVar11 + (uVar10 * 2 + 0x148) * 2;
    pdVar9 = pdVar11 + (uVar10 * 2 + 0x148) * 2;
    if (*(code **)pdVar9 != (code *)0x0) {
      pdVar11 = *(dword **)pdVar12;
      (**(code **)pdVar9)(pdVar11);
    }
    *(dword ***)pdVar12 = ppdVar13;
    *(code **)pdVar22 = pcVar8;
    return pdVar11;
  }
  return pdVar22;
}



/* Entry: 003f1ae0; end: 003f1b2b;  */

void FUN_003f1ae0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x10;
  if (*(code **)(param_1 + 0xa40) != (code *)0x0) {
    (**(code **)(param_1 + 0xa40))(*(undefined8 *)(param_1 + 0xa38));
  }
  *(undefined8 *)(param_1 + 0xa38) = param_3;
  *(undefined8 *)(param_1 + 0xa40) = param_4;
  return;
}



/* Entry: 003f1b2c; end: 003f1bb7;  */

ulong * FUN_003f1b2c(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
  puVar4 = *(ulong **)(param_1 + 8);
  do {
    uVar5 = *puVar4;
    uVar1 = uVar5 + ((ulong)(param_2 + 0xf) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar1) {
    func_0x003d6048();
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar5 + 0x30);
  }
  FUN_00341470(auStack_68);
  return puVar4;
}



/* Entry: 003f1bb8; end: 003f1bdb;  */

undefined8 FUN_003f1bb8(void)

{
  return 0x1280;
}



/* Entry: 003f1bdc; end: 003f1bf3;  */

long FUN_003f1bdc(long param_1)

{
  func_0x003a6a28();
  return param_1 + -0xdd0;
}



/* Entry: 003f1bf4; end: 003f1ca3;  */

long * FUN_003f1bf4(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 auStack_1b0 [72];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_00341380(&uStack_38);
    FUN_003413d4(auStack_80);
    uStack_88 = 4;
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_88);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_00341470(auStack_80);
    FUN_003414dc(&uStack_38);
    return (long *)0x0;
  }
  func_0x00775820();
  func_0x0040cf10();
  FUN_0033c494(&uStack_88);
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  __Unwind_Resume();
  if (param_4 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    FUN_00341380(&uStack_d8,0);
    FUN_003413d4(auStack_120);
    FUN_003ef51c(param_1,param_2,param_3);
    FUN_00341470(auStack_120);
    FUN_003414dc(&uStack_d8);
    return (long *)0x0;
  }
  func_0x00775854();
  FUN_00341470(auStack_120);
  FUN_003414dc(&uStack_d8);
  __Unwind_Resume();
  if (param_5 == 0) {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_00341380(&uStack_168,0);
    FUN_003413d4(auStack_1b0);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,0);
    FUN_00341470(auStack_1b0);
    FUN_003414dc(&uStack_168);
  }
  else {
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return param_1;
}



/* Entry: 003f1ca4; end: 003f1d43;  */

long * FUN_003f1ca4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_00341380(&uStack_48,0);
    FUN_003413d4(auStack_90);
    FUN_003ef51c(param_1,param_2,param_3);
    FUN_00341470(auStack_90);
    FUN_003414dc(&uStack_48);
    return (long *)0x0;
  }
  func_0x00775854();
  FUN_00341470(auStack_90);
  FUN_003414dc(&uStack_48);
  __Unwind_Resume();
  if (param_5 == 0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    FUN_00341380(&uStack_d8,0);
    FUN_003413d4(auStack_120);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,0);
    FUN_00341470(auStack_120);
    FUN_003414dc(&uStack_d8);
  }
  else {
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return param_1;
}



/* Entry: 003f1d44; end: 003f1dff;  */

long * FUN_003f1d44(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_00341380(&uStack_48,0);
    FUN_003413d4(auStack_90);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,0);
    FUN_00341470(auStack_90);
    FUN_003414dc(&uStack_48);
  }
  else {
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return param_1;
}


