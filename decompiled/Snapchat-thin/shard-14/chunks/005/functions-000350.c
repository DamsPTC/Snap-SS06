/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b303700; end: 10b303863;  */

void FUN_10b303700(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  ulong uStack_38;
  
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x40))();
  if (((ulong)plVar5 & 1) == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    func_0x000107c2cb24(auStack_48,&UNK_10f74468e,&UNK_10f744664,0xc1);
    piVar6 = (int *)0x38;
    __Znwm();
    *piVar6 = 1;
    piVar6[2] = 0xb303da8;
    piVar6[3] = 1;
    piVar6[4] = 0xb303dc4;
    piVar6[5] = 1;
    *(undefined **)(piVar6 + 6) = &UNK_100142430;
    *(code **)(piVar6 + 8) = FUN_10b303700;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    *(long *)(piVar6 + 0xc) = param_1;
    (**(code **)*puVar10)(puVar10,auStack_48,&stack0xffffffffffffffd8,0);
    if (piVar6 != (int *)0x0) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(piVar6 + 4))();
        return;
      }
    }
  }
  else if ((bRam0000000113370178 & 0x19) == 0) {
    *(undefined2 *)(param_1 + 0xe) = 0x101;
  }
  else {
    uVar7 = 0x58;
    func_0x00010b2ef0d0(0x58,0x113370178,&UNK_10f74469b,0,0,0x980,param_1);
    *(undefined2 *)(param_1 + 0xe) = 0x101;
    if (bRam0000000113370178 != 0) {
      lVar9 = 0x113370178;
      if ((bRam000000011383cb48 & 1) == 0) {
        lVar9 = 0x11383cb48;
        ___cxa_guard_acquire();
        if ((int)lVar9 != 0) {
          func_0x000107c2d044(0x11383c6f0,0);
          lVar9 = 0x11383cb48;
          ___cxa_guard_release();
        }
      }
      if (bRam0000000113370178 != 0) {
        _pthread_self();
        _pthread_mach_thread_np();
        lVar8 = lVar9;
        func_0x000107c2d028();
        if (lRam000000011383c948 + 0x8000000000000001U < 2) {
          if (lVar8 == lRam000000011383c948) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x10b3357b0);
            (*pcVar4)();
          }
          uStack_38 = lRam000000011383c948 >> 0x3f ^ 0x8000000000000000;
        }
        else {
          uStack_38 = lVar8 - lRam000000011383c948 >> 0x3f ^ 0x8000000000000000;
          if (!SBORROW8(lVar8,lRam000000011383c948)) {
            uStack_38 = lVar8 - lRam000000011383c948;
          }
        }
        uStack_40 = 0;
        func_0x00010b335020(0x11383c6f0,0x113370178,&UNK_10f74469b,uVar7,lVar9,0,&uStack_38,
                            &uStack_40,0xffffffffffffffff);
      }
      return;
    }
  }
  return;
}



/* Entry: 10b303864; end: 10b303a3f;  */

void FUN_10b303864(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam000000011383ac60 & 1) == 0) {
    iVar3 = 0x1383ac60;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam000000011383ac58 = 0xffffffff;
      func_0x000107c2ce58(0x11383ac58,0);
      ___cxa_guard_release(0x11383ac60);
    }
  }
  uVar6 = uRam000000011336f908;
  _pthread_getspecific();
  if ((uVar6 & 0xfffffffffffffffc) == 0) {
LAB_10b3038d0:
    lVar9 = 0;
    plVar4 = plRam0000000000000028;
    plVar8 = plRam0000000000000020;
    if (plRam0000000000000020 != plRam0000000000000028) {
LAB_10b3038e0:
      uVar6 = (long)plVar4 + (-8 - (long)plVar8);
      uVar5 = (uint)uVar6;
      if ((~uVar5 & 0x18) != 0) {
        uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
        do {
          if (*plVar8 == param_1) goto LAB_10b30397c;
          plVar8 = plVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar6 < 0x18) {
        return;
      }
      plVar8 = plVar8 + 2;
      while (plVar8[-2] != param_1) {
        if (plVar8[-1] == param_1) {
          plVar8 = plVar8 + -1;
          goto LAB_10b30397c;
        }
        if (*plVar8 == param_1) goto LAB_10b30397c;
        if (plVar8[1] == param_1) {
          plVar8 = plVar8 + 1;
          goto joined_r0x00010b303970;
        }
        plVar1 = plVar8 + 2;
        plVar8 = plVar8 + 4;
        if (plVar1 == plVar4) {
          return;
        }
      }
      plVar8 = plVar8 + -2;
joined_r0x00010b303970:
      if (plVar8 == plVar4) {
        return;
      }
      goto LAB_10b303984;
    }
  }
  else {
    plVar8 = (long *)((uVar6 & 0xfffffffffffffffc) + (long)(int)uRam000000011383ac58 * 0x10);
    if ((int)plVar8[1] != uRam000000011383ac58._4_4_) goto LAB_10b3038d0;
    lVar9 = *plVar8;
    plVar8 = *(long **)(lVar9 + 0x20);
    plVar4 = *(long **)(lVar9 + 0x28);
    if (plVar8 != plVar4) goto LAB_10b3038e0;
  }
LAB_10b30397c:
  if (plVar8 == plVar4) {
    return;
  }
LAB_10b303984:
  if (*plVar8 != 0) {
    *(long *)(lVar9 + 0x48) = *(long *)(lVar9 + 0x48) + -1;
  }
  if (*(long *)(lVar9 + 0x40) == lVar9 + 0x38) {
    lVar2 = (long)plVar4 - (long)(plVar8 + 1);
    if (lVar2 != 0) {
      _memmove(plVar8,plVar8 + 1,lVar2);
    }
    *(long *)(lVar9 + 0x28) = (long)plVar8 + lVar2;
    return;
  }
  *plVar8 = 0;
  return;
}



/* Entry: 10b303a40; end: 10b303a9b;  */

void FUN_10b303a40(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_18;
  
  piStack_18 = *(int **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,&piStack_18);
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



/* Entry: 10b303a9c; end: 10b303aeb;  */

void FUN_10b303a9c(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return;
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
      (**(code **)(piVar4 + 4))(piVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b303aec; end: 10b303bd7;  */

void FUN_10b303aec(long param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == (int *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
      __ZdlPv(piVar5);
    }
  }
  puVar4 = (undefined4 *)0x40;
  __Znwm();
  *puVar4 = 1;
  *(code **)(puVar4 + 2) = FUN_10b303c90;
  *(code **)(puVar4 + 4) = FUN_10b303cf0;
  *(code **)(puVar4 + 6) = FUN_10b303d3c;
  *(code **)(puVar4 + 8) = FUN_10b303bd8;
  *(undefined8 *)(puVar4 + 10) = 0;
  *(int **)(puVar4 + 0xc) = piVar5;
  *(undefined8 *)(puVar4 + 0xe) = uVar6;
  piVar5 = (int *)*param_2;
  *param_2 = puVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00010b303bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar5 + 4))();
      return;
    }
  }
  return;
}



/* Entry: 10b303bd8; end: 10b303c8f;  */

void FUN_10b303bd8(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1[1] + 4) = 1;
  piVar4 = (int *)0x8;
  __Znwm();
  *piVar4 = 0;
  *(undefined1 *)(piVar4 + 1) = 0;
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
  piVar5 = (int *)param_1[1];
  param_1[1] = piVar4;
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
      __ZdlPv();
    }
  }
  piVar4 = (int *)*param_1;
  *param_1 = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010b303c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b303c90; end: 10b303cef;  */

void FUN_10b303c90(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0' && *(long *)(param_1 + 0x38) != 0)) {
    if (*(long *)(param_1 + 0x30) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
      if (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0') {
        if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(*(long *)(*(long *)(param_1 + 0x38) +
                                   ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                         ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
        }
                    /* WARNING: Could not recover jumptable at 0x00010b303ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x10b303ce8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  return;
}



/* Entry: 10b303cf0; end: 10b303d3b;  */

void FUN_10b303cf0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return;
  }
  piVar4 = *(int **)(param_1 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b303d3c; end: 10b303dcf;  */

bool FUN_10b303d3c(long param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      return *(char *)(*(long *)(param_1 + 0x30) + 4) == '\0';
    }
  }
  else if (param_2 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      return *(long *)(param_1 + 0x38) == 0 || *(char *)(*(long *)(param_1 + 0x30) + 4) != '\0';
    }
    return true;
  }
  return false;
}



/* Entry: 10b303dd0; end: 10b304223;  */

void FUN_10b303dd0(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  char cVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0x7ffffffffffffff6 < param_3) {
    func_0x000104bd47d4();
    goto LAB_10b304214;
  }
  if (param_3 < 0x17) {
    puVar17 = (undefined8 *)0x0;
    if (param_3 != 0) {
      cVar10 = '\0';
      uVar18 = 0x16;
      uVar11 = param_3 - 0x16;
      puVar12 = param_1;
      if (0x15 < param_3 && uVar11 != 0) goto LAB_10b303e84;
      goto LAB_10b303efc;
    }
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    puVar12 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar12 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar17 = puVar12;
    __Znwm();
    *(undefined1 *)puVar17 = *(undefined1 *)param_1;
    param_1[1] = 0;
    param_1[2] = (ulong)puVar12 | 0x8000000000000000;
    *param_1 = puVar17;
    uVar18 = (long)puVar12 - 1;
    cVar10 = (char)(((ulong)puVar12 | 0x8000000000000000) >> 0x38);
    uVar11 = param_3 - uVar18;
    puVar12 = puVar17;
    if (uVar18 <= param_3 && uVar11 != 0) {
LAB_10b303e84:
      if (0x7ffffffffffffff7 - uVar18 < uVar11) goto LAB_10b304214;
      puVar16 = (undefined8 *)0x7ffffffffffffff7;
      if (uVar18 < 0x3ffffffffffffff3) {
        uVar11 = param_3;
        if (param_3 <= uVar18 * 2) {
          uVar11 = uVar18 * 2;
        }
        puVar17 = (undefined8 *)0x19;
        if ((uVar11 | 7) != 0x17) {
          puVar17 = (undefined8 *)((uVar11 | 7) + 1);
        }
        puVar16 = (undefined8 *)0x17;
        if (0x16 < uVar11) {
          puVar16 = puVar17;
        }
      }
      puVar17 = puVar16;
      __Znwm();
      if (uVar18 != 0x16) {
        __ZdlPv(puVar12);
      }
      param_1[1] = 0;
      param_1[2] = (ulong)puVar16 | 0x8000000000000000;
      *param_1 = puVar17;
      cVar10 = (char)(((ulong)puVar16 | 0x8000000000000000) >> 0x38);
    }
LAB_10b303efc:
    puVar12 = puVar17;
    if (-1 < cVar10) {
      puVar12 = param_1;
    }
    _bzero(puVar12,param_3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = param_3;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)param_3 & 0x7f;
    }
    puVar17 = (undefined8 *)0x0;
    uVar11 = 0;
    *(undefined1 *)((long)puVar12 + param_3) = 0;
    do {
      cVar10 = *(char *)(param_2 + uVar11);
      if ((uVar11 + 2 < param_3) && (cVar10 == '%')) {
        if (param_3 <= uVar11 + 1) goto LAB_10b304218;
        bVar5 = *(byte *)(param_2 + uVar11 + 1);
        bVar6 = *(byte *)(param_2 + uVar11 + 2);
        uVar14 = (uint)bVar5;
        uVar13 = uVar14 - 0x30;
        if (((uVar13 & 0xff) < 10) ||
           (uVar14 - 0x41 < 0x26 && (1L << ((ulong)(uVar14 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)) {
          uVar7 = bVar6 - 0x30;
          uVar1 = uVar7 & 0xff;
          if ((uVar1 < 10) ||
             (uVar8 = bVar6 - 0x41,
             uVar8 < 0x26 && (1L << ((ulong)uVar8 & 0x3f) & 0x3f0000003fU) != 0)) {
            uVar8 = uVar14 - 0x57;
            if (5 < (byte)(bVar5 + 0x9f)) {
              uVar8 = 0;
            }
            if ((byte)(bVar5 + 0xbf) < 6) {
              uVar8 = uVar14 - 0x37;
            }
            if (9 < (uVar13 & 0xff)) {
              uVar13 = uVar8;
            }
            cVar10 = bVar6 + 0xa9;
            if (5 < (byte)(bVar6 + 0x9f)) {
              cVar10 = '\0';
            }
            if ((byte)(bVar6 + 0xbf) < 6) {
              cVar10 = bVar6 - 0x37;
            }
            cVar2 = (char)uVar7;
            if (9 < uVar1) {
              cVar2 = cVar10;
            }
            puVar12 = (undefined8 *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              puVar12 = param_1;
            }
            *(char *)((long)puVar12 + (long)puVar17) = cVar2 + (char)(uVar13 << 4);
            uVar11 = uVar11 + 3;
            goto LAB_10b303fc8;
          }
        }
        cVar10 = '%';
LAB_10b304088:
        uVar11 = uVar11 + 1;
        puVar12 = (undefined8 *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          puVar12 = param_1;
        }
        *(char *)((long)puVar12 + (long)puVar17) = cVar10;
      }
      else {
        if (((param_4 >> 4 & 1) == 0) || (cVar10 != '+')) goto LAB_10b304088;
        puVar12 = (undefined8 *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          puVar12 = param_1;
        }
        *(undefined1 *)((long)puVar12 + (long)puVar17) = 0x20;
        uVar11 = uVar11 + 1;
      }
LAB_10b303fc8:
      puVar17 = (undefined8 *)((long)puVar17 + 1);
    } while (uVar11 < param_3);
  }
  puVar12 = (undefined8 *)(long)*(char *)((long)param_1 + 0x17);
  if ((long)puVar12 < 0) {
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 < puVar17) {
      uVar18 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar13 = (uint)((ulong)param_1[2] >> 0x3f);
      uVar11 = (long)puVar17 - (long)puVar12;
      if (uVar11 <= uVar18 - (long)puVar12) goto LAB_10b3041b0;
LAB_10b3040d8:
      if (0x7ffffffffffffff7 - uVar18 < (uVar11 - uVar18) + (long)puVar12) {
LAB_10b304214:
        func_0x000104c4f6b8();
LAB_10b304218:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(0,0x10b30421c);
        (*pcVar9)();
      }
      puVar3 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar3 = param_1;
      }
      puVar15 = (undefined8 *)0x7ffffffffffffff7;
      if (uVar18 < 0x3ffffffffffffff3) {
        puVar16 = puVar17;
        if (puVar17 <= (undefined8 *)(uVar18 * 2)) {
          puVar16 = (undefined8 *)(uVar18 * 2);
        }
        puVar4 = (undefined8 *)0x19;
        if (((ulong)puVar16 | 7) != 0x17) {
          puVar4 = (undefined8 *)(((ulong)puVar16 | 7) + 1);
        }
        puVar15 = (undefined8 *)0x17;
        if ((undefined8 *)0x16 < puVar16) {
          puVar15 = puVar4;
        }
      }
      puVar16 = puVar15;
      __Znwm();
      if (puVar12 != (undefined8 *)0x0) {
        _memmove(puVar16,puVar3,puVar12);
      }
      if (uVar18 != 0x16) {
        __ZdlPv(puVar3);
      }
      param_1[1] = puVar12;
      param_1[2] = (ulong)puVar15 | 0x8000000000000000;
      *param_1 = puVar16;
      _bzero((undefined1 *)((long)puVar16 + (long)puVar12),uVar11);
      if (-1 < *(char *)((long)param_1 + 0x17)) goto LAB_10b3041d0;
    }
    else {
      puVar16 = (undefined8 *)*param_1;
    }
LAB_10b3041ec:
    param_1[1] = puVar17;
    param_1 = puVar16;
  }
  else {
    if (puVar17 <= puVar12) {
      *(byte *)((long)param_1 + 0x17) = (byte)puVar17;
      goto LAB_10b3041f0;
    }
    uVar13 = 0;
    uVar18 = 0x16;
    uVar11 = (long)puVar17 - (long)puVar12;
    if (0x16U - (long)puVar12 < uVar11) goto LAB_10b3040d8;
LAB_10b3041b0:
    puVar16 = (undefined8 *)*param_1;
    if (uVar13 == 0) {
      puVar16 = param_1;
    }
    _bzero((undefined1 *)((long)puVar16 + (long)puVar12),uVar11);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_10b3041ec;
LAB_10b3041d0:
    *(byte *)((long)param_1 + 0x17) = (byte)puVar17 & 0x7f;
    param_1 = puVar16;
  }
LAB_10b3041f0:
  *(undefined1 *)((long)param_1 + (long)puVar17) = 0;
  return;
}



/* Entry: 10b304224; end: 10b3044c7;  */

/* WARNING: Type propagation algorithm not settling */

uint FUN_10b304224(ulong param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 ******ppppppuVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 *******pppppppuStack_60;
  long lStack_58;
  
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    *(undefined1 *)*param_4 = 0;
    param_4[1] = 0;
  }
  else {
    *(undefined1 *)param_4 = 0;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
  }
  uVar6 = 0;
  pppppppuStack_60 = (undefined8 *******)0x0;
  lStack_58 = 0;
  pppppppuVar5 = &pppppppuStack_60;
  pppppppuVar4 = pppppppuVar5;
  pppppppuVar7 = pppppppuVar5;
  pppppppuStack_68 = pppppppuVar5;
LAB_10b3042c8:
  do {
    ppppppuVar1 = (undefined8 ******)0x20;
    __Znwm();
    *(char *)((long)ppppppuVar1 + 0x19) = (char)uVar6;
    *ppppppuVar1 = (undefined8 *****)0x0;
    ppppppuVar1[1] = (undefined8 *****)0x0;
    ppppppuVar1[2] = pppppppuVar4;
    *pppppppuVar7 = ppppppuVar1;
    if ((undefined8 *******)*pppppppuStack_68 != (undefined8 *******)0x0) {
      ppppppuVar1 = *pppppppuVar7;
      pppppppuStack_68 = (undefined8 *******)*pppppppuStack_68;
    }
    func_0x000107c2ca68(pppppppuStack_60,ppppppuVar1);
    lStack_58 = lStack_58 + 1;
LAB_10b304310:
    if (0x1e < uVar6) {
      pppppppuVar4 = pppppppuVar5;
      pppppppuVar7 = pppppppuStack_60;
      if ((param_3 & 1) != 0) break;
      goto LAB_10b304450;
    }
    uVar6 = uVar6 + 1;
    pppppppuVar4 = pppppppuVar5;
    pppppppuVar3 = pppppppuStack_60;
    while (pppppppuVar7 = pppppppuVar4, pppppppuVar3 != (undefined8 *******)0x0) {
      while (pppppppuVar4 = pppppppuVar3, *(byte *)((long)pppppppuVar4 + 0x19) <= uVar6) {
        if (uVar6 <= *(byte *)((long)pppppppuVar4 + 0x19)) goto LAB_10b304310;
        pppppppuVar3 = (undefined8 *******)pppppppuVar4[1];
        if ((undefined8 *******)pppppppuVar4[1] == (undefined8 *******)0x0) {
          pppppppuVar7 = pppppppuVar4 + 1;
          goto LAB_10b3042c8;
        }
      }
      pppppppuVar3 = (undefined8 *******)*pppppppuVar4;
    }
  } while( true );
joined_r0x00010b304340:
  pppppppuVar3 = pppppppuVar4;
  if (pppppppuVar7 == (undefined8 *******)0x0) {
LAB_10b30437c:
    ppppppuVar1 = (undefined8 ******)0x20;
    __Znwm();
    *(undefined1 *)((long)ppppppuVar1 + 0x19) = 0x2f;
    *ppppppuVar1 = (undefined8 *****)0x0;
    ppppppuVar1[1] = (undefined8 *****)0x0;
    ppppppuVar1[2] = pppppppuVar4;
    *pppppppuVar3 = ppppppuVar1;
    if ((undefined8 *******)*pppppppuStack_68 != (undefined8 *******)0x0) {
      ppppppuVar1 = *pppppppuVar3;
      pppppppuStack_68 = (undefined8 *******)*pppppppuStack_68;
    }
    func_0x000107c2ca68(pppppppuStack_60,ppppppuVar1);
    lStack_58 = lStack_58 + 1;
    pppppppuVar7 = pppppppuStack_60;
joined_r0x00010b3043cc:
    do {
      pppppppuVar4 = pppppppuVar5;
      if (pppppppuVar7 == (undefined8 *******)0x0) {
LAB_10b304404:
        ppppppuVar1 = (undefined8 ******)0x20;
        __Znwm();
        *(undefined1 *)((long)ppppppuVar1 + 0x19) = 0x5c;
        *ppppppuVar1 = (undefined8 *****)0x0;
        ppppppuVar1[1] = (undefined8 *****)0x0;
        ppppppuVar1[2] = pppppppuVar5;
        *pppppppuVar4 = ppppppuVar1;
        if ((undefined8 *******)*pppppppuStack_68 != (undefined8 *******)0x0) {
          ppppppuVar1 = *pppppppuVar4;
          pppppppuStack_68 = (undefined8 *******)*pppppppuStack_68;
        }
        func_0x000107c2ca68(pppppppuStack_60,ppppppuVar1);
        lStack_58 = lStack_58 + 1;
LAB_10b304450:
        uVar2 = param_1;
        FUN_10b3044c8(param_1,param_2,&pppppppuStack_68);
        if ((uVar2 & 1) == 0) {
          FUN_10b303dd0(&uStack_80,param_1,param_2,1);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            __ZdlPv(*param_4);
          }
          param_4[1] = uStack_78;
          *param_4 = uStack_80;
          param_4[2] = uStack_70;
        }
        func_0x000107405e1c(&pppppppuStack_68,pppppppuStack_60);
        return (uint)uVar2 ^ 1;
      }
      while (pppppppuVar5 = pppppppuVar7, *(byte *)((long)pppppppuVar5 + 0x19) < 0x5d) {
        if (*(byte *)((long)pppppppuVar5 + 0x19) == 0x5c) goto LAB_10b304450;
        pppppppuVar7 = (undefined8 *******)pppppppuVar5[1];
        if ((undefined8 *******)pppppppuVar5[1] == (undefined8 *******)0x0) {
          pppppppuVar4 = pppppppuVar5 + 1;
          goto LAB_10b304404;
        }
      }
      pppppppuVar7 = (undefined8 *******)*pppppppuVar5;
    } while( true );
  }
  while (pppppppuVar4 = pppppppuVar7, *(byte *)((long)pppppppuVar4 + 0x19) < 0x30) {
    pppppppuVar7 = pppppppuStack_60;
    if (*(byte *)((long)pppppppuVar4 + 0x19) == 0x2f) goto joined_r0x00010b3043cc;
    pppppppuVar7 = (undefined8 *******)pppppppuVar4[1];
    if ((undefined8 *******)pppppppuVar4[1] == (undefined8 *******)0x0) {
      pppppppuVar3 = pppppppuVar4 + 1;
      goto LAB_10b30437c;
    }
  }
  pppppppuVar7 = (undefined8 *******)*pppppppuVar4;
  goto joined_r0x00010b304340;
}



/* Entry: 10b3044c8; end: 10b30463f;  */

undefined8 FUN_10b3044c8(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if (param_2 != 0) {
    uVar9 = 0;
    plVar8 = (long *)(param_3 + 8);
    do {
      if ((uVar9 + 2 < param_2) && (*(char *)(param_1 + uVar9) == '%')) {
        if (param_2 <= uVar9 + 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b304638);
          (*pcVar7)();
        }
        bVar2 = *(byte *)(param_1 + uVar9 + 1);
        bVar3 = *(byte *)(param_1 + uVar9 + 2);
        uVar4 = bVar2 - 0x30;
        if ((9 < (uVar4 & 0xff)) &&
           (uVar5 = bVar2 - 0x41, 0x25 < uVar5 || (1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) == 0
           )) goto LAB_10b3044e0;
        uVar5 = bVar3 - 0x30;
        uVar1 = uVar5 & 0xff;
        if (uVar1 < 10) {
LAB_10b304578:
          uVar10 = (uint)bVar2;
          uVar6 = uVar10 - 0x57;
          if (5 < (uVar10 - 0x61 & 0xff)) {
            uVar6 = 0;
          }
          if ((uVar10 - 0x41 & 0xff) < 6) {
            uVar6 = uVar10 - 0x37;
          }
          if (9 < (uVar4 & 0xff)) {
            uVar4 = uVar6;
          }
          uVar10 = (uint)bVar3;
          uVar6 = uVar10 - 0x57;
          if (5 < (uVar10 - 0x61 & 0xff)) {
            uVar6 = 0;
          }
          if ((uVar10 - 0x41 & 0xff) < 6) {
            uVar6 = uVar10 - 0x37;
          }
          if (9 < uVar1) {
            uVar5 = uVar6;
          }
          if ((long *)*plVar8 != (long *)0x0) {
            uVar5 = uVar5 + uVar4 * 0x10;
            plVar11 = plVar8;
            plVar12 = (long *)*plVar8;
            do {
              lVar13 = 8;
              if ((uVar5 & 0xff) <= (uint)*(byte *)((long)plVar12 + 0x19)) {
                lVar13 = 0;
                plVar11 = plVar12;
              }
              plVar12 = *(long **)((long)plVar12 + lVar13);
            } while (plVar12 != (long *)0x0);
            if ((plVar11 != plVar8) && ((uint)*(byte *)((long)plVar11 + 0x19) <= (uVar5 & 0xff))) {
              return 1;
            }
          }
          lVar13 = 3;
        }
        else {
          uVar6 = bVar3 - 0x41;
          if (0x25 < uVar6) goto LAB_10b3044e0;
          lVar13 = 1;
          if ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0) goto LAB_10b304578;
        }
      }
      else {
LAB_10b3044e0:
        lVar13 = 1;
      }
      uVar9 = lVar13 + uVar9;
    } while (uVar9 < param_2);
  }
  return 0;
}



/* Entry: 10b304640; end: 10b3049fb;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_10b304640(ulong *******param_1,ulong *******param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  ulong *******pppppppuVar6;
  bool bVar7;
  ulong *******pppppppuVar8;
  ulong ******ppppppuVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  bool bVar18;
  long lVar19;
  ulong ******ppppppuVar20;
  ulong *******pppppppuVar21;
  ulong uVar22;
  ulong ******ppppppuVar23;
  ulong uVar24;
  ulong *******pppppppuStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  
  cVar4 = *(char *)((long)param_1 + 0x17);
  ppppppuVar23 = (ulong ******)(long)cVar4;
  pbVar5 = param_3 + -(long)param_2;
  if ((long)ppppppuVar23 < 0) {
    if (pbVar5 == (byte *)0x0) {
      return param_1;
    }
    uVar22 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
    uVar15 = (uint)((ulong)param_1[2] >> 0x20);
    uVar11 = uVar15 >> 0x1f;
    uVar15 = uVar15 >> 0x1f;
    ppppppuVar20 = param_1[1];
    pppppppuVar21 = (ulong *******)*param_1;
  }
  else {
    if (pbVar5 == (byte *)0x0) {
      return param_1;
    }
    uVar11 = 0;
    uVar15 = 0;
    uVar22 = 0x16;
    ppppppuVar20 = ppppppuVar23;
    pppppppuVar21 = param_1;
  }
  if ((pppppppuVar21 <= param_2) &&
     (uVar15 = uVar11, param_2 < (ulong *******)((long)pppppppuVar21 + (long)ppppppuVar20 + 1U))) {
    pbStack_70 = (byte *)0xaaaaaaaaaaaaaaaa;
    uStack_68 = 0xaaaaaaaaaaaaaaaa;
    ppppppuVar20 = (ulong ******)0x7ffffffffffffff7;
    pppppppuStack_78 = (ulong *******)0xaaaaaaaaaaaaaaaa;
    if ((byte *)0x7ffffffffffffff7 < pbVar5) {
      FUN_10b2ecf74();
      pppppppuVar21 = param_1;
LAB_10b3049f4:
      func_0x000104c4f6b8();
LAB_10b3049f8:
      func_0x000104bd47d4();
      param_2 = (ulong *******)((long)pppppppuVar21 + (long)param_2);
      pbVar5 = param_3 + param_4;
      pbVar14 = param_3;
      do {
        if (pbVar14 == pbVar5) {
          iVar17 = 0;
          pbVar16 = pbVar14;
        }
        else {
          bVar18 = false;
          iVar17 = 0;
          do {
            while (*pbVar14 != 0x2a) {
              pbVar16 = pbVar14;
              if (*pbVar14 != 0x3f) goto LAB_10b304be8;
              iVar17 = iVar17 + 1;
              bVar3 = *param_3;
              if ((char)bVar3 < '\0') goto LAB_10b304a70;
LAB_10b304a3c:
              param_3 = param_3 + 1;
joined_r0x00010b304b90:
              pbVar14 = param_3;
              pbVar16 = param_3;
              if (param_3 == pbVar5) goto LAB_10b304be8;
            }
            bVar18 = true;
            bVar3 = *param_3;
            if (-1 < (char)bVar3) goto LAB_10b304a3c;
LAB_10b304a70:
            lVar19 = (long)pbVar5 - (long)param_3;
            if (lVar19 == 1) {
              param_3 = param_3 + 1;
              goto joined_r0x00010b304b90;
            }
            uVar15 = (uint)bVar3;
            if (uVar15 < 0xe0) {
              lVar10 = 1;
              if (uVar15 < 0xc2) {
LAB_10b304b04:
                param_3 = param_3 + lVar10;
              }
              else {
LAB_10b304ad4:
                uVar15 = (uint)lVar10;
                if ((char)param_3[lVar10] < -0x40) {
                  uVar15 = uVar15 + 1;
                }
                param_3 = param_3 + uVar15;
              }
              goto joined_r0x00010b304b90;
            }
            if (uVar15 < 0xf0) {
              if (((byte)(&UNK_10f47c06f)[(ulong)bVar3 & 0xf] >> (ulong)(param_3[1] >> 5) & 1) != 0)
              {
                lVar10 = 2;
                if (lVar19 == 2) goto LAB_10b304b04;
                goto LAB_10b304ad4;
              }
              param_3 = param_3 + 1;
              goto joined_r0x00010b304b90;
            }
            if (uVar15 < 0xf5) {
              if (((uint)(int)(char)(&UNK_10e5745e8)[param_3[1] >> 4] >>
                   (ulong)(uVar15 - 0xf0 & 0x1f) & 1) == 0) {
                param_3 = param_3 + 1;
              }
              else if (lVar19 == 2) {
                param_3 = param_3 + 2;
              }
              else {
                if ((char)param_3[2] < -0x40) {
                  lVar10 = 3;
                  if (lVar19 == 3) goto LAB_10b304b04;
                  goto LAB_10b304ad4;
                }
                param_3 = param_3 + 2;
              }
              goto joined_r0x00010b304b90;
            }
            param_3 = param_3 + 1;
            pbVar14 = param_3;
            pbVar16 = param_3;
          } while (param_3 != pbVar5);
LAB_10b304be8:
          if (bVar18) {
            iVar17 = -1;
          }
        }
        bVar18 = false;
        pbVar14 = pbVar16;
        pppppppuVar8 = pppppppuVar21;
joined_r0x00010b304c1c:
        while (pbVar14 == pbVar5) {
          bVar7 = pppppppuVar21 == param_2;
          pppppppuVar21 = param_2;
          if (bVar7) goto LAB_10b305044;
LAB_10b304f50:
          if (iVar17 == 0) {
            return (ulong *******)0x0;
          }
          bVar3 = *(byte *)pppppppuVar8;
          if ((char)bVar3 < '\0') {
            lVar19 = (long)param_2 - (long)pppppppuVar8;
            if (lVar19 == 1) goto LAB_10b304f70;
            if (bVar3 < 0xe0) {
              uVar22 = 1;
              if (0xc1 < bVar3) {
LAB_10b304fc4:
                uVar15 = (uint)uVar22;
                if ((char)*(byte *)((long)pppppppuVar8 + uVar22) < -0x40) {
                  uVar15 = uVar15 + 1;
                }
                uVar22 = (ulong)uVar15;
              }
            }
            else if (bVar3 < 0xf0) {
              if (((byte)(&UNK_10f47c06f)[(ulong)bVar3 & 0xf] >>
                   (ulong)(*(byte *)((long)pppppppuVar8 + 1) >> 5) & 1) == 0) {
LAB_10b304f70:
                uVar22 = 1;
              }
              else {
                uVar22 = 2;
                if (lVar19 != 2) goto LAB_10b304fc4;
              }
            }
            else {
              if ((0xf4 < bVar3) ||
                 (((uint)(int)(char)(&UNK_10e5745e8)[*(byte *)((long)pppppppuVar8 + 1) >> 4] >>
                   (ulong)(bVar3 - 0xf0 & 0x1f) & 1) == 0)) goto LAB_10b304f70;
              if ((lVar19 == 2) || (-0x41 < (char)*(byte *)((long)pppppppuVar8 + 2))) {
                uVar22 = 2;
              }
              else {
                uVar22 = 3;
                if (lVar19 != 3) goto LAB_10b304fc4;
              }
            }
          }
          else {
            uVar22 = 1;
          }
          iVar17 = iVar17 + -1;
          pppppppuVar21 = (ulong *******)((long)pppppppuVar8 + uVar22);
          param_3 = pbVar16;
          pbVar14 = pbVar16;
          pppppppuVar8 = pppppppuVar21;
        }
        if (bVar18) {
LAB_10b304c64:
          if (pppppppuVar21 == param_2) {
            return (ulong *******)0x0;
          }
          bVar3 = *pbVar14;
          uVar15 = (uint)bVar3;
          if ((char)bVar3 < '\0') {
            lVar19 = (long)pbVar5 - (long)pbVar14;
            if (lVar19 == 1) {
LAB_10b304c84:
              uVar15 = 0xffffffff;
              goto LAB_10b304c88;
            }
            if (0xdf < uVar15) {
              if (uVar15 < 0xf0) {
                uVar22 = (ulong)bVar3 & 0xf;
                if (((byte)(&UNK_10f47c06f)[uVar22] >> (ulong)(pbVar14[1] >> 5) & 1) != 0) {
                  uVar11 = pbVar14[1] & 0x3f;
                  lVar10 = 2;
                  if (lVar19 != 2) {
LAB_10b304e24:
                    uVar11 = uVar11 | (int)uVar22 << 6;
                    goto LAB_10b304e28;
                  }
LAB_10b304d10:
                  uVar15 = 0xffffffff;
                  goto LAB_10b304c8c;
                }
              }
              else if (uVar15 < 0xf5) {
                if (((uint)(int)(char)(&UNK_10e5745e8)[pbVar14[1] >> 4] >>
                     (ulong)(uVar15 - 0xf0 & 0x1f) & 1) != 0) {
                  if ((lVar19 != 2) && (uVar11 = pbVar14[2] ^ 0x80, uVar11 < 0x40)) {
                    uVar22 = (ulong)(pbVar14[1] & 0x3f | (uVar15 - 0xf0) * 0x40);
                    lVar10 = 3;
                    if (lVar19 != 3) goto LAB_10b304e24;
                    goto LAB_10b304d10;
                  }
                  lVar10 = 2;
                  uVar15 = 0xffffffff;
                  goto LAB_10b304c8c;
                }
              }
              goto LAB_10b304c84;
            }
            if (uVar15 < 0xc2) goto LAB_10b304c84;
            uVar11 = uVar15 & 0x1f;
            lVar10 = 1;
LAB_10b304e28:
            pbVar1 = pbVar14 + lVar10;
            uVar15 = 0xffffffff;
            if ((*pbVar1 ^ 0x80) < 0x40) {
              lVar10 = lVar10 + 1;
              uVar15 = *pbVar1 ^ 0x80 | uVar11 << 6;
            }
          }
          else {
LAB_10b304c88:
            lVar10 = 1;
          }
LAB_10b304c8c:
          bVar3 = *(byte *)pppppppuVar21;
          uVar11 = (uint)bVar3;
          if ((char)bVar3 < '\0') {
            lVar19 = (long)param_2 - (long)pppppppuVar21;
            if (lVar19 == 1) {
LAB_10b304ca4:
              uVar11 = 0xffffffff;
              goto LAB_10b304ca8;
            }
            if (0xdf < uVar11) {
              if (uVar11 < 0xf0) {
                uVar22 = (ulong)bVar3 & 0xf;
                if (((byte)(&UNK_10f47c06f)[uVar22] >>
                     (ulong)(*(byte *)((long)pppppppuVar21 + 1) >> 5) & 1) != 0) {
                  uVar13 = *(byte *)((long)pppppppuVar21 + 1) & 0x3f;
                  lVar12 = 2;
                  if (lVar19 != 2) {
LAB_10b304e90:
                    uVar13 = uVar13 | (int)uVar22 << 6;
                    goto LAB_10b304e94;
                  }
LAB_10b304d54:
                  uVar11 = 0xffffffff;
                  goto LAB_10b304cac;
                }
              }
              else if (uVar11 < 0xf5) {
                if (((uint)(int)(char)(&UNK_10e5745e8)[*(byte *)((long)pppppppuVar21 + 1) >> 4] >>
                     (ulong)(uVar11 - 0xf0 & 0x1f) & 1) != 0) {
                  if ((lVar19 != 2) &&
                     (uVar13 = *(byte *)((long)pppppppuVar21 + 2) ^ 0x80, uVar13 < 0x40)) {
                    uVar22 = (ulong)(*(byte *)((long)pppppppuVar21 + 1) & 0x3f |
                                    (uVar11 - 0xf0) * 0x40);
                    lVar12 = 3;
                    if (lVar19 != 3) goto LAB_10b304e90;
                    goto LAB_10b304d54;
                  }
                  lVar12 = 2;
                  uVar11 = 0xffffffff;
                  goto LAB_10b304cac;
                }
              }
              goto LAB_10b304ca4;
            }
            if (uVar11 < 0xc2) goto LAB_10b304ca4;
            uVar13 = uVar11 & 0x1f;
            lVar12 = 1;
LAB_10b304e94:
            uVar2 = *(byte *)((long)pppppppuVar21 + lVar12) ^ 0x80;
            uVar11 = 0xffffffff;
            if (uVar2 < 0x40) {
              lVar12 = lVar12 + 1;
              uVar11 = uVar2 | uVar13 << 6;
            }
          }
          else {
LAB_10b304ca8:
            lVar12 = 1;
          }
LAB_10b304cac:
          bVar18 = false;
          if (uVar15 == 0xffffffff || uVar15 != uVar11) goto LAB_10b304f50;
          pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + lVar12);
          param_3 = pbVar14 + lVar10;
          pbVar14 = pbVar14 + lVar10;
          goto joined_r0x00010b304c1c;
        }
        bVar3 = *pbVar14;
        if (bVar3 == 0x5c) {
          bVar3 = *param_3;
          if ((char)bVar3 < '\0') {
            lVar19 = (long)pbVar5 - (long)param_3;
            if (lVar19 == 1) goto LAB_10b304d68;
            if (bVar3 < 0xe0) {
              uVar22 = 1;
              if (0xc1 < bVar3) {
LAB_10b304ebc:
                uVar15 = (uint)uVar22;
                if ((char)param_3[uVar22] < -0x40) {
                  uVar15 = uVar15 + 1;
                }
                uVar22 = (ulong)uVar15;
              }
            }
            else if (bVar3 < 0xf0) {
              if (((byte)(&UNK_10f47c06f)[(ulong)bVar3 & 0xf] >> (ulong)(param_3[1] >> 5) & 1) == 0)
              {
LAB_10b304d68:
                uVar22 = 1;
              }
              else {
                uVar22 = 2;
                if (lVar19 != 2) goto LAB_10b304ebc;
              }
            }
            else {
              if ((0xf4 < bVar3) ||
                 (((uint)(int)(char)(&UNK_10e5745e8)[param_3[1] >> 4] >>
                   (ulong)(bVar3 - 0xf0 & 0x1f) & 1) == 0)) goto LAB_10b304d68;
              if ((lVar19 == 2) || (-0x41 < (char)param_3[2])) {
                uVar22 = 2;
              }
              else {
                uVar22 = 3;
                if (lVar19 != 3) goto LAB_10b304ebc;
              }
            }
            param_3 = param_3 + uVar22;
            bVar18 = true;
            pbVar14 = param_3;
          }
          else {
            param_3 = param_3 + 1;
            bVar18 = true;
            pbVar14 = param_3;
          }
          goto joined_r0x00010b304c1c;
        }
        if ((bVar3 != 0x2a) && (bVar3 != 0x3f)) goto LAB_10b304c64;
LAB_10b305044:
        if (pbVar14 == pbVar5) {
          return (ulong *******)0x1;
        }
      } while( true );
    }
    if (pbVar5 < (byte *)0x17) {
      uStack_68 = CONCAT17((char)pbVar5,0xaaaaaaaaaaaaaa);
      pppppppuVar8 = (ulong *******)&pppppppuStack_78;
    }
    else {
      pppppppuVar21 = (ulong *******)0x19;
      if (((ulong)pbVar5 | 7) != 0x17) {
        pppppppuVar21 = (ulong *******)(((ulong)pbVar5 | 7) + 1);
      }
      pppppppuVar8 = pppppppuVar21;
      __Znwm();
      uStack_68 = (ulong)pppppppuVar21 | 0x8000000000000000;
      pppppppuStack_78 = pppppppuVar8;
      pbStack_70 = pbVar5;
    }
    pppppppuVar21 = pppppppuVar8;
    param_3 = pbVar5;
    _memcpy();
    *(byte *)((long)pppppppuVar8 + (long)pbVar5) = 0;
    uVar22 = uStack_68;
    pppppppuVar6 = pppppppuStack_78;
    pbVar5 = pbStack_70;
    pppppppuVar8 = pppppppuStack_78;
    if (-1 < (long)uStack_68) {
      pbVar5 = (byte *)(uStack_68 >> 0x38);
      pppppppuVar8 = (ulong *******)&pppppppuStack_78;
    }
    if (cVar4 < '\0') {
      ppppppuVar23 = param_1[1];
      uVar24 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
      pbVar14 = (byte *)(uVar24 - (long)ppppppuVar23);
    }
    else {
      uVar24 = 0x16;
      pbVar14 = (byte *)(0x16 - (long)ppppppuVar23);
    }
    if (pbVar5 <= pbVar14) {
      if (pbVar5 != (byte *)0x0) {
        pppppppuVar21 = param_1;
        if (cVar4 < '\0') {
          pppppppuVar21 = (ulong *******)*param_1;
        }
        _memmove((long)pppppppuVar21 + (long)ppppppuVar23,pppppppuVar8,pbVar5);
        ppppppuVar23 = (ulong ******)(pbVar5 + (long)ppppppuVar23);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = ppppppuVar23;
          *(byte *)((long)pppppppuVar21 + (long)ppppppuVar23) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar23 & 0x7f;
          *(byte *)((long)pppppppuVar21 + (long)ppppppuVar23) = 0;
        }
      }
      goto joined_r0x00010b3049e8;
    }
    if ((byte *)(~uVar24 + 0x7ffffffffffffff7) < pbVar5 + ((long)ppppppuVar23 - uVar24))
    goto LAB_10b3049f8;
    if (cVar4 < '\0') {
      pppppppuVar21 = (ulong *******)*param_1;
      if (uVar24 < 0x3ffffffffffffff3) goto LAB_10b3049a0;
LAB_10b304854:
      ppppppuVar9 = ppppppuVar20;
      __Znwm();
    }
    else {
      pppppppuVar21 = param_1;
      if (0x3ffffffffffffff2 < uVar24) goto LAB_10b304854;
LAB_10b3049a0:
      pbVar14 = pbVar5 + (long)ppppppuVar23;
      if (pbVar5 + (long)ppppppuVar23 <= (byte *)(uVar24 * 2)) {
        pbVar14 = (byte *)(uVar24 * 2);
      }
      ppppppuVar9 = (ulong ******)0x19;
      if (((ulong)pbVar14 | 7) != 0x17) {
        ppppppuVar9 = (ulong ******)(((ulong)pbVar14 | 7) + 1);
      }
      ppppppuVar20 = (ulong ******)0x17;
      if ((byte *)0x16 < pbVar14) {
        ppppppuVar20 = ppppppuVar9;
      }
      ppppppuVar9 = ppppppuVar20;
      __Znwm();
    }
    if (ppppppuVar23 != (ulong ******)0x0) {
      _memmove(ppppppuVar9,pppppppuVar21,ppppppuVar23);
    }
    _memmove((long)ppppppuVar9 + (long)ppppppuVar23,pppppppuVar8,pbVar5);
    if (uVar24 != 0x16) {
      __ZdlPv(pppppppuVar21);
    }
    *param_1 = ppppppuVar9;
    param_1[1] = (ulong ******)(pbVar5 + (long)ppppppuVar23);
    param_1[2] = (ulong ******)((ulong)ppppppuVar20 | 0x8000000000000000);
    *(byte *)((long)(pbVar5 + (long)ppppppuVar23) + (long)ppppppuVar9) = 0;
joined_r0x00010b3049e8:
    if ((long)uVar22 < 0) {
      __ZdlPv(pppppppuVar6);
      return param_1;
    }
    return param_1;
  }
  if ((byte *)(uVar22 - (long)ppppppuVar20) < pbVar5) {
    ppppppuVar23 = (ulong ******)0x7ffffffffffffff7;
    pbVar14 = pbVar5 + (long)ppppppuVar20;
    pppppppuVar21 = param_1;
    if (0x7ffffffffffffff7 - uVar22 < (long)pbVar14 - uVar22) goto LAB_10b3049f4;
    if (cVar4 < '\0') {
      pppppppuVar21 = (ulong *******)*param_1;
      if (uVar22 < 0x3ffffffffffffff3) goto LAB_10b304950;
LAB_10b304734:
      ppppppuVar9 = ppppppuVar23;
      __Znwm();
    }
    else {
      if (0x3ffffffffffffff2 < uVar22) goto LAB_10b304734;
LAB_10b304950:
      if (pbVar14 <= (byte *)(uVar22 * 2)) {
        pbVar14 = (byte *)(uVar22 * 2);
      }
      ppppppuVar9 = (ulong ******)0x19;
      if (((ulong)pbVar14 | 7) != 0x17) {
        ppppppuVar9 = (ulong ******)(((ulong)pbVar14 | 7) + 1);
      }
      ppppppuVar23 = (ulong ******)0x17;
      if ((byte *)0x16 < pbVar14) {
        ppppppuVar23 = ppppppuVar9;
      }
      ppppppuVar9 = ppppppuVar23;
      __Znwm();
    }
    if (ppppppuVar20 != (ulong ******)0x0) {
      _memmove(ppppppuVar9,pppppppuVar21,ppppppuVar20);
    }
    if (uVar22 != 0x16) {
      __ZdlPv(pppppppuVar21);
    }
    param_1[1] = ppppppuVar20;
    param_1[2] = (ulong ******)((ulong)ppppppuVar23 | 0x8000000000000000);
    *param_1 = ppppppuVar9;
  }
  else {
    pppppppuVar21 = param_1;
    if (uVar15 == 0) goto LAB_10b304784;
  }
  pppppppuVar21 = (ulong *******)*param_1;
LAB_10b304784:
  _memmove((long)pppppppuVar21 + (long)ppppppuVar20,param_2,pbVar5);
  pbVar5[(long)pppppppuVar21 + (long)ppppppuVar20] = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = (ulong ******)(pbVar5 + (long)ppppppuVar20);
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)(pbVar5 + (long)ppppppuVar20) & 0x7f;
  }
  return param_1;
}



/* Entry: 10b3049fc; end: 10b306e07;  */

undefined8 FUN_10b3049fc(byte *param_1,long param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  
  pbVar2 = param_1 + param_2;
  pbVar3 = param_3 + param_4;
  pbVar12 = param_3;
  do {
    if (pbVar12 == pbVar3) {
      iVar14 = 0;
      pbVar13 = pbVar12;
    }
    else {
      bVar15 = false;
      iVar14 = 0;
LAB_10b304a50:
      do {
        if (*pbVar12 == 0x2a) {
          bVar15 = true;
          bVar4 = *param_3;
          if ((char)bVar4 < '\0') goto LAB_10b304a70;
LAB_10b304a3c:
          param_3 = param_3 + 1;
        }
        else {
          pbVar13 = pbVar12;
          if (*pbVar12 != 0x3f) break;
          iVar14 = iVar14 + 1;
          bVar4 = *param_3;
          if (-1 < (char)bVar4) goto LAB_10b304a3c;
LAB_10b304a70:
          lVar17 = (long)pbVar3 - (long)param_3;
          if (lVar17 == 1) {
            param_3 = param_3 + 1;
          }
          else {
            uVar11 = (uint)bVar4;
            if (uVar11 < 0xe0) {
              lVar7 = 1;
              if (uVar11 < 0xc2) {
LAB_10b304b04:
                param_3 = param_3 + lVar7;
              }
              else {
LAB_10b304ad4:
                uVar11 = (uint)lVar7;
                if ((char)param_3[lVar7] < -0x40) {
                  uVar11 = uVar11 + 1;
                }
                param_3 = param_3 + uVar11;
              }
            }
            else if (uVar11 < 0xf0) {
              if (((byte)(&UNK_10f47c06f)[(ulong)bVar4 & 0xf] >> (ulong)(param_3[1] >> 5) & 1) != 0)
              {
                lVar7 = 2;
                if (lVar17 == 2) goto LAB_10b304b04;
                goto LAB_10b304ad4;
              }
              param_3 = param_3 + 1;
            }
            else {
              if (0xf4 < uVar11) {
                param_3 = param_3 + 1;
                pbVar12 = param_3;
                pbVar13 = param_3;
                if (param_3 == pbVar3) break;
                goto LAB_10b304a50;
              }
              if (((uint)(int)(char)(&UNK_10e5745e8)[param_3[1] >> 4] >>
                   (ulong)(uVar11 - 0xf0 & 0x1f) & 1) == 0) {
                param_3 = param_3 + 1;
              }
              else if (lVar17 == 2) {
                param_3 = param_3 + 2;
              }
              else {
                if ((char)param_3[2] < -0x40) {
                  lVar7 = 3;
                  if (lVar17 == 3) goto LAB_10b304b04;
                  goto LAB_10b304ad4;
                }
                param_3 = param_3 + 2;
              }
            }
          }
        }
        pbVar12 = param_3;
        pbVar13 = param_3;
      } while (param_3 != pbVar3);
      if (bVar15) {
        iVar14 = -1;
      }
    }
    bVar15 = false;
    pbVar12 = pbVar13;
    pbVar5 = param_1;
joined_r0x00010b304c1c:
    while (pbVar12 == pbVar3) {
      bVar6 = param_1 == pbVar2;
      param_1 = pbVar2;
      if (bVar6) goto LAB_10b305044;
LAB_10b304f50:
      if (iVar14 == 0) {
        return 0;
      }
      bVar4 = *pbVar5;
      if ((char)bVar4 < '\0') {
        lVar17 = (long)pbVar2 - (long)pbVar5;
        if (lVar17 == 1) goto LAB_10b304f70;
        if (bVar4 < 0xe0) {
          uVar16 = 1;
          if (0xc1 < bVar4) {
LAB_10b304fc4:
            uVar11 = (uint)uVar16;
            if ((char)pbVar5[uVar16] < -0x40) {
              uVar11 = uVar11 + 1;
            }
            uVar16 = (ulong)uVar11;
          }
        }
        else if (bVar4 < 0xf0) {
          if (((byte)(&UNK_10f47c06f)[(ulong)bVar4 & 0xf] >> (ulong)(pbVar5[1] >> 5) & 1) == 0) {
LAB_10b304f70:
            uVar16 = 1;
          }
          else {
            uVar16 = 2;
            if (lVar17 != 2) goto LAB_10b304fc4;
          }
        }
        else {
          if ((0xf4 < bVar4) ||
             (((uint)(int)(char)(&UNK_10e5745e8)[pbVar5[1] >> 4] >> (ulong)(bVar4 - 0xf0 & 0x1f) & 1
              ) == 0)) goto LAB_10b304f70;
          if ((lVar17 == 2) || (-0x41 < (char)pbVar5[2])) {
            uVar16 = 2;
          }
          else {
            uVar16 = 3;
            if (lVar17 != 3) goto LAB_10b304fc4;
          }
        }
      }
      else {
        uVar16 = 1;
      }
      iVar14 = iVar14 + -1;
      param_1 = pbVar5 + uVar16;
      param_3 = pbVar13;
      pbVar12 = pbVar13;
      pbVar5 = param_1;
    }
    if (bVar15) {
LAB_10b304c64:
      if (param_1 == pbVar2) {
        return 0;
      }
      bVar4 = *pbVar12;
      uVar11 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        lVar17 = (long)pbVar3 - (long)pbVar12;
        if (lVar17 == 1) {
LAB_10b304c84:
          uVar11 = 0xffffffff;
          goto LAB_10b304c88;
        }
        if (0xdf < uVar11) {
          if (uVar11 < 0xf0) {
            uVar16 = (ulong)bVar4 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar16] >> (ulong)(pbVar12[1] >> 5) & 1) != 0) {
              uVar8 = pbVar12[1] & 0x3f;
              lVar7 = 2;
              if (lVar17 != 2) {
LAB_10b304e24:
                uVar8 = uVar8 | (int)uVar16 << 6;
                goto LAB_10b304e28;
              }
LAB_10b304d10:
              uVar11 = 0xffffffff;
              goto LAB_10b304c8c;
            }
          }
          else if (uVar11 < 0xf5) {
            if (((uint)(int)(char)(&UNK_10e5745e8)[pbVar12[1] >> 4] >> (ulong)(uVar11 - 0xf0 & 0x1f)
                & 1) != 0) {
              if ((lVar17 != 2) && (uVar8 = pbVar12[2] ^ 0x80, uVar8 < 0x40)) {
                uVar16 = (ulong)(pbVar12[1] & 0x3f | (uVar11 - 0xf0) * 0x40);
                lVar7 = 3;
                if (lVar17 != 3) goto LAB_10b304e24;
                goto LAB_10b304d10;
              }
              lVar7 = 2;
              uVar11 = 0xffffffff;
              goto LAB_10b304c8c;
            }
          }
          goto LAB_10b304c84;
        }
        if (uVar11 < 0xc2) goto LAB_10b304c84;
        uVar8 = uVar11 & 0x1f;
        lVar7 = 1;
LAB_10b304e28:
        pbVar1 = pbVar12 + lVar7;
        uVar11 = 0xffffffff;
        if ((*pbVar1 ^ 0x80) < 0x40) {
          lVar7 = lVar7 + 1;
          uVar11 = *pbVar1 ^ 0x80 | uVar8 << 6;
        }
      }
      else {
LAB_10b304c88:
        lVar7 = 1;
      }
LAB_10b304c8c:
      bVar4 = *param_1;
      uVar8 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        lVar17 = (long)pbVar2 - (long)param_1;
        if (lVar17 == 1) {
LAB_10b304ca4:
          uVar8 = 0xffffffff;
          goto LAB_10b304ca8;
        }
        if (0xdf < uVar8) {
          if (uVar8 < 0xf0) {
            uVar16 = (ulong)bVar4 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar16] >> (ulong)(param_1[1] >> 5) & 1) != 0) {
              uVar10 = param_1[1] & 0x3f;
              lVar9 = 2;
              if (lVar17 != 2) {
LAB_10b304e90:
                uVar10 = uVar10 | (int)uVar16 << 6;
                goto LAB_10b304e94;
              }
LAB_10b304d54:
              uVar8 = 0xffffffff;
              goto LAB_10b304cac;
            }
          }
          else if (uVar8 < 0xf5) {
            if (((uint)(int)(char)(&UNK_10e5745e8)[param_1[1] >> 4] >> (ulong)(uVar8 - 0xf0 & 0x1f)
                & 1) != 0) {
              if ((lVar17 != 2) && (uVar10 = param_1[2] ^ 0x80, uVar10 < 0x40)) {
                uVar16 = (ulong)(param_1[1] & 0x3f | (uVar8 - 0xf0) * 0x40);
                lVar9 = 3;
                if (lVar17 != 3) goto LAB_10b304e90;
                goto LAB_10b304d54;
              }
              lVar9 = 2;
              uVar8 = 0xffffffff;
              goto LAB_10b304cac;
            }
          }
          goto LAB_10b304ca4;
        }
        if (uVar8 < 0xc2) goto LAB_10b304ca4;
        uVar10 = uVar8 & 0x1f;
        lVar9 = 1;
LAB_10b304e94:
        pbVar1 = param_1 + lVar9;
        uVar8 = 0xffffffff;
        if ((*pbVar1 ^ 0x80) < 0x40) {
          lVar9 = lVar9 + 1;
          uVar8 = *pbVar1 ^ 0x80 | uVar10 << 6;
        }
      }
      else {
LAB_10b304ca8:
        lVar9 = 1;
      }
LAB_10b304cac:
      bVar15 = false;
      if (uVar11 == 0xffffffff || uVar11 != uVar8) goto LAB_10b304f50;
      param_1 = param_1 + lVar9;
      param_3 = pbVar12 + lVar7;
      pbVar12 = pbVar12 + lVar7;
      goto joined_r0x00010b304c1c;
    }
    bVar4 = *pbVar12;
    if (bVar4 == 0x5c) {
      bVar4 = *param_3;
      if ((char)bVar4 < '\0') {
        lVar17 = (long)pbVar3 - (long)param_3;
        if (lVar17 == 1) goto LAB_10b304d68;
        if (bVar4 < 0xe0) {
          uVar16 = 1;
          if (0xc1 < bVar4) {
LAB_10b304ebc:
            uVar11 = (uint)uVar16;
            if ((char)param_3[uVar16] < -0x40) {
              uVar11 = uVar11 + 1;
            }
            uVar16 = (ulong)uVar11;
          }
        }
        else if (bVar4 < 0xf0) {
          if (((byte)(&UNK_10f47c06f)[(ulong)bVar4 & 0xf] >> (ulong)(param_3[1] >> 5) & 1) == 0) {
LAB_10b304d68:
            uVar16 = 1;
          }
          else {
            uVar16 = 2;
            if (lVar17 != 2) goto LAB_10b304ebc;
          }
        }
        else {
          if ((0xf4 < bVar4) ||
             (((uint)(int)(char)(&UNK_10e5745e8)[param_3[1] >> 4] >> (ulong)(bVar4 - 0xf0 & 0x1f) &
              1) == 0)) goto LAB_10b304d68;
          if ((lVar17 == 2) || (-0x41 < (char)param_3[2])) {
            uVar16 = 2;
          }
          else {
            uVar16 = 3;
            if (lVar17 != 3) goto LAB_10b304ebc;
          }
        }
        param_3 = param_3 + uVar16;
        bVar15 = true;
        pbVar12 = param_3;
      }
      else {
        param_3 = param_3 + 1;
        bVar15 = true;
        pbVar12 = param_3;
      }
      goto joined_r0x00010b304c1c;
    }
    if ((bVar4 != 0x2a) && (bVar4 != 0x3f)) goto LAB_10b304c64;
LAB_10b305044:
    if (pbVar12 == pbVar3) {
      return 1;
    }
  } while( true );
}



/* Entry: 10b306e08; end: 10b306e77;  */

undefined4 FUN_10b306e08(byte *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  if (param_4 <= param_2) {
    uVar6 = param_4;
  }
  while( true ) {
    if (uVar6 == 0) {
      uVar1 = 1;
      if (param_2 < param_4) {
        uVar1 = 0xffffffff;
      }
      uVar3 = 0;
      if (param_2 != param_4) {
        uVar3 = uVar1;
      }
      return uVar3;
    }
    bVar4 = *param_1;
    bVar2 = bVar4 + 0x20;
    if (0x19 < bVar4 - 0x41) {
      bVar2 = bVar4;
    }
    bVar5 = *param_3;
    bVar4 = bVar5 + 0x20;
    if (0x19 < bVar5 - 0x41) {
      bVar4 = bVar5;
    }
    if ((char)bVar2 < (char)bVar4) break;
    if ((char)bVar4 < (char)bVar2) {
      return 1;
    }
    uVar6 = uVar6 - 1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  return 0xffffffff;
}



/* Entry: 10b306e78; end: 10b306edb;  */

undefined8 FUN_10b306e78(void)

{
  int iVar1;
  
  if ((bRam000000011383acb0 & 1) == 0) {
    iVar1 = 0x1383acb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011383ac98 = 0;
      uRam000000011383aca0 = 0;
      uRam000000011383aca8 = 0;
      ___cxa_guard_release(0x11383acb0);
      return 0x11383ac98;
    }
  }
  return 0x11383ac98;
}



/* Entry: 10b306edc; end: 10b307047;  */

ulong FUN_10b306edc(ulong *param_1,ulong param_2,uint param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong *puVar10;
  ulong uVar11;
  ushort uVar12;
  ulong *puVar13;
  ushort *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  byte bVar40;
  byte bVar43;
  ulong uVar41;
  ulong uVar42;
  byte bVar44;
  byte bVar46;
  ulong uVar45;
  byte bVar47;
  byte bVar49;
  ulong uVar48;
  byte bVar50;
  byte bVar52;
  ulong uVar51;
  byte bVar53;
  byte bVar55;
  ulong uVar54;
  byte bVar56;
  byte bVar58;
  ulong uVar57;
  byte bVar59;
  byte bVar61;
  ulong uVar60;
  byte bVar62;
  byte bVar64;
  ulong uVar63;
  byte bVar65;
  byte bVar67;
  ulong uVar66;
  byte bVar68;
  byte bVar70;
  ulong uVar69;
  byte bVar71;
  byte bVar73;
  ulong uVar72;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  byte abStack_130 [264];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 & 1) == 0) {
    uVar11 = 0;
LAB_10b306f6c:
    uVar17 = param_2;
    if ((param_3 >> 1 & 1) != 0) {
      if (param_2 == 0) {
        uVar17 = 0;
      }
      else {
        abStack_130[0xe8] = 0;
        abStack_130[0xe9] = 0;
        abStack_130[0xea] = 0;
        abStack_130[0xeb] = 0;
        abStack_130[0xec] = 0;
        abStack_130[0xed] = 0;
        abStack_130[0xee] = 0;
        abStack_130[0xef] = 0;
        abStack_130[0xe0] = 0;
        abStack_130[0xe1] = 0;
        abStack_130[0xe2] = 0;
        abStack_130[0xe3] = 0;
        abStack_130[0xe4] = 0;
        abStack_130[0xe5] = 0;
        abStack_130[0xe6] = 0;
        abStack_130[0xe7] = 0;
        abStack_130[0xf8] = 0;
        abStack_130[0xf9] = 0;
        abStack_130[0xfa] = 0;
        abStack_130[0xfb] = 0;
        abStack_130[0xfc] = 0;
        abStack_130[0xfd] = 0;
        abStack_130[0xfe] = 0;
        abStack_130[0xff] = 0;
        abStack_130[0xf0] = 0;
        abStack_130[0xf1] = 0;
        abStack_130[0xf2] = 0;
        abStack_130[0xf3] = 0;
        abStack_130[0xf4] = 0;
        abStack_130[0xf5] = 0;
        abStack_130[0xf6] = 0;
        abStack_130[0xf7] = 0;
        abStack_130[200] = 0;
        abStack_130[0xc9] = 0;
        abStack_130[0xca] = 0;
        abStack_130[0xcb] = 0;
        abStack_130[0xcc] = 0;
        abStack_130[0xcd] = 0;
        abStack_130[0xce] = 0;
        abStack_130[0xcf] = 0;
        abStack_130[0xc0] = 0;
        abStack_130[0xc1] = 0;
        abStack_130[0xc2] = 0;
        abStack_130[0xc3] = 0;
        abStack_130[0xc4] = 0;
        abStack_130[0xc5] = 0;
        abStack_130[0xc6] = 0;
        abStack_130[199] = 0;
        abStack_130[0xd8] = 0;
        abStack_130[0xd9] = 0;
        abStack_130[0xda] = 0;
        abStack_130[0xdb] = 0;
        abStack_130[0xdc] = 0;
        abStack_130[0xdd] = 0;
        abStack_130[0xde] = 0;
        abStack_130[0xdf] = 0;
        abStack_130[0xd0] = 0;
        abStack_130[0xd1] = 0;
        abStack_130[0xd2] = 0;
        abStack_130[0xd3] = 0;
        abStack_130[0xd4] = 0;
        abStack_130[0xd5] = 0;
        abStack_130[0xd6] = 0;
        abStack_130[0xd7] = 0;
        abStack_130[0xa8] = 0;
        abStack_130[0xa9] = 0;
        abStack_130[0xaa] = 0;
        abStack_130[0xab] = 0;
        abStack_130[0xac] = 0;
        abStack_130[0xad] = 0;
        abStack_130[0xae] = 0;
        abStack_130[0xaf] = 0;
        abStack_130[0xa0] = 0;
        abStack_130[0xa1] = 0;
        abStack_130[0xa2] = 0;
        abStack_130[0xa3] = 0;
        abStack_130[0xa4] = 0;
        abStack_130[0xa5] = 0;
        abStack_130[0xa6] = 0;
        abStack_130[0xa7] = 0;
        abStack_130[0xb8] = 0;
        abStack_130[0xb9] = 0;
        abStack_130[0xba] = 0;
        abStack_130[0xbb] = 0;
        abStack_130[0xbc] = 0;
        abStack_130[0xbd] = 0;
        abStack_130[0xbe] = 0;
        abStack_130[0xbf] = 0;
        abStack_130[0xb0] = 0;
        abStack_130[0xb1] = 0;
        abStack_130[0xb2] = 0;
        abStack_130[0xb3] = 0;
        abStack_130[0xb4] = 0;
        abStack_130[0xb5] = 0;
        abStack_130[0xb6] = 0;
        abStack_130[0xb7] = 0;
        abStack_130[0x88] = 0;
        abStack_130[0x89] = 0;
        abStack_130[0x8a] = 0;
        abStack_130[0x8b] = 0;
        abStack_130[0x8c] = 0;
        abStack_130[0x8d] = 0;
        abStack_130[0x8e] = 0;
        abStack_130[0x8f] = 0;
        abStack_130[0x80] = 0;
        abStack_130[0x81] = 0;
        abStack_130[0x82] = 0;
        abStack_130[0x83] = 0;
        abStack_130[0x84] = 0;
        abStack_130[0x85] = 0;
        abStack_130[0x86] = 0;
        abStack_130[0x87] = 0;
        abStack_130[0x98] = 0;
        abStack_130[0x99] = 0;
        abStack_130[0x9a] = 0;
        abStack_130[0x9b] = 0;
        abStack_130[0x9c] = 0;
        abStack_130[0x9d] = 0;
        abStack_130[0x9e] = 0;
        abStack_130[0x9f] = 0;
        abStack_130[0x90] = 0;
        abStack_130[0x91] = 0;
        abStack_130[0x92] = 0;
        abStack_130[0x93] = 0;
        abStack_130[0x94] = 0;
        abStack_130[0x95] = 0;
        abStack_130[0x96] = 0;
        abStack_130[0x97] = 0;
        abStack_130[0x68] = 0;
        abStack_130[0x69] = 0;
        abStack_130[0x6a] = 0;
        abStack_130[0x6b] = 0;
        abStack_130[0x6c] = 0;
        abStack_130[0x6d] = 0;
        abStack_130[0x6e] = 0;
        abStack_130[0x6f] = 0;
        abStack_130[0x60] = 0;
        abStack_130[0x61] = 0;
        abStack_130[0x62] = 0;
        abStack_130[99] = 0;
        abStack_130[100] = 0;
        abStack_130[0x65] = 0;
        abStack_130[0x66] = 0;
        abStack_130[0x67] = 0;
        abStack_130[0x78] = 0;
        abStack_130[0x79] = 0;
        abStack_130[0x7a] = 0;
        abStack_130[0x7b] = 0;
        abStack_130[0x7c] = 0;
        abStack_130[0x7d] = 0;
        abStack_130[0x7e] = 0;
        abStack_130[0x7f] = 0;
        abStack_130[0x70] = 0;
        abStack_130[0x71] = 0;
        abStack_130[0x72] = 0;
        abStack_130[0x73] = 0;
        abStack_130[0x74] = 0;
        abStack_130[0x75] = 0;
        abStack_130[0x76] = 0;
        abStack_130[0x77] = 0;
        abStack_130[0x48] = 0;
        abStack_130[0x49] = 0;
        abStack_130[0x4a] = 0;
        abStack_130[0x4b] = 0;
        abStack_130[0x4c] = 0;
        abStack_130[0x4d] = 0;
        abStack_130[0x4e] = 0;
        abStack_130[0x4f] = 0;
        abStack_130[0x40] = 0;
        abStack_130[0x41] = 0;
        abStack_130[0x42] = 0;
        abStack_130[0x43] = 0;
        abStack_130[0x44] = 0;
        abStack_130[0x45] = 0;
        abStack_130[0x46] = 0;
        abStack_130[0x47] = 0;
        abStack_130[0x58] = 0;
        abStack_130[0x59] = 0;
        abStack_130[0x5a] = 0;
        abStack_130[0x5b] = 0;
        abStack_130[0x5c] = 0;
        abStack_130[0x5d] = 0;
        abStack_130[0x5e] = 0;
        abStack_130[0x5f] = 0;
        abStack_130[0x50] = 0;
        abStack_130[0x51] = 0;
        abStack_130[0x52] = 0;
        abStack_130[0x53] = 0;
        abStack_130[0x54] = 0;
        abStack_130[0x55] = 0;
        abStack_130[0x56] = 0;
        abStack_130[0x57] = 0;
        abStack_130[0x28] = 0;
        abStack_130[0x29] = 0;
        abStack_130[0x2a] = 0;
        abStack_130[0x2b] = 0;
        abStack_130[0x2c] = 0;
        abStack_130[0x2d] = 0;
        abStack_130[0x2e] = 0;
        abStack_130[0x2f] = 0;
        abStack_130[0x38] = 0;
        abStack_130[0x39] = 0;
        abStack_130[0x3a] = 0;
        abStack_130[0x3b] = 0;
        abStack_130[0x3c] = 0;
        abStack_130[0x3d] = 0;
        abStack_130[0x3e] = 0;
        abStack_130[0x3f] = 0;
        abStack_130[0x30] = 0;
        abStack_130[0x31] = 0;
        abStack_130[0x32] = 0;
        abStack_130[0x33] = 0;
        abStack_130[0x34] = 0;
        abStack_130[0x35] = 0;
        abStack_130[0x36] = 0;
        abStack_130[0x37] = 0;
        abStack_130[0] = 0;
        abStack_130[1] = 0;
        abStack_130[2] = 0;
        abStack_130[3] = 0;
        abStack_130[4] = 0;
        abStack_130[5] = 0;
        abStack_130[6] = 0;
        abStack_130[7] = 0;
        abStack_130[0x18] = 0;
        abStack_130[0x19] = 0;
        abStack_130[0x1a] = 0;
        abStack_130[0x1b] = 0;
        abStack_130[0x1c] = 0;
        abStack_130[0x1d] = 0;
        abStack_130[0x1e] = 0;
        abStack_130[0x1f] = 0;
        abStack_130[0x10] = 0;
        abStack_130[0x11] = 0;
        abStack_130[0x12] = 0;
        abStack_130[0x13] = 0;
        abStack_130[0x14] = 0;
        abStack_130[0x15] = 0;
        abStack_130[0x16] = 0;
        abStack_130[0x17] = 0;
        abStack_130[0x20] = 1;
        abStack_130[0x21] = 0;
        abStack_130[0x22] = 0;
        abStack_130[0x23] = 0;
        abStack_130[0x24] = 0;
        abStack_130[0x25] = 0;
        abStack_130[0x26] = 0;
        abStack_130[0x27] = 0;
        abStack_130[8] = 0;
        abStack_130[9] = 1;
        abStack_130[10] = 1;
        abStack_130[0xb] = 1;
        abStack_130[0xc] = 1;
        abStack_130[0xd] = 1;
        abStack_130[0xe] = 0;
        abStack_130[0xf] = 0;
        uVar42 = param_2;
        if (abStack_130[*(byte *)((long)param_1 + (param_2 - 1))] == 1) {
          do {
            uVar17 = uVar42 - 1;
            if (uVar17 == 0) break;
            lVar16 = uVar42 - 2;
            uVar42 = uVar17;
          } while ((abStack_130[*(byte *)((long)param_1 + lVar16)] & 1) != 0);
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      uVar11 = 0;
      abStack_130[0] = 0;
      abStack_130[1] = 0;
      abStack_130[2] = 0;
      abStack_130[3] = 0;
      abStack_130[4] = 0;
      abStack_130[5] = 0;
      abStack_130[6] = 0;
      abStack_130[7] = 0;
      abStack_130[0x18] = 0;
      abStack_130[0x19] = 0;
      abStack_130[0x1a] = 0;
      abStack_130[0x1b] = 0;
      abStack_130[0x1c] = 0;
      abStack_130[0x1d] = 0;
      abStack_130[0x1e] = 0;
      abStack_130[0x1f] = 0;
      abStack_130[0x10] = 0;
      abStack_130[0x11] = 0;
      abStack_130[0x12] = 0;
      abStack_130[0x13] = 0;
      abStack_130[0x14] = 0;
      abStack_130[0x15] = 0;
      abStack_130[0x16] = 0;
      abStack_130[0x17] = 0;
      abStack_130[0xe8] = 0;
      abStack_130[0xe9] = 0;
      abStack_130[0xea] = 0;
      abStack_130[0xeb] = 0;
      abStack_130[0xec] = 0;
      abStack_130[0xed] = 0;
      abStack_130[0xee] = 0;
      abStack_130[0xef] = 0;
      abStack_130[0xe0] = 0;
      abStack_130[0xe1] = 0;
      abStack_130[0xe2] = 0;
      abStack_130[0xe3] = 0;
      abStack_130[0xe4] = 0;
      abStack_130[0xe5] = 0;
      abStack_130[0xe6] = 0;
      abStack_130[0xe7] = 0;
      abStack_130[0xf8] = 0;
      abStack_130[0xf9] = 0;
      abStack_130[0xfa] = 0;
      abStack_130[0xfb] = 0;
      abStack_130[0xfc] = 0;
      abStack_130[0xfd] = 0;
      abStack_130[0xfe] = 0;
      abStack_130[0xff] = 0;
      abStack_130[0xf0] = 0;
      abStack_130[0xf1] = 0;
      abStack_130[0xf2] = 0;
      abStack_130[0xf3] = 0;
      abStack_130[0xf4] = 0;
      abStack_130[0xf5] = 0;
      abStack_130[0xf6] = 0;
      abStack_130[0xf7] = 0;
      abStack_130[200] = 0;
      abStack_130[0xc9] = 0;
      abStack_130[0xca] = 0;
      abStack_130[0xcb] = 0;
      abStack_130[0xcc] = 0;
      abStack_130[0xcd] = 0;
      abStack_130[0xce] = 0;
      abStack_130[0xcf] = 0;
      abStack_130[0xc0] = 0;
      abStack_130[0xc1] = 0;
      abStack_130[0xc2] = 0;
      abStack_130[0xc3] = 0;
      abStack_130[0xc4] = 0;
      abStack_130[0xc5] = 0;
      abStack_130[0xc6] = 0;
      abStack_130[199] = 0;
      abStack_130[0xd8] = 0;
      abStack_130[0xd9] = 0;
      abStack_130[0xda] = 0;
      abStack_130[0xdb] = 0;
      abStack_130[0xdc] = 0;
      abStack_130[0xdd] = 0;
      abStack_130[0xde] = 0;
      abStack_130[0xdf] = 0;
      abStack_130[0xd0] = 0;
      abStack_130[0xd1] = 0;
      abStack_130[0xd2] = 0;
      abStack_130[0xd3] = 0;
      abStack_130[0xd4] = 0;
      abStack_130[0xd5] = 0;
      abStack_130[0xd6] = 0;
      abStack_130[0xd7] = 0;
      abStack_130[0xa8] = 0;
      abStack_130[0xa9] = 0;
      abStack_130[0xaa] = 0;
      abStack_130[0xab] = 0;
      abStack_130[0xac] = 0;
      abStack_130[0xad] = 0;
      abStack_130[0xae] = 0;
      abStack_130[0xaf] = 0;
      abStack_130[0xa0] = 0;
      abStack_130[0xa1] = 0;
      abStack_130[0xa2] = 0;
      abStack_130[0xa3] = 0;
      abStack_130[0xa4] = 0;
      abStack_130[0xa5] = 0;
      abStack_130[0xa6] = 0;
      abStack_130[0xa7] = 0;
      abStack_130[0xb8] = 0;
      abStack_130[0xb9] = 0;
      abStack_130[0xba] = 0;
      abStack_130[0xbb] = 0;
      abStack_130[0xbc] = 0;
      abStack_130[0xbd] = 0;
      abStack_130[0xbe] = 0;
      abStack_130[0xbf] = 0;
      abStack_130[0xb0] = 0;
      abStack_130[0xb1] = 0;
      abStack_130[0xb2] = 0;
      abStack_130[0xb3] = 0;
      abStack_130[0xb4] = 0;
      abStack_130[0xb5] = 0;
      abStack_130[0xb6] = 0;
      abStack_130[0xb7] = 0;
      abStack_130[0x88] = 0;
      abStack_130[0x89] = 0;
      abStack_130[0x8a] = 0;
      abStack_130[0x8b] = 0;
      abStack_130[0x8c] = 0;
      abStack_130[0x8d] = 0;
      abStack_130[0x8e] = 0;
      abStack_130[0x8f] = 0;
      abStack_130[0x80] = 0;
      abStack_130[0x81] = 0;
      abStack_130[0x82] = 0;
      abStack_130[0x83] = 0;
      abStack_130[0x84] = 0;
      abStack_130[0x85] = 0;
      abStack_130[0x86] = 0;
      abStack_130[0x87] = 0;
      abStack_130[0x98] = 0;
      abStack_130[0x99] = 0;
      abStack_130[0x9a] = 0;
      abStack_130[0x9b] = 0;
      abStack_130[0x9c] = 0;
      abStack_130[0x9d] = 0;
      abStack_130[0x9e] = 0;
      abStack_130[0x9f] = 0;
      abStack_130[0x90] = 0;
      abStack_130[0x91] = 0;
      abStack_130[0x92] = 0;
      abStack_130[0x93] = 0;
      abStack_130[0x94] = 0;
      abStack_130[0x95] = 0;
      abStack_130[0x96] = 0;
      abStack_130[0x97] = 0;
      abStack_130[0x68] = 0;
      abStack_130[0x69] = 0;
      abStack_130[0x6a] = 0;
      abStack_130[0x6b] = 0;
      abStack_130[0x6c] = 0;
      abStack_130[0x6d] = 0;
      abStack_130[0x6e] = 0;
      abStack_130[0x6f] = 0;
      abStack_130[0x60] = 0;
      abStack_130[0x61] = 0;
      abStack_130[0x62] = 0;
      abStack_130[99] = 0;
      abStack_130[100] = 0;
      abStack_130[0x65] = 0;
      abStack_130[0x66] = 0;
      abStack_130[0x67] = 0;
      abStack_130[0x78] = 0;
      abStack_130[0x79] = 0;
      abStack_130[0x7a] = 0;
      abStack_130[0x7b] = 0;
      abStack_130[0x7c] = 0;
      abStack_130[0x7d] = 0;
      abStack_130[0x7e] = 0;
      abStack_130[0x7f] = 0;
      abStack_130[0x70] = 0;
      abStack_130[0x71] = 0;
      abStack_130[0x72] = 0;
      abStack_130[0x73] = 0;
      abStack_130[0x74] = 0;
      abStack_130[0x75] = 0;
      abStack_130[0x76] = 0;
      abStack_130[0x77] = 0;
      abStack_130[0x48] = 0;
      abStack_130[0x49] = 0;
      abStack_130[0x4a] = 0;
      abStack_130[0x4b] = 0;
      abStack_130[0x4c] = 0;
      abStack_130[0x4d] = 0;
      abStack_130[0x4e] = 0;
      abStack_130[0x4f] = 0;
      abStack_130[0x40] = 0;
      abStack_130[0x41] = 0;
      abStack_130[0x42] = 0;
      abStack_130[0x43] = 0;
      abStack_130[0x44] = 0;
      abStack_130[0x45] = 0;
      abStack_130[0x46] = 0;
      abStack_130[0x47] = 0;
      abStack_130[0x58] = 0;
      abStack_130[0x59] = 0;
      abStack_130[0x5a] = 0;
      abStack_130[0x5b] = 0;
      abStack_130[0x5c] = 0;
      abStack_130[0x5d] = 0;
      abStack_130[0x5e] = 0;
      abStack_130[0x5f] = 0;
      abStack_130[0x50] = 0;
      abStack_130[0x51] = 0;
      abStack_130[0x52] = 0;
      abStack_130[0x53] = 0;
      abStack_130[0x54] = 0;
      abStack_130[0x55] = 0;
      abStack_130[0x56] = 0;
      abStack_130[0x57] = 0;
      abStack_130[0x28] = 0;
      abStack_130[0x29] = 0;
      abStack_130[0x2a] = 0;
      abStack_130[0x2b] = 0;
      abStack_130[0x2c] = 0;
      abStack_130[0x2d] = 0;
      abStack_130[0x2e] = 0;
      abStack_130[0x2f] = 0;
      abStack_130[0x38] = 0;
      abStack_130[0x39] = 0;
      abStack_130[0x3a] = 0;
      abStack_130[0x3b] = 0;
      abStack_130[0x3c] = 0;
      abStack_130[0x3d] = 0;
      abStack_130[0x3e] = 0;
      abStack_130[0x3f] = 0;
      abStack_130[0x30] = 0;
      abStack_130[0x31] = 0;
      abStack_130[0x32] = 0;
      abStack_130[0x33] = 0;
      abStack_130[0x34] = 0;
      abStack_130[0x35] = 0;
      abStack_130[0x36] = 0;
      abStack_130[0x37] = 0;
      abStack_130[0x20] = 1;
      abStack_130[0x21] = 0;
      abStack_130[0x22] = 0;
      abStack_130[0x23] = 0;
      abStack_130[0x24] = 0;
      abStack_130[0x25] = 0;
      abStack_130[0x26] = 0;
      abStack_130[0x27] = 0;
      abStack_130[8] = 0;
      abStack_130[9] = 1;
      abStack_130[10] = 1;
      abStack_130[0xb] = 1;
      abStack_130[0xc] = 1;
      abStack_130[0xd] = 1;
      abStack_130[0xe] = 0;
      abStack_130[0xf] = 0;
      do {
        if (abStack_130[*(byte *)((long)param_1 + uVar11)] != 1) goto LAB_10b306f6c;
        uVar11 = uVar11 + 1;
      } while (param_2 != uVar11);
      uVar11 = 0xffffffffffffffff;
      goto LAB_10b306f6c;
    }
    uVar11 = 0xffffffffffffffff;
    uVar17 = 0;
  }
  uVar42 = param_2;
  if (uVar11 <= param_2) {
    uVar42 = uVar11;
  }
  uVar18 = param_2 - uVar42;
  if (uVar17 - uVar11 <= param_2 - uVar42) {
    uVar18 = uVar17 - uVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return uVar42 + (long)param_1;
  }
  ___stack_chk_fail();
  if (uVar18 == 0) {
    return 1;
  }
  puVar1 = (ulong *)((long)param_1 + uVar18 * 2);
  if ((0 < (long)uVar18) && (((ulong)param_1 & 7) != 0)) {
    uVar12 = 0;
    puVar10 = param_1;
    puVar15 = param_1;
    do {
      puVar15 = (ulong *)((long)puVar15 + 2);
      param_1 = (ulong *)((long)puVar10 + 2);
      uVar12 = uVar12 | (ushort)*puVar10;
      if (((ulong)puVar15 & 7) == 0) break;
      puVar10 = param_1;
    } while (param_1 < puVar1);
    if ((uVar12 & 0xff80) != 0) {
      return 0;
    }
  }
  puVar10 = param_1 + 2;
  puVar15 = param_1 + 1;
  uVar11 = ~(ulong)param_1;
  while (puVar13 = puVar10 + -2, puVar13 <= puVar1 + -0x10) {
    uVar42 = puVar10[7];
    uVar17 = puVar10[6];
    uVar41 = puVar10[-1];
    uVar18 = puVar10[-2];
    uVar48 = puVar10[1];
    uVar45 = *puVar10;
    uVar54 = puVar10[0xb];
    uVar51 = puVar10[10];
    uVar60 = puVar10[0xd];
    uVar57 = puVar10[0xc];
    uVar66 = puVar10[3];
    uVar63 = puVar10[2];
    uVar72 = puVar10[5];
    uVar69 = puVar10[4];
    bVar20 = (byte)uVar18 | (byte)uVar17 | (byte)uVar63 | (byte)uVar51 |
             (byte)uVar45 | (byte)puVar10[8] | (byte)uVar69 | (byte)uVar57;
    bVar21 = (byte)(uVar18 >> 8) | (byte)(uVar17 >> 8) | (byte)(uVar63 >> 8) | (byte)(uVar51 >> 8) |
             (byte)(uVar45 >> 8) | *(byte *)((long)puVar10 + 0x41) |
             (byte)(uVar69 >> 8) | (byte)(uVar57 >> 8);
    bVar22 = (byte)(uVar18 >> 0x10) | (byte)(uVar17 >> 0x10) |
             (byte)(uVar63 >> 0x10) | (byte)(uVar51 >> 0x10) |
             (byte)(uVar45 >> 0x10) | *(byte *)((long)puVar10 + 0x42) |
             (byte)(uVar69 >> 0x10) | (byte)(uVar57 >> 0x10);
    bVar23 = (byte)(uVar18 >> 0x18) | (byte)(uVar17 >> 0x18) |
             (byte)(uVar63 >> 0x18) | (byte)(uVar51 >> 0x18) |
             (byte)(uVar45 >> 0x18) | *(byte *)((long)puVar10 + 0x43) |
             (byte)(uVar69 >> 0x18) | (byte)(uVar57 >> 0x18);
    bVar24 = (byte)(uVar18 >> 0x20) | (byte)(uVar17 >> 0x20) |
             (byte)(uVar63 >> 0x20) | (byte)(uVar51 >> 0x20) |
             (byte)(uVar45 >> 0x20) | *(byte *)((long)puVar10 + 0x44) |
             (byte)(uVar69 >> 0x20) | (byte)(uVar57 >> 0x20);
    bVar25 = (byte)(uVar18 >> 0x28) | (byte)(uVar17 >> 0x28) |
             (byte)(uVar63 >> 0x28) | (byte)(uVar51 >> 0x28) |
             (byte)(uVar45 >> 0x28) | *(byte *)((long)puVar10 + 0x45) |
             (byte)(uVar69 >> 0x28) | (byte)(uVar57 >> 0x28);
    bVar26 = (byte)(uVar18 >> 0x30) | (byte)(uVar17 >> 0x30) |
             (byte)(uVar63 >> 0x30) | (byte)(uVar51 >> 0x30) |
             (byte)(uVar45 >> 0x30) | *(byte *)((long)puVar10 + 0x46) |
             (byte)(uVar69 >> 0x30) | (byte)(uVar57 >> 0x30);
    bVar27 = (byte)(uVar18 >> 0x38) | (byte)(uVar17 >> 0x38) |
             (byte)(uVar63 >> 0x38) | (byte)(uVar51 >> 0x38) |
             (byte)(uVar45 >> 0x38) | *(byte *)((long)puVar10 + 0x47) |
             (byte)(uVar69 >> 0x38) | (byte)(uVar57 >> 0x38);
    bVar28 = (byte)uVar41 | (byte)uVar42 | (byte)uVar66 | (byte)uVar54 |
             (byte)uVar48 | (byte)puVar10[9] | (byte)uVar72 | (byte)uVar60;
    bVar29 = (byte)(uVar41 >> 8) | (byte)(uVar42 >> 8) | (byte)(uVar66 >> 8) | (byte)(uVar54 >> 8) |
             (byte)(uVar48 >> 8) | *(byte *)((long)puVar10 + 0x49) |
             (byte)(uVar72 >> 8) | (byte)(uVar60 >> 8);
    bVar30 = (byte)(uVar41 >> 0x10) | (byte)(uVar42 >> 0x10) |
             (byte)(uVar66 >> 0x10) | (byte)(uVar54 >> 0x10) |
             (byte)(uVar48 >> 0x10) | *(byte *)((long)puVar10 + 0x4a) |
             (byte)(uVar72 >> 0x10) | (byte)(uVar60 >> 0x10);
    bVar31 = (byte)(uVar41 >> 0x18) | (byte)(uVar42 >> 0x18) |
             (byte)(uVar66 >> 0x18) | (byte)(uVar54 >> 0x18) |
             (byte)(uVar48 >> 0x18) | *(byte *)((long)puVar10 + 0x4b) |
             (byte)(uVar72 >> 0x18) | (byte)(uVar60 >> 0x18);
    bVar32 = (byte)(uVar41 >> 0x20) | (byte)(uVar42 >> 0x20) |
             (byte)(uVar66 >> 0x20) | (byte)(uVar54 >> 0x20) |
             (byte)(uVar48 >> 0x20) | *(byte *)((long)puVar10 + 0x4c) |
             (byte)(uVar72 >> 0x20) | (byte)(uVar60 >> 0x20);
    bVar33 = (byte)(uVar41 >> 0x28) | (byte)(uVar42 >> 0x28) |
             (byte)(uVar66 >> 0x28) | (byte)(uVar54 >> 0x28) |
             (byte)(uVar48 >> 0x28) | *(byte *)((long)puVar10 + 0x4d) |
             (byte)(uVar72 >> 0x28) | (byte)(uVar60 >> 0x28);
    bVar34 = (byte)(uVar41 >> 0x30) | (byte)(uVar42 >> 0x30) |
             (byte)(uVar66 >> 0x30) | (byte)(uVar54 >> 0x30) |
             (byte)(uVar48 >> 0x30) | *(byte *)((long)puVar10 + 0x4e) |
             (byte)(uVar72 >> 0x30) | (byte)(uVar60 >> 0x30);
    bVar35 = (byte)(uVar41 >> 0x38) | (byte)(uVar42 >> 0x38) |
             (byte)(uVar66 >> 0x38) | (byte)(uVar54 >> 0x38) |
             (byte)(uVar48 >> 0x38) | *(byte *)((long)puVar10 + 0x4f) |
             (byte)(uVar72 >> 0x38) | (byte)(uVar60 >> 0x38);
    auVar36[1] = bVar21;
    auVar36[0] = bVar20;
    auVar36[2] = bVar22;
    auVar36[3] = bVar23;
    auVar36[4] = bVar24;
    auVar36[5] = bVar25;
    auVar36[6] = bVar26;
    auVar36[7] = bVar27;
    auVar36[8] = bVar28;
    auVar36[9] = bVar29;
    auVar36[10] = bVar30;
    auVar36[0xb] = bVar31;
    auVar36[0xc] = bVar32;
    auVar36[0xd] = bVar33;
    auVar36[0xe] = bVar34;
    auVar36[0xf] = bVar35;
    auVar3[1] = bVar21;
    auVar3[0] = bVar20;
    auVar3[2] = bVar22;
    auVar3[3] = bVar23;
    auVar3[4] = bVar24;
    auVar3[5] = bVar25;
    auVar3[6] = bVar26;
    auVar3[7] = bVar27;
    auVar3[8] = bVar28;
    auVar3[9] = bVar29;
    auVar3[10] = bVar30;
    auVar3[0xb] = bVar31;
    auVar3[0xc] = bVar32;
    auVar3[0xd] = bVar33;
    auVar3[0xe] = bVar34;
    auVar3[0xf] = bVar35;
    auVar36 = NEON_ext(auVar36,auVar3,8,1);
    param_1 = param_1 + 0x10;
    puVar10 = puVar10 + 0x10;
    puVar15 = puVar15 + 0x10;
    uVar11 = uVar11 - 0x80;
    if ((CONCAT17(bVar27 | auVar36[7],
                  CONCAT16(bVar26 | auVar36[6],
                           CONCAT15(bVar25 | auVar36[5],
                                    CONCAT14(bVar24 | auVar36[4],
                                             CONCAT13(bVar23 | auVar36[3],
                                                      CONCAT12(bVar22 | auVar36[2],
                                                               CONCAT11(bVar21 | auVar36[1],
                                                                        bVar20 | auVar36[0]))))))) &
        0xff80ff80ff80ff80) != 0) {
      return 0;
    }
  }
  if (puVar1 + -1 < puVar13) {
    uVar11 = 0;
  }
  else {
    puVar19 = (ulong *)((long)puVar1 - 7);
    puVar2 = puVar15;
    if (puVar15 <= puVar19) {
      puVar2 = puVar19;
    }
    if ((long)puVar2 + uVar11 < 0x18) {
      uVar11 = 0;
      puVar15 = puVar13;
    }
    else {
      uVar17 = ((long)puVar2 + uVar11 >> 3) + 1;
      if (puVar15 <= puVar19) {
        puVar15 = puVar19;
      }
      uVar11 = ((long)puVar15 + uVar11 >> 3) + 1 >> 2;
      puVar13 = param_1 + uVar11 * 4;
      lVar16 = uVar11 << 2;
      bVar20 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar28 = 0;
      bVar30 = 0;
      bVar32 = 0;
      bVar34 = 0;
      bVar40 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar52 = 0;
      bVar21 = 0;
      bVar23 = 0;
      bVar25 = 0;
      bVar27 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar33 = 0;
      bVar35 = 0;
      bVar53 = 0;
      bVar55 = 0;
      bVar56 = 0;
      bVar58 = 0;
      bVar59 = 0;
      bVar61 = 0;
      bVar62 = 0;
      bVar64 = 0;
      do {
        uVar42 = puVar10[-1];
        uVar11 = puVar10[-2];
        uVar41 = puVar10[1];
        uVar18 = *puVar10;
        bVar20 = (byte)uVar11 | bVar20;
        bVar22 = (byte)(uVar11 >> 8) | bVar22;
        bVar24 = (byte)(uVar11 >> 0x10) | bVar24;
        bVar26 = (byte)(uVar11 >> 0x18) | bVar26;
        bVar28 = (byte)(uVar11 >> 0x20) | bVar28;
        bVar30 = (byte)(uVar11 >> 0x28) | bVar30;
        bVar32 = (byte)(uVar11 >> 0x30) | bVar32;
        bVar34 = (byte)(uVar11 >> 0x38) | bVar34;
        bVar40 = (byte)uVar42 | bVar40;
        bVar43 = (byte)(uVar42 >> 8) | bVar43;
        bVar44 = (byte)(uVar42 >> 0x10) | bVar44;
        bVar46 = (byte)(uVar42 >> 0x18) | bVar46;
        bVar47 = (byte)(uVar42 >> 0x20) | bVar47;
        bVar49 = (byte)(uVar42 >> 0x28) | bVar49;
        bVar50 = (byte)(uVar42 >> 0x30) | bVar50;
        bVar52 = (byte)(uVar42 >> 0x38) | bVar52;
        bVar21 = (byte)uVar18 | bVar21;
        bVar23 = (byte)(uVar18 >> 8) | bVar23;
        bVar25 = (byte)(uVar18 >> 0x10) | bVar25;
        bVar27 = (byte)(uVar18 >> 0x18) | bVar27;
        bVar29 = (byte)(uVar18 >> 0x20) | bVar29;
        bVar31 = (byte)(uVar18 >> 0x28) | bVar31;
        bVar33 = (byte)(uVar18 >> 0x30) | bVar33;
        bVar35 = (byte)(uVar18 >> 0x38) | bVar35;
        bVar53 = (byte)uVar41 | bVar53;
        bVar55 = (byte)(uVar41 >> 8) | bVar55;
        bVar56 = (byte)(uVar41 >> 0x10) | bVar56;
        bVar58 = (byte)(uVar41 >> 0x18) | bVar58;
        bVar59 = (byte)(uVar41 >> 0x20) | bVar59;
        bVar61 = (byte)(uVar41 >> 0x28) | bVar61;
        bVar62 = (byte)(uVar41 >> 0x30) | bVar62;
        bVar64 = (byte)(uVar41 >> 0x38) | bVar64;
        puVar10 = puVar10 + 4;
        lVar16 = lVar16 + -4;
      } while (lVar16 != 0);
      bVar21 = bVar21 | bVar20;
      bVar23 = bVar23 | bVar22;
      bVar25 = bVar25 | bVar24;
      bVar27 = bVar27 | bVar26;
      bVar29 = bVar29 | bVar28;
      bVar31 = bVar31 | bVar30;
      bVar33 = bVar33 | bVar32;
      bVar35 = bVar35 | bVar34;
      auVar8[1] = bVar23;
      auVar8[0] = bVar21;
      auVar8[2] = bVar25;
      auVar8[3] = bVar27;
      auVar8[4] = bVar29;
      auVar8[5] = bVar31;
      auVar8[6] = bVar33;
      auVar8[7] = bVar35;
      auVar8[8] = bVar53 | bVar40;
      auVar8[9] = bVar55 | bVar43;
      auVar8[10] = bVar56 | bVar44;
      auVar8[0xb] = bVar58 | bVar46;
      auVar8[0xc] = bVar59 | bVar47;
      auVar8[0xd] = bVar61 | bVar49;
      auVar8[0xe] = bVar62 | bVar50;
      auVar8[0xf] = bVar64 | bVar52;
      auVar9[1] = bVar23;
      auVar9[0] = bVar21;
      auVar9[2] = bVar25;
      auVar9[3] = bVar27;
      auVar9[4] = bVar29;
      auVar9[5] = bVar31;
      auVar9[6] = bVar33;
      auVar9[7] = bVar35;
      auVar9[8] = bVar53 | bVar40;
      auVar9[9] = bVar55 | bVar43;
      auVar9[10] = bVar56 | bVar44;
      auVar9[0xb] = bVar58 | bVar46;
      auVar9[0xc] = bVar59 | bVar47;
      auVar9[0xd] = bVar61 | bVar49;
      auVar9[0xe] = bVar62 | bVar50;
      auVar9[0xf] = bVar64 | bVar52;
      auVar36 = NEON_ext(auVar8,auVar9,8,1);
      uVar11 = CONCAT17(bVar35 | auVar36[7],
                        CONCAT16(bVar33 | auVar36[6],
                                 CONCAT15(bVar31 | auVar36[5],
                                          CONCAT14(bVar29 | auVar36[4],
                                                   CONCAT13(bVar27 | auVar36[3],
                                                            CONCAT12(bVar25 | auVar36[2],
                                                                     CONCAT11(bVar23 | auVar36[1],
                                                                              bVar21 | auVar36[0])))
                                                  ))));
      puVar15 = puVar13;
      if (uVar17 == (uVar17 & 0x3ffffffffffffffc)) goto LAB_10b3071bc;
    }
    do {
      puVar13 = puVar15 + 1;
      uVar11 = *puVar15 | uVar11;
      puVar15 = puVar13;
    } while (puVar13 <= puVar1 + -1);
  }
LAB_10b3071bc:
  if (puVar1 <= puVar13) goto LAB_10b307334;
  puVar15 = puVar1;
  if (puVar1 <= (ulong *)((long)puVar13 + 2U)) {
    puVar15 = (ulong *)((long)puVar13 + 2U);
  }
  uVar17 = (long)puVar15 + ~(ulong)puVar13;
  if (5 < uVar17) {
    uVar42 = (uVar17 >> 1) + 1;
    if (uVar17 < 0x1e) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar42 & 0xfffffffffffffff0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar20 = (byte)uVar11;
      bVar21 = (byte)(uVar11 >> 8);
      bVar22 = (byte)(uVar11 >> 0x10);
      bVar23 = (byte)(uVar11 >> 0x18);
      bVar24 = (byte)(uVar11 >> 0x20);
      bVar25 = (byte)(uVar11 >> 0x28);
      bVar26 = (byte)(uVar11 >> 0x30);
      bVar27 = (byte)(uVar11 >> 0x38);
      puVar15 = puVar13 + 2;
      uVar18 = 0;
      uVar41 = 0;
      uVar45 = 0;
      uVar48 = 0;
      uVar51 = 0;
      uVar54 = 0;
      uVar63 = 0;
      uVar66 = 0;
      uVar57 = 0;
      uVar60 = 0;
      uVar69 = 0;
      uVar72 = 0;
      uVar11 = uVar17;
      do {
        uVar75 = puVar15[-1];
        uVar74 = puVar15[-2];
        uVar77 = puVar15[1];
        uVar76 = *puVar15;
        uVar78 = (uint)uVar74 & 0xffff;
        uVar79 = (uint)uVar75 & 0xffff;
        uVar80 = (uint)uVar76 & 0xffff;
        uVar81 = (uint)uVar77 & 0xffff;
        bVar44 = (byte)uVar45 | (byte)(uVar75 >> 0x20);
        bVar46 = (byte)(uVar45 >> 8) | (byte)(uVar75 >> 0x28);
        uVar45 = (ulong)CONCAT11(bVar46,bVar44);
        bVar47 = (byte)uVar48 | (byte)(uVar75 >> 0x30);
        bVar49 = (byte)(uVar48 >> 8) | (byte)(uVar75 >> 0x38);
        uVar48 = (ulong)CONCAT11(bVar49,bVar47);
        bVar34 = (byte)uVar18 | (byte)uVar79;
        bVar35 = (byte)(uVar18 >> 8) | (byte)(uVar79 >> 8);
        uVar18 = (ulong)CONCAT11(bVar35,bVar34);
        bVar40 = (byte)uVar41 | (byte)(uVar75 >> 0x10);
        bVar43 = (byte)(uVar41 >> 8) | (byte)(uVar75 >> 0x18);
        uVar41 = (ulong)CONCAT11(bVar43,bVar40);
        bVar30 = bVar30 | (byte)(uVar74 >> 0x20);
        bVar31 = bVar31 | (byte)(uVar74 >> 0x28);
        bVar32 = bVar32 | (byte)(uVar74 >> 0x30);
        bVar33 = bVar33 | (byte)(uVar74 >> 0x38);
        bVar20 = bVar20 | (byte)uVar78;
        bVar21 = bVar21 | (byte)(uVar78 >> 8);
        bVar28 = bVar28 | (byte)(uVar74 >> 0x10);
        bVar29 = bVar29 | (byte)(uVar74 >> 0x18);
        bVar68 = (byte)uVar69 | (byte)(uVar77 >> 0x20);
        bVar70 = (byte)(uVar69 >> 8) | (byte)(uVar77 >> 0x28);
        uVar69 = (ulong)CONCAT11(bVar70,bVar68);
        bVar71 = (byte)uVar72 | (byte)(uVar77 >> 0x30);
        bVar73 = (byte)(uVar72 >> 8) | (byte)(uVar77 >> 0x38);
        uVar72 = (ulong)CONCAT11(bVar73,bVar71);
        bVar56 = (byte)uVar57 | (byte)uVar81;
        bVar58 = (byte)(uVar57 >> 8) | (byte)(uVar81 >> 8);
        uVar57 = (ulong)CONCAT11(bVar58,bVar56);
        bVar59 = (byte)uVar60 | (byte)(uVar77 >> 0x10);
        bVar61 = (byte)(uVar60 >> 8) | (byte)(uVar77 >> 0x18);
        uVar60 = (ulong)CONCAT11(bVar61,bVar59);
        bVar62 = (byte)uVar63 | (byte)(uVar76 >> 0x20);
        bVar64 = (byte)(uVar63 >> 8) | (byte)(uVar76 >> 0x28);
        uVar63 = (ulong)CONCAT11(bVar64,bVar62);
        bVar65 = (byte)uVar66 | (byte)(uVar76 >> 0x30);
        bVar67 = (byte)(uVar66 >> 8) | (byte)(uVar76 >> 0x38);
        uVar66 = (ulong)CONCAT11(bVar67,bVar65);
        bVar50 = (byte)uVar51 | (byte)uVar80;
        bVar52 = (byte)(uVar51 >> 8) | (byte)(uVar80 >> 8);
        uVar51 = (ulong)CONCAT11(bVar52,bVar50);
        bVar53 = (byte)uVar54 | (byte)(uVar76 >> 0x10);
        bVar55 = (byte)(uVar54 >> 8) | (byte)(uVar76 >> 0x18);
        uVar54 = (ulong)CONCAT11(bVar55,bVar53);
        puVar15 = puVar15 + 4;
        uVar11 = uVar11 - 0x10;
      } while (uVar11 != 0);
      bVar20 = bVar50 | bVar20 | bVar56 | bVar34 | bVar62 | bVar30 | bVar68 | bVar44;
      bVar21 = bVar52 | bVar21 | bVar58 | bVar35 | bVar64 | bVar31 | bVar70 | bVar46;
      bVar28 = bVar53 | bVar28 | bVar59 | bVar40 | bVar65 | bVar32 | bVar71 | bVar47;
      bVar29 = bVar55 | bVar29 | bVar61 | bVar43 | bVar67 | bVar33 | bVar73 | bVar49;
      auVar6[1] = bVar21;
      auVar6[0] = bVar20;
      auVar6[2] = bVar22;
      auVar6[3] = bVar23;
      auVar6[4] = bVar24;
      auVar6[5] = bVar25;
      auVar6[6] = bVar26;
      auVar6[7] = bVar27;
      auVar6[8] = bVar28;
      auVar6[9] = bVar29;
      auVar6._10_6_ = 0;
      auVar7[1] = bVar21;
      auVar7[0] = bVar20;
      auVar7[2] = bVar22;
      auVar7[3] = bVar23;
      auVar7[4] = bVar24;
      auVar7[5] = bVar25;
      auVar7[6] = bVar26;
      auVar7[7] = bVar27;
      auVar7[8] = bVar28;
      auVar7[9] = bVar29;
      auVar7._10_6_ = 0;
      auVar36 = NEON_ext(auVar6,auVar7,8,1);
      uVar11 = CONCAT17(bVar27 | auVar36[7],
                        CONCAT16(bVar26 | auVar36[6],
                                 CONCAT15(bVar25 | auVar36[5],
                                          CONCAT14(bVar24 | auVar36[4],
                                                   CONCAT13(bVar23 | auVar36[3],
                                                            CONCAT12(bVar22 | auVar36[2],
                                                                     CONCAT11(bVar21 | auVar36[1],
                                                                              bVar20 | auVar36[0])))
                                                  ))));
      if (uVar42 == uVar17) goto LAB_10b307334;
      if ((uVar42 & 0xc) == 0) {
        puVar13 = (ulong *)((long)puVar13 + uVar17 * 2);
        goto LAB_10b307324;
      }
    }
    uVar18 = uVar42 & 0xfffffffffffffffc;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar11;
    lVar16 = uVar17 - uVar18;
    puVar14 = (ushort *)((long)puVar13 + uVar17 * 2);
    do {
      uVar39 = *(undefined8 *)puVar14;
      uVar78 = (uint)uVar39 & 0xffff;
      bVar20 = bVar20 | (byte)((ulong)uVar39 >> 0x20);
      bVar21 = bVar21 | (byte)((ulong)uVar39 >> 0x28);
      bVar22 = bVar22 | (byte)((ulong)uVar39 >> 0x30);
      bVar23 = bVar23 | (byte)((ulong)uVar39 >> 0x38);
      auVar38[0] = auVar37[0] | (byte)uVar78;
      auVar38[1] = auVar37[1] | (byte)(uVar78 >> 8);
      auVar38[2] = auVar37[2];
      auVar38[3] = auVar37[3];
      auVar38[4] = auVar37[4];
      auVar38[5] = auVar37[5];
      auVar38[6] = auVar37[6];
      auVar38[7] = auVar37[7];
      auVar38[8] = auVar37[8] | (byte)((ulong)uVar39 >> 0x10);
      auVar38[9] = auVar37[9] | (byte)((ulong)uVar39 >> 0x18);
      auVar38[10] = auVar37[10];
      auVar38[0xb] = auVar37[0xb];
      auVar38[0xc] = auVar37[0xc];
      auVar38[0xd] = auVar37[0xd];
      auVar38[0xe] = auVar37[0xe];
      auVar38[0xf] = auVar37[0xf];
      lVar16 = lVar16 + 4;
      puVar14 = puVar14 + 4;
      auVar37 = auVar38;
    } while (lVar16 != 0);
    bVar20 = auVar38[0] | bVar20;
    bVar21 = auVar38[1] | bVar21;
    auVar4[1] = bVar21;
    auVar4[0] = bVar20;
    auVar4[2] = auVar38[2];
    auVar4[3] = auVar38[3];
    auVar4[4] = auVar38[4];
    auVar4[5] = auVar38[5];
    auVar4[6] = auVar38[6];
    auVar4[7] = auVar38[7];
    auVar4[8] = auVar38[8] | bVar22;
    auVar4[9] = auVar38[9] | bVar23;
    auVar4[10] = auVar38[10];
    auVar4[0xb] = auVar38[0xb];
    auVar4[0xc] = auVar38[0xc];
    auVar4[0xd] = auVar38[0xd];
    auVar4[0xe] = auVar38[0xe];
    auVar4[0xf] = auVar38[0xf];
    auVar5[1] = bVar21;
    auVar5[0] = bVar20;
    auVar5[2] = auVar38[2];
    auVar5[3] = auVar38[3];
    auVar5[4] = auVar38[4];
    auVar5[5] = auVar38[5];
    auVar5[6] = auVar38[6];
    auVar5[7] = auVar38[7];
    auVar5[8] = auVar38[8] | bVar22;
    auVar5[9] = auVar38[9] | bVar23;
    auVar5[10] = auVar38[10];
    auVar5[0xb] = auVar38[0xb];
    auVar5[0xc] = auVar38[0xc];
    auVar5[0xd] = auVar38[0xd];
    auVar5[0xe] = auVar38[0xe];
    auVar5[0xf] = auVar38[0xf];
    auVar36 = NEON_ext(auVar4,auVar5,8,1);
    uVar11 = CONCAT17(auVar38[7] | auVar36[7],
                      CONCAT16(auVar38[6] | auVar36[6],
                               CONCAT15(auVar38[5] | auVar36[5],
                                        CONCAT14(auVar38[4] | auVar36[4],
                                                 CONCAT13(auVar38[3] | auVar36[3],
                                                          CONCAT12(auVar38[2] | auVar36[2],
                                                                   CONCAT11(bVar21 | auVar36[1],
                                                                            bVar20 | auVar36[0])))))
                              ));
    puVar13 = (ulong *)((long)puVar13 + uVar18 * 2);
    if (uVar42 == uVar18) goto LAB_10b307334;
  }
LAB_10b307324:
  do {
    puVar15 = (ulong *)((long)puVar13 + 2);
    uVar11 = uVar11 | (ushort)*puVar13;
    puVar13 = puVar15;
  } while (puVar15 < puVar1);
LAB_10b307334:
  return (ulong)((uVar11 & 0xff80ff80ff80ff80) == 0);
}



/* Entry: 10b307048; end: 10b307573;  */

bool FUN_10b307048(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong *puVar10;
  ushort uVar11;
  ulong *puVar12;
  ushort *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  byte bVar40;
  byte bVar43;
  ulong uVar41;
  ulong uVar42;
  byte bVar44;
  byte bVar46;
  ulong uVar45;
  byte bVar47;
  byte bVar49;
  ulong uVar48;
  byte bVar50;
  byte bVar52;
  ulong uVar51;
  byte bVar53;
  byte bVar55;
  ulong uVar54;
  byte bVar56;
  byte bVar58;
  ulong uVar57;
  byte bVar59;
  byte bVar61;
  ulong uVar60;
  byte bVar62;
  byte bVar64;
  ulong uVar63;
  byte bVar65;
  byte bVar67;
  ulong uVar66;
  byte bVar68;
  byte bVar70;
  ulong uVar69;
  byte bVar71;
  byte bVar73;
  ulong uVar72;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  
  if (param_2 == 0) {
    return true;
  }
  puVar1 = (ulong *)((long)param_1 + param_2 * 2);
  if ((0 < param_2) && (((ulong)param_1 & 7) != 0)) {
    uVar11 = 0;
    puVar10 = param_1;
    puVar14 = param_1;
    do {
      puVar14 = (ulong *)((long)puVar14 + 2);
      param_1 = (ulong *)((long)puVar10 + 2);
      uVar11 = uVar11 | (ushort)*puVar10;
      if (((ulong)puVar14 & 7) == 0) break;
      puVar10 = param_1;
    } while (param_1 < puVar1);
    if ((uVar11 & 0xff80) != 0) {
      return false;
    }
  }
  puVar10 = param_1 + 2;
  puVar14 = param_1 + 1;
  uVar17 = ~(ulong)param_1;
  while (puVar12 = puVar10 + -2, puVar12 <= puVar1 + -0x10) {
    uVar42 = puVar10[7];
    uVar16 = puVar10[6];
    uVar41 = puVar10[-1];
    uVar18 = puVar10[-2];
    uVar48 = puVar10[1];
    uVar45 = *puVar10;
    uVar54 = puVar10[0xb];
    uVar51 = puVar10[10];
    uVar60 = puVar10[0xd];
    uVar57 = puVar10[0xc];
    uVar66 = puVar10[3];
    uVar63 = puVar10[2];
    uVar72 = puVar10[5];
    uVar69 = puVar10[4];
    bVar20 = (byte)uVar18 | (byte)uVar16 | (byte)uVar63 | (byte)uVar51 |
             (byte)uVar45 | (byte)puVar10[8] | (byte)uVar69 | (byte)uVar57;
    bVar21 = (byte)(uVar18 >> 8) | (byte)(uVar16 >> 8) | (byte)(uVar63 >> 8) | (byte)(uVar51 >> 8) |
             (byte)(uVar45 >> 8) | *(byte *)((long)puVar10 + 0x41) |
             (byte)(uVar69 >> 8) | (byte)(uVar57 >> 8);
    bVar22 = (byte)(uVar18 >> 0x10) | (byte)(uVar16 >> 0x10) |
             (byte)(uVar63 >> 0x10) | (byte)(uVar51 >> 0x10) |
             (byte)(uVar45 >> 0x10) | *(byte *)((long)puVar10 + 0x42) |
             (byte)(uVar69 >> 0x10) | (byte)(uVar57 >> 0x10);
    bVar23 = (byte)(uVar18 >> 0x18) | (byte)(uVar16 >> 0x18) |
             (byte)(uVar63 >> 0x18) | (byte)(uVar51 >> 0x18) |
             (byte)(uVar45 >> 0x18) | *(byte *)((long)puVar10 + 0x43) |
             (byte)(uVar69 >> 0x18) | (byte)(uVar57 >> 0x18);
    bVar24 = (byte)(uVar18 >> 0x20) | (byte)(uVar16 >> 0x20) |
             (byte)(uVar63 >> 0x20) | (byte)(uVar51 >> 0x20) |
             (byte)(uVar45 >> 0x20) | *(byte *)((long)puVar10 + 0x44) |
             (byte)(uVar69 >> 0x20) | (byte)(uVar57 >> 0x20);
    bVar25 = (byte)(uVar18 >> 0x28) | (byte)(uVar16 >> 0x28) |
             (byte)(uVar63 >> 0x28) | (byte)(uVar51 >> 0x28) |
             (byte)(uVar45 >> 0x28) | *(byte *)((long)puVar10 + 0x45) |
             (byte)(uVar69 >> 0x28) | (byte)(uVar57 >> 0x28);
    bVar26 = (byte)(uVar18 >> 0x30) | (byte)(uVar16 >> 0x30) |
             (byte)(uVar63 >> 0x30) | (byte)(uVar51 >> 0x30) |
             (byte)(uVar45 >> 0x30) | *(byte *)((long)puVar10 + 0x46) |
             (byte)(uVar69 >> 0x30) | (byte)(uVar57 >> 0x30);
    bVar27 = (byte)(uVar18 >> 0x38) | (byte)(uVar16 >> 0x38) |
             (byte)(uVar63 >> 0x38) | (byte)(uVar51 >> 0x38) |
             (byte)(uVar45 >> 0x38) | *(byte *)((long)puVar10 + 0x47) |
             (byte)(uVar69 >> 0x38) | (byte)(uVar57 >> 0x38);
    bVar28 = (byte)uVar41 | (byte)uVar42 | (byte)uVar66 | (byte)uVar54 |
             (byte)uVar48 | (byte)puVar10[9] | (byte)uVar72 | (byte)uVar60;
    bVar29 = (byte)(uVar41 >> 8) | (byte)(uVar42 >> 8) | (byte)(uVar66 >> 8) | (byte)(uVar54 >> 8) |
             (byte)(uVar48 >> 8) | *(byte *)((long)puVar10 + 0x49) |
             (byte)(uVar72 >> 8) | (byte)(uVar60 >> 8);
    bVar30 = (byte)(uVar41 >> 0x10) | (byte)(uVar42 >> 0x10) |
             (byte)(uVar66 >> 0x10) | (byte)(uVar54 >> 0x10) |
             (byte)(uVar48 >> 0x10) | *(byte *)((long)puVar10 + 0x4a) |
             (byte)(uVar72 >> 0x10) | (byte)(uVar60 >> 0x10);
    bVar31 = (byte)(uVar41 >> 0x18) | (byte)(uVar42 >> 0x18) |
             (byte)(uVar66 >> 0x18) | (byte)(uVar54 >> 0x18) |
             (byte)(uVar48 >> 0x18) | *(byte *)((long)puVar10 + 0x4b) |
             (byte)(uVar72 >> 0x18) | (byte)(uVar60 >> 0x18);
    bVar32 = (byte)(uVar41 >> 0x20) | (byte)(uVar42 >> 0x20) |
             (byte)(uVar66 >> 0x20) | (byte)(uVar54 >> 0x20) |
             (byte)(uVar48 >> 0x20) | *(byte *)((long)puVar10 + 0x4c) |
             (byte)(uVar72 >> 0x20) | (byte)(uVar60 >> 0x20);
    bVar33 = (byte)(uVar41 >> 0x28) | (byte)(uVar42 >> 0x28) |
             (byte)(uVar66 >> 0x28) | (byte)(uVar54 >> 0x28) |
             (byte)(uVar48 >> 0x28) | *(byte *)((long)puVar10 + 0x4d) |
             (byte)(uVar72 >> 0x28) | (byte)(uVar60 >> 0x28);
    bVar34 = (byte)(uVar41 >> 0x30) | (byte)(uVar42 >> 0x30) |
             (byte)(uVar66 >> 0x30) | (byte)(uVar54 >> 0x30) |
             (byte)(uVar48 >> 0x30) | *(byte *)((long)puVar10 + 0x4e) |
             (byte)(uVar72 >> 0x30) | (byte)(uVar60 >> 0x30);
    bVar35 = (byte)(uVar41 >> 0x38) | (byte)(uVar42 >> 0x38) |
             (byte)(uVar66 >> 0x38) | (byte)(uVar54 >> 0x38) |
             (byte)(uVar48 >> 0x38) | *(byte *)((long)puVar10 + 0x4f) |
             (byte)(uVar72 >> 0x38) | (byte)(uVar60 >> 0x38);
    auVar36[1] = bVar21;
    auVar36[0] = bVar20;
    auVar36[2] = bVar22;
    auVar36[3] = bVar23;
    auVar36[4] = bVar24;
    auVar36[5] = bVar25;
    auVar36[6] = bVar26;
    auVar36[7] = bVar27;
    auVar36[8] = bVar28;
    auVar36[9] = bVar29;
    auVar36[10] = bVar30;
    auVar36[0xb] = bVar31;
    auVar36[0xc] = bVar32;
    auVar36[0xd] = bVar33;
    auVar36[0xe] = bVar34;
    auVar36[0xf] = bVar35;
    auVar3[1] = bVar21;
    auVar3[0] = bVar20;
    auVar3[2] = bVar22;
    auVar3[3] = bVar23;
    auVar3[4] = bVar24;
    auVar3[5] = bVar25;
    auVar3[6] = bVar26;
    auVar3[7] = bVar27;
    auVar3[8] = bVar28;
    auVar3[9] = bVar29;
    auVar3[10] = bVar30;
    auVar3[0xb] = bVar31;
    auVar3[0xc] = bVar32;
    auVar3[0xd] = bVar33;
    auVar3[0xe] = bVar34;
    auVar3[0xf] = bVar35;
    auVar36 = NEON_ext(auVar36,auVar3,8,1);
    param_1 = param_1 + 0x10;
    puVar10 = puVar10 + 0x10;
    puVar14 = puVar14 + 0x10;
    uVar17 = uVar17 - 0x80;
    if ((CONCAT17(bVar27 | auVar36[7],
                  CONCAT16(bVar26 | auVar36[6],
                           CONCAT15(bVar25 | auVar36[5],
                                    CONCAT14(bVar24 | auVar36[4],
                                             CONCAT13(bVar23 | auVar36[3],
                                                      CONCAT12(bVar22 | auVar36[2],
                                                               CONCAT11(bVar21 | auVar36[1],
                                                                        bVar20 | auVar36[0]))))))) &
        0xff80ff80ff80ff80) != 0) {
      return false;
    }
  }
  if (puVar1 + -1 < puVar12) {
    uVar17 = 0;
  }
  else {
    puVar19 = (ulong *)((long)puVar1 - 7);
    puVar2 = puVar14;
    if (puVar14 <= puVar19) {
      puVar2 = puVar19;
    }
    if ((long)puVar2 + uVar17 < 0x18) {
      uVar17 = 0;
      puVar14 = puVar12;
    }
    else {
      uVar16 = ((long)puVar2 + uVar17 >> 3) + 1;
      if (puVar14 <= puVar19) {
        puVar14 = puVar19;
      }
      uVar17 = ((long)puVar14 + uVar17 >> 3) + 1 >> 2;
      puVar12 = param_1 + uVar17 * 4;
      lVar15 = uVar17 << 2;
      bVar20 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar28 = 0;
      bVar30 = 0;
      bVar32 = 0;
      bVar34 = 0;
      bVar40 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar52 = 0;
      bVar21 = 0;
      bVar23 = 0;
      bVar25 = 0;
      bVar27 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar33 = 0;
      bVar35 = 0;
      bVar53 = 0;
      bVar55 = 0;
      bVar56 = 0;
      bVar58 = 0;
      bVar59 = 0;
      bVar61 = 0;
      bVar62 = 0;
      bVar64 = 0;
      do {
        uVar42 = puVar10[-1];
        uVar17 = puVar10[-2];
        uVar41 = puVar10[1];
        uVar18 = *puVar10;
        bVar20 = (byte)uVar17 | bVar20;
        bVar22 = (byte)(uVar17 >> 8) | bVar22;
        bVar24 = (byte)(uVar17 >> 0x10) | bVar24;
        bVar26 = (byte)(uVar17 >> 0x18) | bVar26;
        bVar28 = (byte)(uVar17 >> 0x20) | bVar28;
        bVar30 = (byte)(uVar17 >> 0x28) | bVar30;
        bVar32 = (byte)(uVar17 >> 0x30) | bVar32;
        bVar34 = (byte)(uVar17 >> 0x38) | bVar34;
        bVar40 = (byte)uVar42 | bVar40;
        bVar43 = (byte)(uVar42 >> 8) | bVar43;
        bVar44 = (byte)(uVar42 >> 0x10) | bVar44;
        bVar46 = (byte)(uVar42 >> 0x18) | bVar46;
        bVar47 = (byte)(uVar42 >> 0x20) | bVar47;
        bVar49 = (byte)(uVar42 >> 0x28) | bVar49;
        bVar50 = (byte)(uVar42 >> 0x30) | bVar50;
        bVar52 = (byte)(uVar42 >> 0x38) | bVar52;
        bVar21 = (byte)uVar18 | bVar21;
        bVar23 = (byte)(uVar18 >> 8) | bVar23;
        bVar25 = (byte)(uVar18 >> 0x10) | bVar25;
        bVar27 = (byte)(uVar18 >> 0x18) | bVar27;
        bVar29 = (byte)(uVar18 >> 0x20) | bVar29;
        bVar31 = (byte)(uVar18 >> 0x28) | bVar31;
        bVar33 = (byte)(uVar18 >> 0x30) | bVar33;
        bVar35 = (byte)(uVar18 >> 0x38) | bVar35;
        bVar53 = (byte)uVar41 | bVar53;
        bVar55 = (byte)(uVar41 >> 8) | bVar55;
        bVar56 = (byte)(uVar41 >> 0x10) | bVar56;
        bVar58 = (byte)(uVar41 >> 0x18) | bVar58;
        bVar59 = (byte)(uVar41 >> 0x20) | bVar59;
        bVar61 = (byte)(uVar41 >> 0x28) | bVar61;
        bVar62 = (byte)(uVar41 >> 0x30) | bVar62;
        bVar64 = (byte)(uVar41 >> 0x38) | bVar64;
        puVar10 = puVar10 + 4;
        lVar15 = lVar15 + -4;
      } while (lVar15 != 0);
      bVar21 = bVar21 | bVar20;
      bVar23 = bVar23 | bVar22;
      bVar25 = bVar25 | bVar24;
      bVar27 = bVar27 | bVar26;
      bVar29 = bVar29 | bVar28;
      bVar31 = bVar31 | bVar30;
      bVar33 = bVar33 | bVar32;
      bVar35 = bVar35 | bVar34;
      auVar8[1] = bVar23;
      auVar8[0] = bVar21;
      auVar8[2] = bVar25;
      auVar8[3] = bVar27;
      auVar8[4] = bVar29;
      auVar8[5] = bVar31;
      auVar8[6] = bVar33;
      auVar8[7] = bVar35;
      auVar8[8] = bVar53 | bVar40;
      auVar8[9] = bVar55 | bVar43;
      auVar8[10] = bVar56 | bVar44;
      auVar8[0xb] = bVar58 | bVar46;
      auVar8[0xc] = bVar59 | bVar47;
      auVar8[0xd] = bVar61 | bVar49;
      auVar8[0xe] = bVar62 | bVar50;
      auVar8[0xf] = bVar64 | bVar52;
      auVar9[1] = bVar23;
      auVar9[0] = bVar21;
      auVar9[2] = bVar25;
      auVar9[3] = bVar27;
      auVar9[4] = bVar29;
      auVar9[5] = bVar31;
      auVar9[6] = bVar33;
      auVar9[7] = bVar35;
      auVar9[8] = bVar53 | bVar40;
      auVar9[9] = bVar55 | bVar43;
      auVar9[10] = bVar56 | bVar44;
      auVar9[0xb] = bVar58 | bVar46;
      auVar9[0xc] = bVar59 | bVar47;
      auVar9[0xd] = bVar61 | bVar49;
      auVar9[0xe] = bVar62 | bVar50;
      auVar9[0xf] = bVar64 | bVar52;
      auVar36 = NEON_ext(auVar8,auVar9,8,1);
      uVar17 = CONCAT17(bVar35 | auVar36[7],
                        CONCAT16(bVar33 | auVar36[6],
                                 CONCAT15(bVar31 | auVar36[5],
                                          CONCAT14(bVar29 | auVar36[4],
                                                   CONCAT13(bVar27 | auVar36[3],
                                                            CONCAT12(bVar25 | auVar36[2],
                                                                     CONCAT11(bVar23 | auVar36[1],
                                                                              bVar21 | auVar36[0])))
                                                  ))));
      puVar14 = puVar12;
      if (uVar16 == (uVar16 & 0x3ffffffffffffffc)) goto LAB_10b3071bc;
    }
    do {
      puVar12 = puVar14 + 1;
      uVar17 = *puVar14 | uVar17;
      puVar14 = puVar12;
    } while (puVar12 <= puVar1 + -1);
  }
LAB_10b3071bc:
  if (puVar1 <= puVar12) goto LAB_10b307334;
  puVar14 = puVar1;
  if (puVar1 <= (ulong *)((long)puVar12 + 2U)) {
    puVar14 = (ulong *)((long)puVar12 + 2U);
  }
  uVar16 = (long)puVar14 + ~(ulong)puVar12;
  if (5 < uVar16) {
    uVar42 = (uVar16 >> 1) + 1;
    if (uVar16 < 0x1e) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar42 & 0xfffffffffffffff0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar20 = (byte)uVar17;
      bVar21 = (byte)(uVar17 >> 8);
      bVar22 = (byte)(uVar17 >> 0x10);
      bVar23 = (byte)(uVar17 >> 0x18);
      bVar24 = (byte)(uVar17 >> 0x20);
      bVar25 = (byte)(uVar17 >> 0x28);
      bVar26 = (byte)(uVar17 >> 0x30);
      bVar27 = (byte)(uVar17 >> 0x38);
      puVar14 = puVar12 + 2;
      uVar18 = 0;
      uVar41 = 0;
      uVar45 = 0;
      uVar48 = 0;
      uVar51 = 0;
      uVar54 = 0;
      uVar63 = 0;
      uVar66 = 0;
      uVar57 = 0;
      uVar60 = 0;
      uVar69 = 0;
      uVar72 = 0;
      uVar17 = uVar16;
      do {
        uVar75 = puVar14[-1];
        uVar74 = puVar14[-2];
        uVar77 = puVar14[1];
        uVar76 = *puVar14;
        uVar78 = (uint)uVar74 & 0xffff;
        uVar79 = (uint)uVar75 & 0xffff;
        uVar80 = (uint)uVar76 & 0xffff;
        uVar81 = (uint)uVar77 & 0xffff;
        bVar44 = (byte)uVar45 | (byte)(uVar75 >> 0x20);
        bVar46 = (byte)(uVar45 >> 8) | (byte)(uVar75 >> 0x28);
        uVar45 = (ulong)CONCAT11(bVar46,bVar44);
        bVar47 = (byte)uVar48 | (byte)(uVar75 >> 0x30);
        bVar49 = (byte)(uVar48 >> 8) | (byte)(uVar75 >> 0x38);
        uVar48 = (ulong)CONCAT11(bVar49,bVar47);
        bVar34 = (byte)uVar18 | (byte)uVar79;
        bVar35 = (byte)(uVar18 >> 8) | (byte)(uVar79 >> 8);
        uVar18 = (ulong)CONCAT11(bVar35,bVar34);
        bVar40 = (byte)uVar41 | (byte)(uVar75 >> 0x10);
        bVar43 = (byte)(uVar41 >> 8) | (byte)(uVar75 >> 0x18);
        uVar41 = (ulong)CONCAT11(bVar43,bVar40);
        bVar30 = bVar30 | (byte)(uVar74 >> 0x20);
        bVar31 = bVar31 | (byte)(uVar74 >> 0x28);
        bVar32 = bVar32 | (byte)(uVar74 >> 0x30);
        bVar33 = bVar33 | (byte)(uVar74 >> 0x38);
        bVar20 = bVar20 | (byte)uVar78;
        bVar21 = bVar21 | (byte)(uVar78 >> 8);
        bVar28 = bVar28 | (byte)(uVar74 >> 0x10);
        bVar29 = bVar29 | (byte)(uVar74 >> 0x18);
        bVar68 = (byte)uVar69 | (byte)(uVar77 >> 0x20);
        bVar70 = (byte)(uVar69 >> 8) | (byte)(uVar77 >> 0x28);
        uVar69 = (ulong)CONCAT11(bVar70,bVar68);
        bVar71 = (byte)uVar72 | (byte)(uVar77 >> 0x30);
        bVar73 = (byte)(uVar72 >> 8) | (byte)(uVar77 >> 0x38);
        uVar72 = (ulong)CONCAT11(bVar73,bVar71);
        bVar56 = (byte)uVar57 | (byte)uVar81;
        bVar58 = (byte)(uVar57 >> 8) | (byte)(uVar81 >> 8);
        uVar57 = (ulong)CONCAT11(bVar58,bVar56);
        bVar59 = (byte)uVar60 | (byte)(uVar77 >> 0x10);
        bVar61 = (byte)(uVar60 >> 8) | (byte)(uVar77 >> 0x18);
        uVar60 = (ulong)CONCAT11(bVar61,bVar59);
        bVar62 = (byte)uVar63 | (byte)(uVar76 >> 0x20);
        bVar64 = (byte)(uVar63 >> 8) | (byte)(uVar76 >> 0x28);
        uVar63 = (ulong)CONCAT11(bVar64,bVar62);
        bVar65 = (byte)uVar66 | (byte)(uVar76 >> 0x30);
        bVar67 = (byte)(uVar66 >> 8) | (byte)(uVar76 >> 0x38);
        uVar66 = (ulong)CONCAT11(bVar67,bVar65);
        bVar50 = (byte)uVar51 | (byte)uVar80;
        bVar52 = (byte)(uVar51 >> 8) | (byte)(uVar80 >> 8);
        uVar51 = (ulong)CONCAT11(bVar52,bVar50);
        bVar53 = (byte)uVar54 | (byte)(uVar76 >> 0x10);
        bVar55 = (byte)(uVar54 >> 8) | (byte)(uVar76 >> 0x18);
        uVar54 = (ulong)CONCAT11(bVar55,bVar53);
        puVar14 = puVar14 + 4;
        uVar17 = uVar17 - 0x10;
      } while (uVar17 != 0);
      bVar20 = bVar50 | bVar20 | bVar56 | bVar34 | bVar62 | bVar30 | bVar68 | bVar44;
      bVar21 = bVar52 | bVar21 | bVar58 | bVar35 | bVar64 | bVar31 | bVar70 | bVar46;
      bVar28 = bVar53 | bVar28 | bVar59 | bVar40 | bVar65 | bVar32 | bVar71 | bVar47;
      bVar29 = bVar55 | bVar29 | bVar61 | bVar43 | bVar67 | bVar33 | bVar73 | bVar49;
      auVar6[1] = bVar21;
      auVar6[0] = bVar20;
      auVar6[2] = bVar22;
      auVar6[3] = bVar23;
      auVar6[4] = bVar24;
      auVar6[5] = bVar25;
      auVar6[6] = bVar26;
      auVar6[7] = bVar27;
      auVar6[8] = bVar28;
      auVar6[9] = bVar29;
      auVar6._10_6_ = 0;
      auVar7[1] = bVar21;
      auVar7[0] = bVar20;
      auVar7[2] = bVar22;
      auVar7[3] = bVar23;
      auVar7[4] = bVar24;
      auVar7[5] = bVar25;
      auVar7[6] = bVar26;
      auVar7[7] = bVar27;
      auVar7[8] = bVar28;
      auVar7[9] = bVar29;
      auVar7._10_6_ = 0;
      auVar36 = NEON_ext(auVar6,auVar7,8,1);
      uVar17 = CONCAT17(bVar27 | auVar36[7],
                        CONCAT16(bVar26 | auVar36[6],
                                 CONCAT15(bVar25 | auVar36[5],
                                          CONCAT14(bVar24 | auVar36[4],
                                                   CONCAT13(bVar23 | auVar36[3],
                                                            CONCAT12(bVar22 | auVar36[2],
                                                                     CONCAT11(bVar21 | auVar36[1],
                                                                              bVar20 | auVar36[0])))
                                                  ))));
      if (uVar42 == uVar16) goto LAB_10b307334;
      if ((uVar42 & 0xc) == 0) {
        puVar12 = (ulong *)((long)puVar12 + uVar16 * 2);
        goto LAB_10b307324;
      }
    }
    uVar18 = uVar42 & 0xfffffffffffffffc;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar17;
    lVar15 = uVar16 - uVar18;
    puVar13 = (ushort *)((long)puVar12 + uVar16 * 2);
    do {
      uVar39 = *(undefined8 *)puVar13;
      uVar78 = (uint)uVar39 & 0xffff;
      bVar20 = bVar20 | (byte)((ulong)uVar39 >> 0x20);
      bVar21 = bVar21 | (byte)((ulong)uVar39 >> 0x28);
      bVar22 = bVar22 | (byte)((ulong)uVar39 >> 0x30);
      bVar23 = bVar23 | (byte)((ulong)uVar39 >> 0x38);
      auVar38[0] = auVar37[0] | (byte)uVar78;
      auVar38[1] = auVar37[1] | (byte)(uVar78 >> 8);
      auVar38[2] = auVar37[2];
      auVar38[3] = auVar37[3];
      auVar38[4] = auVar37[4];
      auVar38[5] = auVar37[5];
      auVar38[6] = auVar37[6];
      auVar38[7] = auVar37[7];
      auVar38[8] = auVar37[8] | (byte)((ulong)uVar39 >> 0x10);
      auVar38[9] = auVar37[9] | (byte)((ulong)uVar39 >> 0x18);
      auVar38[10] = auVar37[10];
      auVar38[0xb] = auVar37[0xb];
      auVar38[0xc] = auVar37[0xc];
      auVar38[0xd] = auVar37[0xd];
      auVar38[0xe] = auVar37[0xe];
      auVar38[0xf] = auVar37[0xf];
      lVar15 = lVar15 + 4;
      puVar13 = puVar13 + 4;
      auVar37 = auVar38;
    } while (lVar15 != 0);
    bVar20 = auVar38[0] | bVar20;
    bVar21 = auVar38[1] | bVar21;
    auVar4[1] = bVar21;
    auVar4[0] = bVar20;
    auVar4[2] = auVar38[2];
    auVar4[3] = auVar38[3];
    auVar4[4] = auVar38[4];
    auVar4[5] = auVar38[5];
    auVar4[6] = auVar38[6];
    auVar4[7] = auVar38[7];
    auVar4[8] = auVar38[8] | bVar22;
    auVar4[9] = auVar38[9] | bVar23;
    auVar4[10] = auVar38[10];
    auVar4[0xb] = auVar38[0xb];
    auVar4[0xc] = auVar38[0xc];
    auVar4[0xd] = auVar38[0xd];
    auVar4[0xe] = auVar38[0xe];
    auVar4[0xf] = auVar38[0xf];
    auVar5[1] = bVar21;
    auVar5[0] = bVar20;
    auVar5[2] = auVar38[2];
    auVar5[3] = auVar38[3];
    auVar5[4] = auVar38[4];
    auVar5[5] = auVar38[5];
    auVar5[6] = auVar38[6];
    auVar5[7] = auVar38[7];
    auVar5[8] = auVar38[8] | bVar22;
    auVar5[9] = auVar38[9] | bVar23;
    auVar5[10] = auVar38[10];
    auVar5[0xb] = auVar38[0xb];
    auVar5[0xc] = auVar38[0xc];
    auVar5[0xd] = auVar38[0xd];
    auVar5[0xe] = auVar38[0xe];
    auVar5[0xf] = auVar38[0xf];
    auVar36 = NEON_ext(auVar4,auVar5,8,1);
    uVar17 = CONCAT17(auVar38[7] | auVar36[7],
                      CONCAT16(auVar38[6] | auVar36[6],
                               CONCAT15(auVar38[5] | auVar36[5],
                                        CONCAT14(auVar38[4] | auVar36[4],
                                                 CONCAT13(auVar38[3] | auVar36[3],
                                                          CONCAT12(auVar38[2] | auVar36[2],
                                                                   CONCAT11(bVar21 | auVar36[1],
                                                                            bVar20 | auVar36[0])))))
                              ));
    puVar12 = (ulong *)((long)puVar12 + uVar18 * 2);
    if (uVar42 == uVar18) goto LAB_10b307334;
  }
LAB_10b307324:
  do {
    puVar14 = (ulong *)((long)puVar12 + 2);
    uVar17 = uVar17 | (ushort)*puVar12;
    puVar12 = puVar14;
  } while (puVar14 < puVar1);
LAB_10b307334:
  return (uVar17 & 0xff80ff80ff80ff80) == 0;
}



/* Entry: 10b307574; end: 10b30759b;  */

void FUN_10b307574(void)

{
  _vsnprintf();
  return;
}



/* Entry: 10b30759c; end: 10b307f6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b30759c(ulong *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,ulong param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if ((long)param_2 < 0) goto LAB_10b307a60;
  if ((param_2 & 0x1fffffffffffffff) <= (param_2 - 1 & 0x1fffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x10b307a70);
    (*pcVar5)();
  }
  uVar10 = (param_2 - 1) * param_5;
  pcVar11 = (char *)((long)param_3 + 0x17);
  lVar15 = param_2 * 0x18;
  do {
    lVar13 = (long)*pcVar11;
    if (lVar13 < 0) {
      lVar13 = *(long *)(pcVar11 + -0xf);
    }
    uVar10 = lVar13 + uVar10;
    pcVar11 = pcVar11 + 0x18;
    lVar15 = lVar15 + -0x18;
  } while (lVar15 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar10 < 0x7ffffffffffffff7) {
    if (uVar10 < 0x17) {
      uVar14 = 0x16;
      uVar10 = (ulong)*(char *)((long)param_3 + 0x17);
      puVar6 = param_1;
      if ((long)uVar10 < 0) goto LAB_10b307728;
LAB_10b307688:
      uVar12 = uVar10 - uVar14;
      puVar16 = param_3;
      if (uVar14 <= uVar10 && uVar12 != 0) goto LAB_10b307694;
LAB_10b307734:
      if (uVar10 == 0) goto LAB_10b307768;
      _memmove(puVar6,puVar16,uVar10);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar10;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar10 & 0x7f;
      }
    }
    else {
      puVar7 = (ulong *)0x19;
      if ((uVar10 | 7) != 0x17) {
        puVar7 = (ulong *)((uVar10 | 7) + 1);
      }
      puVar6 = puVar7;
      __Znwm();
      *(char *)puVar6 = (char)*param_1;
      param_1[1] = 0;
      param_1[2] = (ulong)puVar7 | 0x8000000000000000;
      *param_1 = (ulong)puVar6;
      uVar14 = (long)puVar7 - 1;
      uVar10 = (ulong)*(char *)((long)param_3 + 0x17);
      if (-1 < (long)uVar10) goto LAB_10b307688;
LAB_10b307728:
      puVar16 = (undefined8 *)*param_3;
      uVar10 = param_3[1];
      uVar12 = uVar10 - uVar14;
      if (uVar10 < uVar14 || uVar12 == 0) goto LAB_10b307734;
LAB_10b307694:
      if (0x7ffffffffffffff6 - uVar14 < uVar12) goto LAB_10b307a5c;
      uVar12 = uVar10;
      if (uVar10 <= uVar14 * 2) {
        uVar12 = uVar14 * 2;
      }
      uVar12 = uVar12 | 7;
      if (0x3ffffffffffffff2 < uVar14) {
        uVar12 = 0x7ffffffffffffff6;
      }
      puVar7 = (ulong *)(uVar12 + 1);
      __Znwm();
      _memmove();
      if (uVar14 != 0x16) {
        __ZdlPv(puVar6);
      }
      param_1[1] = uVar10;
      param_1[2] = uVar12 + 1 | 0x8000000000000000;
      *param_1 = (ulong)puVar7;
      puVar6 = puVar7;
    }
    *(undefined1 *)((long)puVar6 + uVar10) = 0;
LAB_10b307768:
    if (param_2 != 1) {
      lVar15 = param_2 * 0x18 + -0x18;
      do {
        puVar16 = param_3 + 3;
        bVar3 = *(byte *)((long)param_1 + 0x17);
        uVar14 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar10 = param_1[1];
        if (-1 < (char)bVar3) {
          uVar14 = 0x16;
          uVar10 = (ulong)bVar3;
        }
        if (uVar14 - uVar10 < param_5) {
          uVar12 = uVar10 + param_5;
          if (0x7ffffffffffffff6 - uVar14 < uVar12 - uVar14) goto LAB_10b307a5c;
          puVar6 = (ulong *)*param_1;
          if (-1 < (char)bVar3) {
            puVar6 = param_1;
          }
          if (uVar14 < 0x3ffffffffffffff3) {
            uVar8 = uVar12;
            if (uVar12 <= uVar14 * 2) {
              uVar8 = uVar14 * 2;
            }
            uVar9 = 0x19;
            if ((uVar8 | 7) != 0x17) {
              uVar9 = (uVar8 | 7) + 1;
            }
            uVar1 = 0x17;
            if (0x16 < uVar8) {
              uVar1 = uVar9;
            }
            uVar8 = uVar1;
            __Znwm();
          }
          else {
            uVar1 = 0x7ffffffffffffff7;
            uVar8 = uVar1;
            __Znwm();
          }
          if (uVar10 != 0) {
            _memmove(uVar8,puVar6,uVar10);
          }
          _memmove(uVar8 + uVar10,param_4,param_5);
          if (uVar14 != 0x16) {
            __ZdlPv(puVar6);
          }
          param_1[1] = uVar12;
          param_1[2] = uVar1 | 0x8000000000000000;
          *param_1 = uVar8;
          *(undefined1 *)(uVar8 + uVar12) = 0;
LAB_10b307908:
          cVar4 = *(char *)((long)param_3 + 0x2f);
        }
        else {
          if (param_5 == 0) goto LAB_10b307908;
          puVar6 = (ulong *)*param_1;
          if (-1 < (char)bVar3) {
            puVar6 = param_1;
          }
          _memmove((long)puVar6 + uVar10,param_4,param_5);
          uVar10 = uVar10 + param_5;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            param_1[1] = uVar10;
            *(undefined1 *)((long)puVar6 + uVar10) = 0;
            cVar4 = *(char *)((long)param_3 + 0x2f);
          }
          else {
            *(byte *)((long)param_1 + 0x17) = (byte)uVar10 & 0x7f;
            *(undefined1 *)((long)puVar6 + uVar10) = 0;
            cVar4 = *(char *)((long)param_3 + 0x2f);
          }
        }
        uVar10 = (ulong)cVar4;
        puVar17 = puVar16;
        if ((long)uVar10 < 0) {
          uVar10 = param_3[4];
          puVar17 = (undefined8 *)*puVar16;
        }
        bVar3 = *(byte *)((long)param_1 + 0x17);
        uVar12 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar14 = param_1[1];
        if (-1 < (char)bVar3) {
          uVar12 = 0x16;
          uVar14 = (ulong)bVar3;
        }
        if (uVar12 - uVar14 < uVar10) {
          uVar1 = uVar14 + uVar10;
          if (0x7ffffffffffffff6 - uVar12 < uVar1 - uVar12) goto LAB_10b307a5c;
          puVar6 = (ulong *)*param_1;
          if (-1 < (char)bVar3) {
            puVar6 = param_1;
          }
          if (uVar12 < 0x3ffffffffffffff3) {
            uVar9 = uVar1;
            if (uVar1 <= uVar12 * 2) {
              uVar9 = uVar12 * 2;
            }
            uVar2 = 0x19;
            if ((uVar9 | 7) != 0x17) {
              uVar2 = (uVar9 | 7) + 1;
            }
            uVar8 = 0x17;
            if (0x16 < uVar9) {
              uVar8 = uVar2;
            }
            uVar9 = uVar8;
            __Znwm();
          }
          else {
            uVar8 = 0x7ffffffffffffff7;
            uVar9 = uVar8;
            __Znwm();
          }
          if (uVar14 != 0) {
            _memmove(uVar9,puVar6,uVar14);
          }
          _memmove(uVar9 + uVar14,puVar17,uVar10);
          if (uVar12 != 0x16) {
            __ZdlPv(puVar6);
          }
          param_1[1] = uVar1;
          param_1[2] = uVar8 | 0x8000000000000000;
          *param_1 = uVar9;
          *(undefined1 *)(uVar9 + uVar1) = 0;
        }
        else if (uVar10 != 0) {
          puVar6 = (ulong *)*param_1;
          if (-1 < (char)bVar3) {
            puVar6 = param_1;
          }
          _memmove((long)puVar6 + uVar14,puVar17,uVar10);
          uVar14 = uVar14 + uVar10;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            param_1[1] = uVar14;
            *(undefined1 *)((long)puVar6 + uVar14) = 0;
          }
          else {
            *(byte *)((long)param_1 + 0x17) = (byte)uVar14 & 0x7f;
            *(undefined1 *)((long)puVar6 + uVar14) = 0;
          }
        }
        lVar15 = lVar15 + -0x18;
        param_3 = puVar16;
      } while (lVar15 != 0);
    }
    return;
  }
LAB_10b307a5c:
  func_0x000104bd47d4();
LAB_10b307a60:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x10b307a64);
  (*pcVar5)();
}



/* Entry: 10b307f70; end: 10b307fc3;  */

long FUN_10b307f70(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      cVar1 = *(char *)(param_2 + lVar2);
      *(char *)(param_1 + lVar2) = cVar1;
      if (cVar1 == '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
    *(undefined1 *)(param_1 + param_3 + -1) = 0;
  }
  param_2 = param_2 + param_3;
  _strlen(param_2);
  return param_2 + param_3;
}



/* Entry: 10b307fc4; end: 10b308003;  */

void FUN_10b307fc4(undefined8 param_1,undefined8 param_2)

{
  _abort();
  func_0x000107c2cc98(param_1,param_2,&stack0xfffffffffffffff0);
  return;
}



/* Entry: 10b308004; end: 10b308093;  */

bool FUN_10b308004(long param_1,int param_2,int *param_3,uint *param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(ushort *)(param_1 + (long)*param_3 * 2);
  uVar3 = (uint)uVar2;
  if ((uVar2 & 0xf800) == 0xd800) {
    if ((((uVar2 >> 10 & 1) != 0) || (lVar1 = (long)*param_3 + 1, param_2 <= (int)lVar1)) ||
       (uVar3 = (uint)*(ushort *)(param_1 + lVar1 * 2), (uVar3 & 0xfc00) != 0xdc00)) {
      return false;
    }
    *param_4 = uVar3 + (uint)uVar2 * 0x400 + 0xfca02400;
    *param_3 = *param_3 + 1;
    uVar3 = *param_4;
  }
  else {
    *param_4 = (uint)uVar2;
  }
  return uVar3 >> 0xb < 0x1b || uVar3 - 0xe000 < 0x102000;
}



/* Entry: 10b308094; end: 10b3084db;  */

ulong FUN_10b308094(long *param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *extraout_x8;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  long *unaff_x23;
  long *plVar26;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 *puVar8;
  
  uVar9 = (uint)param_1;
  if (uVar9 < 0x80) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,param_1);
    return 1;
  }
  plVar15 = (long *)(long)*(char *)((long)param_2 + 0x17);
  bVar4 = (byte)param_1;
  plVar26 = param_2;
  if ((long)plVar15 < 0) {
    plVar15 = (long *)param_2[1];
    if (plVar15 < (long *)0xfffffffffffffffc) {
      unaff_x25 = (param_2[2] & 0x7fffffffffffffffU) - 1;
      uVar21 = (uint)((ulong)param_2[2] >> 0x3f);
      uVar19 = unaff_x25 - (long)plVar15;
      goto joined_r0x00010b30818c;
    }
    param_2[1] = (long)plVar15 + 4;
    ((char *)((long)plVar15 + 4))[*param_2] = '\0';
    if (0x7ff < uVar9) goto LAB_10b308284;
LAB_10b3081bc:
    plVar25 = param_2;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      plVar25 = (long *)*param_2;
    }
    *(byte *)((long)plVar25 + (long)plVar15) = (byte)(uVar9 >> 6) | 0xc0;
    cVar3 = *(char *)((long)param_2 + 0x17);
    plVar16 = plVar15;
joined_r0x00010b3081ec:
    plVar25 = param_2;
    if (cVar3 < '\0') {
      plVar25 = (long *)*param_2;
    }
    ((char *)((long)plVar25 + (long)plVar16))[1] = bVar4 & 0x3f | 0x80;
    unaff_x26 = (long *)((long)plVar16 + 2);
    plVar16 = (long *)(long)*(char *)((long)param_2 + 0x17);
    if ((long)plVar16 < 0) {
      plVar16 = (long *)param_2[1];
      if (plVar16 < unaff_x26) {
        uVar19 = (param_2[2] & 0x7fffffffffffffffU) - 1;
        uVar9 = (uint)((ulong)param_2[2] >> 0x3f);
        plVar25 = (long *)((long)unaff_x26 - (long)plVar16);
        if (plVar25 <= (long *)(uVar19 - (long)plVar16)) goto LAB_10b308408;
LAB_10b30836c:
        unaff_x23 = (long *)0x7ffffffffffffff7;
        if ((char *)(0x7ffffffffffffff7 - uVar19) <
            (char *)(((long)plVar25 - uVar19) + (long)plVar16)) goto LAB_10b3084d8;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          plVar26 = (long *)*param_2;
          if (0x3ffffffffffffff2 < uVar19) goto LAB_10b308450;
LAB_10b3083a0:
          plVar11 = unaff_x26;
          if (unaff_x26 <= (long *)(uVar19 * 2)) {
            plVar11 = (long *)(uVar19 * 2);
          }
          plVar13 = (long *)0x19;
          if (((ulong)plVar11 | 7) != 0x17) {
            plVar13 = (long *)(((ulong)plVar11 | 7) + 1);
          }
          unaff_x23 = (long *)0x17;
          if ((long *)0x16 < plVar11) {
            unaff_x23 = plVar13;
          }
          plVar11 = unaff_x23;
          __Znwm();
        }
        else {
          plVar26 = param_2;
          if (uVar19 < 0x3ffffffffffffff3) goto LAB_10b3083a0;
LAB_10b308450:
          plVar11 = unaff_x23;
          __Znwm();
        }
        if (plVar16 != (long *)0x0) {
          _memmove(plVar11,plVar26,plVar16);
        }
        if (uVar19 != 0x16) {
          __ZdlPv(plVar26);
        }
        param_2[1] = (long)plVar16;
        param_2[2] = (ulong)unaff_x23 | 0x8000000000000000;
        *param_2 = (long)plVar11;
LAB_10b30848c:
        plVar26 = (long *)*param_2;
        _bzero((char *)((long)plVar26 + (long)plVar16),plVar25);
        cVar3 = *(char *)((long)param_2 + 0x17);
        goto joined_r0x00010b3084a0;
      }
      plVar26 = (long *)*param_2;
    }
    else {
      if (unaff_x26 <= plVar16) {
        *(byte *)((long)param_2 + 0x17) = (byte)unaff_x26;
        goto LAB_10b3084b4;
      }
      uVar9 = 0;
      uVar19 = 0x16;
      plVar25 = (long *)((long)unaff_x26 - (long)plVar16);
      if ((long *)(0x16 - (long)plVar16) < plVar25) goto LAB_10b30836c;
LAB_10b308408:
      if (uVar9 != 0) goto LAB_10b30848c;
      _bzero((char *)((long)param_2 + (long)plVar16),plVar25);
      cVar3 = *(char *)((long)param_2 + 0x17);
      plVar26 = param_2;
joined_r0x00010b3084a0:
      if (-1 < cVar3) {
        *(byte *)((long)param_2 + 0x17) = (byte)unaff_x26 & 0x7f;
        param_2 = plVar26;
        goto LAB_10b3084b4;
      }
    }
    param_2[1] = (long)unaff_x26;
    param_2 = plVar26;
LAB_10b3084b4:
    *(char *)((long)param_2 + (long)unaff_x26) = '\0';
    return (long)unaff_x26 - (long)plVar15;
  }
  uVar21 = 0;
  unaff_x25 = 0x16;
  uVar19 = 0x16 - (long)plVar15;
joined_r0x00010b30818c:
  if (3 < uVar19) {
    if (uVar21 != 0) goto LAB_10b308260;
    pcVar1 = (char *)((long)param_2 + (long)plVar15);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    plVar25 = param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10b3081a8;
LAB_10b308274:
    param_2[1] = (long)plVar15 + 4;
    *(char *)((long)plVar25 + (long)((long)plVar15 + 4)) = '\0';
joined_r0x00010b308280:
    if (uVar9 < 0x800) goto LAB_10b3081bc;
LAB_10b308284:
    if (uVar9 >> 0x10 == 0) {
      plVar25 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        plVar25 = (long *)*param_2;
      }
      plVar16 = (long *)((long)plVar15 + 1);
      *(byte *)((long)plVar25 + (long)plVar15) = (byte)(uVar9 >> 0xc) | 0xe0;
      bVar5 = (byte)(uVar9 >> 6);
      cVar3 = *(char *)((long)param_2 + 0x17);
    }
    else {
      plVar25 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        plVar25 = (long *)*param_2;
      }
      *(byte *)((long)plVar25 + (long)plVar15) = (byte)(uVar9 >> 0x12) | 0xf0;
      plVar25 = param_2;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        plVar25 = (long *)*param_2;
      }
      plVar16 = (long *)((long)plVar15 + 2);
      ((char *)((long)plVar25 + (long)plVar15))[1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
      bVar5 = (byte)(uVar9 >> 6);
      cVar3 = *(char *)((long)param_2 + 0x17);
    }
    plVar25 = param_2;
    if (cVar3 < '\0') {
      plVar25 = (long *)*param_2;
    }
    *(byte *)((long)plVar25 + (long)plVar16) = bVar5 & 0x3f | 0x80;
    cVar3 = *(char *)((long)param_2 + 0x17);
    goto joined_r0x00010b3081ec;
  }
  plVar25 = (long *)0x7ffffffffffffff7;
  plVar16 = param_1;
  if ((char *)((long)plVar15 + (4 - unaff_x25)) <= (char *)(0x7ffffffffffffff7 - unaff_x25)) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      plVar16 = (long *)*param_2;
      if (0x3ffffffffffffff2 < unaff_x25) goto LAB_10b308224;
LAB_10b308128:
      pcVar1 = (char *)((long)plVar15 + 4U);
      if ((char *)((long)plVar15 + 4U) <= (char *)(unaff_x25 * 2)) {
        pcVar1 = (char *)(unaff_x25 * 2);
      }
      plVar11 = (long *)0x19;
      if (((ulong)pcVar1 | 7) != 0x17) {
        plVar11 = (long *)(((ulong)pcVar1 | 7) + 1);
      }
      plVar25 = (long *)0x17;
      if ((char *)0x16 < pcVar1) {
        plVar25 = plVar11;
      }
      unaff_x24 = plVar25;
      __Znwm();
    }
    else {
      plVar16 = param_2;
      if (unaff_x25 < 0x3ffffffffffffff3) goto LAB_10b308128;
LAB_10b308224:
      unaff_x24 = plVar25;
      __Znwm();
    }
    param_1 = unaff_x24;
    if (plVar15 != (long *)0x0) {
      plVar26 = plVar16;
      param_3 = plVar15;
      _memmove();
    }
    if (unaff_x25 != 0x16) {
      __ZdlPv();
      param_1 = plVar16;
    }
    param_2[1] = (long)plVar15;
    param_2[2] = (ulong)plVar25 | 0x8000000000000000;
    *param_2 = (long)unaff_x24;
LAB_10b308260:
    plVar25 = (long *)*param_2;
    pcVar1 = (char *)((long)plVar25 + (long)plVar15);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_10b308274;
LAB_10b3081a8:
    *(byte *)((long)param_2 + 0x17) = (byte)(char *)((long)plVar15 + 4) & 0x7f;
    *(char *)((long)plVar25 + (long)plVar15 + 4) = '\0';
    goto joined_r0x00010b308280;
  }
LAB_10b3084d8:
  pcVar27 = FUN_10b3084dc;
  func_0x000104c4f6b8();
  puVar6 = &stack0xffffffffffffffa0;
  puVar7 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar14 = param_3;
    plVar13 = plVar26;
    plVar11 = param_1;
    puVar8 = puVar6;
    *(long **)(puVar8 + -0x50) = unaff_x26;
    *(ulong *)(puVar8 + -0x48) = unaff_x25;
    *(long **)(puVar8 + -0x40) = unaff_x24;
    *(long **)(puVar8 + -0x38) = unaff_x23;
    *(long **)(puVar8 + -0x30) = plVar25;
    *(long **)(puVar8 + -0x28) = plVar16;
    *(long **)(puVar8 + -0x20) = plVar15;
    *(long **)(puVar8 + -0x18) = param_2;
    *(undefined1 **)(puVar8 + -0x10) = puVar7 + -0x10;
    *(code **)(puVar8 + -8) = pcVar27;
    param_1 = plVar11;
    plVar26 = plVar13;
    func_0x000107c2cc78();
    uVar9 = (uint)plVar13;
    if ((int)param_1 == 0) break;
    plVar15 = plVar14;
    if (*(char *)((long)plVar14 + 0x17) < '\0') {
      uVar19 = plVar14[2] & 0x7fffffffffffffff;
      unaff_x24 = (long *)(uVar19 - 1);
      if (plVar13 <= unaff_x24) {
        if (plVar14[2] < 0) {
          plVar15 = (long *)*plVar14;
        }
        goto LAB_10b308830;
      }
      if (0x7ffffffffffffff8 - uVar19 < (ulong)((long)plVar13 - (long)unaff_x24))
      goto LAB_10b308930;
      unaff_x23 = (long *)*plVar14;
      if (unaff_x24 < (long *)0x3ffffffffffffff3) goto LAB_10b308764;
      unaff_x25 = 0x7ffffffffffffff7;
      plVar26 = (long *)0xffffffffffffffee;
      __Znwm();
LAB_10b30885c:
      __ZdlPv(unaff_x23);
      plVar14[1] = 0;
      plVar14[2] = unaff_x25 | 0x8000000000000000;
      *plVar14 = (long)plVar26;
      plVar25 = plVar11;
      if (plVar13 < (long *)0x20) goto LAB_10b308898;
LAB_10b30887c:
      if ((plVar26 < (long *)((long)plVar11 + (long)plVar13)) &&
         (plVar25 = plVar11, plVar11 < (long *)((long)plVar26 + (long)plVar13 * 2)))
      goto LAB_10b308898;
      plVar22 = (long *)((ulong)plVar13 & 0xffffffffffffffe0);
      plVar15 = (long *)((long)plVar26 + (long)plVar22 * 2);
      plVar25 = plVar11 + 2;
      plVar16 = plVar26 + 4;
      plVar26 = plVar22;
      do {
        lVar28 = plVar25[-1];
        lVar12 = plVar25[-2];
        lVar30 = plVar25[1];
        lVar29 = *plVar25;
        plVar16[-3] = CONCAT26((short)(char)((ulong)lVar12 >> 0x38),
                               CONCAT24((short)(char)((ulong)lVar12 >> 0x30),
                                        CONCAT22((short)(char)((ulong)lVar12 >> 0x28),
                                                 (short)(char)((ulong)lVar12 >> 0x20))));
        plVar16[-4] = CONCAT26((short)(char)((ulong)lVar12 >> 0x18),
                               CONCAT24((short)(char)((ulong)lVar12 >> 0x10),
                                        CONCAT22((short)(char)((ulong)lVar12 >> 8),
                                                 (short)(char)lVar12)));
        plVar16[-1] = CONCAT26((short)(char)((ulong)lVar28 >> 0x38),
                               CONCAT24((short)(char)((ulong)lVar28 >> 0x30),
                                        CONCAT22((short)(char)((ulong)lVar28 >> 0x28),
                                                 (short)(char)((ulong)lVar28 >> 0x20))));
        plVar16[-2] = CONCAT26((short)(char)((ulong)lVar28 >> 0x18),
                               CONCAT24((short)(char)((ulong)lVar28 >> 0x10),
                                        CONCAT22((short)(char)((ulong)lVar28 >> 8),
                                                 (short)(char)lVar28)));
        plVar16[1] = CONCAT26((short)(char)((ulong)lVar29 >> 0x38),
                              CONCAT24((short)(char)((ulong)lVar29 >> 0x30),
                                       CONCAT22((short)(char)((ulong)lVar29 >> 0x28),
                                                (short)(char)((ulong)lVar29 >> 0x20))));
        *plVar16 = CONCAT26((short)(char)((ulong)lVar29 >> 0x18),
                            CONCAT24((short)(char)((ulong)lVar29 >> 0x10),
                                     CONCAT22((short)(char)((ulong)lVar29 >> 8),(short)(char)lVar29)
                                    ));
        plVar16[3] = CONCAT26((short)(char)((ulong)lVar30 >> 0x38),
                              CONCAT24((short)(char)((ulong)lVar30 >> 0x30),
                                       CONCAT22((short)(char)((ulong)lVar30 >> 0x28),
                                                (short)(char)((ulong)lVar30 >> 0x20))));
        plVar16[2] = CONCAT26((short)(char)((ulong)lVar30 >> 0x18),
                              CONCAT24((short)(char)((ulong)lVar30 >> 0x10),
                                       CONCAT22((short)(char)((ulong)lVar30 >> 8),
                                                (short)(char)lVar30)));
        plVar25 = plVar25 + 4;
        plVar26 = plVar26 + -4;
        plVar16 = plVar16 + 8;
      } while (plVar26 != (long *)0x0);
      plVar26 = plVar15;
      plVar25 = (long *)((long)plVar11 + (long)plVar22);
      if (plVar13 != plVar22) {
LAB_10b308898:
        do {
          plVar16 = (long *)((long)plVar25 + 1);
          plVar15 = (long *)((long)plVar26 + 2);
          *(short *)plVar26 = (short)(char)*plVar25;
          plVar26 = plVar15;
          plVar25 = plVar16;
        } while (plVar16 != (long *)((long)plVar11 + (long)plVar13));
      }
LAB_10b3088a8:
      *(undefined2 *)plVar15 = 0;
      if (*(char *)((long)plVar14 + 0x17) < '\0') {
        plVar14[1] = (long)plVar13;
      }
      else {
        *(byte *)((long)plVar14 + 0x17) = (byte)plVar13 & 0x7f;
      }
      return 1;
    }
    if (plVar13 < (long *)0xb) {
LAB_10b308830:
      plVar26 = plVar15;
      if (plVar13 == (long *)0x0) goto LAB_10b3088a8;
joined_r0x00010b308840:
      plVar25 = plVar11;
      if ((long *)0x1f < plVar13) goto LAB_10b30887c;
      goto LAB_10b308898;
    }
    plVar25 = plVar14;
    if (plVar13 + -0xfffffffffffffff < (long *)0x8000000000000012) {
LAB_10b308930:
      func_0x00010b30250c();
    }
    else {
      unaff_x24 = (long *)0xa;
      unaff_x23 = plVar14;
LAB_10b308764:
      plVar15 = plVar13;
      if (plVar13 <= (long *)((long)unaff_x24 * 2)) {
        plVar15 = (long *)((long)unaff_x24 * 2);
      }
      uVar19 = 0xd;
      if (((ulong)plVar15 | 3) != 0xb) {
        uVar19 = ((ulong)plVar15 | 3) + 1;
      }
      unaff_x25 = 0xb;
      if ((long *)0xa < plVar15) {
        unaff_x25 = uVar19;
      }
      if (-1 < (long)unaff_x25) {
        plVar26 = (long *)(unaff_x25 << 1);
        __Znwm();
        if (unaff_x24 != (long *)0xa) goto LAB_10b30885c;
        plVar14[1] = 0;
        plVar14[2] = unaff_x25 | 0x8000000000000000;
        *plVar14 = (long)plVar26;
        goto joined_r0x00010b308840;
      }
    }
    pcVar27 = FUN_10b308938;
    func_0x00010b2ed0ac();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puVar6 = puVar8 + -0x50;
    param_3 = extraout_x8;
    param_2 = plVar14;
    plVar15 = plVar13;
    plVar16 = plVar11;
    puVar7 = puVar8;
  }
  func_0x0001078a86d4(plVar14,plVar13,0);
  if (*(char *)((long)plVar14 + 0x17) < '\0') {
    plVar15 = (long *)*plVar14;
    if ((int)uVar9 < 1) goto LAB_10b3087cc;
LAB_10b308568:
    iVar18 = 0;
    plVar26 = (long *)0x0;
    uVar19 = 1;
    do {
      lVar12 = (long)(int)plVar26;
      plVar26 = (long *)(lVar12 + 1);
      bVar4 = *(byte *)((long)plVar11 + lVar12);
      uVar21 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        uVar10 = (uint)plVar26;
        if (uVar10 == uVar9) {
LAB_10b3085d0:
          plVar26 = plVar13;
          uVar21 = 0xffffffff;
        }
        else {
          if (uVar21 < 0xe0) {
            if (0xc1 < uVar21) {
              uVar23 = uVar21 & 0x1f;
LAB_10b30862c:
              uVar21 = (uint)plVar26;
              uVar10 = *(byte *)((long)plVar11 + (long)(int)uVar21) ^ 0x80;
              if (uVar10 < 0x40) {
                uVar21 = uVar21 + 1;
              }
              plVar26 = (long *)(ulong)uVar21;
              uVar21 = 0xffffffff;
              if (uVar10 < 0x40) {
                uVar21 = uVar10 | uVar23 << 6;
              }
              goto LAB_10b3086a0;
            }
          }
          else if (uVar21 < 0xf0) {
            uVar24 = (ulong)bVar4 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar24] >>
                 (ulong)(*(byte *)((long)plVar11 + (long)plVar26) >> 5) & 1) != 0) {
              uVar23 = *(byte *)((long)plVar11 + (long)plVar26) & 0x3f;
joined_r0x00010b308694:
              if (uVar10 + 1 != uVar9) {
                plVar26 = (long *)(ulong)(uVar10 + 1);
                uVar23 = uVar23 | (int)uVar24 << 6;
                goto LAB_10b30862c;
              }
              goto LAB_10b3085d0;
            }
          }
          else if (uVar21 < 0xf5) {
            pbVar2 = (byte *)((long)plVar11 + (long)plVar26);
            if (((uint)(int)(char)(&UNK_10e574690)[*pbVar2 >> 4] >> (ulong)(uVar21 - 0xf0 & 0x1f) &
                1) != 0) {
              plVar26 = (long *)(lVar12 + 2);
              uVar10 = (uint)plVar26;
              if (uVar10 == uVar9) goto LAB_10b3085d0;
              uVar23 = *(byte *)((long)plVar11 + (long)plVar26) ^ 0x80;
              if (0x3f < uVar23) {
                uVar21 = 0xffffffff;
                goto LAB_10b3086a0;
              }
              uVar24 = (ulong)(*pbVar2 & 0x3f | (uVar21 - 0xf0) * 0x40);
              goto joined_r0x00010b308694;
            }
          }
          uVar21 = 0xffffffff;
        }
      }
LAB_10b3086a0:
      uVar10 = (uint)(uVar21 >> 0xb < 0x1b || uVar21 - 0xe000 < 0x102000);
      if (uVar10 == 0) {
        uVar21 = 0xfffd;
      }
      iVar17 = iVar18;
      if (uVar21 >> 0x10 != 0) {
        *(short *)((long)plVar15 + (long)iVar18 * 2) = (short)(uVar21 >> 10) + -0x2840;
        iVar17 = iVar18 + 1;
        uVar21 = uVar21 & 0x3ff | 0xffffdc00;
      }
      uVar19 = (ulong)(uVar10 & (uint)uVar19);
      iVar18 = iVar17 + 1;
      *(short *)((long)plVar15 + (long)iVar17 * 2) = (short)uVar21;
    } while ((int)plVar26 < (int)uVar9);
    func_0x0001078a86d4(plVar14,(long)iVar18,0);
    uVar9 = (uint)*(char *)((long)plVar14 + 0x17);
    if (*(char *)((long)plVar14 + 0x17) < '\0') {
LAB_10b3087e8:
      uVar20 = plVar14[1] | 3;
      uVar24 = 0xc;
      if (uVar20 != 0xb) {
        uVar24 = uVar20;
      }
      if ((ulong)plVar14[1] < 0xb) {
        uVar24 = 10;
      }
      if (uVar24 == (plVar14[2] & 0x7fffffffffffffffU) - 1) {
        return uVar19;
      }
      goto LAB_10b308818;
    }
  }
  else {
    plVar15 = plVar14;
    if (0 < (int)uVar9) goto LAB_10b308568;
LAB_10b3087cc:
    uVar19 = 1;
    func_0x0001078a86d4(plVar14,0,0);
    uVar9 = (uint)*(char *)((long)plVar14 + 0x17);
    if ((int)uVar9 < 0) goto LAB_10b3087e8;
  }
  uVar10 = uVar9 & 0xff | 3;
  uVar21 = 0xc;
  if (uVar10 != 0xb) {
    uVar21 = uVar10;
  }
  if ((uVar9 & 0xff) < 0xb) {
    uVar21 = 10;
  }
  if (uVar21 == 10) {
    return uVar19;
  }
LAB_10b308818:
  func_0x000109892b50(plVar14);
  return uVar19;
}



/* Entry: 10b3084dc; end: 10b308937;  */

byte FUN_10b3084dc(short *param_1,ulong param_2,short *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  short *psVar9;
  uint uVar10;
  short *extraout_x8;
  ulong uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  short *unaff_x19;
  ulong unaff_x20;
  short *unaff_x21;
  byte bVar20;
  short *unaff_x22;
  short *psVar21;
  short *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  short *psVar15;
  
  while( true ) {
    psVar9 = param_3;
    uVar8 = param_2;
    psVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(short **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(short **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(short **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(short **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_1 = psVar5;
    param_2 = uVar8;
    func_0x000107c2cc78();
    uVar10 = (uint)uVar8;
    if ((int)param_1 == 0) break;
    psVar21 = psVar9;
    if (*(char *)((long)psVar9 + 0x17) < '\0') {
      uVar11 = *(ulong *)(psVar9 + 8) & 0x7fffffffffffffff;
      unaff_x24 = uVar11 - 1;
      if (uVar8 <= unaff_x24) {
        if ((long)*(ulong *)(psVar9 + 8) < 0) {
          psVar21 = *(short **)psVar9;
        }
        goto LAB_10b308830;
      }
      if (0x7ffffffffffffff8 - uVar11 < uVar8 - unaff_x24) goto LAB_10b308930;
      unaff_x23 = *(short **)psVar9;
      if (unaff_x24 < 0x3ffffffffffffff3) goto LAB_10b308764;
      unaff_x25 = 0x7ffffffffffffff7;
      psVar7 = (short *)0xffffffffffffffee;
      __Znwm();
LAB_10b30885c:
      __ZdlPv(unaff_x23);
      psVar9[4] = 0;
      psVar9[5] = 0;
      psVar9[6] = 0;
      psVar9[7] = 0;
      *(ulong *)(psVar9 + 8) = unaff_x25 | 0x8000000000000000;
      *(short **)psVar9 = psVar7;
      psVar15 = psVar5;
      if (uVar8 < 0x20) goto LAB_10b308898;
LAB_10b30887c:
      if ((psVar7 < (short *)((long)psVar5 + uVar8)) && (psVar15 = psVar5, psVar5 < psVar7 + uVar8))
      goto LAB_10b308898;
      uVar17 = uVar8 & 0xffffffffffffffe0;
      psVar21 = psVar7 + uVar17;
      psVar15 = psVar5 + 8;
      psVar7 = psVar7 + 0x10;
      uVar11 = uVar17;
      do {
        uVar23 = *(undefined8 *)(psVar15 + -4);
        uVar22 = *(undefined8 *)(psVar15 + -8);
        uVar25 = *(undefined8 *)(psVar15 + 4);
        uVar24 = *(undefined8 *)psVar15;
        *(ulong *)(psVar7 + -0xc) =
             CONCAT26((short)(char)((ulong)uVar22 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar22 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar22 >> 0x28),
                                        (short)(char)((ulong)uVar22 >> 0x20))));
        *(ulong *)(psVar7 + -0x10) =
             CONCAT26((short)(char)((ulong)uVar22 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar22 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar22 >> 8),(short)(char)uVar22)));
        *(ulong *)(psVar7 + -4) =
             CONCAT26((short)(char)((ulong)uVar23 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar23 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar23 >> 0x28),
                                        (short)(char)((ulong)uVar23 >> 0x20))));
        *(ulong *)(psVar7 + -8) =
             CONCAT26((short)(char)((ulong)uVar23 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar23 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar23 >> 8),(short)(char)uVar23)));
        *(ulong *)(psVar7 + 4) =
             CONCAT26((short)(char)((ulong)uVar24 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar24 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar24 >> 0x28),
                                        (short)(char)((ulong)uVar24 >> 0x20))));
        *(ulong *)psVar7 =
             CONCAT26((short)(char)((ulong)uVar24 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar24 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar24 >> 8),(short)(char)uVar24)));
        *(ulong *)(psVar7 + 0xc) =
             CONCAT26((short)(char)((ulong)uVar25 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar25 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar25 >> 0x28),
                                        (short)(char)((ulong)uVar25 >> 0x20))));
        *(ulong *)(psVar7 + 8) =
             CONCAT26((short)(char)((ulong)uVar25 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar25 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar25 >> 8),(short)(char)uVar25)));
        psVar15 = psVar15 + 0x10;
        uVar11 = uVar11 - 0x20;
        psVar7 = psVar7 + 0x20;
      } while (uVar11 != 0);
      psVar7 = psVar21;
      psVar15 = (short *)((long)psVar5 + uVar17);
      if (uVar8 != uVar17) {
LAB_10b308898:
        do {
          psVar14 = (short *)((long)psVar15 + 1);
          psVar21 = psVar7 + 1;
          *psVar7 = (short)(char)*psVar15;
          psVar7 = psVar21;
          psVar15 = psVar14;
        } while (psVar14 != (short *)((long)psVar5 + uVar8));
      }
LAB_10b3088a8:
      *psVar21 = 0;
      if (*(char *)((long)psVar9 + 0x17) < '\0') {
        *(ulong *)(psVar9 + 4) = uVar8;
      }
      else {
        *(byte *)((long)psVar9 + 0x17) = (byte)uVar8 & 0x7f;
      }
      return 1;
    }
    if (uVar8 < 0xb) {
LAB_10b308830:
      psVar7 = psVar21;
      if (uVar8 == 0) goto LAB_10b3088a8;
joined_r0x00010b308840:
      psVar15 = psVar5;
      if (0x1f < uVar8) goto LAB_10b30887c;
      goto LAB_10b308898;
    }
    unaff_x22 = psVar9;
    if (uVar8 + 0x8000000000000008 < 0x8000000000000012) {
LAB_10b308930:
      func_0x00010b30250c();
    }
    else {
      unaff_x24 = 10;
      unaff_x23 = psVar9;
LAB_10b308764:
      uVar11 = uVar8;
      if (uVar8 <= unaff_x24 * 2) {
        uVar11 = unaff_x24 * 2;
      }
      uVar17 = 0xd;
      if ((uVar11 | 3) != 0xb) {
        uVar17 = (uVar11 | 3) + 1;
      }
      unaff_x25 = 0xb;
      if (10 < uVar11) {
        unaff_x25 = uVar17;
      }
      if (-1 < (long)unaff_x25) {
        psVar7 = (short *)(unaff_x25 << 1);
        __Znwm();
        if (unaff_x24 != 10) goto LAB_10b30885c;
        psVar9[4] = 0;
        psVar9[5] = 0;
        psVar9[6] = 0;
        psVar9[7] = 0;
        *(ulong *)(psVar9 + 8) = unaff_x25 | 0x8000000000000000;
        *(short **)psVar9 = psVar7;
        goto joined_r0x00010b308840;
      }
    }
    unaff_x30 = FUN_10b308938;
    func_0x00010b2ed0ac();
    extraout_x8[0] = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    extraout_x8[4] = 0;
    extraout_x8[5] = 0;
    extraout_x8[6] = 0;
    extraout_x8[7] = 0;
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    extraout_x8[10] = 0;
    extraout_x8[0xb] = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = extraout_x8;
    unaff_x19 = psVar9;
    unaff_x20 = uVar8;
    unaff_x21 = psVar5;
  }
  func_0x0001078a86d4(psVar9,uVar8,0);
  if (*(char *)((long)psVar9 + 0x17) < '\0') {
    psVar21 = *(short **)psVar9;
    if (0 < (int)uVar10) goto LAB_10b308568;
LAB_10b3087cc:
    bVar20 = 1;
    func_0x0001078a86d4(psVar9,0,0);
    uVar10 = (uint)*(char *)((long)psVar9 + 0x17);
    if ((int)uVar10 < 0) {
LAB_10b3087e8:
      uVar11 = *(ulong *)(psVar9 + 4) | 3;
      uVar8 = 0xc;
      if (uVar11 != 0xb) {
        uVar8 = uVar11;
      }
      if (*(ulong *)(psVar9 + 4) < 0xb) {
        uVar8 = 10;
      }
      if (uVar8 == (*(ulong *)(psVar9 + 8) & 0x7fffffffffffffff) - 1) {
        return bVar20;
      }
      goto LAB_10b308818;
    }
  }
  else {
    psVar21 = psVar9;
    if ((int)uVar10 < 1) goto LAB_10b3087cc;
LAB_10b308568:
    iVar13 = 0;
    uVar11 = 0;
    bVar20 = 1;
    do {
      lVar6 = (long)(int)uVar11;
      uVar11 = lVar6 + 1;
      bVar2 = *(byte *)((long)psVar5 + lVar6);
      uVar16 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar18 = (uint)uVar11;
        if (uVar18 == uVar10) {
LAB_10b3085d0:
          uVar11 = uVar8;
          uVar16 = 0xffffffff;
        }
        else {
          if (uVar16 < 0xe0) {
            if (0xc1 < uVar16) {
              uVar19 = uVar16 & 0x1f;
LAB_10b30862c:
              uVar16 = (uint)uVar11;
              uVar18 = *(byte *)((long)psVar5 + (long)(int)uVar16) ^ 0x80;
              if (uVar18 < 0x40) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = (ulong)uVar16;
              uVar16 = 0xffffffff;
              if (uVar18 < 0x40) {
                uVar16 = uVar18 | uVar19 << 6;
              }
              goto LAB_10b3086a0;
            }
          }
          else if (uVar16 < 0xf0) {
            uVar17 = (ulong)bVar2 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar17] >> (ulong)(*(byte *)((long)psVar5 + uVar11) >> 5) &
                1) != 0) {
              uVar19 = *(byte *)((long)psVar5 + uVar11) & 0x3f;
joined_r0x00010b308694:
              if (uVar18 + 1 != uVar10) {
                uVar11 = (ulong)(uVar18 + 1);
                uVar19 = uVar19 | (int)uVar17 << 6;
                goto LAB_10b30862c;
              }
              goto LAB_10b3085d0;
            }
          }
          else if (uVar16 < 0xf5) {
            pbVar1 = (byte *)((long)psVar5 + uVar11);
            if (((uint)(int)(char)(&UNK_10e574690)[*pbVar1 >> 4] >> (ulong)(uVar16 - 0xf0 & 0x1f) &
                1) != 0) {
              uVar11 = lVar6 + 2;
              uVar18 = (uint)uVar11;
              if (uVar18 == uVar10) goto LAB_10b3085d0;
              uVar19 = *(byte *)((long)psVar5 + uVar11) ^ 0x80;
              if (0x3f < uVar19) {
                uVar16 = 0xffffffff;
                goto LAB_10b3086a0;
              }
              uVar17 = (ulong)(*pbVar1 & 0x3f | (uVar16 - 0xf0) * 0x40);
              goto joined_r0x00010b308694;
            }
          }
          uVar16 = 0xffffffff;
        }
      }
LAB_10b3086a0:
      bVar3 = uVar16 >> 0xb < 0x1b;
      bVar4 = uVar16 - 0xe000 < 0x102000;
      if (!bVar3 && !bVar4) {
        uVar16 = 0xfffd;
      }
      iVar12 = iVar13;
      if (uVar16 >> 0x10 != 0) {
        psVar21[iVar13] = (short)(uVar16 >> 10) + -0x2840;
        iVar12 = iVar13 + 1;
        uVar16 = uVar16 & 0x3ff | 0xffffdc00;
      }
      bVar20 = (bVar3 || bVar4) & bVar20;
      iVar13 = iVar12 + 1;
      psVar21[iVar12] = (short)uVar16;
    } while ((int)uVar11 < (int)uVar10);
    func_0x0001078a86d4(psVar9,(long)iVar13,0);
    uVar10 = (uint)*(char *)((long)psVar9 + 0x17);
    if (*(char *)((long)psVar9 + 0x17) < '\0') goto LAB_10b3087e8;
  }
  uVar18 = uVar10 & 0xff | 3;
  uVar16 = 0xc;
  if (uVar18 != 0xb) {
    uVar16 = uVar18;
  }
  if ((uVar10 & 0xff) < 0xb) {
    uVar16 = 10;
  }
  if (uVar16 == 10) {
    return bVar20;
  }
LAB_10b308818:
  func_0x000109892b50(psVar9);
  return bVar20;
}



/* Entry: 10b308938; end: 10b308947;  */

byte FUN_10b308938(short *param_1,short *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  uint uVar9;
  short *extraout_x8;
  short *psVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  short *unaff_x19;
  ulong unaff_x20;
  short *unaff_x21;
  byte bVar20;
  short *psVar21;
  short *unaff_x22;
  short *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  short *psVar15;
  
  while( true ) {
    psVar10 = param_1;
    uVar8 = param_3;
    psVar7 = param_2;
    psVar10[0] = 0;
    psVar10[1] = 0;
    psVar10[2] = 0;
    psVar10[3] = 0;
    psVar10[4] = 0;
    psVar10[5] = 0;
    psVar10[6] = 0;
    psVar10[7] = 0;
    psVar10[8] = 0;
    psVar10[9] = 0;
    psVar10[10] = 0;
    psVar10[0xb] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(short **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(short **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(short **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(short **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_2 = psVar7;
    param_3 = uVar8;
    func_0x000107c2cc78();
    uVar9 = (uint)uVar8;
    if ((int)param_2 == 0) break;
    psVar21 = psVar10;
    if (*(char *)((long)psVar10 + 0x17) < '\0') {
      uVar11 = *(ulong *)(psVar10 + 8) & 0x7fffffffffffffff;
      unaff_x24 = uVar11 - 1;
      if (uVar8 <= unaff_x24) {
        if ((long)*(ulong *)(psVar10 + 8) < 0) {
          psVar21 = *(short **)psVar10;
        }
        goto LAB_10b308830;
      }
      if (0x7ffffffffffffff8 - uVar11 < uVar8 - unaff_x24) goto LAB_10b308930;
      unaff_x23 = *(short **)psVar10;
      if (unaff_x24 < 0x3ffffffffffffff3) goto LAB_10b308764;
      unaff_x25 = 0x7ffffffffffffff7;
      psVar6 = (short *)0xffffffffffffffee;
      __Znwm();
LAB_10b30885c:
      __ZdlPv(unaff_x23);
      psVar10[4] = 0;
      psVar10[5] = 0;
      psVar10[6] = 0;
      psVar10[7] = 0;
      *(ulong *)(psVar10 + 8) = unaff_x25 | 0x8000000000000000;
      *(short **)psVar10 = psVar6;
      psVar15 = psVar7;
      if (uVar8 < 0x20) goto LAB_10b308898;
LAB_10b30887c:
      if ((psVar6 < (short *)((long)psVar7 + uVar8)) && (psVar15 = psVar7, psVar7 < psVar6 + uVar8))
      goto LAB_10b308898;
      uVar17 = uVar8 & 0xffffffffffffffe0;
      psVar21 = psVar6 + uVar17;
      psVar15 = psVar7 + 8;
      psVar6 = psVar6 + 0x10;
      uVar11 = uVar17;
      do {
        uVar23 = *(undefined8 *)(psVar15 + -4);
        uVar22 = *(undefined8 *)(psVar15 + -8);
        uVar25 = *(undefined8 *)(psVar15 + 4);
        uVar24 = *(undefined8 *)psVar15;
        *(ulong *)(psVar6 + -0xc) =
             CONCAT26((short)(char)((ulong)uVar22 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar22 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar22 >> 0x28),
                                        (short)(char)((ulong)uVar22 >> 0x20))));
        *(ulong *)(psVar6 + -0x10) =
             CONCAT26((short)(char)((ulong)uVar22 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar22 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar22 >> 8),(short)(char)uVar22)));
        *(ulong *)(psVar6 + -4) =
             CONCAT26((short)(char)((ulong)uVar23 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar23 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar23 >> 0x28),
                                        (short)(char)((ulong)uVar23 >> 0x20))));
        *(ulong *)(psVar6 + -8) =
             CONCAT26((short)(char)((ulong)uVar23 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar23 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar23 >> 8),(short)(char)uVar23)));
        *(ulong *)(psVar6 + 4) =
             CONCAT26((short)(char)((ulong)uVar24 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar24 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar24 >> 0x28),
                                        (short)(char)((ulong)uVar24 >> 0x20))));
        *(ulong *)psVar6 =
             CONCAT26((short)(char)((ulong)uVar24 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar24 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar24 >> 8),(short)(char)uVar24)));
        *(ulong *)(psVar6 + 0xc) =
             CONCAT26((short)(char)((ulong)uVar25 >> 0x38),
                      CONCAT24((short)(char)((ulong)uVar25 >> 0x30),
                               CONCAT22((short)(char)((ulong)uVar25 >> 0x28),
                                        (short)(char)((ulong)uVar25 >> 0x20))));
        *(ulong *)(psVar6 + 8) =
             CONCAT26((short)(char)((ulong)uVar25 >> 0x18),
                      CONCAT24((short)(char)((ulong)uVar25 >> 0x10),
                               CONCAT22((short)(char)((ulong)uVar25 >> 8),(short)(char)uVar25)));
        psVar15 = psVar15 + 0x10;
        uVar11 = uVar11 - 0x20;
        psVar6 = psVar6 + 0x20;
      } while (uVar11 != 0);
      psVar6 = psVar21;
      psVar15 = (short *)((long)psVar7 + uVar17);
      if (uVar8 != uVar17) {
LAB_10b308898:
        do {
          psVar14 = (short *)((long)psVar15 + 1);
          psVar21 = psVar6 + 1;
          *psVar6 = (short)(char)*psVar15;
          psVar6 = psVar21;
          psVar15 = psVar14;
        } while (psVar14 != (short *)((long)psVar7 + uVar8));
      }
LAB_10b3088a8:
      *psVar21 = 0;
      if (*(char *)((long)psVar10 + 0x17) < '\0') {
        *(ulong *)(psVar10 + 4) = uVar8;
      }
      else {
        *(byte *)((long)psVar10 + 0x17) = (byte)uVar8 & 0x7f;
      }
      return 1;
    }
    if (uVar8 < 0xb) {
LAB_10b308830:
      psVar6 = psVar21;
      if (uVar8 == 0) goto LAB_10b3088a8;
joined_r0x00010b308840:
      psVar15 = psVar7;
      if (0x1f < uVar8) goto LAB_10b30887c;
      goto LAB_10b308898;
    }
    unaff_x22 = psVar10;
    if (uVar8 + 0x8000000000000008 < 0x8000000000000012) {
LAB_10b308930:
      func_0x00010b30250c();
    }
    else {
      unaff_x24 = 10;
      unaff_x23 = psVar10;
LAB_10b308764:
      uVar11 = uVar8;
      if (uVar8 <= unaff_x24 * 2) {
        uVar11 = unaff_x24 * 2;
      }
      uVar17 = 0xd;
      if ((uVar11 | 3) != 0xb) {
        uVar17 = (uVar11 | 3) + 1;
      }
      unaff_x25 = 0xb;
      if (10 < uVar11) {
        unaff_x25 = uVar17;
      }
      if (-1 < (long)unaff_x25) {
        psVar6 = (short *)(unaff_x25 << 1);
        __Znwm();
        if (unaff_x24 != 10) goto LAB_10b30885c;
        psVar10[4] = 0;
        psVar10[5] = 0;
        psVar10[6] = 0;
        psVar10[7] = 0;
        *(ulong *)(psVar10 + 8) = unaff_x25 | 0x8000000000000000;
        *(short **)psVar10 = psVar6;
        goto joined_r0x00010b308840;
      }
    }
    unaff_x30 = FUN_10b308938;
    func_0x00010b2ed0ac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = extraout_x8;
    unaff_x19 = psVar10;
    unaff_x20 = uVar8;
    unaff_x21 = psVar7;
  }
  func_0x0001078a86d4(psVar10,uVar8,0);
  if (*(char *)((long)psVar10 + 0x17) < '\0') {
    psVar21 = *(short **)psVar10;
    if (0 < (int)uVar9) goto LAB_10b308568;
LAB_10b3087cc:
    bVar20 = 1;
    func_0x0001078a86d4(psVar10,0,0);
    uVar9 = (uint)*(char *)((long)psVar10 + 0x17);
    if ((int)uVar9 < 0) {
LAB_10b3087e8:
      uVar11 = *(ulong *)(psVar10 + 4) | 3;
      uVar8 = 0xc;
      if (uVar11 != 0xb) {
        uVar8 = uVar11;
      }
      if (*(ulong *)(psVar10 + 4) < 0xb) {
        uVar8 = 10;
      }
      if (uVar8 == (*(ulong *)(psVar10 + 8) & 0x7fffffffffffffff) - 1) {
        return bVar20;
      }
      goto LAB_10b308818;
    }
  }
  else {
    psVar21 = psVar10;
    if ((int)uVar9 < 1) goto LAB_10b3087cc;
LAB_10b308568:
    iVar13 = 0;
    uVar11 = 0;
    bVar20 = 1;
    do {
      lVar5 = (long)(int)uVar11;
      uVar11 = lVar5 + 1;
      bVar2 = *(byte *)((long)psVar7 + lVar5);
      uVar16 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar18 = (uint)uVar11;
        if (uVar18 == uVar9) {
LAB_10b3085d0:
          uVar11 = uVar8;
          uVar16 = 0xffffffff;
        }
        else {
          if (uVar16 < 0xe0) {
            if (0xc1 < uVar16) {
              uVar19 = uVar16 & 0x1f;
LAB_10b30862c:
              uVar16 = (uint)uVar11;
              uVar18 = *(byte *)((long)psVar7 + (long)(int)uVar16) ^ 0x80;
              if (uVar18 < 0x40) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = (ulong)uVar16;
              uVar16 = 0xffffffff;
              if (uVar18 < 0x40) {
                uVar16 = uVar18 | uVar19 << 6;
              }
              goto LAB_10b3086a0;
            }
          }
          else if (uVar16 < 0xf0) {
            uVar17 = (ulong)bVar2 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar17] >> (ulong)(*(byte *)((long)psVar7 + uVar11) >> 5) &
                1) != 0) {
              uVar19 = *(byte *)((long)psVar7 + uVar11) & 0x3f;
joined_r0x00010b308694:
              if (uVar18 + 1 != uVar9) {
                uVar11 = (ulong)(uVar18 + 1);
                uVar19 = uVar19 | (int)uVar17 << 6;
                goto LAB_10b30862c;
              }
              goto LAB_10b3085d0;
            }
          }
          else if (uVar16 < 0xf5) {
            pbVar1 = (byte *)((long)psVar7 + uVar11);
            if (((uint)(int)(char)(&UNK_10e574690)[*pbVar1 >> 4] >> (ulong)(uVar16 - 0xf0 & 0x1f) &
                1) != 0) {
              uVar11 = lVar5 + 2;
              uVar18 = (uint)uVar11;
              if (uVar18 == uVar9) goto LAB_10b3085d0;
              uVar19 = *(byte *)((long)psVar7 + uVar11) ^ 0x80;
              if (0x3f < uVar19) {
                uVar16 = 0xffffffff;
                goto LAB_10b3086a0;
              }
              uVar17 = (ulong)(*pbVar1 & 0x3f | (uVar16 - 0xf0) * 0x40);
              goto joined_r0x00010b308694;
            }
          }
          uVar16 = 0xffffffff;
        }
      }
LAB_10b3086a0:
      bVar3 = uVar16 >> 0xb < 0x1b;
      bVar4 = uVar16 - 0xe000 < 0x102000;
      if (!bVar3 && !bVar4) {
        uVar16 = 0xfffd;
      }
      iVar12 = iVar13;
      if (uVar16 >> 0x10 != 0) {
        psVar21[iVar13] = (short)(uVar16 >> 10) + -0x2840;
        iVar12 = iVar13 + 1;
        uVar16 = uVar16 & 0x3ff | 0xffffdc00;
      }
      bVar20 = (bVar3 || bVar4) & bVar20;
      iVar13 = iVar12 + 1;
      psVar21[iVar12] = (short)uVar16;
    } while ((int)uVar11 < (int)uVar9);
    func_0x0001078a86d4(psVar10,(long)iVar13,0);
    uVar9 = (uint)*(char *)((long)psVar10 + 0x17);
    if (*(char *)((long)psVar10 + 0x17) < '\0') goto LAB_10b3087e8;
  }
  uVar18 = uVar9 & 0xff | 3;
  uVar16 = 0xc;
  if (uVar18 != 0xb) {
    uVar16 = uVar18;
  }
  if ((uVar9 & 0xff) < 0xb) {
    uVar16 = 10;
  }
  if (uVar16 == 10) {
    return bVar20;
  }
LAB_10b308818:
  func_0x000109892b50(psVar10);
  return bVar20;
}



/* Entry: 10b308948; end: 10b309097;  */

ulong FUN_10b308948(ulong *param_1,ulong param_2,ulong *param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *extraout_x8;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  byte bVar15;
  ulong *puVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong *unaff_x19;
  int iVar22;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong *puVar23;
  ulong unaff_x23;
  ulong *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  do {
    puVar9 = param_3;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar23 = param_1;
    uVar13 = param_2;
    FUN_10b307048();
    bVar15 = *(byte *)((long)puVar9 + 0x17);
    uVar10 = (ulong)bVar15;
    iVar22 = (int)param_2;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    if ((int)puVar23 == 0) {
      unaff_x27 = param_2 * 3;
      if ((char)bVar15 < '\0') {
        uVar10 = puVar9[1];
        if (uVar10 < unaff_x27) {
          unaff_x28 = (puVar9[2] & 0x7fffffffffffffff) - 1;
          uVar20 = (uint)(puVar9[2] >> 0x3f);
          unaff_x23 = unaff_x27 - uVar10;
          unaff_x22 = uVar10;
          if (unaff_x28 - uVar10 < unaff_x23) goto LAB_10b3089e0;
LAB_10b308af4:
          if (uVar20 != 0) goto LAB_10b308ecc;
          puVar23 = (ulong *)((long)puVar9 + uVar10);
          uVar13 = unaff_x23;
          _bzero();
          cVar4 = *(char *)((long)puVar9 + 0x17);
          unaff_x24 = puVar9;
          goto joined_r0x00010b308b0c;
        }
        unaff_x24 = (ulong *)*puVar9;
        puVar9[1] = unaff_x27;
        *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
        if (-1 < *(char *)((long)puVar9 + 0x17)) goto LAB_10b308cd4;
LAB_10b308b28:
        puVar12 = (ulong *)*puVar9;
        if (1 < iVar22) goto LAB_10b308cdc;
LAB_10b308b34:
        iVar19 = 0;
        iVar11 = 0;
        unaff_x25 = 1;
      }
      else {
        if (uVar10 < unaff_x27) {
          uVar20 = 0;
          unaff_x28 = 0x16;
          unaff_x23 = unaff_x27 - uVar10;
          unaff_x22 = uVar10;
          if (unaff_x23 <= 0x16 - uVar10) goto LAB_10b308af4;
LAB_10b3089e0:
          unaff_x24 = (ulong *)0x7ffffffffffffff7;
          if (0x7ffffffffffffff7 - unaff_x28 < (unaff_x23 - unaff_x28) + unaff_x22)
          goto LAB_10b309094;
          if ((char)bVar15 < '\0') {
            puVar23 = (ulong *)*puVar9;
            if (unaff_x28 < 0x3ffffffffffffff3) goto LAB_10b308a14;
LAB_10b308e90:
            puVar12 = unaff_x24;
            __Znwm();
          }
          else {
            puVar23 = puVar9;
            if (0x3ffffffffffffff2 < unaff_x28) goto LAB_10b308e90;
LAB_10b308a14:
            uVar13 = unaff_x27;
            if (unaff_x27 <= unaff_x28 * 2) {
              uVar13 = unaff_x28 * 2;
            }
            puVar12 = (ulong *)0x19;
            if ((uVar13 | 7) != 0x17) {
              puVar12 = (ulong *)((uVar13 | 7) + 1);
            }
            unaff_x24 = (ulong *)0x17;
            if (0x16 < uVar13) {
              unaff_x24 = puVar12;
            }
            puVar12 = unaff_x24;
            __Znwm();
          }
          if (unaff_x22 != 0) {
            _memmove(puVar12,puVar23,unaff_x22);
          }
          if (unaff_x28 != 0x16) {
            __ZdlPv(puVar23);
          }
          puVar9[1] = unaff_x22;
          puVar9[2] = (ulong)unaff_x24 | 0x8000000000000000;
          *puVar9 = (ulong)puVar12;
          uVar10 = unaff_x22;
LAB_10b308ecc:
          unaff_x24 = (ulong *)*puVar9;
          puVar23 = (ulong *)((long)unaff_x24 + uVar10);
          uVar13 = unaff_x23;
          _bzero();
          cVar4 = *(char *)((long)puVar9 + 0x17);
joined_r0x00010b308b0c:
          if (cVar4 < '\0') {
            puVar9[1] = unaff_x27;
            *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
            cVar4 = *(char *)((long)puVar9 + 0x17);
          }
          else {
            *(byte *)((long)puVar9 + 0x17) = (byte)unaff_x27 & 0x7f;
            *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
            cVar4 = *(char *)((long)puVar9 + 0x17);
          }
        }
        else {
          *(byte *)((long)puVar9 + 0x17) = (byte)unaff_x27;
          *(undefined1 *)((long)puVar9 + unaff_x27) = 0;
          cVar4 = *(char *)((long)puVar9 + 0x17);
        }
        if (cVar4 < '\0') goto LAB_10b308b28;
LAB_10b308cd4:
        puVar12 = puVar9;
        if (iVar22 < 2) goto LAB_10b308b34;
LAB_10b308cdc:
        iVar11 = 0;
        unaff_x25 = 1;
        iVar18 = 0;
        do {
          while( true ) {
            puVar1 = (ushort *)((long)param_1 + (long)iVar11 * 2);
            uVar3 = *puVar1;
            uVar20 = (uint)uVar3;
            if (((uVar3 & 0xfc00) != 0xd800) ||
               (uVar21 = (uint)puVar1[1], (uVar21 & 0xfc00) != 0xdc00)) break;
            iVar19 = uVar21 + (uint)uVar3 * 0x400;
            if (iVar19 + 0xfc9f4400U < 0x102000) {
              uVar20 = iVar19 + 0xfca02400;
              iVar11 = iVar11 + 2;
              *(byte *)((long)puVar12 + (long)iVar18) = (byte)(uVar20 >> 0x12) | 0xf0;
              uVar21 = uVar20 >> 0xc & 0x3f | 0x80;
              uVar13 = (ulong)uVar21;
              ((byte *)((long)puVar12 + (long)iVar18))[1] = (byte)uVar21;
              iVar18 = iVar18 + 2;
            }
            else {
              iVar11 = iVar11 + 2;
LAB_10b308dcc:
              unaff_x25 = 0;
              uVar20 = 0xfffd;
LAB_10b308dd0:
              *(byte *)((long)puVar12 + (long)iVar18) = (byte)(uVar20 >> 0xc) | 0xe0;
              iVar18 = iVar18 + 1;
            }
            uVar21 = uVar20 >> 6 & 0x3f | 0xffffff80;
LAB_10b308dec:
            puVar23 = (ulong *)(ulong)uVar21;
            *(char *)((long)puVar12 + (long)iVar18) = (char)uVar21;
            iVar19 = iVar18 + 2;
            *(byte *)((long)puVar12 + (long)(iVar18 + 1)) = (byte)uVar20 & 0x3f | 0x80;
            iVar18 = iVar19;
            if (iVar22 + -1 <= iVar11) goto LAB_10b308b40;
          }
          if (((uVar20 & 0xf800) == 0xd800) ||
             (puVar23 = (ulong *)(ulong)(uVar20 - 0xe000),
             0x1a < uVar3 >> 0xb && 0x101fff < uVar20 - 0xe000)) {
            iVar11 = iVar11 + 1;
            goto LAB_10b308dcc;
          }
          iVar11 = iVar11 + 1;
          if (0x7f < uVar20) {
            if (0x7ff < uVar20) goto LAB_10b308dd0;
            uVar21 = uVar3 >> 6 | 0xffffffc0;
            goto LAB_10b308dec;
          }
          iVar19 = iVar18 + 1;
          *(char *)((long)puVar12 + (long)iVar18) = (char)uVar3;
          iVar18 = iVar19;
        } while (iVar11 < iVar22 + -1);
      }
LAB_10b308b40:
      if (iVar11 < iVar22) {
        uVar3 = *(ushort *)((long)param_1 + (long)iVar11 * 2);
        uVar10 = (ulong)uVar3;
        uVar20 = (uint)uVar3;
        if (((uVar3 & 0xf800) == 0xd800) || ((0x1a < uVar3 >> 0xb && (0x101fff < uVar3 - 0xe000))))
        {
          unaff_x25 = 0;
          uVar10 = 0xfffd;
LAB_10b308b84:
          *(byte *)((long)puVar12 + (long)iVar19) = (byte)(uVar10 >> 0xc) | 0xe0;
          iVar19 = iVar19 + 1;
          uVar20 = (uint)uVar10;
          bVar15 = (byte)(uVar20 >> 6) & 0x3f | 0x80;
LAB_10b308ba0:
          *(byte *)((long)puVar12 + (long)iVar19) = bVar15;
          iVar19 = iVar19 + 1;
          bVar15 = (byte)uVar20 & 0x3f | 0x80;
        }
        else {
          if (0x7f < uVar3) {
            if (0x7ff < uVar20) goto LAB_10b308b84;
            bVar15 = (byte)(uVar3 >> 6) | 0xc0;
            goto LAB_10b308ba0;
          }
          bVar15 = (byte)uVar3;
        }
        *(byte *)((long)puVar12 + (long)iVar19) = bVar15;
        iVar19 = iVar19 + 1;
      }
      puVar12 = (ulong *)(long)iVar19;
      unaff_x21 = (ulong *)(long)*(char *)((long)puVar9 + 0x17);
      if ((long)unaff_x21 < 0) {
        unaff_x21 = (ulong *)puVar9[1];
        unaff_x20 = (long)puVar12 - (long)unaff_x21;
        if (puVar12 < unaff_x21 || unaff_x20 == 0) {
          puVar23 = (ulong *)*puVar9;
          puVar9[1] = (ulong)puVar12;
          goto LAB_10b308e5c;
        }
        if (unaff_x20 == 0) goto LAB_10b308e60;
        unaff_x26 = (puVar9[2] & 0x7fffffffffffffff) - 1;
        uVar20 = (uint)(puVar9[2] >> 0x3f);
        if (unaff_x26 - (long)unaff_x21 < unaff_x20) goto LAB_10b308bf0;
LAB_10b308c90:
        if (uVar20 != 0) goto LAB_10b30906c;
        _bzero((undefined1 *)((long)puVar9 + (long)unaff_x21),unaff_x20);
        puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
        cVar4 = *(char *)((long)puVar9 + 0x17);
        puVar23 = puVar9;
      }
      else {
        unaff_x20 = (long)puVar12 - (long)unaff_x21;
        if (puVar12 < unaff_x21 || unaff_x20 == 0) {
          *(char *)((long)puVar9 + 0x17) = (char)iVar19;
          puVar23 = puVar9;
LAB_10b308e5c:
          *(undefined1 *)((long)puVar23 + (long)puVar12) = 0;
          goto LAB_10b308e60;
        }
        if (unaff_x20 == 0) goto LAB_10b308e60;
        uVar20 = 0;
        unaff_x26 = 0x16;
        if (unaff_x20 <= 0x16U - (long)unaff_x21) goto LAB_10b308c90;
LAB_10b308bf0:
        unaff_x22 = 0x7ffffffffffffff7;
        if ((undefined1 *)(0x7ffffffffffffff7 - unaff_x26) <
            (undefined1 *)((unaff_x20 - unaff_x26) + (long)unaff_x21)) goto LAB_10b309094;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar23 = (ulong *)*puVar9;
          if (unaff_x26 < 0x3ffffffffffffff3) goto LAB_10b308c24;
LAB_10b309030:
          uVar13 = unaff_x22;
          __Znwm();
        }
        else {
          puVar23 = puVar9;
          if (0x3ffffffffffffff2 < unaff_x26) goto LAB_10b309030;
LAB_10b308c24:
          puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
          if ((undefined1 *)((long)unaff_x21 + unaff_x20) <= (undefined1 *)(unaff_x26 * 2)) {
            puVar2 = (undefined1 *)(unaff_x26 * 2);
          }
          uVar13 = 0x19;
          if (((ulong)puVar2 | 7) != 0x17) {
            uVar13 = ((ulong)puVar2 | 7) + 1;
          }
          unaff_x22 = 0x17;
          if ((undefined1 *)0x16 < puVar2) {
            unaff_x22 = uVar13;
          }
          uVar13 = unaff_x22;
          __Znwm();
        }
        if (unaff_x21 != (ulong *)0x0) {
          _memmove(uVar13,puVar23,unaff_x21);
        }
        if (unaff_x26 != 0x16) {
          __ZdlPv(puVar23);
        }
        puVar9[1] = (ulong)unaff_x21;
        puVar9[2] = unaff_x22 | 0x8000000000000000;
        *puVar9 = uVar13;
LAB_10b30906c:
        puVar23 = (ulong *)*puVar9;
        _bzero((undefined1 *)((long)puVar23 + (long)unaff_x21),unaff_x20);
        puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
        cVar4 = *(char *)((long)puVar9 + 0x17);
      }
      if (cVar4 < '\0') {
        puVar9[1] = (ulong)puVar2;
        *(undefined1 *)((long)puVar23 + (long)puVar2) = 0;
      }
      else {
        *(byte *)((long)puVar9 + 0x17) = (byte)puVar2 & 0x7f;
        *(undefined1 *)((long)puVar23 + (long)puVar2) = 0;
      }
LAB_10b308e60:
      FUN_10b3093fc(puVar9);
      return unaff_x25;
    }
    puVar12 = puVar9;
    if ((char)bVar15 < '\0') {
      uVar10 = puVar9[2] & 0x7fffffffffffffff;
      unaff_x25 = uVar10 - 1;
      if (param_2 <= unaff_x25) {
        if ((long)puVar9[2] < 0) goto LAB_10b308f28;
        goto LAB_10b308f2c;
      }
      if (param_2 - unaff_x25 <= 0x7ffffffffffffff8 - uVar10) {
        puVar23 = (ulong *)*puVar9;
        if (unaff_x25 < 0x3ffffffffffffff3) goto LAB_10b308a88;
        uVar13 = 0x7ffffffffffffff7;
        uVar10 = 0x7ffffffffffffff7;
        __Znwm();
        goto LAB_10b308f14;
      }
    }
    else {
      if (param_2 < 0x17) goto LAB_10b308f2c;
      if (0x800000000000001d < param_2 + 0x8000000000000008) break;
    }
LAB_10b309094:
    unaff_x30 = FUN_10b309098;
    func_0x000104c4f6b8();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = puVar23;
    param_2 = uVar13;
    param_3 = extraout_x8;
    unaff_x19 = puVar9;
  } while( true );
  unaff_x25 = 0x16;
  puVar23 = puVar9;
LAB_10b308a88:
  uVar10 = param_2;
  if (param_2 <= unaff_x25 * 2) {
    uVar10 = unaff_x25 * 2;
  }
  uVar17 = 0x19;
  if ((uVar10 | 7) != 0x17) {
    uVar17 = (uVar10 | 7) + 1;
  }
  uVar13 = 0x17;
  if (0x16 < uVar10) {
    uVar13 = uVar17;
  }
  uVar10 = uVar13;
  __Znwm();
  if (unaff_x25 != 0x16) {
LAB_10b308f14:
    __ZdlPv(puVar23);
  }
  puVar9[1] = 0;
  puVar9[2] = uVar13 | 0x8000000000000000;
  *puVar9 = uVar10;
LAB_10b308f28:
  puVar12 = (ulong *)*puVar9;
LAB_10b308f2c:
  if (param_2 == 0) {
    *(undefined1 *)puVar12 = 0;
    cVar4 = *(char *)((long)puVar9 + 0x17);
    goto joined_r0x00010b308f94;
  }
  puVar23 = (ulong *)((long)param_1 + param_2 * 2);
  uVar13 = param_2 - 1 & 0x7fffffffffffffff;
  if ((uVar13 < 0x1f) || ((puVar12 < puVar23 && (param_1 < (ulong *)((long)puVar12 + uVar13 + 1)))))
  {
LAB_10b308f64:
    do {
      puVar16 = (ulong *)((long)param_1 + 2);
      puVar14 = (ulong *)((long)puVar12 + 1);
      *(char *)puVar12 = (char)*param_1;
      puVar12 = puVar14;
      param_1 = puVar16;
    } while (puVar16 != puVar23);
  }
  else {
    uVar17 = uVar13 + 1 & 0xffffffffffffffe0;
    puVar14 = (ulong *)((long)puVar12 + uVar17);
    puVar12 = puVar12 + 2;
    puVar16 = param_1 + 4;
    uVar10 = uVar17;
    do {
      uVar8 = puVar16[-3];
      uVar7 = puVar16[-4];
      uVar6 = puVar16[-1];
      uVar5 = puVar16[-2];
      uVar27 = puVar16[1];
      uVar26 = *puVar16;
      uVar25 = puVar16[3];
      uVar24 = puVar16[2];
      puVar12[-1] = CONCAT17((char)(uVar6 >> 0x30),
                             CONCAT16((char)(uVar6 >> 0x20),
                                      CONCAT15((char)(uVar6 >> 0x10),
                                               CONCAT14((char)uVar6,
                                                        CONCAT13((char)(uVar5 >> 0x30),
                                                                 CONCAT12((char)(uVar5 >> 0x20),
                                                                          CONCAT11((char)(uVar5 >> 
                                                  0x10),(char)uVar5)))))));
      puVar12[-2] = CONCAT17((char)(uVar8 >> 0x30),
                             CONCAT16((char)(uVar8 >> 0x20),
                                      CONCAT15((char)(uVar8 >> 0x10),
                                               CONCAT14((char)uVar8,
                                                        CONCAT13((char)(uVar7 >> 0x30),
                                                                 CONCAT12((char)(uVar7 >> 0x20),
                                                                          CONCAT11((char)(uVar7 >> 
                                                  0x10),(char)uVar7)))))));
      puVar12[1] = CONCAT17((char)(uVar25 >> 0x30),
                            CONCAT16((char)(uVar25 >> 0x20),
                                     CONCAT15((char)(uVar25 >> 0x10),
                                              CONCAT14((char)uVar25,
                                                       CONCAT13((char)(uVar24 >> 0x30),
                                                                CONCAT12((char)(uVar24 >> 0x20),
                                                                         CONCAT11((char)(uVar24 >>
                                                                                        0x10),
                                                                                  (char)uVar24))))))
                           );
      *puVar12 = CONCAT17((char)(uVar27 >> 0x30),
                          CONCAT16((char)(uVar27 >> 0x20),
                                   CONCAT15((char)(uVar27 >> 0x10),
                                            CONCAT14((char)uVar27,
                                                     CONCAT13((char)(uVar26 >> 0x30),
                                                              CONCAT12((char)(uVar26 >> 0x20),
                                                                       CONCAT11((char)(uVar26 >>
                                                                                      0x10),
                                                                                (char)uVar26)))))));
      puVar12 = puVar12 + 4;
      uVar10 = uVar10 - 0x20;
      puVar16 = puVar16 + 8;
    } while (uVar10 != 0);
    puVar12 = puVar14;
    param_1 = (ulong *)((long)param_1 + uVar17 * 2);
    if (uVar13 + 1 != uVar17) goto LAB_10b308f64;
  }
  *(undefined1 *)puVar14 = 0;
  cVar4 = *(char *)((long)puVar9 + 0x17);
joined_r0x00010b308f94:
  if (cVar4 < '\0') {
    puVar9[1] = param_2;
  }
  else {
    *(byte *)((long)puVar9 + 0x17) = (byte)param_2 & 0x7f;
  }
  return 1;
}



/* Entry: 10b309098; end: 10b3090a7;  */

ulong FUN_10b309098(ulong *param_1,ulong *param_2,ulong param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *extraout_x8;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  byte bVar15;
  ulong *puVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong *unaff_x19;
  int iVar22;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong *puVar23;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  do {
    puVar10 = param_1;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar23 = param_2;
    uVar13 = param_3;
    FUN_10b307048();
    bVar15 = *(byte *)((long)puVar10 + 0x17);
    uVar9 = (ulong)bVar15;
    iVar22 = (int)param_3;
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    if ((int)puVar23 == 0) {
      unaff_x27 = param_3 * 3;
      if ((char)bVar15 < '\0') {
        uVar9 = puVar10[1];
        if (uVar9 < unaff_x27) {
          unaff_x28 = (puVar10[2] & 0x7fffffffffffffff) - 1;
          uVar20 = (uint)(puVar10[2] >> 0x3f);
          unaff_x23 = unaff_x27 - uVar9;
          unaff_x22 = uVar9;
          if (unaff_x28 - uVar9 < unaff_x23) goto LAB_10b3089e0;
LAB_10b308af4:
          if (uVar20 != 0) goto LAB_10b308ecc;
          puVar23 = (ulong *)((long)puVar10 + uVar9);
          uVar13 = unaff_x23;
          _bzero();
          cVar4 = *(char *)((long)puVar10 + 0x17);
          unaff_x24 = puVar10;
          goto joined_r0x00010b308b0c;
        }
        unaff_x24 = (ulong *)*puVar10;
        puVar10[1] = unaff_x27;
        *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
        if (-1 < *(char *)((long)puVar10 + 0x17)) goto LAB_10b308cd4;
LAB_10b308b28:
        puVar12 = (ulong *)*puVar10;
        if (1 < iVar22) goto LAB_10b308cdc;
LAB_10b308b34:
        iVar19 = 0;
        iVar11 = 0;
        unaff_x25 = 1;
      }
      else {
        if (uVar9 < unaff_x27) {
          uVar20 = 0;
          unaff_x28 = 0x16;
          unaff_x23 = unaff_x27 - uVar9;
          unaff_x22 = uVar9;
          if (unaff_x23 <= 0x16 - uVar9) goto LAB_10b308af4;
LAB_10b3089e0:
          unaff_x24 = (ulong *)0x7ffffffffffffff7;
          if (0x7ffffffffffffff7 - unaff_x28 < (unaff_x23 - unaff_x28) + unaff_x22)
          goto LAB_10b309094;
          if ((char)bVar15 < '\0') {
            puVar23 = (ulong *)*puVar10;
            if (unaff_x28 < 0x3ffffffffffffff3) goto LAB_10b308a14;
LAB_10b308e90:
            puVar12 = unaff_x24;
            __Znwm();
          }
          else {
            puVar23 = puVar10;
            if (0x3ffffffffffffff2 < unaff_x28) goto LAB_10b308e90;
LAB_10b308a14:
            uVar13 = unaff_x27;
            if (unaff_x27 <= unaff_x28 * 2) {
              uVar13 = unaff_x28 * 2;
            }
            puVar12 = (ulong *)0x19;
            if ((uVar13 | 7) != 0x17) {
              puVar12 = (ulong *)((uVar13 | 7) + 1);
            }
            unaff_x24 = (ulong *)0x17;
            if (0x16 < uVar13) {
              unaff_x24 = puVar12;
            }
            puVar12 = unaff_x24;
            __Znwm();
          }
          if (unaff_x22 != 0) {
            _memmove(puVar12,puVar23,unaff_x22);
          }
          if (unaff_x28 != 0x16) {
            __ZdlPv(puVar23);
          }
          puVar10[1] = unaff_x22;
          puVar10[2] = (ulong)unaff_x24 | 0x8000000000000000;
          *puVar10 = (ulong)puVar12;
          uVar9 = unaff_x22;
LAB_10b308ecc:
          unaff_x24 = (ulong *)*puVar10;
          puVar23 = (ulong *)((long)unaff_x24 + uVar9);
          uVar13 = unaff_x23;
          _bzero();
          cVar4 = *(char *)((long)puVar10 + 0x17);
joined_r0x00010b308b0c:
          if (cVar4 < '\0') {
            puVar10[1] = unaff_x27;
            *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
            cVar4 = *(char *)((long)puVar10 + 0x17);
          }
          else {
            *(byte *)((long)puVar10 + 0x17) = (byte)unaff_x27 & 0x7f;
            *(undefined1 *)((long)unaff_x24 + unaff_x27) = 0;
            cVar4 = *(char *)((long)puVar10 + 0x17);
          }
        }
        else {
          *(byte *)((long)puVar10 + 0x17) = (byte)unaff_x27;
          *(undefined1 *)((long)puVar10 + unaff_x27) = 0;
          cVar4 = *(char *)((long)puVar10 + 0x17);
        }
        if (cVar4 < '\0') goto LAB_10b308b28;
LAB_10b308cd4:
        puVar12 = puVar10;
        if (iVar22 < 2) goto LAB_10b308b34;
LAB_10b308cdc:
        iVar11 = 0;
        unaff_x25 = 1;
        iVar18 = 0;
        do {
          while( true ) {
            puVar1 = (ushort *)((long)param_2 + (long)iVar11 * 2);
            uVar3 = *puVar1;
            uVar20 = (uint)uVar3;
            if (((uVar3 & 0xfc00) != 0xd800) ||
               (uVar21 = (uint)puVar1[1], (uVar21 & 0xfc00) != 0xdc00)) break;
            iVar19 = uVar21 + (uint)uVar3 * 0x400;
            if (iVar19 + 0xfc9f4400U < 0x102000) {
              uVar20 = iVar19 + 0xfca02400;
              iVar11 = iVar11 + 2;
              *(byte *)((long)puVar12 + (long)iVar18) = (byte)(uVar20 >> 0x12) | 0xf0;
              uVar21 = uVar20 >> 0xc & 0x3f | 0x80;
              uVar13 = (ulong)uVar21;
              ((byte *)((long)puVar12 + (long)iVar18))[1] = (byte)uVar21;
              iVar18 = iVar18 + 2;
            }
            else {
              iVar11 = iVar11 + 2;
LAB_10b308dcc:
              unaff_x25 = 0;
              uVar20 = 0xfffd;
LAB_10b308dd0:
              *(byte *)((long)puVar12 + (long)iVar18) = (byte)(uVar20 >> 0xc) | 0xe0;
              iVar18 = iVar18 + 1;
            }
            uVar21 = uVar20 >> 6 & 0x3f | 0xffffff80;
LAB_10b308dec:
            puVar23 = (ulong *)(ulong)uVar21;
            *(char *)((long)puVar12 + (long)iVar18) = (char)uVar21;
            iVar19 = iVar18 + 2;
            *(byte *)((long)puVar12 + (long)(iVar18 + 1)) = (byte)uVar20 & 0x3f | 0x80;
            iVar18 = iVar19;
            if (iVar22 + -1 <= iVar11) goto LAB_10b308b40;
          }
          if (((uVar20 & 0xf800) == 0xd800) ||
             (puVar23 = (ulong *)(ulong)(uVar20 - 0xe000),
             0x1a < uVar3 >> 0xb && 0x101fff < uVar20 - 0xe000)) {
            iVar11 = iVar11 + 1;
            goto LAB_10b308dcc;
          }
          iVar11 = iVar11 + 1;
          if (0x7f < uVar20) {
            if (0x7ff < uVar20) goto LAB_10b308dd0;
            uVar21 = uVar3 >> 6 | 0xffffffc0;
            goto LAB_10b308dec;
          }
          iVar19 = iVar18 + 1;
          *(char *)((long)puVar12 + (long)iVar18) = (char)uVar3;
          iVar18 = iVar19;
        } while (iVar11 < iVar22 + -1);
      }
LAB_10b308b40:
      if (iVar11 < iVar22) {
        uVar3 = *(ushort *)((long)param_2 + (long)iVar11 * 2);
        uVar9 = (ulong)uVar3;
        uVar20 = (uint)uVar3;
        if (((uVar3 & 0xf800) == 0xd800) || ((0x1a < uVar3 >> 0xb && (0x101fff < uVar3 - 0xe000))))
        {
          unaff_x25 = 0;
          uVar9 = 0xfffd;
LAB_10b308b84:
          *(byte *)((long)puVar12 + (long)iVar19) = (byte)(uVar9 >> 0xc) | 0xe0;
          iVar19 = iVar19 + 1;
          uVar20 = (uint)uVar9;
          bVar15 = (byte)(uVar20 >> 6) & 0x3f | 0x80;
LAB_10b308ba0:
          *(byte *)((long)puVar12 + (long)iVar19) = bVar15;
          iVar19 = iVar19 + 1;
          bVar15 = (byte)uVar20 & 0x3f | 0x80;
        }
        else {
          if (0x7f < uVar3) {
            if (0x7ff < uVar20) goto LAB_10b308b84;
            bVar15 = (byte)(uVar3 >> 6) | 0xc0;
            goto LAB_10b308ba0;
          }
          bVar15 = (byte)uVar3;
        }
        *(byte *)((long)puVar12 + (long)iVar19) = bVar15;
        iVar19 = iVar19 + 1;
      }
      puVar12 = (ulong *)(long)iVar19;
      unaff_x21 = (ulong *)(long)*(char *)((long)puVar10 + 0x17);
      if ((long)unaff_x21 < 0) {
        unaff_x21 = (ulong *)puVar10[1];
        unaff_x20 = (long)puVar12 - (long)unaff_x21;
        if (puVar12 < unaff_x21 || unaff_x20 == 0) {
          puVar23 = (ulong *)*puVar10;
          puVar10[1] = (ulong)puVar12;
          goto LAB_10b308e5c;
        }
        if (unaff_x20 == 0) goto LAB_10b308e60;
        unaff_x26 = (puVar10[2] & 0x7fffffffffffffff) - 1;
        uVar20 = (uint)(puVar10[2] >> 0x3f);
        if (unaff_x26 - (long)unaff_x21 < unaff_x20) goto LAB_10b308bf0;
LAB_10b308c90:
        if (uVar20 != 0) goto LAB_10b30906c;
        _bzero((undefined1 *)((long)puVar10 + (long)unaff_x21),unaff_x20);
        puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
        cVar4 = *(char *)((long)puVar10 + 0x17);
        puVar23 = puVar10;
      }
      else {
        unaff_x20 = (long)puVar12 - (long)unaff_x21;
        if (puVar12 < unaff_x21 || unaff_x20 == 0) {
          *(char *)((long)puVar10 + 0x17) = (char)iVar19;
          puVar23 = puVar10;
LAB_10b308e5c:
          *(undefined1 *)((long)puVar23 + (long)puVar12) = 0;
          goto LAB_10b308e60;
        }
        if (unaff_x20 == 0) goto LAB_10b308e60;
        uVar20 = 0;
        unaff_x26 = 0x16;
        if (unaff_x20 <= 0x16U - (long)unaff_x21) goto LAB_10b308c90;
LAB_10b308bf0:
        unaff_x22 = 0x7ffffffffffffff7;
        if ((undefined1 *)(0x7ffffffffffffff7 - unaff_x26) <
            (undefined1 *)((unaff_x20 - unaff_x26) + (long)unaff_x21)) goto LAB_10b309094;
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          puVar23 = (ulong *)*puVar10;
          if (unaff_x26 < 0x3ffffffffffffff3) goto LAB_10b308c24;
LAB_10b309030:
          uVar13 = unaff_x22;
          __Znwm();
        }
        else {
          puVar23 = puVar10;
          if (0x3ffffffffffffff2 < unaff_x26) goto LAB_10b309030;
LAB_10b308c24:
          puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
          if ((undefined1 *)((long)unaff_x21 + unaff_x20) <= (undefined1 *)(unaff_x26 * 2)) {
            puVar2 = (undefined1 *)(unaff_x26 * 2);
          }
          uVar13 = 0x19;
          if (((ulong)puVar2 | 7) != 0x17) {
            uVar13 = ((ulong)puVar2 | 7) + 1;
          }
          unaff_x22 = 0x17;
          if ((undefined1 *)0x16 < puVar2) {
            unaff_x22 = uVar13;
          }
          uVar13 = unaff_x22;
          __Znwm();
        }
        if (unaff_x21 != (ulong *)0x0) {
          _memmove(uVar13,puVar23,unaff_x21);
        }
        if (unaff_x26 != 0x16) {
          __ZdlPv(puVar23);
        }
        puVar10[1] = (ulong)unaff_x21;
        puVar10[2] = unaff_x22 | 0x8000000000000000;
        *puVar10 = uVar13;
LAB_10b30906c:
        puVar23 = (ulong *)*puVar10;
        _bzero((undefined1 *)((long)puVar23 + (long)unaff_x21),unaff_x20);
        puVar2 = (undefined1 *)((long)unaff_x21 + unaff_x20);
        cVar4 = *(char *)((long)puVar10 + 0x17);
      }
      if (cVar4 < '\0') {
        puVar10[1] = (ulong)puVar2;
        *(undefined1 *)((long)puVar23 + (long)puVar2) = 0;
      }
      else {
        *(byte *)((long)puVar10 + 0x17) = (byte)puVar2 & 0x7f;
        *(undefined1 *)((long)puVar23 + (long)puVar2) = 0;
      }
LAB_10b308e60:
      FUN_10b3093fc(puVar10);
      return unaff_x25;
    }
    puVar12 = puVar10;
    if ((char)bVar15 < '\0') {
      uVar9 = puVar10[2] & 0x7fffffffffffffff;
      unaff_x25 = uVar9 - 1;
      if (param_3 <= unaff_x25) {
        if ((long)puVar10[2] < 0) goto LAB_10b308f28;
        goto LAB_10b308f2c;
      }
      if (param_3 - unaff_x25 <= 0x7ffffffffffffff8 - uVar9) {
        puVar23 = (ulong *)*puVar10;
        if (unaff_x25 < 0x3ffffffffffffff3) goto LAB_10b308a88;
        uVar13 = 0x7ffffffffffffff7;
        uVar9 = 0x7ffffffffffffff7;
        __Znwm();
        goto LAB_10b308f14;
      }
    }
    else {
      if (param_3 < 0x17) goto LAB_10b308f2c;
      if (0x800000000000001d < param_3 + 0x8000000000000008) break;
    }
LAB_10b309094:
    unaff_x30 = FUN_10b309098;
    func_0x000104c4f6b8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar23;
    param_3 = uVar13;
    param_1 = extraout_x8;
    unaff_x19 = puVar10;
  } while( true );
  unaff_x25 = 0x16;
  puVar23 = puVar10;
LAB_10b308a88:
  uVar9 = param_3;
  if (param_3 <= unaff_x25 * 2) {
    uVar9 = unaff_x25 * 2;
  }
  uVar17 = 0x19;
  if ((uVar9 | 7) != 0x17) {
    uVar17 = (uVar9 | 7) + 1;
  }
  uVar13 = 0x17;
  if (0x16 < uVar9) {
    uVar13 = uVar17;
  }
  uVar9 = uVar13;
  __Znwm();
  if (unaff_x25 != 0x16) {
LAB_10b308f14:
    __ZdlPv(puVar23);
  }
  puVar10[1] = 0;
  puVar10[2] = uVar13 | 0x8000000000000000;
  *puVar10 = uVar9;
LAB_10b308f28:
  puVar12 = (ulong *)*puVar10;
LAB_10b308f2c:
  if (param_3 == 0) {
    *(undefined1 *)puVar12 = 0;
    cVar4 = *(char *)((long)puVar10 + 0x17);
    goto joined_r0x00010b308f94;
  }
  puVar23 = (ulong *)((long)param_2 + param_3 * 2);
  uVar13 = param_3 - 1 & 0x7fffffffffffffff;
  if ((uVar13 < 0x1f) || ((puVar12 < puVar23 && (param_2 < (ulong *)((long)puVar12 + uVar13 + 1)))))
  {
LAB_10b308f64:
    do {
      puVar16 = (ulong *)((long)param_2 + 2);
      puVar14 = (ulong *)((long)puVar12 + 1);
      *(char *)puVar12 = (char)*param_2;
      puVar12 = puVar14;
      param_2 = puVar16;
    } while (puVar16 != puVar23);
  }
  else {
    uVar17 = uVar13 + 1 & 0xffffffffffffffe0;
    puVar14 = (ulong *)((long)puVar12 + uVar17);
    puVar12 = puVar12 + 2;
    puVar16 = param_2 + 4;
    uVar9 = uVar17;
    do {
      uVar8 = puVar16[-3];
      uVar7 = puVar16[-4];
      uVar6 = puVar16[-1];
      uVar5 = puVar16[-2];
      uVar27 = puVar16[1];
      uVar26 = *puVar16;
      uVar25 = puVar16[3];
      uVar24 = puVar16[2];
      puVar12[-1] = CONCAT17((char)(uVar6 >> 0x30),
                             CONCAT16((char)(uVar6 >> 0x20),
                                      CONCAT15((char)(uVar6 >> 0x10),
                                               CONCAT14((char)uVar6,
                                                        CONCAT13((char)(uVar5 >> 0x30),
                                                                 CONCAT12((char)(uVar5 >> 0x20),
                                                                          CONCAT11((char)(uVar5 >> 
                                                  0x10),(char)uVar5)))))));
      puVar12[-2] = CONCAT17((char)(uVar8 >> 0x30),
                             CONCAT16((char)(uVar8 >> 0x20),
                                      CONCAT15((char)(uVar8 >> 0x10),
                                               CONCAT14((char)uVar8,
                                                        CONCAT13((char)(uVar7 >> 0x30),
                                                                 CONCAT12((char)(uVar7 >> 0x20),
                                                                          CONCAT11((char)(uVar7 >> 
                                                  0x10),(char)uVar7)))))));
      puVar12[1] = CONCAT17((char)(uVar25 >> 0x30),
                            CONCAT16((char)(uVar25 >> 0x20),
                                     CONCAT15((char)(uVar25 >> 0x10),
                                              CONCAT14((char)uVar25,
                                                       CONCAT13((char)(uVar24 >> 0x30),
                                                                CONCAT12((char)(uVar24 >> 0x20),
                                                                         CONCAT11((char)(uVar24 >>
                                                                                        0x10),
                                                                                  (char)uVar24))))))
                           );
      *puVar12 = CONCAT17((char)(uVar27 >> 0x30),
                          CONCAT16((char)(uVar27 >> 0x20),
                                   CONCAT15((char)(uVar27 >> 0x10),
                                            CONCAT14((char)uVar27,
                                                     CONCAT13((char)(uVar26 >> 0x30),
                                                              CONCAT12((char)(uVar26 >> 0x20),
                                                                       CONCAT11((char)(uVar26 >>
                                                                                      0x10),
                                                                                (char)uVar26)))))));
      puVar12 = puVar12 + 4;
      uVar9 = uVar9 - 0x20;
      puVar16 = puVar16 + 8;
    } while (uVar9 != 0);
    puVar12 = puVar14;
    param_2 = (ulong *)((long)param_2 + uVar17 * 2);
    if (uVar13 + 1 != uVar17) goto LAB_10b308f64;
  }
  *(undefined1 *)puVar14 = 0;
  cVar4 = *(char *)((long)puVar10 + 0x17);
joined_r0x00010b308f94:
  if (cVar4 < '\0') {
    puVar10[1] = param_3;
  }
  else {
    *(byte *)((long)puVar10 + 0x17) = (byte)param_3 & 0x7f;
  }
  return 1;
}



/* Entry: 10b3090a8; end: 10b3093fb;  */

uint * FUN_10b3090a8(uint *param_1,ulong param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar7 = param_1;
  func_0x00010b307340();
  if ((int)puVar7 != 0) {
    puVar11 = param_3;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      uVar10 = *(ulong *)(param_3 + 4) & 0x7fffffffffffffff;
      uVar20 = uVar10 - 1;
      if (param_2 <= uVar20) {
        if ((long)*(ulong *)(param_3 + 4) < 0) {
          puVar11 = *(uint **)param_3;
        }
        goto LAB_10b3092e0;
      }
      if (0x7ffffffffffffff8 - uVar10 < param_2 - uVar20) goto LAB_10b3093f4;
      puVar11 = *(uint **)param_3;
      if (uVar20 < 0x3ffffffffffffff3) goto LAB_10b30922c;
      uVar10 = 0x7ffffffffffffff7;
      puVar7 = (uint *)0xffffffffffffffee;
      __Znwm();
LAB_10b309314:
      __ZdlPv(puVar11);
LAB_10b30931c:
      param_3[2] = 0;
      param_3[3] = 0;
      *(ulong *)(param_3 + 4) = uVar10 | 0x8000000000000000;
      *(uint **)param_3 = puVar7;
    }
    else {
      if (10 < param_2) {
        if (param_2 + 0x8000000000000008 < 0x8000000000000012) {
LAB_10b3093f4:
          func_0x00010b30250c();
        }
        else {
          uVar20 = 10;
LAB_10b30922c:
          uVar12 = param_2;
          if (param_2 <= uVar20 * 2) {
            uVar12 = uVar20 * 2;
          }
          uVar19 = 0xd;
          if ((uVar12 | 3) != 0xb) {
            uVar19 = (uVar12 | 3) + 1;
          }
          uVar10 = 0xb;
          if (10 < uVar12) {
            uVar10 = uVar19;
          }
          if (-1 < (long)uVar10) {
            puVar7 = (uint *)(uVar10 << 1);
            __Znwm();
            if (uVar20 != 10) goto LAB_10b309314;
            goto LAB_10b30931c;
          }
        }
        func_0x00010b2ed0ac();
        bVar1 = *(byte *)((long)puVar7 + 0x17);
        if ((char)bVar1 < '\0') {
          uVar20 = *(ulong *)(puVar7 + 2);
          uVar12 = *(ulong *)(puVar7 + 4);
          uVar10 = 0x18;
          if ((uVar20 | 7) != 0x17) {
            uVar10 = uVar20 | 7;
          }
          uVar19 = uVar10;
          if (uVar20 < 0x17) {
            uVar19 = 0x16;
          }
          uVar16 = (uVar12 & 0x7fffffffffffffff) - 1;
          if (uVar19 == uVar16) {
            return puVar7;
          }
          uVar21 = uVar12 >> 0x38;
          uVar18 = uVar20;
          if (0x16 < uVar19) {
            puVar11 = (uint *)(uVar19 + 1);
            __Znwm();
            if (uVar16 < uVar10 && uVar19 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(puVar11);
              return puVar11;
            }
            uVar19 = uVar10;
            if ((long)uVar12 < 0) {
              bVar5 = false;
              puVar17 = *(uint **)puVar7;
              bVar6 = true;
              goto LAB_10b309460;
            }
            goto LAB_10b309450;
          }
          bVar5 = true;
          puVar17 = *(uint **)puVar7;
          bVar6 = true;
          puVar11 = puVar7;
          if ((long)uVar12 < 0) goto LAB_10b309460;
        }
        else {
          uVar21 = (ulong)bVar1;
          if (bVar1 < 0x17) {
            return puVar7;
          }
          uVar20 = (ulong)bVar1;
          uVar15 = bVar1 | 7;
          uVar9 = 0x18;
          if (uVar15 != 0x17) {
            uVar9 = uVar15;
          }
          puVar11 = (uint *)((ulong)uVar9 + 1);
          __Znwm();
          uVar19 = (ulong)uVar9;
LAB_10b309450:
          bVar5 = false;
          puVar17 = puVar7;
          uVar18 = uVar20;
        }
        uVar20 = uVar21;
        bVar6 = bVar5;
LAB_10b309460:
        puVar8 = puVar11;
        if (uVar20 != 0xffffffffffffffff) {
          _memmove(puVar11,puVar17,uVar20 + 1);
        }
        if (bVar6) {
          __ZdlPv(puVar17);
          puVar8 = puVar17;
        }
        if (bVar5) {
          *(byte *)((long)puVar7 + 0x17) = (byte)uVar18 & 0x7f;
        }
        else {
          *(ulong *)(puVar7 + 2) = uVar18;
          *(ulong *)(puVar7 + 4) = uVar19 + 1 | 0x8000000000000000;
          *(uint **)puVar7 = puVar11;
        }
        return puVar8;
      }
LAB_10b3092e0:
      puVar7 = puVar11;
      if (param_2 == 0) goto LAB_10b30936c;
    }
    uVar10 = param_2 * 4 - 4;
    puVar17 = param_1 + param_2;
    if ((0x3b < uVar10) &&
       ((puVar17 <= puVar7 || ((uint *)((long)puVar7 + (uVar10 >> 1) + 2) <= param_1)))) {
      uVar10 = (uVar10 >> 2) + 1;
      uVar12 = uVar10 & 0x7ffffffffffffff0;
      puVar11 = (uint *)((long)puVar7 + uVar12 * 2);
      puVar7 = puVar7 + 4;
      puVar8 = param_1 + 8;
      uVar20 = uVar12;
      do {
        uVar4 = *(undefined8 *)(puVar8 + -6);
        uVar3 = *(undefined8 *)(puVar8 + -8);
        uVar25 = *(undefined8 *)(puVar8 + 2);
        uVar24 = *(undefined8 *)puVar8;
        uVar23 = *(undefined8 *)(puVar8 + 6);
        uVar22 = *(undefined8 *)(puVar8 + 4);
        *(ulong *)(puVar7 + -2) =
             CONCAT26((short)((ulong)*(undefined8 *)(puVar8 + -2) >> 0x20),
                      CONCAT24((short)*(undefined8 *)(puVar8 + -2),
                               CONCAT22((short)((ulong)*(undefined8 *)(puVar8 + -4) >> 0x20),
                                        (short)*(undefined8 *)(puVar8 + -4))));
        *(ulong *)(puVar7 + -4) =
             CONCAT26((short)((ulong)uVar4 >> 0x20),
                      CONCAT24((short)uVar4,CONCAT22((short)((ulong)uVar3 >> 0x20),(short)uVar3)));
        *(ulong *)(puVar7 + 2) =
             CONCAT26((short)((ulong)uVar23 >> 0x20),
                      CONCAT24((short)uVar23,CONCAT22((short)((ulong)uVar22 >> 0x20),(short)uVar22))
                     );
        *(ulong *)puVar7 =
             CONCAT26((short)((ulong)uVar25 >> 0x20),
                      CONCAT24((short)uVar25,CONCAT22((short)((ulong)uVar24 >> 0x20),(short)uVar24))
                     );
        puVar7 = puVar7 + 8;
        uVar20 = uVar20 - 0x10;
        puVar8 = puVar8 + 0x10;
      } while (uVar20 != 0);
      puVar7 = puVar11;
      param_1 = param_1 + uVar12;
      if (uVar10 == uVar12) goto LAB_10b30936c;
    }
    do {
      puVar8 = param_1 + 1;
      puVar11 = (uint *)((long)puVar7 + 2);
      *(short *)puVar7 = (short)*param_1;
      puVar7 = puVar11;
      param_1 = puVar8;
    } while (puVar8 != puVar17);
LAB_10b30936c:
    *(undefined2 *)puVar11 = 0;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      *(ulong *)(param_3 + 2) = param_2;
    }
    else {
      *(byte *)((long)param_3 + 0x17) = (byte)param_2 & 0x7f;
    }
    return (uint *)0x1;
  }
  func_0x0001078a86d4(param_3,param_2 << 1,0);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    puVar7 = *(uint **)param_3;
    if ((int)param_2 < 1) goto LAB_10b30927c;
LAB_10b309134:
    iVar14 = 0;
    param_2 = param_2 & 0x7fffffff;
    puVar11 = (uint *)0x1;
    do {
      uVar9 = *param_1;
      uVar15 = (uint)(uVar9 >> 0xb < 0x1b || uVar9 - 0xe000 < 0x102000);
      if (uVar15 == 0) {
        uVar9 = 0xfffd;
      }
      iVar13 = iVar14;
      if (uVar9 >> 0x10 != 0) {
        *(short *)((long)puVar7 + (long)iVar14 * 2) = (short)(uVar9 >> 10) + -0x2840;
        iVar13 = iVar14 + 1;
        uVar9 = uVar9 & 0x3ff | 0xffffdc00;
      }
      puVar11 = (uint *)(ulong)(uVar15 & (uint)puVar11);
      iVar14 = iVar13 + 1;
      *(short *)((long)puVar7 + (long)iVar13 * 2) = (short)uVar9;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    func_0x0001078a86d4(param_3,(long)iVar14,0);
    uVar9 = (uint)*(char *)((long)param_3 + 0x17);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
LAB_10b309298:
      uVar20 = *(ulong *)(param_3 + 2) | 3;
      uVar10 = 0xc;
      if (uVar20 != 0xb) {
        uVar10 = uVar20;
      }
      if (*(ulong *)(param_3 + 2) < 0xb) {
        uVar10 = 10;
      }
      if (uVar10 == (*(ulong *)(param_3 + 4) & 0x7fffffffffffffff) - 1) {
        return puVar11;
      }
      goto LAB_10b3092c8;
    }
  }
  else {
    puVar7 = param_3;
    if (0 < (int)param_2) goto LAB_10b309134;
LAB_10b30927c:
    puVar11 = (uint *)0x1;
    func_0x0001078a86d4(param_3,0,0);
    uVar9 = (uint)*(char *)((long)param_3 + 0x17);
    if ((int)uVar9 < 0) goto LAB_10b309298;
  }
  uVar2 = uVar9 & 0xff | 3;
  uVar15 = 0xc;
  if (uVar2 != 0xb) {
    uVar15 = uVar2;
  }
  if ((uVar9 & 0xff) < 0xb) {
    uVar15 = 10;
  }
  if (uVar15 == 10) {
    return puVar11;
  }
LAB_10b3092c8:
  func_0x000109892b50(param_3);
  return puVar11;
}



/* Entry: 10b3093fc; end: 10b30956f;  */

void FUN_10b3093fc(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar4 < '\0') {
    uVar11 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = 0x18;
    if ((uVar11 | 7) != 0x17) {
      uVar2 = uVar11 | 7;
    }
    uVar13 = uVar2;
    if (uVar11 < 0x17) {
      uVar13 = 0x16;
    }
    uVar9 = (uVar3 & 0x7fffffffffffffff) - 1;
    if (uVar13 == uVar9) {
      return;
    }
    uVar14 = uVar3 >> 0x38;
    uVar12 = uVar11;
    if (0x16 < uVar13) {
      plVar8 = (long *)(uVar13 + 1);
      __Znwm();
      if (uVar9 < uVar2 && uVar13 <= uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar8);
        return;
      }
      uVar13 = uVar2;
      if ((long)uVar3 < 0) {
        bVar6 = false;
        plVar10 = (long *)*param_1;
        bVar7 = true;
        goto LAB_10b309460;
      }
      goto LAB_10b309450;
    }
    bVar6 = true;
    plVar10 = (long *)*param_1;
    bVar7 = true;
    plVar8 = param_1;
    if ((long)uVar3 < 0) goto LAB_10b309460;
  }
  else {
    uVar14 = (ulong)bVar4;
    if (bVar4 < 0x17) {
      return;
    }
    uVar11 = (ulong)bVar4;
    uVar5 = bVar4 | 7;
    uVar1 = 0x18;
    if (uVar5 != 0x17) {
      uVar1 = uVar5;
    }
    plVar8 = (long *)((ulong)uVar1 + 1);
    __Znwm();
    uVar13 = (ulong)uVar1;
LAB_10b309450:
    bVar6 = false;
    plVar10 = param_1;
    uVar12 = uVar11;
  }
  uVar11 = uVar14;
  bVar7 = bVar6;
LAB_10b309460:
  if (uVar11 != 0xffffffffffffffff) {
    _memmove(plVar8,plVar10,uVar11 + 1);
  }
  if (bVar7) {
    __ZdlPv(plVar10);
  }
  if (bVar6) {
    *(byte *)((long)param_1 + 0x17) = (byte)uVar12 & 0x7f;
  }
  else {
    param_1[1] = uVar12;
    param_1[2] = uVar13 + 1 | 0x8000000000000000;
    *param_1 = (long)plVar8;
  }
  return;
}



/* Entry: 10b309570; end: 10b309897;  */

long FUN_10b309570(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      lVar1 = 8;
      if (param_2 <= (ulong)plVar4[4]) {
        lVar1 = 0;
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + lVar1);
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && ((ulong)plVar3[4] <= param_2)) {
      return plVar3[5];
    }
  }
  return 0;
}



/* Entry: 10b309898; end: 10b30994b;  */

long FUN_10b309898(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = uRam000000011383a988;
  func_0x000107c2ca64(uRam000000011383a988,&UNK_10e574b4a);
  uVar3 = uVar2;
  _mach_host_self();
  uVar4 = uVar3;
  _host_info();
  lVar5 = -0x5555555555555556;
  if ((int)uVar3 != 0) {
    func_0x000107c2cfec(uVar3);
  }
  if ((int)uVar4 != 0) {
    lVar5 = 0;
  }
  lVar1 = lVar5;
  if (0x1fffffff < lVar5) {
    lVar1 = 0x20000000;
  }
  if ((int)uVar2 == 0) {
    lVar1 = lVar5;
  }
  return lVar1;
}



/* Entry: 10b30994c; end: 10b309ba7;  */

void FUN_10b30994c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  _abort();
  *param_1 = &PTR_LAB_110cd5408;
  param_1[2] = 0;
  *(undefined1 *)(param_1[1] + 4) = 1;
  piVar4 = (int *)param_1[1];
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
  return;
}



/* Entry: 10b309ba8; end: 10b30a62b;  */

/* WARNING: Removing unreachable block (ram,0x00010b309ebc) */

undefined8 * FUN_10b309ba8(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  *param_1 = &PTR_FUN_110cd5438;
  param_1[1] = &PTR_DAT_110cd5578;
  param_1[2] = &PTR_DAT_110cd55c8;
  param_1[3] = &PTR_DAT_110cd55f0;
  if ((bRam0000000113370618 & 0x19) == 0) {
    iVar4 = *(int *)(param_1 + 7);
  }
  else {
    func_0x00010b2ef0d0(0x44,0x113370618,&UNK_10f744725,0,param_1,0x800,0);
    iVar4 = *(int *)(param_1 + 7);
  }
  if ((iVar4 == 1) && (*(int *)(param_1[4] + 4) != 0)) {
    (**(code **)(*(long *)param_1[6] + 0x70))();
  }
  puVar18 = (undefined8 *)param_1[0x6e];
  puVar17 = param_1 + 0x6f;
  while (puVar18 != puVar17) {
    uVar10 = puVar18[4];
    func_0x00010b3142c0(param_1 + 0x23,uVar10);
    func_0x00010b30ec74(uVar10);
    puVar19 = (undefined8 *)puVar18[1];
    puVar20 = puVar18;
    if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
      do {
        puVar18 = (undefined8 *)puVar20[2];
        bVar3 = (undefined8 *)*puVar18 != puVar20;
        puVar20 = puVar18;
      } while (bVar3);
    }
    else {
      do {
        puVar18 = puVar19;
        puVar19 = (undefined8 *)*puVar18;
      } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
    }
  }
  (**(code **)(*(long *)param_1[6] + 0xa0))();
  FUN_10b30d2e4(param_1[0x6f]);
  param_1[0x6e] = puVar17;
  param_1[0x70] = 0;
  *puVar17 = 0;
  func_0x000107c2ccf0(param_1[0x72]);
  param_1[0x71] = param_1 + 0x72;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x59] = 0;
  if ((*(byte *)((long)param_1 + 0x3b9) & 1) != 0) {
    (**(code **)(*(long *)param_1[6] + 0xb0))((long *)param_1[6],param_1 + 3);
  }
  plVar7 = param_1 + 0x7f;
  if (param_1[0x7f] == param_1[0x80]) goto LAB_10b309ee8;
  plStack_70 = param_1 + 0x82;
  lStack_78 = param_1[0x82];
  *(long **)(lStack_78 + 8) = &lStack_78;
  param_1[0x82] = &lStack_78;
  uStack_60 = 0;
  if (*(int *)(param_1 + 0x85) == 0) {
    uStack_58 = 0xffffffffffffffff;
  }
  else {
    uStack_58 = (long)(param_1[0x80] - param_1[0x7f]) >> 3;
  }
  uVar11 = param_1[0x80] - *plVar7 >> 3;
  if (uStack_58 <= uVar11) {
    uVar11 = uStack_58;
  }
  uVar14 = 0;
  if (uVar11 != 0) {
    do {
      uVar14 = uStack_60;
      if (*(long *)(*plVar7 + uStack_60 * 8) != 0) break;
      uStack_60 = uStack_60 + 1;
      uVar14 = uVar11;
    } while (uVar11 != uStack_60);
  }
  plStack_68 = plVar7;
  if (plVar7 == (long *)0x0) goto LAB_10b309ee8;
  plVar5 = param_1 + 0x80;
  plVar12 = (long *)*plVar5;
  plVar15 = (long *)*plVar7;
  uVar11 = (long)plVar12 - (long)plVar15 >> 3;
  if (uStack_58 <= uVar11) {
    uVar11 = uStack_58;
  }
  if (uVar14 == uVar11) {
    if (param_1[0x83] == param_1[0x82]) {
LAB_10b309e4c:
      if (plVar15 == plVar12) {
LAB_10b309ea4:
        if (plVar15 != plVar12) {
          *plVar5 = (long)plVar15;
        }
      }
      else {
        do {
          if (*plVar15 == 0) {
            if ((plVar15 != plVar12) && (plVar8 = plVar15 + 1, plVar16 = plVar15, plVar8 != plVar12)
               ) {
              do {
                plVar15 = plVar16;
                if (*plVar8 != 0) {
                  plVar15 = plVar16 + 1;
                  *plVar16 = *plVar8;
                }
                plVar8 = plVar8 + 1;
                plVar16 = plVar15;
              } while (plVar8 != plVar12);
              plVar12 = (long *)*plVar5;
            }
            goto LAB_10b309ea4;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar12);
      }
    }
  }
  else {
    do {
      (*(code *)**(undefined8 **)plVar15[uVar14])();
      if (plStack_68 == (long *)0x0) goto LAB_10b309ee8;
      uStack_60 = uStack_60 + 1;
      uVar11 = plStack_68[1] - *plStack_68 >> 3;
      if (uStack_58 <= uVar11) {
        uVar11 = uStack_58;
      }
      uVar14 = uStack_60;
      if (uStack_60 < uVar11) {
        do {
          uVar14 = uStack_60;
          if (*(long *)(*plStack_68 + uStack_60 * 8) != 0) break;
          uStack_60 = uStack_60 + 1;
          uVar14 = uVar11;
        } while (uVar11 != uStack_60);
      }
      plVar15 = (long *)*plStack_68;
      plVar12 = (long *)plStack_68[1];
      uVar11 = (long)plVar12 - (long)plVar15 >> 3;
      if (uStack_58 <= uVar11) {
        uVar11 = uStack_58;
      }
    } while (uVar14 != uVar11);
    plVar5 = plStack_68 + 1;
    if (plStack_68[4] == plStack_68[3]) goto LAB_10b309e4c;
  }
  if (plStack_68 != (long *)0x0) {
    plStack_68 = (long *)0x0;
    *(long **)(lStack_78 + 8) = plStack_70;
    *plStack_70 = lStack_78;
  }
LAB_10b309ee8:
  plVar5 = (long *)param_1[6];
  (**(code **)(*plVar5 + 0x58))();
  if (plVar5 != (long *)0x0) {
    if ((bRam000000011383ad00 & 1) == 0) {
      iVar4 = 0x1383ad00;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam000000011383acf8 = 0xffffffff;
        func_0x000107c2ce58(0x11383acf8,0);
        ___cxa_guard_release(0x11383ad00);
      }
    }
    uVar11 = uRam000000011336f908;
    _pthread_getspecific();
    uVar11 = uVar11 & 0xfffffffffffffffc;
    if (uVar11 != 0) {
      *(undefined8 *)(uVar11 + (long)(int)uRam000000011383acf8 * 0x10) = 0;
      *(undefined4 *)(uVar11 + (long)(int)uRam000000011383acf8 * 0x10 + 8) =
           uRam000000011383acf8._4_4_;
    }
  }
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1[0x8b] + 4) = 1;
  piVar6 = (int *)param_1[0x8b];
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      __ZdlPv();
    }
  }
  func_0x00010b30d320(param_1[0x88]);
  piVar6 = (int *)param_1[0x86];
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(piVar6 + 4))();
    }
  }
  do {
    plVar5 = (long *)param_1[0x83];
    do {
      if (plVar5 == param_1 + 0x82) {
        if (*plVar7 != 0) {
          param_1[0x80] = *plVar7;
          __ZdlPv();
        }
        puVar17 = (undefined8 *)param_1[0x79];
        puVar18 = (undefined8 *)param_1[0x7a];
        if (puVar18 == puVar17) {
          param_1[0x7d] = 0;
          uVar11 = 0;
          puVar18 = puVar17;
        }
        else {
          uVar11 = param_1[0x7c];
          plVar7 = puVar17 + uVar11 / 0x12;
          puVar19 = (undefined8 *)(*plVar7 + (uVar11 % 0x12) * 0xe0);
          puVar20 = (undefined8 *)
                    (puVar17[(param_1[0x7d] + uVar11) / 0x12] +
                    ((param_1[0x7d] + uVar11) % 0x12) * 0xe0);
          if (puVar19 != puVar20) {
            do {
              piVar6 = (int *)puVar19[0x12];
              if (piVar6 != (int *)0x0) {
                do {
                  iVar4 = *piVar6;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar3) {
                    *piVar6 = iVar4 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 + -1 == 0) {
                  __ZdlPv();
                }
              }
              plVar5 = (long *)puVar19[0x10];
              if (plVar5 != (long *)0x0) {
                plVar15 = plVar5 + 1;
                do {
                  iVar4 = (int)*plVar15 + -1;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *(int *)plVar15 = iVar4;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 == 0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
              }
              piVar6 = (int *)*puVar19;
              if (piVar6 != (int *)0x0) {
                do {
                  iVar4 = *piVar6;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar3) {
                    *piVar6 = iVar4 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 + -1 == 0) {
                  (**(code **)(piVar6 + 4))();
                }
              }
              puVar19 = puVar19 + 0x1c;
              if ((long)puVar19 - *plVar7 == 0xfc0) {
                plVar7 = plVar7 + 1;
                puVar19 = (undefined8 *)*plVar7;
              }
            } while (puVar19 != puVar20);
            puVar18 = (undefined8 *)param_1[0x7a];
            puVar17 = (undefined8 *)param_1[0x79];
          }
          param_1[0x7d] = 0;
          lVar9 = (long)puVar18 - (long)puVar17;
          while (uVar11 = lVar9 >> 3, 2 < uVar11) {
            __ZdlPv(*puVar17);
            puVar17 = (undefined8 *)(param_1[0x79] + 8);
            param_1[0x79] = puVar17;
            puVar18 = (undefined8 *)param_1[0x7a];
            lVar9 = (long)puVar18 - (long)puVar17;
          }
        }
        if (uVar11 == 1) {
          uVar10 = 9;
        }
        else {
          if (uVar11 != 2) goto LAB_10b30a170;
          uVar10 = 0x12;
        }
        param_1[0x7c] = uVar10;
LAB_10b30a170:
        if (puVar17 != puVar18) {
          do {
            puVar19 = puVar17 + 1;
            __ZdlPv(*puVar17);
            puVar17 = puVar19;
          } while (puVar19 != puVar18);
          lVar9 = param_1[0x7a];
          if (lVar9 != param_1[0x79]) {
            param_1[0x7a] = lVar9 + ((param_1[0x79] - lVar9) + 7U & 0xfffffffffffffff8);
          }
        }
        if (param_1[0x78] != 0) {
          __ZdlPv();
        }
        func_0x000107c2ccf0(param_1[0x75]);
        func_0x000107c2ccf0(param_1[0x72]);
        FUN_10b30d2e4(param_1[0x6f]);
        plVar7 = (long *)param_1[0x6b];
        param_1[0x6b] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        plVar7 = (long *)param_1[0x6a];
        param_1[0x6a] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        do {
          plVar7 = (long *)param_1[0x65];
          do {
            if (plVar7 == param_1 + 100) {
              if (param_1[0x61] != 0) {
                param_1[0x62] = param_1[0x61];
                __ZdlPv();
              }
              do {
                plVar7 = (long *)param_1[0x5e];
                do {
                  if (plVar7 == param_1 + 0x5d) {
                    if (param_1[0x5a] != 0) {
                      param_1[0x5b] = param_1[0x5a];
                      __ZdlPv();
                    }
                    param_1[0x23] = &PTR_DAT_110cd5800;
                    func_0x00010b316174(param_1 + 0x41);
                    func_0x00010b316174(param_1 + 0x2a);
                    piVar6 = (int *)param_1[0x24];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    uVar11 = param_1[0x13];
                    uVar14 = param_1[0x14];
                    if (uVar14 != uVar11) {
                      uVar13 = param_1[0x12];
                      if (uVar11 < uVar14) {
                        if (uVar13 < uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5dc);
                          (*pcVar2)();
                        }
                        if (uVar13 < uVar14) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5e8);
                          (*pcVar2)();
                        }
                        if ((long)uVar14 < (long)uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5f4);
                          (*pcVar2)();
                        }
                        lVar9 = param_1[0x11];
                        puVar17 = (undefined8 *)(lVar9 + uVar11 * 0xb0);
                        do {
                          piVar6 = (int *)puVar17[0x12];
                          if (piVar6 != (int *)0x0) {
                            do {
                              iVar4 = *piVar6;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                              if (bVar3) {
                                *piVar6 = iVar4 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 + -1 == 0) {
                              __ZdlPv();
                            }
                          }
                          plVar7 = (long *)puVar17[0x10];
                          if (plVar7 != (long *)0x0) {
                            plVar5 = plVar7 + 1;
                            do {
                              iVar4 = (int)*plVar5 + -1;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                              if (bVar3) {
                                *(int *)plVar5 = iVar4;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 == 0) {
                              (**(code **)(*plVar7 + 0x18))();
                            }
                          }
                          piVar6 = (int *)*puVar17;
                          if (piVar6 != (int *)0x0) {
                            do {
                              iVar4 = *piVar6;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                              if (bVar3) {
                                *piVar6 = iVar4 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 + -1 == 0) {
                              (**(code **)(piVar6 + 4))();
                            }
                          }
                          puVar17 = puVar17 + 0x16;
                        } while (puVar17 != (undefined8 *)(lVar9 + uVar14 * 0xb0));
                      }
                      else {
                        if (uVar13 < uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a600);
                          (*pcVar2)();
                        }
                        if ((long)uVar13 < (long)uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a60c);
                          (*pcVar2)();
                        }
                        puVar17 = (undefined8 *)param_1[0x11];
                        if (uVar13 != uVar11) {
                          puVar18 = puVar17 + uVar11 * 0x16;
                          do {
                            piVar6 = (int *)puVar18[0x12];
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                __ZdlPv();
                              }
                            }
                            plVar7 = (long *)puVar18[0x10];
                            if (plVar7 != (long *)0x0) {
                              plVar5 = plVar7 + 1;
                              do {
                                iVar4 = (int)*plVar5 + -1;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                                if (bVar3) {
                                  *(int *)plVar5 = iVar4;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 == 0) {
                                (**(code **)(*plVar7 + 0x18))();
                              }
                            }
                            piVar6 = (int *)*puVar18;
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                (**(code **)(piVar6 + 4))();
                              }
                            }
                            puVar18 = puVar18 + 0x16;
                          } while (puVar18 != puVar17 + uVar13 * 0x16);
                          puVar17 = (undefined8 *)param_1[0x11];
                          uVar11 = param_1[0x12];
                        }
                        if (uVar11 < uVar14) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a618);
                          (*pcVar2)();
                        }
                        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a624);
                          (*pcVar2)();
                        }
                        if (uVar14 != 0) {
                          puVar18 = puVar17 + uVar14 * 0x16;
                          do {
                            piVar6 = (int *)puVar17[0x12];
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                __ZdlPv();
                              }
                            }
                            plVar7 = (long *)puVar17[0x10];
                            if (plVar7 != (long *)0x0) {
                              plVar5 = plVar7 + 1;
                              do {
                                iVar4 = (int)*plVar5 + -1;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                                if (bVar3) {
                                  *(int *)plVar5 = iVar4;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 == 0) {
                                (**(code **)(*plVar7 + 0x18))();
                              }
                            }
                            piVar6 = (int *)*puVar17;
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                (**(code **)(piVar6 + 4))();
                              }
                            }
                            puVar17 = puVar17 + 0x16;
                          } while (puVar17 != puVar18);
                        }
                      }
                    }
                    _free(param_1[0x11]);
                    lVar9 = param_1[0xd];
                    param_1[0xd] = 0;
                    if (lVar9 != 0) {
                      func_0x00010b309b38();
                      __ZdlPv();
                    }
                    piVar6 = (int *)param_1[0xc];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    plVar7 = (long *)param_1[6];
                    param_1[6] = 0;
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 8))();
                    }
                    piVar6 = (int *)param_1[4];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    return param_1;
                  }
                } while (plVar7[2] == 0);
                plVar7[2] = 0;
                plVar5 = (long *)plVar7[1];
                *(long **)(*plVar7 + 8) = plVar5;
                *plVar5 = *plVar7;
                *plVar7 = 0;
                plVar7[1] = 0;
              } while( true );
            }
          } while (plVar7[2] == 0);
          plVar7[2] = 0;
          plVar5 = (long *)plVar7[1];
          *(long **)(*plVar7 + 8) = plVar5;
          *plVar5 = *plVar7;
          *plVar7 = 0;
          plVar7[1] = 0;
        } while( true );
      }
    } while (plVar5[2] == 0);
    plVar5[2] = 0;
    plVar15 = (long *)plVar5[1];
    *(long **)(*plVar5 + 8) = plVar15;
    *plVar15 = *plVar5;
    *plVar5 = 0;
    plVar5[1] = 0;
  } while( true );
}



/* Entry: 10b30a62c; end: 10b30a647;  */

/* WARNING: Removing unreachable block (ram,0x00010b309ebc) */

undefined8 * FUN_10b30a62c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  *param_1 = &PTR_FUN_110cd5438;
  param_1[1] = &PTR_DAT_110cd5578;
  param_1[2] = &PTR_DAT_110cd55c8;
  param_1[3] = &PTR_DAT_110cd55f0;
  if ((bRam0000000113370618 & 0x19) == 0) {
    iVar4 = *(int *)(param_1 + 7);
  }
  else {
    func_0x00010b2ef0d0(0x44,0x113370618,&UNK_10f744725,0,param_1,0x800,0);
    iVar4 = *(int *)(param_1 + 7);
  }
  if ((iVar4 == 1) && (*(int *)(param_1[4] + 4) != 0)) {
    (**(code **)(*(long *)param_1[6] + 0x70))();
  }
  puVar18 = (undefined8 *)param_1[0x6e];
  puVar17 = param_1 + 0x6f;
  while (puVar18 != puVar17) {
    uVar10 = puVar18[4];
    func_0x00010b3142c0(param_1 + 0x23,uVar10);
    func_0x00010b30ec74(uVar10);
    puVar19 = (undefined8 *)puVar18[1];
    puVar20 = puVar18;
    if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
      do {
        puVar18 = (undefined8 *)puVar20[2];
        bVar3 = (undefined8 *)*puVar18 != puVar20;
        puVar20 = puVar18;
      } while (bVar3);
    }
    else {
      do {
        puVar18 = puVar19;
        puVar19 = (undefined8 *)*puVar18;
      } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
    }
  }
  (**(code **)(*(long *)param_1[6] + 0xa0))();
  FUN_10b30d2e4(param_1[0x6f]);
  param_1[0x6e] = puVar17;
  param_1[0x70] = 0;
  *puVar17 = 0;
  func_0x000107c2ccf0(param_1[0x72]);
  param_1[0x71] = param_1 + 0x72;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x59] = 0;
  if ((*(byte *)((long)param_1 + 0x3b9) & 1) != 0) {
    (**(code **)(*(long *)param_1[6] + 0xb0))((long *)param_1[6],param_1 + 3);
  }
  plVar7 = param_1 + 0x7f;
  if (param_1[0x7f] == param_1[0x80]) goto LAB_10b309ee8;
  plStack_70 = param_1 + 0x82;
  lStack_78 = param_1[0x82];
  *(long **)(lStack_78 + 8) = &lStack_78;
  param_1[0x82] = &lStack_78;
  uStack_60 = 0;
  if (*(int *)(param_1 + 0x85) == 0) {
    uStack_58 = 0xffffffffffffffff;
  }
  else {
    uStack_58 = (long)(param_1[0x80] - param_1[0x7f]) >> 3;
  }
  uVar11 = param_1[0x80] - *plVar7 >> 3;
  if (uStack_58 <= uVar11) {
    uVar11 = uStack_58;
  }
  uVar14 = 0;
  if (uVar11 != 0) {
    do {
      uVar14 = uStack_60;
      if (*(long *)(*plVar7 + uStack_60 * 8) != 0) break;
      uStack_60 = uStack_60 + 1;
      uVar14 = uVar11;
    } while (uVar11 != uStack_60);
  }
  plStack_68 = plVar7;
  if (plVar7 == (long *)0x0) goto LAB_10b309ee8;
  plVar5 = param_1 + 0x80;
  plVar12 = (long *)*plVar5;
  plVar15 = (long *)*plVar7;
  uVar11 = (long)plVar12 - (long)plVar15 >> 3;
  if (uStack_58 <= uVar11) {
    uVar11 = uStack_58;
  }
  if (uVar14 == uVar11) {
    if (param_1[0x83] == param_1[0x82]) {
LAB_10b309e4c:
      if (plVar15 == plVar12) {
LAB_10b309ea4:
        if (plVar15 != plVar12) {
          *plVar5 = (long)plVar15;
        }
      }
      else {
        do {
          if (*plVar15 == 0) {
            if ((plVar15 != plVar12) && (plVar8 = plVar15 + 1, plVar16 = plVar15, plVar8 != plVar12)
               ) {
              do {
                plVar15 = plVar16;
                if (*plVar8 != 0) {
                  plVar15 = plVar16 + 1;
                  *plVar16 = *plVar8;
                }
                plVar8 = plVar8 + 1;
                plVar16 = plVar15;
              } while (plVar8 != plVar12);
              plVar12 = (long *)*plVar5;
            }
            goto LAB_10b309ea4;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar12);
      }
    }
  }
  else {
    do {
      (*(code *)**(undefined8 **)plVar15[uVar14])();
      if (plStack_68 == (long *)0x0) goto LAB_10b309ee8;
      uStack_60 = uStack_60 + 1;
      uVar11 = plStack_68[1] - *plStack_68 >> 3;
      if (uStack_58 <= uVar11) {
        uVar11 = uStack_58;
      }
      uVar14 = uStack_60;
      if (uStack_60 < uVar11) {
        do {
          uVar14 = uStack_60;
          if (*(long *)(*plStack_68 + uStack_60 * 8) != 0) break;
          uStack_60 = uStack_60 + 1;
          uVar14 = uVar11;
        } while (uVar11 != uStack_60);
      }
      plVar15 = (long *)*plStack_68;
      plVar12 = (long *)plStack_68[1];
      uVar11 = (long)plVar12 - (long)plVar15 >> 3;
      if (uStack_58 <= uVar11) {
        uVar11 = uStack_58;
      }
    } while (uVar14 != uVar11);
    plVar5 = plStack_68 + 1;
    if (plStack_68[4] == plStack_68[3]) goto LAB_10b309e4c;
  }
  if (plStack_68 != (long *)0x0) {
    plStack_68 = (long *)0x0;
    *(long **)(lStack_78 + 8) = plStack_70;
    *plStack_70 = lStack_78;
  }
LAB_10b309ee8:
  plVar5 = (long *)param_1[6];
  (**(code **)(*plVar5 + 0x58))();
  if (plVar5 != (long *)0x0) {
    if ((bRam000000011383ad00 & 1) == 0) {
      iVar4 = 0x1383ad00;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam000000011383acf8 = 0xffffffff;
        func_0x000107c2ce58(0x11383acf8,0);
        ___cxa_guard_release(0x11383ad00);
      }
    }
    uVar11 = uRam000000011336f908;
    _pthread_getspecific();
    uVar11 = uVar11 & 0xfffffffffffffffc;
    if (uVar11 != 0) {
      *(undefined8 *)(uVar11 + (long)(int)uRam000000011383acf8 * 0x10) = 0;
      *(undefined4 *)(uVar11 + (long)(int)uRam000000011383acf8 * 0x10 + 8) =
           uRam000000011383acf8._4_4_;
    }
  }
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1[0x8b] + 4) = 1;
  piVar6 = (int *)param_1[0x8b];
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      __ZdlPv();
    }
  }
  func_0x00010b30d320(param_1[0x88]);
  piVar6 = (int *)param_1[0x86];
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(piVar6 + 4))();
    }
  }
  do {
    plVar5 = (long *)param_1[0x83];
    do {
      if (plVar5 == param_1 + 0x82) {
        if (*plVar7 != 0) {
          param_1[0x80] = *plVar7;
          __ZdlPv();
        }
        puVar17 = (undefined8 *)param_1[0x79];
        puVar18 = (undefined8 *)param_1[0x7a];
        if (puVar18 == puVar17) {
          param_1[0x7d] = 0;
          uVar11 = 0;
          puVar18 = puVar17;
        }
        else {
          uVar11 = param_1[0x7c];
          plVar7 = puVar17 + uVar11 / 0x12;
          puVar19 = (undefined8 *)(*plVar7 + (uVar11 % 0x12) * 0xe0);
          puVar20 = (undefined8 *)
                    (puVar17[(param_1[0x7d] + uVar11) / 0x12] +
                    ((param_1[0x7d] + uVar11) % 0x12) * 0xe0);
          if (puVar19 != puVar20) {
            do {
              piVar6 = (int *)puVar19[0x12];
              if (piVar6 != (int *)0x0) {
                do {
                  iVar4 = *piVar6;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar3) {
                    *piVar6 = iVar4 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 + -1 == 0) {
                  __ZdlPv();
                }
              }
              plVar5 = (long *)puVar19[0x10];
              if (plVar5 != (long *)0x0) {
                plVar15 = plVar5 + 1;
                do {
                  iVar4 = (int)*plVar15 + -1;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *(int *)plVar15 = iVar4;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 == 0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
              }
              piVar6 = (int *)*puVar19;
              if (piVar6 != (int *)0x0) {
                do {
                  iVar4 = *piVar6;
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar3) {
                    *piVar6 = iVar4 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar4 + -1 == 0) {
                  (**(code **)(piVar6 + 4))();
                }
              }
              puVar19 = puVar19 + 0x1c;
              if ((long)puVar19 - *plVar7 == 0xfc0) {
                plVar7 = plVar7 + 1;
                puVar19 = (undefined8 *)*plVar7;
              }
            } while (puVar19 != puVar20);
            puVar18 = (undefined8 *)param_1[0x7a];
            puVar17 = (undefined8 *)param_1[0x79];
          }
          param_1[0x7d] = 0;
          lVar9 = (long)puVar18 - (long)puVar17;
          while (uVar11 = lVar9 >> 3, 2 < uVar11) {
            __ZdlPv(*puVar17);
            puVar17 = (undefined8 *)(param_1[0x79] + 8);
            param_1[0x79] = puVar17;
            puVar18 = (undefined8 *)param_1[0x7a];
            lVar9 = (long)puVar18 - (long)puVar17;
          }
        }
        if (uVar11 == 1) {
          uVar10 = 9;
        }
        else {
          if (uVar11 != 2) goto LAB_10b30a170;
          uVar10 = 0x12;
        }
        param_1[0x7c] = uVar10;
LAB_10b30a170:
        if (puVar17 != puVar18) {
          do {
            puVar19 = puVar17 + 1;
            __ZdlPv(*puVar17);
            puVar17 = puVar19;
          } while (puVar19 != puVar18);
          lVar9 = param_1[0x7a];
          if (lVar9 != param_1[0x79]) {
            param_1[0x7a] = lVar9 + ((param_1[0x79] - lVar9) + 7U & 0xfffffffffffffff8);
          }
        }
        if (param_1[0x78] != 0) {
          __ZdlPv();
        }
        func_0x000107c2ccf0(param_1[0x75]);
        func_0x000107c2ccf0(param_1[0x72]);
        FUN_10b30d2e4(param_1[0x6f]);
        plVar7 = (long *)param_1[0x6b];
        param_1[0x6b] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        plVar7 = (long *)param_1[0x6a];
        param_1[0x6a] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        do {
          plVar7 = (long *)param_1[0x65];
          do {
            if (plVar7 == param_1 + 100) {
              if (param_1[0x61] != 0) {
                param_1[0x62] = param_1[0x61];
                __ZdlPv();
              }
              do {
                plVar7 = (long *)param_1[0x5e];
                do {
                  if (plVar7 == param_1 + 0x5d) {
                    if (param_1[0x5a] != 0) {
                      param_1[0x5b] = param_1[0x5a];
                      __ZdlPv();
                    }
                    param_1[0x23] = &PTR_DAT_110cd5800;
                    func_0x00010b316174(param_1 + 0x41);
                    func_0x00010b316174(param_1 + 0x2a);
                    piVar6 = (int *)param_1[0x24];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    uVar11 = param_1[0x13];
                    uVar14 = param_1[0x14];
                    if (uVar14 != uVar11) {
                      uVar13 = param_1[0x12];
                      if (uVar11 < uVar14) {
                        if (uVar13 < uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5dc);
                          (*pcVar2)();
                        }
                        if (uVar13 < uVar14) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5e8);
                          (*pcVar2)();
                        }
                        if ((long)uVar14 < (long)uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a5f4);
                          (*pcVar2)();
                        }
                        lVar9 = param_1[0x11];
                        puVar17 = (undefined8 *)(lVar9 + uVar11 * 0xb0);
                        do {
                          piVar6 = (int *)puVar17[0x12];
                          if (piVar6 != (int *)0x0) {
                            do {
                              iVar4 = *piVar6;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                              if (bVar3) {
                                *piVar6 = iVar4 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 + -1 == 0) {
                              __ZdlPv();
                            }
                          }
                          plVar7 = (long *)puVar17[0x10];
                          if (plVar7 != (long *)0x0) {
                            plVar5 = plVar7 + 1;
                            do {
                              iVar4 = (int)*plVar5 + -1;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                              if (bVar3) {
                                *(int *)plVar5 = iVar4;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 == 0) {
                              (**(code **)(*plVar7 + 0x18))();
                            }
                          }
                          piVar6 = (int *)*puVar17;
                          if (piVar6 != (int *)0x0) {
                            do {
                              iVar4 = *piVar6;
                              cVar1 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                              if (bVar3) {
                                *piVar6 = iVar4 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (iVar4 + -1 == 0) {
                              (**(code **)(piVar6 + 4))();
                            }
                          }
                          puVar17 = puVar17 + 0x16;
                        } while (puVar17 != (undefined8 *)(lVar9 + uVar14 * 0xb0));
                      }
                      else {
                        if (uVar13 < uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a600);
                          (*pcVar2)();
                        }
                        if ((long)uVar13 < (long)uVar11) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a60c);
                          (*pcVar2)();
                        }
                        puVar17 = (undefined8 *)param_1[0x11];
                        if (uVar13 != uVar11) {
                          puVar18 = puVar17 + uVar11 * 0x16;
                          do {
                            piVar6 = (int *)puVar18[0x12];
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                __ZdlPv();
                              }
                            }
                            plVar7 = (long *)puVar18[0x10];
                            if (plVar7 != (long *)0x0) {
                              plVar5 = plVar7 + 1;
                              do {
                                iVar4 = (int)*plVar5 + -1;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                                if (bVar3) {
                                  *(int *)plVar5 = iVar4;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 == 0) {
                                (**(code **)(*plVar7 + 0x18))();
                              }
                            }
                            piVar6 = (int *)*puVar18;
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                (**(code **)(piVar6 + 4))();
                              }
                            }
                            puVar18 = puVar18 + 0x16;
                          } while (puVar18 != puVar17 + uVar13 * 0x16);
                          puVar17 = (undefined8 *)param_1[0x11];
                          uVar11 = param_1[0x12];
                        }
                        if (uVar11 < uVar14) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a618);
                          (*pcVar2)();
                        }
                        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30a624);
                          (*pcVar2)();
                        }
                        if (uVar14 != 0) {
                          puVar18 = puVar17 + uVar14 * 0x16;
                          do {
                            piVar6 = (int *)puVar17[0x12];
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                __ZdlPv();
                              }
                            }
                            plVar7 = (long *)puVar17[0x10];
                            if (plVar7 != (long *)0x0) {
                              plVar5 = plVar7 + 1;
                              do {
                                iVar4 = (int)*plVar5 + -1;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                                if (bVar3) {
                                  *(int *)plVar5 = iVar4;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 == 0) {
                                (**(code **)(*plVar7 + 0x18))();
                              }
                            }
                            piVar6 = (int *)*puVar17;
                            if (piVar6 != (int *)0x0) {
                              do {
                                iVar4 = *piVar6;
                                cVar1 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                                if (bVar3) {
                                  *piVar6 = iVar4 + -1;
                                  cVar1 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar1 != '\0');
                              if (iVar4 + -1 == 0) {
                                (**(code **)(piVar6 + 4))();
                              }
                            }
                            puVar17 = puVar17 + 0x16;
                          } while (puVar17 != puVar18);
                        }
                      }
                    }
                    _free(param_1[0x11]);
                    lVar9 = param_1[0xd];
                    param_1[0xd] = 0;
                    if (lVar9 != 0) {
                      func_0x00010b309b38();
                      __ZdlPv();
                    }
                    piVar6 = (int *)param_1[0xc];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    plVar7 = (long *)param_1[6];
                    param_1[6] = 0;
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 8))();
                    }
                    piVar6 = (int *)param_1[4];
                    if (piVar6 != (int *)0x0) {
                      do {
                        iVar4 = *piVar6;
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                          *piVar6 = iVar4 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (iVar4 + -1 == 0) {
                        __ZdlPv();
                      }
                    }
                    return param_1;
                  }
                } while (plVar7[2] == 0);
                plVar7[2] = 0;
                plVar5 = (long *)plVar7[1];
                *(long **)(*plVar7 + 8) = plVar5;
                *plVar5 = *plVar7;
                *plVar7 = 0;
                plVar7[1] = 0;
              } while( true );
            }
          } while (plVar7[2] == 0);
          plVar7[2] = 0;
          plVar5 = (long *)plVar7[1];
          *(long **)(*plVar7 + 8) = plVar5;
          *plVar5 = *plVar7;
          *plVar7 = 0;
          plVar7[1] = 0;
        } while( true );
      }
    } while (plVar5[2] == 0);
    plVar5[2] = 0;
    plVar15 = (long *)plVar5[1];
    *(long **)(*plVar5 + 8) = plVar15;
    *plVar15 = *plVar5;
    *plVar5 = 0;
    plVar5[1] = 0;
  } while( true );
}



/* Entry: 10b30a648; end: 10b30a6a3;  */

void FUN_10b30a648(void)

{
  FUN_10b309ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b30a6a4; end: 10b30a797;  */

void FUN_10b30a6a4(long param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar6;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar6 = param_1;
  _pthread_self();
  uVar4 = (undefined4)lVar6;
  _pthread_mach_thread_np();
  puVar1 = (undefined4 *)(lVar9 + 4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))(*(long **)(param_1 + 0x30),param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x3b9) = 1;
  plVar7 = *(long **)(param_1 + 0x30);
  (**(code **)(*plVar7 + 0x58))();
  if (plVar7 != (long *)0x0) {
    if ((bRam000000011383ad00 & 1) == 0) {
      iVar5 = 0x1383ad00;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam000000011383acf8 = 0xffffffff;
        func_0x000107c2ce58(0x11383acf8,0);
        ___cxa_guard_release(0x11383ad00);
      }
    }
    uVar8 = uRam000000011336f908;
    _pthread_getspecific();
    uVar8 = uVar8 & 0xfffffffffffffffc;
    if (uVar8 == 0) {
      if (param_1 == 0) {
        return;
      }
      func_0x000107c35cb8();
    }
    *(long *)(uVar8 + (long)(int)uRam000000011383acf8 * 0x10) = param_1;
    *(undefined4 *)(uVar8 + (long)(int)uRam000000011383acf8 * 0x10 + 8) = uRam000000011383acf8._4_4_
    ;
  }
  return;
}



/* Entry: 10b30a798; end: 10b30a803;  */

long FUN_10b30a798(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 1000) != 0) {
    uVar5 = (*(long *)(param_1 + 1000) + *(long *)(param_1 + 0x3e0)) - 1;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x3c8) + (uVar5 / 0x12) * 8) +
                      (uVar5 % 0x12) * 0xe0 + 0x80);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return lVar4;
  }
  return 0;
}



/* Entry: 10b30a804; end: 10b30a883;  */

void FUN_10b30a804(long param_1,long param_2)

{
  *(long *)(param_2 + 8) = param_1;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x90))();
  *(long *)(param_1 + 0x348) = param_2;
  *(long *)(param_1 + 0x450) = param_2;
  return;
}



/* Entry: 10b30a884; end: 10b30a88b;  */

void FUN_10b30a884(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3f0) = param_2;
  return;
}



/* Entry: 10b30a88c; end: 10b30a97b;  */

void FUN_10b30a88c(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar5 = *param_2;
  puVar3 = *(undefined8 **)(param_1 + 0x390);
  if (*(undefined8 **)(param_1 + 0x390) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x390);
    puVar6 = (undefined8 *)(param_1 + 0x390);
  }
  else {
    do {
      while (puVar1 = puVar3, puVar4 = puVar1, (ulong)puVar1[4] <= uVar5) {
        if (uVar5 <= (ulong)puVar1[4]) goto LAB_10b30a940;
        puVar3 = (undefined8 *)puVar1[1];
        if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
          puVar6 = puVar1 + 1;
          goto LAB_10b30a8f0;
        }
      }
      puVar3 = (undefined8 *)*puVar1;
      puVar6 = puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
LAB_10b30a8f0:
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[4] = uVar5;
  puVar1[5] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = puVar4;
  *puVar6 = puVar1;
  puVar3 = puVar1;
  if (**(long **)(param_1 + 0x388) != 0) {
    *(long *)(param_1 + 0x388) = **(long **)(param_1 + 0x388);
    puVar3 = (undefined8 *)*puVar6;
  }
  func_0x000107c2ca68(*(undefined8 *)(param_1 + 0x390),puVar3);
  *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + 1;
  uVar5 = *param_2;
LAB_10b30a940:
  *param_2 = 0;
  lVar2 = puVar1[5];
  puVar1[5] = uVar5;
  if (lVar2 != 0) {
    func_0x00010b30e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b30a97c; end: 10b30ad9b;  */

void FUN_10b30a97c(long param_1,ulong *param_2)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uStack_68;
  
  bVar1 = bRam0000000113370088 & 0x19;
  if ((bRam0000000113370088 & 0x19) == 0) {
    pcVar10 = (char *)0x0;
    puVar11 = (undefined *)0xaaaaaaaaaaaaaaaa;
    uVar12 = 0xaaaaaaaaaaaaaaaa;
  }
  else {
    uStack_68 = *(undefined8 *)*param_2;
    pcVar10 = (char *)0x113370088;
    puVar11 = &UNK_10f744735;
    uVar12 = 0x58;
    func_0x00010b30abc4(0x58,0x113370088,&UNK_10f744735,0,0,0,0,&DAT_10f74475e,&uStack_68);
  }
  func_0x00010b3142c0(param_1 + 0x118,*param_2);
  func_0x00010b30ec74(*param_2);
  uVar15 = *param_2;
  plVar4 = *(long **)(param_1 + 0x378);
  if (plVar4 != (long *)0x0) {
    plVar9 = plVar4;
    plVar13 = (long *)(param_1 + 0x378);
    do {
      lVar6 = 8;
      if (uVar15 <= (ulong)plVar9[4]) {
        lVar6 = 0;
        plVar13 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar6);
    } while (plVar9 != (long *)0x0);
    if ((plVar13 != (long *)(param_1 + 0x378)) && ((ulong)plVar13[4] <= uVar15)) {
      plVar9 = plVar13;
      plVar2 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar3 = (long *)*plVar8 != plVar9;
          plVar9 = plVar8;
        } while (bVar3);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x370) == plVar13) {
        *(long **)(param_1 + 0x370) = plVar8;
      }
      *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + -1;
      func_0x000107c2ca70(plVar4,plVar13);
      __ZdlPv(plVar13);
      uVar15 = *param_2;
      puVar7 = *(undefined8 **)(param_1 + 0x3a8);
      goto joined_r0x00010b30aa24;
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x3a8);
joined_r0x00010b30aa24:
  if (puVar7 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(param_1 + 0x3a8);
    puVar16 = (undefined8 *)(param_1 + 0x3a8);
  }
  else {
    do {
      while (puVar5 = puVar7, puVar14 = puVar5, uVar15 < (ulong)puVar5[4]) {
        puVar7 = (undefined8 *)*puVar5;
        puVar16 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_10b30aad0;
      }
      if (uVar15 <= (ulong)puVar5[4]) goto LAB_10b30ab20;
      puVar7 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    puVar16 = puVar5 + 1;
  }
LAB_10b30aad0:
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[4] = uVar15;
  puVar5[5] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = puVar14;
  *puVar16 = puVar5;
  puVar7 = puVar5;
  if (**(long **)(param_1 + 0x3a0) != 0) {
    *(long *)(param_1 + 0x3a0) = **(long **)(param_1 + 0x3a0);
    puVar7 = (undefined8 *)*puVar16;
  }
  func_0x000107c2ca68(*(undefined8 *)(param_1 + 0x3a8),puVar7);
  *(long *)(param_1 + 0x3b0) = *(long *)(param_1 + 0x3b0) + 1;
  uVar15 = *param_2;
LAB_10b30ab20:
  *param_2 = 0;
  lVar6 = puVar5[5];
  puVar5[5] = uVar15;
  if (lVar6 != 0) {
    func_0x00010b30e7a0();
    __ZdlPv();
  }
  if ((bVar1 != 0) && (*pcVar10 != '\0')) {
    func_0x00010b3356b0(pcVar10,puVar11,uVar12);
  }
  return;
}



/* Entry: 10b30ad9c; end: 10b30ade3;  */

void FUN_10b30ad9c(long param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (*(long **)(param_1 + 0x3f0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b30adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x3f0) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b30ade4; end: 10b30b193;  */

void FUN_10b30ade4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int *piStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined8 uStack_b3;
  undefined8 uStack_ab;
  undefined1 uStack_a3;
  long *plStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = *(int *)(param_1 + 0x80) + -1;
  *(int *)(param_1 + 0x80) = iVar5;
  if (iVar5 == 0) {
    plVar19 = *(long **)(param_1 + 0x450);
    uVar17 = *(ulong *)(param_1 + 0xa0);
    if (*(ulong *)(param_1 + 0x98) != uVar17) {
      bVar12 = false;
      plVar14 = (long *)0x0;
      plVar13 = (long *)(param_1 + 0x88);
      uVar15 = *(ulong *)(param_1 + 0x90);
      do {
        uVar11 = uVar15;
        if (uVar17 != 0) {
          uVar11 = uVar17;
        }
        if (uVar15 < uVar11 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b174);
          (*pcVar7)();
        }
        puVar16 = (undefined8 *)(*plVar13 + (uVar11 - 1) * 0xb0);
        plVar9 = puVar16 + 5;
        if (*plVar9 != 0) {
          if (!bVar12) {
            plVar14 = plVar19;
            (**(code **)(*plVar19 + 0x10))();
          }
          *plVar9 = (long)plVar14;
          bVar12 = true;
        }
        piStack_120 = (int *)*puVar16;
        *puVar16 = 0;
        uStack_110 = puVar16[2];
        uStack_118 = puVar16[1];
        uStack_100 = puVar16[4];
        uStack_108 = puVar16[3];
        uStack_d0 = puVar16[10];
        uStack_d8 = puVar16[9];
        uStack_c8 = puVar16[0xb];
        uStack_e0 = puVar16[8];
        uStack_e8 = puVar16[7];
        uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)puVar16 + 0x65) >> 0x18);
        uStack_c0 = (undefined5)puVar16[0xc];
        uStack_bb = (undefined3)((ulong)puVar16[0xc] >> 0x28);
        uStack_f0 = puVar16[6];
        lStack_f8 = *plVar9;
        uStack_ab = *(undefined8 *)((long)puVar16 + 0x75);
        uStack_b3 = *(undefined8 *)((long)puVar16 + 0x6d);
        uStack_a3 = *(undefined1 *)((long)puVar16 + 0x7d);
        plStack_a0 = (long *)puVar16[0x10];
        puVar16[0x10] = 0;
        uStack_98 = puVar16[0x11];
        piStack_90 = (int *)puVar16[0x12];
        puVar16[0x12] = 0;
        uStack_88 = puVar16[0x13];
        uStack_80 = puVar16[0x14];
        uStack_78 = *(undefined4 *)(puVar16 + 0x15);
        func_0x00010b311df8(puVar16[0x14],&piStack_120);
        if (piStack_90 != (int *)0x0) {
          do {
            iVar5 = *piStack_90;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_90,0x10);
            if (bVar4) {
              *piStack_90 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            __ZdlPv();
          }
        }
        if (plStack_a0 != (long *)0x0) {
          plVar9 = plStack_a0 + 1;
          do {
            iVar5 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plStack_a0 + 0x18))();
          }
        }
        if (piStack_120 != (int *)0x0) {
          do {
            iVar5 = *piStack_120;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_120,0x10);
            if (bVar4) {
              *piStack_120 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piStack_120 + 4))();
          }
        }
        uVar15 = *(ulong *)(param_1 + 0x90);
        uVar17 = uVar15;
        if (*(ulong *)(param_1 + 0xa0) != 0) {
          uVar17 = *(ulong *)(param_1 + 0xa0);
        }
        uVar11 = uVar17 - 1;
        *(ulong *)(param_1 + 0xa0) = uVar11;
        if (uVar15 < uVar11) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b180);
          (*pcVar7)();
        }
        if (uVar15 < uVar17) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b18c);
          (*pcVar7)();
        }
        if (uVar17 == 0x8000000000000000) goto LAB_10b30b164;
        puVar16 = (undefined8 *)(*plVar13 + uVar11 * 0xb0);
        piVar8 = (int *)puVar16[0x12];
        if (piVar8 != (int *)0x0) {
          do {
            iVar5 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            __ZdlPv();
          }
        }
        plVar9 = (long *)puVar16[0x10];
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        piVar8 = (int *)*puVar16;
        if (piVar8 != (int *)0x0) {
          do {
            iVar5 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piVar8 + 4))();
          }
        }
        uVar15 = *(ulong *)(param_1 + 0x90);
        uVar18 = *(ulong *)(param_1 + 0x98);
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar15 - 1;
        }
        uVar17 = *(ulong *)(param_1 + 0xa0);
        if (3 < uVar11) {
          uVar2 = uVar15;
          if (uVar18 <= uVar17) {
            uVar2 = 0;
          }
          uVar2 = (uVar2 - uVar18) + uVar17;
          if (uVar2 <= uVar11 - uVar2) {
            uVar2 = uVar2 + (uVar2 >> 2);
            if (uVar2 < 4) {
              uVar2 = 3;
            }
            if (uVar2 < uVar11) {
              uVar15 = uVar2 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar15;
              if (SUB168(auVar6 * ZEXT816(0xb0),8) != 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10b30b170);
                (*pcVar7)();
              }
              lVar10 = uVar15 * 0xb0;
              _malloc();
              FUN_10b30d368(plVar13,uVar18,uVar17,lVar10,uVar15,(ulong *)(param_1 + 0x98),
                            (ulong *)(param_1 + 0xa0));
              _free(*(undefined8 *)(param_1 + 0x88));
              *(long *)(param_1 + 0x88) = lVar10;
              *(ulong *)(param_1 + 0x90) = uVar15;
              uVar18 = *(ulong *)(param_1 + 0x98);
              uVar17 = *(ulong *)(param_1 + 0xa0);
            }
          }
        }
      } while (uVar18 != uVar17);
    }
  }
  if (*(long **)(param_1 + 0x3f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x3f0) + 0x18))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10b30b164:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b168);
  (*pcVar7)();
}



/* Entry: 10b30b194; end: 10b30b19b;  */

void FUN_10b30b194(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int *piStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined8 uStack_b3;
  undefined8 uStack_ab;
  undefined1 uStack_a3;
  long *plStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar5;
  if (iVar5 == 0) {
    plVar19 = *(long **)(param_1 + 0x438);
    uVar17 = *(ulong *)(param_1 + 0x88);
    if (*(ulong *)(param_1 + 0x80) != uVar17) {
      bVar12 = false;
      plVar14 = (long *)0x0;
      plVar13 = (long *)(param_1 + 0x70);
      uVar15 = *(ulong *)(param_1 + 0x78);
      do {
        uVar11 = uVar15;
        if (uVar17 != 0) {
          uVar11 = uVar17;
        }
        if (uVar15 < uVar11 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b174);
          (*pcVar7)();
        }
        puVar16 = (undefined8 *)(*plVar13 + (uVar11 - 1) * 0xb0);
        plVar9 = puVar16 + 5;
        if (*plVar9 != 0) {
          if (!bVar12) {
            plVar14 = plVar19;
            (**(code **)(*plVar19 + 0x10))();
          }
          *plVar9 = (long)plVar14;
          bVar12 = true;
        }
        piStack_120 = (int *)*puVar16;
        *puVar16 = 0;
        uStack_110 = puVar16[2];
        uStack_118 = puVar16[1];
        uStack_100 = puVar16[4];
        uStack_108 = puVar16[3];
        uStack_d0 = puVar16[10];
        uStack_d8 = puVar16[9];
        uStack_c8 = puVar16[0xb];
        uStack_e0 = puVar16[8];
        uStack_e8 = puVar16[7];
        uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)puVar16 + 0x65) >> 0x18);
        uStack_c0 = (undefined5)puVar16[0xc];
        uStack_bb = (undefined3)((ulong)puVar16[0xc] >> 0x28);
        uStack_f0 = puVar16[6];
        lStack_f8 = *plVar9;
        uStack_ab = *(undefined8 *)((long)puVar16 + 0x75);
        uStack_b3 = *(undefined8 *)((long)puVar16 + 0x6d);
        uStack_a3 = *(undefined1 *)((long)puVar16 + 0x7d);
        plStack_a0 = (long *)puVar16[0x10];
        puVar16[0x10] = 0;
        uStack_98 = puVar16[0x11];
        piStack_90 = (int *)puVar16[0x12];
        puVar16[0x12] = 0;
        uStack_88 = puVar16[0x13];
        uStack_80 = puVar16[0x14];
        uStack_78 = *(undefined4 *)(puVar16 + 0x15);
        func_0x00010b311df8(puVar16[0x14],&piStack_120);
        if (piStack_90 != (int *)0x0) {
          do {
            iVar5 = *piStack_90;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_90,0x10);
            if (bVar4) {
              *piStack_90 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            __ZdlPv();
          }
        }
        if (plStack_a0 != (long *)0x0) {
          plVar9 = plStack_a0 + 1;
          do {
            iVar5 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plStack_a0 + 0x18))();
          }
        }
        if (piStack_120 != (int *)0x0) {
          do {
            iVar5 = *piStack_120;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_120,0x10);
            if (bVar4) {
              *piStack_120 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piStack_120 + 4))();
          }
        }
        uVar15 = *(ulong *)(param_1 + 0x78);
        uVar17 = uVar15;
        if (*(ulong *)(param_1 + 0x88) != 0) {
          uVar17 = *(ulong *)(param_1 + 0x88);
        }
        uVar11 = uVar17 - 1;
        *(ulong *)(param_1 + 0x88) = uVar11;
        if (uVar15 < uVar11) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b180);
          (*pcVar7)();
        }
        if (uVar15 < uVar17) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b18c);
          (*pcVar7)();
        }
        if (uVar17 == 0x8000000000000000) goto LAB_10b30b164;
        puVar16 = (undefined8 *)(*plVar13 + uVar11 * 0xb0);
        piVar8 = (int *)puVar16[0x12];
        if (piVar8 != (int *)0x0) {
          do {
            iVar5 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            __ZdlPv();
          }
        }
        plVar9 = (long *)puVar16[0x10];
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        piVar8 = (int *)*puVar16;
        if (piVar8 != (int *)0x0) {
          do {
            iVar5 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piVar8 + 4))();
          }
        }
        uVar15 = *(ulong *)(param_1 + 0x78);
        uVar18 = *(ulong *)(param_1 + 0x80);
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar15 - 1;
        }
        uVar17 = *(ulong *)(param_1 + 0x88);
        if (3 < uVar11) {
          uVar2 = uVar15;
          if (uVar18 <= uVar17) {
            uVar2 = 0;
          }
          uVar2 = (uVar2 - uVar18) + uVar17;
          if (uVar2 <= uVar11 - uVar2) {
            uVar2 = uVar2 + (uVar2 >> 2);
            if (uVar2 < 4) {
              uVar2 = 3;
            }
            if (uVar2 < uVar11) {
              uVar15 = uVar2 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar15;
              if (SUB168(auVar6 * ZEXT816(0xb0),8) != 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10b30b170);
                (*pcVar7)();
              }
              lVar10 = uVar15 * 0xb0;
              _malloc();
              FUN_10b30d368(plVar13,uVar18,uVar17,lVar10,uVar15,(ulong *)(param_1 + 0x80),
                            (ulong *)(param_1 + 0x88));
              _free(*(undefined8 *)(param_1 + 0x70));
              *(long *)(param_1 + 0x70) = lVar10;
              *(ulong *)(param_1 + 0x78) = uVar15;
              uVar18 = *(ulong *)(param_1 + 0x80);
              uVar17 = *(ulong *)(param_1 + 0x88);
            }
          }
        }
      } while (uVar18 != uVar17);
    }
  }
  if (*(long **)(param_1 + 0x3d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x3d8) + 0x18))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10b30b164:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0,0x10b30b168);
  (*pcVar7)();
}



/* Entry: 10b30b19c; end: 10b30b2eb;  */

void FUN_10b30b19c(undefined1 *param_1,long param_2,byte *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((*param_3 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(param_4 + 1) == '\x01') {
    plVar5 = (long *)param_4[2];
  }
  else {
    plVar5 = (long *)*param_4;
    (**(code **)(*plVar5 + 0x10))();
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      *(undefined1 *)(param_4 + 1) = 1;
    }
    param_4[2] = plVar5;
  }
  if ((*param_3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10b30b2e0);
    (*pcVar4)();
  }
  if (*(int *)(param_3 + 0x1c) == 1) {
    lVar1 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    if (lVar2 + 0x8000000000000001U < 2) {
      if (lVar1 == lVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10b30b2e4);
        (*pcVar4)();
      }
      uVar3 = lVar2 >> 0x3f ^ 0x8000000000000000;
    }
    else {
      uVar3 = lVar1 - lVar2 >> 0x3f ^ 0x8000000000000000;
      if (!SBORROW8(lVar1,lVar2)) {
        uVar3 = lVar1 - lVar2;
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_3 + 8);
  }
  if ((long)plVar5 < (long)uVar3) {
    if (*(long *)(param_2 + 0x348) != 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    *param_1 = 1;
    uVar6 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    return;
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b30b2ec; end: 10b30b50f;  */

void FUN_10b30b2ec(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  
  uVar3 = param_1;
  _pthread_self();
  _pthread_mach_thread_np();
  uVar4 = uVar3;
  func_0x000107c2d028();
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaa0301;
  alStack_68[0] = (long)*param_2;
  puStack_78 = &DAT_10f7447a0;
  alStack_68[1] = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = uVar4;
  if ((bRam000000011383cb48 & 1) == 0) {
    uVar4 = 0x11383cb48;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107c2d044(0x11383c6f0,0);
      uVar4 = 0x11383cb48;
      ___cxa_guard_release();
    }
  }
  iVar2 = (int)uVar4;
  alStack_68[2] = 0;
  _pthread_self();
  _pthread_mach_thread_np();
  if (iVar2 == (int)uVar3) {
    alStack_68[2] = 0;
  }
  func_0x00010b333ebc(0x11383c6f0,0x42,0x113370088,param_1,0,0,0,uVar3,&uStack_88,alStack_68 + 2,
                      &uStack_80,0);
  if ((char)uStack_80 != '\0') {
    uVar8 = 0;
    do {
      cVar1 = *(char *)(((ulong)&uStack_80 | 1) + uVar8);
      if (cVar1 == '\b') {
        if ((long *)alStack_68[uVar8] != (long *)0x0) {
          (**(code **)(*(long *)alStack_68[uVar8] + 8))();
          cVar1 = *(char *)(((ulong)&uStack_80 | 1) + uVar8);
          goto LAB_10b30b424;
        }
      }
      else {
LAB_10b30b424:
        if ((cVar1 == '\t') &&
           (puVar7 = (undefined8 *)alStack_68[uVar8], puVar7 != (undefined8 *)0x0)) {
          if (puVar7[0x17] != 0) {
            plVar9 = (long *)puVar7[0x16];
            plVar6 = *(long **)(puVar7[0x15] + 8);
            *(long **)(*plVar9 + 8) = plVar6;
            *plVar6 = *plVar9;
            puVar7[0x17] = 0;
            while (plVar9 != puVar7 + 0x15) {
              plVar9 = (long *)plVar9[1];
              __ZdlPv();
            }
          }
          *puVar7 = &PTR_DAT_110cd71d0;
          lVar5 = puVar7[7];
          puVar7[7] = 0;
          if (lVar5 != 0) {
            __ZdaPv();
          }
          plVar9 = (long *)puVar7[4];
          if (plVar9 != (long *)0x0) {
            plVar10 = (long *)puVar7[5];
            plVar6 = plVar9;
            if (plVar10 != plVar9) {
              do {
                plVar10 = plVar10 + -3;
                lVar5 = *plVar10;
                *plVar10 = 0;
                if (lVar5 != 0) {
                  __ZdaPv();
                }
              } while (plVar10 != plVar9);
              plVar6 = (long *)puVar7[4];
            }
            puVar7[5] = plVar9;
            __ZdlPv(plVar6);
          }
          __ZdlPv(puVar7);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uStack_80 & 0xff));
  }
  return;
}



/* Entry: 10b30b510; end: 10b30b53b;  */

undefined * FUN_10b30b510(int param_1)

{
  if (param_1 - 1U < 7) {
    return (&PTR_DAT_110cd5668)[(ulong)(param_1 - 1U) & 0xff];
  }
  return &UNK_10f744a6f;
}



/* Entry: 10b30b53c; end: 10b30b76b;  */

void FUN_10b30b53c(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  
  uVar3 = param_1;
  _pthread_self();
  _pthread_mach_thread_np();
  uVar4 = uVar3;
  func_0x000107c2d028();
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaa0801;
  alStack_68[0] = *param_2;
  *param_2 = 0;
  pcStack_78 = "snapshot";
  alStack_68[1] = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = uVar4;
  if ((bRam000000011383cb48 & 1) == 0) {
    uVar4 = 0x11383cb48;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107c2d044(0x11383c6f0,0);
      uVar4 = 0x11383cb48;
      ___cxa_guard_release();
    }
  }
  iVar2 = (int)uVar4;
  alStack_68[2] = 0;
  _pthread_self();
  _pthread_mach_thread_np();
  if (iVar2 == (int)uVar3) {
    alStack_68[2] = 0;
  }
  func_0x00010b333ebc(0x11383c6f0,0x4f,0x113370628,&UNK_10f744725,0,param_1,0,uVar3,&uStack_88,
                      alStack_68 + 2,&uStack_80,0x800);
  if ((char)uStack_80 != '\0') {
    uVar8 = 0;
    do {
      cVar1 = *(char *)(((ulong)&uStack_80 | 1) + uVar8);
      if (cVar1 == '\b') {
        if ((long *)alStack_68[uVar8] != (long *)0x0) {
          (**(code **)(*(long *)alStack_68[uVar8] + 8))();
          cVar1 = *(char *)(((ulong)&uStack_80 | 1) + uVar8);
          goto LAB_10b30b680;
        }
      }
      else {
LAB_10b30b680:
        if ((cVar1 == '\t') &&
           (puVar7 = (undefined8 *)alStack_68[uVar8], puVar7 != (undefined8 *)0x0)) {
          if (puVar7[0x17] != 0) {
            plVar9 = (long *)puVar7[0x16];
            plVar6 = *(long **)(puVar7[0x15] + 8);
            *(long **)(*plVar9 + 8) = plVar6;
            *plVar6 = *plVar9;
            puVar7[0x17] = 0;
            while (plVar9 != puVar7 + 0x15) {
              plVar9 = (long *)plVar9[1];
              __ZdlPv();
            }
          }
          *puVar7 = &PTR_DAT_110cd71d0;
          lVar5 = puVar7[7];
          puVar7[7] = 0;
          if (lVar5 != 0) {
            __ZdaPv();
          }
          plVar9 = (long *)puVar7[4];
          if (plVar9 != (long *)0x0) {
            plVar10 = (long *)puVar7[5];
            plVar6 = plVar9;
            if (plVar10 != plVar9) {
              do {
                plVar10 = plVar10 + -3;
                lVar5 = *plVar10;
                *plVar10 = 0;
                if (lVar5 != 0) {
                  __ZdaPv();
                }
              } while (plVar10 != plVar9);
              plVar6 = (long *)puVar7[4];
            }
            puVar7[5] = plVar9;
            __ZdlPv(plVar6);
          }
          __ZdlPv(puVar7);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uStack_80 & 0xff));
  }
  return;
}



/* Entry: 10b30b76c; end: 10b30b93b;  */

void FUN_10b30b76c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 **ppuStack_28;
  
  FUN_10b30c374(&puStack_70,param_2,param_3,0);
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  uVar1 = uStack_60;
  if (lStack_58 < 4) {
    if (lStack_58 == 1) {
      puStack_50 = (undefined1 *)CONCAT71(puStack_50._1_7_,puStack_70._0_1_);
      lStack_38 = 1;
      *puVar2 = &PTR_FUN_110cd5620;
      *(undefined1 *)(puVar2 + 1) = puStack_70._0_1_;
      goto LAB_10b30b8dc;
    }
    if (lStack_58 == 2) {
      puStack_50 = (undefined1 *)CONCAT44(puStack_50._4_4_,puStack_70._0_4_);
      lStack_38 = 2;
      *puVar2 = &PTR_FUN_110cd5620;
      *(undefined4 *)(puVar2 + 1) = puStack_70._0_4_;
      goto LAB_10b30b8dc;
    }
    if (lStack_58 == 3) {
      puStack_50 = puStack_70;
      lStack_38 = 3;
      *puVar2 = &PTR_FUN_110cd5620;
      puVar2[1] = puStack_70;
      goto LAB_10b30b8dc;
    }
LAB_10b30b864:
    lStack_38 = lStack_58;
    *puVar2 = &PTR_FUN_110cd5620;
    goto LAB_10b30b8dc;
  }
  if (lStack_58 < 6) {
    if (lStack_58 != 4) {
      if (lStack_58 != 5) goto LAB_10b30b864;
      lStack_38 = 5;
      goto LAB_10b30b8b8;
    }
    *puVar2 = &PTR_FUN_110cd5620;
    lStack_38 = 4;
LAB_10b30b89c:
    puVar2[2] = uStack_68;
    puVar2[1] = puStack_70;
  }
  else {
    if (lStack_58 != 6) {
      if (lStack_58 == 7) {
        lStack_38 = 7;
        *puVar2 = &PTR_FUN_110cd5620;
        goto LAB_10b30b89c;
      }
      goto LAB_10b30b864;
    }
    lStack_38 = 6;
LAB_10b30b8b8:
    *puVar2 = &PTR_FUN_110cd5620;
    puVar2[2] = uStack_68;
    puVar2[1] = puStack_70;
    puVar2[4] = 0xffffffffffffffff;
  }
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined1 *)0x0;
  puVar2[3] = uVar1;
  uStack_40 = 0;
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
LAB_10b30b8dc:
  puVar2[4] = lStack_58;
  ppuStack_28 = &puStack_50;
  func_0x000107c2cf54(&ppuStack_28);
  *param_1 = puVar2;
  puStack_50 = (undefined1 *)&puStack_70;
  func_0x000107c2cf54(&puStack_50,lStack_58);
  return;
}



/* Entry: 10b30b93c; end: 10b30bb1b;  */

void FUN_10b30b93c(long *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = param_1[2];
  puVar8 = (ulong *)(param_1 + 3);
  uVar9 = *puVar8;
  if (uVar9 < uVar11) {
    uVar10 = param_1[1];
    uVar4 = (uVar9 - uVar11) + uVar10 + 1;
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar10 - 1;
    }
    if (uVar6 < uVar4) {
LAB_10b30b9ac:
      uVar6 = uVar6 + (uVar6 >> 2);
      if (uVar4 <= uVar6) {
        uVar4 = uVar6;
      }
      if (uVar4 < 4) {
        uVar4 = 3;
      }
      uVar10 = uVar4 + 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      if (SUB168(auVar1 * ZEXT816(0xb0),8) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b30bb04);
        (*pcVar2)();
      }
      lVar3 = uVar10 * 0xb0;
      _malloc();
      FUN_10b30d368(param_1,uVar11,uVar9,lVar3,uVar10,param_1 + 2,puVar8);
      _free(*param_1);
      *param_1 = lVar3;
      param_1[1] = uVar10;
      uVar9 = param_1[3];
    }
  }
  else {
    uVar10 = param_1[1];
    uVar4 = (uVar9 - uVar11) + 1;
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar10 - 1;
    }
    if (uVar6 < uVar4) goto LAB_10b30b9ac;
  }
  if (uVar10 < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30bb08);
    (*pcVar2)();
  }
  puVar5 = (undefined8 *)(*param_1 + uVar9 * 0xb0);
  *puVar5 = *param_2;
  *param_2 = 0;
  uVar12 = param_2[2];
  uVar7 = param_2[1];
  uVar13 = param_2[3];
  puVar5[4] = param_2[4];
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  puVar5[1] = uVar7;
  uVar13 = param_2[10];
  uVar12 = param_2[9];
  uVar15 = param_2[0xc];
  uVar14 = param_2[0xb];
  uVar7 = *(undefined8 *)((long)param_2 + 0x65);
  uVar16 = param_2[7];
  puVar5[8] = param_2[8];
  puVar5[7] = uVar16;
  *(undefined8 *)((long)puVar5 + 0x65) = uVar7;
  puVar5[0xc] = uVar15;
  puVar5[0xb] = uVar14;
  puVar5[10] = uVar13;
  puVar5[9] = uVar12;
  uVar7 = param_2[5];
  puVar5[6] = param_2[6];
  puVar5[5] = uVar7;
  uVar12 = *(undefined8 *)((long)param_2 + 0x75);
  uVar7 = *(undefined8 *)((long)param_2 + 0x6d);
  *(undefined1 *)((long)puVar5 + 0x7d) = *(undefined1 *)((long)param_2 + 0x7d);
  *(undefined8 *)((long)puVar5 + 0x75) = uVar12;
  *(undefined8 *)((long)puVar5 + 0x6d) = uVar7;
  puVar5[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  puVar5[0x11] = param_2[0x11];
  puVar5[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  puVar5[0x13] = param_2[0x13];
  uVar7 = param_2[0x14];
  *(undefined4 *)(puVar5 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  puVar5[0x14] = uVar7;
  uVar9 = param_1[3];
  uVar11 = param_1[1] - 1;
  if (uVar9 == uVar11) {
    *puVar8 = 0;
  }
  else {
    *puVar8 = uVar9 + 1;
    if (uVar9 != 0xffffffffffffffff) goto LAB_10b30bae0;
  }
  uVar9 = uVar11;
LAB_10b30bae0:
  if ((ulong)param_1[1] < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b30bb14);
    (*pcVar2)();
  }
  return;
}



/* Entry: 10b30bb1c; end: 10b30bb47;  */

void FUN_10b30bb1c(void)

{
  return;
}



/* Entry: 10b30bb48; end: 10b30bd23;  */

undefined8
FUN_10b30bb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  uVar2 = param_1;
  _pthread_self();
  _pthread_mach_thread_np();
  uVar3 = uVar2;
  func_0x000107c2d028();
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  alStack_78[1] = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaa0401;
  alStack_78[0] = *param_9;
  uStack_98 = uVar3;
  uStack_88 = param_8;
  func_0x00010b3355ac(param_1,param_2,param_3,param_4,param_5,param_7,uVar2,&uStack_98,&uStack_90,
                      param_6);
  if ((char)uStack_90 != '\0') {
    uVar7 = 0;
    uVar8 = (ulong)&uStack_90 | 1;
    do {
      cVar1 = *(char *)(uVar8 + uVar7);
      if (cVar1 == '\b') {
        if ((long *)alStack_78[uVar7] != (long *)0x0) {
          (**(code **)(*(long *)alStack_78[uVar7] + 8))();
          cVar1 = *(char *)(uVar8 + uVar7);
          goto LAB_10b30bc60;
        }
      }
      else {
LAB_10b30bc60:
        if ((cVar1 == '\t') &&
           (puVar6 = (undefined8 *)alStack_78[uVar7], puVar6 != (undefined8 *)0x0)) {
          if (puVar6[0x17] != 0) {
            plVar9 = (long *)puVar6[0x16];
            plVar5 = *(long **)(puVar6[0x15] + 8);
            *(long **)(*plVar9 + 8) = plVar5;
            *plVar5 = *plVar9;
            puVar6[0x17] = 0;
            while (plVar9 != puVar6 + 0x15) {
              plVar9 = (long *)plVar9[1];
              __ZdlPv();
            }
          }
          *puVar6 = &PTR_DAT_110cd71d0;
          lVar4 = puVar6[7];
          puVar6[7] = 0;
          if (lVar4 != 0) {
            __ZdaPv();
          }
          plVar9 = (long *)puVar6[4];
          if (plVar9 != (long *)0x0) {
            plVar10 = (long *)puVar6[5];
            plVar5 = plVar9;
            if (plVar10 != plVar9) {
              do {
                plVar10 = plVar10 + -3;
                lVar4 = *plVar10;
                *plVar10 = 0;
                if (lVar4 != 0) {
                  __ZdaPv();
                }
              } while (plVar10 != plVar9);
              plVar5 = (long *)puVar6[4];
            }
            puVar6[5] = plVar9;
            __ZdlPv(plVar5);
          }
          __ZdlPv(puVar6);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uStack_90 & 0xff));
  }
  return param_1;
}



/* Entry: 10b30bd24; end: 10b30bd3b;  */

void FUN_10b30bd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b30bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 10b30bd3c; end: 10b30c35f;  */

void FUN_10b30bd3c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == 0) {
    plVar8 = (long *)param_1[1];
  }
  else {
    plVar4 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    if (plVar4 == plVar8) {
joined_r0x00010b30bdf8:
      if (plVar4 != plVar8) {
        return;
      }
    }
    else {
      uVar6 = (long)plVar8 + (-8 - (long)plVar4);
      uVar5 = (uint)uVar6;
      if ((~uVar5 & 0x18) != 0) {
        uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
        do {
          if (*plVar4 == param_2) goto joined_r0x00010b30bdf8;
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (0x17 < uVar6) {
        plVar4 = plVar4 + 2;
        do {
          if (plVar4[-2] == param_2) {
            plVar4 = plVar4 + -2;
            goto joined_r0x00010b30bdf8;
          }
          if (plVar4[-1] == param_2) {
            plVar4 = plVar4 + -1;
            goto joined_r0x00010b30bdf8;
          }
          if (*plVar4 == param_2) goto joined_r0x00010b30bdf8;
          if (plVar4[1] == param_2) {
            plVar4 = plVar4 + 1;
            goto joined_r0x00010b30bdf8;
          }
          plVar1 = plVar4 + 2;
          plVar4 = plVar4 + 4;
        } while (plVar1 != plVar8);
      }
    }
  }
  param_1[5] = param_1[5] + 1;
  if (plVar8 < (long *)param_1[2]) {
    plVar4 = plVar8 + 1;
    *plVar8 = param_2;
  }
  else {
    lVar9 = (long)plVar8 - *param_1;
    uVar6 = (lVar9 >> 3) + 1;
    if (uVar6 >> 0x3d != 0) {
      func_0x00010b2f8ca8();
LAB_10b30bf04:
      func_0x00010b2ed0ac();
      plVar8 = (long *)param_1[0x5a];
      plVar4 = (long *)param_1[0x5b];
      if (plVar8 == plVar4) {
LAB_10b30bfd0:
        if (plVar8 != plVar4) {
          if (*plVar8 != 0) {
            param_1[0x5f] = param_1[0x5f] + -1;
          }
          if ((long *)param_1[0x5e] != param_1 + 0x5d) {
            *plVar8 = 0;
            return;
          }
          lVar9 = (long)plVar4 - (long)(plVar8 + 1);
          if (lVar9 != 0) {
            _memmove(plVar8,plVar8 + 1,lVar9);
          }
          param_1[0x5b] = (long)plVar8 + lVar9;
          return;
        }
      }
      else {
        uVar6 = (long)plVar4 + (-8 - (long)plVar8);
        uVar5 = (uint)uVar6;
        if ((~uVar5 & 0x18) != 0) {
          uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
          do {
            if (*plVar8 == param_2) goto LAB_10b30bfd0;
            plVar8 = plVar8 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (0x17 < uVar6) {
          plVar8 = plVar8 + 2;
          do {
            if (plVar8[-2] == param_2) {
              plVar8 = plVar8 + -2;
              goto LAB_10b30bfd0;
            }
            if (plVar8[-1] == param_2) {
              plVar8 = plVar8 + -1;
              goto LAB_10b30bfd0;
            }
            if (*plVar8 == param_2) goto LAB_10b30bfd0;
            if (plVar8[1] == param_2) {
              plVar8 = plVar8 + 1;
              goto LAB_10b30bfd0;
            }
            plVar1 = plVar8 + 2;
            plVar8 = plVar8 + 4;
          } while (plVar1 != plVar4);
        }
      }
      return;
    }
    uVar3 = param_1[2] - *param_1;
    uVar7 = (long)uVar3 >> 2;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10b30bf04;
      lVar2 = uVar7 << 3;
      __Znwm();
    }
    plVar8 = (long *)(lVar2 + lVar9);
    plVar4 = plVar8 + 1;
    *plVar8 = param_2;
    lVar10 = (long)plVar8 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lVar9 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar4;
    param_1[2] = lVar2 + uVar7 * 8;
    if (lVar9 != 0) {
      __ZdlPv();
      param_1[1] = (long)plVar4;
      return;
    }
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 10b30c360; end: 10b30c373;  */

byte FUN_10b30c360(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x3b8);
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 10b30c374; end: 10b30c91b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b30c374(long *******param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *******ppppppplVar5;
  long *plVar6;
  undefined *puVar7;
  long ******pppppplVar8;
  long lVar9;
  long *******ppppppplVar10;
  long *plVar11;
  long *plVar12;
  long *******ppppppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *******ppppppplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *******ppppppplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ******pppppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *******ppppppplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *******ppppppplStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  *param_1 = (long ******)0xaaaaaaaaaaaaaaaa;
  param_1[1] = (long ******)0xaaaaaaaaaaaaaaaa;
  param_1[2] = (long ******)0xaaaaaaaaaaaaaaaa;
  param_1[3] = (long ******)0x0;
  ppppppplStack_88 = param_1;
  func_0x000107c2cf54(&ppppppplStack_88,0);
  *param_1 = (long ******)0x0;
  param_1[1] = (long ******)0x0;
  param_1[2] = (long ******)0x0;
  param_1[3] = (long ******)0x6;
  pppppplStack_a8 = (long ******)0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0;
  ppppppplStack_88 = &pppppplStack_a8;
  ppppppplVar10 = (long *******)&ppppppplStack_88;
  plVar6 = (long *)0x0;
  func_0x000107c2cf54();
  pppppplStack_a8 = (long ******)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 7;
  plVar11 = (long *)param_2[0x6e];
  while (plVar11 != param_2 + 0x6f) {
    func_0x00010b30fa40(&ppppppplStack_88,plVar11[4],plVar4,param_4);
    func_0x00010b323aac(&pppppplStack_a8,&ppppppplStack_88);
    ppppppplVar10 = (long *******)&ppppppplStack_c8;
    plVar6 = plStack_70;
    ppppppplStack_c8 = (long *******)&ppppppplStack_88;
    func_0x000107c2cf54();
    plVar1 = (long *)plVar11[1];
    plVar12 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar12[2];
        bVar2 = (long *)*plVar11 != plVar12;
        plVar12 = plVar11;
      } while (bVar2);
    }
    else {
      do {
        plVar11 = plVar1;
        plVar1 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  }
  if (param_1[3] == (long ******)0x6) {
    func_0x000107c2ced4(param_1,&UNK_10f7449a3,0xd,&pppppplStack_a8);
    ppppppplStack_c8 = (long *******)0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = 0;
    ppppppplStack_88 = (long *******)&ppppppplStack_c8;
    ppppppplVar10 = (long *******)&ppppppplStack_88;
    plVar6 = (long *)0x0;
    func_0x000107c2cf54();
    ppppppplStack_c8 = (long *******)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 7;
    plVar11 = (long *)param_2[0x71];
    while (plVar11 != param_2 + 0x72) {
      func_0x00010b30fa40(&ppppppplStack_88,plVar11[4],plVar4,param_4);
      func_0x00010b323aac(&ppppppplStack_c8,&ppppppplStack_88);
      ppppppplVar10 = (long *******)&ppppppplStack_e8;
      plVar6 = plStack_70;
      ppppppplStack_e8 = (long *******)&ppppppplStack_88;
      func_0x000107c2cf54();
      plVar1 = (long *)plVar11[1];
      plVar12 = plVar11;
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar12[2];
          bVar2 = (long *)*plVar11 != plVar12;
          plVar12 = plVar11;
        } while (bVar2);
      }
      else {
        do {
          plVar11 = plVar1;
          plVar1 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
    }
    if (param_1[3] == (long ******)0x6) {
      func_0x000107c2ced4(param_1,&UNK_10f7449b1,0x1d,&ppppppplStack_c8);
      ppppppplStack_e8 = (long *******)0xaaaaaaaaaaaaaaaa;
      uStack_e0 = 0xaaaaaaaaaaaaaaaa;
      uStack_d8 = 0xaaaaaaaaaaaaaaaa;
      uStack_d0 = 0;
      ppppppplStack_88 = (long *******)&ppppppplStack_e8;
      ppppppplVar10 = (long *******)&ppppppplStack_88;
      plVar6 = (long *)0x0;
      func_0x000107c2cf54();
      ppppppplStack_e8 = (long *******)0x0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 7;
      plVar11 = (long *)param_2[0x74];
      while (plVar11 != param_2 + 0x75) {
        func_0x00010b30fa40(&ppppppplStack_88,plVar11[4],plVar4,param_4);
        func_0x00010b323aac(&ppppppplStack_e8,&ppppppplStack_88);
        ppppppplVar10 = (long *******)&ppppppplStack_108;
        plVar6 = plStack_70;
        ppppppplStack_108 = (long *******)&ppppppplStack_88;
        func_0x000107c2cf54();
        plVar1 = (long *)plVar11[1];
        plVar12 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar12[2];
            bVar2 = (long *)*plVar11 != plVar12;
            plVar12 = plVar11;
          } while (bVar2);
        }
        else {
          do {
            plVar11 = plVar1;
            plVar1 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
      if (param_1[3] == (long ******)0x6) {
        func_0x000107c2ced4(param_1,&UNK_10f7449cf,0x10,&ppppppplStack_e8);
        ppppppplStack_108 = (long *******)0xaaaaaaaaaaaaaaaa;
        uStack_100 = 0xaaaaaaaaaaaaaaaa;
        uStack_f8 = 0xaaaaaaaaaaaaaaaa;
        plStack_f0 = (long *)0x0;
        ppppppplStack_88 = (long *******)&ppppppplStack_108;
        func_0x000107c2cf54(&ppppppplStack_88,0);
        ppppppplStack_108 = (long *******)0x0;
        uStack_100 = 0;
        uStack_f8 = 0;
        plStack_f0 = (long *)0x6;
        ppppppplStack_88 = (long *******)CONCAT44(ppppppplStack_88._4_4_,(int)param_2[0x58]);
        plStack_70 = (long *)0x2;
        func_0x000107c2ced4(&ppppppplStack_108,&UNK_10f744e30,0x1a,&ppppppplStack_88);
        ppppppplVar10 = (long *******)&ppppppplStack_68;
        plVar6 = plStack_70;
        ppppppplStack_68 = (long *******)&ppppppplStack_88;
        func_0x000107c2cf54();
        if (param_1[3] == (long ******)0x6) {
          func_0x000107c2ced4(param_1,&DAT_10f7200c9,8,&ppppppplStack_108);
          ppppppplVar10 = (long *******)&ppppppplStack_88;
          plVar6 = plStack_f0;
          ppppppplStack_88 = (long *******)&ppppppplStack_108;
          func_0x000107c2cf54();
          if (param_3 == 0) {
LAB_10b30c5f4:
            if ((ulong)*(byte *)(param_2[0x87] + 0x19) < 7) {
              puVar7 = (&PTR_DAT_110cd56a0)[*(byte *)(param_2[0x87] + 0x19)];
            }
            else {
              puVar7 = (undefined *)0x0;
            }
            if (param_1[3] == (long ******)0x6) {
              plVar6 = (long *)&UNK_10f7449ff;
              ppppppplVar5 = param_1;
              func_0x00010b32324c(param_1,&UNK_10f7449ff,0x14,puVar7);
              ppppppplVar10 = (long *******)param_2[0x69];
              if (ppppppplVar10 == (long *******)0x0) {
                plStack_70 = (long *)0x0;
                pppppplVar8 = param_1[3];
                ppppppplVar10 = ppppppplVar5;
              }
              else {
                ppppppplStack_88 = (long *******)0xaaaaaaaaaaaaaaaa;
                uStack_80 = 0xaaaaaaaaaaaaaaaa;
                uStack_78 = 0xaaaaaaaaaaaaaaaa;
                plStack_70 = (long *)0x0;
                ppppppplStack_108 = (long *******)&ppppppplStack_88;
                plVar6 = (long *)0x0;
                func_0x000107c2cf54(&ppppppplStack_108);
                ppppppplStack_88 = (long *******)0x0;
                uStack_80 = 0;
                uStack_78 = 0;
                plStack_70 = (long *)0x6;
                (*(code *)(*ppppppplVar10)[4])();
                if (plStack_70 != (long *)0x6) goto LAB_10b30c918;
                plVar6 = (long *)&UNK_10f744ef5;
                ppppppplVar5 = (long *******)&ppppppplStack_88;
                func_0x00010b32324c(ppppppplVar5,&UNK_10f744ef5,4,ppppppplVar10);
                pppppplVar8 = param_1[3];
                ppppppplVar10 = ppppppplVar5;
              }
              if (pppppplVar8 == (long ******)0x6) {
                func_0x000107c2ced4(param_1,&UNK_10f744a14,0xb,&ppppppplStack_88);
                ppppppplStack_108 = (long *******)&ppppppplStack_88;
                func_0x000107c2cf54(&ppppppplStack_108,plStack_70);
                ppppppplVar10 = (long *******)param_2[0x6a];
                plVar6 = plVar4;
                func_0x00010b3151a0(&ppppppplStack_88);
                if (param_1[3] == (long ******)0x6) {
                  func_0x000107c2ced4(param_1,&UNK_10f744a20,0xd,&ppppppplStack_88);
                  ppppppplStack_108 = (long *******)&ppppppplStack_88;
                  func_0x000107c2cf54(&ppppppplStack_108,plStack_70);
                  ppppppplVar10 = (long *******)param_2[0x6b];
                  func_0x00010b3151a0(&ppppppplStack_88);
                  plVar6 = plVar4;
                  if (param_1[3] == (long ******)0x6) {
                    func_0x000107c2ced4(param_1,&UNK_10f744a2e,0x18,&ppppppplStack_88);
                    ppppppplStack_108 = (long *******)&ppppppplStack_88;
                    func_0x000107c2cf54(&ppppppplStack_108,plStack_70);
                    ppppppplStack_88 = (long *******)&ppppppplStack_e8;
                    func_0x000107c2cf54(&ppppppplStack_88,uStack_d0);
                    ppppppplStack_88 = (long *******)&ppppppplStack_c8;
                    func_0x000107c2cf54(&ppppppplStack_88,uStack_b0);
                    ppppppplStack_88 = &pppppplStack_a8;
                    func_0x000107c2cf54(&ppppppplStack_88,uStack_90);
                    return;
                  }
                }
              }
            }
          }
          else if (param_1[3] == (long ******)0x6) {
            plVar6 = (long *)&UNK_10f7449e0;
            ppppppplVar10 = param_1;
            func_0x00010b32324c(param_1,&UNK_10f7449e0,0xe,**(undefined8 **)(param_3 + 0x30));
            if (param_1[3] == (long ******)0x6) {
              plVar6 = (long *)&UNK_10f7449ef;
              ppppppplVar10 = param_1;
              func_0x00010b32324c(param_1,&UNK_10f7449ef,0xf,*(undefined8 *)(param_3 + 0x48));
              goto LAB_10b30c5f4;
            }
          }
        }
      }
    }
  }
LAB_10b30c918:
  func_0x00010b324740();
  if ((*(long *)(plVar6[0x1b] + 0x10) == 0) && (*(long *)(plVar6[0x1c] + 0x10) == 0)) {
    lVar9 = plVar6[0x1d];
    if (lVar9 != plVar6[0x1e]) {
      plVar11 = *(long **)(plVar6[1] + 0x450);
      (**(code **)(*plVar11 + 0x10))();
      if (*(long *)(lVar9 + 0x30) <= (long)plVar11) goto LAB_10b30c9a0;
    }
    iVar3 = (int)plVar6 + 0x20;
    _pthread_mutex_trylock();
    if (iVar3 == 0) {
      lVar9 = plVar6[0xe];
      _pthread_mutex_unlock(plVar6 + 4);
    }
    else {
      func_0x00010b329e58(plVar6 + 4);
      lVar9 = plVar6[0xe];
      _pthread_mutex_unlock(plVar6 + 4);
    }
    if (lVar9 == 0) {
      return;
    }
  }
LAB_10b30c9a0:
  func_0x00010b3106e0();
  if (((ulong)plVar6 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b30c9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*ppppppplVar10[6])[4])();
  return;
}



/* Entry: 10b30c91c; end: 10b30cad3;  */

void FUN_10b30c91c(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(*(long *)(param_2 + 0xd8) + 0x10) == 0) &&
     (*(long *)(*(long *)(param_2 + 0xe0) + 0x10) == 0)) {
    lVar3 = *(long *)(param_2 + 0xe8);
    if (lVar3 != *(long *)(param_2 + 0xf0)) {
      plVar2 = *(long **)(*(long *)(param_2 + 8) + 0x450);
      (**(code **)(*plVar2 + 0x10))();
      if (*(long *)(lVar3 + 0x30) <= (long)plVar2) goto LAB_10b30c9a0;
    }
    iVar1 = (int)param_2 + 0x20;
    _pthread_mutex_trylock();
    if (iVar1 == 0) {
      lVar3 = *(long *)(param_2 + 0x70);
      _pthread_mutex_unlock(param_2 + 0x20);
    }
    else {
      func_0x00010b329e58(param_2 + 0x20);
      lVar3 = *(long *)(param_2 + 0x70);
      _pthread_mutex_unlock(param_2 + 0x20);
    }
    if (lVar3 == 0) {
      return;
    }
  }
LAB_10b30c9a0:
  func_0x00010b3106e0();
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b30c9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  return;
}



/* Entry: 10b30cad4; end: 10b30cc3f;  */

void FUN_10b30cad4(long param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  
  plVar6 = *(long **)(param_1 + 0x450);
  plVar4 = *(long **)(param_1 + 0x370);
  plVar1 = (long *)(param_1 + 0x378);
  bVar9 = plVar4 != plVar1;
  if (plVar4 == plVar1) {
    plVar7 = (long *)0x0;
  }
  else {
    bVar3 = false;
    plVar7 = (long *)0x0;
    do {
      plVar5 = (long *)plVar4[1];
      plVar10 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar10[2];
          bVar2 = (long *)*plVar11 != plVar10;
          plVar10 = plVar11;
        } while (bVar2);
      }
      else {
        do {
          plVar11 = plVar5;
          plVar5 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      lVar8 = plVar4[4];
      if (!bVar3) {
        plVar7 = plVar6;
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      func_0x00010b310d68(lVar8,plVar7);
      if (*(long *)(lVar8 + 0xd8) != 0) {
        func_0x000107c2cd58();
        func_0x000107c2cd58(*(undefined8 *)(lVar8 + 0xe0));
      }
      bVar3 = true;
      plVar4 = plVar11;
    } while (plVar11 != plVar1);
  }
  plVar1 = *(long **)(param_1 + 0x388);
  while (plVar1 != (long *)(param_1 + 0x390)) {
    plVar4 = (long *)plVar1[1];
    plVar5 = plVar1;
    if ((long *)plVar1[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar5[2];
        bVar3 = (long *)*plVar10 != plVar5;
        plVar5 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar4;
        plVar4 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    lVar8 = plVar1[4];
    if (!bVar9) {
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    func_0x00010b310d68(lVar8,plVar7);
    if (*(long *)(lVar8 + 0xd8) != 0) {
      func_0x000107c2cd58();
      func_0x000107c2cd58(*(undefined8 *)(lVar8 + 0xe0));
    }
    bVar9 = true;
    plVar1 = plVar10;
  }
  return;
}



/* Entry: 10b30cc40; end: 10b30cc67;  */

undefined8 FUN_10b30cc40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x450);
}



/* Entry: 10b30cc68; end: 10b30cd5f;  */

bool FUN_10b30cc68(long param_1)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  for (puVar5 = *(ulong **)(param_1 + 0x68); puVar5 != (ulong *)0x0; puVar5 = (ulong *)puVar5[0x43])
  {
    do {
      uVar8 = *puVar5;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 != 0) {
      do {
        uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
        uVar10 = 1L << (uVar4 & 0x3f);
        (**(code **)(puVar5[uVar4 + 2] + 8))();
        bVar3 = uVar10 != uVar8;
        uVar8 = uVar10 ^ uVar8;
      } while (bVar3);
    }
  }
  plVar6 = *(long **)(param_1 + 0x370);
  while (plVar6 != (long *)(param_1 + 0x378)) {
    lVar9 = plVar6[4];
    func_0x000107c2cd58(*(undefined8 *)(lVar9 + 0xd8));
    func_0x000107c2cd58(*(undefined8 *)(lVar9 + 0xe0));
    plVar2 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return *(long *)(param_1 + 0x148) == 0;
}



/* Entry: 10b30cd60; end: 10b30ce5b;  */

long FUN_10b30cd60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (*(long **)(param_1 + 0x370) == (long *)(param_1 + 0x378)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    plVar8 = *(long **)(param_1 + 0x370);
    do {
      lVar12 = plVar8[4];
      lVar9 = *(long *)(*(long *)(lVar12 + 0xd8) + 0x10);
      lVar1 = *(long *)(lVar12 + 0xe8);
      lVar2 = *(long *)(lVar12 + 0xf0);
      lVar10 = *(long *)(*(long *)(lVar12 + 0xe0) + 0x10);
      iVar5 = (int)lVar12 + 0x20;
      _pthread_mutex_trylock();
      if (iVar5 == 0) {
        lVar11 = *(long *)(lVar12 + 0x70);
        _pthread_mutex_unlock(lVar12 + 0x20);
        plVar3 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) goto LAB_10b30ce20;
LAB_10b30cdf4:
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      else {
        func_0x00010b329e58(lVar12 + 0x20);
        lVar11 = *(long *)(lVar12 + 0x70);
        _pthread_mutex_unlock(lVar12 + 0x20);
        plVar3 = (long *)plVar8[1];
        if ((long *)plVar8[1] != (long *)0x0) goto LAB_10b30cdf4;
LAB_10b30ce20:
        do {
          plVar6 = (long *)plVar8[2];
          bVar4 = (long *)*plVar6 != plVar8;
          plVar8 = plVar6;
        } while (bVar4);
      }
      lVar7 = lVar9 + lVar7 + lVar10 + (lVar2 - lVar1 >> 5) * -0x3333333333333333 + lVar11;
      plVar8 = plVar6;
    } while (plVar6 != (long *)(param_1 + 0x378));
  }
  return lVar7;
}



/* Entry: 10b30ce5c; end: 10b30cf1b;  */

void FUN_10b30ce5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lStack_98;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_28;
  
  ppuVar7 = &puStack_50;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  puStack_50 = (undefined1 *)0xaaaaaaaaaaaaaaaa;
  lStack_38 = -0x5555555555555556;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  FUN_10b30c374(&puStack_50,param_2,0,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lStack_38 < 3) {
    ppuVar12 = &puStack_50;
    if (lStack_38 != 0) {
      if (lStack_38 == 1) {
        ppuVar12 = (undefined1 **)((ulong)puStack_50 & 0xff);
      }
      else {
        if (lStack_38 != 2) goto LAB_10b30cf18;
        ppuVar12 = (undefined1 **)((ulong)puStack_50 & 0xffffffff);
      }
    }
  }
  else {
    ppuVar12 = &puStack_50;
    if ((3 < lStack_38 - 4U) && (ppuVar12 = (undefined1 **)puStack_50, lStack_38 != 3)) {
LAB_10b30cf18:
      lVar13 = lStack_38;
      func_0x00010bdb3698();
      puVar8 = (undefined8 *)0x20;
      __Znwm();
      *puVar8 = &PTR_FUN_110cd5658;
      piVar14 = *(int **)((long)ppuVar7 + 0x458);
      if (piVar14 == (int *)0x0) {
        uVar15 = *(undefined8 *)((long)ppuVar7 + 0x460);
      }
      else {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = *piVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar15 = *(undefined8 *)((long)ppuVar7 + 0x460);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = *piVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          iVar2 = *piVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          __ZdlPv(piVar14);
        }
      }
      puVar8[1] = piVar14;
      puVar8[2] = uVar15;
      *(char *)(puVar8 + 3) = (char)lVar13;
      if ((bRam0000000113370088 & 0x19) != 0) {
        func_0x00010b30e430();
        lStack_98 = lVar13;
        func_0x00010b30abc4(0x62,0x113370088,&UNK_10f744b1d,0,puVar8,0x800,0,"priority",&lStack_98);
        piVar14 = (int *)puVar8[1];
      }
      if ((piVar14 == (int *)0x0) || ((char)piVar14[1] != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30d0f8);
        (*pcVar6)();
      }
      lVar13 = puVar8[2];
      puVar9 = (undefined8 *)0x20;
      __Znwm();
      bVar3 = *(byte *)(puVar8 + 3);
      *(byte *)((long)puVar9 + 0x19) = bVar3;
      puVar1 = *(undefined8 **)(lVar13 + 0x440);
      if (*(undefined8 **)(lVar13 + 0x440) == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar13 + 0x440);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = puVar1;
        *puVar1 = puVar9;
        lVar10 = **(long **)(lVar13 + 0x438);
      }
      else {
        do {
          while (puVar11 = puVar1, *(byte *)((long)puVar11 + 0x19) <= bVar3) {
            puVar1 = (undefined8 *)puVar11[1];
            if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
              puVar1 = puVar11 + 1;
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = puVar11;
              *puVar1 = puVar9;
              lVar10 = **(long **)(lVar13 + 0x438);
              goto joined_r0x00010b30d050;
            }
          }
          puVar1 = (undefined8 *)*puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = puVar11;
        *puVar11 = puVar9;
        lVar10 = **(long **)(lVar13 + 0x438);
        puVar1 = puVar11;
      }
joined_r0x00010b30d050:
      if (lVar10 != 0) {
        *(long *)(lVar13 + 0x438) = lVar10;
        puVar9 = (undefined8 *)*puVar1;
      }
      func_0x000107c2ca68(*(undefined8 *)(lVar13 + 0x440),puVar9);
      *(long *)(lVar13 + 0x448) = *(long *)(lVar13 + 0x448) + 1;
      *extraout_x8 = puVar8;
      return;
    }
  }
  func_0x000107c2cb08(ppuVar12,lStack_38,0,param_1,200);
  puStack_28 = (undefined1 *)&puStack_50;
  func_0x000107c2cf54(&puStack_28,lStack_38);
  return;
}



/* Entry: 10b30cf1c; end: 10b30d0ff;  */

void FUN_10b30cf1c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uStack_48;
  
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  *puVar7 = &PTR_FUN_110cd5658;
  piVar12 = *(int **)(param_2 + 0x458);
  if (piVar12 == (int *)0x0) {
    uVar13 = *(undefined8 *)(param_2 + 0x460);
  }
  else {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar13 = *(undefined8 *)(param_2 + 0x460);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar2 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      __ZdlPv(piVar12);
    }
  }
  puVar7[1] = piVar12;
  puVar7[2] = uVar13;
  *(char *)(puVar7 + 3) = (char)param_3;
  if ((bRam0000000113370088 & 0x19) != 0) {
    func_0x00010b30e430();
    uStack_48 = param_3;
    func_0x00010b30abc4(0x62,0x113370088,&UNK_10f744b1d,0,puVar7,0x800,0,"priority",&uStack_48);
    piVar12 = (int *)puVar7[1];
  }
  if ((piVar12 == (int *)0x0) || ((char)piVar12[1] != '\0')) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30d0f8);
    (*pcVar6)();
  }
  lVar11 = puVar7[2];
  puVar8 = (undefined8 *)0x20;
  __Znwm();
  bVar3 = *(byte *)(puVar7 + 3);
  *(byte *)((long)puVar8 + 0x19) = bVar3;
  puVar1 = *(undefined8 **)(lVar11 + 0x440);
  if (*(undefined8 **)(lVar11 + 0x440) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(lVar11 + 0x440);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar1;
    *puVar1 = puVar8;
    lVar9 = **(long **)(lVar11 + 0x438);
  }
  else {
    do {
      while (puVar10 = puVar1, *(byte *)((long)puVar10 + 0x19) <= bVar3) {
        puVar1 = (undefined8 *)puVar10[1];
        if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
          puVar1 = puVar10 + 1;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = puVar10;
          *puVar1 = puVar8;
          lVar9 = **(long **)(lVar11 + 0x438);
          goto joined_r0x00010b30d050;
        }
      }
      puVar1 = (undefined8 *)*puVar10;
    } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar10;
    *puVar10 = puVar8;
    lVar9 = **(long **)(lVar11 + 0x438);
    puVar1 = puVar10;
  }
joined_r0x00010b30d050:
  if (lVar9 != 0) {
    *(long *)(lVar11 + 0x438) = lVar9;
    puVar8 = (undefined8 *)*puVar1;
  }
  func_0x000107c2ca68(*(undefined8 *)(lVar11 + 0x440),puVar8);
  *(long *)(lVar11 + 0x448) = *(long *)(lVar11 + 0x448) + 1;
  *param_1 = puVar7;
  return;
}



/* Entry: 10b30d100; end: 10b30d10f;  */

void FUN_10b30d100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b30d10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x78))();
  return;
}



/* Entry: 10b30d110; end: 10b30d2db;  */

void FUN_10b30d110(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    plVar10 = (long *)param_1[1];
  }
  else {
    plVar3 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    if (plVar3 == plVar10) {
joined_r0x00010b30d1cc:
      if (plVar3 != plVar10) {
        return;
      }
    }
    else {
      uVar6 = (long)plVar10 + (-8 - (long)plVar3);
      uVar5 = (uint)uVar6;
      if ((~uVar5 & 0x18) != 0) {
        uVar7 = (ulong)((uVar5 >> 3) + 1) & 3;
        do {
          if (*plVar3 == param_2) goto joined_r0x00010b30d1cc;
          plVar3 = plVar3 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (0x17 < uVar6) {
        plVar3 = plVar3 + 2;
        do {
          if (plVar3[-2] == param_2) {
            plVar3 = plVar3 + -2;
            goto joined_r0x00010b30d1cc;
          }
          if (plVar3[-1] == param_2) {
            plVar3 = plVar3 + -1;
            goto joined_r0x00010b30d1cc;
          }
          if (*plVar3 == param_2) goto joined_r0x00010b30d1cc;
          if (plVar3[1] == param_2) {
            plVar3 = plVar3 + 1;
            goto joined_r0x00010b30d1cc;
          }
          plVar1 = plVar3 + 2;
          plVar3 = plVar3 + 4;
        } while (plVar1 != plVar10);
      }
    }
  }
  param_1[5] = param_1[5] + 1;
  if (plVar10 < (long *)param_1[2]) {
    plVar3 = plVar10 + 1;
    *plVar10 = param_2;
  }
  else {
    lVar8 = (long)plVar10 - *param_1;
    uVar6 = (lVar8 >> 3) + 1;
    if (uVar6 >> 0x3d != 0) {
      func_0x00010b2f8ca8();
LAB_10b30d2d8:
      func_0x00010b2ed0ac();
      param_1[0x17] = 0;
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10b30d2d8;
      lVar2 = uVar7 << 3;
      __Znwm();
    }
    plVar10 = (long *)(lVar2 + lVar8);
    plVar3 = plVar10 + 1;
    *plVar10 = param_2;
    lVar9 = (long)plVar10 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar8 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)plVar3;
    param_1[2] = lVar2 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv();
      param_1[1] = (long)plVar3;
      return;
    }
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10b30d2dc; end: 10b30d2e3;  */

void FUN_10b30d2dc(long param_1)

{
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 10b30d2e4; end: 10b30d35b;  */

void FUN_10b30d2e4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10b30d2e4(*param_1);
    FUN_10b30d2e4(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b30d35c; end: 10b30d367;  */

void FUN_10b30d35c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b30d368; end: 10b30d873;  */

void FUN_10b30d368(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong param_5,
                  undefined8 *param_6,long *param_7)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar10 = param_1[1];
  *param_6 = 0;
  lVar13 = param_3 - param_2;
  if (param_2 <= param_3 && lVar13 != 0) {
    if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d818);
      (*pcVar5)();
    }
    if ((ulong)param_1[1] < param_3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d824);
      (*pcVar5)();
    }
    puVar12 = (undefined8 *)(*param_1 + param_2 * 0xb0);
    puVar11 = (undefined8 *)(*param_1 + param_3 * 0xb0);
    if (param_4 < puVar11) {
      if ((puVar11 < puVar12) || (CARRY8((ulong)param_4,(long)puVar11 - (long)puVar12))) {
LAB_10b30d828:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b30d82c);
        (*pcVar5)();
      }
      if (puVar12 < (undefined8 *)((long)param_4 + ((long)puVar11 - (long)puVar12))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d3f8);
        (*pcVar5)();
      }
    }
    do {
      *param_4 = *puVar12;
      *puVar12 = 0;
      uVar16 = puVar12[2];
      uVar8 = puVar12[1];
      uVar17 = puVar12[3];
      param_4[4] = puVar12[4];
      param_4[3] = uVar17;
      param_4[2] = uVar16;
      param_4[1] = uVar8;
      uVar17 = puVar12[10];
      uVar16 = puVar12[9];
      uVar19 = puVar12[0xc];
      uVar18 = puVar12[0xb];
      uVar8 = *(undefined8 *)((long)puVar12 + 0x65);
      uVar20 = puVar12[7];
      param_4[8] = puVar12[8];
      param_4[7] = uVar20;
      *(undefined8 *)((long)param_4 + 0x65) = uVar8;
      param_4[0xc] = uVar19;
      param_4[0xb] = uVar18;
      param_4[10] = uVar17;
      param_4[9] = uVar16;
      uVar8 = puVar12[5];
      param_4[6] = puVar12[6];
      param_4[5] = uVar8;
      uVar16 = *(undefined8 *)((long)puVar12 + 0x75);
      uVar8 = *(undefined8 *)((long)puVar12 + 0x6d);
      *(undefined1 *)((long)param_4 + 0x7d) = *(undefined1 *)((long)puVar12 + 0x7d);
      *(undefined8 *)((long)param_4 + 0x75) = uVar16;
      *(undefined8 *)((long)param_4 + 0x6d) = uVar8;
      param_4[0x10] = puVar12[0x10];
      puVar12[0x10] = 0;
      param_4[0x11] = puVar12[0x11];
      param_4[0x12] = puVar12[0x12];
      puVar12[0x12] = 0;
      param_4[0x13] = puVar12[0x13];
      uVar8 = puVar12[0x14];
      *(undefined4 *)(param_4 + 0x15) = *(undefined4 *)(puVar12 + 0x15);
      param_4[0x14] = uVar8;
      piVar6 = (int *)puVar12[0x12];
      if (piVar6 != (int *)0x0) {
        do {
          iVar2 = *piVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          __ZdlPv();
        }
      }
      plVar7 = (long *)puVar12[0x10];
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      piVar6 = (int *)*puVar12;
      if (piVar6 != (int *)0x0) {
        do {
          iVar2 = *piVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          (**(code **)(piVar6 + 4))();
        }
      }
      puVar12 = puVar12 + 0x16;
      param_4 = param_4 + 0x16;
    } while (puVar12 != puVar11);
  }
  else if (param_2 <= param_3) {
    lVar13 = 0;
  }
  else {
    uVar9 = param_1[1];
    if (uVar9 < param_2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d830);
      (*pcVar5)();
    }
    if (uVar9 < uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d83c);
      (*pcVar5)();
    }
    puVar11 = (undefined8 *)*param_1;
    puVar12 = puVar11 + param_2 * 0x16;
    puVar15 = puVar11 + uVar10 * 0x16;
    if (param_4 < puVar15) {
      if ((puVar15 < puVar12) || (CARRY8((ulong)param_4,(long)puVar15 - (long)puVar12)))
      goto LAB_10b30d828;
      if (puVar12 < (undefined8 *)((long)param_4 + ((long)puVar15 - (long)puVar12))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d860);
        (*pcVar5)();
      }
    }
    uVar10 = uVar10 - param_2;
    puVar14 = param_4;
    if (uVar10 != 0) {
      do {
        *puVar14 = *puVar12;
        *puVar12 = 0;
        uVar16 = puVar12[2];
        uVar8 = puVar12[1];
        uVar17 = puVar12[3];
        puVar14[4] = puVar12[4];
        puVar14[3] = uVar17;
        puVar14[2] = uVar16;
        puVar14[1] = uVar8;
        uVar17 = puVar12[10];
        uVar16 = puVar12[9];
        uVar19 = puVar12[0xc];
        uVar18 = puVar12[0xb];
        uVar8 = *(undefined8 *)((long)puVar12 + 0x65);
        uVar20 = puVar12[7];
        puVar14[8] = puVar12[8];
        puVar14[7] = uVar20;
        *(undefined8 *)((long)puVar14 + 0x65) = uVar8;
        puVar14[0xc] = uVar19;
        puVar14[0xb] = uVar18;
        puVar14[10] = uVar17;
        puVar14[9] = uVar16;
        uVar8 = puVar12[5];
        puVar14[6] = puVar12[6];
        puVar14[5] = uVar8;
        uVar16 = *(undefined8 *)((long)puVar12 + 0x75);
        uVar8 = *(undefined8 *)((long)puVar12 + 0x6d);
        *(undefined1 *)((long)puVar14 + 0x7d) = *(undefined1 *)((long)puVar12 + 0x7d);
        *(undefined8 *)((long)puVar14 + 0x75) = uVar16;
        *(undefined8 *)((long)puVar14 + 0x6d) = uVar8;
        puVar14[0x10] = puVar12[0x10];
        puVar12[0x10] = 0;
        puVar14[0x11] = puVar12[0x11];
        puVar14[0x12] = puVar12[0x12];
        puVar12[0x12] = 0;
        puVar14[0x13] = puVar12[0x13];
        uVar8 = puVar12[0x14];
        *(undefined4 *)(puVar14 + 0x15) = *(undefined4 *)(puVar12 + 0x15);
        puVar14[0x14] = uVar8;
        piVar6 = (int *)puVar12[0x12];
        if (piVar6 != (int *)0x0) {
          do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            __ZdlPv();
          }
        }
        plVar7 = (long *)puVar12[0x10];
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        piVar6 = (int *)*puVar12;
        if (piVar6 != (int *)0x0) {
          do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(piVar6 + 4))();
          }
        }
        puVar12 = puVar12 + 0x16;
        puVar14 = puVar14 + 0x16;
      } while (puVar12 != puVar15);
      puVar11 = (undefined8 *)*param_1;
      uVar9 = param_1[1];
    }
    if (uVar9 < param_3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d848);
      (*pcVar5)();
    }
    if (param_5 < uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d854);
      (*pcVar5)();
    }
    puVar12 = puVar11 + param_3 * 0x16;
    param_4 = param_4 + uVar10 * 0x16;
    if (param_4 < puVar12) {
      if ((puVar12 < puVar11) || (CARRY8((ulong)param_4,(long)puVar12 - (long)puVar11)))
      goto LAB_10b30d828;
      if (puVar11 < (undefined8 *)((long)param_4 + ((long)puVar12 - (long)puVar11))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b30d86c);
        (*pcVar5)();
      }
    }
    if (param_3 != 0) {
      do {
        *param_4 = *puVar11;
        *puVar11 = 0;
        uVar16 = puVar11[2];
        uVar8 = puVar11[1];
        uVar17 = puVar11[3];
        param_4[4] = puVar11[4];
        param_4[3] = uVar17;
        param_4[2] = uVar16;
        param_4[1] = uVar8;
        uVar17 = puVar11[10];
        uVar16 = puVar11[9];
        uVar19 = puVar11[0xc];
        uVar18 = puVar11[0xb];
        uVar8 = *(undefined8 *)((long)puVar11 + 0x65);
        uVar20 = puVar11[7];
        param_4[8] = puVar11[8];
        param_4[7] = uVar20;
        *(undefined8 *)((long)param_4 + 0x65) = uVar8;
        param_4[0xc] = uVar19;
        param_4[0xb] = uVar18;
        param_4[10] = uVar17;
        param_4[9] = uVar16;
        uVar8 = puVar11[5];
        param_4[6] = puVar11[6];
        param_4[5] = uVar8;
        uVar16 = *(undefined8 *)((long)puVar11 + 0x75);
        uVar8 = *(undefined8 *)((long)puVar11 + 0x6d);
        *(undefined1 *)((long)param_4 + 0x7d) = *(undefined1 *)((long)puVar11 + 0x7d);
        *(undefined8 *)((long)param_4 + 0x75) = uVar16;
        *(undefined8 *)((long)param_4 + 0x6d) = uVar8;
        param_4[0x10] = puVar11[0x10];
        puVar11[0x10] = 0;
        param_4[0x11] = puVar11[0x11];
        param_4[0x12] = puVar11[0x12];
        puVar11[0x12] = 0;
        param_4[0x13] = puVar11[0x13];
        uVar8 = puVar11[0x14];
        *(undefined4 *)(param_4 + 0x15) = *(undefined4 *)(puVar11 + 0x15);
        param_4[0x14] = uVar8;
        piVar6 = (int *)puVar11[0x12];
        if (piVar6 != (int *)0x0) {
          do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            __ZdlPv();
          }
        }
        plVar7 = (long *)puVar11[0x10];
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        piVar6 = (int *)*puVar11;
        if (piVar6 != (int *)0x0) {
          do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(piVar6 + 4))();
          }
        }
        puVar11 = puVar11 + 0x16;
        param_4 = param_4 + 0x16;
      } while (puVar11 != puVar12);
    }
    lVar13 = uVar10 + param_3;
  }
  *param_7 = lVar13;
  return;
}



/* Entry: 10b30d874; end: 10b30d9f3;  */

ulong * FUN_10b30d874(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar12 = (ulong *)param_1[2];
  puVar11 = param_1;
  if (puVar12 != (ulong *)param_1[3]) goto LAB_10b30d9c8;
  puVar4 = (ulong *)*param_1;
  puVar10 = (ulong *)param_1[1];
  if (puVar4 <= puVar10 && (long)puVar10 - (long)puVar4 != 0) {
    lVar5 = (((long)puVar10 - (long)puVar4 >> 3) + 1) / 2;
    puVar4 = puVar10 + -lVar5;
    lVar3 = (long)puVar12 - (long)puVar10;
    if (lVar3 != 0) {
      puVar11 = puVar4;
      _memmove(puVar4,puVar10,lVar3);
      puVar10 = (ulong *)param_1[1];
    }
    puVar12 = (ulong *)((long)puVar4 + lVar3);
    param_1[1] = (ulong)(puVar10 + -lVar5);
    param_1[2] = (ulong)puVar12;
    goto LAB_10b30d9c8;
  }
  uVar6 = (long)puVar12 - (long)puVar4 >> 2;
  if ((long)puVar12 - (long)puVar4 == 0) {
    uVar6 = 1;
  }
  if (uVar6 >> 0x3d != 0) {
    puVar12 = param_1;
    func_0x00010b2ed0ac();
    pcStack_58 = FUN_10b30d9f4;
    *puVar12 = (ulong)&PTR_FUN_110cd5620;
    puStack_78 = puVar12 + 1;
    uStack_70 = param_2;
    puStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c2cf54(&puStack_78,puVar12[4]);
    return puVar12;
  }
  uVar13 = uVar6 >> 2;
  puVar11 = (ulong *)(uVar6 * 8);
  __Znwm();
  puVar2 = puVar11 + uVar13;
  lVar3 = (long)puVar12 - (long)puVar10;
  puVar12 = puVar2;
  if (lVar3 != 0) {
    puVar12 = (ulong *)((long)puVar2 + lVar3);
    puVar7 = puVar2;
    if ((0x37 < lVar3 - 8U) && (0x1f < (long)puVar11 + (uVar13 * 8 - (long)puVar10))) {
      uVar1 = (lVar3 - 8U >> 3) + 1;
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar7 = puVar10 + 2;
      puVar9 = puVar11 + uVar13 + 2;
      uVar13 = uVar8;
      do {
        uVar14 = puVar7[-2];
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        puVar9[-1] = puVar7[-1];
        puVar9[-2] = uVar14;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar7 = puVar7 + 4;
        puVar9 = puVar9 + 4;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
      puVar7 = puVar2 + uVar8;
      puVar10 = puVar10 + uVar8;
      if (uVar1 == uVar8) goto LAB_10b30d9b0;
    }
    do {
      puVar9 = puVar7 + 1;
      *puVar7 = *puVar10;
      puVar7 = puVar9;
      puVar10 = puVar10 + 1;
    } while (puVar9 != puVar12);
  }
LAB_10b30d9b0:
  *param_1 = (ulong)puVar11;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)puVar12;
  param_1[3] = (ulong)(puVar11 + uVar6);
  if (puVar4 != (ulong *)0x0) {
    __ZdlPv(puVar4);
    puVar12 = (ulong *)param_1[2];
    puVar11 = puVar4;
  }
LAB_10b30d9c8:
  *puVar12 = param_2;
  param_1[2] = param_1[2] + 8;
  return puVar11;
}



/* Entry: 10b30d9f4; end: 10b30da83;  */

undefined8 * FUN_10b30d9f4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110cd5620;
  puStack_28 = param_1 + 1;
  func_0x000107c2cf54(&puStack_28,param_1[4]);
  return param_1;
}



/* Entry: 10b30da84; end: 10b30de23;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_10b30da84(ulong *******param_1,ulong *******param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *******pppppppuVar8;
  ulong ******ppppppuVar9;
  ulong *******pppppppuVar10;
  ulong ******ppppppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong ******ppppppuVar14;
  ulong ******ppppppuVar15;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  ulong *******pppppppuVar18;
  ulong ******ppppppuVar19;
  ulong uVar20;
  ulong *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  ppppppuVar11 = param_1[4];
  if (((ulong)ppppppuVar11 & 0xff) == 0) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if ((char)bVar3 < '\0') {
      ppppppuVar11 = param_2[1];
      uVar12 = ((ulong)param_2[2] & 0x7fffffffffffffff) - 1;
      if (1 < uVar12 - (long)ppppppuVar11) {
        pppppppuVar16 = (ulong *******)*param_2;
        *(undefined2 *)((long)pppppppuVar16 + (long)ppppppuVar11) = 0x7d7b;
        cVar4 = *(char *)((long)param_2 + 0x17);
        goto joined_r0x00010b30dddc;
      }
      pppppppuVar16 = (ulong *******)0x7ffffffffffffff7;
      if ((long)ppppppuVar11 + (2 - uVar12) <=
          0x7ffffffffffffff7 - ((ulong)param_2[2] & 0x7fffffffffffffff)) {
        pppppppuVar18 = (ulong *******)*param_2;
        if (0x3ffffffffffffff2 < uVar12) {
          bVar7 = false;
          pppppppuVar10 = pppppppuVar16;
          __Znwm();
          goto joined_r0x00010b30de14;
        }
        goto LAB_10b30db6c;
      }
    }
    else {
      ppppppuVar11 = (ulong ******)(ulong)bVar3;
      if (1 < bVar3 - 0x15) {
        *(undefined2 *)((long)param_2 + (long)ppppppuVar11) = 0x7d7b;
        cVar4 = *(char *)((long)param_2 + 0x17);
        pppppppuVar16 = param_2;
joined_r0x00010b30dddc:
        uVar5 = (long)ppppppuVar11 + 2;
        if (cVar4 < '\0') {
          param_2[1] = (ulong ******)uVar5;
        }
        else {
          *(byte *)((long)param_2 + 0x17) = (byte)uVar5 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar16 + uVar5) = 0;
        return param_1;
      }
      if (0x13 < bVar3) {
        uVar12 = 0x16;
        pppppppuVar18 = param_2;
LAB_10b30db6c:
        uVar20 = (long)ppppppuVar11 + 2U;
        if ((long)ppppppuVar11 + 2U <= uVar12 * 2) {
          uVar20 = uVar12 * 2;
        }
        pppppppuVar10 = (ulong *******)0x19;
        if ((uVar20 | 7) != 0x17) {
          pppppppuVar10 = (ulong *******)((uVar20 | 7) + 1);
        }
        pppppppuVar16 = (ulong *******)0x17;
        if (0x16 < uVar20) {
          pppppppuVar16 = pppppppuVar10;
        }
        bVar7 = uVar12 == 0x16;
        pppppppuVar10 = pppppppuVar16;
        __Znwm();
joined_r0x00010b30de14:
        pppppppuVar8 = pppppppuVar10;
        if (ppppppuVar11 != (ulong ******)0x0) {
          _memmove(pppppppuVar10,pppppppuVar18,ppppppuVar11);
        }
        *(undefined2 *)((long)pppppppuVar10 + (long)ppppppuVar11) = 0x7d7b;
        if (!bVar7) {
          __ZdlPv(pppppppuVar18);
          pppppppuVar8 = pppppppuVar18;
        }
        *param_2 = (ulong ******)pppppppuVar10;
        param_2[1] = (ulong ******)((long)ppppppuVar11 + 2U);
        param_2[2] = (ulong ******)((ulong)pppppppuVar16 | 0x8000000000000000);
        *(undefined1 *)((long)pppppppuVar10 + (long)((long)ppppppuVar11 + 2U)) = 0;
        return pppppppuVar8;
      }
    }
LAB_10b30de1c:
    func_0x000104bd47d4();
LAB_10b30de20:
    func_0x00010bdb3698();
    if ((bRam0000000113370088 & 0x19) == 0) {
      ppppppuVar11 = param_1[1];
    }
    else {
      func_0x00010b2ef0d0(0x65,0x113370088,&UNK_10f744b1d,0,param_1,0x800,0);
      ppppppuVar11 = param_1[1];
    }
    if (ppppppuVar11 != (ulong ******)0x0) {
      if ((*(char *)((long)ppppppuVar11 + 4) == '\0') && (param_1[2] != (ulong ******)0x0)) {
        if ((param_1[1] == (ulong ******)0x0) || (*(char *)((long)param_1[1] + 4) != '\0')) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e08c);
          (*pcVar6)();
        }
        if ((param_1[1] == (ulong ******)0x0) ||
           (cVar4 = *(char *)((long)param_1[2][0x87] + 0x19),
           *(char *)((long)param_1[1] + 4) != '\0')) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e098);
          (*pcVar6)();
        }
        ppppppuVar11 = param_1[2];
        if ((ulong ******)ppppppuVar11[0x88] != (ulong ******)0x0) {
          bVar3 = *(byte *)(param_1 + 3);
          ppppppuVar9 = (ulong ******)ppppppuVar11[0x88];
          ppppppuVar17 = ppppppuVar11 + 0x88;
LAB_10b30df14:
          do {
            ppppppuVar14 = ppppppuVar9;
            if (bVar3 < *(byte *)((long)ppppppuVar14 + 0x19)) goto LAB_10b30df08;
            if (bVar3 <= *(byte *)((long)ppppppuVar14 + 0x19)) {
              ppppppuVar9 = ppppppuVar14;
              for (ppppppuVar15 = (ulong ******)*ppppppuVar14; ppppppuVar15 != (ulong ******)0x0;
                  ppppppuVar15 = *(ulong *******)((long)ppppppuVar15 + lVar1)) {
                lVar1 = 8;
                if (bVar3 <= *(byte *)((long)ppppppuVar15 + 0x19)) {
                  lVar1 = 0;
                  ppppppuVar9 = ppppppuVar15;
                }
              }
              for (ppppppuVar14 = (ulong ******)ppppppuVar14[1]; ppppppuVar14 != (ulong ******)0x0;
                  ppppppuVar14 = *(ulong *******)((long)ppppppuVar14 + lVar1)) {
                lVar1 = 0;
                ppppppuVar15 = ppppppuVar14;
                if (*(byte *)((long)ppppppuVar14 + 0x19) <= bVar3) {
                  lVar1 = 8;
                  ppppppuVar15 = ppppppuVar17;
                }
                ppppppuVar17 = ppppppuVar15;
              }
              while (ppppppuVar9 != ppppppuVar17) {
                ppppppuVar14 = (ulong ******)ppppppuVar9[1];
                ppppppuVar15 = ppppppuVar9;
                if ((ulong ******)ppppppuVar9[1] == (ulong ******)0x0) {
                  do {
                    ppppppuVar19 = (ulong ******)ppppppuVar15[2];
                    bVar7 = (ulong ******)*ppppppuVar19 != ppppppuVar15;
                    ppppppuVar15 = ppppppuVar19;
                  } while (bVar7);
                }
                else {
                  do {
                    ppppppuVar19 = ppppppuVar14;
                    ppppppuVar14 = (ulong ******)*ppppppuVar19;
                  } while ((ulong ******)*ppppppuVar19 != (ulong ******)0x0);
                }
                if ((ulong ******)ppppppuVar11[0x87] == ppppppuVar9) {
                  ppppppuVar11[0x87] = (ulong *****)ppppppuVar19;
                }
                ppppppuVar11[0x89] = (ulong *****)((long)ppppppuVar11[0x89] + -1);
                func_0x000107c2ca70(ppppppuVar11[0x88],ppppppuVar9);
                __ZdlPv(ppppppuVar9);
                ppppppuVar9 = ppppppuVar19;
              }
              break;
            }
            ppppppuVar9 = (ulong ******)ppppppuVar14[1];
          } while ((ulong ******)ppppppuVar14[1] != (ulong ******)0x0);
        }
LAB_10b30df90:
        if ((param_1[1] == (ulong ******)0x0) || (*(char *)((long)param_1[1] + 4) != '\0')) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0a4);
          (*pcVar6)();
        }
        if (cVar4 != *(char *)((long)param_1[2][0x87] + 0x19)) {
          if ((param_1[1] == (ulong ******)0x0) || (*(char *)((long)param_1[1] + 4) != '\0')) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0b0);
            (*pcVar6)();
          }
          (*(code *)(*param_1[2][6])[4])();
        }
      }
      ppppppuVar11 = param_1[1];
      if (ppppppuVar11 != (ulong ******)0x0) {
        do {
          iVar2 = *(int *)ppppppuVar11;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
          if (bVar7) {
            *(int *)ppppppuVar11 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          __ZdlPv();
        }
      }
    }
    return param_1;
  }
  param_1 = param_1 + 1;
  pppppppuStack_68 = (ulong *******)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((long)ppppppuVar11 < 4) {
    if (ppppppuVar11 == (ulong ******)0x1) {
      param_1 = (ulong *******)(ulong)*(byte *)param_1;
    }
    else if (ppppppuVar11 == (ulong ******)0x2) {
      param_1 = (ulong *******)(ulong)*(uint *)param_1;
    }
    else {
      if (ppppppuVar11 != (ulong ******)0x3) goto LAB_10b30de20;
      param_1 = (ulong *******)*param_1;
    }
  }
  else if (3 < (long)ppppppuVar11 - 4U) goto LAB_10b30de20;
  func_0x000107c2cb08(param_1,ppppppuVar11,0,&pppppppuStack_68,200);
  uVar12 = uStack_60;
  pppppppuVar16 = pppppppuStack_68;
  if (-1 < (long)uStack_58) {
    uVar12 = uStack_58 >> 0x38;
    pppppppuVar16 = (ulong *******)&pppppppuStack_68;
  }
  cVar4 = *(char *)((long)param_2 + 0x17);
  ppppppuVar11 = (ulong ******)(long)cVar4;
  if ((long)ppppppuVar11 < 0) {
    ppppppuVar11 = param_2[1];
    uVar20 = ((ulong)param_2[2] & 0x7fffffffffffffff) - 1;
    uVar13 = uVar20 - (long)ppppppuVar11;
  }
  else {
    uVar20 = 0x16;
    uVar13 = 0x16 - (long)ppppppuVar11;
  }
  if (uVar12 <= uVar13) {
    if (uVar12 != 0) {
      pppppppuVar18 = param_2;
      if (cVar4 < '\0') {
        pppppppuVar18 = (ulong *******)*param_2;
      }
      param_1 = (ulong *******)((long)pppppppuVar18 + (long)ppppppuVar11);
      _memmove(param_1,pppppppuVar16,uVar12);
      ppppppuVar11 = (ulong ******)((long)ppppppuVar11 + uVar12);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        param_2[1] = ppppppuVar11;
        *(undefined1 *)((long)pppppppuVar18 + (long)ppppppuVar11) = 0;
      }
      else {
        *(byte *)((long)param_2 + 0x17) = (byte)ppppppuVar11 & 0x7f;
        *(undefined1 *)((long)pppppppuVar18 + (long)ppppppuVar11) = 0;
      }
    }
    goto joined_r0x00010b30dd30;
  }
  ppppppuVar17 = (ulong ******)0x7ffffffffffffff7;
  if (~uVar20 + 0x7ffffffffffffff7 < (uVar12 - uVar20) + (long)ppppppuVar11) goto LAB_10b30de1c;
  if (cVar4 < '\0') {
    pppppppuVar18 = (ulong *******)*param_2;
    if (0x3ffffffffffffff2 < uVar20) goto LAB_10b30dd4c;
LAB_10b30dc9c:
    uVar13 = (long)ppppppuVar11 + uVar12;
    if ((long)ppppppuVar11 + uVar12 <= uVar20 * 2) {
      uVar13 = uVar20 * 2;
    }
    ppppppuVar9 = (ulong ******)0x19;
    if ((uVar13 | 7) != 0x17) {
      ppppppuVar9 = (ulong ******)((uVar13 | 7) + 1);
    }
    ppppppuVar17 = (ulong ******)0x17;
    if (0x16 < uVar13) {
      ppppppuVar17 = ppppppuVar9;
    }
    ppppppuVar9 = ppppppuVar17;
    __Znwm();
  }
  else {
    pppppppuVar18 = param_2;
    if (uVar20 < 0x3ffffffffffffff3) goto LAB_10b30dc9c;
LAB_10b30dd4c:
    ppppppuVar9 = ppppppuVar17;
    __Znwm();
  }
  if (ppppppuVar11 != (ulong ******)0x0) {
    _memmove(ppppppuVar9,pppppppuVar18,ppppppuVar11);
  }
  param_1 = (ulong *******)((long)ppppppuVar9 + (long)ppppppuVar11);
  _memmove(param_1,pppppppuVar16,uVar12);
  if (uVar20 != 0x16) {
    __ZdlPv(pppppppuVar18);
    param_1 = pppppppuVar18;
  }
  *param_2 = ppppppuVar9;
  param_2[1] = (ulong ******)((long)ppppppuVar11 + uVar12);
  param_2[2] = (ulong ******)((ulong)ppppppuVar17 | 0x8000000000000000);
  *(undefined1 *)((long)ppppppuVar9 + (long)((long)ppppppuVar11 + uVar12)) = 0;
joined_r0x00010b30dd30:
  if ((long)uStack_58 < 0) {
    __ZdlPv(pppppppuStack_68);
    param_1 = pppppppuStack_68;
  }
  return param_1;
LAB_10b30df08:
  ppppppuVar9 = (ulong ******)*ppppppuVar14;
  ppppppuVar17 = ppppppuVar14;
  if ((ulong ******)*ppppppuVar14 == (ulong ******)0x0) goto LAB_10b30df90;
  goto LAB_10b30df14;
}



/* Entry: 10b30de24; end: 10b30de27;  */

long FUN_10b30de24(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if ((bRam0000000113370088 & 0x19) == 0) {
    lVar9 = *(long *)(param_1 + 8);
  }
  else {
    func_0x00010b2ef0d0(0x65,0x113370088,&UNK_10f744b1d,0,param_1,0x800,0);
    lVar9 = *(long *)(param_1 + 8);
  }
  if (lVar9 != 0) {
    if ((*(char *)(lVar9 + 4) == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
      if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e08c);
        (*pcVar6)();
      }
      if ((*(long *)(param_1 + 8) == 0) ||
         (cVar5 = *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x438) + 0x19),
         *(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e098);
        (*pcVar6)();
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(long **)(lVar9 + 0x440) != (long *)0x0) {
        bVar4 = *(byte *)(param_1 + 0x18);
        plVar2 = *(long **)(lVar9 + 0x440);
        plVar12 = (long *)(lVar9 + 0x440);
LAB_10b30df14:
        do {
          plVar10 = plVar2;
          if (bVar4 < *(byte *)((long)plVar10 + 0x19)) goto LAB_10b30df08;
          if (bVar4 <= *(byte *)((long)plVar10 + 0x19)) {
            plVar2 = plVar10;
            for (plVar11 = (long *)*plVar10; plVar11 != (long *)0x0;
                plVar11 = *(long **)((long)plVar11 + lVar1)) {
              lVar1 = 8;
              if (bVar4 <= *(byte *)((long)plVar11 + 0x19)) {
                lVar1 = 0;
                plVar2 = plVar11;
              }
            }
            for (plVar10 = (long *)plVar10[1]; plVar10 != (long *)0x0;
                plVar10 = *(long **)((long)plVar10 + lVar1)) {
              lVar1 = 0;
              plVar11 = plVar10;
              if (*(byte *)((long)plVar10 + 0x19) <= bVar4) {
                lVar1 = 8;
                plVar11 = plVar12;
              }
              plVar12 = plVar11;
            }
            while (plVar2 != plVar12) {
              plVar10 = (long *)plVar2[1];
              plVar11 = plVar2;
              if ((long *)plVar2[1] == (long *)0x0) {
                do {
                  plVar13 = (long *)plVar11[2];
                  bVar7 = (long *)*plVar13 != plVar11;
                  plVar11 = plVar13;
                } while (bVar7);
              }
              else {
                do {
                  plVar13 = plVar10;
                  plVar10 = (long *)*plVar13;
                } while ((long *)*plVar13 != (long *)0x0);
              }
              if (*(long **)(lVar9 + 0x438) == plVar2) {
                *(long **)(lVar9 + 0x438) = plVar13;
              }
              *(long *)(lVar9 + 0x448) = *(long *)(lVar9 + 0x448) + -1;
              func_0x000107c2ca70(*(undefined8 *)(lVar9 + 0x440),plVar2);
              __ZdlPv(plVar2);
              plVar2 = plVar13;
            }
            break;
          }
          plVar2 = (long *)plVar10[1];
        } while ((long *)plVar10[1] != (long *)0x0);
      }
LAB_10b30df90:
      if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0a4);
        (*pcVar6)();
      }
      if (cVar5 != *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x438) + 0x19)) {
        if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0b0);
          (*pcVar6)();
        }
        (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x30) + 0x20))();
      }
    }
    piVar8 = *(int **)(param_1 + 8);
    if (piVar8 != (int *)0x0) {
      do {
        iVar3 = *piVar8;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar7) {
          *piVar8 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        __ZdlPv();
      }
    }
  }
  return param_1;
LAB_10b30df08:
  plVar2 = (long *)*plVar10;
  plVar12 = plVar10;
  if ((long *)*plVar10 == (long *)0x0) goto LAB_10b30df90;
  goto LAB_10b30df14;
}



/* Entry: 10b30de28; end: 10b30de3b;  */

void FUN_10b30de28(void)

{
  FUN_10b30de3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b30de3c; end: 10b30e0b7;  */

long FUN_10b30de3c(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if ((bRam0000000113370088 & 0x19) == 0) {
    lVar9 = *(long *)(param_1 + 8);
  }
  else {
    func_0x00010b2ef0d0(0x65,0x113370088,&UNK_10f744b1d,0,param_1,0x800,0);
    lVar9 = *(long *)(param_1 + 8);
  }
  if (lVar9 != 0) {
    if ((*(char *)(lVar9 + 4) == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
      if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e08c);
        (*pcVar6)();
      }
      if ((*(long *)(param_1 + 8) == 0) ||
         (cVar5 = *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x438) + 0x19),
         *(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e098);
        (*pcVar6)();
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(long **)(lVar9 + 0x440) != (long *)0x0) {
        bVar4 = *(byte *)(param_1 + 0x18);
        plVar2 = *(long **)(lVar9 + 0x440);
        plVar12 = (long *)(lVar9 + 0x440);
LAB_10b30df14:
        do {
          plVar10 = plVar2;
          if (bVar4 < *(byte *)((long)plVar10 + 0x19)) goto LAB_10b30df08;
          if (bVar4 <= *(byte *)((long)plVar10 + 0x19)) {
            plVar2 = plVar10;
            for (plVar11 = (long *)*plVar10; plVar11 != (long *)0x0;
                plVar11 = *(long **)((long)plVar11 + lVar1)) {
              lVar1 = 8;
              if (bVar4 <= *(byte *)((long)plVar11 + 0x19)) {
                lVar1 = 0;
                plVar2 = plVar11;
              }
            }
            for (plVar10 = (long *)plVar10[1]; plVar10 != (long *)0x0;
                plVar10 = *(long **)((long)plVar10 + lVar1)) {
              lVar1 = 0;
              plVar11 = plVar10;
              if (*(byte *)((long)plVar10 + 0x19) <= bVar4) {
                lVar1 = 8;
                plVar11 = plVar12;
              }
              plVar12 = plVar11;
            }
            while (plVar2 != plVar12) {
              plVar10 = (long *)plVar2[1];
              plVar11 = plVar2;
              if ((long *)plVar2[1] == (long *)0x0) {
                do {
                  plVar13 = (long *)plVar11[2];
                  bVar7 = (long *)*plVar13 != plVar11;
                  plVar11 = plVar13;
                } while (bVar7);
              }
              else {
                do {
                  plVar13 = plVar10;
                  plVar10 = (long *)*plVar13;
                } while ((long *)*plVar13 != (long *)0x0);
              }
              if (*(long **)(lVar9 + 0x438) == plVar2) {
                *(long **)(lVar9 + 0x438) = plVar13;
              }
              *(long *)(lVar9 + 0x448) = *(long *)(lVar9 + 0x448) + -1;
              func_0x000107c2ca70(*(undefined8 *)(lVar9 + 0x440),plVar2);
              __ZdlPv(plVar2);
              plVar2 = plVar13;
            }
            break;
          }
          plVar2 = (long *)plVar10[1];
        } while ((long *)plVar10[1] != (long *)0x0);
      }
LAB_10b30df90:
      if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0a4);
        (*pcVar6)();
      }
      if (cVar5 != *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x438) + 0x19)) {
        if ((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 4) != '\0')) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x10b30e0b0);
          (*pcVar6)();
        }
        (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x30) + 0x20))();
      }
    }
    piVar8 = *(int **)(param_1 + 8);
    if (piVar8 != (int *)0x0) {
      do {
        iVar3 = *piVar8;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar7) {
          *piVar8 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        __ZdlPv();
      }
    }
  }
  return param_1;
LAB_10b30df08:
  plVar2 = (long *)*plVar10;
  plVar12 = plVar10;
  if ((long *)*plVar10 == (long *)0x0) goto LAB_10b30df90;
  goto LAB_10b30df14;
}



/* Entry: 10b30e0b8; end: 10b318663;  */

undefined8 * FUN_10b30e0b8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110cd56e8;
  lVar8 = param_1[10];
  if (lVar8 != 0) {
    iVar5 = (int)lVar8 + 0x20;
    _pthread_mutex_trylock();
    if (iVar5 == 0) {
      bVar2 = *(byte *)(lVar8 + 0x8a);
      _pthread_mutex_unlock(lVar8 + 0x20);
    }
    else {
      func_0x00010b329e58(lVar8 + 0x20);
      bVar2 = *(byte *)(lVar8 + 0x8a);
      _pthread_mutex_unlock(lVar8 + 0x20);
    }
    if ((bVar2 & 1) == 0) {
      lVar8 = param_1[10];
      *(undefined8 *)(lVar8 + 0xd0) = 0;
      lStack_48 = *(long *)(*(long *)(lVar8 + 8) + 0x450);
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x000107c2cd00(lVar8,&lStack_48);
      uVar9 = *(undefined8 *)(param_1[10] + 8);
      iVar5 = (int)param_1 + 0x10;
      _pthread_mutex_trylock();
      if (iVar5 != 0) {
        func_0x00010b329e58(param_1 + 2);
      }
      lStack_48 = param_1[10];
      param_1[10] = 0;
      _pthread_mutex_unlock(param_1 + 2);
      FUN_10b30a88c(uVar9,&lStack_48);
      if (lStack_48 != 0) {
        func_0x00010b30e7a0();
        __ZdlPv();
      }
    }
  }
  param_1[0x12] = 0;
  *(undefined1 *)(param_1[0x11] + 4) = 1;
  piVar6 = (int *)param_1[0x11];
  if (piVar6 != (int *)0x0) {
    do {
      iVar5 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      __ZdlPv();
    }
  }
  plVar7 = (long *)param_1[0xe];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  piVar6 = (int *)param_1[0xd];
  if (piVar6 != (int *)0x0) {
    do {
      iVar5 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      __ZdlPv();
    }
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    do {
      iVar5 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      __ZdlPv();
    }
  }
  lVar8 = param_1[10];
  param_1[10] = 0;
  if (lVar8 != 0) {
    func_0x00010b30e7a0();
    __ZdlPv();
  }
  _pthread_mutex_destroy(param_1 + 2);
  return param_1;
}



/* Entry: 10b318664; end: 10b318dcf;  */

undefined8 * FUN_10b318664(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  undefined *puVar14;
  long *plVar15;
  undefined **unaff_x27;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = 0;
  if (param_3 == 1) {
    plVar15 = &lStack_98;
  }
  else {
    if ((*(char *)((long)param_2 + 9) == '\0') && ((*(byte *)((long)param_2 + 0xb) & 0x7f) == 0)) {
      if ((bRam000000011383ad20 & 1) == 0) {
        iVar13 = 0x1383ad20;
        ___cxa_guard_acquire();
        if (iVar13 != 0) {
          if (lRam000000011383a988 != 0) {
            puStack_90 = &UNK_10e574b65;
            uStack_88 = 0x1d;
            FUN_10b2edb28(lRam000000011383a988 + 0x18,&puStack_90);
          }
          cRam000000011383ad18 = '\x01';
          ___cxa_guard_release(0x11383ad20);
        }
      }
      bVar4 = *(byte *)((long)param_2 + 0xc) | *(byte *)((long)param_2 + 0xd);
      lVar9 = 3;
      if (cRam000000011383ad18 == '\0') {
        lVar9 = 1;
      }
      lVar10 = 2;
      if (cRam000000011383ad18 == '\0') {
        lVar10 = 0;
      }
    }
    else {
      lVar10 = 0;
      bVar4 = *(byte *)((long)param_2 + 0xc) | *(byte *)((long)param_2 + 0xd);
      lVar9 = 1;
    }
    if ((bVar4 & 1) == 0) {
      lVar9 = lVar10;
    }
    plVar15 = param_1 + lVar9 * 2 + (ulong)((*(byte *)((long)param_2 + 10) & 0x7f) != 0) + 0x10;
  }
  iVar13 = (int)param_1 + 0x20;
  _pthread_mutex_trylock();
  if (iVar13 == 0) {
    lVar9 = *plVar15;
  }
  else {
    func_0x00010b329e58(param_1 + 4);
    lVar9 = *plVar15;
  }
  if (lVar9 == 0) {
    if ((*(char *)((long)param_2 + 9) == '\0') && ((*(byte *)((long)param_2 + 0xb) & 0x7f) == 0)) {
      if ((bRam000000011383ad20 & 1) == 0) {
        iVar13 = 0x1383ad20;
        ___cxa_guard_acquire();
        if (iVar13 != 0) {
          if (lRam000000011383a988 != 0) {
            puStack_90 = &UNK_10e574b65;
            uStack_88 = 0x1d;
            FUN_10b2edb28(lRam000000011383a988 + 0x18,&puStack_90);
          }
          cRam000000011383ad18 = '\x01';
          ___cxa_guard_release(0x11383ad20);
        }
      }
      bVar4 = *(byte *)((long)param_2 + 0xc) | *(byte *)((long)param_2 + 0xd);
      lVar9 = 3;
      if (cRam000000011383ad18 == '\0') {
        lVar9 = 1;
      }
      lVar10 = 2;
      if (cRam000000011383ad18 == '\0') {
        lVar10 = 0;
      }
    }
    else {
      lVar10 = 0;
      bVar4 = *(byte *)((long)param_2 + 0xc) | *(byte *)((long)param_2 + 0xd);
      lVar9 = 1;
    }
    if ((bVar4 & 1) == 0) {
      lVar9 = lVar10;
    }
    unaff_x27 = &PTR_s_Foreground_110cd5be8 + lVar9 * 2;
    uStack_b0 = 0;
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    if (param_3 == 0) {
      puVar7 = (undefined8 *)((ulong)&uStack_b0 | 6);
      uStack_b0 = 0x646572616853;
      lVar9 = 6;
      uStack_a0 = 0x600000000000000;
    }
    else {
      lVar9 = 0;
      puVar7 = &uStack_b0;
    }
    puVar14 = *unaff_x27;
    puVar5 = puVar14;
    _strlen();
    if ((undefined *)(0x16 - lVar9) < puVar5) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (&uStack_b0,0x16,puVar5 + lVar9 + -0x16,lVar9,lVar9,0,puVar5,puVar14);
    }
    else if (puVar5 != (undefined *)0x0) {
      _memmove(puVar7,puVar14,puVar5);
      puVar5 = puVar5 + lVar9;
      puVar14 = puVar5;
      if (-1 < uStack_a0) {
        uStack_a0 = CONCAT17((char)puVar5,(undefined7)uStack_a0);
        puVar14 = puStack_a8;
      }
      puStack_a8 = puVar14;
      *(undefined1 *)((long)&uStack_b0 + (long)puVar5) = 0;
    }
    if ((bRam000000011383ad20 & 1) == 0) goto LAB_10b318cd8;
    goto LAB_10b3188ac;
  }
  _pthread_mutex_unlock(param_1 + 4);
LAB_10b318b58:
  do {
    lVar9 = *plVar15;
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    piVar12 = (int *)(puVar7 + 1);
    *piVar12 = 0;
    *puVar7 = &PTR_FUN_110cd5c90;
    puVar7[2] = param_1;
    puVar7[3] = lVar9;
    *(int *)(puVar7 + 4) = param_3;
    puVar8 = (undefined8 *)0xc0;
    __Znwm();
    param_1 = puVar8 + 1;
    *(int *)param_1 = 0;
    *puVar8 = &PTR____cxa_pure_virtual_110cd5dd8;
    *(undefined8 *)((long)puVar8 + 0xc) = *param_2;
    *(undefined1 *)((long)puVar8 + 0x14) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)((long)puVar8 + 0x15) = *(undefined4 *)((long)param_2 + 9);
    *(undefined2 *)((long)puVar8 + 0x19) = *(undefined2 *)((long)param_2 + 0xd);
    *(undefined1 *)((long)puVar8 + 0x1b) = *(undefined1 *)((long)param_2 + 9);
    puStack_90 = (undefined *)0xaaaaaaaaaaaaaaaa;
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    _pthread_mutexattr_init(&puStack_90);
    _pthread_mutexattr_setprotocol(&puStack_90,1);
    _pthread_mutex_init(puVar8 + 4,&puStack_90);
    _pthread_mutexattr_destroy(&puStack_90);
    puVar8[0xc] = 0xffffffffffffffff;
    puVar8[0xd] = puVar7;
    *(undefined4 *)(puVar8 + 0xe) = 2;
    *puVar8 = &PTR_DAT_110cd5d38;
    do {
      iVar13 = iRam000000011383ac68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x11383ac68,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        iRam000000011383ac68 = iRam000000011383ac68 + 1;
      }
    } while (cVar2 != '\0');
    *(int *)((long)puVar8 + 0x74) = iVar13;
    puVar8[0x10] = 0;
    puVar8[0xf] = 0;
    puVar8[0x12] = 0;
    puVar8[0x11] = 0;
    *(undefined8 *)((long)puVar8 + 0x99) = 0;
    *(undefined8 *)((long)puVar8 + 0x91) = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x15] = 0;
    if (puVar8 != (undefined8 *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(int *)param_1 = (int)*param_1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7[5] = puVar8;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar7;
    }
    ___stack_chk_fail();
LAB_10b318cd8:
    iVar13 = 0x1383ad20;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      if (lRam000000011383a988 != 0) {
        puStack_90 = &UNK_10e574b65;
        uStack_88 = 0x1d;
        FUN_10b2edb28(lRam000000011383a988 + 0x18,&puStack_90);
      }
      cRam000000011383ad18 = '\x01';
      ___cxa_guard_release(0x11383ad20);
    }
LAB_10b3188ac:
    iVar13 = 1;
    if (cRam000000011383ad18 == '\x01') {
      iVar13 = *(int *)(unaff_x27 + 1);
    }
    *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
    func_0x000107c2cc94(&puStack_90,&UNK_10f744fd9);
    uVar11 = 1;
    if (param_3 == 1) {
      uVar11 = 2;
    }
    puVar7 = (undefined8 *)0xd0;
    __Znwm();
    lVar10 = param_1[1];
    lVar9 = *param_1;
    piVar12 = (int *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *puVar7 = &PTR_FUN_110cd5c38;
    plStack_78 = (long *)0xaaaaaaaaaaaaaaaa;
    uStack_70 = 0xaaaaaaaaaaaaaaaa;
    _pthread_mutexattr_init(&plStack_78);
    _pthread_mutexattr_setprotocol(&plStack_78,1);
    _pthread_mutex_init(puVar7 + 1,&plStack_78);
    _pthread_mutexattr_destroy(&plStack_78);
    *(undefined1 *)(puVar7 + 9) = 0;
    puVar7[0xb] = lVar10;
    puVar7[10] = lVar9;
    if (cStack_79 < '\0') {
      func_0x000107c3192c(puVar7 + 0xc,puStack_90,uStack_88);
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      *(undefined4 *)(puVar7 + 0xf) = uVar11;
      *(undefined1 *)(puVar7 + 0x18) = 0;
      puVar7[0x19] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      *(undefined8 *)((long)puVar7 + 0xb1) = 0;
      *(undefined8 *)((long)puVar7 + 0xa9) = 0;
      if (cStack_79 < '\0') {
        __ZdlPv(puStack_90);
      }
    }
    else {
      puVar7[0xd] = uStack_88;
      puVar7[0xc] = puStack_90;
      puVar7[0xe] = CONCAT17(cStack_79,uStack_80);
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      *(undefined4 *)(puVar7 + 0xf) = uVar11;
      *(undefined1 *)(puVar7 + 0x18) = 0;
      puVar7[0x19] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      *(undefined8 *)((long)puVar7 + 0xb1) = 0;
      *(undefined8 *)((long)puVar7 + 0xa9) = 0;
    }
    plStack_78 = (long *)0xaaaaaaaaaaaaaaaa;
    plVar6 = (long *)0xc8;
    __Znwm();
    lVar9 = *param_1;
    lVar10 = param_1[1];
    piVar12 = (int *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    unaff_x27 = (undefined **)(plVar6 + 1);
    *(int *)unaff_x27 = 0;
    *plVar6 = (long)&PTR_DAT_110cd6180;
    plVar6[2] = 0;
    puStack_90 = (undefined *)0xaaaaaaaaaaaaaaaa;
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    _pthread_mutexattr_init(&puStack_90);
    _pthread_mutexattr_setprotocol(&puStack_90,1);
    _pthread_mutex_init(plVar6 + 3,&puStack_90);
    _pthread_mutexattr_destroy(&puStack_90);
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    func_0x000107c2d008(plVar6 + 0xd,1,1);
    *(undefined1 *)(plVar6 + 0x12) = 0;
    plVar6[0x13] = (long)puVar7;
    plVar6[0x14] = lVar9;
    plVar6[0x15] = lVar10;
    plVar6[0x16] = 0;
    *(int *)(plVar6 + 0x17) = iVar13;
    if ((**(uint **)(lVar9 + 0x30) & 1) != 0) {
      iVar13 = 1;
    }
    *(int *)((long)plVar6 + 0xbc) = iVar13;
    *(undefined1 *)(plVar6 + 0x18) = 0;
    *(undefined1 *)(plVar6 + 0x11) = 0;
    if (plVar6 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
        if (bVar3) {
          *(int *)unaff_x27 = *(int *)unaff_x27 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7[0x10] = plVar6;
    plVar1 = (long *)param_1[0xd];
    plStack_78 = plVar6;
    if (plVar1 < (long *)param_1[0xe]) {
      *plVar1 = (long)plVar6;
      param_1[0xd] = (long)(plVar1 + 1);
      lVar9 = *plVar1;
    }
    else {
      plVar6 = param_1 + 0xc;
      FUN_10b31978c(plVar6,&plStack_78);
      param_1[0xd] = (long)plVar6;
      lVar9 = plVar6[-1];
      if (plStack_78 != (long *)0x0) {
        plVar6 = plStack_78 + 1;
        do {
          iVar13 = (int)*plVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar13;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plStack_78 + 0x18))();
        }
      }
    }
    *plVar15 = lVar9;
    if (uStack_a0 < 0) goto LAB_10b318cb4;
    lVar9 = param_1[0x18];
    _pthread_mutex_unlock(param_1 + 4);
  } while ((char)lVar9 != '\x01');
  goto LAB_10b318b4c;
LAB_10b318cb4:
  __ZdlPv(uStack_b0);
  lVar9 = param_1[0x18];
  _pthread_mutex_unlock(param_1 + 4);
  if ((char)lVar9 == '\x01') {
LAB_10b318b4c:
    func_0x000107c2cdf0(*plVar15,param_1[3]);
  }
  goto LAB_10b318b58;
}



/* Entry: 10b318dd0; end: 10b318f97;  */

void FUN_10b318dd0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  
  iVar10 = (int)param_1;
  iVar9 = iVar10 + 0x20;
  _pthread_mutex_trylock();
  if (iVar9 != 0) {
    func_0x00010b329e58(param_1 + 0x20);
  }
  plVar20 = (long *)(param_1 + 0x60);
  plVar19 = (long *)*plVar20;
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  plVar18 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *plVar20 = 0;
  _pthread_mutex_unlock(param_1 + 0x20);
  for (plVar17 = plVar19; plVar17 != plVar18; plVar17 = plVar17 + 1) {
    while( true ) {
      lVar15 = *(long *)(*plVar17 + 0x98);
      iVar9 = (int)lVar15 + 8;
      _pthread_mutex_trylock();
      if (iVar9 != 0) {
        func_0x00010b329e58(lVar15 + 8);
      }
      *(undefined1 *)(lVar15 + 0xb8) = 1;
      _pthread_mutex_unlock(lVar15 + 8);
      lVar15 = *plVar17;
      *(undefined1 *)(lVar15 + 0xc0) = 1;
      func_0x000107c2d00c(lVar15 + 0x68);
      iVar9 = (int)lVar15 + 0x18;
      _pthread_mutex_trylock();
      if (iVar9 == 0) {
        lVar16 = *(long *)(lVar15 + 0x58);
      }
      else {
        func_0x00010b329e58(lVar15 + 0x18);
        lVar16 = *(long *)(lVar15 + 0x58);
      }
      if (lVar16 != 0) break;
      _pthread_mutex_unlock(lVar15 + 0x18);
      plVar17 = plVar17 + 1;
      if (plVar17 == plVar18) goto LAB_10b318ed8;
    }
    *(undefined8 *)(lVar15 + 0x58) = 0;
    _pthread_mutex_unlock(lVar15 + 0x18);
    func_0x00010b32a1a4(lVar16);
  }
LAB_10b318ed8:
  iVar9 = iVar10 + 0x20;
  _pthread_mutex_trylock();
  if (iVar9 == 0) {
    plVar17 = (long *)*plVar20;
  }
  else {
    func_0x00010b329e58(param_1 + 0x20);
    plVar17 = (long *)*plVar20;
  }
  if (plVar17 != (long *)0x0) {
    plVar21 = *(long **)(param_1 + 0x68);
    plVar11 = plVar17;
    if (plVar21 != plVar17) {
      do {
        plVar21 = plVar21 + -1;
        plVar11 = (long *)*plVar21;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *(int *)plVar1 = iVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar11 + 0x18))();
          }
        }
      } while (plVar21 != plVar17);
      plVar11 = (long *)*plVar20;
    }
    *(long **)(param_1 + 0x68) = plVar17;
    __ZdlPv(plVar11);
  }
  *(long **)(param_1 + 0x60) = plVar19;
  *(undefined8 *)(param_1 + 0x70) = uVar22;
  *(long **)(param_1 + 0x68) = plVar18;
  _pthread_mutex_unlock(param_1 + 0x20);
  iVar9 = iVar10 + 0x20;
  _pthread_mutex_trylock();
  if (iVar9 != 0) {
    func_0x00010b329e58(param_1 + 0x20);
  }
  lVar15 = *(long *)(param_1 + 0x80);
  lVar4 = *(long *)(param_1 + 0x88);
  lVar16 = *(long *)(param_1 + 0x90);
  lVar5 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  lVar2 = *(long *)(param_1 + 0xa0);
  lVar6 = *(long *)(param_1 + 0xa8);
  lVar3 = *(long *)(param_1 + 0xb0);
  plVar17 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _pthread_mutex_unlock(param_1 + 0x20);
  if (lVar15 != 0) {
    FUN_10b3190a8(param_1,lVar15);
  }
  if (lVar4 != 0) {
    FUN_10b3190a8(param_1,lVar4);
  }
  if (lVar16 != 0) {
    FUN_10b3190a8(param_1,lVar16);
  }
  if (lVar5 != 0) {
    FUN_10b3190a8(param_1,lVar5);
  }
  if (lVar2 != 0) {
    FUN_10b3190a8(param_1,lVar2);
  }
  if (lVar6 != 0) {
    FUN_10b3190a8(param_1,lVar6);
  }
  if (lVar3 != 0) {
    FUN_10b3190a8(param_1,lVar3);
  }
  if (plVar17 == (long *)0x0) {
    return;
  }
  iVar10 = iVar10 + 0x20;
  _pthread_mutex_trylock();
  if (iVar10 == 0) {
    plVar19 = *(long **)(param_1 + 0x60);
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar19 == plVar20) {
LAB_10b3192a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x20);
      return;
    }
  }
  else {
    func_0x00010b329e58(param_1 + 0x20);
    plVar19 = *(long **)(param_1 + 0x60);
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar19 == plVar20) goto LAB_10b3192a8;
  }
  uVar13 = (long)plVar20 + (-8 - (long)plVar19);
  uVar12 = (uint)uVar13;
  if ((~uVar12 & 0x18) != 0) {
    uVar14 = (ulong)((uVar12 >> 3) + 1) & 3;
    do {
      plVar18 = (long *)*plVar19;
      if (plVar18 == plVar17) goto LAB_10b319124;
      plVar19 = plVar19 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (0x17 < uVar13) {
    plVar19 = plVar19 + 2;
    do {
      plVar18 = (long *)plVar19[-2];
      if (plVar18 == plVar17) {
        plVar19 = plVar19 + -2;
        goto LAB_10b319124;
      }
      plVar18 = (long *)plVar19[-1];
      if (plVar18 == plVar17) {
        plVar19 = plVar19 + -1;
        goto LAB_10b319124;
      }
      plVar18 = (long *)*plVar19;
      if (plVar18 == plVar17) goto LAB_10b319124;
      plVar18 = (long *)plVar19[1];
      if (plVar18 == plVar17) {
        plVar19 = plVar19 + 1;
        goto LAB_10b319124;
      }
      plVar18 = plVar19 + 2;
      plVar19 = plVar19 + 4;
    } while (plVar18 != plVar20);
  }
  plVar18 = (long *)*plVar20;
  plVar19 = plVar20;
LAB_10b319124:
  plVar17 = plVar19 + 1;
  *plVar19 = 0;
  plVar20 = *(long **)(param_1 + 0x68);
  if (plVar17 != plVar20) {
    do {
      lVar15 = *plVar17;
      *plVar17 = 0;
      plVar11 = (long *)*plVar19;
      *plVar19 = lVar15;
      if (plVar11 != (long *)0x0) {
        plVar21 = plVar11 + 1;
        do {
          iVar9 = (int)*plVar21 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *(int *)plVar21 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
      plVar17 = plVar17 + 1;
      plVar19 = plVar19 + 1;
    } while (plVar17 != plVar20);
    plVar20 = *(long **)(param_1 + 0x68);
  }
  while (plVar20 != plVar19) {
    plVar20 = plVar20 + -1;
    plVar17 = (long *)*plVar20;
    if (plVar17 != (long *)0x0) {
      plVar11 = plVar17 + 1;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(int *)plVar11 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
  }
  *(long **)(param_1 + 0x68) = plVar19;
  _pthread_mutex_unlock(param_1 + 0x20);
  *(undefined1 *)(plVar18 + 0x12) = 1;
  func_0x000107c2d00c(plVar18 + 0xd);
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 1;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b31921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x18))(plVar18);
      return;
    }
  }
  return;
}



/* Entry: 10b318f98; end: 10b3190a7;  */

void FUN_10b318f98(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  
  iVar10 = (int)param_1 + 0x20;
  _pthread_mutex_trylock();
  if (iVar10 != 0) {
    func_0x00010b329e58(param_1 + 0x20);
  }
  lVar13 = *(long *)(param_1 + 0x80);
  lVar5 = *(long *)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x90);
  lVar6 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  lVar3 = *(long *)(param_1 + 0xa0);
  lVar7 = *(long *)(param_1 + 0xa8);
  lVar4 = *(long *)(param_1 + 0xb0);
  plVar12 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _pthread_mutex_unlock(param_1 + 0x20);
  if (lVar13 != 0) {
    FUN_10b3190a8(param_1,lVar13);
  }
  if (lVar5 != 0) {
    FUN_10b3190a8(param_1,lVar5);
  }
  if (lVar2 != 0) {
    FUN_10b3190a8(param_1,lVar2);
  }
  if (lVar6 != 0) {
    FUN_10b3190a8(param_1,lVar6);
  }
  if (lVar3 != 0) {
    FUN_10b3190a8(param_1,lVar3);
  }
  if (lVar7 != 0) {
    FUN_10b3190a8(param_1,lVar7);
  }
  if (lVar4 != 0) {
    FUN_10b3190a8(param_1,lVar4);
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  iVar10 = (int)param_1 + 0x20;
  _pthread_mutex_trylock();
  if (iVar10 == 0) {
    plVar19 = *(long **)(param_1 + 0x60);
    plVar18 = *(long **)(param_1 + 0x68);
    if (plVar19 == plVar18) {
LAB_10b3192a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x20);
      return;
    }
  }
  else {
    func_0x00010b329e58(param_1 + 0x20);
    plVar19 = *(long **)(param_1 + 0x60);
    plVar18 = *(long **)(param_1 + 0x68);
    if (plVar19 == plVar18) goto LAB_10b3192a8;
  }
  uVar15 = (long)plVar18 + (-8 - (long)plVar19);
  uVar14 = (uint)uVar15;
  if ((~uVar14 & 0x18) != 0) {
    uVar16 = (ulong)((uVar14 >> 3) + 1) & 3;
    do {
      plVar17 = (long *)*plVar19;
      if (plVar17 == plVar12) goto LAB_10b319124;
      plVar19 = plVar19 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (0x17 < uVar15) {
    plVar19 = plVar19 + 2;
    do {
      plVar17 = (long *)plVar19[-2];
      if (plVar17 == plVar12) {
        plVar19 = plVar19 + -2;
        goto LAB_10b319124;
      }
      plVar17 = (long *)plVar19[-1];
      if (plVar17 == plVar12) {
        plVar19 = plVar19 + -1;
        goto LAB_10b319124;
      }
      plVar17 = (long *)*plVar19;
      if (plVar17 == plVar12) goto LAB_10b319124;
      plVar17 = (long *)plVar19[1];
      if (plVar17 == plVar12) {
        plVar19 = plVar19 + 1;
        goto LAB_10b319124;
      }
      plVar17 = plVar19 + 2;
      plVar19 = plVar19 + 4;
    } while (plVar17 != plVar18);
  }
  plVar17 = (long *)*plVar18;
  plVar19 = plVar18;
LAB_10b319124:
  plVar12 = plVar19 + 1;
  *plVar19 = 0;
  plVar18 = *(long **)(param_1 + 0x68);
  if (plVar12 != plVar18) {
    do {
      lVar13 = *plVar12;
      *plVar12 = 0;
      plVar11 = (long *)*plVar19;
      *plVar19 = lVar13;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
      plVar12 = plVar12 + 1;
      plVar19 = plVar19 + 1;
    } while (plVar12 != plVar18);
    plVar18 = *(long **)(param_1 + 0x68);
  }
  while (plVar18 != plVar19) {
    plVar18 = plVar18 + -1;
    plVar12 = (long *)*plVar18;
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 1;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *(int *)plVar11 = iVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar12 + 0x18))();
      }
    }
  }
  *(long **)(param_1 + 0x68) = plVar19;
  _pthread_mutex_unlock(param_1 + 0x20);
  *(undefined1 *)(plVar17 + 0x12) = 1;
  func_0x000107c2d00c(plVar17 + 0xd);
  if (plVar17 != (long *)0x0) {
    plVar12 = plVar17 + 1;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(int *)plVar12 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b31921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x18))(plVar17);
      return;
    }
  }
  return;
}



/* Entry: 10b3190a8; end: 10b3192bf;  */

void FUN_10b3190a8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  iVar4 = (int)param_1 + 0x20;
  _pthread_mutex_trylock();
  if (iVar4 == 0) {
    plVar13 = *(long **)(param_1 + 0x60);
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar13 == plVar6) {
LAB_10b3192a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x20);
      return;
    }
  }
  else {
    func_0x00010b329e58(param_1 + 0x20);
    plVar13 = *(long **)(param_1 + 0x60);
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar13 == plVar6) goto LAB_10b3192a8;
  }
  uVar9 = (long)plVar6 + (-8 - (long)plVar13);
  uVar8 = (uint)uVar9;
  if ((~uVar8 & 0x18) != 0) {
    uVar10 = (ulong)((uVar8 >> 3) + 1) & 3;
    do {
      plVar11 = (long *)*plVar13;
      if (plVar11 == param_2) goto LAB_10b319124;
      plVar13 = plVar13 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (0x17 < uVar9) {
    plVar13 = plVar13 + 2;
    do {
      plVar11 = (long *)plVar13[-2];
      if (plVar11 == param_2) {
        plVar13 = plVar13 + -2;
        goto LAB_10b319124;
      }
      plVar11 = (long *)plVar13[-1];
      if (plVar11 == param_2) {
        plVar13 = plVar13 + -1;
        goto LAB_10b319124;
      }
      plVar11 = (long *)*plVar13;
      if (plVar11 == param_2) goto LAB_10b319124;
      plVar11 = (long *)plVar13[1];
      if (plVar11 == param_2) {
        plVar13 = plVar13 + 1;
        goto LAB_10b319124;
      }
      plVar11 = plVar13 + 2;
      plVar13 = plVar13 + 4;
    } while (plVar11 != plVar6);
  }
  plVar11 = (long *)*plVar6;
  plVar13 = plVar6;
LAB_10b319124:
  plVar6 = plVar13 + 1;
  *plVar13 = 0;
  plVar12 = *(long **)(param_1 + 0x68);
  if (plVar6 != plVar12) {
    do {
      lVar7 = *plVar6;
      *plVar6 = 0;
      plVar5 = (long *)*plVar13;
      *plVar13 = lVar7;
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
      plVar6 = plVar6 + 1;
      plVar13 = plVar13 + 1;
    } while (plVar6 != plVar12);
    plVar12 = *(long **)(param_1 + 0x68);
  }
  while (plVar12 != plVar13) {
    plVar12 = plVar12 + -1;
    plVar6 = (long *)*plVar12;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  *(long **)(param_1 + 0x68) = plVar13;
  _pthread_mutex_unlock(param_1 + 0x20);
  *(undefined1 *)(plVar11 + 0x12) = 1;
  func_0x000107c2d00c(plVar11 + 0xd);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 1;
    do {
      iVar4 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b31921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x18))(plVar11);
      return;
    }
  }
  return;
}



/* Entry: 10b3192c0; end: 10b3192cb;  */

undefined8 * FUN_10b3192c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  
  _abort();
  *param_1 = &PTR_FUN_110cd5c38;
  FUN_10b31a4cc(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    lVar6 = param_1[0xb];
  }
  else {
    lVar6 = param_1[0xb];
  }
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
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
      if ((*(byte *)(param_1[0xb] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31936c);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[0xb] + 0x18);
      _pthread_mutex_destroy(param_1 + 1);
      return param_1;
    }
  }
  _pthread_mutex_destroy(param_1 + 1);
  return param_1;
}



/* Entry: 10b3192cc; end: 10b31940b;  */

undefined8 * FUN_10b3192cc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110cd5c38;
  FUN_10b31a4cc(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    lVar6 = param_1[0xb];
  }
  else {
    lVar6 = param_1[0xb];
  }
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
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
      if ((*(byte *)(param_1[0xb] + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31936c);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[0xb] + 0x18);
      _pthread_mutex_destroy(param_1 + 1);
      return param_1;
    }
  }
  _pthread_mutex_destroy(param_1 + 1);
  return param_1;
}



/* Entry: 10b31940c; end: 10b319413;  */

undefined4 FUN_10b31940c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



/* Entry: 10b319414; end: 10b31953b;  */

void FUN_10b319414(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  lVar6 = param_1;
  _pthread_self();
  *(long *)(param_1 + 200) = lVar6;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  func_0x00010012bedc();
  func_0x00010012caf0();
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  pppuStack_48 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
  plVar1 = (long *)*(long *)(param_1 + 0x60);
  uVar4 = *(ulong *)(param_1 + 0x68);
  if (-1 < (char)*(byte *)(param_1 + 0x77)) {
    plVar1 = (long *)(param_1 + 0x60);
    uVar4 = (ulong)*(byte *)(param_1 + 0x77);
  }
  uVar2 = uVar4;
  if (0x3e < uVar4) {
    uVar2 = 0x3f;
  }
  if (uVar4 < 0x17) {
    uStack_38 = CONCAT17((char)uVar2,0xaaaaaaaaaaaaaa);
    ppppuVar5 = &pppuStack_48;
    if (uVar4 == 0) goto code_r0x00010012ca80;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((uVar2 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((uVar2 | 7) + 1);
    }
    ppppuVar5 = ppppuVar3;
    func_0x000107c60e20();
    uStack_38 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_48 = ppppuVar5;
    uStack_40 = uVar2;
  }
  func_0x000107c610b8(ppppuVar5,plVar1,uVar2);
code_r0x00010012ca80:
  *(undefined1 *)((long)ppppuVar5 + uVar2) = 0;
  ppppuVar3 = (undefined8 ****)pppuStack_48;
  if (-1 < (long)uStack_38) {
    ppppuVar3 = &pppuStack_48;
  }
  func_0x000107c61298(ppppuVar3);
  if (-1 < (long)uStack_38) {
    return;
  }
  func_0x000107c60e14(pppuStack_48);
  return;
}



/* Entry: 10b31953c; end: 10b319633;  */

void FUN_10b31953c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    lVar6 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    iVar4 = (int)plVar5 + 0x20;
    _pthread_mutex_trylock();
    if (iVar4 != 0) {
      func_0x00010b329e58(plVar5 + 4);
    }
    plStack_48 = plVar5;
    lStack_40 = lVar6;
    plStack_38 = plVar5;
    FUN_10b319640(param_1,&plStack_48);
    if (plStack_38 != (long *)0x0) {
      _pthread_mutex_unlock(plStack_38 + 4);
    }
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plStack_48 = (long *)0x0;
      if (lStack_40 != 0) {
        func_0x000107c2cdcc(lStack_40,plVar5);
      }
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
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
        do {
          iVar4 = (int)*plVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b319610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plStack_48 + 0x20))();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b319634; end: 10b31963f;  */

undefined8 FUN_10b319634(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 10b319640; end: 10b31978b;  */

undefined8 FUN_10b319640(long param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  iVar6 = (int)param_1 + 8;
  _pthread_mutex_trylock();
  if (iVar6 != 0) {
    func_0x00010b329e58(param_1 + 8);
  }
  plVar7 = (long *)*param_2;
  uVar8 = 0;
  (**(code **)(*plVar7 + 0x10))();
  uStack_48 = param_2[1];
  plStack_50 = (long *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plStack_40 = plVar7;
  uStack_38 = uVar8;
  func_0x000107c2cda0(param_1 + 0x88,&plStack_50);
  plVar3 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plStack_50 = (long *)0x0;
    if (uStack_48 != 0) {
      func_0x000107c2cdcc(uStack_48,plVar3);
    }
    plVar2 = plVar3 + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if (plStack_50 != (long *)0x0) {
      plVar3 = plStack_50 + 1;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plStack_50 + 0x20))();
      }
    }
  }
  lVar1 = param_1 + ((ulong)plVar7 & 0xff) * 8;
  *(long *)(lVar1 + 0xa0) = *(long *)(lVar1 + 0xa0) + 1;
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
     (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90))) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x50) + 0x3c);
    if ((iVar6 == 0) || (*(char *)(*(long *)(param_1 + 0x88) + 0x10) != '\0' && iVar6 == 1)) {
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x48) = 1;
      goto LAB_10b319760;
    }
  }
  uVar8 = 0;
LAB_10b319760:
  _pthread_mutex_unlock(param_1 + 8);
  return uVar8;
}



/* Entry: 10b31978c; end: 10b31996b;  */

long * FUN_10b31978c(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined1 uStack_9c;
  long lStack_98;
  
  lVar20 = *param_1;
  lVar21 = param_1[1];
  lVar19 = lVar21 - lVar20;
  uVar13 = (lVar19 >> 3) + 1;
  if (uVar13 >> 0x3d != 0) {
    FUN_10b3192c0();
LAB_10b319968:
    func_0x00010b2ed0ac();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (cRam000000011383ad28 == '\x01') {
      piVar17 = (int *)*param_3;
      *param_3 = 0;
      plVar16 = param_1;
      (*(code *)PTR_DAT_11336f918)();
      plStack_d8 = param_4;
      if (param_4 != (long *)0x0) {
        if ((long)param_4 + 0x8000000000000001U < 2) {
          plStack_d8 = param_4;
          if (plVar16 != param_4 && (long)plVar16 + 0x8000000000000001U < 2) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x10b3199ec);
            (*pcVar7)();
          }
        }
        else {
          plStack_d8 = (long *)((long)plVar16 + (long)param_4 >> 0x3f ^ 0x8000000000000000);
          if (!SCARRY8((long)plVar16,(long)param_4)) {
            plStack_d8 = (long *)((long)plVar16 + (long)param_4);
          }
        }
      }
      do {
        iStack_a0 = iRam000000011383ad38;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x11383ad38,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          iRam000000011383ad38 = iRam000000011383ad38 + 1;
        }
      } while (cVar3 != '\0');
      uStack_f8 = param_2[1];
      uStack_100 = *param_2;
      uStack_e8 = param_2[3];
      uStack_f0 = param_2[2];
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0xaaaaaaaa00000000;
      uStack_a8 = 0;
      uStack_9c = 0;
      piStack_108 = piVar17;
      plStack_e0 = plVar16;
      FUN_10b319db4(param_1,&piStack_108);
      if (piStack_108 != (int *)0x0) {
        do {
          iVar5 = *piStack_108;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piStack_108,0x10);
          if (bVar4) {
            *piStack_108 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          (**(code **)(piStack_108 + 4))(piStack_108);
        }
      }
    }
    else {
      param_1 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return param_1;
    }
    ___stack_chk_fail();
    *param_1 = (long)&PTR_FUN_110cd5c90;
    if ((cRam000000011383ad28 == '\x01') && ((int)param_1[4] == 1)) {
      FUN_10b3190a8(param_1[2],param_1[3]);
    }
    plVar16 = (long *)param_1[5];
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    return param_1;
  }
  uVar12 = param_1[2] - lVar20 >> 2;
  if (uVar12 <= uVar13) {
    uVar12 = uVar13;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar20)) {
    uVar12 = 0x1fffffffffffffff;
  }
  if (uVar12 == 0) {
    lVar8 = 0;
  }
  else {
    if (uVar12 >> 0x3d != 0) goto LAB_10b319968;
    lVar8 = uVar12 << 3;
    __Znwm();
  }
  puVar1 = (undefined8 *)(lVar8 + lVar19);
  *puVar1 = *param_2;
  *param_2 = 0;
  plVar16 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar18 = (long *)((long)puVar1 - ((long)plVar2 - (long)plVar16));
  lVar6 = (long)plVar2 - (long)plVar16;
  if (lVar6 == 0) goto LAB_10b319930;
  uVar13 = lVar6 - 8;
  plVar9 = plVar16;
  plVar11 = plVar18;
  if ((uVar13 < 0x98) ||
     ((plVar18 < (long *)((long)plVar16 + (uVar13 & 0xfffffffffffffff8) + 8) &&
      (plVar16 < (long *)((((uVar13 & 0xfffffffffffffff8) + lVar21) - (lVar6 + lVar20)) + lVar8 + 8)
      )))) {
LAB_10b3198d8:
    do {
      *plVar11 = *plVar9;
      plVar10 = plVar9 + 1;
      *plVar9 = 0;
      plVar9 = plVar10;
      plVar11 = plVar11 + 1;
    } while (plVar10 != plVar2);
  }
  else {
    uVar13 = (uVar13 >> 3) + 1;
    uVar14 = uVar13 & 0x3ffffffffffffffc;
    plVar9 = (long *)(lVar19 + (lVar6 >> 3) * -8 + lVar8 + 0x10);
    plVar11 = plVar16 + 2;
    uVar15 = uVar14;
    do {
      lVar20 = plVar11[-2];
      lVar19 = plVar11[1];
      lVar21 = *plVar11;
      plVar9[-1] = plVar11[-1];
      plVar9[-2] = lVar20;
      plVar9[1] = lVar19;
      *plVar9 = lVar21;
      plVar11[-1] = 0;
      plVar11[-2] = 0;
      plVar11[1] = 0;
      *plVar11 = 0;
      plVar9 = plVar9 + 4;
      plVar11 = plVar11 + 4;
      uVar15 = uVar15 - 4;
    } while (uVar15 != 0);
    plVar9 = plVar16 + uVar14;
    plVar11 = plVar18 + uVar14;
    if (uVar13 != uVar14) goto LAB_10b3198d8;
  }
  do {
    plVar9 = (long *)*plVar16;
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9 + 1;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    plVar16 = plVar16 + 1;
  } while (plVar16 != plVar2);
  plVar16 = (long *)*param_1;
LAB_10b319930:
  *param_1 = (long)plVar18;
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = lVar8 + uVar12 * 8;
  if (plVar16 != (long *)0x0) {
    __ZdlPv(plVar16);
  }
  return puVar1 + 1;
}



/* Entry: 10b31996c; end: 10b319abf;  */

void FUN_10b31996c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  int *piStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined1 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (cRam000000011383ad28 == '\x01') {
    piVar8 = (int *)*param_3;
    *param_3 = 0;
    puVar6 = param_1;
    (*(code *)PTR_DAT_11336f918)();
    puStack_78 = param_4;
    if (param_4 != (undefined8 *)0x0) {
      if ((long)param_4 + 0x8000000000000001U < 2) {
        puStack_78 = param_4;
        if (puVar6 != param_4 && (long)puVar6 + 0x8000000000000001U < 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x10b3199ec);
          (*pcVar5)();
        }
      }
      else {
        puStack_78 = (undefined8 *)((long)puVar6 + (long)param_4 >> 0x3f ^ 0x8000000000000000);
        if (!SCARRY8((long)puVar6,(long)param_4)) {
          puStack_78 = (undefined8 *)((long)puVar6 + (long)param_4);
        }
      }
    }
    do {
      iStack_40 = iRam000000011383ad38;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11383ad38,0x10);
      if (bVar4) {
        cVar3 = ExclusiveMonitorsStatus();
        iRam000000011383ad38 = iRam000000011383ad38 + 1;
      }
    } while (cVar3 != '\0');
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0xaaaaaaaa00000000;
    uStack_48 = 0;
    uStack_3c = 0;
    piStack_a8 = piVar8;
    puStack_80 = puVar6;
    FUN_10b319db4(param_1,&piStack_a8);
    if (piStack_a8 != (int *)0x0) {
      do {
        iVar2 = *piStack_a8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_a8,0x10);
        if (bVar4) {
          *piStack_a8 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piStack_a8 + 4))(piStack_a8);
      }
    }
  }
  else {
    param_1 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *param_1 = &PTR_FUN_110cd5c90;
  if ((cRam000000011383ad28 == '\x01') && (*(int *)(param_1 + 4) == 1)) {
    FUN_10b3190a8(param_1[2],param_1[3]);
  }
  plVar7 = (long *)param_1[5];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}



/* Entry: 10b319ac0; end: 10b319c43;  */

undefined8 * FUN_10b319ac0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110cd5c90;
  if ((cRam000000011383ad28 == '\x01') && (*(int *)(param_1 + 4) == 1)) {
    FUN_10b3190a8(param_1[2],param_1[3]);
  }
  plVar5 = (long *)param_1[5];
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10b319c44; end: 10b319d4f;  */

ulong FUN_10b319c44(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int *piStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined1 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (cRam000000011383ad28 == '\x01') {
    piVar6 = (int *)*param_3;
    *param_3 = 0;
    uVar4 = param_1;
    (*(code *)PTR_DAT_11336f918)();
    do {
      iStack_40 = iRam000000011383ad38;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x11383ad38,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        iRam000000011383ad38 = iRam000000011383ad38 + 1;
      }
    } while (cVar2 != '\0');
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0xaaaaaaaa00000000;
    uStack_48 = 0;
    uStack_3c = 0;
    piStack_a8 = piVar6;
    uStack_80 = uVar4;
    uStack_78 = param_4;
    FUN_10b319db4(param_1,&piStack_a8);
    if (piStack_a8 != (int *)0x0) {
      do {
        iVar1 = *piStack_a8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_a8,0x10);
        if (bVar3) {
          *piStack_a8 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(piStack_a8 + 4))(piStack_a8);
      }
    }
  }
  else {
    param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cRam000000011383ad28 != '\x01') {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
  if (*(char *)(lVar5 + 0xc0) != '\0') {
    _pthread_self();
    return (ulong)(*(ulong *)(lVar5 + 200) == param_1);
  }
  return 0;
}



/* Entry: 10b319d50; end: 10b319db3;  */

bool FUN_10b319d50(long param_1)

{
  long lVar1;
  
  if (cRam000000011383ad28 != '\x01') {
    return false;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    _pthread_self();
    return *(long *)(lVar1 + 200) == param_1;
  }
  return false;
}



/* Entry: 10b319db4; end: 10b31a05f;  */

long FUN_10b319db4(long param_1,int **param_2,int **param_3)

{
  int *piVar1;
  int **ppiVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int **ppiVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int **ppiStack_1f8;
  long lStack_1f0;
  int **ppiStack_1e8;
  int **ppiStack_1e0;
  int *piStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  int *piStack_1a0;
  int *piStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  undefined5 uStack_178;
  undefined3 uStack_173;
  undefined5 uStack_170;
  long lStack_168;
  int *piStack_120;
  int *piStack_118;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  int *piStack_70;
  int *piStack_68;
  int *piStack_60;
  int *piStack_58;
  int *piStack_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long lStack_38;
  
  ppiVar9 = &piStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = **(long **)(param_1 + 0x10);
  if ((**(uint **)(lVar12 + 0x30) & 1) != 0) {
    if (((*(byte *)(*(long *)(param_1 + 0x28) + 0x16) & 0x7f) != 2) || (param_2[6] != (int *)0x0)) {
      lVar12 = 0;
      goto LAB_10b31a00c;
    }
    iVar6 = (int)lVar12 + 0xa8;
    _pthread_mutex_trylock();
    if (iVar6 != 0) {
      func_0x00010b329e58(lVar12 + 0xa8);
    }
    _pthread_mutex_unlock(lVar12 + 0xa8);
  }
  func_0x000107c2ccb8(lVar12 + 8,&UNK_10f745166,param_2,&UNK_10f74517a);
  if (param_2[6] == (int *)0x0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    ppiVar9 = *(int ***)(param_1 + 0x28);
    if (ppiVar9 != (int **)0x0) {
      ppiVar2 = ppiVar9 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppiVar2,0x10);
        if (bVar5) {
          *(int *)ppiVar2 = *(int *)ppiVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    piStack_a8 = *param_2;
    *param_2 = (int *)0x0;
    piStack_98 = param_2[2];
    piStack_a0 = param_2[1];
    piStack_88 = param_2[4];
    piStack_90 = param_2[3];
    piStack_68 = param_2[8];
    piStack_70 = param_2[7];
    piStack_58 = param_2[10];
    piStack_60 = param_2[9];
    piStack_50 = param_2[0xb];
    uStack_48 = SUB85(param_2[0xc],0);
    uStack_43 = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
    uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
    piStack_78 = param_2[6];
    piStack_80 = param_2[5];
    param_3 = &piStack_a8;
    FUN_10b31a060();
    param_2 = ppiVar9;
    piVar7 = piStack_a8;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    piStack_118 = *param_2;
    *param_2 = (int *)0x0;
    piStack_108 = param_2[2];
    piStack_110 = param_2[1];
    piStack_f8 = param_2[4];
    piStack_100 = param_2[3];
    piStack_d8 = param_2[8];
    piStack_e0 = param_2[7];
    piStack_c8 = param_2[10];
    piStack_d0 = param_2[9];
    piStack_c0 = param_2[0xb];
    uStack_b8 = SUB85(param_2[0xc],0);
    uStack_b3 = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
    uStack_b0 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
    piStack_e8 = param_2[6];
    piStack_f0 = param_2[5];
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98);
    piVar7 = (int *)0x40;
    __Znwm();
    *piVar7 = 1;
    *(code **)(piVar7 + 2) = FUN_10b31a3a0;
    *(code **)(piVar7 + 4) = FUN_10b31a474;
    *(undefined **)(piVar7 + 6) = &UNK_100142430;
    *(code **)(piVar7 + 8) = FUN_10b31a060;
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    *(undefined8 *)(piVar7 + 0xc) = uVar11;
    lVar12 = *(long *)(param_1 + 0x28);
    *(long *)(piVar7 + 0xe) = lVar12;
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (param_1 != 0) {
      piVar1 = (int *)(param_1 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    param_2 = &piStack_118;
    piStack_120 = piVar7;
    func_0x00010b3175f4(uVar13,param_2,&piStack_120,param_1);
    if (piStack_120 == (int *)0x0) {
      lVar12 = 1;
      param_3 = ppiVar9;
      piVar7 = piStack_118;
    }
    else {
      do {
        iVar6 = *piStack_120;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piStack_120,0x10);
        if (bVar5) {
          *piStack_120 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 1) {
        (**(code **)(piStack_120 + 4))();
      }
      lVar12 = 1;
      param_3 = ppiVar9;
      piVar7 = piStack_118;
    }
  }
  if (piVar7 != (int *)0x0) {
    do {
      iVar6 = *piVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar5) {
        *piVar7 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      (**(code **)(piVar7 + 4))(piVar7);
    }
  }
LAB_10b31a00c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar12;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar6 = (int)param_2 + 0x20;
  ppiStack_1e0 = param_2;
  _pthread_mutex_trylock();
  if (iVar6 != 0) goto LAB_10b31a37c;
  if (param_2[0x11] != param_2[0x12]) goto LAB_10b31a0b8;
  do {
    if (((ulong)param_2[0x14] & 1) != 0) goto LAB_10b31a0b8;
    lVar14 = *(long *)(lVar12 + 0x50);
    if (param_2 != (int **)0x0) {
      ppiVar9 = param_2 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppiVar9,0x10);
        if (bVar5) {
          *(int *)ppiVar9 = *(int *)ppiVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = *(uint **)(lVar14 + 0x30);
    if ((*(byte *)((long)param_2 + 0x16) & 0x7f) == 2) {
      do {
        uVar3 = *puVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar5) {
          *puVar10 = uVar3 + 2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar3 & 1) != 0) {
        iVar6 = (int)lVar14 + 0xa8;
        _pthread_mutex_trylock();
        if (iVar6 != 0) {
          func_0x00010b329e58(lVar14 + 0xa8);
        }
        _pthread_mutex_unlock(lVar14 + 0xa8);
      }
LAB_10b31a304:
      piVar7 = (int *)(lVar14 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppiVar9 = param_2;
      if (param_2 != (int **)0x0) goto LAB_10b31a0c0;
    }
    else {
      if ((*puVar10 & 1) == 0) goto LAB_10b31a304;
      if (param_2 != (int **)0x0) {
        ppiVar9 = param_2 + 1;
        do {
          iVar6 = *(int *)ppiVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppiVar9,0x10);
          if (bVar5) {
            *(int *)ppiVar9 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 1) {
          (**(code **)(*param_2 + 8))(param_2);
        }
        lVar8 = 0;
        goto LAB_10b31a23c;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return 0;
    }
    while( true ) {
      ___stack_chk_fail();
LAB_10b31a37c:
      func_0x00010b329e58(param_2 + 4);
      if (param_2[0x11] == param_2[0x12]) break;
LAB_10b31a0b8:
      lVar14 = 0;
      ppiVar9 = (int **)0x0;
LAB_10b31a0c0:
      lVar8 = *(long *)(lVar12 + 0x50);
      func_0x000107c2cdc8(lVar8,param_3,*(undefined1 *)((long)param_2 + 0x15));
      if ((int)lVar8 == 0) {
        if (ppiVar9 != (int **)0x0) {
          if (lVar14 != 0) {
            func_0x000107c2cdcc(lVar14,ppiVar9);
          }
          ppiVar2 = ppiVar9 + 1;
          do {
            iVar6 = *(int *)ppiVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppiVar2,0x10);
            if (bVar5) {
              *(int *)ppiVar2 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(*ppiVar9 + 8))(ppiVar9);
          }
        }
LAB_10b31a238:
        if (param_2 != (int **)0x0) {
LAB_10b31a23c:
          _pthread_mutex_unlock(param_2 + 4);
LAB_10b31a244:
          ppiVar9 = param_2 + 1;
          do {
            iVar6 = *(int *)ppiVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppiVar9,0x10);
            if (bVar5) {
              *(int *)ppiVar9 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(*param_2 + 8))(param_2);
          }
        }
      }
      else {
        piStack_1d8 = *param_3;
        *param_3 = (int *)0x0;
        piStack_1c8 = param_3[2];
        piStack_1d0 = param_3[1];
        piStack_1b8 = param_3[4];
        piStack_1c0 = param_3[3];
        piStack_198 = param_3[8];
        piStack_1a0 = param_3[7];
        piStack_188 = param_3[10];
        piStack_190 = param_3[9];
        piStack_180 = param_3[0xb];
        uStack_178 = SUB85(param_3[0xc],0);
        uStack_173 = (undefined3)*(undefined8 *)((long)param_3 + 0x65);
        uStack_170 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x65) >> 0x18);
        piStack_1a8 = param_3[6];
        piStack_1b0 = param_3[5];
        func_0x000107c2cdb8(&ppiStack_1e0,&piStack_1d8);
        if (piStack_1d8 != (int *)0x0) {
          do {
            iVar6 = *piStack_1d8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_1d8,0x10);
            if (bVar5) {
              *piStack_1d8 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(piStack_1d8 + 4))();
          }
        }
        if (ppiVar9 == (int **)0x0) goto LAB_10b31a238;
        ppiStack_1e0 = (int **)0x0;
        lVar8 = lVar12;
        ppiStack_1f8 = ppiVar9;
        lStack_1f0 = lVar14;
        ppiStack_1e8 = param_2;
        FUN_10b319640(lVar12,&ppiStack_1f8);
        if (ppiStack_1e8 != (int **)0x0) {
          _pthread_mutex_unlock(ppiStack_1e8 + 4);
        }
        ppiVar9 = ppiStack_1f8;
        if (ppiStack_1f8 != (int **)0x0) {
          ppiStack_1f8 = (int **)0x0;
          if (lStack_1f0 != 0) {
            func_0x000107c2cdcc(lStack_1f0,ppiVar9);
          }
          ppiVar2 = ppiVar9 + 1;
          do {
            iVar6 = *(int *)ppiVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppiVar2,0x10);
            if (bVar5) {
              *(int *)ppiVar2 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(*ppiVar9 + 8))(ppiVar9);
          }
          if (ppiStack_1f8 != (int **)0x0) {
            ppiVar9 = ppiStack_1f8 + 1;
            do {
              iVar6 = *(int *)ppiVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppiVar9,0x10);
              if (bVar5) {
                *(int *)ppiVar9 = iVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 + -1 == 0) {
              (**(code **)(*ppiStack_1f8 + 8))();
            }
          }
        }
        if ((int)lVar8 != 0) {
          func_0x000107c2d00c(*(long *)(lVar12 + 0x80) + 0x68);
        }
        lVar8 = 1;
        if (param_2 != (int **)0x0) goto LAB_10b31a244;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
        return lVar8;
      }
    }
  } while( true );
}



/* Entry: 10b31a060; end: 10b31a39f;  */

undefined8 FUN_10b31a060(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  int *piStack_b8;
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
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar6 = (int)param_2 + 0x20;
  plStack_c0 = param_2;
  _pthread_mutex_trylock();
  if (iVar6 != 0) goto LAB_10b31a37c;
  if (param_2[0x11] != param_2[0x12]) goto LAB_10b31a0b8;
  do {
    if ((*(byte *)(param_2 + 0x14) & 1) != 0) goto LAB_10b31a0b8;
    lVar10 = *(long *)(param_1 + 0x50);
    if (param_2 != (long *)0x0) {
      plVar11 = param_2 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar9 = *(uint **)(lVar10 + 0x30);
    if ((*(byte *)((long)param_2 + 0x16) & 0x7f) == 2) {
      do {
        uVar3 = *puVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar3 + 2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar3 & 1) != 0) {
        iVar6 = (int)lVar10 + 0xa8;
        _pthread_mutex_trylock();
        if (iVar6 != 0) {
          func_0x00010b329e58(lVar10 + 0xa8);
        }
        _pthread_mutex_unlock(lVar10 + 0xa8);
      }
LAB_10b31a304:
      piVar2 = (int *)(lVar10 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar11 = param_2;
      if (param_2 != (long *)0x0) goto LAB_10b31a0c0;
    }
    else {
      if ((*puVar9 & 1) == 0) goto LAB_10b31a304;
      if (param_2 != (long *)0x0) {
        plVar11 = param_2 + 1;
        do {
          lVar10 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = (int)lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar10 == 1) {
          (**(code **)(*param_2 + 0x20))(param_2);
        }
        uVar7 = 0;
        goto LAB_10b31a23c;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return 0;
    }
    while( true ) {
      ___stack_chk_fail();
LAB_10b31a37c:
      func_0x00010b329e58(param_2 + 4);
      if (param_2[0x11] == param_2[0x12]) break;
LAB_10b31a0b8:
      lVar10 = 0;
      plVar11 = (long *)0x0;
LAB_10b31a0c0:
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      func_0x000107c2cdc8(uVar7,param_3,*(undefined1 *)((long)param_2 + 0x15));
      if ((int)uVar7 == 0) {
        if (plVar11 != (long *)0x0) {
          if (lVar10 != 0) {
            func_0x000107c2cdcc(lVar10,plVar11);
          }
          plVar1 = plVar11 + 1;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
LAB_10b31a238:
        if (param_2 != (long *)0x0) {
LAB_10b31a23c:
          _pthread_mutex_unlock(param_2 + 4);
LAB_10b31a244:
          plVar11 = param_2 + 1;
          do {
            iVar6 = (int)*plVar11 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*param_2 + 0x20))(param_2);
          }
        }
      }
      else {
        piStack_b8 = (int *)*param_3;
        *param_3 = 0;
        uStack_a8 = param_3[2];
        uStack_b0 = param_3[1];
        uStack_98 = param_3[4];
        uStack_a0 = param_3[3];
        uStack_78 = param_3[8];
        uStack_80 = param_3[7];
        uStack_68 = param_3[10];
        uStack_70 = param_3[9];
        uStack_60 = param_3[0xb];
        uStack_58 = (undefined5)param_3[0xc];
        uStack_53 = (undefined3)*(undefined8 *)((long)param_3 + 0x65);
        uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x65) >> 0x18);
        uStack_88 = param_3[6];
        uStack_90 = param_3[5];
        func_0x000107c2cdb8(&plStack_c0,&piStack_b8);
        if (piStack_b8 != (int *)0x0) {
          do {
            iVar6 = *piStack_b8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piStack_b8,0x10);
            if (bVar5) {
              *piStack_b8 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            (**(code **)(piStack_b8 + 4))();
          }
        }
        if (plVar11 == (long *)0x0) goto LAB_10b31a238;
        plStack_c0 = (long *)0x0;
        lVar8 = param_1;
        plStack_d8 = plVar11;
        lStack_d0 = lVar10;
        plStack_c8 = param_2;
        FUN_10b319640(param_1,&plStack_d8);
        if (plStack_c8 != (long *)0x0) {
          _pthread_mutex_unlock(plStack_c8 + 4);
        }
        plVar11 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plStack_d8 = (long *)0x0;
          if (lStack_d0 != 0) {
            func_0x000107c2cdcc(lStack_d0,plVar11);
          }
          plVar1 = plVar11 + 1;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          if (plStack_d8 != (long *)0x0) {
            plVar11 = plStack_d8 + 1;
            do {
              iVar6 = (int)*plVar11 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *(int *)plVar11 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plStack_d8 + 0x20))();
            }
          }
        }
        if ((int)lVar8 != 0) {
          func_0x000107c2d00c(*(long *)(param_1 + 0x80) + 0x68);
        }
        uVar7 = 1;
        if (param_2 != (long *)0x0) goto LAB_10b31a244;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return uVar7;
      }
    }
  } while( true );
}



/* Entry: 10b31a3a0; end: 10b31a473;  */

void FUN_10b31a3a0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *(code **)(param_1 + 0x20);
  plVar6 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    pcVar8 = *(code **)(*plVar6 + ((ulong)pcVar8 & 0xffffffff));
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  piStack_88 = (int *)*param_2;
  *param_2 = 0;
  uStack_78 = param_2[2];
  uStack_80 = param_2[1];
  uStack_68 = param_2[4];
  uStack_70 = param_2[3];
  uStack_48 = param_2[8];
  uStack_50 = param_2[7];
  uStack_38 = param_2[10];
  uStack_40 = param_2[9];
  uStack_30 = param_2[0xb];
  uStack_28 = (undefined5)param_2[0xc];
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
  uStack_58 = param_2[6];
  uStack_60 = param_2[5];
  (*pcVar8)(plVar6,uVar7,&piStack_88);
  piVar5 = piStack_88;
  if (piStack_88 != (int *)0x0) {
    do {
      iVar2 = *piStack_88;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
      if (bVar4) {
        *piStack_88 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piStack_88 + 4))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if (piVar5 == (int *)0x0) {
      return;
    }
    plVar6 = *(long **)(piVar5 + 0xe);
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
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b31a474; end: 10b31a4cb;  */

void FUN_10b31a474(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x38);
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b31a4cc; end: 10b31c4cf;  */

/* WARNING: Possible PIC construction at 0x00010b31a620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b31a624) */
/* WARNING: Removing unreachable block (ram,0x00010b31a658) */
/* WARNING: Removing unreachable block (ram,0x00010b31a678) */
/* WARNING: Removing unreachable block (ram,0x00010b31a684) */
/* WARNING: Removing unreachable block (ram,0x00010b31a75c) */
/* WARNING: Removing unreachable block (ram,0x00010b31a690) */
/* WARNING: Removing unreachable block (ram,0x00010b31a6e4) */
/* WARNING: Removing unreachable block (ram,0x00010b31a6f0) */
/* WARNING: Removing unreachable block (ram,0x00010b31a6f8) */
/* WARNING: Removing unreachable block (ram,0x00010b31a6fc) */
/* WARNING: Removing unreachable block (ram,0x00010b31a704) */
/* WARNING: Removing unreachable block (ram,0x00010b31a70c) */
/* WARNING: Removing unreachable block (ram,0x00010b31a710) */
/* WARNING: Removing unreachable block (ram,0x00010b31a720) */
/* WARNING: Removing unreachable block (ram,0x00010b31a728) */
/* WARNING: Removing unreachable block (ram,0x00010b31a72c) */
/* WARNING: Removing unreachable block (ram,0x00010b31a734) */
/* WARNING: Removing unreachable block (ram,0x00010b31a73c) */
/* WARNING: Removing unreachable block (ram,0x00010b31a740) */
/* WARNING: Removing unreachable block (ram,0x00010b31a74c) */
/* WARNING: Removing unreachable block (ram,0x00010b31a63c) */

long * FUN_10b31a4cc(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int *piStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((char)param_1[6] == '\x01') && (plVar6 = (long *)*param_1, plVar6 != (long *)param_1[1])) {
    do {
      param_1[(ulong)*(byte *)(plVar6 + 2) + 3] = param_1[(ulong)*(byte *)(plVar6 + 2) + 3] + -1;
      *(undefined8 *)(*plVar6 + 0x60) = 0xffffffffffffffff;
      plVar5 = (long *)*plVar6;
      lVar7 = plVar6[1];
      *plVar6 = 0;
      plVar6[1] = 0;
      func_0x000107c2cdb4(param_1,0);
      uStack_68 = 0xaaaaaaaaaaaaaaaa;
      uStack_70 = 0xaaaaaaaaaaaaaaaa;
      uStack_58 = 0xaaaaaaaaaaaaaaaa;
      uStack_60 = 0xaaaaaaaaaaaaaaaa;
      uStack_88 = 0xaaaaaaaaaaaaaaaa;
      uStack_90 = 0xaaaaaaaaaaaaaaaa;
      uStack_78 = 0xaaaaaaaaaaaaaaaa;
      uStack_80 = 0xaaaaaaaaaaaaaaaa;
      uStack_a8 = 0xaaaaaaaaaaaaaaaa;
      uStack_b0 = 0xaaaaaaaaaaaaaaaa;
      uStack_98 = 0xaaaaaaaaaaaaaaaa;
      uStack_a0 = 0xaaaaaaaaaaaaaaaa;
      uStack_b8 = 0xaaaaaaaaaaaaaaaa;
      piStack_c0 = (int *)0xaaaaaaaaaaaaaaaa;
      (**(code **)(*plVar5 + 0x40))(&piStack_c0,plVar5,0);
      piVar4 = piStack_c0;
      piStack_c0 = (int *)0x0;
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
          (**(code **)(piVar4 + 4))(piVar4);
        }
      }
      if (piStack_c0 != (int *)0x0) {
        do {
          iVar1 = *piStack_c0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_c0,0x10);
          if (bVar3) {
            *piStack_c0 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(piStack_c0 + 4))();
        }
      }
      if (plVar5 != (long *)0x0) {
        if (lVar7 != 0) {
          func_0x000107c2cdcc(lVar7,plVar5);
        }
        plVar6 = plVar5 + 1;
        do {
          iVar1 = (int)*plVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
      plVar6 = (long *)*param_1;
    } while (plVar6 != (long *)param_1[1]);
  }
  plVar6 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  if (plVar5 != plVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      if (*(long *)((long)plVar6 + lVar7) != 0) {
        *(undefined8 *)(*(long *)((long)plVar6 + lVar7) + 0x60) = 0xffffffffffffffff;
        plVar6 = (long *)*param_1;
        plVar5 = (long *)param_1[1];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar8 < (ulong)((long)plVar5 - (long)plVar6 >> 5));
  }
  if (plVar5 == plVar6) {
    param_1[1] = (long)plVar6;
    plVar5 = plVar6;
  }
  else {
    do {
      plVar10 = plVar5 + -4;
      plVar9 = (long *)*plVar10;
      if (plVar9 != (long *)0x0) {
        plVar5[-4] = 0;
        if (plVar5[-3] != 0) {
          func_0x000107c2cdcc(plVar5[-3],plVar9);
        }
        plVar5 = plVar9 + 1;
        do {
          iVar1 = (int)*plVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        plVar5 = (long *)*plVar10;
        if (plVar5 != (long *)0x0) {
          plVar9 = plVar5 + 1;
          do {
            iVar1 = (int)*plVar9 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 == 0) {
            (**(code **)(*plVar5 + 0x20))();
          }
        }
      }
      plVar5 = plVar10;
    } while (plVar10 != plVar6);
    param_1[1] = (long)plVar6;
    plVar5 = (long *)*param_1;
  }
  if (plVar5 == (long *)0x0) {
    return param_1;
  }
  plVar9 = plVar5;
  if (plVar6 != plVar5) {
    do {
      plVar10 = plVar6 + -4;
      plVar9 = (long *)*plVar10;
      if (plVar9 != (long *)0x0) {
        plVar6[-4] = 0;
        if (plVar6[-3] != 0) {
          func_0x000107c2cdcc(plVar6[-3],plVar9);
        }
        plVar6 = plVar9 + 1;
        do {
          iVar1 = (int)*plVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        plVar6 = (long *)*plVar10;
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 1;
          do {
            iVar1 = (int)*plVar9 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 == 0) {
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
      plVar6 = plVar10;
    } while (plVar10 != plVar5);
    plVar9 = (long *)*param_1;
  }
  param_1[1] = (long)plVar5;
  __ZdlPv(plVar9);
  return param_1;
}



/* Entry: 10b31c4d0; end: 10b31c857;  */

undefined8 * FUN_10b31c4d0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110cd5f00;
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    param_1[0x40] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x20c) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c838);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x41) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x41) = 0;
    }
    piVar6 = (int *)param_1[0x3f];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  func_0x000107c2d008(param_1 + 0x3e,0,1);
  *(undefined1 *)(param_1 + 0x3d) = 1;
  if (*(char *)(param_1 + 0x43) == '\x01') {
    if (param_1[0x45] != 0) {
      piVar6 = (int *)(param_1[0x45] + 8);
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x45] + 0x10) & 1) == 0) goto LAB_10b31c83c;
        func_0x000107c2d00c(param_1[0x45] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
    if ((*(byte *)(param_1 + 0x3d) & 1) == 0) goto LAB_10b31c83c;
  }
  uStack_38 = 0x7fffffffffffffff;
  func_0x000107c2d01c(param_1 + 0x3e,&uStack_38);
  if (*(char *)(param_1 + 0x43) == '\x01') {
    if (param_1[0x45] != 0) {
      piVar6 = (int *)(param_1[0x45] + 8);
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x45] + 0x10) & 1) == 0) goto LAB_10b31c83c;
        func_0x000107c2d00c(param_1[0x45] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    param_1[0x40] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x20c) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c844);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x41) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x41) = 0;
    }
    piVar6 = (int *)param_1[0x3f];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    param_1[0x37] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x1c4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c850);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    piVar6 = (int *)param_1[0x36];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  lVar7 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar7 != 0) {
    func_0x00010b329ab0();
    __ZdlPv();
  }
  lVar7 = param_1[0x2f];
  param_1[0x2f] = 0;
  if (lVar7 != 0) {
    func_0x00010b329ab0();
    __ZdlPv();
  }
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  plVar9 = (long *)param_1[0x23];
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)param_1[0x24];
    plVar8 = plVar9;
    if (plVar10 != plVar9) {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
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
      } while (plVar10 != plVar9);
      plVar8 = (long *)param_1[0x23];
    }
    param_1[0x24] = plVar9;
    __ZdlPv(plVar8);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  plVar9 = (long *)param_1[0x1a];
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *param_1 = &PTR_DAT_110cd5ea8;
  FUN_10b31a4cc(param_1 + 0xe);
  _pthread_mutex_destroy(param_1 + 5);
  if (param_1[4] != 0) {
    piVar6 = (int *)(param_1[4] + 8);
    do {
      iVar2 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      if ((*(byte *)(param_1[4] + 0x10) & 1) == 0) goto LAB_10b31c83c;
      func_0x000107c2d00c(param_1[4] + 0x18);
    }
  }
  if (param_1[2] != 0) {
    piVar6 = (int *)(param_1[2] + 8);
    do {
      iVar2 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      if ((*(byte *)(param_1[2] + 0x10) & 1) == 0) {
LAB_10b31c83c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31c840);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[2] + 0x18);
    }
  }
  return param_1;
}



/* Entry: 10b31c858; end: 10b31c85b;  */

undefined8 * FUN_10b31c858(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110cd5f00;
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    param_1[0x40] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x20c) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c838);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x41) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x41) = 0;
    }
    piVar6 = (int *)param_1[0x3f];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  func_0x000107c2d008(param_1 + 0x3e,0,1);
  *(undefined1 *)(param_1 + 0x3d) = 1;
  if (*(char *)(param_1 + 0x43) == '\x01') {
    if (param_1[0x45] != 0) {
      piVar6 = (int *)(param_1[0x45] + 8);
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x45] + 0x10) & 1) == 0) goto LAB_10b31c83c;
        func_0x000107c2d00c(param_1[0x45] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
    if ((*(byte *)(param_1 + 0x3d) & 1) == 0) goto LAB_10b31c83c;
  }
  uStack_38 = 0x7fffffffffffffff;
  func_0x000107c2d01c(param_1 + 0x3e,&uStack_38);
  if (*(char *)(param_1 + 0x43) == '\x01') {
    if (param_1[0x45] != 0) {
      piVar6 = (int *)(param_1[0x45] + 8);
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        if ((*(byte *)(param_1[0x45] + 0x10) & 1) == 0) goto LAB_10b31c83c;
        func_0x000107c2d00c(param_1[0x45] + 0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    param_1[0x40] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x20c) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c844);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x41) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x41) = 0;
    }
    piVar6 = (int *)param_1[0x3f];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    param_1[0x37] = &PTR_DAT_110cd6598;
    if (*(char *)((long)param_1 + 0x1c4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x10b31c850);
      (*pcVar5)();
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      func_0x000107c2cfec();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    piVar6 = (int *)param_1[0x36];
    if (piVar6 != (int *)0x0) {
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000107c2d020();
        __ZdlPv();
      }
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  lVar7 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar7 != 0) {
    func_0x00010b329ab0();
    __ZdlPv();
  }
  lVar7 = param_1[0x2f];
  param_1[0x2f] = 0;
  if (lVar7 != 0) {
    func_0x00010b329ab0();
    __ZdlPv();
  }
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  plVar9 = (long *)param_1[0x23];
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)param_1[0x24];
    plVar8 = plVar9;
    if (plVar10 != plVar9) {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
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
      } while (plVar10 != plVar9);
      plVar8 = (long *)param_1[0x23];
    }
    param_1[0x24] = plVar9;
    __ZdlPv(plVar8);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  plVar9 = (long *)param_1[0x1a];
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *param_1 = &PTR_DAT_110cd5ea8;
  FUN_10b31a4cc(param_1 + 0xe);
  _pthread_mutex_destroy(param_1 + 5);
  if (param_1[4] != 0) {
    piVar6 = (int *)(param_1[4] + 8);
    do {
      iVar2 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      if ((*(byte *)(param_1[4] + 0x10) & 1) == 0) goto LAB_10b31c83c;
      func_0x000107c2d00c(param_1[4] + 0x18);
    }
  }
  if (param_1[2] != 0) {
    piVar6 = (int *)(param_1[2] + 8);
    do {
      iVar2 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      if ((*(byte *)(param_1[2] + 0x10) & 1) == 0) {
LAB_10b31c83c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10b31c840);
        (*pcVar5)();
      }
      func_0x000107c2d00c(param_1[2] + 0x18);
    }
  }
  return param_1;
}


