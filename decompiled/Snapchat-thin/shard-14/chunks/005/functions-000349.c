/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2f29dc; end: 10b2f2aab;  */

void FUN_10b2f29dc(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      piVar4 = (int *)puVar5[1];
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
          (**(code **)(piVar4 + 4))();
        }
      }
      piVar4 = (int *)*puVar5;
      if (piVar4 != (int *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar3) {
            *piVar4 = *piVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10b32a634();
      piVar4 = (int *)*puVar5;
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
      __ZdlPv(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2f2aac; end: 10b2f2ab7;  */

long FUN_10b2f2aac(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  func_0x00010bdb3698();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_58 = (undefined7)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x37);
  uStack_51 = (undefined1)uVar4;
  uVar2 = *(undefined1 *)(param_1 + 0x3f);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_1 = *param_2;
    __ZdlPv();
  }
  *param_2 = lVar1;
  param_2[1] = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)((long)param_2 + 0xf) = uVar4;
  *(undefined1 *)((long)param_2 + 0x17) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return param_1;
  }
  return 1;
}



/* Entry: 10b2f2ab8; end: 10b2f2b53;  */

long FUN_10b2f2ab8(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x37);
  uStack_41 = (undefined1)uVar4;
  uVar2 = *(undefined1 *)(param_1 + 0x3f);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_1 = *param_2;
    __ZdlPv();
  }
  *param_2 = lVar1;
  param_2[1] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0xf) = uVar4;
  *(undefined1 *)((long)param_2 + 0x17) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return param_1;
  }
  return 1;
}



/* Entry: 10b2f2b54; end: 10b2f2b93;  */

void FUN_10b2f2b54(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b2f2b94; end: 10b2f2c4f;  */

void FUN_10b2f2b94(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_28;
  int *piStack_20;
  int *piStack_18;
  
  piStack_18 = *(int **)(param_1 + 0x40);
  piStack_20 = *(int **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  piStack_28 = *(int **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(param_1 + 0x20))(param_1 + 0x28,&piStack_18,&piStack_20,&piStack_28,param_1 + 0x58);
  if (piStack_28 != (int *)0x0) {
    do {
      iVar1 = *piStack_28;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_28,0x10);
      if (bVar3) {
        *piStack_28 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piStack_28 + 4))();
    }
  }
  if (piStack_20 != (int *)0x0) {
    do {
      iVar1 = *piStack_20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_20,0x10);
      if (bVar3) {
        *piStack_20 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piStack_20 + 4))();
    }
  }
  if (piStack_18 != (int *)0x0) {
    do {
      iVar1 = *piStack_18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_18,0x10);
      if (bVar3) {
        *piStack_18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piStack_18 + 4))();
    }
  }
  return;
}



/* Entry: 10b2f2c50; end: 10b2f2d93;  */

void FUN_10b2f2c50(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  piVar4 = *(int **)(param_1 + 0x50);
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
      (**(code **)(piVar4 + 4))();
    }
  }
  piVar4 = *(int **)(param_1 + 0x48);
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
      (**(code **)(piVar4 + 4))();
    }
  }
  piVar4 = *(int **)(param_1 + 0x40);
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
      (**(code **)(piVar4 + 4))();
    }
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b2f2d94; end: 10b2f2daf;  */

void FUN_10b2f2d94(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2f2dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b2f2db0; end: 10b2f2e1f;  */

void FUN_10b2f2db0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar4 != 0) {
      piVar5 = *(int **)(lVar4 + 8);
      if (piVar5 != (int *)0x0) {
        do {
          iVar1 = *piVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(piVar5 + 4))(piVar5);
        }
      }
      __ZdlPv(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2f2e20; end: 10b2f2e47;  */

void FUN_10b2f2e20(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2f2e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b2f2e48; end: 10b2f2ee3;  */

long FUN_10b2f2e48(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x37);
  uStack_41 = (undefined1)uVar4;
  uVar2 = *(undefined1 *)(param_1 + 0x3f);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_1 = *param_2;
    __ZdlPv();
  }
  *param_2 = lVar1;
  param_2[1] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0xf) = uVar4;
  *(undefined1 *)((long)param_2 + 0x17) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return param_1;
  }
  return 1;
}



/* Entry: 10b2f2ee4; end: 10b2f2f23;  */

void FUN_10b2f2ee4(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b2f2f24; end: 10b2f2ff3;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3724) */
/* WARNING: Removing unreachable block (ram,0x00010b2f36dc) */

void FUN_10b2f2f24(undefined1 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar19;
  undefined8 unaff_x22;
  byte *pbVar20;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar9 = param_2;
  FUN_10b2f37ac(param_1 + 0x50,param_2,param_2);
  if (((ulong)puVar9 & 1) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x70);
    if (puVar9 < *(undefined8 **)(param_1 + 0x78)) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(puVar9,*param_2,param_2[1]);
        *(undefined8 **)(param_1 + 0x70) = puVar9 + 3;
        cVar3 = param_1[0x81];
      }
      else {
        uVar21 = param_2[1];
        uVar15 = *param_2;
        puVar9[2] = param_2[2];
        puVar9[1] = uVar21;
        *puVar9 = uVar15;
        *(undefined8 **)(param_1 + 0x70) = puVar9 + 3;
        cVar3 = param_1[0x81];
      }
    }
    else {
      puVar6 = param_1 + 0x68;
      func_0x000107c2cae4(puVar6,param_2);
      *(undefined1 **)(param_1 + 0x70) = puVar6;
      cVar3 = param_1[0x81];
    }
    if ((cVar3 == '\x01') && ((param_1[0x82] & 1) == 0)) {
      do {
        plVar13 = (long *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c2cb24((undefined1 *)((long)register0x00000008 + -0xa0),&UNK_10f74420e,
                            &UNK_10f7441dc,0x9c);
        puVar7 = (undefined4 *)0x50;
        __Znwm();
        unaff_x25 = (undefined *)0x1;
        *puVar7 = 1;
        *(code **)(puVar7 + 2) = FUN_10b2f3cdc;
        *(undefined8 *)(puVar7 + 4) = 0x10b2f3d7c;
        unaff_x24 = &UNK_100142430;
        *(undefined **)(puVar7 + 6) = &UNK_100142430;
        *(code **)(puVar7 + 8) = FUN_10b2f3208;
        *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(param_1 + 0x48);
        uVar15 = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(puVar7 + 0xc) = uVar15;
        uVar15 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(puVar7 + 0x10) = uVar15;
        *(undefined1 **)(puVar7 + 0x12) = param_1 + 0x80;
        puVar8 = (undefined4 *)0x38;
        __Znwm();
        *puVar8 = 1;
        *(code **)(puVar8 + 2) = FUN_10b2f3df4;
        *(undefined8 *)(puVar8 + 4) = 0x10b2f3e10;
        *(undefined **)(puVar8 + 6) = &UNK_100142430;
        *(code **)(puVar8 + 8) = FUN_10b2f3698;
        *(undefined8 *)(puVar8 + 10) = 0;
        *(undefined1 **)(puVar8 + 0xc) = param_1;
        puVar9 = (undefined8 *)0x8;
        __Znwm();
        *puVar9 = 0;
        puVar10 = (undefined4 *)0x38;
        __Znwm();
        *puVar10 = 1;
        *(code **)(puVar10 + 2) = FUN_10b2f3f10;
        *(code **)(puVar10 + 4) = FUN_10b2f3f64;
        *(undefined **)(puVar10 + 6) = &UNK_100142430;
        *(code **)(puVar10 + 8) = FUN_10b2f3e1c;
        *(undefined4 **)(puVar10 + 10) = puVar7;
        *(undefined8 **)(puVar10 + 0xc) = puVar9;
        puVar7 = (undefined4 *)0x38;
        __Znwm();
        *puVar7 = 1;
        *(code **)(puVar7 + 2) = FUN_10b2f3fb4;
        *(code **)(puVar7 + 4) = FUN_10b2f4008;
        *(undefined **)(puVar7 + 6) = &UNK_100142430;
        *(code **)(puVar7 + 8) = FUN_10b2f3eb0;
        *(undefined4 **)(puVar7 + 10) = puVar8;
        *(undefined8 **)(puVar7 + 0xc) = puVar9;
        *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110cd5b40;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x5f) = 0x1008000;
        *(undefined2 *)((long)register0x00000008 + -0x5b) = 0;
        *(undefined4 **)((long)register0x00000008 + -0x80) = puVar7;
        *(undefined4 **)((long)register0x00000008 + -0x78) = puVar10;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
        puVar14 = (undefined1 *)((long)register0x00000008 + -0x78);
        func_0x000107c2ce14();
        piVar11 = *(int **)((long)register0x00000008 + -0x80);
        if (piVar11 != (int *)0x0) {
          do {
            iVar2 = *piVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(piVar11 + 4))();
          }
        }
        piVar11 = *(int **)((long)register0x00000008 + -0x78);
        if (piVar11 != (int *)0x0) {
          do {
            iVar2 = *piVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(piVar11 + 4))();
          }
        }
        param_1[0x82] = (char)puVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return;
        }
        ___stack_chk_fail();
        *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x28;
        *(undefined1 **)((long)register0x00000008 + -0xf8) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 1;
        *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_100142430;
        *(undefined4 **)((long)register0x00000008 + -0xd8) = puVar10;
        *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar9;
        *(undefined4 **)((long)register0x00000008 + -200) = puVar8;
        *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar6;
        *(undefined1 **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined1 **)((long)register0x00000008 + -0xb0) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0xa8) = FUN_10b2f3208;
        *(undefined8 *)((long)register0x00000008 + -0x110) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar19 = *plVar13;
        lVar17 = plVar13[1];
        *(long *)((long)register0x00000008 + -0x370) = lVar17;
        if (lVar19 == lVar17) {
LAB_10b2f3654:
          uVar15 = 1;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x110)) goto LAB_10b2f3670;
          return;
        }
        unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x270);
        *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x308) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x310) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x300) = 0xaaaaaaaaaaaaaaaa;
        unaff_x26 = 0xaaaaaaaaaaaaaaaa;
        unaff_x28 = 0xa8;
        *(undefined8 *)((long)register0x00000008 + -0x328) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -800) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x348) = 0xaaaaaaaaffffffff;
        *(undefined8 *)((long)register0x00000008 + -0x350) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x340) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x358) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x360) = 0xaaaaaaaaaaaaaaaa;
        *(undefined1 **)((long)register0x00000008 + -0x368) = puVar14;
        while( true ) {
          *(undefined8 *)((long)register0x00000008 + -0x138) =
               *(undefined8 *)((long)register0x00000008 + -0x2b8);
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0x2c0);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x2c8);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0x2d0);
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0x2d8);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0x2e0);
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0x2e8);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x2f0);
          *(undefined8 *)((long)register0x00000008 + -0x168) =
               *(undefined8 *)((long)register0x00000008 + -0x2f8);
          *(undefined8 *)((long)register0x00000008 + -0x170) =
               *(undefined8 *)((long)register0x00000008 + -0x300);
          *(undefined8 *)((long)register0x00000008 + -0x158) =
               *(undefined8 *)((long)register0x00000008 + -0x318);
          *(undefined8 *)((long)register0x00000008 + -0x160) =
               *(undefined8 *)((long)register0x00000008 + -800);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0x308);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0x310);
          *(undefined8 *)((long)register0x00000008 + -0x1b8) =
               *(undefined8 *)((long)register0x00000008 + -0x328);
          *(undefined8 *)((long)register0x00000008 + -0x1c0) =
               *(undefined8 *)((long)register0x00000008 + -0x330);
          *(undefined8 *)((long)register0x00000008 + -0x1a8) =
               *(undefined8 *)((long)register0x00000008 + -0x338);
          *(undefined8 *)((long)register0x00000008 + -0x1b0) =
               *(undefined8 *)((long)register0x00000008 + -0x340);
          *(undefined8 *)((long)register0x00000008 + -0x198) =
               *(undefined8 *)((long)register0x00000008 + -0x358);
          *(undefined8 *)((long)register0x00000008 + -0x1a0) =
               *(undefined8 *)((long)register0x00000008 + -0x360);
          *(undefined8 *)((long)register0x00000008 + -0x188) =
               *(undefined8 *)((long)register0x00000008 + -0x348);
          *(undefined8 *)((long)register0x00000008 + -400) =
               *(undefined8 *)((long)register0x00000008 + -0x350);
          *(undefined **)((long)register0x00000008 + -0x270) = &UNK_10f745552;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 1;
          *(undefined **)((long)register0x00000008 + -0x260) = &UNK_10f7456b9;
          *(undefined8 *)((long)register0x00000008 + -600) = 0x15;
          *(undefined **)((long)register0x00000008 + -0x250) = &UNK_10f745552;
          *(undefined8 *)((long)register0x00000008 + -0x248) = 1;
          *(char **)((long)register0x00000008 + -0x240) = "*";
          *(undefined8 *)((long)register0x00000008 + -0x238) = 1;
          *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
          param_1 = (undefined1 *)((long)register0x00000008 + -0x290);
          func_0x000107c2cc20(param_1,4,(undefined1 *)((long)register0x00000008 + -0x270));
          *(undefined8 *)((long)register0x00000008 + -0x2a0) =
               *(undefined8 *)((long)register0x00000008 + -0x280);
          *(undefined8 *)((long)register0x00000008 + -0x2a8) =
               *(undefined8 *)((long)register0x00000008 + -0x288);
          *(undefined8 *)((long)register0x00000008 + -0x2b0) =
               *(undefined8 *)((long)register0x00000008 + -0x290);
          cVar3 = *(char *)((long)register0x00000008 + -0x299);
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x2b0);
          if (-1 < (long)cVar3) {
            unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2b0);
          }
          puVar6 = *(undefined1 **)((long)register0x00000008 + -0x2a8);
          if (-1 < cVar3) {
            puVar6 = (undefined1 *)(long)cVar3;
          }
          if ((undefined1 *)0x7ffffffffffffff7 < puVar6) break;
          if (puVar6 < (undefined1 *)0x17) {
            *(char *)((long)register0x00000008 + -0x279) = (char)puVar6;
            puVar12 = (undefined1 *)((long)register0x00000008 + -0x290);
            if (puVar6 != (undefined1 *)0x0) goto LAB_10b2f33a8;
          }
          else {
            puVar14 = (undefined1 *)0x19;
            if (((ulong)puVar6 | 7) != 0x17) {
              puVar14 = (undefined1 *)(((ulong)puVar6 | 7) + 1);
            }
            puVar12 = puVar14;
            __Znwm();
            *(undefined1 **)((long)register0x00000008 + -0x288) = puVar6;
            *(ulong *)((long)register0x00000008 + -0x280) = (ulong)puVar14 | 0x8000000000000000;
            *(undefined1 **)((long)register0x00000008 + -0x290) = puVar12;
LAB_10b2f33a8:
            _memmove(puVar12,unaff_x23,puVar6);
          }
          puVar12[(long)puVar6] = 0;
          bVar4 = *(byte *)((long)register0x00000008 + -0x279);
          unaff_x24 = (undefined *)(ulong)bVar4;
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x290);
          unaff_x25 = *(undefined **)((long)register0x00000008 + -0x288);
          puVar16 = unaff_x25;
          puVar6 = unaff_x23;
          if (-1 < (char)bVar4) {
            puVar16 = unaff_x24;
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x290);
          }
          param_1 = puVar6;
          _memchr(puVar6,0,puVar16);
          if ((param_1 != (undefined1 *)0x0) &&
             (puVar16 = param_1 + -(long)puVar6, puVar16 != (undefined *)0xffffffffffffffff)) {
            if ((char)bVar4 < '\0') {
              if (unaff_x25 < puVar16) goto LAB_10b2f3694;
              *(undefined **)((long)register0x00000008 + -0x288) = puVar16;
            }
            else {
              if (unaff_x24 < puVar16) goto LAB_10b2f3694;
              *(char *)((long)register0x00000008 + -0x279) = (char)puVar16;
              unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x290);
            }
            unaff_x23[(long)puVar16] = 0;
          }
          if (*(char *)((long)register0x00000008 + -0x299) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b0));
          }
          FUN_10b3258ac((undefined1 *)((long)register0x00000008 + -0x1c0),lVar19,0,1,
                        (undefined1 *)((long)register0x00000008 + -0x290),0,0);
          pbVar20 = *(byte **)((long)register0x00000008 + -0x368);
          unaff_x24 = (undefined *)0x8000000000000001;
          unaff_x25 = (undefined *)0x295e9648864000;
          if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
          }
          *(undefined8 *)((long)register0x00000008 + -0x288) = 0xaaaaaaaaaaaaaaaa;
          *(undefined8 *)((long)register0x00000008 + -0x280) = 0xaaaaaaaaaaaaaaaa;
          *(undefined8 *)((long)register0x00000008 + -0x290) = 0xaaaaaaaaaaaaaaaa;
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x290),
                        (undefined1 *)((long)register0x00000008 + -0x1c0));
          while( true ) {
            bVar4 = *(byte *)((long)register0x00000008 + -0x279);
            uVar18 = *(ulong *)((long)register0x00000008 + -0x288);
            if (-1 < (char)bVar4) {
              uVar18 = (ulong)bVar4;
            }
            if (uVar18 == 0) break;
            *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x208) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x210) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x200) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x228) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x230) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x218) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x220) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x248) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x250) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x238) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x240) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x268) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x270) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -600) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)((long)register0x00000008 + -0x260) = 0xaaaaaaaaaaaaaaaa;
            puVar9 = (undefined8 *)
                     (*(long *)((long)register0x00000008 + -0x1c0) +
                     *(long *)((long)register0x00000008 + -0x180) * 0xa8);
            uVar15 = *puVar9;
            *(undefined8 *)((long)register0x00000008 + -0x268) = puVar9[1];
            *(undefined8 *)((long)register0x00000008 + -0x270) = uVar15;
            uVar15 = puVar9[6];
            uVar22 = puVar9[9];
            uVar21 = puVar9[8];
            uVar26 = puVar9[3];
            uVar25 = puVar9[2];
            uVar24 = puVar9[5];
            uVar23 = puVar9[4];
            *(undefined8 *)((long)register0x00000008 + -0x238) = puVar9[7];
            *(undefined8 *)((long)register0x00000008 + -0x240) = uVar15;
            *(undefined8 *)((long)register0x00000008 + -0x228) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x230) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -600) = uVar26;
            *(undefined8 *)((long)register0x00000008 + -0x260) = uVar25;
            *(undefined8 *)((long)register0x00000008 + -0x248) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x250) = uVar23;
            uVar15 = puVar9[0xe];
            uVar22 = puVar9[0x11];
            uVar21 = puVar9[0x10];
            uVar26 = puVar9[0xb];
            uVar25 = puVar9[10];
            uVar24 = puVar9[0xd];
            uVar23 = puVar9[0xc];
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = puVar9[0xf];
            *(undefined8 *)((long)register0x00000008 + -0x200) = uVar15;
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar22;
            *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -0x218) = uVar26;
            *(undefined8 *)((long)register0x00000008 + -0x220) = uVar25;
            *(undefined8 *)((long)register0x00000008 + -0x208) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x210) = uVar23;
            if (*(char *)((long)puVar9 + 0xa7) < '\0') {
              func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1e0),puVar9[0x12],
                                  puVar9[0x13]);
              lVar17 = *(long *)((long)register0x00000008 + -0x240);
              uVar18 = 0;
              if (lVar17 != 0) goto LAB_10b2f3568;
LAB_10b2f359c:
              if (((long)uVar18 < (long)piVar11) &&
                 (FUN_10b3279f8((undefined1 *)((long)register0x00000008 + -0x290),0),
                 (*pbVar20 & 1) != 0)) {
                if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') goto LAB_10b2f3674;
                cVar3 = *(char *)((long)register0x00000008 + -0x279);
                while( true ) {
                  if (cVar3 < '\0') {
                    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
                  }
                  FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
                  uVar15 = 0;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                      *(long *)((long)register0x00000008 + -0x110)) break;
LAB_10b2f3670:
                  ___stack_chk_fail(uVar15);
LAB_10b2f3674:
                  __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
                  cVar3 = *(char *)((long)register0x00000008 + -0x279);
                }
                return;
              }
            }
            else {
              uVar21 = puVar9[0x13];
              uVar15 = puVar9[0x12];
              *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar9[0x14];
              *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar21;
              *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar15;
              lVar17 = *(long *)((long)register0x00000008 + -0x240);
              if (lVar17 == 0) {
                uVar18 = 0;
                goto LAB_10b2f359c;
              }
LAB_10b2f3568:
              if (lVar17 != 0x7fffffffffffffff) {
                uVar1 = lVar17 >> 0x3f ^ 0x7fffffffffffffff;
                if (SUB168(SEXT816(lVar17) * SEXT816(1000000),8) == lVar17 * 1000000 >> 0x3f) {
                  uVar1 = lVar17 * 1000000;
                }
                uVar18 = uVar1;
                if (1 < uVar1 + 0x8000000000000001) {
                  uVar18 = 0x7fffffffffffffff;
                  if (!SCARRY8(uVar1,0x295e9648864000)) {
                    uVar18 = uVar1 + 0x295e9648864000;
                  }
                }
                goto LAB_10b2f359c;
              }
            }
            if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
              FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                            (undefined1 *)((long)register0x00000008 + -0x1c0));
              cVar3 = *(char *)((long)register0x00000008 + -0x279);
            }
            else {
              FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                            (undefined1 *)((long)register0x00000008 + -0x1c0));
              cVar3 = *(char *)((long)register0x00000008 + -0x279);
            }
            if (cVar3 < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
            }
            *(undefined8 *)((long)register0x00000008 + -0x280) =
                 *(undefined8 *)((long)register0x00000008 + -0x260);
            *(undefined8 *)((long)register0x00000008 + -0x288) =
                 *(undefined8 *)((long)register0x00000008 + -0x268);
            *(undefined8 *)((long)register0x00000008 + -0x290) =
                 *(undefined8 *)((long)register0x00000008 + -0x270);
          }
          if ((char)bVar4 < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
            FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
            lVar19 = lVar19 + 0x18;
            if (lVar19 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
          }
          else {
            FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
            lVar19 = lVar19 + 0x18;
            if (lVar19 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
          }
        }
        FUN_10b2ecf74();
LAB_10b2f3694:
        func_0x000104c03f14();
        *(undefined1 **)((long)register0x00000008 + -0x3a0) = puVar6;
        *(long *)((long)register0x00000008 + -0x398) = lVar19;
        *(int **)((long)register0x00000008 + -0x390) = piVar11;
        *(undefined8 *)((long)register0x00000008 + -0x388) = 0x7fffffffffffffff;
        *(undefined1 **)((long)register0x00000008 + -0x380) =
             (undefined1 *)((long)register0x00000008 + -0xb0);
        *(code **)((long)register0x00000008 + -0x378) = FUN_10b2f3698;
        param_1[0x82] = 0;
        pbVar20 = param_1 + 0x80;
        do {
          bVar4 = *pbVar20;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar20,0x10);
          if (bVar5) {
            *pbVar20 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((bVar4 & 1) != 0) {
          for (lVar19 = *(long *)(param_1 + 0x58); lVar19 != *(long *)(param_1 + 0x50);
              lVar19 = lVar19 + -0x18) {
          }
          *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
          for (lVar19 = *(long *)(param_1 + 0x70); lVar19 != *(long *)(param_1 + 0x68);
              lVar19 = lVar19 + -0x18) {
          }
          *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
          param_1[0x81] = 0;
          return;
        }
        if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x70)) {
          return;
        }
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x380);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x378);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x390);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x388);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x3a0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x398);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
      } while( true );
    }
  }
  return;
}



/* Entry: 10b2f2ff4; end: 10b2f3207;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3724) */
/* WARNING: Removing unreachable block (ram,0x00010b2f36dc) */

void FUN_10b2f2ff4(undefined1 *param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar19;
  undefined8 unaff_x22;
  byte *pbVar20;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  do {
    plVar13 = (long *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c2cb24((undefined1 *)((long)register0x00000008 + -0xa0),&UNK_10f74420e,
                        &UNK_10f7441dc,0x9c);
    puVar6 = (undefined4 *)0x50;
    __Znwm();
    unaff_x25 = (undefined *)0x1;
    *puVar6 = 1;
    *(code **)(puVar6 + 2) = FUN_10b2f3cdc;
    *(undefined8 *)(puVar6 + 4) = 0x10b2f3d7c;
    unaff_x24 = &UNK_100142430;
    *(undefined **)(puVar6 + 6) = &UNK_100142430;
    *(code **)(puVar6 + 8) = FUN_10b2f3208;
    *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_1 + 0x48);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(puVar6 + 0xc) = uVar15;
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(puVar6 + 0x10) = uVar15;
    *(undefined1 **)(puVar6 + 0x12) = param_1 + 0x80;
    puVar7 = (undefined4 *)0x38;
    __Znwm();
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_10b2f3df4;
    *(undefined8 *)(puVar7 + 4) = 0x10b2f3e10;
    *(undefined **)(puVar7 + 6) = &UNK_100142430;
    *(code **)(puVar7 + 8) = FUN_10b2f3698;
    *(undefined8 *)(puVar7 + 10) = 0;
    *(undefined1 **)(puVar7 + 0xc) = param_1;
    puVar8 = (undefined8 *)0x8;
    __Znwm();
    *puVar8 = 0;
    puVar9 = (undefined4 *)0x38;
    __Znwm();
    *puVar9 = 1;
    *(code **)(puVar9 + 2) = FUN_10b2f3f10;
    *(code **)(puVar9 + 4) = FUN_10b2f3f64;
    *(undefined **)(puVar9 + 6) = &UNK_100142430;
    *(code **)(puVar9 + 8) = FUN_10b2f3e1c;
    *(undefined4 **)(puVar9 + 10) = puVar6;
    *(undefined8 **)(puVar9 + 0xc) = puVar8;
    puVar6 = (undefined4 *)0x38;
    __Znwm();
    *puVar6 = 1;
    *(code **)(puVar6 + 2) = FUN_10b2f3fb4;
    *(code **)(puVar6 + 4) = FUN_10b2f4008;
    *(undefined **)(puVar6 + 6) = &UNK_100142430;
    *(code **)(puVar6 + 8) = FUN_10b2f3eb0;
    *(undefined4 **)(puVar6 + 10) = puVar7;
    *(undefined8 **)(puVar6 + 0xc) = puVar8;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110cd5b40;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x5f) = 0x1008000;
    *(undefined2 *)((long)register0x00000008 + -0x5b) = 0;
    *(undefined4 **)((long)register0x00000008 + -0x80) = puVar6;
    *(undefined4 **)((long)register0x00000008 + -0x78) = puVar9;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x78);
    func_0x000107c2ce14();
    piVar11 = *(int **)((long)register0x00000008 + -0x80);
    if (piVar11 != (int *)0x0) {
      do {
        iVar2 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piVar11 + 4))();
      }
    }
    piVar11 = *(int **)((long)register0x00000008 + -0x78);
    if (piVar11 != (int *)0x0) {
      do {
        iVar2 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piVar11 + 4))();
      }
    }
    param_1[0x82] = (char)puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0xf8) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 1;
    *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_100142430;
    *(undefined4 **)((long)register0x00000008 + -0xd8) = puVar9;
    *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar8;
    *(undefined4 **)((long)register0x00000008 + -200) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar10;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10b2f3208;
    *(undefined8 *)((long)register0x00000008 + -0x110) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar19 = *plVar13;
    lVar17 = plVar13[1];
    *(long *)((long)register0x00000008 + -0x370) = lVar17;
    if (lVar19 == lVar17) {
LAB_10b2f3654:
      uVar15 = 1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x110))
      goto LAB_10b2f3670;
      return;
    }
    unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x270);
    *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x308) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x310) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x300) = 0xaaaaaaaaaaaaaaaa;
    unaff_x26 = 0xaaaaaaaaaaaaaaaa;
    unaff_x28 = 0xa8;
    *(undefined8 *)((long)register0x00000008 + -0x328) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x330) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x318) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -800) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x348) = 0xaaaaaaaaffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x350) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x338) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x340) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x360) = 0xaaaaaaaaaaaaaaaa;
    *(undefined1 **)((long)register0x00000008 + -0x368) = puVar14;
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x138) =
           *(undefined8 *)((long)register0x00000008 + -0x2b8);
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0x2c0);
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           *(undefined8 *)((long)register0x00000008 + -0x2d0);
      *(undefined8 *)((long)register0x00000008 + -0x118) =
           *(undefined8 *)((long)register0x00000008 + -0x2d8);
      *(undefined8 *)((long)register0x00000008 + -0x120) =
           *(undefined8 *)((long)register0x00000008 + -0x2e0);
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)((long)register0x00000008 + -0x2e8);
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)((long)register0x00000008 + -0x2f0);
      *(undefined8 *)((long)register0x00000008 + -0x168) =
           *(undefined8 *)((long)register0x00000008 + -0x2f8);
      *(undefined8 *)((long)register0x00000008 + -0x170) =
           *(undefined8 *)((long)register0x00000008 + -0x300);
      *(undefined8 *)((long)register0x00000008 + -0x158) =
           *(undefined8 *)((long)register0x00000008 + -0x318);
      *(undefined8 *)((long)register0x00000008 + -0x160) =
           *(undefined8 *)((long)register0x00000008 + -800);
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0x308);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)((long)register0x00000008 + -0x310);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x328);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x330);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x338);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x340);
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x358);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x360);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x348);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -0x350);
      *(undefined **)((long)register0x00000008 + -0x270) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x268) = 1;
      *(undefined **)((long)register0x00000008 + -0x260) = &UNK_10f7456b9;
      *(undefined8 *)((long)register0x00000008 + -600) = 0x15;
      *(undefined **)((long)register0x00000008 + -0x250) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 1;
      *(char **)((long)register0x00000008 + -0x240) = "*";
      *(undefined8 *)((long)register0x00000008 + -0x238) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      param_1 = (undefined1 *)((long)register0x00000008 + -0x290);
      func_0x000107c2cc20(param_1,4,(undefined1 *)((long)register0x00000008 + -0x270));
      *(undefined8 *)((long)register0x00000008 + -0x2a0) =
           *(undefined8 *)((long)register0x00000008 + -0x280);
      *(undefined8 *)((long)register0x00000008 + -0x2a8) =
           *(undefined8 *)((long)register0x00000008 + -0x288);
      *(undefined8 *)((long)register0x00000008 + -0x2b0) =
           *(undefined8 *)((long)register0x00000008 + -0x290);
      cVar4 = *(char *)((long)register0x00000008 + -0x299);
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x2b0);
      if (-1 < (long)cVar4) {
        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2b0);
      }
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x2a8);
      if (-1 < cVar4) {
        puVar10 = (undefined1 *)(long)cVar4;
      }
      if ((undefined1 *)0x7ffffffffffffff7 < puVar10) break;
      if (puVar10 < (undefined1 *)0x17) {
        *(char *)((long)register0x00000008 + -0x279) = (char)puVar10;
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x290);
        if (puVar10 != (undefined1 *)0x0) goto LAB_10b2f33a8;
      }
      else {
        puVar14 = (undefined1 *)0x19;
        if (((ulong)puVar10 | 7) != 0x17) {
          puVar14 = (undefined1 *)(((ulong)puVar10 | 7) + 1);
        }
        puVar12 = puVar14;
        __Znwm();
        *(undefined1 **)((long)register0x00000008 + -0x288) = puVar10;
        *(ulong *)((long)register0x00000008 + -0x280) = (ulong)puVar14 | 0x8000000000000000;
        *(undefined1 **)((long)register0x00000008 + -0x290) = puVar12;
LAB_10b2f33a8:
        _memmove(puVar12,unaff_x23,puVar10);
      }
      puVar12[(long)puVar10] = 0;
      bVar3 = *(byte *)((long)register0x00000008 + -0x279);
      unaff_x24 = (undefined *)(ulong)bVar3;
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x290);
      unaff_x25 = *(undefined **)((long)register0x00000008 + -0x288);
      puVar16 = unaff_x25;
      puVar10 = unaff_x23;
      if (-1 < (char)bVar3) {
        puVar16 = unaff_x24;
        puVar10 = (undefined1 *)((long)register0x00000008 + -0x290);
      }
      param_1 = puVar10;
      _memchr(puVar10,0,puVar16);
      if ((param_1 != (undefined1 *)0x0) &&
         (puVar16 = param_1 + -(long)puVar10, puVar16 != (undefined *)0xffffffffffffffff)) {
        if ((char)bVar3 < '\0') {
          if (unaff_x25 < puVar16) goto LAB_10b2f3694;
          *(undefined **)((long)register0x00000008 + -0x288) = puVar16;
        }
        else {
          if (unaff_x24 < puVar16) goto LAB_10b2f3694;
          *(char *)((long)register0x00000008 + -0x279) = (char)puVar16;
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x290);
        }
        unaff_x23[(long)puVar16] = 0;
      }
      if (*(char *)((long)register0x00000008 + -0x299) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b0));
      }
      FUN_10b3258ac((undefined1 *)((long)register0x00000008 + -0x1c0),lVar19,0,1,
                    (undefined1 *)((long)register0x00000008 + -0x290),0,0);
      pbVar20 = *(byte **)((long)register0x00000008 + -0x368);
      unaff_x24 = (undefined *)0x8000000000000001;
      unaff_x25 = (undefined *)0x295e9648864000;
      if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
      }
      *(undefined8 *)((long)register0x00000008 + -0x288) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x290) = 0xaaaaaaaaaaaaaaaa;
      FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x290),
                    (undefined1 *)((long)register0x00000008 + -0x1c0));
      while( true ) {
        bVar3 = *(byte *)((long)register0x00000008 + -0x279);
        uVar18 = *(ulong *)((long)register0x00000008 + -0x288);
        if (-1 < (char)bVar3) {
          uVar18 = (ulong)bVar3;
        }
        if (uVar18 == 0) break;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x220) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x248) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x250) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x238) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x240) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -600) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0xaaaaaaaaaaaaaaaa;
        puVar8 = (undefined8 *)
                 (*(long *)((long)register0x00000008 + -0x1c0) +
                 *(long *)((long)register0x00000008 + -0x180) * 0xa8);
        uVar15 = *puVar8;
        *(undefined8 *)((long)register0x00000008 + -0x268) = puVar8[1];
        *(undefined8 *)((long)register0x00000008 + -0x270) = uVar15;
        uVar15 = puVar8[6];
        uVar22 = puVar8[9];
        uVar21 = puVar8[8];
        uVar26 = puVar8[3];
        uVar25 = puVar8[2];
        uVar24 = puVar8[5];
        uVar23 = puVar8[4];
        *(undefined8 *)((long)register0x00000008 + -0x238) = puVar8[7];
        *(undefined8 *)((long)register0x00000008 + -0x240) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x228) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x230) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -600) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x248) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x250) = uVar23;
        uVar15 = puVar8[0xe];
        uVar22 = puVar8[0x11];
        uVar21 = puVar8[0x10];
        uVar26 = puVar8[0xb];
        uVar25 = puVar8[10];
        uVar24 = puVar8[0xd];
        uVar23 = puVar8[0xc];
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = puVar8[0xf];
        *(undefined8 *)((long)register0x00000008 + -0x200) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x218) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x220) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x208) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar23;
        if (*(char *)((long)puVar8 + 0xa7) < '\0') {
          func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1e0),puVar8[0x12],
                              puVar8[0x13]);
          lVar17 = *(long *)((long)register0x00000008 + -0x240);
          uVar18 = 0;
          if (lVar17 != 0) goto LAB_10b2f3568;
LAB_10b2f359c:
          if (((long)uVar18 < (long)piVar11) &&
             (FUN_10b3279f8((undefined1 *)((long)register0x00000008 + -0x290),0),
             (*pbVar20 & 1) != 0)) {
            if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') goto LAB_10b2f3674;
            cVar4 = *(char *)((long)register0x00000008 + -0x279);
            while( true ) {
              if (cVar4 < '\0') {
                __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
              }
              FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
              uVar15 = 0;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                  *(long *)((long)register0x00000008 + -0x110)) break;
LAB_10b2f3670:
              ___stack_chk_fail(uVar15);
LAB_10b2f3674:
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
              cVar4 = *(char *)((long)register0x00000008 + -0x279);
            }
            return;
          }
        }
        else {
          uVar21 = puVar8[0x13];
          uVar15 = puVar8[0x12];
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar8[0x14];
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar15;
          lVar17 = *(long *)((long)register0x00000008 + -0x240);
          if (lVar17 == 0) {
            uVar18 = 0;
            goto LAB_10b2f359c;
          }
LAB_10b2f3568:
          if (lVar17 != 0x7fffffffffffffff) {
            uVar1 = lVar17 >> 0x3f ^ 0x7fffffffffffffff;
            if (SUB168(SEXT816(lVar17) * SEXT816(1000000),8) == lVar17 * 1000000 >> 0x3f) {
              uVar1 = lVar17 * 1000000;
            }
            uVar18 = uVar1;
            if (1 < uVar1 + 0x8000000000000001) {
              uVar18 = 0x7fffffffffffffff;
              if (!SCARRY8(uVar1,0x295e9648864000)) {
                uVar18 = uVar1 + 0x295e9648864000;
              }
            }
            goto LAB_10b2f359c;
          }
        }
        if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                        (undefined1 *)((long)register0x00000008 + -0x1c0));
          cVar4 = *(char *)((long)register0x00000008 + -0x279);
        }
        else {
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                        (undefined1 *)((long)register0x00000008 + -0x1c0));
          cVar4 = *(char *)((long)register0x00000008 + -0x279);
        }
        if (cVar4 < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) =
             *(undefined8 *)((long)register0x00000008 + -0x260);
        *(undefined8 *)((long)register0x00000008 + -0x288) =
             *(undefined8 *)((long)register0x00000008 + -0x268);
        *(undefined8 *)((long)register0x00000008 + -0x290) =
             *(undefined8 *)((long)register0x00000008 + -0x270);
      }
      if ((char)bVar3 < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
        lVar19 = lVar19 + 0x18;
        if (lVar19 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
      }
      else {
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
        lVar19 = lVar19 + 0x18;
        if (lVar19 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
      }
    }
    FUN_10b2ecf74();
LAB_10b2f3694:
    func_0x000104c03f14();
    *(undefined1 **)((long)register0x00000008 + -0x3a0) = puVar10;
    *(long *)((long)register0x00000008 + -0x398) = lVar19;
    *(int **)((long)register0x00000008 + -0x390) = piVar11;
    *(undefined8 *)((long)register0x00000008 + -0x388) = 0x7fffffffffffffff;
    *(undefined1 **)((long)register0x00000008 + -0x380) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(code **)((long)register0x00000008 + -0x378) = FUN_10b2f3698;
    param_1[0x82] = 0;
    pbVar20 = param_1 + 0x80;
    do {
      bVar3 = *pbVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar20,0x10);
      if (bVar5) {
        *pbVar20 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar3 & 1) != 0) {
      for (lVar19 = *(long *)(param_1 + 0x58); lVar19 != *(long *)(param_1 + 0x50);
          lVar19 = lVar19 + -0x18) {
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
      for (lVar19 = *(long *)(param_1 + 0x70); lVar19 != *(long *)(param_1 + 0x68);
          lVar19 = lVar19 + -0x18) {
      }
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
      param_1[0x81] = 0;
      return;
    }
    if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x70)) {
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x380);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x378);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x390);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x388);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x3a0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x398);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
  } while( true );
}



/* Entry: 10b2f3208; end: 10b2f3697;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3724) */
/* WARNING: Removing unreachable block (ram,0x00010b2f36dc) */

void FUN_10b2f3208(int *param_1,long *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined4 *unaff_x21;
  long lVar15;
  undefined8 *unaff_x22;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined4 *unaff_x23;
  undefined1 *puVar18;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined4 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined4 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = *param_2;
    lVar13 = param_2[1];
    *(long *)((long)register0x00000008 + -0x2d0) = lVar13;
    if (lVar15 == lVar13) {
LAB_10b2f3654:
      uVar10 = 1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70))
      goto LAB_10b2f3670;
      return;
    }
    unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x220) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x248) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -600) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0xaaaaaaaaaaaaaaaa;
    unaff_x26 = 0xaaaaaaaaaaaaaaaa;
    unaff_x28 = 0xa8;
    *(undefined8 *)((long)register0x00000008 + -0x288) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x290) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0xaaaaaaaaffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined1 **)((long)register0x00000008 + -0x2c8) = param_3;
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x228);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x230);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x238);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x240);
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x248);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0x250);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -600);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0x260);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0x278);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x280);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0x268);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x270);
      *(undefined8 *)((long)register0x00000008 + -0x118) =
           *(undefined8 *)((long)register0x00000008 + -0x288);
      *(undefined8 *)((long)register0x00000008 + -0x120) =
           *(undefined8 *)((long)register0x00000008 + -0x290);
      *(undefined8 *)((long)register0x00000008 + -0x108) =
           *(undefined8 *)((long)register0x00000008 + -0x298);
      *(undefined8 *)((long)register0x00000008 + -0x110) =
           *(undefined8 *)((long)register0x00000008 + -0x2a0);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0x2b8);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x2c0);
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0x2a8);
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0x2b0);
      *(undefined **)((long)register0x00000008 + -0x1d0) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = 1;
      *(undefined **)((long)register0x00000008 + -0x1c0) = &UNK_10f7456b9;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x15;
      *(undefined **)((long)register0x00000008 + -0x1b0) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 1;
      *(char **)((long)register0x00000008 + -0x1a0) = "*";
      *(undefined8 *)((long)register0x00000008 + -0x198) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x1f0);
      func_0x000107c2cc20(unaff_x19,4,(undefined1 *)((long)register0x00000008 + -0x1d0));
      *(undefined8 *)((long)register0x00000008 + -0x200) =
           *(undefined8 *)((long)register0x00000008 + -0x1e0);
      *(undefined8 *)((long)register0x00000008 + -0x208) =
           *(undefined8 *)((long)register0x00000008 + -0x1e8);
      *(undefined8 *)((long)register0x00000008 + -0x210) =
           *(undefined8 *)((long)register0x00000008 + -0x1f0);
      cVar5 = *(char *)((long)register0x00000008 + -0x1f9);
      puVar18 = *(undefined1 **)((long)register0x00000008 + -0x210);
      if (-1 < (long)cVar5) {
        puVar18 = (undefined1 *)((long)register0x00000008 + -0x210);
      }
      puVar17 = *(undefined1 **)((long)register0x00000008 + -0x208);
      if (-1 < cVar5) {
        puVar17 = (undefined1 *)(long)cVar5;
      }
      if ((undefined1 *)0x7ffffffffffffff7 < puVar17) break;
      if (puVar17 < (undefined1 *)0x17) {
        *(char *)((long)register0x00000008 + -0x1d9) = (char)puVar17;
        puVar9 = (undefined1 *)((long)register0x00000008 + -0x1f0);
        if (puVar17 != (undefined1 *)0x0) goto LAB_10b2f33a8;
      }
      else {
        puVar2 = (undefined1 *)0x19;
        if (((ulong)puVar17 | 7) != 0x17) {
          puVar2 = (undefined1 *)(((ulong)puVar17 | 7) + 1);
        }
        puVar9 = puVar2;
        __Znwm();
        *(undefined1 **)((long)register0x00000008 + -0x1e8) = puVar17;
        *(ulong *)((long)register0x00000008 + -0x1e0) = (ulong)puVar2 | 0x8000000000000000;
        *(undefined1 **)((long)register0x00000008 + -0x1f0) = puVar9;
LAB_10b2f33a8:
        _memmove(puVar9,puVar18,puVar17);
      }
      puVar9[(long)puVar17] = 0;
      bVar4 = *(byte *)((long)register0x00000008 + -0x1d9);
      unaff_x24 = (undefined *)(ulong)bVar4;
      puVar18 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
      unaff_x25 = *(undefined **)((long)register0x00000008 + -0x1e8);
      puVar11 = unaff_x25;
      puVar17 = puVar18;
      if (-1 < (char)bVar4) {
        puVar11 = unaff_x24;
        puVar17 = (undefined1 *)((long)register0x00000008 + -0x1f0);
      }
      unaff_x19 = puVar17;
      _memchr(puVar17,0,puVar11);
      if ((unaff_x19 != (undefined1 *)0x0) &&
         (puVar11 = unaff_x19 + -(long)puVar17, puVar11 != (undefined *)0xffffffffffffffff)) {
        if ((char)bVar4 < '\0') {
          if (unaff_x25 < puVar11) goto LAB_10b2f3694;
          *(undefined **)((long)register0x00000008 + -0x1e8) = puVar11;
        }
        else {
          if (unaff_x24 < puVar11) goto LAB_10b2f3694;
          *(char *)((long)register0x00000008 + -0x1d9) = (char)puVar11;
          puVar18 = (undefined1 *)((long)register0x00000008 + -0x1f0);
        }
        puVar18[(long)puVar11] = 0;
      }
      if (*(char *)((long)register0x00000008 + -0x1f9) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x210));
      }
      FUN_10b3258ac((undefined1 *)((long)register0x00000008 + -0x120),lVar15,0,1,
                    (undefined1 *)((long)register0x00000008 + -0x1f0),0,0);
      pbVar16 = *(byte **)((long)register0x00000008 + -0x2c8);
      unaff_x24 = (undefined *)0x8000000000000001;
      unaff_x25 = (undefined *)0x295e9648864000;
      if (*(char *)((long)register0x00000008 + -0x1d9) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
      }
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0xaaaaaaaaaaaaaaaa;
      FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x1f0),
                    (undefined1 *)((long)register0x00000008 + -0x120));
      while( true ) {
        bVar4 = *(byte *)((long)register0x00000008 + -0x1d9);
        uVar14 = *(ulong *)((long)register0x00000008 + -0x1e8);
        if (-1 < (char)bVar4) {
          uVar14 = (ulong)bVar4;
        }
        if (uVar14 == 0) break;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x188) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -400) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x198) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0xaaaaaaaaaaaaaaaa;
        puVar12 = (undefined8 *)
                  (*(long *)((long)register0x00000008 + -0x120) +
                  *(long *)((long)register0x00000008 + -0xe0) * 0xa8);
        uVar10 = *puVar12;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = puVar12[1];
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar10;
        uVar10 = puVar12[6];
        uVar20 = puVar12[9];
        uVar19 = puVar12[8];
        uVar24 = puVar12[3];
        uVar23 = puVar12[2];
        uVar22 = puVar12[5];
        uVar21 = puVar12[4];
        *(undefined8 *)((long)register0x00000008 + -0x198) = puVar12[7];
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0x188) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -400) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar21;
        uVar10 = puVar12[0xe];
        uVar20 = puVar12[0x11];
        uVar19 = puVar12[0x10];
        uVar24 = puVar12[0xb];
        uVar23 = puVar12[10];
        uVar22 = puVar12[0xd];
        uVar21 = puVar12[0xc];
        *(undefined8 *)((long)register0x00000008 + -0x158) = puVar12[0xf];
        *(undefined8 *)((long)register0x00000008 + -0x160) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0x148) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x150) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x178) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x180) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x168) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar21;
        if (*(char *)((long)puVar12 + 0xa7) < '\0') {
          func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x140),puVar12[0x12],
                              puVar12[0x13]);
          lVar13 = *(long *)((long)register0x00000008 + -0x1a0);
          uVar14 = 0;
          if (lVar13 != 0) goto LAB_10b2f3568;
LAB_10b2f359c:
          if (((long)uVar14 < (long)param_1) &&
             (FUN_10b3279f8((undefined1 *)((long)register0x00000008 + -0x1f0),0),
             (*pbVar16 & 1) != 0)) {
            if (*(char *)((long)register0x00000008 + -0x129) < '\0') goto LAB_10b2f3674;
            cVar5 = *(char *)((long)register0x00000008 + -0x1d9);
            while( true ) {
              if (cVar5 < '\0') {
                __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
              }
              FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x120));
              uVar10 = 0;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                  *(long *)((long)register0x00000008 + -0x70)) break;
LAB_10b2f3670:
              ___stack_chk_fail(uVar10);
LAB_10b2f3674:
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
              cVar5 = *(char *)((long)register0x00000008 + -0x1d9);
            }
            return;
          }
        }
        else {
          uVar19 = puVar12[0x13];
          uVar10 = puVar12[0x12];
          *(undefined8 *)((long)register0x00000008 + -0x130) = puVar12[0x14];
          *(undefined8 *)((long)register0x00000008 + -0x138) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar10;
          lVar13 = *(long *)((long)register0x00000008 + -0x1a0);
          if (lVar13 == 0) {
            uVar14 = 0;
            goto LAB_10b2f359c;
          }
LAB_10b2f3568:
          if (lVar13 != 0x7fffffffffffffff) {
            uVar1 = lVar13 >> 0x3f ^ 0x7fffffffffffffff;
            if (SUB168(SEXT816(lVar13) * SEXT816(1000000),8) == lVar13 * 1000000 >> 0x3f) {
              uVar1 = lVar13 * 1000000;
            }
            uVar14 = uVar1;
            if (1 < uVar1 + 0x8000000000000001) {
              uVar14 = 0x7fffffffffffffff;
              if (!SCARRY8(uVar1,0x295e9648864000)) {
                uVar14 = uVar1 + 0x295e9648864000;
              }
            }
            goto LAB_10b2f359c;
          }
        }
        if (*(char *)((long)register0x00000008 + -0x129) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x140));
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x1d0),
                        (undefined1 *)((long)register0x00000008 + -0x120));
          cVar5 = *(char *)((long)register0x00000008 + -0x1d9);
        }
        else {
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x1d0),
                        (undefined1 *)((long)register0x00000008 + -0x120));
          cVar5 = *(char *)((long)register0x00000008 + -0x1d9);
        }
        if (cVar5 < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
        }
        *(undefined8 *)((long)register0x00000008 + -0x1e0) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x1e8) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
      }
      if ((char)bVar4 < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1f0));
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x120));
        lVar15 = lVar15 + 0x18;
        if (lVar15 == *(long *)((long)register0x00000008 + -0x2d0)) goto LAB_10b2f3654;
      }
      else {
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x120));
        lVar15 = lVar15 + 0x18;
        if (lVar15 == *(long *)((long)register0x00000008 + -0x2d0)) goto LAB_10b2f3654;
      }
    }
    FUN_10b2ecf74();
LAB_10b2f3694:
    func_0x000104c03f14();
    *(undefined1 **)((long)register0x00000008 + -0x300) = puVar17;
    *(long *)((long)register0x00000008 + -0x2f8) = lVar15;
    *(int **)((long)register0x00000008 + -0x2f0) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0x7fffffffffffffff;
    *(undefined1 **)((long)register0x00000008 + -0x2e0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x2d8) = FUN_10b2f3698;
    unaff_x19[0x82] = 0;
    pbVar16 = unaff_x19 + 0x80;
    do {
      bVar4 = *pbVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar16,0x10);
      if (bVar6) {
        *pbVar16 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((bVar4 & 1) != 0) {
      for (lVar15 = *(long *)(unaff_x19 + 0x58); lVar15 != *(long *)(unaff_x19 + 0x50);
          lVar15 = lVar15 + -0x18) {
      }
      *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x19 + 0x50);
      for (lVar15 = *(long *)(unaff_x19 + 0x70); lVar15 != *(long *)(unaff_x19 + 0x68);
          lVar15 = lVar15 + -0x18) {
      }
      *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x68);
      unaff_x19[0x81] = 0;
      return;
    }
    if (*(long *)(unaff_x19 + 0x68) == *(long *)(unaff_x19 + 0x70)) {
      return;
    }
    param_2 = (long *)((long)register0x00000008 + -0x370);
    *(undefined8 *)((long)register0x00000008 + -800) = 0xaaaaaaaaaaaaaaaa;
    *(undefined **)((long)register0x00000008 + -0x318) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x310) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x308) = puVar18;
    *(undefined8 *)((long)register0x00000008 + -0x300) =
         *(undefined8 *)((long)register0x00000008 + -0x300);
    *(undefined8 *)((long)register0x00000008 + -0x2f8) =
         *(undefined8 *)((long)register0x00000008 + -0x2f8);
    *(undefined8 *)((long)register0x00000008 + -0x2f0) =
         *(undefined8 *)((long)register0x00000008 + -0x2f0);
    *(undefined8 *)((long)register0x00000008 + -0x2e8) =
         *(undefined8 *)((long)register0x00000008 + -0x2e8);
    *(undefined8 *)((long)register0x00000008 + -0x2e0) =
         *(undefined8 *)((long)register0x00000008 + -0x2e0);
    *(undefined8 *)((long)register0x00000008 + -0x2d8) =
         *(undefined8 *)((long)register0x00000008 + -0x2d8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2e0);
    *(undefined8 *)((long)register0x00000008 + -0x328) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c2cb24((undefined1 *)((long)register0x00000008 + -0x370),&UNK_10f74420e,
                        &UNK_10f7441dc,0x9c);
    puVar7 = (undefined4 *)0x50;
    __Znwm();
    unaff_x25 = (undefined *)0x1;
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_10b2f3cdc;
    *(undefined8 *)(puVar7 + 4) = 0x10b2f3d7c;
    unaff_x24 = &UNK_100142430;
    *(undefined **)(puVar7 + 6) = &UNK_100142430;
    *(code **)(puVar7 + 8) = FUN_10b2f3208;
    *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(unaff_x19 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(puVar7 + 0xc) = uVar10;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(puVar7 + 0x10) = uVar10;
    *(undefined1 **)(puVar7 + 0x12) = unaff_x19 + 0x80;
    unaff_x21 = (undefined4 *)0x38;
    __Znwm();
    *unaff_x21 = 1;
    *(code **)(unaff_x21 + 2) = FUN_10b2f3df4;
    *(undefined8 *)(unaff_x21 + 4) = 0x10b2f3e10;
    *(undefined **)(unaff_x21 + 6) = &UNK_100142430;
    *(code **)(unaff_x21 + 8) = FUN_10b2f3698;
    *(undefined8 *)(unaff_x21 + 10) = 0;
    *(undefined1 **)(unaff_x21 + 0xc) = unaff_x19;
    unaff_x22 = (undefined8 *)0x8;
    __Znwm();
    *unaff_x22 = 0;
    unaff_x23 = (undefined4 *)0x38;
    __Znwm();
    *unaff_x23 = 1;
    *(code **)(unaff_x23 + 2) = FUN_10b2f3f10;
    *(code **)(unaff_x23 + 4) = FUN_10b2f3f64;
    *(undefined **)(unaff_x23 + 6) = &UNK_100142430;
    *(code **)(unaff_x23 + 8) = FUN_10b2f3e1c;
    *(undefined4 **)(unaff_x23 + 10) = puVar7;
    *(undefined8 **)(unaff_x23 + 0xc) = unaff_x22;
    puVar7 = (undefined4 *)0x38;
    __Znwm();
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_10b2f3fb4;
    *(code **)(puVar7 + 4) = FUN_10b2f4008;
    *(undefined **)(puVar7 + 6) = &UNK_100142430;
    *(code **)(puVar7 + 8) = FUN_10b2f3eb0;
    *(undefined4 **)(puVar7 + 10) = unaff_x21;
    *(undefined8 **)(puVar7 + 0xc) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x340) = &PTR_DAT_110cd5b40;
    *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x330) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x32f) = 0x1008000;
    *(undefined2 *)((long)register0x00000008 + -0x32b) = 0;
    *(undefined4 **)((long)register0x00000008 + -0x350) = puVar7;
    *(undefined4 **)((long)register0x00000008 + -0x348) = unaff_x23;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x340);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x348);
    func_0x000107c2ce14();
    piVar8 = *(int **)((long)register0x00000008 + -0x350);
    if (piVar8 != (int *)0x0) {
      do {
        iVar3 = *piVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar6) {
          *piVar8 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        (**(code **)(piVar8 + 4))();
      }
    }
    param_1 = *(int **)((long)register0x00000008 + -0x348);
    if (param_1 != (int *)0x0) {
      do {
        iVar3 = *param_1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        (**(code **)(param_1 + 4))();
      }
    }
    unaff_x19[0x82] = (char)unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x328)) {
      return;
    }
    unaff_x30 = FUN_10b2f3208;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
  } while( true );
}



/* Entry: 10b2f3698; end: 10b2f3747;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3724) */
/* WARNING: Removing unreachable block (ram,0x00010b2f36dc) */

void FUN_10b2f3698(undefined1 *param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long lVar17;
  byte *pbVar18;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  do {
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1[0x82] = 0;
    pbVar18 = param_1 + 0x80;
    do {
      bVar3 = *pbVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar18,0x10);
      if (bVar5) {
        *pbVar18 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar3 & 1) != 0) {
      for (lVar17 = *(long *)(param_1 + 0x58); lVar17 != *(long *)(param_1 + 0x50);
          lVar17 = lVar17 + -0x18) {
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
      for (lVar17 = *(long *)(param_1 + 0x70); lVar17 != *(long *)(param_1 + 0x68);
          lVar17 = lVar17 + -0x18) {
      }
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
      param_1[0x81] = 0;
      return;
    }
    if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x70)) {
      return;
    }
    plVar13 = (long *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c2cb24((undefined1 *)((long)register0x00000008 + -0xa0),&UNK_10f74420e,
                        &UNK_10f7441dc,0x9c);
    puVar6 = (undefined4 *)0x50;
    __Znwm();
    unaff_x25 = (undefined *)0x1;
    *puVar6 = 1;
    *(code **)(puVar6 + 2) = FUN_10b2f3cdc;
    *(undefined8 *)(puVar6 + 4) = 0x10b2f3d7c;
    unaff_x24 = &UNK_100142430;
    *(undefined **)(puVar6 + 6) = &UNK_100142430;
    *(code **)(puVar6 + 8) = FUN_10b2f3208;
    *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_1 + 0x48);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(puVar6 + 0xc) = uVar14;
    uVar14 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(puVar6 + 0x10) = uVar14;
    *(undefined1 **)(puVar6 + 0x12) = param_1 + 0x80;
    puVar7 = (undefined4 *)0x38;
    __Znwm();
    *puVar7 = 1;
    *(code **)(puVar7 + 2) = FUN_10b2f3df4;
    *(undefined8 *)(puVar7 + 4) = 0x10b2f3e10;
    *(undefined **)(puVar7 + 6) = &UNK_100142430;
    *(code **)(puVar7 + 8) = FUN_10b2f3698;
    *(undefined8 *)(puVar7 + 10) = 0;
    *(undefined1 **)(puVar7 + 0xc) = param_1;
    puVar8 = (undefined8 *)0x8;
    __Znwm();
    *puVar8 = 0;
    puVar9 = (undefined4 *)0x38;
    __Znwm();
    *puVar9 = 1;
    *(code **)(puVar9 + 2) = FUN_10b2f3f10;
    *(code **)(puVar9 + 4) = FUN_10b2f3f64;
    *(undefined **)(puVar9 + 6) = &UNK_100142430;
    *(code **)(puVar9 + 8) = FUN_10b2f3e1c;
    *(undefined4 **)(puVar9 + 10) = puVar6;
    *(undefined8 **)(puVar9 + 0xc) = puVar8;
    puVar6 = (undefined4 *)0x38;
    __Znwm();
    *puVar6 = 1;
    *(code **)(puVar6 + 2) = FUN_10b2f3fb4;
    *(code **)(puVar6 + 4) = FUN_10b2f4008;
    *(undefined **)(puVar6 + 6) = &UNK_100142430;
    *(code **)(puVar6 + 8) = FUN_10b2f3eb0;
    *(undefined4 **)(puVar6 + 10) = puVar7;
    *(undefined8 **)(puVar6 + 0xc) = puVar8;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110cd5b40;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x5f) = 0x1008000;
    *(undefined2 *)((long)register0x00000008 + -0x5b) = 0;
    *(undefined4 **)((long)register0x00000008 + -0x80) = puVar6;
    *(undefined4 **)((long)register0x00000008 + -0x78) = puVar9;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x78);
    func_0x000107c2ce14();
    piVar11 = *(int **)((long)register0x00000008 + -0x80);
    if (piVar11 != (int *)0x0) {
      do {
        iVar2 = *piVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piVar11 + 4))();
      }
    }
    unaff_x20 = *(int **)((long)register0x00000008 + -0x78);
    if (unaff_x20 != (int *)0x0) {
      do {
        iVar2 = *unaff_x20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar5) {
          *unaff_x20 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(unaff_x20 + 4))();
      }
    }
    param_1[0x82] = (char)puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0xf8) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 1;
    *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_100142430;
    *(undefined4 **)((long)register0x00000008 + -0xd8) = puVar9;
    *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar8;
    *(undefined4 **)((long)register0x00000008 + -200) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar10;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10b2f3208;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x110) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = *plVar13;
    lVar17 = plVar13[1];
    *(long *)((long)register0x00000008 + -0x370) = lVar17;
    if (unaff_x21 == lVar17) {
LAB_10b2f3654:
      uVar14 = 1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x110))
      goto LAB_10b2f3670;
      return;
    }
    unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x270);
    *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x308) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x310) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x300) = 0xaaaaaaaaaaaaaaaa;
    unaff_x26 = 0xaaaaaaaaaaaaaaaa;
    unaff_x28 = 0xa8;
    *(undefined8 *)((long)register0x00000008 + -0x328) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x330) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x318) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -800) = 0xaaaaaaaaaaaaaaaa;
    unaff_x19 = 0x7fffffffffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x348) = 0xaaaaaaaaffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x350) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x338) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x340) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0xaaaaaaaaaaaaaaaa;
    *(undefined8 *)((long)register0x00000008 + -0x360) = 0xaaaaaaaaaaaaaaaa;
    *(undefined1 **)((long)register0x00000008 + -0x368) = puVar12;
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x138) =
           *(undefined8 *)((long)register0x00000008 + -0x2b8);
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0x2c0);
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           *(undefined8 *)((long)register0x00000008 + -0x2d0);
      *(undefined8 *)((long)register0x00000008 + -0x118) =
           *(undefined8 *)((long)register0x00000008 + -0x2d8);
      *(undefined8 *)((long)register0x00000008 + -0x120) =
           *(undefined8 *)((long)register0x00000008 + -0x2e0);
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)((long)register0x00000008 + -0x2e8);
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)((long)register0x00000008 + -0x2f0);
      *(undefined8 *)((long)register0x00000008 + -0x168) =
           *(undefined8 *)((long)register0x00000008 + -0x2f8);
      *(undefined8 *)((long)register0x00000008 + -0x170) =
           *(undefined8 *)((long)register0x00000008 + -0x300);
      *(undefined8 *)((long)register0x00000008 + -0x158) =
           *(undefined8 *)((long)register0x00000008 + -0x318);
      *(undefined8 *)((long)register0x00000008 + -0x160) =
           *(undefined8 *)((long)register0x00000008 + -800);
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0x308);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)((long)register0x00000008 + -0x310);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x328);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x330);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x338);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x340);
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x358);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x360);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x348);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -0x350);
      *(undefined **)((long)register0x00000008 + -0x270) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x268) = 1;
      *(undefined **)((long)register0x00000008 + -0x260) = &UNK_10f7456b9;
      *(undefined8 *)((long)register0x00000008 + -600) = 0x15;
      *(undefined **)((long)register0x00000008 + -0x250) = &UNK_10f745552;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 1;
      *(char **)((long)register0x00000008 + -0x240) = "*";
      *(undefined8 *)((long)register0x00000008 + -0x238) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      param_1 = (undefined1 *)((long)register0x00000008 + -0x290);
      func_0x000107c2cc20(param_1,4,(undefined1 *)((long)register0x00000008 + -0x270));
      *(undefined8 *)((long)register0x00000008 + -0x2a0) =
           *(undefined8 *)((long)register0x00000008 + -0x280);
      *(undefined8 *)((long)register0x00000008 + -0x2a8) =
           *(undefined8 *)((long)register0x00000008 + -0x288);
      *(undefined8 *)((long)register0x00000008 + -0x2b0) =
           *(undefined8 *)((long)register0x00000008 + -0x290);
      cVar4 = *(char *)((long)register0x00000008 + -0x299);
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x2b0);
      if (-1 < (long)cVar4) {
        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2b0);
      }
      unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x2a8);
      if (-1 < cVar4) {
        unaff_x22 = (undefined1 *)(long)cVar4;
      }
      if ((undefined1 *)0x7ffffffffffffff7 < unaff_x22) break;
      if (unaff_x22 < (undefined1 *)0x17) {
        *(char *)((long)register0x00000008 + -0x279) = (char)unaff_x22;
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x290);
        if (unaff_x22 != (undefined1 *)0x0) goto LAB_10b2f33a8;
      }
      else {
        puVar10 = (undefined1 *)0x19;
        if (((ulong)unaff_x22 | 7) != 0x17) {
          puVar10 = (undefined1 *)(((ulong)unaff_x22 | 7) + 1);
        }
        puVar12 = puVar10;
        __Znwm();
        *(undefined1 **)((long)register0x00000008 + -0x288) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x280) = (ulong)puVar10 | 0x8000000000000000;
        *(undefined1 **)((long)register0x00000008 + -0x290) = puVar12;
LAB_10b2f33a8:
        _memmove(puVar12,unaff_x23,unaff_x22);
      }
      puVar12[(long)unaff_x22] = 0;
      bVar3 = *(byte *)((long)register0x00000008 + -0x279);
      unaff_x24 = (undefined *)(ulong)bVar3;
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x290);
      unaff_x25 = *(undefined **)((long)register0x00000008 + -0x288);
      puVar15 = unaff_x25;
      unaff_x22 = unaff_x23;
      if (-1 < (char)bVar3) {
        puVar15 = unaff_x24;
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x290);
      }
      param_1 = unaff_x22;
      _memchr(unaff_x22,0,puVar15);
      if ((param_1 != (undefined1 *)0x0) &&
         (puVar15 = param_1 + -(long)unaff_x22, puVar15 != (undefined *)0xffffffffffffffff)) {
        if ((char)bVar3 < '\0') {
          if (unaff_x25 < puVar15) goto LAB_10b2f3694;
          *(undefined **)((long)register0x00000008 + -0x288) = puVar15;
        }
        else {
          if (unaff_x24 < puVar15) goto LAB_10b2f3694;
          *(char *)((long)register0x00000008 + -0x279) = (char)puVar15;
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x290);
        }
        unaff_x23[(long)puVar15] = 0;
      }
      if (*(char *)((long)register0x00000008 + -0x299) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b0));
      }
      FUN_10b3258ac((undefined1 *)((long)register0x00000008 + -0x1c0),unaff_x21,0,1,
                    (undefined1 *)((long)register0x00000008 + -0x290),0,0);
      pbVar18 = *(byte **)((long)register0x00000008 + -0x368);
      unaff_x24 = (undefined *)0x8000000000000001;
      unaff_x25 = (undefined *)0x295e9648864000;
      if (*(char *)((long)register0x00000008 + -0x279) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
      }
      *(undefined8 *)((long)register0x00000008 + -0x288) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)((long)register0x00000008 + -0x290) = 0xaaaaaaaaaaaaaaaa;
      FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x290),
                    (undefined1 *)((long)register0x00000008 + -0x1c0));
      while( true ) {
        bVar3 = *(byte *)((long)register0x00000008 + -0x279);
        uVar16 = *(ulong *)((long)register0x00000008 + -0x288);
        if (-1 < (char)bVar3) {
          uVar16 = (ulong)bVar3;
        }
        if (uVar16 == 0) break;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x228) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x220) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x248) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x250) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x238) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x240) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -600) = 0xaaaaaaaaaaaaaaaa;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0xaaaaaaaaaaaaaaaa;
        puVar8 = (undefined8 *)
                 (*(long *)((long)register0x00000008 + -0x1c0) +
                 *(long *)((long)register0x00000008 + -0x180) * 0xa8);
        uVar14 = *puVar8;
        *(undefined8 *)((long)register0x00000008 + -0x268) = puVar8[1];
        *(undefined8 *)((long)register0x00000008 + -0x270) = uVar14;
        uVar14 = puVar8[6];
        uVar20 = puVar8[9];
        uVar19 = puVar8[8];
        uVar24 = puVar8[3];
        uVar23 = puVar8[2];
        uVar22 = puVar8[5];
        uVar21 = puVar8[4];
        *(undefined8 *)((long)register0x00000008 + -0x238) = puVar8[7];
        *(undefined8 *)((long)register0x00000008 + -0x240) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x228) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x230) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -600) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x248) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x250) = uVar21;
        uVar14 = puVar8[0xe];
        uVar20 = puVar8[0x11];
        uVar19 = puVar8[0x10];
        uVar24 = puVar8[0xb];
        uVar23 = puVar8[10];
        uVar22 = puVar8[0xd];
        uVar21 = puVar8[0xc];
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = puVar8[0xf];
        *(undefined8 *)((long)register0x00000008 + -0x200) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x218) = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x220) = uVar23;
        *(undefined8 *)((long)register0x00000008 + -0x208) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar21;
        if (*(char *)((long)puVar8 + 0xa7) < '\0') {
          func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0x1e0),puVar8[0x12],
                              puVar8[0x13]);
          lVar17 = *(long *)((long)register0x00000008 + -0x240);
          uVar16 = 0;
          if (lVar17 != 0) goto LAB_10b2f3568;
LAB_10b2f359c:
          if (((long)uVar16 < (long)unaff_x20) &&
             (FUN_10b3279f8((undefined1 *)((long)register0x00000008 + -0x290),0),
             (*pbVar18 & 1) != 0)) {
            if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') goto LAB_10b2f3674;
            cVar4 = *(char *)((long)register0x00000008 + -0x279);
            while( true ) {
              if (cVar4 < '\0') {
                __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
              }
              FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
              uVar14 = 0;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                  *(long *)((long)register0x00000008 + -0x110)) break;
LAB_10b2f3670:
              ___stack_chk_fail(uVar14);
LAB_10b2f3674:
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
              cVar4 = *(char *)((long)register0x00000008 + -0x279);
            }
            return;
          }
        }
        else {
          uVar19 = puVar8[0x13];
          uVar14 = puVar8[0x12];
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar8[0x14];
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar14;
          lVar17 = *(long *)((long)register0x00000008 + -0x240);
          if (lVar17 == 0) {
            uVar16 = 0;
            goto LAB_10b2f359c;
          }
LAB_10b2f3568:
          if (lVar17 != 0x7fffffffffffffff) {
            uVar1 = lVar17 >> 0x3f ^ 0x7fffffffffffffff;
            if (SUB168(SEXT816(lVar17) * SEXT816(1000000),8) == lVar17 * 1000000 >> 0x3f) {
              uVar1 = lVar17 * 1000000;
            }
            uVar16 = uVar1;
            if (1 < uVar1 + 0x8000000000000001) {
              uVar16 = 0x7fffffffffffffff;
              if (!SCARRY8(uVar1,0x295e9648864000)) {
                uVar16 = uVar1 + 0x295e9648864000;
              }
            }
            goto LAB_10b2f359c;
          }
        }
        if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                        (undefined1 *)((long)register0x00000008 + -0x1c0));
          cVar4 = *(char *)((long)register0x00000008 + -0x279);
        }
        else {
          FUN_10b325d00((undefined1 *)((long)register0x00000008 + -0x270),
                        (undefined1 *)((long)register0x00000008 + -0x1c0));
          cVar4 = *(char *)((long)register0x00000008 + -0x279);
        }
        if (cVar4 < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) =
             *(undefined8 *)((long)register0x00000008 + -0x260);
        *(undefined8 *)((long)register0x00000008 + -0x288) =
             *(undefined8 *)((long)register0x00000008 + -0x268);
        *(undefined8 *)((long)register0x00000008 + -0x290) =
             *(undefined8 *)((long)register0x00000008 + -0x270);
      }
      if ((char)bVar3 < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x290));
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
        unaff_x21 = unaff_x21 + 0x18;
        if (unaff_x21 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
      }
      else {
        FUN_10b325c20((undefined1 *)((long)register0x00000008 + -0x1c0));
        unaff_x21 = unaff_x21 + 0x18;
        if (unaff_x21 == *(long *)((long)register0x00000008 + -0x370)) goto LAB_10b2f3654;
      }
    }
    FUN_10b2ecf74();
LAB_10b2f3694:
    unaff_x30 = FUN_10b2f3698;
    func_0x000104c03f14();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
  } while( true );
}



/* Entry: 10b2f3748; end: 10b2f376b;  */

void FUN_10b2f3748(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2f3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x38);
  return;
}



/* Entry: 10b2f376c; end: 10b2f37ab;  */

void FUN_10b2f376c(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b2f37ac; end: 10b2f3ccf;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3d4c) */
/* WARNING: Removing unreachable block (ram,0x00010b2f39b0) */

undefined1  [16] FUN_10b2f37ac(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong unaff_x21;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plStack_88 = (long *)*param_1;
  plVar16 = (long *)param_1[1];
  lVar6 = (long)plVar16 - (long)plStack_88;
  plVar13 = plVar16;
  plVar5 = param_1;
  plStack_90 = param_3;
  if (lVar6 != 0) {
    uVar20 = (lVar6 >> 3) * -0x5555555555555555;
    plVar15 = (long *)*param_2;
    uVar11 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      plVar15 = param_2;
      uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    unaff_x21 = 0x18;
    plVar17 = plStack_88;
    lStack_a0 = lVar6;
    plStack_98 = param_1;
    do {
      uVar19 = uVar20 >> 1;
      plVar13 = plVar17 + uVar19 * 3;
      param_1 = (long *)*plVar13;
      uVar3 = plVar13[1];
      if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
        param_1 = plVar13;
        uVar3 = (ulong)*(byte *)((long)plVar13 + 0x17);
      }
      uVar1 = uVar11;
      if (uVar3 <= uVar11) {
        uVar1 = uVar3;
      }
      _memcmp(param_1,plVar15,uVar1);
      plVar5 = plStack_98;
      lVar6 = lStack_a0;
      bVar2 = uVar3 < uVar11;
      if ((int)param_1 != 0) {
        bVar2 = (int)param_1 < 0;
      }
      plVar13 = plVar13 + 3;
      uVar20 = uVar20 + ~uVar19;
      if (!bVar2) {
        plVar13 = plVar17;
        uVar20 = uVar19;
      }
      plVar17 = plVar13;
    } while (uVar20 != 0);
    if (plVar16 != plVar13) {
      param_1 = (long *)*param_2;
      uVar11 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        param_1 = param_2;
        uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      plVar15 = (long *)*plVar13;
      unaff_x21 = plVar13[1];
      if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
        plVar15 = plVar13;
        unaff_x21 = (ulong)*(byte *)((long)plVar13 + 0x17);
      }
      uVar20 = unaff_x21;
      if (uVar11 <= unaff_x21) {
        uVar20 = uVar11;
      }
      _memcmp(param_1,plVar15,uVar20);
      bVar2 = uVar11 < unaff_x21;
      if ((int)param_1 != 0) {
        bVar2 = (int)param_1 < 0;
      }
      if (!bVar2) {
        uVar4 = 0;
        goto LAB_10b2f3ca4;
      }
    }
  }
  plVar15 = plStack_88;
  if ((long *)plVar5[2] <= plVar16) {
    uVar11 = (lVar6 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar11) {
      FUN_10b2f3cd0();
      goto LAB_10b2f3ccc;
    }
    lVar6 = plVar5[2] - (long)plStack_88 >> 3;
    uVar20 = lVar6 * 0x5555555555555556;
    if (uVar20 < uVar11 || uVar20 - uVar11 == 0) {
      uVar20 = uVar11;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar20 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar20 == 0) {
      param_1 = (long *)0x0;
      plVar17 = (long *)((long)plVar13 - (long)plStack_88);
      plVar18 = (long *)0x0;
      plVar7 = (long *)0x0;
      plVar8 = plStack_90;
      plVar16 = (long *)0x0;
      if (plVar17 == (long *)0x0) {
LAB_10b2f3aa4:
        if ((long)plVar7 < 1) {
          uVar11 = 1;
          if (plVar13 != plVar15) {
            uVar11 = ((ulong)-(long)plVar7 >> 3) * -0x5555555555555556;
          }
          if (0xaaaaaaaaaaaaaaa < uVar11) {
LAB_10b2f3ccc:
            func_0x00010b2ed0ac();
            pcStack_a8 = FUN_10b2f3cd0;
            puStack_b0 = &stack0xfffffffffffffff0;
            _abort();
            plVar5 = &lStack_100;
            plStack_d0 = plVar15;
            pcStack_b8 = FUN_10b2f3cdc;
            lVar6 = param_1[5];
            lStack_f8 = param_1[7];
            lStack_100 = param_1[6];
            lStack_f0 = param_1[8];
            param_1[7] = 0;
            param_1[8] = 0;
            param_1[6] = 0;
            plStack_e0 = plVar16;
            uStack_d8 = unaff_x21;
            plStack_c8 = plVar13;
            puStack_c0 = (undefined1 *)&puStack_b0;
            (*(code *)param_1[4])(lVar6,&lStack_100,param_1[9]);
            if (lStack_100 != 0) {
              for (; lStack_f8 != lStack_100; lStack_f8 = lStack_f8 + -0x18) {
              }
              lStack_f8 = lStack_100;
              __ZdlPv(lStack_100);
            }
            auVar22._8_8_ = plVar5;
            auVar22._0_8_ = lVar6;
            return auVar22;
          }
          lVar6 = uVar11 * 0x18;
          __Znwm();
          plVar8 = plStack_90;
          plVar17 = (long *)(lVar6 + (uVar11 >> 2) * 0x18);
          plVar18 = (long *)(lVar6 + uVar11 * 0x18);
          if (param_1 != (long *)0x0) {
            __ZdlPv(param_1);
          }
        }
        else {
          plVar17 = plVar16 + (((ulong)plVar7 >> 3) * -0x5555555555555555 + 1 >> 1) * -3;
          plVar8 = plStack_90;
        }
      }
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar20) goto LAB_10b2f3ccc;
      param_1 = (long *)(uVar20 * 0x18);
      __Znwm();
      plVar7 = (long *)((long)plVar13 - (long)plVar15);
      plVar17 = (long *)((long)param_1 + (long)plVar7);
      plVar18 = param_1 + uVar20 * 3;
      plVar8 = plStack_90;
      plVar16 = plVar17;
      if (plVar7 == (long *)(uVar20 * 0x18)) goto LAB_10b2f3aa4;
    }
    if (*(char *)((long)plVar8 + 0x17) < '\0') {
      func_0x000107c3192c(plVar17,*plVar8,plVar8[1]);
      plVar16 = (long *)plVar5[1];
    }
    else {
      lVar14 = plVar8[1];
      lVar6 = *plVar8;
      plVar17[2] = plVar8[2];
      plVar17[1] = lVar14;
      *plVar17 = lVar6;
      plVar16 = (long *)plVar5[1];
    }
    plVar7 = plVar13;
    plVar15 = plVar17;
    if (plVar16 != plVar13) {
      do {
        lVar14 = plVar7[1];
        lVar6 = *plVar7;
        plVar15[5] = plVar7[2];
        plVar15[4] = lVar14;
        plVar15[3] = lVar6;
        plVar7[1] = 0;
        plVar7[2] = 0;
        plVar12 = plVar7 + 3;
        *plVar7 = 0;
        plVar7 = plVar12;
        plVar8 = plVar13;
        plVar15 = plVar15 + 3;
      } while (plVar12 != plVar16);
      do {
        if (*(char *)((long)plVar8 + 0x17) < '\0') {
          __ZdlPv(*plVar8);
        }
        plVar8 = plVar8 + 3;
      } while (plVar8 != plVar16);
      plVar7 = (long *)plVar5[1];
    }
    plVar5[1] = (long)plVar13;
    plVar16 = (long *)*plVar5;
    plVar15 = (long *)((long)plVar17 + ((long)plVar16 - (long)plVar13));
    plVar8 = plVar16;
    plVar12 = plVar15;
    if ((long)plVar16 - (long)plVar13 != 0) {
      do {
        lVar14 = plVar8[1];
        lVar6 = *plVar8;
        plVar12[2] = plVar8[2];
        plVar12[1] = lVar14;
        *plVar12 = lVar6;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar9 = plVar8 + 3;
        *plVar8 = 0;
        plVar8 = plVar9;
        plVar12 = plVar12 + 3;
      } while (plVar9 != plVar13);
      do {
        if (*(char *)((long)plVar16 + 0x17) < '\0') {
          __ZdlPv(*plVar16);
        }
        plVar16 = plVar16 + 3;
      } while (plVar16 != plVar13);
      plVar16 = (long *)*plVar5;
    }
    *plVar5 = (long)plVar15;
    plVar5[1] = (long)plVar17 + (long)plVar7 + (0x18 - (long)plVar13);
    plVar5[2] = (long)plVar18;
    if (plVar16 != (long *)0x0) {
      __ZdlPv(plVar16);
    }
    uVar4 = 1;
    plVar13 = plVar17;
    goto LAB_10b2f3ca4;
  }
  if (plVar13 == plVar16) {
    if (*(char *)((long)plStack_90 + 0x17) < '\0') {
      func_0x000107c3192c(plVar16,*plStack_90,plStack_90[1]);
    }
    else {
      lVar14 = plStack_90[1];
      lVar6 = *plStack_90;
      plVar16[2] = plStack_90[2];
      plVar16[1] = lVar14;
      *plVar16 = lVar6;
    }
    plVar5[1] = (long)(plVar16 + 3);
  }
  else {
    lStack_80 = -0x5555555555555556;
    lStack_78 = -0x5555555555555556;
    lStack_70 = -0x5555555555555556;
    plStack_68 = plVar5;
    if (*(char *)((long)plStack_90 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_80,*plStack_90,plStack_90[1]);
      plVar16 = (long *)plVar5[1];
      plVar17 = plVar16 + -3;
      plVar15 = plVar16;
      if (plVar17 < plVar16) goto LAB_10b2f393c;
    }
    else {
      lStack_78 = plStack_90[1];
      lStack_80 = *plStack_90;
      lStack_70 = plStack_90[2];
      plVar17 = plVar16 + -3;
      plVar15 = plVar16;
      if (plVar17 < plVar16) {
LAB_10b2f393c:
        plVar16 = plVar15 + 3;
        lVar14 = plVar17[1];
        lVar6 = *plVar17;
        plVar15[2] = plVar17[2];
        plVar15[1] = lVar14;
        *plVar15 = lVar6;
        plVar17[1] = 0;
        plVar17[2] = 0;
        *plVar17 = 0;
      }
    }
    plVar5[1] = (long)plVar16;
    if (plVar15 != plVar13 + 3) {
      lVar6 = 0;
      do {
        puVar10 = (undefined8 *)((long)plVar15 + lVar6 + -0x30);
        lVar14 = lVar6 + -0x18;
        *(undefined8 *)((long)plVar15 + lVar6 + -8) = *(undefined8 *)((long)plVar15 + lVar6 + -0x20)
        ;
        *(undefined8 *)((long)plVar15 + lVar6 + -0x10) =
             *(undefined8 *)((long)plVar15 + lVar6 + -0x28);
        *(undefined8 *)((long)plVar15 + lVar6 + -0x18) = *puVar10;
        *(undefined1 *)((long)plVar15 + lVar6 + -0x19) = 0;
        *(undefined1 *)puVar10 = 0;
        lVar6 = lVar14;
      } while ((long)plVar13 + (0x18 - (long)plVar15) != lVar14);
    }
    if (*(char *)((long)plVar13 + 0x17) < '\0') {
      __ZdlPv(*plVar13);
    }
    plVar13[2] = lStack_70;
    plVar13[1] = lStack_78;
    *plVar13 = lStack_80;
  }
  uVar4 = 1;
LAB_10b2f3ca4:
  auVar21._8_8_ = uVar4;
  auVar21._0_8_ = plVar13;
  return auVar21;
}



/* Entry: 10b2f3cd0; end: 10b2f3cdb;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3d4c) */

void FUN_10b2f3cd0(long param_1)

{
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  _abort();
  lStack_58 = *(long *)(param_1 + 0x38);
  lStack_60 = *(long *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x28),&lStack_60,*(undefined8 *)(param_1 + 0x48));
  if (lStack_60 != 0) {
    for (; lStack_58 != lStack_60; lStack_58 = lStack_58 + -0x18) {
    }
    lStack_58 = lStack_60;
    __ZdlPv(lStack_60);
  }
  return;
}



/* Entry: 10b2f3cdc; end: 10b2f3df3;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f3d4c) */

void FUN_10b2f3cdc(long param_1)

{
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  lStack_48 = *(long *)(param_1 + 0x38);
  lStack_50 = *(long *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x28),&lStack_50,*(undefined8 *)(param_1 + 0x48));
  if (lStack_50 != 0) {
    for (; lStack_48 != lStack_50; lStack_48 = lStack_48 + -0x18) {
    }
    lStack_48 = lStack_50;
    __ZdlPv(lStack_50);
  }
  return;
}



/* Entry: 10b2f3df4; end: 10b2f3e1b;  */

void FUN_10b2f3df4(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2f3e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b2f3e1c; end: 10b2f3eaf;  */

void FUN_10b2f3e1c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  
  puVar4 = (undefined1 *)0x1;
  __Znwm();
  piVar7 = (int *)*param_1;
  *param_1 = 0;
  piVar5 = piVar7;
  (**(code **)(piVar7 + 2))();
  if (piVar7 != (int *)0x0) {
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piVar7 + 4))(piVar7);
    }
  }
  *puVar4 = (char)piVar5;
  lVar6 = *param_2;
  *param_2 = (long)puVar4;
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2f3eb0; end: 10b2f3f0f;  */

void FUN_10b2f3eb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  uVar2 = *(undefined1 *)*param_2;
  piVar5 = (int *)*param_1;
  *param_1 = 0;
  (**(code **)(piVar5 + 2))(piVar5,uVar2);
  if (piVar5 != (int *)0x0) {
    do {
      iVar1 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b2f3f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar5 + 4))(piVar5);
      return;
    }
  }
  return;
}



/* Entry: 10b2f3f10; end: 10b2f3f63;  */

void FUN_10b2f3f10(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_18;
  
  piStack_18 = *(int **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  (**(code **)(param_1 + 0x20))(&piStack_18,*(undefined8 *)(param_1 + 0x30));
  if (piStack_18 != (int *)0x0) {
    do {
      iVar1 = *piStack_18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_18,0x10);
      if (bVar3) {
        *piStack_18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piStack_18 + 4))();
    }
  }
  return;
}



/* Entry: 10b2f3f64; end: 10b2f3fb3;  */

void FUN_10b2f3f64(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return;
  }
  piVar4 = *(int **)(param_1 + 0x28);
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
      (**(code **)(piVar4 + 4))(piVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b2f3fb4; end: 10b2f4007;  */

void FUN_10b2f3fb4(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_18;
  
  piStack_18 = *(int **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  (**(code **)(param_1 + 0x20))(&piStack_18,*(undefined8 *)(param_1 + 0x30));
  if (piStack_18 != (int *)0x0) {
    do {
      iVar1 = *piStack_18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_18,0x10);
      if (bVar3) {
        *piStack_18 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piStack_18 + 4))();
    }
  }
  return;
}



/* Entry: 10b2f4008; end: 10b2f4083;  */

void FUN_10b2f4008(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      *plVar6 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      __ZdlPv(plVar6);
    }
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(piVar5 + 4))(piVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2f4084; end: 10b2f4103;  */

int FUN_10b2f4084(ushort *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 >> 0x1f != 0) {
    return 0;
  }
  iVar5 = 0;
  if ((param_1 != (ushort *)0x0) && (uVar4 = (uint)param_2, 0 < (int)uVar4)) {
    uVar2 = param_2 & 3;
    uVar3 = param_2 & 3;
    if (3 < uVar4) {
      uVar6 = ((uint)(param_2 >> 2) & 0x3fffffff) + 1;
      do {
        uVar1 = (uint)*param_1 + (int)param_2;
        uVar1 = ((uint)*(byte *)((long)param_1 + 3) << 0x13 | (uint)(byte)param_1[1] << 0xb) ^
                uVar1 * 0x10000 ^ uVar1;
        param_1 = param_1 + 2;
        param_2 = (ulong)(uVar1 + (uVar1 >> 0xb));
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    uVar6 = (uint)param_2;
    if ((uVar4 & 3) == 1 || uVar3 == 0) {
      if (uVar2 != 0) {
        uVar6 = uVar6 + (int)(char)*param_1;
        uVar6 = uVar6 ^ uVar6 * 0x400;
        uVar6 = uVar6 + (uVar6 >> 1);
      }
    }
    else if ((uVar4 & 3) == 2) {
      uVar6 = *param_1 + uVar6 ^ (*param_1 + uVar6) * 0x800;
      uVar6 = uVar6 + (uVar6 >> 0x11);
    }
    else {
      uVar6 = (int)(char)param_1[1] << 0x12 ^ (*param_1 + uVar6) * 0x10000 ^ *param_1 + uVar6;
      uVar6 = uVar6 + (uVar6 >> 0xb);
    }
    uVar6 = uVar6 ^ uVar6 << 3;
    uVar6 = uVar6 + (uVar6 >> 5);
    uVar6 = uVar6 ^ uVar6 * 0x10;
    uVar6 = uVar6 + (uVar6 >> 0x11);
    uVar6 = uVar6 ^ uVar6 * 0x2000000;
    iVar5 = uVar6 + (uVar6 >> 6);
  }
  return iVar5;
}



/* Entry: 10b2f4104; end: 10b2f447b;  */

void FUN_10b2f4104(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined1 uStack_43;
  undefined2 uStack_42;
  undefined8 uStack_40;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  iVar2 = *(int *)(param_2 + 0x40);
  switch(*(undefined4 *)(param_2 + 0x38)) {
  default:
    puVar5 = (undefined8 *)0x0;
    bVar4 = false;
    bVar3 = false;
    uStack_50 = 0;
    uStack_4b = 0;
    uStack_48 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    goto LAB_10b2f43e4;
  case 1:
    bVar4 = false;
    bVar3 = false;
    uStack_40 = CONCAT17(0xd,(undefined7)uStack_40);
    uStack_50 = 0x61746e7953;
    uStack_4b = 0x652078;
    uStack_48 = 0x2e726f7272;
    uStack_43 = 0;
    puVar5 = (undefined8 *)0x65207861746e7953;
    goto LAB_10b2f43e4;
  case 2:
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffe0;
    uStack_48 = 0x18;
    puVar5[1] = 0x7320657061637365;
    *puVar5 = 0x2064696c61766e49;
    puVar5[2] = 0x2e65636e65757165;
    *(undefined1 *)(puVar5 + 3) = 0;
    break;
  case 3:
    bVar4 = false;
    bVar3 = false;
    uStack_40 = CONCAT17(0x11,(undefined7)uStack_40);
    uStack_40 = CONCAT62(uStack_40._2_6_,0x2e);
    uStack_48 = 0x6f74206465;
    uStack_43 = 0x6b;
    uStack_42 = 0x6e65;
    uStack_50 = 0x7078656e55;
    uStack_4b = 0x746365;
    puVar5 = (undefined8 *)0x7463657078656e55;
    goto LAB_10b2f43e4;
  case 4:
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffe0;
    uStack_48 = 0x1b;
    puVar5[1] = 0x6e20616d6d6f6320;
    *puVar5 = 0x676e696c69617254;
    *(undefined8 *)((long)puVar5 + 0x13) = 0x2e6465776f6c6c61;
    *(undefined8 *)((long)puVar5 + 0xb) = 0x20746f6e20616d6d;
    *(undefined1 *)((long)puVar5 + 0x1b) = 0;
    break;
  case 5:
    bVar4 = false;
    bVar3 = false;
    uStack_40 = CONCAT17(0x11,(undefined7)uStack_40);
    uStack_40 = CONCAT62(uStack_40._2_6_,0x2e);
    uStack_48 = 0x7473656e20;
    uStack_43 = 0x69;
    uStack_42 = 0x676e;
    uStack_50 = 0x6d206f6f54;
    uStack_4b = 0x686375;
    puVar5 = (undefined8 *)0x6863756d206f6f54;
    goto LAB_10b2f43e4;
  case 6:
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffd8;
    uStack_48 = 0x23;
    *(undefined4 *)((long)puVar5 + 0x1f) = 0x2e746e65;
    puVar5[1] = 0x2061746164206465;
    *puVar5 = 0x7463657078656e55;
    puVar5[3] = 0x656d656c6520746f;
    puVar5[2] = 0x6f72207265746661;
    *(undefined1 *)((long)puVar5 + 0x23) = 0;
    break;
  case 7:
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffd0;
    uStack_48 = 0x29;
    puVar5[1] = 0x6f636e6520646574;
    *puVar5 = 0x726f707075736e55;
    puVar5[3] = 0x207473756d204e4f;
    puVar5[2] = 0x534a202e676e6964;
    *(undefined8 *)((long)puVar5 + 0x21) = 0x2e382d4654552065;
    *(undefined8 *)((long)puVar5 + 0x19) = 0x62207473756d204e;
    *(undefined1 *)((long)puVar5 + 0x29) = 0;
    break;
  case 8:
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffe0;
    uStack_48 = 0x1f;
    puVar5[1] = 0x207379656b207972;
    *puVar5 = 0x616e6f6974636944;
    *(undefined8 *)((long)puVar5 + 0x17) = 0x2e6465746f757120;
    *(undefined8 *)((long)puVar5 + 0xf) = 0x6562207473756d20;
    *(undefined1 *)((long)puVar5 + 0x1f) = 0;
    break;
  case 9:
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffd8;
    uStack_48 = 0x21;
    *(undefined2 *)(puVar5 + 4) = 0x2e;
    puVar5[1] = 0x20736920676e6972;
    *puVar5 = 0x7473207475706e49;
    puVar5[3] = 0x294247323e282065;
    puVar5[2] = 0x6772616c206f6f74;
    break;
  case 10:
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uStack_50 = SUB85(puVar5,0);
    uStack_4b = (undefined3)((ulong)puVar5 >> 0x28);
    uStack_40 = -0x7fffffffffffffe0;
    uStack_48 = 0x1d;
    puVar5[1] = 0x656220746f6e6e61;
    *puVar5 = 0x63207265626d754e;
    *(undefined8 *)((long)puVar5 + 0x15) = 0x2e6465746e657365;
    *(undefined8 *)((long)puVar5 + 0xd) = 0x7270657220656220;
    *(undefined1 *)((long)puVar5 + 0x1d) = 0;
  }
  uStack_42 = 0;
  uStack_43 = 0;
  bVar3 = true;
  bVar4 = true;
LAB_10b2f43e4:
  if (iVar2 == 0 && iVar1 == 0) {
    if (!bVar4) {
      param_1[1] = CONCAT26(uStack_42,CONCAT15(uStack_43,uStack_48));
      *param_1 = CONCAT35(uStack_4b,uStack_50);
      param_1[2] = uStack_40;
      return;
    }
    func_0x000107c3192c(param_1,puVar5,CONCAT26(uStack_42,CONCAT15(uStack_43,uStack_48)));
    if (bVar3) goto LAB_10b2f443c;
  }
  else {
    func_0x000107c2cc94(&UNK_10f744350);
    if (uStack_40 < 0) {
LAB_10b2f443c:
      __ZdlPv(CONCAT35(uStack_4b,uStack_50));
      return;
    }
  }
  return;
}



/* Entry: 10b2f447c; end: 10b2f44ff;  */

ulong FUN_10b2f447c(byte *param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  while( true ) {
    if (param_2 == 0) {
      func_0x00010b305cb4();
      *param_3 = (int)param_1;
      return (ulong)param_1 >> 0x20 & 1;
    }
    if ((9 < (*pbVar2 - 0x30 & 0xff)) &&
       (uVar1 = *pbVar2 - 0x41, 0x25 < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0))
    break;
    param_2 = param_2 + -1;
    pbVar2 = pbVar2 + 1;
  }
  return 0;
}



/* Entry: 10b2f4500; end: 10b2f52e7;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f52bc) */

void FUN_10b2f4500(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puStack_c0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puStack_c0 = param_3;
  puStack_a8 = param_2;
  puStack_98 = param_1;
  if (param_5 == 0) {
    return;
  }
LAB_10b2f453c:
  if ((param_7 < param_4) && (param_7 < param_5)) {
    if (param_4 == 0) {
      return;
    }
    lVar26 = 0;
    puVar11 = (undefined8 *)*puStack_a8;
    uVar20 = puStack_a8[1];
    if (-1 < (char)*(byte *)((long)puStack_a8 + 0x17)) {
      puVar11 = puStack_a8;
      uVar20 = (ulong)*(byte *)((long)puStack_a8 + 0x17);
    }
    lVar22 = -param_4;
    while( true ) {
      puVar19 = (undefined8 *)((long)puStack_98 + lVar26);
      puVar15 = (undefined8 *)*puVar19;
      uVar17 = puVar19[1];
      puVar12 = puVar15;
      uVar1 = uVar17;
      if (-1 < (char)*(byte *)((long)puVar19 + 0x17)) {
        puVar12 = puVar19;
        uVar1 = (ulong)*(byte *)((long)puVar19 + 0x17);
      }
      uVar24 = uVar1;
      if (uVar20 <= uVar1) {
        uVar24 = uVar20;
      }
      puVar9 = puVar11;
      _memcmp(puVar11,puVar12,uVar24);
      bVar8 = uVar20 < uVar1;
      if ((int)puVar9 != 0) {
        bVar8 = (int)puVar9 < 0;
      }
      if (bVar8) break;
      lVar26 = lVar26 + 0x38;
      bVar8 = lVar22 == -1;
      lVar22 = lVar22 + 1;
      if (bVar8) {
        return;
      }
    }
    if (-lVar22 < param_5) {
      lVar14 = param_5 / 2;
      puVar11 = puStack_a8 + lVar14 * 7;
      lVar23 = (long)puStack_a8 + (-lVar26 - (long)puStack_98);
      puVar12 = puStack_a8;
      if (lVar23 != 0) {
        uVar20 = (lVar23 >> 3) * 0x6db6db6db6db6db7;
        puVar12 = puVar19;
        uVar17 = puVar11[1];
        puVar15 = (undefined8 *)*puVar11;
        if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
          uVar17 = (ulong)*(byte *)((long)puVar11 + 0x17);
          puVar15 = puVar11;
        }
        do {
          uVar24 = uVar20 >> 1;
          puVar25 = puVar12 + uVar24 * 7;
          puVar9 = (undefined8 *)*puVar25;
          uVar1 = puVar25[1];
          if (-1 < (char)*(byte *)((long)puVar25 + 0x17)) {
            puVar9 = puVar25;
            uVar1 = (ulong)*(byte *)((long)puVar25 + 0x17);
          }
          uVar4 = uVar1;
          if (uVar17 <= uVar1) {
            uVar4 = uVar17;
          }
          puVar10 = puVar15;
          _memcmp(puVar15,puVar9,uVar4);
          bVar8 = uVar17 < uVar1;
          if ((int)puVar10 != 0) {
            bVar8 = (int)puVar10 < 0;
          }
          uVar1 = uVar20 + ~uVar24;
          uVar20 = uVar24;
          if (!bVar8) {
            uVar20 = uVar1;
            puVar12 = puVar25 + 7;
          }
        } while (uVar20 != 0);
      }
      lVar23 = ((long)puVar12 + (-lVar26 - (long)puStack_98) >> 3) * 0x6db6db6db6db6db7;
    }
    else {
      if (lVar22 == -1) {
        puStack_98 = (undefined8 *)((long)puStack_98 + lVar26);
        uVar13 = puStack_98[2];
        uVar16 = puStack_a8[2];
        uVar27 = *puStack_a8;
        puStack_98[1] = puStack_a8[1];
        *puStack_98 = uVar27;
        puStack_98[2] = uVar16;
        *puStack_a8 = puVar15;
        puStack_a8[1] = uVar17;
        puStack_a8[2] = uVar13;
        puStack_88 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
        uStack_90 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
        lStack_78 = 0xaaaaaaaaaaaaaaaa;
        uStack_80 = 0xaaaaaaaaaaaaaaaa;
        func_0x000107c2cea0(&uStack_90,puStack_98 + 3);
        puStack_70 = puStack_98 + 3;
        puStack_68 = puStack_a8 + 3;
        func_0x000107c2cf50(&puStack_70,puStack_a8[6]);
        puStack_70 = puStack_a8 + 3;
        puStack_68 = &uStack_90;
        func_0x000107c2cf50(&puStack_70,lStack_78);
        puStack_70 = &uStack_90;
        func_0x000107c2cf54(&puStack_70,lStack_78);
        return;
      }
      lVar23 = -lVar22 / 2;
      puVar11 = puStack_a8;
      if (puStack_a8 != puStack_c0) {
        plVar2 = (long *)((long)puStack_98 + lVar26 + lVar23 * 0x38);
        uVar17 = ((long)puStack_c0 - (long)puStack_a8 >> 3) * 0x6db6db6db6db6db7;
        lVar14 = lVar26 + lVar23 * 0x38;
        bVar6 = *(byte *)((long)puStack_98 + lVar14 + 0x17);
        puVar12 = puStack_a8;
        uVar20 = *(ulong *)((long)puStack_98 + lVar14 + 8);
        plVar3 = (long *)*plVar2;
        if (-1 < (char)bVar6) {
          uVar20 = (ulong)bVar6;
          plVar3 = plVar2;
        }
        do {
          uVar24 = uVar17 >> 1;
          puVar15 = puVar12 + uVar24 * 7;
          puVar11 = (undefined8 *)*puVar15;
          uVar1 = puVar15[1];
          if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
            puVar11 = puVar15;
            uVar1 = (ulong)*(byte *)((long)puVar15 + 0x17);
          }
          uVar4 = uVar20;
          if (uVar1 <= uVar20) {
            uVar4 = uVar1;
          }
          _memcmp(puVar11,plVar3,uVar4);
          bVar8 = uVar1 < uVar20;
          if ((int)puVar11 != 0) {
            bVar8 = (int)puVar11 < 0;
          }
          puVar11 = puVar15 + 7;
          uVar17 = uVar17 + ~uVar24;
          if (!bVar8) {
            puVar11 = puVar12;
            uVar17 = uVar24;
          }
          puVar12 = puVar11;
        } while (uVar17 != 0);
      }
      lVar14 = ((long)puVar11 - (long)puStack_a8 >> 3) * 0x6db6db6db6db6db7;
      puVar12 = (undefined8 *)((long)puStack_98 + lVar26 + lVar23 * 0x38);
    }
    puVar15 = puVar11;
    if ((puVar12 != puStack_a8) && (puVar15 = puVar12, puStack_a8 != puVar11)) {
      lVar21 = 0;
      puVar15 = puStack_a8;
      do {
        puVar9 = (undefined8 *)((long)puStack_a8 + lVar21);
        puVar25 = (undefined8 *)((long)puVar12 + lVar21);
        uVar13 = *puVar25;
        uVar27 = puVar25[2];
        uVar16 = puVar25[1];
        uVar29 = puVar9[1];
        uVar28 = *puVar9;
        puVar25[2] = puVar9[2];
        puVar25[1] = uVar29;
        *puVar25 = uVar28;
        *puVar9 = uVar13;
        puVar9[2] = uVar27;
        puVar9[1] = uVar16;
        puStack_88 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
        uStack_80 = 0xaaaaaaaaaaaaaaaa;
        uStack_90 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
        lStack_78 = puVar25[6];
        if (lStack_78 < 4) {
          if (lStack_78 == 1) {
            uStack_90 = (undefined8 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(puVar25 + 3));
          }
          else if (lStack_78 == 2) {
            uStack_90 = (undefined8 *)CONCAT44(0xaaaaaaaa,*(undefined4 *)(puVar25 + 3));
          }
          else if (lStack_78 == 3) {
            uStack_90 = (undefined8 *)puVar25[3];
          }
        }
        else if (lStack_78 < 6) {
          if (lStack_78 == 4) {
            puStack_88 = (undefined8 *)puVar25[4];
            uStack_90 = (undefined8 *)puVar25[3];
            uStack_80 = puVar25[5];
            puVar25[4] = 0;
            puVar25[5] = 0;
            puVar25[3] = 0;
          }
          else if (lStack_78 == 5) goto LAB_10b2f48b8;
        }
        else if ((lStack_78 == 6) || (lStack_78 == 7)) {
LAB_10b2f48b8:
          puStack_88 = (undefined8 *)puVar25[4];
          uStack_90 = (undefined8 *)puVar25[3];
          uStack_80 = *(undefined8 *)((long)puVar12 + lVar21 + 0x28);
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
        }
        puStack_70 = (undefined8 *)((long)puVar12 + lVar21 + 0x18);
        puVar10 = (undefined8 *)((long)puStack_a8 + lVar21 + 0x18);
        puStack_68 = puVar10;
        func_0x000107c2cf50(&puStack_70,puVar9[6]);
        puStack_70 = puVar10;
        puStack_68 = &uStack_90;
        func_0x000107c2cf50(&puStack_70,lStack_78);
        puStack_70 = &uStack_90;
        func_0x000107c2cf54(&puStack_70,lStack_78);
        if (puVar9 + 7 == puVar11) goto LAB_10b2f497c;
        puVar9 = puVar9 + 7;
        if (puVar25 + 7 != puVar15) {
          puVar9 = puVar15;
        }
        lVar21 = lVar21 + 0x38;
        puVar15 = puVar9;
      } while( true );
    }
    goto LAB_10b2f4c2c;
  }
  if (param_4 <= param_5) {
    if (puStack_a8 == puStack_98) {
      return;
    }
    lVar22 = 0;
    lVar26 = 0;
    goto LAB_10b2f4e84;
  }
  if (puStack_a8 == puStack_c0) {
    return;
  }
  lVar22 = 0;
  lVar26 = 0;
  goto LAB_10b2f4d58;
LAB_10b2f497c:
  if (puVar25 + 7 != puVar15) {
    puVar9 = (undefined8 *)((long)puVar12 + lVar21 + 0x38);
    puVar25 = puVar15;
    do {
      puVar10 = puVar25;
      uVar13 = *puVar9;
      uVar27 = puVar9[2];
      uVar16 = puVar9[1];
      uVar29 = puVar15[1];
      uVar28 = *puVar15;
      puVar9[2] = puVar15[2];
      puVar9[1] = uVar29;
      *puVar9 = uVar28;
      *puVar15 = uVar13;
      puVar15[2] = uVar27;
      puVar15[1] = uVar16;
      puStack_70 = puVar9 + 3;
      uStack_90 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
      puStack_88 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
      uStack_80 = 0xaaaaaaaaaaaaaaaa;
      lStack_78 = puVar9[6];
      if (lStack_78 < 4) {
        if (lStack_78 == 1) {
          uStack_90 = (undefined8 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)puStack_70);
        }
        else if (lStack_78 == 2) {
          uStack_90 = (undefined8 *)CONCAT44(0xaaaaaaaa,*(undefined4 *)puStack_70);
        }
        else if (lStack_78 == 3) {
          uStack_90 = (undefined8 *)*puStack_70;
        }
      }
      else if (lStack_78 < 6) {
        if (lStack_78 == 4) {
          puStack_88 = (undefined8 *)puVar9[4];
          uStack_90 = (undefined8 *)*puStack_70;
          uStack_80 = puVar9[5];
          puVar9[4] = 0;
          puVar9[5] = 0;
          *puStack_70 = 0;
        }
        else if (lStack_78 == 5) goto LAB_10b2f4a2c;
      }
      else if ((lStack_78 == 7) || (lStack_78 == 6)) {
LAB_10b2f4a2c:
        puStack_88 = (undefined8 *)puVar9[4];
        uStack_90 = (undefined8 *)puVar9[3];
        uStack_80 = puVar9[5];
        puVar9[4] = 0;
        puVar9[5] = 0;
        *puStack_70 = 0;
      }
      puStack_68 = puVar15 + 3;
      func_0x000107c2cf50(&puStack_70,puVar15[6]);
      puStack_70 = puVar15 + 3;
      puStack_68 = &uStack_90;
      func_0x000107c2cf50(&puStack_70,lStack_78);
      puStack_70 = &uStack_90;
      func_0x000107c2cf54(&puStack_70,lStack_78);
      puVar18 = puVar9 + 7;
      puVar15 = puVar15 + 7;
      if (puVar15 == puVar11) {
        if (puVar18 != puVar10) {
          puVar15 = puVar10 + 7;
          puVar9 = puVar9 + 10;
          do {
            uVar13 = *puVar18;
            uVar27 = puVar18[2];
            uVar16 = puVar18[1];
            uVar29 = puVar10[1];
            uVar28 = *puVar10;
            puVar18[2] = puVar10[2];
            puVar18[1] = uVar29;
            *puVar18 = uVar28;
            *puVar10 = uVar13;
            puVar10[2] = uVar27;
            puVar10[1] = uVar16;
            uStack_90 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
            puStack_88 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
            uStack_80 = 0xaaaaaaaaaaaaaaaa;
            lStack_78 = puVar18[6];
            if (lStack_78 < 4) {
              if (lStack_78 == 1) {
                uStack_90 = (undefined8 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(puVar18 + 3));
              }
              else if (lStack_78 == 2) {
                uStack_90 = (undefined8 *)CONCAT44(0xaaaaaaaa,*(undefined4 *)(puVar18 + 3));
              }
              else if (lStack_78 == 3) {
                uStack_90 = (undefined8 *)puVar18[3];
              }
            }
            else if (lStack_78 < 6) {
              if (lStack_78 == 4) {
                puStack_88 = (undefined8 *)puVar18[4];
                uStack_90 = (undefined8 *)puVar18[3];
                uStack_80 = puVar18[5];
                puVar18[4] = 0;
                puVar18[5] = 0;
                puVar18[3] = 0;
              }
              else if (lStack_78 == 5) goto LAB_10b2f4b78;
            }
            else if ((lStack_78 == 6) || (lStack_78 == 7)) {
LAB_10b2f4b78:
              puStack_88 = (undefined8 *)puVar18[4];
              uStack_90 = (undefined8 *)puVar18[3];
              uStack_80 = puVar18[5];
              puVar18[3] = 0;
              puVar18[4] = 0;
              puVar18[5] = 0;
            }
            puStack_70 = puVar9;
            puStack_68 = puVar10 + 3;
            func_0x000107c2cf50(&puStack_70,puVar10[6]);
            puStack_70 = puVar10 + 3;
            puStack_68 = &uStack_90;
            func_0x000107c2cf50(&puStack_70,lStack_78);
            puStack_70 = &uStack_90;
            func_0x000107c2cf54(&puStack_70,lStack_78);
            puVar18 = puVar18 + 7;
            if (puVar15 != puVar11) goto LAB_10b2f4990;
            puVar9 = puVar9 + 7;
            if (puVar18 == puVar10) break;
          } while( true );
        }
        break;
      }
LAB_10b2f4990:
      puVar9 = puVar18;
      puVar25 = puVar15;
      if (puVar18 != puVar10) {
        puVar25 = puVar10;
      }
    } while( true );
  }
  puVar15 = (undefined8 *)((long)puVar12 + lVar21 + 0x38);
LAB_10b2f4c2c:
  param_4 = -lVar23 - lVar22;
  if (lVar23 + lVar14 < (param_5 - (lVar23 + lVar14)) - lVar22) {
    FUN_10b2f4500((long)puStack_98 + lVar26,puVar12,puVar15,lVar23,lVar14,param_6,param_7);
    puStack_98 = puVar15;
    puStack_a8 = puVar11;
    param_5 = param_5 - lVar14;
  }
  else {
    FUN_10b2f4500(puVar15,puVar11,puStack_c0,param_4,param_5 - lVar14,param_6,param_7);
    puStack_98 = puVar19;
    puStack_c0 = puVar15;
    param_4 = lVar23;
    puStack_a8 = puVar12;
    param_5 = lVar14;
  }
  if (param_5 == 0) {
    return;
  }
  goto LAB_10b2f453c;
LAB_10b2f4d58:
  do {
    puVar11 = (undefined8 *)((long)param_6 + lVar22);
    puVar19 = (undefined8 *)((long)puStack_a8 + lVar22);
    uVar16 = puVar19[1];
    uVar13 = *puVar19;
    puVar11[2] = puVar19[2];
    puVar11[1] = uVar16;
    *puVar11 = uVar13;
    puVar19[1] = 0;
    puVar19[2] = 0;
    *puVar19 = 0;
    puVar11[6] = 0xffffffffffffffff;
    lVar23 = puVar19[6];
    if (lVar23 < 4) {
      if (lVar23 == 1) {
        *(undefined1 *)(puVar11 + 3) = *(undefined1 *)(puVar19 + 3);
      }
      else if (lVar23 == 2) {
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar19 + 3);
      }
      else if (lVar23 == 3) {
        puVar11[3] = puVar19[3];
      }
    }
    else if (lVar23 < 6) {
      if (lVar23 == 4) {
        uVar16 = puVar19[4];
        uVar13 = puVar19[3];
        puVar11[5] = puVar19[5];
        puVar11[4] = uVar16;
        puVar11[3] = uVar13;
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19[3] = 0;
      }
      else if (lVar23 == 5) goto LAB_10b2f4d0c;
    }
    else if ((lVar23 == 6) || (lVar23 == 7)) {
LAB_10b2f4d0c:
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = puVar19[3];
      *(undefined8 *)((long)param_6 + lVar22 + 0x20) =
           *(undefined8 *)((long)puStack_a8 + lVar22 + 0x20);
      *(undefined8 *)((long)param_6 + lVar22 + 0x28) =
           *(undefined8 *)((long)puStack_a8 + lVar22 + 0x28);
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
    }
    puVar11[6] = puVar19[6];
    lVar26 = lVar26 + 1;
    lVar22 = lVar22 + 0x38;
  } while (puVar19 + 7 != puStack_c0);
  puVar19 = puStack_c0 + -4;
  puVar11 = (undefined8 *)((long)param_6 + lVar22);
  do {
    puStack_a0 = puStack_c0 + -7;
    if (puStack_a8 == puStack_98) {
      if (param_6 != puVar11) {
        lVar22 = 0;
        do {
          puVar12 = (undefined8 *)((long)puStack_a0 + lVar22);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            __ZdlPv(*puVar12);
          }
          puVar15 = (undefined8 *)((long)puVar11 + lVar22 + -0x38);
          uVar16 = *(undefined8 *)((long)puVar11 + lVar22 + -0x30);
          uVar13 = *puVar15;
          puVar12[2] = *(undefined8 *)((long)puVar11 + lVar22 + -0x28);
          puVar12[1] = uVar16;
          *puVar12 = uVar13;
          *(undefined1 *)((long)puVar11 + lVar22 + -0x21) = 0;
          *(undefined1 *)puVar15 = 0;
          puStack_88 = (undefined8 *)((long)puVar11 + lVar22 + -0x20);
          uStack_90 = puVar19;
          func_0x000107c2cf50(&uStack_90,*(undefined8 *)((long)puVar11 + lVar22 + -8));
          lVar22 = lVar22 + -0x38;
          puVar19 = puVar19 + -7;
        } while ((undefined8 *)((long)puVar11 + lVar22) != param_6);
      }
      break;
    }
    bVar6 = *(byte *)((long)puStack_a8 + -0x21);
    puVar15 = puStack_a8 + -7;
    bVar5 = *(byte *)((long)puVar11 + -0x21);
    puVar9 = puVar11 + -7;
    puVar12 = (undefined8 *)*puVar9;
    uVar20 = puVar11[-6];
    if (-1 < (char)bVar5) {
      puVar12 = puVar9;
      uVar20 = (ulong)bVar5;
    }
    puVar25 = (undefined8 *)*puVar15;
    uVar17 = puStack_a8[-6];
    if (-1 < (char)bVar6) {
      puVar25 = puVar15;
      uVar17 = (ulong)bVar6;
    }
    uVar1 = uVar17;
    if (uVar20 <= uVar17) {
      uVar1 = uVar20;
    }
    _memcmp(puVar12,puVar25,uVar1);
    bVar8 = uVar20 < uVar17;
    if ((int)puVar12 != 0) {
      bVar8 = (int)puVar12 < 0;
    }
    puVar12 = puVar11;
    puVar25 = puStack_a8;
    pbVar7 = (byte *)((long)puStack_a8 + -0x21);
    puVar10 = puVar15;
    if (!bVar8) {
      puVar12 = puVar9;
      puVar15 = puStack_a8;
      puVar25 = puVar11;
      pbVar7 = (byte *)((long)puVar11 + -0x21);
      puVar10 = puVar9;
    }
    puStack_a8 = puVar15;
    if (*(char *)((long)puStack_c0 + -0x21) < '\0') {
      __ZdlPv(*puStack_a0);
    }
    uVar16 = puVar10[1];
    uVar13 = *puVar10;
    puStack_c0[-5] = puVar10[2];
    puStack_c0[-6] = uVar16;
    *puStack_a0 = uVar13;
    *pbVar7 = 0;
    *(undefined1 *)puVar10 = 0;
    puStack_88 = puVar25 + -4;
    uStack_90 = puVar19;
    func_0x000107c2cf50(&uStack_90,puVar25[-1]);
    puVar19 = puVar19 + -7;
    puVar11 = puVar12;
    puStack_c0 = puStack_a0;
  } while (puVar12 != param_6);
  goto LAB_10b2f528c;
LAB_10b2f4e84:
  do {
    puVar11 = (undefined8 *)((long)param_6 + lVar22);
    puVar19 = (undefined8 *)((long)puStack_98 + lVar22);
    uVar16 = puVar19[1];
    uVar13 = *puVar19;
    puVar11[2] = puVar19[2];
    puVar11[1] = uVar16;
    *puVar11 = uVar13;
    puVar19[1] = 0;
    puVar19[2] = 0;
    *puVar19 = 0;
    puVar11[6] = 0xffffffffffffffff;
    lVar23 = puVar19[6];
    if (lVar23 < 4) {
      if (lVar23 == 1) {
        *(undefined1 *)(puVar11 + 3) = *(undefined1 *)(puVar19 + 3);
      }
      else if (lVar23 == 2) {
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar19 + 3);
      }
      else if (lVar23 == 3) {
        puVar11[3] = puVar19[3];
      }
    }
    else if (lVar23 < 6) {
      if (lVar23 == 4) {
        uVar16 = puVar19[4];
        uVar13 = puVar19[3];
        puVar11[5] = puVar19[5];
        puVar11[4] = uVar16;
        puVar11[3] = uVar13;
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19[3] = 0;
      }
      else if (lVar23 == 5) goto LAB_10b2f4e38;
    }
    else if ((lVar23 == 6) || (lVar23 == 7)) {
LAB_10b2f4e38:
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = puVar19[3];
      *(undefined8 *)((long)param_6 + lVar22 + 0x20) =
           *(undefined8 *)((long)puStack_98 + lVar22 + 0x20);
      *(undefined8 *)((long)param_6 + lVar22 + 0x28) =
           *(undefined8 *)((long)puStack_98 + lVar22 + 0x28);
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
    }
    puVar11[6] = puVar19[6];
    lVar26 = lVar26 + 1;
    lVar22 = lVar22 + 0x38;
  } while (puVar19 + 7 != puStack_a8);
  puVar11 = puStack_98 + 3;
  puVar12 = (undefined8 *)((long)param_6 + lVar22);
  puVar19 = param_6;
  do {
    while( true ) {
      if (puStack_a8 == puStack_c0) {
        puVar15 = puVar19 + 3;
        do {
          if (*(char *)((long)puStack_98 + 0x17) < '\0') {
            __ZdlPv(*puStack_98);
          }
          uVar16 = puVar19[1];
          uVar13 = *puVar19;
          puStack_98[2] = puVar19[2];
          puStack_98[1] = uVar16;
          *puStack_98 = uVar13;
          *(undefined1 *)((long)puVar19 + 0x17) = 0;
          *(undefined1 *)puVar19 = 0;
          uStack_90 = puVar11;
          puStack_88 = puVar15;
          func_0x000107c2cf50(&uStack_90,puVar19[6]);
          puVar11 = puVar11 + 7;
          puVar15 = puVar15 + 7;
          bVar8 = puVar12 + -7 != puVar19;
          puVar19 = puVar19 + 7;
          puStack_98 = puStack_98 + 7;
        } while (bVar8);
        goto LAB_10b2f528c;
      }
      puVar15 = (undefined8 *)*puStack_a8;
      uVar20 = puStack_a8[1];
      if (-1 < (char)*(byte *)((long)puStack_a8 + 0x17)) {
        puVar15 = puStack_a8;
        uVar20 = (ulong)*(byte *)((long)puStack_a8 + 0x17);
      }
      puVar9 = (undefined8 *)*puVar19;
      uVar17 = puVar19[1];
      if (-1 < (char)*(byte *)((long)puVar19 + 0x17)) {
        puVar9 = puVar19;
        uVar17 = (ulong)*(byte *)((long)puVar19 + 0x17);
      }
      uVar1 = uVar17;
      if (uVar20 <= uVar17) {
        uVar1 = uVar20;
      }
      _memcmp(puVar15,puVar9,uVar1);
      bVar8 = uVar20 < uVar17;
      if ((int)puVar15 != 0) {
        bVar8 = (int)puVar15 < 0;
      }
      if (!bVar8) break;
      if (*(char *)((long)puStack_98 + 0x17) < '\0') {
        __ZdlPv(*puStack_98);
      }
      uVar16 = puStack_a8[1];
      uVar13 = *puStack_a8;
      puStack_98[2] = puStack_a8[2];
      puStack_98[1] = uVar16;
      *puStack_98 = uVar13;
      *(undefined1 *)((long)puStack_a8 + 0x17) = 0;
      *(undefined1 *)puStack_a8 = 0;
      puStack_88 = puStack_a8 + 3;
      uStack_90 = puVar11;
      func_0x000107c2cf50(&uStack_90,puStack_a8[6]);
      puStack_a8 = puStack_a8 + 7;
      puVar11 = puVar11 + 7;
      puStack_98 = puStack_98 + 7;
      if (puVar12 == puVar19) goto LAB_10b2f528c;
    }
    if (*(char *)((long)puStack_98 + 0x17) < '\0') {
      __ZdlPv(*puStack_98);
    }
    uVar16 = puVar19[1];
    uVar13 = *puVar19;
    puStack_98[2] = puVar19[2];
    puStack_98[1] = uVar16;
    *puStack_98 = uVar13;
    *(undefined1 *)((long)puVar19 + 0x17) = 0;
    *(undefined1 *)puVar19 = 0;
    puStack_88 = puVar19 + 3;
    uStack_90 = puVar11;
    func_0x000107c2cf50(&uStack_90,puVar19[6]);
    puVar19 = puVar19 + 7;
    puVar11 = puVar11 + 7;
    puStack_98 = puStack_98 + 7;
  } while (puVar12 != puVar19);
LAB_10b2f528c:
  if (param_6 != (undefined8 *)0x0) {
    param_6 = param_6 + 3;
    do {
      uStack_90 = param_6;
      func_0x000107c2cf54(&uStack_90,param_6[3]);
      param_6 = param_6 + 7;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  return;
}



/* Entry: 10b2f52e8; end: 10b2f52ff;  */

void FUN_10b2f52e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  _abort();
  uStack_18 = 0x10b2f52f4;
  puStack_20 = &stack0xfffffffffffffff0;
  _abort();
  pcStack_28 = FUN_10b2f5300;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uStack_80 = CONCAT44(0xaaaaaaaa,param_3);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xaaaaaaaa00000000;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0xaaaaaaaa00000000;
  uStack_78 = param_4;
  puStack_30 = (undefined1 *)&puStack_20;
  if (param_4 < 0xc9) {
    puStack_30 = (undefined1 *)&puStack_20;
    func_0x000107c2cae8(&uStack_80,param_1,param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b2f5390);
  (*pcVar1)();
}



/* Entry: 10b2f5300; end: 10b2f53d3;  */

void FUN_10b2f5300(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uStack_60 = CONCAT44(0xaaaaaaaa,param_3);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0xaaaaaaaa00000000;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_20 = 0xaaaaaaaa00000000;
  uStack_58 = param_4;
  if (param_4 < 0xc9) {
    func_0x000107c2cae8(&uStack_60,param_1,param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b2f5390);
  (*pcVar1)();
}



/* Entry: 10b2f53d4; end: 10b2f53e3;  */

/* WARNING: Removing unreachable block (ram,0x000100155278) */
/* WARNING: Removing unreachable block (ram,0x0001001552bc) */
/* WARNING: Removing unreachable block (ram,0x000100155348) */
/* WARNING: Removing unreachable block (ram,0x0001001552d0) */
/* WARNING: Removing unreachable block (ram,0x0001001552dc) */
/* WARNING: Removing unreachable block (ram,0x0001001552f0) */
/* WARNING: Removing unreachable block (ram,0x0001001552f4) */
/* WARNING: Removing unreachable block (ram,0x000100155304) */
/* WARNING: Removing unreachable block (ram,0x000100155310) */
/* WARNING: Removing unreachable block (ram,0x000100155314) */
/* WARNING: Removing unreachable block (ram,0x00010015537c) */
/* WARNING: Removing unreachable block (ram,0x000100155390) */
/* WARNING: Removing unreachable block (ram,0x000100155324) */
/* WARNING: Removing unreachable block (ram,0x000100155344) */
/* WARNING: Removing unreachable block (ram,0x00010015539c) */
/* WARNING: Removing unreachable block (ram,0x000100155280) */
/* WARNING: Removing unreachable block (ram,0x00010015534c) */
/* WARNING: Removing unreachable block (ram,0x000100155370) */
/* WARNING: Removing unreachable block (ram,0x000100155360) */
/* WARNING: Removing unreachable block (ram,0x00010015528c) */
/* WARNING: Removing unreachable block (ram,0x0001001552b4) */
/* WARNING: Removing unreachable block (ram,0x0001001553a4) */

uint FUN_10b2f53d4(long *****param_1,long param_2,ulong *param_3,ulong param_4)

{
  long *****ppppplVar1;
  ulong uVar2;
  char cVar3;
  long ****pppplVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *****ppppplVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long ****pppplVar15;
  char *pcVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puStack_c0;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long ****pppplStack_90;
  long ***ppplStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    *(undefined1 *)*param_3 = 0;
    param_3[1] = 0;
    uVar13 = (ulong)*(byte *)((long)param_3 + 0x17);
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) goto code_r0x000100154b9c;
    uVar17 = param_3[2];
    uVar22 = uVar17 >> 0x38;
    if ((uVar17 & 0x7fffffffffffffff) - 1 < 0x400) {
      uVar13 = uVar22;
      if (-1 < (long)uVar17) goto code_r0x000100154b9c;
      puVar8 = (undefined1 *)0x408;
      func_0x000107c60e20();
      *puVar8 = *(undefined1 *)*param_3;
      func_0x000107c60e14();
      uVar13 = 0;
      goto code_r0x000100154bb8;
    }
    uVar13 = 0;
  }
  else {
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    uVar13 = 0;
code_r0x000100154b9c:
    puVar8 = (undefined1 *)0x408;
    func_0x000107c60e20();
    func_0x000107c610b4();
code_r0x000100154bb8:
    uVar17 = 0x8000000000000408;
    param_3[1] = uVar13;
    param_3[2] = 0x8000000000000408;
    *param_3 = (ulong)puVar8;
    uVar22 = 0x80;
  }
  uStack_b0 = 0xaaaaaaaaaa000000;
  uStack_98 = 0;
  puStack_a8 = param_3;
  uStack_a0 = param_4;
  if (200 < param_4) goto code_r0x00010015543c;
  if (3 < param_2) {
    if (param_2 < 6) {
      if (param_2 == 4) {
        pppplStack_90 = *param_1;
        ppplStack_88 = (long ***)param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          pppplStack_90 = (long ****)param_1;
          ppplStack_88 = (long ***)(ulong)*(byte *)((long)param_1 + 0x17);
        }
        uVar21 = 1;
        func_0x000107c35ca0(&pppplStack_90,1,param_3);
      }
      else {
        if (param_2 != 5) goto code_r0x000100155438;
        uVar21 = 0;
      }
    }
    else if (param_2 == 6) {
      puVar9 = &uStack_b0;
      func_0x000107c2cb10(puVar9,param_1,0);
      uVar21 = (uint)puVar9;
    }
    else {
      if (param_2 != 7) goto code_r0x000100155438;
      puVar9 = &uStack_b0;
      func_0x000107c2cb14(puVar9,param_1,0);
      uVar21 = (uint)puVar9;
    }
    goto code_r0x0001001553b4;
  }
  uVar21 = (uint)uVar22;
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (uVar21 >> 7 == 0) {
        if (3 < uVar21 - 0x13) {
          *(undefined4 *)((long)param_3 + uVar22) = 0x6c6c756e;
          cVar3 = *(char *)((long)param_3 + 0x17);
          puVar18 = param_3;
joined_r0x000100155174:
          uVar22 = uVar22 + 4;
          if (cVar3 < '\0') {
            param_3[1] = uVar22;
            *(undefined1 *)((long)puVar18 + uVar22) = 0;
            uVar21 = 1;
          }
          else {
            *(byte *)((long)param_3 + 0x17) = (byte)uVar22 & 0x7f;
            *(undefined1 *)((long)puVar18 + uVar22) = 0;
            uVar21 = 1;
          }
          goto code_r0x0001001553b4;
        }
        if (0x11 < uVar21) {
          uVar12 = 0x16;
          uVar13 = uVar22;
          puVar18 = param_3;
code_r0x000100154fa8:
          uVar22 = uVar13 + 4;
          if (uVar13 + 4 <= uVar12 * 2) {
            uVar22 = uVar12 * 2;
          }
          uVar20 = 0x19;
          if ((uVar22 | 7) != 0x17) {
            uVar20 = (uVar22 | 7) + 1;
          }
          uVar17 = 0x17;
          if (0x16 < uVar22) {
            uVar17 = uVar20;
          }
          bVar7 = uVar12 == 0x16;
          uVar22 = uVar17;
          func_0x000107c60e20();
joined_r0x000100155408:
          if (uVar13 != 0) {
            func_0x000107c610b8(uVar22,puVar18,uVar13);
          }
          *(undefined4 *)(uVar22 + uVar13) = 0x6c6c756e;
          if (!bVar7) {
            func_0x000107c60e14(puVar18);
          }
          *param_3 = uVar22;
          param_3[1] = uVar13 + 4;
          param_3[2] = uVar17 | 0x8000000000000000;
          *(undefined1 *)(uVar22 + uVar13 + 4) = 0;
          uVar21 = 1;
          goto code_r0x0001001553b4;
        }
      }
      else {
        uVar12 = (uVar17 & 0x7fffffffffffffff) - 1;
        if (3 < uVar12 - uVar13) {
          puVar18 = (ulong *)*param_3;
          *(undefined4 *)((long)puVar18 + uVar13) = 0x6c6c756e;
          cVar3 = *(char *)((long)param_3 + 0x17);
          uVar22 = uVar13;
          goto joined_r0x000100155174;
        }
        if ((uVar13 - uVar12) + 4 <= 0x7ffffffffffffff7 - (uVar17 & 0x7fffffffffffffff)) {
          puVar18 = (ulong *)*param_3;
          if (uVar12 < 0x3ffffffffffffff3) goto code_r0x000100154fa8;
          bVar7 = false;
          uVar17 = 0x7ffffffffffffff7;
          uVar22 = uVar17;
          func_0x000107c60e20();
          goto joined_r0x000100155408;
        }
      }
      goto code_r0x000100155434;
    }
    if (param_2 == 1) {
      bVar7 = ((ulong)param_1 & 1) == 0;
      pcVar16 = "true";
      if (bVar7) {
        pcVar16 = "false";
      }
      pppplVar15 = (long ****)0x4;
      if (bVar7) {
        pppplVar15 = (long ****)0x5;
      }
      if (uVar21 >> 7 != 0) goto code_r0x000100155054;
      puVar18 = param_3;
      if ((long ****)(0x16 - uVar22) < pppplVar15) {
        if (0x7fffffffffffffe0 < (long)pppplVar15 + (uVar22 - 0x16)) goto code_r0x000100155434;
        uVar12 = 0x16;
        uVar13 = uVar22;
code_r0x000100155090:
        uVar17 = uVar13 + (long)pppplVar15;
        if (uVar13 + (long)pppplVar15 <= uVar12 * 2) {
          uVar17 = uVar12 * 2;
        }
        uVar22 = 0x19;
        if ((uVar17 | 7) != 0x17) {
          uVar22 = (uVar17 | 7) + 1;
        }
        uVar20 = 0x17;
        if (0x16 < uVar17) {
          uVar20 = uVar22;
        }
        bVar7 = uVar12 == 0x16;
        uVar17 = uVar20;
        func_0x000107c60e20();
        goto joined_r0x0001001550d0;
      }
code_r0x000100155190:
      func_0x000107c610b4((long)puVar18 + uVar22,pcVar16,pppplVar15);
      uVar22 = uVar22 + (long)pppplVar15;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_3[1] = uVar22;
        *(undefined1 *)((long)puVar18 + uVar22) = 0;
        uVar21 = 1;
      }
      else {
        *(byte *)((long)param_3 + 0x17) = (byte)uVar22 & 0x7f;
        *(undefined1 *)((long)puVar18 + uVar22) = 0;
        uVar21 = 1;
      }
      goto code_r0x0001001553b4;
    }
  }
  else {
    if (param_2 == 2) {
      uVar14 = (uint)param_1;
      uVar11 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar11 = uVar14;
      }
      uStack_70 = 0xaaaaaaaaaa;
      uStack_78 = 0xaaaaaaaaaa;
      uStack_73 = 0xaaaaaa;
      uVar12 = (ulong)uVar11;
      lVar5 = 0xc;
      do {
        lVar19 = lVar5;
        uVar11 = (uint)uVar12;
        *(byte *)((long)&uStack_78 + lVar19) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
        uVar12 = uVar12 / 10;
        lVar5 = lVar19 + -1;
      } while (9 < uVar11);
      if ((int)uVar14 < 0) {
        *(undefined1 *)((long)&uStack_80 + lVar19 + 7) = 0x2d;
        lVar19 = lVar19 + -1;
      }
      pppplVar15 = (long ****)(0xd - lVar19);
      if (pppplVar15 < (long ****)0x7ffffffffffffff8) {
        if (pppplVar15 < (long ****)0x17) {
          uStack_80 = CONCAT17((char)pppplVar15,(undefined7)uStack_80);
          ppppplVar10 = &pppplStack_90;
        }
        else {
          ppppplVar1 = (long *****)0x19;
          if (((ulong)pppplVar15 | 7) != 0x17) {
            ppppplVar1 = (long *****)(((ulong)pppplVar15 | 7) + 1);
          }
          ppppplVar10 = ppppplVar1;
          func_0x000107c60e20();
          uStack_80 = (ulong)ppppplVar1 | 0x8000000000000000;
          pppplStack_90 = (long ****)ppppplVar10;
          ppplStack_88 = (long ***)pppplVar15;
        }
        if (lVar19 != 0xd) {
          func_0x000107c610b4(ppppplVar10,(long)&uStack_78 + lVar19,pppplVar15);
        }
        *(undefined1 *)((long)ppppplVar10 + (long)pppplVar15) = 0;
        uVar12 = uStack_80;
        pppplVar4 = pppplStack_90;
        pppplVar15 = (long ****)ppplStack_88;
        ppppplVar1 = (long *****)pppplStack_90;
        if (-1 < (long)uStack_80) {
          pppplVar15 = (long ****)(uStack_80 >> 0x38);
          ppppplVar1 = &pppplStack_90;
        }
        uVar17 = (uVar17 & 0x7fffffffffffffff) - 1;
        if (-1 < (char)uVar22) {
          uVar17 = 0x16;
          uVar13 = uVar22;
        }
        if ((long ****)(uVar17 - uVar13) < pppplVar15) {
          if (~uVar17 + 0x7ffffffffffffff7 < (long)pppplVar15 + (uVar13 - uVar17))
          goto code_r0x000100155434;
          if (uVar21 >> 7 == 0) {
            puStack_c0 = param_3;
            if (uVar17 < 0x3ffffffffffffff3) goto code_r0x000100154ef4;
code_r0x0001001551f8:
            uVar22 = 0x7ffffffffffffff7;
            uVar20 = uVar22;
            func_0x000107c60e20();
          }
          else {
            puStack_c0 = (ulong *)*param_3;
            if (0x3ffffffffffffff2 < uVar17) goto code_r0x0001001551f8;
code_r0x000100154ef4:
            uVar20 = uVar13 + (long)pppplVar15;
            if (uVar13 + (long)pppplVar15 <= uVar17 * 2) {
              uVar20 = uVar17 * 2;
            }
            uVar2 = 0x19;
            if ((uVar20 | 7) != 0x17) {
              uVar2 = (uVar20 | 7) + 1;
            }
            uVar22 = 0x17;
            if (0x16 < uVar20) {
              uVar22 = uVar2;
            }
            uVar20 = uVar22;
            func_0x000107c60e20();
          }
          if (uVar13 != 0) {
            func_0x000107c610b8(uVar20,puStack_c0,uVar13);
          }
          func_0x000107c610b8(uVar20 + uVar13,ppppplVar1,pppplVar15);
          if (uVar17 != 0x16) {
            func_0x000107c60e14(puStack_c0);
          }
          *param_3 = uVar20;
          param_3[1] = uVar13 + (long)pppplVar15;
          param_3[2] = uVar22 | 0x8000000000000000;
          *(undefined1 *)(uVar20 + uVar13 + (long)pppplVar15) = 0;
        }
        else if (pppplVar15 != (long ****)0x0) {
          puVar18 = param_3;
          if (uVar21 >> 7 != 0) {
            puVar18 = (ulong *)*param_3;
          }
          func_0x000107c610b8((undefined1 *)((long)puVar18 + uVar13),ppppplVar1,pppplVar15);
          uVar13 = uVar13 + (long)pppplVar15;
          if (*(char *)((long)param_3 + 0x17) < '\0') {
            param_3[1] = uVar13;
          }
          else {
            *(byte *)((long)param_3 + 0x17) = (byte)uVar13 & 0x7f;
          }
          *(undefined1 *)((long)puVar18 + uVar13) = 0;
        }
        if ((long)uVar12 < 0) {
          func_0x000107c60e14(pppplVar4);
          uVar21 = 1;
        }
        else {
          uVar21 = 1;
        }
      }
      else {
        func_0x000107c35c54();
        pcVar16 = (char *)0x2;
code_r0x000100155054:
        uVar12 = (uVar17 & 0x7fffffffffffffff) - 1;
        if (pppplVar15 <= (long ****)(uVar12 - uVar13)) {
          uVar22 = uVar13;
          puVar18 = (ulong *)*param_3;
          goto code_r0x000100155190;
        }
        if (0x7ffffffffffffff7 - (uVar17 & 0x7fffffffffffffff) <
            (long)pppplVar15 + (uVar13 - uVar12)) goto code_r0x000100155434;
        puVar18 = (ulong *)*param_3;
        if (uVar12 < 0x3ffffffffffffff3) goto code_r0x000100155090;
        bVar7 = false;
        uVar20 = 0x7ffffffffffffff7;
        uVar17 = uVar20;
        func_0x000107c60e20();
joined_r0x0001001550d0:
        if (uVar13 != 0) {
          func_0x000107c610b8(uVar17,puVar18,uVar13);
        }
        func_0x000107c610b4(uVar17 + uVar13,pcVar16,pppplVar15);
        if (!bVar7) {
          func_0x000107c60e14(puVar18);
        }
        *param_3 = uVar17;
        param_3[1] = uVar13 + (long)pppplVar15;
        param_3[2] = uVar20 | 0x8000000000000000;
        *(undefined1 *)(uVar17 + uVar13 + (long)pppplVar15) = 0;
        uVar21 = 1;
      }
    }
    else {
      if (param_2 != 3) goto code_r0x000100155438;
      func_0x000107c2cb0c(param_1,&uStack_b0);
      uVar21 = 1;
    }
code_r0x0001001553b4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar21 & 1;
    }
    func_0x000107c60e78();
code_r0x000100155434:
    func_0x000104bd47d4();
  }
code_r0x000100155438:
  func_0x000107c2d0dc();
code_r0x00010015543c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0,0x100155440);
  (*pcVar6)();
}



/* Entry: 10b2f7ed8; end: 10b2f7edb;  */

/* WARNING: Removing unreachable block (ram,0x000100155a20) */

undefined8 * FUN_10b2f7ed8(undefined8 *param_1)

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



/* Entry: 10b2f7edc; end: 10b2f7f07;  */

void FUN_10b2f7edc(void)

{
  func_0x000107c2cb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2f7f08; end: 10b2f810b;  */

undefined8 ****
FUN_10b2f7f08(undefined8 *param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  FUN_10b32989c(&pppuStack_78);
  ppppuVar7 = (undefined8 ****)&UNK_10f7443a5;
  func_0x000107c2cc94(&pppuStack_90);
  uVar5 = uStack_88;
  ppppuVar10 = (undefined8 ****)pppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar5 = (ulong)bStack_79;
    ppppuVar10 = &pppuStack_90;
  }
  uVar11 = (uStack_68 & 0x7fffffffffffffff) - 1;
  uVar4 = uStack_70;
  if (-1 < (long)uStack_68) {
    uVar11 = 0x16;
    uVar4 = uStack_68 >> 0x38;
  }
  if (uVar11 - uVar4 < uVar5) {
    uVar3 = uVar4 + uVar5;
    if (0x7ffffffffffffff6 - uVar11 < uVar3 - uVar11) {
      func_0x000104bd47d4();
      *(undefined4 *)(ppppuVar7 + 1) = param_5;
      *ppppuVar7 = (undefined8 ***)&PTR_FUN_110cd4a10;
      ppppuVar7[0x16] = (undefined8 ***)0x0;
      ppppuVar7[2] = (undefined8 ***)
                     &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
      ppppuVar10 = ppppuVar7 + 0x10;
      *ppppuVar10 = (undefined8 ***)
                    &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
      __ZNSt3__18ios_base4initEPv(ppppuVar10,ppppuVar7 + 3);
      ppppuVar7[0x21] = (undefined8 ***)0x0;
      *(undefined4 *)(ppppuVar7 + 0x22) = 0xffffffff;
      *ppppuVar10 = (undefined8 ***)&PTR_DAT_11088d708;
      pppuVar2 = (undefined8 ***)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      ppppuVar7[2] = (undefined8 ***)&PTR_SUB_11088d6e0;
      ppppuVar7[3] = pppuVar2;
      __ZNSt3__16localeC1Ev(ppppuVar7 + 4);
      ppppuVar7[10] = (undefined8 ***)0x0;
      ppppuVar7[9] = (undefined8 ***)0x0;
      ppppuVar7[8] = (undefined8 ***)0x0;
      ppppuVar7[7] = (undefined8 ***)0x0;
      ppppuVar7[6] = (undefined8 ***)0x0;
      ppppuVar7[5] = (undefined8 ***)0x0;
      ppppuVar7[3] = (undefined8 ***)&PTR_DAT_11088d7b0;
      ppppuVar7[0xc] = (undefined8 ***)0x0;
      ppppuVar7[0xb] = (undefined8 ***)0x0;
      ppppuVar7[0xe] = (undefined8 ***)0x0;
      ppppuVar7[0xd] = (undefined8 ***)0x0;
      *(undefined4 *)(ppppuVar7 + 0xf) = 0x10;
      ppppuVar10 = ppppuVar7 + 3;
      func_0x000107c2ca8c();
      ppppuVar7[0x24] = param_3;
      *(int *)(ppppuVar7 + 0x25) = (int)param_4;
      ___error();
      *(undefined4 *)((long)ppppuVar7 + 300) = *(undefined4 *)ppppuVar10;
      ___error();
      *(undefined4 *)ppppuVar10 = 0;
      func_0x000107c2cb2c(ppppuVar7,param_3,param_4);
      *ppppuVar7 = (undefined8 ***)&PTR_FUN_110cd4a30;
      *(undefined4 *)(ppppuVar7 + 0x26) = param_6;
      return ppppuVar7;
    }
    ppppuVar9 = (undefined8 ****)pppuStack_78;
    if (-1 < (long)uStack_68) {
      ppppuVar9 = &pppuStack_78;
    }
    if (uVar11 < 0x3ffffffffffffff3) {
      uVar6 = uVar3;
      if (uVar3 <= uVar11 * 2) {
        uVar6 = uVar11 * 2;
      }
      ppppuVar7 = (undefined8 ****)0x19;
      if ((uVar6 | 7) != 0x17) {
        ppppuVar7 = (undefined8 ****)((uVar6 | 7) + 1);
      }
      ppppuVar1 = (undefined8 ****)0x17;
      if (0x16 < uVar6) {
        ppppuVar1 = ppppuVar7;
      }
      ppppuVar8 = ppppuVar1;
      __Znwm();
    }
    else {
      ppppuVar1 = (undefined8 ****)0x7ffffffffffffff7;
      ppppuVar8 = ppppuVar1;
      __Znwm();
    }
    if (uVar4 != 0) {
      _memmove(ppppuVar8,ppppuVar9,uVar4);
    }
    ppppuVar7 = (undefined8 ****)((long)ppppuVar8 + uVar4);
    _memmove(ppppuVar7,ppppuVar10,uVar5);
    if (uVar11 != 0x16) {
      __ZdlPv(ppppuVar9);
      ppppuVar7 = ppppuVar9;
    }
    uStack_68 = (ulong)ppppuVar1 | 0x8000000000000000;
    *(undefined1 *)((long)ppppuVar8 + uVar3) = 0;
    pppuStack_78 = ppppuVar8;
    uStack_70 = uVar3;
  }
  else if (uVar5 != 0) {
    ppppuVar9 = (undefined8 ****)pppuStack_78;
    if (-1 < (long)uStack_68) {
      ppppuVar9 = &pppuStack_78;
    }
    ppppuVar7 = (undefined8 ****)((long)ppppuVar9 + uVar4);
    _memmove(ppppuVar7,ppppuVar10,uVar5);
    uVar4 = uVar4 + uVar5;
    if ((long)uStack_68 < 0) {
      uStack_70 = uVar4;
      *(undefined1 *)((long)ppppuVar9 + uVar4) = 0;
    }
    else {
      uStack_68 = CONCAT17((char)uVar4,(undefined7)uStack_68) & 0x7fffffffffffffff;
      *(undefined1 *)((long)ppppuVar9 + uVar4) = 0;
    }
  }
  param_1[1] = uStack_70;
  *param_1 = pppuStack_78;
  param_1[2] = uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  pppuStack_78 = (undefined8 ****)0x0;
  if (((char)bStack_79 < '\0') &&
     (__ZdlPv(pppuStack_90), ppppuVar7 = (undefined8 ****)pppuStack_90, (long)uStack_68 < 0)) {
    __ZdlPv(pppuStack_78);
    ppppuVar7 = (undefined8 ****)pppuStack_78;
  }
  return ppppuVar7;
}



/* Entry: 10b2f810c; end: 10b2f822f;  */

undefined8 *
FUN_10b2f810c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  *param_1 = &PTR_FUN_110cd4a30;
  *(undefined4 *)(param_1 + 0x26) = param_5;
  return param_1;
}



/* Entry: 10b2f8230; end: 10b2f82d3;  */

void FUN_10b2f8230(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  byte bStack_31;
  
  puVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_110cd4a30;
  func_0x000107c2ca60(puVar2,&UNK_10f7443ab,2);
  FUN_10b2f7f08(&uStack_48,*(undefined4 *)(param_1 + 0x26));
  puVar1 = (undefined4 *)CONCAT44(uStack_44,uStack_48);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    puVar1 = &uStack_48;
  }
  func_0x000107c2ca60(puVar2,puVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(CONCAT44(uStack_44,uStack_48));
  }
  uStack_48 = *(undefined4 *)(param_1 + 0x26);
  func_0x000107c2ca84(&uStack_48);
  func_0x000107c2cb34(param_1);
  return;
}



/* Entry: 10b2f82d4; end: 10b2f82d7;  */

void FUN_10b2f82d4(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  byte bStack_31;
  
  puVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_110cd4a30;
  func_0x000107c2ca60(puVar2,&UNK_10f7443ab,2);
  FUN_10b2f7f08(&uStack_48,*(undefined4 *)(param_1 + 0x26));
  puVar1 = (undefined4 *)CONCAT44(uStack_44,uStack_48);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    puVar1 = &uStack_48;
  }
  func_0x000107c2ca60(puVar2,puVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(CONCAT44(uStack_44,uStack_48));
  }
  uStack_48 = *(undefined4 *)(param_1 + 0x26);
  func_0x000107c2ca84(&uStack_48);
  func_0x000107c2cb34(param_1);
  return;
}



/* Entry: 10b2f82d8; end: 10b2f82eb;  */

void FUN_10b2f82d8(void)

{
  FUN_10b2f8230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2f82ec; end: 10b2f83cf;  */

undefined8 FUN_10b2f82ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  cVar4 = *(char *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (long)cVar4) {
    puVar1 = param_2;
  }
  lVar2 = param_2[1];
  if (-1 < cVar4) {
    lVar2 = (long)cVar4;
  }
  ppuStack_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b308948(puVar1,lVar2,&ppuStack_38);
  uVar3 = uStack_30;
  pppuVar5 = (undefined8 ***)ppuStack_38;
  if (-1 < (long)uStack_28) {
    uVar3 = uStack_28 >> 0x38;
    pppuVar5 = &ppuStack_38;
  }
  func_0x000107c2ca60(param_1,pppuVar5,uVar3);
  if ((long)uStack_28 < 0) {
    __ZdlPv(ppuStack_38);
    return param_1;
  }
  return param_1;
}



/* Entry: 10b2f83d0; end: 10b2f9067;  */

undefined8 * FUN_10b2f83d0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  
  if ((bRam000000011383aa30 & 1) == 0) {
    iVar4 = 0x1383aa30;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      plVar7 = (long *)0x80;
      __Znwm();
      plVar7[1] = 0;
      *plVar7 = 0;
      plVar7[3] = 0;
      plVar7[2] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      func_0x000107c35ca4();
      plRam000000011383aa28 = plVar7;
      ___cxa_guard_release(0x11383aa30);
    }
  }
  plVar7 = plRam000000011383aa28;
  lVar18 = *plRam000000011383aa28;
  iVar4 = (int)lVar18 + 0x10;
  _pthread_mutex_trylock();
  if (iVar4 == 0) {
    uVar8 = *(ulong *)(lVar18 + 0x60);
  }
  else {
    func_0x00010b329e58(lVar18 + 0x10);
    uVar8 = *(ulong *)(lVar18 + 0x60);
  }
  if (uVar8 != 0) {
    uVar11 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar11 = ((ulong)param_1 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar11 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = uVar8 - 1;
    if ((uVar8 & uVar12) == 0) {
      uVar14 = uVar12 & uVar11;
      lVar13 = *(long *)(lVar18 + 0x58);
      puVar15 = *(undefined8 **)(lVar13 + uVar14 * 8);
    }
    else {
      uVar14 = uVar11;
      if (uVar8 <= uVar11) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar14 = uVar11 / uVar8;
        }
        uVar14 = uVar11 - uVar14 * uVar8;
      }
      lVar13 = *(long *)(lVar18 + 0x58);
      puVar15 = *(undefined8 **)(lVar13 + uVar14 * 8);
    }
    if ((puVar15 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar15, plVar5 != (long *)0x0)) {
      if ((uVar8 & uVar12) == 0) {
        do {
          if (plVar5[1] == uVar11) {
            if ((undefined8 *)plVar5[2] == param_1) goto LAB_10b2f850c;
          }
          else if ((plVar5[1] & uVar12) != uVar14) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar5[1];
          if (uVar16 == uVar11) {
            if ((undefined8 *)plVar5[2] == param_1) goto LAB_10b2f850c;
          }
          else {
            if (uVar8 <= uVar16) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar16 / uVar8;
              }
              uVar16 = uVar16 - uVar3 * uVar8;
            }
            if (uVar16 != uVar14) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
LAB_10b2f8644:
  _pthread_mutex_unlock(lVar18 + 0x10);
  iVar4 = (int)plVar7 + 0x40;
  _pthread_mutex_trylock();
  if (iVar4 == 0) {
    plVar5 = (long *)plVar7[1];
    plVar9 = (long *)plVar7[2];
    if (plVar5 == plVar9) goto LAB_10b2f8700;
LAB_10b2f8664:
    uVar8 = (long)plVar9 + (-8 - (long)plVar5);
    uVar10 = (uint)uVar8;
    if ((~uVar10 & 0x18) != 0) {
      uVar11 = (ulong)((uVar10 >> 3) + 1) & 3;
      do {
        if ((undefined8 *)*plVar5 == param_1) goto LAB_10b2f8700;
        plVar5 = plVar5 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (0x17 < uVar8) {
      plVar5 = plVar5 + 2;
      do {
        if ((undefined8 *)plVar5[-2] == param_1) {
          plVar5 = plVar5 + -2;
          goto LAB_10b2f8700;
        }
        if ((undefined8 *)plVar5[-1] == param_1) {
          plVar5 = plVar5 + -1;
          goto LAB_10b2f8700;
        }
        if ((undefined8 *)*plVar5 == param_1) goto LAB_10b2f8700;
        if ((undefined8 *)plVar5[1] == param_1) {
          plVar5 = plVar5 + 1;
          goto LAB_10b2f8700;
        }
        plVar17 = plVar5 + 2;
        plVar5 = plVar5 + 4;
      } while (plVar17 != plVar9);
    }
  }
  else {
    func_0x00010b329e58(plVar7 + 8);
    plVar5 = (long *)plVar7[1];
    plVar9 = (long *)plVar7[2];
    if (plVar5 != plVar9) goto LAB_10b2f8664;
LAB_10b2f8700:
    if (plVar5 != plVar9) {
      if (*plVar5 != 0) {
        plVar7[6] = plVar7[6] + -1;
      }
      if ((long *)plVar7[5] == plVar7 + 4) {
        lVar18 = (long)plVar9 - (long)(plVar5 + 1);
        if (lVar18 != 0) {
          _memmove(plVar5,plVar5 + 1,lVar18);
        }
        plVar7[2] = (long)plVar5 + lVar18;
        _pthread_mutex_unlock(plVar7 + 8);
        piVar6 = (int *)param_1[1];
        goto joined_r0x00010b2f87c0;
      }
      *plVar5 = 0;
    }
  }
  _pthread_mutex_unlock(plVar7 + 8);
  piVar6 = (int *)param_1[1];
joined_r0x00010b2f87c0:
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(piVar6 + 4))();
    }
  }
  piVar6 = (int *)*param_1;
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(piVar6 + 4))();
    }
  }
  return param_1;
LAB_10b2f850c:
  if ((uVar8 & uVar12) == 0) {
    uVar11 = uVar12 & uVar11;
  }
  else if (uVar8 <= uVar11) {
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar14 = uVar11 / uVar8;
    }
    uVar11 = uVar11 - uVar14 * uVar8;
  }
  plVar9 = *(long **)(lVar13 + uVar11 * 8);
  do {
    plVar17 = plVar9;
    plVar9 = (long *)*plVar17;
  } while ((long *)*plVar17 != plVar5);
  if (plVar17 == (long *)(lVar18 + 0x68)) {
LAB_10b2f857c:
    if (*plVar5 != 0) {
      uVar14 = *(ulong *)(*plVar5 + 8);
      if ((uVar8 & uVar12) == 0) {
        uVar14 = uVar14 & uVar12;
      }
      else if (uVar8 <= uVar14) {
        uVar16 = 0;
        if (uVar8 != 0) {
          uVar16 = uVar14 / uVar8;
        }
        uVar14 = uVar14 - uVar16 * uVar8;
      }
      if (uVar14 == uVar11) goto LAB_10b2f85b4;
    }
    *(undefined8 *)(lVar13 + uVar11 * 8) = 0;
  }
  else {
    uVar14 = plVar17[1];
    if ((uVar8 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar8 <= uVar14) {
      uVar16 = 0;
      if (uVar8 != 0) {
        uVar16 = uVar14 / uVar8;
      }
      uVar14 = uVar14 - uVar16 * uVar8;
    }
    if (uVar14 != uVar11) goto LAB_10b2f857c;
  }
LAB_10b2f85b4:
  lVar13 = *plVar5;
  if (lVar13 != 0) {
    uVar14 = *(ulong *)(lVar13 + 8);
    if ((uVar8 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar8 <= uVar14) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar14 / uVar8;
      }
      uVar14 = uVar14 - uVar12 * uVar8;
    }
    if (uVar14 != uVar11) {
      *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8) = plVar17;
      lVar13 = *plVar5;
    }
  }
  *plVar17 = lVar13;
  *plVar5 = 0;
  *(long *)(lVar18 + 0x70) = *(long *)(lVar18 + 0x70) + -1;
  plVar9 = (long *)plVar5[3];
  if (plVar9 != (long *)0x0) {
    plVar17 = plVar9 + 1;
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar2) {
        *(int *)plVar17 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  __ZdlPv(plVar5);
  goto LAB_10b2f8644;
}



/* Entry: 10b2f9068; end: 10b2f933f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10b2f9068(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  undefined8 *******pppppppuVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *******pppppppuVar7;
  undefined1 **ppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 **ppuVar14;
  ulong uVar15;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined1 *puStack_68;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 < 4) {
    return false;
  }
  uVar6 = *(uint *)(param_1 + 8);
  uVar15 = (ulong)uVar6;
  uVar13 = 0;
  if (uVar6 <= uVar5) {
    uVar13 = uVar5 - uVar15;
  }
  if ((uVar13 != 0 && uVar13 == (uVar13 + 3 & 0xfffffffffffffffc)) &&
     (puVar2 = (uint *)(param_1 + 8 + uVar13), 3 < uVar6 && puVar2 != (uint *)0x0)) {
    uVar5 = *puVar2;
    if ((-1 < (int)uVar5) && ((ulong)uVar5 <= uVar15 - 4)) {
      uVar10 = (ulong)(uVar5 + 3) & 0xfffffffc;
      uVar13 = uVar15;
      if (uVar10 <= uVar15 - 4) {
        uVar13 = uVar10 + 4;
      }
      if (3 < uVar15 - uVar13) {
        uVar5 = *(uint *)((long)puVar2 + uVar13);
        if (-1 < (int)uVar5) {
          uVar10 = uVar15 - (uVar13 + 4);
          if (uVar5 <= uVar10) {
            uVar11 = (ulong)(uVar5 + 3) & 0xfffffffc;
            uVar12 = uVar15;
            if (uVar11 <= uVar10) {
              uVar12 = uVar11 + uVar13 + 4;
            }
            if (uVar15 - uVar12 < 4) {
              return true;
            }
            do {
              if ((uint *)((long)puVar2 + uVar12) == (uint *)0x0) break;
              uVar5 = *(uint *)((long)puVar2 + uVar12);
              uVar13 = (ulong)uVar5;
              if ((int)uVar5 < 0) break;
              lVar9 = uVar12 + 4;
              if (uVar15 - lVar9 < uVar13) break;
              uVar12 = (ulong)(uVar5 + 3) & 0xfffffffc;
              uVar10 = uVar15;
              if (uVar12 <= uVar15 - lVar9) {
                uVar10 = uVar12 + lVar9;
              }
              if ((long)puVar2 + lVar9 == 0) break;
              if (uVar15 - uVar10 < 4 || (uint *)((long)puVar2 + uVar10) == (uint *)0x0)
              goto LAB_10b2f9334;
              uVar6 = *(uint *)((long)puVar2 + uVar10);
              uVar11 = (ulong)uVar6;
              if ((int)uVar6 < 0) goto LAB_10b2f9334;
              lVar1 = uVar10 + 4;
              if (uVar15 - lVar1 < uVar11) goto LAB_10b2f9334;
              uVar10 = (ulong)(uVar6 + 3) & 0xfffffffc;
              uVar12 = uVar15;
              if (uVar10 <= uVar15 - lVar1) {
                uVar12 = uVar10 + lVar1;
              }
              if ((long)puVar2 + lVar1 == 0) goto LAB_10b2f9334;
              if (uVar6 < 0x17) {
                uStack_78 = CONCAT17((char)uVar6,(undefined7)uStack_78);
                pppppppuVar7 = &pppppppuStack_88;
                if (uVar6 != 0) goto LAB_10b2f9274;
              }
              else {
                pppppppuVar3 = (undefined8 *******)0x19;
                if ((uVar11 | 7) != 0x17) {
                  pppppppuVar3 = (undefined8 *******)((uVar11 | 7) + 1);
                }
                pppppppuVar7 = pppppppuVar3;
                __Znwm();
                uStack_78 = (ulong)pppppppuVar3 | 0x8000000000000000;
                pppppppuStack_88 = pppppppuVar7;
                uStack_80 = uVar11;
LAB_10b2f9274:
                _memcpy(pppppppuVar7,(long)puVar2 + lVar1,uVar11);
              }
              *(undefined1 *)((long)pppppppuVar7 + uVar11) = 0;
              if (uVar5 < 0x17) {
                uStack_90 = CONCAT17((char)uVar5,(undefined7)uStack_90);
                ppuVar8 = &puStack_a0;
                ppuVar14 = &puStack_a0;
                if (uVar5 != 0) goto LAB_10b2f92c8;
              }
              else {
                puVar4 = (undefined1 *)0x19;
                if ((uVar13 | 7) != 0x17) {
                  puVar4 = (undefined1 *)((uVar13 | 7) + 1);
                }
                ppuVar8 = (undefined1 **)puVar4;
                __Znwm();
                uStack_90 = (ulong)puVar4 | 0x8000000000000000;
                puStack_a0 = (undefined1 *)ppuVar8;
                uStack_98 = uVar13;
LAB_10b2f92c8:
                _memcpy(ppuVar8,(long)puVar2 + lVar9,uVar13);
                ppuVar14 = ppuVar8;
              }
              *(undefined1 *)((long)ppuVar14 + uVar13) = 0;
              lVar9 = param_2;
              puStack_68 = (undefined1 *)&puStack_a0;
              func_0x00010a1945c0(param_2,&puStack_a0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
              if (*(char *)(lVar9 + 0x4f) < '\0') {
                __ZdlPv(*(undefined8 *)(lVar9 + 0x38));
                *(ulong *)(lVar9 + 0x40) = uStack_80;
                *(undefined8 ********)(lVar9 + 0x38) = pppppppuStack_88;
                *(ulong *)(lVar9 + 0x48) = uStack_78;
              }
              else {
                *(ulong *)(lVar9 + 0x40) = uStack_80;
                *(undefined8 ********)(lVar9 + 0x38) = pppppppuStack_88;
                *(ulong *)(lVar9 + 0x48) = uStack_78;
              }
              if ((long)uStack_90 < 0) {
                __ZdlPv(puStack_a0);
              }
            } while (3 < uVar15 - uVar12);
            uVar13 = 0;
LAB_10b2f9334:
            return uVar13 == 0;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10b2f9340; end: 10b2f955f;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f9fa0) */

void FUN_10b2f9340(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined **ppuStack_100;
  uint *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  
  lVar13 = lRam000000011383aa68;
  if (lRam000000011383aa68 == 0) {
    return;
  }
  lVar8 = lRam000000011383aa68;
  _pthread_mutex_trylock();
  if ((int)lVar8 == 0) {
    bVar4 = *(byte *)(param_1 + 0x72);
  }
  else {
    func_0x00010b329e58(lVar13);
    bVar4 = *(byte *)(param_1 + 0x72);
  }
  if (((bVar4 & 1) != 0) ||
     (*(undefined1 *)(param_1 + 0x72) = 1, *(char *)(param_1 + 0x70) != '\x01'))
  goto code_r0x00010bdbf81c;
  piVar1 = (int *)(lRam000000011383aa68 + 0x78);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar8 = *(long *)(lRam000000011383aa68 + 0x80);
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x28) & 1) != 0)) {
LAB_10b2f9438:
    lVar10 = *(long *)(lRam000000011383aa68 + 0x60);
    lVar22 = *(long *)(lRam000000011383aa68 + 0x68);
    puVar21 = (undefined8 *)(lVar22 - lVar10);
    if (puVar21 != (undefined8 *)0x0) goto LAB_10b2f9448;
LAB_10b2f9490:
    puVar18 = (undefined8 *)0x0;
    _pthread_mutex_unlock(lVar13);
    puVar19 = puVar18;
    if (lVar22 == lVar10) goto LAB_10b2f94c8;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0x74);
    if (uVar17 != 0) {
      puVar15 = (uint *)0x0;
      if ((0x3f < uVar17) && ((uVar17 & 7) == 0)) {
        if ((*(uint *)(lVar8 + 0x14) < uVar17 + 0x18) ||
           (((puVar15 = (uint *)(*(long *)(lVar8 + 8) + (ulong)uVar17), puVar15[1] != 0xc8799269 ||
             (*puVar15 < 0x18)) || (*(uint *)(lVar8 + 0x14) < *puVar15 + uVar17)))) {
          puVar15 = (uint *)0x0;
        }
        else if (puVar15[2] != 0xaba17e15) {
          puVar15 = (uint *)0x0;
        }
      }
      puVar14 = (uint *)0x0;
      if (puVar15 != (uint *)0x0) {
        puVar14 = puVar15 + 4;
      }
      *puVar14 = 1;
      goto LAB_10b2f9438;
    }
    lVar10 = param_1;
    FUN_10b2f9c54();
    param_2 = (int)lVar10;
    lVar10 = *(long *)(lRam000000011383aa68 + 0x60);
    lVar22 = *(long *)(lRam000000011383aa68 + 0x68);
    puVar21 = (undefined8 *)(lVar22 - lVar10);
    if (puVar21 == (undefined8 *)0x0) goto LAB_10b2f9490;
LAB_10b2f9448:
    if ((long)puVar21 < 0) {
      func_0x00010bdb3570();
      if (*(int *)(lVar8 + 0x54) == -1) {
        *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar8 + 0x28);
        *(undefined4 *)(lVar8 + 0x54) = 0;
        bVar4 = *(byte *)(lVar8 + 0x47);
        uVar9 = *(ulong *)(lVar8 + 0x38);
        if (-1 < (char)bVar4) {
          uVar9 = (ulong)bVar4;
        }
        if (uVar9 == 0) {
          func_0x00010b307fd0(lVar8 + 0x58,&UNK_10f7443ff);
          cVar5 = *(char *)(lVar8 + 0x73);
          lVar13 = lRam000000011383aa68;
        }
        else {
          plVar12 = (long *)(lVar8 + 0x30);
          if (*(char *)(lVar8 + 0x6f) < '\0') {
            plVar2 = (long *)*plVar12;
            if (-1 < (char)bVar4) {
              plVar2 = plVar12;
            }
            func_0x000107c27ba0(lVar8 + 0x58,plVar2,uVar9);
            cVar5 = *(char *)(lVar8 + 0x73);
            lVar13 = lRam000000011383aa68;
          }
          else if ((char)bVar4 < '\0') {
            func_0x000107c27ba4(lVar8 + 0x58,*plVar12);
            cVar5 = *(char *)(lVar8 + 0x73);
            lVar13 = lRam000000011383aa68;
          }
          else {
            *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar8 + 0x38);
            *(long *)(lVar8 + 0x58) = *plVar12;
            *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar8 + 0x40);
            cVar5 = *(char *)(lVar8 + 0x73);
            lVar13 = lRam000000011383aa68;
          }
        }
        lRam000000011383aa68 = lVar13;
        if ((cVar5 == '\x01') && (lVar13 != 0)) {
          if (param_2 != 0) {
            uVar9 = *(ulong *)(lVar13 + 0x80);
            if (((uVar9 != 0) && ((*(byte *)(uVar9 + 0x28) & 1) == 0)) &&
               (*(char *)(lVar8 + 0x70) == '\x01')) {
              if (*(int *)(lVar8 + 0x54) == -1) {
                *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar8 + 0x28);
                *(undefined4 *)(lVar8 + 0x54) = 0;
                bVar4 = *(byte *)(lVar8 + 0x47);
                uVar11 = *(ulong *)(lVar8 + 0x38);
                if (-1 < (char)bVar4) {
                  uVar11 = (ulong)bVar4;
                }
                if (uVar11 == 0) {
                  func_0x00010b307fd0(lVar8 + 0x58,&UNK_10f7443ff);
                }
                else {
                  plVar12 = (long *)(lVar8 + 0x30);
                  if (*(char *)(lVar8 + 0x6f) < '\0') {
                    plVar2 = (long *)*plVar12;
                    if (-1 < (char)bVar4) {
                      plVar2 = plVar12;
                    }
                    func_0x000107c27ba0(lVar8 + 0x58,plVar2,uVar11);
                  }
                  else if ((char)bVar4 < '\0') {
                    func_0x000107c27ba4(lVar8 + 0x58,*plVar12);
                  }
                  else {
                    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar8 + 0x38);
                    *(long *)(lVar8 + 0x58) = *plVar12;
                    *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar8 + 0x40);
                  }
                }
                if ((*(char *)(lVar8 + 0x73) == '\x01') && (lRam000000011383aa68 != 0)) {
                  FUN_10b2f9c54(*(undefined8 *)(lRam000000011383aa68 + 0x80),lVar8);
                }
              }
              if (*(int *)(lVar8 + 0x74) == 0) {
                bVar4 = *(byte *)(lVar8 + 0x72);
                ppuStack_100 = &PTR_DAT_110cd5318;
                uStack_e0 = 0;
                lStack_e8 = 0x40;
                lStack_f0 = 4;
                puVar15 = (uint *)0x44;
                _malloc();
                if (puVar15 == (uint *)0x0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0,0x10b2fa06c);
                  (*pcVar6)();
                }
                *puVar15 = 0;
                cVar5 = *(char *)(lVar8 + 0x27);
                plStack_c8 = *(long **)(lVar8 + 0x10);
                if (-1 < (long)cVar5) {
                  plStack_c8 = (long *)(lVar8 + 0x10);
                }
                lStack_c0 = *(long *)(lVar8 + 0x18);
                if (-1 < cVar5) {
                  lStack_c0 = (long)cVar5;
                }
                cVar5 = *(char *)(lVar8 + 0x6f);
                plStack_b0 = (long *)*(long *)(lVar8 + 0x58);
                if (-1 < (long)cVar5) {
                  plStack_b0 = (long *)(lVar8 + 0x58);
                }
                lStack_a8 = *(long *)(lVar8 + 0x60);
                if (-1 < cVar5) {
                  lStack_a8 = (long)cVar5;
                }
                puStack_f8 = puVar15;
                func_0x00010b302290(&ppuStack_100,&plStack_c8);
                func_0x00010b302290(&ppuStack_100,&plStack_b0);
                lStack_c0 = 0;
                uStack_b8 = 0;
                plStack_c8 = &lStack_c0;
                func_0x000107c2cb78();
                FUN_10b2fa214();
                plVar12 = plStack_c8;
                while (plVar12 != &lStack_c0) {
                  cVar5 = *(char *)((long)plVar12 + 0x37);
                  plStack_b0 = (long *)plVar12[4];
                  if (-1 < (long)cVar5) {
                    plStack_b0 = plVar12 + 4;
                  }
                  lStack_a8 = plVar12[5];
                  if (-1 < cVar5) {
                    lStack_a8 = (long)cVar5;
                  }
                  cVar5 = *(char *)((long)plVar12 + 0x4f);
                  plStack_d8 = (long *)plVar12[7];
                  if (-1 < (long)cVar5) {
                    plStack_d8 = plVar12 + 7;
                  }
                  lStack_d0 = plVar12[8];
                  if (-1 < cVar5) {
                    lStack_d0 = (long)cVar5;
                  }
                  func_0x00010b302290(&ppuStack_100,&plStack_b0);
                  func_0x00010b302290(&ppuStack_100,&plStack_d8);
                  plVar2 = (long *)plVar12[1];
                  plVar20 = plVar12;
                  if ((long *)plVar12[1] == (long *)0x0) {
                    do {
                      plVar12 = (long *)plVar20[2];
                      bVar7 = (long *)*plVar12 != plVar20;
                      plVar20 = plVar12;
                    } while (bVar7);
                  }
                  else {
                    do {
                      plVar12 = plVar2;
                      plVar2 = (long *)*plVar12;
                    } while ((long *)*plVar12 != (long *)0x0);
                  }
                }
                func_0x000107c34ee4(&plStack_c8,lStack_c0);
                puVar15 = puStack_f8;
                if (puStack_f8 == (uint *)0x0) {
                  lVar13 = 8;
                }
                else {
                  lVar13 = lStack_f0 + (ulong)*puStack_f8 + 8;
                }
                uVar11 = uVar9;
                FUN_10b2fe960(uVar9,lVar13,0xaba17e15);
                plVar12 = *(long **)(uVar9 + 0x30);
                uVar17 = (uint)uVar11;
                if (uVar17 == 0) {
                  if (plVar12 != (long *)0x0) {
                    (**(code **)(*plVar12 + 0x30))(plVar12,0);
                  }
                }
                else {
                  if (plVar12 != (long *)0x0) {
                    (**(code **)(*plVar12 + 0x30))(plVar12,lVar13);
                  }
                  puVar15 = puStack_f8;
                  if (((((uVar17 < 0x40) || ((uVar11 & 7) != 0)) ||
                       (*(uint *)(uVar9 + 0x14) < uVar17 + 0x18)) ||
                      ((puVar14 = (uint *)(*(long *)(uVar9 + 8) + (uVar11 & 0xffffffff)),
                       puVar14[1] != 0xc8799269 || (*puVar14 < 0x18)))) ||
                     (*(uint *)(uVar9 + 0x14) < *puVar14 + uVar17)) {
                    puVar14 = (uint *)0x0;
                    puVar3 = (uint *)0x0;
                    uRam0000000000000000 = (uint)bVar4;
                  }
                  else {
                    if (puVar14[2] != 0xaba17e15) {
                      puVar14 = (uint *)0x0;
                    }
                    puVar3 = (uint *)0x0;
                    if (puVar14 != (uint *)0x0) {
                      puVar3 = puVar14 + 4;
                    }
                    *puVar3 = (uint)bVar4;
                  }
                  uVar16 = 0;
                  if (puStack_f8 != (uint *)0x0) {
                    uVar16 = *puStack_f8 + (int)lStack_f0;
                  }
                  puVar3[1] = uVar16;
                  if (puStack_f8 == (uint *)0x0) {
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = lStack_f0 + (ulong)*puStack_f8;
                  }
                  _memcpy(puVar14 + 6,puStack_f8,lVar13);
                  FUN_10b2febb8(uVar9,uVar11);
                  *(uint *)(lVar8 + 0x74) = uVar17;
                }
                if (lStack_e8 != -1) {
                  _free(puVar15);
                }
              }
            }
            return;
          }
          lVar10 = lVar13;
          _pthread_mutex_trylock();
          if ((int)lVar10 != 0) {
            func_0x00010b329e58(lVar13);
          }
          FUN_10b2f9c54(*(undefined8 *)(lRam000000011383aa68 + 0x80),lVar8);
code_r0x00010bdbf81c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar13);
          return;
        }
      }
      return;
    }
    puVar18 = puVar21;
    __Znwm();
    _memcpy();
    _pthread_mutex_unlock(lVar13);
    puVar19 = puVar18;
    if (lVar22 == lVar10) goto LAB_10b2f94c8;
  }
  do {
    (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,param_1 + 0x10,param_1 + 0x58);
    puVar21 = puVar21 + -1;
    puVar18 = puVar18 + 1;
  } while (puVar21 != (undefined8 *)0x0);
LAB_10b2f94c8:
  piVar1 = (int *)(lRam000000011383aa68 + 0x78);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (puVar19 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar19);
  return;
}



/* Entry: 10b2f9560; end: 10b2f96df;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f9fa0) */

void FUN_10b2f9560(long param_1,int param_2)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined **ppuStack_b0;
  uint *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (*(int *)(param_1 + 0x54) == -1) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x54) = 0;
    bVar3 = *(byte *)(param_1 + 0x47);
    uVar7 = *(ulong *)(param_1 + 0x38);
    if (-1 < (char)bVar3) {
      uVar7 = (ulong)bVar3;
    }
    if (uVar7 == 0) {
      func_0x00010b307fd0(param_1 + 0x58,&UNK_10f7443ff);
      cVar4 = *(char *)(param_1 + 0x73);
      lVar12 = lRam000000011383aa68;
    }
    else {
      plVar11 = (long *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x6f) < '\0') {
        plVar1 = (long *)*plVar11;
        if (-1 < (char)bVar3) {
          plVar1 = plVar11;
        }
        func_0x000107c27ba0(param_1 + 0x58,plVar1,uVar7);
        cVar4 = *(char *)(param_1 + 0x73);
        lVar12 = lRam000000011383aa68;
      }
      else if ((char)bVar3 < '\0') {
        func_0x000107c27ba4(param_1 + 0x58,*plVar11);
        cVar4 = *(char *)(param_1 + 0x73);
        lVar12 = lRam000000011383aa68;
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x38);
        *(long *)(param_1 + 0x58) = *plVar11;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x40);
        cVar4 = *(char *)(param_1 + 0x73);
        lVar12 = lRam000000011383aa68;
      }
    }
    lRam000000011383aa68 = lVar12;
    if ((cVar4 == '\x01') && (lVar12 != 0)) {
      if (param_2 == 0) {
        lVar8 = lVar12;
        _pthread_mutex_trylock();
        if ((int)lVar8 != 0) {
          func_0x00010b329e58(lVar12);
        }
        FUN_10b2f9c54(*(undefined8 *)(lRam000000011383aa68 + 0x80),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar12);
        return;
      }
      uVar7 = *(ulong *)(lVar12 + 0x80);
      if (((uVar7 != 0) && ((*(byte *)(uVar7 + 0x28) & 1) == 0)) &&
         (*(char *)(param_1 + 0x70) == '\x01')) {
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x54) = 0;
          bVar3 = *(byte *)(param_1 + 0x47);
          uVar10 = *(ulong *)(param_1 + 0x38);
          if (-1 < (char)bVar3) {
            uVar10 = (ulong)bVar3;
          }
          if (uVar10 == 0) {
            func_0x00010b307fd0(param_1 + 0x58,&UNK_10f7443ff);
          }
          else {
            plVar11 = (long *)(param_1 + 0x30);
            if (*(char *)(param_1 + 0x6f) < '\0') {
              plVar1 = (long *)*plVar11;
              if (-1 < (char)bVar3) {
                plVar1 = plVar11;
              }
              func_0x000107c27ba0(param_1 + 0x58,plVar1,uVar10);
            }
            else if ((char)bVar3 < '\0') {
              func_0x000107c27ba4(param_1 + 0x58,*plVar11);
            }
            else {
              *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x38);
              *(long *)(param_1 + 0x58) = *plVar11;
              *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x40);
            }
          }
          if ((*(char *)(param_1 + 0x73) == '\x01') && (lRam000000011383aa68 != 0)) {
            FUN_10b2f9c54(*(undefined8 *)(lRam000000011383aa68 + 0x80),param_1);
          }
        }
        if (*(int *)(param_1 + 0x74) == 0) {
          bVar3 = *(byte *)(param_1 + 0x72);
          ppuStack_b0 = &PTR_DAT_110cd5318;
          uStack_90 = 0;
          lStack_98 = 0x40;
          lStack_a0 = 4;
          puVar9 = (uint *)0x44;
          _malloc();
          if (puVar9 == (uint *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x10b2fa06c);
            (*pcVar5)();
          }
          *puVar9 = 0;
          cVar4 = *(char *)(param_1 + 0x27);
          plStack_78 = *(long **)(param_1 + 0x10);
          if (-1 < (long)cVar4) {
            plStack_78 = (long *)(param_1 + 0x10);
          }
          lStack_70 = *(long *)(param_1 + 0x18);
          if (-1 < cVar4) {
            lStack_70 = (long)cVar4;
          }
          cVar4 = *(char *)(param_1 + 0x6f);
          plStack_60 = (long *)*(long *)(param_1 + 0x58);
          if (-1 < (long)cVar4) {
            plStack_60 = (long *)(param_1 + 0x58);
          }
          lStack_58 = *(long *)(param_1 + 0x60);
          if (-1 < cVar4) {
            lStack_58 = (long)cVar4;
          }
          puStack_a8 = puVar9;
          func_0x00010b302290(&ppuStack_b0,&plStack_78);
          func_0x00010b302290(&ppuStack_b0,&plStack_60);
          lStack_70 = 0;
          uStack_68 = 0;
          plStack_78 = &lStack_70;
          func_0x000107c2cb78();
          FUN_10b2fa214();
          plVar11 = plStack_78;
          while (plVar11 != &lStack_70) {
            cVar4 = *(char *)((long)plVar11 + 0x37);
            plStack_60 = (long *)plVar11[4];
            if (-1 < (long)cVar4) {
              plStack_60 = plVar11 + 4;
            }
            lStack_58 = plVar11[5];
            if (-1 < cVar4) {
              lStack_58 = (long)cVar4;
            }
            cVar4 = *(char *)((long)plVar11 + 0x4f);
            plStack_88 = (long *)plVar11[7];
            if (-1 < (long)cVar4) {
              plStack_88 = plVar11 + 7;
            }
            lStack_80 = plVar11[8];
            if (-1 < cVar4) {
              lStack_80 = (long)cVar4;
            }
            func_0x00010b302290(&ppuStack_b0,&plStack_60);
            func_0x00010b302290(&ppuStack_b0,&plStack_88);
            plVar1 = (long *)plVar11[1];
            plVar16 = plVar11;
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar11 = (long *)plVar16[2];
                bVar6 = (long *)*plVar11 != plVar16;
                plVar16 = plVar11;
              } while (bVar6);
            }
            else {
              do {
                plVar11 = plVar1;
                plVar1 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
          }
          func_0x000107c34ee4(&plStack_78,lStack_70);
          puVar9 = puStack_a8;
          if (puStack_a8 == (uint *)0x0) {
            lVar12 = 8;
          }
          else {
            lVar12 = lStack_a0 + (ulong)*puStack_a8 + 8;
          }
          uVar10 = uVar7;
          FUN_10b2fe960(uVar7,lVar12,0xaba17e15);
          plVar11 = *(long **)(uVar7 + 0x30);
          uVar15 = (uint)uVar10;
          if (uVar15 == 0) {
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x30))(plVar11,0);
            }
          }
          else {
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x30))(plVar11,lVar12);
            }
            puVar9 = puStack_a8;
            if (((uVar15 < 0x40) || ((uVar10 & 7) != 0)) ||
               ((*(uint *)(uVar7 + 0x14) < uVar15 + 0x18 ||
                (((puVar13 = (uint *)(*(long *)(uVar7 + 8) + (uVar10 & 0xffffffff)),
                  puVar13[1] != 0xc8799269 || (*puVar13 < 0x18)) ||
                 (*(uint *)(uVar7 + 0x14) < *puVar13 + uVar15)))))) {
              puVar13 = (uint *)0x0;
              puVar2 = (uint *)0x0;
              uRam0000000000000000 = (uint)bVar3;
            }
            else {
              if (puVar13[2] != 0xaba17e15) {
                puVar13 = (uint *)0x0;
              }
              puVar2 = (uint *)0x0;
              if (puVar13 != (uint *)0x0) {
                puVar2 = puVar13 + 4;
              }
              *puVar2 = (uint)bVar3;
            }
            uVar14 = 0;
            if (puStack_a8 != (uint *)0x0) {
              uVar14 = *puStack_a8 + (int)lStack_a0;
            }
            puVar2[1] = uVar14;
            if (puStack_a8 == (uint *)0x0) {
              lVar12 = 0;
            }
            else {
              lVar12 = lStack_a0 + (ulong)*puStack_a8;
            }
            _memcpy(puVar13 + 6,puStack_a8,lVar12);
            FUN_10b2febb8(uVar7,uVar10);
            *(uint *)(param_1 + 0x74) = uVar15;
          }
          if (lStack_98 != -1) {
            _free(puVar9);
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10b2f96e0; end: 10b2f982b;  */

long FUN_10b2f96e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = lRam000000011383aa68;
  if (lRam000000011383aa68 == 0) {
    return 0;
  }
  lVar8 = lRam000000011383aa68;
  _pthread_mutex_trylock();
  if ((int)lVar8 == 0) {
    plVar10 = (long *)(lRam000000011383aa68 + 0x48);
    plVar11 = (long *)*plVar10;
  }
  else {
    func_0x00010b329e58(lVar5);
    plVar10 = (long *)(lRam000000011383aa68 + 0x48);
    plVar11 = (long *)*plVar10;
  }
  plVar9 = plVar10;
  if (plVar11 != (long *)0x0) {
    do {
      cVar4 = *(char *)((long)plVar11 + 0x37);
      plVar6 = (long *)plVar11[4];
      if (-1 < (long)cVar4) {
        plVar6 = plVar11 + 4;
      }
      uVar3 = plVar11[5];
      if (-1 < cVar4) {
        uVar3 = (long)cVar4;
      }
      uVar1 = param_2;
      if (uVar3 <= param_2) {
        uVar1 = uVar3;
      }
      _memcmp(plVar6,param_1,uVar1);
      uVar7 = (uint)((ulong)plVar6 >> 0x1f) & 1;
      uVar1 = 8;
      if (uVar3 >= param_2) {
        uVar1 = 0;
      }
      uVar2 = (ulong)((uint)((ulong)plVar6 >> 0x1c) & 8);
      if ((int)plVar6 == 0) {
        uVar7 = (uint)(uVar3 < param_2);
        uVar2 = uVar1;
      }
      if (uVar7 == 0) {
        plVar9 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + uVar2);
    } while (plVar11 != (long *)0x0);
    if (plVar9 != plVar10) {
      cVar4 = *(char *)((long)plVar9 + 0x37);
      plVar10 = (long *)plVar9[4];
      if (-1 < (long)cVar4) {
        plVar10 = plVar9 + 4;
      }
      uVar3 = plVar9[5];
      if (-1 < cVar4) {
        uVar3 = (long)cVar4;
      }
      uVar1 = uVar3;
      if (param_2 <= uVar3) {
        uVar1 = param_2;
      }
      _memcmp(param_1,plVar10,uVar1);
      if ((int)param_1 == 0) {
        if (uVar3 <= param_2) goto LAB_10b2f980c;
      }
      else if (-1 < (int)param_1) {
LAB_10b2f980c:
        lVar8 = plVar9[7];
        goto LAB_10b2f97e8;
      }
    }
  }
  lVar8 = 0;
LAB_10b2f97e8:
  _pthread_mutex_unlock(lVar5);
  return lVar8;
}



/* Entry: 10b2f982c; end: 10b2f9c53;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f9fa0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2f982c(long *param_1,undefined8 *******param_2)

{
  undefined8 *****pppppuVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  uint uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 ******ppppppuVar25;
  undefined **ppuStack_150;
  uint *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 uStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  long *plStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  pppppppuVar11 = pppppppuRam000000011383aa68;
  if (pppppppuRam000000011383aa68 == (undefined8 *******)0x0) {
    return;
  }
  pppppppuVar7 = pppppppuRam000000011383aa68;
  _pthread_mutex_trylock();
  if ((int)pppppppuVar7 == 0) {
    pppppppuStack_98 = pppppppuVar11;
    pppppppuVar24 = (undefined8 *******)pppppppuRam000000011383aa68[8];
    pppppppuVar22 = pppppppuRam000000011383aa68 + 9;
    if (pppppppuVar24 == pppppppuVar22) goto LAB_10b2f9c24;
  }
  else {
    pppppppuVar7 = pppppppuVar11;
    func_0x00010b329e58();
    pppppppuStack_98 = pppppppuVar11;
    pppppppuVar24 = (undefined8 *******)pppppppuRam000000011383aa68[8];
    pppppppuVar22 = pppppppuRam000000011383aa68 + 9;
    if (pppppppuVar24 == pppppppuVar22) goto LAB_10b2f9c24;
  }
  pppppppuStack_98 = pppppppuVar11;
  do {
    pppppppuStack_78 = (undefined8 *******)0x0;
    ppppppuStack_80 = (undefined8 ******)0x0;
    ppppppuStack_68 = (undefined8 ******)0x0;
    ppppppuStack_70 = (undefined8 ******)0x0;
    ppppppuStack_88 = (undefined8 ******)0x0;
    pppppppuStack_90 = (undefined8 *******)0x0;
    ppppppuVar17 = pppppppuVar24[7];
    if ((*(char *)((long)ppppppuVar17 + 0x72) == '\x01') &&
       (*(char *)(ppppppuVar17 + 0xe) == '\x01')) {
      if (&pppppppuStack_90 == (undefined8 ********)(ppppppuVar17 + 2)) {
LAB_10b2f98f4:
        if (&pppppppuStack_78 == (undefined8 ********)(ppppppuVar17 + 0xb)) goto LAB_10b2f9968;
LAB_10b2f9900:
        bVar3 = *(byte *)((long)ppppppuVar17 + 0x6f);
        if ((long)ppppppuStack_68 < 0) {
          pppppuVar1 = ppppppuVar17[0xc];
          param_2 = (undefined8 *******)ppppppuVar17[0xb];
          if (-1 < (char)bVar3) {
            pppppuVar1 = (undefined8 *****)(ulong)bVar3;
            param_2 = (undefined8 *******)(ppppppuVar17 + 0xb);
          }
          pppppppuVar7 = &pppppppuStack_78;
          func_0x000107c27ba0(&pppppppuStack_78,param_2,pppppuVar1);
          goto LAB_10b2f9968;
        }
        if (-1 < (char)bVar3) {
          ppppppuStack_70 = (undefined8 ******)ppppppuVar17[0xc];
          pppppppuStack_78 = (undefined8 *******)ppppppuVar17[0xb];
          ppppppuStack_68 = (undefined8 ******)ppppppuVar17[0xd];
          pppppppuVar11 = (undefined8 *******)param_1[1];
          pppppppuVar10 = (undefined8 *******)param_1[2];
          if (pppppppuVar10 <= pppppppuVar11) goto LAB_10b2f99ec;
          goto LAB_10b2f9974;
        }
        param_2 = (undefined8 *******)ppppppuVar17[0xb];
        pppppppuVar7 = &pppppppuStack_78;
        func_0x000107c27ba4(&pppppppuStack_78,param_2,ppppppuVar17[0xc]);
        pppppppuVar11 = (undefined8 *******)param_1[1];
        pppppppuVar10 = (undefined8 *******)param_1[2];
        if (pppppppuVar11 < pppppppuVar10) goto LAB_10b2f9974;
LAB_10b2f99ec:
        pppppppuVar18 = (undefined8 *******)((long)pppppppuVar11 - *param_1);
        uVar13 = ((long)pppppppuVar18 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar13) {
          func_0x00010bdb3564();
LAB_10b2f9c50:
          func_0x00010b2ed0ac();
          uStack_f0 = 0xaaaaaaaaaaaaaaab;
          uStack_d8 = 0x555555555555555;
          pcStack_a8 = FUN_10b2f9c54;
          if (((pppppppuVar7 != (undefined8 *******)0x0) && (((ulong)pppppppuVar7[5] & 1) == 0)) &&
             (*(char *)(param_2 + 0xe) == '\x01')) {
            pppppppuStack_e8 = pppppppuVar22;
            pppppppuStack_e0 = &pppppppuStack_90;
            pppppppuStack_d0 = pppppppuVar11;
            pppppppuStack_c8 = &pppppppuStack_78;
            plStack_c0 = param_1;
            pppppppuStack_b8 = pppppppuVar18;
            puStack_b0 = &stack0xfffffffffffffff0;
            if (*(int *)((long)param_2 + 0x54) == -1) {
              *(undefined4 *)((long)param_2 + 0x4c) = *(undefined4 *)(param_2 + 5);
              *(undefined4 *)((long)param_2 + 0x54) = 0;
              bVar3 = *(byte *)((long)param_2 + 0x47);
              ppppppuVar17 = param_2[7];
              if (-1 < (char)bVar3) {
                ppppppuVar17 = (undefined8 ******)(ulong)bVar3;
              }
              if (ppppppuVar17 == (undefined8 ******)0x0) {
                func_0x00010b307fd0(param_2 + 0xb,&UNK_10f7443ff);
              }
              else {
                pppppppuVar11 = param_2 + 6;
                if (*(char *)((long)param_2 + 0x6f) < '\0') {
                  pppppppuVar22 = (undefined8 *******)*pppppppuVar11;
                  if (-1 < (char)bVar3) {
                    pppppppuVar22 = pppppppuVar11;
                  }
                  func_0x000107c27ba0(param_2 + 0xb,pppppppuVar22,ppppppuVar17);
                }
                else if ((char)bVar3 < '\0') {
                  func_0x000107c27ba4(param_2 + 0xb,*pppppppuVar11);
                }
                else {
                  param_2[0xc] = param_2[7];
                  param_2[0xb] = *pppppppuVar11;
                  param_2[0xd] = param_2[8];
                }
              }
              if ((*(char *)((long)param_2 + 0x73) == '\x01') &&
                 (pppppppuRam000000011383aa68 != (undefined8 *******)0x0)) {
                FUN_10b2f9c54(pppppppuRam000000011383aa68[0x10],param_2);
              }
            }
            if (*(int *)((long)param_2 + 0x74) == 0) {
              bVar3 = *(byte *)((long)param_2 + 0x72);
              ppuStack_150 = &PTR_DAT_110cd5318;
              uStack_130 = 0;
              lStack_138 = 0x40;
              lStack_140 = 4;
              puVar8 = (uint *)0x44;
              _malloc();
              if (puVar8 == (uint *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(0,0x10b2fa06c);
                (*pcVar5)();
              }
              *puVar8 = 0;
              cVar4 = *(char *)((long)param_2 + 0x27);
              pppppppuStack_118 = (undefined8 *******)param_2[2];
              if (-1 < (long)cVar4) {
                pppppppuStack_118 = param_2 + 2;
              }
              ppppppuStack_110 = param_2[3];
              if (-1 < cVar4) {
                ppppppuStack_110 = (undefined8 ******)(long)cVar4;
              }
              cVar4 = *(char *)((long)param_2 + 0x6f);
              pppppppuStack_100 = (undefined8 *******)param_2[0xb];
              if (-1 < (long)cVar4) {
                pppppppuStack_100 = param_2 + 0xb;
              }
              ppppppuStack_f8 = param_2[0xc];
              if (-1 < cVar4) {
                ppppppuStack_f8 = (undefined8 ******)(long)cVar4;
              }
              puStack_148 = puVar8;
              func_0x00010b302290(&ppuStack_150,&pppppppuStack_118);
              func_0x00010b302290(&ppuStack_150,&pppppppuStack_100);
              ppppppuStack_110 = (undefined8 ******)0x0;
              uStack_108 = 0;
              pppppppuStack_118 = &ppppppuStack_110;
              func_0x000107c2cb78();
              FUN_10b2fa214();
              pppppppuVar11 = pppppppuStack_118;
              while (pppppppuVar11 != &ppppppuStack_110) {
                cVar4 = *(char *)((long)pppppppuVar11 + 0x37);
                pppppppuStack_100 = (undefined8 *******)pppppppuVar11[4];
                if (-1 < (long)cVar4) {
                  pppppppuStack_100 = pppppppuVar11 + 4;
                }
                ppppppuStack_f8 = pppppppuVar11[5];
                if (-1 < cVar4) {
                  ppppppuStack_f8 = (undefined8 ******)(long)cVar4;
                }
                cVar4 = *(char *)((long)pppppppuVar11 + 0x4f);
                ppppppuStack_128 = pppppppuVar11[7];
                if (-1 < (long)cVar4) {
                  ppppppuStack_128 = pppppppuVar11 + 7;
                }
                pppppuStack_120 = pppppppuVar11[8];
                if (-1 < cVar4) {
                  pppppuStack_120 = (undefined8 *****)(long)cVar4;
                }
                func_0x00010b302290(&ppuStack_150,&pppppppuStack_100);
                func_0x00010b302290(&ppuStack_150,&ppppppuStack_128);
                ppppppuVar17 = pppppppuVar11[1];
                ppppppuVar25 = pppppppuVar11;
                if (pppppppuVar11[1] == (undefined8 ******)0x0) {
                  do {
                    pppppppuVar11 = (undefined8 *******)ppppppuVar25[2];
                    bVar6 = *pppppppuVar11 != ppppppuVar25;
                    ppppppuVar25 = pppppppuVar11;
                  } while (bVar6);
                }
                else {
                  do {
                    pppppppuVar11 = (undefined8 *******)ppppppuVar17;
                    ppppppuVar17 = *pppppppuVar11;
                  } while (*pppppppuVar11 != (undefined8 ******)0x0);
                }
              }
              func_0x000107c34ee4(&pppppppuStack_118,ppppppuStack_110);
              puVar8 = puStack_148;
              if (puStack_148 == (uint *)0x0) {
                lVar9 = 8;
              }
              else {
                lVar9 = lStack_140 + (ulong)*puStack_148 + 8;
              }
              pppppppuVar11 = pppppppuVar7;
              FUN_10b2fe960(pppppppuVar7,lVar9,0xaba17e15);
              ppppppuVar17 = pppppppuVar7[6];
              uVar20 = (uint)pppppppuVar11;
              if (uVar20 == 0) {
                if (ppppppuVar17 != (undefined8 ******)0x0) {
                  (*(code *)(*ppppppuVar17)[6])(ppppppuVar17,0);
                }
              }
              else {
                if (ppppppuVar17 != (undefined8 ******)0x0) {
                  (*(code *)(*ppppppuVar17)[6])(ppppppuVar17,lVar9);
                }
                puVar8 = puStack_148;
                if (((uVar20 < 0x40) || (((ulong)pppppppuVar11 & 7) != 0)) ||
                   ((*(uint *)((long)pppppppuVar7 + 0x14) < uVar20 + 0x18 ||
                    (((puVar12 = (uint *)((long)pppppppuVar7[1] +
                                         ((ulong)pppppppuVar11 & 0xffffffff)),
                      puVar12[1] != 0xc8799269 || (*puVar12 < 0x18)) ||
                     (*(uint *)((long)pppppppuVar7 + 0x14) < *puVar12 + uVar20)))))) {
                  puVar12 = (uint *)0x0;
                  puVar2 = (uint *)0x0;
                  uRam0000000000000000 = (uint)bVar3;
                }
                else {
                  if (puVar12[2] != 0xaba17e15) {
                    puVar12 = (uint *)0x0;
                  }
                  puVar2 = (uint *)0x0;
                  if (puVar12 != (uint *)0x0) {
                    puVar2 = puVar12 + 4;
                  }
                  *puVar2 = (uint)bVar3;
                }
                uVar15 = 0;
                if (puStack_148 != (uint *)0x0) {
                  uVar15 = *puStack_148 + (int)lStack_140;
                }
                puVar2[1] = uVar15;
                if (puStack_148 == (uint *)0x0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = lStack_140 + (ulong)*puStack_148;
                }
                _memcpy(puVar12 + 6,puStack_148,lVar9);
                FUN_10b2febb8(pppppppuVar7,pppppppuVar11);
                *(uint *)((long)param_2 + 0x74) = uVar20;
              }
              if (lStack_138 != -1) {
                _free(puVar8);
              }
            }
          }
          return;
        }
        lVar9 = (long)pppppppuVar10 - *param_1 >> 4;
        uVar16 = lVar9 * 0x5555555555555556;
        if (uVar16 < uVar13 || uVar16 - uVar13 == 0) {
          uVar16 = uVar13;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar16 = 0x555555555555555;
        }
        if (uVar16 == 0) {
          pppppppuVar10 = (undefined8 *******)0x0;
          if (-1 < (long)ppppppuStack_80) goto LAB_10b2f9a58;
LAB_10b2f9aa8:
          pppppppuVar7 = pppppppuVar18;
          param_2 = pppppppuStack_90;
          func_0x000107c3192c(pppppppuVar18,pppppppuStack_90,ppppppuStack_88);
          if ((long)ppppppuStack_68 < 0) goto LAB_10b2f9abc;
LAB_10b2f9a70:
          pppppppuVar18[5] = ppppppuStack_68;
          pppppppuVar18[4] = ppppppuStack_70;
          pppppppuVar18[3] = pppppppuStack_78;
          pppppppuVar21 = (undefined8 *******)*param_1;
          pppppppuVar19 = (undefined8 *******)param_1[1];
          puVar14 = (undefined8 *)
                    ((long)pppppppuVar18 + ((long)pppppppuVar21 - (long)pppppppuVar19));
          puVar23 = puVar14;
          pppppppuVar11 = pppppppuVar21;
          if (pppppppuVar19 != pppppppuVar21) {
LAB_10b2f9ae4:
            do {
              ppppppuVar25 = pppppppuVar21[1];
              ppppppuVar17 = *pppppppuVar21;
              puVar14[2] = pppppppuVar21[2];
              puVar14[1] = ppppppuVar25;
              *puVar14 = ppppppuVar17;
              pppppppuVar21[1] = (undefined8 ******)0x0;
              pppppppuVar21[2] = (undefined8 ******)0x0;
              *pppppppuVar21 = (undefined8 ******)0x0;
              ppppppuVar25 = pppppppuVar21[4];
              ppppppuVar17 = pppppppuVar21[3];
              puVar14[5] = pppppppuVar21[5];
              puVar14[4] = ppppppuVar25;
              puVar14[3] = ppppppuVar17;
              pppppppuVar21[4] = (undefined8 ******)0x0;
              pppppppuVar21[5] = (undefined8 ******)0x0;
              pppppppuVar21[3] = (undefined8 ******)0x0;
              pppppppuVar21 = pppppppuVar21 + 6;
              puVar14 = puVar14 + 6;
            } while (pppppppuVar21 != pppppppuVar19);
            do {
              if (*(char *)((long)pppppppuVar11 + 0x2f) < '\0') {
                pppppppuVar7 = (undefined8 *******)pppppppuVar11[3];
                __ZdlPv();
                cVar4 = *(char *)((long)pppppppuVar11 + 0x17);
              }
              else {
                cVar4 = *(char *)((long)pppppppuVar11 + 0x17);
              }
              if (cVar4 < '\0') {
                pppppppuVar7 = (undefined8 *******)*pppppppuVar11;
                __ZdlPv();
              }
              pppppppuVar11 = pppppppuVar11 + 6;
            } while (pppppppuVar11 != pppppppuVar19);
            pppppppuVar21 = (undefined8 *******)*param_1;
            puVar14 = puVar23;
          }
        }
        else {
          if (0x555555555555555 < uVar16) goto LAB_10b2f9c50;
          pppppppuVar7 = (undefined8 *******)(uVar16 * 0x30);
          __Znwm();
          pppppppuVar18 = (undefined8 *******)((long)pppppppuVar7 + (long)pppppppuVar18);
          pppppppuVar10 = pppppppuVar7;
          if ((long)ppppppuStack_80 < 0) goto LAB_10b2f9aa8;
LAB_10b2f9a58:
          pppppppuVar18[2] = ppppppuStack_80;
          pppppppuVar18[1] = ppppppuStack_88;
          *pppppppuVar18 = pppppppuStack_90;
          if (-1 < (long)ppppppuStack_68) goto LAB_10b2f9a70;
LAB_10b2f9abc:
          pppppppuVar7 = pppppppuVar18 + 3;
          param_2 = pppppppuStack_78;
          func_0x000107c3192c(pppppppuVar7,pppppppuStack_78,ppppppuStack_70);
          pppppppuVar21 = (undefined8 *******)*param_1;
          pppppppuVar19 = (undefined8 *******)param_1[1];
          puVar14 = (undefined8 *)
                    ((long)pppppppuVar18 + ((long)pppppppuVar21 - (long)pppppppuVar19));
          puVar23 = puVar14;
          pppppppuVar11 = pppppppuVar21;
          if (pppppppuVar19 != pppppppuVar21) goto LAB_10b2f9ae4;
        }
        pppppppuVar11 = pppppppuVar18 + 6;
        *param_1 = (long)puVar14;
        param_1[1] = (long)pppppppuVar11;
        param_1[2] = (long)(pppppppuVar10 + uVar16 * 6);
        if (pppppppuVar21 != (undefined8 *******)0x0) {
          __ZdlPv();
          pppppppuVar7 = pppppppuVar21;
        }
      }
      else {
        if (-1 < *(char *)((long)ppppppuVar17 + 0x27)) {
          ppppppuStack_88 = (undefined8 ******)ppppppuVar17[3];
          pppppppuStack_90 = (undefined8 *******)ppppppuVar17[2];
          ppppppuStack_80 = (undefined8 ******)ppppppuVar17[4];
          goto LAB_10b2f98f4;
        }
        param_2 = (undefined8 *******)ppppppuVar17[2];
        pppppppuVar7 = &pppppppuStack_90;
        func_0x000107c27ba4(pppppppuVar7,param_2,ppppppuVar17[3]);
        if (&pppppppuStack_78 != (undefined8 ********)(ppppppuVar17 + 0xb)) goto LAB_10b2f9900;
LAB_10b2f9968:
        pppppppuVar11 = (undefined8 *******)param_1[1];
        pppppppuVar10 = (undefined8 *******)param_1[2];
        if (pppppppuVar10 <= pppppppuVar11) goto LAB_10b2f99ec;
LAB_10b2f9974:
        if ((long)ppppppuStack_80 < 0) {
          pppppppuVar7 = pppppppuVar11;
          param_2 = pppppppuStack_90;
          func_0x000107c3192c(pppppppuVar11,pppppppuStack_90,ppppppuStack_88);
          pppppppuVar10 = pppppppuStack_78;
        }
        else {
          pppppppuVar11[2] = ppppppuStack_80;
          pppppppuVar11[1] = ppppppuStack_88;
          *pppppppuVar11 = pppppppuStack_90;
          pppppppuVar10 = pppppppuStack_78;
        }
        pppppppuStack_78 = pppppppuVar10;
        if ((long)ppppppuStack_68 < 0) {
          pppppppuVar7 = pppppppuVar11 + 3;
          func_0x000107c3192c(pppppppuVar7,pppppppuVar10,ppppppuStack_70);
          pppppppuVar11 = pppppppuVar11 + 6;
          param_2 = pppppppuVar10;
        }
        else {
          pppppppuVar11[5] = ppppppuStack_68;
          pppppppuVar11[4] = ppppppuStack_70;
          pppppppuVar11[3] = pppppppuVar10;
          pppppppuVar11 = pppppppuVar11 + 6;
        }
      }
      param_1[1] = (long)pppppppuVar11;
      if (-1 < (long)ppppppuStack_68) goto LAB_10b2f9ba8;
      pppppppuVar7 = pppppppuStack_78;
      __ZdlPv();
      if ((long)ppppppuStack_80 < 0) goto LAB_10b2f9bcc;
LAB_10b2f9bb0:
      pppppppuVar11 = (undefined8 *******)pppppppuVar24[1];
      if ((undefined8 *******)pppppppuVar24[1] == (undefined8 *******)0x0) goto LAB_10b2f9bec;
LAB_10b2f9bdc:
      do {
        pppppppuVar10 = pppppppuVar11;
        pppppppuVar11 = (undefined8 *******)*pppppppuVar10;
      } while ((undefined8 *******)*pppppppuVar10 != (undefined8 *******)0x0);
    }
    else {
LAB_10b2f9ba8:
      if (-1 < (long)ppppppuStack_80) goto LAB_10b2f9bb0;
LAB_10b2f9bcc:
      pppppppuVar7 = pppppppuStack_90;
      __ZdlPv();
      pppppppuVar11 = (undefined8 *******)pppppppuVar24[1];
      if ((undefined8 *******)pppppppuVar24[1] != (undefined8 *******)0x0) goto LAB_10b2f9bdc;
LAB_10b2f9bec:
      do {
        pppppppuVar10 = (undefined8 *******)pppppppuVar24[2];
        bVar6 = (undefined8 *******)*pppppppuVar10 != pppppppuVar24;
        pppppppuVar24 = pppppppuVar10;
      } while (bVar6);
    }
    pppppppuVar24 = pppppppuVar10;
  } while (pppppppuVar10 != pppppppuVar22);
LAB_10b2f9c24:
  _pthread_mutex_unlock(pppppppuStack_98);
  return;
}



/* Entry: 10b2f9c54; end: 10b2fa073;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f9fa0) */

void FUN_10b2f9c54(ulong param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  undefined **ppuStack_b0;
  uint *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) &&
     (*(char *)(param_2 + 0x70) == '\x01')) {
    if (*(int *)(param_2 + 0x54) == -1) {
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_2 + 0x54) = 0;
      bVar3 = *(byte *)(param_2 + 0x47);
      uVar8 = *(ulong *)(param_2 + 0x38);
      if (-1 < (char)bVar3) {
        uVar8 = (ulong)bVar3;
      }
      if (uVar8 == 0) {
        func_0x00010b307fd0(param_2 + 0x58,&UNK_10f7443ff);
      }
      else {
        plVar9 = (long *)(param_2 + 0x30);
        if (*(char *)(param_2 + 0x6f) < '\0') {
          plVar1 = (long *)*plVar9;
          if (-1 < (char)bVar3) {
            plVar1 = plVar9;
          }
          func_0x000107c27ba0(param_2 + 0x58,plVar1,uVar8);
        }
        else if ((char)bVar3 < '\0') {
          func_0x000107c27ba4(param_2 + 0x58,*plVar9);
        }
        else {
          *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x38);
          *(long *)(param_2 + 0x58) = *plVar9;
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x40);
        }
      }
      if ((*(char *)(param_2 + 0x73) == '\x01') && (lRam000000011383aa68 != 0)) {
        FUN_10b2f9c54(*(undefined8 *)(lRam000000011383aa68 + 0x80),param_2);
      }
    }
    if (*(int *)(param_2 + 0x74) == 0) {
      bVar3 = *(byte *)(param_2 + 0x72);
      ppuStack_b0 = &PTR_DAT_110cd5318;
      uStack_90 = 0;
      lStack_98 = 0x40;
      lStack_a0 = 4;
      puVar7 = (uint *)0x44;
      _malloc();
      if (puVar7 == (uint *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b2fa06c);
        (*pcVar5)();
      }
      *puVar7 = 0;
      cVar4 = *(char *)(param_2 + 0x27);
      plStack_78 = *(long **)(param_2 + 0x10);
      if (-1 < (long)cVar4) {
        plStack_78 = (long *)(param_2 + 0x10);
      }
      lStack_70 = *(long *)(param_2 + 0x18);
      if (-1 < cVar4) {
        lStack_70 = (long)cVar4;
      }
      cVar4 = *(char *)(param_2 + 0x6f);
      plStack_60 = (long *)*(long *)(param_2 + 0x58);
      if (-1 < (long)cVar4) {
        plStack_60 = (long *)(param_2 + 0x58);
      }
      lStack_58 = *(long *)(param_2 + 0x60);
      if (-1 < cVar4) {
        lStack_58 = (long)cVar4;
      }
      puStack_a8 = puVar7;
      func_0x00010b302290(&ppuStack_b0,&plStack_78);
      func_0x00010b302290(&ppuStack_b0,&plStack_60);
      lStack_70 = 0;
      uStack_68 = 0;
      plStack_78 = &lStack_70;
      func_0x000107c2cb78();
      FUN_10b2fa214();
      plVar9 = plStack_78;
      while (plVar9 != &lStack_70) {
        cVar4 = *(char *)((long)plVar9 + 0x37);
        plStack_60 = (long *)plVar9[4];
        if (-1 < (long)cVar4) {
          plStack_60 = plVar9 + 4;
        }
        lStack_58 = plVar9[5];
        if (-1 < cVar4) {
          lStack_58 = (long)cVar4;
        }
        cVar4 = *(char *)((long)plVar9 + 0x4f);
        plStack_88 = (long *)plVar9[7];
        if (-1 < (long)cVar4) {
          plStack_88 = plVar9 + 7;
        }
        lStack_80 = plVar9[8];
        if (-1 < cVar4) {
          lStack_80 = (long)cVar4;
        }
        func_0x00010b302290(&ppuStack_b0,&plStack_60);
        func_0x00010b302290(&ppuStack_b0,&plStack_88);
        plVar1 = (long *)plVar9[1];
        plVar14 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar14[2];
            bVar6 = (long *)*plVar9 != plVar14;
            plVar14 = plVar9;
          } while (bVar6);
        }
        else {
          do {
            plVar9 = plVar1;
            plVar1 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      func_0x000107c34ee4(&plStack_78,lStack_70);
      puVar7 = puStack_a8;
      if (puStack_a8 == (uint *)0x0) {
        lVar10 = 8;
      }
      else {
        lVar10 = lStack_a0 + (ulong)*puStack_a8 + 8;
      }
      uVar8 = param_1;
      FUN_10b2fe960(param_1,lVar10,0xaba17e15);
      plVar9 = *(long **)(param_1 + 0x30);
      uVar13 = (uint)uVar8;
      if (uVar13 == 0) {
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,0);
        }
      }
      else {
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,lVar10);
        }
        puVar7 = puStack_a8;
        if (((uVar13 < 0x40) || ((uVar8 & 7) != 0)) ||
           ((*(uint *)(param_1 + 0x14) < uVar13 + 0x18 ||
            (((puVar11 = (uint *)(*(long *)(param_1 + 8) + (uVar8 & 0xffffffff)),
              puVar11[1] != 0xc8799269 || (*puVar11 < 0x18)) ||
             (*(uint *)(param_1 + 0x14) < *puVar11 + uVar13)))))) {
          puVar11 = (uint *)0x0;
          puVar2 = (uint *)0x0;
          uRam0000000000000000 = (uint)bVar3;
        }
        else {
          if (puVar11[2] != 0xaba17e15) {
            puVar11 = (uint *)0x0;
          }
          puVar2 = (uint *)0x0;
          if (puVar11 != (uint *)0x0) {
            puVar2 = puVar11 + 4;
          }
          *puVar2 = (uint)bVar3;
        }
        uVar12 = 0;
        if (puStack_a8 != (uint *)0x0) {
          uVar12 = *puStack_a8 + (int)lStack_a0;
        }
        puVar2[1] = uVar12;
        if (puStack_a8 == (uint *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lStack_a0 + (ulong)*puStack_a8;
        }
        _memcpy(puVar11 + 6,puStack_a8,lVar10);
        FUN_10b2febb8(param_1,uVar8);
        *(uint *)(param_2 + 0x74) = uVar13;
      }
      if (lStack_98 != -1) {
        _free(puVar7);
      }
    }
  }
  return;
}



/* Entry: 10b2fa074; end: 10b2fa207;  */

/* WARNING: Removing unreachable block (ram,0x00010b2fa11c) */

uint * FUN_10b2fa074(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  
  lVar5 = lRam000000011383aa68;
  lVar6 = lRam000000011383aa68;
  _pthread_mutex_trylock();
  if ((int)lVar6 == 0) {
    lVar6 = *(long *)(lRam000000011383aa68 + 0x80);
  }
  else {
    func_0x00010b329e58(lVar5);
    lVar6 = *(long *)(lRam000000011383aa68 + 0x80);
  }
  if (lVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0x74);
    if (uVar2 != 0) {
      puVar7 = (uint *)0x0;
      if ((uVar2 < 0x40) || ((uVar2 & 7) != 0)) goto LAB_10b2fa1c0;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if ((uVar3 < uVar2 + 0x18) ||
         (((puVar1 = (uint *)(*(long *)(lVar6 + 8) + (ulong)uVar2), puVar1[1] != 0xc8799269 ||
           (*puVar1 < 0x18)) || (uVar3 < *puVar1 + uVar2)))) {
        puVar7 = (uint *)0x0;
      }
      else {
        if (puVar1[2] != 0xaba17e15) {
          puVar1 = (uint *)0x0;
        }
        puVar7 = (uint *)0x0;
        if (puVar1 != (uint *)0x0) {
          puVar7 = puVar1 + 4;
        }
      }
      if (((uVar2 + 0x10 <= uVar3) &&
          (puVar1 = (uint *)(*(long *)(lVar6 + 8) + (ulong)uVar2), puVar1[1] == 0xc8799269)) &&
         ((0xf < *puVar1 && (*puVar1 + uVar2 <= uVar3)))) {
        uVar4 = *puVar1;
        if (uVar4 < 0x11 || uVar3 < uVar4 + uVar2) {
          FUN_10b2fe75c();
        }
        else if ((ulong)puVar7[1] + 8 <= (ulong)uVar4 - 0x10) {
          FUN_10b2f9068(puVar7,param_2);
          goto LAB_10b2fa1c0;
        }
      }
    }
  }
  puVar7 = (uint *)0x0;
LAB_10b2fa1c0:
  _pthread_mutex_unlock(lVar5);
  return puVar7;
}



/* Entry: 10b2fa208; end: 10b2fa213;  */

bool FUN_10b2fa208(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _abort();
  lVar4 = param_1;
  _pthread_mutex_trylock();
  if ((int)lVar4 == 0) {
    if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10b2fa24c;
LAB_10b2fa298:
    func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
    if (*(char *)((long)param_3 + 0x17) < '\0') goto LAB_10b2fa2b0;
LAB_10b2fa268:
    uStack_60 = param_3[1];
    uStack_68 = *param_3;
    lStack_58 = param_3[2];
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_10b2fa32c;
LAB_10b2fa2c8:
    lVar3 = param_1 + 0x48;
    do {
      lVar2 = param_1 + 0x40;
      func_0x00010b2fa3a0(lVar2,lVar4 + 0x20,&uStack_80);
      lVar1 = 8;
      if ((int)lVar2 == 0) {
        lVar1 = 0;
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar1);
    } while (lVar4 != 0);
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa32c;
    lVar4 = param_1 + 0x40;
    func_0x00010b2fa3a0(lVar4,&uStack_80,lVar3 + 0x20);
    if ((int)lVar4 != 0) goto LAB_10b2fa32c;
    if (-1 < lStack_58) goto LAB_10b2fa318;
LAB_10b2fa338:
    __ZdlPv(uStack_68);
    if (lStack_70 < 0) goto LAB_10b2fa348;
LAB_10b2fa320:
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa374;
  }
  else {
    func_0x00010b329e58(param_1);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_10b2fa298;
LAB_10b2fa24c:
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    lStack_70 = param_2[2];
    if (-1 < *(char *)((long)param_3 + 0x17)) goto LAB_10b2fa268;
LAB_10b2fa2b0:
    func_0x000107c3192c(&uStack_68,*param_3,param_3[1]);
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) goto LAB_10b2fa2c8;
LAB_10b2fa32c:
    lVar3 = param_1 + 0x48;
    if (lStack_58 < 0) goto LAB_10b2fa338;
LAB_10b2fa318:
    if (-1 < lStack_70) goto LAB_10b2fa320;
LAB_10b2fa348:
    __ZdlPv(uStack_80);
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa374;
  }
  if (lVar3 + 0x50 != param_4) {
    func_0x00010985e790(param_4,*(undefined8 *)(lVar3 + 0x50),lVar3 + 0x58);
  }
LAB_10b2fa374:
  _pthread_mutex_unlock(param_1);
  return lVar3 != param_1 + 0x48;
}



/* Entry: 10b2fa214; end: 10b2fa4ef;  */

bool FUN_10b2fa214(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  _pthread_mutex_trylock();
  if ((int)lVar4 == 0) {
    if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10b2fa24c;
LAB_10b2fa298:
    func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
    if (*(char *)((long)param_3 + 0x17) < '\0') goto LAB_10b2fa2b0;
LAB_10b2fa268:
    uStack_50 = param_3[1];
    uStack_58 = *param_3;
    lStack_48 = param_3[2];
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_10b2fa32c;
LAB_10b2fa2c8:
    lVar3 = param_1 + 0x48;
    do {
      lVar2 = param_1 + 0x40;
      func_0x00010b2fa3a0(lVar2,lVar4 + 0x20,&uStack_70);
      lVar1 = 8;
      if ((int)lVar2 == 0) {
        lVar1 = 0;
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar1);
    } while (lVar4 != 0);
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa32c;
    lVar4 = param_1 + 0x40;
    func_0x00010b2fa3a0(lVar4,&uStack_70,lVar3 + 0x20);
    if ((int)lVar4 != 0) goto LAB_10b2fa32c;
    if (-1 < lStack_48) goto LAB_10b2fa318;
LAB_10b2fa338:
    __ZdlPv(uStack_58);
    if (lStack_60 < 0) goto LAB_10b2fa348;
LAB_10b2fa320:
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa374;
  }
  else {
    func_0x00010b329e58(param_1);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_10b2fa298;
LAB_10b2fa24c:
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    lStack_60 = param_2[2];
    if (-1 < *(char *)((long)param_3 + 0x17)) goto LAB_10b2fa268;
LAB_10b2fa2b0:
    func_0x000107c3192c(&uStack_58,*param_3,param_3[1]);
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) goto LAB_10b2fa2c8;
LAB_10b2fa32c:
    lVar3 = param_1 + 0x48;
    if (lStack_48 < 0) goto LAB_10b2fa338;
LAB_10b2fa318:
    if (-1 < lStack_60) goto LAB_10b2fa320;
LAB_10b2fa348:
    __ZdlPv(uStack_70);
    if (lVar3 == param_1 + 0x48) goto LAB_10b2fa374;
  }
  if (lVar3 + 0x50 != param_4) {
    func_0x00010985e790(param_4,*(undefined8 *)(lVar3 + 0x50),lVar3 + 0x58);
  }
LAB_10b2fa374:
  _pthread_mutex_unlock(param_1);
  return lVar3 != param_1 + 0x48;
}



/* Entry: 10b2fa4f0; end: 10b2fa6d7;  */

void FUN_10b2fa4f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  
  cVar3 = *(char *)((long)param_2 + 0x17);
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (long)cVar3) {
    puVar5 = param_2;
  }
  ppuStack_70 = (undefined8 ***)0x0;
  uStack_68 = 0;
  lVar1 = param_2[1];
  if (-1 < cVar3) {
    lVar1 = (long)cVar3;
  }
  ppuStack_78 = &ppuStack_70;
  FUN_10b2f96e0(puVar5,lVar1);
  puVar6 = puVar5;
  func_0x000107c2cb78();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_10b2f9560(puVar5,0);
    if (*(char *)((long)puVar5 + 0x73) == '\x01') {
      FUN_10b2f9340(puVar5);
    }
    FUN_10b2fa214(puVar6,puVar5 + 2,puVar5 + 0xb,&ppuStack_78);
    if (((((ulong)puVar6 & 1) != 0) || (FUN_10b2fa074(puVar5,&ppuStack_78), (int)puVar5 != 0)) &&
       ((undefined8 ***)ppuStack_70 != (undefined8 ***)0x0)) {
      pppuVar8 = (undefined8 ***)ppuStack_70;
      pppuVar7 = &ppuStack_70;
      ppuVar11 = (undefined8 **)param_3[1];
      puVar5 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        ppuVar11 = (undefined8 **)(ulong)*(byte *)((long)param_3 + 0x17);
        puVar5 = param_3;
      }
      do {
        pppuVar9 = pppuVar7;
        pppuVar10 = pppuVar8 + 4;
        pppuVar7 = (undefined8 ***)*pppuVar10;
        ppuVar12 = pppuVar8[5];
        if (-1 < (char)*(byte *)((long)pppuVar8 + 0x37)) {
          pppuVar7 = pppuVar10;
          ppuVar12 = (undefined8 **)(ulong)*(byte *)((long)pppuVar8 + 0x37);
        }
        ppuVar2 = ppuVar11;
        if (ppuVar12 <= ppuVar11) {
          ppuVar2 = ppuVar12;
        }
        _memcmp(pppuVar7,puVar5,ppuVar2);
        bVar4 = ppuVar12 < ppuVar11;
        if ((int)pppuVar7 != 0) {
          bVar4 = (int)pppuVar7 < 0;
        }
        lVar1 = 8;
        pppuVar7 = pppuVar9;
        if (!bVar4) {
          lVar1 = 0;
          pppuVar7 = pppuVar8;
        }
        puVar6 = (undefined8 *)((long)pppuVar8 + lVar1);
        pppuVar8 = (undefined8 ***)*puVar6;
      } while ((undefined8 ***)*puVar6 != (undefined8 ***)0x0);
      if (pppuVar7 != &ppuStack_70) {
        pppuVar8 = pppuVar9 + 4;
        if (!bVar4) {
          pppuVar8 = pppuVar10;
        }
        pppuVar9 = (undefined8 ***)*pppuVar8;
        ppuVar12 = pppuVar7[5];
        if (-1 < (char)*(byte *)((long)pppuVar7 + 0x37)) {
          pppuVar9 = pppuVar8;
          ppuVar12 = (undefined8 **)(ulong)*(byte *)((long)pppuVar7 + 0x37);
        }
        ppuVar2 = ppuVar12;
        if (ppuVar11 <= ppuVar12) {
          ppuVar2 = ppuVar11;
        }
        _memcmp(puVar5,pppuVar9,ppuVar2);
        bVar4 = ppuVar11 < ppuVar12;
        if ((int)puVar5 != 0) {
          bVar4 = (int)puVar5 < 0;
        }
        if (!bVar4) {
          if (*(char *)((long)pppuVar7 + 0x4f) < '\0') {
            func_0x000107c3192c(param_1,pppuVar7[7],pppuVar7[8]);
          }
          else {
            ppuVar12 = pppuVar7[8];
            ppuVar11 = pppuVar7[7];
            param_1[2] = pppuVar7[9];
            param_1[1] = ppuVar12;
            *param_1 = ppuVar11;
          }
          goto LAB_10b2fa680;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_10b2fa680:
  func_0x000107c34ee4(&ppuStack_78,ppuStack_70);
  return;
}



/* Entry: 10b2fa6d8; end: 10b2fa843;  */

/* WARNING: Removing unreachable block (ram,0x00010b2fa778) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa7e4) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa7f0) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa808) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa80c) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa7b8) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa7cc) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa82c) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa744) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa75c) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa760) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa788) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa810) */
/* WARNING: Removing unreachable block (ram,0x00010b2fa7a0) */

undefined8 FUN_10b2fa6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  lRam00000001137f5098 = param_1;
  if (*(int *)(param_1 + 8) == 1) {
    func_0x000107c2cb78(param_1,0);
  }
  func_0x000107c34ee4(&puStack_38,uStack_30);
  return param_3;
}



/* Entry: 10b2fa844; end: 10b2faa8f;  */

undefined ***
FUN_10b2fa844(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined ***pppuVar9;
  uint uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined **ppuStack_170;
  undefined8 ***pppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  long lStack_148;
  undefined8 ***pppuStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***apppuStack_58 [2];
  undefined8 uStack_48;
  
  pppuVar11 = (undefined ***)*param_1;
  plVar2 = (long *)param_1[1];
  plVar4 = plVar2;
  _strlen();
  if ((long *)0x7ffffffffffffff7 < plVar4) {
    FUN_10b2ecf74();
    lVar1 = *plVar4;
    uVar6 = plVar4[1];
    uVar5 = uVar6;
    _strlen();
    if (0x7ffffffffffffff7 < uVar5) {
      FUN_10b2ecf74();
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = uVar5;
      _strlen();
      if (0x7ffffffffffffff7 < uVar6) {
        FUN_10b2ecf74();
        goto LAB_10b2fac08;
      }
      if (uVar6 < 0x17) {
        uStack_188 = CONCAT17((char)uVar6,(undefined7)uStack_188);
        ppppuVar7 = &pppuStack_198;
        if (uVar6 == 0) goto LAB_10b2fab34;
      }
      else {
        ppppuVar8 = (undefined8 ****)0x19;
        if ((uVar6 | 7) != 0x17) {
          ppppuVar8 = (undefined8 ****)((uVar6 | 7) + 1);
        }
        ppppuVar7 = ppppuVar8;
        __Znwm();
        uStack_188 = (ulong)ppppuVar8 | 0x8000000000000000;
        pppuStack_198 = ppppuVar7;
        uStack_190 = uVar6;
      }
      _memcpy(ppppuVar7,uVar5,uVar6);
LAB_10b2fab34:
      *(undefined1 *)((long)ppppuVar7 + uVar6) = 0;
      ppppuVar8 = (undefined8 ****)pppuStack_198;
      if (-1 < (long)uStack_188._7_1_) {
        ppppuVar8 = &pppuStack_198;
      }
      uVar6 = uStack_190;
      if (-1 < (long)uStack_188) {
        uVar6 = (long)uStack_188._7_1_;
      }
      uStack_17c = param_4;
      uStack_178 = param_3;
      uStack_174 = param_2;
      func_0x000107c2cb8c(ppppuVar8,uVar6,&uStack_174,&uStack_178,&uStack_17c);
      if (((ulong)ppppuVar8 & 1) == 0) {
        if ((bRam000000011383aa60 & 1) == 0) goto LAB_10b2fac0c;
        pppuVar11 = (undefined ***)0x11383aa48;
      }
      else {
        ppuStack_170 = &PTR_DAT_110cd4f18;
        uStack_160 = 0;
        uStack_15c = uStack_174;
        uStack_158 = uStack_178;
        uStack_154 = uStack_17c;
        pppuVar11 = &ppuStack_170;
        pppuStack_168 = &pppuStack_198;
        uStack_150 = param_5;
        func_0x000107c2cb84(pppuVar11);
      }
      while( true ) {
        if ((long)uStack_188 < 0) {
          __ZdlPv(pppuStack_198);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) break;
LAB_10b2fac08:
        ___stack_chk_fail();
LAB_10b2fac0c:
        iVar3 = 0x1383aa60;
        ___cxa_guard_acquire();
        pppuVar11 = (undefined ***)0x11383aa48;
        if (iVar3 != 0) {
          uRam000000011383aa58 = 0;
          ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
          puRam000000011383aa50 = &UNK_10f7443ef;
          ___cxa_guard_release(0x11383aa60);
        }
      }
      return pppuVar11;
    }
    if (uVar5 < 0x17) {
      uStack_d8 = CONCAT17((char)uVar5,(undefined7)uStack_d8);
      ppppuVar7 = &pppuStack_e8;
      if (uVar5 == 0) goto LAB_10b2fa9c8;
    }
    else {
      ppppuVar8 = (undefined8 ****)0x19;
      if ((uVar5 | 7) != 0x17) {
        ppppuVar8 = (undefined8 ****)((uVar5 | 7) + 1);
      }
      ppppuVar7 = ppppuVar8;
      __Znwm();
      uStack_d8 = (ulong)ppppuVar8 | 0x8000000000000000;
      pppuStack_e8 = ppppuVar7;
      uStack_e0 = uVar5;
    }
    _memmove(ppppuVar7,uVar6,uVar5);
LAB_10b2fa9c8:
    *(undefined1 *)((long)ppppuVar7 + uVar5) = 0;
    pppuVar11 = (undefined ***)plVar4[2];
    puStack_b8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lRam00000001137f5098 = lVar1;
    if (*(int *)(lVar1 + 8) == 1) {
      func_0x000107c2cb78();
    }
    uStack_d0 = 0;
    pppuStack_c8 = (undefined ***)0x0;
    uStack_c0 = 0;
    func_0x000107c34ee4(&puStack_b8,uStack_b0);
    uVar10 = (uint)(char)uStack_c0._7_1_;
    pppuVar9 = pppuStack_c8;
    if (-1 < (int)uVar10) {
      pppuVar9 = (undefined ***)(ulong)uStack_c0._7_1_;
    }
    pppuVar12 = pppuVar11;
    if (pppuVar9 != (undefined ***)0x0) {
      uVar6 = uStack_d0;
      if (-1 < (int)uVar10) {
        uVar6 = 0;
      }
      func_0x00010b32207c();
      pppuVar12 = pppuVar9;
      if ((uVar6 & 1) == 0) {
        pppuVar12 = pppuVar11;
      }
      uVar10 = (uint)uStack_c0._7_1_;
    }
    if ((uVar10 >> 7 & 1) != 0) {
      __ZdlPv(uStack_d0);
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(pppuStack_e8);
    }
    return pppuVar12;
  }
  if (plVar4 < (long *)0x17) {
    uStack_48 = CONCAT17((char)plVar4,(undefined7)uStack_48);
    ppppuVar7 = apppuStack_58;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      apppuStack_58[0]._0_1_ = 0;
      FUN_10b2fa6d8(pppuVar11);
      goto joined_r0x00010b2fa8a4;
    }
  }
  else {
    ppppuVar8 = (undefined8 ****)0x19;
    if (((ulong)plVar4 | 7) != 0x17) {
      ppppuVar8 = (undefined8 ****)(((ulong)plVar4 | 7) + 1);
    }
    ppppuVar7 = ppppuVar8;
    __Znwm();
    uStack_48 = (ulong)ppppuVar8 | 0x8000000000000000;
    apppuStack_58[0] = ppppuVar7;
  }
  _memmove(ppppuVar7,plVar2,plVar4);
  *(undefined1 *)((long)ppppuVar7 + (long)plVar4) = 0;
  FUN_10b2fa6d8(pppuVar11);
joined_r0x00010b2fa8a4:
  if ((long)uStack_48 < 0) {
    __ZdlPv(apppuStack_58[0]);
    return pppuVar11;
  }
  return pppuVar11;
}



/* Entry: 10b2faa90; end: 10b2fbf4b;  */

void FUN_10b2faa90(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined **ppuStack_80;
  undefined8 ***pppuStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  _strlen();
  if (0x7ffffffffffffff7 < uVar2) {
    FUN_10b2ecf74();
    goto LAB_10b2fac08;
  }
  if (uVar2 < 0x17) {
    uStack_98 = CONCAT17((char)uVar2,(undefined7)uStack_98);
    ppppuVar3 = &pppuStack_a8;
    if (uVar2 == 0) goto LAB_10b2fab34;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if ((uVar2 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)((uVar2 | 7) + 1);
    }
    ppppuVar3 = ppppuVar4;
    __Znwm();
    uStack_98 = (ulong)ppppuVar4 | 0x8000000000000000;
    pppuStack_a8 = ppppuVar3;
    uStack_a0 = uVar2;
  }
  _memcpy(ppppuVar3,param_1,uVar2);
LAB_10b2fab34:
  *(undefined1 *)((long)ppppuVar3 + uVar2) = 0;
  ppppuVar4 = (undefined8 ****)pppuStack_a8;
  if (-1 < (long)uStack_98._7_1_) {
    ppppuVar4 = &pppuStack_a8;
  }
  uVar2 = uStack_a0;
  if (-1 < (long)uStack_98) {
    uVar2 = (long)uStack_98._7_1_;
  }
  uStack_8c = param_4;
  uStack_88 = param_3;
  uStack_84 = param_2;
  func_0x000107c2cb8c(ppppuVar4,uVar2,&uStack_84,&uStack_88,&uStack_8c);
  if (((ulong)ppppuVar4 & 1) == 0) {
    if ((bRam000000011383aa60 & 1) == 0) goto LAB_10b2fac0c;
  }
  else {
    ppuStack_80 = &PTR_DAT_110cd4f18;
    uStack_70 = 0;
    uStack_6c = uStack_84;
    uStack_68 = uStack_88;
    uStack_64 = uStack_8c;
    pppuStack_78 = &pppuStack_a8;
    uStack_60 = param_5;
    func_0x000107c2cb84(&ppuStack_80);
  }
  while( true ) {
    if ((long)uStack_98 < 0) {
      __ZdlPv(pppuStack_a8);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
LAB_10b2fac08:
    ___stack_chk_fail();
LAB_10b2fac0c:
    iVar1 = 0x1383aa60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      ___cxa_guard_release(0x11383aa60);
    }
  }
  return;
}



/* Entry: 10b2fbf4c; end: 10b2fbf5b;  */

void FUN_10b2fbf4c(void)

{
  return;
}



/* Entry: 10b2fbf5c; end: 10b2fbfe3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b2fbf5c(undefined8 *******param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *******param_5,undefined8 *******param_6,int *param_7)

{
  undefined8 *******pppppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *****pppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  int *piStack_118;
  int iStack_94;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  pcVar6 = pcRam000000011383ab40;
  if (pcRam000000011383ab40 != (code *)0x0) {
    ppppppuVar16 = param_1[1];
    pppppppuVar8 = param_1;
    (*(code *)(*param_1)[3])(param_1);
    (*pcVar6)(ppppppuVar16,pppppppuVar8,param_2);
  }
  if ((*(uint *)(param_1 + 2) >> 5 & 1) == 0) {
    return;
  }
  pppppppuVar11 = (undefined8 *******)param_1[1];
  (*(code *)(*param_1)[3])();
  pppppppuVar8 = pppppppuRam000000011383aae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_94 = (int)param_2;
  pppppppuStack_90 = param_1;
  pppppppuStack_88 = pppppppuVar11;
  if (pppppppuRam000000011383aae8 < (undefined8 *******)0x2) {
LAB_10b300dd8:
    if (pppppppuRam000000011383aae8 == (undefined8 *******)0x0) goto code_r0x00010b300de0;
    ClearExclusiveLocal();
    if (pppppppuRam000000011383aae8 == (undefined8 *******)0x1) {
      (*(code *)PTR_DAT_11336f918)();
      pppppppuVar8 = pppppppuVar11;
      do {
        (*(code *)PTR_DAT_11336f918)();
        if ((long)pppppppuVar8 - (long)pppppppuVar11 < 1000) {
          _sched_yield();
        }
        else {
          pppppppuStack_80 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_78 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_68 = (undefined8 *******)0xf4240;
          pppppppuStack_70 = (undefined8 *******)0x0;
          pppppppuVar8 = &pppppppuStack_70;
          param_1 = &pppppppuStack_80;
          _nanosleep();
          iVar7 = (int)pppppppuVar8;
          while ((iVar7 == -1 && (___error(), *(int *)pppppppuVar8 == 4))) {
            pppppppuStack_68 = pppppppuStack_78;
            pppppppuStack_70 = pppppppuStack_80;
            pppppppuVar8 = &pppppppuStack_70;
            param_1 = &pppppppuStack_80;
            _nanosleep();
            iVar7 = (int)pppppppuVar8;
          }
        }
      } while (pppppppuRam000000011383aae8 == (undefined8 *******)0x1);
    }
    pppppppuVar8 = pppppppuRam000000011383aae8;
    pppppppuVar11 = pppppppuRam000000011383aae8;
    _pthread_mutex_trylock();
    iVar7 = (int)pppppppuVar11;
    goto joined_r0x00010b300e28;
  }
  pppppppuVar11 = pppppppuRam000000011383aae8;
  _pthread_mutex_trylock();
  iVar7 = (int)pppppppuVar11;
joined_r0x00010b300e28:
  if (iVar7 != 0) {
    pppppppuVar11 = pppppppuVar8;
    func_0x00010b329e58();
  }
  if (pppppppuRam000000011383aae8 < (undefined8 *******)0x2) {
    do {
      if (pppppppuRam000000011383aae8 != (undefined8 *******)0x0) {
        ClearExclusiveLocal();
        if (pppppppuRam000000011383aae8 == (undefined8 *******)0x1) {
          (*(code *)PTR_DAT_11336f918)();
          pppppppuVar12 = pppppppuVar11;
          do {
            (*(code *)PTR_DAT_11336f918)();
            if ((long)pppppppuVar12 - (long)pppppppuVar11 < 1000) {
              _sched_yield();
            }
            else {
              pppppppuStack_80 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_78 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_68 = (undefined8 *******)0xf4240;
              pppppppuStack_70 = (undefined8 *******)0x0;
              pppppppuVar12 = &pppppppuStack_70;
              param_1 = &pppppppuStack_80;
              _nanosleep();
              iVar7 = (int)pppppppuVar12;
              while ((iVar7 == -1 && (___error(), *(int *)pppppppuVar12 == 4))) {
                pppppppuStack_68 = pppppppuStack_78;
                pppppppuStack_70 = pppppppuStack_80;
                pppppppuVar12 = &pppppppuStack_70;
                param_1 = &pppppppuStack_80;
                _nanosleep();
                iVar7 = (int)pppppppuVar12;
              }
            }
          } while (pppppppuRam000000011383aae8 == (undefined8 *******)0x1);
        }
        goto joined_r0x00010b301078;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        pppppppuRam000000011383aae8 = (undefined8 *******)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppppppuStack_70 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
    pppppppuStack_68 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
    _pthread_mutexattr_init(&pppppppuStack_70);
    _pthread_mutexattr_setprotocol(&pppppppuStack_70,1);
    param_1 = &pppppppuStack_70;
    _pthread_mutex_init(0x11383aaf0);
    _pthread_mutexattr_destroy(&pppppppuStack_70);
    pppppppuRam000000011383aae8 = (undefined8 *******)0x11383aaf0;
    if (lRam000000011383ab30 == 0) goto LAB_10b30107c;
LAB_10b300d0c:
    pppppppuVar12 = pppppppuStack_88;
    lVar10 = lRam000000011383ab30;
    pppppppuVar11 = pppppppuStack_88;
    _strlen();
  }
  else {
joined_r0x00010b301078:
    if (lRam000000011383ab30 != 0) goto LAB_10b300d0c;
LAB_10b30107c:
    __Znwm(0xa0);
    func_0x000107c2cbe4();
    pppppppuVar12 = pppppppuStack_88;
    lVar10 = lRam000000011383ab30;
    pppppppuVar11 = pppppppuStack_88;
    _strlen();
  }
  if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar11) {
    FUN_10b2ecf74();
    goto LAB_10b3010a8;
  }
  if (pppppppuVar11 < (undefined8 *******)0x17) {
    uStack_60 = CONCAT17((char)pppppppuVar11,(undefined7)uStack_60);
    pppppppuVar9 = &pppppppuStack_70;
    if (pppppppuVar11 != (undefined8 *******)0x0) goto LAB_10b300e58;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppppppuStack_70._0_1_ = 0;
    lVar10 = lVar10 + 0x28;
    param_1 = &pppppppuStack_70;
    FUN_10b3014e8();
  }
  else {
    pppppppuVar1 = (undefined8 *******)0x19;
    if (((ulong)pppppppuVar11 | 7) != 0x17) {
      pppppppuVar1 = (undefined8 *******)(((ulong)pppppppuVar11 | 7) + 1);
    }
    pppppppuVar9 = pppppppuVar1;
    __Znwm();
    uStack_60 = (ulong)pppppppuVar1 | 0x8000000000000000;
    pppppppuStack_70 = pppppppuVar9;
    pppppppuStack_68 = pppppppuVar11;
LAB_10b300e58:
    param_2 = (code *)pppppppuVar11;
    _memmove(pppppppuVar9,pppppppuVar12);
    *(code *)((long)pppppppuVar9 + (long)pppppppuVar11) = (code)0x0;
    lVar10 = lVar10 + 0x28;
    param_1 = &pppppppuStack_70;
    FUN_10b3014e8();
  }
  if ((long)uStack_60 < 0) {
    __ZdlPv(pppppppuStack_70);
  }
  if (lVar10 != 0) {
    uVar17 = *(undefined8 *)(lVar10 + 0x28);
    func_0x000107c2cb24(&pppppppuStack_70,&UNK_10f744608,&UNK_10f744625,0x13f);
    param_2 = FUN_10b300c98;
    param_1 = &pppppppuStack_70;
    param_5 = &pppppppuStack_88;
    param_6 = &pppppppuStack_90;
    param_7 = &iStack_94;
    param_4 = 0;
    FUN_10b3010ac(uVar17);
  }
  _pthread_mutex_unlock();
  pppppppuVar11 = pppppppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10b3010a8:
  ___stack_chk_fail();
  piVar13 = (int *)0x50;
  __Znwm();
  *piVar13 = 1;
  piVar13[2] = 0xb3019ec;
  piVar13[3] = 1;
  piVar13[4] = 0xb301a08;
  piVar13[5] = 1;
  *(undefined **)(piVar13 + 6) = &UNK_100142430;
  *(code **)(piVar13 + 8) = FUN_10b3019c8;
  *(code **)(piVar13 + 10) = param_2;
  *(undefined8 *)(piVar13 + 0xc) = param_4;
  ppppppuVar16 = *param_6;
  *(undefined8 *******)(piVar13 + 0xe) = *param_5;
  *(undefined8 *******)(piVar13 + 0x10) = ppppppuVar16;
  piVar13[0x12] = *param_7;
  iVar7 = (int)pppppppuVar11 + 0x10;
  _pthread_mutex_trylock();
  if (iVar7 == 0) {
    ppppppuVar16 = pppppppuVar11[0xd];
  }
  else {
    func_0x00010b329e58(pppppppuVar11 + 2);
    ppppppuVar16 = pppppppuVar11[0xd];
  }
  if (ppppppuVar16 != (undefined8 ******)0x0) {
    pppppppuVar8 = pppppppuVar11 + 1;
    if (piVar13 == (int *)0x0) {
      if (pppppppuVar11 == (undefined8 *******)0x0) {
        do {
          pppppuVar2 = ppppppuVar16[3];
          pppppuVar3 = ppppppuVar16[4];
          piVar14 = (int *)0x78;
          __Znwm();
          *piVar14 = 1;
          *(code **)(piVar14 + 2) = FUN_10b30191c;
          *(code **)(piVar14 + 4) = FUN_10b301940;
          *(undefined **)(piVar14 + 6) = &UNK_100142430;
          *(code **)(piVar14 + 8) = FUN_10b301698;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
          piVar14[0xc] = 0;
          piVar14[0xd] = 0;
          pppppuVar15 = ppppppuVar16[2];
          ppppppuVar20 = param_1[1];
          ppppppuVar19 = *param_1;
          ppppppuVar18 = param_1[2];
          *(undefined8 *******)(piVar14 + 0x18) = param_1[3];
          *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar18;
          *(undefined8 ******)(piVar14 + 0xe) = pppppuVar15;
          piVar14[0x10] = 0;
          piVar14[0x11] = 0;
          *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar20;
          *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar19;
          piVar14[0x1a] = 0;
          piVar14[0x1b] = 0;
          *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
          piStack_118 = piVar14;
          (*(code *)**pppppuVar2)(pppppuVar2,param_1,&piStack_118,0);
          if (piStack_118 != (int *)0x0) {
            do {
              iVar7 = *piStack_118;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
              if (bVar5) {
                *piStack_118 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              (**(code **)(piStack_118 + 4))();
            }
          }
          ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
        } while (ppppppuVar16 != (undefined8 ******)0x0);
      }
      else {
        do {
          pppppuVar2 = ppppppuVar16[3];
          pppppuVar3 = ppppppuVar16[4];
          ppppppuVar19 = param_1[1];
          ppppppuVar18 = *param_1;
          ppppppuVar21 = param_1[3];
          ppppppuVar20 = param_1[2];
          piVar14 = (int *)0x78;
          __Znwm();
          *piVar14 = 1;
          *(code **)(piVar14 + 2) = FUN_10b30191c;
          *(code **)(piVar14 + 4) = FUN_10b301940;
          *(undefined **)(piVar14 + 6) = &UNK_100142430;
          *(code **)(piVar14 + 8) = FUN_10b301698;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
          *(undefined8 ********)(piVar14 + 0xc) = pppppppuVar11;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
            if (bVar5) {
              *(int *)pppppppuVar8 = *(int *)pppppppuVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(undefined8 ******)(piVar14 + 0xe) = ppppppuVar16[2];
          *(undefined8 ********)(piVar14 + 0x10) = pppppppuVar11;
          *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar19;
          *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar18;
          *(undefined8 *******)(piVar14 + 0x18) = ppppppuVar21;
          *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar20;
          piVar14[0x1a] = 0;
          piVar14[0x1b] = 0;
          *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
          piStack_118 = piVar14;
          (*(code *)**pppppuVar2)(pppppuVar2,param_1,&piStack_118,0);
          if (piStack_118 != (int *)0x0) {
            do {
              iVar7 = *piStack_118;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
              if (bVar5) {
                *piStack_118 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              (**(code **)(piStack_118 + 4))();
            }
          }
          ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
        } while (ppppppuVar16 != (undefined8 ******)0x0);
      }
    }
    else if (pppppppuVar11 == (undefined8 *******)0x0) {
      do {
        pppppuVar2 = ppppppuVar16[3];
        pppppuVar3 = ppppppuVar16[4];
        do {
          iVar7 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 < 1) goto LAB_10b3014dc;
        piVar14 = (int *)0x78;
        __Znwm();
        *piVar14 = 1;
        *(code **)(piVar14 + 2) = FUN_10b30191c;
        *(code **)(piVar14 + 4) = FUN_10b301940;
        *(undefined **)(piVar14 + 6) = &UNK_100142430;
        *(code **)(piVar14 + 8) = FUN_10b301698;
        piVar14[10] = 0;
        piVar14[0xb] = 0;
        piVar14[0xc] = 0;
        piVar14[0xd] = 0;
        pppppuVar15 = ppppppuVar16[2];
        ppppppuVar20 = param_1[1];
        ppppppuVar19 = *param_1;
        ppppppuVar18 = param_1[2];
        *(undefined8 *******)(piVar14 + 0x18) = param_1[3];
        *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar18;
        *(undefined8 ******)(piVar14 + 0xe) = pppppuVar15;
        piVar14[0x10] = 0;
        piVar14[0x11] = 0;
        *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar20;
        *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar19;
        *(int **)(piVar14 + 0x1a) = piVar13;
        *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
        piStack_118 = piVar14;
        (*(code *)**pppppuVar2)(pppppuVar2,param_1,&piStack_118,0);
        if (piStack_118 != (int *)0x0) {
          do {
            iVar7 = *piStack_118;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
            if (bVar5) {
              *piStack_118 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            (**(code **)(piStack_118 + 4))();
          }
        }
        ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
      } while (ppppppuVar16 != (undefined8 ******)0x0);
    }
    else {
      do {
        pppppuVar2 = ppppppuVar16[3];
        pppppuVar3 = ppppppuVar16[4];
        ppppppuVar19 = param_1[1];
        ppppppuVar18 = *param_1;
        ppppppuVar21 = param_1[3];
        ppppppuVar20 = param_1[2];
        do {
          iVar7 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 < 1) {
LAB_10b3014dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b3014e0);
          (*pcVar6)();
        }
        piVar14 = (int *)0x78;
        __Znwm();
        *piVar14 = 1;
        *(code **)(piVar14 + 2) = FUN_10b30191c;
        *(code **)(piVar14 + 4) = FUN_10b301940;
        *(undefined **)(piVar14 + 6) = &UNK_100142430;
        *(code **)(piVar14 + 8) = FUN_10b301698;
        piVar14[10] = 0;
        piVar14[0xb] = 0;
        *(undefined8 ********)(piVar14 + 0xc) = pppppppuVar11;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
          if (bVar5) {
            *(int *)pppppppuVar8 = *(int *)pppppppuVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined8 ******)(piVar14 + 0xe) = ppppppuVar16[2];
        *(undefined8 ********)(piVar14 + 0x10) = pppppppuVar11;
        *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar19;
        *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar18;
        *(undefined8 *******)(piVar14 + 0x18) = ppppppuVar21;
        *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar20;
        *(int **)(piVar14 + 0x1a) = piVar13;
        *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
        piStack_118 = piVar14;
        (*(code *)**pppppuVar2)(pppppuVar2,param_1,&piStack_118,0);
        if (piStack_118 != (int *)0x0) {
          do {
            iVar7 = *piStack_118;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
            if (bVar5) {
              *piStack_118 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            (**(code **)(piStack_118 + 4))();
          }
        }
        ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
      } while (ppppppuVar16 != (undefined8 ******)0x0);
    }
  }
  _pthread_mutex_unlock(pppppppuVar11 + 2);
  if (piVar13 != (int *)0x0) {
    do {
      iVar7 = *piVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      (**(code **)(piVar13 + 4))(piVar13);
    }
  }
  return;
code_r0x00010b300de0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar5) {
    pppppppuRam000000011383aae8 = (undefined8 *******)0x1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x00010b300de8;
  goto LAB_10b300dd8;
code_r0x00010b300de8:
  pppppppuStack_70 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_68 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  _pthread_mutexattr_init(&pppppppuStack_70);
  _pthread_mutexattr_setprotocol(&pppppppuStack_70,1);
  pppppppuVar8 = (undefined8 *******)0x11383aaf0;
  param_1 = &pppppppuStack_70;
  _pthread_mutex_init(0x11383aaf0);
  _pthread_mutexattr_destroy(&pppppppuStack_70);
  pppppppuRam000000011383aae8 = (undefined8 *******)0x11383aaf0;
  pppppppuVar11 = pppppppuVar8;
  _pthread_mutex_trylock();
  iVar7 = (int)pppppppuVar11;
  goto joined_r0x00010b300e28;
}



/* Entry: 10b2fbfe4; end: 10b2fc533;  */

void FUN_10b2fbfe4(char **param_1,char **param_2)

{
  ulong uVar1;
  char **ppcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined ***pppuVar8;
  long *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  code *UNRECOVERED_JUMPTABLE;
  char **ppcVar12;
  char **ppcVar13;
  uint uVar14;
  char **unaff_x20;
  char **unaff_x21;
  char **unaff_x22;
  char **unaff_x23;
  char **ppcVar15;
  char *unaff_x24;
  ulong uVar16;
  char *pcVar17;
  undefined8 ****ppppuStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  char **ppcStack_118;
  char **ppcStack_110;
  char **ppcStack_108;
  char **ppcStack_100;
  char **ppcStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  char **ppcStack_b0;
  char **ppcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  char *pcStack_90;
  char **ppcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  ppcVar13 = &pcStack_90;
  ppcVar7 = &pcStack_90;
  ppcStack_88 = (char **)0xaaaaaaaaaaaaaaaa;
  pcStack_90 = (char *)0xaaaaaaaaaaaaaaaa;
  lStack_78 = -0x5555555555555556;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  ppcVar15 = param_2;
  (**(code **)(*param_1 + 0x78))(&pcStack_90);
  if (lStack_78 == 6) {
    pcStack_70 = "header";
    uStack_68 = 6;
    ppcVar15 = &pcStack_70;
    func_0x000107c2cf7c();
    if ((ppcVar13 == ppcVar15) || (ppcStack_88 == ppcVar13)) {
      ppcVar12 = (char **)0x0;
    }
    else {
      ppcVar12 = (char **)ppcVar13[3];
      if ((ppcVar12 != (char **)0x0) && (ppcVar12[3] != (char *)0x4)) {
        ppcVar12 = (char **)0x0;
      }
    }
    unaff_x20 = (char **)ppcVar12[1];
    unaff_x22 = (char **)*ppcVar12;
    if (-1 < (char)*(byte *)((long)ppcVar12 + 0x17)) {
      unaff_x20 = (char **)(ulong)*(byte *)((long)ppcVar12 + 0x17);
      unaff_x22 = ppcVar12;
    }
    bVar4 = *(byte *)((long)param_2 + 0x17);
    if ((char)bVar4 < '\0') {
      unaff_x21 = (char **)param_2[1];
      uVar16 = ((ulong)param_2[2] & 0x7fffffffffffffff) - 1;
      bVar3 = (byte)((ulong)param_2[2] >> 0x38);
    }
    else {
      unaff_x21 = (char **)(ulong)bVar4;
      uVar16 = 0x16;
      bVar3 = bVar4;
    }
    if (unaff_x20 <= (char **)(uVar16 - (long)unaff_x21)) {
      if (unaff_x20 != (char **)0x0) {
        unaff_x23 = param_2;
        if ((char)bVar4 < '\0') {
          unaff_x23 = (char **)*param_2;
        }
        ppcVar13 = (char **)((long)unaff_x23 + (long)unaff_x21);
        ppcVar15 = unaff_x22;
        _memmove(ppcVar13,unaff_x22,unaff_x20);
        pcVar17 = (char *)((long)unaff_x21 + (long)unaff_x20);
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          param_2[1] = pcVar17;
        }
        else {
          *(byte *)((long)param_2 + 0x17) = (byte)pcVar17 & 0x7f;
        }
        *(char *)((long)unaff_x23 + (long)pcVar17) = '\0';
        bVar3 = *(byte *)((long)param_2 + 0x17);
      }
      uVar14 = (uint)bVar3;
      if ((char)bVar3 < '\0') goto LAB_10b2fc220;
      if (uVar14 != 0x16) {
        *(undefined1 *)((long)param_2 + (ulong)uVar14) = 10;
        pcVar17 = (char *)((ulong)uVar14 + 1);
        ppcVar12 = param_2;
        if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_10b2fc300;
LAB_10b2fc298:
        *(byte *)((long)param_2 + 0x17) = (byte)pcVar17 & 0x7f;
        *(char *)((long)ppcVar12 + (long)pcVar17) = '\0';
        goto LAB_10b2fc344;
      }
      unaff_x20 = (char **)0x30;
      ppcVar13 = (char **)0x30;
      __Znwm();
      pcVar17 = *param_2;
      ppcVar13[1] = param_2[1];
      *ppcVar13 = pcVar17;
      *(undefined8 *)((long)ppcVar13 + 0xe) = *(undefined8 *)((long)param_2 + 0xe);
      *(undefined1 *)((long)ppcVar13 + 0x16) = 10;
      unaff_x21 = ppcVar13;
LAB_10b2fc2dc:
      unaff_x24 = (char *)0x17;
LAB_10b2fc334:
      param_2[1] = unaff_x24;
      param_2[2] = (char *)((ulong)unaff_x20 | 0x8000000000000000);
      *param_2 = (char *)unaff_x21;
      *(char *)((long)unaff_x21 + (long)unaff_x24) = '\0';
LAB_10b2fc344:
      param_1 = ppcVar13;
      if (lStack_78 != 6) goto LAB_10b2fc52c;
      pcStack_70 = "body";
      uStack_68 = 4;
      ppcVar15 = &pcStack_70;
      func_0x000107c2cf7c();
      if ((ppcVar7 == ppcVar15) || (ppcStack_88 == ppcVar7)) {
        ppcVar13 = (char **)0x0;
      }
      else {
        ppcVar13 = (char **)ppcVar7[3];
        if ((ppcVar13 != (char **)0x0) && (ppcVar13[3] != (char *)0x4)) {
          ppcVar13 = (char **)0x0;
        }
      }
      unaff_x20 = (char **)ppcVar13[1];
      unaff_x22 = (char **)*ppcVar13;
      if (-1 < (char)*(byte *)((long)ppcVar13 + 0x17)) {
        unaff_x20 = (char **)(ulong)*(byte *)((long)ppcVar13 + 0x17);
        unaff_x22 = ppcVar13;
      }
      cVar5 = *(char *)((long)param_2 + 0x17);
      unaff_x21 = (char **)(long)cVar5;
      if ((long)unaff_x21 < 0) {
        unaff_x21 = (char **)param_2[1];
        uVar16 = ((ulong)param_2[2] & 0x7fffffffffffffff) - 1;
        ppcVar13 = (char **)(uVar16 - (long)unaff_x21);
      }
      else {
        uVar16 = 0x16;
        ppcVar13 = (char **)(0x16 - (long)unaff_x21);
      }
      if (unaff_x20 <= ppcVar13) {
        if (unaff_x20 != (char **)0x0) {
          ppcVar15 = param_2;
          if (cVar5 < '\0') {
            ppcVar15 = (char **)*param_2;
          }
          _memmove((long)ppcVar15 + (long)unaff_x21,unaff_x22,unaff_x20);
          pcVar17 = (char *)((long)unaff_x21 + (long)unaff_x20);
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            param_2[1] = pcVar17;
            *(char *)((long)ppcVar15 + (long)pcVar17) = '\0';
          }
          else {
            *(byte *)((long)param_2 + 0x17) = (byte)pcVar17 & 0x7f;
            *(char *)((long)ppcVar15 + (long)pcVar17) = '\0';
          }
        }
        goto LAB_10b2fc4ec;
      }
      param_1 = ppcVar7;
      if (0x7ffffffffffffff6 - uVar16 < ((long)unaff_x20 - uVar16) + (long)unaff_x21)
      goto LAB_10b2fc530;
      if (cVar5 < '\0') {
        ppcVar15 = (char **)*param_2;
        if (0x3ffffffffffffff2 < uVar16) goto LAB_10b2fc494;
LAB_10b2fc3f4:
        uVar1 = (long)unaff_x21 + (long)unaff_x20;
        if ((ulong)((long)unaff_x21 + (long)unaff_x20) <= uVar16 * 2) {
          uVar1 = uVar16 * 2;
        }
        pcVar6 = (char *)0x19;
        if ((uVar1 | 7) != 0x17) {
          pcVar6 = (char *)((uVar1 | 7) + 1);
        }
        pcVar17 = (char *)0x17;
        if (0x16 < uVar1) {
          pcVar17 = pcVar6;
        }
        pcVar6 = pcVar17;
        __Znwm();
      }
      else {
        ppcVar15 = param_2;
        if (uVar16 < 0x3ffffffffffffff3) goto LAB_10b2fc3f4;
LAB_10b2fc494:
        pcVar17 = (char *)0x7ffffffffffffff7;
        pcVar6 = pcVar17;
        __Znwm();
      }
      if (unaff_x21 != (char **)0x0) {
        _memmove(pcVar6,ppcVar15,unaff_x21);
      }
      _memmove(pcVar6 + (long)unaff_x21,unaff_x22,unaff_x20);
      if (uVar16 != 0x16) {
        __ZdlPv(ppcVar15);
      }
      *param_2 = pcVar6;
      param_2[1] = (char *)((long)unaff_x21 + (long)unaff_x20);
      param_2[2] = (char *)((ulong)pcVar17 | 0x8000000000000000);
      pcVar6[(long)unaff_x21 + (long)unaff_x20] = '\0';
LAB_10b2fc4ec:
      pcStack_70 = (char *)&pcStack_90;
      func_0x000107c2cf54(&pcStack_70,lStack_78);
      return;
    }
    param_1 = ppcVar13;
    if (((long)unaff_x20 - uVar16) + (long)unaff_x21 <= 0x7ffffffffffffff6 - uVar16) {
      if ((char)bVar4 < '\0') {
        ppcVar12 = (char **)*param_2;
        if (0x3ffffffffffffff2 < uVar16) goto LAB_10b2fc180;
LAB_10b2fc0fc:
        uVar1 = (long)unaff_x21 + (long)unaff_x20;
        if ((ulong)((long)unaff_x21 + (long)unaff_x20) <= uVar16 * 2) {
          uVar1 = uVar16 * 2;
        }
        pcVar6 = (char *)0x19;
        if ((uVar1 | 7) != 0x17) {
          pcVar6 = (char *)((uVar1 | 7) + 1);
        }
        pcVar17 = (char *)0x17;
        if (0x16 < uVar1) {
          pcVar17 = pcVar6;
        }
        pcVar6 = pcVar17;
        __Znwm();
      }
      else {
        ppcVar12 = param_2;
        if (uVar16 < 0x3ffffffffffffff3) goto LAB_10b2fc0fc;
LAB_10b2fc180:
        pcVar17 = (char *)0x7ffffffffffffff7;
        pcVar6 = pcVar17;
        __Znwm();
      }
      if (unaff_x21 != (char **)0x0) {
        _memmove(pcVar6,ppcVar12,unaff_x21);
      }
      ppcVar13 = (char **)(pcVar6 + (long)unaff_x21);
      ppcVar15 = unaff_x22;
      _memmove(ppcVar13,unaff_x22,unaff_x20);
      if (uVar16 != 0x16) {
        __ZdlPv();
        ppcVar13 = ppcVar12;
      }
      *param_2 = pcVar6;
      param_2[1] = (char *)((long)unaff_x21 + (long)unaff_x20);
      param_2[2] = (char *)((ulong)pcVar17 | 0x8000000000000000);
      pcVar6[(long)unaff_x21 + (long)unaff_x20] = '\0';
LAB_10b2fc220:
      ppcVar2 = (char **)param_2[1];
      unaff_x24 = (char *)((ulong)param_2[2] & 0x7fffffffffffffff);
      unaff_x23 = (char **)(unaff_x24 + -1);
      if (unaff_x23 == ppcVar2) {
        param_1 = ppcVar13;
        if (unaff_x23 == (char **)0x7ffffffffffffff6) goto LAB_10b2fc530;
        unaff_x22 = (char **)*param_2;
        if (unaff_x23 < (char **)0x3ffffffffffffff3) {
          if (unaff_x23 == (char **)0x0) {
            unaff_x20 = (char **)0x17;
            unaff_x21 = (char **)0x17;
            __Znwm();
          }
          else {
            uVar16 = (long)unaff_x23 * 2 | 7;
            ppcVar13 = (char **)0x19;
            if (uVar16 != 0x17) {
              ppcVar13 = (char **)(uVar16 + 1);
            }
            unaff_x20 = (char **)0x17;
            if ((char **)0xb < unaff_x23) {
              unaff_x20 = ppcVar13;
            }
            unaff_x21 = unaff_x20;
            __Znwm();
            if (unaff_x23 != (char **)0x0) goto LAB_10b2fc2bc;
          }
LAB_10b2fc320:
          *(undefined1 *)((long)unaff_x21 + (long)unaff_x23) = 10;
          unaff_x24 = (char *)0x1;
        }
        else {
          unaff_x20 = (char **)0x7ffffffffffffff7;
          unaff_x21 = unaff_x20;
          __Znwm();
          if (unaff_x23 == (char **)0x0) goto LAB_10b2fc320;
LAB_10b2fc2bc:
          ppcVar13 = unaff_x21;
          ppcVar15 = unaff_x22;
          _memmove(unaff_x21,unaff_x22,unaff_x23);
          *(undefined1 *)((long)unaff_x21 + (long)unaff_x23) = 10;
          if (unaff_x23 == (char **)0x16) goto LAB_10b2fc2dc;
        }
        ppcVar13 = unaff_x22;
        __ZdlPv();
        goto LAB_10b2fc334;
      }
      ppcVar12 = (char **)*param_2;
      *(undefined1 *)((long)ppcVar12 + (long)ppcVar2) = 10;
      pcVar17 = (char *)((long)ppcVar2 + 1);
      if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10b2fc298;
LAB_10b2fc300:
      param_2[1] = pcVar17;
      *(char *)((long)ppcVar12 + (long)pcVar17) = '\0';
      goto LAB_10b2fc344;
    }
  }
  else {
LAB_10b2fc52c:
    func_0x00010b324740();
  }
LAB_10b2fc530:
  func_0x000104bd47d4();
  pppuVar8 = &ppuStack_e0;
  pcStack_98 = FUN_10b2fc534;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = 0x300000002;
  uStack_d0 = 0x100000002;
  uStack_c0 = 1;
  ppuStack_e0 = &PTR_DAT_110cd4f68;
  ppcStack_d8 = param_1;
  ppcStack_b0 = unaff_x20;
  ppcStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2cb84();
  UNRECOVERED_JUMPTABLE = *(code **)((long)*pppuVar8 + 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x00010b2fc5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x10b2fc5b8;
  plVar9 = (long *)pppuVar8;
  pcStack_120 = unaff_x24;
  ppcStack_118 = unaff_x23;
  ppcStack_110 = unaff_x22;
  ppcStack_108 = unaff_x21;
  ppcStack_100 = unaff_x20;
  ppcStack_f8 = ppcVar15;
  ppuStack_f0 = &puStack_a0;
  _strlen();
  if ((long *)0x7ffffffffffffff7 < plVar9) {
    FUN_10b2ecf74();
    func_0x000107c2cba0();
                    /* WARNING: Could not recover jumptable at 0x00010b2fc6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x30))();
    return;
  }
  if (plVar9 < (long *)0x17) {
    uStack_128 = CONCAT17((char)plVar9,(undefined7)uStack_128);
    pppppuVar10 = &ppppuStack_138;
    if (plVar9 == (long *)0x0) goto LAB_10b2fc640;
  }
  else {
    pppppuVar11 = (undefined8 *****)0x19;
    if (((ulong)plVar9 | 7) != 0x17) {
      pppppuVar11 = (undefined8 *****)(((ulong)plVar9 | 7) + 1);
    }
    pppppuVar10 = pppppuVar11;
    __Znwm();
    uStack_128 = (ulong)pppppuVar11 | 0x8000000000000000;
    ppppuStack_138 = pppppuVar10;
    plStack_130 = plVar9;
  }
  _memcpy(pppppuVar10,pppuVar8,plVar9);
LAB_10b2fc640:
  *(undefined1 *)((long)pppppuVar10 + (long)plVar9) = 0;
  pppppuVar11 = &ppppuStack_138;
  func_0x000107c2cba0(pppppuVar11,1,UNRECOVERED_JUMPTABLE,(int)UNRECOVERED_JUMPTABLE + 1,1);
  if ((long)uStack_128 < 0) {
    __ZdlPv(ppppuStack_138);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2fc698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*pppppuVar11)[6])();
  return;
}



/* Entry: 10b2fc534; end: 10b2fc983;  */

void FUN_10b2fc534(undefined8 param_1)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 ***pppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x300000002;
  uStack_40 = 0x100000002;
  uStack_30 = 1;
  ppuStack_50 = &PTR_DAT_110cd4f68;
  uStack_48 = param_1;
  func_0x000107c2cb84();
  UNRECOVERED_JUMPTABLE = *(code **)((long)*pppuVar1 + 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010b2fc5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ___stack_chk_fail();
  plVar2 = (long *)pppuVar1;
  _strlen();
  if ((long *)0x7ffffffffffffff7 < plVar2) {
    FUN_10b2ecf74();
    func_0x000107c2cba0();
                    /* WARNING: Could not recover jumptable at 0x00010b2fc6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return;
  }
  if (plVar2 < (long *)0x17) {
    uStack_98 = CONCAT17((char)plVar2,(undefined7)uStack_98);
    ppppuVar3 = &pppuStack_a8;
    if (plVar2 == (long *)0x0) goto LAB_10b2fc640;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if (((ulong)plVar2 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)(((ulong)plVar2 | 7) + 1);
    }
    ppppuVar3 = ppppuVar4;
    __Znwm();
    uStack_98 = (ulong)ppppuVar4 | 0x8000000000000000;
    pppuStack_a8 = ppppuVar3;
    plStack_a0 = plVar2;
  }
  _memcpy(ppppuVar3,pppuVar1,plVar2);
LAB_10b2fc640:
  *(undefined1 *)((long)ppppuVar3 + (long)plVar2) = 0;
  ppppuVar4 = &pppuStack_a8;
  func_0x000107c2cba0(ppppuVar4,1,UNRECOVERED_JUMPTABLE,(int)UNRECOVERED_JUMPTABLE + 1,1);
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2fc698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*ppppuVar4)[6])();
  return;
}



/* Entry: 10b2fc984; end: 10b2fca2f;  */

void FUN_10b2fc984(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plStack_28;
  
  lVar6 = *(long *)(param_2[1] + 8);
  iVar3 = *(int *)(param_2[1] + 0x10);
  plVar1 = (long *)(param_1[1] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  piVar2 = (int *)(param_1[1] + 0x10);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_28 = (long *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x40))(&plStack_28,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,plStack_28,0);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10b2fca30; end: 10b2fcbdf;  */

void FUN_10b2fca30(long *param_1,undefined ***param_2)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x9;
  long lVar8;
  long lVar9;
  long extraout_x10;
  long extraout_x12;
  long lVar10;
  undefined **ppuStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)param_2[1];
  lVar8 = (long)param_2[2];
  if ((ulong)(lVar8 - lVar7) < 8) {
LAB_10b2fca7c:
    param_2[1] = (undefined **)lVar8;
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    lVar1 = lVar7 + 8;
    param_2[1] = (undefined **)lVar1;
    plVar2 = (long *)((long)*param_2 + lVar7);
    if (plVar2 != (long *)0x0) {
      if ((ulong)(lVar8 - lVar1) < 4) goto LAB_10b2fca7c;
      lVar8 = *plVar2;
      param_2[1] = (undefined **)(lVar7 + 0xc);
      piVar3 = (int *)((long)*param_2 + lVar1);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        plVar2 = (long *)(param_1[1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        piVar3 = (int *)(param_1[1] + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uStack_28 = 0xaaaaaaaaaaaaaaaa;
        uStack_30 = 0xaaaaaaaaaaaaaaaa;
        ppuStack_40 = &PTR_FUN_110cd4ff8;
        uStack_20 = 0xaaaaaa00aaaaaaaa;
        lVar7 = (long)param_2[1];
        lVar8 = (long)param_2[2];
        plStack_38 = (long *)param_2;
        if (3 < (ulong)(lVar8 - lVar7)) {
          lVar9 = (long)*param_2;
          lVar1 = lVar7 + 4;
          param_2[1] = (undefined **)lVar1;
          if ((undefined4 *)(lVar9 + lVar7) == (undefined4 *)0x0) goto LAB_10b2fcb6c;
          uStack_30 = CONCAT44(0xaaaaaaaa,*(undefined4 *)(lVar9 + lVar7));
          if (7 < (ulong)(lVar8 - lVar1)) {
            lVar10 = lVar7 + 0xc;
            param_2[1] = (undefined **)lVar10;
            if ((undefined8 *)(lVar9 + lVar1) == (undefined8 *)0x0) goto LAB_10b2fcb6c;
            uStack_28 = *(undefined8 *)(lVar9 + lVar1);
            if (3 < (ulong)(lVar8 - lVar10)) goto LAB_10b2fcbc4;
          }
        }
        param_2[1] = (undefined **)lVar8;
        goto LAB_10b2fcb6c;
      }
    }
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  param_1 = (long *)0x0;
  if (lVar7 != lStack_18) {
    do {
      ___stack_chk_fail();
      lVar7 = extraout_x9;
      lVar9 = extraout_x10;
      lVar10 = extraout_x12;
LAB_10b2fcbc4:
      param_2[1] = (undefined **)(lVar7 + 0x10);
      if ((undefined4 *)(lVar9 + lVar10) == (undefined4 *)0x0) {
LAB_10b2fcb6c:
        uStack_20._0_5_ = CONCAT14(1,(undefined4)uStack_20);
      }
      else {
        uStack_20 = CONCAT44(uStack_20._4_4_,*(undefined4 *)(lVar9 + lVar10));
      }
      param_2 = &ppuStack_40;
      (**(code **)(*param_1 + 0x50))();
    } while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18);
  }
  return;
}



/* Entry: 10b2fcbe0; end: 10b2fcbe3;  */

void FUN_10b2fcbe0(void)

{
  return;
}



/* Entry: 10b2fcbe4; end: 10b2fcc97;  */

void FUN_10b2fcbe4(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plStack_28;
  
  lVar6 = *(long *)(param_2[1] + 8);
  iVar3 = *(int *)(param_2[1] + 0x10);
  plVar1 = (long *)(param_1[1] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 - lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  piVar2 = (int *)(param_1[1] + 0x10);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 - iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_28 = (long *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x40))(&plStack_28,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,plStack_28,1);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10b2fcc98; end: 10b2fcfd7;  */

void FUN_10b2fcc98(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  uVar11 = *(undefined8 *)(param_1[1] + 8);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar1 = lVar9 + 8;
  if (*(ulong *)(param_2 + 0x18) < uVar1) {
    uVar7 = *(ulong *)(param_2 + 0x18) * 2;
    uVar8 = (uVar7 + 0xfff & 0xfffffffffffff000) - 0x40;
    if (uVar7 < 0x1001) {
      uVar8 = uVar7;
    }
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
    *(ulong *)(param_2 + 0x18) = uVar8;
    puVar5 = *(undefined4 **)(param_2 + 8);
    _realloc(puVar5,*(long *)(param_2 + 0x10) + uVar8);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x10b2fcfc4);
      (*pcVar4)();
    }
    *(undefined4 **)(param_2 + 8) = puVar5;
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    puVar5 = *(undefined4 **)(param_2 + 8);
  }
  lVar10 = *(long *)(param_2 + 0x10);
  *puVar5 = (int)uVar1;
  *(ulong *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)((long)puVar5 + lVar9 + lVar10) = uVar11;
  uVar2 = *(undefined4 *)(param_1[1] + 0x10);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar1 = lVar9 + 4;
  if (*(ulong *)(param_2 + 0x18) < uVar1) {
    uVar7 = *(ulong *)(param_2 + 0x18) * 2;
    uVar8 = (uVar7 + 0xfff & 0xfffffffffffff000) - 0x40;
    if (uVar7 < 0x1001) {
      uVar8 = uVar7;
    }
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
    *(ulong *)(param_2 + 0x18) = uVar8;
    puVar5 = *(undefined4 **)(param_2 + 8);
    _realloc(puVar5,*(long *)(param_2 + 0x10) + uVar8);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x10b2fcfd0);
      (*pcVar4)();
    }
    *(undefined4 **)(param_2 + 8) = puVar5;
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    puVar5 = *(undefined4 **)(param_2 + 8);
  }
  lVar10 = *(long *)(param_2 + 0x10);
  *puVar5 = (int)uVar1;
  *(ulong *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)((long)puVar5 + lVar9 + lVar10) = uVar2;
  uStack_34 = 0xaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_44 = 0xaaaaaaaa;
  plStack_50 = (long *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x40))(&plStack_50,param_1);
  do {
    plVar6 = plStack_50;
    (**(code **)(*plStack_50 + 0x10))();
    plVar3 = plStack_50;
    if (((ulong)plVar6 & 1) != 0) {
      plStack_50 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      return;
    }
    (**(code **)(*plStack_50 + 0x20))(plStack_50,&uStack_34,&uStack_40,&uStack_44);
    uVar2 = uStack_34;
    lVar9 = *(long *)(param_2 + 0x20);
    uVar1 = lVar9 + 4;
    if (*(ulong *)(param_2 + 0x18) < uVar1) {
      uVar7 = *(ulong *)(param_2 + 0x18) * 2;
      uVar8 = (uVar7 + 0xfff & 0xfffffffffffff000) - 0x40;
      if (uVar7 < 0x1001) {
        uVar8 = uVar7;
      }
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
      *(ulong *)(param_2 + 0x18) = uVar8;
      puVar5 = *(undefined4 **)(param_2 + 8);
      _realloc(puVar5,*(long *)(param_2 + 0x10) + uVar8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10b2fcfa0);
        (*pcVar4)();
      }
      *(undefined4 **)(param_2 + 8) = puVar5;
      lVar9 = *(long *)(param_2 + 0x20);
    }
    else {
      puVar5 = *(undefined4 **)(param_2 + 8);
    }
    uVar11 = uStack_40;
    lVar10 = *(long *)(param_2 + 0x10);
    *puVar5 = (int)uVar1;
    *(ulong *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)((long)puVar5 + lVar9 + lVar10) = uVar2;
    lVar9 = *(long *)(param_2 + 0x20);
    uVar1 = lVar9 + 8;
    if (*(ulong *)(param_2 + 0x18) < uVar1) {
      uVar7 = *(ulong *)(param_2 + 0x18) * 2;
      uVar8 = (uVar7 + 0xfff & 0xfffffffffffff000) - 0x40;
      if (uVar7 < 0x1001) {
        uVar8 = uVar7;
      }
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
      *(ulong *)(param_2 + 0x18) = uVar8;
      puVar5 = *(undefined4 **)(param_2 + 8);
      _realloc(puVar5,*(long *)(param_2 + 0x10) + uVar8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10b2fcfac);
        (*pcVar4)();
      }
      *(undefined4 **)(param_2 + 8) = puVar5;
      lVar9 = *(long *)(param_2 + 0x20);
    }
    else {
      puVar5 = *(undefined4 **)(param_2 + 8);
    }
    uVar2 = uStack_44;
    lVar10 = *(long *)(param_2 + 0x10);
    *puVar5 = (int)uVar1;
    *(ulong *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)((long)puVar5 + lVar9 + lVar10) = uVar11;
    lVar9 = *(long *)(param_2 + 0x20);
    uVar1 = lVar9 + 4;
    if (*(ulong *)(param_2 + 0x18) < uVar1) {
      uVar7 = *(ulong *)(param_2 + 0x18) * 2;
      uVar8 = (uVar7 + 0xfff & 0xfffffffffffff000) - 0x40;
      if (uVar7 < 0x1001) {
        uVar8 = uVar7;
      }
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
      *(ulong *)(param_2 + 0x18) = uVar8;
      puVar5 = *(undefined4 **)(param_2 + 8);
      _realloc(puVar5,*(long *)(param_2 + 0x10) + uVar8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10b2fcfb8);
        (*pcVar4)();
      }
      *(undefined4 **)(param_2 + 8) = puVar5;
      lVar9 = *(long *)(param_2 + 0x20);
    }
    else {
      puVar5 = *(undefined4 **)(param_2 + 8);
    }
    lVar10 = *(long *)(param_2 + 0x10);
    *puVar5 = (int)uVar1;
    *(ulong *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)((long)puVar5 + lVar9 + lVar10) = uVar2;
    (**(code **)(*plStack_50 + 0x18))();
  } while( true );
}



/* Entry: 10b2fcfd8; end: 10b2fd28f;  */

/* WARNING: Possible PIC construction at 0x000100220da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100220e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100220da8) */
/* WARNING: Removing unreachable block (ram,0x000100220e20) */
/* WARNING: Removing unreachable block (ram,0x000100220e28) */
/* WARNING: Removing unreachable block (ram,0x000100220db0) */

undefined8 **** FUN_10b2fcfd8(long param_1)

{
  undefined8 ***pppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 ****unaff_x20;
  undefined8 ****unaff_x22;
  undefined *puVar12;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_58;
  undefined8 ***pppuStack_50;
  undefined8 uStack_48;
  
  ppppuVar8 = ppppuRam000000011383aad8;
  if (ppppuRam000000011383aad8 == (undefined8 ****)0x0) {
    ppppuVar7 = (undefined8 ****)0x20;
    __Znwm();
    uStack_48 = 0x8000000000000020;
    pppuStack_50 = (undefined8 ****)0x1a;
    ppppuVar7[1] = (undefined8 ***)0x706d615365766974;
    *ppppuVar7 = (undefined8 ***)0x6167654e2e414d55;
    *(undefined8 *)((long)ppppuVar7 + 0x12) = 0x6e6f736165522e73;
    *(undefined8 *)((long)ppppuVar7 + 10) = 0x656c706d61536576;
    *(undefined1 *)((long)ppppuVar7 + 0x1a) = 0;
    ppppuVar8 = &pppuStack_58;
    pppuStack_58 = ppppuVar7;
    func_0x000107c2cba0(ppppuVar8,1,9,10,1);
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppuStack_58);
    }
  }
  ppppuRam000000011383aad8 = ppppuVar8;
  (*(code *)(*ppppuRam000000011383aad8)[6])();
  if (plRam000000011383aae0 == (long *)0x0) {
    plVar9 = (long *)&UNK_10f7444f5;
    func_0x000107c2cb94(&UNK_10f7444f5,1,0x40000000,100,1);
    plRam000000011383aae0 = plVar9;
  }
  (**(code **)(*plRam000000011383aae0 + 0x30))();
  uVar6 = **(uint **)(param_1 + 8);
  ppppuVar8 = (undefined8 ****)&UNK_10f744513;
  uVar11 = (ulong)uVar6;
  func_0x000107c613d0();
  uVar10 = (uint)uVar11;
  if (ppppuVar8 < (undefined8 ****)0x7ffffffffffffff8) {
    unaff_x20 = ppppuVar8;
    if (ppppuVar8 < (undefined8 ****)0x17) {
      uStack_48 = CONCAT17((char)ppppuVar8,(undefined7)uStack_48);
      unaff_x22 = &pppuStack_58;
      if (ppppuVar8 == (undefined8 ****)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
        pppuStack_58._0_1_ = 0;
        uVar10 = 1;
        puVar12 = &UNK_100220da8;
        ppppuVar8 = &pppuStack_58;
        goto code_r0x000100220e44;
      }
    }
    else {
      ppppuVar7 = (undefined8 ****)0x19;
      if (((ulong)ppppuVar8 | 7) != 0x17) {
        ppppuVar7 = (undefined8 ****)(((ulong)ppppuVar8 | 7) + 1);
      }
      unaff_x22 = ppppuVar7;
      func_0x000107c60e20();
      uStack_48 = (ulong)ppppuVar7 | 0x8000000000000000;
      pppuStack_58 = unaff_x22;
      pppuStack_50 = ppppuVar8;
    }
    func_0x000107c610b4(unaff_x22,&UNK_10f744513,ppppuVar8);
    *(undefined1 *)((long)unaff_x22 + (long)ppppuVar8) = 0;
    uVar10 = 1;
    puVar12 = &UNK_100220e20;
    ppppuVar8 = &pppuStack_58;
  }
  else {
    puVar12 = &UNK_100220e44;
    func_0x000107c35c54();
  }
code_r0x000100220e44:
  puStack_88 = &UNK_10f744513;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar2 = *(char *)((long)ppppuVar8 + 0x17);
  ppppuVar7 = (undefined8 ****)*ppppuVar8;
  if (-1 < (long)cVar2) {
    ppppuVar7 = ppppuVar8;
  }
  pppuVar1 = ppppuVar8[1];
  if (-1 < cVar2) {
    pppuVar1 = (undefined8 ***)(long)cVar2;
  }
  pppuStack_90 = unaff_x22;
  pppuStack_80 = unaff_x20;
  uStack_78 = (ulong)uVar6;
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_68 = puVar12;
  func_0x000100121f3c(ppppuVar7,pppuVar1);
  if (ppppuVar7 == (undefined8 ****)0x0) {
    cVar2 = *(char *)((long)ppppuVar8 + 0x17);
    ppppuVar7 = (undefined8 ****)*ppppuVar8;
    if (-1 < (long)cVar2) {
      ppppuVar7 = ppppuVar8;
    }
    pppuVar1 = ppppuVar8[1];
    if (-1 < cVar2) {
      pppuVar1 = (undefined8 ***)(long)cVar2;
    }
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0x1032547698badcfe;
    uStack_100 = 0xefcdab8967452301;
    func_0x000100122910(&uStack_100,ppppuVar7,pppuVar1);
    func_0x000100122a24(&uStack_110,&uStack_100);
    uVar6 = ((uint)uStack_110 & 0xff00ff00) >> 8 | ((uint)uStack_110 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    func_0x000100123510();
    if (uVar6 == 0) {
      if ((bRam000000011383aa60 & 1) == 0) goto code_r0x000100220fc0;
      ppppuVar7 = (undefined8 ****)0x11383aa48;
      goto code_r0x000100220eac;
    }
    ppppuVar7 = (undefined8 ****)0x70;
    func_0x000107c60e20();
    func_0x0001001245e8(ppppuVar8);
    func_0x000100221000(ppppuVar7,ppppuVar8);
    ppppuVar8 = ppppuVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar8,0x10);
      if (bVar3) {
        *(uint *)ppppuVar8 = *(uint *)ppppuVar8 | uVar10 & 0xffffffbf;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000100124ac4();
    ppppuVar8 = ppppuVar7;
    (*(code *)(*ppppuVar7)[4])();
    iVar5 = (int)ppppuVar8;
  }
  else {
    ppppuVar8 = ppppuVar7;
    (*(code *)(*ppppuVar7)[4])();
    iVar5 = (int)ppppuVar8;
  }
  if (iVar5 != 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x100220f98);
    (*pcVar4)();
  }
code_r0x000100220eac:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78();
code_r0x000100220fc0:
    iVar5 = 0x1383aa60;
    func_0x000107c60e48();
    ppppuVar7 = (undefined8 ****)0x11383aa48;
    if (iVar5 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      func_0x000107c60e4c(0x11383aa60);
    }
  }
  return ppppuVar7;
}



/* Entry: 10b2fd290; end: 10b2fd30b;  */

void FUN_10b2fd290(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*param_2 + 0x20))();
  func_0x00010b307fd0(param_1,&UNK_10f744542);
  if (param_5 != 0) {
    func_0x00010b307fd0(param_1,&UNK_10f744566);
  }
  return;
}



/* Entry: 10b2fd30c; end: 10b2fdc4b;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_10b2fd30c(ulong *******param_1,long *param_2)

{
  ulong ******ppppppuVar1;
  int iVar2;
  uint uVar3;
  ulong ******ppppppuVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  ulong ******ppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  int iVar11;
  ulong ******ppppppuVar12;
  ulong *****pppppuVar13;
  ulong ******ppppppuVar14;
  ulong uVar15;
  ulong *****pppppuVar16;
  ulong *******pppppppuVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  ulong *******pppppppuVar20;
  uint uVar21;
  ulong *******pppppppuVar22;
  long lVar23;
  ulong *****pppppuVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iStack_c4;
  ulong *****pppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  undefined8 uStack_a8;
  uint uStack_9c;
  ulong *******pppppppuStack_98;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x20))();
  pppppppuStack_98 = (ulong *******)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x40))(&pppppppuStack_98,param_2);
  pppppppuVar9 = pppppppuStack_98;
  (*(code *)(*pppppppuStack_98)[2])();
  dVar26 = 1.0;
  if (((ulong)pppppppuVar9 & 1) == 0) {
    uVar21 = 0;
    iVar11 = 0;
    do {
      pppppuStack_c0 = (ulong *****)CONCAT44(pppppuStack_c0._4_4_,0xaaaaaaaa);
      pppppppuStack_b8 = (ulong *******)0xaaaaaaaaaaaaaaaa;
      uStack_9c = 0xaaaaaaaa;
      (*(code *)(*pppppppuStack_98)[4])
                (pppppppuStack_98,&pppppuStack_c0,&pppppppuStack_b8,&uStack_9c);
      iVar2 = (int)pppppuStack_c0;
      if ((int)pppppuStack_c0 <= iVar11) {
        iVar2 = iVar11;
      }
      uVar3 = uStack_9c;
      if ((int)uStack_9c <= (int)uVar21) {
        uVar3 = uVar21;
      }
      (*(code *)(*pppppppuStack_98)[3])();
      pppppppuVar9 = pppppppuStack_98;
      (*(code *)(*pppppppuStack_98)[2])();
      uVar21 = uVar3;
      iVar11 = iVar2;
    } while ((int)pppppppuVar9 == 0);
    if (0x48 < uVar3) {
      dVar26 = 72.0 / (double)uVar3;
    }
  }
  func_0x000107c2cc94(&pppppppuStack_b8,&UNK_10f744586);
  ppppppuVar12 = ppppppuStack_b0;
  ppppppuVar14 = (ulong ******)(long)uStack_a8._7_1_;
  if ((long)uStack_a8._7_1_ < 0) {
    __ZdlPv(pppppppuStack_b8);
    ppppppuVar14 = ppppppuVar12;
  }
  (**(code **)(*param_2 + 0x40))(&pppppppuStack_b8,param_2);
  pppppppuVar9 = pppppppuStack_98;
  pppppppuStack_98 = pppppppuStack_b8;
  pppppppuStack_b8 = (ulong *******)0x0;
  if (pppppppuVar9 != (ulong *******)0x0) {
    (*(code *)(*pppppppuVar9)[1])();
    pppppppuVar9 = pppppppuStack_b8;
    pppppppuStack_b8 = (ulong *******)0x0;
    if (pppppppuVar9 != (ulong *******)0x0) {
      (*(code *)(*pppppppuVar9)[1])();
    }
  }
  *param_1 = (ulong ******)0x0;
  param_1[1] = (ulong ******)0x0;
  param_1[2] = (ulong ******)0x0;
  pppppppuVar9 = pppppppuStack_98;
  (*(code *)(*pppppppuStack_98)[2])();
  if (((ulong)pppppppuVar9 & 1) == 0) {
    dVar25 = (double)(int)plVar7;
    dVar27 = dVar25 / 100.0;
    do {
      uStack_9c = 0xaaaaaaaa;
      pppppuStack_c0 = (ulong *****)0xaaaaaaaaaaaaaaaa;
      iStack_c4 = -0x55555556;
      ppppppuVar12 = &pppppuStack_c0;
      (*(code *)(*pppppppuStack_98)[4])(pppppppuStack_98,&uStack_9c,ppppppuVar12,&iStack_c4);
      ppppppuStack_b0 = (ulong ******)0xaaaaaaaaaaaaaaaa;
      uStack_a8 = 0xaaaaaaaaaaaaaaaa;
      pppppppuStack_b8 = (ulong *******)0xaaaaaaaaaaaaaaaa;
      pppppppuVar9 = (ulong *******)&UNK_10f744586;
      func_0x000107c2cc94(&pppppppuStack_b8,&UNK_10f744586);
      ppppppuVar18 = ppppppuStack_b0;
      pppppppuVar17 = pppppppuStack_b8;
      if (-1 < (long)uStack_a8) {
        ppppppuVar18 = (ulong ******)(uStack_a8 >> 0x38);
        pppppppuVar17 = (ulong *******)&pppppppuStack_b8;
      }
      iVar11 = (int)pppppppuVar17;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar15 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
      ppppppuVar19 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar15 = 0x16;
        ppppppuVar19 = (ulong ******)(ulong)bVar5;
      }
      if ((ulong ******)(uVar15 - (long)ppppppuVar19) < ppppppuVar18) {
        ppppppuVar1 = (ulong ******)((long)ppppppuVar19 + (long)ppppppuVar18);
        if ((long)ppppppuVar1 - uVar15 <= ~uVar15 + 0x7ffffffffffffff7) {
          pppppppuVar10 = (ulong *******)*param_1;
          if (-1 < (char)bVar5) {
            pppppppuVar10 = param_1;
          }
          ppppppuVar12 = (ulong ******)0x7ffffffffffffff7;
          if (uVar15 < 0x3ffffffffffffff3) {
            ppppppuVar8 = ppppppuVar1;
            if (ppppppuVar1 <= (ulong ******)(uVar15 * 2)) {
              ppppppuVar8 = (ulong ******)(uVar15 * 2);
            }
            ppppppuVar4 = (ulong ******)0x19;
            if (((ulong)ppppppuVar8 | 7) != 0x17) {
              ppppppuVar4 = (ulong ******)(((ulong)ppppppuVar8 | 7) + 1);
            }
            ppppppuVar12 = (ulong ******)0x17;
            if ((ulong ******)0x16 < ppppppuVar8) {
              ppppppuVar12 = ppppppuVar4;
            }
          }
          ppppppuVar8 = ppppppuVar12;
          __Znwm();
          if (ppppppuVar19 != (ulong ******)0x0) {
            _memmove(ppppppuVar8,pppppppuVar10,ppppppuVar19);
          }
          pppppppuVar9 = (ulong *******)((long)ppppppuVar8 + (long)ppppppuVar19);
          _memmove(pppppppuVar9);
          if (uVar15 != 0x16) {
            __ZdlPv(pppppppuVar10);
            pppppppuVar9 = pppppppuVar10;
          }
          param_1[1] = ppppppuVar1;
          param_1[2] = (ulong ******)((ulong)ppppppuVar12 | 0x8000000000000000);
          *param_1 = ppppppuVar8;
          *(undefined1 *)((long)ppppppuVar8 + (long)ppppppuVar1) = 0;
          ppppppuVar12 = ppppppuVar18;
          goto LAB_10b2fd6cc;
        }
LAB_10b2fdc48:
        func_0x000104bd47d4();
        dVar26 = dVar25;
        goto joined_r0x00010b2fdc94;
      }
      if (ppppppuVar18 != (ulong ******)0x0) {
        pppppppuVar10 = (ulong *******)*param_1;
        if (-1 < (char)bVar5) {
          pppppppuVar10 = param_1;
        }
        pppppppuVar9 = (ulong *******)((long)pppppppuVar10 + (long)ppppppuVar19);
        ppppppuVar12 = ppppppuVar18;
        _memmove(pppppppuVar9);
        ppppppuVar19 = (ulong ******)((long)ppppppuVar19 + (long)ppppppuVar18);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = ppppppuVar19;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar19 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar19) = 0;
      }
LAB_10b2fd6cc:
      ppppppuVar18 = ppppppuStack_b0;
      if (-1 < (long)uStack_a8) {
        ppppppuVar18 = (ulong ******)(uStack_a8 >> 0x38);
      }
      if (ppppppuVar18 < (ulong ******)((long)ppppppuVar14 + 2)) {
        lVar23 = 0;
        do {
          iVar11 = (int)pppppppuVar17;
          bVar5 = *(byte *)((long)param_1 + 0x17);
          if ((char)bVar5 < '\0') {
            ppppppuVar18 = param_1[1];
            ppppppuVar19 = (ulong ******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
            if (ppppppuVar18 == ppppppuVar19) {
              if (((ulong)param_1[2] & 0x7fffffffffffffff) != 0x7ffffffffffffff7) {
                pppppppuVar10 = (ulong *******)*param_1;
                if (ppppppuVar19 < (ulong ******)0x3ffffffffffffff3) {
                  if (ppppppuVar19 == (ulong ******)0x0) {
                    pppppppuVar20 = (ulong *******)0x17;
                  }
                  else {
                    uVar15 = (long)ppppppuVar19 * 2 | 7;
                    pppppppuVar9 = (ulong *******)0x19;
                    if (uVar15 != 0x17) {
                      pppppppuVar9 = (ulong *******)(uVar15 + 1);
                    }
                    pppppppuVar20 = (ulong *******)0x17;
                    if ((ulong ******)0xb < ppppppuVar19) {
                      pppppppuVar20 = pppppppuVar9;
                    }
                  }
                  goto LAB_10b2fd758;
                }
                bVar6 = false;
                pppppppuVar20 = (ulong *******)0x7ffffffffffffff7;
                pppppppuVar22 = pppppppuVar20;
                __Znwm();
                ppppppuVar18 = ppppppuVar19;
                goto joined_r0x00010b2fd81c;
              }
              goto LAB_10b2fdc48;
            }
            pppppppuVar22 = (ulong *******)*param_1;
LAB_10b2fd7f8:
            param_1[1] = (ulong ******)((long)ppppppuVar18 + 1);
          }
          else {
            if (bVar5 == 0x16) {
              ppppppuVar19 = (ulong ******)0x16;
              pppppppuVar10 = param_1;
              pppppppuVar20 = (ulong *******)0x30;
LAB_10b2fd758:
              bVar6 = ppppppuVar19 == (ulong ******)0x16;
              pppppppuVar22 = pppppppuVar20;
              __Znwm();
              ppppppuVar18 = ppppppuVar19;
joined_r0x00010b2fd81c:
              pppppppuVar9 = pppppppuVar22;
              if (ppppppuVar18 != (ulong ******)0x0) {
                pppppppuVar17 = pppppppuVar10;
                ppppppuVar12 = ppppppuVar18;
                _memmove(pppppppuVar22);
              }
              if (!bVar6) {
                __ZdlPv(pppppppuVar10);
                pppppppuVar9 = pppppppuVar10;
              }
              *param_1 = (ulong ******)pppppppuVar22;
              param_1[2] = (ulong ******)((ulong)pppppppuVar20 | 0x8000000000000000);
              goto LAB_10b2fd7f8;
            }
            ppppppuVar18 = (ulong ******)(ulong)bVar5;
            *(byte *)((long)param_1 + 0x17) = bVar5 + 1 & 0x7f;
            pppppppuVar22 = param_1;
          }
          *(undefined2 *)((long)pppppppuVar22 + (long)ppppppuVar18) = 0x20;
          lVar23 = lVar23 + 1;
          ppppppuVar18 = ppppppuStack_b0;
          if (-1 < (long)uStack_a8) {
            ppppppuVar18 = (ulong ******)(uStack_a8 >> 0x38);
          }
        } while ((ulong ******)((long)ppppppuVar18 + lVar23) <
                 (ulong ******)((long)ppppppuVar14 + 2));
      }
      dVar25 = dVar26 * (double)(long)iStack_c4;
      dVar28 = (double)(int)dVar25;
      dVar29 = dVar28;
      if (0 < (int)dVar25) {
        do {
          while( true ) {
            iVar11 = (int)pppppppuVar17;
            bVar5 = *(byte *)((long)param_1 + 0x17);
            ppppppuVar19 = (ulong ******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
            ppppppuVar18 = param_1[1];
            if (-1 < (char)bVar5) {
              ppppppuVar19 = (ulong ******)0x16;
              ppppppuVar18 = (ulong ******)(ulong)bVar5;
            }
            if (ppppppuVar19 != ppppppuVar18) break;
            if (ppppppuVar19 == (ulong ******)0x7ffffffffffffff6) goto LAB_10b2fdc48;
            pppppppuVar10 = (ulong *******)*param_1;
            if (-1 < (char)bVar5) {
              pppppppuVar10 = param_1;
            }
            uVar15 = (long)ppppppuVar19 << 1;
            if (ppppppuVar19 == (ulong ******)0x0) {
              uVar15 = 1;
            }
            pppppppuVar9 = (ulong *******)0x19;
            if ((uVar15 | 7) != 0x17) {
              pppppppuVar9 = (ulong *******)((uVar15 | 7) + 1);
            }
            pppppppuVar20 = (ulong *******)0x17;
            if (0x16 < uVar15) {
              pppppppuVar20 = pppppppuVar9;
            }
            pppppppuVar22 = (ulong *******)0x7ffffffffffffff7;
            if (ppppppuVar19 < (ulong ******)0x3ffffffffffffff3) {
              pppppppuVar22 = pppppppuVar20;
            }
            pppppppuVar20 = pppppppuVar22;
            __Znwm();
            if (ppppppuVar19 == (ulong ******)0x0) {
              *(undefined1 *)pppppppuVar20 = 0x2d;
LAB_10b2fd94c:
              __ZdlPv(pppppppuVar10);
              pppppppuVar9 = pppppppuVar10;
            }
            else {
              pppppppuVar9 = pppppppuVar20;
              pppppppuVar17 = pppppppuVar10;
              ppppppuVar12 = ppppppuVar19;
              _memmove(pppppppuVar20);
              *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19) = 0x2d;
              if (ppppppuVar19 != (ulong ******)0x16) goto LAB_10b2fd94c;
            }
            *param_1 = (ulong ******)pppppppuVar20;
            param_1[1] = (ulong ******)((long)ppppppuVar19 + 1);
            param_1[2] = (ulong ******)((ulong)pppppppuVar22 | 0x8000000000000000);
            *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19 + 1) = 0;
joined_r0x00010b2fd868:
            dVar29 = dVar29 + -1.0;
            if (dVar29 <= 0.0) goto LAB_10b2fd974;
          }
          pppppppuVar10 = (ulong *******)*param_1;
          if (-1 < (char)bVar5) {
            pppppppuVar10 = param_1;
          }
          *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0x2d;
          ppppppuVar18 = (ulong ******)((long)ppppppuVar18 + 1);
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            param_1[1] = ppppppuVar18;
            *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0;
            goto joined_r0x00010b2fd868;
          }
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar18 & 0x7f;
          *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0;
          dVar29 = dVar29 + -1.0;
        } while (0.0 < dVar29);
      }
LAB_10b2fd974:
      iVar11 = (int)pppppppuVar17;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      ppppppuVar19 = (ulong ******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
      ppppppuVar18 = param_1[1];
      if (-1 < (char)bVar5) {
        ppppppuVar19 = (ulong ******)0x16;
        ppppppuVar18 = (ulong ******)(ulong)bVar5;
      }
      if (ppppppuVar19 == ppppppuVar18) {
        if (ppppppuVar19 == (ulong ******)0x7ffffffffffffff6) goto LAB_10b2fdc48;
        pppppppuVar10 = (ulong *******)*param_1;
        if (-1 < (char)bVar5) {
          pppppppuVar10 = param_1;
        }
        uVar15 = (long)ppppppuVar19 << 1;
        if (ppppppuVar19 == (ulong ******)0x0) {
          uVar15 = 1;
        }
        pppppppuVar9 = (ulong *******)0x19;
        if ((uVar15 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)((uVar15 | 7) + 1);
        }
        pppppppuVar20 = (ulong *******)0x17;
        if (0x16 < uVar15) {
          pppppppuVar20 = pppppppuVar9;
        }
        pppppppuVar22 = (ulong *******)0x7ffffffffffffff7;
        if (ppppppuVar19 < (ulong ******)0x3ffffffffffffff3) {
          pppppppuVar22 = pppppppuVar20;
        }
        pppppppuVar20 = pppppppuVar22;
        __Znwm();
        if (ppppppuVar19 == (ulong ******)0x0) {
          *(undefined1 *)pppppppuVar20 = 0x4f;
LAB_10b2fda88:
          __ZdlPv(pppppppuVar10);
          pppppppuVar9 = pppppppuVar10;
        }
        else {
          pppppppuVar9 = pppppppuVar20;
          pppppppuVar17 = pppppppuVar10;
          ppppppuVar12 = ppppppuVar19;
          _memmove(pppppppuVar20);
          *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19) = 0x4f;
          if (ppppppuVar19 != (ulong ******)0x16) goto LAB_10b2fda88;
        }
        *param_1 = (ulong ******)pppppppuVar20;
        param_1[1] = (ulong ******)((long)ppppppuVar19 + 1);
        param_1[2] = (ulong ******)((ulong)pppppppuVar22 | 0x8000000000000000);
        *(undefined1 *)((long)pppppppuVar20 + (long)ppppppuVar19 + 1) = 0;
      }
      else {
        pppppppuVar10 = (ulong *******)*param_1;
        if (-1 < (char)bVar5) {
          pppppppuVar10 = param_1;
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0x4f;
        ppppppuVar18 = (ulong ******)((long)ppppppuVar18 + 1);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = ppppppuVar18;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar18 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0;
      }
      if (0 < (int)(72.0 - dVar28)) {
        dVar25 = 72.0 - dVar28;
        uVar21 = (int)(72.0 - dVar28) + 1;
        do {
          while( true ) {
            iVar11 = (int)pppppppuVar17;
            bVar5 = *(byte *)((long)param_1 + 0x17);
            ppppppuVar19 = (ulong ******)(((ulong)param_1[2] & 0x7fffffffffffffff) - 1);
            ppppppuVar18 = param_1[1];
            if (-1 < (char)bVar5) {
              ppppppuVar19 = (ulong ******)0x16;
              ppppppuVar18 = (ulong ******)(ulong)bVar5;
            }
            if (ppppppuVar19 != ppppppuVar18) break;
            if (ppppppuVar19 == (ulong ******)0x7ffffffffffffff6) goto LAB_10b2fdc48;
            pppppppuVar10 = (ulong *******)*param_1;
            if (-1 < (char)bVar5) {
              pppppppuVar10 = param_1;
            }
            pppppppuVar20 = (ulong *******)0x7ffffffffffffff7;
            if (ppppppuVar19 < (ulong ******)0x3ffffffffffffff3) {
              uVar15 = (long)ppppppuVar19 << 1;
              if (ppppppuVar19 == (ulong ******)0x0) {
                uVar15 = 1;
              }
              pppppppuVar9 = (ulong *******)0x19;
              if ((uVar15 | 7) != 0x17) {
                pppppppuVar9 = (ulong *******)((uVar15 | 7) + 1);
              }
              pppppppuVar20 = (ulong *******)0x17;
              if (0x16 < uVar15) {
                pppppppuVar20 = pppppppuVar9;
              }
            }
            pppppppuVar22 = pppppppuVar20;
            __Znwm();
            if (ppppppuVar19 == (ulong ******)0x0) {
              *(undefined1 *)pppppppuVar22 = 0x20;
LAB_10b2fdbc8:
              __ZdlPv(pppppppuVar10);
              pppppppuVar9 = pppppppuVar10;
            }
            else {
              pppppppuVar9 = pppppppuVar22;
              pppppppuVar17 = pppppppuVar10;
              ppppppuVar12 = ppppppuVar19;
              _memmove(pppppppuVar22);
              *(undefined1 *)((long)pppppppuVar22 + (long)ppppppuVar19) = 0x20;
              if (ppppppuVar19 != (ulong ******)0x16) goto LAB_10b2fdbc8;
            }
            *param_1 = (ulong ******)pppppppuVar22;
            param_1[1] = (ulong ******)((long)ppppppuVar19 + 1);
            param_1[2] = (ulong ******)((ulong)pppppppuVar20 | 0x8000000000000000);
            *(undefined1 *)((long)pppppppuVar22 + (long)ppppppuVar19 + 1) = 0;
joined_r0x00010b2fdad8:
            uVar21 = uVar21 - 1;
            if (uVar21 < 2) goto LAB_10b2fdbf0;
          }
          pppppppuVar10 = (ulong *******)*param_1;
          if (-1 < (char)bVar5) {
            pppppppuVar10 = param_1;
          }
          *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0x20;
          ppppppuVar18 = (ulong ******)((long)ppppppuVar18 + 1);
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            param_1[1] = ppppppuVar18;
            *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0;
            goto joined_r0x00010b2fdad8;
          }
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar18 & 0x7f;
          *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar18) = 0;
          uVar21 = uVar21 - 1;
        } while (1 < uVar21);
      }
LAB_10b2fdbf0:
      dVar25 = (double)iStack_c4 / dVar27;
      func_0x00010b307fd0(param_1,&UNK_10f744576);
      func_0x00010b307fd0(param_1,&DAT_10f68f57e);
      (*(code *)(*pppppppuStack_98)[3])();
      if ((long)uStack_a8 < 0) {
        __ZdlPv(pppppppuStack_b8);
      }
      pppppppuVar9 = pppppppuStack_98;
      (*(code *)(*pppppppuStack_98)[2])();
    } while (((ulong)pppppppuVar9 & 1) == 0);
  }
  pppppppuVar9 = pppppppuStack_98;
  pppppppuStack_98 = (ulong *******)0x0;
  if (pppppppuVar9 != (ulong *******)0x0) {
    (*(code *)(*pppppppuVar9)[1])();
  }
  return pppppppuVar9;
joined_r0x00010b2fdc94:
  if (0.0 < dVar26) {
    do {
      pppppuVar13 = (ulong *****)(long)*(char *)((long)ppppppuVar12 + 0x17);
      if ((long)pppppuVar13 < 0) {
        pppppuVar13 = ppppppuVar12[1];
        pppppuVar16 = (ulong *****)((ulong)ppppppuVar12[2] & 0x7fffffffffffffff);
        pppppuVar24 = (ulong *****)((long)pppppuVar16 + -1);
        if (pppppuVar24 != pppppuVar13) {
          ppppppuVar14 = (ulong ******)*ppppppuVar12;
          goto LAB_10b2fdcb0;
        }
        if (pppppuVar24 == (ulong *****)0x7ffffffffffffff6) goto LAB_10b2fe0f8;
        if (pppppuVar24 < (ulong *****)0x3ffffffffffffff3) {
          uVar15 = (long)pppppuVar24 * 2 | 7;
          pppppppuVar9 = (ulong *******)0x19;
          if (uVar15 != 0x17) {
            pppppppuVar9 = (ulong *******)(uVar15 + 1);
          }
          pppppppuVar10 = (ulong *******)0x17;
          if ((ulong *****)0xb < pppppuVar24) {
            pppppppuVar10 = pppppppuVar9;
          }
          pppppppuVar17 = (ulong *******)0x17;
          if (pppppuVar24 != (ulong *****)0x0) {
            pppppppuVar17 = pppppppuVar10;
          }
          pppppppuVar20 = (ulong *******)*ppppppuVar12;
          pppppppuVar10 = pppppppuVar17;
          __Znwm();
          if (pppppuVar24 != (ulong *****)0x0) goto LAB_10b2fdd8c;
LAB_10b2fddc8:
          *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar24) = 0x2d;
          pppppuVar16 = (ulong *****)0x1;
        }
        else {
          pppppppuVar17 = (ulong *******)0x7ffffffffffffff7;
          pppppppuVar20 = (ulong *******)*ppppppuVar12;
          pppppppuVar10 = pppppppuVar17;
          __Znwm();
          if (pppppuVar24 == (ulong *****)0x0) goto LAB_10b2fddc8;
LAB_10b2fdd8c:
          pppppppuVar9 = pppppppuVar10;
          _memmove(pppppppuVar10,pppppppuVar20,pppppuVar24);
          *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar24) = 0x2d;
          if (pppppuVar24 == (ulong *****)0x16) {
            pppppuVar16 = (ulong *****)0x17;
            goto LAB_10b2fddd8;
          }
        }
        pppppppuVar9 = pppppppuVar20;
        __ZdlPv(pppppppuVar9);
LAB_10b2fddd8:
        ppppppuVar12[1] = pppppuVar16;
        ppppppuVar12[2] = (ulong *****)((ulong)pppppppuVar17 | 0x8000000000000000);
        *ppppppuVar12 = (ulong *****)pppppppuVar10;
        *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar16) = 0;
        goto joined_r0x00010b2fdcec;
      }
      ppppppuVar14 = ppppppuVar12;
      if (*(char *)((long)ppppppuVar12 + 0x17) == '\x16') {
        pppppppuVar9 = (ulong *******)0x30;
        __Znwm();
        ppppppuVar14 = (ulong ******)*ppppppuVar12;
        pppppppuVar9[1] = (ulong ******)ppppppuVar12[1];
        *pppppppuVar9 = ppppppuVar14;
        *(undefined8 *)((long)pppppppuVar9 + 0xe) = *(undefined8 *)((long)ppppppuVar12 + 0xe);
        *(undefined1 *)((long)pppppppuVar9 + 0x16) = 0x2d;
        pppppuVar16 = (ulong *****)0x17;
        pppppppuVar17 = (ulong *******)0x30;
        pppppppuVar10 = pppppppuVar9;
        goto LAB_10b2fddd8;
      }
LAB_10b2fdcb0:
      *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0x2d;
      pppppuVar13 = (ulong *****)((long)pppppuVar13 + 1);
      if (*(char *)((long)ppppppuVar12 + 0x17) < '\0') goto LAB_10b2fdcdc;
      *(byte *)((long)ppppppuVar12 + 0x17) = (byte)pppppuVar13 & 0x7f;
      *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0;
      dVar26 = dVar26 + -1.0;
      if (dVar26 <= 0.0) break;
    } while( true );
  }
  pppppuVar13 = (ulong *****)(long)*(char *)((long)ppppppuVar12 + 0x17);
  if ((long)pppppuVar13 < 0) {
    pppppuVar13 = ppppppuVar12[1];
    pppppuVar24 = (ulong *****)((ulong)ppppppuVar12[2] & 0x7fffffffffffffff);
    pppppuVar16 = (ulong *****)((long)pppppuVar24 + -1);
    if (pppppuVar16 != pppppuVar13) {
      ppppppuVar14 = (ulong ******)*ppppppuVar12;
      goto LAB_10b2fdec4;
    }
    if (pppppuVar16 == (ulong *****)0x7ffffffffffffff6) goto LAB_10b2fe0f8;
    pppppppuVar9 = (ulong *******)*ppppppuVar12;
    if (pppppuVar16 < (ulong *****)0x3ffffffffffffff3) {
      uVar15 = (long)pppppuVar16 * 2 | 7;
      pppppppuVar17 = (ulong *******)0x19;
      if (uVar15 != 0x17) {
        pppppppuVar17 = (ulong *******)(uVar15 + 1);
      }
      pppppppuVar10 = (ulong *******)0x17;
      if ((ulong *****)0xb < pppppuVar16) {
        pppppppuVar10 = pppppppuVar17;
      }
      pppppppuVar17 = (ulong *******)0x17;
      if (pppppuVar16 != (ulong *****)0x0) {
        pppppppuVar17 = pppppppuVar10;
      }
      pppppppuVar10 = pppppppuVar17;
      __Znwm();
      if (pppppuVar16 != (ulong *****)0x0) goto LAB_10b2fde9c;
LAB_10b2fdf1c:
      *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar16) = 0x4f;
      pppppuVar24 = (ulong *****)0x1;
    }
    else {
      pppppppuVar17 = (ulong *******)0x7ffffffffffffff7;
      pppppppuVar10 = pppppppuVar17;
      __Znwm();
      if (pppppuVar16 == (ulong *****)0x0) goto LAB_10b2fdf1c;
LAB_10b2fde9c:
      pppppppuVar20 = pppppppuVar10;
      _memmove(pppppppuVar10,pppppppuVar9,pppppuVar16);
      *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar16) = 0x4f;
      if (pppppuVar16 == (ulong *****)0x16) goto LAB_10b2fde30;
    }
    __ZdlPv(pppppppuVar9);
LAB_10b2fdf30:
    ppppppuVar12[1] = pppppuVar24;
    ppppppuVar12[2] = (ulong *****)((ulong)pppppppuVar17 | 0x8000000000000000);
    *ppppppuVar12 = (ulong *****)pppppppuVar10;
    *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar24) = 0;
  }
  else {
    ppppppuVar14 = ppppppuVar12;
    if (*(char *)((long)ppppppuVar12 + 0x17) == '\x16') {
      pppppppuVar17 = (ulong *******)0x30;
      pppppppuVar10 = (ulong *******)0x30;
      __Znwm();
      ppppppuVar14 = (ulong ******)*ppppppuVar12;
      pppppppuVar10[1] = (ulong ******)ppppppuVar12[1];
      *pppppppuVar10 = ppppppuVar14;
      *(undefined8 *)((long)pppppppuVar10 + 0xe) = *(undefined8 *)((long)ppppppuVar12 + 0xe);
      *(undefined1 *)((long)pppppppuVar10 + 0x16) = 0x4f;
      pppppppuVar20 = pppppppuVar10;
LAB_10b2fde30:
      pppppppuVar9 = pppppppuVar20;
      pppppuVar24 = (ulong *****)0x17;
      goto LAB_10b2fdf30;
    }
LAB_10b2fdec4:
    *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0x4f;
    pppppuVar13 = (ulong *****)((long)pppppuVar13 + 1);
    if (*(char *)((long)ppppppuVar12 + 0x17) < '\0') {
      ppppppuVar12[1] = pppppuVar13;
    }
    else {
      *(byte *)((long)ppppppuVar12 + 0x17) = (byte)pppppuVar13 & 0x7f;
    }
    *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0;
  }
  if ((int)((double)iVar11 - dVar25) < 1) {
    return pppppppuVar9;
  }
  uVar21 = (int)((double)iVar11 - dVar25) + 1;
  do {
    pppppuVar13 = (ulong *****)(long)*(char *)((long)ppppppuVar12 + 0x17);
    if ((long)pppppuVar13 < 0) {
      pppppuVar13 = ppppppuVar12[1];
      pppppuVar24 = (ulong *****)((ulong)ppppppuVar12[2] & 0x7fffffffffffffff);
      pppppuVar16 = (ulong *****)((long)pppppuVar24 + -1);
      if (pppppuVar16 != pppppuVar13) {
        ppppppuVar14 = (ulong ******)*ppppppuVar12;
        goto LAB_10b2fe024;
      }
      if (pppppuVar16 == (ulong *****)0x7ffffffffffffff6) {
LAB_10b2fe0f8:
        func_0x000104bd47d4();
        return (ulong *******)0x0;
      }
      if (pppppuVar16 < (ulong *****)0x3ffffffffffffff3) {
        if (pppppuVar16 == (ulong *****)0x0) {
          pppppppuVar17 = (ulong *******)0x17;
          pppppppuVar20 = (ulong *******)*ppppppuVar12;
          pppppppuVar10 = (ulong *******)0x17;
          __Znwm();
        }
        else {
          uVar15 = (long)pppppuVar16 * 2 | 7;
          pppppppuVar9 = (ulong *******)0x19;
          if (uVar15 != 0x17) {
            pppppppuVar9 = (ulong *******)(uVar15 + 1);
          }
          pppppppuVar17 = (ulong *******)0x17;
          if ((ulong *****)0xb < pppppuVar16) {
            pppppppuVar17 = pppppppuVar9;
          }
          pppppppuVar20 = (ulong *******)*ppppppuVar12;
          pppppppuVar10 = pppppppuVar17;
          __Znwm();
          if (pppppuVar16 != (ulong *****)0x0) goto LAB_10b2fe068;
        }
LAB_10b2fe014:
        *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar16) = 0x20;
        pppppuVar24 = (ulong *****)0x1;
      }
      else {
        pppppppuVar17 = (ulong *******)0x7ffffffffffffff7;
        pppppppuVar20 = (ulong *******)*ppppppuVar12;
        pppppppuVar10 = pppppppuVar17;
        __Znwm();
        if (pppppuVar16 == (ulong *****)0x0) goto LAB_10b2fe014;
LAB_10b2fe068:
        pppppppuVar9 = pppppppuVar10;
        _memmove(pppppppuVar10,pppppppuVar20,pppppuVar16);
        *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar16) = 0x20;
        if (pppppuVar16 == (ulong *****)0x16) {
          pppppuVar24 = (ulong *****)0x17;
          goto LAB_10b2fe094;
        }
      }
      pppppppuVar9 = pppppppuVar20;
      __ZdlPv(pppppppuVar9);
LAB_10b2fe094:
      ppppppuVar12[1] = pppppuVar24;
      ppppppuVar12[2] = (ulong *****)((ulong)pppppppuVar17 | 0x8000000000000000);
      *ppppppuVar12 = (ulong *****)pppppppuVar10;
      *(undefined1 *)((long)pppppppuVar10 + (long)pppppuVar24) = 0;
    }
    else {
      ppppppuVar14 = ppppppuVar12;
      if (*(char *)((long)ppppppuVar12 + 0x17) == '\x16') {
        pppppppuVar9 = (ulong *******)0x30;
        __Znwm();
        ppppppuVar14 = (ulong ******)*ppppppuVar12;
        pppppppuVar9[1] = (ulong ******)ppppppuVar12[1];
        *pppppppuVar9 = ppppppuVar14;
        *(undefined8 *)((long)pppppppuVar9 + 0xe) = *(undefined8 *)((long)ppppppuVar12 + 0xe);
        *(undefined1 *)((long)pppppppuVar9 + 0x16) = 0x20;
        pppppuVar24 = (ulong *****)0x17;
        pppppppuVar17 = (ulong *******)0x30;
        pppppppuVar10 = pppppppuVar9;
        goto LAB_10b2fe094;
      }
LAB_10b2fe024:
      *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0x20;
      pppppuVar13 = (ulong *****)((long)pppppuVar13 + 1);
      if (*(char *)((long)ppppppuVar12 + 0x17) < '\0') {
        ppppppuVar12[1] = pppppuVar13;
        *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0;
      }
      else {
        *(byte *)((long)ppppppuVar12 + 0x17) = (byte)pppppuVar13 & 0x7f;
        *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0;
      }
    }
    uVar21 = uVar21 - 1;
    if (uVar21 < 2) {
      return pppppppuVar9;
    }
  } while( true );
LAB_10b2fdcdc:
  ppppppuVar12[1] = pppppuVar13;
  *(undefined1 *)((long)ppppppuVar14 + (long)pppppuVar13) = 0;
joined_r0x00010b2fdcec:
  dVar26 = dVar26 + -1.0;
  goto joined_r0x00010b2fdc94;
}



/* Entry: 10b2fdc4c; end: 10b2fe0fb;  */

long * FUN_10b2fdc4c(double param_1,long *param_2,int param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  
  dVar9 = param_1;
joined_r0x00010b2fdc94:
  if (0.0 < dVar9) {
    do {
      uVar2 = (ulong)*(char *)((long)param_4 + 0x17);
      if ((long)uVar2 < 0) {
        uVar2 = param_4[1];
        uVar3 = param_4[2] & 0x7fffffffffffffff;
        uVar7 = uVar3 - 1;
        if (uVar7 != uVar2) {
          plVar4 = (long *)*param_4;
          goto LAB_10b2fdcb0;
        }
        if (uVar7 == 0x7ffffffffffffff6) goto LAB_10b2fe0f8;
        if (uVar7 < 0x3ffffffffffffff3) {
          uVar2 = uVar7 * 2 | 7;
          plVar4 = (long *)0x19;
          if (uVar2 != 0x17) {
            plVar4 = (long *)(uVar2 + 1);
          }
          plVar1 = (long *)0x17;
          if (0xb < uVar7) {
            plVar1 = plVar4;
          }
          plVar4 = (long *)0x17;
          if (uVar7 != 0) {
            plVar4 = plVar1;
          }
          plVar5 = (long *)*param_4;
          plVar1 = plVar4;
          __Znwm();
          if (uVar7 != 0) goto LAB_10b2fdd8c;
LAB_10b2fddc8:
          *(undefined1 *)((long)plVar1 + uVar7) = 0x2d;
          uVar3 = 1;
        }
        else {
          plVar4 = (long *)0x7ffffffffffffff7;
          plVar5 = (long *)*param_4;
          plVar1 = plVar4;
          __Znwm();
          if (uVar7 == 0) goto LAB_10b2fddc8;
LAB_10b2fdd8c:
          param_2 = plVar1;
          _memmove(plVar1,plVar5,uVar7);
          *(undefined1 *)((long)plVar1 + uVar7) = 0x2d;
          if (uVar7 == 0x16) {
            uVar3 = 0x17;
            goto LAB_10b2fddd8;
          }
        }
        param_2 = plVar5;
        __ZdlPv(param_2);
LAB_10b2fddd8:
        param_4[1] = uVar3;
        param_4[2] = (ulong)plVar4 | 0x8000000000000000;
        *param_4 = (long)plVar1;
        *(undefined1 *)((long)plVar1 + uVar3) = 0;
      }
      else {
        plVar4 = param_4;
        if (*(char *)((long)param_4 + 0x17) == '\x16') {
          param_2 = (long *)0x30;
          __Znwm();
          lVar8 = *param_4;
          param_2[1] = param_4[1];
          *param_2 = lVar8;
          *(undefined8 *)((long)param_2 + 0xe) = *(undefined8 *)((long)param_4 + 0xe);
          *(undefined1 *)((long)param_2 + 0x16) = 0x2d;
          uVar3 = 0x17;
          plVar4 = (long *)0x30;
          plVar1 = param_2;
          goto LAB_10b2fddd8;
        }
LAB_10b2fdcb0:
        *(undefined1 *)((long)plVar4 + uVar2) = 0x2d;
        lVar8 = uVar2 + 1;
        if (-1 < *(char *)((long)param_4 + 0x17)) goto code_r0x00010b2fdcc0;
        param_4[1] = lVar8;
        *(undefined1 *)((long)plVar4 + lVar8) = 0;
      }
      dVar9 = dVar9 + -1.0;
      if (dVar9 <= 0.0) break;
    } while( true );
  }
  uVar2 = (ulong)*(char *)((long)param_4 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = param_4[1];
    uVar7 = param_4[2] & 0x7fffffffffffffff;
    uVar3 = uVar7 - 1;
    if (uVar3 != uVar2) {
      plVar4 = (long *)*param_4;
      goto LAB_10b2fdec4;
    }
    if (uVar3 == 0x7ffffffffffffff6) goto LAB_10b2fe0f8;
    param_2 = (long *)*param_4;
    if (uVar3 < 0x3ffffffffffffff3) {
      uVar2 = uVar3 * 2 | 7;
      plVar4 = (long *)0x19;
      if (uVar2 != 0x17) {
        plVar4 = (long *)(uVar2 + 1);
      }
      plVar1 = (long *)0x17;
      if (0xb < uVar3) {
        plVar1 = plVar4;
      }
      plVar4 = (long *)0x17;
      if (uVar3 != 0) {
        plVar4 = plVar1;
      }
      plVar1 = plVar4;
      __Znwm();
      if (uVar3 != 0) goto LAB_10b2fde9c;
LAB_10b2fdf1c:
      *(undefined1 *)((long)plVar1 + uVar3) = 0x4f;
      uVar7 = 1;
    }
    else {
      plVar4 = (long *)0x7ffffffffffffff7;
      plVar1 = plVar4;
      __Znwm();
      if (uVar3 == 0) goto LAB_10b2fdf1c;
LAB_10b2fde9c:
      plVar5 = plVar1;
      _memmove(plVar1,param_2,uVar3);
      *(undefined1 *)((long)plVar1 + uVar3) = 0x4f;
      if (uVar3 == 0x16) goto LAB_10b2fde30;
    }
    __ZdlPv(param_2);
LAB_10b2fdf30:
    param_4[1] = uVar7;
    param_4[2] = (ulong)plVar4 | 0x8000000000000000;
    *param_4 = (long)plVar1;
    *(undefined1 *)((long)plVar1 + uVar7) = 0;
  }
  else {
    plVar4 = param_4;
    if (*(char *)((long)param_4 + 0x17) == '\x16') {
      plVar4 = (long *)0x30;
      plVar1 = (long *)0x30;
      __Znwm();
      lVar8 = *param_4;
      plVar1[1] = param_4[1];
      *plVar1 = lVar8;
      *(undefined8 *)((long)plVar1 + 0xe) = *(undefined8 *)((long)param_4 + 0xe);
      *(undefined1 *)((long)plVar1 + 0x16) = 0x4f;
      plVar5 = plVar1;
LAB_10b2fde30:
      param_2 = plVar5;
      uVar7 = 0x17;
      goto LAB_10b2fdf30;
    }
LAB_10b2fdec4:
    *(undefined1 *)((long)plVar4 + uVar2) = 0x4f;
    lVar8 = uVar2 + 1;
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_4[1] = lVar8;
    }
    else {
      *(byte *)((long)param_4 + 0x17) = (byte)lVar8 & 0x7f;
    }
    *(undefined1 *)((long)plVar4 + lVar8) = 0;
  }
  if ((int)((double)param_3 - param_1) < 1) {
    return param_2;
  }
  uVar6 = (int)((double)param_3 - param_1) + 1;
  do {
    uVar2 = (ulong)*(char *)((long)param_4 + 0x17);
    if ((long)uVar2 < 0) {
      uVar2 = param_4[1];
      uVar7 = param_4[2] & 0x7fffffffffffffff;
      uVar3 = uVar7 - 1;
      if (uVar3 != uVar2) {
        plVar4 = (long *)*param_4;
        goto LAB_10b2fe024;
      }
      if (uVar3 == 0x7ffffffffffffff6) {
LAB_10b2fe0f8:
        func_0x000104bd47d4();
        return (long *)0x0;
      }
      if (uVar3 < 0x3ffffffffffffff3) {
        if (uVar3 == 0) {
          plVar4 = (long *)0x17;
          plVar5 = (long *)*param_4;
          plVar1 = (long *)0x17;
          __Znwm();
        }
        else {
          uVar2 = uVar3 * 2 | 7;
          plVar1 = (long *)0x19;
          if (uVar2 != 0x17) {
            plVar1 = (long *)(uVar2 + 1);
          }
          plVar4 = (long *)0x17;
          if (0xb < uVar3) {
            plVar4 = plVar1;
          }
          plVar5 = (long *)*param_4;
          plVar1 = plVar4;
          __Znwm();
          if (uVar3 != 0) goto LAB_10b2fe068;
        }
LAB_10b2fe014:
        *(undefined1 *)((long)plVar1 + uVar3) = 0x20;
        uVar7 = 1;
      }
      else {
        plVar4 = (long *)0x7ffffffffffffff7;
        plVar5 = (long *)*param_4;
        plVar1 = plVar4;
        __Znwm();
        if (uVar3 == 0) goto LAB_10b2fe014;
LAB_10b2fe068:
        param_2 = plVar1;
        _memmove(plVar1,plVar5,uVar3);
        *(undefined1 *)((long)plVar1 + uVar3) = 0x20;
        if (uVar3 == 0x16) {
          uVar7 = 0x17;
          goto LAB_10b2fe094;
        }
      }
      param_2 = plVar5;
      __ZdlPv(param_2);
LAB_10b2fe094:
      param_4[1] = uVar7;
      param_4[2] = (ulong)plVar4 | 0x8000000000000000;
      *param_4 = (long)plVar1;
      *(undefined1 *)((long)plVar1 + uVar7) = 0;
    }
    else {
      plVar4 = param_4;
      if (*(char *)((long)param_4 + 0x17) == '\x16') {
        param_2 = (long *)0x30;
        __Znwm();
        lVar8 = *param_4;
        param_2[1] = param_4[1];
        *param_2 = lVar8;
        *(undefined8 *)((long)param_2 + 0xe) = *(undefined8 *)((long)param_4 + 0xe);
        *(undefined1 *)((long)param_2 + 0x16) = 0x20;
        uVar7 = 0x17;
        plVar4 = (long *)0x30;
        plVar1 = param_2;
        goto LAB_10b2fe094;
      }
LAB_10b2fe024:
      *(undefined1 *)((long)plVar4 + uVar2) = 0x20;
      lVar8 = uVar2 + 1;
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        param_4[1] = lVar8;
        *(undefined1 *)((long)plVar4 + lVar8) = 0;
      }
      else {
        *(byte *)((long)param_4 + 0x17) = (byte)lVar8 & 0x7f;
        *(undefined1 *)((long)plVar4 + lVar8) = 0;
      }
    }
    uVar6 = uVar6 - 1;
    if (uVar6 < 2) {
      return param_2;
    }
  } while( true );
code_r0x00010b2fdcc0:
  *(byte *)((long)param_4 + 0x17) = (byte)lVar8 & 0x7f;
  *(undefined1 *)((long)plVar4 + lVar8) = 0;
  dVar9 = dVar9 + -1.0;
  goto joined_r0x00010b2fdc94;
}



/* Entry: 10b2fe0fc; end: 10b2fe233;  */

undefined8 FUN_10b2fe0fc(void)

{
  return 0;
}



/* Entry: 10b2fe234; end: 10b2fe5cf;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_10b2fe234(long *param_1,uint *param_2,uint *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar3 = (uint *)param_1[1];
  if (param_1[2] - (long)puVar3 >> 2 < (long)param_5) {
    lVar22 = *param_1;
    uVar18 = param_5 + ((long)puVar3 - lVar22 >> 2);
    if (uVar18 >> 0x3e != 0) {
      FUN_10b2fa208();
LAB_10b2fe5cc:
      func_0x00010b2ed0ac();
      puVar3 = (uint *)((long)param_1 + 0xc);
      uVar1 = *puVar3;
      puVar17 = (uint *)(param_1 + 1);
      uVar20 = *puVar17;
      while( true ) {
        lVar22 = *param_1;
        if (uVar20 == 0x30) {
          puVar11 = (uint *)(*(long *)(lVar22 + 8) + 0x30);
        }
        else {
          if (uVar20 < 0x40) {
            return (uint *)0x0;
          }
          if ((uVar20 & 7) != 0) {
            return (uint *)0x0;
          }
          if (*(uint *)(lVar22 + 0x14) < uVar20 + 0x10) {
            return (uint *)0x0;
          }
          puVar11 = (uint *)(*(long *)(lVar22 + 8) + (ulong)uVar20);
          if (puVar11[1] != 0xc8799269) {
            return (uint *)0x0;
          }
          if (*puVar11 < 0x10) {
            return (uint *)0x0;
          }
          if (*(uint *)(lVar22 + 0x14) < *puVar11 + uVar20) {
            return (uint *)0x0;
          }
        }
        uVar2 = puVar11[3];
        if (uVar2 == 0x30) {
          return (uint *)0x0;
        }
        lVar22 = *param_1;
        if ((((uVar2 < 0x40 || (uVar2 & 7) != 0) || (*(uint *)(lVar22 + 0x14) < uVar2 + 0x10)) ||
            (puVar11 = (uint *)(*(long *)(lVar22 + 8) + (long)(ulong)uVar2),
            puVar11[1] != 0xc8799269)) ||
           ((*puVar11 < 0x10 || (*(uint *)(lVar22 + 0x14) < *puVar11 + uVar2)))) break;
        while (*puVar17 == uVar20) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar17,0x10);
          if (bVar6) {
            *puVar17 = uVar2;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            *param_2 = puVar11[2];
            lVar22 = *param_1;
            uVar4 = *(uint *)(*(long *)(lVar22 + 8) + 0x28);
            uVar20 = *(uint *)(lVar22 + 0x14);
            if (uVar4 <= *(uint *)(lVar22 + 0x14)) {
              uVar20 = uVar4;
            }
            if (uVar1 <= uVar20 / 0x18) {
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar6) {
                  *puVar3 = *puVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              return (uint *)(ulong)uVar2;
            }
            goto LAB_10b2fe730;
          }
        }
        ClearExclusiveLocal();
        uVar20 = *puVar17;
      }
LAB_10b2fe730:
      FUN_10b2fe75c(lVar22);
      return (uint *)0x0;
    }
    uVar9 = param_1[2] - lVar22;
    uVar12 = (long)uVar9 >> 1;
    if (uVar12 <= uVar18) {
      uVar12 = uVar18;
    }
    if (0x7ffffffffffffffb < uVar9) {
      uVar12 = 0x3fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar7 = 0;
      puVar17 = (uint *)((long)param_2 - lVar22);
      puVar3 = puVar17;
    }
    else {
      if (uVar12 >> 0x3e != 0) goto LAB_10b2fe5cc;
      lVar7 = uVar12 << 2;
      __Znwm();
      puVar17 = (uint *)((long)param_2 - lVar22);
      puVar3 = (uint *)(lVar7 + (long)puVar17);
    }
    puVar11 = puVar3 + param_5;
    puVar10 = puVar3;
    if ((6 < (param_5 - 1 & 0x3fffffffffffffff)) &&
       (0x1f < (ulong)((long)param_2 + ((lVar7 - (long)param_3) - lVar22)))) {
      uVar18 = (param_5 - 1 & 0x3fffffffffffffff) + 1;
      uVar15 = uVar18 & 0x7ffffffffffffff8;
      puVar10 = param_3 + 4;
      puVar19 = (undefined8 *)((long)puVar17 + lVar7 + 0x10);
      uVar9 = uVar15;
      do {
        uVar23 = *(undefined8 *)(puVar10 + -4);
        uVar25 = *(undefined8 *)(puVar10 + 2);
        uVar24 = *(undefined8 *)puVar10;
        puVar19[-1] = *(undefined8 *)(puVar10 + -2);
        puVar19[-2] = uVar23;
        puVar19[1] = uVar25;
        *puVar19 = uVar24;
        puVar10 = puVar10 + 8;
        puVar19 = puVar19 + 4;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
      puVar10 = puVar3 + uVar15;
      param_3 = param_3 + uVar15;
      if (uVar18 == uVar15) goto LAB_10b2fe4b0;
    }
    do {
      puVar17 = puVar10 + 1;
      *puVar10 = *param_3;
      puVar10 = puVar17;
      param_3 = param_3 + 1;
    } while (puVar17 != puVar11);
LAB_10b2fe4b0:
    _memcpy(puVar11,param_2,param_1[1] - (long)param_2);
    lVar22 = param_1[1];
    param_1[1] = (long)param_2;
    lVar21 = (long)puVar3 - ((long)param_2 - *param_1);
    _memcpy(lVar21);
    lVar8 = *param_1;
    *param_1 = lVar21;
    param_1[1] = (long)puVar11 + (lVar22 - (long)param_2);
    param_1[2] = lVar7 + uVar12 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    return puVar3;
  }
  lVar22 = (long)puVar3 - (long)param_2;
  if ((long)param_5 <= lVar22 >> 2) {
    lVar22 = param_5 * 4;
    puVar17 = puVar3 + -param_5;
    puVar11 = puVar3;
    if (puVar17 < puVar3) {
      if (puVar3 <= puVar17 + 1) {
        puVar11 = puVar17 + 1;
      }
      uVar18 = (long)puVar11 + lVar22 + ~(ulong)puVar3;
      puVar10 = puVar3;
      if (0x1b < uVar18 && 7 < param_5) {
        uVar18 = (uVar18 >> 2) + 1;
        uVar9 = uVar18 & 0x7ffffffffffffff8;
        puVar11 = puVar3 + 4;
        puVar10 = puVar11 + -param_5;
        uVar12 = uVar9;
        do {
          uVar23 = *(undefined8 *)(puVar10 + -4);
          uVar25 = *(undefined8 *)(puVar10 + 2);
          uVar24 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar11 + -2) = *(undefined8 *)(puVar10 + -2);
          *(undefined8 *)(puVar11 + -4) = uVar23;
          *(undefined8 *)(puVar11 + 2) = uVar25;
          *(undefined8 *)puVar11 = uVar24;
          puVar11 = puVar11 + 8;
          puVar10 = puVar10 + 8;
          uVar12 = uVar12 - 8;
        } while (uVar12 != 0);
        puVar17 = puVar17 + uVar9;
        puVar10 = puVar3 + uVar9;
        puVar11 = puVar3 + uVar9;
        if (uVar18 == uVar9) goto LAB_10b2fe508;
      }
      do {
        puVar14 = puVar17 + 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar17;
        puVar17 = puVar14;
        puVar10 = puVar11;
      } while (puVar14 < puVar3);
    }
LAB_10b2fe508:
    param_1[1] = (long)puVar11;
    if (puVar3 != param_2 + param_5) {
      _memmove(param_2 + param_5,param_2);
    }
    goto LAB_10b2fe598;
  }
  lVar7 = param_4 - (lVar22 + (long)param_3);
  if (lVar7 != 0) {
    _memmove(puVar3,lVar22 + (long)param_3,lVar7);
  }
  puVar17 = (uint *)((long)puVar3 + lVar7);
  param_1[1] = (long)puVar17;
  if (lVar22 >> 2 < 1) {
    return param_2;
  }
  puVar11 = puVar17 + -param_5;
  puVar10 = puVar17;
  if (puVar11 < puVar3) {
    puVar10 = (uint *)((long)param_2 + (param_4 - (long)(param_3 + param_5)) + 4);
    puVar14 = puVar3;
    if (puVar3 <= puVar10) {
      puVar14 = puVar10;
    }
    uVar18 = (long)puVar14 + (long)(param_3 + param_5) + (~param_4 - (long)param_2);
    puVar14 = puVar17;
    if ((0x1b < uVar18) && (7 < param_5)) {
      uVar18 = (uVar18 >> 2) + 1;
      uVar9 = uVar18 & 0x7ffffffffffffff8;
      puVar19 = (undefined8 *)((long)param_2 + (param_4 - (long)param_3) + 0x10);
      puVar16 = (undefined8 *)((long)puVar19 + param_5 * -4);
      uVar12 = uVar9;
      do {
        uVar23 = puVar16[-2];
        uVar25 = puVar16[1];
        uVar24 = *puVar16;
        puVar19[-1] = puVar16[-1];
        puVar19[-2] = uVar23;
        puVar19[1] = uVar25;
        *puVar19 = uVar24;
        puVar19 = puVar19 + 4;
        puVar16 = puVar16 + 4;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      puVar11 = puVar11 + uVar9;
      puVar10 = puVar17 + uVar9;
      puVar14 = puVar17 + uVar9;
      if (uVar18 == uVar9) goto LAB_10b2fe574;
    }
    do {
      puVar13 = puVar11 + 1;
      puVar10 = puVar14 + 1;
      *puVar14 = *puVar11;
      puVar11 = puVar13;
      puVar14 = puVar10;
    } while (puVar13 < puVar3);
  }
LAB_10b2fe574:
  param_1[1] = (long)puVar10;
  if (puVar17 != param_2 + param_5) {
    _memmove(param_2 + param_5,param_2);
  }
  if (puVar3 == param_2) {
    return param_2;
  }
LAB_10b2fe598:
  _memmove(param_2,param_3,lVar22);
  return param_2;
}



/* Entry: 10b2fe5d0; end: 10b2fe75b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10b2fe5d0(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  puVar1 = (uint *)((long)param_1 + 0xc);
  uVar3 = *puVar1;
  puVar2 = (uint *)(param_1 + 1);
  uVar10 = *puVar2;
  while( true ) {
    lVar9 = *param_1;
    if (uVar10 == 0x30) {
      puVar8 = (uint *)(*(long *)(lVar9 + 8) + 0x30);
    }
    else {
      if (uVar10 < 0x40) {
        return 0;
      }
      if ((uVar10 & 7) != 0) {
        return 0;
      }
      if (*(uint *)(lVar9 + 0x14) < uVar10 + 0x10) {
        return 0;
      }
      puVar8 = (uint *)(*(long *)(lVar9 + 8) + (ulong)uVar10);
      if (puVar8[1] != 0xc8799269) {
        return 0;
      }
      if (*puVar8 < 0x10) {
        return 0;
      }
      if (*(uint *)(lVar9 + 0x14) < *puVar8 + uVar10) {
        return 0;
      }
    }
    uVar4 = puVar8[3];
    if (uVar4 == 0x30) {
      return 0;
    }
    lVar9 = *param_1;
    if ((((uVar4 < 0x40 || (uVar4 & 7) != 0) || (*(uint *)(lVar9 + 0x14) < uVar4 + 0x10)) ||
        (puVar8 = (uint *)(*(long *)(lVar9 + 8) + (ulong)uVar4), puVar8[1] != 0xc8799269)) ||
       ((*puVar8 < 0x10 || (*(uint *)(lVar9 + 0x14) < *puVar8 + uVar4)))) break;
    while (*puVar2 == uVar10) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        *param_2 = puVar8[2];
        lVar9 = *param_1;
        uVar5 = *(uint *)(*(long *)(lVar9 + 8) + 0x28);
        uVar10 = *(uint *)(lVar9 + 0x14);
        if (uVar5 <= *(uint *)(lVar9 + 0x14)) {
          uVar10 = uVar5;
        }
        if (uVar3 <= uVar10 / 0x18) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar7) {
              *puVar1 = *puVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          return (ulong)uVar4;
        }
        goto LAB_10b2fe730;
      }
    }
    ClearExclusiveLocal();
    uVar10 = *puVar2;
  }
LAB_10b2fe730:
  FUN_10b2fe75c(lVar9);
  return 0;
}



/* Entry: 10b2fe75c; end: 10b2fe95f;  */

/* WARNING: Removing unreachable block (ram,0x00010b2fe8f8) */
/* WARNING: Removing unreachable block (ram,0x00010b2fea50) */

long * FUN_10b2fe75c(long *param_1,undefined *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined **ppuStack_168;
  undefined4 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
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
  undefined4 uStack_f0;
  undefined **appuStack_e8 [6];
  undefined8 uStack_b8;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1;
  if (((*(byte *)((long)param_1 + 0x29) & 1) == 0) && ((*(uint *)(param_1[1] + 0x24) & 1) == 0)) {
    ppuStack_168 = &PTR_FUN_110cd4a10;
    uStack_160 = 2;
    uStack_b8 = 0;
    ppuStack_158 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
    appuStack_e8[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
    __ZNSt3__18ios_base4initEPv(appuStack_e8,&ppuStack_150);
    uStack_58 = 0xffffffff;
    uStack_60 = 0;
    appuStack_e8[0] = &PTR_DAT_11088d708;
    ppuStack_150 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    ppuStack_158 = &PTR_SUB_11088d6e0;
    __ZNSt3__16localeC1Ev(auStack_148);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    ppuStack_150 = &PTR_DAT_11088d7b0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0x10;
    pppuVar9 = &ppuStack_150;
    func_0x000107c2ca8c();
    puStack_48 = &UNK_10f744589;
    uStack_40 = 0x351;
    ___error();
    uStack_3c = *(undefined4 *)pppuVar9;
    ___error();
    *(undefined4 *)pppuVar9 = 0;
    func_0x000107c2cb2c(&ppuStack_168,&UNK_10f744589,0x351);
    param_2 = &UNK_10f7445bb;
    param_3 = 0x2d;
    func_0x000107c2ca60(&ppuStack_158);
    func_0x000107c2cb34(&ppuStack_168);
    plVar10 = (long *)param_1[8];
    if (plVar10 != (long *)0x0) {
      param_2 = (undefined *)0x1;
      (**(code **)(*plVar10 + 0x30))();
    }
  }
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    puVar1 = (uint *)(param_1[1] + 0x24);
    uVar13 = *(uint *)(param_1[1] + 0x24);
    uVar12 = *puVar1;
    if (uVar12 == uVar13) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar13 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_10b2fe930;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (uVar13 = *puVar1, uVar13 != uVar12) {
        ClearExclusiveLocal();
        uVar12 = uVar13;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar12 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      uVar12 = uVar13;
    } while (cVar5 != '\0');
  }
LAB_10b2fe930:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar10;
  }
  ___stack_chk_fail();
  if ((((undefined *)0x3ffffff0 < param_2) ||
      (uVar13 = (int)param_2 + 0x17U & 0x7ffffff8, uVar13 < 0x11)) ||
     (*(uint *)(plVar10 + 3) < uVar13)) {
    return (long *)0x0;
  }
  plVar11 = (long *)(ulong)*(uint *)(plVar10[1] + 0x28);
  bVar4 = *(byte *)((long)plVar10 + 0x29);
joined_r0x00010b2fe9ac:
  if ((bVar4 & 1) == 0) {
    while (lVar14 = plVar10[1], (*(uint *)(lVar14 + 0x24) & 1) == 0) {
      uVar8 = (uint)plVar11;
      uVar12 = *(uint *)((long)plVar10 + 0x14);
      if (uVar12 < uVar8 + uVar13) {
        puVar1 = (uint *)(lVar14 + 0x24);
        uVar13 = *puVar1;
        if (uVar13 == *(uint *)(lVar14 + 0x24)) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = *(uint *)(lVar14 + 0x24) | 2;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar5 == '\0';
        }
        else {
          bVar7 = false;
          ClearExclusiveLocal();
        }
        if (bVar7) {
          return (long *)0x0;
        }
        do {
          while (uVar12 = *puVar1, uVar12 != uVar13) {
            ClearExclusiveLocal();
            uVar13 = uVar12;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar13 | 2;
            cVar5 = ExclusiveMonitorsStatus();
          }
          uVar13 = uVar12;
        } while (cVar5 != '\0');
        return (long *)0x0;
      }
      if (((uVar8 < 0x40) || (((ulong)plVar11 & 7) != 0)) ||
         ((uVar12 < uVar8 + 0x10 ||
          (puVar1 = (uint *)(lVar14 + (long)plVar11), puVar1 == (uint *)0x0)))) break;
      uVar3 = *(uint *)(plVar10 + 3);
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar8 / uVar3;
      }
      uVar3 = uVar3 + (uVar6 * uVar3 - uVar8);
      if (uVar3 < uVar13) {
        if (uVar3 < 0x11) break;
        puVar2 = (uint *)(lVar14 + 0x28);
        while (uVar12 = *puVar2, uVar12 == uVar8) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar3 + uVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            *puVar1 = uVar3;
            puVar1[1] = 0xffffffff;
            bVar4 = *(byte *)((long)plVar10 + 0x29);
            goto joined_r0x00010b2fe9ac;
          }
        }
        ClearExclusiveLocal();
      }
      else {
        if (0x17 < uVar3 - uVar13) {
          uVar3 = uVar13;
        }
        if (uVar12 < uVar3 + uVar8) break;
        puVar2 = (uint *)(lVar14 + 0x28);
        do {
          uVar12 = *puVar2;
          if (uVar12 != uVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            goto LAB_10b2feab0;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar3 + uVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
LAB_10b2feab0:
        uVar13 = uVar3;
        if (bVar7) {
          if (((*puVar1 == 0) && (puVar1[1] == 0)) && ((puVar1[2] == 0 && (puVar1[3] == 0)))) {
            for (puVar15 = (undefined1 *)((long)puVar1 + plVar10[4] + 0xf & -plVar10[4]);
                puVar15 < (undefined1 *)((long)puVar1 + (ulong)uVar3);
                puVar15 = puVar15 + plVar10[4]) {
              *puVar15 = 0;
            }
            *puVar1 = uVar3;
            puVar1[1] = 0xc8799269;
            puVar1[2] = param_3;
            return plVar11;
          }
          break;
        }
      }
      plVar11 = (long *)(ulong)uVar12;
      if ((*(byte *)((long)plVar10 + 0x29) & 1) != 0) break;
    }
  }
  FUN_10b2fe75c(plVar10);
  return (long *)0x0;
}



/* Entry: 10b2fe960; end: 10b2febb7;  */

/* WARNING: Removing unreachable block (ram,0x00010b2fea50) */

ulong FUN_10b2fe960(long param_1,ulong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined1 *puVar13;
  
  if (((0x3ffffff0 < param_2) || (uVar11 = (int)param_2 + 0x17U & 0x7ffffff8, uVar11 < 0x11)) ||
     (*(uint *)(param_1 + 0x18) < uVar11)) {
    return 0;
  }
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x28);
  bVar5 = *(byte *)(param_1 + 0x29);
joined_r0x00010b2fe9ac:
  if ((bVar5 & 1) == 0) {
    while (lVar12 = *(long *)(param_1 + 8), (*(uint *)(lVar12 + 0x24) & 1) == 0) {
      uVar9 = (uint)uVar10;
      uVar3 = *(uint *)(param_1 + 0x14);
      if (uVar3 < uVar9 + uVar11) {
        puVar1 = (uint *)(lVar12 + 0x24);
        uVar11 = *puVar1;
        if (uVar11 == *(uint *)(lVar12 + 0x24)) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *(uint *)(lVar12 + 0x24) | 2;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar8 = cVar6 == '\0';
        }
        else {
          bVar8 = false;
          ClearExclusiveLocal();
        }
        if (bVar8) {
          return 0;
        }
        do {
          while (uVar3 = *puVar1, uVar3 != uVar11) {
            ClearExclusiveLocal();
            uVar11 = uVar3;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar11 | 2;
            cVar6 = ExclusiveMonitorsStatus();
          }
          uVar11 = uVar3;
        } while (cVar6 != '\0');
        return 0;
      }
      if (((uVar9 < 0x40) || ((uVar10 & 7) != 0)) ||
         ((uVar3 < uVar9 + 0x10 || (puVar1 = (uint *)(lVar12 + uVar10), puVar1 == (uint *)0x0))))
      break;
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar9 / uVar4;
      }
      uVar4 = uVar4 + (uVar7 * uVar4 - uVar9);
      if (uVar4 < uVar11) {
        if (uVar4 < 0x11) break;
        puVar2 = (uint *)(lVar12 + 0x28);
        while (uVar3 = *puVar2, uVar3 == uVar9) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar4 + uVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            *puVar1 = uVar4;
            puVar1[1] = 0xffffffff;
            bVar5 = *(byte *)(param_1 + 0x29);
            goto joined_r0x00010b2fe9ac;
          }
        }
        ClearExclusiveLocal();
      }
      else {
        if (0x17 < uVar4 - uVar11) {
          uVar4 = uVar11;
        }
        if (uVar3 < uVar4 + uVar9) break;
        puVar2 = (uint *)(lVar12 + 0x28);
        do {
          uVar3 = *puVar2;
          if (uVar3 != uVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_10b2feab0;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar4 + uVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar8 = true;
LAB_10b2feab0:
        uVar11 = uVar4;
        if (bVar8) {
          if (((*puVar1 == 0) && (puVar1[1] == 0)) && ((puVar1[2] == 0 && (puVar1[3] == 0)))) {
            for (puVar13 = (undefined1 *)
                           ((long)puVar1 + *(long *)(param_1 + 0x20) + 0xf &
                           -*(long *)(param_1 + 0x20));
                puVar13 < (undefined1 *)((long)puVar1 + (ulong)uVar4);
                puVar13 = puVar13 + *(long *)(param_1 + 0x20)) {
              *puVar13 = 0;
            }
            *puVar1 = uVar4;
            puVar1[1] = 0xc8799269;
            puVar1[2] = param_3;
            return uVar10;
          }
          break;
        }
      }
      uVar10 = (ulong)uVar3;
      if ((*(byte *)(param_1 + 0x29) & 1) != 0) break;
    }
  }
  FUN_10b2fe75c(param_1);
  return 0;
}



/* Entry: 10b2febb8; end: 10b2fed23;  */

/* WARNING: Removing unreachable block (ram,0x00010b2fe8f8) */
/* WARNING: Removing unreachable block (ram,0x00010b2fea50) */

long * FUN_10b2febb8(long *param_1,undefined *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined **ppuStack_168;
  undefined4 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
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
  undefined4 uStack_f0;
  undefined **appuStack_e8 [6];
  undefined8 uStack_b8;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  if (((*(byte *)((long)param_1 + 0x29) & 1) == 0) && ((*(uint *)(param_1[1] + 0x24) & 1) == 0)) {
    uVar11 = (uint)param_2;
    if (((0x3f < uVar11) &&
        (((((ulong)param_2 & 7) == 0 && (uVar11 + 0x10 <= *(uint *)((long)param_1 + 0x14))) &&
         (puVar13 = (uint *)(param_1[1] + ((ulong)param_2 & 0xffffffff)), puVar13[1] == 0xc8799269))
        )) && (((0xf < *puVar13 && (*puVar13 + uVar11 <= *(uint *)((long)param_1 + 0x14))) &&
               (puVar13[3] == 0)))) {
      puVar13[3] = 0x30;
      uVar12 = *(uint *)(param_1[1] + 0x2c);
LAB_10b2fec4c:
      uVar7 = uVar12;
      if (uVar7 == 0x30) {
        puVar13 = (uint *)(param_1[1] + 0x30);
      }
      else if (((uVar7 < 0x40) || ((uVar7 & 7) != 0)) ||
              ((*(uint *)((long)param_1 + 0x14) < uVar7 + 0x10 ||
               (((puVar13 = (uint *)(param_1[1] + (ulong)uVar7), puVar13[1] != 0xc8799269 ||
                 (*puVar13 < 0x10)) || (*(uint *)((long)param_1 + 0x14) < *puVar13 + uVar7))))))
      goto code_r0x00010b2fe75c;
      puVar13 = puVar13 + 3;
      do {
        uVar2 = *puVar13;
        if (uVar2 != 0x30) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto LAB_10b2fece0;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = uVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
LAB_10b2fece0:
      puVar13 = (uint *)(param_1[1] + 0x2c);
      if (!bVar6) {
        do {
          uVar12 = *puVar13;
          if (uVar12 != uVar7) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar6) {
            *puVar13 = uVar2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10b2fec4c;
      }
      do {
        if (*puVar13 != uVar7) {
          ClearExclusiveLocal();
          return param_1;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = uVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return param_1;
  }
code_r0x00010b2fe75c:
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_1;
  if (((*(byte *)((long)param_1 + 0x29) & 1) == 0) && ((*(uint *)(param_1[1] + 0x24) & 1) == 0)) {
    ppuStack_168 = &PTR_FUN_110cd4a10;
    uStack_160 = 2;
    uStack_b8 = 0;
    ppuStack_158 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
    appuStack_e8[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
    __ZNSt3__18ios_base4initEPv(appuStack_e8,&ppuStack_150);
    uStack_58 = 0xffffffff;
    uStack_60 = 0;
    appuStack_e8[0] = &PTR_DAT_11088d708;
    ppuStack_150 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    ppuStack_158 = &PTR_SUB_11088d6e0;
    __ZNSt3__16localeC1Ev(auStack_148);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    ppuStack_150 = &PTR_DAT_11088d7b0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_f0 = 0x10;
    pppuVar8 = &ppuStack_150;
    func_0x000107c2ca8c();
    puStack_48 = &UNK_10f744589;
    uStack_40 = 0x351;
    ___error();
    uStack_3c = *(undefined4 *)pppuVar8;
    ___error();
    *(undefined4 *)pppuVar8 = 0;
    func_0x000107c2cb2c(&ppuStack_168,&UNK_10f744589,0x351);
    param_2 = &UNK_10f7445bb;
    param_3 = 0x2d;
    func_0x000107c2ca60(&ppuStack_158);
    func_0x000107c2cb34(&ppuStack_168);
    plVar9 = (long *)param_1[8];
    if (plVar9 != (long *)0x0) {
      param_2 = (undefined *)0x1;
      (**(code **)(*plVar9 + 0x30))();
    }
  }
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    puVar13 = (uint *)(param_1[1] + 0x24);
    uVar11 = *(uint *)(param_1[1] + 0x24);
    uVar12 = *puVar13;
    if (uVar12 == uVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar6) {
        *puVar13 = uVar11 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_10b2fe930;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (uVar11 = *puVar13, uVar11 != uVar12) {
        ClearExclusiveLocal();
        uVar12 = uVar11;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar6) {
        *puVar13 = uVar12 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      uVar12 = uVar11;
    } while (cVar4 != '\0');
  }
LAB_10b2fe930:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar9;
  }
  ___stack_chk_fail();
  if ((((undefined *)0x3ffffff0 < param_2) ||
      (uVar11 = (int)param_2 + 0x17U & 0x7ffffff8, uVar11 < 0x11)) ||
     (*(uint *)(plVar9 + 3) < uVar11)) {
    return (long *)0x0;
  }
  plVar10 = (long *)(ulong)*(uint *)(plVar9[1] + 0x28);
  bVar3 = *(byte *)((long)plVar9 + 0x29);
joined_r0x00010b2fe9ac:
  if ((bVar3 & 1) == 0) {
    while (lVar14 = plVar9[1], (*(uint *)(lVar14 + 0x24) & 1) == 0) {
      uVar7 = (uint)plVar10;
      uVar12 = *(uint *)((long)plVar9 + 0x14);
      if (uVar12 < uVar7 + uVar11) {
        puVar13 = (uint *)(lVar14 + 0x24);
        uVar11 = *puVar13;
        if (uVar11 == *(uint *)(lVar14 + 0x24)) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar6) {
            *puVar13 = *(uint *)(lVar14 + 0x24) | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar6 = cVar4 == '\0';
        }
        else {
          bVar6 = false;
          ClearExclusiveLocal();
        }
        if (bVar6) {
          return (long *)0x0;
        }
        do {
          while (uVar12 = *puVar13, uVar12 != uVar11) {
            ClearExclusiveLocal();
            uVar11 = uVar12;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar6) {
            *puVar13 = uVar11 | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
          uVar11 = uVar12;
        } while (cVar4 != '\0');
        return (long *)0x0;
      }
      if ((((uVar7 < 0x40) || (((ulong)plVar10 & 7) != 0)) || (uVar12 < uVar7 + 0x10)) ||
         (puVar13 = (uint *)(lVar14 + (long)plVar10), puVar13 == (uint *)0x0)) break;
      uVar2 = *(uint *)(plVar9 + 3);
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = uVar7 / uVar2;
      }
      uVar2 = uVar2 + (uVar5 * uVar2 - uVar7);
      if (uVar2 < uVar11) {
        if (uVar2 < 0x11) break;
        puVar1 = (uint *)(lVar14 + 0x28);
        while (uVar12 = *puVar1, uVar12 == uVar7) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar2 + uVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            *puVar13 = uVar2;
            puVar13[1] = 0xffffffff;
            bVar3 = *(byte *)((long)plVar9 + 0x29);
            goto joined_r0x00010b2fe9ac;
          }
        }
        ClearExclusiveLocal();
      }
      else {
        if (0x17 < uVar2 - uVar11) {
          uVar2 = uVar11;
        }
        if (uVar12 < uVar2 + uVar7) break;
        puVar1 = (uint *)(lVar14 + 0x28);
        do {
          uVar12 = *puVar1;
          if (uVar12 != uVar7) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto LAB_10b2feab0;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar2 + uVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = true;
LAB_10b2feab0:
        uVar11 = uVar2;
        if (bVar6) {
          if (((*puVar13 == 0) && (puVar13[1] == 0)) && ((puVar13[2] == 0 && (puVar13[3] == 0)))) {
            for (puVar15 = (undefined1 *)((long)puVar13 + plVar9[4] + 0xf & -plVar9[4]);
                puVar15 < (undefined1 *)((long)puVar13 + (ulong)uVar2);
                puVar15 = puVar15 + plVar9[4]) {
              *puVar15 = 0;
            }
            *puVar13 = uVar2;
            puVar13[1] = 0xc8799269;
            puVar13[2] = param_3;
            return plVar10;
          }
          break;
        }
      }
      plVar10 = (long *)(ulong)uVar12;
      if ((*(byte *)((long)plVar9 + 0x29) & 1) != 0) break;
    }
  }
  FUN_10b2fe75c(plVar9);
  return (long *)0x0;
}



/* Entry: 10b2fed24; end: 10b2ff19b;  */

undefined8 * FUN_10b2fed24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd5038;
  if (param_1[1] != 0) {
    __ZdlPv();
  }
  func_0x000109638924(param_1 + 2,param_1[3]);
  return param_1;
}



/* Entry: 10b2ff19c; end: 10b2ff24f;  */

uint FUN_10b2ff19c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x68))();
  uVar2 = 0;
  if (*(uint *)(param_1[1] + 0x14) != 0xffffffff) {
    uVar2 = *(uint *)(param_1[1] + 0x14);
  }
  if (uVar2 < 0x10000) {
    plVar1 = param_1 + 2;
    if ((*plVar1 == 0) && ((**(code **)(*param_1 + 0x70))(), (int)param_1 == 0)) {
      return 0;
    }
    return *(uint *)(*plVar1 + (long)plVar4 * 4);
  }
  uVar3 = uVar2 >> 0x10;
  if (plVar4 != (long *)(ulong)(uVar2 & 0xffff)) {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b2ff250; end: 10b2ff2fb;  */

uint FUN_10b2ff250(long *param_1)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = 0;
  if (*(uint *)(param_1[1] + 0x14) != 0xffffffff) {
    uVar2 = *(uint *)(param_1[1] + 0x14);
  }
  if (0xffff < uVar2) {
    return uVar2 >> 0x10;
  }
  if ((param_1[2] == 0) && (plVar3 = param_1, (**(code **)(*param_1 + 0x70))(), (int)plVar3 == 0)) {
    return 0;
  }
  lVar4 = ((long *)param_1[3])[1] - *(long *)param_1[3] >> 2;
  uVar2 = 0;
  piVar1 = (int *)param_1[2];
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    uVar2 = *piVar1 + uVar2;
    piVar1 = piVar1 + 1;
  }
  return uVar2;
}



/* Entry: 10b2ff2fc; end: 10b2ff80b;  */

void FUN_10b2ff2fc(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  uVar2 = 0;
  if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
    uVar2 = *(uint *)(param_2[1] + 0x14);
  }
  if (0xffff < uVar2) {
    puVar1 = (undefined4 *)(*(long *)param_2[3] + (ulong)(uVar2 & 0xffff) * 4);
    uVar3 = *puVar1;
    iVar4 = puVar1[1];
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    *puVar5 = &PTR_DAT_110cd4fb8;
    *(undefined4 *)(puVar5 + 1) = uVar3;
    puVar5[2] = (long)iVar4;
    puVar5[3] = (ulong)(uVar2 & 0xffff);
    *(uint *)(puVar5 + 4) = uVar2 >> 0x10;
    *param_1 = puVar5;
    return;
  }
  if ((param_2[2] == 0) && (plVar8 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar8 == 0)) {
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    lVar7 = param_2[3];
    *puVar5 = &PTR_FUN_110cd5210;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = lVar7;
    puVar5[4] = 0;
    *param_1 = puVar5;
    return;
  }
  piVar6 = (int *)param_2[2];
  plVar8 = (long *)param_2[3];
  lVar7 = plVar8[1] - *plVar8 >> 2;
  lVar9 = lVar7 + -1;
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  *puVar5 = &PTR_FUN_110cd5210;
  puVar5[1] = piVar6;
  puVar5[2] = lVar9;
  puVar5[3] = plVar8;
  puVar5[4] = 0;
  if (lVar9 != 0) {
    lVar9 = 1;
    do {
      if (*piVar6 != 0) break;
      puVar5[4] = lVar9;
      lVar9 = lVar9 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar7 != lVar9);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10b2ff80c; end: 10b2ff90f;  */

undefined8 * FUN_10b2ff80c(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *param_1 = &PTR_DAT_110cd50f0;
  param_1[1] = puVar2;
  param_1[2] = 0;
  param_1[3] = param_2;
  if (param_2[1] - *param_2 != 4) {
    *param_1 = &PTR_DAT_110cd5180;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b2ff878);
  (*pcVar1)();
}



/* Entry: 10b2ff910; end: 10b2ff923;  */

bool FUN_10b2ff910(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 10b2ff924; end: 10b2ff9df;  */

void FUN_10b2ff924(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  (**(code **)(*param_2 + 0x20))();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x00010b307fd0(param_1,&UNK_10f744542);
  if ((int)param_2 != 0) {
    func_0x00010b307fd0(param_1,&UNK_10f7445e9);
  }
  if (param_5 != 0) {
    func_0x00010b307fd0(param_1,&UNK_10f744566);
  }
  return;
}



/* Entry: 10b2ff9e0; end: 10b30039f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b2ff9e0(ulong *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  ulong uStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  
  (**(code **)(*param_2 + 0x20))();
  if (((long *)param_2[3])[1] - *(long *)param_2[3] == 4) {
    iVar18 = 0;
    dVar26 = 0.0;
  }
  else {
    uVar16 = 1;
    uVar19 = 0;
    uVar15 = 0;
    do {
      uVar14 = uVar16;
      uVar10 = 0;
      if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
        uVar10 = *(uint *)(param_2[1] + 0x14);
      }
      if (uVar10 < 0x10000) {
        if ((param_2[2] == 0) &&
           (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_2[2] + uVar19 * 4);
        }
      }
      else {
        uVar9 = uVar10 >> 0x10;
        if ((int)uVar14 - 1U != (uVar10 & 0xffff)) {
          uVar9 = 0;
        }
      }
      if ((int)uVar9 <= (int)uVar15) {
        uVar9 = uVar15;
      }
      uVar11 = ((long *)param_2[3])[1] - *(long *)param_2[3];
      uVar16 = (ulong)((int)uVar14 + 1);
      uVar19 = uVar14;
      uVar15 = uVar9;
    } while (uVar14 < ((long)uVar11 >> 2) - 1U);
    dVar26 = (double)uVar9;
    iVar18 = (int)(uVar11 >> 2) + -1;
  }
  uVar16 = (ulong)(iVar18 - 1);
  do {
    uVar15 = 0;
    if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
      uVar15 = *(uint *)(param_2[1] + 0x14);
    }
    if (uVar15 < 0x10000) {
      if ((param_2[2] == 0) &&
         (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)(param_2[2] + uVar16 * 4);
      }
    }
    else {
      uVar10 = uVar15 >> 0x10;
      if ((uint)uVar16 != (uVar15 & 0xffff)) {
        uVar10 = 0;
      }
    }
  } while (((uint)uVar16 != 0) && (uVar16 = uVar16 - 1, uVar10 == 0));
  dVar25 = 72.0 / dVar26;
  if (dVar26 <= 72.0) {
    dVar25 = 1.0;
  }
  plVar12 = (long *)param_2[3];
  if (plVar12[1] - *plVar12 == 4) {
    uVar17 = 2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar13 = plVar12[1] - *plVar12;
  }
  else {
    uVar16 = 1;
    uVar19 = 1;
    uVar14 = 0;
    do {
      uVar11 = uVar16;
      uVar15 = 0;
      if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
        uVar15 = *(uint *)(param_2[1] + 0x14);
      }
      uVar17 = uVar19;
      if (uVar15 < 0x10000) {
        if (((param_2[2] != 0) ||
            (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 != 0)) &&
           (*(int *)(param_2[2] + uVar14 * 4) != 0)) {
LAB_10b2ffc50:
          func_0x000107c2cc94(&pppppppuStack_98,&UNK_10f744586);
          uVar14 = uStack_90;
          uVar16 = uStack_88 >> 0x38;
          if ((long)uStack_88 < 0) {
            __ZdlPv(pppppppuStack_98);
            uVar16 = uVar14;
          }
          uVar17 = uVar16 + 1;
          if (uVar16 + 1 <= uVar19) {
            uVar17 = uVar19;
          }
        }
      }
      else if ((int)uVar11 - 1U == (uVar15 & 0xffff)) goto LAB_10b2ffc50;
      plVar12 = (long *)param_2[3];
      uVar16 = (ulong)((int)uVar11 + 1);
      uVar19 = uVar17;
      uVar14 = uVar11;
    } while (uVar11 < (plVar12[1] - *plVar12 >> 2) - 1U);
    uVar17 = uVar17 + 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar13 = plVar12[1] - *plVar12;
  }
  if (lVar13 != 4) {
    uStack_a0 = 0;
    do {
      uVar15 = 0;
      if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
        uVar15 = *(uint *)(param_2[1] + 0x14);
      }
      uVar10 = (uint)uStack_a0;
      if (uVar15 < 0x10000) {
        if ((param_2[2] == 0) &&
           (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_2[2] + uStack_a0 * 4);
        }
      }
      else {
        uVar9 = uVar15 >> 0x10;
        if (uVar10 != (uVar15 & 0xffff)) {
          uVar9 = 0;
        }
      }
      uStack_90 = 0xaaaaaaaaaaaaaaaa;
      uStack_88 = 0xaaaaaaaaaaaaaaaa;
      pppppppuStack_98 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
      func_0x000107c2cc94(&pppppppuStack_98,&UNK_10f744586);
      uVar16 = uStack_90;
      pppppppuVar5 = pppppppuStack_98;
      if (-1 < (long)uStack_88) {
        uVar16 = uStack_88 >> 0x38;
        pppppppuVar5 = &pppppppuStack_98;
      }
      bVar4 = *(byte *)((long)param_1 + 0x17);
      uVar14 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar19 = param_1[1];
      if (-1 < (char)bVar4) {
        uVar14 = 0x16;
        uVar19 = (ulong)bVar4;
      }
      if (uVar14 - uVar19 < uVar16) {
        uVar11 = uVar19 + uVar16;
        if (~uVar14 + 0x7ffffffffffffff7 < uVar11 - uVar14) goto LAB_10b30039c;
        puVar21 = (ulong *)*param_1;
        if (-1 < (char)bVar4) {
          puVar21 = param_1;
        }
        uVar24 = 0x7ffffffffffffff7;
        if (uVar14 < 0x3ffffffffffffff3) {
          uVar7 = uVar11;
          if (uVar11 <= uVar14 * 2) {
            uVar7 = uVar14 * 2;
          }
          uVar3 = 0x19;
          if ((uVar7 | 7) != 0x17) {
            uVar3 = (uVar7 | 7) + 1;
          }
          uVar24 = 0x17;
          if (0x16 < uVar7) {
            uVar24 = uVar3;
          }
        }
        uVar7 = uVar24;
        __Znwm();
        if (uVar19 != 0) {
          _memmove(uVar7,puVar21,uVar19);
        }
        _memmove(uVar7 + uVar19,pppppppuVar5,uVar16);
        if (uVar14 != 0x16) {
          __ZdlPv(puVar21);
        }
        param_1[1] = uVar11;
        param_1[2] = uVar24 | 0x8000000000000000;
        *param_1 = uVar7;
        *(undefined1 *)(uVar7 + uVar11) = 0;
      }
      else if (uVar16 != 0) {
        puVar21 = (ulong *)*param_1;
        if (-1 < (char)bVar4) {
          puVar21 = param_1;
        }
        _memmove((long)puVar21 + uVar19,pppppppuVar5,uVar16);
        uVar19 = uVar19 + uVar16;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar19;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar19 & 0x7f;
        }
        *(undefined1 *)((long)puVar21 + uVar19) = 0;
      }
      uVar16 = uStack_90;
      if (-1 < (long)uStack_88) {
        uVar16 = uStack_88 >> 0x38;
      }
      if (uVar16 < uVar17) {
        lVar13 = 0;
        do {
          bVar4 = *(byte *)((long)param_1 + 0x17);
          if ((char)bVar4 < '\0') {
            uVar16 = param_1[1];
            uVar19 = (param_1[2] & 0x7fffffffffffffff) - 1;
            if (uVar16 == uVar19) {
              if ((param_1[2] & 0x7fffffffffffffff) != 0x7ffffffffffffff7) {
                puVar21 = (ulong *)*param_1;
                if (uVar19 < 0x3ffffffffffffff3) {
                  if (uVar19 == 0) {
                    puVar22 = (ulong *)0x17;
                  }
                  else {
                    uVar16 = uVar19 * 2 | 7;
                    puVar23 = (ulong *)0x19;
                    if (uVar16 != 0x17) {
                      puVar23 = (ulong *)(uVar16 + 1);
                    }
                    puVar22 = (ulong *)0x17;
                    if (0xb < uVar19) {
                      puVar22 = puVar23;
                    }
                  }
                  goto LAB_10b2fffa0;
                }
                bVar6 = false;
                puVar22 = (ulong *)0x7ffffffffffffff7;
                puVar23 = puVar22;
                __Znwm();
                uVar16 = uVar19;
                goto joined_r0x00010b300068;
              }
              goto LAB_10b30039c;
            }
            puVar23 = (ulong *)*param_1;
LAB_10b300044:
            param_1[1] = uVar16 + 1;
          }
          else {
            if (bVar4 == 0x16) {
              uVar19 = 0x16;
              puVar21 = param_1;
              puVar22 = (ulong *)0x30;
LAB_10b2fffa0:
              bVar6 = uVar19 == 0x16;
              puVar23 = puVar22;
              __Znwm();
              uVar16 = uVar19;
joined_r0x00010b300068:
              if (uVar16 != 0) {
                _memmove(puVar23,puVar21,uVar16);
              }
              if (!bVar6) {
                __ZdlPv(puVar21);
              }
              *param_1 = (ulong)puVar23;
              param_1[2] = (ulong)puVar22 | 0x8000000000000000;
              goto LAB_10b300044;
            }
            uVar16 = (ulong)bVar4;
            *(byte *)((long)param_1 + 0x17) = bVar4 + 1 & 0x7f;
            puVar23 = param_1;
          }
          *(undefined2 *)((long)puVar23 + uVar16) = 0x20;
          lVar13 = lVar13 + 1;
          uVar16 = uStack_90;
          if (-1 < (long)uStack_88) {
            uVar16 = uStack_88 >> 0x38;
          }
        } while (uVar16 + lVar13 < uVar17);
      }
      if ((uVar9 == 0) && (uStack_a0 < (((long *)param_2[3])[1] - *(long *)param_2[3] >> 2) - 2U)) {
        uVar15 = 0;
        if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
          uVar15 = *(uint *)(param_2[1] + 0x14);
        }
        if (uVar15 < 0x10000) {
          if (((param_2[2] != 0) ||
              (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 != 0)) &&
             (*(int *)(param_2[2] + (ulong)(uVar10 + 1) * 4) != 0)) goto LAB_10b3000f8;
        }
        else if (uVar10 + 1 == (uVar15 & 0xffff)) goto LAB_10b3000f8;
        if (uStack_a0 < (((long *)param_2[3])[1] - *(long *)param_2[3] >> 2) - 2U) {
          do {
            iVar18 = (int)uStack_a0;
            uVar15 = iVar18 + 1;
            uStack_a0 = (ulong)uVar15;
            uVar10 = 0;
            if (*(uint *)(param_2[1] + 0x14) != 0xffffffff) {
              uVar10 = *(uint *)(param_2[1] + 0x14);
            }
            if (uVar10 < 0x10000) {
              if (((param_2[2] != 0) ||
                  (plVar12 = param_2, (**(code **)(*param_2 + 0x70))(), (int)plVar12 != 0)) &&
                 (*(int *)(param_2[2] + uStack_a0 * 4) != 0)) {
LAB_10b300374:
                puVar20 = &UNK_10f7445f7;
                uStack_a0._0_4_ = iVar18;
                goto LAB_10b300184;
              }
            }
            else if (uVar15 == (uVar10 & 0xffff)) goto LAB_10b300374;
          } while (uStack_a0 < (((long *)param_2[3])[1] - *(long *)param_2[3] >> 2) - 2U);
        }
        puVar20 = &UNK_10f7445f7;
      }
      else {
LAB_10b3000f8:
        FUN_10b2fdc4c((double)(int)(dVar25 * (double)(int)uVar9),param_2,0x48,param_1);
        func_0x00010b307fd0(param_1,&UNK_10f744576);
        if (uVar10 == 0) {
          uStack_a0 = 0;
        }
        else {
          func_0x00010b307fd0(param_1,&UNK_10f7445fd);
        }
        puVar20 = &DAT_10f68f57e;
      }
LAB_10b300184:
      puVar8 = puVar20;
      _strlen();
      bVar4 = *(byte *)((long)param_1 + 0x17);
      uVar16 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar19 = param_1[1];
      if (-1 < (char)bVar4) {
        uVar16 = 0x16;
        uVar19 = (ulong)bVar4;
      }
      if ((undefined *)(uVar16 - uVar19) < puVar8) {
        puVar1 = puVar8 + uVar19;
        if (~uVar16 + 0x7ffffffffffffff7 < (long)puVar1 - uVar16) {
LAB_10b30039c:
          func_0x000104bd47d4();
          return;
        }
        puVar21 = (ulong *)*param_1;
        if (-1 < (char)bVar4) {
          puVar21 = param_1;
        }
        uVar14 = 0x7ffffffffffffff7;
        if (uVar16 < 0x3ffffffffffffff3) {
          puVar2 = puVar1;
          if (puVar1 <= (undefined *)(uVar16 * 2)) {
            puVar2 = (undefined *)(uVar16 * 2);
          }
          uVar11 = 0x19;
          if (((ulong)puVar2 | 7) != 0x17) {
            uVar11 = ((ulong)puVar2 | 7) + 1;
          }
          uVar14 = 0x17;
          if ((undefined *)0x16 < puVar2) {
            uVar14 = uVar11;
          }
        }
        uVar11 = uVar14;
        __Znwm();
        if (uVar19 != 0) {
          _memmove(uVar11,puVar21,uVar19);
        }
        _memcpy(uVar11 + uVar19,puVar20,puVar8);
        if (uVar16 != 0x16) {
          __ZdlPv(puVar21);
        }
        param_1[1] = (ulong)puVar1;
        param_1[2] = uVar14 | 0x8000000000000000;
        *param_1 = uVar11;
        puVar1[uVar11] = 0;
      }
      else if (puVar8 != (undefined *)0x0) {
        puVar21 = (ulong *)*param_1;
        if (-1 < (char)bVar4) {
          puVar21 = param_1;
        }
        _memcpy((long)puVar21 + uVar19,puVar20,puVar8);
        puVar8 = puVar8 + uVar19;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = (ulong)puVar8;
          *(undefined1 *)((long)puVar21 + (long)puVar8) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)puVar8 & 0x7f;
          *(undefined1 *)((long)puVar21 + (long)puVar8) = 0;
        }
      }
      if ((long)uStack_88 < 0) {
        __ZdlPv(pppppppuStack_98);
      }
      uStack_a0 = (ulong)((int)uStack_a0 + 1);
    } while (uStack_a0 < (((long *)param_2[3])[1] - *(long *)param_2[3] >> 2) - 1U);
  }
  return;
}



/* Entry: 10b3003a0; end: 10b3003bb;  */

void FUN_10b3003a0(void)

{
  return;
}



/* Entry: 10b3003bc; end: 10b300427;  */

void FUN_10b3003bc(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar1 = (uint)param_1;
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = param_1[4];
    lVar2 = param_1[2] - uVar3;
    if (uVar3 <= (ulong)param_1[2] && lVar2 != 0) {
      piVar4 = (int *)(param_1[1] + uVar3 * 4);
      do {
        uVar3 = uVar3 + 1;
        if (*piVar4 != 0) {
          return;
        }
        param_1[4] = uVar3;
        lVar2 = lVar2 + -1;
        piVar4 = piVar4 + 1;
      } while (lVar2 != 0);
    }
  }
  return;
}



/* Entry: 10b300428; end: 10b30047f;  */

void FUN_10b300428(long param_1,undefined4 *param_2,long *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(**(long **)(param_1 + 0x18) + *(long *)(param_1 + 0x20) * 4);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = (long)*(int *)(**(long **)(param_1 + 0x18) + *(long *)(param_1 + 0x20) * 4 + 4);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x20) * 4);
  }
  return;
}



/* Entry: 10b300480; end: 10b300c97;  */

undefined8 * FUN_10b300480(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110cd5250;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  _pthread_mutex_destroy(param_1 + 3);
  return param_1;
}



/* Entry: 10b300c98; end: 10b300ca3;  */

void FUN_10b300c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b300ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10b300ca4; end: 10b3010ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b300ca4(undefined8 *******param_1,undefined8 *******param_2,code *param_3,
                  undefined8 param_4,undefined8 *******param_5,undefined8 *******param_6,
                  int *param_7)

{
  undefined8 *******pppppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *****pppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  int *piStack_118;
  int iStack_94;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  pppppppuVar10 = pppppppuRam000000011383aae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_94 = (int)param_3;
  pppppppuStack_90 = param_2;
  pppppppuStack_88 = param_1;
  if (pppppppuRam000000011383aae8 < (undefined8 *******)0x2) {
LAB_10b300dd8:
    if (pppppppuRam000000011383aae8 == (undefined8 *******)0x0) goto code_r0x00010b300de0;
    ClearExclusiveLocal();
    if (pppppppuRam000000011383aae8 == (undefined8 *******)0x1) {
      (*(code *)PTR_DAT_11336f918)();
      pppppppuVar10 = param_1;
      do {
        (*(code *)PTR_DAT_11336f918)();
        if ((long)pppppppuVar10 - (long)param_1 < 1000) {
          _sched_yield();
        }
        else {
          pppppppuStack_80 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_78 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_68 = (undefined8 *******)0xf4240;
          pppppppuStack_70 = (undefined8 *******)0x0;
          pppppppuVar10 = &pppppppuStack_70;
          param_2 = &pppppppuStack_80;
          _nanosleep();
          iVar7 = (int)pppppppuVar10;
          while ((iVar7 == -1 && (___error(), *(int *)pppppppuVar10 == 4))) {
            pppppppuStack_68 = pppppppuStack_78;
            pppppppuStack_70 = pppppppuStack_80;
            pppppppuVar10 = &pppppppuStack_70;
            param_2 = &pppppppuStack_80;
            _nanosleep();
            iVar7 = (int)pppppppuVar10;
          }
        }
      } while (pppppppuRam000000011383aae8 == (undefined8 *******)0x1);
    }
    pppppppuVar10 = pppppppuRam000000011383aae8;
    pppppppuVar11 = pppppppuRam000000011383aae8;
    _pthread_mutex_trylock();
    iVar7 = (int)pppppppuVar11;
    goto joined_r0x00010b300e28;
  }
  pppppppuVar11 = pppppppuRam000000011383aae8;
  _pthread_mutex_trylock();
  iVar7 = (int)pppppppuVar11;
joined_r0x00010b300e28:
  if (iVar7 != 0) {
    pppppppuVar11 = pppppppuVar10;
    func_0x00010b329e58();
  }
  if (pppppppuRam000000011383aae8 < (undefined8 *******)0x2) {
    do {
      if (pppppppuRam000000011383aae8 != (undefined8 *******)0x0) {
        ClearExclusiveLocal();
        if (pppppppuRam000000011383aae8 == (undefined8 *******)0x1) {
          (*(code *)PTR_DAT_11336f918)();
          pppppppuVar12 = pppppppuVar11;
          do {
            (*(code *)PTR_DAT_11336f918)();
            if ((long)pppppppuVar12 - (long)pppppppuVar11 < 1000) {
              _sched_yield();
            }
            else {
              pppppppuStack_80 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_78 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
              pppppppuStack_68 = (undefined8 *******)0xf4240;
              pppppppuStack_70 = (undefined8 *******)0x0;
              pppppppuVar12 = &pppppppuStack_70;
              param_2 = &pppppppuStack_80;
              _nanosleep();
              iVar7 = (int)pppppppuVar12;
              while ((iVar7 == -1 && (___error(), *(int *)pppppppuVar12 == 4))) {
                pppppppuStack_68 = pppppppuStack_78;
                pppppppuStack_70 = pppppppuStack_80;
                pppppppuVar12 = &pppppppuStack_70;
                param_2 = &pppppppuStack_80;
                _nanosleep();
                iVar7 = (int)pppppppuVar12;
              }
            }
          } while (pppppppuRam000000011383aae8 == (undefined8 *******)0x1);
        }
        goto joined_r0x00010b301078;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        pppppppuRam000000011383aae8 = (undefined8 *******)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppppppuStack_70 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
    pppppppuStack_68 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
    _pthread_mutexattr_init(&pppppppuStack_70);
    _pthread_mutexattr_setprotocol(&pppppppuStack_70,1);
    param_2 = &pppppppuStack_70;
    _pthread_mutex_init(0x11383aaf0);
    _pthread_mutexattr_destroy(&pppppppuStack_70);
    pppppppuRam000000011383aae8 = (undefined8 *******)0x11383aaf0;
    if (lRam000000011383ab30 == 0) goto LAB_10b30107c;
LAB_10b300d0c:
    pppppppuVar12 = pppppppuStack_88;
    lVar9 = lRam000000011383ab30;
    pppppppuVar11 = pppppppuStack_88;
    _strlen();
  }
  else {
joined_r0x00010b301078:
    if (lRam000000011383ab30 != 0) goto LAB_10b300d0c;
LAB_10b30107c:
    __Znwm(0xa0);
    func_0x000107c2cbe4();
    pppppppuVar12 = pppppppuStack_88;
    lVar9 = lRam000000011383ab30;
    pppppppuVar11 = pppppppuStack_88;
    _strlen();
  }
  if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar11) {
    FUN_10b2ecf74();
    goto LAB_10b3010a8;
  }
  if (pppppppuVar11 < (undefined8 *******)0x17) {
    uStack_60 = CONCAT17((char)pppppppuVar11,(undefined7)uStack_60);
    pppppppuVar8 = &pppppppuStack_70;
    if (pppppppuVar11 != (undefined8 *******)0x0) goto LAB_10b300e58;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppppppuStack_70._0_1_ = 0;
    lVar9 = lVar9 + 0x28;
    param_2 = &pppppppuStack_70;
    FUN_10b3014e8();
  }
  else {
    pppppppuVar1 = (undefined8 *******)0x19;
    if (((ulong)pppppppuVar11 | 7) != 0x17) {
      pppppppuVar1 = (undefined8 *******)(((ulong)pppppppuVar11 | 7) + 1);
    }
    pppppppuVar8 = pppppppuVar1;
    __Znwm();
    uStack_60 = (ulong)pppppppuVar1 | 0x8000000000000000;
    pppppppuStack_70 = pppppppuVar8;
    pppppppuStack_68 = pppppppuVar11;
LAB_10b300e58:
    param_3 = (code *)pppppppuVar11;
    _memmove(pppppppuVar8,pppppppuVar12);
    *(code *)((long)pppppppuVar8 + (long)pppppppuVar11) = (code)0x0;
    lVar9 = lVar9 + 0x28;
    param_2 = &pppppppuStack_70;
    FUN_10b3014e8();
  }
  if ((long)uStack_60 < 0) {
    __ZdlPv(pppppppuStack_70);
  }
  if (lVar9 != 0) {
    uVar17 = *(undefined8 *)(lVar9 + 0x28);
    func_0x000107c2cb24(&pppppppuStack_70,&UNK_10f744608,&UNK_10f744625,0x13f);
    param_3 = FUN_10b300c98;
    param_2 = &pppppppuStack_70;
    param_5 = &pppppppuStack_88;
    param_6 = &pppppppuStack_90;
    param_7 = &iStack_94;
    param_4 = 0;
    FUN_10b3010ac(uVar17);
  }
  _pthread_mutex_unlock();
  pppppppuVar11 = pppppppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10b3010a8:
  ___stack_chk_fail();
  piVar13 = (int *)0x50;
  __Znwm();
  *piVar13 = 1;
  piVar13[2] = 0xb3019ec;
  piVar13[3] = 1;
  piVar13[4] = 0xb301a08;
  piVar13[5] = 1;
  *(undefined **)(piVar13 + 6) = &UNK_100142430;
  *(code **)(piVar13 + 8) = FUN_10b3019c8;
  *(code **)(piVar13 + 10) = param_3;
  *(undefined8 *)(piVar13 + 0xc) = param_4;
  ppppppuVar16 = *param_6;
  *(undefined8 *******)(piVar13 + 0xe) = *param_5;
  *(undefined8 *******)(piVar13 + 0x10) = ppppppuVar16;
  piVar13[0x12] = *param_7;
  iVar7 = (int)pppppppuVar11 + 0x10;
  _pthread_mutex_trylock();
  if (iVar7 == 0) {
    ppppppuVar16 = pppppppuVar11[0xd];
  }
  else {
    func_0x00010b329e58(pppppppuVar11 + 2);
    ppppppuVar16 = pppppppuVar11[0xd];
  }
  if (ppppppuVar16 != (undefined8 ******)0x0) {
    pppppppuVar10 = pppppppuVar11 + 1;
    if (piVar13 == (int *)0x0) {
      if (pppppppuVar11 == (undefined8 *******)0x0) {
        do {
          pppppuVar2 = ppppppuVar16[3];
          pppppuVar3 = ppppppuVar16[4];
          piVar14 = (int *)0x78;
          __Znwm();
          *piVar14 = 1;
          *(code **)(piVar14 + 2) = FUN_10b30191c;
          *(code **)(piVar14 + 4) = FUN_10b301940;
          *(undefined **)(piVar14 + 6) = &UNK_100142430;
          *(code **)(piVar14 + 8) = FUN_10b301698;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
          piVar14[0xc] = 0;
          piVar14[0xd] = 0;
          pppppuVar15 = ppppppuVar16[2];
          ppppppuVar20 = param_2[1];
          ppppppuVar19 = *param_2;
          ppppppuVar18 = param_2[2];
          *(undefined8 *******)(piVar14 + 0x18) = param_2[3];
          *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar18;
          *(undefined8 ******)(piVar14 + 0xe) = pppppuVar15;
          piVar14[0x10] = 0;
          piVar14[0x11] = 0;
          *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar20;
          *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar19;
          piVar14[0x1a] = 0;
          piVar14[0x1b] = 0;
          *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
          piStack_118 = piVar14;
          (*(code *)**pppppuVar2)(pppppuVar2,param_2,&piStack_118,0);
          if (piStack_118 != (int *)0x0) {
            do {
              iVar7 = *piStack_118;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
              if (bVar5) {
                *piStack_118 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              (**(code **)(piStack_118 + 4))();
            }
          }
          ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
        } while (ppppppuVar16 != (undefined8 ******)0x0);
      }
      else {
        do {
          pppppuVar2 = ppppppuVar16[3];
          pppppuVar3 = ppppppuVar16[4];
          ppppppuVar19 = param_2[1];
          ppppppuVar18 = *param_2;
          ppppppuVar21 = param_2[3];
          ppppppuVar20 = param_2[2];
          piVar14 = (int *)0x78;
          __Znwm();
          *piVar14 = 1;
          *(code **)(piVar14 + 2) = FUN_10b30191c;
          *(code **)(piVar14 + 4) = FUN_10b301940;
          *(undefined **)(piVar14 + 6) = &UNK_100142430;
          *(code **)(piVar14 + 8) = FUN_10b301698;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
          *(undefined8 ********)(piVar14 + 0xc) = pppppppuVar11;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
            if (bVar5) {
              *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(undefined8 ******)(piVar14 + 0xe) = ppppppuVar16[2];
          *(undefined8 ********)(piVar14 + 0x10) = pppppppuVar11;
          *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar19;
          *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar18;
          *(undefined8 *******)(piVar14 + 0x18) = ppppppuVar21;
          *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar20;
          piVar14[0x1a] = 0;
          piVar14[0x1b] = 0;
          *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
          piStack_118 = piVar14;
          (*(code *)**pppppuVar2)(pppppuVar2,param_2,&piStack_118,0);
          if (piStack_118 != (int *)0x0) {
            do {
              iVar7 = *piStack_118;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
              if (bVar5) {
                *piStack_118 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              (**(code **)(piStack_118 + 4))();
            }
          }
          ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
        } while (ppppppuVar16 != (undefined8 ******)0x0);
      }
    }
    else if (pppppppuVar11 == (undefined8 *******)0x0) {
      do {
        pppppuVar2 = ppppppuVar16[3];
        pppppuVar3 = ppppppuVar16[4];
        do {
          iVar7 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 < 1) goto LAB_10b3014dc;
        piVar14 = (int *)0x78;
        __Znwm();
        *piVar14 = 1;
        *(code **)(piVar14 + 2) = FUN_10b30191c;
        *(code **)(piVar14 + 4) = FUN_10b301940;
        *(undefined **)(piVar14 + 6) = &UNK_100142430;
        *(code **)(piVar14 + 8) = FUN_10b301698;
        piVar14[10] = 0;
        piVar14[0xb] = 0;
        piVar14[0xc] = 0;
        piVar14[0xd] = 0;
        pppppuVar15 = ppppppuVar16[2];
        ppppppuVar20 = param_2[1];
        ppppppuVar19 = *param_2;
        ppppppuVar18 = param_2[2];
        *(undefined8 *******)(piVar14 + 0x18) = param_2[3];
        *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar18;
        *(undefined8 ******)(piVar14 + 0xe) = pppppuVar15;
        piVar14[0x10] = 0;
        piVar14[0x11] = 0;
        *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar20;
        *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar19;
        *(int **)(piVar14 + 0x1a) = piVar13;
        *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
        piStack_118 = piVar14;
        (*(code *)**pppppuVar2)(pppppuVar2,param_2,&piStack_118,0);
        if (piStack_118 != (int *)0x0) {
          do {
            iVar7 = *piStack_118;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
            if (bVar5) {
              *piStack_118 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            (**(code **)(piStack_118 + 4))();
          }
        }
        ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
      } while (ppppppuVar16 != (undefined8 ******)0x0);
    }
    else {
      do {
        pppppuVar2 = ppppppuVar16[3];
        pppppuVar3 = ppppppuVar16[4];
        ppppppuVar19 = param_2[1];
        ppppppuVar18 = *param_2;
        ppppppuVar21 = param_2[3];
        ppppppuVar20 = param_2[2];
        do {
          iVar7 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 < 1) {
LAB_10b3014dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b3014e0);
          (*pcVar6)();
        }
        piVar14 = (int *)0x78;
        __Znwm();
        *piVar14 = 1;
        *(code **)(piVar14 + 2) = FUN_10b30191c;
        *(code **)(piVar14 + 4) = FUN_10b301940;
        *(undefined **)(piVar14 + 6) = &UNK_100142430;
        *(code **)(piVar14 + 8) = FUN_10b301698;
        piVar14[10] = 0;
        piVar14[0xb] = 0;
        *(undefined8 ********)(piVar14 + 0xc) = pppppppuVar11;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar5) {
            *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined8 ******)(piVar14 + 0xe) = ppppppuVar16[2];
        *(undefined8 ********)(piVar14 + 0x10) = pppppppuVar11;
        *(undefined8 *******)(piVar14 + 0x14) = ppppppuVar19;
        *(undefined8 *******)(piVar14 + 0x12) = ppppppuVar18;
        *(undefined8 *******)(piVar14 + 0x18) = ppppppuVar21;
        *(undefined8 *******)(piVar14 + 0x16) = ppppppuVar20;
        *(int **)(piVar14 + 0x1a) = piVar13;
        *(undefined8 ******)(piVar14 + 0x1c) = pppppuVar3;
        piStack_118 = piVar14;
        (*(code *)**pppppuVar2)(pppppuVar2,param_2,&piStack_118,0);
        if (piStack_118 != (int *)0x0) {
          do {
            iVar7 = *piStack_118;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
            if (bVar5) {
              *piStack_118 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            (**(code **)(piStack_118 + 4))();
          }
        }
        ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
      } while (ppppppuVar16 != (undefined8 ******)0x0);
    }
  }
  _pthread_mutex_unlock(pppppppuVar11 + 2);
  if (piVar13 != (int *)0x0) {
    do {
      iVar7 = *piVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      (**(code **)(piVar13 + 4))(piVar13);
    }
  }
  return;
code_r0x00010b300de0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar5) {
    pppppppuRam000000011383aae8 = (undefined8 *******)0x1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x00010b300de8;
  goto LAB_10b300dd8;
code_r0x00010b300de8:
  pppppppuStack_70 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_68 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  _pthread_mutexattr_init(&pppppppuStack_70);
  _pthread_mutexattr_setprotocol(&pppppppuStack_70,1);
  pppppppuVar10 = (undefined8 *******)0x11383aaf0;
  param_2 = &pppppppuStack_70;
  _pthread_mutex_init(0x11383aaf0);
  _pthread_mutexattr_destroy(&pppppppuStack_70);
  pppppppuRam000000011383aae8 = (undefined8 *******)0x11383aaf0;
  pppppppuVar11 = pppppppuVar10;
  _pthread_mutex_trylock();
  iVar7 = (int)pppppppuVar11;
  goto joined_r0x00010b300e28;
}



/* Entry: 10b3010ac; end: 10b3014e7;  */

void FUN_10b3010ac(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,int *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piStack_68;
  
  piVar7 = (int *)0x50;
  __Znwm();
  *piVar7 = 1;
  piVar7[2] = 0xb3019ec;
  piVar7[3] = 1;
  piVar7[4] = 0xb301a08;
  piVar7[5] = 1;
  *(undefined **)(piVar7 + 6) = &UNK_100142430;
  *(code **)(piVar7 + 8) = FUN_10b3019c8;
  *(undefined8 *)(piVar7 + 10) = param_3;
  *(undefined8 *)(piVar7 + 0xc) = param_4;
  uVar11 = *param_6;
  *(undefined8 *)(piVar7 + 0xe) = *param_5;
  *(undefined8 *)(piVar7 + 0x10) = uVar11;
  piVar7[0x12] = *param_7;
  iVar6 = (int)param_1 + 0x10;
  _pthread_mutex_trylock();
  if (iVar6 == 0) {
    plVar12 = *(long **)(param_1 + 0x68);
  }
  else {
    func_0x00010b329e58(param_1 + 0x10);
    plVar12 = *(long **)(param_1 + 0x68);
  }
  if (plVar12 != (long *)0x0) {
    piVar9 = (int *)(param_1 + 8);
    if (piVar7 == (int *)0x0) {
      if (param_1 == 0) {
        do {
          puVar1 = (undefined8 *)plVar12[3];
          lVar2 = plVar12[4];
          piVar9 = (int *)0x78;
          __Znwm();
          *piVar9 = 1;
          *(code **)(piVar9 + 2) = FUN_10b30191c;
          *(code **)(piVar9 + 4) = FUN_10b301940;
          *(undefined **)(piVar9 + 6) = &UNK_100142430;
          *(code **)(piVar9 + 8) = FUN_10b301698;
          piVar9[10] = 0;
          piVar9[0xb] = 0;
          piVar9[0xc] = 0;
          piVar9[0xd] = 0;
          lVar10 = plVar12[2];
          uVar14 = param_2[1];
          uVar13 = *param_2;
          uVar11 = param_2[2];
          *(undefined8 *)(piVar9 + 0x18) = param_2[3];
          *(undefined8 *)(piVar9 + 0x16) = uVar11;
          *(long *)(piVar9 + 0xe) = lVar10;
          piVar9[0x10] = 0;
          piVar9[0x11] = 0;
          *(undefined8 *)(piVar9 + 0x14) = uVar14;
          *(undefined8 *)(piVar9 + 0x12) = uVar13;
          piVar9[0x1a] = 0;
          piVar9[0x1b] = 0;
          *(long *)(piVar9 + 0x1c) = lVar2;
          piStack_68 = piVar9;
          (**(code **)*puVar1)(puVar1,param_2,&piStack_68,0);
          if (piStack_68 != (int *)0x0) {
            do {
              iVar6 = *piStack_68;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
              if (bVar4) {
                *piStack_68 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              (**(code **)(piStack_68 + 4))();
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar1 = (undefined8 *)plVar12[3];
          lVar2 = plVar12[4];
          uVar13 = param_2[1];
          uVar11 = *param_2;
          uVar15 = param_2[3];
          uVar14 = param_2[2];
          piVar8 = (int *)0x78;
          __Znwm();
          *piVar8 = 1;
          *(code **)(piVar8 + 2) = FUN_10b30191c;
          *(code **)(piVar8 + 4) = FUN_10b301940;
          *(undefined **)(piVar8 + 6) = &UNK_100142430;
          *(code **)(piVar8 + 8) = FUN_10b301698;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
          *(long *)(piVar8 + 0xc) = param_1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = *piVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(long *)(piVar8 + 0xe) = plVar12[2];
          *(long *)(piVar8 + 0x10) = param_1;
          *(undefined8 *)(piVar8 + 0x14) = uVar13;
          *(undefined8 *)(piVar8 + 0x12) = uVar11;
          *(undefined8 *)(piVar8 + 0x18) = uVar15;
          *(undefined8 *)(piVar8 + 0x16) = uVar14;
          piVar8[0x1a] = 0;
          piVar8[0x1b] = 0;
          *(long *)(piVar8 + 0x1c) = lVar2;
          piStack_68 = piVar8;
          (**(code **)*puVar1)(puVar1,param_2,&piStack_68,0);
          if (piStack_68 != (int *)0x0) {
            do {
              iVar6 = *piStack_68;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
              if (bVar4) {
                *piStack_68 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              (**(code **)(piStack_68 + 4))();
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    else if (param_1 == 0) {
      do {
        puVar1 = (undefined8 *)plVar12[3];
        lVar2 = plVar12[4];
        do {
          iVar6 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 < 1) goto LAB_10b3014dc;
        piVar9 = (int *)0x78;
        __Znwm();
        *piVar9 = 1;
        *(code **)(piVar9 + 2) = FUN_10b30191c;
        *(code **)(piVar9 + 4) = FUN_10b301940;
        *(undefined **)(piVar9 + 6) = &UNK_100142430;
        *(code **)(piVar9 + 8) = FUN_10b301698;
        piVar9[10] = 0;
        piVar9[0xb] = 0;
        piVar9[0xc] = 0;
        piVar9[0xd] = 0;
        lVar10 = plVar12[2];
        uVar14 = param_2[1];
        uVar13 = *param_2;
        uVar11 = param_2[2];
        *(undefined8 *)(piVar9 + 0x18) = param_2[3];
        *(undefined8 *)(piVar9 + 0x16) = uVar11;
        *(long *)(piVar9 + 0xe) = lVar10;
        piVar9[0x10] = 0;
        piVar9[0x11] = 0;
        *(undefined8 *)(piVar9 + 0x14) = uVar14;
        *(undefined8 *)(piVar9 + 0x12) = uVar13;
        *(int **)(piVar9 + 0x1a) = piVar7;
        *(long *)(piVar9 + 0x1c) = lVar2;
        piStack_68 = piVar9;
        (**(code **)*puVar1)(puVar1,param_2,&piStack_68,0);
        if (piStack_68 != (int *)0x0) {
          do {
            iVar6 = *piStack_68;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
            if (bVar4) {
              *piStack_68 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(piStack_68 + 4))();
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    else {
      do {
        puVar1 = (undefined8 *)plVar12[3];
        lVar2 = plVar12[4];
        uVar13 = param_2[1];
        uVar11 = *param_2;
        uVar15 = param_2[3];
        uVar14 = param_2[2];
        do {
          iVar6 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 < 1) {
LAB_10b3014dc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x10b3014e0);
          (*pcVar5)();
        }
        piVar8 = (int *)0x78;
        __Znwm();
        *piVar8 = 1;
        *(code **)(piVar8 + 2) = FUN_10b30191c;
        *(code **)(piVar8 + 4) = FUN_10b301940;
        *(undefined **)(piVar8 + 6) = &UNK_100142430;
        *(code **)(piVar8 + 8) = FUN_10b301698;
        piVar8[10] = 0;
        piVar8[0xb] = 0;
        *(long *)(piVar8 + 0xc) = param_1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(long *)(piVar8 + 0xe) = plVar12[2];
        *(long *)(piVar8 + 0x10) = param_1;
        *(undefined8 *)(piVar8 + 0x14) = uVar13;
        *(undefined8 *)(piVar8 + 0x12) = uVar11;
        *(undefined8 *)(piVar8 + 0x18) = uVar15;
        *(undefined8 *)(piVar8 + 0x16) = uVar14;
        *(int **)(piVar8 + 0x1a) = piVar7;
        *(long *)(piVar8 + 0x1c) = lVar2;
        piStack_68 = piVar8;
        (**(code **)*puVar1)(puVar1,param_2,&piStack_68,0);
        if (piStack_68 != (int *)0x0) {
          do {
            iVar6 = *piStack_68;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
            if (bVar4) {
              *piStack_68 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(piStack_68 + 4))();
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  _pthread_mutex_unlock(param_1 + 0x10);
  if (piVar7 != (int *)0x0) {
    do {
      iVar6 = *piVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      (**(code **)(piVar7 + 4))(piVar7);
    }
  }
  return;
}



/* Entry: 10b3014e8; end: 10b301697;  */

long * FUN_10b3014e8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uStack_51;
  
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  puVar5 = &uStack_51;
  func_0x000107c2cb44(puVar5,puVar1,uVar3);
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 != (undefined1 *)0x0) {
    puVar10 = puVar9 + -1;
    if (((ulong)puVar9 & (ulong)puVar10) == 0) {
      puVar8 = (undefined1 *)((ulong)puVar10 & (ulong)puVar5);
      plVar7 = *(long **)(*param_1 + (long)puVar8 * 8);
    }
    else {
      puVar8 = puVar5;
      if (puVar9 <= puVar5) {
        uVar3 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar5 / (ulong)puVar9;
        }
        puVar8 = puVar5 + -(uVar3 * (long)puVar9);
      }
      plVar7 = *(long **)(*param_1 + (long)puVar8 * 8);
    }
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar1 = (undefined8 *)*param_2;
      uVar3 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if (((ulong)puVar9 & (ulong)puVar10) == 0) {
        do {
          if ((undefined1 *)plVar7[1] == puVar5) {
            bVar2 = *(byte *)((long)plVar7 + 0x27);
            uVar4 = plVar7[3];
            if (-1 < (char)bVar2) {
              uVar4 = (ulong)bVar2;
            }
            if (uVar4 == uVar3) {
              plVar6 = (long *)plVar7[2];
              if (-1 < (char)bVar2) {
                plVar6 = plVar7 + 2;
              }
              _memcmp(plVar6,puVar1,uVar3);
              if ((int)plVar6 == 0) {
                return plVar7;
              }
            }
          }
          else if ((undefined1 *)((ulong)plVar7[1] & (ulong)puVar10) != puVar8) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        puVar10 = (undefined1 *)plVar7[1];
        if (puVar10 == puVar5) {
          bVar2 = *(byte *)((long)plVar7 + 0x27);
          uVar4 = plVar7[3];
          if (-1 < (char)bVar2) {
            uVar4 = (ulong)bVar2;
          }
          if (uVar4 == uVar3) {
            plVar6 = (long *)plVar7[2];
            if (-1 < (char)bVar2) {
              plVar6 = plVar7 + 2;
            }
            _memcmp(plVar6,puVar1,uVar3);
            if ((int)plVar6 == 0) {
              return plVar7;
            }
          }
        }
        else {
          if (puVar9 <= puVar10) {
            uVar4 = 0;
            if (puVar9 != (undefined1 *)0x0) {
              uVar4 = (ulong)puVar10 / (ulong)puVar9;
            }
            puVar10 = puVar10 + -(uVar4 * (long)puVar9);
          }
          if (puVar10 != puVar8) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10b301698; end: 10b30191b;  */

void FUN_10b301698(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  iVar3 = (int)param_1 + 0x10;
  _pthread_mutex_trylock();
  if (iVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x60);
  }
  else {
    func_0x00010b329e58(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x60);
  }
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = uVar4 - 1;
    if ((uVar4 & uVar8) == 0) {
      uVar6 = uVar8 & uVar5;
      plVar7 = *(long **)(*(long *)(param_1 + 0x58) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x58) + uVar6 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar4 & uVar8) == 0) {
        do {
          if (plVar7[1] == uVar5) {
            if (plVar7[2] == param_2) goto LAB_10b3017c4;
          }
          else if ((plVar7[1] & uVar8) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar5) {
            if (plVar7[2] == param_2) goto LAB_10b3017c4;
          }
          else {
            if (uVar4 <= uVar8) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar1 * uVar4;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_10b3018ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x10);
  return;
LAB_10b3017c4:
  if (plVar7[4] != *(long *)(param_3 + 0x30)) goto LAB_10b3018ec;
  _pthread_mutex_unlock(param_1 + 0x10);
  if (piRam000000011383ab48 < (int *)0x2) {
    iVar3 = 0x1383ab48;
    func_0x000107c2cb18();
    if (iVar3 != 0) {
      uRam000000011383ab50 = 0xffffffff;
      func_0x000107c2ce58(0x11383ab50,0);
      piRam000000011383ab48 = (int *)0x11383ab50;
    }
  }
  piVar2 = piRam000000011383ab48;
  uVar4 = uRam000000011336f908;
  _pthread_getspecific();
  if (((uVar4 & 0xfffffffffffffffc) == 0) ||
     (plVar7 = (long *)((uVar4 & 0xfffffffffffffffc) + (long)*piVar2 * 0x10),
     (int)plVar7[1] != piVar2[1])) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar7;
  }
  uVar4 = uRam000000011336f908;
  _pthread_getspecific();
  uVar4 = uVar4 & 0xfffffffffffffffc;
  if (uVar4 == 0) {
    if (param_3 == 0) goto LAB_10b30188c;
    func_0x000107c35cb8();
  }
  *(long *)(uVar4 + (long)*piVar2 * 0x10) = param_3;
  *(int *)(uVar4 + (long)*piVar2 * 0x10 + 8) = piVar2[1];
LAB_10b30188c:
  (**(code **)(*(long *)(param_3 + 0x28) + 8))(*(long *)(param_3 + 0x28),param_2);
  uVar4 = uRam000000011336f908;
  _pthread_getspecific();
  uVar4 = uVar4 & 0xfffffffffffffffc;
  if (uVar4 == 0) {
    if (lVar9 == 0) {
      return;
    }
    func_0x000107c35cb8();
  }
  *(long *)(uVar4 + (long)*piVar2 * 0x10) = lVar9;
  *(int *)(uVar4 + (long)*piVar2 * 0x10 + 8) = piVar2[1];
  return;
}



/* Entry: 10b30191c; end: 10b30193f;  */

void FUN_10b30191c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b30193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(param_1 + 0x38),param_1 + 0x40);
  return;
}



/* Entry: 10b301940; end: 10b3019c7;  */

void FUN_10b301940(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *plVar6;
  
  if (param_1 != 0) {
    piVar5 = *(int **)(param_1 + 0x68);
    if (piVar5 != (int *)0x0) {
      do {
        iVar2 = *piVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar4) {
          *piVar5 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piVar5 + 4))(piVar5);
      }
    }
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b3019c8; end: 10b301a13;  */

void FUN_10b3019c8(code *UNRECOVERED_JUMPTABLE,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  
  plVar1 = (long *)(param_6 + ((long)param_2 >> 1));
  if ((param_2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b3019e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_3,param_4,param_5);
  return;
}



/* Entry: 10b301a14; end: 10b3030bf;  */

void FUN_10b301a14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  *param_2 = 0;
  piVar4 = (int *)*param_1;
  *param_1 = uVar5;
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
      __ZdlPv(piVar4);
    }
  }
  param_1[1] = param_2[1];
  return;
}



/* Entry: 10b3030c0; end: 10b3031cb;  */

undefined8 * FUN_10b3030c0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  *param_1 = &PTR_DAT_110cd53b0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if ((bRam000000011383ac60 & 1) == 0) {
      iVar2 = 0x1383ac60;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        uRam000000011383ac58 = 0xffffffff;
        func_0x000107c2ce58(0x11383ac58,0);
        ___cxa_guard_release(0x11383ac60);
      }
    }
    uVar3 = uRam000000011336f908;
    _pthread_getspecific();
    uVar3 = uVar3 & 0xfffffffffffffffc;
    if (uVar3 != 0) {
      *(undefined8 *)(uVar3 + (long)(int)uRam000000011383ac58 * 0x10) = 0;
      *(undefined4 *)(uVar3 + (long)(int)uRam000000011383ac58 * 0x10 + 8) =
           uRam000000011383ac58._4_4_;
    }
  }
  do {
    plVar4 = (long *)param_1[8];
    do {
      if (plVar4 == param_1 + 7) {
        if (param_1[4] != 0) {
          param_1[5] = param_1[4];
          __ZdlPv();
        }
        if (param_1[1] != 0) {
          param_1[2] = param_1[1];
          __ZdlPv();
        }
        return param_1;
      }
    } while (plVar4[2] == 0);
    plVar4[2] = 0;
    plVar1 = (long *)plVar4[1];
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
  } while( true );
}



/* Entry: 10b3031cc; end: 10b30323f;  */

void FUN_10b3031cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  FUN_10b303548();
  piVar4 = (int *)*param_3;
  *param_3 = 0;
  (**(code **)(piVar4 + 2))(piVar4,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00010b30322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b303240; end: 10b303547;  */

/* WARNING: Removing unreachable block (ram,0x00010b303470) */

void FUN_10b303240(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  bVar1 = bRam0000000113370178 & 0x19;
  if ((bRam0000000113370178 & 0x19) == 0) {
    pcVar8 = (char *)0x0;
    puVar9 = (undefined *)0xaaaaaaaaaaaaaaaa;
    uVar10 = 0xaaaaaaaaaaaaaaaa;
    lVar12 = *param_1;
    lVar2 = *(long *)(lVar12 + 0x10) + -8;
    *(long *)(lVar12 + 0x10) = lVar2;
    if (*(long *)(lVar12 + 8) == lVar2) goto LAB_10b3034bc;
  }
  else {
    pcVar8 = (char *)0x113370178;
    puVar9 = &UNK_10f7446c5;
    uVar10 = 0x58;
    func_0x00010b2ef0d0(0x58,0x113370178,&UNK_10f7446c5,0,0,0x880,param_1);
    lVar12 = *param_1;
    lVar2 = *(long *)(lVar12 + 0x10) + -8;
    *(long *)(lVar12 + 0x10) = lVar2;
    if (*(long *)(lVar12 + 8) == lVar2) goto LAB_10b3034bc;
  }
  lVar2 = *param_1;
  plVar4 = (long *)(lVar2 + 0x20);
  if (*plVar4 != *(long *)(lVar2 + 0x28)) {
    plStack_80 = (long *)(lVar2 + 0x38);
    lStack_88 = *plStack_80;
    *(long **)(lStack_88 + 8) = &lStack_88;
    *plStack_80 = (long)&lStack_88;
    uStack_70 = 0;
    if (*(int *)(lVar2 + 0x50) == 0) {
      uStack_68 = 0xffffffffffffffff;
    }
    else {
      uStack_68 = *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 3;
    }
    uVar5 = *(long *)(lVar2 + 0x28) - *plVar4 >> 3;
    if (uStack_68 <= uVar5) {
      uVar5 = uStack_68;
    }
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        uVar7 = uStack_70;
        if (*(long *)(*plVar4 + uStack_70 * 8) != 0) break;
        uStack_70 = uStack_70 + 1;
        uVar7 = uVar5;
      } while (uVar5 != uStack_70);
    }
    plStack_78 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar13 = (long *)(lVar2 + 0x28);
      plVar6 = (long *)*plVar13;
      plVar4 = (long *)*plVar4;
      uVar5 = (long)plVar6 - (long)plVar4 >> 3;
      if (uStack_68 <= uVar5) {
        uVar5 = uStack_68;
      }
      if (uVar7 == uVar5) {
        if (*(long *)(lVar2 + 0x40) == *(long *)(lVar2 + 0x38)) {
LAB_10b303400:
          if (plVar4 == plVar6) {
LAB_10b303458:
            if (plVar4 != plVar6) {
              *plVar13 = (long)plVar4;
            }
          }
          else {
            do {
              if (*plVar4 == 0) {
                if ((plVar4 != plVar6) && (plVar3 = plVar4 + 1, plVar11 = plVar4, plVar3 != plVar6))
                {
                  do {
                    plVar4 = plVar11;
                    if (*plVar3 != 0) {
                      plVar4 = plVar11 + 1;
                      *plVar11 = *plVar3;
                    }
                    plVar3 = plVar3 + 1;
                    plVar11 = plVar4;
                  } while (plVar3 != plVar6);
                  plVar6 = (long *)*plVar13;
                }
                goto LAB_10b303458;
              }
              plVar4 = plVar4 + 1;
            } while (plVar4 != plVar6);
          }
        }
      }
      else {
        do {
          (**(code **)(*(long *)plVar4[uVar7] + 8))();
          if (plStack_78 == (long *)0x0) goto LAB_10b30349c;
          uStack_70 = uStack_70 + 1;
          uVar5 = plStack_78[1] - *plStack_78 >> 3;
          if (uStack_68 <= uVar5) {
            uVar5 = uStack_68;
          }
          uVar7 = uStack_70;
          if (uStack_70 < uVar5) {
            do {
              uVar7 = uStack_70;
              if (*(long *)(*plStack_78 + uStack_70 * 8) != 0) break;
              uStack_70 = uStack_70 + 1;
              uVar7 = uVar5;
            } while (uVar5 != uStack_70);
          }
          plVar4 = (long *)*plStack_78;
          plVar6 = (long *)plStack_78[1];
          uVar5 = (long)plVar6 - (long)plVar4 >> 3;
          if (uStack_68 <= uVar5) {
            uVar5 = uStack_68;
          }
        } while (uVar7 != uVar5);
        plVar13 = plStack_78 + 1;
        if (plStack_78[4] == plStack_78[3]) goto LAB_10b303400;
      }
      if (plStack_78 != (long *)0x0) {
        plStack_78 = (long *)0x0;
        *(long **)(lStack_88 + 8) = plStack_80;
        *plStack_80 = lStack_88;
      }
    }
  }
LAB_10b30349c:
  if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x10) + -8) + 0xc) & 1) != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
LAB_10b3034bc:
  if ((bVar1 != 0) && (*pcVar8 != '\0')) {
    func_0x00010b3356b0(pcVar8,puVar9,uVar10);
  }
  return;
}



/* Entry: 10b303548; end: 10b3036ff;  */

void FUN_10b303548(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  int *piStack_48;
  
  plVar6 = (long *)param_1[3];
  (**(code **)(*plVar6 + 0x40))();
  if (((ulong)plVar6 & 1) == 0) {
    puVar11 = (undefined8 *)param_1[3];
    func_0x000107c2cb24(auStack_68,&UNK_10f74467b,&UNK_10f744664,0xa7);
    piVar7 = (int *)0x38;
    __Znwm();
    *piVar7 = 1;
    piVar7[2] = 0xb303da8;
    piVar7[3] = 1;
    piVar7[4] = 0xb303dc4;
    piVar7[5] = 1;
    *(undefined **)(piVar7 + 6) = &UNK_100142430;
    *(code **)(piVar7 + 8) = FUN_10b303548;
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    *(long **)(piVar7 + 0xc) = param_1;
    piStack_48 = piVar7;
    (**(code **)*puVar11)(puVar11,auStack_68,&piStack_48,0);
    if (piStack_48 != (int *)0x0) {
      do {
        iVar1 = *piStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_48,0x10);
        if (bVar3) {
          *piStack_48 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(piStack_48 + 4))();
      }
    }
  }
  else {
    bVar4 = bRam0000000113370178 & 0x19;
    if ((bRam0000000113370178 & 0x19) == 0) {
      pcVar10 = (char *)0x0;
      puVar12 = (undefined *)0xaaaaaaaaaaaaaaaa;
      uVar13 = 0xaaaaaaaaaaaaaaaa;
      *(undefined1 *)((long)param_1 + 0xc) = 1;
      cVar2 = *(char *)((long)param_1 + 0xd);
    }
    else {
      pcVar10 = (char *)0x113370178;
      puVar12 = &UNK_10f744680;
      uVar13 = 0x58;
      func_0x00010b2ef0d0(0x58,0x113370178,&UNK_10f744680,0,0,0x980,param_1);
      *(undefined1 *)((long)param_1 + 0xc) = 1;
      cVar2 = *(char *)((long)param_1 + 0xd);
    }
    if ((cVar2 == '\x01') && (*(long **)(((long *)*param_1)[2] + -8) == param_1)) {
      (**(code **)(*(long *)*param_1 + 0x18))();
    }
    if ((bVar4 != 0) && (*pcVar10 != '\0')) {
      pcVar9 = pcVar10;
      if ((bRam000000011383cb48 & 1) == 0) {
        pcVar9 = (char *)0x11383cb48;
        ___cxa_guard_acquire();
        if ((int)pcVar9 != 0) {
          func_0x000107c2d044(0x11383c6f0,0);
          pcVar9 = (char *)0x11383cb48;
          ___cxa_guard_release();
        }
      }
      if (*pcVar10 != '\0') {
        _pthread_self();
        _pthread_mach_thread_np();
        pcVar8 = pcVar9;
        func_0x000107c2d028();
        if ((pcRam000000011383c948 + -0x7fffffffffffffff < (char *)0x2) &&
           (pcVar8 == pcRam000000011383c948)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x10b3357b0);
          (*pcVar5)();
        }
        uStack_50 = 0xffffffffffffffff;
        func_0x00010b335020(0x11383c6f0,pcVar10,puVar12,uVar13,pcVar9,0,&stack0xffffffffffffffc8,
                            &stack0xffffffffffffffc0);
      }
      return;
    }
  }
  return;
}


